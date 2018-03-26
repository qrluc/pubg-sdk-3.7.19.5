#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WarModeCarePackageItemSpawner_Basic_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WarModeCarePackageItemSpawner_Basic.WarModeCarePackageItemSpawner_Basic_C
// 0x0000 (0x00E8 - 0x00E8)
class UWarModeCarePackageItemSpawner_Basic_C : public UTableGeneralItemSpawner
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xc1c0547d);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
