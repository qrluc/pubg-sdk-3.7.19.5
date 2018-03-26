// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Powerup_Painkillers_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Powerup_Painkillers.Powerup_Painkillers_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APowerup_Painkillers_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134397);

	APowerup_Painkillers_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_Painkillers.Powerup_Painkillers_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APowerup_Painkillers_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134396);

	APowerup_Painkillers_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_Painkillers.Powerup_Painkillers_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void APowerup_Painkillers_C::CustomEvent_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(85696);

	APowerup_Painkillers_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_Painkillers.Powerup_Painkillers_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void APowerup_Painkillers_C::ReceiveDestroyed()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134395);

	APowerup_Painkillers_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_Painkillers.Powerup_Painkillers_C.ExecuteUbergraph_Powerup_Painkillers
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APowerup_Painkillers_C::ExecuteUbergraph_Powerup_Painkillers(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(85702);

	APowerup_Painkillers_C_ExecuteUbergraph_Powerup_Painkillers_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
