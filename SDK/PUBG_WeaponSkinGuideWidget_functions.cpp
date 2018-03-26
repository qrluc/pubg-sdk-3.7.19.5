// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WeaponSkinGuideWidget_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.FadeIn
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponSkinGuideWidget_C::FadeIn()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(64180);

	UWeaponSkinGuideWidget_C_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.ShowLine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 LineWidget                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponSkinGuideWidget_C::ShowLine(class UWidget* LineWidget, bool bShow)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(64170);

	UWeaponSkinGuideWidget_C_ShowLine_Params params;
	params.LineWidget = LineWidget;
	params.bShow = bShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.MouseLeave
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponSkinGuideWidget_C::MouseLeave()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(64169);

	UWeaponSkinGuideWidget_C_MouseLeave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.InitKeys
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ActionName                     (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponSkinGuideWidget_C::InitKeys(const struct FName& ActionName)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(59245);

	UWeaponSkinGuideWidget_C_InitKeys_Params params;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.SelectNone
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponSkinGuideWidget_C::SelectNone()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(59244);

	UWeaponSkinGuideWidget_C_SelectNone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.RefreshByItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class USlotInterface> Item                           (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponSkinGuideWidget_C::RefreshByItem(const TScriptInterface<class USlotInterface>& Item)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(59230);

	UWeaponSkinGuideWidget_C_RefreshByItem_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.KeySetVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 KeyWidget                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponSkinGuideWidget_C::KeySetVisibility(class UWidget* KeyWidget, bool bVisible)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(59220);

	UWeaponSkinGuideWidget_C_KeySetVisibility_Params params;
	params.KeyWidget = KeyWidget;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponSkinGuideWidget_C::Construct()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(59219);

	UWeaponSkinGuideWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WeaponSkinGuideWidget.WeaponSkinGuideWidget_C.ExecuteUbergraph_WeaponSkinGuideWidget
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UWeaponSkinGuideWidget_C::ExecuteUbergraph_WeaponSkinGuideWidget(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(59217);

	UWeaponSkinGuideWidget_C_ExecuteUbergraph_WeaponSkinGuideWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
