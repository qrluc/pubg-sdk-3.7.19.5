#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_AUG_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Weapon_AUG.ABP_Weapon_AUG_C
// 0x0148 (0x0598 - 0x0450)
class UABP_Weapon_AUG_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_AE6DE5864B6C530338494E9625DEDC11;      // 0x0458(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_C17C293749D4D9E41369E2B18C873BCF;// 0x04A0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_530C1399466D8C0C6616BEA3B188A4AE;      // 0x04D8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F88D94BE4B3077CC287A6186508A646A;      // 0x0538(0x0060)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x09447a78);
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void WeaponFire_Event_1();
	void Reload1_Event_1();
	void Reload2_Event_1();
	void CancelReload_Event_1();
	void ExecuteUbergraph_ABP_Weapon_AUG(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
