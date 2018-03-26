#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_DP28_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_DP28.ABP_DP28_C
// 0x0D18 (0x1168 - 0x0450)
class UABP_DP28_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_AE2DE0B04C27A20DC8E9458C16E16DD5;      // 0x0458(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_A26F3D3B42B752C5A28DA081F7A7C293;// 0x04A0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_64C17FA5449509FD6F3648B132839D1B;      // 0x04D8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_51551C924C77ABD11BA37FB9FBDF3120;      // 0x0538(0x0060)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5C760A8642572173D4B787878B7AFCD8;// 0x0598(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_975C98A54ADDA72E7FBFB094DC39D845;// 0x0650(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_699FDF9F466F1CDD94401997610B0A48;// 0x0698(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_1D28D7DC48D1D4D7BCD36F98A0262312;// 0x06E0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_68F5F08A46A73231F34B11A49AE331F6;// 0x0798(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8E3C002849E4ED173DD2409CF200F9E0;// 0x0850(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6750A4EC402558A60B6B16A456822A84;// 0x0908(0x00B8)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_D7329B804A218C007740BD8AD64375C3;// 0x09C0(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_C0AAC59344A34BEDF9E4E59C959656D5;// 0x0C40(0x0280)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_05AF8D034B143C855E75F6B92B2DC10B;// 0x0EC0(0x0280)
	class ATslCharacter*                               CharRef;                                                  // 0x1140(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ATslWeapon_Gun*                              GunRef;                                                   // 0x1148(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    MagRot;                                                   // 0x1150(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MagCurrent;                                               // 0x115C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MagTarget;                                                // 0x1160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BipodAlpha;                                               // 0x1164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa25fc328);
		return ptr;
	}


	void EvaluateBipod();
	void EvaluateAmmo(bool bIsInstant);
	void HandleReloadCharge();
	void HandleReloadTactical();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DP28_AnimGraphNode_AnimDynamics_D7329B804A218C007740BD8AD64375C3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DP28_AnimGraphNode_ModifyBone_6750A4EC402558A60B6B16A456822A84();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DP28_AnimGraphNode_ModifyBone_8E3C002849E4ED173DD2409CF200F9E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DP28_AnimGraphNode_ModifyBone_5C760A8642572173D4B787878B7AFCD8();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void WeaponFire_Event();
	void Reload1_Event();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_DP28_AnimGraphNode_AnimDynamics_C0AAC59344A34BEDF9E4E59C959656D5();
	void Reload2_Event();
	void CancelReload_Event_1();
	void AnimNotify_EvalAmmo();
	void ExecuteUbergraph_ABP_DP28(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
