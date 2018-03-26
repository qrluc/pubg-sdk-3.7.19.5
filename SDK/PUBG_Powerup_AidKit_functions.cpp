// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Powerup_AidKit_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Powerup_AidKit.Powerup_AidKit_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APowerup_AidKit_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134400);

	APowerup_AidKit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_AidKit.Powerup_AidKit_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APowerup_AidKit_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134399);

	APowerup_AidKit_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_AidKit.Powerup_AidKit_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void APowerup_AidKit_C::ReceiveDestroyed()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134398);

	APowerup_AidKit_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_AidKit.Powerup_AidKit_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void APowerup_AidKit_C::CustomEvent_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(85682);

	APowerup_AidKit_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_AidKit.Powerup_AidKit_C.ExecuteUbergraph_Powerup_AidKit
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APowerup_AidKit_C::ExecuteUbergraph_Powerup_AidKit(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(85688);

	APowerup_AidKit_C_ExecuteUbergraph_Powerup_AidKit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
