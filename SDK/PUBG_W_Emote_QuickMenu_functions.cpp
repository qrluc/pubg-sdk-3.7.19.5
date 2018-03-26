// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_W_Emote_QuickMenu_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ShowContainer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanel*            InCP                           (Parm, ZeroConstructor, IsPlainOldData)

void UW_Emote_QuickMenu_C::ShowContainer(class UCanvasPanel* InCP)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(98175);

	UW_Emote_QuickMenu_C_ShowContainer_Params params;
	params.InCP = InCP;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.PopulateDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_Emote_QuickMenu_C::PopulateDown()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(98135);

	UW_Emote_QuickMenu_C_PopulateDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ShowQuickMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UW_Emote_QuickMenu_C::ShowQuickMenu()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(98134);

	UW_Emote_QuickMenu_C_ShowQuickMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.HideQuickMenu
// (Public, BlueprintCallable, BlueprintEvent)

void UW_Emote_QuickMenu_C::HideQuickMenu()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(98133);

	UW_Emote_QuickMenu_C_HideQuickMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.RecalcOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Col                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Row                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FText                   TooltipEmoteName               (Parm)

void UW_Emote_QuickMenu_C::RecalcOpacity(int Col, int Row, const struct FText& TooltipEmoteName)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(58721);

	UW_Emote_QuickMenu_C_RecalcOpacity_Params params;
	params.Col = Col;
	params.Row = Row;
	params.TooltipEmoteName = TooltipEmoteName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.PopulateContainer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ColOffset                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          RowOffset                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxWidgetCount                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            MinEmoteIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// int                            MaxEmoteIndex                  (Parm, ZeroConstructor, IsPlainOldData)
// class UCanvasPanel*            CP_Ref                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            ButtonLC                       (Parm, IsPlainOldData)
// struct FVector2D               InAnchorMin                    (Parm, IsPlainOldData)
// struct FVector2D               InAnchorMax                    (Parm, IsPlainOldData)
// struct FVector2D               InAlignment                    (Parm, IsPlainOldData)
// bool                           bSwitchXY                      (Parm, ZeroConstructor, IsPlainOldData)

void UW_Emote_QuickMenu_C::PopulateContainer(float ColOffset, float RowOffset, int MaxWidgetCount, int MinEmoteIndex, int MaxEmoteIndex, class UCanvasPanel* CP_Ref, const struct FLinearColor& ButtonLC, const struct FVector2D& InAnchorMin, const struct FVector2D& InAnchorMax, const struct FVector2D& InAlignment, bool bSwitchXY)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(83970);

	UW_Emote_QuickMenu_C_PopulateContainer_Params params;
	params.ColOffset = ColOffset;
	params.RowOffset = RowOffset;
	params.MaxWidgetCount = MaxWidgetCount;
	params.MinEmoteIndex = MinEmoteIndex;
	params.MaxEmoteIndex = MaxEmoteIndex;
	params.CP_Ref = CP_Ref;
	params.ButtonLC = ButtonLC;
	params.InAnchorMin = InAnchorMin;
	params.InAnchorMax = InAnchorMax;
	params.InAlignment = InAlignment;
	params.bSwitchXY = bSwitchXY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_Emote_QuickMenu_C::Construct()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(83971);

	UW_Emote_QuickMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_UP_Category_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UW_Emote_QuickMenu_C::BndEvt__B_UP_Category_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(83972);

	UW_Emote_QuickMenu_C_BndEvt__B_UP_Category_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FPointerEvent*          MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)

void UW_Emote_QuickMenu_C::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(83974);

	UW_Emote_QuickMenu_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_DOWN_Category_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UW_Emote_QuickMenu_C::BndEvt__B_DOWN_Category_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(83975);

	UW_Emote_QuickMenu_C_BndEvt__B_DOWN_Category_K2Node_ComponentBoundEvent_107_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.Menu Close
// (BlueprintCallable, BlueprintEvent)

void UW_Emote_QuickMenu_C::Menu_Close()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(83976);

	UW_Emote_QuickMenu_C_Menu_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.BndEvt__B_Right_Category_K2Node_ComponentBoundEvent_209_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UW_Emote_QuickMenu_C::BndEvt__B_Right_Category_K2Node_ComponentBoundEvent_209_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(83977);

	UW_Emote_QuickMenu_C_BndEvt__B_Right_Category_K2Node_ComponentBoundEvent_209_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_Emote_QuickMenu.W_Emote_QuickMenu_C.ExecuteUbergraph_W_Emote_QuickMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_Emote_QuickMenu_C::ExecuteUbergraph_W_Emote_QuickMenu(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(83981);

	UW_Emote_QuickMenu_C_ExecuteUbergraph_W_Emote_QuickMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
