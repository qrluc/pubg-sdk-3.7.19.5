// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_Glock18_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.Handle_FireSelector
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Glock18_C::Handle_FireSelector()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(135405);

	UABP_Weapon_Glock18_C_Handle_FireSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.Handle_Fire
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Glock18_C::Handle_Fire()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(135400);

	UABP_Weapon_Glock18_C_Handle_Fire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Weapon_Glock18_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(135398);

	UABP_Weapon_Glock18_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.WeaponFire_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Glock18_C::WeaponFire_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(135397);

	UABP_Weapon_Glock18_C_WeaponFire_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.Reload2_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Glock18_C::Reload2_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(135396);

	UABP_Weapon_Glock18_C_Reload2_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_Weapon_Glock18_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(135395);

	UABP_Weapon_Glock18_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.FireSelect_Event
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Glock18_C::FireSelect_Event()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(135394);

	UABP_Weapon_Glock18_C_FireSelect_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.SlideRelease
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_Glock18_C::SlideRelease()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(135393);

	UABP_Weapon_Glock18_C_SlideRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_Glock18.ABP_Weapon_Glock18_C.ExecuteUbergraph_ABP_Weapon_Glock18
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Weapon_Glock18_C::ExecuteUbergraph_ABP_Weapon_Glock18(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(135376);

	UABP_Weapon_Glock18_C_ExecuteUbergraph_ABP_Weapon_Glock18_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
