#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_Win94_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Weapon_Win94.ABP_Weapon_Win94_C
// 0x01A9 (0x05F9 - 0x0450)
class UABP_Weapon_Win94_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_82B9648E48C03F180737198CB64D035F;      // 0x0458(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_3576F82043771B3171860BA6214C549D;// 0x04A0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2E82E6224046EF84C45DDBBE7B5FE7C3;      // 0x04D8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7951030246493FAC0791D7BEC0CB1C10;      // 0x0538(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_07B84CD240D71F4BF8C3BCBF14AA2880;      // 0x0598(0x0060)
	bool                                               bShellInChamber;                                          // 0x05F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x2a2a5278);
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void WeaponFire_Event_1();
	void WeaponFireCycle_Event_1();
	void ReloadByOneStart_Event_1(int AmmoToReload);
	void ReloadByOneSingle_Event_1();
	void ReloadByOneEnd_Event_1();
	void CancelReload_Event_1();
	void AnimNotify_ShellEject();
	void ExecuteUbergraph_ABP_Weapon_Win94(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
