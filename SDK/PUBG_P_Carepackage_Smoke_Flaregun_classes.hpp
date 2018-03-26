#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_P_Carepackage_Smoke_Flaregun_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass P_Carepackage_Smoke_Flaregun.P_Carepackage_Smoke_Flaregun_C
// 0x0000 (0x0410 - 0x0410)
class AP_Carepackage_Smoke_Flaregun_C : public AP_Carepackage_Smoke_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x263c3333);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
