// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AquaRail_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AquaRail.AquaRail_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAquaRail_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(114278);

	AAquaRail_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AquaRail.AquaRail_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAquaRail_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(114277);

	AAquaRail_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AquaRail.AquaRail_C.BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_0_UTslVehicleSeatComponentOnRide__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ATslCharacter*           Rider                          (Parm, ZeroConstructor, IsPlainOldData)
// class UVehicleSeatInteractionComponent* Seat                           (Parm, ZeroConstructor, IsPlainOldData)

void AAquaRail_C::BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_0_UTslVehicleSeatComponentOnRide__DelegateSignature(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(114202);

	AAquaRail_C_BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_0_UTslVehicleSeatComponentOnRide__DelegateSignature_Params params;
	params.Rider = Rider;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AquaRail.AquaRail_C.BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_1_UTslVehicleSeatComponentOnLeave__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ATslCharacter*           Rider                          (Parm, ZeroConstructor, IsPlainOldData)
// class UVehicleSeatInteractionComponent* Seat                           (Parm, ZeroConstructor, IsPlainOldData)

void AAquaRail_C::BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_1_UTslVehicleSeatComponentOnLeave__DelegateSignature(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(114199);

	AAquaRail_C_BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_1_UTslVehicleSeatComponentOnLeave__DelegateSignature_Params params;
	params.Rider = Rider;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AquaRail.AquaRail_C.EventFuelConsumption
// (BlueprintCallable, BlueprintEvent)

void AAquaRail_C::EventFuelConsumption()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(114276);

	AAquaRail_C_EventFuelConsumption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AquaRail.AquaRail_C.ExecuteUbergraph_AquaRail
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AAquaRail_C::ExecuteUbergraph_AquaRail(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(114166);

	AAquaRail_C_ExecuteUbergraph_AquaRail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
