// Class GameplayCameras.LegacyCameraShake
// Size: 0x1f0 (Inherited: 0xe0)
struct ULegacyCameraShake : UCameraShakeBase {
	float OscillationDuration; // 0xd8(0x04)
	float OscillationBlendInTime; // 0xdc(0x04)
	float OscillationBlendOutTime; // 0xe0(0x04)
	struct FROscillator RotOscillation; // 0xe4(0x24)
	struct FVOscillator LocOscillation; // 0x108(0x24)
	struct FFOscillator FOVOscillation; // 0x12c(0x0c)
	float AnimPlayRate; // 0x138(0x04)
	float AnimScale; // 0x13c(0x04)
	float AnimBlendInTime; // 0x140(0x04)
	float AnimBlendOutTime; // 0x144(0x04)
	float RandomAnimSegmentDuration; // 0x148(0x04)
	struct UCameraAnimationSequence* AnimSequence; // 0x150(0x08)
	char bRandomAnimSegment : 1; // 0x158(0x01)
	float OscillatorTimeRemaining; // 0x15c(0x04)
	char pad_160_1 : 7; // 0x160(0x01)
	char pad_161[0x6f]; // 0x161(0x6f)
	struct USequenceCameraShakePattern* SequenceShakePattern; // 0x1d0(0x08)
	char pad_1D8[0x18]; // 0x1d8(0x18)

	struct ULegacyCameraShake* StartLegacyCameraShakeFromSource(struct APlayerCameraManager* PlayerCameraManager, struct ULegacyCameraShake* ShakeClass, struct UCameraShakeSourceComponent* SourceComponent, float Scale, enum class ECameraShakePlaySpace Playspace, struct FRotator UserPlaySpaceRot); // Function GameplayCameras.LegacyCameraShake.StartLegacyCameraShakeFromSource // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x539c230
	struct ULegacyCameraShake* StartLegacyCameraShake(struct APlayerCameraManager* PlayerCameraManager, struct ULegacyCameraShake* ShakeClass, float Scale, enum class ECameraShakePlaySpace Playspace, struct FRotator UserPlaySpaceRot); // Function GameplayCameras.LegacyCameraShake.StartLegacyCameraShake // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x539c680
	void ReceiveStopShake(bool bImmediately); // Function GameplayCameras.LegacyCameraShake.ReceiveStopShake // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ReceivePlayShake(float Scale); // Function GameplayCameras.LegacyCameraShake.ReceivePlayShake // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	bool ReceiveIsFinished(); // Function GameplayCameras.LegacyCameraShake.ReceiveIsFinished // (Native|Event|Public|BlueprintEvent|Const) // @ game+0x3a33320
	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, struct FMinimalViewInfo& POV, struct FMinimalViewInfo& ModifiedPOV); // Function GameplayCameras.LegacyCameraShake.BlueprintUpdateCameraShake // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
};

// Class GameplayCameras.LegacyCameraShakePattern
// Size: 0x30 (Inherited: 0x30)
struct ULegacyCameraShakePattern : UCameraShakePattern {
};

// Class GameplayCameras.LegacyCameraShakeFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct ULegacyCameraShakeFunctionLibrary : UBlueprintFunctionLibrary {

	struct ULegacyCameraShake* Conv_LegacyCameraShake(struct UCameraShakeBase* CameraShake); // Function GameplayCameras.LegacyCameraShakeFunctionLibrary.Conv_LegacyCameraShake // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x539ccf0
};

// Class GameplayCameras.CameraAnimationCameraModifier
// Size: 0x68 (Inherited: 0x50)
struct UCameraAnimationCameraModifier : UCameraModifier {
	struct TArray<struct FActiveCameraAnimationInfo> ActiveAnimations; // 0x50(0x10)
	uint16_t NextInstanceSerialNumber; // 0x60(0x02)
	char pad_62[0x6]; // 0x62(0x06)

	void StopCameraAnimation(struct FCameraAnimationHandle& Handle, bool bImmediate); // Function GameplayCameras.CameraAnimationCameraModifier.StopCameraAnimation // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x539dda0
	void StopAllCameraAnimationsOf(struct UCameraAnimationSequence* Sequence, bool bImmediate); // Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimationsOf // (Final|Native|Public|BlueprintCallable) // @ game+0x539dc10
	void StopAllCameraAnimations(bool bImmediate); // Function GameplayCameras.CameraAnimationCameraModifier.StopAllCameraAnimations // (Native|Public|BlueprintCallable) // @ game+0x413ea60
	struct FCameraAnimationHandle PlayCameraAnimation(struct UCameraAnimationSequence* Sequence, struct FCameraAnimationParams Params); // Function GameplayCameras.CameraAnimationCameraModifier.PlayCameraAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x539e090
	bool IsCameraAnimationActive(struct FCameraAnimationHandle& Handle); // Function GameplayCameras.CameraAnimationCameraModifier.IsCameraAnimationActive // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x539df40
	struct UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromPlayerController(struct APlayerController* PlayerController); // Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromPlayerController // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x539d7c0
	struct UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromID(struct UObject* WorldContextObject, int32_t ControllerId); // Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifierFromID // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x539d8f0
	struct UCameraAnimationCameraModifier* GetCameraAnimationCameraModifier(struct UObject* WorldContextObject, int32_t PlayerIndex); // Function GameplayCameras.CameraAnimationCameraModifier.GetCameraAnimationCameraModifier // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x539da80
};

// Class GameplayCameras.GameplayCamerasFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UGameplayCamerasFunctionLibrary : UBlueprintFunctionLibrary {

	enum class ECameraShakePlaySpace Conv_CameraShakePlaySpace(enum class ECameraAnimationPlaySpace CameraAnimationPlaySpace); // Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraShakePlaySpace // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x539eb60
	enum class ECameraAnimationPlaySpace Conv_CameraAnimationPlaySpace(enum class ECameraShakePlaySpace CameraShakePlaySpace); // Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationPlaySpace // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x539eb60
	struct UCameraAnimationCameraModifier* Conv_CameraAnimationCameraModifier(struct APlayerCameraManager* PlayerCameraManager); // Function GameplayCameras.GameplayCamerasFunctionLibrary.Conv_CameraAnimationCameraModifier // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x539ec90
};

// Class GameplayCameras.CompositeCameraShakePattern
// Size: 0x40 (Inherited: 0x30)
struct UCompositeCameraShakePattern : UCameraShakePattern {
	struct TArray<struct UCameraShakePattern*> ChildPatterns; // 0x30(0x10)
};

// Class GameplayCameras.DefaultCameraShakeBase
// Size: 0xe0 (Inherited: 0xe0)
struct UDefaultCameraShakeBase : UCameraShakeBase {
};

// Class GameplayCameras.GameplayCamerasSubsystem
// Size: 0x38 (Inherited: 0x38)
struct UGameplayCamerasSubsystem : UWorldSubsystem {

	void StopCameraAnimation(struct APlayerController* PlayerController, struct FCameraAnimationHandle& Handle, bool bImmediate); // Function GameplayCameras.GameplayCamerasSubsystem.StopCameraAnimation // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x53a2350
	void StopAllCameraAnimationsOf(struct APlayerController* PlayerController, struct UCameraAnimationSequence* Sequence, bool bImmediate); // Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimationsOf // (Final|Native|Public|BlueprintCallable) // @ game+0x53a20f0
	void StopAllCameraAnimations(struct APlayerController* PlayerController, bool bImmediate); // Function GameplayCameras.GameplayCamerasSubsystem.StopAllCameraAnimations // (Final|Native|Public|BlueprintCallable) // @ game+0x53a1f20
	struct FCameraAnimationHandle PlayCameraAnimation(struct APlayerController* PlayerController, struct UCameraAnimationSequence* Sequence, struct FCameraAnimationParams Params); // Function GameplayCameras.GameplayCamerasSubsystem.PlayCameraAnimation // (Final|Native|Public|BlueprintCallable) // @ game+0x53a27e0
	bool IsCameraAnimationActive(struct APlayerController* PlayerController, struct FCameraAnimationHandle& Handle); // Function GameplayCameras.GameplayCamerasSubsystem.IsCameraAnimationActive // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x53a25c0
};

// Class GameplayCameras.SimpleCameraShakePattern
// Size: 0x60 (Inherited: 0x30)
struct USimpleCameraShakePattern : UCameraShakePattern {
	float Duration; // 0x30(0x04)
	float BlendInTime; // 0x34(0x04)
	float BlendOutTime; // 0x38(0x04)
	char pad_3C[0x24]; // 0x3c(0x24)
};

// Class GameplayCameras.PerlinNoiseCameraShakePattern
// Size: 0xe0 (Inherited: 0x60)
struct UPerlinNoiseCameraShakePattern : USimpleCameraShakePattern {
	float LocationAmplitudeMultiplier; // 0x60(0x04)
	float LocationFrequencyMultiplier; // 0x64(0x04)
	struct FPerlinNoiseShaker X; // 0x68(0x08)
	struct FPerlinNoiseShaker Y; // 0x70(0x08)
	struct FPerlinNoiseShaker Z; // 0x78(0x08)
	float RotationAmplitudeMultiplier; // 0x80(0x04)
	float RotationFrequencyMultiplier; // 0x84(0x04)
	struct FPerlinNoiseShaker Pitch; // 0x88(0x08)
	struct FPerlinNoiseShaker Yaw; // 0x90(0x08)
	struct FPerlinNoiseShaker Roll; // 0x98(0x08)
	struct FPerlinNoiseShaker FOV; // 0xa0(0x08)
	char pad_A8[0x38]; // 0xa8(0x38)
};

// Class GameplayCameras.TestCameraShake
// Size: 0xe0 (Inherited: 0xe0)
struct UTestCameraShake : UCameraShakeBase {
};

// Class GameplayCameras.ConstantCameraShakePattern
// Size: 0x90 (Inherited: 0x60)
struct UConstantCameraShakePattern : USimpleCameraShakePattern {
	struct FVector LocationOffset; // 0x60(0x18)
	struct FRotator RotationOffset; // 0x78(0x18)
};

// Class GameplayCameras.WaveOscillatorCameraShakePattern
// Size: 0x100 (Inherited: 0x60)
struct UWaveOscillatorCameraShakePattern : USimpleCameraShakePattern {
	float LocationAmplitudeMultiplier; // 0x60(0x04)
	float LocationFrequencyMultiplier; // 0x64(0x04)
	struct FWaveOscillator X; // 0x68(0x0c)
	struct FWaveOscillator Y; // 0x74(0x0c)
	struct FWaveOscillator Z; // 0x80(0x0c)
	float RotationAmplitudeMultiplier; // 0x8c(0x04)
	float RotationFrequencyMultiplier; // 0x90(0x04)
	struct FWaveOscillator Pitch; // 0x94(0x0c)
	struct FWaveOscillator Yaw; // 0xa0(0x0c)
	struct FWaveOscillator Roll; // 0xac(0x0c)
	struct FWaveOscillator FOV; // 0xb8(0x0c)
	char pad_C4[0x3c]; // 0xc4(0x3c)
};

