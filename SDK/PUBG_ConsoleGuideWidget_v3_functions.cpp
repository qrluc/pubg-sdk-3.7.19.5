// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ConsoleGuideWidget_v3_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleGuideWidget_v3.ConsoleGuideWidget_v3_C.SetActiveWidget
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int*                           WidgetIndex                    (Parm, ZeroConstructor, IsPlainOldData)
// EGuideKeyType*                 GuideKeyType                   (Parm, ZeroConstructor, IsPlainOldData)

void UConsoleGuideWidget_v3_C::SetActiveWidget(int* WidgetIndex, EGuideKeyType* GuideKeyType)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(60663);

	UConsoleGuideWidget_v3_C_SetActiveWidget_Params params;
	params.WidgetIndex = WidgetIndex;
	params.GuideKeyType = GuideKeyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ConsoleGuideWidget_v3.ConsoleGuideWidget_v3_C.ExecuteUbergraph_ConsoleGuideWidget_v3
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UConsoleGuideWidget_v3_C::ExecuteUbergraph_ConsoleGuideWidget_v3(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(60657);

	UConsoleGuideWidget_v3_C_ExecuteUbergraph_ConsoleGuideWidget_v3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
