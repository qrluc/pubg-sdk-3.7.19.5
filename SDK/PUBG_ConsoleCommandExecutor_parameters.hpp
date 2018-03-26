#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ConsoleCommandExecutor_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ConsoleCommandExecutor.ConsoleCommandExecutor_C.UserConstructionScript
struct AConsoleCommandExecutor_C_UserConstructionScript_Params
{
};

// Function ConsoleCommandExecutor.ConsoleCommandExecutor_C.ReceiveBeginPlay
struct AConsoleCommandExecutor_C_ReceiveBeginPlay_Params
{
};

// Function ConsoleCommandExecutor.ConsoleCommandExecutor_C.ExecuteUbergraph_ConsoleCommandExecutor
struct AConsoleCommandExecutor_C_ExecuteUbergraph_ConsoleCommandExecutor_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
