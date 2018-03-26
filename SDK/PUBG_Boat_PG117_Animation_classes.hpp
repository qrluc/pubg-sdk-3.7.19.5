#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Boat_PG117_Animation_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Boat_PG117_Animation.Boat_PG117_Animation_C
// 0x0320 (0x0698 - 0x0378)
class UBoat_PG117_Animation_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_6F449E654EF7DE9DD0A9D7822CA89D21;      // 0x0380(0x0048)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_A3EB3FA84C550B2ED5F9B081D8672BB8;// 0x03C8(0x0030)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8057CE8141CBA4DBCBB2FC8BC84934CE;// 0x03F8(0x00B8)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_D1558F914C96EE151AF4F890F275573F;// 0x04B0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_64A4DFC849F2AC37DED7E693D6450034;// 0x04F8(0x00B8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_23B5532142004C9B1C5E36A8005A6FD9;// 0x05B0(0x00B8)
	float                                              SteeringWheelAngle;                                       // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RudderAngle;                                              // 0x066C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PropellerRotation;                                        // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RudderRot;                                                // 0x0674(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    SteeringWheelRot;                                         // 0x0680(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PropellerRot;                                             // 0x068C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xa5482488);
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Boat_PG117_Animation_AnimGraphNode_ModifyBone_23B5532142004C9B1C5E36A8005A6FD9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Boat_PG117_Animation_AnimGraphNode_ModifyBone_64A4DFC849F2AC37DED7E693D6450034();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Boat_PG117_Animation_AnimGraphNode_ModifyBone_8057CE8141CBA4DBCBB2FC8BC84934CE();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_Boat_PG117_Animation(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
