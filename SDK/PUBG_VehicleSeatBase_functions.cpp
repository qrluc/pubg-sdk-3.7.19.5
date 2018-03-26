// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_VehicleSeatBase_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VehicleSeatBase.VehicleSeatBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVehicleSeatBase_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(117147);

	AVehicleSeatBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleSeatBase.VehicleSeatBase_C.BndEvt__Interaction_K2Node_ComponentBoundEvent_63_ComponentInteractBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ATslCharacter*           OtherCharacter                 (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleSeatBase_C::BndEvt__Interaction_K2Node_ComponentBoundEvent_63_ComponentInteractBySignature__DelegateSignature(class ATslCharacter* OtherCharacter)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(117145);

	AVehicleSeatBase_C_BndEvt__Interaction_K2Node_ComponentBoundEvent_63_ComponentInteractBySignature__DelegateSignature_Params params;
	params.OtherCharacter = OtherCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleSeatBase.VehicleSeatBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AVehicleSeatBase_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(117144);

	AVehicleSeatBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleSeatBase.VehicleSeatBase_C.ExecuteUbergraph_VehicleSeatBase
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleSeatBase_C::ExecuteUbergraph_VehicleSeatBase(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(117082);

	AVehicleSeatBase_C_ExecuteUbergraph_VehicleSeatBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
