#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Boat_PG117_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Boat_PG117.Boat_PG117_C.UserConstructionScript
struct ABoat_PG117_C_UserConstructionScript_Params
{
};

// Function Boat_PG117.Boat_PG117_C.BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_0_UTslVehicleSeatComponentOnRide__DelegateSignature
struct ABoat_PG117_C_BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_0_UTslVehicleSeatComponentOnRide__DelegateSignature_Params
{
	class ATslCharacter*                               Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Boat_PG117.Boat_PG117_C.BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_1_UTslVehicleSeatComponentOnLeave__DelegateSignature
struct ABoat_PG117_C_BndEvt__VehicleSeatComponent_K2Node_ComponentBoundEvent_1_UTslVehicleSeatComponentOnLeave__DelegateSignature_Params
{
	class ATslCharacter*                               Rider;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UVehicleSeatInteractionComponent*            Seat;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Boat_PG117.Boat_PG117_C.ExecuteUbergraph_Boat_PG117
struct ABoat_PG117_C_ExecuteUbergraph_Boat_PG117_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
