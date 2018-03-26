// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Powerup_Medkit_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Powerup_Medkit.Powerup_Medkit_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APowerup_Medkit_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134407);

	APowerup_Medkit_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_Medkit.Powerup_Medkit_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APowerup_Medkit_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134406);

	APowerup_Medkit_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_Medkit.Powerup_Medkit_C.ExecuteUbergraph_Powerup_Medkit
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APowerup_Medkit_C::ExecuteUbergraph_Powerup_Medkit(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(85650);

	APowerup_Medkit_C_ExecuteUbergraph_Powerup_Medkit_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
