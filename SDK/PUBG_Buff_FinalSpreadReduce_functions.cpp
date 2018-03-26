// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buff_FinalSpreadReduce_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABuff_FinalSpreadReduce_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134489);

	ABuff_FinalSpreadReduce_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C.StartBuffBlueprint
// (Event, Public, BlueprintEvent)

void ABuff_FinalSpreadReduce_C::StartBuffBlueprint()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134488);

	ABuff_FinalSpreadReduce_C_StartBuffBlueprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C.StopBuffBlueprint
// (Event, Public, BlueprintEvent)
// Parameters:
// bool*                          bCanceled                      (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FinalSpreadReduce_C::StopBuffBlueprint(bool* bCanceled)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134486);

	ABuff_FinalSpreadReduce_C_StopBuffBlueprint_Params params;
	params.bCanceled = bCanceled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C.ExecuteUbergraph_Buff_FinalSpreadReduce
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_FinalSpreadReduce_C::ExecuteUbergraph_Buff_FinalSpreadReduce(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134476);

	ABuff_FinalSpreadReduce_C_ExecuteUbergraph_Buff_FinalSpreadReduce_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
