#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ProjFlashBang_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjFlashBang.ProjFlashBang_C.GetFlashBangDistance
struct AProjFlashBang_C_GetFlashBangDistance_Params
{
	float                                              FlashBangDistance;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProjFlashBang.ProjFlashBang_C.GetCameraToFlashBangAngle
struct AProjFlashBang_C_GetCameraToFlashBangAngle_Params
{
	float                                              Angle;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProjFlashBang.ProjFlashBang_C.GetTinnitusSoundIndex
struct AProjFlashBang_C_GetTinnitusSoundIndex_Params
{
	int                                                Index;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function ProjFlashBang.ProjFlashBang_C.SpawnFlashBangCaputeEffect
struct AProjFlashBang_C_SpawnFlashBangCaputeEffect_Params
{
	class ACharacter*                                  ShooterCharacter;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjFlashBang.ProjFlashBang_C.SpawnFlashBangEffect
struct AProjFlashBang_C_SpawnFlashBangEffect_Params
{
	float                                              FlashBangDistance;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjFlashBang.ProjFlashBang_C.PlayTinnitusSound
struct AProjFlashBang_C_PlayTinnitusSound_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjFlashBang.ProjFlashBang_C.UserConstructionScript
struct AProjFlashBang_C_UserConstructionScript_Params
{
};

// Function ProjFlashBang.ProjFlashBang_C.OnTakeAnyDamage_Event
struct AProjFlashBang_C_OnTakeAnyDamage_Event_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjFlashBang.ProjFlashBang_C.ExplodeBP
struct AProjFlashBang_C_ExplodeBP_Params
{
	struct FVector*                                    Location;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FRotator*                                   Rotation;                                                 // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	struct FHitResult*                                 Impact;                                                   // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
	float*                                             Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjFlashBang.ProjFlashBang_C.BreakLoop
struct AProjFlashBang_C_BreakLoop_Params
{
};

// Function ProjFlashBang.ProjFlashBang_C.ExecuteUbergraph_ProjFlashBang
struct AProjFlashBang_C_ExecuteUbergraph_ProjFlashBang_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
