#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Task_RedZoneExplosion_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_RedZoneExplosion.Task_RedZoneExplosion_C.ReceiveExecute
struct UTask_RedZoneExplosion_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_RedZoneExplosion.Task_RedZoneExplosion_C.ReceiveTick
struct UTask_RedZoneExplosion_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_RedZoneExplosion.Task_RedZoneExplosion_C.ExecuteUbergraph_Task_RedZoneExplosion
struct UTask_RedZoneExplosion_C_ExecuteUbergraph_Task_RedZoneExplosion_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
