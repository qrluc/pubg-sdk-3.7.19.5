// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_HK416_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Weapon_HK416.ABP_Weapon_HK416_C.FireSelect_Event
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_HK416_C::FireSelect_Event()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124559);

	UABP_Weapon_HK416_C_FireSelect_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_HK416.ABP_Weapon_HK416_C.Reload1_Event
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_HK416_C::Reload1_Event()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124558);

	UABP_Weapon_HK416_C_Reload1_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_HK416.ABP_Weapon_HK416_C.WeaponFire_Event
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_HK416_C::WeaponFire_Event()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124557);

	UABP_Weapon_HK416_C_WeaponFire_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_HK416.ABP_Weapon_HK416_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_Weapon_HK416_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124556);

	UABP_Weapon_HK416_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_HK416.ABP_Weapon_HK416_C.Reload2_Event
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_HK416_C::Reload2_Event()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124555);

	UABP_Weapon_HK416_C_Reload2_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_HK416.ABP_Weapon_HK416_C.CancelReload_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_HK416_C::CancelReload_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124554);

	UABP_Weapon_HK416_C_CancelReload_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_HK416.ABP_Weapon_HK416_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_HK416_C::CustomEvent()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124553);

	UABP_Weapon_HK416_C_CustomEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_HK416.ABP_Weapon_HK416_C.ExecuteUbergraph_ABP_Weapon_HK416
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Weapon_HK416_C::ExecuteUbergraph_ABP_Weapon_HK416(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(124534);

	UABP_Weapon_HK416_C_ExecuteUbergraph_ABP_Weapon_HK416_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
