// BlueprintGeneratedClass Projectile_Hunter_BoltParent.Projectile_Hunter_BoltParent_C
// Size: 0x758 (Inherited: 0x648)
struct AProjectile_Hunter_BoltParent_C : AProjectile_BaseLineMissile_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x648(0x08)
	struct UComp_Projectile_CosmeticProjectileOffset_C* Comp_Projectile_CosmeticProjectileOffset; // 0x650(0x08)
	struct UGrenadeExplodeIndicator_C* GrenadeExplodeIndicator_Destroy; // 0x658(0x08)
	struct UGrenadeExplodeIndicator_C* GrenadeExplodeIndicator_Bounce; // 0x660(0x08)
	struct UArrowComponent* Arrow; // 0x668(0x08)
	struct UParticleSystemComponent* TrailSystem; // 0x670(0x08)
	struct UParticleSystemComponent* BeamTrailParticle; // 0x678(0x08)
	struct FVector TrailPosition; // 0x680(0x18)
	int32_t AllowedBounces; // 0x698(0x04)
	int32_t CurrentBounces; // 0x69c(0x04)
	struct AActor* SpawnClass; // 0x6a0(0x08)
	struct AEffectContainer* HitFXC; // 0x6a8(0x08)
	struct AEffectContainer* RicochetFXC; // 0x6b0(0x08)
	struct AEffectContainer* TravelFXC; // 0x6b8(0x08)
	struct UCurveFloat* ShiftCurve; // 0x6c0(0x08)
	struct UCurveFloat* ArcCurve; // 0x6c8(0x08)
	struct UCurveFloat* SpeedCurve; // 0x6d0(0x08)
	struct UCurveFloat* GravityCurve; // 0x6d8(0x08)
	struct UCurveFloat* FrictionCurve; // 0x6e0(0x08)
	struct UCurveFloat* BouncinessCurve; // 0x6e8(0x08)
	double ChargePercentage; // 0x6f0(0x08)
	struct UCurveFloat* SpeedFromPitchCurve; // 0x6f8(0x08)
	struct UCurveFloat* GravityFromPitchCurve; // 0x700(0x08)
	struct UAresAudioComponent* MissileSound; // 0x708(0x08)
	bool DebugProjectilePhysics; // 0x710(0x01)
	bool BeaconSpawned; // 0x711(0x01)
	char pad_712[0x6]; // 0x712(0x06)
	struct UAkAudioEvent* SFX_MissileSound; // 0x718(0x08)
	double PostStopDestroyDelay; // 0x720(0x08)
	struct FMulticastInlineDelegate ActorSpawned; // 0x728(0x10)
	struct FEffectID TravelEffectID; // 0x738(0x20)

	double GetInstigatorPitchForCurve(); // Function Projectile_Hunter_BoltParent.Projectile_Hunter_BoltParent_C.GetInstigatorPitchForCurve // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	double GetChargedProjectileGravity(); // Function Projectile_Hunter_BoltParent.Projectile_Hunter_BoltParent_C.GetChargedProjectileGravity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	double GetChargedProjectileSpeed(double& Pitch); // Function Projectile_Hunter_BoltParent.Projectile_Hunter_BoltParent_C.GetChargedProjectileSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void PlayMissileSound(); // Function Projectile_Hunter_BoltParent.Projectile_Hunter_BoltParent_C.PlayMissileSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SpawnBeacon(struct FVector Location, struct FRotator Rotation, struct AActor* Owner); // Function Projectile_Hunter_BoltParent.Projectile_Hunter_BoltParent_C.SpawnBeacon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRep_TrailPosition(); // Function Projectile_Hunter_BoltParent.Projectile_Hunter_BoltParent_C.OnRep_TrailPosition // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRep_DesiredRot(); // Function Projectile_Hunter_BoltParent.Projectile_Hunter_BoltParent_C.OnRep_DesiredRot // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRep_StartPos(); // Function Projectile_Hunter_BoltParent.Projectile_Hunter_BoltParent_C.OnRep_StartPos // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Projectile_Hunter_BoltParent.Projectile_Hunter_BoltParent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveTick(float DeltaSeconds); // Function Projectile_Hunter_BoltParent.Projectile_Hunter_BoltParent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ApplyBoltTuning(double Charge); // Function Projectile_Hunter_BoltParent.Projectile_Hunter_BoltParent_C.ApplyBoltTuning // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SpawnBoltBeacon(struct FVector Location, struct FRotator Rotation, struct AActor* Owner); // Function Projectile_Hunter_BoltParent.Projectile_Hunter_BoltParent_C.SpawnBoltBeacon // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStopEvent_Event_1(); // Function Projectile_Hunter_BoltParent.Projectile_Hunter_BoltParent_C.OnStopEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ProjectileBounce_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity); // Function Projectile_Hunter_BoltParent.Projectile_Hunter_BoltParent_C.BndEvt__ProjectileBounce_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void SetBounces(int32_t AllowedBounces); // Function Projectile_Hunter_BoltParent.Projectile_Hunter_BoltParent_C.SetBounces // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ServerStop(); // Function Projectile_Hunter_BoltParent.Projectile_Hunter_BoltParent_C.ServerStop // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTeleported_Event_1(); // Function Projectile_Hunter_BoltParent.Projectile_Hunter_BoltParent_C.OnTeleported_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Projectile_Hunter_BoltParent(int32_t EntryPoint); // Function Projectile_Hunter_BoltParent.Projectile_Hunter_BoltParent_C.ExecuteUbergraph_Projectile_Hunter_BoltParent // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void ActorSpawned__DelegateSignature(struct AActor* Actor); // Function Projectile_Hunter_BoltParent.Projectile_Hunter_BoltParent_C.ActorSpawned__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

