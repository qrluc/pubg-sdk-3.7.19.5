#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_LevelAttribute_BattleRoyaleRule_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LevelAttribute_BattleRoyaleRule.LevelAttribute_BattleRoyaleRule_C
// 0x0000 (0x0450 - 0x0450)
class ALevelAttribute_BattleRoyaleRule_C : public ALevelAttribute
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xcdc758b1);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
