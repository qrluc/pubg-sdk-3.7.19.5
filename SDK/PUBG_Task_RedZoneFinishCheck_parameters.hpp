#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Task_RedZoneFinishCheck_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_RedZoneFinishCheck.Task_RedZoneFinishCheck_C.ReceiveTick
struct UTask_RedZoneFinishCheck_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_RedZoneFinishCheck.Task_RedZoneFinishCheck_C.ExecuteUbergraph_Task_RedZoneFinishCheck
struct UTask_RedZoneFinishCheck_C_ExecuteUbergraph_Task_RedZoneFinishCheck_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
