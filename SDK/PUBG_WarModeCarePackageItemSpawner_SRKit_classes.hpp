#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WarModeCarePackageItemSpawner_SRKit_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WarModeCarePackageItemSpawner_SRKit.WarModeCarePackageItemSpawner_SRKit_C
// 0x0000 (0x00E8 - 0x00E8)
class UWarModeCarePackageItemSpawner_SRKit_C : public UTableGeneralItemSpawner
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x8c0acc95);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
