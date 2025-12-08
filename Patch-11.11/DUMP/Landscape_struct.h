// Enum Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8 {
	LSE_None = 0,
	LSE_NoLandscapeInfo = 1,
	LSE_CollsionXY = 2,
	LSE_NoLayerInfo = 3,
	LSE_MAX = 4
};

// Enum Landscape.ERTDrawingType
enum class ERTDrawingType : uint8 {
	RTAtlas = 0,
	RTAtlasToNonAtlas = 1,
	RTNonAtlasToAtlas = 2,
	RTNonAtlas = 3,
	RTMips = 4,
	ERTDrawingType_MAX = 5
};

// Enum Landscape.EHeightmapRTType
enum class EHeightmapRTType : uint8 {
	HeightmapRT_CombinedAtlas = 0,
	HeightmapRT_CombinedNonAtlas = 1,
	HeightmapRT_Scratch1 = 2,
	HeightmapRT_Scratch2 = 3,
	HeightmapRT_Scratch3 = 4,
	HeightmapRT_Mip1 = 5,
	HeightmapRT_Mip2 = 6,
	HeightmapRT_Mip3 = 7,
	HeightmapRT_Mip4 = 8,
	HeightmapRT_Mip5 = 9,
	HeightmapRT_Mip6 = 10,
	HeightmapRT_Mip7 = 11,
	HeightmapRT_Count = 12,
	HeightmapRT_MAX = 13
};

// Enum Landscape.EWeightmapRTType
enum class EWeightmapRTType : uint8 {
	WeightmapRT_Scratch_RGBA = 0,
	WeightmapRT_Scratch1 = 1,
	WeightmapRT_Scratch2 = 2,
	WeightmapRT_Scratch3 = 3,
	WeightmapRT_Mip0 = 4,
	WeightmapRT_Mip1 = 5,
	WeightmapRT_Mip2 = 6,
	WeightmapRT_Mip3 = 7,
	WeightmapRT_Mip4 = 8,
	WeightmapRT_Mip5 = 9,
	WeightmapRT_Mip6 = 10,
	WeightmapRT_Mip7 = 11,
	WeightmapRT_Count = 12,
	WeightmapRT_MAX = 13
};

// Enum Landscape.ELandscapeBlendMode
enum class ELandscapeBlendMode : uint8 {
	LSBM_AdditiveBlend = 0,
	LSBM_AlphaBlend = 1,
	LSBM_MAX = 2
};

// Enum Landscape.ELandscapeClearMode
enum class ELandscapeClearMode : uint8 {
	Clear_Weightmap = 1,
	Clear_Heightmap = 2,
	Clear_All = 3,
	Clear_MAX = 4
};

// Enum Landscape.ELandscapeToolTargetType
enum class ELandscapeToolTargetType : uint8 {
	Heightmap = 0,
	Weightmap = 1,
	Visibility = 2,
	Invalid = 3,
	ELandscapeToolTargetType_MAX = 4
};

// Enum Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8 {
	LGT_None = 0,
	LGT_Height = 1,
	LGT_Weight = 2,
	LGT_MAX = 3
};

// Enum Landscape.ELandscapeGizmoSnapType
enum class ELandscapeGizmoSnapType : uint8 {
	None = 0,
	Component = 1,
	Texel = 2,
	ELandscapeGizmoSnapType_MAX = 3
};

// Enum Landscape.EGrassScaling
enum class EGrassScaling : uint8 {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	EGrassScaling_MAX = 3
};

// Enum Landscape.ESplineModulationColorMask
enum class ESplineModulationColorMask : uint8 {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	ESplineModulationColorMask_MAX = 4
};

// Enum Landscape.ELandscapeDirtyingMode
enum class ELandscapeDirtyingMode : uint8 {
	Auto = 0,
	InLandscapeModeOnly = 1,
	InLandscapeModeAndUserTriggeredChanges = 2,
	ELandscapeDirtyingMode_MAX = 3
};

// Enum Landscape.LandscapeSplineMeshOrientation
enum class LandscapeSplineMeshOrientation : uint8 {
	LSMO_XUp = 0,
	LSMO_YUp = 1,
	LSMO_MAX = 2
};

// Enum Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8 {
	LB_WeightBlend = 0,
	LB_AlphaBlend = 1,
	LB_HeightBlend = 2,
	LB_MAX = 3
};

// Enum Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8 {
	TCMT_Auto = 0,
	TCMT_XY = 1,
	TCMT_XZ = 2,
	TCMT_YZ = 3,
	TCMT_MAX = 4
};

// Enum Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8 {
	LCCT_None = 0,
	LCCT_CustomUV0 = 1,
	LCCT_CustomUV1 = 2,
	LCCT_CustomUV2 = 3,
	LCCT_WeightMapUV = 4,
	LCCT_MAX = 5
};

// Enum Landscape.ELandscapeResizeMode
enum class ELandscapeResizeMode : uint8 {
	Resample = 0,
	Clip = 1,
	Expand = 2,
	ELandscapeResizeMode_MAX = 3
};

// Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8 {
	Additive = 0,
	Layered = 1,
	ELandscapeImportAlphamapType_MAX = 2
};

// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8 {
	None = 0,
	UseMaxLayers = 1,
	ExistingOnly = 2,
	UseComponentAllowList = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4
};

// Enum Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8 {
	Default = 0,
	Alphabetical = 1,
	UserSpecific = 2,
	ELandscapeLayerDisplayMode_MAX = 3
};

// Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8 {
	Linear = 0,
	SquareRoot = 1,
	ELandscapeLODFalloff_MAX = 2
};

// ScriptStruct Landscape.LandscapeLayerBrush
// Size: 0x01 (Inherited: 0x00)
struct FLandscapeLayerBrush {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.LandscapeLayer
// Size: 0x90 (Inherited: 0x00)
struct FLandscapeLayer {
	struct FGuid Guid; // 0x00(0x10)
	struct FName Name; // 0x10(0x0c)
	bool bVisible; // 0x1c(0x01)
	bool bLocked; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	float HeightmapAlpha; // 0x20(0x04)
	float WeightmapAlpha; // 0x24(0x04)
	enum class ELandscapeBlendMode BlendMode; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TArray<struct FLandscapeLayerBrush> Brushes; // 0x30(0x10)
	struct TMap<struct ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend; // 0x40(0x50)
};

// ScriptStruct Landscape.LandscapeEditToolRenderData
// Size: 0x38 (Inherited: 0x00)
struct FLandscapeEditToolRenderData {
	struct UMaterialInterface* ToolMaterial; // 0x00(0x08)
	struct UMaterialInterface* GizmoMaterial; // 0x08(0x08)
	int32_t SelectedType; // 0x10(0x04)
	int32_t DebugChannelR; // 0x14(0x04)
	int32_t DebugChannelG; // 0x18(0x04)
	int32_t DebugChannelB; // 0x1c(0x04)
	struct UTexture2D* DataTexture; // 0x20(0x08)
	struct UTexture2D* LayerContributionTexture; // 0x28(0x08)
	struct UTexture2D* DirtyTexture; // 0x30(0x08)
};

// ScriptStruct Landscape.WeightmapLayerAllocationInfo
// Size: 0x10 (Inherited: 0x00)
struct FWeightmapLayerAllocationInfo {
	struct ULandscapeLayerInfoObject* LayerInfo; // 0x00(0x08)
	char WeightmapTextureIndex; // 0x08(0x01)
	char WeightmapTextureChannel; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct Landscape.LandscapeComponentMaterialOverride
// Size: 0x10 (Inherited: 0x00)
struct FLandscapeComponentMaterialOverride {
	struct FPerPlatformInt LODIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UMaterialInterface* Material; // 0x08(0x08)
};

// ScriptStruct Landscape.LandscapePerLODMaterialOverride
// Size: 0x10 (Inherited: 0x00)
struct FLandscapePerLODMaterialOverride {
	int32_t LODIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UMaterialInterface* Material; // 0x08(0x08)
};

// ScriptStruct Landscape.WeightmapData
// Size: 0x30 (Inherited: 0x00)
struct FWeightmapData {
	struct TArray<struct UTexture2D*> Textures; // 0x00(0x10)
	struct TArray<struct FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10(0x10)
	struct TArray<struct ULandscapeWeightmapUsage*> TextureUsages; // 0x20(0x10)
};

// ScriptStruct Landscape.HeightmapData
// Size: 0x08 (Inherited: 0x00)
struct FHeightmapData {
	struct UTexture2D* Texture; // 0x00(0x08)
};

// ScriptStruct Landscape.LandscapeLayerComponentData
// Size: 0x38 (Inherited: 0x00)
struct FLandscapeLayerComponentData {
	struct FHeightmapData HeightmapData; // 0x00(0x08)
	struct FWeightmapData WeightmapData; // 0x08(0x30)
};

// ScriptStruct Landscape.GizmoSelectData
// Size: 0x50 (Inherited: 0x00)
struct FGizmoSelectData {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Landscape.GrassVariety
// Size: 0x1a8 (Inherited: 0x00)
struct FGrassVariety {
	struct UStaticMesh* GrassMesh; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x08(0x10)
	struct FPerPlatformFloat GrassDensity; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FPerQualityLevelFloat GrassDensityQuality; // 0x20(0x68)
	bool bUseGrid; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float PlacementJitter; // 0x8c(0x04)
	struct FPerPlatformInt StartCullDistance; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct FPerQualityLevelInt StartCullDistanceQuality; // 0x98(0x68)
	struct FPerPlatformInt EndCullDistance; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct FPerQualityLevelInt EndCullDistanceQuality; // 0x108(0x68)
	int32_t MinLOD; // 0x170(0x04)
	enum class EGrassScaling Scaling; // 0x174(0x01)
	char pad_175[0x3]; // 0x175(0x03)
	struct FFloatInterval ScaleX; // 0x178(0x08)
	struct FFloatInterval ScaleY; // 0x180(0x08)
	struct FFloatInterval ScaleZ; // 0x188(0x08)
	bool RandomRotation; // 0x190(0x01)
	bool AlignToSurface; // 0x191(0x01)
	bool bUseLandscapeLightmap; // 0x192(0x01)
	struct FLightingChannels LightingChannels; // 0x193(0x01)
	bool bReceivesDecals; // 0x194(0x01)
	bool bAffectDistanceFieldLighting; // 0x195(0x01)
	bool bCastDynamicShadow; // 0x196(0x01)
	bool bCastContactShadow; // 0x197(0x01)
	bool bKeepInstanceBufferCPUCopy; // 0x198(0x01)
	char pad_199[0x3]; // 0x199(0x03)
	uint32_t InstanceWorldPositionOffsetDisableDistance; // 0x19c(0x04)
	enum class EShadowCacheInvalidationBehavior ShadowCacheInvalidationBehavior; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
};

// ScriptStruct Landscape.LandscapeMaterialTextureStreamingInfo
// Size: 0x10 (Inherited: 0x00)
struct FLandscapeMaterialTextureStreamingInfo {
	struct FName TextureName; // 0x00(0x0c)
	float TexelFactor; // 0x0c(0x04)
};

// ScriptStruct Landscape.LandscapeSplineConnection
// Size: 0x10 (Inherited: 0x00)
struct FLandscapeSplineConnection {
	struct ULandscapeSplineSegment* Segment; // 0x00(0x08)
	char End : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Landscape.ForeignControlPointData
// Size: 0x01 (Inherited: 0x00)
struct FForeignControlPointData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.ForeignSplineSegmentData
// Size: 0x01 (Inherited: 0x00)
struct FForeignSplineSegmentData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.ForeignWorldSplineData
// Size: 0x01 (Inherited: 0x00)
struct FForeignWorldSplineData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.LandscapeSplineInterpPoint
// Size: 0xe0 (Inherited: 0x00)
struct FLandscapeSplineInterpPoint {
	struct FVector Center; // 0x00(0x18)
	struct FVector Left; // 0x18(0x18)
	struct FVector Right; // 0x30(0x18)
	struct FVector FalloffLeft; // 0x48(0x18)
	struct FVector FalloffRight; // 0x60(0x18)
	struct FVector LayerLeft; // 0x78(0x18)
	struct FVector LayerRight; // 0x90(0x18)
	struct FVector LayerFalloffLeft; // 0xa8(0x18)
	struct FVector LayerFalloffRight; // 0xc0(0x18)
	float StartEndFalloff; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// ScriptStruct Landscape.LandscapeSplineSegmentConnection
// Size: 0x18 (Inherited: 0x00)
struct FLandscapeSplineSegmentConnection {
	struct ULandscapeSplineControlPoint* ControlPoint; // 0x00(0x08)
	float TangentLen; // 0x08(0x04)
	struct FName SocketName; // 0x0c(0x0c)
};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
// Size: 0x58 (Inherited: 0x00)
struct FLandscapeSplineMeshEntry {
	struct UStaticMesh* Mesh; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x08(0x10)
	char bCenterH : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FVector2D CenterAdjust; // 0x20(0x10)
	char bScaleToWidth : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FVector Scale; // 0x38(0x18)
	enum class LandscapeSplineMeshOrientation Orientation; // 0x50(0x01)
	enum class ESplineMeshAxis ForwardAxis; // 0x51(0x01)
	enum class ESplineMeshAxis UpAxis; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
};

// ScriptStruct Landscape.GrassInput
// Size: 0x48 (Inherited: 0x00)
struct FGrassInput {
	struct FName Name; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct ULandscapeGrassType* GrassType; // 0x10(0x08)
	struct FExpressionInput Input; // 0x18(0x30)
};

// ScriptStruct Landscape.LayerBlendInput
// Size: 0x98 (Inherited: 0x00)
struct FLayerBlendInput {
	struct FName LayerName; // 0x00(0x0c)
	enum class ELandscapeLayerBlendType BlendType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FExpressionInput LayerInput; // 0x10(0x30)
	struct FExpressionInput HeightInput; // 0x40(0x30)
	float PreviewWeight; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FVector ConstLayerInput; // 0x78(0x18)
	float ConstHeightInput; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct Landscape.LandscapeBrushParameters
// Size: 0x20 (Inherited: 0x00)
struct FLandscapeBrushParameters {
	enum class ELandscapeToolTargetType LayerType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UTextureRenderTarget2D* CombinedResult; // 0x08(0x08)
	struct FName WeightmapLayerName; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Landscape.LandscapeInfoLayerSettings
// Size: 0x18 (Inherited: 0x00)
struct FLandscapeInfoLayerSettings {
	struct ULandscapeLayerInfoObject* LayerInfoObj; // 0x00(0x08)
	struct FName LayerName; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Landscape.LandscapeEditorLayerSettings
// Size: 0x01 (Inherited: 0x00)
struct FLandscapeEditorLayerSettings {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.LandscapeLayerStruct
// Size: 0x08 (Inherited: 0x00)
struct FLandscapeLayerStruct {
	struct ULandscapeLayerInfoObject* LayerInfoObj; // 0x00(0x08)
};

// ScriptStruct Landscape.LandscapeImportLayerInfo
// Size: 0x01 (Inherited: 0x00)
struct FLandscapeImportLayerInfo {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Landscape.LandscapeProxyMaterialOverride
// Size: 0x10 (Inherited: 0x00)
struct FLandscapeProxyMaterialOverride {
	struct FPerPlatformInt LODIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UMaterialInterface* Material; // 0x08(0x08)
};

// ScriptStruct Landscape.LandscapeTexture2DMipMap
// Size: 0x38 (Inherited: 0x00)
struct FLandscapeTexture2DMipMap {
	int32_t SizeX; // 0x00(0x04)
	int32_t SizeY; // 0x04(0x04)
	bool bCompressed; // 0x08(0x01)
	char pad_9[0x2f]; // 0x09(0x2f)
};

// ScriptStruct Landscape.PhysicalMaterialInput
// Size: 0x38 (Inherited: 0x00)
struct FPhysicalMaterialInput {
	struct UPhysicalMaterial* PhysicalMaterial; // 0x00(0x08)
	struct FExpressionInput Input; // 0x08(0x30)
};

