// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_KeySettingWidget_BP_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function KeySettingWidget_BP.KeySettingWidget_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UKeySettingWidget_BP_C::Construct()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(157661);

	UKeySettingWidget_BP_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeySettingWidget_BP.KeySettingWidget_BP_C.OnDefault
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UKeySettingWidget_BP_C::OnDefault()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(157660);

	UKeySettingWidget_BP_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeySettingWidget_BP.KeySettingWidget_BP_C.OnReset
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UKeySettingWidget_BP_C::OnReset()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(157659);

	UKeySettingWidget_BP_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KeySettingWidget_BP.KeySettingWidget_BP_C.ExecuteUbergraph_KeySettingWidget_BP
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UKeySettingWidget_BP_C::ExecuteUbergraph_KeySettingWidget_BP(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(157657);

	UKeySettingWidget_BP_C_ExecuteUbergraph_KeySettingWidget_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
