#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Motorbike_04_Sidecar_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C
// 0x11A8 (0x1A38 - 0x0890)
class UABP_Motorbike_04_Sidecar_C : public UVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0890(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_2BA4401C41D527D1F4CA91ADBD401744;// 0x0898(0x0048)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_9166E0364609E50181537F8E86FF203A;  // 0x08E0(0x00A8)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_C27266324C748685DB45609450C7CE3A;// 0x0988(0x00E8)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_4F2C49264CDF2244866894951259AFDB;    // 0x0A70(0x0180)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_16772EBB4ACFCAE04DC700A076B12F9C;// 0x0BF0(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_8E69C072408CE2D4338C4B9119E00D1B;// 0x0C38(0x0038)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_98F0D58B42CC1DAF929BDD82BA4950AF;// 0x0C70(0x00A8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0D18(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_1AB4EC01420DFCD79756C1B61AE240E0;    // 0x0D20(0x0180)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_9F1CBCD349EB66B7C3F4F9AE67AF519D;    // 0x0EA0(0x0180)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_340FA171423B264747775F974A9976B1;    // 0x1020(0x0180)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_A8C83AB74934A68683310F8988B0A65F;    // 0x11A0(0x0180)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_667EFEB64E62473E948009AB4A214191;// 0x1320(0x00B8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_35273B904539F81233C7E6B844278DC8;// 0x13D8(0x00A8)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_B683B53447BEBD52795000ADA3078837;// 0x1480(0x00E8)
	unsigned char                                      UnknownData01[0x8];                                       // 0x1568(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_AB2B241D412579B32716889387C4E029;    // 0x1570(0x0180)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_A2C074A84022463F56261985AF0370D8;    // 0x16F0(0x0180)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_E0130E554698A3384516C6A209B513F6;// 0x1870(0x0088)
	struct FAnimNode_Root                              AnimGraphNode_Root_8147BAF045DB84D345FD03BBC900FE1B;      // 0x18F8(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9B1E1AA44CFF545A64802D9FE7C34F32;// 0x1940(0x00B8)
	class ATslMotorbikeVehicle*                        BikeRef;                                                  // 0x19F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              SteerRoll;                                                // 0x1A00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    BodyRot;                                                  // 0x1A04(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              AD_Alpha;                                                 // 0x1A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastVelocity;                                             // 0x1A14(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EF;                                                       // 0x1A20(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    SteerRot;                                                 // 0x1A2C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x06552982);
		return ptr;
	}


	void TickSteer();
	void TickBikePose();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_04_Sidecar_AnimGraphNode_ModifyBone_9B1E1AA44CFF545A64802D9FE7C34F32();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_04_Sidecar_AnimGraphNode_ModifyBone_667EFEB64E62473E948009AB4A214191();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_ABP_Motorbike_04_Sidecar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
