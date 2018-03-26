#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GunImpact_Arrow_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GunImpact_Arrow.GunImpact_Arrow_C.CheckParentValidity
struct AGunImpact_Arrow_C_CheckParentValidity_Params
{
};

// Function GunImpact_Arrow.GunImpact_Arrow_C.UserConstructionScript
struct AGunImpact_Arrow_C_UserConstructionScript_Params
{
};

// Function GunImpact_Arrow.GunImpact_Arrow_C.ReceiveBeginPlay
struct AGunImpact_Arrow_C_ReceiveBeginPlay_Params
{
};

// Function GunImpact_Arrow.GunImpact_Arrow_C.WakeUp_BP
struct AGunImpact_Arrow_C_WakeUp_BP_Params
{
	struct FTransform*                                 InitialTransform;                                         // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function GunImpact_Arrow.GunImpact_Arrow_C.PutToSleep_BP
struct AGunImpact_Arrow_C_PutToSleep_BP_Params
{
};

// Function GunImpact_Arrow.GunImpact_Arrow_C.ExecuteUbergraph_GunImpact_Arrow
struct AGunImpact_Arrow_C_ExecuteUbergraph_GunImpact_Arrow_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
