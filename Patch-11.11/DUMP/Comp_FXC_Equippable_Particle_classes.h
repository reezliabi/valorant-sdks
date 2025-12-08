// BlueprintGeneratedClass Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C
// Size: 0x210 (Inherited: 0xe8)
struct UComp_FXC_Equippable_Particle_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct TArray<struct FEquippableParticleInfo> ParticleInfo; // 0xf0(0x10)
	struct AShooterCharacter* ShooterCharacter; // 0x100(0x08)
	struct TMap<int32_t, struct UParticleSystemComponent*> SpawnedParticlesMap; // 0x108(0x50)
	struct UAnimInstance* AnimInstance; // 0x158(0x08)
	struct UAnimMontage* Montage; // 0x160(0x08)
	bool IsADS; // 0x168(0x01)
	enum class EAresEquippableState ChangeState; // 0x169(0x01)
	char pad_16A[0x6]; // 0x16a(0x06)
	struct FTimerHandle FireTimer; // 0x170(0x08)
	double IdleSetAfterFireDelay; // 0x178(0x08)
	double LastFireTime; // 0x180(0x08)
	int32_t NumInspectRunning; // 0x188(0x04)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct AAresEquippable* Equippable; // 0x190(0x08)
	struct TMap<struct FName, struct UMaterialInstanceDynamic*> Weapon Override Dynamic Materials; // 0x198(0x50)
	struct FMulticastInlineDelegate Particles Spawned; // 0x1e8(0x10)
	struct FMulticastInlineDelegate VFX State Changed Handled; // 0x1f8(0x10)
	double AttributeDrivenTimeDilation; // 0x208(0x08)

	void OverrideTimeDilation(double TimeDilation); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.OverrideTimeDilation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Override Variant Colors(struct TArray<struct UParticleSystemComponent*>& Spawned Particle Systems, enum class EAresParticleVariantColor Variant); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.Override Variant Colors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleParticlesStateChanged(struct UParticleSystemComponent* CurrentParticle, bool Enabled, struct FEquippableParticleInfo Particle Info); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.HandleParticlesStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RespawnParticlesCheck(); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.RespawnParticlesCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DestroySpawnedParticles(); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.DestroySpawnedParticles // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetLastFireTime(double& LastFireTime); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.GetLastFireTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void TransitionFromFireState(); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.TransitionFromFireState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void particleOverride(struct UParticleSystemComponent* ParticleSystem, struct TArray<struct FStruct_ParticleOverrides>& Overrides); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.particleOverride // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleADSStateChange(bool ZoomIn); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.HandleADSStateChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleEquippableStateChanged(enum class EAresEquippableState NewState); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.HandleEquippableStateChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetDefaultTransform(struct FTransform Transform, enum class ELHMMirroringIgnoreType MirroringType, struct FVector& Location, struct FRotator& Rotation, struct FVector& Scale); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.GetDefaultTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetAttachComponent(bool IsCharacter, bool Use AresEquippableAttachmentComponent?, struct FString AresEquippableAttachmentComponentSlot, struct USceneComponent*& Component); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.GetAttachComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SpawnParticleEffects(struct TArray<int32_t>& RespawnIndicies); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.SpawnParticleEffects // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void StateChanged(enum class EAresEquippableState State); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.StateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnMontageStarted(struct UAnimMontage* Montage); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.OnMontageStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMontageEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.OnMontageEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateFiringState(); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.UpdateFiringState // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ZoomStateChanged(bool ZoomIn); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.ZoomStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyAttributeDrivenTimeDilation(float TimeDilation); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.ApplyAttributeDrivenTimeDilation // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Comp_FXC_Equippable_Particle(int32_t EntryPoint); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.ExecuteUbergraph_Comp_FXC_Equippable_Particle // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void VFX State Changed Handled__DelegateSignature(enum class EAresEquippableState New State); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.VFX State Changed Handled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Particles Spawned__DelegateSignature(struct TMap<int32_t, struct UParticleSystemComponent*> Spawned Particles); // Function Comp_FXC_Equippable_Particle.Comp_FXC_Equippable_Particle_C.Particles Spawned__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

