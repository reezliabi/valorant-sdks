// Class Landscape.ControlPointMeshComponent
// Size: 0x770 (Inherited: 0x760)
struct UControlPointMeshComponent : UStaticMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x760(0x04)
	char pad_764[0xc]; // 0x764(0x0c)
};

// Class Landscape.LandscapeSplineInterface
// Size: 0x30 (Inherited: 0x30)
struct ULandscapeSplineInterface : UInterface {
};

// Class Landscape.LandscapeProxy
// Size: 0x7f0 (Inherited: 0x460)
struct ALandscapeProxy : APartitionActor {
	char pad_460[0x8]; // 0x460(0x08)
	struct ULandscapeSplinesComponent* SplineComponent; // 0x468(0x08)
	struct FGuid LandscapeGuid; // 0x470(0x10)
	char pad_480[0x10]; // 0x480(0x10)
	bool bEnableNanite; // 0x490(0x01)
	char pad_491[0x7]; // 0x491(0x07)
	struct TArray<struct FLandscapePerLODMaterialOverride> PerLODOverrideMaterials; // 0x498(0x10)
	struct FIntPoint LandscapeSectionOffset; // 0x4a8(0x08)
	int32_t MaxLODLevel; // 0x4b0(0x04)
	float ComponentScreenSizeToUseSubSections; // 0x4b4(0x04)
	float LOD0ScreenSize; // 0x4b8(0x04)
	uint32_t LODGroupKey; // 0x4bc(0x04)
	float LOD0DistributionSetting; // 0x4c0(0x04)
	float LODDistributionSetting; // 0x4c4(0x04)
	int32_t StaticLightingLOD; // 0x4c8(0x04)
	char pad_4CC[0x4]; // 0x4cc(0x04)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x4d0(0x08)
	float StreamingDistanceMultiplier; // 0x4d8(0x04)
	char pad_4DC[0x4]; // 0x4dc(0x04)
	struct UMaterialInterface* LandscapeMaterial; // 0x4e0(0x08)
	char pad_4E8[0x20]; // 0x4e8(0x20)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x508(0x08)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x510(0x10)
	bool bSetCreateRuntimeVirtualTextureVolumes; // 0x520(0x01)
	bool bVirtualTextureRenderWithQuad; // 0x521(0x01)
	bool bVirtualTextureRenderWithQuadHQ; // 0x522(0x01)
	char pad_523[0x1]; // 0x523(0x01)
	int32_t VirtualTextureNumLods; // 0x524(0x04)
	int32_t VirtualTextureLodBias; // 0x528(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x52c(0x01)
	char pad_52D[0x3]; // 0x52d(0x03)
	float NegativeZBoundsExtension; // 0x530(0x04)
	float PositiveZBoundsExtension; // 0x534(0x04)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x538(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x548(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x558(0x10)
	struct ULandscapeNaniteComponent* NaniteComponent; // 0x568(0x08)
	struct TArray<struct ULandscapeNaniteComponent*> NaniteComponents; // 0x570(0x10)
	char pad_580[0x64]; // 0x580(0x64)
	bool bHasLandscapeGrass; // 0x5e4(0x01)
	char pad_5E5[0x3]; // 0x5e5(0x03)
	float StaticLightingResolution; // 0x5e8(0x04)
	char CastShadow : 1; // 0x5ec(0x01)
	char bCastDynamicShadow : 1; // 0x5ec(0x01)
	char bCastStaticShadow : 1; // 0x5ec(0x01)
	char pad_5EC_3 : 5; // 0x5ec(0x01)
	enum class EShadowCacheInvalidationBehavior ShadowCacheInvalidationBehavior; // 0x5ed(0x01)
	char bCastContactShadow : 1; // 0x5ee(0x01)
	char pad_5EE_1 : 7; // 0x5ee(0x01)
	char pad_5EF[0x1]; // 0x5ef(0x01)
	char bCastFarShadow : 1; // 0x5f0(0x01)
	char pad_5F0_1 : 7; // 0x5f0(0x01)
	char pad_5F1[0x3]; // 0x5f1(0x03)
	char bCastHiddenShadow : 1; // 0x5f4(0x01)
	char pad_5F4_1 : 7; // 0x5f4(0x01)
	char pad_5F5[0x3]; // 0x5f5(0x03)
	char bCastShadowAsTwoSided : 1; // 0x5f8(0x01)
	char pad_5F8_1 : 7; // 0x5f8(0x01)
	char pad_5F9[0x3]; // 0x5f9(0x03)
	char bAffectDistanceFieldLighting : 1; // 0x5fc(0x01)
	char pad_5FC_1 : 7; // 0x5fc(0x01)
	struct FLightingChannels LightingChannels; // 0x5fd(0x01)
	char pad_5FE[0x2]; // 0x5fe(0x02)
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x600(0x01)
	char pad_600_1 : 7; // 0x600(0x01)
	char pad_601[0x3]; // 0x601(0x03)
	char bReceivesDecals : 1; // 0x604(0x01)
	char bReceivesFloorOnlyDecals : 1; // 0x604(0x01)
	char pad_604_2 : 6; // 0x604(0x01)
	char pad_605[0x3]; // 0x605(0x03)
	char bRenderCustomDepth : 1; // 0x608(0x01)
	char pad_608_1 : 7; // 0x608(0x01)
	char pad_609[0x3]; // 0x609(0x03)
	enum class ERendererStencilMask CustomDepthStencilWriteMask; // 0x60c(0x01)
	char pad_60D[0x3]; // 0x60d(0x03)
	int32_t CustomDepthStencilValue; // 0x610(0x04)
	float LDMaxDrawDistance; // 0x614(0x04)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x618(0x1c)
	int32_t CollisionMipLevel; // 0x634(0x04)
	int32_t SimpleCollisionMipLevel; // 0x638(0x04)
	char pad_63C[0x4]; // 0x63c(0x04)
	struct FBodyInstance BodyInstance; // 0x640(0x190)
	char bGenerateOverlapEvents : 1; // 0x7d0(0x01)
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x7d0(0x01)
	char pad_7D0_2 : 6; // 0x7d0(0x01)
	char pad_7D1[0x3]; // 0x7d1(0x03)
	int32_t ComponentSizeQuads; // 0x7d4(0x04)
	int32_t SubsectionSizeQuads; // 0x7d8(0x04)
	int32_t NumSubsections; // 0x7dc(0x04)
	char bUsedForNavigation : 1; // 0x7e0(0x01)
	char bFillCollisionUnderLandscapeForNavmesh : 1; // 0x7e0(0x01)
	char pad_7E0_2 : 6; // 0x7e0(0x01)
	char pad_7E1[0x3]; // 0x7e1(0x03)
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x7e4(0x01)
	bool bUseDynamicMaterialInstance; // 0x7e5(0x01)
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x7e6(0x01)
	bool bHasLayersContent; // 0x7e7(0x01)
	bool bUseCompressedHeightmapStorage; // 0x7e8(0x01)
	char pad_7E9[0x7]; // 0x7e9(0x07)

	void SetVirtualTextureRenderPassType(enum class ERuntimeVirtualTextureMainPassType InType); // Function Landscape.LandscapeProxy.SetVirtualTextureRenderPassType // (Final|Native|Public|BlueprintCallable) // @ game+0x33bac90
	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x33b9c70
	void SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture* Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x33b9ed0
	void SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x33b9a00
	bool LandscapeExportHeightmapToRenderTarget(struct UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies); // Function Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget // (Final|Native|Public|BlueprintCallable) // @ game+0x33b97b0
	struct ALandscape* GetLandscapeActor(); // Function Landscape.LandscapeProxy.GetLandscapeActor // (Native|Public|BlueprintCallable) // @ game+0x33b99c0
	void EditorSetLandscapeMaterial(struct UMaterialInterface* NewLandscapeMaterial); // Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0x33ba9c0
	void EditorApplySpline(struct USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, struct ULandscapeLayerInfoObject* PaintLayer, struct FName EditLayerName); // Function Landscape.LandscapeProxy.EditorApplySpline // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x33ba2a0
	void ChangeLODDistanceFactor(float InLODDistanceFactor); // Function Landscape.LandscapeProxy.ChangeLODDistanceFactor // (Native|Public|BlueprintCallable) // @ game+0x33bab90
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections // (Native|Public|BlueprintCallable) // @ game+0x33baa90
};

// Class Landscape.Landscape
// Size: 0x7f0 (Inherited: 0x7f0)
struct ALandscape : ALandscapeProxy {

	void RenderHeightmap(struct FTransform& InWorldTransform, struct FBox2D& InExtents, struct UTextureRenderTarget2D* OutRenderTarget); // Function Landscape.Landscape.RenderHeightmap // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x337a640
};

// Class Landscape.LandscapeLODStreamingProxy_DEPRECATED
// Size: 0xd0 (Inherited: 0xd0)
struct ULandscapeLODStreamingProxy_DEPRECATED : UStreamableRenderAsset {
};

// Class Landscape.LandscapeComponent
// Size: 0x880 (Inherited: 0x690)
struct ULandscapeComponent : UPrimitiveComponent {
	int32_t SectionBaseX; // 0x688(0x04)
	int32_t SectionBaseY; // 0x68c(0x04)
	int32_t ComponentSizeQuads; // 0x690(0x04)
	int32_t SubsectionSizeQuads; // 0x694(0x04)
	int32_t NumSubsections; // 0x698(0x04)
	struct UMaterialInterface* OverrideMaterial; // 0x6a0(0x08)
	struct UMaterialInterface* OverrideHoleMaterial; // 0x6a8(0x08)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0x6b0(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x6c0(0x10)
	struct TArray<int8_t> LODIndexToMaterialIndex; // 0x6d0(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0x6e0(0x08)
	char pad_6EC[0x4]; // 0x6ec(0x04)
	struct FVector4 WeightmapScaleBias; // 0x6f0(0x20)
	float WeightmapSubsectionOffset; // 0x710(0x04)
	char pad_714[0xc]; // 0x714(0x0c)
	struct FVector4 HeightmapScaleBias; // 0x720(0x20)
	struct FBox CachedLocalBox; // 0x740(0x38)
	struct ULandscapeHeightfieldCollisionComponent* CollisionComponentRef; // 0x778(0x08)
	bool bUserTriggeredChangeRequested; // 0x780(0x01)
	bool bNaniteActive; // 0x781(0x01)
	char pad_782[0x6]; // 0x782(0x06)
	struct UTexture2D* HeightmapTexture; // 0x788(0x08)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x790(0x10)
	struct TArray<struct UTexture2D*> WeightmapTextures; // 0x7a0(0x10)
	struct TArray<struct FLandscapePerLODMaterialOverride> PerLODOverrideMaterials; // 0x7b0(0x10)
	struct FGuid MapBuildDataId; // 0x7c0(0x10)
	int32_t CollisionMipLevel; // 0x7d0(0x04)
	int32_t SimpleCollisionMipLevel; // 0x7d4(0x04)
	float NegativeZBoundsExtension; // 0x7d8(0x04)
	float PositiveZBoundsExtension; // 0x7dc(0x04)
	float StaticLightingResolution; // 0x7e0(0x04)
	int32_t ForcedLOD; // 0x7e4(0x04)
	int32_t LODBias; // 0x7e8(0x04)
	struct FGuid StateId; // 0x7ec(0x10)
	char pad_7FC[0x24]; // 0x7fc(0x24)
	struct UMaterialInterface* MobileMaterialInterface; // 0x820(0x08)
	struct TArray<struct UMaterialInterface*> MobileMaterialInterfaces; // 0x828(0x10)
	struct TArray<struct UTexture2D*> MobileWeightmapTextures; // 0x838(0x10)
	struct TArray<struct FWeightmapLayerAllocationInfo> MobileWeightmapLayerAllocations; // 0x848(0x10)
	char pad_858[0x28]; // 0x858(0x28)

	void SetLODBias(int32_t InLODBias); // Function Landscape.LandscapeComponent.SetLODBias // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x337b780
	void SetForcedLOD(int32_t InForcedLOD); // Function Landscape.LandscapeComponent.SetForcedLOD // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x337b8c0
	struct UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex); // Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x337bd20
	float EditorGetPaintLayerWeightByNameAtLocation(struct FVector& InLocation, struct FName InPaintLayerName); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x337ba10
	float EditorGetPaintLayerWeightAtLocation(struct FVector& InLocation, struct ULandscapeLayerInfoObject* PaintLayer); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x337bba0
};

// Class Landscape.LandscapeGizmoActor
// Size: 0x460 (Inherited: 0x460)
struct ALandscapeGizmoActor : AActor {
};

// Class Landscape.LandscapeGizmoActiveActor
// Size: 0x4b0 (Inherited: 0x460)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
	char pad_460[0x50]; // 0x460(0x50)
};

// Class Landscape.LandscapeGizmoRenderComponent
// Size: 0x690 (Inherited: 0x690)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
};

// Class Landscape.LandscapeGrassType
// Size: 0x68 (Inherited: 0x30)
struct ULandscapeGrassType : UObject {
	struct TArray<struct FGrassVariety> GrassVarieties; // 0x30(0x10)
	char bEnableDensityScaling : 1; // 0x40(0x01)
	char pad_40_1 : 7; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct UStaticMesh* GrassMesh; // 0x48(0x08)
	float GrassDensity; // 0x50(0x04)
	float PlacementJitter; // 0x54(0x04)
	int32_t StartCullDistance; // 0x58(0x04)
	int32_t EndCullDistance; // 0x5c(0x04)
	bool RandomRotation; // 0x60(0x01)
	bool AlignToSurface; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// Size: 0x770 (Inherited: 0x690)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x688(0x10)
	int32_t SectionBaseX; // 0x698(0x04)
	int32_t SectionBaseY; // 0x69c(0x04)
	int32_t CollisionSizeQuads; // 0x6a0(0x04)
	float CollisionScale; // 0x6a4(0x04)
	int32_t SimpleCollisionSizeQuads; // 0x6a8(0x04)
	struct TArray<char> CollisionQuadFlags; // 0x6b0(0x10)
	struct FGuid HeightfieldGuid; // 0x6c0(0x10)
	struct FBox CachedLocalBox; // 0x6d0(0x38)
	struct ULandscapeComponent* RenderComponentRef; // 0x708(0x08)
	char pad_714[0xc]; // 0x714(0x0c)
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; // 0x720(0x10)
	char pad_730[0x40]; // 0x730(0x40)

	struct ULandscapeComponent* GetRenderComponent(); // Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x337d1d0
};

// Class Landscape.LandscapeLayerInfoObject
// Size: 0x60 (Inherited: 0x30)
struct ULandscapeLayerInfoObject : UObject {
	struct FName LayerName; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UPhysicalMaterial* PhysMaterial; // 0x40(0x08)
	float Hardness; // 0x48(0x04)
	struct FLinearColor LayerUsageDebugColor; // 0x4c(0x10)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// Class Landscape.LandscapeMaterialInstanceConstant
// Size: 0x2e0 (Inherited: 0x2c8)
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	struct TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x2c8(0x10)
	char bIsLayerThumbnail : 1; // 0x2d8(0x01)
	char bDisableTessellation : 1; // 0x2d8(0x01)
	char bMobile : 1; // 0x2d8(0x01)
	char bEditorToolUsage : 1; // 0x2d8(0x01)
	char pad_2D8_4 : 4; // 0x2d8(0x01)
	char pad_2D9[0x7]; // 0x2d9(0x07)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size: 0x790 (Inherited: 0x770)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct FGuid MeshGuid; // 0x770(0x10)
	char pad_780[0x10]; // 0x780(0x10)
};

// Class Landscape.LandscapeMeshProxyActor
// Size: 0x468 (Inherited: 0x460)
struct ALandscapeMeshProxyActor : AActor {
	struct ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x460(0x08)
};

// Class Landscape.LandscapeMeshProxyComponent
// Size: 0x790 (Inherited: 0x760)
struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	struct FGuid LandscapeGuid; // 0x760(0x10)
	struct TArray<struct FIntPoint> ProxyComponentBases; // 0x770(0x10)
	int8_t ProxyLOD; // 0x780(0x01)
	char pad_781[0x3]; // 0x781(0x03)
	uint32_t LODGroupKey; // 0x784(0x04)
	char pad_788[0x8]; // 0x788(0x08)
};

// Class Landscape.LandscapeSettings
// Size: 0xc8 (Inherited: 0x48)
struct ULandscapeSettings : UDeveloperSettings {
	int32_t MaxNumberOfLayers; // 0x48(0x04)
	int32_t MaxComponents; // 0x4c(0x04)
	uint32_t MaxImageImportCacheSizeMegaBytes; // 0x50(0x04)
	float PaintStrengthGamma; // 0x54(0x04)
	bool bDisablePaintingStartupSlowdown; // 0x58(0x01)
	enum class ELandscapeDirtyingMode LandscapeDirtyingMode; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	int32_t SideResolutionLimit; // 0x5c(0x04)
	struct TSoftObjectPtr<UMaterialInterface> DefaultLandscapeMaterial; // 0x60(0x30)
	struct TSoftObjectPtr<ULandscapeLayerInfoObject> DefaultLayerInfoObject; // 0x90(0x30)
	bool bRestrictiveMode; // 0xc0(0x01)
	char pad_C1[0x7]; // 0xc1(0x07)
};

// Class Landscape.LandscapeSplinesComponent
// Size: 0x6c0 (Inherited: 0x690)
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x688(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x698(0x10)
	struct TArray<struct UMeshComponent*> CookedForeignMeshComponents; // 0x6a8(0x10)

	struct TArray<struct USplineMeshComponent*> GetSplineMeshComponents(); // Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents // (Final|Native|Public|BlueprintCallable) // @ game+0x337fff0
};

// Class Landscape.LandscapeSplineControlPoint
// Size: 0xe0 (Inherited: 0x30)
struct ULandscapeSplineControlPoint : UObject {
	struct FVector Location; // 0x30(0x18)
	struct FRotator Rotation; // 0x48(0x18)
	float Width; // 0x60(0x04)
	float LayerWidthRatio; // 0x64(0x04)
	float SideFalloff; // 0x68(0x04)
	float LeftSideFalloffFactor; // 0x6c(0x04)
	float RightSideFalloffFactor; // 0x70(0x04)
	float LeftSideLayerFalloffFactor; // 0x74(0x04)
	float RightSideLayerFalloffFactor; // 0x78(0x04)
	float EndFalloff; // 0x7c(0x04)
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments; // 0x80(0x10)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x90(0x10)
	struct FBox Bounds; // 0xa0(0x38)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0xd8(0x08)
};

// Class Landscape.LandscapeSplineSegment
// Size: 0xd0 (Inherited: 0x30)
struct ULandscapeSplineSegment : UObject {
	struct FLandscapeSplineSegmentConnection Connections[0x2]; // 0x30(0x30)
	struct FInterpCurveVector SplineInfo; // 0x60(0x18)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x78(0x10)
	struct FBox Bounds; // 0x88(0x38)
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; // 0xc0(0x10)
};

// Class Landscape.LandscapeStreamingProxy
// Size: 0x870 (Inherited: 0x7f0)
struct ALandscapeStreamingProxy : ALandscapeProxy {
	struct TSoftObjectPtr<ALandscape> LandscapeActorRef; // 0x7f0(0x30)
	struct TSet<struct FString> OverriddenSharedProperties; // 0x820(0x50)
};

// Class Landscape.LandscapeWeightmapUsage
// Size: 0x60 (Inherited: 0x30)
struct ULandscapeWeightmapUsage : UObject {
	struct ULandscapeComponent* ChannelUsage[0x4]; // 0x30(0x20)
	struct FGuid LayerGuid; // 0x50(0x10)
};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// Size: 0xc8 (Inherited: 0xb8)
struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	struct TArray<struct FGrassInput> GrassTypes; // 0xb8(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size: 0xc8 (Inherited: 0xb8)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<struct FLayerBlendInput> Layers; // 0xb8(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size: 0xd0 (Inherited: 0xb8)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	enum class ETerrainCoordMappingType MappingType; // 0xb8(0x01)
	enum class ELandscapeCustomizedCoordType CustomUVType; // 0xb9(0x01)
	char pad_BA[0x2]; // 0xba(0x02)
	float MappingScale; // 0xbc(0x04)
	float MappingRotation; // 0xc0(0x04)
	float MappingPanU; // 0xc4(0x04)
	float MappingPanV; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// Class Landscape.ControlPointMeshActor
// Size: 0x468 (Inherited: 0x460)
struct AControlPointMeshActor : AActor {
	struct UControlPointMeshComponent* ControlPointMeshComponent; // 0x460(0x08)
};

// Class Landscape.LandscapeBlueprintBrushBase
// Size: 0x460 (Inherited: 0x460)
struct ALandscapeBlueprintBrushBase : AActor {

	void RequestLandscapeUpdate(bool bInUserTriggered); // Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x338cfe0
	struct UTextureRenderTarget2D* RenderLayer(struct FLandscapeBrushParameters& InParameters); // Function Landscape.LandscapeBlueprintBrushBase.RenderLayer // (RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x338d380
	struct UTextureRenderTarget2D* Render(bool InIsHeightmap, struct UTextureRenderTarget2D* InCombinedResult, struct FName& InWeightmapLayerName); // Function Landscape.LandscapeBlueprintBrushBase.Render // (RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x338d4a0
	void Initialize(struct FTransform& InLandscapeTransform, struct FIntPoint& InLandscapeSize, struct FIntPoint& InLandscapeRenderTargetSize); // Function Landscape.LandscapeBlueprintBrushBase.Initialize // (RequiredAPI|Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // @ game+0x338d0b0
	void GetBlueprintRenderDependencies(struct TArray<struct UObject*>& OutStreamableAssets); // Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies // (RequiredAPI|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
};

// Class Landscape.LandscapeHLODBuilder
// Size: 0x30 (Inherited: 0x30)
struct ULandscapeHLODBuilder : UHLODBuilder {
};

// Class Landscape.LandscapeInfo
// Size: 0x230 (Inherited: 0x30)
struct ULandscapeInfo : UObject {
	struct TWeakObjectPtr<struct ALandscape> LandscapeActor; // 0x30(0x08)
	struct FGuid LandscapeGuid; // 0x38(0x10)
	int32_t ComponentSizeQuads; // 0x48(0x04)
	int32_t SubsectionSizeQuads; // 0x4c(0x04)
	int32_t ComponentNumSubsections; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FVector DrawScale; // 0x58(0x18)
	char pad_70[0xb0]; // 0x70(0xb0)
	struct TArray<struct TWeakObjectPtr<struct ALandscapeStreamingProxy>> StreamingProxies; // 0x120(0x10)
	char pad_130[0x100]; // 0x130(0x100)
};

// Class Landscape.LandscapeInfoMap
// Size: 0x88 (Inherited: 0x30)
struct ULandscapeInfoMap : UObject {
	char pad_30[0x58]; // 0x30(0x58)
};

// Class Landscape.LandscapeNaniteComponent
// Size: 0x780 (Inherited: 0x760)
struct ULandscapeNaniteComponent : UStaticMeshComponent {
	struct FGuid ProxyContentId; // 0x760(0x10)
	bool bEnabled; // 0x770(0x01)
	char pad_771[0xf]; // 0x771(0x0f)
};

// Class Landscape.LandscapeSplineActor
// Size: 0x478 (Inherited: 0x460)
struct ALandscapeSplineActor : AActor {
	char pad_460[0x8]; // 0x460(0x08)
	struct FGuid LandscapeGuid; // 0x468(0x10)
};

// Class Landscape.LandscapeSplineMeshesActor
// Size: 0x470 (Inherited: 0x460)
struct ALandscapeSplineMeshesActor : APartitionActor {
	struct TArray<struct UStaticMeshComponent*> StaticMeshComponents; // 0x460(0x10)
};

// Class Landscape.LandscapeSubsystem
// Size: 0x78 (Inherited: 0x58)
struct ULandscapeSubsystem : UTickableWorldSubsystem {
	char pad_58[0x20]; // 0x58(0x20)
};

// Class Landscape.LandscapeTextureStorageProviderFactory
// Size: 0x68 (Inherited: 0x30)
struct ULandscapeTextureStorageProviderFactory : UTextureAllMipDataProviderFactory {
	char pad_30[0x38]; // 0x30(0x38)
};

// Class Landscape.MaterialExpressionLandscapeLayerSample
// Size: 0xc8 (Inherited: 0xb8)
struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	struct FName ParameterName; // 0xb8(0x0c)
	float PreviewWeight; // 0xc4(0x04)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size: 0x128 (Inherited: 0xb8)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct FExpressionInput LayerUsed; // 0xb8(0x30)
	struct FExpressionInput LayerNotUsed; // 0xe8(0x30)
	struct FName ParameterName; // 0x118(0x0c)
	char PreviewUsed : 1; // 0x124(0x01)
	char pad_124_1 : 7; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size: 0x140 (Inherited: 0xb8)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct FExpressionInput base; // 0xb8(0x30)
	struct FExpressionInput Layer; // 0xe8(0x30)
	struct FName ParameterName; // 0x118(0x0c)
	float PreviewWeight; // 0x124(0x04)
	struct FVector ConstBase; // 0x128(0x18)
};

// Class Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
// Size: 0xc8 (Inherited: 0xb8)
struct UMaterialExpressionLandscapePhysicalMaterialOutput : UMaterialExpressionCustomOutput {
	struct TArray<struct FPhysicalMaterialInput> Inputs; // 0xb8(0x10)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size: 0xb8 (Inherited: 0xb8)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
};

