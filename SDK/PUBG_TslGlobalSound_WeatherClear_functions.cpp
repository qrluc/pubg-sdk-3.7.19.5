// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TslGlobalSound_WeatherClear_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TslGlobalSound_WeatherClear.TslGlobalSound_WeatherClear_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATslGlobalSound_WeatherClear_C::UserConstructionScript()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(142054);

	ATslGlobalSound_WeatherClear_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGlobalSound_WeatherClear.TslGlobalSound_WeatherClear_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATslGlobalSound_WeatherClear_C::ReceiveBeginPlay()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(142053);

	ATslGlobalSound_WeatherClear_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGlobalSound_WeatherClear.TslGlobalSound_WeatherClear_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>*   EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData)

void ATslGlobalSound_WeatherClear_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason>* EndPlayReason)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(142051);

	ATslGlobalSound_WeatherClear_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TslGlobalSound_WeatherClear.TslGlobalSound_WeatherClear_C.ExecuteUbergraph_TslGlobalSound_WeatherClear
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ATslGlobalSound_WeatherClear_C::ExecuteUbergraph_TslGlobalSound_WeatherClear(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(142046);

	ATslGlobalSound_WeatherClear_C_ExecuteUbergraph_TslGlobalSound_WeatherClear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
