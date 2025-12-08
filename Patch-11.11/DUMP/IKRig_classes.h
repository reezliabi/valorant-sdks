// Class IKRig.IKGoalCreatorInterface
// Size: 0x30 (Inherited: 0x30)
struct UIKGoalCreatorInterface : UInterface {

	void AddIKGoals(struct TMap<struct FName, struct FIKRigGoal>& OutGoals); // Function IKRig.IKGoalCreatorInterface.AddIKGoals // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x7488150
};

// Class IKRig.IKRigComponent
// Size: 0xf0 (Inherited: 0xd8)
struct UIKRigComponent : UActorComponent {
	char pad_D8[0x18]; // 0xd8(0x18)

	void SetIKRigGoalTransform(struct FName GoalName, struct FTransform Transform, float PositionAlpha, float RotationAlpha); // Function IKRig.IKRigComponent.SetIKRigGoalTransform // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x74887e0
	void SetIKRigGoalPositionAndRotation(struct FName GoalName, struct FVector Position, struct FQuat Rotation, float PositionAlpha, float RotationAlpha); // Function IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7488bc0
	void SetIKRigGoal(struct FIKRigGoal& Goal); // Function IKRig.IKRigComponent.SetIKRigGoal // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7488660
	void ClearAllGoals(); // Function IKRig.IKRigComponent.ClearAllGoals // (Final|Native|Public|BlueprintCallable) // @ game+0x7488630
};

// Class IKRig.RetargetChainSettings
// Size: 0xf8 (Inherited: 0x30)
struct URetargetChainSettings : UObject {
	struct FName SourceChain; // 0x30(0x0c)
	struct FName TargetChain; // 0x3c(0x0c)
	struct FTargetChainSettings Settings; // 0x48(0xb0)
};

// Class IKRig.RetargetRootSettings
// Size: 0x98 (Inherited: 0x30)
struct URetargetRootSettings : UObject {
	struct FTargetRootSettings Settings; // 0x30(0x68)
};

// Class IKRig.IKRetargetGlobalSettings
// Size: 0x58 (Inherited: 0x30)
struct UIKRetargetGlobalSettings : UObject {
	struct FRetargetGlobalSettings Settings; // 0x30(0x24)
	char pad_54[0x4]; // 0x54(0x04)
};

// Class IKRig.IKRetargeter
// Size: 0x238 (Inherited: 0x30)
struct UIKRetargeter : UObject {
	struct TSoftObjectPtr<UIKRigDefinition> SourceIKRigAsset; // 0x30(0x30)
	struct TSoftObjectPtr<UIKRigDefinition> TargetIKRigAsset; // 0x60(0x30)
	struct TArray<struct FRetargetChainMap> ChainMapping; // 0x90(0x10)
	struct TArray<struct URetargetChainSettings*> ChainSettings; // 0xa0(0x10)
	struct URetargetRootSettings* RootSettings; // 0xb0(0x08)
	struct UIKRetargetGlobalSettings* GlobalSettings; // 0xb8(0x08)
	struct TMap<struct FName, struct FRetargetProfile> Profiles; // 0xc0(0x50)
	struct FName CurrentProfile; // 0x110(0x0c)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct TMap<struct FName, struct FIKRetargetPose> SourceRetargetPoses; // 0x120(0x50)
	struct TMap<struct FName, struct FIKRetargetPose> TargetRetargetPoses; // 0x170(0x50)
	struct FName CurrentSourceRetargetPose; // 0x1c0(0x0c)
	struct FName CurrentTargetRetargetPose; // 0x1cc(0x0c)
	struct TMap<struct FName, struct FIKRetargetPose> RetargetPoses; // 0x1d8(0x50)
	struct FName CurrentRetargetPose; // 0x228(0x0c)
	char pad_234[0x4]; // 0x234(0x04)

	void SetRootSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetRootSettings& RootSettings); // Function IKRig.IKRetargeter.SetRootSettingsInRetargetProfile // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x748f100
	void SetGlobalSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FRetargetGlobalSettings& GlobalSettings); // Function IKRig.IKRetargeter.SetGlobalSettingsInRetargetProfile // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x748f3c0
	void SetChainSpeedPlantSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetChainSpeedPlantSettings& SpeedPlantSettings, struct FName TargetChainName); // Function IKRig.IKRetargeter.SetChainSpeedPlantSettingsInRetargetProfile // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x748e150
	void SetChainSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetChainSettings& ChainSettings, struct FName TargetChainName); // Function IKRig.IKRetargeter.SetChainSettingsInRetargetProfile // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x748ed90
	void SetChainIKSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetChainIKSettings& IKSettings, struct FName TargetChainName); // Function IKRig.IKRetargeter.SetChainIKSettingsInRetargetProfile // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x748e610
	void SetChainFKSettingsInRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FTargetChainFKSettings& FKSettings, struct FName TargetChainName); // Function IKRig.IKRetargeter.SetChainFKSettingsInRetargetProfile // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x748ea20
	struct FTargetRootSettings GetRootSettingsFromRetargetProfile(struct FRetargetProfile& RetargetProfile); // Function IKRig.IKRetargeter.GetRootSettingsFromRetargetProfile // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x748fad0
	void GetRootSettingsFromRetargetAsset(struct UIKRetargeter* RetargetAsset, struct FName OptionalProfileName, struct FTargetRootSettings& OutSettings); // Function IKRig.IKRetargeter.GetRootSettingsFromRetargetAsset // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x748fc70
	struct FRetargetGlobalSettings GetGlobalSettingsFromRetargetProfile(struct FRetargetProfile& RetargetProfile); // Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetProfile // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x748f5f0
	void GetGlobalSettingsFromRetargetAsset(struct UIKRetargeter* RetargetAsset, struct FName OptionalProfileName, struct FRetargetGlobalSettings& OutSettings); // Function IKRig.IKRetargeter.GetGlobalSettingsFromRetargetAsset // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x748f750
	struct FTargetChainSettings GetChainUsingGoalFromRetargetAsset(struct UIKRetargeter* RetargetAsset, struct FName IKGoalName); // Function IKRig.IKRetargeter.GetChainUsingGoalFromRetargetAsset // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7490b50
	struct FTargetChainSettings GetChainSettingsFromRetargetProfile(struct FRetargetProfile& RetargetProfile, struct FName TargetChainName); // Function IKRig.IKRetargeter.GetChainSettingsFromRetargetProfile // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x7490130
	struct FTargetChainSettings GetChainSettingsFromRetargetAsset(struct UIKRetargeter* RetargetAsset, struct FName TargetChainName, struct FName OptionalProfileName); // Function IKRig.IKRetargeter.GetChainSettingsFromRetargetAsset // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x74904c0
};

// Class IKRig.IKRetargetProcessor
// Size: 0x3a0 (Inherited: 0x30)
struct UIKRetargetProcessor : UObject {
	char pad_30[0x160]; // 0x30(0x160)
	struct UIKRigProcessor* IKRigProcessor; // 0x190(0x08)
	char pad_198[0x208]; // 0x198(0x208)
};

// Class IKRig.IKRigEffectorGoal
// Size: 0x110 (Inherited: 0x30)
struct UIKRigEffectorGoal : UObject {
	struct FName GoalName; // 0x30(0x0c)
	struct FName BoneName; // 0x3c(0x0c)
	float PositionAlpha; // 0x48(0x04)
	float RotationAlpha; // 0x4c(0x04)
	struct FTransform CurrentTransform; // 0x50(0x60)
	struct FTransform InitialTransform; // 0xb0(0x60)
};

// Class IKRig.IKRigDefinition
// Size: 0x118 (Inherited: 0x30)
struct UIKRigDefinition : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct TSoftObjectPtr<USkeletalMesh> PreviewSkeletalMesh; // 0x38(0x30)
	struct FIKRigSkeleton Skeleton; // 0x68(0x70)
	struct TArray<struct UIKRigEffectorGoal*> Goals; // 0xd8(0x10)
	struct TArray<struct UIKRigSolver*> Solvers; // 0xe8(0x10)
	struct FRetargetDefinition RetargetDefinition; // 0xf8(0x20)
};

// Class IKRig.IKRigProcessor
// Size: 0x158 (Inherited: 0x30)
struct UIKRigProcessor : UObject {
	char pad_30[0x40]; // 0x30(0x40)
	struct TArray<struct UIKRigSolver*> Solvers; // 0x70(0x10)
	char pad_80[0xd8]; // 0x80(0xd8)
};

// Class IKRig.IKRigSolver
// Size: 0x38 (Inherited: 0x30)
struct UIKRigSolver : UObject {
	bool bIsEnabled; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// Class IKRig.IKRig_BodyMoverEffector
// Size: 0x50 (Inherited: 0x30)
struct UIKRig_BodyMoverEffector : UObject {
	struct FName GoalName; // 0x30(0x0c)
	struct FName BoneName; // 0x3c(0x0c)
	float InfluenceMultiplier; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class IKRig.IKRig_BodyMover
// Size: 0x88 (Inherited: 0x38)
struct UIKRig_BodyMover : UIKRigSolver {
	struct FName RootBone; // 0x38(0x0c)
	float PositionAlpha; // 0x44(0x04)
	float PositionPositiveX; // 0x48(0x04)
	float PositionNegativeX; // 0x4c(0x04)
	float PositionPositiveY; // 0x50(0x04)
	float PositionNegativeY; // 0x54(0x04)
	float PositionPositiveZ; // 0x58(0x04)
	float PositionNegativeZ; // 0x5c(0x04)
	float RotationAlpha; // 0x60(0x04)
	float RotateXAlpha; // 0x64(0x04)
	float RotateYAlpha; // 0x68(0x04)
	float RotateZAlpha; // 0x6c(0x04)
	struct TArray<struct UIKRig_BodyMoverEffector*> Effectors; // 0x70(0x10)
	char pad_80[0x8]; // 0x80(0x08)
};

// Class IKRig.IKRig_LimbEffector
// Size: 0x48 (Inherited: 0x30)
struct UIKRig_LimbEffector : UObject {
	struct FName GoalName; // 0x30(0x0c)
	struct FName BoneName; // 0x3c(0x0c)
};

// Class IKRig.IKRig_LimbSolver
// Size: 0x98 (Inherited: 0x38)
struct UIKRig_LimbSolver : UIKRigSolver {
	struct FName RootName; // 0x38(0x0c)
	float ReachPrecision; // 0x44(0x04)
	enum class EAxis HingeRotationAxis; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	int32_t MaxIterations; // 0x4c(0x04)
	bool bEnableLimit; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float MinRotationAngle; // 0x54(0x04)
	bool bAveragePull; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float PullDistribution; // 0x5c(0x04)
	float ReachStepAlpha; // 0x60(0x04)
	bool bEnableTwistCorrection; // 0x64(0x01)
	enum class EAxis EndBoneForwardAxis; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
	struct UIKRig_LimbEffector* Effector; // 0x68(0x08)
	char pad_70[0x28]; // 0x70(0x28)
};

// Class IKRig.IKRig_FBIKEffector
// Size: 0x58 (Inherited: 0x30)
struct UIKRig_FBIKEffector : UObject {
	struct FName GoalName; // 0x30(0x0c)
	struct FName BoneName; // 0x3c(0x0c)
	float StrengthAlpha; // 0x48(0x04)
	float PullChainAlpha; // 0x4c(0x04)
	float PinRotation; // 0x50(0x04)
	int32_t IndexInSolver; // 0x54(0x04)
};

// Class IKRig.IKRig_FBIKBoneSettings
// Size: 0x88 (Inherited: 0x30)
struct UIKRig_FBIKBoneSettings : UObject {
	struct FName bone; // 0x30(0x0c)
	float RotationStiffness; // 0x3c(0x04)
	float PositionStiffness; // 0x40(0x04)
	enum class EPBIKLimitType X; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float MinX; // 0x48(0x04)
	float MaxX; // 0x4c(0x04)
	enum class EPBIKLimitType Y; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float MinY; // 0x54(0x04)
	float MaxY; // 0x58(0x04)
	enum class EPBIKLimitType Z; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	float MinZ; // 0x60(0x04)
	float MaxZ; // 0x64(0x04)
	bool bUsePreferredAngles; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FVector PreferredAngles; // 0x70(0x18)
};

// Class IKRig.IKRigFBIKSolver
// Size: 0x108 (Inherited: 0x38)
struct UIKRigFBIKSolver : UIKRigSolver {
	struct FName RootBone; // 0x38(0x0c)
	int32_t Iterations; // 0x44(0x04)
	float MassMultiplier; // 0x48(0x04)
	bool bAllowStretch; // 0x4c(0x01)
	enum class EPBIKRootBehavior RootBehavior; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
	struct FRootPrePullSettings PrePullRootSettings; // 0x50(0x20)
	float PullChainAlpha; // 0x70(0x04)
	float MaxAngle; // 0x74(0x04)
	float OverRelaxation; // 0x78(0x04)
	bool bStartSolveFromInputPose; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
	struct TArray<struct UIKRig_FBIKEffector*> Effectors; // 0x80(0x10)
	struct TArray<struct UIKRig_FBIKBoneSettings*> BoneSettings; // 0x90(0x10)
	char pad_A0[0x68]; // 0xa0(0x68)
};

// Class IKRig.IKRig_PoleSolverEffector
// Size: 0x50 (Inherited: 0x30)
struct UIKRig_PoleSolverEffector : UObject {
	struct FName GoalName; // 0x30(0x0c)
	struct FName BoneName; // 0x3c(0x0c)
	float Alpha; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// Class IKRig.IKRig_PoleSolver
// Size: 0x78 (Inherited: 0x38)
struct UIKRig_PoleSolver : UIKRigSolver {
	struct FName RootName; // 0x38(0x0c)
	struct FName EndName; // 0x44(0x0c)
	struct UIKRig_PoleSolverEffector* Effector; // 0x50(0x08)
	char pad_58[0x20]; // 0x58(0x20)
};

// Class IKRig.IKRig_SetTransformEffector
// Size: 0x38 (Inherited: 0x30)
struct UIKRig_SetTransformEffector : UObject {
	bool bEnablePosition; // 0x30(0x01)
	bool bEnableRotation; // 0x31(0x01)
	char pad_32[0x2]; // 0x32(0x02)
	float Alpha; // 0x34(0x04)
};

// Class IKRig.IKRig_SetTransform
// Size: 0x60 (Inherited: 0x38)
struct UIKRig_SetTransform : UIKRigSolver {
	struct FName Goal; // 0x38(0x0c)
	struct FName RootBone; // 0x44(0x0c)
	struct UIKRig_SetTransformEffector* Effector; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
};

