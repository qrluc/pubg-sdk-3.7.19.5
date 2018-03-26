#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_W_AudioTest_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function W_AudioTest.W_AudioTest_C.SetDistance
struct UW_AudioTest_C_SetDistance_Params
{
	float                                              DistanceInMeters;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function W_AudioTest.W_AudioTest_C.SetText
struct UW_AudioTest_C_SetText_Params
{
	struct FString                                     InText;                                                   // (Parm, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
