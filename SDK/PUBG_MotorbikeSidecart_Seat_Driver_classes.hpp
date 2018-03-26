#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MotorbikeSidecart_Seat_Driver_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MotorbikeSidecart_Seat_Driver.MotorbikeSidecart_Seat_Driver_C
// 0x0000 (0x0464 - 0x0464)
class AMotorbikeSidecart_Seat_Driver_C : public AVehicleSeatBase_Moto_C
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xaabd0935);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
