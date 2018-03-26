#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_M24_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Weapon_M24.ABP_Weapon_M24_C
// 0x0148 (0x0598 - 0x0450)
class UABP_Weapon_M24_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A562332049AB4E45C47AF48A2AC0BE52;      // 0x0458(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AA165C3845C3069134BAE8B723E31F51;      // 0x04A0(0x0060)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_CCE1F3934E593ED80F9E7C82F48A01E7;// 0x0500(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_98E187EB4D829BB12614ACA04480AD3D;      // 0x0538(0x0060)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x4b06c7a0);
		return ptr;
	}


	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void WeaponFireCycle_Event_1();
	void Reload2_Event_1();
	void BlueprintInitializeAnimation();
	void AnimNotify_ShellEject();
	void Reload1_Event_1();
	void CancelReload_Event_1();
	void ExecuteUbergraph_ABP_Weapon_M24(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
