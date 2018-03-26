#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_M_ElectricWall_Inside_BP_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C
// 0x0020 (0x0420 - 0x0400)
class AM_ElectricWall_Inside_BP_C : public ATslPostProcessEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              _____0______0_F1196C2844F052526643A091F7753F02;           // 0x0410(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    _____0__Direction_F1196C2844F052526643A091F7753F02;       // 0x0414(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	class UTimelineComponent*                          Unknown5122_1;                                            // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xc82d7097);
		return ptr;
	}


	void UserConstructionScript();
	void Unknown6639();
	void Unknown3006();
	void ReceiveBeginPlay();
	void Custom_Event_1();
	void OnSetEffectParameter(struct FString* ParameterName, float* Value);
	void ExecuteUbergraph_M_ElectricWall_Inside_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
