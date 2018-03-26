// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_P_AquaRail_FrontDrive_FoamRight_BP_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function P_AquaRail_FrontDrive_FoamRight_BP.P_AquaRail_FrontDrive_FoamRight_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AP_AquaRail_FrontDrive_FoamRight_BP_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134711);

	AP_AquaRail_FrontDrive_FoamRight_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function P_AquaRail_FrontDrive_FoamRight_BP.P_AquaRail_FrontDrive_FoamRight_BP_C.OnParameterUpdated
// (Event, Protected, BlueprintEvent)

void AP_AquaRail_FrontDrive_FoamRight_BP_C::OnParameterUpdated()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(134710);

	AP_AquaRail_FrontDrive_FoamRight_BP_C_OnParameterUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function P_AquaRail_FrontDrive_FoamRight_BP.P_AquaRail_FrontDrive_FoamRight_BP_C.ExecuteUbergraph_P_AquaRail_FrontDrive_FoamRight_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AP_AquaRail_FrontDrive_FoamRight_BP_C::ExecuteUbergraph_P_AquaRail_FrontDrive_FoamRight_BP(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(110751);

	AP_AquaRail_FrontDrive_FoamRight_BP_C_ExecuteUbergraph_P_AquaRail_FrontDrive_FoamRight_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
