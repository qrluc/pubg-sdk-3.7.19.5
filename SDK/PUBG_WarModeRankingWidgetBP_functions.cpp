// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WarModeRankingWidgetBP_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WarModeRankingWidgetBP.WarModeRankingWidgetBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWarModeRankingWidgetBP_C::Construct()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(177215);

	UWarModeRankingWidgetBP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WarModeRankingWidgetBP.WarModeRankingWidgetBP_C.ExecuteUbergraph_WarModeRankingWidgetBP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWarModeRankingWidgetBP_C::ExecuteUbergraph_WarModeRankingWidgetBP(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(177213);

	UWarModeRankingWidgetBP_C_ExecuteUbergraph_WarModeRankingWidgetBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
