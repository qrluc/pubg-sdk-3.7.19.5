#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buff_DecreaseBreathInApnea_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_DecreaseBreathInApnea.Buff_DecreaseBreathInApnea_C
// 0x0020 (0x0438 - 0x0418)
class ABuff_DecreaseBreathInApnea_C : public ACharacterBreathBuff
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0418(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HealthPerTick;                                            // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x042C(0x0004) MISSED OFFSET
	class UClass*                                      DamageType;                                               // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x90975255);
		return ptr;
	}


	void DecreaseHealth(class ATslCharacter* Character);
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void TickBuff();
	void ExecuteUbergraph_Buff_DecreaseBreathInApnea(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
