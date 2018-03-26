#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_M9_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Weapon_M9.ABP_Weapon_M9_C
// 0x00F4 (0x0544 - 0x0450)
class UABP_Weapon_M9_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_56C9FADD49B04FBCDE6CD984E2A5A256;      // 0x0458(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_9D5757A047E04957841926BC06232689;      // 0x04A0(0x0060)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_40CDC14245411EC2522D6BA56EC333BF;// 0x0500(0x0038)
	class ATslWeapon_Gun*                              ActorRef;                                                 // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentAmmo;                                              // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xebc8fb0c);
		return ptr;
	}


	void SlideReleaseFunc();
	void Handle_SlideRelease();
	void Handle_Fire();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void WeaponFire_Event_1();
	void Reload2_Event_1();
	void ExecuteUbergraph_ABP_Weapon_M9(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
