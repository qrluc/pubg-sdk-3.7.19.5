// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_VaultHelperActor_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_VaultHelperActor.BP_VaultHelperActor_C.InitCancel
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_VaultHelperActor_C::InitCancel()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(100305);

	ABP_VaultHelperActor_C_InitCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaultHelperActor.BP_VaultHelperActor_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 V_Start                        (Parm, IsPlainOldData)
// struct FVector                 V_Apex                         (Parm, IsPlainOldData)
// struct FVector                 V_ApexAdditive                 (Parm, IsPlainOldData)
// struct FVector                 V_End                          (Parm, IsPlainOldData)
// class ATslCharacter*           CharRef                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsClimbing                     (Parm, ZeroConstructor, IsPlainOldData)
// EVaultAnimType                 InVaultType                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEndToFall                     (Parm, ZeroConstructor, IsPlainOldData)
// float                          PlayerSpeed                    (Parm, ZeroConstructor, IsPlainOldData)
// float                          DistanceFromObject             (Parm, ZeroConstructor, IsPlainOldData)

void ABP_VaultHelperActor_C::Init(const struct FVector& V_Start, const struct FVector& V_Apex, const struct FVector& V_ApexAdditive, const struct FVector& V_End, class ATslCharacter* CharRef, bool IsClimbing, EVaultAnimType InVaultType, bool bEndToFall, float PlayerSpeed, float DistanceFromObject)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(100253);

	ABP_VaultHelperActor_C_Init_Params params;
	params.V_Start = V_Start;
	params.V_Apex = V_Apex;
	params.V_ApexAdditive = V_ApexAdditive;
	params.V_End = V_End;
	params.CharRef = CharRef;
	params.IsClimbing = IsClimbing;
	params.InVaultType = InVaultType;
	params.bEndToFall = bEndToFall;
	params.PlayerSpeed = PlayerSpeed;
	params.DistanceFromObject = DistanceFromObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaultHelperActor.BP_VaultHelperActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_VaultHelperActor_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(100252);

	ABP_VaultHelperActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaultHelperActor.BP_VaultHelperActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_VaultHelperActor_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(100250);

	ABP_VaultHelperActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_VaultHelperActor.BP_VaultHelperActor_C.ExecuteUbergraph_BP_VaultHelperActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_VaultHelperActor_C::ExecuteUbergraph_BP_VaultHelperActor(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(100201);

	ABP_VaultHelperActor_C_ExecuteUbergraph_BP_VaultHelperActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
