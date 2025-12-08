// Enum AnimGraphRuntime.EBoneModificationMode
enum class EBoneModificationMode : uint8 {
	BMM_Ignore = 0,
	BMM_Replace = 1,
	BMM_Additive = 2,
	BMM_MAX = 3
};

// Enum AnimGraphRuntime.ERefPoseType
enum class ERefPoseType : uint8 {
	EIT_LocalSpace = 0,
	EIT_Additive = 1,
	EIT_MAX = 2
};

// Enum AnimGraphRuntime.EEasingFuncType
enum class EEasingFuncType : uint8 {
	Linear = 0,
	Sinusoidal = 1,
	Cubic = 2,
	QuadraticInOut = 3,
	CubicInOut = 4,
	HermiteCubic = 5,
	QuarticInOut = 6,
	QuinticInOut = 7,
	CircularIn = 8,
	CircularOut = 9,
	CircularInOut = 10,
	ExpIn = 11,
	ExpOut = 12,
	ExpInOut = 13,
	CustomCurve = 14,
	EEasingFuncType_MAX = 15
};

// Enum AnimGraphRuntime.ERotationComponent
enum class ERotationComponent : uint8 {
	EulerX = 0,
	EulerY = 1,
	EulerZ = 2,
	QuaternionAngle = 3,
	SwingAngle = 4,
	TwistAngle = 5,
	ERotationComponent_MAX = 6
};

// Enum AnimGraphRuntime.EBlendListTransitionType
enum class EBlendListTransitionType : uint8 {
	StandardBlend = 0,
	Inertialization = 1,
	EBlendListTransitionType_MAX = 2
};

// Enum AnimGraphRuntime.EAnimFunctionCallSite
enum class EAnimFunctionCallSite : uint8 {
	OnInitialize = 0,
	OnUpdate = 1,
	OnBecomeRelevant = 2,
	OnEvaluate = 3,
	OnInitializePostRecursion = 4,
	OnUpdatePostRecursion = 5,
	OnBecomeRelevantPostRecursion = 6,
	OnEvaluatePostRecursion = 7,
	OnStartedBlendingOut = 8,
	OnStartedBlendingIn = 9,
	OnFinishedBlendingOut = 10,
	OnFinishedBlendingIn = 11,
	EAnimFunctionCallSite_MAX = 12
};

// Enum AnimGraphRuntime.ELayeredBoneBlendMode
enum class ELayeredBoneBlendMode : uint8 {
	BranchFilter = 0,
	BlendMask = 1,
	ELayeredBoneBlendMode_MAX = 2
};

// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class EModifyCurveApplyMode : uint8 {
	Add = 0,
	Scale = 1,
	Blend = 2,
	WeightedMovingAverage = 3,
	RemapCurve = 4,
	EModifyCurveApplyMode_MAX = 5
};

// Enum AnimGraphRuntime.EPoseDriverType
enum class EPoseDriverType : uint8 {
	SwingAndTwist = 0,
	SwingOnly = 1,
	Translation = 2,
	EPoseDriverType_MAX = 3
};

// Enum AnimGraphRuntime.EPoseDriverSource
enum class EPoseDriverSource : uint8 {
	Rotation = 0,
	Translation = 1,
	EPoseDriverSource_MAX = 2
};

// Enum AnimGraphRuntime.EPoseDriverOutput
enum class EPoseDriverOutput : uint8 {
	DrivePoses = 0,
	DriveCurves = 1,
	EPoseDriverOutput_MAX = 2
};

// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class ESnapshotSourceMode : uint8 {
	NamedSnapshot = 0,
	SnapshotPin = 1,
	ESnapshotSourceMode_MAX = 2
};

// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class ESequenceEvalReinit : uint8 {
	NoReset = 0,
	StartPosition = 1,
	ExplicitTime = 2,
	ESequenceEvalReinit_MAX = 3
};

// Enum AnimGraphRuntime.ESwapRootBone
enum class ESwapRootBone : uint8 {
	SwapRootBone_Component = 0,
	SwapRootBone_Actor = 1,
	SwapRootBone_None = 2,
	SwapRootBone_MAX = 3
};

// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class AnimPhysAngularConstraintType : uint8 {
	Angular = 0,
	Cone = 1,
	AnimPhysAngularConstraintType_MAX = 2
};

// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class AnimPhysLinearConstraintType : uint8 {
	Free = 0,
	Limited = 1,
	AnimPhysLinearConstraintType_MAX = 2
};

// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class AnimPhysSimSpaceType : uint8 {
	Component = 0,
	Actor = 1,
	World = 2,
	RootRelative = 3,
	BoneRelative = 4,
	AnimPhysSimSpaceType_MAX = 5
};

// Enum AnimGraphRuntime.ESphericalLimitType
enum class ESphericalLimitType : uint8 {
	Inner = 0,
	Outer = 1,
	ESphericalLimitType_MAX = 2
};

// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class EDrivenBoneModificationMode : uint8 {
	AddToInput = 0,
	ReplaceComponent = 1,
	AddToRefPose = 2,
	EDrivenBoneModificationMode_MAX = 3
};

// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class EDrivenDestinationMode : uint8 {
	Bone = 0,
	MorphTarget = 1,
	MaterialParameter = 2,
	EDrivenDestinationMode_MAX = 3
};

// Enum AnimGraphRuntime.EConstraintOffsetOption
enum class EConstraintOffsetOption : uint8 {
	None = 0,
	Offset_RefPose = 1,
	EConstraintOffsetOption_MAX = 2
};

// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class CopyBoneDeltaMode : uint8 {
	Accumulate = 0,
	Copy = 1,
	CopyBoneDeltaMode_MAX = 2
};

// Enum AnimGraphRuntime.EInterpolationBlend
enum class EInterpolationBlend : uint8 {
	Linear = 0,
	Cubic = 1,
	Sinusoidal = 2,
	EaseInOutExponent2 = 3,
	EaseInOutExponent3 = 4,
	EaseInOutExponent4 = 5,
	EaseInOutExponent5 = 6,
	MAX = 7
};

// Enum AnimGraphRuntime.ESimulationSpace
enum class ESimulationSpace : uint8 {
	ComponentSpace = 0,
	WorldSpace = 1,
	BaseBoneSpace = 2,
	ESimulationSpace_MAX = 3
};

// Enum AnimGraphRuntime.ESimulationTiming
enum class ESimulationTiming : uint8 {
	Default = 0,
	Synchronous = 1,
	Deferred = 2,
	ESimulationTiming_MAX = 3
};

// Enum AnimGraphRuntime.EScaleChainInitialLength
enum class EScaleChainInitialLength : uint8 {
	FixedDefaultLengthValue = 0,
	Distance = 1,
	ChainLength = 2,
	EScaleChainInitialLength_MAX = 3
};

// Enum AnimGraphRuntime.ESplineBoneAxis
enum class ESplineBoneAxis : uint8 {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	ESplineBoneAxis_MAX = 4
};

// Enum AnimGraphRuntime.EWarpingEvaluationMode
enum class EWarpingEvaluationMode : uint8 {
	Manual = 0,
	Graph = 1,
	EWarpingEvaluationMode_MAX = 2
};

// Enum AnimGraphRuntime.EWarpingVectorMode
enum class EWarpingVectorMode : uint8 {
	ComponentSpaceVector = 0,
	ActorSpaceVector = 1,
	WorldSpaceVector = 2,
	IKFootRootLocalSpaceVector = 3,
	EWarpingVectorMode_MAX = 4
};

// Enum AnimGraphRuntime.ERBFSolverType
enum class ERBFSolverType : uint8 {
	Additive = 0,
	Interpolative = 1,
	ERBFSolverType_MAX = 2
};

// Enum AnimGraphRuntime.ERBFFunctionType
enum class ERBFFunctionType : uint8 {
	Gaussian = 0,
	Exponential = 1,
	Linear = 2,
	Cubic = 3,
	Quintic = 4,
	DefaultFunction = 5,
	ERBFFunctionType_MAX = 6
};

// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class ERBFDistanceMethod : uint8 {
	Euclidean = 0,
	Quaternion = 1,
	SwingAngle = 2,
	TwistAngle = 3,
	DefaultMethod = 4,
	ERBFDistanceMethod_MAX = 5
};

// Enum AnimGraphRuntime.ERBFNormalizeMethod
enum class ERBFNormalizeMethod : uint8 {
	OnlyNormalizeAboveOne = 0,
	AlwaysNormalize = 1,
	NormalizeWithinMedian = 2,
	NoNormalization = 3,
	ERBFNormalizeMethod_MAX = 4
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceGraphBase
// Size: 0x68 (Inherited: 0x10)
struct FAnimNode_BlendSpaceGraphBase : FAnimNode_Base {
	float X; // 0x10(0x04)
	float Y; // 0x14(0x04)
	struct FName GroupName; // 0x18(0x0c)
	enum class EAnimGroupRole GroupRole; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct UBlendSpace* BlendSpace; // 0x28(0x08)
	struct TArray<struct FPoseLink> SamplePoseLinks; // 0x30(0x10)
	char pad_40[0x28]; // 0x40(0x28)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceGraph
// Size: 0x68 (Inherited: 0x68)
struct FAnimNode_BlendSpaceGraph : FAnimNode_BlendSpaceGraphBase {
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceSampleResult
// Size: 0x20 (Inherited: 0x20)
struct FAnimNode_BlendSpaceSampleResult : FAnimNode_Root {
};

// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size: 0xd0 (Inherited: 0x10)
struct FAnimNode_SkeletalControlBase : FAnimNode_Base {
	struct FComponentSpacePoseLink ComponentPose; // 0x10(0x10)
	int32_t LODThreshold; // 0x20(0x04)
	float ActualAlpha; // 0x24(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0x28(0x01)
	bool bAlphaBoolEnabled; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	float Alpha; // 0x2c(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x30(0x08)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x38(0x48)
	struct FName AlphaCurveName; // 0x80(0x0c)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c(0x30)
	char pad_BC[0x14]; // 0xbc(0x14)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// Size: 0x138 (Inherited: 0xd0)
struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToModify; // 0xd0(0x14)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FVector Translation; // 0xe8(0x18)
	struct FRotator Rotation; // 0x100(0x18)
	struct FVector Scale; // 0x118(0x18)
	enum class EBoneModificationMode TranslationMode; // 0x130(0x01)
	enum class EBoneModificationMode RotationMode; // 0x131(0x01)
	enum class EBoneModificationMode ScaleMode; // 0x132(0x01)
	enum class EBoneControlSpace TranslationSpace; // 0x133(0x01)
	enum class EBoneControlSpace RotationSpace; // 0x134(0x01)
	enum class EBoneControlSpace ScaleSpace; // 0x135(0x01)
	char pad_136[0x2]; // 0x136(0x02)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBones
// Size: 0x168 (Inherited: 0xd0)
struct FAnimNode_ModifyBones : FAnimNode_SkeletalControlBase {
	struct TArray<struct FBoneReference> BonesToModify; // 0xd0(0x10)
	struct TArray<struct FVector> Translations; // 0xe0(0x10)
	struct TArray<struct FRotator> Rotations; // 0xf0(0x10)
	struct TArray<struct FVector> Scales; // 0x100(0x10)
	enum class EBoneModificationMode TranslationMode; // 0x110(0x01)
	enum class EBoneModificationMode RotationMode; // 0x111(0x01)
	enum class EBoneModificationMode ScaleMode; // 0x112(0x01)
	enum class EBoneControlSpace TranslationSpace; // 0x113(0x01)
	enum class EBoneControlSpace RotationSpace; // 0x114(0x01)
	enum class EBoneControlSpace ScaleSpace; // 0x115(0x01)
	char pad_116[0x52]; // 0x116(0x52)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// Size: 0x10 (Inherited: 0x10)
struct FAnimNode_RefPose : FAnimNode_Base {
};

// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// Size: 0x10 (Inherited: 0x10)
struct FAnimNode_MeshSpaceRefPose : FAnimNode_Base {
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// Size: 0x100 (Inherited: 0xd0)
struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	struct FBoneReference TargetBone; // 0xd0(0x14)
	struct FBoneReference SourceBone; // 0xe4(0x14)
	float Multiplier; // 0xf8(0x04)
	enum class EBoneAxis RotationAxisToRefer; // 0xfc(0x01)
	bool bIsAdditive; // 0xfd(0x01)
	char pad_FE[0x2]; // 0xfe(0x02)
};

// ScriptStruct AnimGraphRuntime.BlendSpaceReference
// Size: 0x10 (Inherited: 0x10)
struct FBlendSpaceReference : FAnimNodeReference {
};

// ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
// Size: 0x1a0 (Inherited: 0x00)
struct FRotationRetargetingInfo {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0xf]; // 0x01(0x0f)
	struct FTransform Source; // 0x10(0x60)
	struct FTransform Target; // 0x70(0x60)
	enum class ERotationComponent RotationComponent; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct FVector TwistAxis; // 0xd8(0x18)
	bool bUseAbsoluteAngle; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	float SourceMinimum; // 0xf4(0x04)
	float SourceMaximum; // 0xf8(0x04)
	float TargetMinimum; // 0xfc(0x04)
	float TargetMaximum; // 0x100(0x04)
	enum class EEasingFuncType EasingType; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct FRuntimeFloatCurve CustomCurve; // 0x108(0x88)
	bool bFlipEasing; // 0x190(0x01)
	char pad_191[0x3]; // 0x191(0x03)
	float EasingWeight; // 0x194(0x04)
	bool bClamp; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
};

// ScriptStruct AnimGraphRuntime.PositionHistory
// Size: 0x30 (Inherited: 0x00)
struct FPositionHistory {
	struct TArray<struct FVector> Positions; // 0x00(0x10)
	float Range; // 0x10(0x04)
	char pad_14[0x1c]; // 0x14(0x1c)
};

// ScriptStruct AnimGraphRuntime.AnimationStateResultReference
// Size: 0x10 (Inherited: 0x10)
struct FAnimationStateResultReference : FAnimNodeReference {
};

// ScriptStruct AnimGraphRuntime.AnimationStateMachineReference
// Size: 0x10 (Inherited: 0x10)
struct FAnimationStateMachineReference : FAnimNodeReference {
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayerBase
// Size: 0x68 (Inherited: 0x38)
struct FAnimNode_BlendSpacePlayerBase : FAnimNode_AssetPlayerBase {
	char pad_38[0x28]; // 0x38(0x28)
	struct UBlendSpace* PreviousBlendSpace; // 0x60(0x08)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// Size: 0xa0 (Inherited: 0x68)
struct FAnimNode_BlendSpacePlayer : FAnimNode_BlendSpacePlayerBase {
	struct UBlendSpace* BlendSpace; // 0x68(0x08)
	bool bReplicate; // 0x70(0x01)
	char pad_71[0x2f]; // 0x71(0x2f)
};

// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// Size: 0x210 (Inherited: 0xa0)
struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer {
	char pad_A0[0xc0]; // 0xa0(0xc0)
	struct FPoseLink BasePose; // 0x160(0x10)
	int32_t LODThreshold; // 0x170(0x04)
	struct FName SourceSocketName; // 0x174(0x0c)
	struct FName PivotSocketName; // 0x180(0x0c)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct FVector LookAtLocation; // 0x190(0x18)
	struct FVector SocketAxis; // 0x1a8(0x18)
	float Alpha; // 0x1c0(0x04)
	char pad_1C4[0x4c]; // 0x1c4(0x4c)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// Size: 0xd0 (Inherited: 0x10)
struct FAnimNode_ApplyAdditive : FAnimNode_Base {
	struct FPoseLink base; // 0x10(0x10)
	struct FPoseLink Additive; // 0x20(0x10)
	float Alpha; // 0x30(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x34(0x08)
	int32_t LODThreshold; // 0x3c(0x04)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40(0x48)
	struct FName AlphaCurveName; // 0x88(0x0c)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x94(0x30)
	char pad_C4[0x4]; // 0xc4(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0xc8(0x01)
	bool bAlphaBoolEnabled; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
};

// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
// Size: 0x2c (Inherited: 0x00)
struct FBlendBoneByChannelEntry {
	struct FBoneReference SourceBone; // 0x00(0x14)
	struct FBoneReference TargetBone; // 0x14(0x14)
	bool bBlendTranslation; // 0x28(0x01)
	bool bBlendRotation; // 0x29(0x01)
	bool bBlendScale; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
// Size: 0x68 (Inherited: 0x10)
struct FAnimNode_BlendBoneByChannel : FAnimNode_Base {
	struct FPoseLink A; // 0x10(0x10)
	struct FPoseLink B; // 0x20(0x10)
	struct TArray<struct FBlendBoneByChannelEntry> BoneDefinitions; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
	float Alpha; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x58(0x08)
	enum class EBoneControlSpace TransformsSpace; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// Size: 0x48 (Inherited: 0x10)
struct FAnimNode_BlendListBase : FAnimNode_Base {
	struct TArray<struct FPoseLink> BlendPose; // 0x10(0x10)
	char pad_20[0x28]; // 0x20(0x28)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// Size: 0x48 (Inherited: 0x48)
struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// Size: 0x48 (Inherited: 0x48)
struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// Size: 0x48 (Inherited: 0x48)
struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// Size: 0xa8 (Inherited: 0xa0)
struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; // 0xa0(0x04)
	bool bTeleportToNormalizedTime; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer_Standalone
// Size: 0x98 (Inherited: 0x68)
struct FAnimNode_BlendSpacePlayer_Standalone : FAnimNode_BlendSpacePlayerBase {
	struct FName GroupName; // 0x68(0x0c)
	enum class EAnimGroupRole GroupRole; // 0x74(0x01)
	enum class EAnimSyncMethod Method; // 0x75(0x01)
	bool bIgnoreForRelevancyTest; // 0x76(0x01)
	char pad_77[0x1]; // 0x77(0x01)
	float X; // 0x78(0x04)
	float Y; // 0x7c(0x04)
	float PlayRate; // 0x80(0x04)
	bool bLoop; // 0x84(0x01)
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
	float StartPosition; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct UBlendSpace* BlendSpace; // 0x90(0x08)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CallFunction
// Size: 0x38 (Inherited: 0x10)
struct FAnimNode_CallFunction : FAnimNode_Base {
	struct FPoseLink Source; // 0x10(0x10)
	char pad_20[0x14]; // 0x20(0x14)
	enum class EAnimFunctionCallSite CallSite; // 0x34(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// Size: 0x158 (Inherited: 0x10)
struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	struct TWeakObjectPtr<struct USkeletalMeshComponent> SourceMeshComponent; // 0x10(0x08)
	char bUseAttachedParent : 1; // 0x18(0x01)
	char bCopyCurves : 1; // 0x18(0x01)
	char pad_18_2 : 6; // 0x18(0x01)
	bool bCopyCustomAttributes; // 0x19(0x01)
	char bUseMeshPose : 1; // 0x1a(0x01)
	char pad_1A_1 : 7; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
	struct FName RootBoneToCopy; // 0x1c(0x0c)
	char pad_28[0x130]; // 0x28(0x130)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// Size: 0x40 (Inherited: 0x10)
struct FAnimNode_CurveSource : FAnimNode_Base {
	struct FPoseLink SourcePose; // 0x10(0x10)
	struct FName SourceBinding; // 0x20(0x0c)
	float Alpha; // 0x2c(0x04)
	struct TScriptInterface<ICurveSourceInterface> CurveSource; // 0x30(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// Size: 0xf0 (Inherited: 0x10)
struct FAnimNode_LayeredBoneBlend : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	struct TArray<struct FPoseLink> BlendPoses; // 0x20(0x10)
	enum class ELayeredBoneBlendMode BlendMode; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct UBlendProfile*> BlendMasks; // 0x38(0x10)
	struct TArray<struct FInputBlendPose> LayerSetup; // 0x48(0x10)
	struct TArray<float> BlendWeights; // 0x58(0x10)
	bool bMeshSpaceRotationBlend; // 0x68(0x01)
	bool bMeshSpaceScaleBlend; // 0x69(0x01)
	enum class ECurveBlendOption CurveBlendOption; // 0x6a(0x01)
	bool bBlendRootMotionBasedOnRootBone; // 0x6b(0x01)
	char pad_6C[0x4]; // 0x6c(0x04)
	int32_t LODThreshold; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights; // 0x78(0x10)
	struct FGuid SkeletonGuid; // 0x88(0x10)
	struct FGuid VirtualBoneGuid; // 0x98(0x10)
	char pad_A8[0x48]; // 0xa8(0x48)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// Size: 0x38 (Inherited: 0x10)
struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base {
	struct FPoseLink base; // 0x10(0x10)
	struct FPoseLink Additive; // 0x20(0x10)
	bool bMeshSpaceAdditive; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MirrorBase
// Size: 0x48 (Inherited: 0x10)
struct FAnimNode_MirrorBase : FAnimNode_Base {
	struct FPoseLink Source; // 0x10(0x10)
	char pad_20[0x28]; // 0x20(0x28)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Mirror
// Size: 0x48 (Inherited: 0x48)
struct FAnimNode_Mirror : FAnimNode_MirrorBase {
};

// ScriptStruct AnimGraphRuntime.AnimNode_Mirror_Standalone
// Size: 0x60 (Inherited: 0x48)
struct FAnimNode_Mirror_Standalone : FAnimNode_MirrorBase {
	bool bMirror; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct UMirrorDataTable* MirrorDataTable; // 0x50(0x08)
	float BlendTime; // 0x58(0x04)
	bool bResetChild; // 0x5c(0x01)
	bool bBoneMirroring; // 0x5d(0x01)
	bool bCurveMirroring; // 0x5e(0x01)
	bool bAttributeMirroring; // 0x5f(0x01)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// Size: 0x120 (Inherited: 0x10)
struct FAnimNode_ModifyCurve : FAnimNode_Base {
	struct FPoseLink SourcePose; // 0x10(0x10)
	struct TMap<struct FName, float> CurveMap; // 0x20(0x50)
	struct TArray<float> CurveValues; // 0x70(0x10)
	struct TArray<struct FName> CurveNames; // 0x80(0x10)
	char pad_90[0x88]; // 0x90(0x88)
	float Alpha; // 0x118(0x04)
	enum class EModifyCurveApplyMode ApplyMode; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// Size: 0x50 (Inherited: 0x10)
struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	struct TArray<struct FPoseLink> Poses; // 0x10(0x10)
	struct TArray<float> DesiredAlphas; // 0x20(0x10)
	char pad_30[0x10]; // 0x30(0x10)
	struct FInputScaleBias AlphaScaleBias; // 0x40(0x08)
	bool bAdditiveNode; // 0x48(0x01)
	bool bNormalizeAlpha; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// Size: 0x98 (Inherited: 0x38)
struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase {
	struct UPoseAsset* PoseAsset; // 0x38(0x08)
	char pad_40[0x58]; // 0x40(0x58)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// Size: 0xd0 (Inherited: 0x98)
struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler {
	struct FPoseLink SourcePose; // 0x98(0x10)
	enum class EAlphaBlendOption BlendOption; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct UCurveFloat* CustomCurve; // 0xb0(0x08)
	char pad_B8[0x18]; // 0xb8(0x18)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// Size: 0xb8 (Inherited: 0x98)
struct FAnimNode_PoseByName : FAnimNode_PoseHandler {
	struct FName PoseName; // 0x98(0x0c)
	float PoseWeight; // 0xa4(0x04)
	char pad_A8[0x10]; // 0xa8(0x10)
};

// ScriptStruct AnimGraphRuntime.PoseDriverTransform
// Size: 0x30 (Inherited: 0x00)
struct FPoseDriverTransform {
	struct FVector TargetTranslation; // 0x00(0x18)
	struct FRotator TargetRotation; // 0x18(0x18)
};

// ScriptStruct AnimGraphRuntime.PoseDriverTarget
// Size: 0xc8 (Inherited: 0x00)
struct FPoseDriverTarget {
	struct TArray<struct FPoseDriverTransform> BoneTransforms; // 0x00(0x10)
	struct FRotator TargetRotation; // 0x10(0x18)
	float TargetScale; // 0x28(0x04)
	enum class ERBFDistanceMethod DistanceMethod; // 0x2c(0x01)
	enum class ERBFFunctionType FunctionType; // 0x2d(0x01)
	bool bApplyCustomCurve; // 0x2e(0x01)
	char pad_2F[0x1]; // 0x2f(0x01)
	struct FRichCurve CustomCurve; // 0x30(0x80)
	struct FName DrivenName; // 0xb0(0x0c)
	char pad_BC[0x8]; // 0xbc(0x08)
	bool bIsHidden; // 0xc4(0x01)
	char pad_C5[0x3]; // 0xc5(0x03)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// Size: 0x1a0 (Inherited: 0x98)
struct FAnimNode_PoseDriver : FAnimNode_PoseHandler {
	struct FPoseLink SourcePose; // 0x98(0x10)
	struct TArray<struct FBoneReference> SourceBones; // 0xa8(0x10)
	struct FBoneReference EvalSpaceBone; // 0xb8(0x14)
	bool bEvalFromRefPose; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	struct TArray<struct FBoneReference> OnlyDriveBones; // 0xd0(0x10)
	struct TArray<struct FPoseDriverTarget> PoseTargets; // 0xe0(0x10)
	struct FRBFParams RBFParams; // 0xf0(0x38)
	enum class EPoseDriverSource DriveSource; // 0x128(0x01)
	enum class EPoseDriverOutput DriveOutput; // 0x129(0x01)
	char pad_12A[0x42]; // 0x12a(0x42)
	int32_t LODThreshold; // 0x16c(0x04)
	char pad_170[0x30]; // 0x170(0x30)
};

// ScriptStruct AnimGraphRuntime.RBFParams
// Size: 0x38 (Inherited: 0x00)
struct FRBFParams {
	int32_t TargetDimensions; // 0x00(0x04)
	enum class ERBFSolverType SolverType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float Radius; // 0x08(0x04)
	bool bAutomaticRadius; // 0x0c(0x01)
	enum class ERBFFunctionType Function; // 0x0d(0x01)
	enum class ERBFDistanceMethod DistanceMethod; // 0x0e(0x01)
	enum class EBoneAxis TwistAxis; // 0x0f(0x01)
	float WeightThreshold; // 0x10(0x04)
	enum class ERBFNormalizeMethod NormalizeMethod; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FVector MedianReference; // 0x18(0x18)
	float MedianMin; // 0x30(0x04)
	float MedianMax; // 0x34(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// Size: 0xb0 (Inherited: 0x10)
struct FAnimNode_PoseSnapshot : FAnimNode_Base {
	struct FName SnapshotName; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FPoseSnapshot Snapshot; // 0x20(0x40)
	enum class ESnapshotSourceMode Mode; // 0x60(0x01)
	char pad_61[0x4f]; // 0x61(0x4f)
};

// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// Size: 0x50 (Inherited: 0x00)
struct FRandomPlayerSequenceEntry {
	struct UAnimSequenceBase* Sequence; // 0x00(0x08)
	float ChanceToPlay; // 0x08(0x04)
	int32_t MinLoopCount; // 0x0c(0x04)
	int32_t MaxLoopCount; // 0x10(0x04)
	float MinPlayRate; // 0x14(0x04)
	float MaxPlayRate; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FAlphaBlend BlendIn; // 0x20(0x30)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// Size: 0x88 (Inherited: 0x10)
struct FAnimNode_RandomPlayer : FAnimNode_AssetPlayerRelevancyBase {
	struct TArray<struct FRandomPlayerSequenceEntry> Entries; // 0x10(0x10)
	char pad_20[0x60]; // 0x20(0x60)
	float BlendWeight; // 0x80(0x04)
	bool bShuffleMode; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// Size: 0xb0 (Inherited: 0x10)
struct FAnimNode_RotateRootBone : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	float Pitch; // 0x20(0x04)
	float Yaw; // 0x24(0x04)
	struct FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28(0x30)
	struct FInputScaleBiasClamp YawScaleBiasClamp; // 0x58(0x30)
	struct FRotator MeshToComponent; // 0x88(0x18)
	bool bRotateRootMotionAttribute; // 0xa0(0x01)
	char pad_A1[0xf]; // 0xa1(0x0f)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// Size: 0x150 (Inherited: 0xa0)
struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer {
	struct FPoseLink BasePose; // 0xa0(0x10)
	int32_t LODThreshold; // 0xb0(0x04)
	float Alpha; // 0xb4(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0xb8(0x08)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0xc0(0x48)
	struct FName AlphaCurveName; // 0x108(0x0c)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x114(0x30)
	char pad_144[0x4]; // 0x144(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0x148(0x01)
	bool bAlphaBoolEnabled; // 0x149(0x01)
	char pad_14A[0x6]; // 0x14a(0x06)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpaceGraph
// Size: 0x118 (Inherited: 0x68)
struct FAnimNode_RotationOffsetBlendSpaceGraph : FAnimNode_BlendSpaceGraphBase {
	struct FPoseLink BasePose; // 0x68(0x10)
	int32_t LODThreshold; // 0x78(0x04)
	float Alpha; // 0x7c(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x80(0x08)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x88(0x48)
	struct FName AlphaCurveName; // 0xd0(0x0c)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xdc(0x30)
	char pad_10C[0x4]; // 0x10c(0x04)
	enum class EAnimAlphaInputType AlphaInputType; // 0x110(0x01)
	bool bAlphaBoolEnabled; // 0x111(0x01)
	char pad_112[0x6]; // 0x112(0x06)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluatorBase
// Size: 0x40 (Inherited: 0x38)
struct FAnimNode_SequenceEvaluatorBase : FAnimNode_AssetPlayerBase {
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// Size: 0x40 (Inherited: 0x40)
struct FAnimNode_SequenceEvaluator : FAnimNode_SequenceEvaluatorBase {
};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator_Standalone
// Size: 0x68 (Inherited: 0x40)
struct FAnimNode_SequenceEvaluator_Standalone : FAnimNode_SequenceEvaluatorBase {
	struct FName GroupName; // 0x40(0x0c)
	enum class EAnimGroupRole GroupRole; // 0x4c(0x01)
	enum class EAnimSyncMethod Method; // 0x4d(0x01)
	bool bIgnoreForRelevancyTest; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
	struct UAnimSequenceBase* Sequence; // 0x50(0x08)
	float ExplicitTime; // 0x58(0x04)
	bool bShouldLoop; // 0x5c(0x01)
	bool bTeleportToExplicitTime; // 0x5d(0x01)
	enum class ESequenceEvalReinit ReinitializationBehavior; // 0x5e(0x01)
	char pad_5F[0x1]; // 0x5f(0x01)
	float StartPosition; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// Size: 0x50 (Inherited: 0x10)
struct FAnimNode_Slot : FAnimNode_Base {
	struct FPoseLink Source; // 0x10(0x10)
	struct FName SlotName; // 0x20(0x0c)
	bool bAlwaysUpdateSourcePose; // 0x2c(0x01)
	char pad_2D[0x23]; // 0x2d(0x23)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Sync
// Size: 0x30 (Inherited: 0x10)
struct FAnimNode_Sync : FAnimNode_Base {
	struct FPoseLink Source; // 0x10(0x10)
	struct FName GroupName; // 0x20(0x0c)
	enum class EAnimGroupRole GroupRole; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// Size: 0xc8 (Inherited: 0x10)
struct FAnimNode_TwoWayBlend : FAnimNode_Base {
	struct FPoseLink A; // 0x10(0x10)
	struct FPoseLink B; // 0x20(0x10)
	enum class EAnimAlphaInputType AlphaInputType; // 0x30(0x01)
	char bAlphaBoolEnabled : 1; // 0x31(0x01)
	char pad_31_1 : 2; // 0x31(0x01)
	char bResetChildOnActivation : 1; // 0x31(0x01)
	char pad_31_4 : 4; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float Alpha; // 0x34(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x38(0x08)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40(0x48)
	struct FName AlphaCurveName; // 0x88(0x0c)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x94(0x30)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// Size: 0xbc0 (Inherited: 0x730)
struct FAnimSequencerInstanceProxy : FAnimInstanceProxy {
	char pad_730[0x490]; // 0x730(0x490)
};

// ScriptStruct AnimGraphRuntime.BlendListBaseReference
// Size: 0x10 (Inherited: 0x10)
struct FBlendListBaseReference : FAnimNodeReference {
};

// ScriptStruct AnimGraphRuntime.BlendSpacePlayerReference
// Size: 0x10 (Inherited: 0x10)
struct FBlendSpacePlayerReference : FAnimNodeReference {
};

// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// Size: 0x88 (Inherited: 0x00)
struct FAnimPhysConstraintSetup {
	enum class AnimPhysLinearConstraintType LinearXLimitType; // 0x00(0x01)
	enum class AnimPhysLinearConstraintType LinearYLimitType; // 0x01(0x01)
	enum class AnimPhysLinearConstraintType LinearZLimitType; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FVector LinearAxesMin; // 0x08(0x18)
	struct FVector LinearAxesMax; // 0x20(0x18)
	enum class AnimPhysAngularConstraintType AngularConstraintType; // 0x38(0x01)
	enum class AnimPhysTwistAxis TwistAxis; // 0x39(0x01)
	enum class AnimPhysTwistAxis AngularTargetAxis; // 0x3a(0x01)
	char pad_3B[0x1]; // 0x3b(0x01)
	float ConeAngle; // 0x3c(0x04)
	struct FVector AngularLimitsMin; // 0x40(0x18)
	struct FVector AngularLimitsMax; // 0x58(0x18)
	struct FVector AngularTarget; // 0x70(0x18)
};

// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// Size: 0x80 (Inherited: 0x00)
struct FAnimPhysPlanarLimit {
	struct FBoneReference DrivingBone; // 0x00(0x14)
	char pad_14[0xc]; // 0x14(0x0c)
	struct FTransform PlaneTransform; // 0x20(0x60)
};

// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// Size: 0x38 (Inherited: 0x00)
struct FAnimPhysSphericalLimit {
	struct FBoneReference DrivingBone; // 0x00(0x14)
	char pad_14[0x4]; // 0x14(0x04)
	struct FVector SphereLocalOffset; // 0x18(0x18)
	float LimitRadius; // 0x30(0x04)
	enum class ESphericalLimitType LimitType; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct AnimGraphRuntime.AnimPhysBodyDefinition
// Size: 0xd8 (Inherited: 0x00)
struct FAnimPhysBodyDefinition {
	struct FBoneReference BoundBone; // 0x00(0x14)
	char pad_14[0x4]; // 0x14(0x04)
	struct FVector BoxExtents; // 0x18(0x18)
	struct FVector LocalJointOffset; // 0x30(0x18)
	struct FAnimPhysConstraintSetup ConstraintSetup; // 0x48(0x88)
	enum class AnimPhysCollisionType CollisionType; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	float SphereCollisionRadius; // 0xd4(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// Size: 0x540 (Inherited: 0xd0)
struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase {
	float LinearDampingOverride; // 0xd0(0x04)
	float AngularDampingOverride; // 0xd4(0x04)
	char pad_D8[0xc8]; // 0xd8(0xc8)
	struct FBoneReference RelativeSpaceBone; // 0x1a0(0x14)
	struct FBoneReference BoundBone; // 0x1b4(0x14)
	struct FBoneReference ChainEnd; // 0x1c8(0x14)
	char pad_1DC[0x4]; // 0x1dc(0x04)
	struct TArray<struct FAnimPhysBodyDefinition> PhysicsBodyDefinitions; // 0x1e0(0x10)
	float GravityScale; // 0x1f0(0x04)
	char pad_1F4[0x4]; // 0x1f4(0x04)
	struct FVector GravityOverride; // 0x1f8(0x18)
	float LinearSpringConstant; // 0x210(0x04)
	float AngularSpringConstant; // 0x214(0x04)
	float WindScale; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
	struct FVector ComponentLinearAccScale; // 0x220(0x18)
	struct FVector ComponentLinearVelScale; // 0x238(0x18)
	struct FVector ComponentAppliedLinearAccClamp; // 0x250(0x18)
	float AngularBiasOverride; // 0x268(0x04)
	int32_t NumSolverIterationsPreUpdate; // 0x26c(0x04)
	int32_t NumSolverIterationsPostUpdate; // 0x270(0x04)
	char pad_274[0x4]; // 0x274(0x04)
	struct TArray<struct FAnimPhysSphericalLimit> SphericalLimits; // 0x278(0x10)
	struct FVector ExternalForce; // 0x288(0x18)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // 0x2a0(0x10)
	enum class AnimPhysSimSpaceType SimulationSpace; // 0x2b0(0x01)
	char pad_2B1[0x2]; // 0x2b1(0x02)
	char bUseSphericalLimits : 1; // 0x2b3(0x01)
	char bUsePlanarLimit : 1; // 0x2b3(0x01)
	char bDoUpdate : 1; // 0x2b3(0x01)
	char bDoEval : 1; // 0x2b3(0x01)
	char bOverrideLinearDamping : 1; // 0x2b3(0x01)
	char bOverrideAngularBias : 1; // 0x2b3(0x01)
	char bOverrideAngularDamping : 1; // 0x2b3(0x01)
	char bEnableWind : 1; // 0x2b3(0x01)
	char pad_2B4_0 : 1; // 0x2b4(0x01)
	char bUseGravityOverride : 1; // 0x2b4(0x01)
	char bGravityOverrideInSimSpace : 1; // 0x2b4(0x01)
	char bLinearSpring : 1; // 0x2b4(0x01)
	char bAngularSpring : 1; // 0x2b4(0x01)
	char bChain : 1; // 0x2b4(0x01)
	char pad_2B4_6 : 2; // 0x2b4(0x01)
	char pad_2B5[0xb]; // 0x2b5(0x0b)
	struct FRotationRetargetingInfo RetargetingSettings; // 0x2c0(0x1a0)
	char pad_460[0xe0]; // 0x460(0xe0)
};

// ScriptStruct AnimGraphRuntime.AngularRangeLimit
// Size: 0x48 (Inherited: 0x00)
struct FAngularRangeLimit {
	struct FVector LimitMin; // 0x00(0x18)
	struct FVector LimitMax; // 0x18(0x18)
	struct FBoneReference bone; // 0x30(0x14)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
// Size: 0xf0 (Inherited: 0xd0)
struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase {
	struct TArray<struct FAngularRangeLimit> AngularRangeLimits; // 0xd0(0x10)
	struct TArray<struct FVector> AngularOffsets; // 0xe0(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// Size: 0x140 (Inherited: 0xd0)
struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase {
	struct FBoneReference SourceBone; // 0xd0(0x14)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct UCurveFloat* DrivingCurve; // 0xe8(0x08)
	float Multiplier; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	double RangeMin; // 0xf8(0x08)
	double RangeMax; // 0x100(0x08)
	double RemappedMin; // 0x108(0x08)
	double RemappedMax; // 0x110(0x08)
	struct FName ParameterName; // 0x118(0x0c)
	struct FBoneReference TargetBone; // 0x124(0x14)
	enum class EDrivenDestinationMode DestinationMode; // 0x138(0x01)
	enum class EDrivenBoneModificationMode ModificationMode; // 0x139(0x01)
	enum class EComponentType SourceComponent; // 0x13a(0x01)
	char bUseRange : 1; // 0x13b(0x01)
	char bAffectTargetTranslationX : 1; // 0x13b(0x01)
	char bAffectTargetTranslationY : 1; // 0x13b(0x01)
	char bAffectTargetTranslationZ : 1; // 0x13b(0x01)
	char bAffectTargetRotationX : 1; // 0x13b(0x01)
	char bAffectTargetRotationY : 1; // 0x13b(0x01)
	char bAffectTargetRotationZ : 1; // 0x13b(0x01)
	char bAffectTargetScaleX : 1; // 0x13b(0x01)
	char bAffectTargetScaleY : 1; // 0x13c(0x01)
	char bAffectTargetScaleZ : 1; // 0x13c(0x01)
	char pad_13C_2 : 6; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
// Size: 0x1e0 (Inherited: 0xd0)
struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase {
	struct FVector EffectorLocation; // 0xd0(0x18)
	enum class EBoneControlSpace EffectorLocationSpace; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct FBoneSocketTarget EffectorTarget; // 0xf0(0xa0)
	struct FBoneReference TipBone; // 0x190(0x14)
	struct FBoneReference RootBone; // 0x1a4(0x14)
	float Precision; // 0x1b8(0x04)
	int32_t MaxIterations; // 0x1bc(0x04)
	bool bStartFromTail; // 0x1c0(0x01)
	bool bEnableRotationLimit; // 0x1c1(0x01)
	char pad_1C2[0x6]; // 0x1c2(0x06)
	struct TArray<float> RotationLimitPerJoints; // 0x1c8(0x10)
	char pad_1D8[0x8]; // 0x1d8(0x08)
};

// ScriptStruct AnimGraphRuntime.Constraint
// Size: 0x20 (Inherited: 0x00)
struct FConstraint {
	struct FBoneReference TargetBone; // 0x00(0x14)
	enum class EConstraintOffsetOption OffsetOption; // 0x14(0x01)
	enum class ETransformConstraintType TransformType; // 0x15(0x01)
	struct FFilterOptionPerAxis PerAxis; // 0x16(0x03)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// Size: 0x130 (Inherited: 0xd0)
struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToModify; // 0xd0(0x14)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct TArray<struct FConstraint> ConstraintSetup; // 0xe8(0x10)
	struct TArray<float> ConstraintWeights; // 0xf8(0x10)
	bool bUseConstraintOverrideBones; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct TArray<struct FBoneReference> ConstraintOverrideBones; // 0x110(0x10)
	char pad_120[0x10]; // 0x120(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// Size: 0x100 (Inherited: 0xd0)
struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference SourceBone; // 0xd0(0x14)
	struct FBoneReference TargetBone; // 0xe4(0x14)
	bool bCopyTranslation; // 0xf8(0x01)
	bool bCopyRotation; // 0xf9(0x01)
	bool bCopyScale; // 0xfa(0x01)
	enum class EBoneControlSpace ControlSpace; // 0xfb(0x01)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// Size: 0x108 (Inherited: 0xd0)
struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase {
	struct FBoneReference SourceBone; // 0xd0(0x14)
	struct FBoneReference TargetBone; // 0xe4(0x14)
	bool bCopyTranslation; // 0xf8(0x01)
	bool bCopyRotation; // 0xf9(0x01)
	bool bCopyScale; // 0xfa(0x01)
	enum class CopyBoneDeltaMode CopyMode; // 0xfb(0x01)
	float TranslationMultiplier; // 0xfc(0x04)
	float RotationMultiplier; // 0x100(0x04)
	float ScaleMultiplier; // 0x104(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// Size: 0x210 (Inherited: 0xd0)
struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase {
	struct FTransform EffectorTransform; // 0xd0(0x60)
	struct FBoneSocketTarget EffectorTarget; // 0x130(0xa0)
	struct FBoneReference TipBone; // 0x1d0(0x14)
	struct FBoneReference RootBone; // 0x1e4(0x14)
	float Precision; // 0x1f8(0x04)
	int32_t MaxIterations; // 0x1fc(0x04)
	enum class EBoneControlSpace EffectorTransformSpace; // 0x200(0x01)
	enum class EBoneRotationSource EffectorRotationSource; // 0x201(0x01)
	char pad_202[0xe]; // 0x202(0x0e)
};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// Size: 0x138 (Inherited: 0xd0)
struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	struct FBoneReference RightHandFK; // 0xd0(0x14)
	struct FBoneReference LeftHandFK; // 0xe4(0x14)
	struct FBoneReference RightHandIK; // 0xf8(0x14)
	struct FBoneReference LeftHandIK; // 0x10c(0x14)
	struct TArray<struct FBoneReference> IKBonesToMove; // 0x120(0x10)
	float HandFKWeight; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
};

// ScriptStruct AnimGraphRuntime.IKChainLink
// Size: 0x78 (Inherited: 0x00)
struct FIKChainLink {
	char pad_0[0x78]; // 0x00(0x78)
};

// ScriptStruct AnimGraphRuntime.IKChain
// Size: 0x50 (Inherited: 0x00)
struct FIKChain {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// Size: 0x40 (Inherited: 0x00)
struct FAnimLegIKDefinition {
	struct FBoneReference IKFootBone; // 0x00(0x14)
	struct FBoneReference FKFootBone; // 0x14(0x14)
	int32_t NumBonesInLimb; // 0x28(0x04)
	float MinRotationAngle; // 0x2c(0x04)
	enum class EAxis FootBoneForwardAxis; // 0x30(0x01)
	enum class EAxis HingeRotationAxis; // 0x31(0x01)
	bool bEnableRotationLimit; // 0x32(0x01)
	bool bEnableKneeTwistCorrection; // 0x33(0x01)
	struct FName TwistOffsetCurveName; // 0x34(0x0c)
};

// ScriptStruct AnimGraphRuntime.AnimLegIKData
// Size: 0xf0 (Inherited: 0x00)
struct FAnimLegIKData {
	char pad_0[0xf0]; // 0x00(0xf0)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// Size: 0x100 (Inherited: 0xd0)
struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase {
	float ReachPrecision; // 0xd0(0x04)
	int32_t MaxIterations; // 0xd4(0x04)
	struct TArray<struct FAnimLegIKDefinition> LegsDefinition; // 0xd8(0x10)
	char pad_E8[0x18]; // 0xe8(0x18)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// Size: 0x270 (Inherited: 0xd0)
struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToModify; // 0xd0(0x14)
	char pad_E4[0xc]; // 0xe4(0x0c)
	struct FBoneSocketTarget LookAtTarget; // 0xf0(0xa0)
	struct FVector LookAtLocation; // 0x190(0x18)
	struct FAxis LookAt_Axis; // 0x1a8(0x20)
	bool bUseLookUpAxis; // 0x1c8(0x01)
	enum class EInterpolationBlend InterpolationType; // 0x1c9(0x01)
	char pad_1CA[0x6]; // 0x1ca(0x06)
	struct FAxis LookUp_Axis; // 0x1d0(0x20)
	float LookAtClamp; // 0x1f0(0x04)
	float InterpolationTime; // 0x1f4(0x04)
	float InterpolationTriggerThreashold; // 0x1f8(0x04)
	char pad_1FC[0x74]; // 0x1fc(0x74)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// Size: 0x130 (Inherited: 0xd0)
struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToObserve; // 0xd0(0x14)
	enum class EBoneControlSpace DisplaySpace; // 0xe4(0x01)
	bool bRelativeToRefPose; // 0xe5(0x01)
	char pad_E6[0x2]; // 0xe6(0x02)
	struct FVector Translation; // 0xe8(0x18)
	struct FRotator Rotation; // 0x100(0x18)
	struct FVector Scale; // 0x118(0x18)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
// Size: 0xe0 (Inherited: 0xd0)
struct FAnimNode_ResetRoot : FAnimNode_SkeletalControlBase {
	char pad_D0[0x10]; // 0xd0(0x10)
};

// ScriptStruct AnimGraphRuntime.SimSpaceSettings
// Size: 0x60 (Inherited: 0x00)
struct FSimSpaceSettings {
	float WorldAlpha; // 0x00(0x04)
	float VelocityScaleZ; // 0x04(0x04)
	float MaxLinearVelocity; // 0x08(0x04)
	float MaxAngularVelocity; // 0x0c(0x04)
	float MaxLinearAcceleration; // 0x10(0x04)
	float MaxAngularAcceleration; // 0x14(0x04)
	struct FVector ExternalLinearDragV; // 0x18(0x18)
	struct FVector ExternalLinearVelocity; // 0x30(0x18)
	struct FVector ExternalAngularVelocity; // 0x48(0x18)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
// Size: 0x9c0 (Inherited: 0xd0)
struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase {
	struct UPhysicsAsset* OverridePhysicsAsset; // 0xd0(0x08)
	char pad_D8[0x130]; // 0xd8(0x130)
	struct FVector OverrideWorldGravity; // 0x208(0x18)
	struct FVector ExternalForce; // 0x220(0x18)
	struct FVector ComponentLinearAccScale; // 0x238(0x18)
	struct FVector ComponentLinearVelScale; // 0x250(0x18)
	struct FVector ComponentAppliedLinearAccClamp; // 0x268(0x18)
	struct FSimSpaceSettings SimSpaceSettings; // 0x280(0x60)
	float CachedBoundsScale; // 0x2e0(0x04)
	struct FBoneReference BaseBoneRef; // 0x2e4(0x14)
	enum class ECollisionChannel OverlapChannel; // 0x2f8(0x01)
	enum class ESimulationSpace SimulationSpace; // 0x2f9(0x01)
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x2fa(0x01)
	bool bUseExternalClothCollision; // 0x2fb(0x01)
	char pad_2FC[0x1]; // 0x2fc(0x01)
	char bEnableWorldGeometry : 1; // 0x2fd(0x01)
	char bOverrideWorldGravity : 1; // 0x2fd(0x01)
	char bTransferBoneVelocities : 1; // 0x2fd(0x01)
	char bFreezeIncomingPoseOnStart : 1; // 0x2fd(0x01)
	char bClampLinearTranslationLimitToRefPose : 1; // 0x2fd(0x01)
	char pad_2FD_5 : 3; // 0x2fd(0x01)
	char pad_2FE[0x2]; // 0x2fe(0x02)
	float WorldSpaceMinimumScale; // 0x300(0x04)
	float EvaluationResetTime; // 0x304(0x04)
	char pad_308[0x1]; // 0x308(0x01)
	enum class ESimulationTiming SimulationTiming; // 0x309(0x01)
	char pad_30A[0x6b6]; // 0x30a(0x6b6)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// Size: 0x90 (Inherited: 0x10)
struct FAnimNode_ScaleChainLength : FAnimNode_Base {
	struct FPoseLink InputPose; // 0x10(0x10)
	float DefaultChainLength; // 0x20(0x04)
	struct FBoneReference ChainStartBone; // 0x24(0x14)
	struct FBoneReference ChainEndBone; // 0x38(0x14)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FVector TargetLocation; // 0x50(0x18)
	float Alpha; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x70(0x08)
	enum class EScaleChainInitialLength ChainInitialLength; // 0x78(0x01)
	char pad_79[0x17]; // 0x79(0x17)
};

// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// Size: 0x18 (Inherited: 0x00)
struct FSplineIKCachedBoneData {
	struct FBoneReference bone; // 0x00(0x14)
	int32_t RefSkeletonIndex; // 0x14(0x04)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// Size: 0x280 (Inherited: 0xd0)
struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase {
	struct FBoneReference StartBone; // 0xd0(0x14)
	struct FBoneReference EndBone; // 0xe4(0x14)
	enum class ESplineBoneAxis BoneAxis; // 0xf8(0x01)
	bool bAutoCalculateSpline; // 0xf9(0x01)
	char pad_FA[0x2]; // 0xfa(0x02)
	int32_t PointCount; // 0xfc(0x04)
	struct TArray<struct FTransform> ControlPoints; // 0x100(0x10)
	float Roll; // 0x110(0x04)
	float TwistStart; // 0x114(0x04)
	float TwistEnd; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FAlphaBlend TwistBlend; // 0x120(0x30)
	float Stretch; // 0x150(0x04)
	float Offset; // 0x154(0x04)
	char pad_158[0x128]; // 0x158(0x128)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// Size: 0x178 (Inherited: 0xd0)
struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference SpringBone; // 0xd0(0x14)
	char pad_E4[0x4]; // 0xe4(0x04)
	double MaxDisplacement; // 0xe8(0x08)
	double SpringStiffness; // 0xf0(0x08)
	double SpringDamping; // 0xf8(0x08)
	double ErrorResetThresh; // 0x100(0x08)
	char pad_108[0x6c]; // 0x108(0x6c)
	char bLimitDisplacement : 1; // 0x174(0x01)
	char bTranslateX : 1; // 0x174(0x01)
	char bTranslateY : 1; // 0x174(0x01)
	char bTranslateZ : 1; // 0x174(0x01)
	char bRotateX : 1; // 0x174(0x01)
	char bRotateY : 1; // 0x174(0x01)
	char bRotateZ : 1; // 0x174(0x01)
	char pad_174_7 : 1; // 0x174(0x01)
	char pad_175[0x3]; // 0x175(0x03)
};

// ScriptStruct AnimGraphRuntime.RotationLimit
// Size: 0x30 (Inherited: 0x00)
struct FRotationLimit {
	struct FVector LimitMin; // 0x00(0x18)
	struct FVector LimitMax; // 0x18(0x18)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// Size: 0x2b0 (Inherited: 0xd0)
struct FAnimNode_Trail : FAnimNode_SkeletalControlBase {
	char pad_D0[0x60]; // 0xd0(0x60)
	struct FBoneReference TrailBone; // 0x130(0x14)
	int32_t ChainLength; // 0x144(0x04)
	enum class EAxis ChainBoneAxis; // 0x148(0x01)
	char bInvertChainBoneAxis : 1; // 0x149(0x01)
	char bLimitStretch : 1; // 0x149(0x01)
	char bLimitRotation : 1; // 0x149(0x01)
	char bUsePlanarLimit : 1; // 0x149(0x01)
	char bActorSpaceFakeVel : 1; // 0x149(0x01)
	char bReorientParentToChild : 1; // 0x149(0x01)
	char pad_149_6 : 2; // 0x149(0x01)
	char pad_14A[0x2]; // 0x14a(0x02)
	float MaxDeltaTime; // 0x14c(0x04)
	float RelaxationSpeedScale; // 0x150(0x04)
	char pad_154[0x4]; // 0x154(0x04)
	struct FRuntimeFloatCurve TrailRelaxationSpeed; // 0x158(0x88)
	struct FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor; // 0x1e0(0x30)
	struct TArray<struct FRotationLimit> RotationLimits; // 0x210(0x10)
	struct TArray<struct FVector> RotationOffsets; // 0x220(0x10)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // 0x230(0x10)
	float StretchLimit; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct FVector FakeVelocity; // 0x248(0x18)
	struct FBoneReference BaseJoint; // 0x260(0x14)
	float LastBoneRotationAnimAlphaBlend; // 0x274(0x04)
	char pad_278[0x38]; // 0x278(0x38)
};

// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// Size: 0x38 (Inherited: 0x00)
struct FReferenceBoneFrame {
	struct FBoneReference bone; // 0x00(0x14)
	char pad_14[0x4]; // 0x14(0x04)
	struct FAxis Axis; // 0x18(0x20)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// Size: 0x180 (Inherited: 0xd0)
struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase {
	struct FReferenceBoneFrame BaseFrame; // 0xd0(0x38)
	struct FReferenceBoneFrame TwistFrame; // 0x108(0x38)
	struct FAxis TwistPlaneNormalAxis; // 0x140(0x20)
	float RangeMax; // 0x160(0x04)
	float RemappedMin; // 0x164(0x04)
	float RemappedMax; // 0x168(0x04)
	struct FName CurveName; // 0x16c(0x0c)
	char pad_178[0x8]; // 0x178(0x08)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// Size: 0x2b0 (Inherited: 0xd0)
struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase {
	struct FBoneReference IKBone; // 0xd0(0x14)
	char pad_E4[0x4]; // 0xe4(0x04)
	double StartStretchRatio; // 0xe8(0x08)
	double MaxStretchScale; // 0xf0(0x08)
	struct FVector EffectorLocation; // 0xf8(0x18)
	char pad_110[0x10]; // 0x110(0x10)
	struct FBoneSocketTarget EffectorTarget; // 0x120(0xa0)
	struct FVector JointTargetLocation; // 0x1c0(0x18)
	char pad_1D8[0x8]; // 0x1d8(0x08)
	struct FBoneSocketTarget JointTarget; // 0x1e0(0xa0)
	struct FAxis TwistAxis; // 0x280(0x20)
	enum class EBoneControlSpace EffectorLocationSpace; // 0x2a0(0x01)
	enum class EBoneControlSpace JointTargetLocationSpace; // 0x2a1(0x01)
	char bAllowStretching : 1; // 0x2a2(0x01)
	char bTakeRotationFromEffectorSpace : 1; // 0x2a2(0x01)
	char bMaintainEffectorRelRot : 1; // 0x2a2(0x01)
	char bAllowTwist : 1; // 0x2a2(0x01)
	char pad_2A2_4 : 4; // 0x2a2(0x01)
	char pad_2A3[0xd]; // 0x2a3(0x0d)
};

// ScriptStruct AnimGraphRuntime.IKFootPelvisPullDownSolver
// Size: 0x80 (Inherited: 0x00)
struct FIKFootPelvisPullDownSolver {
	struct FVectorRK4SpringInterpolator PelvisAdjustmentInterp; // 0x00(0x08)
	char pad_8[0x58]; // 0x08(0x58)
	double PelvisAdjustmentInterpAlpha; // 0x60(0x08)
	double PelvisAdjustmentMaxDistance; // 0x68(0x08)
	double PelvisAdjustmentErrorTolerance; // 0x70(0x08)
	int32_t PelvisAdjustmentMaxIter; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct AnimGraphRuntime.WarpingVectorValue
// Size: 0x20 (Inherited: 0x00)
struct FWarpingVectorValue {
	enum class EWarpingVectorMode Mode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVector Value; // 0x08(0x18)
};

// ScriptStruct AnimGraphRuntime.LayeredBoneBlendReference
// Size: 0x10 (Inherited: 0x10)
struct FLayeredBoneBlendReference : FAnimNodeReference {
};

// ScriptStruct AnimGraphRuntime.LinkedAnimGraphReference
// Size: 0x10 (Inherited: 0x10)
struct FLinkedAnimGraphReference : FAnimNodeReference {
};

// ScriptStruct AnimGraphRuntime.RBFEntry
// Size: 0x10 (Inherited: 0x00)
struct FRBFEntry {
	struct TArray<float> Values; // 0x00(0x10)
};

// ScriptStruct AnimGraphRuntime.RBFTarget
// Size: 0xa0 (Inherited: 0x10)
struct FRBFTarget : FRBFEntry {
	float ScaleFactor; // 0x10(0x04)
	bool bApplyCustomCurve; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FRichCurve CustomCurve; // 0x18(0x80)
	enum class ERBFDistanceMethod DistanceMethod; // 0x98(0x01)
	enum class ERBFFunctionType FunctionType; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
};

// ScriptStruct AnimGraphRuntime.SequenceEvaluatorReference
// Size: 0x10 (Inherited: 0x10)
struct FSequenceEvaluatorReference : FAnimNodeReference {
};

// ScriptStruct AnimGraphRuntime.SequencePlayerReference
// Size: 0x10 (Inherited: 0x10)
struct FSequencePlayerReference : FAnimNodeReference {
};

// ScriptStruct AnimGraphRuntime.SkeletalControlReference
// Size: 0x10 (Inherited: 0x10)
struct FSkeletalControlReference : FAnimNodeReference {
};

