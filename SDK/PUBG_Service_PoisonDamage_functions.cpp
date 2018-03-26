// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Service_PoisonDamage_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Service_PoisonDamage.Service_PoisonDamage_C.TakeDamageToCharacter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslCharacter*           Character                      (Parm, ZeroConstructor, IsPlainOldData)
// float                          SafetyRadius                   (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 SafetyPosition                 (Parm, IsPlainOldData)

void UService_PoisonDamage_C::TakeDamageToCharacter(class ATslCharacter* Character, float SafetyRadius, const struct FVector& SafetyPosition)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(109835);

	UService_PoisonDamage_C_TakeDamageToCharacter_Params params;
	params.Character = Character;
	params.SafetyRadius = SafetyRadius;
	params.SafetyPosition = SafetyPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_PoisonDamage.Service_PoisonDamage_C.EverySecond
// (BlueprintCallable, BlueprintEvent)

void UService_PoisonDamage_C::EverySecond()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(109834);

	UService_PoisonDamage_C_EverySecond_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_PoisonDamage.Service_PoisonDamage_C.ReceiveActivation
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UService_PoisonDamage_C::ReceiveActivation(class AActor** OwnerActor)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(109832);

	UService_PoisonDamage_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Service_PoisonDamage.Service_PoisonDamage_C.ExecuteUbergraph_Service_PoisonDamage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UService_PoisonDamage_C::ExecuteUbergraph_Service_PoisonDamage(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(109815);

	UService_PoisonDamage_C_ExecuteUbergraph_Service_PoisonDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
