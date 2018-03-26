#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Motorbike_Wheel_RL_Punctured_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Motorbike_Wheel_RL_Punctured.Motorbike_Wheel_RL_Punctured_C
// 0x0000 (0x0218 - 0x0218)
class UMotorbike_Wheel_RL_Punctured_C : public UMotorbike_Wheel_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xfe562bb5);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
