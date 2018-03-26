// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_Ocean_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_Ocean.BP_Ocean_C.Set Global Parameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Ocean_C::Set_Global_Parameters()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(130371);

	ABP_Ocean_C_Set_Global_Parameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.Set Display Parameters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Ocean_C::Set_Display_Parameters()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(130363);

	ABP_Ocean_C_Set_Display_Parameters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.Create Wave Set
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Ocean_C::Create_Wave_Set()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(130350);

	ABP_Ocean_C_Create_Wave_Set_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Ocean_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(130328);

	ABP_Ocean_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Ocean_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(130327);

	ABP_Ocean_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.SetNetworkOffset
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Offset                         (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ocean_C::SetNetworkOffset(float Offset)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(130325);

	ABP_Ocean_C_SetNetworkOffset_Params params;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Ocean.BP_Ocean_C.ExecuteUbergraph_BP_Ocean
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABP_Ocean_C::ExecuteUbergraph_BP_Ocean(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(130322);

	ABP_Ocean_C_ExecuteUbergraph_BP_Ocean_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
