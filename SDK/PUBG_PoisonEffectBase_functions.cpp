// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PoisonEffectBase_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PoisonEffectBase.PoisonEffectBase_C.SetRadius
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void APoisonEffectBase_C::SetRadius(float Radius)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(89927);

	APoisonEffectBase_C_SetRadius_Params params;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoisonEffectBase.PoisonEffectBase_C.SetCenter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Center                         (Parm, IsPlainOldData)

void APoisonEffectBase_C::SetCenter(const struct FVector& Center)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(89929);

	APoisonEffectBase_C_SetCenter_Params params;
	params.Center = Center;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PoisonEffectBase.PoisonEffectBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void APoisonEffectBase_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(89930);

	APoisonEffectBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
