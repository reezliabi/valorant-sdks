// Enum HoudiniEngineRuntime.EHoudiniStaticMeshMethod
enum class EHoudiniStaticMeshMethod : uint8 {
	RawMesh = 0,
	FMeshDescription = 1,
	UHoudiniStaticMesh = 2,
	EHoudiniStaticMeshMethod_MAX = 3
};

// Enum HoudiniEngineRuntime.EHoudiniAssetState
enum class EHoudiniAssetState : uint8 {
	NeedInstantiation = 0,
	NewHDA = 1,
	PreInstantiation = 2,
	Instantiating = 3,
	PreCook = 4,
	Cooking = 5,
	PostCook = 6,
	PreProcess = 7,
	Processing = 8,
	None = 9,
	NeedRebuild = 10,
	NeedDelete = 11,
	Deleting = 12,
	ProcessTemplate = 13,
	EHoudiniAssetState_MAX = 14
};

// Enum HoudiniEngineRuntime.EHoudiniAssetStateResult
enum class EHoudiniAssetStateResult : uint8 {
	None = 0,
	Working = 1,
	Success = 2,
	FinishedWithError = 3,
	FinishedWithFatalError = 4,
	Aborted = 5,
	EHoudiniAssetStateResult_MAX = 6
};

// Enum HoudiniEngineRuntime.EHoudiniRampInterpolationType
enum class EHoudiniRampInterpolationType : int32 {
	InValid = -1,
	CONSTANT = 0,
	LINEAR = 1,
	CATMULL_ROM = 2,
	MONOTONE_CUBIC = 3,
	BEZIER = 4,
	BSPLINE = 5,
	HERMITE = 6,
	EHoudiniRampInterpolationType_MAX = 7
};

// Enum HoudiniEngineRuntime.EHoudiniLandscapeOutputBakeType
enum class EHoudiniLandscapeOutputBakeType : uint8 {
	Detachment = 0,
	BakeToImage = 1,
	BakeToWorld = 2,
	InValid = 3,
	EHoudiniLandscapeOutputBakeType_MAX = 4
};

// Enum HoudiniEngineRuntime.EHoudiniInputType
enum class EHoudiniInputType : uint8 {
	Invalid = 0,
	Geometry = 1,
	Curve = 2,
	Asset = 3,
	Landscape = 4,
	World = 5,
	Skeletal = 6,
	GeometryCollection = 7,
	EHoudiniInputType_MAX = 8
};

// Enum HoudiniEngineRuntime.EHoudiniOutputType
enum class EHoudiniOutputType : uint8 {
	Invalid = 0,
	Mesh = 1,
	Instancer = 2,
	Landscape = 3,
	Curve = 4,
	Skeletal = 5,
	GeometryCollection = 6,
	DataTable = 7,
	LandscapeSpline = 8,
	EHoudiniOutputType_MAX = 9
};

// Enum HoudiniEngineRuntime.EHoudiniCurveType
enum class EHoudiniCurveType : int32 {
	Invalid = -1,
	Polygon = 0,
	Nurbs = 1,
	Bezier = 2,
	Points = 3,
	EHoudiniCurveType_MAX = 4
};

// Enum HoudiniEngineRuntime.EHoudiniCurveMethod
enum class EHoudiniCurveMethod : int32 {
	Invalid = -1,
	CVs = 0,
	Breakpoints = 1,
	Freehand = 2,
	EHoudiniCurveMethod_MAX = 3
};

// Enum HoudiniEngineRuntime.EHoudiniCurveBreakpointParameterization
enum class EHoudiniCurveBreakpointParameterization : int32 {
	Invalid = -1,
	Uniform = 0,
	Chord = 1,
	Centripetal = 2,
	EHoudiniCurveBreakpointParameterization_MAX = 3
};

// Enum HoudiniEngineRuntime.EHoudiniLandscapeExportType
enum class EHoudiniLandscapeExportType : uint8 {
	Heightfield = 0,
	Mesh = 1,
	Points = 2,
	EHoudiniLandscapeExportType_MAX = 3
};

// Enum HoudiniEngineRuntime.EHoudiniProxyRefineResult
enum class EHoudiniProxyRefineResult : uint8 {
	Invalid = 0,
	Failed = 1,
	Success = 2,
	Skipped = 3,
	EHoudiniProxyRefineResult_MAX = 4
};

// Enum HoudiniEngineRuntime.EHoudiniProxyRefineRequestResult
enum class EHoudiniProxyRefineRequestResult : uint8 {
	Invalid = 0,
	None = 1,
	PendingCooks = 2,
	Refined = 3,
	EHoudiniProxyRefineRequestResult_MAX = 4
};

// Enum HoudiniEngineRuntime.EAttribStorageType
enum class EAttribStorageType : int32 {
	Invalid = -1,
	INT = 0,
	INT64 = 1,
	FLOAT = 2,
	FLOAT64 = 3,
	STRING = 4,
	EAttribStorageType_MAX = 5
};

// Enum HoudiniEngineRuntime.EAttribOwner
enum class EAttribOwner : int32 {
	Invalid = -1,
	Vertex = 0,
	Point = 1,
	Prim = 2,
	Detail = 3,
	EAttribOwner_MAX = 4
};

// Enum HoudiniEngineRuntime.EHoudiniGeoType
enum class EHoudiniGeoType : uint8 {
	Invalid = 0,
	Default = 1,
	Intermediate = 2,
	Input = 3,
	Curve = 4,
	EHoudiniGeoType_MAX = 5
};

// Enum HoudiniEngineRuntime.EHoudiniPartType
enum class EHoudiniPartType : uint8 {
	Invalid = 0,
	Mesh = 1,
	Instancer = 2,
	Curve = 3,
	Volume = 4,
	DataTable = 5,
	LandscapeSpline = 6,
	EHoudiniPartType_MAX = 7
};

// Enum HoudiniEngineRuntime.EHoudiniInstancerType
enum class EHoudiniInstancerType : uint8 {
	Invalid = 0,
	ObjectInstancer = 1,
	PackedPrimitive = 2,
	AttributeInstancer = 3,
	OldSchoolAttributeInstancer = 4,
	GeometryCollection = 5,
	EHoudiniInstancerType_MAX = 6
};

// Enum HoudiniEngineRuntime.EXformParameter
enum class EXformParameter : uint8 {
	TX = 0,
	TY = 1,
	TZ = 2,
	RX = 3,
	RY = 4,
	RZ = 5,
	SX = 6,
	SY = 7,
	SZ = 8,
	COUNT = 9,
	EXformParameter_MAX = 10
};

// Enum HoudiniEngineRuntime.EHoudiniHandleType
enum class EHoudiniHandleType : uint8 {
	Xform = 0,
	Bounder = 1,
	Unsupported = 2,
	EHoudiniHandleType_MAX = 3
};

// Enum HoudiniEngineRuntime.EHoudiniInputObjectType
enum class EHoudiniInputObjectType : uint8 {
	Invalid = 0,
	Object = 1,
	StaticMesh = 2,
	SkeletalMesh = 3,
	SceneComponent = 4,
	StaticMeshComponent = 5,
	InstancedStaticMeshComponent = 6,
	SplineComponent = 7,
	HoudiniSplineComponent = 8,
	HoudiniAssetComponent = 9,
	Actor = 10,
	Landscape = 11,
	Brush = 12,
	CameraComponent = 13,
	DataTable = 14,
	HoudiniAssetActor = 15,
	FoliageType_InstancedStaticMesh = 16,
	GeometryCollection = 17,
	GeometryCollectionComponent = 18,
	GeometryCollectionActor_Deprecated = 19,
	SkeletalMeshComponent = 20,
	Blueprint = 21,
	LandscapeSplineActor = 22,
	LandscapeSplinesComponent = 23,
	SplineMeshComponent = 24,
	LevelInstance = 25,
	EHoudiniInputObjectType_MAX = 26
};

// Enum HoudiniEngineRuntime.EHoudiniXformType
enum class EHoudiniXformType : uint8 {
	None = 0,
	IntoThisObject = 1,
	Auto = 2,
	EHoudiniXformType_MAX = 3
};

// Enum HoudiniEngineRuntime.EHoudiniCurveOutputType
enum class EHoudiniCurveOutputType : uint8 {
	UnrealSpline = 0,
	HoudiniSpline = 1,
	EHoudiniCurveOutputType_MAX = 2
};

// Enum HoudiniEngineRuntime.EHoudiniParameterType
enum class EHoudiniParameterType : uint8 {
	Invalid = 0,
	Button = 1,
	ButtonStrip = 2,
	Color = 3,
	ColorRamp = 4,
	File = 5,
	FileDir = 6,
	FileGeo = 7,
	FileImage = 8,
	Float = 9,
	FloatRamp = 10,
	Folder = 11,
	FolderList = 12,
	Input = 13,
	Int = 14,
	IntChoice = 15,
	Label = 16,
	MultiParm = 17,
	Separator = 18,
	String = 19,
	StringChoice = 20,
	StringAssetRef = 21,
	Toggle = 22,
	EHoudiniParameterType_MAX = 23
};

// Enum HoudiniEngineRuntime.EHoudiniFolderParameterType
enum class EHoudiniFolderParameterType : uint8 {
	Invalid = 0,
	Collapsible = 1,
	Simple = 2,
	Tabs = 3,
	Radio = 4,
	Other = 5,
	EHoudiniFolderParameterType_MAX = 6
};

// Enum HoudiniEngineRuntime.EHoudiniMultiParmModificationType
enum class EHoudiniMultiParmModificationType : uint8 {
	None = 0,
	Inserted = 1,
	Removed = 2,
	Modified = 3,
	EHoudiniMultiParmModificationType_MAX = 4
};

// Enum HoudiniEngineRuntime.EHoudiniRampPointConstructStatus
enum class EHoudiniRampPointConstructStatus : uint8 {
	None = 0,
	INITIALIZED = 1,
	POSITION_INSERTED = 2,
	VALUE_INSERTED = 3,
	INTERPTYPE_INSERTED = 4,
	EHoudiniRampPointConstructStatus_MAX = 5
};

// Enum HoudiniEngineRuntime.EPDGLinkState
enum class EPDGLinkState : uint8 {
	Inactive = 0,
	Linking = 1,
	Linked = 2,
	Error_Not_Linked = 3,
	EPDGLinkState_MAX = 4
};

// Enum HoudiniEngineRuntime.EPDGNodeState
enum class EPDGNodeState : uint8 {
	None = 0,
	Dirtied = 1,
	Dirtying = 2,
	Cooking = 3,
	Cook_Complete = 4,
	Cook_Failed = 5,
	EPDGNodeState_MAX = 6
};

// Enum HoudiniEngineRuntime.EPDGWorkResultState
enum class EPDGWorkResultState : uint8 {
	None = 0,
	ToLoad = 1,
	Loading = 2,
	Loaded = 3,
	ToDelete = 4,
	Deleting = 5,
	Deleted = 6,
	NotLoaded = 7,
	EPDGWorkResultState_MAX = 8
};

// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsSessionType
enum class EHoudiniRuntimeSettingsSessionType : uint8 {
	HRSST_InProcess = 0,
	HRSST_Socket = 1,
	HRSST_NamedPipe = 2,
	HRSST_None = 3,
	HRSST_MAX = 4
};

// Enum HoudiniEngineRuntime.EHoudiniRuntimeSettingsRecomputeFlag
enum class EHoudiniRuntimeSettingsRecomputeFlag : uint8 {
	HRSRF_Always = 0,
	HRSRF_OnlyIfMissing = 1,
	HRSRF_Never = 2,
	HRSRF_MAX = 3
};

// Enum HoudiniEngineRuntime.EHoudiniExecutableType
enum class EHoudiniExecutableType : uint8 {
	HRSHE_Houdini = 0,
	HRSHE_HoudiniFX = 1,
	HRSHE_HoudiniCore = 2,
	HRSHE_HoudiniIndie = 3,
	HRSHE_MAX = 4
};

// ScriptStruct HoudiniEngineRuntime.HoudiniAssetBlueprintOutput
// Size: 0x170 (Inherited: 0x00)
struct FHoudiniAssetBlueprintOutput {
	int32_t OutputIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FHoudiniOutputObject OutputObject; // 0x08(0x168)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniOutputObject
// Size: 0x168 (Inherited: 0x00)
struct FHoudiniOutputObject {
	struct UObject* OutputObject; // 0x00(0x08)
	struct TArray<struct UObject*> OutputComponents; // 0x08(0x10)
	struct TArray<struct TSoftObjectPtr<AActor>> OutputActors; // 0x18(0x10)
	struct UObject* OutputComponent; // 0x28(0x08)
	struct UObject* ProxyObject; // 0x30(0x08)
	struct UObject* ProxyComponent; // 0x38(0x08)
	bool bProxyIsCurrent; // 0x40(0x01)
	bool bIsImplicit; // 0x41(0x01)
	bool bIsGeometryCollectionPiece; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
	struct FString GeometryCollectionPieceName; // 0x48(0x10)
	struct FString BakeName; // 0x58(0x10)
	struct FHoudiniCurveOutputProperties CurveOutputProperty; // 0x68(0x0c)
	char pad_74[0x4]; // 0x74(0x04)
	struct TMap<struct FString, struct FString> CachedAttributes; // 0x78(0x50)
	struct TMap<struct FString, struct FString> CachedTokens; // 0xc8(0x50)
	struct UObject* UserFoliageType; // 0x118(0x08)
	struct UFoliageType* FoliageType; // 0x120(0x08)
	struct UWorld* World; // 0x128(0x08)
	struct TArray<struct FHoudiniDataLayer> DataLayers; // 0x130(0x10)
	struct TArray<struct FHoudiniHLODLayer> HLODLayers; // 0x140(0x10)
	struct FHoudiniLevelInstanceParams LevelInstanceParams; // 0x150(0x18)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniLevelInstanceParams
// Size: 0x18 (Inherited: 0x00)
struct FHoudiniLevelInstanceParams {
	enum class ELevelInstanceCreationType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString OutputName; // 0x08(0x10)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniHLODLayer
// Size: 0x10 (Inherited: 0x00)
struct FHoudiniHLODLayer {
	struct FString Name; // 0x00(0x10)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniDataLayer
// Size: 0x18 (Inherited: 0x00)
struct FHoudiniDataLayer {
	struct FString Name; // 0x00(0x10)
	bool bCreateIfNeeded; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniCurveOutputProperties
// Size: 0x0c (Inherited: 0x00)
struct FHoudiniCurveOutputProperties {
	enum class EHoudiniCurveOutputType CurveOutputType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t NumPoints; // 0x04(0x04)
	bool bClosed; // 0x08(0x01)
	enum class EHoudiniCurveType CurveType; // 0x09(0x01)
	enum class EHoudiniCurveMethod CurveMethod; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniAssetBlueprintInstanceData
// Size: 0x120 (Inherited: 0x68)
struct FHoudiniAssetBlueprintInstanceData : FActorComponentInstanceData {
	struct UHoudiniAsset* HoudiniAsset; // 0x68(0x08)
	int32_t AssetID; // 0x70(0x04)
	enum class EHoudiniAssetState AssetState; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	uint32_t SubAssetIndex; // 0x78(0x04)
	uint32_t AssetCookCount; // 0x7c(0x04)
	bool bHasBeenLoaded; // 0x80(0x01)
	bool bHasBeenDuplicated; // 0x81(0x01)
	bool bPendingDelete; // 0x82(0x01)
	bool bRecookRequested; // 0x83(0x01)
	bool bRebuildRequested; // 0x84(0x01)
	bool bEnableCooking; // 0x85(0x01)
	bool bForceNeedUpdate; // 0x86(0x01)
	bool bLastCookSuccess; // 0x87(0x01)
	struct FGuid ComponentGUID; // 0x88(0x10)
	struct FGuid HapiGUID; // 0x98(0x10)
	bool bRegisteredComponentTemplate; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FString SourceName; // 0xb0(0x10)
	struct TMap<struct FHoudiniOutputObjectIdentifier, struct FHoudiniAssetBlueprintOutput> Outputs; // 0xc0(0x50)
	struct TArray<struct UHoudiniInput*> Inputs; // 0x110(0x10)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniOutputObjectIdentifier
// Size: 0x40 (Inherited: 0x00)
struct FHoudiniOutputObjectIdentifier {
	int32_t ObjectId; // 0x00(0x04)
	int32_t GeoId; // 0x04(0x04)
	int32_t PartId; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString SplitIdentifier; // 0x10(0x10)
	struct FString PartName; // 0x20(0x10)
	int32_t PrimitiveIndex; // 0x30(0x04)
	int32_t PointIndex; // 0x34(0x04)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniGenericAttributeChangedProperty
// Size: 0x98 (Inherited: 0x00)
struct FHoudiniGenericAttributeChangedProperty {
	struct UObject* Object; // 0x00(0x08)
	char pad_8[0x90]; // 0x08(0x90)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniGenericAttribute
// Size: 0x50 (Inherited: 0x00)
struct FHoudiniGenericAttribute {
	struct FString AttributeName; // 0x00(0x10)
	enum class EAttribStorageType AttributeType; // 0x10(0x01)
	enum class EAttribOwner AttributeOwner; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t AttributeCount; // 0x14(0x04)
	int32_t AttributeTupleSize; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<double> DoubleValues; // 0x20(0x10)
	struct TArray<int64_t> IntValues; // 0x30(0x10)
	struct TArray<struct FString> StringValues; // 0x40(0x10)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniObjectInfo
// Size: 0x28 (Inherited: 0x00)
struct FHoudiniObjectInfo {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniGeoInfo
// Size: 0x30 (Inherited: 0x00)
struct FHoudiniGeoInfo {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniPartInfo
// Size: 0x48 (Inherited: 0x00)
struct FHoudiniPartInfo {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniVolumeInfo
// Size: 0xb0 (Inherited: 0x00)
struct FHoudiniVolumeInfo {
	char pad_0[0xb0]; // 0x00(0xb0)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniCurveInfo
// Size: 0x1c (Inherited: 0x00)
struct FHoudiniCurveInfo {
	char pad_0[0x1c]; // 0x00(0x1c)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniMeshSocket
// Size: 0x90 (Inherited: 0x00)
struct FHoudiniMeshSocket {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniGeoPartObject
// Size: 0x290 (Inherited: 0x00)
struct FHoudiniGeoPartObject {
	int32_t AssetID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString AssetName; // 0x08(0x10)
	int32_t ObjectId; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString ObjectName; // 0x20(0x10)
	int32_t GeoId; // 0x30(0x04)
	int32_t PartId; // 0x34(0x04)
	struct FString PartName; // 0x38(0x10)
	bool bHasCustomPartName; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct FString> SplitGroups; // 0x50(0x10)
	struct FTransform TransformMatrix; // 0x60(0x60)
	struct FString NodePath; // 0xc0(0x10)
	enum class EHoudiniPartType Type; // 0xd0(0x01)
	enum class EHoudiniInstancerType InstancerType; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)
	struct FString VolumeName; // 0xd8(0x10)
	bool bHasEditLayers; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct FString VolumeLayerName; // 0xf0(0x10)
	int32_t VolumeTileIndex; // 0x100(0x04)
	bool bIsVisible; // 0x104(0x01)
	bool bIsEditable; // 0x105(0x01)
	bool bIsTemplated; // 0x106(0x01)
	bool bIsInstanced; // 0x107(0x01)
	bool bHasGeoChanged; // 0x108(0x01)
	bool bHasPartChanged; // 0x109(0x01)
	bool bHasTransformChanged; // 0x10a(0x01)
	bool bHasMaterialsChanged; // 0x10b(0x01)
	char pad_10C[0x174]; // 0x10c(0x174)
	struct TArray<struct FHoudiniMeshSocket> AllMeshSockets; // 0x280(0x10)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniBrushInfo
// Size: 0xb0 (Inherited: 0x00)
struct FHoudiniBrushInfo {
	struct TWeakObjectPtr<struct ABrush> BrushActor; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform CachedTransform; // 0x10(0x60)
	struct FVector CachedOrigin; // 0x70(0x18)
	struct FVector CachedExtent; // 0x88(0x18)
	enum class EBrushType CachedBrushType; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	uint64_t CachedSurfaceHash; // 0xa8(0x08)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniLandscapeSplineControlPointData
// Size: 0x38 (Inherited: 0x00)
struct FHoudiniLandscapeSplineControlPointData {
	struct FVector Location; // 0x00(0x18)
	struct FRotator Rotation; // 0x18(0x18)
	float Width; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniLandscapeSplineSegmentData
// Size: 0x01 (Inherited: 0x00)
struct FHoudiniLandscapeSplineSegmentData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniInputObjectSettings
// Size: 0x20 (Inherited: 0x00)
struct FHoudiniInputObjectSettings {
	enum class EHoudiniXformType KeepWorldTransform; // 0x00(0x01)
	bool bImportAsReference; // 0x01(0x01)
	bool bImportAsReferenceRotScaleEnabled; // 0x02(0x01)
	bool bImportAsReferenceBboxEnabled; // 0x03(0x01)
	bool bImportAsReferenceMaterialEnabled; // 0x04(0x01)
	bool bExportLODs; // 0x05(0x01)
	bool bExportSockets; // 0x06(0x01)
	bool bPreferNaniteFallbackMesh; // 0x07(0x01)
	bool bExportColliders; // 0x08(0x01)
	bool bExportMaterialParameters; // 0x09(0x01)
	bool bAddRotAndScaleAttributesOnCurves; // 0x0a(0x01)
	bool bUseLegacyInputCurves; // 0x0b(0x01)
	float UnrealSplineResolution; // 0x0c(0x04)
	enum class EHoudiniLandscapeExportType LandscapeExportType; // 0x10(0x01)
	bool bLandscapeExportSelectionOnly; // 0x11(0x01)
	bool bLandscapeAutoSelectComponent; // 0x12(0x01)
	bool bLandscapeExportMaterials; // 0x13(0x01)
	bool bLandscapeExportLighting; // 0x14(0x01)
	bool bLandscapeExportNormalizedUVs; // 0x15(0x01)
	bool bLandscapeExportTileUVs; // 0x16(0x01)
	bool bLandscapeAutoSelectSplines; // 0x17(0x01)
	bool bLandscapeSplinesExportControlPoints; // 0x18(0x01)
	bool bLandscapeSplinesExportLeftRightCurves; // 0x19(0x01)
	bool bLandscapeSplinesExportSplineMeshComponents; // 0x1a(0x01)
	bool bMergeSplineMeshComponents; // 0x1b(0x01)
	bool bExportPerEditLayerData; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniExtents
// Size: 0x10 (Inherited: 0x00)
struct FHoudiniExtents {
	struct FIntPoint Min; // 0x00(0x08)
	struct FIntPoint Max; // 0x08(0x08)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniClearedTargetLayer
// Size: 0x50 (Inherited: 0x00)
struct FHoudiniClearedTargetLayer {
	struct TSet<struct FString> TargetLayers; // 0x00(0x50)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniClearedEditLayers
// Size: 0x50 (Inherited: 0x00)
struct FHoudiniClearedEditLayers {
	struct TMap<struct FString, struct FHoudiniClearedTargetLayer> EditLayers; // 0x00(0x50)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutputObjectIdentifier
// Size: 0x18 (Inherited: 0x00)
struct FHoudiniBakedOutputObjectIdentifier {
	int32_t PartId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString SplitIdentifier; // 0x08(0x10)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniInstancedOutput
// Size: 0x90 (Inherited: 0x00)
struct FHoudiniInstancedOutput {
	struct TSoftObjectPtr<UObject> OriginalObject; // 0x00(0x30)
	int32_t OriginalObjectIndex; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FTransform> OriginalTransforms; // 0x38(0x10)
	struct TArray<struct TSoftObjectPtr<UObject>> VariationObjects; // 0x48(0x10)
	struct TArray<struct FTransform> VariationTransformOffsets; // 0x58(0x10)
	struct TArray<int32_t> TransformVariationIndices; // 0x68(0x10)
	struct TArray<int32_t> OriginalInstanceIndices; // 0x78(0x10)
	bool bChanged; // 0x88(0x01)
	bool bStale; // 0x89(0x01)
	char pad_8A[0x6]; // 0x8a(0x06)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutputObject
// Size: 0xf8 (Inherited: 0x00)
struct FHoudiniBakedOutputObject {
	struct FString Actor; // 0x00(0x10)
	struct FString Blueprint; // 0x10(0x10)
	struct FName ActorBakeName; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString BakedObject; // 0x30(0x10)
	struct FString BakedComponent; // 0x40(0x10)
	struct TArray<struct FString> InstancedActors; // 0x50(0x10)
	struct TArray<struct FString> InstancedComponents; // 0x60(0x10)
	struct TMap<struct FName, struct FString> LandscapeLayers; // 0x70(0x50)
	struct TArray<struct FVector> FoliageInstancePositions; // 0xc0(0x10)
	struct UFoliageType* FoliageType; // 0xd0(0x08)
	struct TArray<struct FString> LevelInstanceActors; // 0xd8(0x10)
	struct FString Landscape; // 0xe8(0x10)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniBakedOutput
// Size: 0x50 (Inherited: 0x00)
struct FHoudiniBakedOutput {
	struct TMap<struct FHoudiniBakedOutputObjectIdentifier, struct FHoudiniBakedOutputObject> BakedOutputObjects; // 0x00(0x50)
};

// ScriptStruct HoudiniEngineRuntime.OutputActorOwner
// Size: 0x10 (Inherited: 0x00)
struct FOutputActorOwner {
	char pad_0[0x8]; // 0x00(0x08)
	struct AActor* OutputActor; // 0x08(0x08)
};

// ScriptStruct HoudiniEngineRuntime.TOPWorkResultObject
// Size: 0x58 (Inherited: 0x00)
struct FTOPWorkResultObject {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString Name; // 0x08(0x10)
	struct FString FilePath; // 0x18(0x10)
	enum class EPDGWorkResultState State; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t WorkItemResultInfoIndex; // 0x2c(0x04)
	struct TArray<struct UHoudiniOutput*> ResultOutputs; // 0x30(0x10)
	bool bAutoBakedSinceLastLoad; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct FOutputActorOwner OutputActorOwner; // 0x48(0x10)
};

// ScriptStruct HoudiniEngineRuntime.TOPWorkResult
// Size: 0x18 (Inherited: 0x00)
struct FTOPWorkResult {
	int32_t WorkItemIndex; // 0x00(0x04)
	int32_t WorkItemID; // 0x04(0x04)
	struct TArray<struct FTOPWorkResultObject> ResultObjects; // 0x08(0x10)
};

// ScriptStruct HoudiniEngineRuntime.WorkItemTallyBase
// Size: 0x08 (Inherited: 0x00)
struct FWorkItemTallyBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct HoudiniEngineRuntime.WorkItemTally
// Size: 0x238 (Inherited: 0x08)
struct FWorkItemTally : FWorkItemTallyBase {
	struct TSet<int32_t> AllWorkItems; // 0x08(0x50)
	struct TSet<int32_t> WaitingWorkItems; // 0x58(0x50)
	struct TSet<int32_t> ScheduledWorkItems; // 0xa8(0x50)
	struct TSet<int32_t> CookingWorkItems; // 0xf8(0x50)
	struct TSet<int32_t> CookedWorkItems; // 0x148(0x50)
	struct TSet<int32_t> ErroredWorkItems; // 0x198(0x50)
	struct TSet<int32_t> CookCancelledWorkItems; // 0x1e8(0x50)
};

// ScriptStruct HoudiniEngineRuntime.AggregatedWorkItemTally
// Size: 0x28 (Inherited: 0x08)
struct FAggregatedWorkItemTally : FWorkItemTallyBase {
	int32_t TotalWorkItems; // 0x08(0x04)
	int32_t WaitingWorkItems; // 0x0c(0x04)
	int32_t ScheduledWorkItems; // 0x10(0x04)
	int32_t CookingWorkItems; // 0x14(0x04)
	int32_t CookedWorkItems; // 0x18(0x04)
	int32_t ErroredWorkItems; // 0x1c(0x04)
	int32_t CookCancelledWorkItems; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniPDGWorkResultObjectBakedOutput
// Size: 0x10 (Inherited: 0x00)
struct FHoudiniPDGWorkResultObjectBakedOutput {
	struct TArray<struct FHoudiniBakedOutput> BakedOutputs; // 0x00(0x10)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniStaticMeshGenerationProperties
// Size: 0x1e0 (Inherited: 0x00)
struct FHoudiniStaticMeshGenerationProperties {
	char bGeneratedDoubleSidedGeometry : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UPhysicalMaterial* GeneratedPhysMaterial; // 0x08(0x08)
	struct FBodyInstance DefaultBodyInstance; // 0x10(0x190)
	enum class ECollisionTraceFlag GeneratedCollisionTraceFlag; // 0x1a0(0x01)
	char pad_1A1[0x3]; // 0x1a1(0x03)
	int32_t GeneratedLightMapResolution; // 0x1a4(0x04)
	struct FWalkableSlopeOverride GeneratedWalkableSlopeOverride; // 0x1a8(0x10)
	int32_t GeneratedLightMapCoordinateIndex; // 0x1b8(0x04)
	char bGeneratedUseMaximumStreamingTexelRatio : 1; // 0x1bc(0x01)
	char pad_1BC_1 : 7; // 0x1bc(0x01)
	char pad_1BD[0x3]; // 0x1bd(0x03)
	float GeneratedStreamingDistanceMultiplier; // 0x1c0(0x04)
	char pad_1C4[0x4]; // 0x1c4(0x04)
	struct UFoliageType_InstancedStaticMesh* GeneratedFoliageDefaultSettings; // 0x1c8(0x08)
	struct TArray<struct UAssetUserData*> GeneratedAssetUserData; // 0x1d0(0x10)
};

// ScriptStruct HoudiniEngineRuntime.HoudiniSplineComponentInstanceData
// Size: 0x98 (Inherited: 0x68)
struct FHoudiniSplineComponentInstanceData : FActorComponentInstanceData {
	struct TArray<struct FTransform> CurvePoints; // 0x68(0x10)
	struct TArray<struct FVector> DisplayPoints; // 0x78(0x10)
	struct TArray<int32_t> DisplayPointIndexDivider; // 0x88(0x10)
};

