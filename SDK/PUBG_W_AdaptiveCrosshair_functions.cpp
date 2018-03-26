// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_W_AdaptiveCrosshair_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.DecideAdaptiveCrosshairColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_AdaptiveCrosshair_C::DecideAdaptiveCrosshairColor()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(98701);

	UW_AdaptiveCrosshair_C_DecideAdaptiveCrosshairColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.On_CanvasBase_Prepass_1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UW_AdaptiveCrosshair_C::On_CanvasBase_Prepass_1(class UWidget* BoundWidget)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(98689);

	UW_AdaptiveCrosshair_C_On_CanvasBase_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetShowCrosshairWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData)

void UW_AdaptiveCrosshair_C::SetShowCrosshairWidget(bool bShow)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(98680);

	UW_AdaptiveCrosshair_C_SetShowCrosshairWidget_Params params;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetCenterCrosshairClass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EWeaponClass                   InClass                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bHasWeapon                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_AdaptiveCrosshair_C::SetCenterCrosshairClass(EWeaponClass InClass, bool bHasWeapon)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(98675);

	UW_AdaptiveCrosshair_C_SetCenterCrosshairClass_Params params;
	params.InClass = InClass;
	params.bHasWeapon = bHasWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetCenterCrosshairVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_AdaptiveCrosshair_C::SetCenterCrosshairVisibility(bool bVisible)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(98666);

	UW_AdaptiveCrosshair_C_SetCenterCrosshairVisibility_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetCenterCrosshairDeviation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InDeviation                    (Parm, ZeroConstructor, IsPlainOldData)

void UW_AdaptiveCrosshair_C::SetCenterCrosshairDeviation(float InDeviation)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(98631);

	UW_AdaptiveCrosshair_C_SetCenterCrosshairDeviation_Params params;
	params.InDeviation = InDeviation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetAdaptiveCrosshairVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_AdaptiveCrosshair_C::SetAdaptiveCrosshairVisibility(bool bVisible)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(98622);

	UW_AdaptiveCrosshair_C_SetAdaptiveCrosshairVisibility_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_AdaptiveCrosshair.W_AdaptiveCrosshair_C.SetAdaptiveCrosshairPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D               ScreenPosition                 (Parm, IsPlainOldData)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void UW_AdaptiveCrosshair_C::SetAdaptiveCrosshairPosition(const struct FVector2D& ScreenPosition, float Distance)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(98612);

	UW_AdaptiveCrosshair_C_SetAdaptiveCrosshairPosition_Params params;
	params.ScreenPosition = ScreenPosition;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
