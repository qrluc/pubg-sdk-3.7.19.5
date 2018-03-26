#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_VehicleSeatBase_Moto_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VehicleSeatBase_Moto.VehicleSeatBase_Moto_C
// 0x0024 (0x0464 - 0x0440)
class AVehicleSeatBase_Moto_C : public ATslMotoSeatActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (Transient, DuplicateTransient)
	class USphereComponent*                            VehicleSeatInteractionCollision;                          // 0x0448(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UInteractionComponent*                       Interaction;                                              // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              LastInteractionTime;                                      // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x64e074bd);
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__Interaction_K2Node_ComponentBoundEvent_63_ComponentInteractBySignature__DelegateSignature(class ATslCharacter* OtherCharacter);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_VehicleSeatBase_Moto(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
