#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_Mk14_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Weapon_Mk14.ABP_Weapon_Mk14_C
// 0x035C (0x07AC - 0x0450)
class UABP_Weapon_Mk14_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_817BDBA144082B15891B12BE34CFD215;      // 0x0458(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_0CD19579405B2A126318CB9EF7CBBFC6;      // 0x04A0(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1E604D4244BEB8850FE250A50C66C98A;      // 0x0500(0x0060)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_8ED6AD9748F924CF6E41CBAB4CA719D8;// 0x0560(0x0038)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5FB7AF624F0CD0FED16C6A91328ED4A5;// 0x0598(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C96AB116454E22967D9FB0A508C29962;// 0x0650(0x00B8)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_2FA27A4F4166C925B0352FA08175DA28;// 0x0708(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_87CA513544B7686FEECCFCBD63927CF1;// 0x0750(0x0048)
	class ATslWeapon_Gun*                              GunRef;                                                   // 0x0798(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ATslCharacter*                               CharRef;                                                  // 0x07A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              BipodAlpha;                                               // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x37f96bc8);
		return ptr;
	}


	void HandleBipod();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Mk14_AnimGraphNode_ModifyBone_C96AB116454E22967D9FB0A508C29962();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_Mk14_AnimGraphNode_ModifyBone_5FB7AF624F0CD0FED16C6A91328ED4A5();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void FireSelect_Event_1();
	void BlueprintInitializeAnimation();
	void WeaponFire_Event_1();
	void Reload1_Event_1();
	void Reload2_Event_1();
	void CancelReload_Event_1();
	void ExecuteUbergraph_ABP_Weapon_Mk14(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
