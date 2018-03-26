// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_M16_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Weapon_M16.ABP_Weapon_M16_C.HandleFireSelector
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_Weapon_M16_C::HandleFireSelector()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123387);

	UABP_Weapon_M16_C_HandleFireSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M16.ABP_Weapon_M16_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Weapon_M16_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123385);

	UABP_Weapon_M16_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M16.ABP_Weapon_M16_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_Weapon_M16_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123384);

	UABP_Weapon_M16_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M16.ABP_Weapon_M16_C.WeaponFire_Event
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_M16_C::WeaponFire_Event()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123383);

	UABP_Weapon_M16_C_WeaponFire_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M16.ABP_Weapon_M16_C.FireSelect_Event
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_M16_C::FireSelect_Event()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123382);

	UABP_Weapon_M16_C_FireSelect_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M16.ABP_Weapon_M16_C.Reload1_Event
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_M16_C::Reload1_Event()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123381);

	UABP_Weapon_M16_C_Reload1_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M16.ABP_Weapon_M16_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M16_AnimGraphNode_ModifyBone_4A5FC6AD44E1B6794883FAA199776A2A
// (BlueprintEvent)

void UABP_Weapon_M16_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M16_AnimGraphNode_ModifyBone_4A5FC6AD44E1B6794883FAA199776A2A()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123380);

	UABP_Weapon_M16_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Weapon_M16_AnimGraphNode_ModifyBone_4A5FC6AD44E1B6794883FAA199776A2A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M16.ABP_Weapon_M16_C.Reload2_Event
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_M16_C::Reload2_Event()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123379);

	UABP_Weapon_M16_C_Reload2_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M16.ABP_Weapon_M16_C.CancelReload_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_M16_C::CancelReload_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123378);

	UABP_Weapon_M16_C_CancelReload_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M16.ABP_Weapon_M16_C.ExecuteUbergraph_ABP_Weapon_M16
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Weapon_M16_C::ExecuteUbergraph_ABP_Weapon_M16(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123338);

	UABP_Weapon_M16_C_ExecuteUbergraph_ABP_Weapon_M16_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
