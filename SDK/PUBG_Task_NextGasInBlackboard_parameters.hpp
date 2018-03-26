#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Task_NextGasInBlackboard_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_NextGasInBlackboard.Task_NextGasInBlackboard_C.ReceiveExecute
struct UTask_NextGasInBlackboard_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_NextGasInBlackboard.Task_NextGasInBlackboard_C.ExecuteUbergraph_Task_NextGasInBlackboard
struct UTask_NextGasInBlackboard_C_ExecuteUbergraph_Task_NextGasInBlackboard_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
