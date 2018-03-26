#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_1912_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Weapon_1912.ABP_Weapon_1911_C
// 0x00F4 (0x0544 - 0x0450)
class UABP_Weapon_1911_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_2EF50D4243DAF4C2D298D29B5B91C750;      // 0x0458(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_2A7FCFED47CA720B2E2D1E9A199D1606;// 0x04A0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_18D59F0341F8E42F3DBB97B67AB4BB60;      // 0x04D8(0x0060)
	class ATslWeapon_Gun*                              ActorRef;                                                 // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentAmmo;                                              // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x97ce835f);
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void WeaponFire_Event_1();
	void ReleaseCatch();
	void ExecuteUbergraph_ABP_Weapon_1912(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
