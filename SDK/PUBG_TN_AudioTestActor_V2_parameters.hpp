#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TN_AudioTestActor_V2_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.PrintDistance
struct ATN_AudioTestActor_V2_C_PrintDistance_Params
{
	float                                              DistanceInMeters;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.PlayAudioRetrigger
struct ATN_AudioTestActor_V2_C_PlayAudioRetrigger_Params
{
};

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.Retrigger
struct ATN_AudioTestActor_V2_C_Retrigger_Params
{
};

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.PrintText
struct ATN_AudioTestActor_V2_C_PrintText_Params
{
	struct FString                                     InText;                                                   // (Parm, ZeroConstructor)
};

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.SetSwitch
struct ATN_AudioTestActor_V2_C_SetSwitch_Params
{
	struct FString                                     Group;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Param;                                                    // (Parm, ZeroConstructor)
};

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.SetNextSound
struct ATN_AudioTestActor_V2_C_SetNextSound_Params
{
	bool                                               bForward;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.Destroy
struct ATN_AudioTestActor_V2_C_Destroy_Params
{
};

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.PlayAudio
struct ATN_AudioTestActor_V2_C_PlayAudio_Params
{
};

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.Initialize
struct ATN_AudioTestActor_V2_C_Initialize_Params
{
	class APlayerPawn_v2_C*                            Parent;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.UserConstructionScript
struct ATN_AudioTestActor_V2_C_UserConstructionScript_Params
{
};

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.ReceiveTick
struct ATN_AudioTestActor_V2_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function TN_AudioTestActor_V2.TN_AudioTestActor_V2_C.ExecuteUbergraph_TN_AudioTestActor_V2
struct ATN_AudioTestActor_V2_C_ExecuteUbergraph_TN_AudioTestActor_V2_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
