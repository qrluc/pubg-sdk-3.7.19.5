#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_UMP_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Weapon_UMP.ABP_Weapon_UMP_C
// 0x01A8 (0x05F8 - 0x0450)
class UABP_Weapon_UMP_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_16C3A1C34490D1F290D464B625F52B8C;      // 0x0458(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_876BEDA344F3D6E5770A7389894843E5;// 0x04A0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3496550740F2794862FAF595CE63116C;      // 0x04D8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_43F4FF734A797268188E509F4B5401DD;      // 0x0538(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6A46AC8E4FB824264A75F1928845F85E;      // 0x0598(0x0060)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x14086b5e);
		return ptr;
	}


	void FireSelect_Event();
	void Reload1_Event();
	void WeaponFire_Event();
	void BlueprintInitializeAnimation();
	void Reload2_Event();
	void CancelReload_Event_1();
	void ExecuteUbergraph_ABP_Weapon_UMP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
