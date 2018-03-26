// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_VoiceSettingWidget_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VoiceSettingWidget.VoiceSettingWidget_C.GetVoiceChannelByOption
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           GlobalChannel                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           TeamChannel                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVoiceSettingWidget_C::GetVoiceChannelByOption(bool* GlobalChannel, bool* TeamChannel)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(158516);

	UVoiceSettingWidget_C_GetVoiceChannelByOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GlobalChannel != nullptr)
		*GlobalChannel = params.GlobalChannel;
	if (TeamChannel != nullptr)
		*TeamChannel = params.TeamChannel;
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.GetMyVoiceByOption
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           bIsMuted                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           bUsePushToTalk                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UVoiceSettingWidget_C::GetMyVoiceByOption(bool* bIsMuted, bool* bUsePushToTalk)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(158510);

	UVoiceSettingWidget_C_GetMyVoiceByOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsMuted != nullptr)
		*bIsMuted = params.bIsMuted;
	if (bUsePushToTalk != nullptr)
		*bUsePushToTalk = params.bUsePushToTalk;
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.GetVoiceChannelOptionString
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 OptionString                   (Parm, OutParm, ZeroConstructor)

void UVoiceSettingWidget_C::GetVoiceChannelOptionString(struct FString* OptionString)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(158506);

	UVoiceSettingWidget_C_GetVoiceChannelOptionString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptionString != nullptr)
		*OptionString = params.OptionString;
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.GetMyVoiceOptionString
// (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FString                 OptionString                   (Parm, OutParm, ZeroConstructor)

void UVoiceSettingWidget_C::GetMyVoiceOptionString(struct FString* OptionString)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(157795);

	UVoiceSettingWidget_C_GetMyVoiceOptionString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OptionString != nullptr)
		*OptionString = params.OptionString;
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.IsChanged
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UVoiceSettingWidget_C::IsChanged()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(157776);

	UVoiceSettingWidget_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.UpdateVoiceSettingWidget
// (Public, BlueprintCallable, BlueprintEvent)

void UVoiceSettingWidget_C::UpdateVoiceSettingWidget()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(157769);

	UVoiceSettingWidget_C_UpdateVoiceSettingWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UVoiceSettingWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(157768);

	UVoiceSettingWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.OnApply
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UVoiceSettingWidget_C::OnApply()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(157767);

	UVoiceSettingWidget_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.OnDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UVoiceSettingWidget_C::OnDefault()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(157766);

	UVoiceSettingWidget_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.OnReset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UVoiceSettingWidget_C::OnReset()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(157765);

	UVoiceSettingWidget_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoiceSettingWidget.VoiceSettingWidget_C.ExecuteUbergraph_VoiceSettingWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UVoiceSettingWidget_C::ExecuteUbergraph_VoiceSettingWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(157755);

	UVoiceSettingWidget_C_ExecuteUbergraph_VoiceSettingWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
