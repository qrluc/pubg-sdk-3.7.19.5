#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Item_Attach_Weapon_Magazine_QuickDraw_Small_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Item_Attach_Weapon_Magazine_QuickDraw_Small.Item_Attach_Weapon_Magazine_QuickDraw_Small_C
// 0x0000 (0x0488 - 0x0488)
class UItem_Attach_Weapon_Magazine_QuickDraw_Small_C : public UAttachableItem
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x83186f5d);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
