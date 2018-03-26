// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_NewMatchResultWidget_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NewMatchResultWidget.NewMatchResultWidget_C.On_DeathCamHorizontal_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UNewMatchResultWidget_C::On_DeathCamHorizontal_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154914);

	UNewMatchResultWidget_C_On_DeathCamHorizontal_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.Get_DeathCamHorizontal_Visibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UNewMatchResultWidget_C::Get_DeathCamHorizontal_Visibility_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154910);

	UNewMatchResultWidget_C_Get_DeathCamHorizontal_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.OnPrepass_GamepadSpectaingButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UNewMatchResultWidget_C::OnPrepass_GamepadSpectaingButton(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154886);

	UNewMatchResultWidget_C_OnPrepass_GamepadSpectaingButton_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.GetBackground_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UNewMatchResultWidget_C::GetBackground_2()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154878);

	UNewMatchResultWidget_C_GetBackground_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.GetBackground_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateBrush UNewMatchResultWidget_C::GetBackground_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154870);

	UNewMatchResultWidget_C_GetBackground_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.SwapHumanZombieBoxPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewMatchResultWidget_C::SwapHumanZombieBoxPosition()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154864);

	UNewMatchResultWidget_C_SwapHumanZombieBoxPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.GetText_2
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UNewMatchResultWidget_C::GetText_2()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154858);

	UNewMatchResultWidget_C_GetText_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.GetText_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UNewMatchResultWidget_C::GetText_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154852);

	UNewMatchResultWidget_C_GetText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.UpdateZombieGroup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewMatchResultWidget_C::UpdateZombieGroup()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154829);

	UNewMatchResultWidget_C_UpdateZombieGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.UpdateHumanGroup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewMatchResultWidget_C::UpdateHumanGroup()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154818);

	UNewMatchResultWidget_C_UpdateHumanGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.UpdateZombieModeMatchResult
// (Public, BlueprintCallable, BlueprintEvent)

void UNewMatchResultWidget_C::UpdateZombieModeMatchResult()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154806);

	UNewMatchResultWidget_C_UpdateZombieModeMatchResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.Get_TextBlock_72_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UNewMatchResultWidget_C::Get_TextBlock_72_Text_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154797);

	UNewMatchResultWidget_C_Get_TextBlock_72_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.Get_ButtonKillcam_ToolTipText_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UNewMatchResultWidget_C::Get_ButtonKillcam_ToolTipText_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154788);

	UNewMatchResultWidget_C_Get_ButtonKillcam_ToolTipText_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.On_ButtonKillcam_Prepass_1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UNewMatchResultWidget_C::On_ButtonKillcam_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154778);

	UNewMatchResultWidget_C_On_ButtonKillcam_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.GetAliveTeamMemberCount
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Count                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewMatchResultWidget_C::GetAliveTeamMemberCount(int* Count)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154773);

	UNewMatchResultWidget_C_GetAliveTeamMemberCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.GetTslGameState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATslGameState*           TslGameState                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewMatchResultWidget_C::GetTslGameState(class ATslGameState** TslGameState)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154767);

	UNewMatchResultWidget_C_GetTslGameState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TslGameState != nullptr)
		*TslGameState = params.TslGameState;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.GetTslPlayerState
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATslPlayerState*         PlayerState                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewMatchResultWidget_C::GetTslPlayerState(class ATslPlayerState** PlayerState)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154757);

	UNewMatchResultWidget_C_GetTslPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerState != nullptr)
		*PlayerState = params.PlayerState;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.On_ButtonReportPrepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UNewMatchResultWidget_C::On_ButtonReportPrepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154729);

	UNewMatchResultWidget_C_On_ButtonReportPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.UpdateObserverMatchResult
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewMatchResultWidget_C::UpdateObserverMatchResult()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154687);

	UNewMatchResultWidget_C_UpdateObserverMatchResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.IsGameOver
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           return_value                   (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewMatchResultWidget_C::IsGameOver(bool* return_value)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154660);

	UNewMatchResultWidget_C_IsGameOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (return_value != nullptr)
		*return_value = params.return_value;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.SetResultScoreValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewMatchResultWidget_C::SetResultScoreValues()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154616);

	UNewMatchResultWidget_C_SetResultScoreValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.SetReferences
// (Public, BlueprintCallable, BlueprintEvent)

void UNewMatchResultWidget_C::SetReferences()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154607);

	UNewMatchResultWidget_C_SetReferences_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.On_MatchResultWindow_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UNewMatchResultWidget_C::On_MatchResultWindow_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154577);

	UNewMatchResultWidget_C_On_MatchResultWindow_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.On_DetailScoreLayer_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UNewMatchResultWidget_C::On_DetailScoreLayer_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154552);

	UNewMatchResultWidget_C_On_DetailScoreLayer_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.On_BigRankBox_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UNewMatchResultWidget_C::On_BigRankBox_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154527);

	UNewMatchResultWidget_C_On_BigRankBox_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.SetResultDefaultValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewMatchResultWidget_C::SetResultDefaultValues()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154513);

	UNewMatchResultWidget_C_SetResultDefaultValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.On_ButtonSpectator_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UNewMatchResultWidget_C::On_ButtonSpectator_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154460);

	UNewMatchResultWidget_C_On_ButtonSpectator_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.GoToLobby
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPopupButtonID                 ButtonID                       (Parm, ZeroConstructor, IsPlainOldData)

void UNewMatchResultWidget_C::GoToLobby(EPopupButtonID ButtonID)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154452);

	UNewMatchResultWidget_C_GoToLobby_Params params;
	params.ButtonID = ButtonID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.OnActionInput
// (BlueprintCallable, BlueprintEvent)

void UNewMatchResultWidget_C::OnActionInput()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154451);

	UNewMatchResultWidget_C_OnActionInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.OnHiddenWidget
// (BlueprintCallable, BlueprintEvent)

void UNewMatchResultWidget_C::OnHiddenWidget()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154450);

	UNewMatchResultWidget_C_OnHiddenWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.ShowLobbyPopup
// (BlueprintCallable, BlueprintEvent)

void UNewMatchResultWidget_C::ShowLobbyPopup()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154449);

	UNewMatchResultWidget_C_ShowLobbyPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNewMatchResultWidget_C::Destruct()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154448);

	UNewMatchResultWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewMatchResultWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154447);

	UNewMatchResultWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.BndEvt__ButtonSpectator_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewMatchResultWidget_C::BndEvt__ButtonSpectator_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154446);

	UNewMatchResultWidget_C_BndEvt__ButtonSpectator_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewMatchResultWidget_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154445);

	UNewMatchResultWidget_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.XBoxOnOk
// (BlueprintCallable, BlueprintEvent)

void UNewMatchResultWidget_C::XBoxOnOk()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154444);

	UNewMatchResultWidget_C_XBoxOnOk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.BndEvt__ButtonLobby_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewMatchResultWidget_C::BndEvt__ButtonLobby_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154443);

	UNewMatchResultWidget_C_BndEvt__ButtonLobby_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.BndEvt__ButtonReport_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewMatchResultWidget_C::BndEvt__ButtonReport_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154442);

	UNewMatchResultWidget_C_BndEvt__ButtonReport_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UNewMatchResultWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154439);

	UNewMatchResultWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.BndEvt__ButtonKillcam_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNewMatchResultWidget_C::BndEvt__ButtonKillcam_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154438);

	UNewMatchResultWidget_C_BndEvt__ButtonKillcam_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNewMatchResultWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154437);

	UNewMatchResultWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.OnSpectator
// (BlueprintCallable, BlueprintEvent)

void UNewMatchResultWidget_C::OnSpectator()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154436);

	UNewMatchResultWidget_C_OnSpectator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.OnCustomGameObserverMatchResult
// (BlueprintCallable, BlueprintEvent)

void UNewMatchResultWidget_C::OnCustomGameObserverMatchResult()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154435);

	UNewMatchResultWidget_C_OnCustomGameObserverMatchResult_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.OnDeathCamPad
// (BlueprintCallable, BlueprintEvent)

void UNewMatchResultWidget_C::OnDeathCamPad()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154434);

	UNewMatchResultWidget_C_OnDeathCamPad_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMatchResultWidget.NewMatchResultWidget_C.ExecuteUbergraph_NewMatchResultWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UNewMatchResultWidget_C::ExecuteUbergraph_NewMatchResultWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(154361);

	UNewMatchResultWidget_C_ExecuteUbergraph_NewMatchResultWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
