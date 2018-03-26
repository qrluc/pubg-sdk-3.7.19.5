// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ObserverMatchResultNameWidget_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.SetSmall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bSmall                         (Parm, ZeroConstructor, IsPlainOldData)

void UObserverMatchResultNameWidget_C::SetSmall(bool bSmall)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154105);

	UObserverMatchResultNameWidget_C_SetSmall_Params params;
	params.bSmall = bSmall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.On_Kills_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UObserverMatchResultNameWidget_C::On_Kills_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154101);

	UObserverMatchResultNameWidget_C_On_Kills_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.GetPlayerNameFontSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            FontSize                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UObserverMatchResultNameWidget_C::GetPlayerNameFontSize(int* FontSize)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154095);

	UObserverMatchResultNameWidget_C_GetPlayerNameFontSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FontSize != nullptr)
		*FontSize = params.FontSize;
}


// Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.GetKillFontSize
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int                            FontSize                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UObserverMatchResultNameWidget_C::GetKillFontSize(int* FontSize)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(153969);

	UObserverMatchResultNameWidget_C_GetKillFontSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FontSize != nullptr)
		*FontSize = params.FontSize;
}


// Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.On_Slash_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UObserverMatchResultNameWidget_C::On_Slash_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(153965);

	UObserverMatchResultNameWidget_C_On_Slash_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.On_PlayerName_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UObserverMatchResultNameWidget_C::On_PlayerName_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(153960);

	UObserverMatchResultNameWidget_C_On_PlayerName_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.On_KillCount_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UObserverMatchResultNameWidget_C::On_KillCount_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(153955);

	UObserverMatchResultNameWidget_C_On_KillCount_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ObserverMatchResultNameWidget.ObserverMatchResultNameWidget_C.OnPrepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UObserverMatchResultNameWidget_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(153946);

	UObserverMatchResultNameWidget_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
