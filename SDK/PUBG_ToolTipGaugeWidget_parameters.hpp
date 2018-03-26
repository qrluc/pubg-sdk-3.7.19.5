#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ToolTipGaugeWidget_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ToolTipGaugeWidget.ToolTipGaugeWidget_C.Update
struct UToolTipGaugeWidget_C_Update_Params
{
	float                                              BeginGap;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              EndGap;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCompareMode;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ToolTipGaugeWidget.ToolTipGaugeWidget_C.Construct
struct UToolTipGaugeWidget_C_Construct_Params
{
};

// Function ToolTipGaugeWidget.ToolTipGaugeWidget_C.ExecuteUbergraph_ToolTipGaugeWidget
struct UToolTipGaugeWidget_C_ExecuteUbergraph_ToolTipGaugeWidget_Params
{
	int                                                EntryPoint;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
