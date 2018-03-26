// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_W_EmoteButton2_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_EmoteButton2.W_EmoteButton2_C.RecalcOpacity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Row                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Col                            (Parm, ZeroConstructor, IsPlainOldData)

void UW_EmoteButton2_C::RecalcOpacity(int Row, int Col)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(84100);

	UW_EmoteButton2_C_RecalcOpacity_Params params;
	params.Row = Row;
	params.Col = Col;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_EmoteButton2.W_EmoteButton2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_EmoteButton2_C::Construct()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(84101);

	UW_EmoteButton2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_EmoteButton2.W_EmoteButton2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_EmoteButton2_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(84102);

	UW_EmoteButton2_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_EmoteButton2.W_EmoteButton2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_41_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UW_EmoteButton2_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_41_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(84103);

	UW_EmoteButton2_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_41_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_EmoteButton2.W_EmoteButton2_C.ExecuteUbergraph_W_EmoteButton2
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_EmoteButton2_C::ExecuteUbergraph_W_EmoteButton2(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(84107);

	UW_EmoteButton2_C_ExecuteUbergraph_W_EmoteButton2_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
