#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Service_PoisonDamage_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Service_PoisonDamage.Service_PoisonDamage_C.TakeDamageToCharacter
struct UService_PoisonDamage_C_TakeDamageToCharacter_Params
{
	class ATslCharacter*                               Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              SafetyRadius;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SafetyPosition;                                           // (Parm, IsPlainOldData)
};

// Function Service_PoisonDamage.Service_PoisonDamage_C.EverySecond
struct UService_PoisonDamage_C_EverySecond_Params
{
};

// Function Service_PoisonDamage.Service_PoisonDamage_C.ReceiveActivation
struct UService_PoisonDamage_C_ReceiveActivation_Params
{
	class AActor**                                     OwnerActor;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Service_PoisonDamage.Service_PoisonDamage_C.ExecuteUbergraph_Service_PoisonDamage
struct UService_PoisonDamage_C_ExecuteUbergraph_Service_PoisonDamage_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
