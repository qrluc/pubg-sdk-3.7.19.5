#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_InputCore_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class InputCore.InputCoreTypes
// 0x0000 (0x0028 - 0x0028)
class UInputCoreTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xc1182b12);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
