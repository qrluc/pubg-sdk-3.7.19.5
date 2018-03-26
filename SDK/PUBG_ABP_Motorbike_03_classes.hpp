#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Motorbike_03_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Motorbike_03.ABP_Motorbike_03_C
// 0x0D00 (0x1590 - 0x0890)
class UABP_Motorbike_03_C : public UVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0890(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_17060527498171F87C24DDA3134FA8A4;// 0x0898(0x0088)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_F69F66004EC74A345B849392062DD01F;  // 0x0920(0x00A8)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_7695BD8C434CD73EE3F5D1AC8AC2E0EF;// 0x09C8(0x00E8)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_DB60E5D0417258BF407281A4EFA0B418;    // 0x0AB0(0x0180)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_5D86681C4346496728439B93FCEF7D5C;// 0x0C30(0x0048)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_46BF958E43308BD407150AB73FDA67E8;// 0x0C78(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_DA3721A846C986446C88B1B820A50FCD;// 0x0CC0(0x0038)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_C22BFA20450151D0CB093A811A6D1D18;// 0x0CF8(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_57BB85B14C7E7648814926AA5F0F7575;// 0x0DA0(0x00A8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0E48(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_2336E6F44EBF81F4E38174932AED6EFD;    // 0x0E50(0x0180)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_7A94A8CB4DA54D0FBA8C97B981FB1CBC;    // 0x0FD0(0x0180)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_94CBF9574C5D1CE97EB906922046226D;    // 0x1150(0x0180)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_F4F528524B0379E35E59EFA1A0773037;    // 0x12D0(0x0180)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_79E6A0D24EED59EEE71332B0CBAFEDBB;// 0x1450(0x00B8)
	struct FAnimNode_Root                              AnimGraphNode_Root_3E144B7846C5F2F47950DDA9A5B5DB83;      // 0x1508(0x0048)
	class ABP_Motorbike_03_C*                          BikeRef;                                                  // 0x1550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              SteerRoll;                                                // 0x1558(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    BodyRot;                                                  // 0x155C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              AD_Alpha;                                                 // 0x1568(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastVelocity;                                             // 0x156C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EF;                                                       // 0x1578(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x1584(0x0004) MISSED OFFSET
	class ATslMotorbikeVehicle*                        BikeRef4;                                                 // 0x1588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd363a908);
		return ptr;
	}


	void TickBikePose();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_03_AnimGraphNode_ModifyBone_79E6A0D24EED59EEE71332B0CBAFEDBB();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_ABP_Motorbike_03(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
