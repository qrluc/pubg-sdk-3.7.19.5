// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ReplaySettings_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ReplaySettings.ReplaySettings_C.Get_KillcamComboBox_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UReplaySettings_C::Get_KillcamComboBox_Visibility_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(158041);

	UReplaySettings_C_Get_KillcamComboBox_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReplaySettings.ReplaySettings_C.Get_ReplayComboBox_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UReplaySettings_C::Get_ReplayComboBox_Visibility_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(158030);

	UReplaySettings_C_Get_ReplayComboBox_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReplaySettings.ReplaySettings_C.Get_ReplayOption_Editable
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UReplaySettings_C::Get_ReplayOption_Editable()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(158027);

	UReplaySettings_C_Get_ReplayOption_Editable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReplaySettings.ReplaySettings_C.ApplyByCurrentSelectedSettings
// (Public, BlueprintCallable, BlueprintEvent)

void UReplaySettings_C::ApplyByCurrentSelectedSettings()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(158016);

	UReplaySettings_C_ApplyByCurrentSelectedSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplaySettings.ReplaySettings_C.InitReplaySettings
// (Public, BlueprintCallable, BlueprintEvent)

void UReplaySettings_C::InitReplaySettings()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(158003);

	UReplaySettings_C_InitReplaySettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplaySettings.ReplaySettings_C.IsChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UReplaySettings_C::IsChanged()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(157989);

	UReplaySettings_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReplaySettings.ReplaySettings_C.IsEnableApply
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UReplaySettings_C::IsEnableApply()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(157986);

	UReplaySettings_C_IsEnableApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ReplaySettings.ReplaySettings_C.SetToDefault
// (Public, BlueprintCallable, BlueprintEvent)

void UReplaySettings_C::SetToDefault()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(157970);

	UReplaySettings_C_SetToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplaySettings.ReplaySettings_C.OnDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UReplaySettings_C::OnDefault()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(157969);

	UReplaySettings_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplaySettings.ReplaySettings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UReplaySettings_C::Construct()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(157968);

	UReplaySettings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplaySettings.ReplaySettings_C.OnApply
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UReplaySettings_C::OnApply()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(157967);

	UReplaySettings_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ReplaySettings.ReplaySettings_C.ExecuteUbergraph_ReplaySettings
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UReplaySettings_C::ExecuteUbergraph_ReplaySettings(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(157965);

	UReplaySettings_C_ExecuteUbergraph_ReplaySettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
