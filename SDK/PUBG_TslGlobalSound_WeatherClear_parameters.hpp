#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TslGlobalSound_WeatherClear_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TslGlobalSound_WeatherClear.TslGlobalSound_WeatherClear_C.UserConstructionScript
struct ATslGlobalSound_WeatherClear_C_UserConstructionScript_Params
{
};

// Function TslGlobalSound_WeatherClear.TslGlobalSound_WeatherClear_C.ReceiveBeginPlay
struct ATslGlobalSound_WeatherClear_C_ReceiveBeginPlay_Params
{
};

// Function TslGlobalSound_WeatherClear.TslGlobalSound_WeatherClear_C.ReceiveEndPlay
struct ATslGlobalSound_WeatherClear_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TslGlobalSound_WeatherClear.TslGlobalSound_WeatherClear_C.ExecuteUbergraph_TslGlobalSound_WeatherClear
struct ATslGlobalSound_WeatherClear_C_ExecuteUbergraph_TslGlobalSound_WeatherClear_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
