// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PlaneSeatInfoWidget_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlaneSeatInfoWidget.PlaneSeatInfoWidget_C.Ride
// (Public, BlueprintCallable, BlueprintEvent)

void UPlaneSeatInfoWidget_C::Ride()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(144729);

	UPlaneSeatInfoWidget_C_Ride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PlaneSeatInfoWidget.PlaneSeatInfoWidget_C.GetSeatState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UPlaneSeatInfoWidget_C::GetSeatState()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(144727);

	UPlaneSeatInfoWidget_C_GetSeatState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlaneSeatInfoWidget.PlaneSeatInfoWidget_C.Empty
// (Public, BlueprintCallable, BlueprintEvent)

void UPlaneSeatInfoWidget_C::Empty()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(144726);

	UPlaneSeatInfoWidget_C_Empty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
