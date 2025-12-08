// Enum RigVM.ERigVMPinDirection
enum class ERigVMPinDirection : uint8 {
	Input = 0,
	Output = 1,
	IO = 2,
	Visible = 3,
	Hidden = 4,
	Invalid = 5,
	ERigVMPinDirection_MAX = 6
};

// Enum RigVM.ERigVMFunctionArgumentDirection
enum class ERigVMFunctionArgumentDirection : uint8 {
	Input = 0,
	Output = 1,
	Invalid = 2,
	ERigVMFunctionArgumentDirection_MAX = 3
};

// Enum RigVM.ERigVMTransformSpace
enum class ERigVMTransformSpace : uint8 {
	LocalSpace = 0,
	GlobalSpace = 1,
	Max = 2,
	ERigVMTransformSpace_MAX = 3
};

// Enum RigVM.ERigVMClampSpatialMode
enum class ERigVMClampSpatialMode : uint8 {
	Plane = 0,
	Cylinder = 1,
	Sphere = 2,
	ERigVMClampSpatialMode_MAX = 3
};

// Enum RigVM.ERigVMParameterType
enum class ERigVMParameterType : uint8 {
	Input = 0,
	Output = 1,
	Invalid = 2,
	ERigVMParameterType_MAX = 3
};

// Enum RigVM.ERigVMOpCode
enum class ERigVMOpCode : uint8 {
	Execute_0_Operands = 0,
	Execute_1_Operands = 1,
	Execute_2_Operands = 2,
	Execute_3_Operands = 3,
	Execute_4_Operands = 4,
	Execute_5_Operands = 5,
	Execute_6_Operands = 6,
	Execute_7_Operands = 7,
	Execute_8_Operands = 8,
	Execute_9_Operands = 9,
	Execute_10_Operands = 10,
	Execute_11_Operands = 11,
	Execute_12_Operands = 12,
	Execute_13_Operands = 13,
	Execute_14_Operands = 14,
	Execute_15_Operands = 15,
	Execute_16_Operands = 16,
	Execute_17_Operands = 17,
	Execute_18_Operands = 18,
	Execute_19_Operands = 19,
	Execute_20_Operands = 20,
	Execute_21_Operands = 21,
	Execute_22_Operands = 22,
	Execute_23_Operands = 23,
	Execute_24_Operands = 24,
	Execute_25_Operands = 25,
	Execute_26_Operands = 26,
	Execute_27_Operands = 27,
	Execute_28_Operands = 28,
	Execute_29_Operands = 29,
	Execute_30_Operands = 30,
	Execute_31_Operands = 31,
	Execute_32_Operands = 32,
	Execute_33_Operands = 33,
	Execute_34_Operands = 34,
	Execute_35_Operands = 35,
	Execute_36_Operands = 36,
	Execute_37_Operands = 37,
	Execute_38_Operands = 38,
	Execute_39_Operands = 39,
	Execute_40_Operands = 40,
	Execute_41_Operands = 41,
	Execute_42_Operands = 42,
	Execute_43_Operands = 43,
	Execute_44_Operands = 44,
	Execute_45_Operands = 45,
	Execute_46_Operands = 46,
	Execute_47_Operands = 47,
	Execute_48_Operands = 48,
	Execute_49_Operands = 49,
	Execute_50_Operands = 50,
	Execute_51_Operands = 51,
	Execute_52_Operands = 52,
	Execute_53_Operands = 53,
	Execute_54_Operands = 54,
	Execute_55_Operands = 55,
	Execute_56_Operands = 56,
	Execute_57_Operands = 57,
	Execute_58_Operands = 58,
	Execute_59_Operands = 59,
	Execute_60_Operands = 60,
	Execute_61_Operands = 61,
	Execute_62_Operands = 62,
	Execute_63_Operands = 63,
	Execute_64_Operands = 64,
	Zero = 65,
	BoolFalse = 66,
	BoolTrue = 67,
	Copy = 68,
	Increment = 69,
	Decrement = 70,
	Equals = 71,
	NotEquals = 72,
	JumpAbsolute = 73,
	JumpForward = 74,
	JumpBackward = 75,
	JumpAbsoluteIf = 76,
	JumpForwardIf = 77,
	JumpBackwardIf = 78,
	ChangeType = 79,
	Exit = 80,
	BeginBlock = 81,
	EndBlock = 82,
	ArrayReset = 83,
	ArrayGetNum = 84,
	ArraySetNum = 85,
	ArrayGetAtIndex = 86,
	ArraySetAtIndex = 87,
	ArrayAdd = 88,
	ArrayInsert = 89,
	ArrayRemove = 90,
	ArrayFind = 91,
	ArrayAppend = 92,
	ArrayClone = 93,
	ArrayIterator = 94,
	ArrayUnion = 95,
	ArrayDifference = 96,
	ArrayIntersection = 97,
	ArrayReverse = 98,
	InvokeEntry = 99,
	JumpToBranch = 100,
	Execute = 101,
	Invalid = 102,
	FirstArrayOpCode = 83,
	LastArrayOpCode = 98,
	ERigVMOpCode_MAX = 103
};

// Enum RigVM.ERigVMCopyType
enum class ERigVMCopyType : uint8 {
	Default = 0,
	FloatToDouble = 1,
	DoubleToFloat = 2,
	ERigVMCopyType_MAX = 3
};

// Enum RigVM.ERigVMBreakpointAction
enum class ERigVMBreakpointAction : uint8 {
	None = 0,
	Resume = 1,
	StepOver = 2,
	StepInto = 3,
	StepOut = 4,
	Max = 5,
	ERigVMBreakpointAction_MAX = 6
};

// Enum RigVM.ERigVMDrawSettings
enum class ERigVMDrawSettings : uint8 {
	Points = 0,
	Lines = 1,
	LineStrip = 2,
	DynamicMesh = 3,
	ERigVMDrawSettings_MAX = 4
};

// Enum RigVM.ERigVMMemoryType
enum class ERigVMMemoryType : uint8 {
	Work = 0,
	Literal = 1,
	External = 2,
	Debug = 3,
	Invalid = 4,
	ERigVMMemoryType_MAX = 5
};

// Enum RigVM.ERigVMRegisterType
enum class ERigVMRegisterType : uint8 {
	Plain = 0,
	String = 1,
	Name = 2,
	Struct = 3,
	Invalid = 4,
	ERigVMRegisterType_MAX = 5
};

// Enum RigVM.ERigVMUserWorkflowType
enum class ERigVMUserWorkflowType : uint8 {
	Invalid = 0,
	NodeContext = 1,
	PinContext = 2,
	OnPinDefaultChanged = 4,
	All = 7,
	ERigVMUserWorkflowType_MAX = 8
};

// Enum RigVM.ERigUnitDebugPointMode
enum class ERigUnitDebugPointMode : uint8 {
	Point = 0,
	Vector = 1,
	Max = 2,
	ERigUnitDebugPointMode_MAX = 3
};

// Enum RigVM.ERigUnitDebugTransformMode
enum class ERigUnitDebugTransformMode : uint8 {
	Point = 0,
	Axes = 1,
	Box = 2,
	Max = 3,
	ERigUnitDebugTransformMode_MAX = 4
};

// Enum RigVM.ERigUnitVisualDebugPointMode
enum class ERigUnitVisualDebugPointMode : uint8 {
	Point = 0,
	Vector = 1,
	Max = 2,
	ERigUnitVisualDebugPointMode_MAX = 3
};

// Enum RigVM.ERBFKernelType
enum class ERBFKernelType : uint8 {
	Gaussian = 0,
	Exponential = 1,
	Linear = 2,
	Cubic = 3,
	Quintic = 4,
	ERBFKernelType_MAX = 5
};

// Enum RigVM.ERBFQuatDistanceType
enum class ERBFQuatDistanceType : uint8 {
	Euclidean = 0,
	ArcLength = 1,
	SwingAngle = 2,
	TwistAngle = 3,
	ERBFQuatDistanceType_MAX = 4
};

// Enum RigVM.ERBFVectorDistanceType
enum class ERBFVectorDistanceType : uint8 {
	Euclidean = 0,
	Manhattan = 1,
	ArcLength = 2,
	ERBFVectorDistanceType_MAX = 3
};

// Enum RigVM.ERigVMAnimEasingType
enum class ERigVMAnimEasingType : uint8 {
	Linear = 0,
	QuadraticEaseIn = 1,
	QuadraticEaseOut = 2,
	QuadraticEaseInOut = 3,
	CubicEaseIn = 4,
	CubicEaseOut = 5,
	CubicEaseInOut = 6,
	QuarticEaseIn = 7,
	QuarticEaseOut = 8,
	QuarticEaseInOut = 9,
	QuinticEaseIn = 10,
	QuinticEaseOut = 11,
	QuinticEaseInOut = 12,
	SineEaseIn = 13,
	SineEaseOut = 14,
	SineEaseInOut = 15,
	CircularEaseIn = 16,
	CircularEaseOut = 17,
	CircularEaseInOut = 18,
	ExponentialEaseIn = 19,
	ExponentialEaseOut = 20,
	ExponentialEaseInOut = 21,
	ElasticEaseIn = 22,
	ElasticEaseOut = 23,
	ElasticEaseInOut = 24,
	BackEaseIn = 25,
	BackEaseOut = 26,
	BackEaseInOut = 27,
	BounceEaseIn = 28,
	BounceEaseOut = 29,
	BounceEaseInOut = 30,
	ERigVMAnimEasingType_MAX = 31
};

// Enum RigVM.ERigVMSimPointIntegrateType
enum class ERigVMSimPointIntegrateType : uint8 {
	Verlet = 0,
	SemiExplicitEuler = 1,
	ERigVMSimPointIntegrateType_MAX = 2
};

// ScriptStruct RigVM.RigVMExtendedExecuteContext
// Size: 0x1c0 (Inherited: 0x00)
struct FRigVMExtendedExecuteContext {
	char pad_0[0x8]; // 0x00(0x08)
	uint32_t VMHash; // 0x08(0x04)
	char pad_C[0x104]; // 0x0c(0x104)
	uint32_t NumExecutions; // 0x110(0x04)
	char pad_114[0x64]; // 0x114(0x64)
	struct URigVM* DeferredVMToCopy; // 0x178(0x08)
	char pad_180[0x40]; // 0x180(0x40)
};

// ScriptStruct RigVM.RigVMDrawContainer
// Size: 0x18 (Inherited: 0x00)
struct FRigVMDrawContainer {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FRigVMDrawInstruction> Instructions; // 0x08(0x10)
};

// ScriptStruct RigVM.RigVMDrawInstruction
// Size: 0xd0 (Inherited: 0x00)
struct FRigVMDrawInstruction {
	struct FName Name; // 0x00(0x0c)
	enum class ERigVMDrawSettings PrimitiveType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<struct FVector> Positions; // 0x10(0x10)
	struct FLinearColor Color; // 0x20(0x10)
	float Thickness; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
	struct FTransform Transform; // 0x40(0x60)
	char pad_A0[0x30]; // 0xa0(0x30)
};

// ScriptStruct RigVM.RigVMRuntimeSettings
// Size: 0x18 (Inherited: 0x00)
struct FRigVMRuntimeSettings {
	int32_t MaximumArraySize; // 0x00(0x04)
	char pad_4[0x14]; // 0x04(0x14)
};

// ScriptStruct RigVM.RigVMStruct
// Size: 0x08 (Inherited: 0x00)
struct FRigVMStruct {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct RigVM.RigVMDecorator
// Size: 0x20 (Inherited: 0x08)
struct FRigVMDecorator : FRigVMStruct {
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct RigVM.RigVMExternalVariableDef
// Size: 0x38 (Inherited: 0x00)
struct FRigVMExternalVariableDef {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct RigVM.RigVMExternalVariable
// Size: 0x40 (Inherited: 0x38)
struct FRigVMExternalVariable : FRigVMExternalVariableDef {
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct RigVM.RigVMFunction_AnimBase
// Size: 0x08 (Inherited: 0x08)
struct FRigVMFunction_AnimBase : FRigVMStruct {
};

// ScriptStruct RigVM.RigVMFunction_DebugBase
// Size: 0x08 (Inherited: 0x08)
struct FRigVMFunction_DebugBase : FRigVMStruct {
};

// ScriptStruct RigVM.RigVMStructMutable
// Size: 0x110 (Inherited: 0x08)
struct FRigVMStructMutable : FRigVMStruct {
	char pad_8[0x8]; // 0x08(0x08)
	struct FRigVMExecuteContext ExecuteContext; // 0x10(0x100)
};

// ScriptStruct RigVM.RigVMExecuteContext
// Size: 0x100 (Inherited: 0x00)
struct FRigVMExecuteContext {
	char pad_0[0x100]; // 0x00(0x100)
};

// ScriptStruct RigVM.RigVMFunction_DebugBaseMutable
// Size: 0x110 (Inherited: 0x110)
struct FRigVMFunction_DebugBaseMutable : FRigVMStructMutable {
};

// ScriptStruct RigVM.RigVMFunction_MathBase
// Size: 0x08 (Inherited: 0x08)
struct FRigVMFunction_MathBase : FRigVMStruct {
};

// ScriptStruct RigVM.RigVMFunction_MathMutableBase
// Size: 0x110 (Inherited: 0x110)
struct FRigVMFunction_MathMutableBase : FRigVMStructMutable {
};

// ScriptStruct RigVM.RigVMFunction_Sequence
// Size: 0x310 (Inherited: 0x08)
struct FRigVMFunction_Sequence : FRigVMStruct {
	char pad_8[0x8]; // 0x08(0x08)
	struct FRigVMExecuteContext ExecuteContext; // 0x10(0x100)
	struct FRigVMExecuteContext A; // 0x110(0x100)
	struct FRigVMExecuteContext B; // 0x210(0x100)
};

// ScriptStruct RigVM.RigVMDispatchFactory
// Size: 0x70 (Inherited: 0x00)
struct FRigVMDispatchFactory {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct RigVM.RigVMUnknownType
// Size: 0x04 (Inherited: 0x00)
struct FRigVMUnknownType {
	uint32_t Hash; // 0x00(0x04)
};

// ScriptStruct RigVM.RigVMFunction_SimBase
// Size: 0x08 (Inherited: 0x08)
struct FRigVMFunction_SimBase : FRigVMStruct {
};

// ScriptStruct RigVM.RigVMFunction_SimBaseMutable
// Size: 0x110 (Inherited: 0x110)
struct FRigVMFunction_SimBaseMutable : FRigVMStructMutable {
};

// ScriptStruct RigVM.RigVMGraphFunctionStore
// Size: 0x20 (Inherited: 0x00)
struct FRigVMGraphFunctionStore {
	struct TArray<struct FRigVMGraphFunctionData> PublicFunctions; // 0x00(0x10)
	struct TArray<struct FRigVMGraphFunctionData> PrivateFunctions; // 0x10(0x10)
};

// ScriptStruct RigVM.RigVMGraphFunctionData
// Size: 0x360 (Inherited: 0x00)
struct FRigVMGraphFunctionData {
	struct FRigVMGraphFunctionHeader Header; // 0x00(0x128)
	struct FRigVMFunctionCompilationData CompilationData; // 0x128(0x228)
	struct FString SerializedCollapsedNode; // 0x350(0x10)
};

// ScriptStruct RigVM.RigVMFunctionCompilationData
// Size: 0x228 (Inherited: 0x00)
struct FRigVMFunctionCompilationData {
	struct FRigVMByteCode ByteCode; // 0x00(0xa0)
	struct TArray<struct FName> FunctionNames; // 0xa0(0x10)
	struct TArray<struct FRigVMFunctionCompilationPropertyDescription> WorkPropertyDescriptions; // 0xb0(0x10)
	struct TArray<struct FRigVMFunctionCompilationPropertyPath> WorkPropertyPathDescriptions; // 0xc0(0x10)
	struct TArray<struct FRigVMFunctionCompilationPropertyDescription> LiteralPropertyDescriptions; // 0xd0(0x10)
	struct TArray<struct FRigVMFunctionCompilationPropertyPath> LiteralPropertyPathDescriptions; // 0xe0(0x10)
	struct TArray<struct FRigVMFunctionCompilationPropertyDescription> DebugPropertyDescriptions; // 0xf0(0x10)
	struct TArray<struct FRigVMFunctionCompilationPropertyPath> DebugPropertyPathDescriptions; // 0x100(0x10)
	struct TArray<struct FRigVMFunctionCompilationPropertyDescription> ExternalPropertyDescriptions; // 0x110(0x10)
	struct TArray<struct FRigVMFunctionCompilationPropertyPath> ExternalPropertyPathDescriptions; // 0x120(0x10)
	struct TMap<int32_t, struct FName> ExternalRegisterIndexToVariable; // 0x130(0x50)
	struct TMap<struct FString, struct FRigVMOperand> Operands; // 0x180(0x50)
	uint32_t Hash; // 0x1d0(0x04)
	char pad_1D4[0x54]; // 0x1d4(0x54)
};

// ScriptStruct RigVM.RigVMOperand
// Size: 0x06 (Inherited: 0x00)
struct FRigVMOperand {
	enum class ERigVMMemoryType MemoryType; // 0x00(0x01)
	char pad_1[0x1]; // 0x01(0x01)
	uint16_t RegisterIndex; // 0x02(0x02)
	uint16_t RegisterOffset; // 0x04(0x02)
};

// ScriptStruct RigVM.RigVMFunctionCompilationPropertyPath
// Size: 0x28 (Inherited: 0x00)
struct FRigVMFunctionCompilationPropertyPath {
	int32_t PropertyIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString HeadCPPType; // 0x08(0x10)
	struct FString SegmentPath; // 0x18(0x10)
};

// ScriptStruct RigVM.RigVMFunctionCompilationPropertyDescription
// Size: 0x60 (Inherited: 0x00)
struct FRigVMFunctionCompilationPropertyDescription {
	struct FName Name; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString CPPType; // 0x10(0x10)
	struct TSoftObjectPtr<UObject> CPPTypeObject; // 0x20(0x30)
	struct FString DefaultValue; // 0x50(0x10)
};

// ScriptStruct RigVM.RigVMByteCode
// Size: 0xa0 (Inherited: 0x00)
struct FRigVMByteCode {
	struct TArray<char> ByteCode; // 0x00(0x10)
	int32_t NumInstructions; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FRigVMByteCodeEntry> Entries; // 0x18(0x10)
	struct TArray<struct FRigVMBranchInfo> BranchInfos; // 0x28(0x10)
	struct TArray<struct FRigVMPredicateBranch> PredicateBranches; // 0x38(0x10)
	char pad_48[0x58]; // 0x48(0x58)
};

// ScriptStruct RigVM.RigVMPredicateBranch
// Size: 0x38 (Inherited: 0x00)
struct FRigVMPredicateBranch {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct RigVM.RigVMBranchInfo
// Size: 0x1c (Inherited: 0x00)
struct FRigVMBranchInfo {
	int32_t Index; // 0x00(0x04)
	struct FName Label; // 0x04(0x0c)
	int32_t InstructionIndex; // 0x10(0x04)
	int32_t ArgumentIndex; // 0x14(0x04)
	uint16_t FirstInstruction; // 0x18(0x02)
	uint16_t LastInstruction; // 0x1a(0x02)
};

// ScriptStruct RigVM.RigVMByteCodeEntry
// Size: 0x10 (Inherited: 0x00)
struct FRigVMByteCodeEntry {
	struct FName Name; // 0x00(0x0c)
	int32_t InstructionIndex; // 0x0c(0x04)
};

// ScriptStruct RigVM.RigVMGraphFunctionHeader
// Size: 0x128 (Inherited: 0x00)
struct FRigVMGraphFunctionHeader {
	struct FRigVMGraphFunctionIdentifier LibraryPointer; // 0x00(0x50)
	struct FName Name; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FString NodeTitle; // 0x60(0x10)
	struct FLinearColor NodeColor; // 0x70(0x10)
	struct FText ToolTip; // 0x80(0x18)
	struct FString Category; // 0x98(0x10)
	struct FString Keywords; // 0xa8(0x10)
	struct TArray<struct FRigVMGraphFunctionArgument> Arguments; // 0xb8(0x10)
	struct TMap<struct FRigVMGraphFunctionIdentifier, uint32_t> Dependencies; // 0xc8(0x50)
	struct TArray<struct FRigVMExternalVariable> ExternalVariables; // 0x118(0x10)
};

// ScriptStruct RigVM.RigVMGraphFunctionIdentifier
// Size: 0x50 (Inherited: 0x00)
struct FRigVMGraphFunctionIdentifier {
	struct FSoftObjectPath LibraryNode; // 0x00(0x28)
	struct FSoftObjectPath HostObject; // 0x28(0x28)
};

// ScriptStruct RigVM.RigVMGraphFunctionArgument
// Size: 0xc8 (Inherited: 0x00)
struct FRigVMGraphFunctionArgument {
	struct FName Name; // 0x00(0x0c)
	struct FName DisplayName; // 0x0c(0x0c)
	struct FName CPPType; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct TSoftObjectPtr<UObject> CPPTypeObject; // 0x28(0x30)
	bool bIsArray; // 0x58(0x01)
	enum class ERigVMPinDirection Direction; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
	struct FString DefaultValue; // 0x60(0x10)
	bool bIsConst; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TMap<struct FString, struct FText> PathToTooltip; // 0x78(0x50)
};

// ScriptStruct RigVM.RigVMMemoryStatistics
// Size: 0x0c (Inherited: 0x00)
struct FRigVMMemoryStatistics {
	int32_t RegisterCount; // 0x00(0x04)
	int32_t DataBytes; // 0x04(0x04)
	int32_t TotalBytes; // 0x08(0x04)
};

// ScriptStruct RigVM.RigVMByteCodeStatistics
// Size: 0x08 (Inherited: 0x00)
struct FRigVMByteCodeStatistics {
	int32_t InstructionCount; // 0x00(0x04)
	int32_t DataBytes; // 0x04(0x04)
};

// ScriptStruct RigVM.RigVMStatistics
// Size: 0x38 (Inherited: 0x00)
struct FRigVMStatistics {
	int32_t BytesForCDO; // 0x00(0x04)
	int32_t BytesPerInstance; // 0x04(0x04)
	struct FRigVMMemoryStatistics LiteralMemory; // 0x08(0x0c)
	struct FRigVMMemoryStatistics WorkMemory; // 0x14(0x0c)
	struct FRigVMMemoryStatistics DebugMemory; // 0x20(0x0c)
	int32_t BytesForCaching; // 0x2c(0x04)
	struct FRigVMByteCodeStatistics ByteCode; // 0x30(0x08)
};

// ScriptStruct RigVM.RigVMParameter
// Size: 0x40 (Inherited: 0x00)
struct FRigVMParameter {
	enum class ERigVMParameterType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x0c)
	int32_t RegisterIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString CPPType; // 0x18(0x10)
	struct UScriptStruct* ScriptStruct; // 0x28(0x08)
	struct FName ScriptStructPath; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct RigVM.RigVMBaseOp
// Size: 0x01 (Inherited: 0x00)
struct FRigVMBaseOp {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct RigVM.RigVMExecuteOp
// Size: 0x0a (Inherited: 0x01)
struct FRigVMExecuteOp : FRigVMBaseOp {
	char pad_1[0x9]; // 0x01(0x09)
};

// ScriptStruct RigVM.RigVMUnaryOp
// Size: 0x08 (Inherited: 0x01)
struct FRigVMUnaryOp : FRigVMBaseOp {
	char pad_1[0x7]; // 0x01(0x07)
};

// ScriptStruct RigVM.RigVMBinaryOp
// Size: 0x0e (Inherited: 0x01)
struct FRigVMBinaryOp : FRigVMBaseOp {
	char pad_1[0xd]; // 0x01(0x0d)
};

// ScriptStruct RigVM.RigVMTernaryOp
// Size: 0x14 (Inherited: 0x01)
struct FRigVMTernaryOp : FRigVMBaseOp {
	char pad_1[0x13]; // 0x01(0x13)
};

// ScriptStruct RigVM.RigVMQuaternaryOp
// Size: 0x1a (Inherited: 0x01)
struct FRigVMQuaternaryOp : FRigVMBaseOp {
	char pad_1[0x19]; // 0x01(0x19)
};

// ScriptStruct RigVM.RigVMQuinaryOp
// Size: 0x20 (Inherited: 0x01)
struct FRigVMQuinaryOp : FRigVMBaseOp {
	char pad_1[0x1f]; // 0x01(0x1f)
};

// ScriptStruct RigVM.RigVMSenaryOp
// Size: 0x26 (Inherited: 0x01)
struct FRigVMSenaryOp : FRigVMBaseOp {
	char pad_1[0x25]; // 0x01(0x25)
};

// ScriptStruct RigVM.RigVMCopyOp
// Size: 0x12 (Inherited: 0x01)
struct FRigVMCopyOp : FRigVMBaseOp {
	char pad_1[0x11]; // 0x01(0x11)
};

// ScriptStruct RigVM.RigVMComparisonOp
// Size: 0x14 (Inherited: 0x01)
struct FRigVMComparisonOp : FRigVMBaseOp {
	char pad_1[0x13]; // 0x01(0x13)
};

// ScriptStruct RigVM.RigVMJumpOp
// Size: 0x08 (Inherited: 0x01)
struct FRigVMJumpOp : FRigVMBaseOp {
	char pad_1[0x7]; // 0x01(0x07)
};

// ScriptStruct RigVM.RigVMJumpIfOp
// Size: 0x10 (Inherited: 0x08)
struct FRigVMJumpIfOp : FRigVMUnaryOp {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct RigVM.RigVMChangeTypeOp
// Size: 0x08 (Inherited: 0x08)
struct FRigVMChangeTypeOp : FRigVMUnaryOp {
};

// ScriptStruct RigVM.RigVMInvokeEntryOp
// Size: 0x10 (Inherited: 0x01)
struct FRigVMInvokeEntryOp : FRigVMBaseOp {
	char pad_1[0xf]; // 0x01(0x0f)
};

// ScriptStruct RigVM.RigVMJumpToBranchOp
// Size: 0x0c (Inherited: 0x08)
struct FRigVMJumpToBranchOp : FRigVMUnaryOp {
	char pad_8[0x4]; // 0x08(0x04)
};

// ScriptStruct RigVM.RigVMInstruction
// Size: 0x10 (Inherited: 0x00)
struct FRigVMInstruction {
	uint64_t ByteCodeIndex; // 0x00(0x08)
	enum class ERigVMOpCode OpCode; // 0x08(0x01)
	char OperandAlignment; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct RigVM.RigVMInstructionArray
// Size: 0x10 (Inherited: 0x00)
struct FRigVMInstructionArray {
	struct TArray<struct FRigVMInstruction> Instructions; // 0x00(0x10)
};

// ScriptStruct RigVM.RigVMBreakpoint
// Size: 0x28 (Inherited: 0x00)
struct FRigVMBreakpoint {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct RigVM.RigVMDebugInfo
// Size: 0xf8 (Inherited: 0x00)
struct FRigVMDebugInfo {
	char pad_0[0xf8]; // 0x00(0xf8)
};

// ScriptStruct RigVM.RigVMDrawInterface
// Size: 0x18 (Inherited: 0x18)
struct FRigVMDrawInterface : FRigVMDrawContainer {
};

// ScriptStruct RigVM.RigVMSlice
// Size: 0x14 (Inherited: 0x00)
struct FRigVMSlice {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct RigVM.RigVMRegister
// Size: 0x28 (Inherited: 0x00)
struct FRigVMRegister {
	enum class ERigVMRegisterType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t ByteIndex; // 0x04(0x04)
	uint16_t ElementSize; // 0x08(0x02)
	uint16_t ElementCount; // 0x0a(0x02)
	uint16_t SliceCount; // 0x0c(0x02)
	char AlignmentBytes; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	uint16_t TrailingBytes; // 0x10(0x02)
	char pad_12[0x2]; // 0x12(0x02)
	struct FName Name; // 0x14(0x0c)
	int32_t ScriptStructIndex; // 0x20(0x04)
	bool bIsArray; // 0x24(0x01)
	bool bIsDynamic; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
};

// ScriptStruct RigVM.RigVMRegisterOffset
// Size: 0x48 (Inherited: 0x00)
struct FRigVMRegisterOffset {
	struct TArray<int32_t> Segments; // 0x00(0x10)
	enum class ERigVMRegisterType Type; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName CPPType; // 0x14(0x0c)
	struct UScriptStruct* ScriptStruct; // 0x20(0x08)
	struct UScriptStruct* ParentScriptStruct; // 0x28(0x08)
	int32_t ArrayIndex; // 0x30(0x04)
	uint16_t ElementSize; // 0x34(0x02)
	char pad_36[0x2]; // 0x36(0x02)
	struct FString CachedSegmentPath; // 0x38(0x10)
};

// ScriptStruct RigVM.RigVMMemoryContainer
// Size: 0xa0 (Inherited: 0x00)
struct FRigVMMemoryContainer {
	bool bUseNameMap; // 0x00(0x01)
	enum class ERigVMMemoryType MemoryType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FRigVMRegister> Registers; // 0x08(0x10)
	struct TArray<struct FRigVMRegisterOffset> RegisterOffsets; // 0x18(0x10)
	struct TArray<char> Data; // 0x28(0x10)
	struct TArray<struct UScriptStruct*> ScriptStructs; // 0x38(0x10)
	struct TMap<struct FName, int32_t> NameMap; // 0x48(0x50)
	bool bEncounteredErrorDuringLoad; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
};

// ScriptStruct RigVM.RigVMTemplateArgumentType
// Size: 0x18 (Inherited: 0x00)
struct FRigVMTemplateArgumentType {
	struct FName CPPType; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UObject* CPPTypeObject; // 0x10(0x08)
};

// ScriptStruct RigVM.RigVMUserWorkflow
// Size: 0x60 (Inherited: 0x00)
struct FRigVMUserWorkflow {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString Title; // 0x08(0x10)
	struct FString ToolTip; // 0x18(0x10)
	enum class ERigVMUserWorkflowType Type; // 0x28(0x01)
	char pad_29[0x17]; // 0x29(0x17)
	struct FDelegate PerformDynamicDelegate; // 0x40(0x14)
	char pad_54[0x4]; // 0x54(0x04)
	ClassPtrProperty OptionsClass; // 0x58(0x08)
};

// ScriptStruct RigVM.RigVMFunction_AnimEasingType
// Size: 0x10 (Inherited: 0x08)
struct FRigVMFunction_AnimEasingType : FRigVMFunction_AnimBase {
	enum class ERigVMAnimEasingType Type; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct RigVM.RigVMFunction_AnimEasing
// Size: 0x28 (Inherited: 0x08)
struct FRigVMFunction_AnimEasing : FRigVMFunction_AnimBase {
	float Value; // 0x08(0x04)
	enum class ERigVMAnimEasingType Type; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float SourceMinimum; // 0x10(0x04)
	float SourceMaximum; // 0x14(0x04)
	float TargetMinimum; // 0x18(0x04)
	float TargetMaximum; // 0x1c(0x04)
	float Result; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct RigVM.RigVMFunction_AnimEvalRichCurve
// Size: 0xb0 (Inherited: 0x08)
struct FRigVMFunction_AnimEvalRichCurve : FRigVMFunction_AnimBase {
	float Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FRuntimeFloatCurve Curve; // 0x10(0x88)
	float SourceMinimum; // 0x98(0x04)
	float SourceMaximum; // 0x9c(0x04)
	float TargetMinimum; // 0xa0(0x04)
	float TargetMaximum; // 0xa4(0x04)
	float Result; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct RigVM.RigVMFunction_AnimRichCurve
// Size: 0x90 (Inherited: 0x08)
struct FRigVMFunction_AnimRichCurve : FRigVMFunction_AnimBase {
	struct FRuntimeFloatCurve Curve; // 0x08(0x88)
};

// ScriptStruct RigVM.RigVMFunction_GetDeltaTime
// Size: 0x10 (Inherited: 0x08)
struct FRigVMFunction_GetDeltaTime : FRigVMFunction_AnimBase {
	float Result; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_GetWorldTime
// Size: 0x28 (Inherited: 0x08)
struct FRigVMFunction_GetWorldTime : FRigVMFunction_AnimBase {
	float Year; // 0x08(0x04)
	float Month; // 0x0c(0x04)
	float Day; // 0x10(0x04)
	float WeekDay; // 0x14(0x04)
	float Hours; // 0x18(0x04)
	float Minutes; // 0x1c(0x04)
	float Seconds; // 0x20(0x04)
	float OverallSeconds; // 0x24(0x04)
};

// ScriptStruct RigVM.RigVMFunction_FramesToSeconds
// Size: 0x10 (Inherited: 0x08)
struct FRigVMFunction_FramesToSeconds : FRigVMFunction_AnimBase {
	float Frames; // 0x08(0x04)
	float Seconds; // 0x0c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_SecondsToFrames
// Size: 0x10 (Inherited: 0x08)
struct FRigVMFunction_SecondsToFrames : FRigVMFunction_AnimBase {
	float Seconds; // 0x08(0x04)
	float Frames; // 0x0c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_DebugLineNoSpace
// Size: 0x1d0 (Inherited: 0x110)
struct FRigVMFunction_DebugLineNoSpace : FRigVMFunction_DebugBaseMutable {
	struct FVector A; // 0x110(0x18)
	struct FVector B; // 0x128(0x18)
	struct FLinearColor Color; // 0x140(0x10)
	float Thickness; // 0x150(0x04)
	char pad_154[0xc]; // 0x154(0x0c)
	struct FTransform WorldOffset; // 0x160(0x60)
	bool bEnabled; // 0x1c0(0x01)
	char pad_1C1[0xf]; // 0x1c1(0x0f)
};

// ScriptStruct RigVM.RigVMFunction_DebugLineStripNoSpace
// Size: 0x1b0 (Inherited: 0x110)
struct FRigVMFunction_DebugLineStripNoSpace : FRigVMFunction_DebugBaseMutable {
	struct TArray<struct FVector> Points; // 0x110(0x10)
	struct FLinearColor Color; // 0x120(0x10)
	float Thickness; // 0x130(0x04)
	char pad_134[0xc]; // 0x134(0x0c)
	struct FTransform WorldOffset; // 0x140(0x60)
	bool bEnabled; // 0x1a0(0x01)
	char pad_1A1[0xf]; // 0x1a1(0x0f)
};

// ScriptStruct RigVM.RigVMFunction_DebugPoint
// Size: 0xc0 (Inherited: 0x08)
struct FRigVMFunction_DebugPoint : FRigVMFunction_DebugBase {
	struct FVector Vector; // 0x08(0x18)
	enum class ERigUnitDebugPointMode Mode; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FLinearColor Color; // 0x24(0x10)
	float Scale; // 0x34(0x04)
	float Thickness; // 0x38(0x04)
	struct FName Space; // 0x3c(0x0c)
	char pad_48[0x8]; // 0x48(0x08)
	struct FTransform WorldOffset; // 0x50(0x60)
	bool bEnabled; // 0xb0(0x01)
	char pad_B1[0xf]; // 0xb1(0x0f)
};

// ScriptStruct RigVM.RigVMFunction_DebugPointMutable
// Size: 0x1c0 (Inherited: 0x110)
struct FRigVMFunction_DebugPointMutable : FRigVMFunction_DebugBaseMutable {
	struct FVector Vector; // 0x110(0x18)
	enum class ERigUnitDebugPointMode Mode; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	struct FLinearColor Color; // 0x12c(0x10)
	float Scale; // 0x13c(0x04)
	float Thickness; // 0x140(0x04)
	struct FName Space; // 0x144(0x0c)
	struct FTransform WorldOffset; // 0x150(0x60)
	bool bEnabled; // 0x1b0(0x01)
	char pad_1B1[0xf]; // 0x1b1(0x0f)
};

// ScriptStruct RigVM.RigVMFunction_DebugRectangle
// Size: 0x210 (Inherited: 0x110)
struct FRigVMFunction_DebugRectangle : FRigVMFunction_DebugBaseMutable {
	struct FTransform Transform; // 0x110(0x60)
	struct FLinearColor Color; // 0x170(0x10)
	float Scale; // 0x180(0x04)
	float Thickness; // 0x184(0x04)
	struct FName Space; // 0x188(0x0c)
	char pad_194[0xc]; // 0x194(0x0c)
	struct FTransform WorldOffset; // 0x1a0(0x60)
	bool bEnabled; // 0x200(0x01)
	char pad_201[0xf]; // 0x201(0x0f)
};

// ScriptStruct RigVM.RigVMFunction_DebugRectangleNoSpace
// Size: 0x200 (Inherited: 0x110)
struct FRigVMFunction_DebugRectangleNoSpace : FRigVMFunction_DebugBaseMutable {
	struct FTransform Transform; // 0x110(0x60)
	struct FLinearColor Color; // 0x170(0x10)
	float Scale; // 0x180(0x04)
	float Thickness; // 0x184(0x04)
	char pad_188[0x8]; // 0x188(0x08)
	struct FTransform WorldOffset; // 0x190(0x60)
	bool bEnabled; // 0x1f0(0x01)
	char pad_1F1[0xf]; // 0x1f1(0x0f)
};

// ScriptStruct RigVM.RigVMFunction_DebugArc
// Size: 0x210 (Inherited: 0x110)
struct FRigVMFunction_DebugArc : FRigVMFunction_DebugBaseMutable {
	struct FTransform Transform; // 0x110(0x60)
	struct FLinearColor Color; // 0x170(0x10)
	float Radius; // 0x180(0x04)
	float MinimumDegrees; // 0x184(0x04)
	float MaximumDegrees; // 0x188(0x04)
	float Thickness; // 0x18c(0x04)
	int32_t Detail; // 0x190(0x04)
	struct FName Space; // 0x194(0x0c)
	struct FTransform WorldOffset; // 0x1a0(0x60)
	bool bEnabled; // 0x200(0x01)
	char pad_201[0xf]; // 0x201(0x0f)
};

// ScriptStruct RigVM.RigVMFunction_DebugArcNoSpace
// Size: 0x210 (Inherited: 0x110)
struct FRigVMFunction_DebugArcNoSpace : FRigVMFunction_DebugBaseMutable {
	struct FTransform Transform; // 0x110(0x60)
	struct FLinearColor Color; // 0x170(0x10)
	float Radius; // 0x180(0x04)
	float MinimumDegrees; // 0x184(0x04)
	float MaximumDegrees; // 0x188(0x04)
	float Thickness; // 0x18c(0x04)
	int32_t Detail; // 0x190(0x04)
	char pad_194[0xc]; // 0x194(0x0c)
	struct FTransform WorldOffset; // 0x1a0(0x60)
	bool bEnabled; // 0x200(0x01)
	char pad_201[0xf]; // 0x201(0x0f)
};

// ScriptStruct RigVM.RigVMFunction_DebugTransformMutableNoSpace
// Size: 0x200 (Inherited: 0x110)
struct FRigVMFunction_DebugTransformMutableNoSpace : FRigVMFunction_DebugBaseMutable {
	struct FTransform Transform; // 0x110(0x60)
	enum class ERigUnitDebugTransformMode Mode; // 0x170(0x01)
	char pad_171[0x3]; // 0x171(0x03)
	struct FLinearColor Color; // 0x174(0x10)
	float Thickness; // 0x184(0x04)
	float Scale; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct FTransform WorldOffset; // 0x190(0x60)
	bool bEnabled; // 0x1f0(0x01)
	char pad_1F1[0xf]; // 0x1f1(0x0f)
};

// ScriptStruct RigVM.RigVMFunction_DebugTransformArrayMutable_WorkData
// Size: 0x10 (Inherited: 0x00)
struct FRigVMFunction_DebugTransformArrayMutable_WorkData {
	struct TArray<struct FTransform> DrawTransforms; // 0x00(0x10)
};

// ScriptStruct RigVM.RigVMFunction_DebugTransformArrayMutableNoSpace
// Size: 0x1c0 (Inherited: 0x110)
struct FRigVMFunction_DebugTransformArrayMutableNoSpace : FRigVMFunction_DebugBaseMutable {
	struct TArray<struct FTransform> Transforms; // 0x110(0x10)
	struct TArray<int32_t> ParentIndices; // 0x120(0x10)
	enum class ERigUnitDebugTransformMode Mode; // 0x130(0x01)
	char pad_131[0x3]; // 0x131(0x03)
	struct FLinearColor Color; // 0x134(0x10)
	float Thickness; // 0x144(0x04)
	float Scale; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FTransform WorldOffset; // 0x150(0x60)
	bool bEnabled; // 0x1b0(0x01)
	char pad_1B1[0xf]; // 0x1b1(0x0f)
};

// ScriptStruct RigVM.RigVMFunction_VisualDebugVector
// Size: 0x48 (Inherited: 0x08)
struct FRigVMFunction_VisualDebugVector : FRigVMFunction_DebugBase {
	struct FVector Value; // 0x08(0x18)
	bool bEnabled; // 0x20(0x01)
	enum class ERigUnitVisualDebugPointMode Mode; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	struct FLinearColor Color; // 0x24(0x10)
	float Thickness; // 0x34(0x04)
	float Scale; // 0x38(0x04)
	struct FName BoneSpace; // 0x3c(0x0c)
};

// ScriptStruct RigVM.RigVMFunction_VisualDebugVectorNoSpace
// Size: 0x40 (Inherited: 0x08)
struct FRigVMFunction_VisualDebugVectorNoSpace : FRigVMFunction_DebugBase {
	struct FVector Value; // 0x08(0x18)
	bool bEnabled; // 0x20(0x01)
	enum class ERigUnitVisualDebugPointMode Mode; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	struct FLinearColor Color; // 0x24(0x10)
	float Thickness; // 0x34(0x04)
	float Scale; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_VisualDebugQuat
// Size: 0x50 (Inherited: 0x08)
struct FRigVMFunction_VisualDebugQuat : FRigVMFunction_DebugBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	bool bEnabled; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Thickness; // 0x34(0x04)
	float Scale; // 0x38(0x04)
	struct FName BoneSpace; // 0x3c(0x0c)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct RigVM.RigVMFunction_VisualDebugQuatNoSpace
// Size: 0x40 (Inherited: 0x08)
struct FRigVMFunction_VisualDebugQuatNoSpace : FRigVMFunction_DebugBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	bool bEnabled; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Thickness; // 0x34(0x04)
	float Scale; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_VisualDebugTransform
// Size: 0x90 (Inherited: 0x08)
struct FRigVMFunction_VisualDebugTransform : FRigVMFunction_DebugBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	bool bEnabled; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float Thickness; // 0x74(0x04)
	float Scale; // 0x78(0x04)
	struct FName BoneSpace; // 0x7c(0x0c)
	char pad_88[0x8]; // 0x88(0x08)
};

// ScriptStruct RigVM.RigVMFunction_VisualDebugTransformNoSpace
// Size: 0x80 (Inherited: 0x08)
struct FRigVMFunction_VisualDebugTransformNoSpace : FRigVMFunction_DebugBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	bool bEnabled; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float Thickness; // 0x74(0x04)
	float Scale; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_ForLoopCount
// Size: 0x230 (Inherited: 0x110)
struct FRigVMFunction_ForLoopCount : FRigVMStructMutable {
	struct FName BlockToRun; // 0x110(0x0c)
	int32_t Count; // 0x11c(0x04)
	int32_t Index; // 0x120(0x04)
	float Ratio; // 0x124(0x04)
	char pad_128[0x8]; // 0x128(0x08)
	struct FRigVMExecuteContext Completed; // 0x130(0x100)
};

// ScriptStruct RigVM.RigVMFunction_UserDefinedEvent
// Size: 0x120 (Inherited: 0x08)
struct FRigVMFunction_UserDefinedEvent : FRigVMStruct {
	char pad_8[0x8]; // 0x08(0x08)
	struct FRigVMExecuteContext ExecuteContext; // 0x10(0x100)
	struct FName EventName; // 0x110(0x0c)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathBoolBase
// Size: 0x08 (Inherited: 0x08)
struct FRigVMFunction_MathBoolBase : FRigVMFunction_MathBase {
};

// ScriptStruct RigVM.RigVMFunction_MathBoolConstant
// Size: 0x10 (Inherited: 0x08)
struct FRigVMFunction_MathBoolConstant : FRigVMFunction_MathBoolBase {
	bool Value; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathBoolUnaryOp
// Size: 0x10 (Inherited: 0x08)
struct FRigVMFunction_MathBoolUnaryOp : FRigVMFunction_MathBoolBase {
	bool Value; // 0x08(0x01)
	bool Result; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct RigVM.RigVMFunction_MathBoolBinaryOp
// Size: 0x10 (Inherited: 0x08)
struct FRigVMFunction_MathBoolBinaryOp : FRigVMFunction_MathBoolBase {
	bool A; // 0x08(0x01)
	bool B; // 0x09(0x01)
	bool Result; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct RigVM.RigVMFunction_MathBoolBinaryAggregateOp
// Size: 0x10 (Inherited: 0x08)
struct FRigVMFunction_MathBoolBinaryAggregateOp : FRigVMFunction_MathBoolBase {
	bool A; // 0x08(0x01)
	bool B; // 0x09(0x01)
	bool Result; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct RigVM.RigVMFunction_MathBoolMake
// Size: 0x10 (Inherited: 0x08)
struct FRigVMFunction_MathBoolMake : FRigVMFunction_MathBoolBase {
	bool Value; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathBoolConstTrue
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathBoolConstTrue : FRigVMFunction_MathBoolConstant {
};

// ScriptStruct RigVM.RigVMFunction_MathBoolConstFalse
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathBoolConstFalse : FRigVMFunction_MathBoolConstant {
};

// ScriptStruct RigVM.RigVMFunction_MathBoolNot
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathBoolNot : FRigVMFunction_MathBoolUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathBoolAnd
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathBoolAnd : FRigVMFunction_MathBoolBinaryAggregateOp {
};

// ScriptStruct RigVM.RigVMFunction_MathBoolNand
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathBoolNand : FRigVMFunction_MathBoolBinaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathBoolNand2
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathBoolNand2 : FRigVMFunction_MathBoolBinaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathBoolOr
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathBoolOr : FRigVMFunction_MathBoolBinaryAggregateOp {
};

// ScriptStruct RigVM.RigVMFunction_MathBoolEquals
// Size: 0x10 (Inherited: 0x08)
struct FRigVMFunction_MathBoolEquals : FRigVMFunction_MathBoolBase {
	bool A; // 0x08(0x01)
	bool B; // 0x09(0x01)
	bool Result; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct RigVM.RigVMFunction_MathBoolNotEquals
// Size: 0x10 (Inherited: 0x08)
struct FRigVMFunction_MathBoolNotEquals : FRigVMFunction_MathBoolBase {
	bool A; // 0x08(0x01)
	bool B; // 0x09(0x01)
	bool Result; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
};

// ScriptStruct RigVM.RigVMFunction_MathBoolToggled
// Size: 0x10 (Inherited: 0x08)
struct FRigVMFunction_MathBoolToggled : FRigVMFunction_MathBoolBase {
	bool Value; // 0x08(0x01)
	bool Toggled; // 0x09(0x01)
	bool Initialized; // 0x0a(0x01)
	bool LastValue; // 0x0b(0x01)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathBoolFlipFlop
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathBoolFlipFlop : FRigVMFunction_MathBoolBase {
	bool StartValue; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Duration; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	bool LastValue; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float TimeLeft; // 0x14(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathBoolOnce
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathBoolOnce : FRigVMFunction_MathBoolBase {
	float Duration; // 0x08(0x04)
	bool Result; // 0x0c(0x01)
	bool LastValue; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	float TimeLeft; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathBoolToFloat
// Size: 0x10 (Inherited: 0x08)
struct FRigVMFunction_MathBoolToFloat : FRigVMFunction_MathBoolBase {
	bool Value; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Result; // 0x0c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathBoolToInteger
// Size: 0x10 (Inherited: 0x08)
struct FRigVMFunction_MathBoolToInteger : FRigVMFunction_MathBoolBase {
	bool Value; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t Result; // 0x0c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathColorBase
// Size: 0x08 (Inherited: 0x08)
struct FRigVMFunction_MathColorBase : FRigVMFunction_MathBase {
};

// ScriptStruct RigVM.RigVMFunction_MathColorBinaryOp
// Size: 0x38 (Inherited: 0x08)
struct FRigVMFunction_MathColorBinaryOp : FRigVMFunction_MathColorBase {
	struct FLinearColor A; // 0x08(0x10)
	struct FLinearColor B; // 0x18(0x10)
	struct FLinearColor Result; // 0x28(0x10)
};

// ScriptStruct RigVM.RigVMFunction_MathColorBinaryAggregateOp
// Size: 0x38 (Inherited: 0x08)
struct FRigVMFunction_MathColorBinaryAggregateOp : FRigVMFunction_MathColorBase {
	struct FLinearColor A; // 0x08(0x10)
	struct FLinearColor B; // 0x18(0x10)
	struct FLinearColor Result; // 0x28(0x10)
};

// ScriptStruct RigVM.RigVMFunction_MathColorMake
// Size: 0x28 (Inherited: 0x08)
struct FRigVMFunction_MathColorMake : FRigVMFunction_MathColorBase {
	float R; // 0x08(0x04)
	float G; // 0x0c(0x04)
	float B; // 0x10(0x04)
	float A; // 0x14(0x04)
	struct FLinearColor Result; // 0x18(0x10)
};

// ScriptStruct RigVM.RigVMFunction_MathColorFromFloat
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_MathColorFromFloat : FRigVMFunction_MathColorBase {
	float Value; // 0x08(0x04)
	struct FLinearColor Result; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathColorFromDouble
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_MathColorFromDouble : FRigVMFunction_MathColorBase {
	double Value; // 0x08(0x08)
	struct FLinearColor Result; // 0x10(0x10)
};

// ScriptStruct RigVM.RigVMFunction_MathColorAdd
// Size: 0x38 (Inherited: 0x38)
struct FRigVMFunction_MathColorAdd : FRigVMFunction_MathColorBinaryAggregateOp {
};

// ScriptStruct RigVM.RigVMFunction_MathColorSub
// Size: 0x38 (Inherited: 0x38)
struct FRigVMFunction_MathColorSub : FRigVMFunction_MathColorBinaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathColorMul
// Size: 0x38 (Inherited: 0x38)
struct FRigVMFunction_MathColorMul : FRigVMFunction_MathColorBinaryAggregateOp {
};

// ScriptStruct RigVM.RigVMFunction_MathColorLerp
// Size: 0x40 (Inherited: 0x08)
struct FRigVMFunction_MathColorLerp : FRigVMFunction_MathColorBase {
	struct FLinearColor A; // 0x08(0x10)
	struct FLinearColor B; // 0x18(0x10)
	float T; // 0x28(0x04)
	struct FLinearColor Result; // 0x2c(0x10)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleBase
// Size: 0x08 (Inherited: 0x08)
struct FRigVMFunction_MathDoubleBase : FRigVMFunction_MathBase {
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleConstant
// Size: 0x10 (Inherited: 0x08)
struct FRigVMFunction_MathDoubleConstant : FRigVMFunction_MathDoubleBase {
	double Value; // 0x08(0x08)
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleUnaryOp
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathDoubleUnaryOp : FRigVMFunction_MathDoubleBase {
	double Value; // 0x08(0x08)
	double Result; // 0x10(0x08)
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleBinaryOp
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_MathDoubleBinaryOp : FRigVMFunction_MathDoubleBase {
	double A; // 0x08(0x08)
	double B; // 0x10(0x08)
	double Result; // 0x18(0x08)
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleBinaryAggregateOp
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_MathDoubleBinaryAggregateOp : FRigVMFunction_MathDoubleBase {
	double A; // 0x08(0x08)
	double B; // 0x10(0x08)
	double Result; // 0x18(0x08)
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleMake
// Size: 0x10 (Inherited: 0x08)
struct FRigVMFunction_MathDoubleMake : FRigVMFunction_MathDoubleBase {
	double Value; // 0x08(0x08)
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleConstPi
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathDoubleConstPi : FRigVMFunction_MathDoubleConstant {
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleConstHalfPi
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathDoubleConstHalfPi : FRigVMFunction_MathDoubleConstant {
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleConstTwoPi
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathDoubleConstTwoPi : FRigVMFunction_MathDoubleConstant {
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleConstE
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathDoubleConstE : FRigVMFunction_MathDoubleConstant {
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleAdd
// Size: 0x20 (Inherited: 0x20)
struct FRigVMFunction_MathDoubleAdd : FRigVMFunction_MathDoubleBinaryAggregateOp {
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleSub
// Size: 0x20 (Inherited: 0x20)
struct FRigVMFunction_MathDoubleSub : FRigVMFunction_MathDoubleBinaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleMul
// Size: 0x20 (Inherited: 0x20)
struct FRigVMFunction_MathDoubleMul : FRigVMFunction_MathDoubleBinaryAggregateOp {
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleDiv
// Size: 0x20 (Inherited: 0x20)
struct FRigVMFunction_MathDoubleDiv : FRigVMFunction_MathDoubleBinaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleMod
// Size: 0x20 (Inherited: 0x20)
struct FRigVMFunction_MathDoubleMod : FRigVMFunction_MathDoubleBinaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleMin
// Size: 0x20 (Inherited: 0x20)
struct FRigVMFunction_MathDoubleMin : FRigVMFunction_MathDoubleBinaryAggregateOp {
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleMax
// Size: 0x20 (Inherited: 0x20)
struct FRigVMFunction_MathDoubleMax : FRigVMFunction_MathDoubleBinaryAggregateOp {
};

// ScriptStruct RigVM.RigVMFunction_MathDoublePow
// Size: 0x20 (Inherited: 0x20)
struct FRigVMFunction_MathDoublePow : FRigVMFunction_MathDoubleBinaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleSqrt
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathDoubleSqrt : FRigVMFunction_MathDoubleUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleNegate
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathDoubleNegate : FRigVMFunction_MathDoubleUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleAbs
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathDoubleAbs : FRigVMFunction_MathDoubleUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleFloor
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_MathDoubleFloor : FRigVMFunction_MathDoubleBase {
	double Value; // 0x08(0x08)
	double Result; // 0x10(0x08)
	int32_t Int; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleCeil
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_MathDoubleCeil : FRigVMFunction_MathDoubleBase {
	double Value; // 0x08(0x08)
	double Result; // 0x10(0x08)
	int32_t Int; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleRound
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_MathDoubleRound : FRigVMFunction_MathDoubleBase {
	double Value; // 0x08(0x08)
	double Result; // 0x10(0x08)
	int32_t Int; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleToInt
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathDoubleToInt : FRigVMFunction_MathDoubleBase {
	double Value; // 0x08(0x08)
	int32_t Result; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleSign
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathDoubleSign : FRigVMFunction_MathDoubleUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleClamp
// Size: 0x28 (Inherited: 0x08)
struct FRigVMFunction_MathDoubleClamp : FRigVMFunction_MathDoubleBase {
	double Value; // 0x08(0x08)
	double Minimum; // 0x10(0x08)
	double Maximum; // 0x18(0x08)
	double Result; // 0x20(0x08)
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleLerp
// Size: 0x28 (Inherited: 0x08)
struct FRigVMFunction_MathDoubleLerp : FRigVMFunction_MathDoubleBase {
	double A; // 0x08(0x08)
	double B; // 0x10(0x08)
	double T; // 0x18(0x08)
	double Result; // 0x20(0x08)
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleRemap
// Size: 0x40 (Inherited: 0x08)
struct FRigVMFunction_MathDoubleRemap : FRigVMFunction_MathDoubleBase {
	double Value; // 0x08(0x08)
	double SourceMinimum; // 0x10(0x08)
	double SourceMaximum; // 0x18(0x08)
	double TargetMinimum; // 0x20(0x08)
	double TargetMaximum; // 0x28(0x08)
	bool bClamp; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	double Result; // 0x38(0x08)
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleEquals
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_MathDoubleEquals : FRigVMFunction_MathDoubleBase {
	double A; // 0x08(0x08)
	double B; // 0x10(0x08)
	bool Result; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleNotEquals
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_MathDoubleNotEquals : FRigVMFunction_MathDoubleBase {
	double A; // 0x08(0x08)
	double B; // 0x10(0x08)
	bool Result; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleGreater
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_MathDoubleGreater : FRigVMFunction_MathDoubleBase {
	double A; // 0x08(0x08)
	double B; // 0x10(0x08)
	bool Result; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleLess
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_MathDoubleLess : FRigVMFunction_MathDoubleBase {
	double A; // 0x08(0x08)
	double B; // 0x10(0x08)
	bool Result; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleGreaterEqual
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_MathDoubleGreaterEqual : FRigVMFunction_MathDoubleBase {
	double A; // 0x08(0x08)
	double B; // 0x10(0x08)
	bool Result; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleLessEqual
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_MathDoubleLessEqual : FRigVMFunction_MathDoubleBase {
	double A; // 0x08(0x08)
	double B; // 0x10(0x08)
	bool Result; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleIsNearlyZero
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_MathDoubleIsNearlyZero : FRigVMFunction_MathDoubleBase {
	double Value; // 0x08(0x08)
	double Tolerance; // 0x10(0x08)
	bool Result; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleIsNearlyEqual
// Size: 0x28 (Inherited: 0x08)
struct FRigVMFunction_MathDoubleIsNearlyEqual : FRigVMFunction_MathDoubleBase {
	double A; // 0x08(0x08)
	double B; // 0x10(0x08)
	double Tolerance; // 0x18(0x08)
	bool Result; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleDeg
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathDoubleDeg : FRigVMFunction_MathDoubleUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleRad
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathDoubleRad : FRigVMFunction_MathDoubleUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleSin
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathDoubleSin : FRigVMFunction_MathDoubleUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleCos
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathDoubleCos : FRigVMFunction_MathDoubleUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleTan
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathDoubleTan : FRigVMFunction_MathDoubleUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleAsin
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathDoubleAsin : FRigVMFunction_MathDoubleUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleAcos
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathDoubleAcos : FRigVMFunction_MathDoubleUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleAtan
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathDoubleAtan : FRigVMFunction_MathDoubleUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleLawOfCosine
// Size: 0x40 (Inherited: 0x08)
struct FRigVMFunction_MathDoubleLawOfCosine : FRigVMFunction_MathDoubleBase {
	double A; // 0x08(0x08)
	double B; // 0x10(0x08)
	double C; // 0x18(0x08)
	double AlphaAngle; // 0x20(0x08)
	double BetaAngle; // 0x28(0x08)
	double GammaAngle; // 0x30(0x08)
	bool bValid; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleExponential
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathDoubleExponential : FRigVMFunction_MathDoubleUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleArraySum
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_MathDoubleArraySum : FRigVMFunction_MathDoubleBase {
	struct TArray<double> Array; // 0x08(0x10)
	double Sum; // 0x18(0x08)
};

// ScriptStruct RigVM.RigVMFunction_MathDoubleArrayAverage
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_MathDoubleArrayAverage : FRigVMFunction_MathDoubleBase {
	struct TArray<double> Array; // 0x08(0x10)
	double Average; // 0x18(0x08)
};

// ScriptStruct RigVM.RigVMFunction_MathFloatBase
// Size: 0x08 (Inherited: 0x08)
struct FRigVMFunction_MathFloatBase : FRigVMFunction_MathBase {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatConstant
// Size: 0x10 (Inherited: 0x08)
struct FRigVMFunction_MathFloatConstant : FRigVMFunction_MathFloatBase {
	float Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathFloatUnaryOp
// Size: 0x10 (Inherited: 0x08)
struct FRigVMFunction_MathFloatUnaryOp : FRigVMFunction_MathFloatBase {
	float Value; // 0x08(0x04)
	float Result; // 0x0c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathFloatBinaryOp
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathFloatBinaryOp : FRigVMFunction_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	float Result; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathFloatBinaryAggregateOp
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathFloatBinaryAggregateOp : FRigVMFunction_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	float Result; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathFloatMake
// Size: 0x10 (Inherited: 0x08)
struct FRigVMFunction_MathFloatMake : FRigVMFunction_MathFloatBase {
	float Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathFloatConstPi
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathFloatConstPi : FRigVMFunction_MathFloatConstant {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatConstHalfPi
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathFloatConstHalfPi : FRigVMFunction_MathFloatConstant {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatConstTwoPi
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathFloatConstTwoPi : FRigVMFunction_MathFloatConstant {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatConstE
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathFloatConstE : FRigVMFunction_MathFloatConstant {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatAdd
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathFloatAdd : FRigVMFunction_MathFloatBinaryAggregateOp {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatSub
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathFloatSub : FRigVMFunction_MathFloatBinaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatMul
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathFloatMul : FRigVMFunction_MathFloatBinaryAggregateOp {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatDiv
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathFloatDiv : FRigVMFunction_MathFloatBinaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatMod
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathFloatMod : FRigVMFunction_MathFloatBinaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatMin
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathFloatMin : FRigVMFunction_MathFloatBinaryAggregateOp {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatMax
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathFloatMax : FRigVMFunction_MathFloatBinaryAggregateOp {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatPow
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathFloatPow : FRigVMFunction_MathFloatBinaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatSqrt
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathFloatSqrt : FRigVMFunction_MathFloatUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatNegate
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathFloatNegate : FRigVMFunction_MathFloatUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatAbs
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathFloatAbs : FRigVMFunction_MathFloatUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatFloor
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathFloatFloor : FRigVMFunction_MathFloatBase {
	float Value; // 0x08(0x04)
	float Result; // 0x0c(0x04)
	int32_t Int; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathFloatCeil
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathFloatCeil : FRigVMFunction_MathFloatBase {
	float Value; // 0x08(0x04)
	float Result; // 0x0c(0x04)
	int32_t Int; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathFloatRound
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathFloatRound : FRigVMFunction_MathFloatBase {
	float Value; // 0x08(0x04)
	float Result; // 0x0c(0x04)
	int32_t Int; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathFloatToInt
// Size: 0x10 (Inherited: 0x08)
struct FRigVMFunction_MathFloatToInt : FRigVMFunction_MathFloatBase {
	float Value; // 0x08(0x04)
	int32_t Result; // 0x0c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathFloatSign
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathFloatSign : FRigVMFunction_MathFloatUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatClamp
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathFloatClamp : FRigVMFunction_MathFloatBase {
	float Value; // 0x08(0x04)
	float Minimum; // 0x0c(0x04)
	float Maximum; // 0x10(0x04)
	float Result; // 0x14(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathFloatLerp
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathFloatLerp : FRigVMFunction_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	float T; // 0x10(0x04)
	float Result; // 0x14(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathFloatRemap
// Size: 0x28 (Inherited: 0x08)
struct FRigVMFunction_MathFloatRemap : FRigVMFunction_MathFloatBase {
	float Value; // 0x08(0x04)
	float SourceMinimum; // 0x0c(0x04)
	float SourceMaximum; // 0x10(0x04)
	float TargetMinimum; // 0x14(0x04)
	float TargetMaximum; // 0x18(0x04)
	bool bClamp; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float Result; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathFloatEquals
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathFloatEquals : FRigVMFunction_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathFloatNotEquals
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathFloatNotEquals : FRigVMFunction_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathFloatGreater
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathFloatGreater : FRigVMFunction_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathFloatLess
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathFloatLess : FRigVMFunction_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathFloatGreaterEqual
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathFloatGreaterEqual : FRigVMFunction_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathFloatLessEqual
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathFloatLessEqual : FRigVMFunction_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathFloatIsNearlyZero
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathFloatIsNearlyZero : FRigVMFunction_MathFloatBase {
	float Value; // 0x08(0x04)
	float Tolerance; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathFloatIsNearlyEqual
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathFloatIsNearlyEqual : FRigVMFunction_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	float Tolerance; // 0x10(0x04)
	bool Result; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct RigVM.RigVMFunction_MathFloatSelectBool
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathFloatSelectBool : FRigVMFunction_MathFloatBase {
	bool Condition; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float IfTrue; // 0x0c(0x04)
	float IfFalse; // 0x10(0x04)
	float Result; // 0x14(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathFloatDeg
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathFloatDeg : FRigVMFunction_MathFloatUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatRad
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathFloatRad : FRigVMFunction_MathFloatUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatSin
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathFloatSin : FRigVMFunction_MathFloatUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatCos
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathFloatCos : FRigVMFunction_MathFloatUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatTan
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathFloatTan : FRigVMFunction_MathFloatUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatAsin
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathFloatAsin : FRigVMFunction_MathFloatUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatAcos
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathFloatAcos : FRigVMFunction_MathFloatUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatAtan
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathFloatAtan : FRigVMFunction_MathFloatUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatLawOfCosine
// Size: 0x28 (Inherited: 0x08)
struct FRigVMFunction_MathFloatLawOfCosine : FRigVMFunction_MathFloatBase {
	float A; // 0x08(0x04)
	float B; // 0x0c(0x04)
	float C; // 0x10(0x04)
	float AlphaAngle; // 0x14(0x04)
	float BetaAngle; // 0x18(0x04)
	float GammaAngle; // 0x1c(0x04)
	bool bValid; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathFloatExponential
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathFloatExponential : FRigVMFunction_MathFloatUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathFloatArraySum
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_MathFloatArraySum : FRigVMFunction_MathFloatBase {
	struct TArray<float> Array; // 0x08(0x10)
	float Sum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathFloatArrayAverage
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_MathFloatArrayAverage : FRigVMFunction_MathFloatBase {
	struct TArray<float> Array; // 0x08(0x10)
	float Average; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathIntBase
// Size: 0x08 (Inherited: 0x08)
struct FRigVMFunction_MathIntBase : FRigVMFunction_MathBase {
};

// ScriptStruct RigVM.RigVMFunction_MathIntUnaryOp
// Size: 0x10 (Inherited: 0x08)
struct FRigVMFunction_MathIntUnaryOp : FRigVMFunction_MathIntBase {
	int32_t Value; // 0x08(0x04)
	int32_t Result; // 0x0c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathIntBinaryOp
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathIntBinaryOp : FRigVMFunction_MathIntBase {
	int32_t A; // 0x08(0x04)
	int32_t B; // 0x0c(0x04)
	int32_t Result; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathIntBinaryAggregateOp
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathIntBinaryAggregateOp : FRigVMFunction_MathIntBase {
	int32_t A; // 0x08(0x04)
	int32_t B; // 0x0c(0x04)
	int32_t Result; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathIntMake
// Size: 0x10 (Inherited: 0x08)
struct FRigVMFunction_MathIntMake : FRigVMFunction_MathIntBase {
	int32_t Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathIntAdd
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathIntAdd : FRigVMFunction_MathIntBinaryAggregateOp {
};

// ScriptStruct RigVM.RigVMFunction_MathIntSub
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathIntSub : FRigVMFunction_MathIntBinaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathIntMul
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathIntMul : FRigVMFunction_MathIntBinaryAggregateOp {
};

// ScriptStruct RigVM.RigVMFunction_MathIntDiv
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathIntDiv : FRigVMFunction_MathIntBinaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathIntMod
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathIntMod : FRigVMFunction_MathIntBinaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathIntMin
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathIntMin : FRigVMFunction_MathIntBinaryAggregateOp {
};

// ScriptStruct RigVM.RigVMFunction_MathIntMax
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathIntMax : FRigVMFunction_MathIntBinaryAggregateOp {
};

// ScriptStruct RigVM.RigVMFunction_MathIntPow
// Size: 0x18 (Inherited: 0x18)
struct FRigVMFunction_MathIntPow : FRigVMFunction_MathIntBinaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathIntNegate
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathIntNegate : FRigVMFunction_MathIntUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathIntAbs
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathIntAbs : FRigVMFunction_MathIntUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathIntToFloat
// Size: 0x10 (Inherited: 0x08)
struct FRigVMFunction_MathIntToFloat : FRigVMFunction_MathIntBase {
	int32_t Value; // 0x08(0x04)
	float Result; // 0x0c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathIntToDouble
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathIntToDouble : FRigVMFunction_MathIntBase {
	int32_t Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	double Result; // 0x10(0x08)
};

// ScriptStruct RigVM.RigVMFunction_MathIntSign
// Size: 0x10 (Inherited: 0x10)
struct FRigVMFunction_MathIntSign : FRigVMFunction_MathIntUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathIntClamp
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathIntClamp : FRigVMFunction_MathIntBase {
	int32_t Value; // 0x08(0x04)
	int32_t Minimum; // 0x0c(0x04)
	int32_t Maximum; // 0x10(0x04)
	int32_t Result; // 0x14(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathIntEquals
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathIntEquals : FRigVMFunction_MathIntBase {
	int32_t A; // 0x08(0x04)
	int32_t B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathIntNotEquals
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathIntNotEquals : FRigVMFunction_MathIntBase {
	int32_t A; // 0x08(0x04)
	int32_t B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathIntGreater
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathIntGreater : FRigVMFunction_MathIntBase {
	int32_t A; // 0x08(0x04)
	int32_t B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathIntLess
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathIntLess : FRigVMFunction_MathIntBase {
	int32_t A; // 0x08(0x04)
	int32_t B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathIntGreaterEqual
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathIntGreaterEqual : FRigVMFunction_MathIntBase {
	int32_t A; // 0x08(0x04)
	int32_t B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathIntLessEqual
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_MathIntLessEqual : FRigVMFunction_MathIntBase {
	int32_t A; // 0x08(0x04)
	int32_t B; // 0x0c(0x04)
	bool Result; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathIntArraySum
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_MathIntArraySum : FRigVMFunction_MathIntBase {
	struct TArray<int32_t> Array; // 0x08(0x10)
	int32_t Sum; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathIntArrayAverage
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_MathIntArrayAverage : FRigVMFunction_MathIntBase {
	struct TArray<int32_t> Array; // 0x08(0x10)
	int32_t Average; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathIntToString
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_MathIntToString : FRigVMFunction_MathIntBase {
	int32_t Number; // 0x08(0x04)
	int32_t PaddedSize; // 0x0c(0x04)
	struct FString Result; // 0x10(0x10)
};

// ScriptStruct RigVM.RigVMFunction_MathIntToName
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_MathIntToName : FRigVMFunction_MathIntBase {
	int32_t Number; // 0x08(0x04)
	int32_t PaddedSize; // 0x0c(0x04)
	struct FName Result; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathMatrixBase
// Size: 0x08 (Inherited: 0x08)
struct FRigVMFunction_MathMatrixBase : FRigVMFunction_MathBase {
};

// ScriptStruct RigVM.RigVMFunction_MathMatrixUnaryOp
// Size: 0x110 (Inherited: 0x08)
struct FRigVMFunction_MathMatrixUnaryOp : FRigVMFunction_MathMatrixBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FMatrix Value; // 0x10(0x80)
	struct FMatrix Result; // 0x90(0x80)
};

// ScriptStruct RigVM.RigVMFunction_MathMatrixBinaryOp
// Size: 0x190 (Inherited: 0x08)
struct FRigVMFunction_MathMatrixBinaryOp : FRigVMFunction_MathMatrixBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FMatrix A; // 0x10(0x80)
	struct FMatrix B; // 0x90(0x80)
	struct FMatrix Result; // 0x110(0x80)
};

// ScriptStruct RigVM.RigVMFunction_MathMatrixBinaryAggregateOp
// Size: 0x190 (Inherited: 0x08)
struct FRigVMFunction_MathMatrixBinaryAggregateOp : FRigVMFunction_MathMatrixBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FMatrix A; // 0x10(0x80)
	struct FMatrix B; // 0x90(0x80)
	struct FMatrix Result; // 0x110(0x80)
};

// ScriptStruct RigVM.RigVMFunction_MathMatrixToTransform
// Size: 0xf0 (Inherited: 0x08)
struct FRigVMFunction_MathMatrixToTransform : FRigVMFunction_MathMatrixBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FMatrix Value; // 0x10(0x80)
	struct FTransform Result; // 0x90(0x60)
};

// ScriptStruct RigVM.RigVMFunction_MathMatrixFromTransform
// Size: 0xf0 (Inherited: 0x08)
struct FRigVMFunction_MathMatrixFromTransform : FRigVMFunction_MathMatrixBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x60)
	struct FMatrix Result; // 0x70(0x80)
};

// ScriptStruct RigVM.RigVMFunction_MathMatrixFromTransformV2
// Size: 0xf0 (Inherited: 0x08)
struct FRigVMFunction_MathMatrixFromTransformV2 : FRigVMFunction_MathMatrixBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	struct FMatrix Result; // 0x70(0x80)
};

// ScriptStruct RigVM.RigVMFunction_MathMatrixToVectors
// Size: 0xf0 (Inherited: 0x08)
struct FRigVMFunction_MathMatrixToVectors : FRigVMFunction_MathMatrixBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FMatrix Value; // 0x10(0x80)
	struct FVector Origin; // 0x90(0x18)
	struct FVector X; // 0xa8(0x18)
	struct FVector Y; // 0xc0(0x18)
	struct FVector Z; // 0xd8(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathMatrixFromVectors
// Size: 0xf0 (Inherited: 0x08)
struct FRigVMFunction_MathMatrixFromVectors : FRigVMFunction_MathMatrixBase {
	struct FVector Origin; // 0x08(0x18)
	struct FVector X; // 0x20(0x18)
	struct FVector Y; // 0x38(0x18)
	struct FVector Z; // 0x50(0x18)
	char pad_68[0x8]; // 0x68(0x08)
	struct FMatrix Result; // 0x70(0x80)
};

// ScriptStruct RigVM.RigVMFunction_MathMatrixMul
// Size: 0x190 (Inherited: 0x190)
struct FRigVMFunction_MathMatrixMul : FRigVMFunction_MathMatrixBinaryAggregateOp {
};

// ScriptStruct RigVM.RigVMFunction_MathMatrixInverse
// Size: 0x110 (Inherited: 0x110)
struct FRigVMFunction_MathMatrixInverse : FRigVMFunction_MathMatrixUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionBase
// Size: 0x08 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionBase : FRigVMFunction_MathBase {
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionUnaryOp
// Size: 0x50 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionUnaryOp : FRigVMFunction_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	struct FQuat Result; // 0x30(0x20)
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionBinaryOp
// Size: 0x70 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionBinaryOp : FRigVMFunction_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat A; // 0x10(0x20)
	struct FQuat B; // 0x30(0x20)
	struct FQuat Result; // 0x50(0x20)
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionBinaryAggregateOp
// Size: 0x70 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionBinaryAggregateOp : FRigVMFunction_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat A; // 0x10(0x20)
	struct FQuat B; // 0x30(0x20)
	struct FQuat Result; // 0x50(0x20)
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionMake
// Size: 0x40 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionMake : FRigVMFunction_MathQuaternionBase {
	float X; // 0x08(0x04)
	float Y; // 0x0c(0x04)
	float Z; // 0x10(0x04)
	float W; // 0x14(0x04)
	char pad_18[0x8]; // 0x18(0x08)
	struct FQuat Result; // 0x20(0x20)
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionFromAxisAndAngle
// Size: 0x50 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionFromAxisAndAngle : FRigVMFunction_MathQuaternionBase {
	struct FVector Axis; // 0x08(0x18)
	float Angle; // 0x20(0x04)
	char pad_24[0xc]; // 0x24(0x0c)
	struct FQuat Result; // 0x30(0x20)
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionFromEuler
// Size: 0x50 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionFromEuler : FRigVMFunction_MathQuaternionBase {
	struct FVector Euler; // 0x08(0x18)
	enum class EEulerRotationOrder RotationOrder; // 0x20(0x01)
	char pad_21[0xf]; // 0x21(0x0f)
	struct FQuat Result; // 0x30(0x20)
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionFromRotator
// Size: 0x40 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionFromRotator : FRigVMFunction_MathQuaternionBase {
	struct FRotator Rotator; // 0x08(0x18)
	struct FQuat Result; // 0x20(0x20)
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionFromRotatorV2
// Size: 0x40 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionFromRotatorV2 : FRigVMFunction_MathQuaternionBase {
	struct FRotator Value; // 0x08(0x18)
	struct FQuat Result; // 0x20(0x20)
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionFromTwoVectors
// Size: 0x60 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionFromTwoVectors : FRigVMFunction_MathQuaternionBase {
	struct FVector A; // 0x08(0x18)
	struct FVector B; // 0x20(0x18)
	char pad_38[0x8]; // 0x38(0x08)
	struct FQuat Result; // 0x40(0x20)
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionToAxisAndAngle
// Size: 0x50 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionToAxisAndAngle : FRigVMFunction_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	struct FVector Axis; // 0x30(0x18)
	float Angle; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionScale
// Size: 0x40 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionScale : FRigVMFunction_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	float Scale; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionScaleV2
// Size: 0x60 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionScaleV2 : FRigVMFunction_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	float Factor; // 0x30(0x04)
	char pad_34[0xc]; // 0x34(0x0c)
	struct FQuat Result; // 0x40(0x20)
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionToEuler
// Size: 0x50 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionToEuler : FRigVMFunction_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	enum class EEulerRotationOrder RotationOrder; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FVector Result; // 0x38(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionToRotator
// Size: 0x50 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionToRotator : FRigVMFunction_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	struct FRotator Result; // 0x30(0x18)
	char pad_48[0x8]; // 0x48(0x08)
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionMul
// Size: 0x70 (Inherited: 0x70)
struct FRigVMFunction_MathQuaternionMul : FRigVMFunction_MathQuaternionBinaryAggregateOp {
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionInverse
// Size: 0x50 (Inherited: 0x50)
struct FRigVMFunction_MathQuaternionInverse : FRigVMFunction_MathQuaternionUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionSlerp
// Size: 0x80 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionSlerp : FRigVMFunction_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat A; // 0x10(0x20)
	struct FQuat B; // 0x30(0x20)
	float T; // 0x50(0x04)
	char pad_54[0xc]; // 0x54(0x0c)
	struct FQuat Result; // 0x60(0x20)
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionEquals
// Size: 0x60 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionEquals : FRigVMFunction_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat A; // 0x10(0x20)
	struct FQuat B; // 0x30(0x20)
	bool Result; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionNotEquals
// Size: 0x60 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionNotEquals : FRigVMFunction_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat A; // 0x10(0x20)
	struct FQuat B; // 0x30(0x20)
	bool Result; // 0x50(0x01)
	char pad_51[0xf]; // 0x51(0x0f)
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionSelectBool
// Size: 0x70 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionSelectBool : FRigVMFunction_MathQuaternionBase {
	bool Condition; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FQuat IfTrue; // 0x10(0x20)
	struct FQuat IfFalse; // 0x30(0x20)
	struct FQuat Result; // 0x50(0x20)
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionDot
// Size: 0x60 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionDot : FRigVMFunction_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat A; // 0x10(0x20)
	struct FQuat B; // 0x30(0x20)
	float Result; // 0x50(0x04)
	char pad_54[0xc]; // 0x54(0x0c)
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionUnit
// Size: 0x50 (Inherited: 0x50)
struct FRigVMFunction_MathQuaternionUnit : FRigVMFunction_MathQuaternionUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionRotateVector
// Size: 0x60 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionRotateVector : FRigVMFunction_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Transform; // 0x10(0x20)
	struct FVector Vector; // 0x30(0x18)
	struct FVector Result; // 0x48(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionGetAxis
// Size: 0x50 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionGetAxis : FRigVMFunction_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Quaternion; // 0x10(0x20)
	enum class EAxis Axis; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FVector Result; // 0x38(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionSwingTwist
// Size: 0x90 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionSwingTwist : FRigVMFunction_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Input; // 0x10(0x20)
	struct FVector TwistAxis; // 0x30(0x18)
	char pad_48[0x8]; // 0x48(0x08)
	struct FQuat Swing; // 0x50(0x20)
	struct FQuat Twist; // 0x70(0x20)
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionRotationOrder
// Size: 0x10 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionRotationOrder : FRigVMFunction_MathBase {
	enum class EEulerRotationOrder RotationOrder; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionMakeRelative
// Size: 0x70 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionMakeRelative : FRigVMFunction_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Global; // 0x10(0x20)
	struct FQuat Parent; // 0x30(0x20)
	struct FQuat Local; // 0x50(0x20)
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionMakeAbsolute
// Size: 0x70 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionMakeAbsolute : FRigVMFunction_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Local; // 0x10(0x20)
	struct FQuat Parent; // 0x30(0x20)
	struct FQuat Global; // 0x50(0x20)
};

// ScriptStruct RigVM.RigVMFunction_MathQuaternionMirrorTransform
// Size: 0xc0 (Inherited: 0x08)
struct FRigVMFunction_MathQuaternionMirrorTransform : FRigVMFunction_MathQuaternionBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	enum class EAxis MirrorAxis; // 0x30(0x01)
	enum class EAxis AxisToFlip; // 0x31(0x01)
	char pad_32[0xe]; // 0x32(0x0e)
	struct FTransform CentralTransform; // 0x40(0x60)
	struct FQuat Result; // 0xa0(0x20)
};

// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateQuatWorkData
// Size: 0x90 (Inherited: 0x00)
struct FRigVMFunction_MathRBFInterpolateQuatWorkData {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateVectorWorkData
// Size: 0x90 (Inherited: 0x00)
struct FRigVMFunction_MathRBFInterpolateVectorWorkData {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateBase
// Size: 0x08 (Inherited: 0x08)
struct FRigVMFunction_MathRBFInterpolateBase : FRigVMFunction_MathBase {
};

// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateQuatBase
// Size: 0xf0 (Inherited: 0x08)
struct FRigVMFunction_MathRBFInterpolateQuatBase : FRigVMFunction_MathRBFInterpolateBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Input; // 0x10(0x20)
	enum class ERBFQuatDistanceType DistanceFunction; // 0x30(0x01)
	enum class ERBFKernelType SmoothingFunction; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float SmoothingAngle; // 0x34(0x04)
	bool bNormalizeOutput; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FVector TwistAxis; // 0x40(0x18)
	char pad_58[0x8]; // 0x58(0x08)
	struct FRigVMFunction_MathRBFInterpolateQuatWorkData WorkData; // 0x60(0x90)
};

// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateVectorBase
// Size: 0xc0 (Inherited: 0x08)
struct FRigVMFunction_MathRBFInterpolateVectorBase : FRigVMFunction_MathRBFInterpolateBase {
	struct FVector Input; // 0x08(0x18)
	enum class ERBFVectorDistanceType DistanceFunction; // 0x20(0x01)
	enum class ERBFKernelType SmoothingFunction; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	float SmoothingRadius; // 0x24(0x04)
	bool bNormalizeOutput; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FRigVMFunction_MathRBFInterpolateVectorWorkData WorkData; // 0x30(0x90)
};

// ScriptStruct RigVM.MathRBFInterpolateQuatFloat_Target
// Size: 0x30 (Inherited: 0x00)
struct FMathRBFInterpolateQuatFloat_Target {
	struct FQuat Target; // 0x00(0x20)
	float Value; // 0x20(0x04)
	char pad_24[0xc]; // 0x24(0x0c)
};

// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateQuatFloat
// Size: 0x110 (Inherited: 0xf0)
struct FRigVMFunction_MathRBFInterpolateQuatFloat : FRigVMFunction_MathRBFInterpolateQuatBase {
	struct TArray<struct FMathRBFInterpolateQuatFloat_Target> Targets; // 0xf0(0x10)
	float output; // 0x100(0x04)
	char pad_104[0xc]; // 0x104(0x0c)
};

// ScriptStruct RigVM.MathRBFInterpolateQuatVector_Target
// Size: 0x40 (Inherited: 0x00)
struct FMathRBFInterpolateQuatVector_Target {
	struct FQuat Target; // 0x00(0x20)
	struct FVector Value; // 0x20(0x18)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateQuatVector
// Size: 0x120 (Inherited: 0xf0)
struct FRigVMFunction_MathRBFInterpolateQuatVector : FRigVMFunction_MathRBFInterpolateQuatBase {
	struct TArray<struct FMathRBFInterpolateQuatVector_Target> Targets; // 0xf0(0x10)
	struct FVector output; // 0x100(0x18)
	char pad_118[0x8]; // 0x118(0x08)
};

// ScriptStruct RigVM.MathRBFInterpolateQuatColor_Target
// Size: 0x30 (Inherited: 0x00)
struct FMathRBFInterpolateQuatColor_Target {
	struct FQuat Target; // 0x00(0x20)
	struct FLinearColor Value; // 0x20(0x10)
};

// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateQuatColor
// Size: 0x110 (Inherited: 0xf0)
struct FRigVMFunction_MathRBFInterpolateQuatColor : FRigVMFunction_MathRBFInterpolateQuatBase {
	struct TArray<struct FMathRBFInterpolateQuatColor_Target> Targets; // 0xf0(0x10)
	struct FLinearColor output; // 0x100(0x10)
};

// ScriptStruct RigVM.MathRBFInterpolateQuatQuat_Target
// Size: 0x40 (Inherited: 0x00)
struct FMathRBFInterpolateQuatQuat_Target {
	struct FQuat Target; // 0x00(0x20)
	struct FQuat Value; // 0x20(0x20)
};

// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateQuatQuat
// Size: 0x120 (Inherited: 0xf0)
struct FRigVMFunction_MathRBFInterpolateQuatQuat : FRigVMFunction_MathRBFInterpolateQuatBase {
	struct TArray<struct FMathRBFInterpolateQuatQuat_Target> Targets; // 0xf0(0x10)
	struct FQuat output; // 0x100(0x20)
};

// ScriptStruct RigVM.MathRBFInterpolateQuatXform_Target
// Size: 0x80 (Inherited: 0x00)
struct FMathRBFInterpolateQuatXform_Target {
	struct FQuat Target; // 0x00(0x20)
	struct FTransform Value; // 0x20(0x60)
};

// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateQuatXform
// Size: 0x160 (Inherited: 0xf0)
struct FRigVMFunction_MathRBFInterpolateQuatXform : FRigVMFunction_MathRBFInterpolateQuatBase {
	struct TArray<struct FMathRBFInterpolateQuatXform_Target> Targets; // 0xf0(0x10)
	struct FTransform output; // 0x100(0x60)
};

// ScriptStruct RigVM.MathRBFInterpolateVectorFloat_Target
// Size: 0x20 (Inherited: 0x00)
struct FMathRBFInterpolateVectorFloat_Target {
	struct FVector Target; // 0x00(0x18)
	float Value; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateVectorFloat
// Size: 0xe0 (Inherited: 0xc0)
struct FRigVMFunction_MathRBFInterpolateVectorFloat : FRigVMFunction_MathRBFInterpolateVectorBase {
	struct TArray<struct FMathRBFInterpolateVectorFloat_Target> Targets; // 0xc0(0x10)
	float output; // 0xd0(0x04)
	char pad_D4[0xc]; // 0xd4(0x0c)
};

// ScriptStruct RigVM.MathRBFInterpolateVectorVector_Target
// Size: 0x30 (Inherited: 0x00)
struct FMathRBFInterpolateVectorVector_Target {
	struct FVector Target; // 0x00(0x18)
	struct FVector Value; // 0x18(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateVectorVector
// Size: 0xf0 (Inherited: 0xc0)
struct FRigVMFunction_MathRBFInterpolateVectorVector : FRigVMFunction_MathRBFInterpolateVectorBase {
	struct TArray<struct FMathRBFInterpolateVectorVector_Target> Targets; // 0xc0(0x10)
	struct FVector output; // 0xd0(0x18)
	char pad_E8[0x8]; // 0xe8(0x08)
};

// ScriptStruct RigVM.MathRBFInterpolateVectorColor_Target
// Size: 0x28 (Inherited: 0x00)
struct FMathRBFInterpolateVectorColor_Target {
	struct FVector Target; // 0x00(0x18)
	struct FLinearColor Value; // 0x18(0x10)
};

// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateVectorColor
// Size: 0xe0 (Inherited: 0xc0)
struct FRigVMFunction_MathRBFInterpolateVectorColor : FRigVMFunction_MathRBFInterpolateVectorBase {
	struct TArray<struct FMathRBFInterpolateVectorColor_Target> Targets; // 0xc0(0x10)
	struct FLinearColor output; // 0xd0(0x10)
};

// ScriptStruct RigVM.MathRBFInterpolateVectorQuat_Target
// Size: 0x40 (Inherited: 0x00)
struct FMathRBFInterpolateVectorQuat_Target {
	struct FVector Target; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FQuat Value; // 0x20(0x20)
};

// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateVectorQuat
// Size: 0xf0 (Inherited: 0xc0)
struct FRigVMFunction_MathRBFInterpolateVectorQuat : FRigVMFunction_MathRBFInterpolateVectorBase {
	struct TArray<struct FMathRBFInterpolateVectorQuat_Target> Targets; // 0xc0(0x10)
	struct FQuat output; // 0xd0(0x20)
};

// ScriptStruct RigVM.MathRBFInterpolateVectorXform_Target
// Size: 0x80 (Inherited: 0x00)
struct FMathRBFInterpolateVectorXform_Target {
	struct FVector Target; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform Value; // 0x20(0x60)
};

// ScriptStruct RigVM.RigVMFunction_MathRBFInterpolateVectorXform
// Size: 0x130 (Inherited: 0xc0)
struct FRigVMFunction_MathRBFInterpolateVectorXform : FRigVMFunction_MathRBFInterpolateVectorBase {
	struct TArray<struct FMathRBFInterpolateVectorXform_Target> Targets; // 0xc0(0x10)
	struct FTransform output; // 0xd0(0x60)
};

// ScriptStruct RigVM.RigVMFunction_MathTransformBase
// Size: 0x08 (Inherited: 0x08)
struct FRigVMFunction_MathTransformBase : FRigVMFunction_MathBase {
};

// ScriptStruct RigVM.RigVMFunction_MathTransformMutableBase
// Size: 0x110 (Inherited: 0x110)
struct FRigVMFunction_MathTransformMutableBase : FRigVMFunction_MathMutableBase {
};

// ScriptStruct RigVM.RigVMFunction_MathTransformUnaryOp
// Size: 0xd0 (Inherited: 0x08)
struct FRigVMFunction_MathTransformUnaryOp : FRigVMFunction_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	struct FTransform Result; // 0x70(0x60)
};

// ScriptStruct RigVM.RigVMFunction_MathTransformBinaryOp
// Size: 0x130 (Inherited: 0x08)
struct FRigVMFunction_MathTransformBinaryOp : FRigVMFunction_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform A; // 0x10(0x60)
	struct FTransform B; // 0x70(0x60)
	struct FTransform Result; // 0xd0(0x60)
};

// ScriptStruct RigVM.RigVMFunction_MathTransformBinaryAggregateOp
// Size: 0x130 (Inherited: 0x08)
struct FRigVMFunction_MathTransformBinaryAggregateOp : FRigVMFunction_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform A; // 0x10(0x60)
	struct FTransform B; // 0x70(0x60)
	struct FTransform Result; // 0xd0(0x60)
};

// ScriptStruct RigVM.RigVMFunction_MathTransformMake
// Size: 0xc0 (Inherited: 0x08)
struct FRigVMFunction_MathTransformMake : FRigVMFunction_MathTransformBase {
	struct FVector Translation; // 0x08(0x18)
	struct FQuat Rotation; // 0x20(0x20)
	struct FVector Scale; // 0x40(0x18)
	char pad_58[0x8]; // 0x58(0x08)
	struct FTransform Result; // 0x60(0x60)
};

// ScriptStruct RigVM.RigVMFunction_MathTransformFromEulerTransform
// Size: 0xb0 (Inherited: 0x08)
struct FRigVMFunction_MathTransformFromEulerTransform : FRigVMFunction_MathTransformBase {
	struct FEulerTransform EulerTransform; // 0x08(0x48)
	struct FTransform Result; // 0x50(0x60)
};

// ScriptStruct RigVM.RigVMFunction_MathTransformFromEulerTransformV2
// Size: 0xb0 (Inherited: 0x08)
struct FRigVMFunction_MathTransformFromEulerTransformV2 : FRigVMFunction_MathTransformBase {
	struct FEulerTransform Value; // 0x08(0x48)
	struct FTransform Result; // 0x50(0x60)
};

// ScriptStruct RigVM.RigVMFunction_MathTransformToEulerTransform
// Size: 0xc0 (Inherited: 0x08)
struct FRigVMFunction_MathTransformToEulerTransform : FRigVMFunction_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	struct FEulerTransform Result; // 0x70(0x48)
	char pad_B8[0x8]; // 0xb8(0x08)
};

// ScriptStruct RigVM.RigVMFunction_MathTransformMul
// Size: 0x130 (Inherited: 0x130)
struct FRigVMFunction_MathTransformMul : FRigVMFunction_MathTransformBinaryAggregateOp {
};

// ScriptStruct RigVM.RigVMFunction_MathTransformMakeRelative
// Size: 0x130 (Inherited: 0x08)
struct FRigVMFunction_MathTransformMakeRelative : FRigVMFunction_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Global; // 0x10(0x60)
	struct FTransform Parent; // 0x70(0x60)
	struct FTransform Local; // 0xd0(0x60)
};

// ScriptStruct RigVM.RigVMFunction_MathTransformMakeAbsolute
// Size: 0x130 (Inherited: 0x08)
struct FRigVMFunction_MathTransformMakeAbsolute : FRigVMFunction_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Local; // 0x10(0x60)
	struct FTransform Parent; // 0x70(0x60)
	struct FTransform Global; // 0xd0(0x60)
};

// ScriptStruct RigVM.RigVMFunction_MathTransformAccumulateArray
// Size: 0x1a0 (Inherited: 0x110)
struct FRigVMFunction_MathTransformAccumulateArray : FRigVMFunction_MathTransformMutableBase {
	struct TArray<struct FTransform> Transforms; // 0x110(0x10)
	enum class ERigVMTransformSpace TargetSpace; // 0x120(0x01)
	char pad_121[0xf]; // 0x121(0x0f)
	struct FTransform Root; // 0x130(0x60)
	struct TArray<int32_t> ParentIndices; // 0x190(0x10)
};

// ScriptStruct RigVM.RigVMFunction_MathTransformInverse
// Size: 0xd0 (Inherited: 0xd0)
struct FRigVMFunction_MathTransformInverse : FRigVMFunction_MathTransformUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathTransformLerp
// Size: 0x140 (Inherited: 0x08)
struct FRigVMFunction_MathTransformLerp : FRigVMFunction_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform A; // 0x10(0x60)
	struct FTransform B; // 0x70(0x60)
	float T; // 0xd0(0x04)
	char pad_D4[0xc]; // 0xd4(0x0c)
	struct FTransform Result; // 0xe0(0x60)
};

// ScriptStruct RigVM.RigVMFunction_MathTransformSelectBool
// Size: 0x130 (Inherited: 0x08)
struct FRigVMFunction_MathTransformSelectBool : FRigVMFunction_MathTransformBase {
	bool Condition; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FTransform IfTrue; // 0x10(0x60)
	struct FTransform IfFalse; // 0x70(0x60)
	struct FTransform Result; // 0xd0(0x60)
};

// ScriptStruct RigVM.RigVMFunction_MathTransformRotateVector
// Size: 0xa0 (Inherited: 0x08)
struct FRigVMFunction_MathTransformRotateVector : FRigVMFunction_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x60)
	struct FVector Vector; // 0x70(0x18)
	struct FVector Result; // 0x88(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathTransformTransformVector
// Size: 0xa0 (Inherited: 0x08)
struct FRigVMFunction_MathTransformTransformVector : FRigVMFunction_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x60)
	struct FVector Location; // 0x70(0x18)
	struct FVector Result; // 0x88(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathTransformFromSRT
// Size: 0x110 (Inherited: 0x08)
struct FRigVMFunction_MathTransformFromSRT : FRigVMFunction_MathTransformBase {
	struct FVector Location; // 0x08(0x18)
	struct FVector Rotation; // 0x20(0x18)
	enum class EEulerRotationOrder RotationOrder; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FVector Scale; // 0x40(0x18)
	char pad_58[0x8]; // 0x58(0x08)
	struct FTransform Transform; // 0x60(0x60)
	struct FEulerTransform EulerTransform; // 0xc0(0x48)
	char pad_108[0x8]; // 0x108(0x08)
};

// ScriptStruct RigVM.RigVMFunction_MathTransformArrayToSRT
// Size: 0x48 (Inherited: 0x08)
struct FRigVMFunction_MathTransformArrayToSRT : FRigVMFunction_MathTransformBase {
	struct TArray<struct FTransform> Transforms; // 0x08(0x10)
	struct TArray<struct FVector> Translations; // 0x18(0x10)
	struct TArray<struct FQuat> Rotations; // 0x28(0x10)
	struct TArray<struct FVector> Scales; // 0x38(0x10)
};

// ScriptStruct RigVM.RigVMFunction_MathTransformClampSpatially
// Size: 0x160 (Inherited: 0x08)
struct FRigVMFunction_MathTransformClampSpatially : FRigVMFunction_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	enum class EAxis Axis; // 0x70(0x01)
	enum class ERigVMClampSpatialMode Type; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	float Minimum; // 0x74(0x04)
	float Maximum; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FTransform Space; // 0x80(0x60)
	bool bDrawDebug; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	struct FLinearColor DebugColor; // 0xe4(0x10)
	float DebugThickness; // 0xf4(0x04)
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FTransform Result; // 0x100(0x60)
};

// ScriptStruct RigVM.RigVMFunction_MathTransformMirrorTransform
// Size: 0x140 (Inherited: 0x08)
struct FRigVMFunction_MathTransformMirrorTransform : FRigVMFunction_MathTransformBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	enum class EAxis MirrorAxis; // 0x70(0x01)
	enum class EAxis AxisToFlip; // 0x71(0x01)
	char pad_72[0xe]; // 0x72(0x0e)
	struct FTransform CentralTransform; // 0x80(0x60)
	struct FTransform Result; // 0xe0(0x60)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorBase
// Size: 0x08 (Inherited: 0x08)
struct FRigVMFunction_MathVectorBase : FRigVMFunction_MathBase {
};

// ScriptStruct RigVM.RigVMFunction_MathVectorUnaryOp
// Size: 0x38 (Inherited: 0x08)
struct FRigVMFunction_MathVectorUnaryOp : FRigVMFunction_MathVectorBase {
	struct FVector Value; // 0x08(0x18)
	struct FVector Result; // 0x20(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorBinaryOp
// Size: 0x50 (Inherited: 0x08)
struct FRigVMFunction_MathVectorBinaryOp : FRigVMFunction_MathVectorBase {
	struct FVector A; // 0x08(0x18)
	struct FVector B; // 0x20(0x18)
	struct FVector Result; // 0x38(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorBinaryAggregateOp
// Size: 0x50 (Inherited: 0x08)
struct FRigVMFunction_MathVectorBinaryAggregateOp : FRigVMFunction_MathVectorBase {
	struct FVector A; // 0x08(0x18)
	struct FVector B; // 0x20(0x18)
	struct FVector Result; // 0x38(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorMake
// Size: 0x30 (Inherited: 0x08)
struct FRigVMFunction_MathVectorMake : FRigVMFunction_MathVectorBase {
	float X; // 0x08(0x04)
	float Y; // 0x0c(0x04)
	float Z; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FVector Result; // 0x18(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorFromFloat
// Size: 0x28 (Inherited: 0x08)
struct FRigVMFunction_MathVectorFromFloat : FRigVMFunction_MathVectorBase {
	float Value; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector Result; // 0x10(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorFromDouble
// Size: 0x28 (Inherited: 0x08)
struct FRigVMFunction_MathVectorFromDouble : FRigVMFunction_MathVectorBase {
	double Value; // 0x08(0x08)
	struct FVector Result; // 0x10(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorAdd
// Size: 0x50 (Inherited: 0x50)
struct FRigVMFunction_MathVectorAdd : FRigVMFunction_MathVectorBinaryAggregateOp {
};

// ScriptStruct RigVM.RigVMFunction_MathVectorSub
// Size: 0x50 (Inherited: 0x50)
struct FRigVMFunction_MathVectorSub : FRigVMFunction_MathVectorBinaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathVectorMul
// Size: 0x50 (Inherited: 0x50)
struct FRigVMFunction_MathVectorMul : FRigVMFunction_MathVectorBinaryAggregateOp {
};

// ScriptStruct RigVM.RigVMFunction_MathVectorScale
// Size: 0x40 (Inherited: 0x08)
struct FRigVMFunction_MathVectorScale : FRigVMFunction_MathVectorBase {
	struct FVector Value; // 0x08(0x18)
	float Factor; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FVector Result; // 0x28(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorDiv
// Size: 0x50 (Inherited: 0x50)
struct FRigVMFunction_MathVectorDiv : FRigVMFunction_MathVectorBinaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathVectorMod
// Size: 0x50 (Inherited: 0x50)
struct FRigVMFunction_MathVectorMod : FRigVMFunction_MathVectorBinaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathVectorMin
// Size: 0x50 (Inherited: 0x50)
struct FRigVMFunction_MathVectorMin : FRigVMFunction_MathVectorBinaryAggregateOp {
};

// ScriptStruct RigVM.RigVMFunction_MathVectorMax
// Size: 0x50 (Inherited: 0x50)
struct FRigVMFunction_MathVectorMax : FRigVMFunction_MathVectorBinaryAggregateOp {
};

// ScriptStruct RigVM.RigVMFunction_MathVectorNegate
// Size: 0x38 (Inherited: 0x38)
struct FRigVMFunction_MathVectorNegate : FRigVMFunction_MathVectorUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathVectorAbs
// Size: 0x38 (Inherited: 0x38)
struct FRigVMFunction_MathVectorAbs : FRigVMFunction_MathVectorUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathVectorFloor
// Size: 0x38 (Inherited: 0x38)
struct FRigVMFunction_MathVectorFloor : FRigVMFunction_MathVectorUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathVectorCeil
// Size: 0x38 (Inherited: 0x38)
struct FRigVMFunction_MathVectorCeil : FRigVMFunction_MathVectorUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathVectorRound
// Size: 0x38 (Inherited: 0x38)
struct FRigVMFunction_MathVectorRound : FRigVMFunction_MathVectorUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathVectorSign
// Size: 0x38 (Inherited: 0x38)
struct FRigVMFunction_MathVectorSign : FRigVMFunction_MathVectorUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathVectorClamp
// Size: 0x68 (Inherited: 0x08)
struct FRigVMFunction_MathVectorClamp : FRigVMFunction_MathVectorBase {
	struct FVector Value; // 0x08(0x18)
	struct FVector Minimum; // 0x20(0x18)
	struct FVector Maximum; // 0x38(0x18)
	struct FVector Result; // 0x50(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorLerp
// Size: 0x58 (Inherited: 0x08)
struct FRigVMFunction_MathVectorLerp : FRigVMFunction_MathVectorBase {
	struct FVector A; // 0x08(0x18)
	struct FVector B; // 0x20(0x18)
	float T; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FVector Result; // 0x40(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorRemap
// Size: 0xa0 (Inherited: 0x08)
struct FRigVMFunction_MathVectorRemap : FRigVMFunction_MathVectorBase {
	struct FVector Value; // 0x08(0x18)
	struct FVector SourceMinimum; // 0x20(0x18)
	struct FVector SourceMaximum; // 0x38(0x18)
	struct FVector TargetMinimum; // 0x50(0x18)
	struct FVector TargetMaximum; // 0x68(0x18)
	bool bClamp; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FVector Result; // 0x88(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorEquals
// Size: 0x40 (Inherited: 0x08)
struct FRigVMFunction_MathVectorEquals : FRigVMFunction_MathVectorBase {
	struct FVector A; // 0x08(0x18)
	struct FVector B; // 0x20(0x18)
	bool Result; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorNotEquals
// Size: 0x40 (Inherited: 0x08)
struct FRigVMFunction_MathVectorNotEquals : FRigVMFunction_MathVectorBase {
	struct FVector A; // 0x08(0x18)
	struct FVector B; // 0x20(0x18)
	bool Result; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorIsNearlyZero
// Size: 0x28 (Inherited: 0x08)
struct FRigVMFunction_MathVectorIsNearlyZero : FRigVMFunction_MathVectorBase {
	struct FVector Value; // 0x08(0x18)
	float Tolerance; // 0x20(0x04)
	bool Result; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorIsNearlyEqual
// Size: 0x40 (Inherited: 0x08)
struct FRigVMFunction_MathVectorIsNearlyEqual : FRigVMFunction_MathVectorBase {
	struct FVector A; // 0x08(0x18)
	struct FVector B; // 0x20(0x18)
	float Tolerance; // 0x38(0x04)
	bool Result; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorSelectBool
// Size: 0x58 (Inherited: 0x08)
struct FRigVMFunction_MathVectorSelectBool : FRigVMFunction_MathVectorBase {
	bool Condition; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FVector IfTrue; // 0x10(0x18)
	struct FVector IfFalse; // 0x28(0x18)
	struct FVector Result; // 0x40(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorDeg
// Size: 0x38 (Inherited: 0x38)
struct FRigVMFunction_MathVectorDeg : FRigVMFunction_MathVectorUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathVectorRad
// Size: 0x38 (Inherited: 0x38)
struct FRigVMFunction_MathVectorRad : FRigVMFunction_MathVectorUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathVectorLengthSquared
// Size: 0x28 (Inherited: 0x08)
struct FRigVMFunction_MathVectorLengthSquared : FRigVMFunction_MathVectorBase {
	struct FVector Value; // 0x08(0x18)
	float Result; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorLength
// Size: 0x28 (Inherited: 0x08)
struct FRigVMFunction_MathVectorLength : FRigVMFunction_MathVectorBase {
	struct FVector Value; // 0x08(0x18)
	float Result; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorDistance
// Size: 0x40 (Inherited: 0x08)
struct FRigVMFunction_MathVectorDistance : FRigVMFunction_MathVectorBase {
	struct FVector A; // 0x08(0x18)
	struct FVector B; // 0x20(0x18)
	float Result; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorCross
// Size: 0x50 (Inherited: 0x50)
struct FRigVMFunction_MathVectorCross : FRigVMFunction_MathVectorBinaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathVectorDot
// Size: 0x40 (Inherited: 0x08)
struct FRigVMFunction_MathVectorDot : FRigVMFunction_MathVectorBase {
	struct FVector A; // 0x08(0x18)
	struct FVector B; // 0x20(0x18)
	float Result; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorUnit
// Size: 0x38 (Inherited: 0x38)
struct FRigVMFunction_MathVectorUnit : FRigVMFunction_MathVectorUnaryOp {
};

// ScriptStruct RigVM.RigVMFunction_MathVectorSetLength
// Size: 0x40 (Inherited: 0x08)
struct FRigVMFunction_MathVectorSetLength : FRigVMFunction_MathVectorBase {
	struct FVector Value; // 0x08(0x18)
	float Length; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FVector Result; // 0x28(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorClampLength
// Size: 0x40 (Inherited: 0x08)
struct FRigVMFunction_MathVectorClampLength : FRigVMFunction_MathVectorBase {
	struct FVector Value; // 0x08(0x18)
	float MinimumLength; // 0x20(0x04)
	float MaximumLength; // 0x24(0x04)
	struct FVector Result; // 0x28(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorMirror
// Size: 0x50 (Inherited: 0x08)
struct FRigVMFunction_MathVectorMirror : FRigVMFunction_MathVectorBase {
	struct FVector Value; // 0x08(0x18)
	struct FVector Normal; // 0x20(0x18)
	struct FVector Result; // 0x38(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorAngle
// Size: 0x40 (Inherited: 0x08)
struct FRigVMFunction_MathVectorAngle : FRigVMFunction_MathVectorBase {
	struct FVector A; // 0x08(0x18)
	struct FVector B; // 0x20(0x18)
	float Result; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorParallel
// Size: 0x40 (Inherited: 0x08)
struct FRigVMFunction_MathVectorParallel : FRigVMFunction_MathVectorBase {
	struct FVector A; // 0x08(0x18)
	struct FVector B; // 0x20(0x18)
	bool Result; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorOrthogonal
// Size: 0x40 (Inherited: 0x08)
struct FRigVMFunction_MathVectorOrthogonal : FRigVMFunction_MathVectorBase {
	struct FVector A; // 0x08(0x18)
	struct FVector B; // 0x20(0x18)
	bool Result; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorBezierFourPoint
// Size: 0xa0 (Inherited: 0x08)
struct FRigVMFunction_MathVectorBezierFourPoint : FRigVMFunction_MathVectorBase {
	struct FRigVMFourPointBezier Bezier; // 0x08(0x60)
	float T; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FVector Result; // 0x70(0x18)
	struct FVector Tangent; // 0x88(0x18)
};

// ScriptStruct RigVM.RigVMFourPointBezier
// Size: 0x60 (Inherited: 0x00)
struct FRigVMFourPointBezier {
	struct FVector A; // 0x00(0x18)
	struct FVector B; // 0x18(0x18)
	struct FVector C; // 0x30(0x18)
	struct FVector D; // 0x48(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorMakeBezierFourPoint
// Size: 0x68 (Inherited: 0x08)
struct FRigVMFunction_MathVectorMakeBezierFourPoint : FRigVMFunction_MathVectorBase {
	struct FRigVMFourPointBezier Bezier; // 0x08(0x60)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorClampSpatially
// Size: 0xc0 (Inherited: 0x08)
struct FRigVMFunction_MathVectorClampSpatially : FRigVMFunction_MathVectorBase {
	struct FVector Value; // 0x08(0x18)
	enum class EAxis Axis; // 0x20(0x01)
	enum class ERigVMClampSpatialMode Type; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
	float Minimum; // 0x24(0x04)
	float Maximum; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FTransform Space; // 0x30(0x60)
	bool bDrawDebug; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FLinearColor DebugColor; // 0x94(0x10)
	float DebugThickness; // 0xa4(0x04)
	struct FVector Result; // 0xa8(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathIntersectPlane
// Size: 0x88 (Inherited: 0x08)
struct FRigVMFunction_MathIntersectPlane : FRigVMFunction_MathVectorBase {
	struct FVector Start; // 0x08(0x18)
	struct FVector Direction; // 0x20(0x18)
	struct FVector PlanePoint; // 0x38(0x18)
	struct FVector PlaneNormal; // 0x50(0x18)
	struct FVector Result; // 0x68(0x18)
	float Distance; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathDistanceToPlane
// Size: 0x70 (Inherited: 0x08)
struct FRigVMFunction_MathDistanceToPlane : FRigVMFunction_MathVectorBase {
	struct FVector Point; // 0x08(0x18)
	struct FVector PlanePoint; // 0x20(0x18)
	struct FVector PlaneNormal; // 0x38(0x18)
	struct FVector ClosestPointOnPlane; // 0x50(0x18)
	float SignedDistance; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorMakeRelative
// Size: 0x50 (Inherited: 0x08)
struct FRigVMFunction_MathVectorMakeRelative : FRigVMFunction_MathVectorBase {
	struct FVector Global; // 0x08(0x18)
	struct FVector Parent; // 0x20(0x18)
	struct FVector Local; // 0x38(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorMakeAbsolute
// Size: 0x50 (Inherited: 0x08)
struct FRigVMFunction_MathVectorMakeAbsolute : FRigVMFunction_MathVectorBase {
	struct FVector Local; // 0x08(0x18)
	struct FVector Parent; // 0x20(0x18)
	struct FVector Global; // 0x38(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorMirrorTransform
// Size: 0xb0 (Inherited: 0x08)
struct FRigVMFunction_MathVectorMirrorTransform : FRigVMFunction_MathVectorBase {
	struct FVector Value; // 0x08(0x18)
	enum class EAxis MirrorAxis; // 0x20(0x01)
	enum class EAxis AxisToFlip; // 0x21(0x01)
	char pad_22[0xe]; // 0x22(0x0e)
	struct FTransform CentralTransform; // 0x30(0x60)
	struct FVector Result; // 0x90(0x18)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorArraySum
// Size: 0x30 (Inherited: 0x08)
struct FRigVMFunction_MathVectorArraySum : FRigVMFunction_MathVectorBase {
	struct TArray<struct FVector> Array; // 0x08(0x10)
	struct FVector Sum; // 0x18(0x18)
};

// ScriptStruct RigVM.RigVMFunction_MathVectorArrayAverage
// Size: 0x30 (Inherited: 0x08)
struct FRigVMFunction_MathVectorArrayAverage : FRigVMFunction_MathVectorBase {
	struct TArray<struct FVector> Array; // 0x08(0x10)
	struct FVector Average; // 0x18(0x18)
};

// ScriptStruct RigVM.RigVMFunction_NoiseFloat
// Size: 0x28 (Inherited: 0x08)
struct FRigVMFunction_NoiseFloat : FRigVMFunction_MathBase {
	float Value; // 0x08(0x04)
	float Speed; // 0x0c(0x04)
	float Frequency; // 0x10(0x04)
	float Minimum; // 0x14(0x04)
	float Maximum; // 0x18(0x04)
	float Result; // 0x1c(0x04)
	float Time; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct RigVM.RigVMFunction_NoiseDouble
// Size: 0x40 (Inherited: 0x08)
struct FRigVMFunction_NoiseDouble : FRigVMFunction_MathBase {
	double Value; // 0x08(0x08)
	double Speed; // 0x10(0x08)
	double Frequency; // 0x18(0x08)
	double Minimum; // 0x20(0x08)
	double Maximum; // 0x28(0x08)
	double Result; // 0x30(0x08)
	double Time; // 0x38(0x08)
};

// ScriptStruct RigVM.RigVMFunction_NoiseVector
// Size: 0x88 (Inherited: 0x08)
struct FRigVMFunction_NoiseVector : FRigVMFunction_MathBase {
	struct FVector Position; // 0x08(0x18)
	struct FVector Speed; // 0x20(0x18)
	struct FVector Frequency; // 0x38(0x18)
	float Minimum; // 0x50(0x04)
	float Maximum; // 0x54(0x04)
	struct FVector Result; // 0x58(0x18)
	struct FVector Time; // 0x70(0x18)
};

// ScriptStruct RigVM.RigVMFunction_NoiseVector2
// Size: 0x90 (Inherited: 0x08)
struct FRigVMFunction_NoiseVector2 : FRigVMFunction_MathBase {
	struct FVector Value; // 0x08(0x18)
	struct FVector Speed; // 0x20(0x18)
	struct FVector Frequency; // 0x38(0x18)
	double Minimum; // 0x50(0x08)
	double Maximum; // 0x58(0x08)
	struct FVector Result; // 0x60(0x18)
	struct FVector Time; // 0x78(0x18)
};

// ScriptStruct RigVM.RigVMFunction_RandomFloat
// Size: 0x30 (Inherited: 0x08)
struct FRigVMFunction_RandomFloat : FRigVMFunction_MathBase {
	int32_t Seed; // 0x08(0x04)
	float Minimum; // 0x0c(0x04)
	float Maximum; // 0x10(0x04)
	float Duration; // 0x14(0x04)
	float Result; // 0x18(0x04)
	float LastResult; // 0x1c(0x04)
	int32_t LastSeed; // 0x20(0x04)
	int32_t BaseSeed; // 0x24(0x04)
	float TimeLeft; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_RandomVector
// Size: 0x58 (Inherited: 0x08)
struct FRigVMFunction_RandomVector : FRigVMFunction_MathBase {
	int32_t Seed; // 0x08(0x04)
	float Minimum; // 0x0c(0x04)
	float Maximum; // 0x10(0x04)
	float Duration; // 0x14(0x04)
	struct FVector Result; // 0x18(0x18)
	struct FVector LastResult; // 0x30(0x18)
	int32_t LastSeed; // 0x48(0x04)
	int32_t BaseSeed; // 0x4c(0x04)
	float TimeLeft; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct RigVM.RigVMMirrorSettings
// Size: 0x28 (Inherited: 0x00)
struct FRigVMMirrorSettings {
	enum class EAxis MirrorAxis; // 0x00(0x01)
	enum class EAxis AxisToFlip; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString SearchString; // 0x08(0x10)
	struct FString ReplaceString; // 0x18(0x10)
};

// ScriptStruct RigVM.RigVMSimPoint
// Size: 0x40 (Inherited: 0x00)
struct FRigVMSimPoint {
	float Mass; // 0x00(0x04)
	float Size; // 0x04(0x04)
	float LinearDamping; // 0x08(0x04)
	float InheritMotion; // 0x0c(0x04)
	struct FVector Position; // 0x10(0x18)
	struct FVector LinearVelocity; // 0x28(0x18)
};

// ScriptStruct RigVM.RigVMDispatch_CoreBase
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_CoreBase : FRigVMDispatchFactory {
};

// ScriptStruct RigVM.RigVMDispatch_ArrayBase
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_ArrayBase : FRigVMDispatch_CoreBase {
};

// ScriptStruct RigVM.RigVMDispatch_ArrayBaseMutable
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_ArrayBaseMutable : FRigVMDispatch_ArrayBase {
};

// ScriptStruct RigVM.RigVMDispatch_ArrayMake
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_ArrayMake : FRigVMDispatch_ArrayBase {
};

// ScriptStruct RigVM.RigVMDispatch_ArrayReset
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_ArrayReset : FRigVMDispatch_ArrayBaseMutable {
};

// ScriptStruct RigVM.RigVMDispatch_ArrayGetNum
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_ArrayGetNum : FRigVMDispatch_ArrayBase {
};

// ScriptStruct RigVM.RigVMDispatch_ArraySetNum
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_ArraySetNum : FRigVMDispatch_ArrayBaseMutable {
};

// ScriptStruct RigVM.RigVMDispatch_ArrayGetAtIndex
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_ArrayGetAtIndex : FRigVMDispatch_ArrayBase {
};

// ScriptStruct RigVM.RigVMDispatch_ArraySetAtIndex
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_ArraySetAtIndex : FRigVMDispatch_ArrayBaseMutable {
};

// ScriptStruct RigVM.RigVMDispatch_ArrayAdd
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_ArrayAdd : FRigVMDispatch_ArraySetAtIndex {
};

// ScriptStruct RigVM.RigVMDispatch_ArrayInsert
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_ArrayInsert : FRigVMDispatch_ArraySetAtIndex {
};

// ScriptStruct RigVM.RigVMDispatch_ArrayRemove
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_ArrayRemove : FRigVMDispatch_ArrayBaseMutable {
};

// ScriptStruct RigVM.RigVMDispatch_ArrayReverse
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_ArrayReverse : FRigVMDispatch_ArrayReset {
};

// ScriptStruct RigVM.RigVMDispatch_ArrayFind
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_ArrayFind : FRigVMDispatch_ArrayBase {
};

// ScriptStruct RigVM.RigVMDispatch_ArrayAppend
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_ArrayAppend : FRigVMDispatch_ArrayBaseMutable {
};

// ScriptStruct RigVM.RigVMDispatch_ArrayClone
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_ArrayClone : FRigVMDispatch_ArrayBase {
};

// ScriptStruct RigVM.RigVMDispatch_ArrayUnion
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_ArrayUnion : FRigVMDispatch_ArrayAppend {
};

// ScriptStruct RigVM.RigVMDispatch_ArrayDifference
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_ArrayDifference : FRigVMDispatch_ArrayBase {
};

// ScriptStruct RigVM.RigVMDispatch_ArrayIntersection
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_ArrayIntersection : FRigVMDispatch_ArrayDifference {
};

// ScriptStruct RigVM.RigVMDispatch_ArrayIterator
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_ArrayIterator : FRigVMDispatch_ArrayBaseMutable {
};

// ScriptStruct RigVM.RigVMDispatch_Constant
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_Constant : FRigVMDispatch_CoreBase {
};

// ScriptStruct RigVM.RigVMDispatch_CoreEquals
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_CoreEquals : FRigVMDispatch_CoreBase {
};

// ScriptStruct RigVM.RigVMDispatch_CoreNotEquals
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_CoreNotEquals : FRigVMDispatch_CoreEquals {
};

// ScriptStruct RigVM.RigVMDispatch_If
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_If : FRigVMDispatch_CoreBase {
};

// ScriptStruct RigVM.RigVMDispatch_MakeStruct
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_MakeStruct : FRigVMDispatch_CoreBase {
};

// ScriptStruct RigVM.RigVMDispatch_BreakStruct
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_BreakStruct : FRigVMDispatch_MakeStruct {
};

// ScriptStruct RigVM.RigVMDispatch_Print
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_Print : FRigVMDispatchFactory {
};

// ScriptStruct RigVM.RigVMDispatch_SelectInt32
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_SelectInt32 : FRigVMDispatch_CoreBase {
};

// ScriptStruct RigVM.RigVMDispatch_SwitchInt32
// Size: 0x70 (Inherited: 0x70)
struct FRigVMDispatch_SwitchInt32 : FRigVMDispatch_CoreBase {
};

// ScriptStruct RigVM.RigVMFunction_ControlFlowBase
// Size: 0x08 (Inherited: 0x08)
struct FRigVMFunction_ControlFlowBase : FRigVMStruct {
};

// ScriptStruct RigVM.RigVMFunction_ControlFlowBranch
// Size: 0x430 (Inherited: 0x08)
struct FRigVMFunction_ControlFlowBranch : FRigVMFunction_ControlFlowBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FRigVMExecuteContext ExecuteContext; // 0x10(0x100)
	bool Condition; // 0x110(0x01)
	char pad_111[0xf]; // 0x111(0x0f)
	struct FRigVMExecuteContext TRUE; // 0x120(0x100)
	struct FRigVMExecuteContext FALSE; // 0x220(0x100)
	struct FRigVMExecuteContext Completed; // 0x320(0x100)
	struct FName BlockToRun; // 0x420(0x0c)
	char pad_42C[0x4]; // 0x42c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_NameBase
// Size: 0x08 (Inherited: 0x08)
struct FRigVMFunction_NameBase : FRigVMStruct {
};

// ScriptStruct RigVM.RigVMFunction_NameConcat
// Size: 0x30 (Inherited: 0x08)
struct FRigVMFunction_NameConcat : FRigVMFunction_NameBase {
	struct FName A; // 0x08(0x0c)
	struct FName B; // 0x14(0x0c)
	struct FName Result; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_NameTruncate
// Size: 0x38 (Inherited: 0x08)
struct FRigVMFunction_NameTruncate : FRigVMFunction_NameBase {
	struct FName Name; // 0x08(0x0c)
	int32_t Count; // 0x14(0x04)
	bool FromEnd; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FName Remainder; // 0x1c(0x0c)
	struct FName Chopped; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct RigVM.RigVMFunction_NameReplace
// Size: 0x38 (Inherited: 0x08)
struct FRigVMFunction_NameReplace : FRigVMFunction_NameBase {
	struct FName Name; // 0x08(0x0c)
	struct FName Old; // 0x14(0x0c)
	struct FName New; // 0x20(0x0c)
	struct FName Result; // 0x2c(0x0c)
};

// ScriptStruct RigVM.RigVMFunction_EndsWith
// Size: 0x28 (Inherited: 0x08)
struct FRigVMFunction_EndsWith : FRigVMFunction_NameBase {
	struct FName Name; // 0x08(0x0c)
	struct FName Ending; // 0x14(0x0c)
	bool Result; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct RigVM.RigVMFunction_StartsWith
// Size: 0x28 (Inherited: 0x08)
struct FRigVMFunction_StartsWith : FRigVMFunction_NameBase {
	struct FName Name; // 0x08(0x0c)
	struct FName Start; // 0x14(0x0c)
	bool Result; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct RigVM.RigVMFunction_Contains
// Size: 0x28 (Inherited: 0x08)
struct FRigVMFunction_Contains : FRigVMFunction_NameBase {
	struct FName Name; // 0x08(0x0c)
	struct FName Search; // 0x14(0x0c)
	bool Result; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct RigVM.RigVMFunction_StringBase
// Size: 0x08 (Inherited: 0x08)
struct FRigVMFunction_StringBase : FRigVMStruct {
};

// ScriptStruct RigVM.RigVMFunction_StringConcat
// Size: 0x38 (Inherited: 0x08)
struct FRigVMFunction_StringConcat : FRigVMFunction_StringBase {
	struct FString A; // 0x08(0x10)
	struct FString B; // 0x18(0x10)
	struct FString Result; // 0x28(0x10)
};

// ScriptStruct RigVM.RigVMFunction_StringTruncate
// Size: 0x40 (Inherited: 0x08)
struct FRigVMFunction_StringTruncate : FRigVMFunction_StringBase {
	struct FString Name; // 0x08(0x10)
	int32_t Count; // 0x18(0x04)
	bool FromEnd; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FString Remainder; // 0x20(0x10)
	struct FString Chopped; // 0x30(0x10)
};

// ScriptStruct RigVM.RigVMFunction_StringReplace
// Size: 0x48 (Inherited: 0x08)
struct FRigVMFunction_StringReplace : FRigVMFunction_StringBase {
	struct FString Name; // 0x08(0x10)
	struct FString Old; // 0x18(0x10)
	struct FString New; // 0x28(0x10)
	struct FString Result; // 0x38(0x10)
};

// ScriptStruct RigVM.RigVMFunction_StringEndsWith
// Size: 0x30 (Inherited: 0x08)
struct FRigVMFunction_StringEndsWith : FRigVMFunction_StringBase {
	struct FString Name; // 0x08(0x10)
	struct FString Ending; // 0x18(0x10)
	bool Result; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct RigVM.RigVMFunction_StringStartsWith
// Size: 0x30 (Inherited: 0x08)
struct FRigVMFunction_StringStartsWith : FRigVMFunction_StringBase {
	struct FString Name; // 0x08(0x10)
	struct FString Start; // 0x18(0x10)
	bool Result; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct RigVM.RigVMFunction_StringContains
// Size: 0x30 (Inherited: 0x08)
struct FRigVMFunction_StringContains : FRigVMFunction_StringBase {
	struct FString Name; // 0x08(0x10)
	struct FString Search; // 0x18(0x10)
	bool Result; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct RigVM.RigVMFunction_StringLength
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_StringLength : FRigVMFunction_StringBase {
	struct FString Value; // 0x08(0x10)
	int32_t Length; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_StringTrimWhitespace
// Size: 0x28 (Inherited: 0x08)
struct FRigVMFunction_StringTrimWhitespace : FRigVMFunction_StringBase {
	struct FString Value; // 0x08(0x10)
	struct FString Result; // 0x18(0x10)
};

// ScriptStruct RigVM.RigVMFunction_StringToUppercase
// Size: 0x28 (Inherited: 0x08)
struct FRigVMFunction_StringToUppercase : FRigVMFunction_StringBase {
	struct FString Value; // 0x08(0x10)
	struct FString Result; // 0x18(0x10)
};

// ScriptStruct RigVM.RigVMFunction_StringToLowercase
// Size: 0x28 (Inherited: 0x08)
struct FRigVMFunction_StringToLowercase : FRigVMFunction_StringBase {
	struct FString Value; // 0x08(0x10)
	struct FString Result; // 0x18(0x10)
};

// ScriptStruct RigVM.RigVMFunction_StringReverse
// Size: 0x28 (Inherited: 0x08)
struct FRigVMFunction_StringReverse : FRigVMFunction_StringBase {
	struct FString Value; // 0x08(0x10)
	struct FString Reverse; // 0x18(0x10)
};

// ScriptStruct RigVM.RigVMFunction_StringLeft
// Size: 0x30 (Inherited: 0x08)
struct FRigVMFunction_StringLeft : FRigVMFunction_StringBase {
	struct FString Value; // 0x08(0x10)
	int32_t Count; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString Result; // 0x20(0x10)
};

// ScriptStruct RigVM.RigVMFunction_StringRight
// Size: 0x30 (Inherited: 0x08)
struct FRigVMFunction_StringRight : FRigVMFunction_StringBase {
	struct FString Value; // 0x08(0x10)
	int32_t Count; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString Result; // 0x20(0x10)
};

// ScriptStruct RigVM.RigVMFunction_StringMiddle
// Size: 0x30 (Inherited: 0x08)
struct FRigVMFunction_StringMiddle : FRigVMFunction_StringBase {
	struct FString Value; // 0x08(0x10)
	int32_t Start; // 0x18(0x04)
	int32_t Count; // 0x1c(0x04)
	struct FString Result; // 0x20(0x10)
};

// ScriptStruct RigVM.RigVMFunction_StringFind
// Size: 0x30 (Inherited: 0x08)
struct FRigVMFunction_StringFind : FRigVMFunction_StringBase {
	struct FString Value; // 0x08(0x10)
	struct FString Search; // 0x18(0x10)
	bool Found; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t Index; // 0x2c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_StringSplit
// Size: 0x38 (Inherited: 0x08)
struct FRigVMFunction_StringSplit : FRigVMFunction_StringBase {
	struct FString Value; // 0x08(0x10)
	struct FString Separator; // 0x18(0x10)
	struct TArray<struct FString> Result; // 0x28(0x10)
};

// ScriptStruct RigVM.RigVMFunction_StringJoin
// Size: 0x38 (Inherited: 0x08)
struct FRigVMFunction_StringJoin : FRigVMFunction_StringBase {
	struct TArray<struct FString> Values; // 0x08(0x10)
	struct FString Separator; // 0x18(0x10)
	struct FString Result; // 0x28(0x10)
};

// ScriptStruct RigVM.RigVMFunction_StringPadInteger
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_StringPadInteger : FRigVMFunction_StringBase {
	int32_t Value; // 0x08(0x04)
	int32_t Digits; // 0x0c(0x04)
	struct FString Result; // 0x10(0x10)
};

// ScriptStruct RigVM.RigDispatch_ToString
// Size: 0x70 (Inherited: 0x70)
struct FRigDispatch_ToString : FRigVMDispatchFactory {
};

// ScriptStruct RigVM.RigDispatch_FromString
// Size: 0x70 (Inherited: 0x70)
struct FRigDispatch_FromString : FRigVMDispatchFactory {
};

// ScriptStruct RigVM.RigVMFunction_AccumulateBase
// Size: 0x08 (Inherited: 0x08)
struct FRigVMFunction_AccumulateBase : FRigVMFunction_SimBase {
};

// ScriptStruct RigVM.RigVMFunction_AccumulateFloatAdd
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_AccumulateFloatAdd : FRigVMFunction_AccumulateBase {
	float Increment; // 0x08(0x04)
	float InitialValue; // 0x0c(0x04)
	bool bIntegrateDeltaTime; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float Result; // 0x14(0x04)
	float AccumulatedValue; // 0x18(0x04)
	bool bIsInitialized; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct RigVM.RigVMFunction_AccumulateVectorAdd
// Size: 0x78 (Inherited: 0x08)
struct FRigVMFunction_AccumulateVectorAdd : FRigVMFunction_AccumulateBase {
	struct FVector Increment; // 0x08(0x18)
	struct FVector InitialValue; // 0x20(0x18)
	bool bIntegrateDeltaTime; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FVector Result; // 0x40(0x18)
	struct FVector AccumulatedValue; // 0x58(0x18)
	bool bIsInitialized; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct RigVM.RigVMFunction_AccumulateFloatMul
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_AccumulateFloatMul : FRigVMFunction_AccumulateBase {
	float Multiplier; // 0x08(0x04)
	float InitialValue; // 0x0c(0x04)
	bool bIntegrateDeltaTime; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float Result; // 0x14(0x04)
	float AccumulatedValue; // 0x18(0x04)
	bool bIsInitialized; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct RigVM.RigVMFunction_AccumulateVectorMul
// Size: 0x78 (Inherited: 0x08)
struct FRigVMFunction_AccumulateVectorMul : FRigVMFunction_AccumulateBase {
	struct FVector Multiplier; // 0x08(0x18)
	struct FVector InitialValue; // 0x20(0x18)
	bool bIntegrateDeltaTime; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FVector Result; // 0x40(0x18)
	struct FVector AccumulatedValue; // 0x58(0x18)
	bool bIsInitialized; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct RigVM.RigVMFunction_AccumulateQuatMul
// Size: 0xb0 (Inherited: 0x08)
struct FRigVMFunction_AccumulateQuatMul : FRigVMFunction_AccumulateBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Multiplier; // 0x10(0x20)
	struct FQuat InitialValue; // 0x30(0x20)
	bool bFlipOrder; // 0x50(0x01)
	bool bIntegrateDeltaTime; // 0x51(0x01)
	char pad_52[0xe]; // 0x52(0x0e)
	struct FQuat Result; // 0x60(0x20)
	struct FQuat AccumulatedValue; // 0x80(0x20)
	bool bIsInitialized; // 0xa0(0x01)
	char pad_A1[0xf]; // 0xa1(0x0f)
};

// ScriptStruct RigVM.RigVMFunction_AccumulateTransformMul
// Size: 0x1b0 (Inherited: 0x08)
struct FRigVMFunction_AccumulateTransformMul : FRigVMFunction_AccumulateBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Multiplier; // 0x10(0x60)
	struct FTransform InitialValue; // 0x70(0x60)
	bool bFlipOrder; // 0xd0(0x01)
	bool bIntegrateDeltaTime; // 0xd1(0x01)
	char pad_D2[0xe]; // 0xd2(0x0e)
	struct FTransform Result; // 0xe0(0x60)
	struct FTransform AccumulatedValue; // 0x140(0x60)
	bool bIsInitialized; // 0x1a0(0x01)
	char pad_1A1[0xf]; // 0x1a1(0x0f)
};

// ScriptStruct RigVM.RigVMFunction_AccumulateFloatLerp
// Size: 0x28 (Inherited: 0x08)
struct FRigVMFunction_AccumulateFloatLerp : FRigVMFunction_AccumulateBase {
	float TargetValue; // 0x08(0x04)
	float InitialValue; // 0x0c(0x04)
	float Blend; // 0x10(0x04)
	bool bIntegrateDeltaTime; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float Result; // 0x18(0x04)
	float AccumulatedValue; // 0x1c(0x04)
	bool bIsInitialized; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct RigVM.RigVMFunction_AccumulateVectorLerp
// Size: 0x78 (Inherited: 0x08)
struct FRigVMFunction_AccumulateVectorLerp : FRigVMFunction_AccumulateBase {
	struct FVector TargetValue; // 0x08(0x18)
	struct FVector InitialValue; // 0x20(0x18)
	float Blend; // 0x38(0x04)
	bool bIntegrateDeltaTime; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FVector Result; // 0x40(0x18)
	struct FVector AccumulatedValue; // 0x58(0x18)
	bool bIsInitialized; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct RigVM.RigVMFunction_AccumulateQuatLerp
// Size: 0xb0 (Inherited: 0x08)
struct FRigVMFunction_AccumulateQuatLerp : FRigVMFunction_AccumulateBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat TargetValue; // 0x10(0x20)
	struct FQuat InitialValue; // 0x30(0x20)
	float Blend; // 0x50(0x04)
	bool bIntegrateDeltaTime; // 0x54(0x01)
	char pad_55[0xb]; // 0x55(0x0b)
	struct FQuat Result; // 0x60(0x20)
	struct FQuat AccumulatedValue; // 0x80(0x20)
	bool bIsInitialized; // 0xa0(0x01)
	char pad_A1[0xf]; // 0xa1(0x0f)
};

// ScriptStruct RigVM.RigVMFunction_AccumulateTransformLerp
// Size: 0x1b0 (Inherited: 0x08)
struct FRigVMFunction_AccumulateTransformLerp : FRigVMFunction_AccumulateBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform TargetValue; // 0x10(0x60)
	struct FTransform InitialValue; // 0x70(0x60)
	float Blend; // 0xd0(0x04)
	bool bIntegrateDeltaTime; // 0xd4(0x01)
	char pad_D5[0xb]; // 0xd5(0x0b)
	struct FTransform Result; // 0xe0(0x60)
	struct FTransform AccumulatedValue; // 0x140(0x60)
	bool bIsInitialized; // 0x1a0(0x01)
	char pad_1A1[0xf]; // 0x1a1(0x0f)
};

// ScriptStruct RigVM.RigVMFunction_AccumulateFloatRange
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_AccumulateFloatRange : FRigVMFunction_AccumulateBase {
	float Value; // 0x08(0x04)
	float Minimum; // 0x0c(0x04)
	float Maximum; // 0x10(0x04)
	float AccumulatedMinimum; // 0x14(0x04)
	float AccumulatedMaximum; // 0x18(0x04)
	bool bIsInitialized; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct RigVM.RigVMFunction_AccumulateVectorRange
// Size: 0x88 (Inherited: 0x08)
struct FRigVMFunction_AccumulateVectorRange : FRigVMFunction_AccumulateBase {
	struct FVector Value; // 0x08(0x18)
	struct FVector Minimum; // 0x20(0x18)
	struct FVector Maximum; // 0x38(0x18)
	struct FVector AccumulatedMinimum; // 0x50(0x18)
	struct FVector AccumulatedMaximum; // 0x68(0x18)
	bool bIsInitialized; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// ScriptStruct RigVM.RigVMFunction_AlphaInterp
// Size: 0x78 (Inherited: 0x08)
struct FRigVMFunction_AlphaInterp : FRigVMFunction_SimBase {
	float Value; // 0x08(0x04)
	float Scale; // 0x0c(0x04)
	float Bias; // 0x10(0x04)
	bool bMapRange; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FInputRange InRange; // 0x18(0x08)
	struct FInputRange OutRange; // 0x20(0x08)
	bool bClampResult; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float ClampMin; // 0x2c(0x04)
	float ClampMax; // 0x30(0x04)
	bool bInterpResult; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float InterpSpeedIncreasing; // 0x38(0x04)
	float InterpSpeedDecreasing; // 0x3c(0x04)
	float Result; // 0x40(0x04)
	struct FInputScaleBiasClamp ScaleBiasClamp; // 0x44(0x30)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct RigVM.RigVMFunction_AlphaInterpVector
// Size: 0xa0 (Inherited: 0x08)
struct FRigVMFunction_AlphaInterpVector : FRigVMFunction_SimBase {
	struct FVector Value; // 0x08(0x18)
	float Scale; // 0x20(0x04)
	float Bias; // 0x24(0x04)
	bool bMapRange; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FInputRange InRange; // 0x2c(0x08)
	struct FInputRange OutRange; // 0x34(0x08)
	bool bClampResult; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float ClampMin; // 0x40(0x04)
	float ClampMax; // 0x44(0x04)
	bool bInterpResult; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float InterpSpeedIncreasing; // 0x4c(0x04)
	float InterpSpeedDecreasing; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FVector Result; // 0x58(0x18)
	struct FInputScaleBiasClamp ScaleBiasClamp; // 0x70(0x30)
};

// ScriptStruct RigVM.RigVMFunction_AlphaInterpQuat
// Size: 0xc0 (Inherited: 0x08)
struct FRigVMFunction_AlphaInterpQuat : FRigVMFunction_SimBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	float Scale; // 0x30(0x04)
	float Bias; // 0x34(0x04)
	bool bMapRange; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FInputRange InRange; // 0x3c(0x08)
	struct FInputRange OutRange; // 0x44(0x08)
	bool bClampResult; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float ClampMin; // 0x50(0x04)
	float ClampMax; // 0x54(0x04)
	bool bInterpResult; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float InterpSpeedIncreasing; // 0x5c(0x04)
	float InterpSpeedDecreasing; // 0x60(0x04)
	char pad_64[0xc]; // 0x64(0x0c)
	struct FQuat Result; // 0x70(0x20)
	struct FInputScaleBiasClamp ScaleBiasClamp; // 0x90(0x30)
};

// ScriptStruct RigVM.RigVMFunction_DeltaFromPreviousFloat
// Size: 0x20 (Inherited: 0x08)
struct FRigVMFunction_DeltaFromPreviousFloat : FRigVMFunction_SimBase {
	float Value; // 0x08(0x04)
	float Delta; // 0x0c(0x04)
	float PreviousValue; // 0x10(0x04)
	float Cache; // 0x14(0x04)
	bool bIsInitialized; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct RigVM.RigVMFunction_DeltaFromPreviousVector
// Size: 0x70 (Inherited: 0x08)
struct FRigVMFunction_DeltaFromPreviousVector : FRigVMFunction_SimBase {
	struct FVector Value; // 0x08(0x18)
	struct FVector Delta; // 0x20(0x18)
	struct FVector PreviousValue; // 0x38(0x18)
	struct FVector Cache; // 0x50(0x18)
	bool bIsInitialized; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct RigVM.RigVMFunction_DeltaFromPreviousQuat
// Size: 0xa0 (Inherited: 0x08)
struct FRigVMFunction_DeltaFromPreviousQuat : FRigVMFunction_SimBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FQuat Value; // 0x10(0x20)
	struct FQuat Delta; // 0x30(0x20)
	struct FQuat PreviousValue; // 0x50(0x20)
	struct FQuat Cache; // 0x70(0x20)
	bool bIsInitialized; // 0x90(0x01)
	char pad_91[0xf]; // 0x91(0x0f)
};

// ScriptStruct RigVM.RigVMFunction_DeltaFromPreviousTransform
// Size: 0x1a0 (Inherited: 0x08)
struct FRigVMFunction_DeltaFromPreviousTransform : FRigVMFunction_SimBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	struct FTransform Delta; // 0x70(0x60)
	struct FTransform PreviousValue; // 0xd0(0x60)
	struct FTransform Cache; // 0x130(0x60)
	bool bIsInitialized; // 0x190(0x01)
	char pad_191[0xf]; // 0x191(0x0f)
};

// ScriptStruct RigVM.RigVMFunction_KalmanFloat
// Size: 0x30 (Inherited: 0x08)
struct FRigVMFunction_KalmanFloat : FRigVMFunction_SimBase {
	float Value; // 0x08(0x04)
	int32_t BufferSize; // 0x0c(0x04)
	float Result; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<float> Buffer; // 0x18(0x10)
	int32_t LastInsertIndex; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_KalmanVector
// Size: 0x58 (Inherited: 0x08)
struct FRigVMFunction_KalmanVector : FRigVMFunction_SimBase {
	struct FVector Value; // 0x08(0x18)
	int32_t BufferSize; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FVector Result; // 0x28(0x18)
	struct TArray<struct FVector> Buffer; // 0x40(0x10)
	int32_t LastInsertIndex; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct RigVM.RigVMFunction_KalmanTransform
// Size: 0x100 (Inherited: 0x08)
struct FRigVMFunction_KalmanTransform : FRigVMFunction_SimBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	int32_t BufferSize; // 0x70(0x04)
	char pad_74[0xc]; // 0x74(0x0c)
	struct FTransform Result; // 0x80(0x60)
	struct TArray<struct FTransform> Buffer; // 0xe0(0x10)
	int32_t LastInsertIndex; // 0xf0(0x04)
	char pad_F4[0xc]; // 0xf4(0x0c)
};

// ScriptStruct RigVM.RigVMFunction_Timeline
// Size: 0x18 (Inherited: 0x08)
struct FRigVMFunction_Timeline : FRigVMFunction_SimBase {
	float Speed; // 0x08(0x04)
	float Time; // 0x0c(0x04)
	float AccumulatedValue; // 0x10(0x04)
	bool bIsInitialized; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct RigVM.RigVMFunction_TimeLoop
// Size: 0x38 (Inherited: 0x08)
struct FRigVMFunction_TimeLoop : FRigVMFunction_SimBase {
	float Speed; // 0x08(0x04)
	float Duration; // 0x0c(0x04)
	bool Normalize; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float Absolute; // 0x14(0x04)
	float Relative; // 0x18(0x04)
	float FlipFlop; // 0x1c(0x04)
	bool Even; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float AccumulatedAbsolute; // 0x24(0x04)
	float AccumulatedRelative; // 0x28(0x04)
	int32_t NumIterations; // 0x2c(0x04)
	bool bIsInitialized; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct RigVM.RigVMFunction_TimeOffsetFloat
// Size: 0x48 (Inherited: 0x08)
struct FRigVMFunction_TimeOffsetFloat : FRigVMFunction_SimBase {
	float Value; // 0x08(0x04)
	float SecondsAgo; // 0x0c(0x04)
	int32_t BufferSize; // 0x10(0x04)
	float TimeRange; // 0x14(0x04)
	float Result; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<float> Buffer; // 0x20(0x10)
	struct TArray<float> DeltaTimes; // 0x30(0x10)
	int32_t LastInsertIndex; // 0x40(0x04)
	int32_t UpperBound; // 0x44(0x04)
};

// ScriptStruct RigVM.RigVMFunction_TimeOffsetVector
// Size: 0x70 (Inherited: 0x08)
struct FRigVMFunction_TimeOffsetVector : FRigVMFunction_SimBase {
	struct FVector Value; // 0x08(0x18)
	float SecondsAgo; // 0x20(0x04)
	int32_t BufferSize; // 0x24(0x04)
	float TimeRange; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FVector Result; // 0x30(0x18)
	struct TArray<struct FVector> Buffer; // 0x48(0x10)
	struct TArray<float> DeltaTimes; // 0x58(0x10)
	int32_t LastInsertIndex; // 0x68(0x04)
	int32_t UpperBound; // 0x6c(0x04)
};

// ScriptStruct RigVM.RigVMFunction_TimeOffsetTransform
// Size: 0x110 (Inherited: 0x08)
struct FRigVMFunction_TimeOffsetTransform : FRigVMFunction_SimBase {
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Value; // 0x10(0x60)
	float SecondsAgo; // 0x70(0x04)
	int32_t BufferSize; // 0x74(0x04)
	float TimeRange; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FTransform Result; // 0x80(0x60)
	struct TArray<struct FTransform> Buffer; // 0xe0(0x10)
	struct TArray<float> DeltaTimes; // 0xf0(0x10)
	int32_t LastInsertIndex; // 0x100(0x04)
	int32_t UpperBound; // 0x104(0x04)
	char pad_108[0x8]; // 0x108(0x08)
};

// ScriptStruct RigVM.RigVMFunction_VerletIntegrateVector
// Size: 0xd8 (Inherited: 0x08)
struct FRigVMFunction_VerletIntegrateVector : FRigVMFunction_SimBase {
	struct FVector Target; // 0x08(0x18)
	float Strength; // 0x20(0x04)
	float Damp; // 0x24(0x04)
	float Blend; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FVector Force; // 0x30(0x18)
	struct FVector Position; // 0x48(0x18)
	struct FVector Velocity; // 0x60(0x18)
	struct FVector Acceleration; // 0x78(0x18)
	struct FRigVMSimPoint Point; // 0x90(0x40)
	bool bInitialized; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

