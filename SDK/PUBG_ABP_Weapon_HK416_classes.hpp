#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_HK416_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Weapon_HK416.ABP_Weapon_HK416_C
// 0x01A8 (0x05F8 - 0x0450)
class UABP_Weapon_HK416_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_0D1F0558453F079CC6BB0298BABED874;      // 0x0458(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_456D5618470478F75380C497E73636AF;// 0x04A0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_57145B474E8AD73A19B236B868A9AFAA;      // 0x04D8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_E3F96AF34B67CA1B27A0BAA573C598AC;      // 0x0538(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_02A6DA194BCCFBC1661D11B82CFCEA73;      // 0x0598(0x0060)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x3b2fd9e2);
		return ptr;
	}


	void FireSelect_Event();
	void Reload1_Event();
	void WeaponFire_Event();
	void BlueprintInitializeAnimation();
	void Reload2_Event();
	void CancelReload_Event_1();
	void CustomEvent();
	void ExecuteUbergraph_ABP_Weapon_HK416(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
