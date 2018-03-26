// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ProjFlashBang_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjFlashBang.ProjFlashBang_C.GetFlashBangDistance
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          FlashBangDistance              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjFlashBang_C::GetFlashBangDistance(float* FlashBangDistance)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(111686);

	AProjFlashBang_C_GetFlashBangDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FlashBangDistance != nullptr)
		*FlashBangDistance = params.FlashBangDistance;
}


// Function ProjFlashBang.ProjFlashBang_C.GetCameraToFlashBangAngle
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Angle                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjFlashBang_C::GetCameraToFlashBangAngle(float* Angle)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(111673);

	AProjFlashBang_C_GetCameraToFlashBangAngle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Angle != nullptr)
		*Angle = params.Angle;
}


// Function ProjFlashBang.ProjFlashBang_C.GetTinnitusSoundIndex
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Index                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void AProjFlashBang_C::GetTinnitusSoundIndex(int* Index)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(111661);

	AProjFlashBang_C_GetTinnitusSoundIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;
}


// Function ProjFlashBang.ProjFlashBang_C.SpawnFlashBangCaputeEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*              ShooterCharacter               (Parm, ZeroConstructor, IsPlainOldData)

void AProjFlashBang_C::SpawnFlashBangCaputeEffect(class ACharacter* ShooterCharacter)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(111647);

	AProjFlashBang_C_SpawnFlashBangCaputeEffect_Params params;
	params.ShooterCharacter = ShooterCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFlashBang.ProjFlashBang_C.SpawnFlashBangEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          FlashBangDistance              (Parm, ZeroConstructor, IsPlainOldData)

void AProjFlashBang_C::SpawnFlashBangEffect(float FlashBangDistance)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(111638);

	AProjFlashBang_C_SpawnFlashBangEffect_Params params;
	params.FlashBangDistance = FlashBangDistance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFlashBang.ProjFlashBang_C.PlayTinnitusSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void AProjFlashBang_C::PlayTinnitusSound(int Index)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(111633);

	AProjFlashBang_C_PlayTinnitusSound_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFlashBang.ProjFlashBang_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProjFlashBang_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(111632);

	AProjFlashBang_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFlashBang.ProjFlashBang_C.OnTakeAnyDamage_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DamagedActor                   (Parm, ZeroConstructor, IsPlainOldData)
// float                          Damage                         (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             DamageType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             InstigatedBy                   (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  DamageCauser                   (Parm, ZeroConstructor, IsPlainOldData)

void AProjFlashBang_C::OnTakeAnyDamage_Event(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(111626);

	AProjFlashBang_C_OnTakeAnyDamage_Event_Params params;
	params.DamagedActor = DamagedActor;
	params.Damage = Damage;
	params.DamageType = DamageType;
	params.InstigatedBy = InstigatedBy;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFlashBang.ProjFlashBang_C.ExplodeBP
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                Location                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FRotator*               Rotation                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FHitResult*             Impact                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
// float*                         Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void AProjFlashBang_C::ExplodeBP(struct FVector* Location, struct FRotator* Rotation, struct FHitResult* Impact, float* Radius)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(111621);

	AProjFlashBang_C_ExplodeBP_Params params;
	params.Location = Location;
	params.Rotation = Rotation;
	params.Impact = Impact;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFlashBang.ProjFlashBang_C.BreakLoop
// (BlueprintCallable, BlueprintEvent)

void AProjFlashBang_C::BreakLoop()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(111620);

	AProjFlashBang_C_BreakLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjFlashBang.ProjFlashBang_C.ExecuteUbergraph_ProjFlashBang
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjFlashBang_C::ExecuteUbergraph_ProjFlashBang(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(111579);

	AProjFlashBang_C_ExecuteUbergraph_ProjFlashBang_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
