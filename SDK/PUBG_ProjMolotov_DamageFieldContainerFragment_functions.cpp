// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ProjMolotov_DamageFieldContainerFragment_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjMolotov_DamageFieldContainerFragment.ProjMolotov_DamageFieldContainerFragment_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjMolotov_DamageFieldContainerFragment_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(111774);

	AProjMolotov_DamageFieldContainerFragment_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
