// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_AWM_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Weapon_AWM.ABP_Weapon_AWM_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_Weapon_AWM_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(125968);

	UABP_Weapon_AWM_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_AWM.ABP_Weapon_AWM_C.WeaponFireCycle_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_AWM_C::WeaponFireCycle_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(125967);

	UABP_Weapon_AWM_C_WeaponFireCycle_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_AWM.ABP_Weapon_AWM_C.Reload1_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_AWM_C::Reload1_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(125966);

	UABP_Weapon_AWM_C_Reload1_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_AWM.ABP_Weapon_AWM_C.AnimNotify_ShellEject
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_AWM_C::AnimNotify_ShellEject()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(125965);

	UABP_Weapon_AWM_C_AnimNotify_ShellEject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_AWM.ABP_Weapon_AWM_C.Reload2_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_AWM_C::Reload2_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(125964);

	UABP_Weapon_AWM_C_Reload2_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_AWM.ABP_Weapon_AWM_C.CancelReload_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_AWM_C::CancelReload_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(125963);

	UABP_Weapon_AWM_C_CancelReload_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_AWM.ABP_Weapon_AWM_C.ExecuteUbergraph_ABP_Weapon_AWM
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Weapon_AWM_C::ExecuteUbergraph_ABP_Weapon_AWM(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(125938);

	UABP_Weapon_AWM_C_ExecuteUbergraph_ABP_Weapon_AWM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
