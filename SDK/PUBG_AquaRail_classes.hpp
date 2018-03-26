#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AquaRail_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AquaRail.AquaRail_C
// 0x002C (0x0568 - 0x053C)
class AAquaRail_C : public ABoatBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x053C(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0540(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            Sphere1;                                                  // 0x0548(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Passenger;                                                // 0x0550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x0558(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            DriverSeat;                                               // 0x0560(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa1dc49f5);
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_0_UTslVehicleSeatComponentOnRide__DelegateSignature(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat);
	void BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_1_UTslVehicleSeatComponentOnLeave__DelegateSignature(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat);
	void EventFuelConsumption();
	void ExecuteUbergraph_AquaRail(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
