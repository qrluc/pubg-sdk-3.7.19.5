#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Task_SpawnAircraft_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Task_SpawnAircraft.Task_SpawnAircraft_C.ReceiveTick
struct UTask_SpawnAircraft_C_ReceiveTick_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_SpawnAircraft.Task_SpawnAircraft_C.ReceiveExecute
struct UTask_SpawnAircraft_C_ReceiveExecute_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Task_SpawnAircraft.Task_SpawnAircraft_C.ExecuteUbergraph_Task_SpawnAircraft
struct UTask_SpawnAircraft_C_ExecuteUbergraph_Task_SpawnAircraft_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
