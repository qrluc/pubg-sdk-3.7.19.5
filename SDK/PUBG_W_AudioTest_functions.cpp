// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_W_AudioTest_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_AudioTest.W_AudioTest_C.SetDistance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DistanceInMeters               (Parm, ZeroConstructor, IsPlainOldData)

void UW_AudioTest_C::SetDistance(float DistanceInMeters)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134343);

	UW_AudioTest_C_SetDistance_Params params;
	params.DistanceInMeters = DistanceInMeters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AudioTest.W_AudioTest_C.SetText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InText                         (Parm, ZeroConstructor)

void UW_AudioTest_C::SetText(const struct FString& InText)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134340);

	UW_AudioTest_C_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
