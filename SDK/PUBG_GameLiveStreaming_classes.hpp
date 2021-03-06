#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_GameLiveStreaming_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameLiveStreaming.GameLiveStreamingFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UGameLiveStreamingFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x6730bcc8);
		return ptr;
	}


	static void StopWebCam();
	static void StopBroadcastingGame();
	static void StartWebCam(int DesiredWebCamWidth, int DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo);
	static void StartBroadcastingGame(const struct FString& LoginUserName, const struct FString& LoginPassword, int FrameRate, float ScreenScaling, bool bStartWebCam, int DesiredWebCamWidth, int DesiredWebCamHeight, bool bMirrorWebCamImage, bool bDrawSimpleWebCamVideo, bool bCaptureAudioFromComputer, bool bCaptureAudioFromMicrophone, class UTexture2D* CoverUpImage);
	static bool IsWebCamEnabled();
	static bool IsBroadcastingGame();
};


// Class GameLiveStreaming.QueryLiveStreamsCallbackProxy
// 0x0020 (0x0048 - 0x0028)
class UQueryLiveStreamsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnQueriedLiveStreams;                                     // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0xb70cc03b);
		return ptr;
	}


	static class UQueryLiveStreamsCallbackProxy* QueryLiveStreams(const struct FString& GameName);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
