// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Motorbike_04_Sidecar_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.TickSteer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UABP_Motorbike_04_Sidecar_C::TickSteer()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(116704);

	UABP_Motorbike_04_Sidecar_C_TickSteer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.TickBikePose
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_Motorbike_04_Sidecar_C::TickBikePose()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(116703);

	UABP_Motorbike_04_Sidecar_C_TickBikePose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_04_Sidecar_AnimGraphNode_ModifyBone_9B1E1AA44CFF545A64802D9FE7C34F32
// (BlueprintEvent)

void UABP_Motorbike_04_Sidecar_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_04_Sidecar_AnimGraphNode_ModifyBone_9B1E1AA44CFF545A64802D9FE7C34F32()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(116702);

	UABP_Motorbike_04_Sidecar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_04_Sidecar_AnimGraphNode_ModifyBone_9B1E1AA44CFF545A64802D9FE7C34F32_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_04_Sidecar_AnimGraphNode_ModifyBone_667EFEB64E62473E948009AB4A214191
// (BlueprintEvent)

void UABP_Motorbike_04_Sidecar_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_04_Sidecar_AnimGraphNode_ModifyBone_667EFEB64E62473E948009AB4A214191()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(116701);

	UABP_Motorbike_04_Sidecar_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Motorbike_04_Sidecar_AnimGraphNode_ModifyBone_667EFEB64E62473E948009AB4A214191_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Motorbike_04_Sidecar_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(116699);

	UABP_Motorbike_04_Sidecar_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Motorbike_04_Sidecar.ABP_Motorbike_04_Sidecar_C.ExecuteUbergraph_ABP_Motorbike_04_Sidecar
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Motorbike_04_Sidecar_C::ExecuteUbergraph_ABP_Motorbike_04_Sidecar(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(116691);

	UABP_Motorbike_04_Sidecar_C_ExecuteUbergraph_ABP_Motorbike_04_Sidecar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
