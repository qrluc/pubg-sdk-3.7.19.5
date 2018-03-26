#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_SmokeChild_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_SmokeChild.BP_SmokeChild_C.UserConstructionScript
struct ABP_SmokeChild_C_UserConstructionScript_Params
{
};

// Function BP_SmokeChild.BP_SmokeChild_C.ReceiveBeginPlay
struct ABP_SmokeChild_C_ReceiveBeginPlay_Params
{
};

// Function BP_SmokeChild.BP_SmokeChild_C.ReceiveTick
struct ABP_SmokeChild_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_SmokeChild.BP_SmokeChild_C.ExecuteUbergraph_BP_SmokeChild
struct ABP_SmokeChild_C_ExecuteUbergraph_BP_SmokeChild_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
