#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MapStatAnalyzer_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MapStatAnalyzer.MapStatAnalyzer_C.ComputeWorldSize
struct AMapStatAnalyzer_C_ComputeWorldSize_Params
{
	struct FVector                                     Min;                                                      // (Parm, IsPlainOldData)
	struct FVector                                     Max;                                                      // (Parm, IsPlainOldData)
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.UserConstructionScript
struct AMapStatAnalyzer_C_UserConstructionScript_Params
{
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.ReceiveBeginPlay
struct AMapStatAnalyzer_C_ReceiveBeginPlay_Params
{
};

// Function MapStatAnalyzer.MapStatAnalyzer_C.ExecuteUbergraph_MapStatAnalyzer
struct AMapStatAnalyzer_C_ExecuteUbergraph_MapStatAnalyzer_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
