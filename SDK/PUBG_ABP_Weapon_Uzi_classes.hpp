#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_Uzi_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Weapon_Uzi.ABP_Weapon_Uzi_C
// 0x0148 (0x0598 - 0x0450)
class UABP_Weapon_Uzi_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_051D4DE440744D1F6DE27C9A096D650A;      // 0x0458(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_7C976D6B4D5331BE8A12FC8C0221169D;// 0x04A0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AE8C42D84FFCF7F0BA102C87ED90CCFC;      // 0x04D8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B45599B64ACC8A2650AEF6A3DDC38AB4;      // 0x0538(0x0060)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x423e860e);
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void WeaponFire_Event_1();
	void Reload1_Event_1();
	void Reload2_Event_1();
	void CancelReload_Event_1();
	void FireSelect_Event();
	void ExecuteUbergraph_ABP_Weapon_Uzi(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
