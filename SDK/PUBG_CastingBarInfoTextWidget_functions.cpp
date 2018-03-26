// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CastingBarInfoTextWidget_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.On_CastingInfoCancelMsgLayer_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UCastingBarInfoTextWidget_C::On_CastingInfoCancelMsgLayer_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(156771);

	UCastingBarInfoTextWidget_C_On_CastingInfoCancelMsgLayer_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.OnCastCancleorFinish
// (Public, BlueprintCallable, BlueprintEvent)

void UCastingBarInfoTextWidget_C::OnCastCancleorFinish()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(156770);

	UCastingBarInfoTextWidget_C_OnCastCancleorFinish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.OnCastStart
// (Public, BlueprintCallable, BlueprintEvent)

void UCastingBarInfoTextWidget_C::OnCastStart()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(156769);

	UCastingBarInfoTextWidget_C_OnCastStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.Get_CastingInfoCancelMsgLayer_ContentColorAndOpacity_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FLinearColor UCastingBarInfoTextWidget_C::Get_CastingInfoCancelMsgLayer_ContentColorAndOpacity_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(156763);

	UCastingBarInfoTextWidget_C_Get_CastingInfoCancelMsgLayer_ContentColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.On_CastingInfoCancelMsgBox_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UCastingBarInfoTextWidget_C::On_CastingInfoCancelMsgBox_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(156761);

	UCastingBarInfoTextWidget_C_On_CastingInfoCancelMsgBox_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.Get_KeyText_Text_1
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCastingBarInfoTextWidget_C::Get_KeyText_Text_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(156757);

	UCastingBarInfoTextWidget_C_Get_KeyText_Text_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.OnPrepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UCastingBarInfoTextWidget_C::OnPrepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(156755);

	UCastingBarInfoTextWidget_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.GetVisibility_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ESlateVisibility UCastingBarInfoTextWidget_C::GetVisibility_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(156742);

	UCastingBarInfoTextWidget_C_GetVisibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.GetCastName
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCastingBarInfoTextWidget_C::GetCastName()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(156716);

	UCastingBarInfoTextWidget_C_GetCastName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry*              MyGeometry                     (Parm, IsPlainOldData)
// float*                         InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UCastingBarInfoTextWidget_C::Tick(struct FGeometry* MyGeometry, float* InDeltaTime)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(156713);

	UCastingBarInfoTextWidget_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCastingBarInfoTextWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(156712);

	UCastingBarInfoTextWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCastingBarInfoTextWidget_C::Destruct()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(156711);

	UCastingBarInfoTextWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CastingBarInfoTextWidget.CastingBarInfoTextWidget_C.ExecuteUbergraph_CastingBarInfoTextWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCastingBarInfoTextWidget_C::ExecuteUbergraph_CastingBarInfoTextWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(156688);

	UCastingBarInfoTextWidget_C_ExecuteUbergraph_CastingBarInfoTextWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
