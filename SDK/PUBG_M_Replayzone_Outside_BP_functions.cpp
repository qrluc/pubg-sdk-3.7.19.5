// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_M_Replayzone_Outside_BP_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function M_Replayzone_Outside_BP.M_Replayzone_Outside_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AM_Replayzone_Outside_BP_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(109592);

	AM_Replayzone_Outside_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_Replayzone_Outside_BP.M_Replayzone_Outside_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AM_Replayzone_Outside_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(109591);

	AM_Replayzone_Outside_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_Replayzone_Outside_BP.M_Replayzone_Outside_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void AM_Replayzone_Outside_BP_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(109589);

	AM_Replayzone_Outside_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_Replayzone_Outside_BP.M_Replayzone_Outside_BP_C.ExecuteUbergraph_M_Replayzone_Outside_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AM_Replayzone_Outside_BP_C::ExecuteUbergraph_M_Replayzone_Outside_BP(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(109581);

	AM_Replayzone_Outside_BP_C_ExecuteUbergraph_M_Replayzone_Outside_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
