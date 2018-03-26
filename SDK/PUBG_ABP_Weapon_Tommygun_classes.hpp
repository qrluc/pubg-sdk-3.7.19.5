#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_Tommygun_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Weapon_Tommygun.ABP_Weapon_Tommygun_C
// 0x02F0 (0x0740 - 0x0450)
class UABP_Weapon_Tommygun_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E1330F114B6273112FBFCCA3CF801DB8;      // 0x0458(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_5A0408504D3C9CFC9A5A0FA3D4B5D2FA;// 0x04A0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CE5F258241DE467A1F8C2A8AB1F1FFDA;      // 0x04D8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2E773F1E4B88DAC7F0FD8583B721A454;      // 0x0538(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C0E7A8E040524F9C35BAE79101B95BC6;      // 0x0598(0x0060)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2CD842B64469008B98DE9891AE4EC734;// 0x05F8(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_06C2E8684042894A8A89EEB07BD1CD4E;// 0x06B0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7F1DC3354BF0791B5960F5927FF1742A;// 0x06F8(0x0048)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x8b9059f8);
		return ptr;
	}


	void BlueprintInitializeAnimation();
	void WeaponFire_Event_1();
	void Reload1_Event_1();
	void Reload2_Event_1();
	void FireSelect_Event_1();
	void CancelReload_Event_1();
	void ExecuteUbergraph_ABP_Weapon_Tommygun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
