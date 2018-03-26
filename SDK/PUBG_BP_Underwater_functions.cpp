// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_Underwater_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Underwater.BP_Underwater_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Underwater_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(130220);

	ABP_Underwater_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Underwater.BP_Underwater_C.WetLensBlurFade__FinishedFunc
// (BlueprintEvent)

void ABP_Underwater_C::WetLensBlurFade__FinishedFunc()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(130219);

	ABP_Underwater_C_WetLensBlurFade__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Underwater.BP_Underwater_C.WetLensBlurFade__UpdateFunc
// (BlueprintEvent)

void ABP_Underwater_C::WetLensBlurFade__UpdateFunc()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(130218);

	ABP_Underwater_C_WetLensBlurFade__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Underwater.BP_Underwater_C.WetLensDistortFade__FinishedFunc
// (BlueprintEvent)

void ABP_Underwater_C::WetLensDistortFade__FinishedFunc()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(130217);

	ABP_Underwater_C_WetLensDistortFade__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Underwater.BP_Underwater_C.WetLensDistortFade__UpdateFunc
// (BlueprintEvent)

void ABP_Underwater_C::WetLensDistortFade__UpdateFunc()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(130216);

	ABP_Underwater_C_WetLensDistortFade__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Underwater.BP_Underwater_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Underwater_C::ReceiveTick(float* DeltaSeconds)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(130214);

	ABP_Underwater_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Underwater.BP_Underwater_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Underwater_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(130213);

	ABP_Underwater_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Underwater.BP_Underwater_C.UnderWater
// (BlueprintCallable, BlueprintEvent)

void ABP_Underwater_C::UnderWater()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(130212);

	ABP_Underwater_C_UnderWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Underwater.BP_Underwater_C.OutOfWater
// (BlueprintCallable, BlueprintEvent)

void ABP_Underwater_C::OutOfWater()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(130211);

	ABP_Underwater_C_OutOfWater_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Underwater.BP_Underwater_C.ExecuteUbergraph_BP_Underwater
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Underwater_C::ExecuteUbergraph_BP_Underwater(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(130124);

	ABP_Underwater_C_ExecuteUbergraph_BP_Underwater_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
