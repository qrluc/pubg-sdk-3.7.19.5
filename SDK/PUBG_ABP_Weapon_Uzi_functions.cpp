// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_Uzi_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Weapon_Uzi.ABP_Weapon_Uzi_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_Weapon_Uzi_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123715);

	UABP_Weapon_Uzi_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Uzi.ABP_Weapon_Uzi_C.WeaponFire_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Uzi_C::WeaponFire_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123714);

	UABP_Weapon_Uzi_C_WeaponFire_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Uzi.ABP_Weapon_Uzi_C.Reload1_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Uzi_C::Reload1_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123713);

	UABP_Weapon_Uzi_C_Reload1_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Uzi.ABP_Weapon_Uzi_C.Reload2_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Uzi_C::Reload2_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123712);

	UABP_Weapon_Uzi_C_Reload2_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Uzi.ABP_Weapon_Uzi_C.CancelReload_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Uzi_C::CancelReload_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123711);

	UABP_Weapon_Uzi_C_CancelReload_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Uzi.ABP_Weapon_Uzi_C.FireSelect_Event
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Uzi_C::FireSelect_Event()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123710);

	UABP_Weapon_Uzi_C_FireSelect_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Uzi.ABP_Weapon_Uzi_C.ExecuteUbergraph_ABP_Weapon_Uzi
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Weapon_Uzi_C::ExecuteUbergraph_ABP_Weapon_Uzi(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(123692);

	UABP_Weapon_Uzi_C_ExecuteUbergraph_ABP_Weapon_Uzi_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
