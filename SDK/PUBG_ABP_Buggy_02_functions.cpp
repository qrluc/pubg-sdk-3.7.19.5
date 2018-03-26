// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Buggy_02_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ABP_Buggy_02.ABP_Buggy_02_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buggy_02_AnimGraphNode_ModifyBone_FDFED6494A57A71E102E60A52FED6747
// (BlueprintEvent)

void UABP_Buggy_02_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buggy_02_AnimGraphNode_ModifyBone_FDFED6494A57A71E102E60A52FED6747()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(114537);

	UABP_Buggy_02_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buggy_02_AnimGraphNode_ModifyBone_FDFED6494A57A71E102E60A52FED6747_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ABP_Buggy_02.ABP_Buggy_02_C.ExecuteUbergraph_ABP_Buggy_02
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UABP_Buggy_02_C::ExecuteUbergraph_ABP_Buggy_02(int EntryPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(114535);

	UABP_Buggy_02_C_ExecuteUbergraph_ABP_Buggy_02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
