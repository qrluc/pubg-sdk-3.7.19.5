#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_AquaRail_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AquaRail.AquaRail_C.UserConstructionScript
struct AAquaRail_C_UserConstructionScript_Params
{
};

// Function AquaRail.AquaRail_C.ReceiveBeginPlay
struct AAquaRail_C_ReceiveBeginPlay_Params
{
};

// Function AquaRail.AquaRail_C.BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_0_UTslVehicleSeatComponentOnRide__DelegateSignature
struct AAquaRail_C_BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_0_UTslVehicleSeatComponentOnRide__DelegateSignature_Params
{
	class ATslCharacter*                               Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AquaRail.AquaRail_C.BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_1_UTslVehicleSeatComponentOnLeave__DelegateSignature
struct AAquaRail_C_BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_1_UTslVehicleSeatComponentOnLeave__DelegateSignature_Params
{
	class ATslCharacter*                               Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function AquaRail.AquaRail_C.EventFuelConsumption
struct AAquaRail_C_EventFuelConsumption_Params
{
};

// Function AquaRail.AquaRail_C.ExecuteUbergraph_AquaRail
struct AAquaRail_C_ExecuteUbergraph_AquaRail_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
