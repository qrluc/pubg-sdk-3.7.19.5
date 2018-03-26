// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MapStatAnalyzer_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MapStatAnalyzer.MapStatAnalyzer_C.ComputeWorldSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Min                            (Parm, IsPlainOldData)
// struct FVector                 Max                            (Parm, IsPlainOldData)

void AMapStatAnalyzer_C::ComputeWorldSize(const struct FVector& Min, const struct FVector& Max)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(83873);

	AMapStatAnalyzer_C_ComputeWorldSize_Params params;
	params.Min = Min;
	params.Max = Max;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMapStatAnalyzer_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(83872);

	AMapStatAnalyzer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMapStatAnalyzer_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(83871);

	AMapStatAnalyzer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MapStatAnalyzer.MapStatAnalyzer_C.ExecuteUbergraph_MapStatAnalyzer
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AMapStatAnalyzer_C::ExecuteUbergraph_MapStatAnalyzer(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(83654);

	AMapStatAnalyzer_C_ExecuteUbergraph_MapStatAnalyzer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
