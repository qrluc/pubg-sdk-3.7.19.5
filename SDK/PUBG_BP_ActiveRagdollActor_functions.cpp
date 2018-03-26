// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_ActiveRagdollActor_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.SetServerPos
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ActiveRagdollActor_C::SetServerPos()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(100354);

	ABP_ActiveRagdollActor_C_SetServerPos_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitClient
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*  MeshRef                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 InVelocity                     (Parm, IsPlainOldData)

void ABP_ActiveRagdollActor_C::InitClient(class USkeletalMeshComponent* MeshRef, const struct FVector& InVelocity)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(100347);

	ABP_ActiveRagdollActor_C_InitClient_Params params;
	params.MeshRef = MeshRef;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.InitServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 InVelocity                     (Parm, IsPlainOldData)

void ABP_ActiveRagdollActor_C::InitServer(const struct FVector& InVelocity)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(100345);

	ABP_ActiveRagdollActor_C_InitServer_Params params;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_ActiveRagdollActor_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(100344);

	ABP_ActiveRagdollActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ActiveRagdollActor_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(100343);

	ABP_ActiveRagdollActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActiveRagdollActor_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(100341);

	ABP_ActiveRagdollActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ActiveRagdollActor.BP_ActiveRagdollActor_C.ExecuteUbergraph_BP_ActiveRagdollActor
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_ActiveRagdollActor_C::ExecuteUbergraph_BP_ActiveRagdollActor(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(100323);

	ABP_ActiveRagdollActor_C_ExecuteUbergraph_BP_ActiveRagdollActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
