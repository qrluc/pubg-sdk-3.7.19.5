#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_Buff_FinalSpreadReduce_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_FinalSpreadReduce.Buff_FinalSpreadReduce_C
// 0x0014 (0x0424 - 0x0410)
class ABuff_FinalSpreadReduce_C : public ATslBuff
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0410(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FinalSpreadFactor;                                        // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xf4e8533b);
		return ptr;
	}


	void UserConstructionScript();
	void StartBuffBlueprint();
	void StopBuffBlueprint(bool* bCanceled);
	void ExecuteUbergraph_Buff_FinalSpreadReduce(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
