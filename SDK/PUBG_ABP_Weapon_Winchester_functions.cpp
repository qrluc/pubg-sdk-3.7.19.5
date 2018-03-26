// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_Winchester_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Weapon_Winchester.ABP_Weapon_Winchester_C.WeaponFireCycle_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Winchester_C::WeaponFireCycle_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123869);

	UABP_Weapon_Winchester_C_WeaponFireCycle_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Winchester.ABP_Weapon_Winchester_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_Weapon_Winchester_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123868);

	UABP_Weapon_Winchester_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Winchester.ABP_Weapon_Winchester_C.WeaponFire_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Winchester_C::WeaponFire_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123867);

	UABP_Weapon_Winchester_C_WeaponFire_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Winchester.ABP_Weapon_Winchester_C.AnimNotify_WinchesterCycle
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Winchester_C::AnimNotify_WinchesterCycle()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123866);

	UABP_Weapon_Winchester_C_AnimNotify_WinchesterCycle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Winchester.ABP_Weapon_Winchester_C.ReloadByOneStart_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AmmoToReload                   (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Weapon_Winchester_C::ReloadByOneStart_Event_1(int AmmoToReload)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123864);

	UABP_Weapon_Winchester_C_ReloadByOneStart_Event_1_Params params;
	params.AmmoToReload = AmmoToReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Winchester.ABP_Weapon_Winchester_C.ReloadByOneEnd_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Winchester_C::ReloadByOneEnd_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123863);

	UABP_Weapon_Winchester_C_ReloadByOneEnd_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Winchester.ABP_Weapon_Winchester_C.ReloadByOneSingle_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Winchester_C::ReloadByOneSingle_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123862);

	UABP_Weapon_Winchester_C_ReloadByOneSingle_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Winchester.ABP_Weapon_Winchester_C.CancelReload_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Winchester_C::CancelReload_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123861);

	UABP_Weapon_Winchester_C_CancelReload_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Winchester.ABP_Weapon_Winchester_C.ExecuteUbergraph_ABP_Weapon_Winchester
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Weapon_Winchester_C::ExecuteUbergraph_ABP_Weapon_Winchester(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123832);

	UABP_Weapon_Winchester_C_ExecuteUbergraph_ABP_Weapon_Winchester_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
