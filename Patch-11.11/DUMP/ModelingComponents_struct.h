// Enum ModelingComponents.EBakeTextureResolution
enum class EBakeTextureResolution : int32 {
	Resolution16 = 16,
	Resolution32 = 32,
	Resolution64 = 64,
	Resolution128 = 128,
	Resolution256 = 256,
	Resolution512 = 512,
	Resolution1024 = 1024,
	Resolution2048 = 2048,
	Resolution4096 = 4096,
	Resolution8192 = 8192,
	EBakeTextureResolution_MAX = 8193
};

// Enum ModelingComponents.EBakeTextureBitDepth
enum class EBakeTextureBitDepth : uint8 {
	ChannelBits8 = 0,
	ChannelBits16 = 1,
	EBakeTextureBitDepth_MAX = 2
};

// Enum ModelingComponents.EBakeTextureSamplesPerPixel
enum class EBakeTextureSamplesPerPixel : int32 {
	Sample1 = 1,
	Sample4 = 4,
	Sample16 = 16,
	Sample64 = 64,
	Sample256 = 256,
	EBakeTextureSamplesPerPixel_MAX = 257
};

// Enum ModelingComponents.EGeometrySelectionElementType
enum class EGeometrySelectionElementType : uint8 {
	Vertex = 1,
	Edge = 2,
	Face = 4,
	EGeometrySelectionElementType_MAX = 5
};

// Enum ModelingComponents.EGeometrySelectionTopologyType
enum class EGeometrySelectionTopologyType : uint8 {
	Triangle = 1,
	Polygroup = 2,
	EGeometrySelectionTopologyType_MAX = 3
};

// Enum ModelingComponents.EBaseCreateFromSelectedTargetType
enum class EBaseCreateFromSelectedTargetType : uint8 {
	NewObject = 0,
	FirstInputObject = 1,
	LastInputObject = 2,
	EBaseCreateFromSelectedTargetType_MAX = 3
};

// Enum ModelingComponents.EUVLayoutPreviewSide
enum class EUVLayoutPreviewSide : uint8 {
	Left = 0,
	Right = 1,
	EUVLayoutPreviewSide_MAX = 2
};

// Enum ModelingComponents.ESpaceCurveControlPointTransformMode
enum class ESpaceCurveControlPointTransformMode : uint8 {
	Shared = 0,
	PerVertex = 1,
	ESpaceCurveControlPointTransformMode_MAX = 2
};

// Enum ModelingComponents.ESpaceCurveControlPointOriginMode
enum class ESpaceCurveControlPointOriginMode : uint8 {
	Shared = 0,
	First = 1,
	Last = 2,
	ESpaceCurveControlPointOriginMode_MAX = 3
};

// Enum ModelingComponents.ESpaceCurveControlPointFalloffType
enum class ESpaceCurveControlPointFalloffType : uint8 {
	Linear = 0,
	Smooth = 1,
	ESpaceCurveControlPointFalloffType_MAX = 2
};

// Enum ModelingComponents.EModelingComponentsPlaneVisualizationMode
enum class EModelingComponentsPlaneVisualizationMode : uint8 {
	SimpleGrid = 0,
	HierarchicalGrid = 1,
	FixedScreenAreaGrid = 2,
	EModelingComponentsPlaneVisualizationMode_MAX = 3
};

// Enum ModelingComponents.ECreateModelingObjectResult
enum class ECreateModelingObjectResult : uint8 {
	Ok = 0,
	Cancelled = 1,
	Failed_Unknown = 2,
	Failed_NoAPIFound = 3,
	Failed_InvalidWorld = 4,
	Failed_InvalidMesh = 5,
	Failed_InvalidTexture = 6,
	Failed_AssetCreationFailed = 7,
	Failed_ActorCreationFailed = 8,
	Failed_InvalidMaterial = 9,
	ECreateModelingObjectResult_MAX = 10
};

// Enum ModelingComponents.ECreateMeshObjectSourceMeshType
enum class ECreateMeshObjectSourceMeshType : uint8 {
	MeshDescription = 0,
	DynamicMesh = 1,
	ECreateMeshObjectSourceMeshType_MAX = 2
};

// Enum ModelingComponents.ECreateObjectTypeHint
enum class ECreateObjectTypeHint : uint8 {
	Undefined = 0,
	StaticMesh = 1,
	Volume = 2,
	DynamicMeshActor = 3,
	ECreateObjectTypeHint_MAX = 4
};

// Enum ModelingComponents.EHandleSourcesMethod
enum class EHandleSourcesMethod : uint8 {
	DeleteSources = 0,
	HideSources = 1,
	KeepSources = 2,
	KeepFirstSource = 3,
	KeepLastSource = 4,
	EHandleSourcesMethod_MAX = 5
};

// Enum ModelingComponents.EMultiTransformerMode
enum class EMultiTransformerMode : uint8 {
	DefaultGizmo = 1,
	QuickAxisTranslation = 2,
	EMultiTransformerMode_MAX = 3
};

// ScriptStruct ModelingComponents.ModelingToolsAxisFilter
// Size: 0x03 (Inherited: 0x00)
struct FModelingToolsAxisFilter {
	bool bAxisX; // 0x00(0x01)
	bool bAxisY; // 0x01(0x01)
	bool bAxisZ; // 0x02(0x01)
};

// ScriptStruct ModelingComponents.ModelingToolsColorChannelFilter
// Size: 0x04 (Inherited: 0x00)
struct FModelingToolsColorChannelFilter {
	bool bRed; // 0x00(0x01)
	bool bGreen; // 0x01(0x01)
	bool bBlue; // 0x02(0x01)
	bool bAlpha; // 0x03(0x01)
};

// ScriptStruct ModelingComponents.RenderableTriangleVertex
// Size: 0x48 (Inherited: 0x00)
struct FRenderableTriangleVertex {
	struct FVector Position; // 0x00(0x18)
	struct FVector2D UV; // 0x18(0x10)
	struct FVector Normal; // 0x28(0x18)
	struct FColor Color; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ModelingComponents.RenderableTriangle
// Size: 0xe0 (Inherited: 0x00)
struct FRenderableTriangle {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct FRenderableTriangleVertex Vertex0; // 0x08(0x48)
	struct FRenderableTriangleVertex Vertex1; // 0x50(0x48)
	struct FRenderableTriangleVertex Vertex2; // 0x98(0x48)
};

// ScriptStruct ModelingComponents.CreateMeshObjectParams
// Size: 0x670 (Inherited: 0x00)
struct FCreateMeshObjectParams {
	struct UPrimitiveComponent* SourceComponent; // 0x00(0x08)
	enum class ECreateObjectTypeHint TypeHint; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	ClassPtrProperty TypeHintClass; // 0x10(0x08)
	int32_t TypeHintExtended; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UWorld* TargetWorld; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
	struct FTransform Transform; // 0x30(0x60)
	struct FString BaseName; // 0x90(0x10)
	struct TArray<struct UMaterialInterface*> Materials; // 0xa0(0x10)
	struct TArray<struct UMaterialInterface*> AssetMaterials; // 0xb0(0x10)
	bool bEnableCollision; // 0xc0(0x01)
	enum class ECollisionTraceFlag CollisionMode; // 0xc1(0x01)
	char pad_C2[0x5e]; // 0xc2(0x5e)
	bool bEnableRaytracingSupport; // 0x120(0x01)
	bool bGenerateLightmapUVs; // 0x121(0x01)
	bool bEnableRecomputeNormals; // 0x122(0x01)
	bool bEnableRecomputeTangents; // 0x123(0x01)
	bool bEnableNanite; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	float NaniteProxyTrianglePercent; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct FMeshNaniteSettings NaniteSettings; // 0x130(0x40)
	char pad_170[0x500]; // 0x170(0x500)
};

// ScriptStruct ModelingComponents.CreateMeshObjectResult
// Size: 0x20 (Inherited: 0x00)
struct FCreateMeshObjectResult {
	enum class ECreateModelingObjectResult ResultCode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AActor* NewActor; // 0x08(0x08)
	struct UPrimitiveComponent* NewComponent; // 0x10(0x08)
	struct UObject* NewAsset; // 0x18(0x08)
};

// ScriptStruct ModelingComponents.CreateTextureObjectParams
// Size: 0x30 (Inherited: 0x00)
struct FCreateTextureObjectParams {
	int32_t TypeHintExtended; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UWorld* TargetWorld; // 0x08(0x08)
	struct UObject* StoreRelativeToObject; // 0x10(0x08)
	struct FString BaseName; // 0x18(0x10)
	struct UTexture2D* GeneratedTransientTexture; // 0x28(0x08)
};

// ScriptStruct ModelingComponents.CreateTextureObjectResult
// Size: 0x10 (Inherited: 0x00)
struct FCreateTextureObjectResult {
	enum class ECreateModelingObjectResult ResultCode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UObject* NewAsset; // 0x08(0x08)
};

// ScriptStruct ModelingComponents.CreateMaterialObjectParams
// Size: 0x28 (Inherited: 0x00)
struct FCreateMaterialObjectParams {
	struct UWorld* TargetWorld; // 0x00(0x08)
	struct UObject* StoreRelativeToObject; // 0x08(0x08)
	struct FString BaseName; // 0x10(0x10)
	struct UMaterialInterface* MaterialToDuplicate; // 0x20(0x08)
};

// ScriptStruct ModelingComponents.CreateMaterialObjectResult
// Size: 0x10 (Inherited: 0x00)
struct FCreateMaterialObjectResult {
	enum class ECreateModelingObjectResult ResultCode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UObject* NewAsset; // 0x08(0x08)
};

// ScriptStruct ModelingComponents.CreateActorParams
// Size: 0x90 (Inherited: 0x00)
struct FCreateActorParams {
	struct UWorld* TargetWorld; // 0x00(0x08)
	struct FString BaseName; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform Transform; // 0x20(0x60)
	struct AActor* TemplateActor; // 0x80(0x08)
	char pad_88[0x8]; // 0x88(0x08)
};

// ScriptStruct ModelingComponents.CreateActorResult
// Size: 0x10 (Inherited: 0x00)
struct FCreateActorResult {
	enum class ECreateModelingObjectResult ResultCode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AActor* NewActor; // 0x08(0x08)
};

