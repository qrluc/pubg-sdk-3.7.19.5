#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_M249_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Weapon_M249.ABP_Weapon_M249_C
// 0x11E4 (0x1634 - 0x0450)
class UABP_Weapon_M249_C : public UTslGunAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E79AD1E9480E45515F3EA5BFA2C0DFB7;// 0x0458(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_4C1681F04624DD0743D6EFB320086E4B;// 0x04A0(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_BDDDCE6940034153A322508F01FEB426;// 0x04E8(0x0280)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B474717E413E400740EF97BAB6D27BA4;      // 0x0768(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D7A0D3D745B9B9C51273C89558281947;      // 0x07C8(0x0060)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_F3050D514A8EB7D75797A8BC7BD0520F;// 0x0828(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_Root_282783FF4DB0383D9A1B858DA78AE9AF;      // 0x0860(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_B33FDFC743958048952F44BBCD3156F3;// 0x08A8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DC74DE0A4FD4BC807CA4A3BB5E83382F;// 0x0960(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_840D431342B885D93E10598D91825FF8;// 0x0A18(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BEB9D23149423EB203897EA56913A6B9;// 0x0AD0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_93041DFD4A6E4CCDA8D6ACA912D39B7F;// 0x0B88(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0ACCF1724B4F85F710D59DAB017E8FA8;// 0x0C40(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_02CD3B4B4AAEC64EB331BC8261D78796;// 0x0CF8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7B8238E64F043E87E3EACDBD619683D7;// 0x0DB0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_513019514EBDA9C1682494B4C031867E;// 0x0E68(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_044185F146A17BA72251FB9AB253CBC4;// 0x0F20(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_71B95C6F4F817B4A82890EA31707F161;// 0x0FD8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7BDDFB9A4D8A96BCF3CA4CB48EAEAFFF;// 0x1090(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_59AE70EB40A2FDAEFD560A9BFC8C50D1;// 0x1148(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C4843CB8429ACB1963251DBB0726F83B;// 0x1200(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_786861C945A6F0BC0C9C6FA70CBDD0B3;// 0x12B8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C204C8D0454127A746B6A8A7E6F02578;// 0x1370(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_6751A6B74103CD537D7D029040C6226A;// 0x1428(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A9B716644489390E5FDF958C1B3B2563;// 0x14E0(0x00B8)
	struct FVector                                     EF;                                                       // 0x1598(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              Alpha;                                                    // 0x15A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Alpha_B_2;                                                // 0x15A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Alpha_B_3;                                                // 0x15AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Alpha_B_4;                                                // 0x15B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Alpha_B_5;                                                // 0x15B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Alpha_B_6;                                                // 0x15B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Alpha_B_7;                                                // 0x15BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Alpha_B_8;                                                // 0x15C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Alpha_B_9;                                                // 0x15C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Alpha_B_10;                                               // 0x15C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Alpha_B_11;                                               // 0x15CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Alpha_B_12;                                               // 0x15D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Alpha_B_13;                                               // 0x15D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Alpha_B_14;                                               // 0x15D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Alpha_B_15;                                               // 0x15DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Alpha_B_16;                                               // 0x15E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentBulletCount;                                       // 0x15E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ATslWeapon_Gun*                              GunRef;                                                   // 0x15E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class ATslCharacter*                               CharRef;                                                  // 0x15F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              FollowLHandAlpha;                                         // 0x15F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x15FC(0x0004) MISSED OFFSET
	struct FTransform                                  ItemLPosition;                                            // 0x1600(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              BipodAlpha;                                               // 0x1630(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa41fa7f8);
		return ptr;
	}


	void Handle_Bipod();
	void Handle_Reloads();
	void EvaluateAmmo_Total();
	void EvaluateAmmo();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_C204C8D0454127A746B6A8A7E6F02578();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_786861C945A6F0BC0C9C6FA70CBDD0B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_C4843CB8429ACB1963251DBB0726F83B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_59AE70EB40A2FDAEFD560A9BFC8C50D1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_7BDDFB9A4D8A96BCF3CA4CB48EAEAFFF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_71B95C6F4F817B4A82890EA31707F161();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_044185F146A17BA72251FB9AB253CBC4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_513019514EBDA9C1682494B4C031867E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_7B8238E64F043E87E3EACDBD619683D7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_02CD3B4B4AAEC64EB331BC8261D78796();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_0ACCF1724B4F85F710D59DAB017E8FA8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_A9B716644489390E5FDF958C1B3B2563();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_93041DFD4A6E4CCDA8D6ACA912D39B7F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_BEB9D23149423EB203897EA56913A6B9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_840D431342B885D93E10598D91825FF8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_DC74DE0A4FD4BC807CA4A3BB5E83382F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_B33FDFC743958048952F44BBCD3156F3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_AnimDynamics_BDDDCE6940034153A322508F01FEB426();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M249_AnimGraphNode_ModifyBone_6751A6B74103CD537D7D029040C6226A();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void WeaponFire_Event_1();
	void WeaponCharge_Event_1();
	void Reload1_Event_1();
	void Reload2_Event_1();
	void AnimNotify_HideAmmo();
	void AnimNotify_ShowAmmo();
	void CancelReload_Event_1();
	void ExecuteUbergraph_ABP_Weapon_M249(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
