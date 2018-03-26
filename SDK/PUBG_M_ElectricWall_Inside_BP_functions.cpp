// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_M_ElectricWall_Inside_BP_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AM_ElectricWall_Inside_BP_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99944);

	AM_ElectricWall_Inside_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.Unknown4434
// (BlueprintEvent)

void AM_ElectricWall_Inside_BP_C::Unknown6639()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99943);

	AM_ElectricWall_Inside_BP_C_Unknown6639_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.Unknown7540
// (BlueprintEvent)

void AM_ElectricWall_Inside_BP_C::Unknown3006()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99942);

	AM_ElectricWall_Inside_BP_C_Unknown3006_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AM_ElectricWall_Inside_BP_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99941);

	AM_ElectricWall_Inside_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.Custom Event_1
// (BlueprintCallable, BlueprintEvent)

void AM_ElectricWall_Inside_BP_C::Custom_Event_1()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99940);

	AM_ElectricWall_Inside_BP_C_Custom_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.OnSetEffectParameter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FString*                ParameterName                  (Parm, ZeroConstructor)
// float*                         Value                          (Parm, ZeroConstructor, IsPlainOldData)

void AM_ElectricWall_Inside_BP_C::OnSetEffectParameter(struct FString* ParameterName, float* Value)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99937);

	AM_ElectricWall_Inside_BP_C_OnSetEffectParameter_Params params;
	params.ParameterName = ParameterName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.ExecuteUbergraph_M_ElectricWall_Inside_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AM_ElectricWall_Inside_BP_C::ExecuteUbergraph_M_ElectricWall_Inside_BP(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(99926);

	AM_ElectricWall_Inside_BP_C_ExecuteUbergraph_M_ElectricWall_Inside_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
