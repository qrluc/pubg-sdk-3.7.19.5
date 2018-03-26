#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_Glock18_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Weapon_Glock18.ABP_Weapon_Glock18_C
// 0x0154 (0x05A4 - 0x0450)
class UABP_Weapon_Glock18_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B29CC6C845D4665FCBD2358A11CC8C0F;      // 0x0458(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_CF0013C642186ADF940B94B85CFDCC4B;// 0x04A0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_65C61014433D6E1673D9DDAAFF2ACEA3;      // 0x04D8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_467A635F49F9A3D4D29598885FE57EA1;      // 0x0538(0x0060)
	class ATslWeapon_Gun*                              ActorRef;                                                 // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentAmmo;                                              // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa56b9628);
		return ptr;
	}


	void Handle_FireSelector();
	void Handle_Fire();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void WeaponFire_Event_1();
	void Reload2_Event_1();
	void BlueprintInitializeAnimation();
	void FireSelect_Event();
	void SlideRelease();
	void ExecuteUbergraph_ABP_Weapon_Glock18(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
