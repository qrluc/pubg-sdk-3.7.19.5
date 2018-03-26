#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_AWM_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Weapon_AWM.ABP_Weapon_AWM_C
// 0x0148 (0x0598 - 0x0450)
class UABP_Weapon_AWM_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_DA84770D436DDB504BF3E891A1059B6E;      // 0x0458(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_E2355FBD4321F4BAE1FA299A01A71A7A;// 0x04A0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DAC6FD464933B2FB85CD9AB9D62E4291;      // 0x04D8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_04E0B42049BC25E811C0AFABC6E199F1;      // 0x0538(0x0060)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xe0767b08);
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void WeaponFireCycle_Event_1();
	void Reload1_Event_1();
	void AnimNotify_ShellEject();
	void Reload2_Event_1();
	void CancelReload_Event_1();
	void ExecuteUbergraph_ABP_Weapon_AWM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
