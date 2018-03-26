// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_CameraMan_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_CameraMan.BP_CameraMan_C.Init_Moto
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Motorbike_03_C*      ParentRef                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CameraMan_C::Init_Moto(class ABP_Motorbike_03_C* ParentRef)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(115339);

	ABP_CameraMan_C_Init_Moto_Params params;
	params.ParentRef = ParentRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraMan.BP_CameraMan_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATslCharacter*           ParentRef                      (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CameraMan_C::Init(class ATslCharacter* ParentRef)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(115336);

	ABP_CameraMan_C_Init_Params params;
	params.ParentRef = ParentRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraMan.BP_CameraMan_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_CameraMan_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(115335);

	ABP_CameraMan_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraMan.BP_CameraMan_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CameraMan_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(115333);

	ABP_CameraMan_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_CameraMan.BP_CameraMan_C.ExecuteUbergraph_BP_CameraMan
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_CameraMan_C::ExecuteUbergraph_BP_CameraMan(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(115296);

	ABP_CameraMan_C_ExecuteUbergraph_BP_CameraMan_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
