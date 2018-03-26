// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buff_BoostHealOverTime_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.SetHealPerTick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          CurBoostGauge                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BoostHealOverTime_C::SetHealPerTick(float CurBoostGauge)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(100163);

	ABuff_BoostHealOverTime_C_SetHealPerTick_Params params;
	params.CurBoostGauge = CurBoostGauge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABuff_BoostHealOverTime_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(100162);

	ABuff_BoostHealOverTime_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.TickBuff
// (Event, Public, BlueprintEvent)

void ABuff_BoostHealOverTime_C::TickBuff()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(100161);

	ABuff_BoostHealOverTime_C_TickBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.StartBuffBlueprint
// (Event, Public, BlueprintEvent)

void ABuff_BoostHealOverTime_C::StartBuffBlueprint()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(100160);

	ABuff_BoostHealOverTime_C_StartBuffBlueprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.StopBuffBlueprint
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bCanceled                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BoostHealOverTime_C::StopBuffBlueprint(bool* bCanceled)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(100158);

	ABuff_BoostHealOverTime_C_StopBuffBlueprint_Params params;
	params.bCanceled = bCanceled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_BoostHealOverTime.Buff_BoostHealOverTime_C.ExecuteUbergraph_Buff_BoostHealOverTime
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_BoostHealOverTime_C::ExecuteUbergraph_Buff_BoostHealOverTime(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(100140);

	ABuff_BoostHealOverTime_C_ExecuteUbergraph_Buff_BoostHealOverTime_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
