// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Powerup_MedkitBandageOnHand_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Powerup_MedkitBandageOnHand.Powerup_MedkitBandageOnHand_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APowerup_MedkitBandageOnHand_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134405);

	APowerup_MedkitBandageOnHand_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_MedkitBandageOnHand.Powerup_MedkitBandageOnHand_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void APowerup_MedkitBandageOnHand_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134404);

	APowerup_MedkitBandageOnHand_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Powerup_MedkitBandageOnHand.Powerup_MedkitBandageOnHand_C.ExecuteUbergraph_Powerup_MedkitBandageOnHand
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void APowerup_MedkitBandageOnHand_C::ExecuteUbergraph_Powerup_MedkitBandageOnHand(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(85658);

	APowerup_MedkitBandageOnHand_C_ExecuteUbergraph_Powerup_MedkitBandageOnHand_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
