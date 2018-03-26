#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buggy_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buggy.Buggy_C
// 0x002C (0x09A0 - 0x0974)
class ABuggy_C : public AVehicleBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0974(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0978(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            Sphere1;                                                  // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            PassengerSeat;                                            // 0x0990(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            DriverSeat;                                               // 0x0998(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x4d1f828d);
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void ExecuteUbergraph_Buggy(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
