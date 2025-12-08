// Class InterchangePipelines.InterchangeGenericCommonMeshesProperties
// Size: 0x100 (Inherited: 0xf0)
struct UInterchangeGenericCommonMeshesProperties : UInterchangePipelineBase {
	enum class EInterchangeForceMeshType ForceAllMeshAsType; // 0xf0(0x01)
	bool bImportLods; // 0xf1(0x01)
	bool bBakeMeshes; // 0xf2(0x01)
	enum class EInterchangeVertexColorImportOption VertexColorImportOption; // 0xf3(0x01)
	struct FColor VertexOverrideColor; // 0xf4(0x04)
	bool bRecomputeNormals; // 0xf8(0x01)
	bool bRecomputeTangents; // 0xf9(0x01)
	bool bUseMikkTSpace; // 0xfa(0x01)
	bool bComputeWeightedNormals; // 0xfb(0x01)
	bool bUseHighPrecisionTangentBasis; // 0xfc(0x01)
	bool bUseFullPrecisionUVs; // 0xfd(0x01)
	bool bUseBackwardsCompatibleF16TruncUVs; // 0xfe(0x01)
	bool bRemoveDegenerates; // 0xff(0x01)
};

// Class InterchangePipelines.InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties
// Size: 0x100 (Inherited: 0xf0)
struct UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties : UInterchangePipelineBase {
	bool bImportOnlyAnimations; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct TWeakObjectPtr<struct USkeleton> Skeleton; // 0xf4(0x08)
	bool bImportMeshesInBoneHierarchy; // 0xfc(0x01)
	bool bUseT0AsRefPose; // 0xfd(0x01)
	bool bConvertStaticsWithMorphTargetsToSkeletals; // 0xfe(0x01)
	char pad_FF[0x1]; // 0xff(0x01)
};

// Class InterchangePipelines.GLTFPipelineSettings
// Size: 0xa0 (Inherited: 0x48)
struct UGLTFPipelineSettings : UDeveloperSettings {
	struct TMap<struct FString, struct FSoftObjectPath> MaterialParents; // 0x48(0x50)
	char pad_98[0x8]; // 0x98(0x08)
};

// Class InterchangePipelines.InterchangeGLTFPipeline
// Size: 0x100 (Inherited: 0xf0)
struct UInterchangeGLTFPipeline : UInterchangePipelineBase {
	char pad_F0[0x8]; // 0xf0(0x08)
	bool bUseGLTFMaterialInstanceLibrary; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
};

// Class InterchangePipelines.MaterialXPipelineSettings
// Size: 0x98 (Inherited: 0x48)
struct UMaterialXPipelineSettings : UDeveloperSettings {
	struct TMap<enum class EInterchangeMaterialXShaders, struct FSoftObjectPath> PredefinedSurfaceShaders; // 0x48(0x50)
};

// Class InterchangePipelines.InterchangeMaterialXPipeline
// Size: 0xf8 (Inherited: 0xf0)
struct UInterchangeMaterialXPipeline : UInterchangePipelineBase {
	char pad_F0[0x8]; // 0xf0(0x08)
};

// Class InterchangePipelines.InterchangeGenericAnimationPipeline
// Size: 0x160 (Inherited: 0xf0)
struct UInterchangeGenericAnimationPipeline : UInterchangePipelineBase {
	struct TWeakObjectPtr<struct UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties> CommonSkeletalMeshesAndAnimationsProperties; // 0xf0(0x08)
	struct TWeakObjectPtr<struct UInterchangeGenericCommonMeshesProperties> CommonMeshesProperties; // 0xf8(0x08)
	bool bImportAnimations; // 0x100(0x01)
	bool bImportBoneTracks; // 0x101(0x01)
	enum class EInterchangeAnimationRange AnimationRange; // 0x102(0x01)
	char pad_103[0x1]; // 0x103(0x01)
	struct FInt32Interval FrameImportRange; // 0x104(0x08)
	bool bUse30HzToBakeBoneAnimation; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	int32_t CustomBoneAnimationSampleRate; // 0x110(0x04)
	bool bSnapToClosestFrameBoundary; // 0x114(0x01)
	bool bImportCustomAttribute; // 0x115(0x01)
	bool bAddCurveMetadataToSkeleton; // 0x116(0x01)
	bool bSetMaterialDriveParameterOnCustomAttribute; // 0x117(0x01)
	struct TArray<struct FString> MaterialCurveSuffixes; // 0x118(0x10)
	bool bRemoveCurveRedundantKeys; // 0x128(0x01)
	bool bDoNotImportCurveWithZero; // 0x129(0x01)
	bool bDeleteExistingNonCurveCustomAttributes; // 0x12a(0x01)
	bool bDeleteExistingCustomAttributeCurves; // 0x12b(0x01)
	bool bDeleteExistingMorphTargetCurves; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	struct FString SourceAnimationName; // 0x130(0x10)
	bool bSceneImport; // 0x140(0x01)
	char pad_141[0x1f]; // 0x141(0x1f)
};

// Class InterchangePipelines.InterchangeGenericAssetsPipeline
// Size: 0x180 (Inherited: 0xf0)
struct UInterchangeGenericAssetsPipeline : UInterchangePipelineBase {
	enum class EReimportStrategyFlags ReimportStrategy; // 0xf0(0x01)
	bool bUseSourceNameForAsset; // 0xf1(0x01)
	char pad_F2[0x6]; // 0xf2(0x06)
	struct FString AssetName; // 0xf8(0x10)
	struct FVector ImportOffsetTranslation; // 0x108(0x18)
	struct FRotator ImportOffsetRotation; // 0x120(0x18)
	float ImportOffsetUniformScale; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct UInterchangeGenericCommonMeshesProperties* CommonMeshesProperties; // 0x140(0x08)
	struct UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties* CommonSkeletalMeshesAndAnimationsProperties; // 0x148(0x08)
	struct UInterchangeGenericMeshPipeline* MeshPipeline; // 0x150(0x08)
	struct UInterchangeGenericAnimationPipeline* AnimationPipeline; // 0x158(0x08)
	struct UInterchangeGenericMaterialPipeline* MaterialPipeline; // 0x160(0x08)
	char pad_168[0x18]; // 0x168(0x18)
};

// Class InterchangePipelines.InterchangeGenericMaterialPipeline
// Size: 0x190 (Inherited: 0xf0)
struct UInterchangeGenericMaterialPipeline : UInterchangePipelineBase {
	bool bImportMaterials; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct FString AssetName; // 0xf8(0x10)
	enum class EInterchangeMaterialImportOption MaterialImport; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct FSoftObjectPath ParentMaterial; // 0x110(0x28)
	struct UInterchangeGenericTexturePipeline* TexturePipeline; // 0x138(0x08)
	struct UInterchangeBaseNodeContainer* BaseNodeContainer; // 0x140(0x08)
	char pad_148[0x48]; // 0x148(0x48)
};

// Class InterchangePipelines.InterchangeGenericMeshPipeline
// Size: 0x1c8 (Inherited: 0xf0)
struct UInterchangeGenericMeshPipeline : UInterchangePipelineBase {
	struct TWeakObjectPtr<struct UInterchangeGenericCommonMeshesProperties> CommonMeshesProperties; // 0xf0(0x08)
	struct TWeakObjectPtr<struct UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties> CommonSkeletalMeshesAndAnimationsProperties; // 0xf8(0x08)
	bool bImportStaticMeshes; // 0x100(0x01)
	bool bCombineStaticMeshes; // 0x101(0x01)
	char pad_102[0x2]; // 0x102(0x02)
	struct FName LODGroup; // 0x104(0x0c)
	bool bImportCollision; // 0x110(0x01)
	bool bImportCollisionAccordingToMeshName; // 0x111(0x01)
	bool bOneConvexHullPerUCX; // 0x112(0x01)
	bool bBuildNanite; // 0x113(0x01)
	bool bBuildReversedIndexBuffer; // 0x114(0x01)
	bool bGenerateLightmapUVs; // 0x115(0x01)
	bool bGenerateDistanceFieldAsIfTwoSided; // 0x116(0x01)
	bool bSupportFaceRemap; // 0x117(0x01)
	int32_t MinLightmapResolution; // 0x118(0x04)
	int32_t SrcLightmapIndex; // 0x11c(0x04)
	int32_t DstLightmapIndex; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct FVector BuildScale3D; // 0x128(0x18)
	float DistanceFieldResolutionScale; // 0x140(0x04)
	struct TWeakObjectPtr<struct UStaticMesh> DistanceFieldReplacementMesh; // 0x144(0x08)
	int32_t MaxLumenMeshCards; // 0x14c(0x04)
	bool bImportSkeletalMeshes; // 0x150(0x01)
	enum class EInterchangeSkeletalMeshContentType SkeletalMeshImportContentType; // 0x151(0x01)
	enum class EInterchangeSkeletalMeshContentType LastSkeletalMeshImportContentType; // 0x152(0x01)
	bool bCombineSkeletalMeshes; // 0x153(0x01)
	bool bImportMorphTargets; // 0x154(0x01)
	bool bUpdateSkeletonReferencePose; // 0x155(0x01)
	bool bCreatePhysicsAsset; // 0x156(0x01)
	char pad_157[0x1]; // 0x157(0x01)
	struct TWeakObjectPtr<struct UPhysicsAsset> PhysicsAsset; // 0x158(0x08)
	bool bUseHighPrecisionSkinWeights; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	float ThresholdPosition; // 0x164(0x04)
	float ThresholdTangentNormal; // 0x168(0x04)
	float ThresholdUV; // 0x16c(0x04)
	float MorphThresholdPosition; // 0x170(0x04)
	int32_t BoneInfluenceLimit; // 0x174(0x04)
	char pad_178[0x50]; // 0x178(0x50)
};

// Class InterchangePipelines.InterchangeGenericLevelPipeline
// Size: 0x100 (Inherited: 0xf0)
struct UInterchangeGenericLevelPipeline : UInterchangePipelineBase {
	enum class EReimportStrategyFlags ReimportPropertyStrategy; // 0xf0(0x01)
	bool bDeleteMissingActors; // 0xf1(0x01)
	bool bForceReimportDeletedActors; // 0xf2(0x01)
	bool bForceReimportDeletedAssets; // 0xf3(0x01)
	bool bDeleteMissingAssets; // 0xf4(0x01)
	bool bUsePhysicalInsteadOfStandardPerspectiveCamera; // 0xf5(0x01)
	char pad_F6[0xa]; // 0xf6(0x0a)
};

// Class InterchangePipelines.InterchangeGenericTexturePipeline
// Size: 0x148 (Inherited: 0xf0)
struct UInterchangeGenericTexturePipeline : UInterchangePipelineBase {
	bool bImportTextures; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct FString AssetName; // 0xf8(0x10)
	bool bAllowNonPowerOfTwo; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct UInterchangeBaseNodeContainer* BaseNodeContainer; // 0x110(0x08)
	char pad_118[0x30]; // 0x118(0x30)
};

// Class InterchangePipelines.InterchangePipelineMeshesUtilities
// Size: 0x130 (Inherited: 0x30)
struct UInterchangePipelineMeshesUtilities : UObject {
	char pad_30[0x100]; // 0x30(0x100)

	void SetContext(struct FInterchangePipelineMeshesUtilitiesContext& Context); // Function InterchangePipelines.InterchangePipelineMeshesUtilities.SetContext // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x787dfc0
	bool IsValidMeshInstanceUid(struct FString MeshInstanceUid); // Function InterchangePipelines.InterchangePipelineMeshesUtilities.IsValidMeshInstanceUid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x787ed30
	bool IsValidMeshGeometryUid(struct FString MeshGeometryUid); // Function InterchangePipelines.InterchangePipelineMeshesUtilities.IsValidMeshGeometryUid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x787e960
	struct FString GetMeshInstanceSkeletonRootUid(struct FString MeshInstanceUid); // Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshInstanceSkeletonRootUid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x787e260
	struct FInterchangeMeshInstance GetMeshInstanceByUid(struct FString MeshInstanceUid); // Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshInstanceByUid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x787ead0
	struct FString GetMeshGeometrySkeletonRootUid(struct FString MeshGeometryUid); // Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshGeometrySkeletonRootUid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x787e0c0
	struct FInterchangeMeshGeometry GetMeshGeometryByUid(struct FString MeshGeometryUid); // Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetMeshGeometryByUid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x787e7c0
	void GetAllStaticMeshInstance(struct TArray<struct FString>& MeshInstanceUids); // Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllStaticMeshInstance // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x787f360
	void GetAllStaticMeshGeometry(struct TArray<struct FString>& MeshGeometryUids); // Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllStaticMeshGeometry // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x787efd0
	void GetAllSkinnedMeshInstance(struct TArray<struct FString>& MeshInstanceUids); // Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllSkinnedMeshInstance // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x787f490
	void GetAllSkinnedMeshGeometry(struct TArray<struct FString>& MeshGeometryUids); // Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllSkinnedMeshGeometry // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x787f100
	void GetAllMeshInstanceUidsUsingMeshGeometryUid(struct FString MeshGeometryUid, struct TArray<struct FString>& MeshInstanceUids); // Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshInstanceUidsUsingMeshGeometryUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x787e510
	void GetAllMeshInstanceUids(struct TArray<struct FString>& MeshInstanceUids); // Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshInstanceUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x787f5c0
	void GetAllMeshGeometryNotInstanced(struct TArray<struct FString>& MeshGeometryUids); // Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshGeometryNotInstanced // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x787eea0
	void GetAllMeshGeometry(struct TArray<struct FString>& MeshGeometryUids); // Function InterchangePipelines.InterchangePipelineMeshesUtilities.GetAllMeshGeometry // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x787f230
	struct UInterchangePipelineMeshesUtilities* CreateInterchangePipelineMeshesUtilities(struct UInterchangeBaseNodeContainer* BaseNodeContainer); // Function InterchangePipelines.InterchangePipelineMeshesUtilities.CreateInterchangePipelineMeshesUtilities // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x787f6f0
};

