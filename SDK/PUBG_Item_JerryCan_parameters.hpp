#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Item_JerryCan_classes.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Item_JerryCan.Item_JerryCan_C.SendSystemMessage
struct UItem_JerryCan_C_SendSystemMessage_Params
{
	class ATslCharacter*                               PlayerController;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	struct FText                                       Message;                                                  // (Parm)
};

// Function Item_JerryCan.Item_JerryCan_C.IsCastable
struct UItem_JerryCan_C_IsCastable_Params
{
	class ATslCharacter**                              Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Item_JerryCan.Item_JerryCan_C.Refule
struct UItem_JerryCan_C_Refule_Params
{
	class APawn*                                       Vehicle;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Item_JerryCan.Item_JerryCan_C.UseBy
struct UItem_JerryCan_C_UseBy_Params
{
	class ATslCharacter**                              Character;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
