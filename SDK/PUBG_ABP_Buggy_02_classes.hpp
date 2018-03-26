#pragma once

// PlayerUnknown's Battlegrounds (3.5.7.7) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_ABP_Buggy_02_structs.hpp"

namespace PUBG
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ABP_Buggy_02.ABP_Buggy_02_C
// 0x25E8 (0x2EF8 - 0x0910)
class UABP_Buggy_02_C : public UTslVehicleAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0910(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_525B0D71411FEEC29D97728CAD3498F2;// 0x0918(0x00E8)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_2D5DFC0843E5768F908C608128614308;// 0x0A00(0x00E8)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0AE8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_41048E284724F4A8DDDD0CB3C5DC185F;    // 0x0AF0(0x0180)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_9392501D46BE0C346DF473B19AC45DEA;    // 0x0C70(0x0180)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_32BC35E444C8E3B3AD7D73916262A773;// 0x0DF0(0x00A8)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_4F071B7947A1EC420D9F539DB2C67218;// 0x0E98(0x00E8)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_40518C144A367A467CC7DE8E230A629C;// 0x0F80(0x00E8)
	unsigned char                                      UnknownData01[0x8];                                       // 0x1068(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_86E309CF49845B1AB57A13A3E845595C;    // 0x1070(0x0180)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_20231E94463777C18E76A1AF4037F36B;    // 0x11F0(0x0180)
	struct FAnimNode_RotationMultiplier                AnimGraphNode_RotationMultiplier_F799497442C968C1E5358EB8709A236A;// 0x1370(0x00A8)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_2BE9CB224632CE656CDA9D8602B21829;// 0x1418(0x00E8)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_7568F4C44D626692B442C886CA915B8E;// 0x1500(0x00E8)
	unsigned char                                      UnknownData02[0x8];                                       // 0x15E8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_9A59C9F04B0D23713F80C89D693603B7;    // 0x15F0(0x0180)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_9F374C574CA3C275ABF11B906CC6AEFD;    // 0x1770(0x0180)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_30DE3D4841BF1574C99A0D877FDF4AC9;    // 0x18F0(0x0180)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_3CEE7B114F611C19DC12D380FF65133A;// 0x1A70(0x0048)
	struct FAnimNode_WheelHandler                      AnimGraphNode_WheelHandler_4E4CB5084AF05A0D12FF4EA77E33506E;// 0x1AB8(0x0088)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_3F9971AF45A6FC72D6453A98A794FC6F;  // 0x1B40(0x00A8)
	unsigned char                                      UnknownData03[0x8];                                       // 0x1BE8(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_34CFC3A04D8C772F60DB04BC986F3358;    // 0x1BF0(0x0180)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_D99FF38141F9A7C96009B08BD89C7A8C;// 0x1D70(0x00E8)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_0863980840F1050B21C00893035B112D;// 0x1E58(0x00E8)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_86C5B6C54066F2CFB461FDB1042ACA75;    // 0x1F40(0x0180)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_776CD22D4E1EEBB1359AE9A3DF6E456C;    // 0x20C0(0x0180)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_C2C299464A50806AF1536F91C6A7758E;    // 0x2240(0x0180)
	struct FAnimNode_CopyBone                          AnimGraphNode_CopyBone_907B50A849EFC92CBA815BB3A4564152;  // 0x23C0(0x00A8)
	unsigned char                                      UnknownData04[0x8];                                       // 0x2468(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_2417D96A4F4BAFE072FB69B47B948AF4;    // 0x2470(0x0180)
	struct FAnimNode_MeshSpaceRefPose                  AnimGraphNode_MeshRefPose_C8CD5E94491A92C7E2848F8821F7BCA0;// 0x25F0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_68BA2A6F4DED33E2087BD987FCF84942;      // 0x2620(0x0048)
	unsigned char                                      UnknownData05[0x8];                                       // 0x2668(0x0008) MISSED OFFSET
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_97A0671143C606571D65BA9E90F216CF;    // 0x2670(0x0180)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_83FDDF9F4273A19F8716C9A90D938DAE;    // 0x27F0(0x0180)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_A1B31BA24CAB101750315E8D8E2777EA;    // 0x2970(0x0180)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_C22376EB4323F04B048533967201D033;    // 0x2AF0(0x0180)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_2795E080496160CD8E8709BD6AE87A63;// 0x2C70(0x00E8)
	struct FAnimNode_BoneDrivenController              AnimGraphNode_BoneDrivenController_2AD3089444CB42FD4C81D99F5C8E7EA5;// 0x2D58(0x00E8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_FDFED6494A57A71E102E60A52FED6747;// 0x2E40(0x00B8)

	static UClass* StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr) ptr = UObject::FindClass(0x95961676);
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Buggy_02_AnimGraphNode_ModifyBone_FDFED6494A57A71E102E60A52FED6747();
	void ExecuteUbergraph_ABP_Buggy_02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
