// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_FppWeaponSlotHudWidget_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_FppWeaponSlotHudWidget.BP_FppWeaponSlotHudWidget_C.FppWeaponReplayTimelineDown
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FppWeaponSlotHudWidget_C::FppWeaponReplayTimelineDown()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(62790);

	UBP_FppWeaponSlotHudWidget_C_FppWeaponReplayTimelineDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FppWeaponSlotHudWidget.BP_FppWeaponSlotHudWidget_C.FppWeaponReplayTimelineUp
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_FppWeaponSlotHudWidget_C::FppWeaponReplayTimelineUp()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(62785);

	UBP_FppWeaponSlotHudWidget_C_FppWeaponReplayTimelineUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FppWeaponSlotHudWidget.BP_FppWeaponSlotHudWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_FppWeaponSlotHudWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(62784);

	UBP_FppWeaponSlotHudWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_FppWeaponSlotHudWidget.BP_FppWeaponSlotHudWidget_C.ExecuteUbergraph_BP_FppWeaponSlotHudWidget
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UBP_FppWeaponSlotHudWidget_C::ExecuteUbergraph_BP_FppWeaponSlotHudWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(62762);

	UBP_FppWeaponSlotHudWidget_C_ExecuteUbergraph_BP_FppWeaponSlotHudWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
