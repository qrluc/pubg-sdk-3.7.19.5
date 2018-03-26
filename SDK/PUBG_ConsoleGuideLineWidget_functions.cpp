// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ConsoleGuideLineWidget_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ConsoleGuideLineWidget.ConsoleGuideLineWidget_C.SetActiveWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EGuideKeyType                  GuideKeyType                   (Parm, ZeroConstructor, IsPlainOldData)

void UConsoleGuideLineWidget_C::SetActiveWidget(EGuideKeyType GuideKeyType)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(60691);

	UConsoleGuideLineWidget_C_SetActiveWidget_Params params;
	params.GuideKeyType = GuideKeyType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
