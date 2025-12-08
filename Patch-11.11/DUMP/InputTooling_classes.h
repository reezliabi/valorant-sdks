// Class InputTooling.BaseInputToolingComponent
// Size: 0xe0 (Inherited: 0xd8)
struct UBaseInputToolingComponent : UActorComponent {
	struct APlayerController* OwningPC; // 0xd8(0x08)
};

// Class InputTooling.AimToolingComponent
// Size: 0xa90 (Inherited: 0xe0)
struct UAimToolingComponent : UBaseInputToolingComponent {
	char pad_E0[0x598]; // 0xe0(0x598)
	struct TArray<bool> FeaturesEnabledValues; // 0x678(0x10)
	struct TArray<float> FeatureConfigValues; // 0x688(0x10)
	struct TArray<struct UCurveFloat*> FeatureConfigCurves; // 0x698(0x10)
	char pad_6A8[0x8]; // 0x6a8(0x08)
	struct FAimToolingCachedProjectionData CachedProjectionData; // 0x6b0(0x1f0)
	struct FAimToolingDecelerationState DecelerationState; // 0x8a0(0x58)
	bool bAimToolingEnabled; // 0x8f8(0x01)
	bool bAimToolingEnabledForCurrentWeapon; // 0x8f9(0x01)
	char pad_8FA[0x6]; // 0x8fa(0x06)
	struct FVector2D GamepadPreviousWalkStickVector; // 0x900(0x10)
	struct TArray<struct FAimToolingTarget> Targets; // 0x910(0x10)
	struct FAimToolingTarget PreviousTarget; // 0x920(0x38)
	float PreviousTargetLostTime; // 0x958(0x04)
	float NewTargetAcquiredTime; // 0x95c(0x04)
	bool bCurrentlyOverTarget; // 0x960(0x01)
	char pad_961[0x3]; // 0x961(0x03)
	float LastOverTargetTimestamp; // 0x964(0x04)
	float CurrentOverTargetTimestamp; // 0x968(0x04)
	char pad_96C[0x4]; // 0x96c(0x04)
	struct TArray<struct FVector> CachedFiringLocations; // 0x970(0x10)
	struct TArray<struct FVector> CachedFiringDirections; // 0x980(0x10)
	int32_t FiringLocationAndDirectionCacheSize; // 0x990(0x04)
	char pad_994[0xfc]; // 0x994(0xfc)

	bool IsFeatureEnabled(enum class EAimToolingFeature Feature, struct UAimToolingTargetComponentBase* TargetComponent); // Function InputTooling.AimToolingComponent.IsFeatureEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4afe080
	bool IsAimToolingEnabledForCurrentWeapon(); // Function InputTooling.AimToolingComponent.IsAimToolingEnabledForCurrentWeapon // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4afe270
	bool IsAimToolingEnabled(); // Function InputTooling.AimToolingComponent.IsAimToolingEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4afe290
};

// Class InputTooling.AimToolingControllerInterface
// Size: 0x30 (Inherited: 0x30)
struct UAimToolingControllerInterface : UInterface {
};

// Class InputTooling.AimToolingTargetComponentBase
// Size: 0x380 (Inherited: 0x330)
struct UAimToolingTargetComponentBase : USceneComponent {
	enum class EAimToolingTargetType TargetType; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct TArray<enum class EAimToolingFeature> DisabledFeatures; // 0x338(0x10)
	struct FString TuningOverrideTag; // 0x348(0x10)
	struct UCurveFloat* TargetAssistRadiusOverrideXCurve; // 0x358(0x08)
	struct UCurveFloat* TargetAssistRadiusOverrideYCurve; // 0x360(0x08)
	struct FString TuningOverrideTagADS; // 0x368(0x10)
	char TargetId; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)

	void EnableAimToolingFeature(enum class EAimToolingFeature AimToolingFeature); // Function InputTooling.AimToolingTargetComponentBase.EnableAimToolingFeature // (Final|Native|Public|BlueprintCallable) // @ game+0x4aff250
	void DisableAimToolingFeature(enum class EAimToolingFeature AimToolingFeature); // Function InputTooling.AimToolingTargetComponentBase.DisableAimToolingFeature // (Final|Native|Public|BlueprintCallable) // @ game+0x4aff3a0
};

// Class InputTooling.AimToolingPointsTargetComponent
// Size: 0x3b0 (Inherited: 0x380)
struct UAimToolingPointsTargetComponent : UAimToolingTargetComponentBase {
	struct FName CenterTargetPointName; // 0x380(0x0c)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct TArray<struct UActorComponent*> AimToolingTargetPoints; // 0x390(0x10)
	struct AActor* OwningActor; // 0x3a0(0x08)
	char pad_3A8[0x8]; // 0x3a8(0x08)
};

// Class InputTooling.AimToolingSkeletalTargetComponent
// Size: 0x3c0 (Inherited: 0x380)
struct UAimToolingSkeletalTargetComponent : UAimToolingTargetComponentBase {
	struct TArray<struct FAimToolingBoneDef> AimToolingBones; // 0x380(0x10)
	struct FAimToolingAxis AimToolingAxis; // 0x390(0x24)
	char pad_3B4[0xc]; // 0x3b4(0x0c)
};

// Class InputTooling.AimToolingStatics
// Size: 0x30 (Inherited: 0x30)
struct UAimToolingStatics : UBlueprintFunctionLibrary {
};

// Class InputTooling.AimToolingTargetManager
// Size: 0xf0 (Inherited: 0xd8)
struct UAimToolingTargetManager : UActorComponent {
	char LastUsedTargetID; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
	struct TArray<struct UAimToolingTargetComponentBase*> TrackedTargets; // 0xe0(0x10)
};

// Class InputTooling.AimToolingTargetPoint
// Size: 0x350 (Inherited: 0x330)
struct UAimToolingTargetPoint : USceneComponent {
	struct FAimToolingTargetPointDef TargetPoint; // 0x330(0x14)
	char pad_344[0xc]; // 0x344(0x0c)
};

// Class InputTooling.AimToolingTracker
// Size: 0xe8 (Inherited: 0xd8)
struct UAimToolingTracker : UActorComponent {
	char pad_D8[0x10]; // 0xd8(0x10)
};

// Class InputTooling.BaseInputToolingControllerInterface
// Size: 0x30 (Inherited: 0x30)
struct UBaseInputToolingControllerInterface : UInterface {
};

// Class InputTooling.MovementToolingComponent
// Size: 0x168 (Inherited: 0xe0)
struct UMovementToolingComponent : UBaseInputToolingComponent {
	struct TArray<bool> FeaturesEnabledValues; // 0xe0(0x10)
	struct TArray<float> FeatureConfigValues; // 0xf0(0x10)
	bool bMovementToolingEnabled; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct FVector2D FastStrafingPreviousInputVector; // 0x108(0x10)
	float FastStrafeDirection; // 0x118(0x04)
	bool bInitialFastStrafingActive; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	float FastStrafingMaxObservedLateralSpeed; // 0x120(0x04)
	char pad_124[0x44]; // 0x124(0x44)

	bool IsMovementToolingEnabled(); // Function InputTooling.MovementToolingComponent.IsMovementToolingEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x36c0970
	bool IsFeatureEnabled(enum class EMovementToolingFeature Feature); // Function InputTooling.MovementToolingComponent.IsFeatureEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4b06280
};

// Class InputTooling.MovementToolingControllerInterface
// Size: 0x30 (Inherited: 0x30)
struct UMovementToolingControllerInterface : UInterface {
};

// Class InputTooling.MovementToolingStatics
// Size: 0x30 (Inherited: 0x30)
struct UMovementToolingStatics : UBlueprintFunctionLibrary {
};

