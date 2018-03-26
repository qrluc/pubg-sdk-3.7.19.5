// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_SCAR_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Weapon_SCAR.ABP_Weapon_SCAR_C.Handle_Fire
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_Weapon_SCAR_C::Handle_Fire()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(125018);

	UABP_Weapon_SCAR_C_Handle_Fire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_SCAR.ABP_Weapon_SCAR_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Weapon_SCAR_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(125016);

	UABP_Weapon_SCAR_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_SCAR.ABP_Weapon_SCAR_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_Weapon_SCAR_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(125015);

	UABP_Weapon_SCAR_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_SCAR.ABP_Weapon_SCAR_C.WeaponFire_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_SCAR_C::WeaponFire_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(125014);

	UABP_Weapon_SCAR_C_WeaponFire_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_SCAR.ABP_Weapon_SCAR_C.Reload1_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_SCAR_C::Reload1_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(125013);

	UABP_Weapon_SCAR_C_Reload1_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_SCAR.ABP_Weapon_SCAR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_SCAR_AnimGraphNode_ModifyBone_09887E094E8FB8C6610C919B75736092
// (BlueprintEvent)

void UABP_Weapon_SCAR_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_SCAR_AnimGraphNode_ModifyBone_09887E094E8FB8C6610C919B75736092()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(125012);

	UABP_Weapon_SCAR_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_SCAR_AnimGraphNode_ModifyBone_09887E094E8FB8C6610C919B75736092_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_SCAR.ABP_Weapon_SCAR_C.Reload2_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_SCAR_C::Reload2_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(125011);

	UABP_Weapon_SCAR_C_Reload2_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_SCAR.ABP_Weapon_SCAR_C.FireSelect_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_SCAR_C::FireSelect_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(125010);

	UABP_Weapon_SCAR_C_FireSelect_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_SCAR.ABP_Weapon_SCAR_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_SCAR_AnimGraphNode_ModifyBone_4B9A8FC14E38A93E912DC482DEE75372
// (BlueprintEvent)

void UABP_Weapon_SCAR_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_SCAR_AnimGraphNode_ModifyBone_4B9A8FC14E38A93E912DC482DEE75372()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(125009);

	UABP_Weapon_SCAR_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_SCAR_AnimGraphNode_ModifyBone_4B9A8FC14E38A93E912DC482DEE75372_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_SCAR.ABP_Weapon_SCAR_C.CancelReload_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_SCAR_C::CancelReload_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(125008);

	UABP_Weapon_SCAR_C_CancelReload_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_SCAR.ABP_Weapon_SCAR_C.ExecuteUbergraph_ABP_Weapon_SCAR
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Weapon_SCAR_C::ExecuteUbergraph_ABP_Weapon_SCAR(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124982);

	UABP_Weapon_SCAR_C_ExecuteUbergraph_ABP_Weapon_SCAR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
