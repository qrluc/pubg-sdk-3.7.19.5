#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AquaRail_Animation_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass AquaRail_Animation.AquaRail_Animation_C
// 0x0320 (0x0698 - 0x0378)
class UAquaRail_Animation_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A7671C744F5BB133E82CEB93D2D4A69C;      // 0x0380(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_16D8E6014B866D3FFD00428E4A4A5EA0;// 0x03C8(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F9E263AC444A3C1B3DD0B8AC34424A9B;// 0x03F8(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9B6105AA4C65900693D885866D58C999;// 0x04B0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_580C4C164BF8D5D96F47A7A6F30E1C5D;// 0x04F8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4D96C28746C8DF25B8B9178ABAB4E809;// 0x05B0(0x00B8)
	float                                              SteeringWheelAngle;                                       // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RudderAngle;                                              // 0x066C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PropellerRotation;                                        // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RudderRot;                                                // 0x0674(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    SteeringWheelRot;                                         // 0x0680(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PropellerRot;                                             // 0x068C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x9aba0d62);
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AquaRail_Animation_AnimGraphNode_ModifyBone_F9E263AC444A3C1B3DD0B8AC34424A9B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AquaRail_Animation_AnimGraphNode_ModifyBone_4D96C28746C8DF25B8B9178ABAB4E809();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AquaRail_Animation_AnimGraphNode_ModifyBone_580C4C164BF8D5D96F47A7A6F30E1C5D();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_AquaRail_Animation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
