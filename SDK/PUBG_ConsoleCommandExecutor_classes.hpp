#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ConsoleCommandExecutor_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ConsoleCommandExecutor.ConsoleCommandExecutor_C
// 0x0021 (0x03D1 - 0x03B0)
class AConsoleCommandExecutor_C : public AConsoleCommandExecutor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B0(0x0008) (Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ConsoleCommands;                                          // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               ExecuteCommandsInEditor;                                  // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x5c0f877f);
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ConsoleCommandExecutor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
