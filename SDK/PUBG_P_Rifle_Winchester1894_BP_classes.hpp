#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_P_Rifle_Winchester1894_BP_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass P_Rifle_Winchester1894_BP.P_Rifle_Winchester1894_BP_C
// 0x0000 (0x0410 - 0x0410)
class AP_Rifle_Winchester1894_BP_C : public ATslParticle
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xc99dbe95);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
