// Enum ControlRigSpline.ESplineType
enum class ESplineType : uint8 {
	BSpline = 0,
	Hermite = 1,
	Max = 2,
	ESplineType_MAX = 3
};

// ScriptStruct ControlRigSpline.ControlRigSplineImpl
// Size: 0x68 (Inherited: 0x00)
struct FControlRigSplineImpl {
	char pad_0[0x68]; // 0x00(0x68)
};

// ScriptStruct ControlRigSpline.ControlRigSpline
// Size: 0x18 (Inherited: 0x00)
struct FControlRigSpline {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineBase
// Size: 0x08 (Inherited: 0x08)
struct FRigUnit_ControlRigSplineBase : FRigUnit {
};

// ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineFromPoints
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_ControlRigSplineFromPoints : FRigUnit_ControlRigSplineBase {
	struct TArray<struct FVector> Points; // 0x08(0x10)
	enum class ESplineType SplineMode; // 0x18(0x01)
	bool bClosed; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	int32_t SamplesPerSegment; // 0x1c(0x04)
	float Compression; // 0x20(0x04)
	float Stretch; // 0x24(0x04)
	struct FControlRigSpline Spline; // 0x28(0x18)
};

// ScriptStruct ControlRigSpline.RigUnit_ControlRigSplineFromTransforms
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_ControlRigSplineFromTransforms : FRigUnit_ControlRigSplineBase {
	struct TArray<struct FTransform> Transforms; // 0x08(0x10)
	enum class ESplineType SplineMode; // 0x18(0x01)
	bool bClosed; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	int32_t SamplesPerSegment; // 0x1c(0x04)
	float Compression; // 0x20(0x04)
	float Stretch; // 0x24(0x04)
	struct FControlRigSpline Spline; // 0x28(0x18)
};

// ScriptStruct ControlRigSpline.RigUnit_SetSplinePoints
// Size: 0x1a0 (Inherited: 0x170)
struct FRigUnit_SetSplinePoints : FRigUnitMutable {
	struct TArray<struct FVector> Points; // 0x170(0x10)
	struct FControlRigSpline Spline; // 0x180(0x18)
	char pad_198[0x8]; // 0x198(0x08)
};

// ScriptStruct ControlRigSpline.RigUnit_SetSplineTransforms
// Size: 0x1a0 (Inherited: 0x170)
struct FRigUnit_SetSplineTransforms : FRigUnitMutable {
	struct TArray<struct FTransform> Transforms; // 0x170(0x10)
	struct FControlRigSpline Spline; // 0x180(0x18)
	char pad_198[0x8]; // 0x198(0x08)
};

// ScriptStruct ControlRigSpline.RigUnit_PositionFromControlRigSpline
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_PositionFromControlRigSpline : FRigUnit_ControlRigSplineBase {
	struct FControlRigSpline Spline; // 0x08(0x18)
	float U; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FVector Position; // 0x28(0x18)
};

// ScriptStruct ControlRigSpline.RigUnit_TransformFromControlRigSpline
// Size: 0xa0 (Inherited: 0x08)
struct FRigUnit_TransformFromControlRigSpline : FRigUnit_ControlRigSplineBase {
	struct FControlRigSpline Spline; // 0x08(0x18)
	struct FVector UpVector; // 0x20(0x18)
	float Roll; // 0x38(0x04)
	float U; // 0x3c(0x04)
	struct FTransform Transform; // 0x40(0x60)
};

// ScriptStruct ControlRigSpline.RigUnit_TransformFromControlRigSpline2
// Size: 0xc0 (Inherited: 0x08)
struct FRigUnit_TransformFromControlRigSpline2 : FRigUnit_ControlRigSplineBase {
	struct FControlRigSpline Spline; // 0x08(0x18)
	float U; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FVector PrimaryAxis; // 0x28(0x18)
	struct FVector SecondaryAxis; // 0x40(0x18)
	char pad_58[0x8]; // 0x58(0x08)
	struct FTransform Transform; // 0x60(0x60)
};

// ScriptStruct ControlRigSpline.RigUnit_TangentFromControlRigSpline
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_TangentFromControlRigSpline : FRigUnit_ControlRigSplineBase {
	struct FControlRigSpline Spline; // 0x08(0x18)
	float U; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FVector Tangent; // 0x28(0x18)
};

// ScriptStruct ControlRigSpline.RigUnit_DrawControlRigSpline
// Size: 0x1a0 (Inherited: 0x170)
struct FRigUnit_DrawControlRigSpline : FRigUnitMutable {
	struct FControlRigSpline Spline; // 0x170(0x18)
	struct FLinearColor Color; // 0x188(0x10)
	float Thickness; // 0x198(0x04)
	int32_t Detail; // 0x19c(0x04)
};

// ScriptStruct ControlRigSpline.RigUnit_GetLengthControlRigSpline
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_GetLengthControlRigSpline : FRigUnit {
	struct FControlRigSpline Spline; // 0x08(0x18)
	float Length; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ControlRigSpline.RigUnit_GetLengthAtParamControlRigSpline
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_GetLengthAtParamControlRigSpline : FRigUnit {
	struct FControlRigSpline Spline; // 0x08(0x18)
	float U; // 0x20(0x04)
	float Length; // 0x24(0x04)
};

// ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurve
// Size: 0x340 (Inherited: 0x170)
struct FRigUnit_FitChainToSplineCurve : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; // 0x170(0x10)
	struct FControlRigSpline Spline; // 0x180(0x18)
	enum class EControlRigCurveAlignment Alignment; // 0x198(0x01)
	char pad_199[0x3]; // 0x199(0x03)
	float Minimum; // 0x19c(0x04)
	float Maximum; // 0x1a0(0x04)
	int32_t SamplingPrecision; // 0x1a4(0x04)
	struct FVector PrimaryAxis; // 0x1a8(0x18)
	struct FVector SecondaryAxis; // 0x1c0(0x18)
	struct FVector PoleVectorPosition; // 0x1d8(0x18)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations; // 0x1f0(0x10)
	enum class ERigVMAnimEasingType RotationEaseType; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	float Weight; // 0x204(0x04)
	bool bPropagateToChildren; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x210(0x90)
	struct FRigUnit_FitChainToCurve_WorkData WorkData; // 0x2a0(0x98)
	char pad_338[0x8]; // 0x338(0x08)
};

// ScriptStruct ControlRigSpline.RigUnit_FitChainToSplineCurveItemArray
// Size: 0x340 (Inherited: 0x170)
struct FRigUnit_FitChainToSplineCurveItemArray : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigElementKey> Items; // 0x170(0x10)
	struct FControlRigSpline Spline; // 0x180(0x18)
	enum class EControlRigCurveAlignment Alignment; // 0x198(0x01)
	char pad_199[0x3]; // 0x199(0x03)
	float Minimum; // 0x19c(0x04)
	float Maximum; // 0x1a0(0x04)
	int32_t SamplingPrecision; // 0x1a4(0x04)
	struct FVector PrimaryAxis; // 0x1a8(0x18)
	struct FVector SecondaryAxis; // 0x1c0(0x18)
	struct FVector PoleVectorPosition; // 0x1d8(0x18)
	struct TArray<struct FRigUnit_FitChainToCurve_Rotation> Rotations; // 0x1f0(0x10)
	enum class ERigVMAnimEasingType RotationEaseType; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	float Weight; // 0x204(0x04)
	bool bPropagateToChildren; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)
	struct FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x210(0x90)
	struct FRigUnit_FitChainToCurve_WorkData WorkData; // 0x2a0(0x98)
	char pad_338[0x8]; // 0x338(0x08)
};

// ScriptStruct ControlRigSpline.RigUnit_SplineConstraint_WorkData
// Size: 0x38 (Inherited: 0x00)
struct FRigUnit_SplineConstraint_WorkData {
	float ChainLength; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FTransform> ItemTransforms; // 0x08(0x10)
	struct TArray<float> ItemSegments; // 0x18(0x10)
	struct TArray<struct FCachedRigElement> CachedItems; // 0x28(0x10)
};

// ScriptStruct ControlRigSpline.RigUnit_SplineConstraint
// Size: 0x220 (Inherited: 0x170)
struct FRigUnit_SplineConstraint : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigElementKey> Items; // 0x170(0x10)
	struct FControlRigSpline Spline; // 0x180(0x18)
	enum class EControlRigCurveAlignment Alignment; // 0x198(0x01)
	char pad_199[0x3]; // 0x199(0x03)
	float Minimum; // 0x19c(0x04)
	float Maximum; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct FVector PrimaryAxis; // 0x1a8(0x18)
	struct FVector SecondaryAxis; // 0x1c0(0x18)
	bool bPropagateToChildren; // 0x1d8(0x01)
	char pad_1D9[0x7]; // 0x1d9(0x07)
	struct FRigUnit_SplineConstraint_WorkData WorkData; // 0x1e0(0x38)
	char pad_218[0x8]; // 0x218(0x08)
};

// ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChain
// Size: 0x1a0 (Inherited: 0x170)
struct FRigUnit_FitSplineCurveToChain : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKeyCollection Items; // 0x170(0x10)
	struct FControlRigSpline Spline; // 0x180(0x18)
	char pad_198[0x8]; // 0x198(0x08)
};

// ScriptStruct ControlRigSpline.RigUnit_FitSplineCurveToChainItemArray
// Size: 0x1a0 (Inherited: 0x170)
struct FRigUnit_FitSplineCurveToChainItemArray : FRigUnit_HighlevelBaseMutable {
	struct TArray<struct FRigElementKey> Items; // 0x170(0x10)
	struct FControlRigSpline Spline; // 0x180(0x18)
	char pad_198[0x8]; // 0x198(0x08)
};

// ScriptStruct ControlRigSpline.RigUnit_ClosestParameterFromControlRigSpline
// Size: 0x40 (Inherited: 0x08)
struct FRigUnit_ClosestParameterFromControlRigSpline : FRigUnit_ControlRigSplineBase {
	struct FControlRigSpline Spline; // 0x08(0x18)
	struct FVector Position; // 0x20(0x18)
	float U; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ControlRigSpline.RigUnit_ParameterAtPercentage
// Size: 0x28 (Inherited: 0x08)
struct FRigUnit_ParameterAtPercentage : FRigUnit_ControlRigSplineBase {
	struct FControlRigSpline Spline; // 0x08(0x18)
	float Percentage; // 0x20(0x04)
	float U; // 0x24(0x04)
};

