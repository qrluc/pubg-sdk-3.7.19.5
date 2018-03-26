#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MotorbikeSidecart_Wheel_RL_Punctured_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MotorbikeSidecart_Wheel_RL_Punctured.MotorbikeSidecart_Wheel_RL_Punctured_C
// 0x0000 (0x0218 - 0x0218)
class UMotorbikeSidecart_Wheel_RL_Punctured_C : public UMotorbikeSidecart_Wheel_R_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x16d5f913);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
