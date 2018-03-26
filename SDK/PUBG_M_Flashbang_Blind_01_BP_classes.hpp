#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_M_Flashbang_Blind_01_BP_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass M_Flashbang_Blind_01_BP.M_Flashbang_Blind_01_BP_C
// 0x0030 (0x0430 - 0x0400)
class AM_Flashbang_Blind_01_BP_C : public ATslPostProcessEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              _____1______0_AFF6D5134D79CE6B543B1D8991A51AF6;           // 0x0410(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _____1__Direction_AFF6D5134D79CE6B543B1D8991A51AF6;       // 0x0414(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Unknown9828_2;                                            // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              _____0______0_2FD5CA0D48A747A9C536689E48D8A2F7;           // 0x0420(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _____0__Direction_2FD5CA0D48A747A9C536689E48D8A2F7;       // 0x0424(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Unknown4981_1;                                            // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x7da28d35);
		return ptr;
	}


	void UserConstructionScript();
	void Unknown9985();
	void Unknown6923();
	void Unknown8536();
	void Unknown7691();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_M_Flashbang_Blind_01_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
