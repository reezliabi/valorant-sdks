// BlueprintGeneratedClass AudioHandlerActor.AudioHandlerActor_C
// Size: 0x6a8 (Inherited: 0x4c0)
struct AAudioHandlerActor_C : AAresSoundHandler {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	double TimeSinceStatUpdate; // 0x4c8(0x08)
	double StatUpdateInterval; // 0x4d0(0x08)
	bool StatsEnabled; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	double Whiz_MaxDistance; // 0x4e0(0x08)
	double Whiz_MidMaxDist; // 0x4e8(0x08)
	double Whiz_CloseMaxDist; // 0x4f0(0x08)
	struct TArray<struct UObject*> AudioMessageListeners; // 0x4f8(0x10)
	double LastBulletWhizTime; // 0x508(0x08)
	struct UAkAudioEvent* Aud_PingEvent; // 0x510(0x08)
	bool MultiSource; // 0x518(0x01)
	char pad_519[0x7]; // 0x519(0x07)
	struct FExplicitFloatCurve OcclusionCurveByDistance; // 0x520(0x88)
	struct TMap<struct UAresAudioComponent*, struct FAudioEventList> OcclusionQueries; // 0x5a8(0x50)
	struct FAudioEventList NewEventList; // 0x5f8(0x10)
	struct FExplicitFloatCurve OcclusionCurveByDifference; // 0x608(0x88)
	struct FAkChannelMask LeftChannelMask; // 0x690(0x04)
	struct FAkChannelMask RightChannelMask; // 0x694(0x04)
	double BaseFootstepRadius; // 0x698(0x08)
	double CurrentFootstepRadius; // 0x6a0(0x08)

	void TriggerHUDError(struct AShooterCharacter* ShooterCharacter, struct UAkAudioEvent* event, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerHUDError // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DidPlayBulletWhiz(); // Function AudioHandlerActor.AudioHandlerActor_C.DidPlayBulletWhiz // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldPlayBulletWhiz(double WhizByChance, bool BypassWhizCooldown, bool& ShouldPlayBulletWhiz); // Function AudioHandlerActor.AudioHandlerActor_C.ShouldPlayBulletWhiz // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void TriggerBulletWhizSound(struct UBulletWhizByComponent* WhizByComponent, struct FAresWhizBySoundTuning& WhizByTuning, struct FVector& ShotStart, struct FVector& ShotEnd, struct FVector& ClosestPoint, float ClosestPointDistance, struct FVector& ListenerPoint, struct AShooterCharacter* InstigatorShooterCharacter, struct AShooterCharacter* LocalShooterCharacter, bool bIsFriendlyFire, enum class EAresImpactOrder ImpactOrder); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerBulletWhizSound // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerHUDPing(struct AShooterCharacter* ShooterCharacter, struct UAkAudioEvent* event, struct FVector& Location, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerHUDPing // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerHUDKillConfirmSound(struct AShooterCharacter* ShooterCharacter, struct UAkAudioEvent* event, int32_t MultikillLevel, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerHUDKillConfirmSound // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerExplosionEffectSound(struct AShooterExplosionEffect* ExplosionEffect, struct UAkAudioEvent* event, struct FVector& Location, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerExplosionEffectSound // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerEjectableBounceSound(struct AAresEjectable* Ejectable, struct UAkAudioEvent* event, struct FVector& Location, enum class EAresSurfaceType SurfaceType, int32_t NumBounces, float BounceSpeed, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerEjectableBounceSound // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerCharacterEquippableSound(struct AShooterCharacter* ShooterCharacter, struct UAkAudioEvent* event, struct USceneComponent* AttachComponent, struct FName AttachPoint, struct FString Perspective, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerCharacterEquippableSound // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerCharacterHitConfirmSound(struct AShooterCharacter* ShooterCharacter, struct UAkAudioEvent* event, struct USkeletalMeshComponent* AttachComponent, enum class EAresHitConfirmLocality HitLocality, enum class EAresRegionalDamage RegionalDamage, float FalloffMultiplier, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerCharacterHitConfirmSound // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerCharacterImpactEffectSound(struct AActor* InstigatorActor, struct AShooterCharacter* ShooterCharacter, struct UAkAudioEvent* event, struct FVector& ImpactPoint, enum class EAresImpactEffectHitspace HitSpace, enum class EAresRegionalDamage RegionalDamage, enum class EAresImpactEffectWithArmor HitImpactArmor, enum class EAresImpactEffectAllies Allies, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerCharacterImpactEffectSound // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerCharacterRespawnSound(struct AShooterCharacter* ShooterCharacter, struct UAkAudioEvent* event, struct FVector& RespawnLocation, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerCharacterRespawnSound // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerEquippablePickupSound(struct AActor* OwnerActor, struct AAresEquippable* NewEquippable, struct UAkAudioEvent* event, struct USceneComponent* AttachComponent, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerEquippablePickupSound // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerWorldEquippableSound(struct AShooterCharacter* ShooterCharacter, struct UAkAudioEvent* event, struct USceneComponent* AttachComponent, struct FName AttachPoint, struct FString Perspective, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerWorldEquippableSound // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerWorldImpactEffectSound(struct AActor* InstigatorActor, struct UWorld* World, struct UAkAudioEvent* event, struct FVector& ImpactPoint, struct FString Perspective, enum class EAresSurfaceType SurfaceType, bool bEnableOcclusion, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerWorldImpactEffectSound // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerCharacterGroundSound(struct AShooterCharacter* ShooterCharacter, struct TArray<struct UAkAudioEvent*>& Events, struct FVector& SoundLocation, struct FRotator& SoundRotation, struct FString Perspective, enum class EAresSurfaceType SurfaceType, float VolumeMultiplier, bool& Result, struct UAresAudioComponent*& AudioComponent); // Function AudioHandlerActor.AudioHandlerActor_C.TriggerCharacterGroundSound // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveTick(float DeltaSeconds); // Function AudioHandlerActor.AudioHandlerActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PostGroundEvent(struct UAresAudioComponent* AudioComponent, struct AShooterCharacter* Character, struct TArray<struct UAkAudioEvent*>& Events); // Function AudioHandlerActor.AudioHandlerActor_C.PostGroundEvent // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_AudioHandlerActor(int32_t EntryPoint); // Function AudioHandlerActor.AudioHandlerActor_C.ExecuteUbergraph_AudioHandlerActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

