#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buff_FinalSpreadReduce_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C.UserConstructionScript
struct ABuff_FinalSpreadReduce_C_UserConstructionScript_Params
{
};

// Function Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C.StartBuffBlueprint
struct ABuff_FinalSpreadReduce_C_StartBuffBlueprint_Params
{
};

// Function Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C.StopBuffBlueprint
struct ABuff_FinalSpreadReduce_C_StopBuffBlueprint_Params
{
	bool*                                              bCanceled;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C.ExecuteUbergraph_Buff_FinalSpreadReduce
struct ABuff_FinalSpreadReduce_C_ExecuteUbergraph_Buff_FinalSpreadReduce_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
