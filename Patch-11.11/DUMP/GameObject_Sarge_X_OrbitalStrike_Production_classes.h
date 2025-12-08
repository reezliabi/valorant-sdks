// BlueprintGeneratedClass GameObject_Sarge_X_OrbitalStrike_Production.GameObject_Sarge_X_OrbitalStrike_Production_C
// Size: 0x5d8 (Inherited: 0x4b0)
struct AGameObject_Sarge_X_OrbitalStrike_Production_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UMinimapComponent_Sarge_X_C* MinimapComponent_Sarge_X; // 0x4b8(0x08)
	struct UCapsuleComponent* dangerCapsule; // 0x4c0(0x08)
	struct UCapsuleComponent* visionBlockingCapsule; // 0x4c8(0x08)
	struct UCapsuleComponent* damageCapsule; // 0x4d0(0x08)
	struct USceneComponent* GameplayScene; // 0x4d8(0x08)
	struct UComp_Actor_SetInstigatorUltActive_C* Comp_Actor_SetInstigatorUltActive; // 0x4e0(0x08)
	struct UParticleSystemComponent* Sarge_X_Laser_Incoming_FOE_tower; // 0x4e8(0x08)
	struct UParticleSystemComponent* Sarge_X_Laser_Incoming_tower; // 0x4f0(0x08)
	struct UParticleSystemComponent* Sarge_X_Laser_Incoming_FOE; // 0x4f8(0x08)
	struct UParticleSystemComponent* Sarge_X_Laser_Incoming; // 0x500(0x08)
	struct UParticleSystemComponent* Sarge_X_Laser_Birth_2; // 0x508(0x08)
	struct UParticleSystemComponent* Sarge_X_Laser_Birth_5; // 0x510(0x08)
	struct UParticleSystemComponent* Sarge_X_Laser_Birth_4; // 0x518(0x08)
	struct UParticleSystemComponent* Sarge_X_Laser_Birth_3; // 0x520(0x08)
	struct UGameObjectVisibilityComponent* GameObjectVisibility; // 0x528(0x08)
	struct UComp_Actor_MultiTargetHandler_Buff_C* DangerBuffHandler; // 0x530(0x08)
	struct UComp_Actor_MultiTargetHandler_Buff_C* DamageBuffHandler; // 0x538(0x08)
	float FadeOut_FadeoutScale_CB04CEC549049E7A294A2A9DBB370006; // 0x540(0x04)
	enum class ETimelineDirection FadeOut__Direction_CB04CEC549049E7A294A2A9DBB370006; // 0x544(0x01)
	char pad_545[0x3]; // 0x545(0x03)
	struct UTimelineComponent* FadeOut; // 0x548(0x08)
	double TelegraphTime; // 0x550(0x08)
	struct UAudioComponent* BeamSound; // 0x558(0x08)
	struct UParticleSystemComponent* BlastLaserParticle; // 0x560(0x08)
	double TimeBeforeFadeOut; // 0x568(0x08)
	double FadeOutDuration; // 0x570(0x08)
	struct UParticleSystemComponent* BlastLaserOutroParticle; // 0x578(0x08)
	struct UParticleSystem* TelegraphEmitter; // 0x580(0x08)
	int32_t FloorLocationsToFind; // 0x588(0x04)
	char pad_58C[0x4]; // 0x58c(0x04)
	struct UParticleSystem* AlliedLaserEmitter; // 0x590(0x08)
	struct UParticleSystem* EnemyLaserEmitter; // 0x598(0x08)
	struct UParticleSystem* AlliedLaserFadeOut; // 0x5a0(0x08)
	struct UParticleSystem* EnemyLaserFadeOutEmitter; // 0x5a8(0x08)
	double GameObjectDamage; // 0x5b0(0x08)
	struct FEffectID LaserFireFXC Handle; // 0x5b8(0x20)

	void ShouldDamage(struct AActor* TargetActor, bool& ShouldDamage); // Function GameObject_Sarge_X_OrbitalStrike_Production.GameObject_Sarge_X_OrbitalStrike_Production_C.ShouldDamage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DamageOverlaping(double Delta Seconds); // Function GameObject_Sarge_X_OrbitalStrike_Production.GameObject_Sarge_X_OrbitalStrike_Production_C.DamageOverlaping // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupLaserFadeout(); // Function GameObject_Sarge_X_OrbitalStrike_Production.GameObject_Sarge_X_OrbitalStrike_Production_C.SetupLaserFadeout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Find Search Locations(struct TArray<struct FVector>& Search Locations); // Function GameObject_Sarge_X_OrbitalStrike_Production.GameObject_Sarge_X_OrbitalStrike_Production_C.Find Search Locations // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Find Lowest Point On Nav Mesh(double& Lowest Z); // Function GameObject_Sarge_X_OrbitalStrike_Production.GameObject_Sarge_X_OrbitalStrike_Production_C.Find Lowest Point On Nav Mesh // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FadeOut__FinishedFunc(); // Function GameObject_Sarge_X_OrbitalStrike_Production.GameObject_Sarge_X_OrbitalStrike_Production_C.FadeOut__FinishedFunc // (BlueprintEvent) // @ game+0x19be2f0
	void FadeOut__UpdateFunc(); // Function GameObject_Sarge_X_OrbitalStrike_Production.GameObject_Sarge_X_OrbitalStrike_Production_C.FadeOut__UpdateFunc // (BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function GameObject_Sarge_X_OrbitalStrike_Production.GameObject_Sarge_X_OrbitalStrike_Production_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void AuthFireLaser(); // Function GameObject_Sarge_X_OrbitalStrike_Production.GameObject_Sarge_X_OrbitalStrike_Production_C.AuthFireLaser // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReplicateLaserFire(); // Function GameObject_Sarge_X_OrbitalStrike_Production.GameObject_Sarge_X_OrbitalStrike_Production_C.ReplicateLaserFire // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__laserDangerCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function GameObject_Sarge_X_OrbitalStrike_Production.GameObject_Sarge_X_OrbitalStrike_Production_C.BndEvt__laserDangerCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__damageCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function GameObject_Sarge_X_OrbitalStrike_Production.GameObject_Sarge_X_OrbitalStrike_Production_C.BndEvt__damageCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__damageCapsule_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function GameObject_Sarge_X_OrbitalStrike_Production.GameObject_Sarge_X_OrbitalStrike_Production_C.BndEvt__damageCapsule_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__dangerCapsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function GameObject_Sarge_X_OrbitalStrike_Production.GameObject_Sarge_X_OrbitalStrike_Production_C.BndEvt__dangerCapsule_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BeginLaserFadeOut(); // Function GameObject_Sarge_X_OrbitalStrike_Production.GameObject_Sarge_X_OrbitalStrike_Production_C.BeginLaserFadeOut // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveDestroyed(); // Function GameObject_Sarge_X_OrbitalStrike_Production.GameObject_Sarge_X_OrbitalStrike_Production_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePosition(double NewZLocation); // Function GameObject_Sarge_X_OrbitalStrike_Production.GameObject_Sarge_X_OrbitalStrike_Production_C.UpdatePosition // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SpawnTelegraphDecals(struct TArray<struct FVector>& Array); // Function GameObject_Sarge_X_OrbitalStrike_Production.GameObject_Sarge_X_OrbitalStrike_Production_C.SpawnTelegraphDecals // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveTick(float DeltaSeconds); // Function GameObject_Sarge_X_OrbitalStrike_Production.GameObject_Sarge_X_OrbitalStrike_Production_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_GameObject_Sarge_X_OrbitalStrike_Production(int32_t EntryPoint); // Function GameObject_Sarge_X_OrbitalStrike_Production.GameObject_Sarge_X_OrbitalStrike_Production_C.ExecuteUbergraph_GameObject_Sarge_X_OrbitalStrike_Production // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

