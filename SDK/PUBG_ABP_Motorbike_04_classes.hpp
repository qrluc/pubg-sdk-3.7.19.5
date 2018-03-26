#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Motorbike_04_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Motorbike_04.ABP_Motorbike_04_C
// 0x0DF8 (0x1708 - 0x0910)
class UABP_Motorbike_04_C : public UTslVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_402AEAFD4E6DB56509518CB5795AE5E0;  // 0x0918(0x00A8)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_F00FC4C24636CADC679B928D5B9A84A6;    // 0x09C0(0x0180)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9F701C04470A614EEC5C1FAC4E0CCB77;// 0x0B40(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_LocalRefPose_BD8986A34F38F3A1CFEFA18858ADC0FF;// 0x0B88(0x0038)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_C7362C584E9400D160AAEC8DEF2533A0;// 0x0BC0(0x00A8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0C68(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_B1CDBBAF47E81EF35463A3848A511397;    // 0x0C70(0x0180)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_D02F00684CEE7A4CD0F9A798D29C4910;    // 0x0DF0(0x0180)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_031AA7C3435B259672D3279788710F6F;    // 0x0F70(0x0180)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_764BE4264AB074AD738EB79D6F7C025F;// 0x10F0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_A8A930D6405B0072B721DAAB1AF54C32;// 0x11A8(0x00B8)
	struct FAnimNode_Root                              AnimGraphNode_Root_ECE4182141B32CBF7FF61BB72BD23154;      // 0x1260(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_99EC0C5B4AE176A84A64298ADB12F9F2;// 0x12A8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F276919D4CDE07DAACC131A4D3A26DC5;// 0x1360(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6C4916754C3AF04E228FD4861AD18BAB;// 0x1418(0x0048)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_8D2398CE4A09D4B7A31747B354C65BC9;// 0x1460(0x0088)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_A4847C5B4C3DB0C42F3C569E43B50220;  // 0x14E8(0x00A8)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_766636434859C31D442B63B25A9CD81E;// 0x1590(0x00E8)
	class ABP_Motorbike_03_C*                          BikeRef;                                                  // 0x1678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	float                                              SteerRoll;                                                // 0x1680(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    BodyRot;                                                  // 0x1684(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              AD_Alpha;                                                 // 0x1690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LastVelocity;                                             // 0x1694(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     EF;                                                       // 0x16A0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x16AC(0x0004) MISSED OFFSET
	class ATslMotorbikeVehicle*                        BikeRef4;                                                 // 0x16B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    KickStandRot;                                             // 0x16B8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              KickStandCurrentRot;                                      // 0x16C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDrop;                                                  // 0x16C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxRaise;                                                 // 0x16CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FrontSusp_Offset;                                         // 0x16D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FrontSusp_Speed;                                          // 0x16D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BackSusp_Offset;                                          // 0x16D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BackSusp_Speed;                                           // 0x16DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    SteerRot;                                                 // 0x16E0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    SpeedArrowRot;                                            // 0x16EC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              EF_Rot;                                                   // 0x16F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DotComp;                                                  // 0x16FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SteerComp;                                                // 0x1700(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedInKm;                                                // 0x1704(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xd6157436);
		return ptr;
	}


	void TickSteer();
	void TickBackSuspension();
	void TickFrontSuspension();
	void TickBikePose();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_04_AnimGraphNode_ModifyBone_99EC0C5B4AE176A84A64298ADB12F9F2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_04_AnimGraphNode_ModifyBone_F276919D4CDE07DAACC131A4D3A26DC5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_04_AnimGraphNode_ModifyBone_A8A930D6405B0072B721DAAB1AF54C32();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_04_AnimGraphNode_ModifyBone_764BE4264AB074AD738EB79D6F7C025F();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_ABP_Motorbike_04(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
