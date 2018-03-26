#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buggy_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buggy.Buggy_C.UserConstructionScript
struct ABuggy_C_UserConstructionScript_Params
{
};

// Function Buggy.Buggy_C.ReceiveTick
struct ABuggy_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buggy.Buggy_C.ExecuteUbergraph_Buggy
struct ABuggy_C_ExecuteUbergraph_Buggy_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
