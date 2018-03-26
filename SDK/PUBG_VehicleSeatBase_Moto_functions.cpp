// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_VehicleSeatBase_Moto_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function VehicleSeatBase_Moto.VehicleSeatBase_Moto_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AVehicleSeatBase_Moto_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(115885);

	AVehicleSeatBase_Moto_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleSeatBase_Moto.VehicleSeatBase_Moto_C.BndEvt__Interaction_K2Node_ComponentBoundEvent_63_ComponentInteractBySignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ATslCharacter*           OtherCharacter                 (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleSeatBase_Moto_C::BndEvt__Interaction_K2Node_ComponentBoundEvent_63_ComponentInteractBySignature__DelegateSignature(class ATslCharacter* OtherCharacter)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(115883);

	AVehicleSeatBase_Moto_C_BndEvt__Interaction_K2Node_ComponentBoundEvent_63_ComponentInteractBySignature__DelegateSignature_Params params;
	params.OtherCharacter = OtherCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleSeatBase_Moto.VehicleSeatBase_Moto_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AVehicleSeatBase_Moto_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(115882);

	AVehicleSeatBase_Moto_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleSeatBase_Moto.VehicleSeatBase_Moto_C.ExecuteUbergraph_VehicleSeatBase_Moto
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AVehicleSeatBase_Moto_C::ExecuteUbergraph_VehicleSeatBase_Moto(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(115869);

	AVehicleSeatBase_Moto_C_ExecuteUbergraph_VehicleSeatBase_Moto_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
