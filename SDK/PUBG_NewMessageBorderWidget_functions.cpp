// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_NewMessageBorderWidget_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function NewMessageBorderWidget.NewMessageBorderWidget_C.HasMessage
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bHasMessage                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewMessageBorderWidget_C::HasMessage(bool* bHasMessage)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(153392);

	UNewMessageBorderWidget_C_HasMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bHasMessage != nullptr)
		*bHasMessage = params.bHasMessage;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.CheckWantRequestRender
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           bRequestRender                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewMessageBorderWidget_C::CheckWantRequestRender(bool* bRequestRender)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(153389);

	UNewMessageBorderWidget_C_CheckWantRequestRender_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bRequestRender != nullptr)
		*bRequestRender = params.bRequestRender;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.TickMove
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData)

void UNewMessageBorderWidget_C::TickMove(float Time)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(153328);

	UNewMessageBorderWidget_C_TickMove_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.UpdatePositionInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNewMessageBorderWidget_C::UpdatePositionInfo()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(153298);

	UNewMessageBorderWidget_C_UpdatePositionInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.IsFull
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           Full                           (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UNewMessageBorderWidget_C::IsFull(bool* Full)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(153294);

	UNewMessageBorderWidget_C_IsFull_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Full != nullptr)
		*Full = params.Full;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.SetSizeRule
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<ESlateSizeRule>    TopSize                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ESlateSizeRule>    BottomSize                     (Parm, ZeroConstructor, IsPlainOldData)

void UNewMessageBorderWidget_C::SetSizeRule(TEnumAsByte<ESlateSizeRule> TopSize, TEnumAsByte<ESlateSizeRule> BottomSize)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(153287);

	UNewMessageBorderWidget_C_SetSizeRule_Params params;
	params.TopSize = TopSize;
	params.BottomSize = BottomSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.OnRemoveMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNewSystemMessageWidget_C* SystemMessageWidget            (Parm, ZeroConstructor, IsPlainOldData)

void UNewMessageBorderWidget_C::OnRemoveMessage(class UNewSystemMessageWidget_C* SystemMessageWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(153284);

	UNewMessageBorderWidget_C_OnRemoveMessage_Params params;
	params.SystemMessageWidget = SystemMessageWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.AddMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNewSystemMessageWidget_C* Message                        (Parm, ZeroConstructor, IsPlainOldData)

void UNewMessageBorderWidget_C::AddMessage(class UNewSystemMessageWidget_C* Message)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(152748);

	UNewMessageBorderWidget_C_AddMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.DisplayKilledMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDeathMessage           DeathMessage                   (Parm)

void UNewMessageBorderWidget_C::DisplayKilledMessage(const struct FDeathMessage& DeathMessage)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(152739);

	UNewMessageBorderWidget_C_DisplayKilledMessage_Params params;
	params.DeathMessage = DeathMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNewMessageBorderWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(152738);

	UNewMessageBorderWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UNewMessageBorderWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(152735);

	UNewMessageBorderWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NewMessageBorderWidget.NewMessageBorderWidget_C.ExecuteUbergraph_NewMessageBorderWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UNewMessageBorderWidget_C::ExecuteUbergraph_NewMessageBorderWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(152730);

	UNewMessageBorderWidget_C_ExecuteUbergraph_NewMessageBorderWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
