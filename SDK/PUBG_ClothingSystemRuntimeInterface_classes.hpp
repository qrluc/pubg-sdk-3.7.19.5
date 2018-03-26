#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ClothingSystemRuntimeInterface_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// 0x0020 (0x0048 - 0x0028)
class UClothingAssetBase : public UObject
{
public:
	struct FString                                     ImportedFilePath;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, EditConst)
	struct FGuid                                       AssetGuid;                                                // 0x0038(0x0010) (IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb100fdd4);
		return ptr;
	}

};


// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// 0x0000 (0x0028 - 0x0028)
class UClothingSimulationFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x4106df06);
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
