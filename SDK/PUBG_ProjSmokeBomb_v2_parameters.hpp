#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ProjSmokeBomb_v2_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.UserConstructionScript
struct AProjSmokeBomb_v2_C_UserConstructionScript_Params
{
};

// Function ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.OnTakeAnyDamage_Event
struct AProjSmokeBomb_v2_C_OnTakeAnyDamage_Event_Params
{
	class AActor*                                      DamagedActor;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UDamageType*                                 DamageType;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.ReceiveTick
struct AProjSmokeBomb_v2_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.ReceiveHit
struct AProjSmokeBomb_v2_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Other;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (Parm, IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (Parm, IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (Parm, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.End
struct AProjSmokeBomb_v2_C_End_Params
{
};

// Function ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.ReceiveBeginPlay
struct AProjSmokeBomb_v2_C_ReceiveBeginPlay_Params
{
};

// Function ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.ExecuteUbergraph_ProjSmokeBomb_v2
struct AProjSmokeBomb_v2_C_ExecuteUbergraph_ProjSmokeBomb_v2_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
