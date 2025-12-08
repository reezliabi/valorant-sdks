// Enum IKRig.ERetargetSourceOrTarget
enum class ERetargetSourceOrTarget : uint8 {
	Source = 0,
	Target = 1,
	ERetargetSourceOrTarget_MAX = 2
};

// Enum IKRig.ERetargetTranslationMode
enum class ERetargetTranslationMode : uint8 {
	None = 0,
	GloballyScaled = 1,
	Absolute = 2,
	ERetargetTranslationMode_MAX = 3
};

// Enum IKRig.ERetargetRotationMode
enum class ERetargetRotationMode : uint8 {
	Interpolated = 0,
	OneToOne = 1,
	OneToOneReversed = 2,
	None = 3,
	ERetargetRotationMode_MAX = 4
};

// Enum IKRig.EBasicAxis
enum class EBasicAxis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	NegX = 3,
	NegY = 4,
	NegZ = 5,
	EBasicAxis_MAX = 6
};

// Enum IKRig.EWarpingDirectionSource
enum class EWarpingDirectionSource : uint8 {
	Goals = 0,
	Chain = 1,
	EWarpingDirectionSource_MAX = 2
};

// Enum IKRig.EIKRigGoalSpace
enum class EIKRigGoalSpace : uint8 {
	Component = 0,
	Additive = 1,
	World = 2,
	EIKRigGoalSpace_MAX = 3
};

// Enum IKRig.EIKRigGoalTransformSource
enum class EIKRigGoalTransformSource : uint8 {
	Manual = 0,
	Bone = 1,
	ActorComponent = 2,
	EIKRigGoalTransformSource_MAX = 3
};

// ScriptStruct IKRig.RetargetProfile
// Size: 0x110 (Inherited: 0x00)
struct FRetargetProfile {
	bool bApplyTargetRetargetPose; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName TargetRetargetPoseName; // 0x04(0x0c)
	bool bApplySourceRetargetPose; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName SourceRetargetPoseName; // 0x14(0x0c)
	bool bApplyChainSettings; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TMap<struct FName, struct FTargetChainSettings> ChainSettings; // 0x28(0x50)
	bool bApplyRootSettings; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FTargetRootSettings RootSettings; // 0x80(0x68)
	bool bApplyGlobalSettings; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	struct FRetargetGlobalSettings GlobalSettings; // 0xec(0x24)
};

// ScriptStruct IKRig.RetargetGlobalSettings
// Size: 0x24 (Inherited: 0x00)
struct FRetargetGlobalSettings {
	bool bEnableRoot; // 0x00(0x01)
	bool bEnableFK; // 0x01(0x01)
	bool bEnableIK; // 0x02(0x01)
	bool bWarping; // 0x03(0x01)
	enum class EWarpingDirectionSource DirectionSource; // 0x04(0x04)
	enum class EBasicAxis ForwardDirection; // 0x08(0x04)
	struct FName DirectionChain; // 0x0c(0x0c)
	float WarpForwards; // 0x18(0x04)
	float SidewaysOffset; // 0x1c(0x04)
	float WarpSplay; // 0x20(0x04)
};

// ScriptStruct IKRig.TargetRootSettings
// Size: 0x68 (Inherited: 0x00)
struct FTargetRootSettings {
	float RotationAlpha; // 0x00(0x04)
	float TranslationAlpha; // 0x04(0x04)
	float BlendToSource; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector BlendToSourceWeights; // 0x10(0x18)
	float ScaleHorizontal; // 0x28(0x04)
	float ScaleVertical; // 0x2c(0x04)
	struct FVector TranslationOffset; // 0x30(0x18)
	struct FRotator RotationOffset; // 0x48(0x18)
	float AffectIKHorizontal; // 0x60(0x04)
	float AffectIKVertical; // 0x64(0x04)
};

// ScriptStruct IKRig.TargetChainSettings
// Size: 0xb0 (Inherited: 0x00)
struct FTargetChainSettings {
	struct FTargetChainFKSettings FK; // 0x00(0x18)
	struct FTargetChainIKSettings IK; // 0x18(0x78)
	struct FTargetChainSpeedPlantSettings SpeedPlanting; // 0x90(0x1c)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct IKRig.TargetChainSpeedPlantSettings
// Size: 0x1c (Inherited: 0x00)
struct FTargetChainSpeedPlantSettings {
	bool EnableSpeedPlanting; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName SpeedCurveName; // 0x04(0x0c)
	float SpeedThreshold; // 0x10(0x04)
	float UnplantStiffness; // 0x14(0x04)
	float UnplantCriticalDamping; // 0x18(0x04)
};

// ScriptStruct IKRig.TargetChainIKSettings
// Size: 0x78 (Inherited: 0x00)
struct FTargetChainIKSettings {
	bool EnableIK; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BlendToSource; // 0x04(0x04)
	struct FVector BlendToSourceWeights; // 0x08(0x18)
	struct FVector StaticOffset; // 0x20(0x18)
	struct FVector StaticLocalOffset; // 0x38(0x18)
	struct FRotator StaticRotationOffset; // 0x50(0x18)
	float ScaleVertical; // 0x68(0x04)
	float Extension; // 0x6c(0x04)
	bool bAffectedByIKWarping; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct IKRig.TargetChainFKSettings
// Size: 0x18 (Inherited: 0x00)
struct FTargetChainFKSettings {
	bool EnableFK; // 0x00(0x01)
	enum class ERetargetRotationMode RotationMode; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float RotationAlpha; // 0x04(0x04)
	enum class ERetargetTranslationMode TranslationMode; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float TranslationAlpha; // 0x0c(0x04)
	float PoleVectorMatching; // 0x10(0x04)
	float PoleVectorOffset; // 0x14(0x04)
};

// ScriptStruct IKRig.AnimNode_IKRig
// Size: 0x1e8 (Inherited: 0x58)
struct FAnimNode_IKRig : FAnimNode_CustomProperty {
	struct FPoseLink Source; // 0x58(0x10)
	struct UIKRigDefinition* RigDefinitionAsset; // 0x68(0x08)
	struct TArray<struct FIKRigGoal> Goals; // 0x70(0x10)
	bool bStartFromRefPose; // 0x80(0x01)
	enum class EAnimAlphaInputType AlphaInputType; // 0x81(0x01)
	bool bAlphaBoolEnabled; // 0x82(0x01)
	char pad_83[0x1]; // 0x83(0x01)
	float Alpha; // 0x84(0x04)
	struct FInputScaleBias AlphaScaleBias; // 0x88(0x08)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x90(0x48)
	struct FName AlphaCurveName; // 0xd8(0x0c)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xe4(0x30)
	char pad_114[0x4]; // 0x114(0x04)
	struct UIKRigProcessor* IKRigProcessor; // 0x118(0x08)
	char pad_120[0xc0]; // 0x120(0xc0)
	float ActualAlpha; // 0x1e0(0x04)
	char pad_1E4[0x4]; // 0x1e4(0x04)
};

// ScriptStruct IKRig.IKRigGoal
// Size: 0xa0 (Inherited: 0x00)
struct FIKRigGoal {
	struct FName Name; // 0x00(0x0c)
	enum class EIKRigGoalTransformSource TransformSource; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FBoneReference SourceBone; // 0x10(0x14)
	char pad_24[0x4]; // 0x24(0x04)
	struct FVector Position; // 0x28(0x18)
	struct FRotator Rotation; // 0x40(0x18)
	float PositionAlpha; // 0x58(0x04)
	float RotationAlpha; // 0x5c(0x04)
	enum class EIKRigGoalSpace PositionSpace; // 0x60(0x01)
	enum class EIKRigGoalSpace RotationSpace; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
	struct FVector FinalBlendedPosition; // 0x68(0x18)
	struct FQuat FinalBlendedRotation; // 0x80(0x20)
};

// ScriptStruct IKRig.AnimNode_RetargetPoseFromMesh
// Size: 0x1e0 (Inherited: 0x10)
struct FAnimNode_RetargetPoseFromMesh : FAnimNode_Base {
	struct TWeakObjectPtr<struct USkeletalMeshComponent> SourceMeshComponent; // 0x10(0x08)
	bool bUseAttachedParent; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UIKRetargeter* IKRetargeterAsset; // 0x20(0x08)
	struct FRetargetProfile CustomRetargetProfile; // 0x28(0x110)
	bool bSuppressWarnings; // 0x138(0x01)
	bool bCopyCurves; // 0x139(0x01)
	char pad_13A[0x6]; // 0x13a(0x06)
	struct UIKRetargetProcessor* Processor; // 0x140(0x08)
	char pad_148[0x98]; // 0x148(0x98)
};

// ScriptStruct IKRig.RetargetChainMap
// Size: 0x18 (Inherited: 0x00)
struct FRetargetChainMap {
	struct FName SourceChain; // 0x00(0x0c)
	struct FName TargetChain; // 0x0c(0x0c)
};

// ScriptStruct IKRig.IKRetargetPose
// Size: 0x68 (Inherited: 0x00)
struct FIKRetargetPose {
	struct FVector RootTranslationOffset; // 0x00(0x18)
	struct TMap<struct FName, struct FQuat> BoneRotationOffsets; // 0x18(0x50)
};

// ScriptStruct IKRig.IKRigGoalContainer
// Size: 0x10 (Inherited: 0x00)
struct FIKRigGoalContainer {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct IKRig.BoneChain
// Size: 0x40 (Inherited: 0x00)
struct FBoneChain {
	struct FName ChainName; // 0x00(0x0c)
	struct FBoneReference StartBone; // 0x0c(0x14)
	struct FBoneReference EndBone; // 0x20(0x14)
	struct FName IKGoalName; // 0x34(0x0c)
};

// ScriptStruct IKRig.RetargetDefinition
// Size: 0x20 (Inherited: 0x00)
struct FRetargetDefinition {
	struct FName RootBone; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FBoneChain> BoneChains; // 0x10(0x10)
};

// ScriptStruct IKRig.GoalBone
// Size: 0x14 (Inherited: 0x00)
struct FGoalBone {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct IKRig.IKRigInputSkeleton
// Size: 0x40 (Inherited: 0x00)
struct FIKRigInputSkeleton {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct IKRig.IKRigSkeleton
// Size: 0x70 (Inherited: 0x00)
struct FIKRigSkeleton {
	struct TArray<struct FName> BoneNames; // 0x00(0x10)
	struct TArray<int32_t> ParentIndices; // 0x10(0x10)
	struct TArray<struct FName> ExcludedBones; // 0x20(0x10)
	struct TArray<struct FTransform> CurrentPoseGlobal; // 0x30(0x10)
	struct TArray<struct FTransform> CurrentPoseLocal; // 0x40(0x10)
	struct TArray<struct FTransform> RefPoseGlobal; // 0x50(0x10)
	char pad_60[0x10]; // 0x60(0x10)
};

// ScriptStruct IKRig.LimbSolverSettings
// Size: 0x24 (Inherited: 0x00)
struct FLimbSolverSettings {
	float ReachPrecision; // 0x00(0x04)
	enum class EAxis HingeRotationAxis; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	int32_t MaxIterations; // 0x08(0x04)
	bool bEnableLimit; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float MinRotationAngle; // 0x10(0x04)
	bool bAveragePull; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float PullDistribution; // 0x18(0x04)
	float ReachStepAlpha; // 0x1c(0x04)
	bool bEnableTwistCorrection; // 0x20(0x01)
	enum class EAxis EndBoneForwardAxis; // 0x21(0x01)
	char pad_22[0x2]; // 0x22(0x02)
};

// ScriptStruct IKRig.LimbLink
// Size: 0x68 (Inherited: 0x00)
struct FLimbLink {
	char pad_0[0x68]; // 0x00(0x68)
};

// ScriptStruct IKRig.LimbSolver
// Size: 0x18 (Inherited: 0x00)
struct FLimbSolver {
	char pad_0[0x18]; // 0x00(0x18)
};

