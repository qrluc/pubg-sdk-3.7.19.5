// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Motorbike_03_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Motorbike_03.ABP_Motorbike_03_C.TickBikePose
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UABP_Motorbike_03_C::TickBikePose()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(135022);

	UABP_Motorbike_03_C_TickBikePose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Motorbike_03.ABP_Motorbike_03_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_03_AnimGraphNode_ModifyBone_79E6A0D24EED59EEE71332B0CBAFEDBB
// (BlueprintEvent)

void UABP_Motorbike_03_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_03_AnimGraphNode_ModifyBone_79E6A0D24EED59EEE71332B0CBAFEDBB()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(135021);

	UABP_Motorbike_03_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_03_AnimGraphNode_ModifyBone_79E6A0D24EED59EEE71332B0CBAFEDBB_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Motorbike_03.ABP_Motorbike_03_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Motorbike_03_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(135019);

	UABP_Motorbike_03_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Motorbike_03.ABP_Motorbike_03_C.ExecuteUbergraph_ABP_Motorbike_03
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Motorbike_03_C::ExecuteUbergraph_ABP_Motorbike_03(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(135015);

	UABP_Motorbike_03_C_ExecuteUbergraph_ABP_Motorbike_03_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
