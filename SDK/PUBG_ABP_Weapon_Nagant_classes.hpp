#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_Nagant_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Weapon_Nagant.ABP_Weapon_Nagant_C
// 0x0148 (0x0598 - 0x0450)
class UABP_Weapon_Nagant_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_118E696B4DD1317C7E383D883432820A;      // 0x0458(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_64935F074AD50B9C861D4CBCCF86CCE7;// 0x04A0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7F79055E46DA701D10C0279691B51F20;      // 0x04D8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B2EEF65146703AB8EC19F39FB0ECDA57;      // 0x0538(0x0060)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xde1580fc);
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void ReloadByOneStart_Event_1(int AmmoToReload);
	void ReloadByOneSingle_Event_1();
	void ReloadByOneEnd_Event_1();
	void WeaponFire_Event_1();
	void AnimNotify_ShellEject();
	void CancelReload_Event_1();
	void ExecuteUbergraph_ABP_Weapon_Nagant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
