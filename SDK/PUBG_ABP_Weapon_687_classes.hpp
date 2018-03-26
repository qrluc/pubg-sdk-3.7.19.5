#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_687_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Weapon_687.ABP_Weapon_686_C
// 0x00E8 (0x0538 - 0x0450)
class UABP_Weapon_686_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A47DFADE4A18AFF427E943B541A3A83F;      // 0x0458(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_C54C110B4CDC187CDA087FBEF65AB3DD;// 0x04A0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EF6C6E9C497D8198E87F6DB12EA90B42;      // 0x04D8(0x0060)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd809ab21);
		return ptr;
	}


	void Handle_Reloads();
	void BlueprintInitializeAnimation();
	void Reload1_Event_1();
	void Reload2_Event_1();
	void CancelReload_Event_1();
	void ExecuteUbergraph_ABP_Weapon_687(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
