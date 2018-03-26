// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_W_WeaponButton_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function W_WeaponButton.W_WeaponButton_C.OnLoaded_310494BE44396A726B88C8A9579DBB21
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (Parm, ZeroConstructor, IsPlainOldData)

void UW_WeaponButton_C::OnLoaded_310494BE44396A726B88C8A9579DBB21(class UObject* Loaded)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(84047);

	UW_WeaponButton_C_OnLoaded_310494BE44396A726B88C8A9579DBB21_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponButton.W_WeaponButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UW_WeaponButton_C::Construct()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(84048);

	UW_WeaponButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponButton.W_WeaponButton_C.BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UW_WeaponButton_C::BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(84049);

	UW_WeaponButton_C_BndEvt__ButtonGive_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function W_WeaponButton.W_WeaponButton_C.ExecuteUbergraph_W_WeaponButton
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UW_WeaponButton_C::ExecuteUbergraph_W_WeaponButton(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(84061);

	UW_WeaponButton_C_ExecuteUbergraph_W_WeaponButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
