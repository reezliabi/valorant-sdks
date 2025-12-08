// Class HoudiniEngineRuntime.HoudiniAsset
// Size: 0x58 (Inherited: 0x30)
struct UHoudiniAsset : UObject {
	struct FString AssetFileName; // 0x30(0x10)
	struct TArray<char> AssetBytes; // 0x40(0x10)
	uint32_t AssetBytesCount; // 0x50(0x04)
	bool bAssetLimitedCommercial; // 0x54(0x01)
	bool bAssetNonCommercial; // 0x55(0x01)
	bool bAssetExpanded; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
};

// Class HoudiniEngineRuntime.HoudiniAssetActor
// Size: 0x468 (Inherited: 0x460)
struct AHoudiniAssetActor : AActor {
	struct UHoudiniAssetComponent* HoudiniAssetComponent; // 0x460(0x08)
};

// Class HoudiniEngineRuntime.HoudiniAssetComponent
// Size: 0xbe0 (Inherited: 0x690)
struct UHoudiniAssetComponent : UPrimitiveComponent {
	struct UHoudiniAsset* HoudiniAsset; // 0x690(0x08)
	bool bCookOnParameterChange; // 0x698(0x01)
	bool bUploadTransformsToHoudiniEngine; // 0x699(0x01)
	bool bCookOnTransformChange; // 0x69a(0x01)
	bool bCookOnAssetInputCook; // 0x69b(0x01)
	bool bOutputless; // 0x69c(0x01)
	bool bOutputTemplateGeos; // 0x69d(0x01)
	bool bUseOutputNodes; // 0x69e(0x01)
	char pad_69F[0x1]; // 0x69f(0x01)
	struct FDirectoryPath TemporaryCookFolder; // 0x6a0(0x10)
	struct FDirectoryPath BakeFolder; // 0x6b0(0x10)
	enum class EHoudiniStaticMeshMethod StaticMeshMethod; // 0x6c0(0x01)
	char pad_6C1[0x7]; // 0x6c1(0x07)
	struct FHoudiniStaticMeshGenerationProperties StaticMeshGenerationProperties; // 0x6c8(0x1e0)
	struct FMeshBuildSettings StaticMeshBuildSettings; // 0x8a8(0x48)
	bool bOverrideGlobalProxyStaticMeshSettings; // 0x8f0(0x01)
	bool bEnableProxyStaticMeshOverride; // 0x8f1(0x01)
	bool bEnableProxyStaticMeshRefinementByTimerOverride; // 0x8f2(0x01)
	char pad_8F3[0x1]; // 0x8f3(0x01)
	float ProxyMeshAutoRefineTimeoutSecondsOverride; // 0x8f4(0x04)
	bool bEnableProxyStaticMeshRefinementOnPreSaveWorldOverride; // 0x8f8(0x01)
	bool bEnableProxyStaticMeshRefinementOnPreBeginPIEOverride; // 0x8f9(0x01)
	bool bLandscapeUseTempLayers; // 0x8fa(0x01)
	char pad_8FB[0x1]; // 0x8fb(0x01)
	int32_t AssetID; // 0x8fc(0x04)
	struct TArray<int32_t> NodeIdsToCook; // 0x900(0x10)
	struct TMap<int32_t, int32_t> OutputNodeCookCounts; // 0x910(0x50)
	struct TSet<struct UHoudiniAssetComponent*> DownstreamHoudiniAssets; // 0x960(0x50)
	struct FGuid ComponentGUID; // 0x9b0(0x10)
	struct FGuid HapiGUID; // 0x9c0(0x10)
	struct FString HapiAssetName; // 0x9d0(0x10)
	enum class EHoudiniAssetState AssetState; // 0x9e0(0x01)
	enum class EHoudiniAssetState DebugLastAssetState; // 0x9e1(0x01)
	enum class EHoudiniAssetStateResult AssetStateResult; // 0x9e2(0x01)
	char pad_9E3[0xd]; // 0x9e3(0x0d)
	struct FTransform LastComponentTransform; // 0x9f0(0x60)
	uint32_t SubAssetIndex; // 0xa50(0x04)
	int32_t AssetCookCount; // 0xa54(0x04)
	bool bHasBeenLoaded; // 0xa58(0x01)
	bool bHasBeenDuplicated; // 0xa59(0x01)
	bool bPendingDelete; // 0xa5a(0x01)
	bool bRecookRequested; // 0xa5b(0x01)
	bool bRebuildRequested; // 0xa5c(0x01)
	bool bEnableCooking; // 0xa5d(0x01)
	bool bForceNeedUpdate; // 0xa5e(0x01)
	bool bLastCookSuccess; // 0xa5f(0x01)
	bool bParameterDefinitionUpdateNeeded; // 0xa60(0x01)
	bool bBlueprintStructureModified; // 0xa61(0x01)
	bool bBlueprintModified; // 0xa62(0x01)
	char pad_A63[0x5]; // 0xa63(0x05)
	struct TArray<struct UHoudiniParameter*> Parameters; // 0xa68(0x10)
	struct TArray<struct UHoudiniInput*> Inputs; // 0xa78(0x10)
	struct TArray<struct UHoudiniOutput*> Outputs; // 0xa88(0x10)
	struct TArray<struct FHoudiniBakedOutput> BakedOutputs; // 0xa98(0x10)
	struct TArray<struct TWeakObjectPtr<struct AActor>> UntrackedOutputs; // 0xaa8(0x10)
	struct TArray<struct UHoudiniHandleComponent*> HandleComponents; // 0xab8(0x10)
	bool bHasComponentTransformChanged; // 0xac8(0x01)
	bool bFullyLoaded; // 0xac9(0x01)
	char pad_ACA[0x6]; // 0xaca(0x06)
	struct UHoudiniPDGAssetLink* PDGAssetLink; // 0xad0(0x08)
	struct FTimerHandle RefineMeshesTimer; // 0xad8(0x08)
	char pad_AE0[0x18]; // 0xae0(0x18)
	bool bNoProxyMeshNextCookRequested; // 0xaf8(0x01)
	char pad_AF9[0x7]; // 0xaf9(0x07)
	struct TMap<struct UObject*, int32_t> InputPresets; // 0xb00(0x50)
	bool bBakeAfterNextCook; // 0xb50(0x01)
	char pad_B51[0x5f]; // 0xb51(0x5f)
	bool bCachedIsPreview; // 0xbb0(0x01)
	char pad_BB1[0xf]; // 0xbb1(0x0f)
	double LastTickTime; // 0xbc0(0x08)
	char pad_BC8[0x18]; // 0xbc8(0x18)
};

// Class HoudiniEngineRuntime.HoudiniAssetBlueprintComponent
// Size: 0xce0 (Inherited: 0xbe0)
struct UHoudiniAssetBlueprintComponent : UHoudiniAssetComponent {
	char pad_BE0[0x48]; // 0xbe0(0x48)
	bool FauxBPProperty; // 0xc28(0x01)
	bool bHoudiniAssetChanged; // 0xc29(0x01)
	bool bUpdatedFromTemplate; // 0xc2a(0x01)
	bool bIsInBlueprintEditor; // 0xc2b(0x01)
	bool bCanDeleteHoudiniNodes; // 0xc2c(0x01)
	bool bHasRegisteredComponentTemplate; // 0xc2d(0x01)
	char pad_C2E[0xa]; // 0xc2e(0x0a)
	struct TMap<struct FHoudiniOutputObjectIdentifier, struct FGuid> CachedOutputNodes; // 0xc38(0x50)
	struct TMap<struct FGuid, struct FGuid> CachedInputNodes; // 0xc88(0x50)
	char pad_CD8[0x8]; // 0xcd8(0x08)

	void SetToggleValueAt(struct FString Name, bool Value, int32_t Index); // Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetToggleValueAt // (Final|Native|Public|BlueprintCallable) // @ game+0x6e4a5d0
	void SetFloatParameter(struct FString Name, float Value, int32_t Index); // Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.SetFloatParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x6e4a880
	bool HasParameter(struct FString Name); // Function HoudiniEngineRuntime.HoudiniAssetBlueprintComponent.HasParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x6e4abc0
};

// Class HoudiniEngineRuntime.HoudiniAssetParameter
// Size: 0x88 (Inherited: 0x30)
struct UHoudiniAssetParameter : UObject {
	char pad_30[0x58]; // 0x30(0x58)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterButton
// Size: 0x88 (Inherited: 0x88)
struct UHoudiniAssetParameterButton : UHoudiniAssetParameter {
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterChoice
// Size: 0xc0 (Inherited: 0x88)
struct UHoudiniAssetParameterChoice : UHoudiniAssetParameter {
	char pad_88[0x38]; // 0x88(0x38)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterColor
// Size: 0x98 (Inherited: 0x88)
struct UHoudiniAssetParameterColor : UHoudiniAssetParameter {
	char pad_88[0x10]; // 0x88(0x10)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterFile
// Size: 0xb0 (Inherited: 0x88)
struct UHoudiniAssetParameterFile : UHoudiniAssetParameter {
	char pad_88[0x28]; // 0x88(0x28)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterFloat
// Size: 0xc0 (Inherited: 0x88)
struct UHoudiniAssetParameterFloat : UHoudiniAssetParameter {
	char pad_88[0x38]; // 0x88(0x38)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterFolder
// Size: 0x88 (Inherited: 0x88)
struct UHoudiniAssetParameterFolder : UHoudiniAssetParameter {
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterFolderList
// Size: 0x88 (Inherited: 0x88)
struct UHoudiniAssetParameterFolderList : UHoudiniAssetParameter {
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterInt
// Size: 0xb8 (Inherited: 0x88)
struct UHoudiniAssetParameterInt : UHoudiniAssetParameter {
	char pad_88[0x30]; // 0x88(0x30)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterLabel
// Size: 0x88 (Inherited: 0x88)
struct UHoudiniAssetParameterLabel : UHoudiniAssetParameter {
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterMultiparm
// Size: 0x90 (Inherited: 0x88)
struct UHoudiniAssetParameterMultiparm : UHoudiniAssetParameter {
	char pad_88[0x8]; // 0x88(0x08)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterRamp
// Size: 0xa0 (Inherited: 0x88)
struct UHoudiniAssetParameterRamp : UHoudiniAssetParameter {
	char pad_88[0x18]; // 0x88(0x18)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterSeparator
// Size: 0x88 (Inherited: 0x88)
struct UHoudiniAssetParameterSeparator : UHoudiniAssetParameter {
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterString
// Size: 0x98 (Inherited: 0x88)
struct UHoudiniAssetParameterString : UHoudiniAssetParameter {
	char pad_88[0x10]; // 0x88(0x10)
};

// Class HoudiniEngineRuntime.HoudiniAssetParameterToggle
// Size: 0x98 (Inherited: 0x88)
struct UHoudiniAssetParameterToggle : UHoudiniAssetParameter {
	char pad_88[0x10]; // 0x88(0x10)
};

// Class HoudiniEngineRuntime.HoudiniAssetComponentMaterials_V1
// Size: 0xd0 (Inherited: 0x30)
struct UHoudiniAssetComponentMaterials_V1 : UObject {
	char pad_30[0xa0]; // 0x30(0xa0)
};

// Class HoudiniEngineRuntime.HoudiniHandleComponent_V1
// Size: 0x3c0 (Inherited: 0x330)
struct UHoudiniHandleComponent_V1 : USceneComponent {
	char pad_330[0x90]; // 0x330(0x90)
};

// Class HoudiniEngineRuntime.HoudiniSplineComponent_V1
// Size: 0x450 (Inherited: 0x330)
struct UHoudiniSplineComponent_V1 : USceneComponent {
	char pad_330[0x120]; // 0x330(0x120)
};

// Class HoudiniEngineRuntime.HoudiniAssetInput
// Size: 0x1e0 (Inherited: 0x88)
struct UHoudiniAssetInput : UHoudiniAssetParameter {
	char pad_88[0x158]; // 0x88(0x158)
};

// Class HoudiniEngineRuntime.HoudiniAssetInstanceInput
// Size: 0x1a0 (Inherited: 0x88)
struct UHoudiniAssetInstanceInput : UHoudiniAssetParameter {
	char pad_88[0x118]; // 0x88(0x118)
};

// Class HoudiniEngineRuntime.HoudiniAssetInstanceInputField
// Size: 0x1c0 (Inherited: 0x30)
struct UHoudiniAssetInstanceInputField : UObject {
	char pad_30[0x190]; // 0x30(0x190)
};

// Class HoudiniEngineRuntime.HoudiniAssetComponent_V1
// Size: 0xbe0 (Inherited: 0x690)
struct UHoudiniAssetComponent_V1 : UPrimitiveComponent {
	char bGeneratedDoubleSidedGeometry : 1; // 0x688(0x01)
	struct UPhysicalMaterial* GeneratedPhysMaterial; // 0x690(0x08)
	struct FBodyInstance DefaultBodyInstance; // 0x698(0x190)
	enum class ECollisionTraceFlag GeneratedCollisionTraceFlag; // 0x828(0x01)
	char pad_829_1 : 7; // 0x829(0x01)
	char pad_82A[0x2]; // 0x82a(0x02)
	int32_t GeneratedLightMapResolution; // 0x82c(0x04)
	float GeneratedDistanceFieldResolutionScale; // 0x830(0x04)
	struct FWalkableSlopeOverride GeneratedWalkableSlopeOverride; // 0x834(0x10)
	int32_t GeneratedLightMapCoordinateIndex; // 0x844(0x04)
	char bGeneratedUseMaximumStreamingTexelRatio : 1; // 0x848(0x01)
	char pad_848_1 : 7; // 0x848(0x01)
	char pad_849[0x3]; // 0x849(0x03)
	float GeneratedStreamingDistanceMultiplier; // 0x84c(0x04)
	struct UFoliageType_InstancedStaticMesh* GeneratedFoliageDefaultSettings; // 0x850(0x08)
	struct TArray<struct UAssetUserData*> GeneratedAssetUserData; // 0x858(0x10)
	struct FText BakeFolder; // 0x868(0x18)
	struct FText TempCookFolder; // 0x880(0x18)
	char pad_898[0x348]; // 0x898(0x348)
};

// Class HoudiniEngineRuntime.HoudiniInstancedActorComponent_V1
// Size: 0x350 (Inherited: 0x330)
struct UHoudiniInstancedActorComponent_V1 : USceneComponent {
	char pad_330[0x20]; // 0x330(0x20)
};

// Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent_V1
// Size: 0x350 (Inherited: 0x330)
struct UHoudiniMeshSplitInstancerComponent_V1 : USceneComponent {
	char pad_330[0x20]; // 0x330(0x20)
};

// Class HoudiniEngineRuntime.HoudiniEngineCopyPropertiesInterface
// Size: 0x30 (Inherited: 0x30)
struct UHoudiniEngineCopyPropertiesInterface : UInterface {
};

// Class HoudiniEngineRuntime.HoudiniHandleParameter
// Size: 0x40 (Inherited: 0x30)
struct UHoudiniHandleParameter : UObject {
	struct UHoudiniParameter* AssetParameter; // 0x30(0x08)
	int32_t TupleIndex; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class HoudiniEngineRuntime.HoudiniHandleComponent
// Size: 0x370 (Inherited: 0x330)
struct UHoudiniHandleComponent : USceneComponent {
	struct TArray<struct UHoudiniHandleParameter*> XformParms; // 0x330(0x10)
	struct UHoudiniHandleParameter* RSTParm; // 0x340(0x08)
	struct UHoudiniHandleParameter* RotOrderParm; // 0x348(0x08)
	enum class EHoudiniHandleType HandleType; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct FString HandleName; // 0x358(0x10)
	char pad_368[0x8]; // 0x368(0x08)
};

// Class HoudiniEngineRuntime.HoudiniInput
// Size: 0x270 (Inherited: 0x30)
struct UHoudiniInput : UObject {
	struct FString Name; // 0x30(0x10)
	struct FString Label; // 0x40(0x10)
	enum class EHoudiniInputType Type; // 0x50(0x01)
	enum class EHoudiniInputType PreviousType; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	int32_t AssetNodeId; // 0x54(0x04)
	int32_t InputNodeId; // 0x58(0x04)
	int32_t InputIndex; // 0x5c(0x04)
	int32_t ParmId; // 0x60(0x04)
	bool bIsObjectPathParameter; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	struct TArray<int32_t> CreatedDataNodeIds; // 0x68(0x10)
	bool bHasChanged; // 0x78(0x01)
	bool bNeedsToTriggerUpdate; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
	struct FBox CachedBounds; // 0x80(0x38)
	struct FString Help; // 0xb8(0x10)
	enum class EHoudiniXformType KeepWorldTransform; // 0xc8(0x01)
	bool bPackBeforeMerge; // 0xc9(0x01)
	bool bImportAsReference; // 0xca(0x01)
	bool bImportAsReferenceRotScaleEnabled; // 0xcb(0x01)
	bool bImportAsReferenceBboxEnabled; // 0xcc(0x01)
	bool bImportAsReferenceMaterialEnabled; // 0xcd(0x01)
	bool bExportLODs; // 0xce(0x01)
	bool bExportSockets; // 0xcf(0x01)
	bool bPreferNaniteFallbackMesh; // 0xd0(0x01)
	bool bExportColliders; // 0xd1(0x01)
	bool bExportMaterialParameters; // 0xd2(0x01)
	bool bCookOnCurveChanged; // 0xd3(0x01)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct TArray<struct UHoudiniInputObject*> GeometryInputObjects; // 0xd8(0x10)
	bool bStaticMeshChanged; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct TArray<struct UHoudiniInputObject*> AssetInputObjects; // 0xf0(0x10)
	bool bInputAssetConnectedInHoudini; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct TArray<struct UHoudiniInputObject*> CurveInputObjects; // 0x108(0x10)
	float DefaultCurveOffset; // 0x118(0x04)
	bool bAddRotAndScaleAttributesOnCurves; // 0x11c(0x01)
	bool bUseLegacyInputCurves; // 0x11d(0x01)
	char pad_11E[0x2]; // 0x11e(0x02)
	struct TArray<struct UHoudiniInputObject*> LandscapeInputObjects; // 0x120(0x10)
	bool bLandscapeHasExportTypeChanged; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct TArray<struct UHoudiniInputObject*> WorldInputObjects; // 0x138(0x10)
	struct TArray<struct AActor*> WorldInputBoundSelectorObjects; // 0x148(0x10)
	bool bIsWorldInputBoundSelector; // 0x158(0x01)
	bool bWorldInputBoundSelectorAutoUpdate; // 0x159(0x01)
	char pad_15A[0x2]; // 0x15a(0x02)
	float UnrealSplineResolution; // 0x15c(0x04)
	struct TArray<struct UHoudiniInputObject*> SkeletalInputObjects; // 0x160(0x10)
	struct TArray<struct UHoudiniInputObject*> GeometryCollectionInputObjects; // 0x170(0x10)
	struct TSet<struct ULandscapeComponent*> LandscapeSelectedComponents; // 0x180(0x50)
	struct TSet<int32_t> InputNodesPendingDelete; // 0x1d0(0x50)
	struct TArray<struct UHoudiniInputHoudiniSplineComponent*> LastInsertedInputs; // 0x220(0x10)
	struct TArray<struct UHoudiniInputObject*> LastUndoDeletedInputs; // 0x230(0x10)
	bool bUpdateInputLandscape; // 0x240(0x01)
	enum class EHoudiniLandscapeExportType LandscapeExportType; // 0x241(0x01)
	bool bLandscapeExportSelectionOnly; // 0x242(0x01)
	bool bLandscapeControlVisiblity; // 0x243(0x01)
	bool bLandscapeAutoSelectComponent; // 0x244(0x01)
	bool bLandscapeExportMaterials; // 0x245(0x01)
	bool bLandscapeExportLighting; // 0x246(0x01)
	bool bLandscapeExportNormalizedUVs; // 0x247(0x01)
	bool bLandscapeExportTileUVs; // 0x248(0x01)
	bool bCanDeleteHoudiniNodes; // 0x249(0x01)
	bool bLandscapeAutoSelectSplines; // 0x24a(0x01)
	bool bLandscapeSplinesExportOptionsMenuExpanded; // 0x24b(0x01)
	bool bLandscapeSplinesExportControlPoints; // 0x24c(0x01)
	bool bLandscapeSplinesExportLeftRightCurves; // 0x24d(0x01)
	bool bLandscapeSplinesExportSplineMeshComponents; // 0x24e(0x01)
	bool bMergeSplineMeshComponents; // 0x24f(0x01)
	struct FHoudiniInputObjectSettings InputSettings; // 0x250(0x20)
};

// Class HoudiniEngineRuntime.HoudiniInputObject
// Size: 0x150 (Inherited: 0x30)
struct UHoudiniInputObject : UObject {
	struct TSoftObjectPtr<UObject> InputObject; // 0x30(0x30)
	struct FTransform Transform; // 0x60(0x60)
	enum class EHoudiniInputObjectType Type; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	struct FGuid Guid; // 0xc4(0x10)
	char pad_D4[0x34]; // 0xd4(0x34)
	bool bHasChanged; // 0x108(0x01)
	bool bNeedsToTriggerUpdate; // 0x109(0x01)
	bool bTransformChanged; // 0x10a(0x01)
	char pad_10B[0x5]; // 0x10b(0x05)
	struct TArray<struct FString> MaterialReferences; // 0x110(0x10)
	struct FHoudiniInputObjectSettings CachedInputSettings; // 0x120(0x20)
	bool bCanDeleteHoudiniNodes; // 0x140(0x01)
	bool bInputNodeHandleOverridesNodeIds; // 0x141(0x01)
	char pad_142[0x2]; // 0x142(0x02)
	int32_t InputNodeId; // 0x144(0x04)
	int32_t InputObjectNodeId; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// Class HoudiniEngineRuntime.HoudiniInputStaticMesh
// Size: 0x150 (Inherited: 0x150)
struct UHoudiniInputStaticMesh : UHoudiniInputObject {
};

// Class HoudiniEngineRuntime.HoudiniInputSkeletalMesh
// Size: 0x150 (Inherited: 0x150)
struct UHoudiniInputSkeletalMesh : UHoudiniInputObject {
};

// Class HoudiniEngineRuntime.HoudiniInputGeometryCollection
// Size: 0x150 (Inherited: 0x150)
struct UHoudiniInputGeometryCollection : UHoudiniInputObject {
};

// Class HoudiniEngineRuntime.HoudiniInputSceneComponent
// Size: 0x1b0 (Inherited: 0x150)
struct UHoudiniInputSceneComponent : UHoudiniInputObject {
	struct FTransform ActorTransform; // 0x150(0x60)
};

// Class HoudiniEngineRuntime.HoudiniInputMeshComponent
// Size: 0x1e0 (Inherited: 0x1b0)
struct UHoudiniInputMeshComponent : UHoudiniInputSceneComponent {
	struct TSoftObjectPtr<UStaticMesh> StaticMesh; // 0x1b0(0x30)
};

// Class HoudiniEngineRuntime.HoudiniInputInstancedMeshComponent
// Size: 0x1f0 (Inherited: 0x1e0)
struct UHoudiniInputInstancedMeshComponent : UHoudiniInputMeshComponent {
	struct TArray<struct FTransform> InstanceTransforms; // 0x1e0(0x10)
};

// Class HoudiniEngineRuntime.HoudiniInputSplineComponent
// Size: 0x1d0 (Inherited: 0x1b0)
struct UHoudiniInputSplineComponent : UHoudiniInputSceneComponent {
	int32_t NumberOfSplineControlPoints; // 0x1b0(0x04)
	float SplineLength; // 0x1b4(0x04)
	float SplineResolution; // 0x1b8(0x04)
	bool SplineClosed; // 0x1bc(0x01)
	char pad_1BD[0x3]; // 0x1bd(0x03)
	struct TArray<struct FTransform> SplineControlPoints; // 0x1c0(0x10)
};

// Class HoudiniEngineRuntime.HoudiniInputGeometryCollectionComponent
// Size: 0x1b0 (Inherited: 0x1b0)
struct UHoudiniInputGeometryCollectionComponent : UHoudiniInputSceneComponent {
};

// Class HoudiniEngineRuntime.HoudiniInputSkeletalMeshComponent
// Size: 0x1b0 (Inherited: 0x1b0)
struct UHoudiniInputSkeletalMeshComponent : UHoudiniInputSceneComponent {
};

// Class HoudiniEngineRuntime.HoudiniInputHoudiniSplineComponent
// Size: 0x160 (Inherited: 0x150)
struct UHoudiniInputHoudiniSplineComponent : UHoudiniInputObject {
	enum class EHoudiniCurveType CurveType; // 0x150(0x01)
	enum class EHoudiniCurveMethod CurveMethod; // 0x151(0x01)
	bool Reversed; // 0x152(0x01)
	char pad_153[0x5]; // 0x153(0x05)
	struct UHoudiniSplineComponent* CachedComponent; // 0x158(0x08)
};

// Class HoudiniEngineRuntime.HoudiniInputCameraComponent
// Size: 0x1d0 (Inherited: 0x1b0)
struct UHoudiniInputCameraComponent : UHoudiniInputSceneComponent {
	float FOV; // 0x1b0(0x04)
	float AspectRatio; // 0x1b4(0x04)
	bool bIsOrthographic; // 0x1b8(0x01)
	char pad_1B9[0x3]; // 0x1b9(0x03)
	float OrthoWidth; // 0x1bc(0x04)
	float OrthoNearClipPlane; // 0x1c0(0x04)
	float OrthoFarClipPlane; // 0x1c4(0x04)
	char pad_1C8[0x8]; // 0x1c8(0x08)
};

// Class HoudiniEngineRuntime.HoudiniInputHoudiniAsset
// Size: 0x160 (Inherited: 0x150)
struct UHoudiniInputHoudiniAsset : UHoudiniInputObject {
	int32_t AssetOutputIndex; // 0x150(0x04)
	int32_t AssetID; // 0x154(0x04)
	char pad_158[0x8]; // 0x158(0x08)
};

// Class HoudiniEngineRuntime.HoudiniInputActor
// Size: 0x220 (Inherited: 0x150)
struct UHoudiniInputActor : UHoudiniInputObject {
	int32_t SplinesMeshObjectNodeId; // 0x150(0x04)
	int32_t SplinesMeshNodeId; // 0x154(0x04)
	char pad_158[0x30]; // 0x158(0x30)
	struct TArray<struct UHoudiniInputSceneComponent*> ActorComponents; // 0x188(0x10)
	struct TSet<struct TSoftObjectPtr<UObject>> ActorSceneComponents; // 0x198(0x50)
	int32_t LastUpdateNumComponentsAdded; // 0x1e8(0x04)
	int32_t LastUpdateNumComponentsRemoved; // 0x1ec(0x04)
	int32_t NumSplineMeshComponents; // 0x1f0(0x04)
	struct FGuid GeneratedSplinesMeshPackageGuid; // 0x1f4(0x10)
	char pad_204[0x4]; // 0x204(0x04)
	struct UStaticMesh* GeneratedSplinesMesh; // 0x208(0x08)
	bool bUsedMergeSplinesMeshAtLastTranslate; // 0x210(0x01)
	char pad_211[0xf]; // 0x211(0x0f)
};

// Class HoudiniEngineRuntime.HoudiniInputLevelInstance
// Size: 0x220 (Inherited: 0x220)
struct UHoudiniInputLevelInstance : UHoudiniInputActor {
};

// Class HoudiniEngineRuntime.HoudiniInputLandscape
// Size: 0x220 (Inherited: 0x220)
struct UHoudiniInputLandscape : UHoudiniInputActor {
	int32_t CachedNumLandscapeComponents; // 0x218(0x04)
};

// Class HoudiniEngineRuntime.HoudiniInputBrush
// Size: 0x240 (Inherited: 0x220)
struct UHoudiniInputBrush : UHoudiniInputActor {
	struct TArray<struct FHoudiniBrushInfo> BrushesInfo; // 0x218(0x10)
	struct UModel* CombinedModel; // 0x228(0x08)
	bool bIgnoreInputObject; // 0x230(0x01)
	enum class EBrushType CachedInputBrushType; // 0x231(0x01)
	char pad_23A[0x6]; // 0x23a(0x06)
};

// Class HoudiniEngineRuntime.HoudiniInputDataTable
// Size: 0x150 (Inherited: 0x150)
struct UHoudiniInputDataTable : UHoudiniInputObject {
};

// Class HoudiniEngineRuntime.HoudiniInputFoliageType_InstancedStaticMesh
// Size: 0x150 (Inherited: 0x150)
struct UHoudiniInputFoliageType_InstancedStaticMesh : UHoudiniInputStaticMesh {
};

// Class HoudiniEngineRuntime.HoudiniInputBlueprint
// Size: 0x1c0 (Inherited: 0x150)
struct UHoudiniInputBlueprint : UHoudiniInputObject {
	struct TArray<struct UHoudiniInputSceneComponent*> BPComponents; // 0x150(0x10)
	struct TSet<struct TSoftObjectPtr<UObject>> BPSceneComponents; // 0x160(0x50)
	int32_t LastUpdateNumComponentsAdded; // 0x1b0(0x04)
	int32_t LastUpdateNumComponentsRemoved; // 0x1b4(0x04)
	char pad_1B8[0x8]; // 0x1b8(0x08)
};

// Class HoudiniEngineRuntime.HoudiniInputLandscapeSplineActor
// Size: 0x220 (Inherited: 0x220)
struct UHoudiniInputLandscapeSplineActor : UHoudiniInputActor {
};

// Class HoudiniEngineRuntime.HoudiniInputLandscapeSplinesComponent
// Size: 0x230 (Inherited: 0x1b0)
struct UHoudiniInputLandscapeSplinesComponent : UHoudiniInputSceneComponent {
	struct TArray<struct FHoudiniLandscapeSplineControlPointData> CachedControlPoints; // 0x1b0(0x10)
	struct TArray<struct FHoudiniLandscapeSplineSegmentData> CachedSegments; // 0x1c0(0x10)
	struct TMap<struct TSoftObjectPtr<ULandscapeSplineControlPoint>, int32_t> ControlPointIdMap; // 0x1d0(0x50)
	int32_t NextControlPointId; // 0x220(0x04)
	char pad_224[0xc]; // 0x224(0x0c)
};

// Class HoudiniEngineRuntime.HoudiniInputSplineMeshComponent
// Size: 0x2e0 (Inherited: 0x1e0)
struct UHoudiniInputSplineMeshComponent : UHoudiniInputMeshComponent {
	struct FGuid MeshPackageGuid; // 0x1e0(0x10)
	struct UStaticMesh* GeneratedMesh; // 0x1f0(0x08)
	enum class ESplineMeshAxis CachedForwardAxis; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	struct FSplineMeshParams CachedSplineParams; // 0x200(0xb0)
	struct FVector CachedSplineUpDir; // 0x2b0(0x18)
	float CachedSplineBoundaryMax; // 0x2c8(0x04)
	float CachedSplineBoundaryMin; // 0x2cc(0x04)
	char CachedbSmoothInterpRollScale : 1; // 0x2d0(0x01)
	char pad_2D0_1 : 7; // 0x2d0(0x01)
	char pad_2D1[0xf]; // 0x2d1(0x0f)
};

// Class HoudiniEngineRuntime.HoudiniInstancedActorComponent
// Size: 0x350 (Inherited: 0x330)
struct UHoudiniInstancedActorComponent : USceneComponent {
	struct UObject* InstancedObject; // 0x330(0x08)
	struct TArray<struct AActor*> InstancedActors; // 0x338(0x10)
	char pad_348[0x8]; // 0x348(0x08)
};

// Class HoudiniEngineRuntime.HoudiniMeshSplitInstancerComponent
// Size: 0x360 (Inherited: 0x330)
struct UHoudiniMeshSplitInstancerComponent : USceneComponent {
	struct TArray<struct UStaticMeshComponent*> Instances; // 0x330(0x10)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x340(0x10)
	struct UStaticMesh* InstancedMesh; // 0x350(0x08)
	char pad_358[0x8]; // 0x358(0x08)
};

// Class HoudiniEngineRuntime.HoudiniLandscapePtr
// Size: 0x70 (Inherited: 0x30)
struct UHoudiniLandscapePtr : UObject {
	struct TSoftObjectPtr<ALandscapeProxy> LandscapeSoftPtr; // 0x30(0x30)
	enum class EHoudiniLandscapeOutputBakeType BakeType; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FName EditLayerName; // 0x64(0x0c)
};

// Class HoudiniEngineRuntime.HoudiniLandscapeTargetLayerOutput
// Size: 0xd8 (Inherited: 0x30)
struct UHoudiniLandscapeTargetLayerOutput : UObject {
	struct ALandscape* Landscape; // 0x30(0x08)
	struct ALandscapeProxy* LandscapeProxy; // 0x38(0x08)
	struct FString BakedEditLayer; // 0x40(0x10)
	struct FString CookedEditLayer; // 0x50(0x10)
	struct FString TargetLayer; // 0x60(0x10)
	struct FHoudiniExtents Extents; // 0x70(0x10)
	bool bClearLayer; // 0x80(0x01)
	bool bCreatedLandscape; // 0x81(0x01)
	bool bCookedLayerRequiresBaking; // 0x82(0x01)
	char pad_83[0x5]; // 0x83(0x05)
	struct FString BakedLandscapeName; // 0x88(0x10)
	struct TArray<struct ULandscapeLayerInfoObject*> LayerInfoObjects; // 0x98(0x10)
	struct FString BakeOutlinerFolder; // 0xa8(0x10)
	struct FString BakeFolder; // 0xb8(0x10)
	struct UMaterialInterface* MaterialInstance; // 0xc8(0x08)
	bool bWriteLockedLayers; // 0xd0(0x01)
	bool bLockLayer; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)
};

// Class HoudiniEngineRuntime.HoudiniLandscapeOutput
// Size: 0x60 (Inherited: 0x30)
struct UHoudiniLandscapeOutput : UObject {
	struct ALandscape* Landscape; // 0x30(0x08)
	struct FString BakedName; // 0x38(0x10)
	struct TArray<struct UHoudiniLandscapeTargetLayerOutput*> Layers; // 0x48(0x10)
	bool bCreated; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class HoudiniEngineRuntime.HoudiniLandscapeSplineTargetLayerOutput
// Size: 0xf8 (Inherited: 0xd8)
struct UHoudiniLandscapeSplineTargetLayerOutput : UHoudiniLandscapeTargetLayerOutput {
	struct FName AfterEditLayer; // 0xd8(0x0c)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0xe8(0x10)
};

// Class HoudiniEngineRuntime.HoudiniLandscapeSplinesOutput
// Size: 0xc0 (Inherited: 0x30)
struct UHoudiniLandscapeSplinesOutput : UObject {
	struct ALandscape* Landscape; // 0x30(0x08)
	struct ALandscapeProxy* LandscapeProxy; // 0x38(0x08)
	struct ALandscapeSplineActor* LandscapeSplineActor; // 0x40(0x08)
	struct ULandscapeSplinesComponent* LandscapeSplinesComponent; // 0x48(0x08)
	struct TMap<struct FName, struct UHoudiniLandscapeSplineTargetLayerOutput*> LayerOutputs; // 0x50(0x50)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0xa0(0x10)
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0xb0(0x10)
};

// Class HoudiniEngineRuntime.HoudiniOutput
// Size: 0x1b8 (Inherited: 0x30)
struct UHoudiniOutput : UObject {
	enum class EHoudiniOutputType Type; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct FHoudiniGeoPartObject> HoudiniGeoPartObjects; // 0x38(0x10)
	struct TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniOutputObject> OutputObjects; // 0x48(0x50)
	struct TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniInstancedOutput> InstancedOutputs; // 0x98(0x50)
	struct TMap<struct FString, struct UMaterialInterface*> AssignementMaterials; // 0xe8(0x50)
	struct TMap<struct FString, struct UMaterialInterface*> ReplacementMaterials; // 0x138(0x50)
	char pad_188[0x4]; // 0x188(0x04)
	bool bLandscapeWorldComposition; // 0x18c(0x01)
	char pad_18D[0x3]; // 0x18d(0x03)
	struct TArray<struct AActor*> HoudiniCreatedSocketActors; // 0x190(0x10)
	struct TArray<struct AActor*> HoudiniAttachedSocketActors; // 0x1a0(0x10)
	bool bIsEditableNode; // 0x1b0(0x01)
	bool bHasEditableNodeBuilt; // 0x1b1(0x01)
	bool bIsUpdating; // 0x1b2(0x01)
	bool bCanDeleteHoudiniNodes; // 0x1b3(0x01)
	char pad_1B4[0x4]; // 0x1b4(0x04)
};

// Class HoudiniEngineRuntime.HoudiniParameter
// Size: 0x110 (Inherited: 0x30)
struct UHoudiniParameter : UObject {
	struct FString Name; // 0x30(0x10)
	struct FString Label; // 0x40(0x10)
	enum class EHoudiniParameterType ParmType; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	uint32_t TupleSize; // 0x54(0x04)
	int32_t NodeId; // 0x58(0x04)
	int32_t ParmId; // 0x5c(0x04)
	int32_t ParentParmId; // 0x60(0x04)
	int32_t ChildIndex; // 0x64(0x04)
	bool bIsVisible; // 0x68(0x01)
	bool bIsParentFolderVisible; // 0x69(0x01)
	bool bIsDisabled; // 0x6a(0x01)
	bool bHasChanged; // 0x6b(0x01)
	bool bNeedsToTriggerUpdate; // 0x6c(0x01)
	bool bIsDefault; // 0x6d(0x01)
	bool bIsSpare; // 0x6e(0x01)
	bool bJoinNext; // 0x6f(0x01)
	bool bIsChildOfMultiParm; // 0x70(0x01)
	bool bIsDirectChildOfMultiParm; // 0x71(0x01)
	bool bPendingRevertToDefault; // 0x72(0x01)
	char pad_73[0x5]; // 0x73(0x05)
	struct TArray<int32_t> TuplePendingRevertToDefault; // 0x78(0x10)
	struct FString Help; // 0x88(0x10)
	uint32_t TagCount; // 0x98(0x04)
	int32_t ValueIndex; // 0x9c(0x04)
	bool bHasExpression; // 0xa0(0x01)
	bool bShowExpression; // 0xa1(0x01)
	char pad_A2[0x6]; // 0xa2(0x06)
	struct FString ParamExpression; // 0xa8(0x10)
	struct TMap<struct FString, struct FString> Tags; // 0xb8(0x50)
	bool bAutoUpdate; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterButton
// Size: 0x110 (Inherited: 0x110)
struct UHoudiniParameterButton : UHoudiniParameter {
};

// Class HoudiniEngineRuntime.HoudiniParameterButtonStrip
// Size: 0x138 (Inherited: 0x110)
struct UHoudiniParameterButtonStrip : UHoudiniParameter {
	int32_t Count; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct TArray<struct FString> Labels; // 0x118(0x10)
	struct TArray<int32_t> Values; // 0x128(0x10)
};

// Class HoudiniEngineRuntime.HoudiniParameterChoice
// Size: 0x180 (Inherited: 0x110)
struct UHoudiniParameterChoice : UHoudiniParameter {
	int32_t IntValue; // 0x110(0x04)
	int32_t DefaultIntValue; // 0x114(0x04)
	struct FString StringValue; // 0x118(0x10)
	struct FString DefaultStringValue; // 0x128(0x10)
	struct TArray<struct FString> StringChoiceValues; // 0x138(0x10)
	struct TArray<struct FString> StringChoiceLabels; // 0x148(0x10)
	char pad_158[0x10]; // 0x158(0x10)
	bool bIsChildOfRamp; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct TArray<int32_t> IntValuesArray; // 0x170(0x10)
};

// Class HoudiniEngineRuntime.HoudiniParameterColor
// Size: 0x138 (Inherited: 0x110)
struct UHoudiniParameterColor : UHoudiniParameter {
	struct FLinearColor Color; // 0x110(0x10)
	struct FLinearColor DefaultColor; // 0x120(0x10)
	bool bIsChildOfRamp; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterFile
// Size: 0x148 (Inherited: 0x110)
struct UHoudiniParameterFile : UHoudiniParameter {
	struct TArray<struct FString> Values; // 0x110(0x10)
	struct TArray<struct FString> DefaultValues; // 0x120(0x10)
	struct FString Filters; // 0x130(0x10)
	bool bIsReadOnly; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterFloat
// Size: 0x160 (Inherited: 0x110)
struct UHoudiniParameterFloat : UHoudiniParameter {
	struct TArray<float> Values; // 0x110(0x10)
	struct TArray<float> DefaultValues; // 0x120(0x10)
	struct FString Unit; // 0x130(0x10)
	bool bNoSwap; // 0x140(0x01)
	bool bHasMin; // 0x141(0x01)
	bool bHasMax; // 0x142(0x01)
	bool bHasUIMin; // 0x143(0x01)
	bool bHasUIMax; // 0x144(0x01)
	bool bIsLogarithmic; // 0x145(0x01)
	char pad_146[0x2]; // 0x146(0x02)
	float Min; // 0x148(0x04)
	float Max; // 0x14c(0x04)
	float UIMin; // 0x150(0x04)
	float UIMax; // 0x154(0x04)
	bool bIsChildOfRamp; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterFolder
// Size: 0x120 (Inherited: 0x110)
struct UHoudiniParameterFolder : UHoudiniParameter {
	enum class EHoudiniFolderParameterType FolderType; // 0x110(0x01)
	bool bExpanded; // 0x111(0x01)
	bool bChosen; // 0x112(0x01)
	char pad_113[0x1]; // 0x113(0x01)
	int32_t ChildCounter; // 0x114(0x04)
	bool bIsContentShown; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterFolderList
// Size: 0x128 (Inherited: 0x110)
struct UHoudiniParameterFolderList : UHoudiniParameter {
	bool bIsTabMenu; // 0x110(0x01)
	bool bIsTabsShown; // 0x111(0x01)
	char pad_112[0x6]; // 0x112(0x06)
	struct TArray<struct UHoudiniParameterFolder*> TabFolders; // 0x118(0x10)
};

// Class HoudiniEngineRuntime.HoudiniParameterInt
// Size: 0x158 (Inherited: 0x110)
struct UHoudiniParameterInt : UHoudiniParameter {
	struct TArray<int32_t> Values; // 0x110(0x10)
	struct TArray<int32_t> DefaultValues; // 0x120(0x10)
	struct FString Unit; // 0x130(0x10)
	bool bHasMin; // 0x140(0x01)
	bool bHasMax; // 0x141(0x01)
	bool bHasUIMin; // 0x142(0x01)
	bool bHasUIMax; // 0x143(0x01)
	bool bIsLogarithmic; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)
	int32_t Min; // 0x148(0x04)
	int32_t Max; // 0x14c(0x04)
	int32_t UIMin; // 0x150(0x04)
	int32_t UIMax; // 0x154(0x04)
};

// Class HoudiniEngineRuntime.HoudiniParameterLabel
// Size: 0x120 (Inherited: 0x110)
struct UHoudiniParameterLabel : UHoudiniParameter {
	struct TArray<struct FString> LabelStrings; // 0x110(0x10)
};

// Class HoudiniEngineRuntime.HoudiniParameterMultiParm
// Size: 0x158 (Inherited: 0x110)
struct UHoudiniParameterMultiParm : UHoudiniParameter {
	bool bIsShown; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	int32_t Value; // 0x114(0x04)
	struct FString TemplateName; // 0x118(0x10)
	int32_t MultiparmValue; // 0x128(0x04)
	uint32_t MultiParmInstanceNum; // 0x12c(0x04)
	uint32_t MultiParmInstanceLength; // 0x130(0x04)
	uint32_t MultiParmInstanceCount; // 0x134(0x04)
	uint32_t InstanceStartOffset; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct TArray<enum class EHoudiniMultiParmModificationType> MultiParmInstanceLastModifyArray; // 0x140(0x10)
	int32_t DefaultInstanceCount; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
};

// Class HoudiniEngineRuntime.HoudiniParameterOperatorPath
// Size: 0x118 (Inherited: 0x110)
struct UHoudiniParameterOperatorPath : UHoudiniParameter {
	struct TWeakObjectPtr<struct UHoudiniInput> HoudiniInput; // 0x110(0x08)
};

// Class HoudiniEngineRuntime.HoudiniParameterRampModificationEvent
// Size: 0x58 (Inherited: 0x30)
struct UHoudiniParameterRampModificationEvent : UObject {
	bool bIsInsertEvent; // 0x30(0x01)
	bool bIsFloatRamp; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	int32_t DeleteInstanceIndex; // 0x34(0x04)
	float InsertPosition; // 0x38(0x04)
	float InsertFloat; // 0x3c(0x04)
	struct FLinearColor InsertColor; // 0x40(0x10)
	enum class EHoudiniRampInterpolationType InsertInterpolation; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterRampFloatPoint
// Size: 0x58 (Inherited: 0x30)
struct UHoudiniParameterRampFloatPoint : UObject {
	float Position; // 0x30(0x04)
	float Value; // 0x34(0x04)
	enum class EHoudiniRampInterpolationType Interpolation; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	int32_t InstanceIndex; // 0x3c(0x04)
	struct UHoudiniParameterFloat* PositionParentParm; // 0x40(0x08)
	struct UHoudiniParameterFloat* ValueParentParm; // 0x48(0x08)
	struct UHoudiniParameterChoice* InterpolationParentParm; // 0x50(0x08)
};

// Class HoudiniEngineRuntime.HoudiniParameterRampColorPoint
// Size: 0x68 (Inherited: 0x30)
struct UHoudiniParameterRampColorPoint : UObject {
	float Position; // 0x30(0x04)
	struct FLinearColor Value; // 0x34(0x10)
	enum class EHoudiniRampInterpolationType Interpolation; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	int32_t InstanceIndex; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UHoudiniParameterFloat* PositionParentParm; // 0x50(0x08)
	struct UHoudiniParameterColor* ValueParentParm; // 0x58(0x08)
	struct UHoudiniParameterChoice* InterpolationParentParm; // 0x60(0x08)
};

// Class HoudiniEngineRuntime.HoudiniParameterRampFloat
// Size: 0x1c0 (Inherited: 0x158)
struct UHoudiniParameterRampFloat : UHoudiniParameterMultiParm {
	struct TArray<struct UHoudiniParameterRampFloatPoint*> Points; // 0x158(0x10)
	struct TArray<struct UHoudiniParameterRampFloatPoint*> CachedPoints; // 0x168(0x10)
	struct TArray<float> DefaultPositions; // 0x178(0x10)
	struct TArray<float> DefaultValues; // 0x188(0x10)
	struct TArray<int32_t> DefaultChoices; // 0x198(0x10)
	int32_t NumDefaultPoints; // 0x1a8(0x04)
	bool bCaching; // 0x1ac(0x01)
	char pad_1AD[0x3]; // 0x1ad(0x03)
	struct TArray<struct UHoudiniParameterRampModificationEvent*> ModificationEvents; // 0x1b0(0x10)
};

// Class HoudiniEngineRuntime.HoudiniParameterRampColor
// Size: 0x1c8 (Inherited: 0x158)
struct UHoudiniParameterRampColor : UHoudiniParameterMultiParm {
	struct TArray<struct UHoudiniParameterRampColorPoint*> Points; // 0x158(0x10)
	bool bCaching; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct TArray<struct UHoudiniParameterRampColorPoint*> CachedPoints; // 0x170(0x10)
	struct TArray<float> DefaultPositions; // 0x180(0x10)
	struct TArray<struct FLinearColor> DefaultValues; // 0x190(0x10)
	struct TArray<int32_t> DefaultChoices; // 0x1a0(0x10)
	int32_t NumDefaultPoints; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct TArray<struct UHoudiniParameterRampModificationEvent*> ModificationEvents; // 0x1b8(0x10)
};

// Class HoudiniEngineRuntime.HoudiniParameterSeparator
// Size: 0x110 (Inherited: 0x110)
struct UHoudiniParameterSeparator : UHoudiniParameter {
};

// Class HoudiniEngineRuntime.HoudiniParameterString
// Size: 0x148 (Inherited: 0x110)
struct UHoudiniParameterString : UHoudiniParameter {
	struct TArray<struct FString> Values; // 0x110(0x10)
	struct TArray<struct FString> DefaultValues; // 0x120(0x10)
	struct TArray<struct UObject*> ChosenAssets; // 0x130(0x10)
	bool bIsAssetRef; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
};

// Class HoudiniEngineRuntime.HoudiniParameterToggle
// Size: 0x130 (Inherited: 0x110)
struct UHoudiniParameterToggle : UHoudiniParameter {
	struct TArray<int32_t> Values; // 0x110(0x10)
	struct TArray<int32_t> DefaultValues; // 0x120(0x10)
};

// Class HoudiniEngineRuntime.TOPNode
// Size: 0x3f8 (Inherited: 0x30)
struct UTOPNode : UObject {
	int32_t NodeId; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString NodeName; // 0x38(0x10)
	struct FString NodePath; // 0x48(0x10)
	struct FString ParentName; // 0x58(0x10)
	struct UObject* WorkResultParent; // 0x68(0x08)
	struct TArray<struct FTOPWorkResult> WorkResult; // 0x70(0x10)
	bool bHidden; // 0x80(0x01)
	bool bAutoLoad; // 0x81(0x01)
	enum class EPDGNodeState NodeState; // 0x82(0x01)
	bool bCachedHaveNotLoadedWorkResults; // 0x83(0x01)
	bool bCachedHaveLoadedWorkResults; // 0x84(0x01)
	bool bHasChildNodes; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
	struct TSet<struct FString> ClearedLandscapeLayers; // 0x88(0x50)
	struct FHoudiniClearedEditLayers ClearedLayers; // 0xd8(0x50)
	bool bShow; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct TMap<struct FString, struct FHoudiniPDGWorkResultObjectBakedOutput> BakedWorkResultObjectOutputs; // 0x130(0x50)
	struct FWorkItemTally WorkItemTally; // 0x180(0x238)
	struct FAggregatedWorkItemTally AggregatedWorkItemTally; // 0x3b8(0x28)
	bool bHasReceivedCookCompleteEvent; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct FOutputActorOwner OutputActorOwner; // 0x3e8(0x10)
};

// Class HoudiniEngineRuntime.TOPNetwork
// Size: 0xa0 (Inherited: 0x30)
struct UTOPNetwork : UObject {
	int32_t NodeId; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString NodeName; // 0x38(0x10)
	struct FString NodePath; // 0x48(0x10)
	struct TArray<struct UTOPNode*> AllTOPNodes; // 0x58(0x10)
	int32_t SelectedTOPIndex; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FString ParentName; // 0x70(0x10)
	bool bShowResults; // 0x80(0x01)
	bool bAutoLoadResults; // 0x81(0x01)
	char pad_82[0x1e]; // 0x82(0x1e)
};

// Class HoudiniEngineRuntime.HoudiniPDGAssetLink
// Size: 0x140 (Inherited: 0x30)
struct UHoudiniPDGAssetLink : UObject {
	struct FString AssetName; // 0x30(0x10)
	struct FString AssetNodePath; // 0x40(0x10)
	int32_t AssetID; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct UTOPNetwork*> AllTOPNetworks; // 0x58(0x10)
	int32_t SelectedTOPNetworkIndex; // 0x68(0x04)
	enum class EPDGLinkState LinkState; // 0x6c(0x01)
	bool bAutoCook; // 0x6d(0x01)
	bool bUseTOPNodeFilter; // 0x6e(0x01)
	bool bUseTOPOutputFilter; // 0x6f(0x01)
	struct FString TOPNodeFilter; // 0x70(0x10)
	struct FString TOPOutputFilter; // 0x80(0x10)
	int32_t NumWorkItems; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FAggregatedWorkItemTally WorkItemTally; // 0x98(0x28)
	struct FString OutputCachePath; // 0xc0(0x10)
	bool bNeedsUIRefresh; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct AActor* OutputParentActor; // 0xd8(0x08)
	struct FDirectoryPath BakeFolder; // 0xe0(0x10)
	char pad_F0[0x48]; // 0xf0(0x48)
	int32_t NumAttemptedNodeAutoBakes; // 0x138(0x04)
	int32_t NumSuccessfulNodeAutoBakes; // 0x13c(0x04)
};

// Class HoudiniEngineRuntime.HoudiniRuntimeSettings
// Size: 0x348 (Inherited: 0x30)
struct UHoudiniRuntimeSettings : UObject {
	enum class EHoudiniRuntimeSettingsSessionType SessionType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FString ServerHost; // 0x38(0x10)
	int32_t ServerPort; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString ServerPipeName; // 0x50(0x10)
	bool bStartAutomaticServer; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float AutomaticServerTimeout; // 0x64(0x04)
	bool bSyncWithHoudiniCook; // 0x68(0x01)
	bool bCookUsingHoudiniTime; // 0x69(0x01)
	bool bSyncViewport; // 0x6a(0x01)
	bool bSyncHoudiniViewport; // 0x6b(0x01)
	bool bSyncUnrealViewport; // 0x6c(0x01)
	bool bShowMultiAssetDialog; // 0x6d(0x01)
	bool bPreferHdaMemoryCopyOverHdaSourceFile; // 0x6e(0x01)
	bool bPauseCookingOnStart; // 0x6f(0x01)
	bool bDisplaySlateCookingNotifications; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FString DefaultTemporaryCookFolder; // 0x78(0x10)
	struct FString DefaultBakeFolder; // 0x88(0x10)
	bool bEnableTheReferenceCountedInputSystem; // 0x98(0x01)
	bool MarshallingLandscapesUseDefaultUnrealScaling; // 0x99(0x01)
	bool MarshallingLandscapesUseFullResolution; // 0x9a(0x01)
	bool MarshallingLandscapesForceMinMaxValues; // 0x9b(0x01)
	float MarshallingLandscapesForcedMinValue; // 0x9c(0x04)
	float MarshallingLandscapesForcedMaxValue; // 0xa0(0x04)
	bool bAddRotAndScaleAttributesOnCurves; // 0xa4(0x01)
	bool bUseLegacyInputCurves; // 0xa5(0x01)
	char pad_A6[0x2]; // 0xa6(0x02)
	float MarshallingSplineResolution; // 0xa8(0x04)
	bool bEnableProxyStaticMesh; // 0xac(0x01)
	bool bShowDefaultMesh; // 0xad(0x01)
	bool bPreferNaniteFallbackMesh; // 0xae(0x01)
	bool bEnableProxyStaticMeshRefinementByTimer; // 0xaf(0x01)
	float ProxyMeshAutoRefineTimeoutSeconds; // 0xb0(0x04)
	bool bEnableProxyStaticMeshRefinementOnPreSaveWorld; // 0xb4(0x01)
	bool bEnableProxyStaticMeshRefinementOnPreBeginPIE; // 0xb5(0x01)
	char pad_B6[0x2]; // 0xb6(0x02)
	char bDoubleSidedGeometry : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct UPhysicalMaterial* PhysMaterial; // 0xc0(0x08)
	struct FBodyInstance DefaultBodyInstance; // 0xc8(0x190)
	enum class ECollisionTraceFlag CollisionTraceFlag; // 0x258(0x01)
	char pad_259[0x3]; // 0x259(0x03)
	int32_t LightMapResolution; // 0x25c(0x04)
	float LpvBiasMultiplier; // 0x260(0x04)
	float GeneratedDistanceFieldResolutionScale; // 0x264(0x04)
	struct FWalkableSlopeOverride WalkableSlopeOverride; // 0x268(0x10)
	int32_t LightMapCoordinateIndex; // 0x278(0x04)
	char bUseMaximumStreamingTexelRatio : 1; // 0x27c(0x01)
	char pad_27C_1 : 7; // 0x27c(0x01)
	char pad_27D[0x3]; // 0x27d(0x03)
	float StreamingDistanceMultiplier; // 0x280(0x04)
	char pad_284[0x4]; // 0x284(0x04)
	struct UFoliageType_InstancedStaticMesh* FoliageDefaultSettings; // 0x288(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x290(0x10)
	bool bUseFullPrecisionUVs; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	int32_t SrcLightmapIndex; // 0x2a4(0x04)
	int32_t DstLightmapIndex; // 0x2a8(0x04)
	int32_t MinLightmapResolution; // 0x2ac(0x04)
	bool bRemoveDegenerates; // 0x2b0(0x01)
	enum class EHoudiniRuntimeSettingsRecomputeFlag GenerateLightmapUVsFlag; // 0x2b1(0x01)
	enum class EHoudiniRuntimeSettingsRecomputeFlag RecomputeNormalsFlag; // 0x2b2(0x01)
	enum class EHoudiniRuntimeSettingsRecomputeFlag RecomputeTangentsFlag; // 0x2b3(0x01)
	bool bUseMikkTSpace; // 0x2b4(0x01)
	bool bBuildAdjacencyBuffer; // 0x2b5(0x01)
	char bComputeWeightedNormals : 1; // 0x2b6(0x01)
	char bBuildReversedIndexBuffer : 1; // 0x2b6(0x01)
	char bUseHighPrecisionTangentBasis : 1; // 0x2b6(0x01)
	char pad_2B6_3 : 5; // 0x2b6(0x01)
	char pad_2B7[0x1]; // 0x2b7(0x01)
	float DistanceFieldResolutionScale; // 0x2b8(0x04)
	char bGenerateDistanceFieldAsIfTwoSided : 1; // 0x2bc(0x01)
	char bSupportFaceRemap : 1; // 0x2bc(0x01)
	char pad_2BC_2 : 6; // 0x2bc(0x01)
	bool bPDGAsyncCommandletImportEnabled; // 0x2bd(0x01)
	bool bEnableBackwardCompatibility; // 0x2be(0x01)
	bool bAutomaticLegacyHDARebuild; // 0x2bf(0x01)
	bool bUseCustomHoudiniLocation; // 0x2c0(0x01)
	char pad_2C1[0x7]; // 0x2c1(0x07)
	struct FDirectoryPath CustomHoudiniLocation; // 0x2c8(0x10)
	enum class EHoudiniExecutableType HoudiniExecutable; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
	struct FDirectoryPath CustomHoudiniHomeLocation; // 0x2e0(0x10)
	int32_t CookingThreadStackSize; // 0x2f0(0x04)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct FString HoudiniEnvironmentFiles; // 0x2f8(0x10)
	struct FString OtlSearchPath; // 0x308(0x10)
	struct FString DsoSearchPath; // 0x318(0x10)
	struct FString ImageDsoSearchPath; // 0x328(0x10)
	struct FString AudioDsoSearchPath; // 0x338(0x10)
};

// Class HoudiniEngineRuntime.HoudiniSplineComponent
// Size: 0x640 (Inherited: 0x330)
struct UHoudiniSplineComponent : USceneComponent {
	char pad_330[0x8]; // 0x330(0x08)
	struct TArray<struct FTransform> CurvePoints; // 0x338(0x10)
	struct TArray<struct FVector3d> DisplayPoints; // 0x348(0x10)
	struct TArray<int32_t> DisplayPointIndexDivider; // 0x358(0x10)
	struct FString HoudiniSplineName; // 0x368(0x10)
	bool bClosed; // 0x378(0x01)
	bool bReversed; // 0x379(0x01)
	char pad_37A[0x2]; // 0x37a(0x02)
	int32_t CurveOrder; // 0x37c(0x04)
	bool bIsHoudiniSplineVisible; // 0x380(0x01)
	enum class EHoudiniCurveType CurveType; // 0x381(0x01)
	enum class EHoudiniCurveMethod CurveMethod; // 0x382(0x01)
	enum class EHoudiniCurveBreakpointParameterization CurveBreakpointParameterization; // 0x383(0x01)
	bool bIsOutputCurve; // 0x384(0x01)
	bool bCookOnCurveChanged; // 0x385(0x01)
	bool bIsLegacyInputCurve; // 0x386(0x01)
	char pad_387[0x299]; // 0x387(0x299)
	bool bHasChanged; // 0x620(0x01)
	bool bNeedsToTriggerUpdate; // 0x621(0x01)
	bool bIsInputCurve; // 0x622(0x01)
	bool bIsEditableOutputCurve; // 0x623(0x01)
	int32_t NodeId; // 0x624(0x04)
	struct FString PartName; // 0x628(0x10)
	char pad_638[0x8]; // 0x638(0x08)
};

// Class HoudiniEngineRuntime.HoudiniStaticMesh
// Size: 0xd0 (Inherited: 0x30)
struct UHoudiniStaticMesh : UObject {
	bool bHasNormals; // 0x30(0x01)
	bool bHasTangents; // 0x31(0x01)
	bool bHasColors; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	uint32_t NumUVLayers; // 0x34(0x04)
	bool bHasPerFaceMaterials; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FVector3f> VertexPositions; // 0x40(0x10)
	struct TArray<struct FIntVector> TriangleIndices; // 0x50(0x10)
	struct TArray<struct FColor> VertexInstanceColors; // 0x60(0x10)
	struct TArray<struct FVector3f> VertexInstanceNormals; // 0x70(0x10)
	struct TArray<struct FVector3f> VertexInstanceUTangents; // 0x80(0x10)
	struct TArray<struct FVector3f> VertexInstanceVTangents; // 0x90(0x10)
	struct TArray<struct FVector2f> VertexInstanceUVs; // 0xa0(0x10)
	struct TArray<int32_t> MaterialIDsPerTriangle; // 0xb0(0x10)
	struct TArray<struct FStaticMaterial> StaticMaterials; // 0xc0(0x10)

	void SetVertexPosition(uint32_t InVertexIndex, struct FVector3f& InPosition); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetVertexPosition // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x6e66550
	void SetTriangleVertexVTangent(uint32_t InTriangleIndex, char InTriangleVertexIndex, struct FVector3f& InVTangent); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexVTangent // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x6e65c90
	void SetTriangleVertexUV(uint32_t InTriangleIndex, char InTriangleVertexIndex, char InUVLayer, struct FVector2f& InUV); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUV // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x6e65750
	void SetTriangleVertexUTangent(uint32_t InTriangleIndex, char InTriangleVertexIndex, struct FVector3f& InUTangent); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexUTangent // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x6e65ef0
	void SetTriangleVertexNormal(uint32_t InTriangleIndex, char InTriangleVertexIndex, struct FVector3f& InNormal); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexNormal // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x6e66150
	void SetTriangleVertexIndices(uint32_t InTriangleIndex, struct FIntVector& InTriangleVertexIndices); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexIndices // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x6e663b0
	void SetTriangleVertexColor(uint32_t InTriangleIndex, char InTriangleVertexIndex, struct FColor& InColor); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleVertexColor // (Final|Native|Public|HasOutParms|HasDefaults) // @ game+0x6e65a40
	void SetTriangleMaterialID(uint32_t InTriangleIndex, int32_t InMaterialID); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetTriangleMaterialID // (Final|Native|Public) // @ game+0x6e655a0
	void SetStaticMaterial(uint32_t InMaterialIndex, struct FStaticMaterial& InStaticMaterial); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetStaticMaterial // (Final|Native|Public|HasOutParms) // @ game+0x6e653a0
	void SetNumUVLayers(uint32_t InNumUVLayers); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumUVLayers // (Final|Native|Public) // @ game+0x6e668c0
	void SetNumStaticMaterials(uint32_t InNumStaticMaterials); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetNumStaticMaterials // (Final|Native|Public) // @ game+0x6e66710
	void SetHasTangents(bool bInHasTangents); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasTangents // (Final|Native|Public) // @ game+0x6e66b50
	void SetHasPerFaceMaterials(bool bInHasPerFaceMaterials); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasPerFaceMaterials // (Final|Native|Public) // @ game+0x6e66d50
	void SetHasNormals(bool bInHasNormals); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasNormals // (Final|Native|Public) // @ game+0x6e66c50
	void SetHasColors(bool bInHasColors); // Function HoudiniEngineRuntime.HoudiniStaticMesh.SetHasColors // (Final|Native|Public) // @ game+0x6e66a50
	void Optimize(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.Optimize // (Final|Native|Public) // @ game+0x6e64e70
	bool IsValid(bool bInSkipVertexIndicesCheck); // Function HoudiniEngineRuntime.HoudiniStaticMesh.IsValid // (Final|Native|Public|Const) // @ game+0x6e64880
	void Initialize(uint32_t InNumVertices, uint32_t InNumTriangles, uint32_t InNumUVLayers, uint32_t InInitialNumStaticMaterials, bool bInHasNormals, bool bInHasTangents, bool bInHasColors, bool bInHasPerFaceMaterials); // Function HoudiniEngineRuntime.HoudiniStaticMesh.Initialize // (Final|Native|Public) // @ game+0x6e66e50
	bool HasTangents(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.HasTangents // (Final|Native|Public|Const) // @ game+0x5ad3090
	bool HasPerFaceMaterials(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.HasPerFaceMaterials // (Final|Native|Public|Const) // @ game+0x57e5c70
	bool HasNormals(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.HasNormals // (Final|Native|Public|Const) // @ game+0x41400e0
	bool HasColors(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.HasColors // (Final|Native|Public|Const) // @ game+0x5ad3070
	struct TArray<struct FVector3f> GetVertexPositions(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexPositions // (Final|Native|Public|Const) // @ game+0x6e64df0
	struct TArray<struct FVector3f> GetVertexInstanceVTangents(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceVTangents // (Final|Native|Public|Const) // @ game+0x6e64d00
	struct TArray<struct FVector2f> GetVertexInstanceUVs(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUVs // (Final|Native|Public|Const) // @ game+0x6e64cd0
	struct TArray<struct FVector3f> GetVertexInstanceUTangents(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceUTangents // (Final|Native|Public|Const) // @ game+0x6e64d30
	struct TArray<struct FVector3f> GetVertexInstanceNormals(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceNormals // (Final|Native|Public|Const) // @ game+0x6e64d60
	struct TArray<struct FColor> GetVertexInstanceColors(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetVertexInstanceColors // (Final|Native|Public|Const) // @ game+0x6e64d90
	struct TArray<struct FIntVector> GetTriangleIndices(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetTriangleIndices // (Final|Native|Public|Const) // @ game+0x6e64dc0
	struct TArray<struct FStaticMaterial> GetStaticMaterials(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetStaticMaterials // (Final|Native|Public|Const) // @ game+0x6e64c70
	uint32_t GetNumVertices(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertices // (Final|Native|Public|Const) // @ game+0x413f400
	uint32_t GetNumVertexInstances(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumVertexInstances // (Final|Native|Public|Const) // @ game+0x6e666f0
	uint32_t GetNumUVLayers(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumUVLayers // (Final|Native|Public|Const) // @ game+0x4a23150
	uint32_t GetNumTriangles(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumTriangles // (Final|Native|Public|Const) // @ game+0x413ef60
	uint32_t GetNumStaticMaterials(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetNumStaticMaterials // (Final|Native|Public|Const) // @ game+0x580b6d0
	int32_t GetMaterialIndex(struct FName InMaterialSlotName); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIndex // (Final|Native|Public|Const) // @ game+0x6e64a30
	struct TArray<int32_t> GetMaterialIDsPerTriangle(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterialIDsPerTriangle // (Final|Native|Public|Const) // @ game+0x6e64ca0
	struct UMaterialInterface* GetMaterial(int32_t InMaterialIndex); // Function HoudiniEngineRuntime.HoudiniStaticMesh.GetMaterial // (Final|Native|Public) // @ game+0x6e64b70
	void CalculateTangents(bool bInComputeWeightedNormals); // Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateTangents // (Final|Native|Public) // @ game+0x6e64f50
	void CalculateNormals(bool bInComputeWeightedNormals); // Function HoudiniEngineRuntime.HoudiniStaticMesh.CalculateNormals // (Final|Native|Public) // @ game+0x6e65130
	struct FBox CalcBounds(); // Function HoudiniEngineRuntime.HoudiniStaticMesh.CalcBounds // (Final|Native|Public|HasDefaults|Const) // @ game+0x6e64e20
	uint32_t AddStaticMaterial(struct FStaticMaterial& InStaticMaterial); // Function HoudiniEngineRuntime.HoudiniStaticMesh.AddStaticMaterial // (Final|Native|Public|HasOutParms) // @ game+0x6e65230
};

// Class HoudiniEngineRuntime.HoudiniStaticMeshComponent
// Size: 0x720 (Inherited: 0x6d0)
struct UHoudiniStaticMeshComponent : UMeshComponent {
	struct UHoudiniStaticMesh* Mesh; // 0x6d0(0x08)
	struct FBox LocalBounds; // 0x6d8(0x38)
	bool bHoudiniIconVisible; // 0x710(0x01)
	char pad_711[0xf]; // 0x711(0x0f)

	void SetMesh(struct UHoudiniStaticMesh* InMesh); // Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetMesh // (Final|Native|Public) // @ game+0x6e68250
	void SetHoudiniIconVisible(bool bInHoudiniIconVisible); // Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.SetHoudiniIconVisible // (Final|Native|Public) // @ game+0x6e68120
	void NotifyMeshUpdated(); // Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.NotifyMeshUpdated // (Final|Native|Public) // @ game+0x6e68230
	bool IsHoudiniIconVisible(); // Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.IsHoudiniIconVisible // (Final|Native|Public|Const) // @ game+0x6e68210
	struct UHoudiniStaticMesh* GetMesh(); // Function HoudiniEngineRuntime.HoudiniStaticMeshComponent.GetMesh // (Final|Native|Public) // @ game+0x56924d0
};

// Class HoudiniEngineRuntime.HoudiniAssetStateEvents
// Size: 0x30 (Inherited: 0x30)
struct UHoudiniAssetStateEvents : UInterface {
};

