// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Task_GasWarning_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Task_GasWarning.Task_GasWarning_C.GetMinSecText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Seconds                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Full_text_for_MIN_SEC          (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   formatted_text                 (Parm, OutParm)

void UTask_GasWarning_C::GetMinSecText(float Seconds, bool Full_text_for_MIN_SEC, struct FText* formatted_text)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134576);

	UTask_GasWarning_C_GetMinSecText_Params params;
	params.Seconds = Seconds;
	params.Full_text_for_MIN_SEC = Full_text_for_MIN_SEC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (formatted_text != nullptr)
		*formatted_text = params.formatted_text;
}


// Function Task_GasWarning.Task_GasWarning_C.PoisionWarningBroadcast
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleRoyaleModeController* ModeController                 (Parm, ZeroConstructor, IsPlainOldData)

void UTask_GasWarning_C::PoisionWarningBroadcast(class ABattleRoyaleModeController* ModeController)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134557);

	UTask_GasWarning_C_PoisionWarningBroadcast_Params params;
	params.ModeController = ModeController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_GasWarning.Task_GasWarning_C.InitPoisonWarningTimeIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABattleRoyaleModeController* ModeController                 (Parm, ZeroConstructor, IsPlainOldData)

void UTask_GasWarning_C::InitPoisonWarningTimeIndex(class ABattleRoyaleModeController* ModeController)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134543);

	UTask_GasWarning_C_InitPoisonWarningTimeIndex_Params params;
	params.ModeController = ModeController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_GasWarning.Task_GasWarning_C.ReceiveTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void UTask_GasWarning_C::ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134540);

	UTask_GasWarning_C_ReceiveTick_Params params;
	params.OwnerActor = OwnerActor;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_GasWarning.Task_GasWarning_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_GasWarning_C::ReceiveExecute(class AActor** OwnerActor)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134538);

	UTask_GasWarning_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Task_GasWarning.Task_GasWarning_C.ExecuteUbergraph_Task_GasWarning
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTask_GasWarning_C::ExecuteUbergraph_Task_GasWarning(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134502);

	UTask_GasWarning_C_ExecuteUbergraph_Task_GasWarning_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
