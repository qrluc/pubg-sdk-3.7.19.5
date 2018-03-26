#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Item_Weapon_HK416_ChildTESTAMMO_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Item_Weapon_HK416_ChildTESTAMMO.Item_Weapon_HK416_ChildTESTAMMO_C
// 0x0000 (0x02D0 - 0x02D0)
class UItem_Weapon_HK416_ChildTESTAMMO_C : public UItem_Weapon_HK416_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xba84a3c1);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
