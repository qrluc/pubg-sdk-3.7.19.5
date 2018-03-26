#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_M_Replayzone_Outside_BP_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function M_Replayzone_Outside_BP.M_Replayzone_Outside_BP_C.UserConstructionScript
struct AM_Replayzone_Outside_BP_C_UserConstructionScript_Params
{
};

// Function M_Replayzone_Outside_BP.M_Replayzone_Outside_BP_C.ReceiveBeginPlay
struct AM_Replayzone_Outside_BP_C_ReceiveBeginPlay_Params
{
};

// Function M_Replayzone_Outside_BP.M_Replayzone_Outside_BP_C.ReceiveTick
struct AM_Replayzone_Outside_BP_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function M_Replayzone_Outside_BP.M_Replayzone_Outside_BP_C.ExecuteUbergraph_M_Replayzone_Outside_BP
struct AM_Replayzone_Outside_BP_C_ExecuteUbergraph_M_Replayzone_Outside_BP_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
