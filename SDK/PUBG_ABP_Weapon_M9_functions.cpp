// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Weapon_M9_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Weapon_M9.ABP_Weapon_M9_C.SlideReleaseFunc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UABP_Weapon_M9_C::SlideReleaseFunc()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(128277);

	UABP_Weapon_M9_C_SlideReleaseFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M9.ABP_Weapon_M9_C.Handle_SlideRelease
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_Weapon_M9_C::Handle_SlideRelease()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(128275);

	UABP_Weapon_M9_C_Handle_SlideRelease_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M9.ABP_Weapon_M9_C.Handle_Fire
// (Public, BlueprintCallable, BlueprintEvent)

void UABP_Weapon_M9_C::Handle_Fire()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(128270);

	UABP_Weapon_M9_C_Handle_Fire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M9.ABP_Weapon_M9_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaTimeX                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Weapon_M9_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(128268);

	UABP_Weapon_M9_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M9.ABP_Weapon_M9_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_Weapon_M9_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(128267);

	UABP_Weapon_M9_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M9.ABP_Weapon_M9_C.WeaponFire_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_M9_C::WeaponFire_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(128266);

	UABP_Weapon_M9_C_WeaponFire_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M9.ABP_Weapon_M9_C.Reload2_Event_1
// (BlueprintCallable, BlueprintEvent)

void UABP_Weapon_M9_C::Reload2_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(128265);

	UABP_Weapon_M9_C_Reload2_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Weapon_M9.ABP_Weapon_M9_C.ExecuteUbergraph_ABP_Weapon_M9
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Weapon_M9_C::ExecuteUbergraph_ABP_Weapon_M9(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(128252);

	UABP_Weapon_M9_C_ExecuteUbergraph_ABP_Weapon_M9_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
