#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Mini14_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Mini14.ABP_Mini14_C
// 0x0148 (0x0598 - 0x0450)
class UABP_Mini14_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9B7618A947EB2861F2E77EA4133956CD;      // 0x0458(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_DADFB4394B6528898DCE5A86246A62A2;// 0x04A0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_60E3A4D0425DC650FA5853AE397CA04E;      // 0x04D8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_994780AE41A993219370A4A929EB5F09;      // 0x0538(0x0060)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x88eff848);
		return ptr;
	}


	void Reload2_Event_1();
	void WeaponFire_Event_1();
	void Reload1_Event_1();
	void CancelReload_Event_1();
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_Mini14(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
