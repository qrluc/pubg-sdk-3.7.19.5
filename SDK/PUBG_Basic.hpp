#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include <unordered_set>
#include <string>
#include <emmintrin.h>

namespace PUBG
{
template<typename Fn>
__forceinline Fn GetVFunction(const void *instance, std::size_t index)
{
	auto vtable = *reinterpret_cast<const void***>(const_cast<void*>(instance));
	return reinterpret_cast<Fn>(vtable[index]);
}

// Credits to namazso <3
static unsigned fnv_hash_runtime(const char* str) {
	static constexpr auto k_fnv_prime = 16777619u;
	static constexpr auto k_offset_basis = 2166136261u;

	auto hash = k_offset_basis;
	do {
		hash ^= *str++;
		hash *= k_fnv_prime;
	} while (*(str - 1) != 0);

	return hash;
}

class UObject;

class FUObjectItem
{
public:
	UObject* Object;
	int32_t Flags;
	int32_t ClusterIndex;
	int32_t SerialNumber;

	enum class ObjectFlags : int32_t
	{
		None = 0,
		Native = 1 << 25,
		Async = 1 << 26,
		AsyncLoading = 1 << 27,
		Unreachable = 1 << 28,
		PendingKill = 1 << 29,
		RootSet = 1 << 30,
		NoStrongReference = 1 << 31
	};

	__forceinline bool IsUnreachable() const
	{
		return !!(Flags & static_cast<std::underlying_type_t<ObjectFlags>>(ObjectFlags::Unreachable));
	}

	__forceinline bool IsPendingKill() const
	{
		return !!(Flags & static_cast<std::underlying_type_t<ObjectFlags>>(ObjectFlags::PendingKill));
	}
};

class TUObjectArray
{
public:
	__forceinline int32_t Num() const
	{
		return NumElements;
	}

	__forceinline UObject* GetByIndex(int32_t index) const
	{
		return Objects[index].Object;
	}

	__forceinline FUObjectItem* GetItemByIndex(int32_t index) const
	{
		if (index < NumElements)
		{
			return &Objects[index];
		}
		return nullptr;
	}

private:
	FUObjectItem* Objects;
	int32_t MaxElements;
	int32_t NumElements;
};

class FUObjectArray
{
public:
	int32_t ObjFirstGCIndex;
	int32_t ObjLastNonGCIndex;
	int32_t MaxObjectsNotConsideredByGC;
	int32_t OpenForDisregardForGC;
	TUObjectArray ObjObjects;
};

template<class T>
struct TArray
{
	friend struct FString;

public:
	__forceinline TArray()
		: Data(nullptr)
		, Count(0)
		, Max(0) {
	}

	__forceinline TArray(T* data, int32_t number)
		: Data(data)
		, Count(number)
		, Max(number) {
	}

	__forceinline T* GetData()
	{
		return Data;
	}

	__forceinline T* GetData() const
	{
		return const_cast<T*>(Data);
	}

	__forceinline int Num() const
	{
		return Count;
	};

	__forceinline T& operator[](int i)
	{
		return Data[i];
	};

	__forceinline const T& operator[](int i) const
	{
		return Data[i];
	};

	__forceinline bool IsValidIndex(int i) const
	{
		return i < Num();
	}

	__forceinline T* begin()
	{
		return &Data[0];
	}

	__forceinline T* end()
	{
		return &Data[Count];
	}

public:
	T* Data;
	int32_t Count;
	int32_t Max;
};

#define ENCRYPTED 1

#if defined(ENCRYPTED) && ENCRYPTED == 1

union EncryptedData
{
	std::uint64_t u64[2];
};

class FNameEntry
{
public:
	__forceinline const char* GetAnsiName() const
	{
		return AnsiName;
	}

	__forceinline const wchar_t* GetWideName() const
	{
		return WideName;
	}

private:
	EncryptedData Index;
	FNameEntry* HashNext;
	union
	{
		char AnsiName[1024];
		wchar_t WideName[1024];
	};
};

template<typename ElementType, int32_t MaxTotalElements, int32_t ElementsPerChunk>
class TStaticIndirectArrayThreadSafeRead
{
public:
	__forceinline size_t Num() const
	{
		return NumElements;
	}

	__forceinline bool IsValidIndex(int32_t index) const
	{
		return index < Num() && index >= 0;
	}

	__forceinline ElementType const* const& operator[](int32_t index) const
	{
		return *GetItemPtr(index);
	}

private:
	__forceinline ElementType const* const* GetItemPtr(int32_t Index) const
	{
		int32_t ChunkIndex = Index / ElementsPerChunk;
		int32_t WithinChunkIndex = Index % ElementsPerChunk;
		ElementType** Chunk = Chunks[ChunkIndex];
		return Chunk + WithinChunkIndex;
	}

public:
	ElementType*** Chunks;
	int32_t NumElements;
	int32_t NumChunks;
};

#else

class FNameEntry
{
public:
	static constexpr const auto kNameWideMask = 0x1;
	static constexpr const auto kNameIndexShift = 1;

	int32_t Index;
	char UnknownData00[0x04];
	FNameEntry* HashNext;
	union
	{
		char AnsiName[1024];
		wchar_t WideName[1024];
	};

	__forceinline const int32_t GetIndex() const
	{
		return Index >> kNameIndexShift;
	}

	__forceinline bool IsWide() const
	{
		return Index & kNameWideMask;
	}

	__forceinline const char* GetAnsiName() const
	{
		return AnsiName;
	}

	__forceinline const wchar_t* GetWideName() const
	{
		return WideName;
	}
};

template<typename ElementType, int32_t MaxTotalElements, int32_t ElementsPerChunk>
class TStaticIndirectArrayThreadSafeRead
{
public:
	__forceinline size_t Num() const
	{
		return NumElements;
	}

	__forceinline bool IsValidIndex(int32_t index) const
	{
		return index < Num() && index >= 0;
	}

	__forceinline ElementType const* const& operator[](int32_t index) const
	{
		return *GetItemPtr(index);
	}

private:
	__forceinline ElementType const* const* GetItemPtr(int32_t Index) const
	{
		int32_t ChunkIndex = Index / ElementsPerChunk;
		int32_t WithinChunkIndex = Index % ElementsPerChunk;
		ElementType** Chunk = Chunks[ChunkIndex];
		return Chunk + WithinChunkIndex;
	}

	enum
	{
		ChunkTableSize = (MaxTotalElements + ElementsPerChunk - 1) / ElementsPerChunk
	};

	ElementType** Chunks[ChunkTableSize];
	int32_t NumElements;
	int32_t NumChunks;
};
#endif

using TNameEntryArray = TStaticIndirectArrayThreadSafeRead<FNameEntry, 2 * 1024 * 1024, 16384>;

struct FName
{
	union
	{
		struct
		{
			int32_t ComparisonIndex;
			int32_t Number;
		};

		uint64_t CompositeComparisonValue;
	};

	__forceinline FName()
		: ComparisonIndex(0),
			Number(0)
	{
	};

	__forceinline FName(int32_t i)
		: ComparisonIndex(i),
			Number(0)
	{
	};

	FName(const char* nameToFind)
		: ComparisonIndex(0),
			Number(0)
	{
		static std::unordered_set<int> cache;

		for (auto i : cache)
		{
			if (!std::strcmp(GetGlobalNames()[i]->GetAnsiName(), nameToFind))
			{
				ComparisonIndex = i;
				
				return;
			}
		}

		for (auto i = 0; i < GetGlobalNames().Num(); ++i)
		{
			if (GetGlobalNames()[i] != nullptr)
			{
				if (!std::strcmp(GetGlobalNames()[i]->GetAnsiName(), nameToFind))
				{
					cache.insert(i);

					ComparisonIndex = i;

					return;
				}
			}
		}
	};

	static TNameEntryArray *GNames;
	static __forceinline TNameEntryArray& GetGlobalNames()
	{
		return *GNames;
	};

	__forceinline const char* GetName() const
	{
		return GetGlobalNames()[ComparisonIndex]->GetAnsiName();
	};

	__forceinline bool operator==(const FName &other) const
	{
		return ComparisonIndex == other.ComparisonIndex;
	};
};

struct FString : public TArray<wchar_t>
{
	__forceinline FString()
	{
	};

	FString(const wchar_t* other)
	{
		Max = Count = *other ? (int32_t)std::wcslen(other) + 1 : 0;

		if (Count)
		{
			Data = const_cast<wchar_t*>(other);
		}
	};

	__forceinline bool IsValid() const
	{
		return Data != nullptr;
	}

	__forceinline const wchar_t* c_str() const
	{
		return Data;
	}

	std::string ToString() const
	{
		auto length = std::wcslen(Data);

		std::string str(length, '\0');

		std::use_facet<std::ctype<wchar_t>>(std::locale()).narrow(Data, Data + length, '?', &str[0]);

		return str;
	}
};

template<class TEnum>
class TEnumAsByte
{
public:
	__forceinline TEnumAsByte()
	{
	}

	__forceinline TEnumAsByte(TEnum _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit __forceinline TEnumAsByte(int32_t _value)
		: value(static_cast<uint8_t>(_value))
	{
	}

	explicit __forceinline TEnumAsByte(uint8_t _value)
		: value(_value)
	{
	}

	__forceinline operator TEnum() const
	{
		return (TEnum)value;
	}

	__forceinline TEnum GetValue() const
	{
		return (TEnum)value;
	}

private:
	uint8_t value;
};

class FScriptInterface
{
private:
	UObject* ObjectPointer;
	void* InterfacePointer;

public:
	__forceinline UObject* GetObject() const
	{
		return ObjectPointer;
	}

	__forceinline UObject*& GetObjectRef()
	{
		return ObjectPointer;
	}

	__forceinline void* GetInterface() const
	{
		return ObjectPointer != nullptr ? InterfacePointer : nullptr;
	}
};

template<class InterfaceType>
class TScriptInterface : public FScriptInterface
{
public:
	__forceinline InterfaceType* operator->() const
	{
		return (InterfaceType*)GetInterface();
	}

	__forceinline InterfaceType& operator*() const
	{
		return *((InterfaceType*)GetInterface());
	}

	__forceinline operator bool() const
	{
		return GetInterface() != nullptr;
	}
};

struct FTextData
{
	unsigned char UnknownData00[0x28];
	wchar_t* Name;
	uint32_t Length;
};

struct FReferenceControllerBase
{
	void* VTable;
	std::int32_t SharedReferenceCount;
	std::int32_t WeakReferenceCount;
};

struct FText
{
	struct
	{
		FTextData* Object;
		FReferenceControllerBase* ReferenceController;
	} TextData;
	std::uint32_t Flags;

	__forceinline const wchar_t* Get() const
	{
		if (!TextData.Object)
			return nullptr;

		return TextData.Object->Name;
	}

	__forceinline size_t Length() const
	{
		if (!TextData.Object)
			return 0;

		return TextData.Object->Length - 1;
	}
};

struct FScriptDelegate
{
	char UnknownData[0x10];
};

struct FScriptMulticastDelegate
{
	char UnknownData[0x10];
};

template<typename Key, typename Value>
class TMap
{
	char UnknownData[0x50];
};

struct FWeakObjectPtr
{
public:
	__forceinline bool SerialNumbersMatch(FUObjectItem* ObjectItem) const
	{
		return ObjectItem->SerialNumber == ObjectSerialNumber;
	}

	bool IsValid() const;

	UObject* Get() const;

	int32_t ObjectIndex;
	int32_t ObjectSerialNumber;
};

template<class T, class TWeakObjectPtrBase = FWeakObjectPtr>
struct TWeakObjectPtr : private TWeakObjectPtrBase
{
public:
	__forceinline T* Get() const
	{
		return (T*)TWeakObjectPtrBase::Get();
	}

	__forceinline T& operator*() const
	{
		return *Get();
	}

	__forceinline T* operator->() const
	{
		return Get();
	}

	__forceinline bool IsValid() const
	{
		return TWeakObjectPtrBase::IsValid();
	}
};

template<class T, class TBASE>
class TAutoPointer : public TBASE
{
public:
	__forceinline operator T*() const
	{
		return TBASE::Get();
	}

	__forceinline operator const T*() const
	{
		return (const T*)TBASE::Get();
	}

	explicit __forceinline operator bool() const
	{
		return TBASE::Get() != nullptr;
	}
};

template<class T>
class TAutoWeakObjectPtr : public TAutoPointer<T, TWeakObjectPtr<T>>
{
public:
};

template<typename TObjectID>
class TPersistentObjectPtr
{
public:
	FWeakObjectPtr WeakPtr;
	int32_t TagAtLastTest;
	TObjectID ObjectID;
};

struct FStringAssetReference_
{
	struct FString AssetLongPathname;
};

class FAssetPtr : public TPersistentObjectPtr<FStringAssetReference_>
{

};

template<typename ObjectType>
class TAssetPtr : public FAssetPtr
{

};

struct FSoftObjectPath
{
	FName AssetPathName;
	FString SubPathString;
};

class FSoftObjectPtr : public TPersistentObjectPtr<FSoftObjectPath>
{

};

template<typename ObjectType>
class TSoftObjectPtr : FSoftObjectPtr
{

};

struct FUniqueObjectGuid_
{
	char UnknownData[0x10];
};

class FLazyObjectPtr : public TPersistentObjectPtr<FUniqueObjectGuid_>
{

};

template<typename ObjectType>
class TLazyObjectPtr : FLazyObjectPtr
{

};


#undef  PI
#define PI 					(3.1415926535897932f)
#define SMALL_NUMBER		(1.e-8f)
#define KINDA_SMALL_NUMBER	(1.e-4f)
#define BIG_NUMBER			(3.4e+38f)
#define EULERS_NUMBER       (2.71828182845904523536f)

// Copied from float.h
#define MAX_FLT 3.402823466e+38F

// Aux constants.
#define INV_PI			(0.31830988618f)
#define HALF_PI			(1.57079632679f)

// Magic numbers for numerical precision.
#define DELTA			(0.00001f)

/**
 * Lengths of normalized vectors (These are half their maximum values
 * to assure that dot products with normalized vectors don't overflow).
 */
#define FLOAT_NORMAL_THRESH				(0.0001f)

struct FMath
{
	static constexpr __forceinline int32_t TruncToInt(float F)
	{
		return (int32_t)F;
	}

	static constexpr __forceinline float TruncToFloat(float F)
	{
		return (float)TruncToInt(F);
	}

	static __forceinline float InvSqrt(float F)
	{
		const __m128 fOneHalf = _mm_set_ss(0.5f);
		__m128 Y0, X0, X1, X2, FOver2;
		float temp;

		Y0 = _mm_set_ss(F);
		X0 = _mm_rsqrt_ss(Y0);	// 1/sqrt estimate (12 bits)
		FOver2 = _mm_mul_ss(Y0, fOneHalf);

		// 1st Newton-Raphson iteration
		X1 = _mm_mul_ss(X0, X0);
		X1 = _mm_sub_ss(fOneHalf, _mm_mul_ss(FOver2, X1));
		X1 = _mm_add_ss(X0, _mm_mul_ss(X0, X1));

		// 2nd Newton-Raphson iteration
		X2 = _mm_mul_ss(X1, X1);
		X2 = _mm_sub_ss(fOneHalf, _mm_mul_ss(FOver2, X2));
		X2 = _mm_add_ss(X1, _mm_mul_ss(X1, X2));

		_mm_store_ss(&temp, X2);
		return temp;
	}

	static __forceinline float Fmod(float X, float Y)
	{
		if (fabsf(Y) <= 1.e-8f)
		{
			return 0.f;
		}
		const float Quotient = TruncToFloat(X / Y);
		float IntPortion = Y * Quotient;

		// Rounding and imprecision could cause IntPortion to exceed X and cause the result to be outside the expected range.
		// For example Fmod(55.8, 9.3) would result in a very small negative value!
		if (fabsf(IntPortion) > fabsf(X))
		{
			IntPortion = X;
		}

		const float Result = X - IntPortion;
		return Result;
	}

	static __forceinline float Sin( float Value ) { return sinf(Value); }
	static __forceinline float Asin( float Value ) { return asinf( (Value<-1.f) ? -1.f : ((Value<1.f) ? Value : 1.f) ); }
	static __forceinline float Sinh(float Value) { return sinhf(Value); }
	static __forceinline float Cos( float Value ) { return cosf(Value); }
	static __forceinline float Acos( float Value ) { return acosf( (Value<-1.f) ? -1.f : ((Value<1.f) ? Value : 1.f) ); }
	static __forceinline float Tan( float Value ) { return tanf(Value); }
	static __forceinline float Atan( float Value ) { return atanf(Value); }
	static float Atan2( float Y, float X );
	static __forceinline float Sqrt( float Value ) { return sqrtf(Value); }
	static __forceinline float Pow( float A, float B ) { return powf(A,B); }

	static __forceinline bool IsNearlyEqual(float A, float B, float ErrorTolerance = SMALL_NUMBER)
	{
		return Abs<float>( A - B ) <= ErrorTolerance;
	}

	static __forceinline bool IsNearlyEqual(double A, double B, double ErrorTolerance = SMALL_NUMBER)
	{
		return Abs<double>( A - B ) <= ErrorTolerance;
	}

	static __forceinline bool IsNearlyZero(float Value, float ErrorTolerance = SMALL_NUMBER)
	{
		return Abs<float>( Value ) <= ErrorTolerance;
	}

	static __forceinline bool IsNearlyZero(double Value, double ErrorTolerance = SMALL_NUMBER)
	{
		return Abs<double>( Value ) <= ErrorTolerance;
	}

	template< class T > 
	static constexpr __forceinline T Square( const T A )
	{
		return A*A;
	}

	template< class T > 
	static constexpr __forceinline T Clamp( const T X, const T Min, const T Max )
	{
		return X<Min ? Min : X<Max ? X : Max;
	}

	template< class T > 
	static constexpr __forceinline T Abs( const T A )
	{
		return (A>=(T)0) ? A : -A;
	}

	template<>
	static __forceinline float Abs( const float A )
	{
		return fabsf( A );
	}

#define FASTASIN_HALF_PI (1.5707963050f)
	static __forceinline float FastAsin(float Value)
	{
		// Clamp input to [-1,1].
		bool nonnegative = (Value >= 0.0f);
		float x = FMath::Abs(Value);
		float omx = 1.0f - x;
		if (omx < 0.0f)
		{
			omx = 0.0f;
		}
		float root = FMath::Sqrt(omx);
		// 7-degree minimax approximation
		float result = ((((((-0.0012624911f * x + 0.0066700901f) * x - 0.0170881256f) * x + 0.0308918810f) * x - 0.0501743046f) * x + 0.0889789874f) * x - 0.2145988016f) * x + FASTASIN_HALF_PI;
		result *= root;  // acos(|x|)
		// acos(x) = pi - acos(-x) when x < 0, asin(x) = pi/2 - acos(x)
		return (nonnegative ? FASTASIN_HALF_PI - result : result - FASTASIN_HALF_PI);
	}
#undef FASTASIN_HALF_PI

	static __forceinline void SinCos( float* ScalarSin, float* ScalarCos, float  Value )
	{
		// Map Value to y in [-pi,pi], x = 2*pi*quotient + remainder.
		float quotient = (INV_PI*0.5f)*Value;
		if (Value >= 0.0f)
		{
			quotient = (float)((int)(quotient + 0.5f));
		}
		else
		{
			quotient = (float)((int)(quotient - 0.5f));
		}
		float y = Value - (2.0f*PI)*quotient;

		// Map y to [-pi/2,pi/2] with sin(y) = sin(Value).
		float sign;
		if (y > HALF_PI)
		{
			y = PI - y;
			sign = -1.0f;
		}
		else if (y < -HALF_PI)
		{
			y = -PI - y;
			sign = -1.0f;
		}
		else
		{
			sign = +1.0f;
		}

		float y2 = y * y;

		// 11-degree minimax approximation
		*ScalarSin = ( ( ( ( (-2.3889859e-08f * y2 + 2.7525562e-06f) * y2 - 0.00019840874f ) * y2 + 0.0083333310f ) * y2 - 0.16666667f ) * y2 + 1.0f ) * y;

		// 10-degree minimax approximation
		float p = ( ( ( ( -2.6051615e-07f * y2 + 2.4760495e-05f ) * y2 - 0.0013888378f ) * y2 + 0.041666638f ) * y2 - 0.5f ) * y2 + 1.0f;
		*ScalarCos = sign*p;
	}

	template<class T>
	static __forceinline auto RadiansToDegrees(T const& RadVal) -> decltype(RadVal * (180.f / PI))
	{
		return RadVal * (180.f / PI);
	}

	template<class T>
	static __forceinline auto DegreesToRadians(T const& DegVal) -> decltype(DegVal * (PI / 180.f))
	{
		return DegVal * (PI / 180.f);
	}

	template< class T, class U >
	static __forceinline T Lerp(const T& A, const T& B, const U& Alpha)
	{
		return (T)(A + Alpha * (B - A));
	}
};





typedef __m128	VectorRegister;
typedef __m128i VectorRegisterInt;
typedef __m128d VectorRegisterDouble;

#define VectorLoadAligned( Ptr )		_mm_load_ps( (float*)(Ptr) )
#define VectorCompareEQ( Vec1, Vec2 )			_mm_cmpeq_ps( Vec1, Vec2 )
#define VectorCompareNE( Vec1, Vec2 )			_mm_cmpneq_ps( Vec1, Vec2 )
#define VectorMaskBits( VecMask )			_mm_movemask_ps( VecMask )



}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
