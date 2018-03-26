#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WeapHK416_ChildTESTINGAMMO_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapHK416_ChildTESTINGAMMO.WeapHK416_ChildTESTINGAMMO_C
// 0x0000 (0x0E20 - 0x0E20)
class AWeapHK416_ChildTESTINGAMMO_C : public AWeapHK416_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x70de5f55);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
