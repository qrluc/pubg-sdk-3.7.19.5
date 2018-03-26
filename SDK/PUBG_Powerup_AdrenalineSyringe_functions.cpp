// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Powerup_AdrenalineSyringe_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Powerup_AdrenalineSyringe.Powerup_AdrenalineSyringe_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APowerup_AdrenalineSyringe_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134403);

	APowerup_AdrenalineSyringe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_AdrenalineSyringe.Powerup_AdrenalineSyringe_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APowerup_AdrenalineSyringe_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134402);

	APowerup_AdrenalineSyringe_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_AdrenalineSyringe.Powerup_AdrenalineSyringe_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void APowerup_AdrenalineSyringe_C::CustomEvent_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(85668);

	APowerup_AdrenalineSyringe_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_AdrenalineSyringe.Powerup_AdrenalineSyringe_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void APowerup_AdrenalineSyringe_C::ReceiveDestroyed()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134401);

	APowerup_AdrenalineSyringe_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_AdrenalineSyringe.Powerup_AdrenalineSyringe_C.ExecuteUbergraph_Powerup_AdrenalineSyringe
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APowerup_AdrenalineSyringe_C::ExecuteUbergraph_Powerup_AdrenalineSyringe(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(85674);

	APowerup_AdrenalineSyringe_C_ExecuteUbergraph_Powerup_AdrenalineSyringe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
