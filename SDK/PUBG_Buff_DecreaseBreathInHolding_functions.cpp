// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buff_DecreaseBreathInHolding_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DecreaseBreathInHolding.Buff_DecreaseBreathInHolding_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABuff_DecreaseBreathInHolding_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(100093);

	ABuff_DecreaseBreathInHolding_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DecreaseBreathInHolding.Buff_DecreaseBreathInHolding_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DecreaseBreathInHolding_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(100091);

	ABuff_DecreaseBreathInHolding_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DecreaseBreathInHolding.Buff_DecreaseBreathInHolding_C.TickBuff
// (Event, Public, BlueprintEvent)

void ABuff_DecreaseBreathInHolding_C::TickBuff()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(100090);

	ABuff_DecreaseBreathInHolding_C_TickBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DecreaseBreathInHolding.Buff_DecreaseBreathInHolding_C.ExecuteUbergraph_Buff_DecreaseBreathInHolding
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DecreaseBreathInHolding_C::ExecuteUbergraph_Buff_DecreaseBreathInHolding(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(100079);

	ABuff_DecreaseBreathInHolding_C_ExecuteUbergraph_Buff_DecreaseBreathInHolding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
