// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MobilePatchingUtils_parameters.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MobilePatchingUtils.MobileInstalledContent.Mount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            PakOrder                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 MountPoint                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMobileInstalledContent::Mount(int PakOrder, const struct FString& MountPoint)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(41601);

	UMobileInstalledContent_Mount_Params params;
	params.PakOrder = PakOrder;
	params.MountPoint = MountPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMobileInstalledContent::GetInstalledContentSize()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(41599);

	UMobileInstalledContent_GetInstalledContentSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMobileInstalledContent::GetDiskFreeSpace()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(41597);

	UMobileInstalledContent_GetDiskFreeSpace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.StartInstall
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         OnSucceeded                    (Parm, ZeroConstructor)
// struct FScriptDelegate         OnFailed                       (Parm, ZeroConstructor)

void UMobilePendingContent::StartInstall(const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(41617);

	UMobilePendingContent_StartInstall_Params params;
	params.OnSucceeded = OnSucceeded;
	params.OnFailed = OnFailed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMobilePendingContent::GetTotalDownloadedSize()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(41615);

	UMobilePendingContent_GetTotalDownloadedSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMobilePendingContent::GetRequiredDiskSpace()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(41613);

	UMobilePendingContent_GetRequiredDiskSpace_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMobilePendingContent::GetInstallProgress()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(41611);

	UMobilePendingContent_GetInstallProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UMobilePendingContent::GetDownloadStatusText()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(41609);

	UMobilePendingContent_GetDownloadStatusText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMobilePendingContent::GetDownloadSpeed()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(41607);

	UMobilePendingContent_GetDownloadSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UMobilePendingContent::GetDownloadSize()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(41605);

	UMobilePendingContent_GetDownloadSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 RemoteManifestURL              (Parm, ZeroConstructor)
// struct FString                 CloudURL                       (Parm, ZeroConstructor)
// struct FString                 InstallDirectory               (Parm, ZeroConstructor)
// struct FScriptDelegate         OnSucceeded                    (Parm, ZeroConstructor)
// struct FScriptDelegate         OnFailed                       (Parm, ZeroConstructor)

void UMobilePatchingLibrary::RequestContent(const struct FString& RemoteManifestURL, const struct FString& CloudURL, const struct FString& InstallDirectory, const struct FScriptDelegate& OnSucceeded, const struct FScriptDelegate& OnFailed)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(41630);

	UMobilePatchingLibrary_RequestContent_Params params;
	params.RemoteManifestURL = RemoteManifestURL;
	params.CloudURL = CloudURL;
	params.InstallDirectory = InstallDirectory;
	params.OnSucceeded = OnSucceeded;
	params.OnFailed = OnFailed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMobilePatchingLibrary::HasActiveWiFiConnection()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(41628);

	UMobilePatchingLibrary_HasActiveWiFiConnection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UMobilePatchingLibrary::GetSupportedPlatformNames()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(41625);

	UMobilePatchingLibrary_GetSupportedPlatformNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 InstallDirectory               (Parm, ZeroConstructor)
// class UMobileInstalledContent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMobileInstalledContent* UMobilePatchingLibrary::GetInstalledContent(const struct FString& InstallDirectory)
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(41622);

	UMobilePatchingLibrary_GetInstalledContent_Params params;
	params.InstallDirectory = InstallDirectory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UMobilePatchingLibrary::GetActiveDeviceProfileName()
{
	static UFunction* fn = nullptr; 
	if (!fn) fn = UObject::GetObjectCasted<UFunction>(41620);

	UMobilePatchingLibrary_GetActiveDeviceProfileName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
