#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_SpawnTableItemSpawnProcessor_Default_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpawnTableItemSpawnProcessor_Default.SpawnTableItemSpawnProcessor_Default_C
// 0x0000 (0x0F68 - 0x0F68)
class USpawnTableItemSpawnProcessor_Default_C : public USpawnTableItemSpawnProcessor
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xdca146a3);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
