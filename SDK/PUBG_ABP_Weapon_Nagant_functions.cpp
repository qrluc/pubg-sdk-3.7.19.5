// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_Nagant_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Weapon_Nagant.ABP_Weapon_Nagant_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_Weapon_Nagant_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(129411);

	UABP_Weapon_Nagant_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Nagant.ABP_Weapon_Nagant_C.ReloadByOneStart_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AmmoToReload                   (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Weapon_Nagant_C::ReloadByOneStart_Event_1(int AmmoToReload)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(129409);

	UABP_Weapon_Nagant_C_ReloadByOneStart_Event_1_Params params;
	params.AmmoToReload = AmmoToReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Nagant.ABP_Weapon_Nagant_C.ReloadByOneSingle_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Nagant_C::ReloadByOneSingle_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(129408);

	UABP_Weapon_Nagant_C_ReloadByOneSingle_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Nagant.ABP_Weapon_Nagant_C.ReloadByOneEnd_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Nagant_C::ReloadByOneEnd_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(129407);

	UABP_Weapon_Nagant_C_ReloadByOneEnd_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Nagant.ABP_Weapon_Nagant_C.WeaponFire_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Nagant_C::WeaponFire_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(129406);

	UABP_Weapon_Nagant_C_WeaponFire_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Nagant.ABP_Weapon_Nagant_C.AnimNotify_ShellEject
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Nagant_C::AnimNotify_ShellEject()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(129405);

	UABP_Weapon_Nagant_C_AnimNotify_ShellEject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Nagant.ABP_Weapon_Nagant_C.CancelReload_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Nagant_C::CancelReload_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(129404);

	UABP_Weapon_Nagant_C_CancelReload_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Nagant.ABP_Weapon_Nagant_C.ExecuteUbergraph_ABP_Weapon_Nagant
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Weapon_Nagant_C::ExecuteUbergraph_ABP_Weapon_Nagant(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(129385);

	UABP_Weapon_Nagant_C_ExecuteUbergraph_ABP_Weapon_Nagant_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
