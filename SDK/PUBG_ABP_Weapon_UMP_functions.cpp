// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_UMP_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Weapon_UMP.ABP_Weapon_UMP_C.FireSelect_Event
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_UMP_C::FireSelect_Event()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(125149);

	UABP_Weapon_UMP_C_FireSelect_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_UMP.ABP_Weapon_UMP_C.Reload1_Event
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_UMP_C::Reload1_Event()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(125148);

	UABP_Weapon_UMP_C_Reload1_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_UMP.ABP_Weapon_UMP_C.WeaponFire_Event
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_UMP_C::WeaponFire_Event()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(125147);

	UABP_Weapon_UMP_C_WeaponFire_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_UMP.ABP_Weapon_UMP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_Weapon_UMP_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(125146);

	UABP_Weapon_UMP_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_UMP.ABP_Weapon_UMP_C.Reload2_Event
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_UMP_C::Reload2_Event()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(125145);

	UABP_Weapon_UMP_C_Reload2_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_UMP.ABP_Weapon_UMP_C.CancelReload_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_UMP_C::CancelReload_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(125144);

	UABP_Weapon_UMP_C_CancelReload_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_UMP.ABP_Weapon_UMP_C.ExecuteUbergraph_ABP_Weapon_UMP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Weapon_UMP_C::ExecuteUbergraph_ABP_Weapon_UMP(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(125126);

	UABP_Weapon_UMP_C_ExecuteUbergraph_ABP_Weapon_UMP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
