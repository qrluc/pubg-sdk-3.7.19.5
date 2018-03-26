// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_AKM_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Weapon_AKM.ABP_Weapon_AKM_C.HandleReloadCharge
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_Weapon_AKM_C::HandleReloadCharge()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124387);

	UABP_Weapon_AKM_C_HandleReloadCharge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_AKM.ABP_Weapon_AKM_C.HandleReloadTactical
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_Weapon_AKM_C::HandleReloadTactical()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124378);

	UABP_Weapon_AKM_C_HandleReloadTactical_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_AKM.ABP_Weapon_AKM_C.HandleFireSelector
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_Weapon_AKM_C::HandleFireSelector()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124367);

	UABP_Weapon_AKM_C_HandleFireSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_AKM.ABP_Weapon_AKM_C.FireSelect_Event
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_AKM_C::FireSelect_Event()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124366);

	UABP_Weapon_AKM_C_FireSelect_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_AKM.ABP_Weapon_AKM_C.Reload1_Event
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_AKM_C::Reload1_Event()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124365);

	UABP_Weapon_AKM_C_Reload1_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_AKM.ABP_Weapon_AKM_C.WeaponFire_Event
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_AKM_C::WeaponFire_Event()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124364);

	UABP_Weapon_AKM_C_WeaponFire_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_AKM.ABP_Weapon_AKM_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_Weapon_AKM_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124363);

	UABP_Weapon_AKM_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_AKM.ABP_Weapon_AKM_C.Reload2_Event
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_AKM_C::Reload2_Event()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124362);

	UABP_Weapon_AKM_C_Reload2_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_AKM.ABP_Weapon_AKM_C.CancelReload_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_AKM_C::CancelReload_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124361);

	UABP_Weapon_AKM_C_CancelReload_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_AKM.ABP_Weapon_AKM_C.ExecuteUbergraph_ABP_Weapon_AKM
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Weapon_AKM_C::ExecuteUbergraph_ABP_Weapon_AKM(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124353);

	UABP_Weapon_AKM_C_ExecuteUbergraph_ABP_Weapon_AKM_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
