#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BoatBase_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BoatBase.BoatBase_C.UserConstructionScript
struct ABoatBase_C_UserConstructionScript_Params
{
};

// Function BoatBase.BoatBase_C.ReceiveBeginPlay
struct ABoatBase_C_ReceiveBeginPlay_Params
{
};

// Function BoatBase.BoatBase_C.ReceiveTick
struct ABoatBase_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BoatBase.BoatBase_C.EventFuelConsumption
struct ABoatBase_C_EventFuelConsumption_Params
{
};

// Function BoatBase.BoatBase_C.ExecuteUbergraph_BoatBase
struct ABoatBase_C_ExecuteUbergraph_BoatBase_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
