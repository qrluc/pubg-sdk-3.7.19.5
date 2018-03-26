#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buff_BreakSunkenVehicle_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_BreakSunkenVehicle.Buff_BreakSunkenVehicle_C.UserConstructionScript
struct ABuff_BreakSunkenVehicle_C_UserConstructionScript_Params
{
};

// Function Buff_BreakSunkenVehicle.Buff_BreakSunkenVehicle_C.TickBuff
struct ABuff_BreakSunkenVehicle_C_TickBuff_Params
{
};

// Function Buff_BreakSunkenVehicle.Buff_BreakSunkenVehicle_C.StopBuffBlueprint
struct ABuff_BreakSunkenVehicle_C_StopBuffBlueprint_Params
{
	bool*                                              bCanceled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_BreakSunkenVehicle.Buff_BreakSunkenVehicle_C.ExecuteUbergraph_Buff_BreakSunkenVehicle
struct ABuff_BreakSunkenVehicle_C_ExecuteUbergraph_Buff_BreakSunkenVehicle_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
