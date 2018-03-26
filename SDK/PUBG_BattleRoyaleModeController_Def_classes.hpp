#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BattleRoyaleModeController_Def_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BattleRoyaleModeController_Def.BattleRoyaleModeController_Def_C
// 0x0008 (0x05F8 - 0x05F0)
class ABattleRoyaleModeController_Def_C : public ABattleRoyaleModeController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05F0(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xbc5af207);
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BattleRoyaleModeController_Def(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
