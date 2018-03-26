// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_Win94_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Weapon_Win94.ABP_Weapon_Win94_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_Weapon_Win94_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124148);

	UABP_Weapon_Win94_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Win94.ABP_Weapon_Win94_C.WeaponFire_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Win94_C::WeaponFire_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124147);

	UABP_Weapon_Win94_C_WeaponFire_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Win94.ABP_Weapon_Win94_C.WeaponFireCycle_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Win94_C::WeaponFireCycle_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124146);

	UABP_Weapon_Win94_C_WeaponFireCycle_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Win94.ABP_Weapon_Win94_C.ReloadByOneStart_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            AmmoToReload                   (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Weapon_Win94_C::ReloadByOneStart_Event_1(int AmmoToReload)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124144);

	UABP_Weapon_Win94_C_ReloadByOneStart_Event_1_Params params;
	params.AmmoToReload = AmmoToReload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Win94.ABP_Weapon_Win94_C.ReloadByOneSingle_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Win94_C::ReloadByOneSingle_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124143);

	UABP_Weapon_Win94_C_ReloadByOneSingle_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Win94.ABP_Weapon_Win94_C.ReloadByOneEnd_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Win94_C::ReloadByOneEnd_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124142);

	UABP_Weapon_Win94_C_ReloadByOneEnd_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Win94.ABP_Weapon_Win94_C.CancelReload_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Win94_C::CancelReload_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124141);

	UABP_Weapon_Win94_C_CancelReload_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Win94.ABP_Weapon_Win94_C.AnimNotify_ShellEject
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Win94_C::AnimNotify_ShellEject()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124140);

	UABP_Weapon_Win94_C_AnimNotify_ShellEject_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Win94.ABP_Weapon_Win94_C.ExecuteUbergraph_ABP_Weapon_Win94
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Weapon_Win94_C::ExecuteUbergraph_ABP_Weapon_Win94(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124111);

	UABP_Weapon_Win94_C_ExecuteUbergraph_ABP_Weapon_Win94_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
