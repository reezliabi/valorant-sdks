// BlueprintGeneratedClass SpawnBarrier.SpawnBarrier_C
// Size: 0x612 (Inherited: 0x4b0)
struct ASpawnBarrier_C : ABaseSpawnBarrier {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UTeamRoleComponent* TeamRole; // 0x4b8(0x08)
	struct UStaticMeshComponent* SM_Barrier_Back_VisionBlocker; // 0x4c0(0x08)
	struct UParticleSystemComponent* PS_Barrier_Dissolve; // 0x4c8(0x08)
	struct UParticleSystemComponent* PS_Barrier_Left; // 0x4d0(0x08)
	struct UParticleSystemComponent* PS_Barrier_Bottom; // 0x4d8(0x08)
	struct UParticleSystemComponent* PS_Barrier_Right; // 0x4e0(0x08)
	struct UDecalComponent* Decal1; // 0x4e8(0x08)
	struct UStaticMeshComponent* SM_Barrier; // 0x4f0(0x08)
	struct USpawnBarrierMinimapComponent_C* SpawnBarrierMinimapComponent; // 0x4f8(0x08)
	float Timeline_0_PulseSpeed_F210D10144BE75B87AAE3D85FBF8C4C2; // 0x500(0x04)
	enum class ETimelineDirection Timeline_0__Direction_F210D10144BE75B87AAE3D85FBF8C4C2; // 0x504(0x01)
	char pad_505[0x3]; // 0x505(0x03)
	struct UTimelineComponent* Timeline_1; // 0x508(0x08)
	float Dissolve_Timeline_DissolvePS_Position_BFCD739E4A8A2FA6BF0650B5E7B93FD8; // 0x510(0x04)
	float Dissolve_Timeline_Dissolve_Curve_BFCD739E4A8A2FA6BF0650B5E7B93FD8; // 0x514(0x04)
	enum class ETimelineDirection Dissolve_Timeline__Direction_BFCD739E4A8A2FA6BF0650B5E7B93FD8; // 0x518(0x01)
	char pad_519[0x7]; // 0x519(0x07)
	struct UTimelineComponent* Dissolve_Timeline; // 0x520(0x08)
	struct UMaterialInterface* Barrier Material; // 0x528(0x08)
	struct UMaterialInstanceDynamic* DMI_Barrier; // 0x530(0x08)
	double Pulse Width; // 0x538(0x08)
	double EdgeTip_Position; // 0x540(0x08)
	struct UTexture* EdgeGradient_Texture; // 0x548(0x08)
	double EdgeGradient_Texture_Width; // 0x550(0x08)
	double EdgeGradient_Texture_Height; // 0x558(0x08)
	double EdgeGradient_Texture_Offset; // 0x560(0x08)
	double Wall Opacity; // 0x568(0x08)
	double Pulse Delay; // 0x570(0x08)
	double Pulse Delay - Corrected; // 0x578(0x08)
	struct UMaterialInterface* Decal Material; // 0x580(0x08)
	struct UMaterialInstanceDynamic* DMI_Decal; // 0x588(0x08)
	struct FVector Disolve_PS_OriginalLocation; // 0x590(0x18)
	struct TArray<struct UParticleSystemComponent*> Array_ParticleSystems NoDisolve; // 0x5a8(0x10)
	struct TArray<struct UStaticMeshComponent*> BarrierVisuals; // 0x5b8(0x10)
	bool PS_BarrierDissolve_Activated; // 0x5c8(0x01)
	char pad_5C9[0x7]; // 0x5c9(0x07)
	struct TArray<struct FTransform> SpawnSoundTransforms; // 0x5d0(0x10)
	bool bIsMultiPositionSoundController; // 0x5e0(0x01)
	char pad_5E1[0x7]; // 0x5e1(0x07)
	struct FTimerHandle BaseAudioFlashLoop; // 0x5e8(0x08)
	double LastSFXPulseModulo; // 0x5f0(0x08)
	double DefaultPulseSpeed; // 0x5f8(0x08)
	struct UAkAudioEvent* SFX_BarrierPulse; // 0x600(0x08)
	struct UMaterialInstanceDynamic* DMI_VisionBlocker; // 0x608(0x08)
	bool ShouldDissolveOnRoundStart; // 0x610(0x01)
	bool ShouldPlayBarrierPulseSFX; // 0x611(0x01)

	void Set Visuals Enabled(bool Enabled); // Function SpawnBarrier.SpawnBarrier_C.Set Visuals Enabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DissolvingUpdate(double DissolveCurve, double Dissolve_PS_Position); // Function SpawnBarrier.SpawnBarrier_C.DissolvingUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayMultiPositionSound(struct UAkAudioEvent* event); // Function SpawnBarrier.SpawnBarrier_C.PlayMultiPositionSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateMultiPositionSoundController(); // Function SpawnBarrier.SpawnBarrier_C.UpdateMultiPositionSoundController // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetSoundPosition(struct FVector& Position); // Function SpawnBarrier.SpawnBarrier_C.GetSoundPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UserConstructionScript(); // Function SpawnBarrier.SpawnBarrier_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Dissolve_Timeline__FinishedFunc(); // Function SpawnBarrier.SpawnBarrier_C.Dissolve_Timeline__FinishedFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Dissolve_Timeline__UpdateFunc(); // Function SpawnBarrier.SpawnBarrier_C.Dissolve_Timeline__UpdateFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Dissolve_Timeline__DisableDissolvePS__EventFunc(); // Function SpawnBarrier.SpawnBarrier_C.Dissolve_Timeline__DisableDissolvePS__EventFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Dissolve_Timeline__SpawnDissolvePS__EventFunc(); // Function SpawnBarrier.SpawnBarrier_C.Dissolve_Timeline__SpawnDissolvePS__EventFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Dissolve_Timeline__Deactivate_PS__EventFunc(); // Function SpawnBarrier.SpawnBarrier_C.Dissolve_Timeline__Deactivate_PS__EventFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Dissolve_Timeline__Activate_PS__EventFunc(); // Function SpawnBarrier.SpawnBarrier_C.Dissolve_Timeline__Activate_PS__EventFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Timeline_0__FinishedFunc(); // Function SpawnBarrier.SpawnBarrier_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Timeline_0__UpdateFunc(); // Function SpawnBarrier.SpawnBarrier_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x19be2f0
	void OnGameplayActiveChanged_Event_1(bool NewGameplayActive); // Function SpawnBarrier.SpawnBarrier_C.OnGameplayActiveChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnActorHitEvent(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult& Hit); // Function SpawnBarrier.SpawnBarrier_C.OnActorHitEvent // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateBarrierVFX(); // Function SpawnBarrier.SpawnBarrier_C.CreateBarrierVFX // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DissolveStart(); // Function SpawnBarrier.SpawnBarrier_C.DissolveStart // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFiveSecCountdownStart_Event_1(); // Function SpawnBarrier.SpawnBarrier_C.OnFiveSecCountdownStart_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayBarrierFlashAudio(); // Function SpawnBarrier.SpawnBarrier_C.PlayBarrierFlashAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTeamChanged(); // Function SpawnBarrier.SpawnBarrier_C.OnTeamChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function SpawnBarrier.SpawnBarrier_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void InitializeSpawnBarrier(); // Function SpawnBarrier.SpawnBarrier_C.InitializeSpawnBarrier // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SpawnBarrier.SpawnBarrier_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void On GameState Set(struct UObject* TargetObject, struct AGameStateBase* GameState); // Function SpawnBarrier.SpawnBarrier_C.On GameState Set // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DissolveStop(); // Function SpawnBarrier.SpawnBarrier_C.DissolveStop // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFiveSecCountdownStop(); // Function SpawnBarrier.SpawnBarrier_C.OnFiveSecCountdownStop // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_SpawnBarrier(int32_t EntryPoint); // Function SpawnBarrier.SpawnBarrier_C.ExecuteUbergraph_SpawnBarrier // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

