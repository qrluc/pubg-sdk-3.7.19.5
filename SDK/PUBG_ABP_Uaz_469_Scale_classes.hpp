#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Uaz_469_Scale_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Uaz_469_Scale.ABP_Uaz_469_Scale_C
// 0x0EF0 (0x1800 - 0x0910)
class UABP_Uaz_469_Scale_C : public UTslVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3121D4D6450C01A9025E24BF0A3D3718;// 0x0918(0x0048)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_06CF99E84CFA4DD01E03F980F751E335;// 0x0960(0x0088)
	unsigned char                                      UnknownData00[0x8];                                       // 0x09E8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_8C81E096463461BE4E270184BDF766FD;    // 0x09F0(0x0180)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_2B908BFA4EB08F92B0E66CBFE034DCD2;// 0x0B70(0x00E8)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0C58(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_789F797B4495901FD73FD6B2FA557823;    // 0x0C60(0x0180)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_1347AB9D41FDD289E4054A9C15AE5AD1;// 0x0DE0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_FC98B4E949D6FCB1B309309890D29C00;      // 0x0E10(0x0048)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0E58(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_0F48BC8243CB51D27A7F059F1A8C39EB;    // 0x0E60(0x0180)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_E94FC882426A20F03FAFE482678535B1;  // 0x0FE0(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_5038DD794139CFE6DC41EFB5FDEBE08F;// 0x1088(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_998D310642B36B430AF6EFBCA4E59C24;// 0x1130(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_828D261D4AE511CB8A8A21AC13397ADC;// 0x11D8(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_0EDCD7A9476CC8B0A75F7B8C53144C10;// 0x1280(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_C8D87009439D70A9D3FE7BB4935A42CE;// 0x1328(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_27A156534332F2AED7C9829A8A664A0D;// 0x13D0(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_80E834804EEBC50CF8604CAFB2CC56B5;// 0x1478(0x00A8)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_7BFA6884404B1C67B41F65A8166AF334;    // 0x1520(0x0180)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_FA87EE9949B3667162854FAE6BD92195;// 0x16A0(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9D955F464E76A233F6569E9DFCE3FE99;// 0x1748(0x00B8)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x77b95158);
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Uaz_469_Scale_AnimGraphNode_ModifyBone_9D955F464E76A233F6569E9DFCE3FE99();
	void ExecuteUbergraph_ABP_Uaz_469_Scale(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
