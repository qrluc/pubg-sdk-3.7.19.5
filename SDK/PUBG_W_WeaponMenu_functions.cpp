// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_W_WeaponMenu_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_WeaponMenu.W_WeaponMenu_C.PopulateEmoteData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UW_WeaponMenu_C::PopulateEmoteData()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99297);

	UW_WeaponMenu_C_PopulateEmoteData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.SpawnVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InVehicleIndex                 (Parm, ZeroConstructor, IsPlainOldData)

void UW_WeaponMenu_C::SpawnVehicle(int InVehicleIndex)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99293);

	UW_WeaponMenu_C_SpawnVehicle_Params params;
	params.InVehicleIndex = InVehicleIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.SavePreset
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>          inArray                        (Parm, OutParm, ZeroConstructor, ReferenceParm)
// int                            ProfileIndex                   (Parm, ZeroConstructor, IsPlainOldData)

void UW_WeaponMenu_C::SavePreset(int ProfileIndex, TArray<class UClass*>* inArray)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99287);

	UW_WeaponMenu_C_SavePreset_Params params;
	params.ProfileIndex = ProfileIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (inArray != nullptr)
		*inArray = params.inArray;
}


// Function W_WeaponMenu.W_WeaponMenu_C.LoadPresets
// (Public, BlueprintCallable, BlueprintEvent)

void UW_WeaponMenu_C::LoadPresets()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99264);

	UW_WeaponMenu_C_LoadPresets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.GiveItemToPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  InItem                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_WeaponMenu_C::GiveItemToPlayer(class UClass* InItem)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99259);

	UW_WeaponMenu_C_GiveItemToPlayer_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.AddChildPresetButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  InItem                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FButtonStyle            InStyle                        (Parm)
// class UVerticalBox*            InContainer                    (Parm, ZeroConstructor, IsPlainOldData)

void UW_WeaponMenu_C::AddChildPresetButton(class UClass* InItem, const struct FButtonStyle& InStyle, class UVerticalBox* InContainer)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99253);

	UW_WeaponMenu_C_AddChildPresetButton_Params params;
	params.InItem = InItem;
	params.InStyle = InStyle;
	params.InContainer = InContainer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.AddItemToActiveArray
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  InItem                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_WeaponMenu_C::AddItemToActiveArray(class UClass* InItem)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99235);

	UW_WeaponMenu_C_AddItemToActiveArray_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.IsSavePresetMode
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UW_WeaponMenu_C::IsSavePresetMode(bool* NewParam)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99233);

	UW_WeaponMenu_C_IsSavePresetMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


// Function W_WeaponMenu.W_WeaponMenu_C.DoExit
// (Public, BlueprintCallable, BlueprintEvent)

void UW_WeaponMenu_C::DoExit()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99231);

	UW_WeaponMenu_C_DoExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_WeaponMenu_C::Construct()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99230);

	UW_WeaponMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.OnClicked_Event_1
// (BlueprintCallable, BlueprintEvent)

void UW_WeaponMenu_C::OnClicked_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99229);

	UW_WeaponMenu_C_OnClicked_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_36_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_36_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99228);

	UW_WeaponMenu_C_BndEvt__Button_36_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_64_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_64_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99227);

	UW_WeaponMenu_C_BndEvt__Button_64_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_62_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_62_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99226);

	UW_WeaponMenu_C_BndEvt__Button_62_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_63_K2Node_ComponentBoundEvent_275_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_63_K2Node_ComponentBoundEvent_275_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99225);

	UW_WeaponMenu_C_BndEvt__Button_63_K2Node_ComponentBoundEvent_275_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_65_K2Node_ComponentBoundEvent_409_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_65_K2Node_ComponentBoundEvent_409_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99224);

	UW_WeaponMenu_C_BndEvt__Button_65_K2Node_ComponentBoundEvent_409_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_66_K2Node_ComponentBoundEvent_445_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_66_K2Node_ComponentBoundEvent_445_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99223);

	UW_WeaponMenu_C_BndEvt__Button_66_K2Node_ComponentBoundEvent_445_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_67_K2Node_ComponentBoundEvent_486_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_67_K2Node_ComponentBoundEvent_486_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99222);

	UW_WeaponMenu_C_BndEvt__Button_67_K2Node_ComponentBoundEvent_486_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_28_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_28_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99221);

	UW_WeaponMenu_C_BndEvt__Button_28_K2Node_ComponentBoundEvent_60_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_310_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_310_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99220);

	UW_WeaponMenu_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_310_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_336_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_336_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99219);

	UW_WeaponMenu_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_336_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_363_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_363_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99218);

	UW_WeaponMenu_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_363_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_3_K2Node_ComponentBoundEvent_391_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_3_K2Node_ComponentBoundEvent_391_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99217);

	UW_WeaponMenu_C_BndEvt__Button_3_K2Node_ComponentBoundEvent_391_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_4_K2Node_ComponentBoundEvent_459_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_4_K2Node_ComponentBoundEvent_459_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99216);

	UW_WeaponMenu_C_BndEvt__Button_4_K2Node_ComponentBoundEvent_459_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_5_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99215);

	UW_WeaponMenu_C_BndEvt__Button_5_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_6_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_6_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99214);

	UW_WeaponMenu_C_BndEvt__Button_6_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_7_K2Node_ComponentBoundEvent_502_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_7_K2Node_ComponentBoundEvent_502_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99213);

	UW_WeaponMenu_C_BndEvt__Button_7_K2Node_ComponentBoundEvent_502_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_8_K2Node_ComponentBoundEvent_582_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_8_K2Node_ComponentBoundEvent_582_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99212);

	UW_WeaponMenu_C_BndEvt__Button_8_K2Node_ComponentBoundEvent_582_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_9_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_9_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99211);

	UW_WeaponMenu_C_BndEvt__Button_9_K2Node_ComponentBoundEvent_130_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_10_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_10_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99210);

	UW_WeaponMenu_C_BndEvt__Button_10_K2Node_ComponentBoundEvent_164_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_13_K2Node_ComponentBoundEvent_172_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_13_K2Node_ComponentBoundEvent_172_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99209);

	UW_WeaponMenu_C_BndEvt__Button_13_K2Node_ComponentBoundEvent_172_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_12_K2Node_ComponentBoundEvent_299_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_12_K2Node_ComponentBoundEvent_299_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99208);

	UW_WeaponMenu_C_BndEvt__Button_12_K2Node_ComponentBoundEvent_299_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_14_K2Node_ComponentBoundEvent_434_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_14_K2Node_ComponentBoundEvent_434_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99207);

	UW_WeaponMenu_C_BndEvt__Button_14_K2Node_ComponentBoundEvent_434_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_31_K2Node_ComponentBoundEvent_356_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_31_K2Node_ComponentBoundEvent_356_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99206);

	UW_WeaponMenu_C_BndEvt__Button_31_K2Node_ComponentBoundEvent_356_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.Event Close
// (BlueprintCallable, BlueprintEvent)

void UW_WeaponMenu_C::Event_Close()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99205);

	UW_WeaponMenu_C_Event_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.BndEvt__Button_11_K2Node_ComponentBoundEvent_230_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_WeaponMenu_C::BndEvt__Button_11_K2Node_ComponentBoundEvent_230_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99204);

	UW_WeaponMenu_C_BndEvt__Button_11_K2Node_ComponentBoundEvent_230_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.CenterCursor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*       InPC                           (Parm, ZeroConstructor, IsPlainOldData)

void UW_WeaponMenu_C::CenterCursor(class APlayerController* InPC)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99202);

	UW_WeaponMenu_C_CenterCursor_Params params;
	params.InPC = InPC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponMenu.W_WeaponMenu_C.ExecuteUbergraph_W_WeaponMenu
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_WeaponMenu_C::ExecuteUbergraph_W_WeaponMenu(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(98980);

	UW_WeaponMenu_C_ExecuteUbergraph_W_WeaponMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
