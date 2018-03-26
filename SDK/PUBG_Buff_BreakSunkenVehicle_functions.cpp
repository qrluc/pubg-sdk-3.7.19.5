// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buff_BreakSunkenVehicle_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BreakSunkenVehicle.Buff_BreakSunkenVehicle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABuff_BreakSunkenVehicle_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(119393);

	ABuff_BreakSunkenVehicle_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BreakSunkenVehicle.Buff_BreakSunkenVehicle_C.TickBuff
// (Event, Public, BlueprintEvent)

void ABuff_BreakSunkenVehicle_C::TickBuff()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(119392);

	ABuff_BreakSunkenVehicle_C_TickBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BreakSunkenVehicle.Buff_BreakSunkenVehicle_C.StopBuffBlueprint
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bCanceled                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BreakSunkenVehicle_C::StopBuffBlueprint(bool* bCanceled)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(119390);

	ABuff_BreakSunkenVehicle_C_StopBuffBlueprint_Params params;
	params.bCanceled = bCanceled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BreakSunkenVehicle.Buff_BreakSunkenVehicle_C.ExecuteUbergraph_Buff_BreakSunkenVehicle
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BreakSunkenVehicle_C::ExecuteUbergraph_Buff_BreakSunkenVehicle(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(119379);

	ABuff_BreakSunkenVehicle_C_ExecuteUbergraph_Buff_BreakSunkenVehicle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
