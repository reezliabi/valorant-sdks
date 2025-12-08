// Class Foliage.FoliageInstancedStaticMeshComponent
// Size: 0xa70 (Inherited: 0xa40)
struct UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent {
	struct FMulticastInlineDelegate OnInstanceTakePointDamage; // 0xa38(0x10)
	struct FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0xa48(0x10)
	bool bEnableDiscardOnLoad; // 0xa58(0x01)
	struct FGuid GenerationGuid; // 0xa5c(0x10)
};

// Class Foliage.FoliageType
// Size: 0x4d0 (Inherited: 0x30)
struct UFoliageType : UObject {
	struct FGuid UpdateGuid; // 0x30(0x10)
	float Density; // 0x40(0x04)
	float DensityAdjustmentFactor; // 0x44(0x04)
	float Radius; // 0x48(0x04)
	bool bSingleInstanceModeOverrideRadius; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float SingleInstanceModeRadius; // 0x50(0x04)
	enum class EFoliageScaling Scaling; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FFloatInterval ScaleX; // 0x58(0x08)
	struct FFloatInterval ScaleY; // 0x60(0x08)
	struct FFloatInterval ScaleZ; // 0x68(0x08)
	struct FFoliageVertexColorChannelMask VertexColorMaskByChannel[0x4]; // 0x70(0x30)
	enum class FoliageVertexColorMask VertexColorMask; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	float VertexColorMaskThreshold; // 0xa4(0x04)
	char VertexColorMaskInvert : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	struct FFloatInterval ZOffset; // 0xac(0x08)
	char AlignToNormal : 1; // 0xb4(0x01)
	char AverageNormal : 1; // 0xb4(0x01)
	char AverageNormalSingleComponent : 1; // 0xb4(0x01)
	char pad_B4_3 : 5; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	float AlignMaxAngle; // 0xb8(0x04)
	char RandomYaw : 1; // 0xbc(0x01)
	char pad_BC_1 : 7; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float RandomPitchAngle; // 0xc0(0x04)
	struct FFloatInterval GroundSlopeAngle; // 0xc4(0x08)
	struct FFloatInterval Height; // 0xcc(0x08)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct TArray<struct FName> LandscapeLayers; // 0xd8(0x10)
	float MinimumLayerWeight; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct TArray<struct FName> ExclusionLandscapeLayers; // 0xf0(0x10)
	float MinimumExclusionLayerWeight; // 0x100(0x04)
	struct FName LandscapeLayer; // 0x104(0x0c)
	char CollisionWithWorld : 1; // 0x110(0x01)
	char pad_110_1 : 7; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FVector CollisionScale; // 0x118(0x18)
	int32_t AverageNormalSampleCount; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct FBoxSphereBounds MeshBounds; // 0x138(0x38)
	struct FVector LowBoundOriginRadius; // 0x170(0x18)
	enum class EComponentMobility Mobility; // 0x188(0x01)
	char pad_189[0x3]; // 0x189(0x03)
	struct FInt32Interval CullDistance; // 0x18c(0x08)
	char bEnableStaticLighting : 1; // 0x194(0x01)
	char CastShadow : 1; // 0x194(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x194(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x194(0x01)
	char bCastDynamicShadow : 1; // 0x194(0x01)
	char bCastStaticShadow : 1; // 0x194(0x01)
	char pad_194_6 : 2; // 0x194(0x01)
	char pad_195[0x3]; // 0x195(0x03)
	char bCastContactShadow : 1; // 0x198(0x01)
	char pad_198_1 : 7; // 0x198(0x01)
	char pad_199[0x3]; // 0x199(0x03)
	char bCastShadowAsTwoSided : 1; // 0x19c(0x01)
	char bReceivesDecals : 1; // 0x19c(0x01)
	char bOverrideLightMapRes : 1; // 0x19c(0x01)
	char pad_19C_3 : 5; // 0x19c(0x01)
	char pad_19D[0x3]; // 0x19d(0x03)
	enum class EShadowCacheInvalidationBehavior ShadowCacheInvalidationBehavior; // 0x1a0(0x01)
	char pad_1A1[0x3]; // 0x1a1(0x03)
	int32_t OverriddenLightMapRes; // 0x1a4(0x04)
	enum class ELightmapType LightmapType; // 0x1a8(0x01)
	char pad_1A9[0x3]; // 0x1a9(0x03)
	char bUseAsOccluder : 1; // 0x1ac(0x01)
	char pad_1AC_1 : 7; // 0x1ac(0x01)
	char pad_1AD[0x3]; // 0x1ad(0x03)
	char bVisibleInRayTracing : 1; // 0x1b0(0x01)
	char bEvaluateWorldPositionOffset : 1; // 0x1b0(0x01)
	char pad_1B0_2 : 6; // 0x1b0(0x01)
	char pad_1B1[0x3]; // 0x1b1(0x03)
	int32_t WorldPositionOffsetDisableDistance; // 0x1b4(0x04)
	struct FBodyInstance BodyInstance; // 0x1b8(0x190)
	enum class EHasCustomNavigableGeometry CustomNavigableGeometry; // 0x348(0x01)
	struct FLightingChannels LightingChannels; // 0x349(0x01)
	char pad_34A[0x2]; // 0x34a(0x02)
	char bRenderCustomDepth : 1; // 0x34c(0x01)
	char pad_34C_1 : 7; // 0x34c(0x01)
	char pad_34D[0x3]; // 0x34d(0x03)
	enum class ERendererStencilMask CustomDepthStencilWriteMask; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	int32_t CustomDepthStencilValue; // 0x354(0x04)
	int32_t TranslucencySortPriority; // 0x358(0x04)
	float CollisionRadius; // 0x35c(0x04)
	float ShadeRadius; // 0x360(0x04)
	int32_t NumSteps; // 0x364(0x04)
	float InitialSeedDensity; // 0x368(0x04)
	float AverageSpreadDistance; // 0x36c(0x04)
	float SpreadVariance; // 0x370(0x04)
	int32_t SeedsPerStep; // 0x374(0x04)
	int32_t DistributionSeed; // 0x378(0x04)
	float MaxInitialSeedOffset; // 0x37c(0x04)
	bool bCanGrowInShade; // 0x380(0x01)
	bool bSpawnsInShade; // 0x381(0x01)
	char pad_382[0x2]; // 0x382(0x02)
	float MaxInitialAge; // 0x384(0x04)
	float MaxAge; // 0x388(0x04)
	float OverlapPriority; // 0x38c(0x04)
	struct FFloatInterval ProceduralScale; // 0x390(0x08)
	struct FRuntimeFloatCurve ScaleCurve; // 0x398(0x88)
	struct FFoliageDensityFalloff DensityFalloff; // 0x420(0x90)
	int32_t ChangeCount; // 0x4b0(0x04)
	char ReapplyDensity : 1; // 0x4b4(0x01)
	char ReapplyRadius : 1; // 0x4b4(0x01)
	char ReapplyAlignToNormal : 1; // 0x4b4(0x01)
	char ReapplyRandomYaw : 1; // 0x4b4(0x01)
	char ReapplyScaling : 1; // 0x4b4(0x01)
	char ReapplyScaleX : 1; // 0x4b4(0x01)
	char ReapplyScaleY : 1; // 0x4b4(0x01)
	char ReapplyScaleZ : 1; // 0x4b4(0x01)
	char ReapplyRandomPitchAngle : 1; // 0x4b5(0x01)
	char ReapplyGroundSlope : 1; // 0x4b5(0x01)
	char ReapplyHeight : 1; // 0x4b5(0x01)
	char ReapplyLandscapeLayers : 1; // 0x4b5(0x01)
	char ReapplyZOffset : 1; // 0x4b5(0x01)
	char ReapplyCollisionWithWorld : 1; // 0x4b5(0x01)
	char ReapplyVertexColorMask : 1; // 0x4b5(0x01)
	char bEnableDensityScaling : 1; // 0x4b5(0x01)
	char bEnableDiscardOnLoad : 1; // 0x4b6(0x01)
	char bEnableCullDistanceScaling : 1; // 0x4b6(0x01)
	char pad_4B6_2 : 6; // 0x4b6(0x01)
	char pad_4B7[0x1]; // 0x4b7(0x01)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x4b8(0x10)
	int32_t VirtualTextureCullMips; // 0x4c8(0x04)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x4cc(0x01)
	char pad_4CD[0x3]; // 0x4cd(0x03)
};

// Class Foliage.FoliageType_Actor
// Size: 0x4e8 (Inherited: 0x4d0)
struct UFoliageType_Actor : UFoliageType {
	struct AActor* ActorClass; // 0x4d0(0x08)
	bool bShouldAttachToBaseComponent; // 0x4d8(0x01)
	bool bStaticMeshOnly; // 0x4d9(0x01)
	char pad_4DA[0x6]; // 0x4da(0x06)
	struct UFoliageInstancedStaticMeshComponent* StaticMeshOnlyComponentClass; // 0x4e0(0x08)
};

// Class Foliage.FoliageType_InstancedStaticMesh
// Size: 0x500 (Inherited: 0x4d0)
struct UFoliageType_InstancedStaticMesh : UFoliageType {
	struct UStaticMesh* Mesh; // 0x4d0(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x4d8(0x10)
	struct TArray<struct UMaterialInterface*> NaniteOverrideMaterials; // 0x4e8(0x10)
	struct UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x4f8(0x08)
};

// Class Foliage.InstancedFoliageActor
// Size: 0x4c0 (Inherited: 0x470)
struct AInstancedFoliageActor : AISMPartitionActor {
	char pad_470[0x50]; // 0x470(0x50)
};

// Class Foliage.InteractiveFoliageComponent
// Size: 0x770 (Inherited: 0x760)
struct UInteractiveFoliageComponent : UStaticMeshComponent {
	char pad_760[0x10]; // 0x760(0x10)
};

// Class Foliage.FoliageStatistics
// Size: 0x30 (Inherited: 0x30)
struct UFoliageStatistics : UBlueprintFunctionLibrary {

	int32_t FoliageOverlappingSphereCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FVector CenterPosition, float Radius); // Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x33698b0
	void FoliageOverlappingBoxTransforms(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FBox Box, struct TArray<struct FTransform>& OutTransforms); // Function Foliage.FoliageStatistics.FoliageOverlappingBoxTransforms // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3369320
	int32_t FoliageOverlappingBoxCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FBox Box); // Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3369630
};

// Class Foliage.GrassInstancedStaticMeshComponent
// Size: 0xa40 (Inherited: 0xa40)
struct UGrassInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent {
};

// Class Foliage.InteractiveFoliageActor
// Size: 0x500 (Inherited: 0x470)
struct AInteractiveFoliageActor : AStaticMeshActor {
	struct UCapsuleComponent* CapsuleComponent; // 0x470(0x08)
	struct FVector TouchingActorEntryPosition; // 0x478(0x18)
	struct FVector FoliageVelocity; // 0x490(0x18)
	struct FVector FoliageForce; // 0x4a8(0x18)
	struct FVector FoliagePosition; // 0x4c0(0x18)
	float FoliageDamageImpulseScale; // 0x4d8(0x04)
	float FoliageTouchImpulseScale; // 0x4dc(0x04)
	float FoliageStiffness; // 0x4e0(0x04)
	float FoliageStiffnessQuadratic; // 0x4e4(0x04)
	float FoliageDamping; // 0x4e8(0x04)
	float MaxDamageImpulse; // 0x4ec(0x04)
	float MaxTouchImpulse; // 0x4f0(0x04)
	float MaxForce; // 0x4f4(0x04)
	float Mass; // 0x4f8(0x04)
	char pad_4FC[0x4]; // 0x4fc(0x04)

	void CapsuleTouched(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& OverlapInfo); // Function Foliage.InteractiveFoliageActor.CapsuleTouched // (Final|Native|Protected|HasOutParms) // @ game+0x3371fa0
};

// Class Foliage.ProceduralFoliageBlockingVolume
// Size: 0x530 (Inherited: 0x498)
struct AProceduralFoliageBlockingVolume : AVolume {
	struct AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x498(0x08)
	struct FFoliageDensityFalloff DensityFalloff; // 0x4a0(0x90)
};

// Class Foliage.ProceduralFoliageComponent
// Size: 0x100 (Inherited: 0xd8)
struct UProceduralFoliageComponent : UActorComponent {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0xd8(0x08)
	float TileOverlap; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct AVolume* SpawningVolume; // 0xe8(0x08)
	struct FGuid ProceduralGuid; // 0xf0(0x10)
};

// Class Foliage.ProceduralFoliageSpawner
// Size: 0x98 (Inherited: 0x30)
struct UProceduralFoliageSpawner : UObject {
	int32_t RandomSeed; // 0x30(0x04)
	float TileSize; // 0x34(0x04)
	int32_t NumUniqueTiles; // 0x38(0x04)
	float MinimumQuadTreeSize; // 0x3c(0x04)
	char pad_40[0x8]; // 0x40(0x08)
	struct TArray<struct FFoliageTypeObject> FoliageTypes; // 0x48(0x10)
	bool bUseOverrideFoliageTerrainMaterials; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> OverrideFoliageTerrainMaterials; // 0x60(0x10)
	char pad_70[0x28]; // 0x70(0x28)

	void Simulate(int32_t NumSteps); // Function Foliage.ProceduralFoliageSpawner.Simulate // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x33738c0
};

// Class Foliage.ProceduralFoliageTile
// Size: 0x188 (Inherited: 0x30)
struct UProceduralFoliageTile : UObject {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x30(0x08)
	char pad_38[0xa0]; // 0x38(0xa0)
	struct TArray<struct FProceduralFoliageInstance> InstancesArray; // 0xd8(0x10)
	char pad_E8[0xa0]; // 0xe8(0xa0)
};

// Class Foliage.ProceduralFoliageVolume
// Size: 0x4a8 (Inherited: 0x498)
struct AProceduralFoliageVolume : AVolume {
	char pad_498[0x8]; // 0x498(0x08)
	struct UProceduralFoliageComponent* ProceduralComponent; // 0x4a0(0x08)
};

