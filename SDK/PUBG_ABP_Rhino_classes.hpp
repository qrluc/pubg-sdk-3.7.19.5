#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Rhino_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Rhino.ABP_Rhino_C
// 0x07A0 (0x0BF0 - 0x0450)
class UABP_Rhino_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B277F28A483DBC28368F3CB492B3392E;      // 0x0458(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_369B3612403C068FC9EACA8E71D7B316;// 0x04A0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_46D4195D47CD4086F90CE993C2946A1F;      // 0x04D8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_EE8E5306470CA5EA878001B7335D204D;      // 0x0538(0x0060)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2DB0BDB644E5B56FCBBCE29EE1420CD2;// 0x0598(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A040098D4470839D13A9B7AF0DE25D06;// 0x0650(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4A625A9F43869C1919CFE8B522FA76C5;// 0x0698(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_695B754A4686B6BBDF1A14903C2F5723;// 0x0750(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_846CCFE54D1852F798D8569B34E6E34A;// 0x0808(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_13DA73504718357EE2085AA6EAB82C33;// 0x08C0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_126607934329F22EEC44498E3F99D069;// 0x0978(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_FF8C2236421B9EB61D106E99018C8271;// 0x0A30(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_84CB9434451B06A32CAB4A8902B4A270;// 0x0A78(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3D9EB9D848721E96411C40844B82DF13;// 0x0B30(0x00B8)
	float                                              HideBulletAlpha;                                          // 0x0BE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HideSpeedloaderAlpha;                                     // 0x0BEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x3d876ec4);
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rhino_AnimGraphNode_ModifyBone_84CB9434451B06A32CAB4A8902B4A270();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rhino_AnimGraphNode_ModifyBone_3D9EB9D848721E96411C40844B82DF13();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rhino_AnimGraphNode_ModifyBone_126607934329F22EEC44498E3F99D069();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rhino_AnimGraphNode_ModifyBone_13DA73504718357EE2085AA6EAB82C33();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rhino_AnimGraphNode_ModifyBone_846CCFE54D1852F798D8569B34E6E34A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rhino_AnimGraphNode_ModifyBone_695B754A4686B6BBDF1A14903C2F5723();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rhino_AnimGraphNode_ModifyBone_4A625A9F43869C1919CFE8B522FA76C5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rhino_AnimGraphNode_ModifyBone_2DB0BDB644E5B56FCBBCE29EE1420CD2();
	void BlueprintInitializeAnimation();
	void Reload1_Event_1();
	void Reload2_Event_1();
	void CancelReload_Event_1();
	void AnimNotify_ShellEject();
	void AnimNotify_HideSpeedLoader();
	void AnimNotify_ShowSpeedLoader();
	void WeaponFire_Event_1();
	void AnimNotify_SpeedLoaderDrop();
	void ExecuteUbergraph_ABP_Rhino(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
