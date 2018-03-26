#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Dacia_01_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Dacia_01.ABP_Dacia_01_C
// 0x0800 (0x1110 - 0x0910)
class UABP_Dacia_01_C : public UTslVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E1AE134440320C682D4453965DE7D9A1;      // 0x0918(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_917E0A4949EDE71B6D3BCA96247646BF;// 0x0960(0x0030)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_AB4A5CA54B32753CB72192A8FFA528B3;// 0x0990(0x0088)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_90E431064552AA4BE2002E90DB4E7A0A;  // 0x0A18(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_B5067EE64C32C9A22770869719AB27F7;  // 0x0AC0(0x00A8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_F7B38F854B5FB26CC98B97BB8FE11E90;// 0x0B68(0x0048)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_0A0E129B41F454C0B2B2FDB105AD2F88;// 0x0BB0(0x00A8)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_F291B0B8478DD7EE49181FB9098C4036;// 0x0C58(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_B12185974E85F9B2889B9CAE97FC88A9;  // 0x0D00(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_0606C6814564FC47FE0E32AA5DBD8A1C;  // 0x0DA8(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_290CDA694133B689DB45DCA699C9028D;  // 0x0E50(0x00A8)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_642193BE48C79997D721D6A5671AE5D2;  // 0x0EF8(0x00A8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7298226E441800927D9C2A87FD1D5E62;// 0x0FA0(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_80DDC35E4857D944446EB79B6C959FAA;// 0x1058(0x00B8)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xabde6148);
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dacia_01_AnimGraphNode_ModifyBone_7298226E441800927D9C2A87FD1D5E62();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Dacia_01_AnimGraphNode_ModifyBone_80DDC35E4857D944446EB79B6C959FAA();
	void ExecuteUbergraph_ABP_Dacia_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
