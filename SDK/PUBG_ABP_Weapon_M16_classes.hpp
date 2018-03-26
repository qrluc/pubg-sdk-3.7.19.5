#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_M16_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Weapon_M16.ABP_Weapon_M16_C
// 0x0580 (0x09D0 - 0x0450)
class UABP_Weapon_M16_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_9A2166F14A69D9096E2A48A22539165E;      // 0x0458(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_961A7465478E10E76629EF9179392F9B;// 0x04A0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_416F423C420824505987FAB4DCFC1DF9;      // 0x04D8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6EE339754B8FA2D7D69A41AB7FB6F878;      // 0x0538(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_12E23361415DEDDB3286FFAD050F1404;      // 0x0598(0x0060)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_9E52300C4DD5B4E4E809BEB1FA1F5466;// 0x05F8(0x0280)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B97895E14351FB12E43CD99CA7DC8960;// 0x0878(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_474A60DC43DBAF4B1CA262817852DD15;// 0x08C0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4A5FC6AD44E1B6794883FAA199776A2A;// 0x0908(0x00B8)
	float                                              ADSOpticsAlpha;                                           // 0x09C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09C4(0x0004) MISSED OFFSET
	class ATslWeapon_Gun*                              Gun;                                                      // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xfef325c6);
		return ptr;
	}


	void HandleFireSelector();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void WeaponFire_Event();
	void FireSelect_Event();
	void Reload1_Event();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M16_AnimGraphNode_ModifyBone_4A5FC6AD44E1B6794883FAA199776A2A();
	void Reload2_Event();
	void CancelReload_Event_1();
	void ExecuteUbergraph_ABP_Weapon_M16(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
