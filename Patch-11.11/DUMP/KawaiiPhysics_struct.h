// Enum KawaiiPhysics.EPlanarConstraint
enum class EPlanarConstraint : uint8 {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	EPlanarConstraint_MAX = 4
};

// Enum KawaiiPhysics.EBoneForwardAxis
enum class EBoneForwardAxis : uint8 {
	X_Positive = 0,
	X_Negative = 1,
	Y_Positive = 2,
	Y_Negative = 3,
	Z_Positive = 4,
	Z_Negative = 5,
	EBoneForwardAxis_MAX = 6
};

// Enum KawaiiPhysics.ECollisionLimitType
enum class ECollisionLimitType : uint8 {
	None = 0,
	Spherical = 1,
	Capsule = 2,
	Box = 3,
	Planar = 4,
	ECollisionLimitType_MAX = 5
};

// Enum KawaiiPhysics.ECollisionSourceType
enum class ECollisionSourceType : uint8 {
	AnimNode = 0,
	DataAsset = 1,
	PhysicsAsset = 2,
	ECollisionSourceType_MAX = 3
};

// Enum KawaiiPhysics.EXPBDComplianceType
enum class EXPBDComplianceType : uint8 {
	Concrete = 0,
	Wood = 1,
	Leather = 2,
	Tendon = 3,
	Rubber = 4,
	Muscle = 5,
	Fat = 6,
	EXPBDComplianceType_MAX = 7
};

// Enum KawaiiPhysics.EExternalForceSpace
enum class EExternalForceSpace : uint8 {
	ComponentSpace = 0,
	WorldSpace = 1,
	BoneSpace = 2,
	EExternalForceSpace_MAX = 3
};

// Enum KawaiiPhysics.EExternalForceCurveEvaluateType
enum class EExternalForceCurveEvaluateType : uint8 {
	Single = 0,
	Average = 1,
	Max = 2,
	Min = 3,
	EExternalForceCurveEvaluateType_MAX = 4
};

// Enum KawaiiPhysics.EKawaiiPhysicsAccessExternalForceResult
enum class EKawaiiPhysicsAccessExternalForceResult : uint8 {
	Valid = 0,
	NotValid = 1,
	EKawaiiPhysicsAccessExternalForceResult_MAX = 2
};

// ScriptStruct KawaiiPhysics.CollisionLimitBase
// Size: 0x90 (Inherited: 0x00)
struct FCollisionLimitBase {
	struct FBoneReference DrivingBone; // 0x00(0x14)
	char pad_14[0x4]; // 0x14(0x04)
	struct FVector OffsetLocation; // 0x18(0x18)
	struct FRotator OffsetRotation; // 0x30(0x18)
	struct FVector Location; // 0x48(0x18)
	struct FQuat Rotation; // 0x60(0x20)
	bool bEnable; // 0x80(0x01)
	enum class ECollisionSourceType SourceType; // 0x81(0x01)
	char pad_82[0xe]; // 0x82(0x0e)
};

// ScriptStruct KawaiiPhysics.SphericalLimit
// Size: 0x90 (Inherited: 0x90)
struct FSphericalLimit : FCollisionLimitBase {
	float Radius; // 0x88(0x04)
	enum class ESphericalLimitType LimitType; // 0x8c(0x01)
};

// ScriptStruct KawaiiPhysics.CapsuleLimit
// Size: 0x90 (Inherited: 0x90)
struct FCapsuleLimit : FCollisionLimitBase {
	float Radius; // 0x88(0x04)
	float Length; // 0x8c(0x04)
};

// ScriptStruct KawaiiPhysics.BoxLimit
// Size: 0xa0 (Inherited: 0x90)
struct FBoxLimit : FCollisionLimitBase {
	struct FVector Extent; // 0x88(0x18)
};

// ScriptStruct KawaiiPhysics.PlanarLimit
// Size: 0xb0 (Inherited: 0x90)
struct FPlanarLimit : FCollisionLimitBase {
	struct FPlane Plane; // 0x90(0x20)
};

// ScriptStruct KawaiiPhysics.KawaiiPhysicsRootBoneSetting
// Size: 0x30 (Inherited: 0x00)
struct FKawaiiPhysicsRootBoneSetting {
	struct FBoneReference RootBone; // 0x00(0x14)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FBoneReference> OverrideExcludeBones; // 0x18(0x10)
	bool bUseOverrideExcludeBones; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct KawaiiPhysics.KawaiiPhysicsSettings
// Size: 0x18 (Inherited: 0x00)
struct FKawaiiPhysicsSettings {
	float Damping; // 0x00(0x04)
	float Stiffness; // 0x04(0x04)
	float WorldDampingLocation; // 0x08(0x04)
	float WorldDampingRotation; // 0x0c(0x04)
	float Radius; // 0x10(0x04)
	float LimitAngle; // 0x14(0x04)
};

// ScriptStruct KawaiiPhysics.KawaiiPhysicsModifyBone
// Size: 0x110 (Inherited: 0x00)
struct FKawaiiPhysicsModifyBone {
	struct FBoneReference BoneRef; // 0x00(0x14)
	int32_t Index; // 0x14(0x04)
	int32_t ParentIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<int32_t> ChildIndices; // 0x20(0x10)
	struct FKawaiiPhysicsSettings PhysicsSettings; // 0x30(0x18)
	struct FVector Location; // 0x48(0x18)
	struct FVector PrevLocation; // 0x60(0x18)
	char pad_78[0x8]; // 0x78(0x08)
	struct FQuat PrevRotation; // 0x80(0x20)
	struct FVector PoseLocation; // 0xa0(0x18)
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FQuat PoseRotation; // 0xc0(0x20)
	struct FVector PoseScale; // 0xe0(0x18)
	float LengthFromRoot; // 0xf8(0x04)
	float LengthRateFromRoot; // 0xfc(0x04)
	bool bDummy; // 0x100(0x01)
	bool bSkipSimulate; // 0x101(0x01)
	char pad_102[0xe]; // 0x102(0x0e)
};

// ScriptStruct KawaiiPhysics.ModifyBoneConstraint
// Size: 0x40 (Inherited: 0x00)
struct FModifyBoneConstraint {
	struct FBoneReference Bone1; // 0x00(0x14)
	struct FBoneReference Bone2; // 0x14(0x14)
	bool bOverrideCompliance; // 0x28(0x01)
	enum class EXPBDComplianceType ComplianceType; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	int32_t ModifyBoneIndex1; // 0x2c(0x04)
	int32_t ModifyBoneIndex2; // 0x30(0x04)
	float Length; // 0x34(0x04)
	bool bIsDummy; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float Lambda; // 0x3c(0x04)
};

// ScriptStruct KawaiiPhysics.AnimNode_KawaiiPhysics
// Size: 0x860 (Inherited: 0xd0)
struct FAnimNode_KawaiiPhysics : FAnimNode_SkeletalControlBase {
	struct FBoneReference RootBone; // 0xd0(0x14)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct TArray<struct FBoneReference> ExcludeBones; // 0xe8(0x10)
	struct TArray<struct FKawaiiPhysicsRootBoneSetting> AdditionalRootBones; // 0xf8(0x10)
	float DummyBoneLength; // 0x108(0x04)
	enum class EBoneForwardAxis BoneForwardAxis; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	struct FKawaiiPhysicsSettings PhysicsSettings; // 0x110(0x18)
	int32_t TargetFramerate; // 0x128(0x04)
	bool OverrideTargetFramerate; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	int32_t WarmUpFrames; // 0x130(0x04)
	bool bUseWarmUpWhenResetDynamics; // 0x134(0x01)
	bool bNeedWarmUp; // 0x135(0x01)
	char pad_136[0x2]; // 0x136(0x02)
	float TeleportDistanceThreshold; // 0x138(0x04)
	float TeleportRotationThreshold; // 0x13c(0x04)
	enum class EPlanarConstraint PlanarConstraint; // 0x140(0x01)
	bool bUpdatePhysicsSettingsInGame; // 0x141(0x01)
	bool ResetBoneTransformWhenBoneNotFound; // 0x142(0x01)
	char pad_143[0x5]; // 0x143(0x05)
	struct UCurveFloat* DampingCurve; // 0x148(0x08)
	struct UCurveFloat* WorldDampingLocationCurve; // 0x150(0x08)
	struct UCurveFloat* WorldDampingRotationCurve; // 0x158(0x08)
	struct UCurveFloat* StiffnessCurve; // 0x160(0x08)
	struct UCurveFloat* RadiusCurve; // 0x168(0x08)
	struct UCurveFloat* LimitAngleCurve; // 0x170(0x08)
	struct FRuntimeFloatCurve DampingCurveData; // 0x178(0x88)
	struct FRuntimeFloatCurve StiffnessCurveData; // 0x200(0x88)
	struct FRuntimeFloatCurve WorldDampingLocationCurveData; // 0x288(0x88)
	struct FRuntimeFloatCurve WorldDampingRotationCurveData; // 0x310(0x88)
	struct FRuntimeFloatCurve RadiusCurveData; // 0x398(0x88)
	struct FRuntimeFloatCurve LimitAngleCurveData; // 0x420(0x88)
	struct TArray<struct FSphericalLimit> SphericalLimits; // 0x4a8(0x10)
	struct TArray<struct FCapsuleLimit> CapsuleLimits; // 0x4b8(0x10)
	struct TArray<struct FBoxLimit> BoxLimits; // 0x4c8(0x10)
	struct TArray<struct FPlanarLimit> PlanarLimits; // 0x4d8(0x10)
	struct UKawaiiPhysicsLimitsDataAsset* LimitsDataAsset; // 0x4e8(0x08)
	struct UPhysicsAsset* PhysicsAssetForLimits; // 0x4f0(0x08)
	struct TArray<struct FSphericalLimit> SphericalLimitsData; // 0x4f8(0x10)
	struct TArray<struct FCapsuleLimit> CapsuleLimitsData; // 0x508(0x10)
	struct TArray<struct FBoxLimit> BoxLimitsData; // 0x518(0x10)
	struct TArray<struct FPlanarLimit> PlanarLimitsData; // 0x528(0x10)
	enum class EXPBDComplianceType BoneConstraintGlobalComplianceType; // 0x538(0x01)
	char pad_539[0x3]; // 0x539(0x03)
	int32_t BoneConstraintIterationCountBeforeCollision; // 0x53c(0x04)
	int32_t BoneConstraintIterationCountAfterCollision; // 0x540(0x04)
	bool bAutoAddChildDummyBoneConstraint; // 0x544(0x01)
	char pad_545[0x3]; // 0x545(0x03)
	struct TArray<struct FModifyBoneConstraint> BoneConstraints; // 0x548(0x10)
	struct UKawaiiPhysicsBoneConstraintsDataAsset* BoneConstraintsDataAsset; // 0x558(0x08)
	struct TArray<struct FModifyBoneConstraint> BoneConstraintsData; // 0x560(0x10)
	struct TArray<struct FModifyBoneConstraint> MergedBoneConstraints; // 0x570(0x10)
	struct FVector Gravity; // 0x580(0x18)
	bool bEnableWind; // 0x598(0x01)
	char pad_599[0x3]; // 0x599(0x03)
	float WindScale; // 0x59c(0x04)
	struct TArray<struct FInstancedStruct> ExternalForces; // 0x5a0(0x10)
	struct TArray<struct UKawaiiPhysics_CustomExternalForce*> CustomExternalForces; // 0x5b0(0x10)
	bool bAllowWorldCollision; // 0x5c0(0x01)
	bool bOverrideCollisionParams; // 0x5c1(0x01)
	char pad_5C2[0x6]; // 0x5c2(0x06)
	struct FBodyInstance CollisionChannelSettings; // 0x5c8(0x190)
	bool bIgnoreSelfComponent; // 0x758(0x01)
	char pad_759[0x7]; // 0x759(0x07)
	struct TArray<struct FBoneReference> IgnoreBones; // 0x760(0x10)
	struct TArray<struct FName> IgnoreBoneNamePrefix; // 0x770(0x10)
	struct FGameplayTag KawaiiPhysicsTag; // 0x780(0x0c)
	char pad_78C[0x4]; // 0x78c(0x04)
	struct TArray<struct FKawaiiPhysicsModifyBone> ModifyBones; // 0x790(0x10)
	float DeltaTime; // 0x7a0(0x04)
	char pad_7A4[0xc]; // 0x7a4(0x0c)
	struct FTransform PreSkelCompTransform; // 0x7b0(0x60)
	bool bInitPhysicsSettings; // 0x810(0x01)
	char pad_811[0x4f]; // 0x811(0x4f)
};

// ScriptStruct KawaiiPhysics.ModifyBoneConstraintData
// Size: 0x44 (Inherited: 0x00)
struct FModifyBoneConstraintData {
	struct FName BoneName1; // 0x00(0x0c)
	struct FName BoneName2; // 0x0c(0x0c)
	struct FBoneReference BoneReference1; // 0x18(0x14)
	struct FBoneReference BoneReference2; // 0x2c(0x14)
	bool bOverrideCompliance; // 0x40(0x01)
	enum class EXPBDComplianceType ComplianceType; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
};

// ScriptStruct KawaiiPhysics.RegexPatternBoneSet
// Size: 0x20 (Inherited: 0x00)
struct FRegexPatternBoneSet {
	struct FString RegexPatternBone1; // 0x00(0x10)
	struct FString RegexPatternBone2; // 0x10(0x10)
};

// ScriptStruct KawaiiPhysics.KawaiiPhysics_ExternalForce
// Size: 0xe0 (Inherited: 0x00)
struct FKawaiiPhysics_ExternalForce {
	char pad_0[0x10]; // 0x00(0x10)
	bool bIsEnabled; // 0x10(0x01)
	bool bDrawDebug; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct TArray<struct FBoneReference> ApplyBoneFilter; // 0x18(0x10)
	struct TArray<struct FBoneReference> IgnoreBoneFilter; // 0x28(0x10)
	enum class EExternalForceSpace ExternalForceSpace; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FFloatInterval RandomForceScaleRange; // 0x3c(0x08)
	char pad_44[0x4]; // 0x44(0x04)
	struct UObject* ExternalOwner; // 0x48(0x08)
	bool bIsOneShot; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float RandomizedForceScale; // 0x54(0x04)
	struct FVector Force; // 0x58(0x18)
	struct FTransform ComponentTransform; // 0x70(0x60)
	bool bCanSelectForceSpace; // 0xd0(0x01)
	char pad_D1[0xf]; // 0xd1(0x0f)
};

// ScriptStruct KawaiiPhysics.KawaiiPhysics_ExternalForce_Basic
// Size: 0x190 (Inherited: 0xe0)
struct FKawaiiPhysics_ExternalForce_Basic : FKawaiiPhysics_ExternalForce {
	struct FVector ForceDir; // 0xd8(0x18)
	struct FRuntimeFloatCurve ForceRateByBoneLengthRate; // 0xf0(0x88)
	float Interval; // 0x178(0x04)
	float Time; // 0x17c(0x04)
	float PrevTime; // 0x180(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
};

// ScriptStruct KawaiiPhysics.KawaiiPhysics_ExternalForce_Gravity
// Size: 0x190 (Inherited: 0xe0)
struct FKawaiiPhysics_ExternalForce_Gravity : FKawaiiPhysics_ExternalForce {
	struct FRuntimeFloatCurve ForceRateByBoneLengthRate; // 0xd8(0x88)
	bool bUseCharacterGravityDirection; // 0x160(0x01)
	bool bUseCharacterGravityScale; // 0x161(0x01)
	struct FVector OverrideGravityDirection; // 0x168(0x18)
	bool bUseOverrideGravityDirection; // 0x180(0x01)
	char pad_183[0xd]; // 0x183(0x0d)
};

// ScriptStruct KawaiiPhysics.KawaiiPhysics_ExternalForce_Curve
// Size: 0x310 (Inherited: 0xe0)
struct FKawaiiPhysics_ExternalForce_Curve : FKawaiiPhysics_ExternalForce {
	struct FRuntimeVectorCurve ForceCurve; // 0xd8(0x188)
	enum class EExternalForceCurveEvaluateType CurveEvaluateType; // 0x260(0x01)
	int32_t SubstepCount; // 0x264(0x04)
	float TimeScale; // 0x268(0x04)
	struct FRuntimeFloatCurve ForceRateByBoneLengthRate; // 0x270(0x88)
	float Time; // 0x2f8(0x04)
	float PrevTime; // 0x2fc(0x04)
	float MaxCurveTime; // 0x300(0x04)
	char pad_305[0xb]; // 0x305(0x0b)
};

// ScriptStruct KawaiiPhysics.KawaiiPhysics_ExternalForce_Wind
// Size: 0x170 (Inherited: 0xe0)
struct FKawaiiPhysics_ExternalForce_Wind : FKawaiiPhysics_ExternalForce {
	struct FRuntimeFloatCurve ForceRateByBoneLengthRate; // 0xd8(0x88)
	struct UWorld* World; // 0x160(0x08)
};

// ScriptStruct KawaiiPhysics.KawaiiPhysicsReference
// Size: 0x10 (Inherited: 0x10)
struct FKawaiiPhysicsReference : FAnimNodeReference {
};

// ScriptStruct KawaiiPhysics.CollisionLimitDataBase
// Size: 0xa0 (Inherited: 0x00)
struct FCollisionLimitDataBase {
	struct FBoneReference DrivingBoneReference; // 0x00(0x14)
	struct FName DrivingBoneName; // 0x14(0x0c)
	struct FVector OffsetLocation; // 0x20(0x18)
	struct FRotator OffsetRotation; // 0x38(0x18)
	struct FVector Location; // 0x50(0x18)
	char pad_68[0x8]; // 0x68(0x08)
	struct FQuat Rotation; // 0x70(0x20)
	struct FGuid Guid; // 0x90(0x10)
};

// ScriptStruct KawaiiPhysics.SphericalLimitData
// Size: 0xb0 (Inherited: 0xa0)
struct FSphericalLimitData : FCollisionLimitDataBase {
	float Radius; // 0xa0(0x04)
	enum class ESphericalLimitType LimitType; // 0xa4(0x01)
	char pad_A5[0xb]; // 0xa5(0x0b)
};

// ScriptStruct KawaiiPhysics.CapsuleLimitData
// Size: 0xb0 (Inherited: 0xa0)
struct FCapsuleLimitData : FCollisionLimitDataBase {
	float Radius; // 0xa0(0x04)
	float Length; // 0xa4(0x04)
	char pad_A8[0x8]; // 0xa8(0x08)
};

// ScriptStruct KawaiiPhysics.BoxLimitData
// Size: 0xc0 (Inherited: 0xa0)
struct FBoxLimitData : FCollisionLimitDataBase {
	struct FVector Extent; // 0xa0(0x18)
	char pad_B8[0x8]; // 0xb8(0x08)
};

// ScriptStruct KawaiiPhysics.PlanarLimitData
// Size: 0xc0 (Inherited: 0xa0)
struct FPlanarLimitData : FCollisionLimitDataBase {
	struct FPlane Plane; // 0xa0(0x20)
};

