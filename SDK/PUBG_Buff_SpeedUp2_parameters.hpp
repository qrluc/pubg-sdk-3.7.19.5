#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buff_SpeedUp2_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_SpeedUp2.Buff_SpeedUp2_C.UserConstructionScript
struct ABuff_SpeedUp2_C_UserConstructionScript_Params
{
};

// Function Buff_SpeedUp2.Buff_SpeedUp2_C.StartBuffBlueprint
struct ABuff_SpeedUp2_C_StartBuffBlueprint_Params
{
};

// Function Buff_SpeedUp2.Buff_SpeedUp2_C.StopBuffBlueprint
struct ABuff_SpeedUp2_C_StopBuffBlueprint_Params
{
	bool*                                              bCanceled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_SpeedUp2.Buff_SpeedUp2_C.ExecuteUbergraph_Buff_SpeedUp2
struct ABuff_SpeedUp2_C_ExecuteUbergraph_Buff_SpeedUp2_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
