// Enum GeometryCollectionNodes.EFloatArrayToIntArrayFunctionEnum
enum class EFloatArrayToIntArrayFunctionEnum : uint8 {
	Dataflow_FloatToInt_Function_Floor = 0,
	Dataflow_FloatToInt_Function_Ceil = 1,
	Dataflow_FloatToInt_Function_Round = 2,
	Dataflow_FloatToInt_Function_Truncate = 3,
	Dataflow_FloatToInt_NonZeroToIndex = 4,
	Dataflow_FloatToInt_ZeroToIndex = 5,
	Dataflow_Max = 6,
	Dataflow_Max = 7
};

// Enum GeometryCollectionNodes.ECompareOperation1Enum
enum class ECompareOperation1Enum : uint8 {
	Dataflow_Compare_Equal = 0,
	Dataflow_Compare_Smaller = 1,
	Dataflow_Compare_SmallerOrEqual = 2,
	Dataflow_Compare_Greater = 3,
	Dataflow_Compare_GreaterOrEqual = 4,
	Dataflow_Max = 5,
	Dataflow_Max = 6
};

// Enum GeometryCollectionNodes.EStatisticsOperationEnum
enum class EStatisticsOperationEnum : uint8 {
	Dataflow_EStatisticsOperationEnum_Min = 0,
	Dataflow_EStatisticsOperationEnum_Max = 1,
	Dataflow_EStatisticsOperationEnum_Mean = 2,
	Dataflow_EStatisticsOperationEnum_Median = 3,
	Dataflow_EStatisticsOperationEnum_Mode = 4,
	Dataflow_EStatisticsOperationEnum_Sum = 5,
	Dataflow_Max = 6,
	Dataflow_Max = 7
};

// Enum GeometryCollectionNodes.EDataflowFieldFalloffType
enum class EDataflowFieldFalloffType : uint8 {
	Dataflow_FieldFalloffType_None = 0,
	Dataflow_FieldFalloffType_Linear = 1,
	Dataflow_FieldFalloffType_Inverse = 2,
	Dataflow_FieldFalloffType_Squared = 3,
	Dataflow_FieldFalloffType_Logarithmic = 4,
	Dataflow_Max = 5,
	Dataflow_Max = 6
};

// Enum GeometryCollectionNodes.EDataflowSetMaskConditionType
enum class EDataflowSetMaskConditionType : uint8 {
	Dataflow_SetMaskConditionType_Always = 0,
	Dataflow_SetMaskConditionType_IFF_NOT_Interior = 1,
	Dataflow_SetMaskConditionType_IFF_NOT_Exterior = 2,
	Dataflow_Max = 3,
	Dataflow_Max = 4
};

// Enum GeometryCollectionNodes.EDataflowWaveFunctionType
enum class EDataflowWaveFunctionType : uint8 {
	Dataflow_WaveFunctionType_Cosine = 0,
	Dataflow_WaveFunctionType_Gaussian = 1,
	Dataflow_WaveFunctionType_Falloff = 2,
	Dataflow_WaveFunctionType_Decay = 3,
	Dataflow_Max = 4,
	Dataflow_Max = 5
};

// Enum GeometryCollectionNodes.EDataflowFloatFieldOperationType
enum class EDataflowFloatFieldOperationType : uint8 {
	Dataflow_FloatFieldOperationType_Multiply = 0,
	Dataflow_FloatFieldFalloffType_Divide = 1,
	Dataflow_FloatFieldFalloffType_Add = 2,
	Dataflow_FloatFieldFalloffType_Substract = 3,
	Dataflow_FloatFieldFalloffType_Min = 4,
	Dataflow_FloatFieldFalloffType_Max = 5,
	Dataflow_Max = 6,
	Dataflow_Max = 7
};

// Enum GeometryCollectionNodes.EDataflowVectorFieldOperationType
enum class EDataflowVectorFieldOperationType : uint8 {
	Dataflow_VectorFieldOperationType_Multiply = 0,
	Dataflow_VectorFieldFalloffType_Divide = 1,
	Dataflow_VectorFieldFalloffType_Add = 2,
	Dataflow_VectorFieldFalloffType_Substract = 3,
	Dataflow_VectorFieldFalloffType_CrossProduct = 4,
	Dataflow_Max = 5,
	Dataflow_Max = 6
};

// Enum GeometryCollectionNodes.ESetMaterialOperationTypeEnum
enum class ESetMaterialOperationTypeEnum : uint8 {
	Dataflow_SetMaterialOperationType_Add = 0,
	Dataflow_SetMaterialOperationType_Insert = 1,
	Dataflow_Max = 2,
	Dataflow_Max = 3
};

// Enum GeometryCollectionNodes.EConvexOverlapRemovalMethodEnum
enum class EConvexOverlapRemovalMethodEnum : uint8 {
	Dataflow_EConvexOverlapRemovalMethod_None = 0,
	Dataflow_EConvexOverlapRemovalMethod_All = 1,
	Dataflow_EConvexOverlapRemovalMethod_OnlyClusters = 2,
	Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters = 3,
	Dataflow_Max = 4,
	Dataflow_Max = 5
};

// Enum GeometryCollectionNodes.EClusterSizeMethodEnum
enum class EClusterSizeMethodEnum : uint8 {
	Dataflow_ClusterSizeMethod_ByNumber = 0,
	Dataflow_ClusterSizeMethod_ByFractionOfInput = 1,
	Dataflow_ClusterSizeMethod_BySize = 2,
	Dataflow_ClusterSizeMethod_ByGrid = 3,
	Dataflow_Max = 4,
	Dataflow_Max = 5
};

// Enum GeometryCollectionNodes.EFloatToIntFunctionEnum
enum class EFloatToIntFunctionEnum : uint8 {
	Dataflow_FloatToInt_Function_Floor = 0,
	Dataflow_FloatToInt_Function_Ceil = 1,
	Dataflow_FloatToInt_Function_Round = 2,
	Dataflow_FloatToInt_Function_Truncate = 3,
	Dataflow_Max = 4,
	Dataflow_Max = 5
};

// Enum GeometryCollectionNodes.EVisibiltyOptionsEnum
enum class EVisibiltyOptionsEnum : uint8 {
	Dataflow_VisibilityOptions_Visible = 0,
	Dataflow_VisibilityOptions_Invisible = 1,
	Dataflow_Max = 2,
	Dataflow_Max = 3
};

// Enum GeometryCollectionNodes.EMakeBoxDataTypeEnum
enum class EMakeBoxDataTypeEnum : uint8 {
	Dataflow_MakeBox_DataType_MinMax = 0,
	Dataflow_MakeBox_DataType_CenterSize = 1,
	Dataflow_Max = 2,
	Dataflow_Max = 3
};

// Enum GeometryCollectionNodes.EMathConstantsEnum
enum class EMathConstantsEnum : uint8 {
	Dataflow_MathConstants_Pi = 0,
	Dataflow_MathConstants_HalfPi = 1,
	Dataflow_MathConstants_TwoPi = 2,
	Dataflow_MathConstants_FourPi = 3,
	Dataflow_MathConstants_InvPi = 4,
	Dataflow_MathConstants_InvTwoPi = 5,
	Dataflow_MathConstants_Sqrt2 = 6,
	Dataflow_MathConstants_InvSqrt2 = 7,
	Dataflow_MathConstants_Sqrt3 = 8,
	Dataflow_MathConstants_InvSqrt3 = 9,
	Dataflow_FloatToInt_Function_E = 10,
	Dataflow_FloatToInt_Function_Gamma = 11,
	Dataflow_FloatToInt_Function_GoldenRatio = 12,
	Dataflow_FloatToInt_Function_ZeroTolerance = 13,
	Dataflow_Max = 14,
	Dataflow_Max = 15
};

// Enum GeometryCollectionNodes.EMeshBooleanOperationEnum
enum class EMeshBooleanOperationEnum : uint8 {
	Dataflow_MeshBoolean_Union = 0,
	Dataflow_MeshBoolean_Intersect = 1,
	Dataflow_MeshBoolean_Difference = 2,
	Dataflow_Max = 3,
	Dataflow_Max = 4
};

// Enum GeometryCollectionNodes.EBoxLengthMeasurementMethod
enum class EBoxLengthMeasurementMethod : uint8 {
	XAxis = 0,
	YAxis = 1,
	ZAxis = 2,
	ShortestAxis = 3,
	LongestAxis = 4,
	Diagonal = 5,
	EBoxLengthMeasurementMethod_MAX = 6
};

// Enum GeometryCollectionNodes.ERotationOrderEnum
enum class ERotationOrderEnum : uint8 {
	Dataflow_RotationOrder_XYZ = 0,
	Dataflow_RotationOrder_YZX = 1,
	Dataflow_RotationOrder_ZXY = 2,
	Dataflow_RotationOrder_XZY = 3,
	Dataflow_RotationOrder_YXZ = 4,
	Dataflow_RotationOrder_ZYX = 5,
	Dataflow_Max = 6,
	Dataflow_Max = 7
};

// Enum GeometryCollectionNodes.ECompareOperationEnum
enum class ECompareOperationEnum : uint8 {
	Dataflow_Compare_Equal = 0,
	Dataflow_Compare_Smaller = 1,
	Dataflow_Compare_SmallerOrEqual = 2,
	Dataflow_Compare_Greater = 3,
	Dataflow_Compare_GreaterOrEqual = 4,
	Dataflow_Max = 5,
	Dataflow_Max = 6
};

// Enum GeometryCollectionNodes.EAnchorStateEnum
enum class EAnchorStateEnum : uint8 {
	Dataflow_AnchorState_Anchored = 0,
	Dataflow_AnchorState_NotAnchored = 1,
	Dataflow_Max = 2,
	Dataflow_Max = 3
};

// Enum GeometryCollectionNodes.EProximityMethodEnum
enum class EProximityMethodEnum : uint8 {
	Dataflow_ProximityMethod_Precise = 0,
	Dataflow_ProximityMethod_ConvexHull = 1,
	Dataflow_Max = 2,
	Dataflow_Max = 3
};

// Enum GeometryCollectionNodes.EProximityContactFilteringMethodEnum
enum class EProximityContactFilteringMethodEnum : uint8 {
	Dataflow_ProximityContactFilteringMethod_ProjectedBoundsOverlap = 0,
	Dataflow_ProximityContactFilteringMethod_ConvexHullSharp = 1,
	Dataflow_ProximityContactFilteringMethod_ConvexHullArea = 2,
	Dataflow_Max = 3,
	Dataflow_Max = 4
};

// Enum GeometryCollectionNodes.EConnectionContactAreaMethodEnum
enum class EConnectionContactAreaMethodEnum : uint8 {
	Dataflow_ConnectionContactAreaMethod_None = 0,
	Dataflow_ProximityContactFilteringMethod_ConvexHullArea = 1,
	Dataflow_Max = 2,
	Dataflow_Max = 3
};

// Enum GeometryCollectionNodes.EStandardGroupNameEnum
enum class EStandardGroupNameEnum : uint8 {
	Dataflow_EStandardGroupNameEnum_Transform = 0,
	Dataflow_EStandardGroupNameEnum_Geometry = 1,
	Dataflow_EStandardGroupNameEnum_Faces = 2,
	Dataflow_EStandardGroupNameEnum_Vertices = 3,
	Dataflow_EStandardGroupNameEnum_Material = 4,
	Dataflow_EStandardGroupNameEnum_Breaking = 5,
	Dataflow_EStandardGroupNameEnum_Custom = 6,
	Dataflow_Max = 7,
	Dataflow_Max = 8
};

// Enum GeometryCollectionNodes.ECustomAttributeTypeEnum
enum class ECustomAttributeTypeEnum : uint8 {
	Dataflow_CustomAttributeType_UInt8 = 0,
	Dataflow_CustomAttributeType_Int32 = 1,
	Dataflow_CustomAttributeType_Float = 2,
	Dataflow_CustomAttributeType_Double = 3,
	Dataflow_CustomAttributeType_Bool = 4,
	Dataflow_CustomAttributeType_String = 5,
	Dataflow_CustomAttributeType_Vector2f = 6,
	Dataflow_CustomAttributeType_Vector3f = 7,
	Dataflow_CustomAttributeType_Vector3d = 8,
	Dataflow_CustomAttributeType_Vector4f = 9,
	Dataflow_CustomAttributeType_LinearColor = 10,
	Dataflow_CustomAttributeType_Transform = 11,
	Dataflow_CustomAttributeType_Quat4f = 12,
	Dataflow_CustomAttributeType_Box = 13,
	Dataflow_CustomAttributeType_Guid = 14,
	Dataflow_CustomAttributeType_Int32Set = 15,
	Dataflow_CustomAttributeType_Int32Array = 16,
	Dataflow_CustomAttributeType_IntVector = 17,
	Dataflow_CustomAttributeType_IntVector2 = 18,
	Dataflow_CustomAttributeType_IntVector4 = 19,
	Dataflow_CustomAttributeType_IntVector2Array = 20,
	Dataflow_CustomAttributeType_FloatArray = 21,
	Dataflow_CustomAttributeType_Vector2fArray = 22,
	Dataflow_CustomAttributeType_FVector3fArray = 23,
	Dataflow_Max = 24,
	Dataflow_Max = 25
};

// Enum GeometryCollectionNodes.ESetOperationEnum
enum class ESetOperationEnum : uint8 {
	Dataflow_SetOperation_AND = 0,
	Dataflow_SetOperation_OR = 1,
	Dataflow_SetOperation_XOR = 2,
	Dataflow_Max = 3,
	Dataflow_Max = 4
};

// Enum GeometryCollectionNodes.ERangeSettingEnum
enum class ERangeSettingEnum : uint8 {
	Dataflow_RangeSetting_InsideRange = 0,
	Dataflow_RangeSetting_OutsideRange = 1,
	Dataflow_Max = 2,
	Dataflow_Max = 3
};

// Enum GeometryCollectionNodes.ESelectSubjectTypeEnum
enum class ESelectSubjectTypeEnum : uint8 {
	Dataflow_SelectSubjectType_Vertices = 0,
	Dataflow_SelectSubjectType_BoundingBox = 1,
	Dataflow_SelectSubjectType_Centroid = 2,
	Dataflow_Max = 3,
	Dataflow_Max = 4
};

// ScriptStruct GeometryCollectionNodes.GetFloatArrayElementDataflowNode
// Size: 0x110 (Inherited: 0xf0)
struct FGetFloatArrayElementDataflowNode : FDataflowNode {
	int32_t Index; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct TArray<float> FloatArray; // 0xf8(0x10)
	float FloatValue; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// ScriptStruct GeometryCollectionNodes.FloatArrayToIntArrayDataflowNode
// Size: 0x118 (Inherited: 0xf0)
struct FFloatArrayToIntArrayDataflowNode : FDataflowNode {
	enum class EFloatArrayToIntArrayFunctionEnum Function; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct TArray<float> FloatArray; // 0xf8(0x10)
	struct TArray<int32_t> IntArray; // 0x108(0x10)
};

// ScriptStruct GeometryCollectionNodes.GetArrayElementDataflowNode
// Size: 0x120 (Inherited: 0xf0)
struct FGetArrayElementDataflowNode : FDataflowNode {
	int32_t Index; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct TArray<struct FVector> Points; // 0xf8(0x10)
	struct FVector Point; // 0x108(0x18)
};

// ScriptStruct GeometryCollectionNodes.GetNumArrayElementsDataflowNode
// Size: 0x138 (Inherited: 0xf0)
struct FGetNumArrayElementsDataflowNode : FDataflowNode {
	struct TArray<float> FloatArray; // 0xf0(0x10)
	struct TArray<int32_t> IntArray; // 0x100(0x10)
	struct TArray<struct FVector> Points; // 0x110(0x10)
	struct TArray<struct FVector3f> Vector3fArray; // 0x120(0x10)
	int32_t NumElements; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
};

// ScriptStruct GeometryCollectionNodes.BoolArrayToFaceSelectionDataflowNode
// Size: 0x120 (Inherited: 0xf0)
struct FBoolArrayToFaceSelectionDataflowNode : FDataflowNode {
	struct TArray<bool> BoolAttributeData; // 0xf0(0x10)
	struct FDataflowFaceSelection FaceSelection; // 0x100(0x20)
};

// ScriptStruct GeometryCollectionNodes.FloatArrayToVertexSelectionDataflowNode
// Size: 0x128 (Inherited: 0xf0)
struct FFloatArrayToVertexSelectionDataflowNode : FDataflowNode {
	struct TArray<float> FloatArray; // 0xf0(0x10)
	enum class ECompareOperation1Enum Operation; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	float Threshold; // 0x104(0x04)
	struct FDataflowVertexSelection VertexSelection; // 0x108(0x20)
};

// ScriptStruct GeometryCollectionNodes.FloatArrayNormalizeDataflowNode
// Size: 0x138 (Inherited: 0xf0)
struct FFloatArrayNormalizeDataflowNode : FDataflowNode {
	struct TArray<float> InFloatArray; // 0xf0(0x10)
	struct FDataflowVertexSelection Selection; // 0x100(0x20)
	float MinRange; // 0x120(0x04)
	float MaxRange; // 0x124(0x04)
	struct TArray<float> OutFloatArray; // 0x128(0x10)
};

// ScriptStruct GeometryCollectionNodes.VectorArrayNormalizeDataflowNode
// Size: 0x138 (Inherited: 0xf0)
struct FVectorArrayNormalizeDataflowNode : FDataflowNode {
	struct TArray<struct FVector> InVectorArray; // 0xf0(0x10)
	struct FDataflowVertexSelection Selection; // 0x100(0x20)
	float Magnitude; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct TArray<struct FVector> OutVectorArray; // 0x128(0x10)
};

// ScriptStruct GeometryCollectionNodes.UnionIntArraysDataflowNode
// Size: 0x120 (Inherited: 0xf0)
struct FUnionIntArraysDataflowNode : FDataflowNode {
	struct TArray<int32_t> InArray1; // 0xf0(0x10)
	struct TArray<int32_t> InArray2; // 0x100(0x10)
	struct TArray<int32_t> OutArray; // 0x110(0x10)
};

// ScriptStruct GeometryCollectionNodes.RemoveFloatArrayElementDataflowNode
// Size: 0x108 (Inherited: 0xf0)
struct FRemoveFloatArrayElementDataflowNode : FDataflowNode {
	int32_t Index; // 0xf0(0x04)
	bool bPreserveOrder; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	struct TArray<float> FloatArray; // 0xf8(0x10)
};

// ScriptStruct GeometryCollectionNodes.FloatArrayComputeStatisticsDataflowNode
// Size: 0x138 (Inherited: 0xf0)
struct FFloatArrayComputeStatisticsDataflowNode : FDataflowNode {
	struct TArray<float> FloatArray; // 0xf0(0x10)
	struct FDataflowTransformSelection TransformSelection; // 0x100(0x20)
	enum class EStatisticsOperationEnum OperationName; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float Value; // 0x124(0x04)
	struct TArray<int32_t> Indices; // 0x128(0x10)
};

// ScriptStruct GeometryCollectionNodes.GeometryCollectionTerminalDataflowNode
// Size: 0x1c0 (Inherited: 0xf0)
struct FGeometryCollectionTerminalDataflowNode : FDataflowTerminalNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct TArray<struct UMaterial*> Materials; // 0x1a0(0x10)
	struct TArray<struct FGeometryCollectionAutoInstanceMesh> InstancedMeshes; // 0x1b0(0x10)
};

// ScriptStruct GeometryCollectionNodes.GetGeometryCollectionAssetDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FGetGeometryCollectionAssetDataflowNode : FDataflowNode {
	struct UGeometryCollection* Asset; // 0xf0(0x08)
};

// ScriptStruct GeometryCollectionNodes.GetGeometryCollectionSourcesDataflowNode
// Size: 0x108 (Inherited: 0xf0)
struct FGetGeometryCollectionSourcesDataflowNode : FDataflowNode {
	struct UGeometryCollection* Asset; // 0xf0(0x08)
	struct TArray<struct FGeometryCollectionSource> Sources; // 0xf8(0x10)
};

// ScriptStruct GeometryCollectionNodes.CreateGeometryCollectionFromSourcesDataflowNode
// Size: 0x1d0 (Inherited: 0xf0)
struct FCreateGeometryCollectionFromSourcesDataflowNode : FDataflowNode {
	struct TArray<struct FGeometryCollectionSource> Sources; // 0xf0(0x10)
	struct FManagedArrayCollection Collection; // 0x100(0xb0)
	struct TArray<struct UMaterial*> Materials; // 0x1b0(0x10)
	struct TArray<struct FGeometryCollectionAutoInstanceMesh> InstancedMeshes; // 0x1c0(0x10)
};

// ScriptStruct GeometryCollectionNodes.RadialFalloffFieldDataflowNode
// Size: 0x1b8 (Inherited: 0xf0)
struct FRadialFalloffFieldDataflowNode : FDataflowNode {
	struct TArray<struct FVector3f> SamplePositions; // 0xf0(0x10)
	struct FDataflowVertexSelection SampleIndices; // 0x100(0x20)
	struct FSphere Sphere; // 0x120(0x20)
	struct FVector Translation; // 0x140(0x18)
	float Magnitude; // 0x158(0x04)
	float MinRange; // 0x15c(0x04)
	float MaxRange; // 0x160(0x04)
	float Default; // 0x164(0x04)
	enum class EDataflowFieldFalloffType FalloffType; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct TArray<float> FieldFloatResult; // 0x170(0x10)
	struct TArray<int32_t> FieldRemap; // 0x180(0x10)
	struct FDataflowVertexSelection FieldSelectionMask; // 0x190(0x20)
	int32_t NumSamplePositions; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
};

// ScriptStruct GeometryCollectionNodes.BoxFalloffFieldDataflowNode
// Size: 0x220 (Inherited: 0xf0)
struct FBoxFalloffFieldDataflowNode : FDataflowNode {
	struct TArray<struct FVector3f> SamplePositions; // 0xf0(0x10)
	struct FDataflowVertexSelection SampleIndices; // 0x100(0x20)
	struct FBox Box; // 0x120(0x38)
	char pad_158[0x8]; // 0x158(0x08)
	struct FTransform Transform; // 0x160(0x60)
	float Magnitude; // 0x1c0(0x04)
	float MinRange; // 0x1c4(0x04)
	float MaxRange; // 0x1c8(0x04)
	float Default; // 0x1cc(0x04)
	enum class EDataflowFieldFalloffType FalloffType; // 0x1d0(0x01)
	char pad_1D1[0x7]; // 0x1d1(0x07)
	struct TArray<float> FieldFloatResult; // 0x1d8(0x10)
	struct TArray<int32_t> FieldRemap; // 0x1e8(0x10)
	struct FDataflowVertexSelection FieldSelectionMask; // 0x1f8(0x20)
	int32_t NumSamplePositions; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
};

// ScriptStruct GeometryCollectionNodes.PlaneFalloffFieldDataflowNode
// Size: 0x1d0 (Inherited: 0xf0)
struct FPlaneFalloffFieldDataflowNode : FDataflowNode {
	struct TArray<struct FVector3f> SamplePositions; // 0xf0(0x10)
	struct FDataflowVertexSelection SampleIndices; // 0x100(0x20)
	struct FVector Position; // 0x120(0x18)
	struct FVector Normal; // 0x138(0x18)
	float Distance; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FVector Translation; // 0x158(0x18)
	float Magnitude; // 0x170(0x04)
	float MinRange; // 0x174(0x04)
	float MaxRange; // 0x178(0x04)
	float Default; // 0x17c(0x04)
	enum class EDataflowFieldFalloffType FalloffType; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct TArray<float> FieldFloatResult; // 0x188(0x10)
	struct TArray<int32_t> FieldRemap; // 0x198(0x10)
	struct FDataflowVertexSelection FieldSelectionMask; // 0x1a8(0x20)
	int32_t NumSamplePositions; // 0x1c8(0x04)
	char pad_1CC[0x4]; // 0x1cc(0x04)
};

// ScriptStruct GeometryCollectionNodes.RadialIntMaskFieldDataflowNode
// Size: 0x190 (Inherited: 0xf0)
struct FRadialIntMaskFieldDataflowNode : FDataflowNode {
	struct TArray<struct FVector3f> SamplePositions; // 0xf0(0x10)
	struct FDataflowVertexSelection SampleIndices; // 0x100(0x20)
	struct FSphere Sphere; // 0x120(0x20)
	struct FVector Translation; // 0x140(0x18)
	int32_t InteriorValue; // 0x158(0x04)
	int32_t ExteriorValue; // 0x15c(0x04)
	enum class EDataflowSetMaskConditionType SetMaskConditionType; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct TArray<int32_t> FieldIntResult; // 0x168(0x10)
	struct TArray<int32_t> FieldRemap; // 0x178(0x10)
	int32_t NumSamplePositions; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
};

// ScriptStruct GeometryCollectionNodes.UniformScalarFieldDataflowNode
// Size: 0x150 (Inherited: 0xf0)
struct FUniformScalarFieldDataflowNode : FDataflowNode {
	struct TArray<struct FVector3f> SamplePositions; // 0xf0(0x10)
	struct FDataflowVertexSelection SampleIndices; // 0x100(0x20)
	float Magnitude; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct TArray<float> FieldFloatResult; // 0x128(0x10)
	struct TArray<int32_t> FieldRemap; // 0x138(0x10)
	int32_t NumSamplePositions; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// ScriptStruct GeometryCollectionNodes.UniformVectorFieldDataflowNode
// Size: 0x168 (Inherited: 0xf0)
struct FUniformVectorFieldDataflowNode : FDataflowNode {
	struct TArray<struct FVector3f> SamplePositions; // 0xf0(0x10)
	struct FDataflowVertexSelection SampleIndices; // 0x100(0x20)
	float Magnitude; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct FVector Direction; // 0x128(0x18)
	struct TArray<struct FVector> FieldVectorResult; // 0x140(0x10)
	struct TArray<int32_t> FieldRemap; // 0x150(0x10)
	int32_t NumSamplePositions; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
};

// ScriptStruct GeometryCollectionNodes.RadialVectorFieldDataflowNode
// Size: 0x168 (Inherited: 0xf0)
struct FRadialVectorFieldDataflowNode : FDataflowNode {
	struct TArray<struct FVector3f> SamplePositions; // 0xf0(0x10)
	struct FDataflowVertexSelection SampleIndices; // 0x100(0x20)
	float Magnitude; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct FVector Position; // 0x128(0x18)
	struct TArray<struct FVector> FieldVectorResult; // 0x140(0x10)
	struct TArray<int32_t> FieldRemap; // 0x150(0x10)
	int32_t NumSamplePositions; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
};

// ScriptStruct GeometryCollectionNodes.RandomVectorFieldDataflowNode
// Size: 0x150 (Inherited: 0xf0)
struct FRandomVectorFieldDataflowNode : FDataflowNode {
	struct TArray<struct FVector3f> SamplePositions; // 0xf0(0x10)
	struct FDataflowVertexSelection SampleIndices; // 0x100(0x20)
	float Magnitude; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct TArray<struct FVector> FieldVectorResult; // 0x128(0x10)
	struct TArray<int32_t> FieldRemap; // 0x138(0x10)
	int32_t NumSamplePositions; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// ScriptStruct GeometryCollectionNodes.NoiseFieldDataflowNode
// Size: 0x1c0 (Inherited: 0xf0)
struct FNoiseFieldDataflowNode : FDataflowNode {
	struct TArray<struct FVector3f> SamplePositions; // 0xf0(0x10)
	struct FDataflowVertexSelection SampleIndices; // 0x100(0x20)
	float MinRange; // 0x120(0x04)
	float MaxRange; // 0x124(0x04)
	char pad_128[0x8]; // 0x128(0x08)
	struct FTransform Transform; // 0x130(0x60)
	struct TArray<float> FieldFloatResult; // 0x190(0x10)
	struct TArray<int32_t> FieldRemap; // 0x1a0(0x10)
	int32_t NumSamplePositions; // 0x1b0(0x04)
	char pad_1B4[0xc]; // 0x1b4(0x0c)
};

// ScriptStruct GeometryCollectionNodes.UniformIntegerFieldDataflowNode
// Size: 0x150 (Inherited: 0xf0)
struct FUniformIntegerFieldDataflowNode : FDataflowNode {
	struct TArray<struct FVector3f> SamplePositions; // 0xf0(0x10)
	struct FDataflowVertexSelection SampleIndices; // 0x100(0x20)
	int32_t Magnitude; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct TArray<int32_t> FieldIntResult; // 0x128(0x10)
	struct TArray<int32_t> FieldRemap; // 0x138(0x10)
	int32_t NumSamplePositions; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// ScriptStruct GeometryCollectionNodes.WaveScalarFieldDataflowNode
// Size: 0x190 (Inherited: 0xf0)
struct FWaveScalarFieldDataflowNode : FDataflowNode {
	struct TArray<struct FVector3f> SamplePositions; // 0xf0(0x10)
	struct FDataflowVertexSelection SampleIndices; // 0x100(0x20)
	float Magnitude; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct FVector Position; // 0x128(0x18)
	struct FVector Translation; // 0x140(0x18)
	float Wavelength; // 0x158(0x04)
	float Period; // 0x15c(0x04)
	enum class EDataflowWaveFunctionType FunctionType; // 0x160(0x01)
	enum class EDataflowFieldFalloffType FalloffType; // 0x161(0x01)
	char pad_162[0x6]; // 0x162(0x06)
	struct TArray<float> FieldFloatResult; // 0x168(0x10)
	struct TArray<int32_t> FieldRemap; // 0x178(0x10)
	int32_t NumSamplePositions; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
};

// ScriptStruct GeometryCollectionNodes.SumScalarFieldDataflowNode
// Size: 0x158 (Inherited: 0xf0)
struct FSumScalarFieldDataflowNode : FDataflowNode {
	struct TArray<float> FieldFloatLeft; // 0xf0(0x10)
	struct TArray<int32_t> FieldRemapLeft; // 0x100(0x10)
	struct TArray<float> FieldFloatRight; // 0x110(0x10)
	struct TArray<int32_t> FieldRemapRight; // 0x120(0x10)
	float Magnitude; // 0x130(0x04)
	enum class EDataflowFloatFieldOperationType Operation; // 0x134(0x01)
	bool bSwapInputs; // 0x135(0x01)
	char pad_136[0x2]; // 0x136(0x02)
	struct TArray<float> FieldFloatResult; // 0x138(0x10)
	struct TArray<int32_t> FieldRemap; // 0x148(0x10)
};

// ScriptStruct GeometryCollectionNodes.SumVectorFieldDataflowNode
// Size: 0x178 (Inherited: 0xf0)
struct FSumVectorFieldDataflowNode : FDataflowNode {
	struct TArray<float> FieldFloat; // 0xf0(0x10)
	struct TArray<int32_t> FieldFloatRemap; // 0x100(0x10)
	struct TArray<struct FVector> FieldVectorLeft; // 0x110(0x10)
	struct TArray<int32_t> FieldRemapLeft; // 0x120(0x10)
	struct TArray<struct FVector> FieldVectorRight; // 0x130(0x10)
	struct TArray<int32_t> FieldRemapRight; // 0x140(0x10)
	float Magnitude; // 0x150(0x04)
	enum class EDataflowVectorFieldOperationType Operation; // 0x154(0x01)
	bool bSwapVectorInputs; // 0x155(0x01)
	char pad_156[0x2]; // 0x156(0x02)
	struct TArray<struct FVector> FieldVectorResult; // 0x158(0x10)
	struct TArray<int32_t> FieldRemap; // 0x168(0x10)
};

// ScriptStruct GeometryCollectionNodes.FieldMakeDenseFloatArrayDataflowNode
// Size: 0x128 (Inherited: 0xf0)
struct FFieldMakeDenseFloatArrayDataflowNode : FDataflowNode {
	struct TArray<float> FieldFloatInput; // 0xf0(0x10)
	struct TArray<int32_t> FieldRemap; // 0x100(0x10)
	int32_t NumSamplePositions; // 0x110(0x04)
	float Default; // 0x114(0x04)
	struct TArray<float> FieldFloatResult; // 0x118(0x10)
};

// ScriptStruct GeometryCollectionNodes.AddMaterialToCollectionDataflowNode
// Size: 0x1e8 (Inherited: 0xf0)
struct FAddMaterialToCollectionDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FDataflowFaceSelection FaceSelection; // 0x1a0(0x20)
	struct TArray<struct UMaterial*> Materials; // 0x1c0(0x10)
	struct UMaterial* OutsideMaterial; // 0x1d0(0x08)
	struct UMaterial* InsideMaterial; // 0x1d8(0x08)
	bool bAssignOutsideMaterial; // 0x1e0(0x01)
	bool bAssignInsideMaterial; // 0x1e1(0x01)
	char pad_1E2[0x6]; // 0x1e2(0x06)
};

// ScriptStruct GeometryCollectionNodes.ReAssignMaterialInCollectionDataflowNode
// Size: 0x1e0 (Inherited: 0xf0)
struct FReAssignMaterialInCollectionDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FDataflowFaceSelection FaceSelection; // 0x1a0(0x20)
	struct TArray<struct UMaterial*> Materials; // 0x1c0(0x10)
	int32_t OutsideMaterialIdx; // 0x1d0(0x04)
	int32_t InsideMaterialIdx; // 0x1d4(0x04)
	bool bAssignOutsideMaterial; // 0x1d8(0x01)
	bool bAssignInsideMaterial; // 0x1d9(0x01)
	char pad_1DA[0x6]; // 0x1da(0x06)
};

// ScriptStruct GeometryCollectionNodes.MaterialsInfoDataflowNode
// Size: 0x110 (Inherited: 0xf0)
struct FMaterialsInfoDataflowNode : FDataflowNode {
	struct TArray<struct UMaterial*> Materials; // 0xf0(0x10)
	struct FString String; // 0x100(0x10)
};

// ScriptStruct GeometryCollectionNodes.GetMaterialFromMaterialsArrayDataflowNode
// Size: 0x110 (Inherited: 0xf0)
struct FGetMaterialFromMaterialsArrayDataflowNode : FDataflowNode {
	struct TArray<struct UMaterial*> Materials; // 0xf0(0x10)
	struct UMaterial* Material; // 0x100(0x08)
	int32_t MaterialIdx; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// ScriptStruct GeometryCollectionNodes.SetMaterialInMaterialsArrayDataflowNode
// Size: 0x110 (Inherited: 0xf0)
struct FSetMaterialInMaterialsArrayDataflowNode : FDataflowNode {
	struct TArray<struct UMaterial*> Materials; // 0xf0(0x10)
	struct UMaterial* Material; // 0x100(0x08)
	enum class ESetMaterialOperationTypeEnum Operation; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	int32_t MaterialIdx; // 0x10c(0x04)
};

// ScriptStruct GeometryCollectionNodes.MakeMaterialDataflowNode
// Size: 0x100 (Inherited: 0xf0)
struct FMakeMaterialDataflowNode : FDataflowNode {
	struct UMaterial* InMaterial; // 0xf0(0x08)
	struct UMaterial* Material; // 0xf8(0x08)
};

// ScriptStruct GeometryCollectionNodes.MakeMaterialsArrayDataflowNode
// Size: 0x100 (Inherited: 0xf0)
struct FMakeMaterialsArrayDataflowNode : FDataflowNode {
	struct TArray<struct UMaterial*> Materials; // 0xf0(0x10)
};

// ScriptStruct GeometryCollectionNodes.CloseGeometryOnCollectionDataflowNode
// Size: 0x1a0 (Inherited: 0xf0)
struct FCloseGeometryOnCollectionDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
};

// ScriptStruct GeometryCollectionNodes.SkeletonToCollectionDataflowNode
// Size: 0x1a8 (Inherited: 0xf0)
struct FSkeletonToCollectionDataflowNode : FDataflowNode {
	struct USkeleton* Skeleton; // 0xf0(0x08)
	struct FManagedArrayCollection Collection; // 0xf8(0xb0)
};

// ScriptStruct GeometryCollectionNodes.DataflowConvexDecompositionSettings
// Size: 0x18 (Inherited: 0x00)
struct FDataflowConvexDecompositionSettings {
	float MinSizeToDecompose; // 0x00(0x04)
	float MaxGeoToHullVolumeRatioToDecompose; // 0x04(0x04)
	float ErrorTolerance; // 0x08(0x04)
	int32_t MaxHullsPerGeometry; // 0x0c(0x04)
	float MinThicknessTolerance; // 0x10(0x04)
	int32_t NumAdditionalSplits; // 0x14(0x04)
};

// ScriptStruct GeometryCollectionNodes.MakeDataflowConvexDecompositionSettingsNode
// Size: 0x120 (Inherited: 0xf0)
struct FMakeDataflowConvexDecompositionSettingsNode : FDataflowNode {
	float MinSizeToDecompose; // 0xf0(0x04)
	float MaxGeoToHullVolumeRatioToDecompose; // 0xf4(0x04)
	float ErrorTolerance; // 0xf8(0x04)
	int32_t MaxHullsPerGeometry; // 0xfc(0x04)
	float MinThicknessTolerance; // 0x100(0x04)
	int32_t NumAdditionalSplits; // 0x104(0x04)
	struct FDataflowConvexDecompositionSettings DecompositionSettings; // 0x108(0x18)
};

// ScriptStruct GeometryCollectionNodes.CreateLeafConvexHullsDataflowNode
// Size: 0x1e8 (Inherited: 0xf0)
struct FCreateLeafConvexHullsDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FDataflowTransformSelection OptionalSelectionFilter; // 0x1a0(0x20)
	enum class EGenerateConvexMethod GenerateMethod; // 0x1c0(0x01)
	char pad_1C1[0x3]; // 0x1c1(0x03)
	float IntersectIfComputedIsSmallerByFactor; // 0x1c4(0x04)
	float MinExternalVolumeToIntersect; // 0x1c8(0x04)
	float SimplificationDistanceThreshold; // 0x1cc(0x04)
	struct FDataflowConvexDecompositionSettings ConvexDecompositionSettings; // 0x1d0(0x18)
};

// ScriptStruct GeometryCollectionNodes.SimplifyConvexHullsDataflowNode
// Size: 0x1d8 (Inherited: 0xf0)
struct FSimplifyConvexHullsDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FDataflowTransformSelection OptionalSelectionFilter; // 0x1a0(0x20)
	enum class EConvexHullSimplifyMethod SimplifyMethod; // 0x1c0(0x04)
	float SimplificationAngleThreshold; // 0x1c4(0x04)
	float SimplificationDistanceThreshold; // 0x1c8(0x04)
	int32_t MinTargetTriangleCount; // 0x1cc(0x04)
	bool bUseExistingVertices; // 0x1d0(0x01)
	char pad_1D1[0x7]; // 0x1d1(0x07)
};

// ScriptStruct GeometryCollectionNodes.CreateNonOverlappingConvexHullsDataflowNode
// Size: 0x1b8 (Inherited: 0xf0)
struct FCreateNonOverlappingConvexHullsDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	float CanExceedFraction; // 0x1a0(0x04)
	float SimplificationDistanceThreshold; // 0x1a4(0x04)
	enum class EConvexOverlapRemovalMethodEnum OverlapRemovalMethod; // 0x1a8(0x01)
	char pad_1A9[0x3]; // 0x1a9(0x03)
	float OverlapRemovalShrinkPercent; // 0x1ac(0x04)
	float CanRemoveFraction; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
};

// ScriptStruct GeometryCollectionNodes.DataflowSphereCovering
// Size: 0x20 (Inherited: 0x00)
struct FDataflowSphereCovering {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct GeometryCollectionNodes.GenerateClusterConvexHullsFromLeafHullsDataflowNode
// Size: 0x218 (Inherited: 0xf0)
struct FGenerateClusterConvexHullsFromLeafHullsDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FDataflowSphereCovering SphereCovering; // 0x1a0(0x20)
	int32_t ConvexCount; // 0x1c0(0x04)
	char pad_1C4[0x4]; // 0x1c4(0x04)
	double ErrorTolerance; // 0x1c8(0x08)
	bool bPreferExternalCollisionShapes; // 0x1d0(0x01)
	enum class EAllowConvexMergeMethod AllowMerges; // 0x1d1(0x01)
	char pad_1D2[0x6]; // 0x1d2(0x06)
	struct FDataflowTransformSelection OptionalSelectionFilter; // 0x1d8(0x20)
	bool bProtectNegativeSpace; // 0x1f8(0x01)
	char pad_1F9[0x3]; // 0x1f9(0x03)
	int32_t TargetNumSamples; // 0x1fc(0x04)
	double MinSampleSpacing; // 0x200(0x08)
	double NegativeSpaceTolerance; // 0x208(0x08)
	double MinRadius; // 0x210(0x08)
};

// ScriptStruct GeometryCollectionNodes.GenerateClusterConvexHullsFromChildrenHullsDataflowNode
// Size: 0x218 (Inherited: 0xf0)
struct FGenerateClusterConvexHullsFromChildrenHullsDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FDataflowSphereCovering SphereCovering; // 0x1a0(0x20)
	int32_t ConvexCount; // 0x1c0(0x04)
	char pad_1C4[0x4]; // 0x1c4(0x04)
	double ErrorTolerance; // 0x1c8(0x08)
	bool bPreferExternalCollisionShapes; // 0x1d0(0x01)
	char pad_1D1[0x7]; // 0x1d1(0x07)
	struct FDataflowTransformSelection OptionalSelectionFilter; // 0x1d8(0x20)
	bool bProtectNegativeSpace; // 0x1f8(0x01)
	char pad_1F9[0x3]; // 0x1f9(0x03)
	int32_t TargetNumSamples; // 0x1fc(0x04)
	double MinSampleSpacing; // 0x200(0x08)
	double NegativeSpaceTolerance; // 0x208(0x08)
	double MinRadius; // 0x210(0x08)
};

// ScriptStruct GeometryCollectionNodes.MergeConvexHullsDataflowNode
// Size: 0x210 (Inherited: 0xf0)
struct FMergeConvexHullsDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FDataflowSphereCovering SphereCovering; // 0x1a0(0x20)
	int32_t MaxConvexCount; // 0x1c0(0x04)
	char pad_1C4[0x4]; // 0x1c4(0x04)
	double ErrorTolerance; // 0x1c8(0x08)
	struct FDataflowTransformSelection OptionalSelectionFilter; // 0x1d0(0x20)
	bool bProtectNegativeSpace; // 0x1f0(0x01)
	char pad_1F1[0x3]; // 0x1f1(0x03)
	int32_t TargetNumSamples; // 0x1f4(0x04)
	double MinSampleSpacing; // 0x1f8(0x08)
	double NegativeSpaceTolerance; // 0x200(0x08)
	double MinRadius; // 0x208(0x08)
};

// ScriptStruct GeometryCollectionNodes.UpdateVolumeAttributesDataflowNode
// Size: 0x1a0 (Inherited: 0xf0)
struct FUpdateVolumeAttributesDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
};

// ScriptStruct GeometryCollectionNodes.GetConvexHullVolumeDataflowNode
// Size: 0x1c8 (Inherited: 0xf0)
struct FGetConvexHullVolumeDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FDataflowTransformSelection TransformSelection; // 0x1a0(0x20)
	float Volume; // 0x1c0(0x04)
	bool bSumChildrenForClustersWithoutHulls; // 0x1c4(0x01)
	bool bVolumeOfUnion; // 0x1c5(0x01)
	char pad_1C6[0x2]; // 0x1c6(0x02)
};

// ScriptStruct GeometryCollectionNodes.AutoClusterDataflowNode
// Size: 0x1e8 (Inherited: 0xf0)
struct FAutoClusterDataflowNode : FDataflowNode {
	enum class EClusterSizeMethodEnum ClusterSizeMethod; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	int32_t ClusterSites; // 0xf4(0x04)
	float ClusterFraction; // 0xf8(0x04)
	float SiteSize; // 0xfc(0x04)
	int32_t ClusterGridWidth; // 0x100(0x04)
	int32_t ClusterGridDepth; // 0x104(0x04)
	int32_t ClusterGridHeight; // 0x108(0x04)
	int32_t DriftIterations; // 0x10c(0x04)
	float MinimumSize; // 0x110(0x04)
	bool AutoCluster; // 0x114(0x01)
	bool EnforceSiteParameters; // 0x115(0x01)
	bool AvoidIsolated; // 0x116(0x01)
	char pad_117[0x1]; // 0x117(0x01)
	struct FManagedArrayCollection Collection; // 0x118(0xb0)
	struct FDataflowTransformSelection TransformSelection; // 0x1c8(0x20)
};

// ScriptStruct GeometryCollectionNodes.ClusterFlattenDataflowNode
// Size: 0x1a0 (Inherited: 0xf0)
struct FClusterFlattenDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
};

// ScriptStruct GeometryCollectionNodes.ClusterUnclusterDataflowNode
// Size: 0x1c0 (Inherited: 0xf0)
struct FClusterUnclusterDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FDataflowTransformSelection TransformSelection; // 0x1a0(0x20)
};

// ScriptStruct GeometryCollectionNodes.ClusterDataflowNode
// Size: 0x1c0 (Inherited: 0xf0)
struct FClusterDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FDataflowTransformSelection TransformSelection; // 0x1a0(0x20)
};

// ScriptStruct GeometryCollectionNodes.ClusterMergeDataflowNode
// Size: 0x1c0 (Inherited: 0xf0)
struct FClusterMergeDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FDataflowTransformSelection TransformSelection; // 0x1a0(0x20)
};

// ScriptStruct GeometryCollectionNodes.VectorToStringDataflowNode
// Size: 0x118 (Inherited: 0xf0)
struct FVectorToStringDataflowNode : FDataflowNode {
	struct FVector Vector; // 0xf0(0x18)
	struct FString String; // 0x108(0x10)
};

// ScriptStruct GeometryCollectionNodes.FloatToStringDataflowNode
// Size: 0x108 (Inherited: 0xf0)
struct FFloatToStringDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FString String; // 0xf8(0x10)
};

// ScriptStruct GeometryCollectionNodes.IntToStringDataflowNode
// Size: 0x108 (Inherited: 0xf0)
struct FIntToStringDataflowNode : FDataflowNode {
	int32_t Int; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FString String; // 0xf8(0x10)
};

// ScriptStruct GeometryCollectionNodes.BoolToStringDataflowNode
// Size: 0x108 (Inherited: 0xf0)
struct FBoolToStringDataflowNode : FDataflowNode {
	bool bool; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct FString String; // 0xf8(0x10)
};

// ScriptStruct GeometryCollectionNodes.IntToFloatDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FIntToFloatDataflowNode : FDataflowNode {
	int32_t Int; // 0xf0(0x04)
	float float; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.IntToDoubleDataflowNode
// Size: 0x100 (Inherited: 0xf0)
struct FIntToDoubleDataflowNode : FDataflowNode {
	int32_t Int; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	double Double; // 0xf8(0x08)
};

// ScriptStruct GeometryCollectionNodes.FloatToDoubleDataflowNode
// Size: 0x100 (Inherited: 0xf0)
struct FFloatToDoubleDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	double Double; // 0xf8(0x08)
};

// ScriptStruct GeometryCollectionNodes.FloatToIntDataflowNode
// Size: 0x100 (Inherited: 0xf0)
struct FFloatToIntDataflowNode : FDataflowNode {
	enum class EFloatToIntFunctionEnum Function; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float float; // 0xf4(0x04)
	int32_t Int; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct GeometryCollectionNodes.IntToBoolDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FIntToBoolDataflowNode : FDataflowNode {
	int32_t Int; // 0xf0(0x04)
	bool bool; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
};

// ScriptStruct GeometryCollectionNodes.BoolToIntDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FBoolToIntDataflowNode : FDataflowNode {
	bool bool; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	int32_t Int; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.ConvexHullToMeshDataflowNode
// Size: 0x1c8 (Inherited: 0xf0)
struct FConvexHullToMeshDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FDataflowTransformSelection OptionalSelectionFilter; // 0x1a0(0x20)
	struct UDynamicMesh* Mesh; // 0x1c0(0x08)
};

// ScriptStruct GeometryCollectionNodes.SphereCoveringToMeshDataflowNode
// Size: 0x120 (Inherited: 0xf0)
struct FSphereCoveringToMeshDataflowNode : FDataflowNode {
	struct FDataflowSphereCovering SphereCovering; // 0xf0(0x20)
	int32_t VerticesAlongEachSide; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct UDynamicMesh* Mesh; // 0x118(0x08)
};

// ScriptStruct GeometryCollectionNodes.MeshToOBJStringDebugDataflowNode
// Size: 0x110 (Inherited: 0xf0)
struct FMeshToOBJStringDebugDataflowNode : FDataflowNode {
	struct UDynamicMesh* Mesh; // 0xf0(0x08)
	bool bInvertFaces; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FString StringOBJ; // 0x100(0x10)
};

// ScriptStruct GeometryCollectionNodes.WriteStringToFile
// Size: 0x110 (Inherited: 0xf0)
struct FWriteStringToFile : FDataflowNode {
	struct FString FilePath; // 0xf0(0x10)
	struct FString FileContents; // 0x100(0x10)
};

// ScriptStruct GeometryCollectionNodes.PruneInCollectionDataflowNode
// Size: 0x1c0 (Inherited: 0xf0)
struct FPruneInCollectionDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FDataflowTransformSelection TransformSelection; // 0x1a0(0x20)
};

// ScriptStruct GeometryCollectionNodes.SetVisibilityInCollectionDataflowNode
// Size: 0x1e8 (Inherited: 0xf0)
struct FSetVisibilityInCollectionDataflowNode : FDataflowNode {
	enum class EVisibiltyOptionsEnum Visibility; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct FManagedArrayCollection Collection; // 0xf8(0xb0)
	struct FDataflowTransformSelection TransformSelection; // 0x1a8(0x20)
	struct FDataflowFaceSelection FaceSelection; // 0x1c8(0x20)
};

// ScriptStruct GeometryCollectionNodes.MergeInCollectionDataflowNode
// Size: 0x1c0 (Inherited: 0xf0)
struct FMergeInCollectionDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FDataflowTransformSelection TransformSelection; // 0x1a0(0x20)
};

// ScriptStruct GeometryCollectionNodes.UniformScatterPointsDataflowNode
// Size: 0x148 (Inherited: 0xf0)
struct FUniformScatterPointsDataflowNode : FDataflowNode {
	int32_t MinNumberOfPoints; // 0xf0(0x04)
	int32_t MaxNumberOfPoints; // 0xf4(0x04)
	float RandomSeed; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FBox BoundingBox; // 0x100(0x38)
	struct TArray<struct FVector> Points; // 0x138(0x10)
};

// ScriptStruct GeometryCollectionNodes.RadialScatterPointsDataflowNode
// Size: 0x148 (Inherited: 0xf0)
struct FRadialScatterPointsDataflowNode : FDataflowNode {
	struct FVector Center; // 0xf0(0x18)
	struct FVector Normal; // 0x108(0x18)
	float Radius; // 0x120(0x04)
	int32_t AngularSteps; // 0x124(0x04)
	int32_t RadialSteps; // 0x128(0x04)
	float AngleOffset; // 0x12c(0x04)
	float Variability; // 0x130(0x04)
	float RandomSeed; // 0x134(0x04)
	struct TArray<struct FVector> Points; // 0x138(0x10)
};

// ScriptStruct GeometryCollectionNodes.VoronoiFractureDataflowNode
// Size: 0x200 (Inherited: 0xf0)
struct FVoronoiFractureDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct TArray<struct FVector> Points; // 0x1a0(0x10)
	struct FDataflowTransformSelection TransformSelection; // 0x1b0(0x20)
	float RandomSeed; // 0x1d0(0x04)
	float ChanceToFracture; // 0x1d4(0x04)
	bool GroupFracture; // 0x1d8(0x01)
	char pad_1D9[0x3]; // 0x1d9(0x03)
	float Grout; // 0x1dc(0x04)
	float Amplitude; // 0x1e0(0x04)
	float Frequency; // 0x1e4(0x04)
	float Persistence; // 0x1e8(0x04)
	float Lacunarity; // 0x1ec(0x04)
	int32_t OctaveNumber; // 0x1f0(0x04)
	float PointSpacing; // 0x1f4(0x04)
	bool AddSamplesForCollision; // 0x1f8(0x01)
	char pad_1F9[0x3]; // 0x1f9(0x03)
	float CollisionSampleSpacing; // 0x1fc(0x04)
};

// ScriptStruct GeometryCollectionNodes.PlaneCutterDataflowNode
// Size: 0x228 (Inherited: 0xf0)
struct FPlaneCutterDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FBox BoundingBox; // 0x1a0(0x38)
	struct FDataflowTransformSelection TransformSelection; // 0x1d8(0x20)
	int32_t NumPlanes; // 0x1f8(0x04)
	float RandomSeed; // 0x1fc(0x04)
	float Grout; // 0x200(0x04)
	float Amplitude; // 0x204(0x04)
	float Frequency; // 0x208(0x04)
	float Persistence; // 0x20c(0x04)
	float Lacunarity; // 0x210(0x04)
	int32_t OctaveNumber; // 0x214(0x04)
	float PointSpacing; // 0x218(0x04)
	bool AddSamplesForCollision; // 0x21c(0x01)
	char pad_21D[0x3]; // 0x21d(0x03)
	float CollisionSampleSpacing; // 0x220(0x04)
	char pad_224[0x4]; // 0x224(0x04)
};

// ScriptStruct GeometryCollectionNodes.ExplodedViewDataflowNode
// Size: 0x1c0 (Inherited: 0xf0)
struct FExplodedViewDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	float UniformScale; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct FVector Scale; // 0x1a8(0x18)
};

// ScriptStruct GeometryCollectionNodes.MakeLiteralStringDataflowNode
// Size: 0x110 (Inherited: 0xf0)
struct FMakeLiteralStringDataflowNode : FDataflowNode {
	struct FString Value; // 0xf0(0x10)
	struct FString String; // 0x100(0x10)
};

// ScriptStruct GeometryCollectionNodes.MakePointsDataflowNode
// Size: 0x110 (Inherited: 0xf0)
struct FMakePointsDataflowNode : FDataflowNode {
	struct TArray<struct FVector> Point; // 0xf0(0x10)
	struct TArray<struct FVector> Points; // 0x100(0x10)
};

// ScriptStruct GeometryCollectionNodes.MakeBoxDataflowNode
// Size: 0x190 (Inherited: 0xf0)
struct FMakeBoxDataflowNode : FDataflowNode {
	enum class EMakeBoxDataTypeEnum DataType; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct FVector Min; // 0xf8(0x18)
	struct FVector Max; // 0x110(0x18)
	struct FVector Center; // 0x128(0x18)
	struct FVector Size; // 0x140(0x18)
	struct FBox Box; // 0x158(0x38)
};

// ScriptStruct GeometryCollectionNodes.MakeSphereDataflowNode
// Size: 0x130 (Inherited: 0xf0)
struct FMakeSphereDataflowNode : FDataflowNode {
	struct FVector Center; // 0xf0(0x18)
	float Radius; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FSphere Sphere; // 0x110(0x20)
};

// ScriptStruct GeometryCollectionNodes.MakeLiteralFloatDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FMakeLiteralFloatDataflowNode : FDataflowNode {
	float Value; // 0xf0(0x04)
	float float; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.MakeLiteralIntDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FMakeLiteralIntDataflowNode : FDataflowNode {
	int32_t Value; // 0xf0(0x04)
	int32_t Int; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.MakeLiteralBoolDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FMakeLiteralBoolDataflowNode : FDataflowNode {
	bool Value; // 0xf0(0x01)
	bool bool; // 0xf1(0x01)
	char pad_F2[0x6]; // 0xf2(0x06)
};

// ScriptStruct GeometryCollectionNodes.MakeLiteralVectorDataflowNode
// Size: 0x118 (Inherited: 0xf0)
struct FMakeLiteralVectorDataflowNode : FDataflowNode {
	float X; // 0xf0(0x04)
	float Y; // 0xf4(0x04)
	float Z; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FVector Vector; // 0x100(0x18)
};

// ScriptStruct GeometryCollectionNodes.MakeTransformDataflowNode
// Size: 0x1a0 (Inherited: 0xf0)
struct FMakeTransformDataflowNode : FDataflowNode {
	struct FVector InTranslation; // 0xf0(0x18)
	struct FVector InRotation; // 0x108(0x18)
	struct FVector InScale; // 0x120(0x18)
	char pad_138[0x8]; // 0x138(0x08)
	struct FTransform OutTransform; // 0x140(0x60)
};

// ScriptStruct GeometryCollectionNodes.MakeQuaternionDataflowNode
// Size: 0x120 (Inherited: 0xf0)
struct FMakeQuaternionDataflowNode : FDataflowNode {
	float X; // 0xf0(0x04)
	float Y; // 0xf4(0x04)
	float Z; // 0xf8(0x04)
	float W; // 0xfc(0x04)
	struct FQuat Quaternion; // 0x100(0x20)
};

// ScriptStruct GeometryCollectionNodes.AddDataflowNode
// Size: 0x100 (Inherited: 0xf0)
struct FAddDataflowNode : FDataflowNode {
	float FloatA; // 0xf0(0x04)
	float FloatB; // 0xf4(0x04)
	float ReturnValue; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct GeometryCollectionNodes.SubtractDataflowNode
// Size: 0x100 (Inherited: 0xf0)
struct FSubtractDataflowNode : FDataflowNode {
	float FloatA; // 0xf0(0x04)
	float FloatB; // 0xf4(0x04)
	float ReturnValue; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct GeometryCollectionNodes.MultiplyDataflowNode
// Size: 0x100 (Inherited: 0xf0)
struct FMultiplyDataflowNode : FDataflowNode {
	float FloatA; // 0xf0(0x04)
	float FloatB; // 0xf4(0x04)
	float ReturnValue; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct GeometryCollectionNodes.SafeDivideDataflowNode
// Size: 0x100 (Inherited: 0xf0)
struct FSafeDivideDataflowNode : FDataflowNode {
	float FloatA; // 0xf0(0x04)
	float FloatB; // 0xf4(0x04)
	float ReturnValue; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct GeometryCollectionNodes.DivideDataflowNode
// Size: 0x100 (Inherited: 0x100)
struct FDivideDataflowNode : FSafeDivideDataflowNode {
};

// ScriptStruct GeometryCollectionNodes.DivisionDataflowNode
// Size: 0x100 (Inherited: 0xf0)
struct FDivisionDataflowNode : FDataflowNode {
	float Dividend; // 0xf0(0x04)
	float Divisor; // 0xf4(0x04)
	float Remainder; // 0xf8(0x04)
	int32_t ReturnValue; // 0xfc(0x04)
};

// ScriptStruct GeometryCollectionNodes.SafeReciprocalDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FSafeReciprocalDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	float ReturnValue; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.SquareDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FSquareDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	float ReturnValue; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.SquareRootDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FSquareRootDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	float ReturnValue; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.InverseSqrtDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FInverseSqrtDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	float ReturnValue; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.CubeDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FCubeDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	float ReturnValue; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.NegateDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FNegateDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	float ReturnValue; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.AbsDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FAbsDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	float ReturnValue; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.FloorDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FFloorDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	float ReturnValue; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.CeilDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FCeilDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	float ReturnValue; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.RoundDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FRoundDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	float ReturnValue; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.TruncDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FTruncDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	float ReturnValue; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.FracDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FFracDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	float ReturnValue; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.MinDataflowNode
// Size: 0x100 (Inherited: 0xf0)
struct FMinDataflowNode : FDataflowNode {
	float FloatA; // 0xf0(0x04)
	float FloatB; // 0xf4(0x04)
	float ReturnValue; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct GeometryCollectionNodes.MaxDataflowNode
// Size: 0x100 (Inherited: 0xf0)
struct FMaxDataflowNode : FDataflowNode {
	float FloatA; // 0xf0(0x04)
	float FloatB; // 0xf4(0x04)
	float ReturnValue; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct GeometryCollectionNodes.Min3DataflowNode
// Size: 0x100 (Inherited: 0xf0)
struct FMin3DataflowNode : FDataflowNode {
	float FloatA; // 0xf0(0x04)
	float FloatB; // 0xf4(0x04)
	float FloatC; // 0xf8(0x04)
	float ReturnValue; // 0xfc(0x04)
};

// ScriptStruct GeometryCollectionNodes.Max3DataflowNode
// Size: 0x100 (Inherited: 0xf0)
struct FMax3DataflowNode : FDataflowNode {
	float FloatA; // 0xf0(0x04)
	float FloatB; // 0xf4(0x04)
	float FloatC; // 0xf8(0x04)
	float ReturnValue; // 0xfc(0x04)
};

// ScriptStruct GeometryCollectionNodes.SignDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FSignDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	float ReturnValue; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.ClampDataflowNode
// Size: 0x100 (Inherited: 0xf0)
struct FClampDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	float Min; // 0xf4(0x04)
	float Max; // 0xf8(0x04)
	float ReturnValue; // 0xfc(0x04)
};

// ScriptStruct GeometryCollectionNodes.FitDataflowNode
// Size: 0x108 (Inherited: 0xf0)
struct FFitDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	float OldMin; // 0xf4(0x04)
	float OldMax; // 0xf8(0x04)
	float NewMin; // 0xfc(0x04)
	float NewMax; // 0x100(0x04)
	float ReturnValue; // 0x104(0x04)
};

// ScriptStruct GeometryCollectionNodes.EFitDataflowNode
// Size: 0x108 (Inherited: 0xf0)
struct FEFitDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	float OldMin; // 0xf4(0x04)
	float OldMax; // 0xf8(0x04)
	float NewMin; // 0xfc(0x04)
	float NewMax; // 0x100(0x04)
	float ReturnValue; // 0x104(0x04)
};

// ScriptStruct GeometryCollectionNodes.PowDataflowNode
// Size: 0x100 (Inherited: 0xf0)
struct FPowDataflowNode : FDataflowNode {
	float base; // 0xf0(0x04)
	float Exp; // 0xf4(0x04)
	float ReturnValue; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct GeometryCollectionNodes.LogDataflowNode
// Size: 0x100 (Inherited: 0xf0)
struct FLogDataflowNode : FDataflowNode {
	float base; // 0xf0(0x04)
	float A; // 0xf4(0x04)
	float ReturnValue; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct GeometryCollectionNodes.LogeDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FLogeDataflowNode : FDataflowNode {
	float A; // 0xf0(0x04)
	float ReturnValue; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.LerpDataflowNode
// Size: 0x100 (Inherited: 0xf0)
struct FLerpDataflowNode : FDataflowNode {
	float A; // 0xf0(0x04)
	float B; // 0xf4(0x04)
	float Alpha; // 0xf8(0x04)
	float ReturnValue; // 0xfc(0x04)
};

// ScriptStruct GeometryCollectionNodes.WrapDataflowNode
// Size: 0x100 (Inherited: 0xf0)
struct FWrapDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	float Min; // 0xf4(0x04)
	float Max; // 0xf8(0x04)
	float ReturnValue; // 0xfc(0x04)
};

// ScriptStruct GeometryCollectionNodes.ExpDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FExpDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	float ReturnValue; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.SinDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FSinDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	float ReturnValue; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.ArcSinDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FArcSinDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	float ReturnValue; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.CosDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FCosDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	float ReturnValue; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.ArcCosDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FArcCosDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	float ReturnValue; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.TanDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FTanDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	float ReturnValue; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.ArcTanDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FArcTanDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	float ReturnValue; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.ArcTan2DataflowNode
// Size: 0x100 (Inherited: 0xf0)
struct FArcTan2DataflowNode : FDataflowNode {
	float Y; // 0xf0(0x04)
	float X; // 0xf4(0x04)
	float ReturnValue; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct GeometryCollectionNodes.NormalizeToRangeDataflowNode
// Size: 0x100 (Inherited: 0xf0)
struct FNormalizeToRangeDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	float RangeMin; // 0xf4(0x04)
	float RangeMax; // 0xf8(0x04)
	float ReturnValue; // 0xfc(0x04)
};

// ScriptStruct GeometryCollectionNodes.ScaleVectorDataflowNode
// Size: 0x128 (Inherited: 0xf0)
struct FScaleVectorDataflowNode : FDataflowNode {
	struct FVector Vector; // 0xf0(0x18)
	float Scale; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FVector ScaledVector; // 0x110(0x18)
};

// ScriptStruct GeometryCollectionNodes.DotProductDataflowNode
// Size: 0x128 (Inherited: 0xf0)
struct FDotProductDataflowNode : FDataflowNode {
	struct FVector VectorA; // 0xf0(0x18)
	struct FVector VectorB; // 0x108(0x18)
	float ReturnValue; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
};

// ScriptStruct GeometryCollectionNodes.CrossProductDataflowNode
// Size: 0x138 (Inherited: 0xf0)
struct FCrossProductDataflowNode : FDataflowNode {
	struct FVector VectorA; // 0xf0(0x18)
	struct FVector VectorB; // 0x108(0x18)
	struct FVector ReturnValue; // 0x120(0x18)
};

// ScriptStruct GeometryCollectionNodes.NormalizeDataflowNode
// Size: 0x128 (Inherited: 0xf0)
struct FNormalizeDataflowNode : FDataflowNode {
	struct FVector VectorA; // 0xf0(0x18)
	float Tolerance; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct FVector ReturnValue; // 0x110(0x18)
};

// ScriptStruct GeometryCollectionNodes.LengthDataflowNode
// Size: 0x110 (Inherited: 0xf0)
struct FLengthDataflowNode : FDataflowNode {
	struct FVector Vector; // 0xf0(0x18)
	float ReturnValue; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// ScriptStruct GeometryCollectionNodes.DistanceDataflowNode
// Size: 0x128 (Inherited: 0xf0)
struct FDistanceDataflowNode : FDataflowNode {
	struct FVector PointA; // 0xf0(0x18)
	struct FVector PointB; // 0x108(0x18)
	float ReturnValue; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
};

// ScriptStruct GeometryCollectionNodes.IsNearlyZeroDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FIsNearlyZeroDataflowNode : FDataflowNode {
	float float; // 0xf0(0x04)
	bool ReturnValue; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
};

// ScriptStruct GeometryCollectionNodes.RandomFloatDataflowNode
// Size: 0x100 (Inherited: 0xf0)
struct FRandomFloatDataflowNode : FDataflowNode {
	bool bDeterministic; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float RandomSeed; // 0xf4(0x04)
	float ReturnValue; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct GeometryCollectionNodes.RandomFloatInRangeDataflowNode
// Size: 0x108 (Inherited: 0xf0)
struct FRandomFloatInRangeDataflowNode : FDataflowNode {
	bool bDeterministic; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float RandomSeed; // 0xf4(0x04)
	float Min; // 0xf8(0x04)
	float Max; // 0xfc(0x04)
	float ReturnValue; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// ScriptStruct GeometryCollectionNodes.RandomUnitVectorDataflowNode
// Size: 0x110 (Inherited: 0xf0)
struct FRandomUnitVectorDataflowNode : FDataflowNode {
	bool bDeterministic; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float RandomSeed; // 0xf4(0x04)
	struct FVector ReturnValue; // 0xf8(0x18)
};

// ScriptStruct GeometryCollectionNodes.RandomUnitVectorInConeDataflowNode
// Size: 0x130 (Inherited: 0xf0)
struct FRandomUnitVectorInConeDataflowNode : FDataflowNode {
	bool bDeterministic; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float RandomSeed; // 0xf4(0x04)
	struct FVector ConeDirection; // 0xf8(0x18)
	float ConeHalfAngle; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct FVector ReturnValue; // 0x118(0x18)
};

// ScriptStruct GeometryCollectionNodes.RadiansToDegreesDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FRadiansToDegreesDataflowNode : FDataflowNode {
	float Radians; // 0xf0(0x04)
	float Degrees; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.DegreesToRadiansDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FDegreesToRadiansDataflowNode : FDataflowNode {
	float Degrees; // 0xf0(0x04)
	float Radians; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.MathConstantsDataflowNode
// Size: 0xf8 (Inherited: 0xf0)
struct FMathConstantsDataflowNode : FDataflowNode {
	enum class EMathConstantsEnum Constant; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float ReturnValue; // 0xf4(0x04)
};

// ScriptStruct GeometryCollectionNodes.PointsToMeshDataflowNode
// Size: 0x110 (Inherited: 0xf0)
struct FPointsToMeshDataflowNode : FDataflowNode {
	struct TArray<struct FVector> Points; // 0xf0(0x10)
	struct UDynamicMesh* Mesh; // 0x100(0x08)
	int32_t TriangleCount; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// ScriptStruct GeometryCollectionNodes.BoxToMeshDataflowNode
// Size: 0x138 (Inherited: 0xf0)
struct FBoxToMeshDataflowNode : FDataflowNode {
	struct FBox Box; // 0xf0(0x38)
	struct UDynamicMesh* Mesh; // 0x128(0x08)
	int32_t TriangleCount; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
};

// ScriptStruct GeometryCollectionNodes.MeshInfoDataflowNode
// Size: 0x108 (Inherited: 0xf0)
struct FMeshInfoDataflowNode : FDataflowNode {
	struct UDynamicMesh* Mesh; // 0xf0(0x08)
	struct FString InfoString; // 0xf8(0x10)
};

// ScriptStruct GeometryCollectionNodes.MeshToCollectionDataflowNode
// Size: 0x1a8 (Inherited: 0xf0)
struct FMeshToCollectionDataflowNode : FDataflowNode {
	struct UDynamicMesh* Mesh; // 0xf0(0x08)
	struct FManagedArrayCollection Collection; // 0xf8(0xb0)
};

// ScriptStruct GeometryCollectionNodes.CollectionToMeshDataflowNode
// Size: 0x1b0 (Inherited: 0xf0)
struct FCollectionToMeshDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	bool bCenterPivot; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	struct UDynamicMesh* Mesh; // 0x1a8(0x08)
};

// ScriptStruct GeometryCollectionNodes.StaticMeshToMeshDataflowNode
// Size: 0x108 (Inherited: 0xf0)
struct FStaticMeshToMeshDataflowNode : FDataflowNode {
	struct UStaticMesh* StaticMesh; // 0xf0(0x08)
	bool bUseHiRes; // 0xf8(0x01)
	char pad_F9[0x3]; // 0xf9(0x03)
	int32_t LODLevel; // 0xfc(0x04)
	struct UDynamicMesh* Mesh; // 0x100(0x08)
};

// ScriptStruct GeometryCollectionNodes.MeshAppendDataflowNode
// Size: 0x108 (Inherited: 0xf0)
struct FMeshAppendDataflowNode : FDataflowNode {
	struct UDynamicMesh* Mesh1; // 0xf0(0x08)
	struct UDynamicMesh* Mesh2; // 0xf8(0x08)
	struct UDynamicMesh* Mesh; // 0x100(0x08)
};

// ScriptStruct GeometryCollectionNodes.MeshBooleanDataflowNode
// Size: 0x110 (Inherited: 0xf0)
struct FMeshBooleanDataflowNode : FDataflowNode {
	enum class EMeshBooleanOperationEnum Operation; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct UDynamicMesh* Mesh1; // 0xf8(0x08)
	struct UDynamicMesh* Mesh2; // 0x100(0x08)
	struct UDynamicMesh* Mesh; // 0x108(0x08)
};

// ScriptStruct GeometryCollectionNodes.MeshCopyToPointsDataflowNode
// Size: 0x118 (Inherited: 0xf0)
struct FMeshCopyToPointsDataflowNode : FDataflowNode {
	struct TArray<struct FVector> Points; // 0xf0(0x10)
	struct UDynamicMesh* MeshToCopy; // 0x100(0x08)
	float Scale; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct UDynamicMesh* Mesh; // 0x110(0x08)
};

// ScriptStruct GeometryCollectionNodes.GetMeshDataDataflowNode
// Size: 0x108 (Inherited: 0xf0)
struct FGetMeshDataDataflowNode : FDataflowNode {
	struct UDynamicMesh* Mesh; // 0xf0(0x08)
	int32_t VertexCount; // 0xf8(0x04)
	int32_t EdgeCount; // 0xfc(0x04)
	int32_t TriangleCount; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// ScriptStruct GeometryCollectionNodes.GetCollectionFromAssetDataflowNode
// Size: 0x1a8 (Inherited: 0xf0)
struct FGetCollectionFromAssetDataflowNode : FDataflowNode {
	struct UGeometryCollection* CollectionAsset; // 0xf0(0x08)
	struct FManagedArrayCollection Collection; // 0xf8(0xb0)
};

// ScriptStruct GeometryCollectionNodes.AppendCollectionAssetsDataflowNode
// Size: 0x270 (Inherited: 0xf0)
struct FAppendCollectionAssetsDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection1; // 0xf0(0xb0)
	struct FManagedArrayCollection Collection2; // 0x1a0(0xb0)
	struct TArray<struct FString> GeometryGroupGuidsOut1; // 0x250(0x10)
	struct TArray<struct FString> GeometryGroupGuidsOut2; // 0x260(0x10)
};

// ScriptStruct GeometryCollectionNodes.PrintStringDataflowNode
// Size: 0x110 (Inherited: 0xf0)
struct FPrintStringDataflowNode : FDataflowNode {
	bool bPrintToScreen; // 0xf0(0x01)
	bool bPrintToLog; // 0xf1(0x01)
	char pad_F2[0x2]; // 0xf2(0x02)
	struct FColor Color; // 0xf4(0x04)
	float Duration; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FString String; // 0x100(0x10)
};

// ScriptStruct GeometryCollectionNodes.LogStringDataflowNode
// Size: 0x108 (Inherited: 0xf0)
struct FLogStringDataflowNode : FDataflowNode {
	bool bPrintToLog; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct FString String; // 0xf8(0x10)
};

// ScriptStruct GeometryCollectionNodes.BoundingBoxDataflowNode
// Size: 0x1d8 (Inherited: 0xf0)
struct FBoundingBoxDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FBox BoundingBox; // 0x1a0(0x38)
};

// ScriptStruct GeometryCollectionNodes.GetBoxLengthsDataflowNode
// Size: 0x118 (Inherited: 0xf0)
struct FGetBoxLengthsDataflowNode : FDataflowNode {
	struct TArray<struct FBox> Boxes; // 0xf0(0x10)
	struct TArray<float> Lengths; // 0x100(0x10)
	enum class EBoxLengthMeasurementMethod MeasurementMethod; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
};

// ScriptStruct GeometryCollectionNodes.ExpandBoundingBoxDataflowNode
// Size: 0x190 (Inherited: 0xf0)
struct FExpandBoundingBoxDataflowNode : FDataflowNode {
	struct FBox BoundingBox; // 0xf0(0x38)
	struct FVector Min; // 0x128(0x18)
	struct FVector Max; // 0x140(0x18)
	struct FVector Center; // 0x158(0x18)
	struct FVector HalfExtents; // 0x170(0x18)
	float Volume; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
};

// ScriptStruct GeometryCollectionNodes.ExpandVectorDataflowNode
// Size: 0x118 (Inherited: 0xf0)
struct FExpandVectorDataflowNode : FDataflowNode {
	struct FVector Vector; // 0xf0(0x18)
	float X; // 0x108(0x04)
	float Y; // 0x10c(0x04)
	float Z; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// ScriptStruct GeometryCollectionNodes.StringAppendDataflowNode
// Size: 0x120 (Inherited: 0xf0)
struct FStringAppendDataflowNode : FDataflowNode {
	struct FString String1; // 0xf0(0x10)
	struct FString String2; // 0x100(0x10)
	struct FString String; // 0x110(0x10)
};

// ScriptStruct GeometryCollectionNodes.HashStringDataflowNode
// Size: 0x108 (Inherited: 0xf0)
struct FHashStringDataflowNode : FDataflowNode {
	struct FString String; // 0xf0(0x10)
	int32_t Hash; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// ScriptStruct GeometryCollectionNodes.HashVectorDataflowNode
// Size: 0x110 (Inherited: 0xf0)
struct FHashVectorDataflowNode : FDataflowNode {
	struct FVector Vector; // 0xf0(0x18)
	int32_t Hash; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// ScriptStruct GeometryCollectionNodes.GetBoundingBoxesFromCollectionDataflowNode
// Size: 0x1d0 (Inherited: 0xf0)
struct FGetBoundingBoxesFromCollectionDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FDataflowTransformSelection TransformSelection; // 0x1a0(0x20)
	struct TArray<struct FBox> BoundingBoxes; // 0x1c0(0x10)
};

// ScriptStruct GeometryCollectionNodes.GetRootIndexFromCollectionDataflowNode
// Size: 0x1a8 (Inherited: 0xf0)
struct FGetRootIndexFromCollectionDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	int32_t RootIndex; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
};

// ScriptStruct GeometryCollectionNodes.GetCentroidsFromCollectionDataflowNode
// Size: 0x1d0 (Inherited: 0xf0)
struct FGetCentroidsFromCollectionDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FDataflowTransformSelection TransformSelection; // 0x1a0(0x20)
	struct TArray<struct FVector> Centroids; // 0x1c0(0x10)
};

// ScriptStruct GeometryCollectionNodes.TransformCollectionDataflowNode
// Size: 0x230 (Inherited: 0xf0)
struct FTransformCollectionDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FVector Translate; // 0x1a0(0x18)
	enum class ERotationOrderEnum RotationOrder; // 0x1b8(0x01)
	char pad_1B9[0x7]; // 0x1b9(0x07)
	struct FVector Rotate; // 0x1c0(0x18)
	struct FVector Scale; // 0x1d8(0x18)
	float UniformScale; // 0x1f0(0x04)
	char pad_1F4[0x4]; // 0x1f4(0x04)
	struct FVector RotatePivot; // 0x1f8(0x18)
	struct FVector ScalePivot; // 0x210(0x18)
	bool bInvertTransformation; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
};

// ScriptStruct GeometryCollectionNodes.BakeTransformsInCollectionDataflowNode
// Size: 0x1a0 (Inherited: 0xf0)
struct FBakeTransformsInCollectionDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
};

// ScriptStruct GeometryCollectionNodes.TransformMeshDataflowNode
// Size: 0x188 (Inherited: 0xf0)
struct FTransformMeshDataflowNode : FDataflowNode {
	struct UDynamicMesh* Mesh; // 0xf0(0x08)
	struct FVector Translate; // 0xf8(0x18)
	enum class ERotationOrderEnum RotationOrder; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FVector Rotate; // 0x118(0x18)
	struct FVector Scale; // 0x130(0x18)
	float UniformScale; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FVector RotatePivot; // 0x150(0x18)
	struct FVector ScalePivot; // 0x168(0x18)
	bool bInvertTransformation; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
};

// ScriptStruct GeometryCollectionNodes.CompareIntDataflowNode
// Size: 0x100 (Inherited: 0xf0)
struct FCompareIntDataflowNode : FDataflowNode {
	enum class ECompareOperationEnum Operation; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	int32_t IntA; // 0xf4(0x04)
	int32_t IntB; // 0xf8(0x04)
	bool Result; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
};

// ScriptStruct GeometryCollectionNodes.CompareFloatDataflowNode
// Size: 0x100 (Inherited: 0xf0)
struct FCompareFloatDataflowNode : FDataflowNode {
	enum class ECompareOperationEnum Operation; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float FloatA; // 0xf4(0x04)
	float FloatB; // 0xf8(0x04)
	bool Result; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
};

// ScriptStruct GeometryCollectionNodes.BranchDataflowNode
// Size: 0x110 (Inherited: 0xf0)
struct FBranchDataflowNode : FDataflowNode {
	struct UDynamicMesh* MeshA; // 0xf0(0x08)
	struct UDynamicMesh* MeshB; // 0xf8(0x08)
	bool bCondition; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct UDynamicMesh* Mesh; // 0x108(0x08)
};

// ScriptStruct GeometryCollectionNodes.BranchCollectionDataflowNode
// Size: 0x308 (Inherited: 0xf0)
struct FBranchCollectionDataflowNode : FDataflowNode {
	struct FManagedArrayCollection TrueCollection; // 0xf0(0xb0)
	struct FManagedArrayCollection FalseCollection; // 0x1a0(0xb0)
	bool bCondition; // 0x250(0x01)
	char pad_251[0x7]; // 0x251(0x07)
	struct FManagedArrayCollection ChosenCollection; // 0x258(0xb0)
};

// ScriptStruct GeometryCollectionNodes.GetSchemaDataflowNode
// Size: 0x1b0 (Inherited: 0xf0)
struct FGetSchemaDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FString String; // 0x1a0(0x10)
};

// ScriptStruct GeometryCollectionNodes.RemoveOnBreakDataflowNode
// Size: 0x1d8 (Inherited: 0xf0)
struct FRemoveOnBreakDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FDataflowTransformSelection TransformSelection; // 0x1a0(0x20)
	bool bEnabledRemoval; // 0x1c0(0x01)
	char pad_1C1[0x3]; // 0x1c1(0x03)
	struct FVector2f PostBreakTimer; // 0x1c4(0x08)
	struct FVector2f RemovalTimer; // 0x1cc(0x08)
	bool bClusterCrumbling; // 0x1d4(0x01)
	char pad_1D5[0x3]; // 0x1d5(0x03)
};

// ScriptStruct GeometryCollectionNodes.SetAnchorStateDataflowNode
// Size: 0x1c8 (Inherited: 0xf0)
struct FSetAnchorStateDataflowNode : FDataflowNode {
	enum class EAnchorStateEnum AnchorState; // 0xf0(0x01)
	bool bSetNotSelectedBonesToOppositeState; // 0xf1(0x01)
	char pad_F2[0x6]; // 0xf2(0x06)
	struct FManagedArrayCollection Collection; // 0xf8(0xb0)
	struct FDataflowTransformSelection TransformSelection; // 0x1a8(0x20)
};

// ScriptStruct GeometryCollectionNodes.ProximityDataflowNode
// Size: 0x1b0 (Inherited: 0xf0)
struct FProximityDataflowNode : FDataflowNode {
	enum class EProximityMethodEnum ProximityMethod; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float DistanceThreshold; // 0xf4(0x04)
	float ContactThreshold; // 0xf8(0x04)
	enum class EProximityContactFilteringMethodEnum FilterContactMethod; // 0xfc(0x01)
	bool bUseAsConnectionGraph; // 0xfd(0x01)
	enum class EConnectionContactAreaMethodEnum ContactAreaMethod; // 0xfe(0x01)
	char pad_FF[0x1]; // 0xff(0x01)
	struct FManagedArrayCollection Collection; // 0x100(0xb0)
};

// ScriptStruct GeometryCollectionNodes.CollectionSetPivotDataflowNode
// Size: 0x200 (Inherited: 0xf0)
struct FCollectionSetPivotDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FTransform Transform; // 0x1a0(0x60)
};

// ScriptStruct GeometryCollectionNodes.AddCustomCollectionAttributeDataflowNode
// Size: 0x1d0 (Inherited: 0xf0)
struct FAddCustomCollectionAttributeDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	enum class EStandardGroupNameEnum GroupName; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	struct FString CustomGroupName; // 0x1a8(0x10)
	struct FString AttrName; // 0x1b8(0x10)
	enum class ECustomAttributeTypeEnum CustomAttributeType; // 0x1c8(0x01)
	char pad_1C9[0x3]; // 0x1c9(0x03)
	int32_t NumElements; // 0x1cc(0x04)
};

// ScriptStruct GeometryCollectionNodes.GetNumElementsInCollectionGroupDataflowNode
// Size: 0x1c0 (Inherited: 0xf0)
struct FGetNumElementsInCollectionGroupDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	enum class EStandardGroupNameEnum GroupName; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	struct FString CustomGroupName; // 0x1a8(0x10)
	int32_t NumElements; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
};

// ScriptStruct GeometryCollectionNodes.GetCollectionAttributeDataTypedDataflowNode
// Size: 0x238 (Inherited: 0xf0)
struct FGetCollectionAttributeDataTypedDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	enum class EStandardGroupNameEnum GroupName; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	struct FString CustomGroupName; // 0x1a8(0x10)
	struct FString AttrName; // 0x1b8(0x10)
	struct TArray<bool> BoolAttributeData; // 0x1c8(0x10)
	struct TArray<float> FloatAttributeData; // 0x1d8(0x10)
	struct TArray<double> DoubleAttributeData; // 0x1e8(0x10)
	struct TArray<int32_t> Int32AttributeData; // 0x1f8(0x10)
	struct TArray<struct FString> StringAttributeData; // 0x208(0x10)
	struct TArray<struct FVector3f> Vector3fAttributeData; // 0x218(0x10)
	struct TArray<struct FVector3d> Vector3dAttributeData; // 0x228(0x10)
};

// ScriptStruct GeometryCollectionNodes.SetCollectionAttributeDataTypedDataflowNode
// Size: 0x238 (Inherited: 0xf0)
struct FSetCollectionAttributeDataTypedDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	enum class EStandardGroupNameEnum GroupName; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	struct FString CustomGroupName; // 0x1a8(0x10)
	struct FString AttrName; // 0x1b8(0x10)
	struct TArray<bool> BoolAttributeData; // 0x1c8(0x10)
	struct TArray<float> FloatAttributeData; // 0x1d8(0x10)
	struct TArray<double> DoubleAttributeData; // 0x1e8(0x10)
	struct TArray<int32_t> Int32AttributeData; // 0x1f8(0x10)
	struct TArray<struct FString> StringAttributeData; // 0x208(0x10)
	struct TArray<struct FVector3f> Vector3fAttributeData; // 0x218(0x10)
	struct TArray<struct FVector3d> Vector3dAttributeData; // 0x228(0x10)
};

// ScriptStruct GeometryCollectionNodes.SetVertexColorInCollectionFromVertexSelectionDataflowNode
// Size: 0x1e0 (Inherited: 0xf0)
struct FSetVertexColorInCollectionFromVertexSelectionDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FDataflowVertexSelection VertexSelection; // 0x1a0(0x20)
	struct FLinearColor SelectedColor; // 0x1c0(0x10)
	struct FLinearColor NonSelectedColor; // 0x1d0(0x10)
};

// ScriptStruct GeometryCollectionNodes.SelectionToVertexListDataflowNode
// Size: 0x120 (Inherited: 0xf0)
struct FSelectionToVertexListDataflowNode : FDataflowNode {
	struct FDataflowVertexSelection VertexSelection; // 0xf0(0x20)
	struct TArray<int32_t> VertexList; // 0x110(0x10)
};

// ScriptStruct GeometryCollectionNodes.SetVertexColorInCollectionFromFloatArrayDataflowNode
// Size: 0x1b8 (Inherited: 0xf0)
struct FSetVertexColorInCollectionFromFloatArrayDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct TArray<float> FloatArray; // 0x1a0(0x10)
	float Scale; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
};

// ScriptStruct GeometryCollectionNodes.MultiplyTransformDataflowNode
// Size: 0x210 (Inherited: 0xf0)
struct FMultiplyTransformDataflowNode : FDataflowNode {
	struct FTransform InLeftTransform; // 0xf0(0x60)
	struct FTransform InRightTransform; // 0x150(0x60)
	struct FTransform OutTransform; // 0x1b0(0x60)
};

// ScriptStruct GeometryCollectionNodes.InvertTransformDataflowNode
// Size: 0x1b0 (Inherited: 0xf0)
struct FInvertTransformDataflowNode : FDataflowNode {
	struct FTransform InTransform; // 0xf0(0x60)
	struct FTransform OutTransform; // 0x150(0x60)
};

// ScriptStruct GeometryCollectionNodes.GetFloatOverrideFromAssetDataflowNode
// Size: 0x120 (Inherited: 0x118)
struct FGetFloatOverrideFromAssetDataflowNode : FDataflowOverrideNode {
	float float; // 0x118(0x04)
	float FloatDefault; // 0x11c(0x04)
};

// ScriptStruct GeometryCollectionNodes.GetIntOverrideFromAssetDataflowNode
// Size: 0x120 (Inherited: 0x118)
struct FGetIntOverrideFromAssetDataflowNode : FDataflowOverrideNode {
	int32_t Int; // 0x118(0x04)
	int32_t IntDefault; // 0x11c(0x04)
};

// ScriptStruct GeometryCollectionNodes.GetBoolOverrideFromAssetDataflowNode
// Size: 0x120 (Inherited: 0x118)
struct FGetBoolOverrideFromAssetDataflowNode : FDataflowOverrideNode {
	bool bool; // 0x118(0x01)
	bool BoolDefault; // 0x119(0x01)
	char pad_11A[0x6]; // 0x11a(0x06)
};

// ScriptStruct GeometryCollectionNodes.GetStringOverrideFromAssetDataflowNode
// Size: 0x138 (Inherited: 0x118)
struct FGetStringOverrideFromAssetDataflowNode : FDataflowOverrideNode {
	struct FString String; // 0x118(0x10)
	struct FString StringDefault; // 0x128(0x10)
};

// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionAllDataflowNode
// Size: 0x1c0 (Inherited: 0xf0)
struct FCollectionTransformSelectionAllDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FDataflowTransformSelection TransformSelection; // 0x1a0(0x20)
};

// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionSetOperationDataflowNode
// Size: 0x158 (Inherited: 0xf0)
struct FCollectionTransformSelectionSetOperationDataflowNode : FDataflowNode {
	enum class ESetOperationEnum Operation; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct FDataflowTransformSelection TransformSelectionA; // 0xf8(0x20)
	struct FDataflowTransformSelection TransformSelectionB; // 0x118(0x20)
	struct FDataflowTransformSelection TransformSelection; // 0x138(0x20)
};

// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionInfoDataflowNode
// Size: 0x1d0 (Inherited: 0xf0)
struct FCollectionTransformSelectionInfoDataflowNode : FDataflowNode {
	struct FDataflowTransformSelection TransformSelection; // 0xf0(0x20)
	struct FManagedArrayCollection Collection; // 0x110(0xb0)
	struct FString String; // 0x1c0(0x10)
};

// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionNoneDataflowNode
// Size: 0x1c0 (Inherited: 0xf0)
struct FCollectionTransformSelectionNoneDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FDataflowTransformSelection TransformSelection; // 0x1a0(0x20)
};

// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionInvertDataflowNode
// Size: 0x110 (Inherited: 0xf0)
struct FCollectionTransformSelectionInvertDataflowNode : FDataflowNode {
	struct FDataflowTransformSelection TransformSelection; // 0xf0(0x20)
};

// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionRandomDataflowNode
// Size: 0x1d0 (Inherited: 0xf0)
struct FCollectionTransformSelectionRandomDataflowNode : FDataflowNode {
	bool bDeterministic; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float RandomSeed; // 0xf4(0x04)
	float RandomThreshold; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FManagedArrayCollection Collection; // 0x100(0xb0)
	struct FDataflowTransformSelection TransformSelection; // 0x1b0(0x20)
};

// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionRootDataflowNode
// Size: 0x1c0 (Inherited: 0xf0)
struct FCollectionTransformSelectionRootDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FDataflowTransformSelection TransformSelection; // 0x1a0(0x20)
};

// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionCustomDataflowNode
// Size: 0x1d0 (Inherited: 0xf0)
struct FCollectionTransformSelectionCustomDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FString BoneIndicies; // 0x1a0(0x10)
	struct FDataflowTransformSelection TransformSelection; // 0x1b0(0x20)
};

// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionFromIndexArrayDataflowNode
// Size: 0x1d0 (Inherited: 0xf0)
struct FCollectionTransformSelectionFromIndexArrayDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct TArray<int32_t> BoneIndices; // 0x1a0(0x10)
	struct FDataflowTransformSelection TransformSelection; // 0x1b0(0x20)
};

// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionParentDataflowNode
// Size: 0x1c0 (Inherited: 0xf0)
struct FCollectionTransformSelectionParentDataflowNode : FDataflowNode {
	struct FDataflowTransformSelection TransformSelection; // 0xf0(0x20)
	struct FManagedArrayCollection Collection; // 0x110(0xb0)
};

// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionByPercentageDataflowNode
// Size: 0x120 (Inherited: 0xf0)
struct FCollectionTransformSelectionByPercentageDataflowNode : FDataflowNode {
	struct FDataflowTransformSelection TransformSelection; // 0xf0(0x20)
	int32_t Percentage; // 0x110(0x04)
	bool bDeterministic; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	float RandomSeed; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionChildrenDataflowNode
// Size: 0x1c0 (Inherited: 0xf0)
struct FCollectionTransformSelectionChildrenDataflowNode : FDataflowNode {
	struct FDataflowTransformSelection TransformSelection; // 0xf0(0x20)
	struct FManagedArrayCollection Collection; // 0x110(0xb0)
};

// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionSiblingsDataflowNode
// Size: 0x1c0 (Inherited: 0xf0)
struct FCollectionTransformSelectionSiblingsDataflowNode : FDataflowNode {
	struct FDataflowTransformSelection TransformSelection; // 0xf0(0x20)
	struct FManagedArrayCollection Collection; // 0x110(0xb0)
};

// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionLevelDataflowNode
// Size: 0x1c0 (Inherited: 0xf0)
struct FCollectionTransformSelectionLevelDataflowNode : FDataflowNode {
	struct FDataflowTransformSelection TransformSelection; // 0xf0(0x20)
	struct FManagedArrayCollection Collection; // 0x110(0xb0)
};

// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionTargetLevelDataflowNode
// Size: 0x1c8 (Inherited: 0xf0)
struct FCollectionTransformSelectionTargetLevelDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	int32_t TargetLevel; // 0x1a0(0x04)
	bool bSkipEmbedded; // 0x1a4(0x01)
	char pad_1A5[0x3]; // 0x1a5(0x03)
	struct FDataflowTransformSelection TransformSelection; // 0x1a8(0x20)
};

// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionContactDataflowNode
// Size: 0x1c0 (Inherited: 0xf0)
struct FCollectionTransformSelectionContactDataflowNode : FDataflowNode {
	struct FDataflowTransformSelection TransformSelection; // 0xf0(0x20)
	struct FManagedArrayCollection Collection; // 0x110(0xb0)
};

// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionLeafDataflowNode
// Size: 0x1c0 (Inherited: 0xf0)
struct FCollectionTransformSelectionLeafDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FDataflowTransformSelection TransformSelection; // 0x1a0(0x20)
};

// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionClusterDataflowNode
// Size: 0x1c0 (Inherited: 0xf0)
struct FCollectionTransformSelectionClusterDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FDataflowTransformSelection TransformSelection; // 0x1a0(0x20)
};

// ScriptStruct GeometryCollectionNodes.SelectFloatArrayIndicesInRangeDataflowNode
// Size: 0x120 (Inherited: 0xf0)
struct FSelectFloatArrayIndicesInRangeDataflowNode : FDataflowNode {
	struct TArray<float> Values; // 0xf0(0x10)
	float Min; // 0x100(0x04)
	float Max; // 0x104(0x04)
	enum class ERangeSettingEnum RangeSetting; // 0x108(0x01)
	bool bInclusive; // 0x109(0x01)
	char pad_10A[0x6]; // 0x10a(0x06)
	struct TArray<int32_t> Indices; // 0x110(0x10)
};

// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionBySizeDataflowNode
// Size: 0x1d0 (Inherited: 0xf0)
struct FCollectionTransformSelectionBySizeDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	float SizeMin; // 0x1a0(0x04)
	float SizeMax; // 0x1a4(0x04)
	enum class ERangeSettingEnum RangeSetting; // 0x1a8(0x01)
	bool bInclusive; // 0x1a9(0x01)
	bool bUseRelativeSize; // 0x1aa(0x01)
	char pad_1AB[0x5]; // 0x1ab(0x05)
	struct FDataflowTransformSelection TransformSelection; // 0x1b0(0x20)
};

// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionByVolumeDataflowNode
// Size: 0x1d0 (Inherited: 0xf0)
struct FCollectionTransformSelectionByVolumeDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	float VolumeMin; // 0x1a0(0x04)
	float VolumeMax; // 0x1a4(0x04)
	enum class ERangeSettingEnum RangeSetting; // 0x1a8(0x01)
	bool bInclusive; // 0x1a9(0x01)
	char pad_1AA[0x6]; // 0x1aa(0x06)
	struct FDataflowTransformSelection TransformSelection; // 0x1b0(0x20)
};

// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionInBoxDataflowNode
// Size: 0x270 (Inherited: 0xf0)
struct FCollectionTransformSelectionInBoxDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FBox Box; // 0x1a0(0x38)
	char pad_1D8[0x8]; // 0x1d8(0x08)
	struct FTransform Transform; // 0x1e0(0x60)
	enum class ESelectSubjectTypeEnum Type; // 0x240(0x01)
	bool bAllVerticesMustContainedInBox; // 0x241(0x01)
	char pad_242[0x6]; // 0x242(0x06)
	struct FDataflowTransformSelection TransformSelection; // 0x248(0x20)
	char pad_268[0x8]; // 0x268(0x08)
};

// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionInSphereDataflowNode
// Size: 0x250 (Inherited: 0xf0)
struct FCollectionTransformSelectionInSphereDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FSphere Sphere; // 0x1a0(0x20)
	struct FTransform Transform; // 0x1c0(0x60)
	enum class ESelectSubjectTypeEnum Type; // 0x220(0x01)
	bool bAllVerticesMustContainedInSphere; // 0x221(0x01)
	char pad_222[0x6]; // 0x222(0x06)
	struct FDataflowTransformSelection TransformSelection; // 0x228(0x20)
	char pad_248[0x8]; // 0x248(0x08)
};

// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionByFloatAttrDataflowNode
// Size: 0x1f0 (Inherited: 0xf0)
struct FCollectionTransformSelectionByFloatAttrDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FString GroupName; // 0x1a0(0x10)
	struct FString AttrName; // 0x1b0(0x10)
	float Min; // 0x1c0(0x04)
	float Max; // 0x1c4(0x04)
	enum class ERangeSettingEnum RangeSetting; // 0x1c8(0x01)
	bool bInclusive; // 0x1c9(0x01)
	char pad_1CA[0x6]; // 0x1ca(0x06)
	struct FDataflowTransformSelection TransformSelection; // 0x1d0(0x20)
};

// ScriptStruct GeometryCollectionNodes.CollectionTransformSelectionByIntAttrDataflowNode
// Size: 0x1f0 (Inherited: 0xf0)
struct FCollectionTransformSelectionByIntAttrDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FString GroupName; // 0x1a0(0x10)
	struct FString AttrName; // 0x1b0(0x10)
	int32_t Min; // 0x1c0(0x04)
	int32_t Max; // 0x1c4(0x04)
	enum class ERangeSettingEnum RangeSetting; // 0x1c8(0x01)
	bool bInclusive; // 0x1c9(0x01)
	char pad_1CA[0x6]; // 0x1ca(0x06)
	struct FDataflowTransformSelection TransformSelection; // 0x1d0(0x20)
};

// ScriptStruct GeometryCollectionNodes.CollectionVertexSelectionCustomDataflowNode
// Size: 0x1d0 (Inherited: 0xf0)
struct FCollectionVertexSelectionCustomDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FString VertexIndicies; // 0x1a0(0x10)
	struct FDataflowVertexSelection VertexSelection; // 0x1b0(0x20)
};

// ScriptStruct GeometryCollectionNodes.CollectionFaceSelectionCustomDataflowNode
// Size: 0x1d0 (Inherited: 0xf0)
struct FCollectionFaceSelectionCustomDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FString FaceIndicies; // 0x1a0(0x10)
	struct FDataflowFaceSelection FaceSelection; // 0x1b0(0x20)
};

// ScriptStruct GeometryCollectionNodes.CollectionSelectionConvertDataflowNode
// Size: 0x208 (Inherited: 0xf0)
struct FCollectionSelectionConvertDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FDataflowTransformSelection TransformSelection; // 0x1a0(0x20)
	struct FDataflowFaceSelection FaceSelection; // 0x1c0(0x20)
	struct FDataflowVertexSelection VertexSelection; // 0x1e0(0x20)
	bool bAllElementsMustBeSelected; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
};

// ScriptStruct GeometryCollectionNodes.CollectionFaceSelectionInvertDataflowNode
// Size: 0x110 (Inherited: 0xf0)
struct FCollectionFaceSelectionInvertDataflowNode : FDataflowNode {
	struct FDataflowFaceSelection FaceSelection; // 0xf0(0x20)
};

// ScriptStruct GeometryCollectionNodes.CollectionVertexSelectionByPercentageDataflowNode
// Size: 0x120 (Inherited: 0xf0)
struct FCollectionVertexSelectionByPercentageDataflowNode : FDataflowNode {
	struct FDataflowVertexSelection VertexSelection; // 0xf0(0x20)
	int32_t Percentage; // 0x110(0x04)
	bool bDeterministic; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	float RandomSeed; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// ScriptStruct GeometryCollectionNodes.CollectionVertexSelectionSetOperationDataflowNode
// Size: 0x158 (Inherited: 0xf0)
struct FCollectionVertexSelectionSetOperationDataflowNode : FDataflowNode {
	enum class ESetOperationEnum Operation; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct FDataflowVertexSelection VertexSelectionA; // 0xf8(0x20)
	struct FDataflowVertexSelection VertexSelectionB; // 0x118(0x20)
	struct FDataflowVertexSelection VertexSelection; // 0x138(0x20)
};

// ScriptStruct GeometryCollectionNodes.TransformCollectionAttributeDataflowNode
// Size: 0x280 (Inherited: 0xf0)
struct FTransformCollectionAttributeDataflowNode : FDataflowNode {
	struct FManagedArrayCollection Collection; // 0xf0(0xb0)
	struct FTransform TransformIn; // 0x1a0(0x60)
	struct FTransform LocalTransform; // 0x200(0x60)
	struct FString GroupName; // 0x260(0x10)
	struct FString AttributeName; // 0x270(0x10)
};

