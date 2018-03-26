// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buff_SpeedUp2_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_SpeedUp2.Buff_SpeedUp2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABuff_SpeedUp2_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99978);

	ABuff_SpeedUp2_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpeedUp2.Buff_SpeedUp2_C.StartBuffBlueprint
// (Event, Public, BlueprintEvent)

void ABuff_SpeedUp2_C::StartBuffBlueprint()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99977);

	ABuff_SpeedUp2_C_StartBuffBlueprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpeedUp2.Buff_SpeedUp2_C.StopBuffBlueprint
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bCanceled                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpeedUp2_C::StopBuffBlueprint(bool* bCanceled)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99975);

	ABuff_SpeedUp2_C_StopBuffBlueprint_Params params;
	params.bCanceled = bCanceled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_SpeedUp2.Buff_SpeedUp2_C.ExecuteUbergraph_Buff_SpeedUp2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_SpeedUp2_C::ExecuteUbergraph_Buff_SpeedUp2(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99963);

	ABuff_SpeedUp2_C_ExecuteUbergraph_Buff_SpeedUp2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
