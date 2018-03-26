#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Task_NextRedZoneInBlackboard_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_NextRedZoneInBlackboard.Task_NextRedZoneInBlackboard_C.ReceiveExecute
struct UTask_NextRedZoneInBlackboard_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_NextRedZoneInBlackboard.Task_NextRedZoneInBlackboard_C.ExecuteUbergraph_Task_NextRedZoneInBlackboard
struct UTask_NextRedZoneInBlackboard_C_ExecuteUbergraph_Task_NextRedZoneInBlackboard_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
