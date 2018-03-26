#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Dacia_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dacia.Dacia_C
// 0x004C (0x09C0 - 0x0974)
class ADacia_C : public AVehicleBase_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0974(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0978(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            Sphere3;                                                  // 0x0980(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            PassengerBRSeat;                                          // 0x0988(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere2;                                                  // 0x0990(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            PassengerBLSeat;                                          // 0x0998(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere1;                                                  // 0x09A0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            PassengerFRSeat;                                          // 0x09A8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            Sphere;                                                   // 0x09B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            DriverSeat;                                               // 0x09B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xde0ee0b5);
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Dacia(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
