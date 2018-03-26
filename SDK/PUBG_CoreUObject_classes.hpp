#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CoreUObject_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CoreUObject.Object
// 0x0028
class UObject
{
public:
	static FUObjectArray*                              GObjects;                                                 // 0x0000(0x0000)
	void*                                              Vtable;                                                   // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            ObjectFlags;                                              // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            InternalIndex;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UClass*                                      Class;                                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	FName                                              Name;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UObject*                                     Outer;                                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static __forceinline TUObjectArray& GetGlobalObjects()
	{
		return GObjects->ObjObjects;
	}

	std::string GetName() const;

	std::string GetFullName() const;

	template<typename T>
	static T* FindObject(uint32_t hash)
	{
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);
	
			if (object == nullptr)
			{
				continue;
			}
	
			if (fnv_hash_runtime(object->GetFullName().c_str()) == hash)
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	static UClass* FindClass(uint32_t hash)
	{
		return FindObject<UClass>(hash);
	}

	template<typename T>
	static T* GetObjectCasted(const int32_t index)
	{
		return static_cast<T*>(GetGlobalObjects().GetByIndex(index));
	}

	bool IsA(UClass* cmp) const;

	__forceinline bool IsPendingKill() const
	{
		return GetGlobalObjects().GetItemByIndex(InternalIndex)->IsPendingKill();
	}

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x551c5fcd);
		return ptr;
	}

	__forceinline void ProcessEvent(class UFunction* function, void* parms)
	{
		return GetVFunction<void(*)(UObject*, class UFunction*, void*)>(this, 62)(this, function, parms);
	}


	void ExecuteUbergraph(int EntryPoint);
};


// Class CoreUObject.Interface
// 0x0000 (0x0028 - 0x0028)
class UInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x14d2cc21);
		return ptr;
	}

};


// Class CoreUObject.GCObjectReferencer
// 0x0038 (0x0060 - 0x0028)
class UGCObjectReferencer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xe92e441c);
		return ptr;
	}

};


// Class CoreUObject.TextBuffer
// 0x0028 (0x0050 - 0x0028)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x99b8d5bf);
		return ptr;
	}

};


// Class CoreUObject.Field
// 0x0008 (0x0030 - 0x0028)
class UField : public UObject
{
public:
	class UField*                                      Next;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x0645bfec);
		return ptr;
	}

};


// Class CoreUObject.Struct
// 0x00A8 (0x00D8 - 0x0030)
class UStruct : public UField
{
public:
	class UStruct*                                     SuperField;                                               // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UField*                                      Children;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            PropertySize;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            MinAlignment;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      UnknownData0x0048[0x90];                                  // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xc3f5e3f3);
		return ptr;
	}

};


// Class CoreUObject.ScriptStruct
// 0x0010 (0x00E8 - 0x00D8)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xc78ff926);
		return ptr;
	}

};


// Class CoreUObject.Package
// 0x0130 (0x0158 - 0x0028)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[0x130];                                     // 0x0028(0x0130) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x04c99968);
		return ptr;
	}

};


// Class CoreUObject.Class
// 0x01D0 (0x02A8 - 0x00D8)
class UClass : public UStruct
{
public:
	unsigned char                                      UnknownData00[0x1D0];                                     // 0x00D8(0x01D0) MISSED OFFSET

	template<typename T>
	__forceinline T* CreateDefaultObject()
	{
		return static_cast<T*>(CreateDefaultObject());
	}

	template<typename T>
	__forceinline T* GetDefaultObject()
	{
		return static_cast<T*>(GetDefaultObject());
	}

	__forceinline UObject* GetDefaultObject()
	{
		auto* default_object = *reinterpret_cast<UObject**>(this + 0x100);
		if (!default_object) {
			default_object = CreateDefaultObject();
		}
		return default_object;
	}

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x0544e920);
		return ptr;
	}

	__forceinline UObject* CreateDefaultObject()
	{
		return GetVFunction<UObject*(*)(UClass*)>(this, 100)(this);
	}

};


// Class CoreUObject.Function
// 0x0038 (0x0110 - 0x00D8)
class UFunction : public UStruct
{
public:
	int32_t                                            FunctionFlags;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            RepOffset;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int8_t                                             NumParms;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            ParmsSize;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            ReturnValueOffset;                                        // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            RPCId;                                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            RPCResponseId;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   FirstPropertyToInit;                                      // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UFunction*                                   EventGraphFunction;                                       // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            EventGraphCallOffset;                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	uint8_t                                            EncryptedFunc[0x10];                                      // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd87b37d0);
		return ptr;
	}

};


// Class CoreUObject.DelegateFunction
// 0x0000 (0x0110 - 0x0110)
class UDelegateFunction : public UFunction
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb1cadc3d);
		return ptr;
	}

};


// Class CoreUObject.DynamicClass
// 0x0068 (0x0310 - 0x02A8)
class UDynamicClass : public UClass
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x02A8(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x560e8439);
		return ptr;
	}

};


// Class CoreUObject.PackageMap
// 0x00B8 (0x00E0 - 0x0028)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x30dac68a);
		return ptr;
	}

};


// Class CoreUObject.Enum
// 0x0030 (0x0060 - 0x0030)
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x1c809b3f);
		return ptr;
	}

};


// Class CoreUObject.Property
// 0x0060 (0x0090 - 0x0030)
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x0c1afe03);
		return ptr;
	}

};


// Class CoreUObject.EnumProperty
// 0x0010 (0x00A0 - 0x0090)
class UEnumProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf557e098);
		return ptr;
	}

};


// Class CoreUObject.LinkerPlaceholderClass
// 0x01A0 (0x0448 - 0x02A8)
class ULinkerPlaceholderClass : public UClass
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x02A8(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x7de63734);
		return ptr;
	}

};


// Class CoreUObject.LinkerPlaceholderExportObject
// 0x00B0 (0x00D8 - 0x0028)
class ULinkerPlaceholderExportObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB0];                                      // 0x0028(0x00B0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xaa57ae5b);
		return ptr;
	}

};


// Class CoreUObject.LinkerPlaceholderFunction
// 0x01A0 (0x02B0 - 0x0110)
class ULinkerPlaceholderFunction : public UFunction
{
public:
	unsigned char                                      UnknownData00[0x1A0];                                     // 0x0110(0x01A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x3228a994);
		return ptr;
	}

};


// Class CoreUObject.MetaData
// 0x00A0 (0x00C8 - 0x0028)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x55b40e07);
		return ptr;
	}

};


// Class CoreUObject.ObjectRedirector
// 0x0008 (0x0030 - 0x0028)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xe259cda2);
		return ptr;
	}

};


// Class CoreUObject.ArrayProperty
// 0x0000 (0x0090 - 0x0090)
class UArrayProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xe8991438);
		return ptr;
	}

};


// Class CoreUObject.ObjectPropertyBase
// 0x0000 (0x0090 - 0x0090)
class UObjectPropertyBase : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x3854dec9);
		return ptr;
	}

};


// Class CoreUObject.AssetObjectProperty
// 0x0000 (0x0090 - 0x0090)
class UAssetObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x203791aa);
		return ptr;
	}

};


// Class CoreUObject.AssetClassProperty
// 0x0010 (0x00A0 - 0x0090)
class UAssetClassProperty : public UAssetObjectProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x7e1f17eb);
		return ptr;
	}

};


// Class CoreUObject.BoolProperty
// 0x0000 (0x0090 - 0x0090)
class UBoolProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x7bf78a53);
		return ptr;
	}

};


// Class CoreUObject.NumericProperty
// 0x0000 (0x0090 - 0x0090)
class UNumericProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x1f3fd91e);
		return ptr;
	}

};


// Class CoreUObject.ByteProperty
// 0x0000 (0x0090 - 0x0090)
class UByteProperty : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x590ec965);
		return ptr;
	}

};


// Class CoreUObject.ObjectProperty
// 0x0000 (0x0090 - 0x0090)
class UObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x4190800a);
		return ptr;
	}

};


// Class CoreUObject.ClassProperty
// 0x0010 (0x00A0 - 0x0090)
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0090(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xfb16a74b);
		return ptr;
	}

};


// Class CoreUObject.DelegateProperty
// 0x0000 (0x0090 - 0x0090)
class UDelegateProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xdb09147a);
		return ptr;
	}

};


// Class CoreUObject.DoubleProperty
// 0x0000 (0x0090 - 0x0090)
class UDoubleProperty : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x895c2a48);
		return ptr;
	}

};


// Class CoreUObject.FloatProperty
// 0x0000 (0x0090 - 0x0090)
class UFloatProperty : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xe47dc385);
		return ptr;
	}

};


// Class CoreUObject.IntProperty
// 0x0000 (0x0090 - 0x0090)
class UIntProperty : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf259626c);
		return ptr;
	}

};


// Class CoreUObject.Int16Property
// 0x0000 (0x0090 - 0x0090)
class UInt16Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x3ebec13d);
		return ptr;
	}

};


// Class CoreUObject.Int64Property
// 0x0000 (0x0090 - 0x0090)
class UInt64Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xebfd67e6);
		return ptr;
	}

};


// Class CoreUObject.Int8Property
// 0x0000 (0x0090 - 0x0090)
class UInt8Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x0c10d59e);
		return ptr;
	}

};


// Class CoreUObject.InterfaceProperty
// 0x0000 (0x0090 - 0x0090)
class UInterfaceProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xeabd1ba6);
		return ptr;
	}

};


// Class CoreUObject.LazyObjectProperty
// 0x0000 (0x0090 - 0x0090)
class ULazyObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x00f17394);
		return ptr;
	}

};


// Class CoreUObject.MapProperty
// 0x0030 (0x00C0 - 0x0090)
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0090(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x2759b391);
		return ptr;
	}

};


// Class CoreUObject.MulticastDelegateProperty
// 0x0000 (0x0090 - 0x0090)
class UMulticastDelegateProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb04a31c4);
		return ptr;
	}

};


// Class CoreUObject.NameProperty
// 0x0000 (0x0090 - 0x0090)
class UNameProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xef1f1ef6);
		return ptr;
	}

};


// Class CoreUObject.SetProperty
// 0x0020 (0x00B0 - 0x0090)
class USetProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0090(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x693be2c3);
		return ptr;
	}

};


// Class CoreUObject.StrProperty
// 0x0000 (0x0090 - 0x0090)
class UStrProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xe9a15962);
		return ptr;
	}

};


// Class CoreUObject.StructProperty
// 0x0000 (0x0090 - 0x0090)
class UStructProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x83aefd54);
		return ptr;
	}

};


// Class CoreUObject.UInt16Property
// 0x0000 (0x0090 - 0x0090)
class UUInt16Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x37b82272);
		return ptr;
	}

};


// Class CoreUObject.UInt32Property
// 0x0000 (0x0090 - 0x0090)
class UUInt32Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x84ff656c);
		return ptr;
	}

};


// Class CoreUObject.UInt64Property
// 0x0000 (0x0090 - 0x0090)
class UUInt64Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x5f3dc9ad);
		return ptr;
	}

};


// Class CoreUObject.WeakObjectProperty
// 0x0000 (0x0090 - 0x0090)
class UWeakObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x2c13d322);
		return ptr;
	}

};


// Class CoreUObject.TextProperty
// 0x0000 (0x0090 - 0x0090)
class UTextProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x8198ed5a);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
