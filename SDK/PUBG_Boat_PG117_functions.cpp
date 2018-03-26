// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Boat_PG117_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Boat_PG117.Boat_PG117_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABoat_PG117_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(120909);

	ABoat_PG117_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Boat_PG117.Boat_PG117_C.BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_0_UTslVehicleSeatComponentOnRide__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ATslCharacter*           Rider                          (Parm, ZeroConstructor, IsPlainOldData)
// class UVehicleSeatInteractionComponent* Seat                           (Parm, ZeroConstructor, IsPlainOldData)

void ABoat_PG117_C::BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_0_UTslVehicleSeatComponentOnRide__DelegateSignature(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(120906);

	ABoat_PG117_C_BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_0_UTslVehicleSeatComponentOnRide__DelegateSignature_Params params;
	params.Rider = Rider;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Boat_PG117.Boat_PG117_C.BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_1_UTslVehicleSeatComponentOnLeave__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class ATslCharacter*           Rider                          (Parm, ZeroConstructor, IsPlainOldData)
// class UVehicleSeatInteractionComponent* Seat                           (Parm, ZeroConstructor, IsPlainOldData)

void ABoat_PG117_C::BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_1_UTslVehicleSeatComponentOnLeave__DelegateSignature(class ATslCharacter* Rider, class UVehicleSeatInteractionComponent* Seat)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(120903);

	ABoat_PG117_C_BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_1_UTslVehicleSeatComponentOnLeave__DelegateSignature_Params params;
	params.Rider = Rider;
	params.Seat = Seat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Boat_PG117.Boat_PG117_C.ExecuteUbergraph_Boat_PG117
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABoat_PG117_C::ExecuteUbergraph_Boat_PG117(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(120893);

	ABoat_PG117_C_ExecuteUbergraph_Boat_PG117_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
