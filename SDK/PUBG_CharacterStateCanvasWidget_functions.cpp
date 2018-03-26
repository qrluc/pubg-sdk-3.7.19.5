// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_CharacterStateCanvasWidget_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharacterStateCanvasWidget.CharacterStateCanvasWidget_C.CharacterStateReplayTimelineDown
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterStateCanvasWidget_C::CharacterStateReplayTimelineDown()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(62734);

	UCharacterStateCanvasWidget_C_CharacterStateReplayTimelineDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterStateCanvasWidget.CharacterStateCanvasWidget_C.CharacterStateReplayTimelineUp
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterStateCanvasWidget_C::CharacterStateReplayTimelineUp()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(62729);

	UCharacterStateCanvasWidget_C_CharacterStateReplayTimelineUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterStateCanvasWidget.CharacterStateCanvasWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCharacterStateCanvasWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(62728);

	UCharacterStateCanvasWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterStateCanvasWidget.CharacterStateCanvasWidget_C.ExecuteUbergraph_CharacterStateCanvasWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCharacterStateCanvasWidget_C::ExecuteUbergraph_CharacterStateCanvasWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(62712);

	UCharacterStateCanvasWidget_C_ExecuteUbergraph_CharacterStateCanvasWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
