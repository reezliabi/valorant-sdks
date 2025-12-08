// Enum GeometryScriptingCore.EGeometryScriptOutcomePins
enum class EGeometryScriptOutcomePins : uint8 {
	Failure = 0,
	Success = 1,
	EGeometryScriptOutcomePins_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptSearchOutcomePins
enum class EGeometryScriptSearchOutcomePins : uint8 {
	Found = 0,
	NotFound = 1,
	EGeometryScriptSearchOutcomePins_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptContainmentOutcomePins
enum class EGeometryScriptContainmentOutcomePins : uint8 {
	Inside = 0,
	Outside = 1,
	EGeometryScriptContainmentOutcomePins_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptLODType
enum class EGeometryScriptLODType : uint8 {
	MaxAvailable = 0,
	HiResSourceModel = 1,
	SourceModel = 2,
	RenderData = 3,
	EGeometryScriptLODType_MAX = 4
};

// Enum GeometryScriptingCore.EGeometryScriptAxis
enum class EGeometryScriptAxis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	EGeometryScriptAxis_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptIndexType
enum class EGeometryScriptIndexType : uint8 {
	Any = 0,
	Triangle = 1,
	Vertex = 2,
	MaterialID = 3,
	PolygroupID = 4,
	EGeometryScriptIndexType_MAX = 5
};

// Enum GeometryScriptingCore.EGeometryScriptDebugMessageType
enum class EGeometryScriptDebugMessageType : uint8 {
	ErrorMessage = 0,
	WarningMessage = 1,
	EGeometryScriptDebugMessageType_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptErrorType
enum class EGeometryScriptErrorType : uint8 {
	NoError = 0,
	UnknownError = 1,
	InvalidInputs = 2,
	OperationFailed = 3,
	EGeometryScriptErrorType_MAX = 4
};

// Enum GeometryScriptingCore.EGeometryScriptCollisionGenerationMethod
enum class EGeometryScriptCollisionGenerationMethod : uint8 {
	AlignedBoxes = 0,
	OrientedBoxes = 1,
	MinimalSpheres = 2,
	Capsules = 3,
	ConvexHulls = 4,
	SweptHulls = 5,
	MinVolumeShapes = 6,
	EGeometryScriptCollisionGenerationMethod_MAX = 7
};

// Enum GeometryScriptingCore.EGeometryScriptSweptHullAxis
enum class EGeometryScriptSweptHullAxis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	SmallestBoxDimension = 3,
	SmallestVolume = 4,
	EGeometryScriptSweptHullAxis_MAX = 5
};

// Enum GeometryScriptingCore.EGeometryScriptMeshSelectionType
enum class EGeometryScriptMeshSelectionType : uint8 {
	Vertices = 0,
	Triangles = 1,
	Polygroups = 2,
	EGeometryScriptMeshSelectionType_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptMeshSelectionConversionType
enum class EGeometryScriptMeshSelectionConversionType : uint8 {
	NoConversion = 0,
	ToVertices = 1,
	ToTriangles = 2,
	ToPolygroups = 3,
	EGeometryScriptMeshSelectionConversionType_MAX = 4
};

// Enum GeometryScriptingCore.EGeometryScriptCombineSelectionMode
enum class EGeometryScriptCombineSelectionMode : uint8 {
	Add = 0,
	Subtract = 1,
	Intersection = 2,
	EGeometryScriptCombineSelectionMode_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptEmptySelectionBehavior
enum class EGeometryScriptEmptySelectionBehavior : uint8 {
	FullMeshSelection = 0,
	EmptySelection = 1,
	EGeometryScriptEmptySelectionBehavior_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptBakeResolution
enum class EGeometryScriptBakeResolution : uint8 {
	Resolution16 = 0,
	Resolution32 = 1,
	Resolution64 = 2,
	Resolution128 = 3,
	Resolution256 = 4,
	Resolution512 = 5,
	Resolution1024 = 6,
	Resolution2048 = 7,
	Resolution4096 = 8,
	Resolution8192 = 9,
	EGeometryScriptBakeResolution_MAX = 10
};

// Enum GeometryScriptingCore.EGeometryScriptBakeBitDepth
enum class EGeometryScriptBakeBitDepth : uint8 {
	ChannelBits8 = 0,
	ChannelBits16 = 1,
	EGeometryScriptBakeBitDepth_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptBakeSamplesPerPixel
enum class EGeometryScriptBakeSamplesPerPixel : uint8 {
	Sample1 = 0,
	Sample4 = 1,
	Sample16 = 2,
	Sample64 = 3,
	Samples256 = 4,
	EGeometryScriptBakeSamplesPerPixel_MAX = 5
};

// Enum GeometryScriptingCore.EGeometryScriptBakeFilteringType
enum class EGeometryScriptBakeFilteringType : uint8 {
	BSpline = 0,
	Box = 1,
	EGeometryScriptBakeFilteringType_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptBakeTypes
enum class EGeometryScriptBakeTypes : uint8 {
	TangentSpaceNormal = 0,
	ObjectSpaceNormal = 1,
	FaceNormal = 2,
	BentNormal = 3,
	Position = 4,
	Curvature = 5,
	AmbientOcclusion = 6,
	Texture = 7,
	MultiTexture = 8,
	VertexColor = 9,
	MaterialID = 10,
	EGeometryScriptBakeTypes_MAX = 11
};

// Enum GeometryScriptingCore.EGeometryScriptBakeOutputMode
enum class EGeometryScriptBakeOutputMode : uint8 {
	RGBA = 0,
	PerChannel = 1,
	EGeometryScriptBakeOutputMode_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptBakeNormalSpace
enum class EGeometryScriptBakeNormalSpace : uint8 {
	Tangent = 0,
	Object = 1,
	EGeometryScriptBakeNormalSpace_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptBakeCurvatureTypeMode
enum class EGeometryScriptBakeCurvatureTypeMode : uint8 {
	Mean = 0,
	Max = 1,
	Min = 2,
	Gaussian = 3,
	EGeometryScriptBakeCurvatureTypeMode_MAX = 4
};

// Enum GeometryScriptingCore.EGeometryScriptBakeCurvatureColorMode
enum class EGeometryScriptBakeCurvatureColorMode : uint8 {
	Grayscale = 0,
	RedBlue = 1,
	RedGreenBlue = 2,
	EGeometryScriptBakeCurvatureColorMode_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptBakeCurvatureClampMode
enum class EGeometryScriptBakeCurvatureClampMode : uint8 {
	None = 0,
	OnlyPositive = 1,
	OnlyNegative = 2,
	EGeometryScriptBakeCurvatureClampMode_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptCombineAttributesMode
enum class EGeometryScriptCombineAttributesMode : uint8 {
	EnableAllMatching = 0,
	UseTarget = 1,
	UseSource = 2,
	EGeometryScriptCombineAttributesMode_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptSmoothBoneWeightsType
enum class EGeometryScriptSmoothBoneWeightsType : uint8 {
	DirectDistance = 0,
	GeodesicVoxel = 1,
	EGeometryScriptSmoothBoneWeightsType_MAX = 2
};

// Enum GeometryScriptingCore.ETransferBoneWeightsMethod
enum class ETransferBoneWeightsMethod : uint8 {
	ClosestPointOnSurface = 0,
	InpaintWeights = 1,
	ETransferBoneWeightsMethod_MAX = 2
};

// Enum GeometryScriptingCore.EOutputTargetMeshBones
enum class EOutputTargetMeshBones : uint8 {
	SourceBones = 0,
	TargetBones = 1,
	EOutputTargetMeshBones_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptBooleanOperation
enum class EGeometryScriptBooleanOperation : uint8 {
	Union = 0,
	Intersection = 1,
	Subtract = 2,
	EGeometryScriptBooleanOperation_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptFlareType
enum class EGeometryScriptFlareType : uint8 {
	SinMode = 0,
	SinSquaredMode = 1,
	TriangleMode = 2,
	EGeometryScriptFlareType_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptMathWarpType
enum class EGeometryScriptMathWarpType : uint8 {
	SinWave1D = 0,
	SinWave2D = 1,
	SinWave3D = 2,
	EGeometryScriptMathWarpType_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptMeshEditPolygroupMode
enum class EGeometryScriptMeshEditPolygroupMode : uint8 {
	PreserveExisting = 0,
	AutoGenerateNew = 1,
	SetConstant = 2,
	EGeometryScriptMeshEditPolygroupMode_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptPolyOperationArea
enum class EGeometryScriptPolyOperationArea : uint8 {
	EntireSelection = 0,
	PerPolygroup = 1,
	PerTriangle = 2,
	EGeometryScriptPolyOperationArea_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptLinearExtrudeDirection
enum class EGeometryScriptLinearExtrudeDirection : uint8 {
	FixedDirection = 0,
	AverageFaceNormal = 1,
	EGeometryScriptLinearExtrudeDirection_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptOffsetFacesType
enum class EGeometryScriptOffsetFacesType : uint8 {
	VertexNormal = 0,
	FaceNormal = 1,
	ParallelFaceOffset = 2,
	EGeometryScriptOffsetFacesType_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptMeshBevelSelectionMode
enum class EGeometryScriptMeshBevelSelectionMode : uint8 {
	TriangleArea = 0,
	AllPolygroupEdges = 1,
	SharedPolygroupEdges = 2,
	EGeometryScriptMeshBevelSelectionMode_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptTangentTypes
enum class EGeometryScriptTangentTypes : uint8 {
	FastMikkT = 0,
	PerTriangle = 1,
	EGeometryScriptTangentTypes_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptPrimitivePolygroupMode
enum class EGeometryScriptPrimitivePolygroupMode : uint8 {
	SingleGroup = 0,
	PerFace = 1,
	PerQuad = 2,
	EGeometryScriptPrimitivePolygroupMode_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptPrimitiveOriginMode
enum class EGeometryScriptPrimitiveOriginMode : uint8 {
	Center = 0,
	Base = 1,
	EGeometryScriptPrimitiveOriginMode_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptPrimitiveUVMode
enum class EGeometryScriptPrimitiveUVMode : uint8 {
	Uniform = 0,
	ScaleToFill = 1,
	EGeometryScriptPrimitiveUVMode_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptPolygonFillMode
enum class EGeometryScriptPolygonFillMode : uint8 {
	All = 0,
	Solid = 1,
	PositiveWinding = 2,
	NonZeroWinding = 3,
	NegativeWinding = 4,
	OddWinding = 5,
	EGeometryScriptPolygonFillMode_MAX = 6
};

// Enum GeometryScriptingCore.EGeometryScriptUniformRemeshTargetType
enum class EGeometryScriptUniformRemeshTargetType : uint8 {
	TriangleCount = 0,
	TargetEdgeLength = 1,
	EGeometryScriptUniformRemeshTargetType_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptRemeshEdgeConstraintType
enum class EGeometryScriptRemeshEdgeConstraintType : uint8 {
	Fixed = 0,
	Refine = 1,
	Free = 2,
	Ignore = 3,
	EGeometryScriptRemeshEdgeConstraintType_MAX = 4
};

// Enum GeometryScriptingCore.EGeometryScriptRemeshSmoothingType
enum class EGeometryScriptRemeshSmoothingType : uint8 {
	Uniform = 0,
	UVPreserving = 1,
	Mixed = 2,
	EGeometryScriptRemeshSmoothingType_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptFillHolesMethod
enum class EGeometryScriptFillHolesMethod : uint8 {
	Automatic = 0,
	MinimalFill = 1,
	PolygonTriangulation = 2,
	TriangleFan = 3,
	PlanarProjection = 4,
	EGeometryScriptFillHolesMethod_MAX = 5
};

// Enum GeometryScriptingCore.EGeometryScriptRemoveHiddenTrianglesMethod
enum class EGeometryScriptRemoveHiddenTrianglesMethod : uint8 {
	FastWindingNumber = 0,
	RaycastOcclusionTest = 1,
	EGeometryScriptRemoveHiddenTrianglesMethod_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptRepairMeshMode
enum class EGeometryScriptRepairMeshMode : uint8 {
	DeleteOnly = 0,
	RepairOrDelete = 1,
	RepairOrSkip = 2,
	EGeometryScriptRepairMeshMode_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptSamplingWeightMode
enum class EGeometryScriptSamplingWeightMode : uint8 {
	WeightToRadius = 0,
	FilledWeightToRadius = 1,
	WeightedRandom = 2,
	EGeometryScriptSamplingWeightMode_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptSamplingDistributionMode
enum class EGeometryScriptSamplingDistributionMode : uint8 {
	Uniform = 0,
	Smaller = 1,
	Larger = 2,
	EGeometryScriptSamplingDistributionMode_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptTopologyConnectionType
enum class EGeometryScriptTopologyConnectionType : uint8 {
	Geometric = 0,
	Polygroup = 1,
	MaterialID = 2,
	EGeometryScriptTopologyConnectionType_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptRemoveMeshSimplificationType
enum class EGeometryScriptRemoveMeshSimplificationType : uint8 {
	StandardQEM = 0,
	VolumePreserving = 1,
	AttributeAware = 2,
	EGeometryScriptRemoveMeshSimplificationType_MAX = 3
};

// Enum GeometryScriptingCore.ESelectiveTessellatePatternType
enum class ESelectiveTessellatePatternType : uint8 {
	ConcentricRings = 0,
	ESelectiveTessellatePatternType_MAX = 1
};

// Enum GeometryScriptingCore.EGeometryScriptUVFlattenMethod
enum class EGeometryScriptUVFlattenMethod : uint8 {
	ExpMap = 0,
	Conformal = 1,
	SpectralConformal = 2,
	EGeometryScriptUVFlattenMethod_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptUVIslandSource
enum class EGeometryScriptUVIslandSource : uint8 {
	PolyGroups = 0,
	UVIslands = 1,
	EGeometryScriptUVIslandSource_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptBlurColorMode
enum class EGeometryScriptBlurColorMode : uint8 {
	Uniform = 0,
	EdgeLength = 1,
	CotanWeights = 2,
	EGeometryScriptBlurColorMode_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptGridSizingMethod
enum class EGeometryScriptGridSizingMethod : uint8 {
	GridCellSize = 0,
	GridResolution = 1,
	EGeometryScriptGridSizingMethod_MAX = 2
};

// Enum GeometryScriptingCore.EGeometryScriptMorphologicalOpType
enum class EGeometryScriptMorphologicalOpType : uint8 {
	Dilate = 0,
	Contract = 1,
	Close = 2,
	Open = 3,
	EGeometryScriptMorphologicalOpType_MAX = 4
};

// Enum GeometryScriptingCore.EGeometryScriptPolyOffsetJoinType
enum class EGeometryScriptPolyOffsetJoinType : uint8 {
	Square = 0,
	Round = 1,
	Miter = 2,
	EGeometryScriptPolyOffsetJoinType_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptPathOffsetEndType
enum class EGeometryScriptPathOffsetEndType : uint8 {
	Butt = 0,
	Square = 1,
	Round = 2,
	EGeometryScriptPathOffsetEndType_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptSampleSpacing
enum class EGeometryScriptSampleSpacing : uint8 {
	UniformDistance = 0,
	UniformTime = 1,
	ErrorTolerance = 2,
	EGeometryScriptSampleSpacing_MAX = 3
};

// Enum GeometryScriptingCore.EGeometryScriptPixelSamplingMethod
enum class EGeometryScriptPixelSamplingMethod : uint8 {
	Bilinear = 0,
	Nearest = 1,
	EGeometryScriptPixelSamplingMethod_MAX = 2
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshReadLOD
// Size: 0x08 (Inherited: 0x00)
struct FGeometryScriptMeshReadLOD {
	enum class EGeometryScriptLODType LODType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t LODIndex; // 0x04(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshWriteLOD
// Size: 0x08 (Inherited: 0x00)
struct FGeometryScriptMeshWriteLOD {
	bool bWriteHiResSource; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t LODIndex; // 0x04(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptTriangle
// Size: 0x48 (Inherited: 0x00)
struct FGeometryScriptTriangle {
	struct FVector Vector0; // 0x00(0x18)
	struct FVector Vector1; // 0x18(0x18)
	struct FVector Vector2; // 0x30(0x18)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptTrianglePoint
// Size: 0x38 (Inherited: 0x00)
struct FGeometryScriptTrianglePoint {
	bool bValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t TriangleID; // 0x04(0x04)
	struct FVector Position; // 0x08(0x18)
	struct FVector BaryCoords; // 0x20(0x18)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptUVTriangle
// Size: 0x30 (Inherited: 0x00)
struct FGeometryScriptUVTriangle {
	struct FVector2D UV0; // 0x00(0x10)
	struct FVector2D UV1; // 0x10(0x10)
	struct FVector2D UV2; // 0x20(0x10)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptColorFlags
// Size: 0x04 (Inherited: 0x00)
struct FGeometryScriptColorFlags {
	bool bRed; // 0x00(0x01)
	bool bGreen; // 0x01(0x01)
	bool bBlue; // 0x02(0x01)
	bool bAlpha; // 0x03(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptGroupLayer
// Size: 0x08 (Inherited: 0x00)
struct FGeometryScriptGroupLayer {
	bool bDefaultLayer; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ExtendedLayerIndex; // 0x04(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptIndexList
// Size: 0x18 (Inherited: 0x00)
struct FGeometryScriptIndexList {
	enum class EGeometryScriptIndexType IndexType; // 0x00(0x01)
	char pad_1[0x17]; // 0x01(0x17)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptTriangleList
// Size: 0x10 (Inherited: 0x00)
struct FGeometryScriptTriangleList {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptScalarList
// Size: 0x10 (Inherited: 0x00)
struct FGeometryScriptScalarList {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptVectorList
// Size: 0x10 (Inherited: 0x00)
struct FGeometryScriptVectorList {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptUVList
// Size: 0x10 (Inherited: 0x00)
struct FGeometryScriptUVList {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptColorList
// Size: 0x10 (Inherited: 0x00)
struct FGeometryScriptColorList {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptPolyPath
// Size: 0x18 (Inherited: 0x00)
struct FGeometryScriptPolyPath {
	char pad_0[0x10]; // 0x00(0x10)
	bool bClosedLoop; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptSimplePolygon
// Size: 0x10 (Inherited: 0x00)
struct FGeometryScriptSimplePolygon {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptGeneralPolygonList
// Size: 0x10 (Inherited: 0x00)
struct FGeometryScriptGeneralPolygonList {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptDynamicMeshBVH
// Size: 0x20 (Inherited: 0x00)
struct FGeometryScriptDynamicMeshBVH {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptDebugMessage
// Size: 0x20 (Inherited: 0x00)
struct FGeometryScriptDebugMessage {
	enum class EGeometryScriptDebugMessageType MessageType; // 0x00(0x01)
	enum class EGeometryScriptErrorType ErrorType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FText Message; // 0x08(0x18)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptCollisionFromMeshOptions
// Size: 0x30 (Inherited: 0x00)
struct FGeometryScriptCollisionFromMeshOptions {
	bool bEmitTransaction; // 0x00(0x01)
	enum class EGeometryScriptCollisionGenerationMethod Method; // 0x01(0x01)
	bool bAutoDetectSpheres; // 0x02(0x01)
	bool bAutoDetectBoxes; // 0x03(0x01)
	bool bAutoDetectCapsules; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float MinThickness; // 0x08(0x04)
	bool bSimplifyHulls; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t ConvexHullTargetFaceCount; // 0x10(0x04)
	int32_t MaxConvexHullsPerMesh; // 0x14(0x04)
	float ConvexDecompositionSearchFactor; // 0x18(0x04)
	float ConvexDecompositionErrorTolerance; // 0x1c(0x04)
	float ConvexDecompositionMinPartThickness; // 0x20(0x04)
	float SweptHullSimplifyTolerance; // 0x24(0x04)
	enum class EGeometryScriptSweptHullAxis SweptHullAxis; // 0x28(0x01)
	bool bRemoveFullyContainedShapes; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	int32_t MaxShapeCount; // 0x2c(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptSetSimpleCollisionOptions
// Size: 0x01 (Inherited: 0x00)
struct FGeometryScriptSetSimpleCollisionOptions {
	bool bEmitTransaction; // 0x00(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptConvexHullOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptConvexHullOptions {
	bool bPrefilterVertices; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t PrefilterGridResolution; // 0x04(0x04)
	int32_t SimplifyToFaceCount; // 0x08(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptSweptHullOptions
// Size: 0x18 (Inherited: 0x00)
struct FGeometryScriptSweptHullOptions {
	bool bPrefilterVertices; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t PrefilterGridResolution; // 0x04(0x04)
	float MinThickness; // 0x08(0x04)
	bool bSimplify; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float MinEdgeLength; // 0x10(0x04)
	float SimplifyTolerance; // 0x14(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptConvexDecompositionOptions
// Size: 0x28 (Inherited: 0x00)
struct FGeometryScriptConvexDecompositionOptions {
	int32_t NumHulls; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	double SearchFactor; // 0x08(0x08)
	double ErrorTolerance; // 0x10(0x08)
	double MinPartThickness; // 0x18(0x08)
	int32_t SimplifyToFaceCount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshSelection
// Size: 0x10 (Inherited: 0x00)
struct FGeometryScriptMeshSelection {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptCopyMeshFromAssetOptions
// Size: 0x03 (Inherited: 0x00)
struct FGeometryScriptCopyMeshFromAssetOptions {
	bool bApplyBuildSettings; // 0x00(0x01)
	bool bRequestTangents; // 0x01(0x01)
	bool bIgnoreRemoveDegenerates; // 0x02(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptNaniteOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptNaniteOptions {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FallbackPercentTriangles; // 0x04(0x04)
	float FallbackRelativeError; // 0x08(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptCopyMeshToAssetOptions
// Size: 0x80 (Inherited: 0x00)
struct FGeometryScriptCopyMeshToAssetOptions {
	bool bEnableRecomputeNormals; // 0x00(0x01)
	bool bEnableRecomputeTangents; // 0x01(0x01)
	bool bEnableRemoveDegenerates; // 0x02(0x01)
	bool bReplaceMaterials; // 0x03(0x01)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct UMaterialInterface*> NewMaterials; // 0x08(0x10)
	struct TArray<struct FName> NewMaterialSlotNames; // 0x18(0x10)
	bool bApplyNaniteSettings; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FGeometryScriptNaniteOptions NaniteSettings; // 0x2c(0x0c)
	struct FMeshNaniteSettings NewNaniteSettings; // 0x38(0x40)
	bool bEmitTransaction; // 0x78(0x01)
	bool bDeferMeshPostEditChange; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptBakeTypeOptions
// Size: 0x18 (Inherited: 0x00)
struct FGeometryScriptBakeTypeOptions {
	enum class EGeometryScriptBakeTypes BakeType; // 0x00(0x01)
	char pad_1[0x17]; // 0x01(0x17)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptBakeTextureOptions
// Size: 0x20 (Inherited: 0x00)
struct FGeometryScriptBakeTextureOptions {
	enum class EGeometryScriptBakeResolution Resolution; // 0x00(0x01)
	enum class EGeometryScriptBakeBitDepth BitDepth; // 0x01(0x01)
	enum class EGeometryScriptBakeSamplesPerPixel SamplesPerPixel; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct UTexture2D* SampleFilterMask; // 0x08(0x08)
	enum class EGeometryScriptBakeFilteringType FilteringType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float ProjectionDistance; // 0x14(0x04)
	bool bProjectionInWorldSpace; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptBakeVertexOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptBakeVertexOptions {
	bool bSplitAtNormalSeams; // 0x00(0x01)
	bool bSplitAtUVSeams; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float ProjectionDistance; // 0x04(0x04)
	bool bProjectionInWorldSpace; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptBakeOutputType
// Size: 0x80 (Inherited: 0x00)
struct FGeometryScriptBakeOutputType {
	enum class EGeometryScriptBakeOutputMode OutputMode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FGeometryScriptBakeTypeOptions RGBA; // 0x08(0x18)
	struct FGeometryScriptBakeTypeOptions R; // 0x20(0x18)
	struct FGeometryScriptBakeTypeOptions G; // 0x38(0x18)
	struct FGeometryScriptBakeTypeOptions B; // 0x50(0x18)
	struct FGeometryScriptBakeTypeOptions A; // 0x68(0x18)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptBakeTargetMeshOptions
// Size: 0x04 (Inherited: 0x00)
struct FGeometryScriptBakeTargetMeshOptions {
	int32_t TargetUVLayer; // 0x00(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptBakeSourceMeshOptions
// Size: 0x10 (Inherited: 0x00)
struct FGeometryScriptBakeSourceMeshOptions {
	struct UTexture2D* SourceNormalMap; // 0x00(0x08)
	int32_t SourceNormalUVLayer; // 0x08(0x04)
	enum class EGeometryScriptBakeNormalSpace SourceNormalSpace; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptBakeRenderCaptureOptions
// Size: 0x28 (Inherited: 0x00)
struct FGeometryScriptBakeRenderCaptureOptions {
	enum class EGeometryScriptBakeResolution Resolution; // 0x00(0x01)
	enum class EGeometryScriptBakeResolution RenderCaptureResolution; // 0x01(0x01)
	enum class EGeometryScriptBakeSamplesPerPixel SamplesPerPixel; // 0x02(0x01)
	bool bRenderCaptureAntiAliasing; // 0x03(0x01)
	float CleanupTolerance; // 0x04(0x04)
	bool bBaseColorMap; // 0x08(0x01)
	bool bNormalMap; // 0x09(0x01)
	bool bPackedMRSMap; // 0x0a(0x01)
	bool bMetallicMap; // 0x0b(0x01)
	bool bRoughnessMap; // 0x0c(0x01)
	bool bSpecularMap; // 0x0d(0x01)
	bool bEmissiveMap; // 0x0e(0x01)
	bool bOpacityMap; // 0x0f(0x01)
	bool bSubsurfaceColorMap; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	double FieldOfViewDegrees; // 0x18(0x08)
	double NearPlaneDist; // 0x20(0x08)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptRenderCaptureTextures
// Size: 0x90 (Inherited: 0x00)
struct FGeometryScriptRenderCaptureTextures {
	struct UTexture2D* BaseColorMap; // 0x00(0x08)
	bool bHasBaseColorMap; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct UTexture2D* NormalMap; // 0x10(0x08)
	bool bHasNormalMap; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UTexture2D* PackedMRSMap; // 0x20(0x08)
	bool bHasPackedMRSMap; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct UTexture2D* MetallicMap; // 0x30(0x08)
	bool bHasMetallicMap; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UTexture2D* RoughnessMap; // 0x40(0x08)
	bool bHasRoughnessMap; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct UTexture2D* SpecularMap; // 0x50(0x08)
	bool bHasSpecularMap; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct UTexture2D* EmissiveMap; // 0x60(0x08)
	bool bHasEmissiveMap; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct UTexture2D* OpacityMap; // 0x70(0x08)
	bool bHasOpacityMap; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct UTexture2D* SubsurfaceColorMap; // 0x80(0x08)
	bool bHasSubsurfaceColorMap; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptSimpleMeshBuffers
// Size: 0xd0 (Inherited: 0x00)
struct FGeometryScriptSimpleMeshBuffers {
	struct TArray<struct FVector> Vertices; // 0x00(0x10)
	struct TArray<struct FVector> Normals; // 0x10(0x10)
	struct TArray<struct FVector2D> UV0; // 0x20(0x10)
	struct TArray<struct FVector2D> UV1; // 0x30(0x10)
	struct TArray<struct FVector2D> UV2; // 0x40(0x10)
	struct TArray<struct FVector2D> UV3; // 0x50(0x10)
	struct TArray<struct FVector2D> UV4; // 0x60(0x10)
	struct TArray<struct FVector2D> UV5; // 0x70(0x10)
	struct TArray<struct FVector2D> UV6; // 0x80(0x10)
	struct TArray<struct FVector2D> UV7; // 0x90(0x10)
	struct TArray<struct FLinearColor> VertexColors; // 0xa0(0x10)
	struct TArray<struct FIntVector> Triangles; // 0xb0(0x10)
	struct TArray<int32_t> TriGroupIDs; // 0xc0(0x10)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptAppendMeshOptions
// Size: 0x01 (Inherited: 0x00)
struct FGeometryScriptAppendMeshOptions {
	enum class EGeometryScriptCombineAttributesMode CombineMode; // 0x00(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptBoneWeight
// Size: 0x08 (Inherited: 0x00)
struct FGeometryScriptBoneWeight {
	int32_t BoneIndex; // 0x00(0x04)
	float Weight; // 0x04(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptBoneWeightProfile
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptBoneWeightProfile {
	struct FName ProfileName; // 0x00(0x0c)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptSmoothBoneWeightsOptions
// Size: 0x10 (Inherited: 0x00)
struct FGeometryScriptSmoothBoneWeightsOptions {
	enum class EGeometryScriptSmoothBoneWeightsType DistanceWeighingType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Stiffness; // 0x04(0x04)
	int32_t MaxInfluences; // 0x08(0x04)
	int32_t VoxelResolution; // 0x0c(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptTransferBoneWeightsOptions
// Size: 0x48 (Inherited: 0x00)
struct FGeometryScriptTransferBoneWeightsOptions {
	enum class ETransferBoneWeightsMethod TransferMethod; // 0x00(0x01)
	enum class EOutputTargetMeshBones OutputTargetMeshBones; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FGeometryScriptBoneWeightProfile SourceProfile; // 0x04(0x0c)
	struct FGeometryScriptBoneWeightProfile TargetProfile; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	double RadiusPercentage; // 0x20(0x08)
	double NormalThreshold; // 0x28(0x08)
	bool LayeredMeshSupport; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t NumSmoothingIterations; // 0x34(0x04)
	float SmoothingStrength; // 0x38(0x04)
	struct FName InpaintMask; // 0x3c(0x0c)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptBoneInfo
// Size: 0xf0 (Inherited: 0x00)
struct FGeometryScriptBoneInfo {
	int32_t Index; // 0x00(0x04)
	struct FName Name; // 0x04(0x0c)
	int32_t ParentIndex; // 0x10(0x04)
	char pad_14[0xc]; // 0x14(0x0c)
	struct FTransform LocalTransform; // 0x20(0x60)
	struct FTransform WorldTransform; // 0x80(0x60)
	struct FLinearColor Color; // 0xe0(0x10)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshBooleanOptions
// Size: 0x08 (Inherited: 0x00)
struct FGeometryScriptMeshBooleanOptions {
	bool bFillHoles; // 0x00(0x01)
	bool bSimplifyOutput; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float SimplifyPlanarTolerance; // 0x04(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshSelfUnionOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptMeshSelfUnionOptions {
	bool bFillHoles; // 0x00(0x01)
	bool bTrimFlaps; // 0x01(0x01)
	bool bSimplifyOutput; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float SimplifyPlanarTolerance; // 0x04(0x04)
	float WindingThreshold; // 0x08(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshPlaneCutOptions
// Size: 0x08 (Inherited: 0x00)
struct FGeometryScriptMeshPlaneCutOptions {
	bool bFillHoles; // 0x00(0x01)
	bool bFillSpans; // 0x01(0x01)
	bool bFlipCutSide; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float UVWorldDimension; // 0x04(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshPlaneSliceOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptMeshPlaneSliceOptions {
	bool bFillHoles; // 0x00(0x01)
	bool bFillSpans; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float GapWidth; // 0x04(0x04)
	float UVWorldDimension; // 0x08(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshMirrorOptions
// Size: 0x03 (Inherited: 0x00)
struct FGeometryScriptMeshMirrorOptions {
	bool bApplyPlaneCut; // 0x00(0x01)
	bool bFlipCutSide; // 0x01(0x01)
	bool bWeldAlongPlane; // 0x02(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptIsSameMeshOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptIsSameMeshOptions {
	bool bCheckConnectivity; // 0x00(0x01)
	bool bCheckEdgeIDs; // 0x01(0x01)
	bool bCheckNormals; // 0x02(0x01)
	bool bCheckColors; // 0x03(0x01)
	bool bCheckUVs; // 0x04(0x01)
	bool bCheckGroups; // 0x05(0x01)
	bool bCheckAttributes; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	float Epsilon; // 0x08(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeasureMeshDistanceOptions
// Size: 0x01 (Inherited: 0x00)
struct FGeometryScriptMeasureMeshDistanceOptions {
	bool bSymmetric; // 0x00(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptBendWarpOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptBendWarpOptions {
	bool bSymmetricExtents; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LowerExtent; // 0x04(0x04)
	bool bBidirectional; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptTwistWarpOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptTwistWarpOptions {
	bool bSymmetricExtents; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LowerExtent; // 0x04(0x04)
	bool bBidirectional; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptFlareWarpOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptFlareWarpOptions {
	bool bSymmetricExtents; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LowerExtent; // 0x04(0x04)
	enum class EGeometryScriptFlareType FlareType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptPerlinNoiseLayerOptions
// Size: 0x28 (Inherited: 0x00)
struct FGeometryScriptPerlinNoiseLayerOptions {
	float Magnitude; // 0x00(0x04)
	float Frequency; // 0x04(0x04)
	struct FVector FrequencyShift; // 0x08(0x18)
	int32_t RandomSeed; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMathWarpOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptMathWarpOptions {
	float Magnitude; // 0x00(0x04)
	float Frequency; // 0x04(0x04)
	float FrequencyShift; // 0x08(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptPerlinNoiseOptions
// Size: 0x30 (Inherited: 0x00)
struct FGeometryScriptPerlinNoiseOptions {
	struct FGeometryScriptPerlinNoiseLayerOptions BaseLayer; // 0x00(0x28)
	bool bApplyAlongNormal; // 0x28(0x01)
	enum class EGeometryScriptEmptySelectionBehavior EmptyBehavior; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptIterativeMeshSmoothingOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptIterativeMeshSmoothingOptions {
	int32_t NumIterations; // 0x00(0x04)
	float Alpha; // 0x04(0x04)
	enum class EGeometryScriptEmptySelectionBehavior EmptyBehavior; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptDisplaceFromTextureOptions
// Size: 0x38 (Inherited: 0x00)
struct FGeometryScriptDisplaceFromTextureOptions {
	float Magnitude; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector2D UVScale; // 0x08(0x10)
	struct FVector2D UVOffset; // 0x18(0x10)
	float Center; // 0x28(0x04)
	int32_t ImageChannel; // 0x2c(0x04)
	enum class EGeometryScriptEmptySelectionBehavior EmptyBehavior; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshEditPolygroupOptions
// Size: 0x08 (Inherited: 0x00)
struct FGeometryScriptMeshEditPolygroupOptions {
	enum class EGeometryScriptMeshEditPolygroupMode GroupMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ConstantGroup; // 0x04(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshOffsetOptions
// Size: 0x18 (Inherited: 0x00)
struct FGeometryScriptMeshOffsetOptions {
	float OffsetDistance; // 0x00(0x04)
	bool bFixedBoundary; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t SolveSteps; // 0x08(0x04)
	float SmoothAlpha; // 0x0c(0x04)
	bool bReprojectDuringSmoothing; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float BoundaryAlpha; // 0x14(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshExtrudeOptions
// Size: 0x28 (Inherited: 0x00)
struct FGeometryScriptMeshExtrudeOptions {
	float ExtrudeDistance; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector ExtrudeDirection; // 0x08(0x18)
	float UVScale; // 0x20(0x04)
	bool bSolidsToShells; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshLinearExtrudeOptions
// Size: 0x38 (Inherited: 0x00)
struct FGeometryScriptMeshLinearExtrudeOptions {
	float Distance; // 0x00(0x04)
	enum class EGeometryScriptLinearExtrudeDirection DirectionMode; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FVector Direction; // 0x08(0x18)
	enum class EGeometryScriptPolyOperationArea AreaMode; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FGeometryScriptMeshEditPolygroupOptions GroupOptions; // 0x24(0x08)
	float UVScale; // 0x2c(0x04)
	bool bSolidsToShells; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshOffsetFacesOptions
// Size: 0x18 (Inherited: 0x00)
struct FGeometryScriptMeshOffsetFacesOptions {
	float Distance; // 0x00(0x04)
	enum class EGeometryScriptOffsetFacesType OffsetType; // 0x04(0x01)
	enum class EGeometryScriptPolyOperationArea AreaMode; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FGeometryScriptMeshEditPolygroupOptions GroupOptions; // 0x08(0x08)
	float UVScale; // 0x10(0x04)
	bool bSolidsToShells; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshInsetOutsetFacesOptions
// Size: 0x20 (Inherited: 0x00)
struct FGeometryScriptMeshInsetOutsetFacesOptions {
	float Distance; // 0x00(0x04)
	bool bReproject; // 0x04(0x01)
	bool bBoundaryOnly; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float Softness; // 0x08(0x04)
	float AreaScale; // 0x0c(0x04)
	enum class EGeometryScriptPolyOperationArea AreaMode; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FGeometryScriptMeshEditPolygroupOptions GroupOptions; // 0x14(0x08)
	float UVScale; // 0x1c(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshBevelOptions
// Size: 0xc0 (Inherited: 0x00)
struct FGeometryScriptMeshBevelOptions {
	float BevelDistance; // 0x00(0x04)
	bool bInferMaterialID; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t SetMaterialID; // 0x08(0x04)
	bool bApplyFilterBox; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FBox FilterBox; // 0x10(0x38)
	char pad_48[0x8]; // 0x48(0x08)
	struct FTransform FilterBoxTransform; // 0x50(0x60)
	bool bFullyContained; // 0xb0(0x01)
	char pad_B1[0xf]; // 0xb1(0x0f)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshBevelSelectionOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptMeshBevelSelectionOptions {
	float BevelDistance; // 0x00(0x04)
	bool bInferMaterialID; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t SetMaterialID; // 0x08(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptCalculateNormalsOptions
// Size: 0x02 (Inherited: 0x00)
struct FGeometryScriptCalculateNormalsOptions {
	bool bAngleWeighted; // 0x00(0x01)
	bool bAreaWeighted; // 0x01(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptSplitNormalsOptions
// Size: 0x14 (Inherited: 0x00)
struct FGeometryScriptSplitNormalsOptions {
	bool bSplitByOpeningAngle; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float OpeningAngleDeg; // 0x04(0x04)
	bool bSplitByFaceGroup; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FGeometryScriptGroupLayer GroupLayer; // 0x0c(0x08)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptTangentsOptions
// Size: 0x08 (Inherited: 0x00)
struct FGeometryScriptTangentsOptions {
	enum class EGeometryScriptTangentTypes Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t UVLayer; // 0x04(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptPrimitiveOptions
// Size: 0x03 (Inherited: 0x00)
struct FGeometryScriptPrimitiveOptions {
	enum class EGeometryScriptPrimitivePolygroupMode PolygroupMode; // 0x00(0x01)
	bool bFlipOrientation; // 0x01(0x01)
	enum class EGeometryScriptPrimitiveUVMode UVMode; // 0x02(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptRevolveOptions
// Size: 0x14 (Inherited: 0x00)
struct FGeometryScriptRevolveOptions {
	float RevolveDegrees; // 0x00(0x04)
	float DegreeOffset; // 0x04(0x04)
	bool bReverseDirection; // 0x08(0x01)
	bool bHardNormals; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float HardNormalAngle; // 0x0c(0x04)
	bool bProfileAtMidpoint; // 0x10(0x01)
	bool bFillPartialRevolveEndcaps; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptVoronoiOptions
// Size: 0x58 (Inherited: 0x00)
struct FGeometryScriptVoronoiOptions {
	float BoundsExpand; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FBox Bounds; // 0x08(0x38)
	struct TArray<int32_t> CreateCells; // 0x40(0x10)
	bool bIncludeBoundary; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptConstrainedDelaunayTriangulationOptions
// Size: 0x03 (Inherited: 0x00)
struct FGeometryScriptConstrainedDelaunayTriangulationOptions {
	enum class EGeometryScriptPolygonFillMode ConstrainedEdgesFillMode; // 0x00(0x01)
	bool bValidateEdgesInResult; // 0x01(0x01)
	bool bRemoveDuplicateVertices; // 0x02(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptPolygonsTriangulationOptions
// Size: 0x01 (Inherited: 0x00)
struct FGeometryScriptPolygonsTriangulationOptions {
	bool bStillAppendOnTriangulationError; // 0x00(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptRemeshOptions
// Size: 0x1c (Inherited: 0x00)
struct FGeometryScriptRemeshOptions {
	bool bDiscardAttributes; // 0x00(0x01)
	bool bReprojectToInputMesh; // 0x01(0x01)
	enum class EGeometryScriptRemeshSmoothingType SmoothingType; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float SmoothingRate; // 0x04(0x04)
	enum class EGeometryScriptRemeshEdgeConstraintType MeshBoundaryConstraint; // 0x08(0x01)
	enum class EGeometryScriptRemeshEdgeConstraintType GroupBoundaryConstraint; // 0x09(0x01)
	enum class EGeometryScriptRemeshEdgeConstraintType MaterialBoundaryConstraint; // 0x0a(0x01)
	bool bAllowFlips; // 0x0b(0x01)
	bool bAllowSplits; // 0x0c(0x01)
	bool bAllowCollapses; // 0x0d(0x01)
	bool bPreventNormalFlips; // 0x0e(0x01)
	bool bPreventTinyTriangles; // 0x0f(0x01)
	bool bUseFullRemeshPasses; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t RemeshIterations; // 0x14(0x04)
	bool bAutoCompact; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptUniformRemeshOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptUniformRemeshOptions {
	enum class EGeometryScriptUniformRemeshTargetType TargetType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t TargetTriangleCount; // 0x04(0x04)
	float TargetEdgeLength; // 0x08(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptWeldEdgesOptions
// Size: 0x08 (Inherited: 0x00)
struct FGeometryScriptWeldEdgesOptions {
	float Tolerance; // 0x00(0x04)
	bool bOnlyUniquePairs; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptResolveTJunctionOptions
// Size: 0x04 (Inherited: 0x00)
struct FGeometryScriptResolveTJunctionOptions {
	float Tolerance; // 0x00(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptFillHolesOptions
// Size: 0x02 (Inherited: 0x00)
struct FGeometryScriptFillHolesOptions {
	enum class EGeometryScriptFillHolesMethod FillMethod; // 0x00(0x01)
	bool bDeleteIsolatedTriangles; // 0x01(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptRemoveSmallComponentOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptRemoveSmallComponentOptions {
	float MinVolume; // 0x00(0x04)
	float MinArea; // 0x04(0x04)
	int32_t MinTriangleCount; // 0x08(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptRemoveHiddenTrianglesOptions
// Size: 0x1c (Inherited: 0x00)
struct FGeometryScriptRemoveHiddenTrianglesOptions {
	enum class EGeometryScriptRemoveHiddenTrianglesMethod Method; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t SamplesPerTriangle; // 0x04(0x04)
	int32_t ShrinkSelection; // 0x08(0x04)
	float WindingIsoValue; // 0x0c(0x04)
	int32_t RaysPerSample; // 0x10(0x04)
	float NormalOffset; // 0x14(0x04)
	bool bCompactResult; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptDegenerateTriangleOptions
// Size: 0x20 (Inherited: 0x00)
struct FGeometryScriptDegenerateTriangleOptions {
	enum class EGeometryScriptRepairMeshMode Mode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	double MinTriangleArea; // 0x08(0x08)
	double MinEdgeLength; // 0x10(0x08)
	bool bCompactOnCompletion; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMeshPointSamplingOptions
// Size: 0x18 (Inherited: 0x00)
struct FGeometryScriptMeshPointSamplingOptions {
	float SamplingRadius; // 0x00(0x04)
	int32_t MaxNumSamples; // 0x04(0x04)
	int32_t RandomSeed; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	double SubSampleDensity; // 0x10(0x08)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptNonUniformPointSamplingOptions
// Size: 0x18 (Inherited: 0x00)
struct FGeometryScriptNonUniformPointSamplingOptions {
	float MaxSamplingRadius; // 0x00(0x04)
	enum class EGeometryScriptSamplingDistributionMode SizeDistribution; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	double SizeDistributionPower; // 0x08(0x08)
	enum class EGeometryScriptSamplingWeightMode WeightMode; // 0x10(0x01)
	bool bInvertWeights; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptPlanarSimplifyOptions
// Size: 0x08 (Inherited: 0x00)
struct FGeometryScriptPlanarSimplifyOptions {
	float AngleThreshold; // 0x00(0x04)
	bool bAutoCompact; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptPolygroupSimplifyOptions
// Size: 0x08 (Inherited: 0x00)
struct FGeometryScriptPolygroupSimplifyOptions {
	float AngleThreshold; // 0x00(0x04)
	bool bAutoCompact; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptSimplifyMeshOptions
// Size: 0x07 (Inherited: 0x00)
struct FGeometryScriptSimplifyMeshOptions {
	enum class EGeometryScriptRemoveMeshSimplificationType Method; // 0x00(0x01)
	bool bAllowSeamCollapse; // 0x01(0x01)
	bool bAllowSeamSmoothing; // 0x02(0x01)
	bool bAllowSeamSplits; // 0x03(0x01)
	bool bPreserveVertexPositions; // 0x04(0x01)
	bool bRetainQuadricMemory; // 0x05(0x01)
	bool bAutoCompact; // 0x06(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptSpatialQueryOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptSpatialQueryOptions {
	float MaxDistance; // 0x00(0x04)
	bool bAllowUnsafeModifiedQueries; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float WindingIsoThreshold; // 0x08(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptRayHitResult
// Size: 0x40 (Inherited: 0x00)
struct FGeometryScriptRayHitResult {
	bool bHit; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float RayParameter; // 0x04(0x04)
	int32_t HitTriangleID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector HitPosition; // 0x10(0x18)
	struct FVector HitBaryCoords; // 0x28(0x18)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptPNTessellateOptions
// Size: 0x01 (Inherited: 0x00)
struct FGeometryScriptPNTessellateOptions {
	bool bRecomputeNormals; // 0x00(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptSelectiveTessellateOptions
// Size: 0x02 (Inherited: 0x00)
struct FGeometryScriptSelectiveTessellateOptions {
	bool bEnableMultithreading; // 0x00(0x01)
	enum class EGeometryScriptEmptySelectionBehavior EmptyBehavior; // 0x01(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptRepackUVsOptions
// Size: 0x08 (Inherited: 0x00)
struct FGeometryScriptRepackUVsOptions {
	int32_t TargetImageWidth; // 0x00(0x04)
	bool bOptimizeIslandRotation; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptExpMapUVOptions
// Size: 0x08 (Inherited: 0x00)
struct FGeometryScriptExpMapUVOptions {
	int32_t NormalSmoothingRounds; // 0x00(0x04)
	float NormalSmoothingAlpha; // 0x04(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptSpectralConformalUVOptions
// Size: 0x01 (Inherited: 0x00)
struct FGeometryScriptSpectralConformalUVOptions {
	bool bPreserveIrregularity; // 0x00(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptRecomputeUVsOptions
// Size: 0x1c (Inherited: 0x00)
struct FGeometryScriptRecomputeUVsOptions {
	enum class EGeometryScriptUVFlattenMethod Method; // 0x00(0x01)
	enum class EGeometryScriptUVIslandSource IslandSource; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FGeometryScriptExpMapUVOptions ExpMapOptions; // 0x04(0x08)
	struct FGeometryScriptSpectralConformalUVOptions SpectralConformalOptions; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FGeometryScriptGroupLayer GroupLayer; // 0x10(0x08)
	bool bAutoAlignIslandsWithAxes; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptPatchBuilderOptions
// Size: 0x34 (Inherited: 0x00)
struct FGeometryScriptPatchBuilderOptions {
	int32_t InitialPatchCount; // 0x00(0x04)
	int32_t MinPatchSize; // 0x04(0x04)
	float PatchCurvatureAlignmentWeight; // 0x08(0x04)
	float PatchMergingMetricThresh; // 0x0c(0x04)
	float PatchMergingAngleThresh; // 0x10(0x04)
	struct FGeometryScriptExpMapUVOptions ExpMapOptions; // 0x14(0x08)
	bool bRespectInputGroups; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FGeometryScriptGroupLayer GroupLayer; // 0x20(0x08)
	bool bAutoPack; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FGeometryScriptRepackUVsOptions PackingOptions; // 0x2c(0x08)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptXAtlasOptions
// Size: 0x04 (Inherited: 0x00)
struct FGeometryScriptXAtlasOptions {
	int32_t MaxIterations; // 0x00(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptBlurMeshVertexColorsOptions
// Size: 0x04 (Inherited: 0x00)
struct FGeometryScriptBlurMeshVertexColorsOptions {
	bool Red; // 0x00(0x01)
	bool Green; // 0x01(0x01)
	bool Blue; // 0x02(0x01)
	bool Alpha; // 0x03(0x01)
};

// ScriptStruct GeometryScriptingCore.GeometryScript3DGridParameters
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScript3DGridParameters {
	enum class EGeometryScriptGridSizingMethod SizeMethod; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float GridCellSize; // 0x04(0x04)
	int32_t GridResolution; // 0x08(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptSolidifyOptions
// Size: 0x28 (Inherited: 0x00)
struct FGeometryScriptSolidifyOptions {
	struct FGeometryScript3DGridParameters GridParameters; // 0x00(0x0c)
	float WindingThreshold; // 0x0c(0x04)
	bool bSolidAtBoundaries; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float ExtendBounds; // 0x14(0x04)
	int32_t SurfaceSearchSteps; // 0x18(0x04)
	bool bThickenShells; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	double ShellThickness; // 0x20(0x08)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptMorphologyOptions
// Size: 0x24 (Inherited: 0x00)
struct FGeometryScriptMorphologyOptions {
	struct FGeometryScript3DGridParameters SDFGridParameters; // 0x00(0x0c)
	bool bUseSeparateMeshGrid; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FGeometryScript3DGridParameters MeshGridParameters; // 0x10(0x0c)
	enum class EGeometryScriptMorphologicalOpType Operation; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float Distance; // 0x20(0x04)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptPolygonOffsetOptions
// Size: 0x28 (Inherited: 0x00)
struct FGeometryScriptPolygonOffsetOptions {
	enum class EGeometryScriptPolyOffsetJoinType JoinType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	double MiterLimit; // 0x08(0x08)
	bool bOffsetBothSides; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	double StepsPerRadianScale; // 0x18(0x08)
	double MaximumStepsPerRadian; // 0x20(0x08)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptOpenPathOffsetOptions
// Size: 0x28 (Inherited: 0x00)
struct FGeometryScriptOpenPathOffsetOptions {
	enum class EGeometryScriptPolyOffsetJoinType JoinType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	double MiterLimit; // 0x08(0x08)
	enum class EGeometryScriptPathOffsetEndType EndType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	double StepsPerRadianScale; // 0x18(0x08)
	double MaximumStepsPerRadian; // 0x20(0x08)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptSplineSamplingOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptSplineSamplingOptions {
	int32_t NumSamples; // 0x00(0x04)
	float ErrorTolerance; // 0x04(0x04)
	enum class EGeometryScriptSampleSpacing SampleSpacing; // 0x08(0x01)
	enum class ESplineCoordinateSpace CoordinateSpace; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptCopyMeshFromComponentOptions
// Size: 0x0c (Inherited: 0x00)
struct FGeometryScriptCopyMeshFromComponentOptions {
	bool bWantNormals; // 0x00(0x01)
	bool bWantTangents; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FGeometryScriptMeshReadLOD RequestedLOD; // 0x04(0x08)
};

// ScriptStruct GeometryScriptingCore.GeometryScriptSampleTextureOptions
// Size: 0x28 (Inherited: 0x00)
struct FGeometryScriptSampleTextureOptions {
	enum class EGeometryScriptPixelSamplingMethod SamplingMethod; // 0x00(0x01)
	bool bWrap; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FVector2D UVScale; // 0x08(0x10)
	struct FVector2D UVOffset; // 0x18(0x10)
};

