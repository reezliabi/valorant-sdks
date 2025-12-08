// BlueprintGeneratedClass PlantedBomb.PlantedBomb_C
// Size: 0x6c8 (Inherited: 0x4b0)
struct APlantedBomb_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UCapsuleComponent* BombTargetingOverlapCapsule; // 0x4b8(0x08)
	struct UChronometerComponent* BeepChronometer; // 0x4c0(0x08)
	struct UChronometerComponent* ExplosionChronometer; // 0x4c8(0x08)
	struct USphereComponent* PingCollider; // 0x4d0(0x08)
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0x4d8(0x08)
	struct UTeamRoleComponent* TeamRole; // 0x4e0(0x08)
	struct UPlantedBombMinimapComponent_C* PlantedBombMinimapComponent; // 0x4e8(0x08)
	struct UGameObjectVisibilityComponent* GameObjectVisibility; // 0x4f0(0x08)
	struct UPlantedBombVOComponent_C* BombPlantVOComponent; // 0x4f8(0x08)
	struct UStaticMeshComponent* DefuseRangeIndicator; // 0x500(0x08)
	struct UCapsuleComponent* Capsule; // 0x508(0x08)
	struct URelevantFogOfWarComponent* RelevantFogOfWar; // 0x510(0x08)
	struct UCameraComponent* Camera; // 0x518(0x08)
	struct USpringArmComponent* SpringArm; // 0x520(0x08)
	struct UAresOutlineComponent* OutlineComponentSpikeMesh; // 0x528(0x08)
	struct UGameObjectMinimapDisplayComponentDeprecated* GameObjectMinimapDisplay; // 0x530(0x08)
	struct UStaticMeshComponent* SuperGrid_Plane; // 0x538(0x08)
	struct USkeletalMeshComponent* Bomb_Spike; // 0x540(0x08)
	struct USphereComponent* ExplodeInnerRadiusVisualizer; // 0x548(0x08)
	struct USphereComponent* ExplodeRadiusVisualizer; // 0x550(0x08)
	struct UUsableComponent* Usable; // 0x558(0x08)
	bool BombHasExploded; // 0x560(0x01)
	char pad_561[0x7]; // 0x561(0x07)
	double BombTickSecondsNormal; // 0x568(0x08)
	double BombTickSecondsFast; // 0x570(0x08)
	double BombTickSecondsFaster; // 0x578(0x08)
	double BombTickSecondsFastest; // 0x580(0x08)
	double BombTickSecondsDetonation; // 0x588(0x08)
	enum class EBombTickState BombTickState; // 0x590(0x01)
	char pad_591[0x7]; // 0x591(0x07)
	double BombExplodeOuterRadius; // 0x598(0x08)
	double BombExplodeInnerRadius; // 0x5a0(0x08)
	double TimeRemainingToExplode; // 0x5a8(0x08)
	double PlantedLocalTimeStamp; // 0x5b0(0x08)
	enum class BombSiteEnum PlantedAtSite; // 0x5b8(0x01)
	bool BombHasBeenDefused; // 0x5b9(0x01)
	enum class EBombTickState ClientPreviousBombTickState; // 0x5ba(0x01)
	enum class BombDefusingState BombDefuseState; // 0x5bb(0x01)
	char pad_5BC[0x4]; // 0x5bc(0x04)
	struct AShooterCharacter* CurrentDefuser; // 0x5c0(0x08)
	struct UAresAudioComponent* EventLongBeepSound; // 0x5c8(0x08)
	double DefuseProgress; // 0x5d0(0x08)
	double TimeUntilRemoveBombOutline; // 0x5d8(0x08)
	struct UMaterialInstanceDynamic* BombCoreMI; // 0x5e0(0x08)
	double BombExplodeTotalTime; // 0x5e8(0x08)
	int32_t CurrentDefuseSection; // 0x5f0(0x04)
	char pad_5F4[0x4]; // 0x5f4(0x04)
	struct AEffectContainer* FXC Bomb While Defusing; // 0x5f8(0x08)
	struct AEffectContainer* FXC Bomb Defused; // 0x600(0x08)
	struct FMulticastInlineDelegate OnExploded; // 0x608(0x10)
	enum class EPlantedBombState PlantedBombState; // 0x618(0x01)
	char pad_619[0x7]; // 0x619(0x07)
	struct FMulticastInlineDelegate OnDefused; // 0x620(0x10)
	bool BombInitializeComplete; // 0x630(0x01)
	char pad_631[0x7]; // 0x631(0x07)
	struct AEffectContainer* BombBeepEffect; // 0x638(0x08)
	struct FEffectID FXC Bomb Defuse; // 0x640(0x20)
	struct AEffectContainer* BombMinimapExplosion; // 0x660(0x08)
	struct FEffectID TickingEffectID; // 0x668(0x20)
	struct TArray<struct FRotator> PossibleSpringArmPositions; // 0x688(0x10)
	int32_t BestSpringArmIndex; // 0x698(0x04)
	char pad_69C[0x4]; // 0x69c(0x04)
	double BestSpringArmDistance; // 0x6a0(0x08)
	double BombBeepAttenuationRadius; // 0x6a8(0x08)
	double PredictedDefuseProgress; // 0x6b0(0x08)
	struct FTimerHandle ClientCorrectionTimer; // 0x6b8(0x08)
	struct AEffectContainer* BombTickingEffect; // 0x6c0(0x08)

	void PlayBeepSound(struct UAresAudioComponent*& AudioComponent); // Function PlantedBomb.PlantedBomb_C.PlayBeepSound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthBeep(); // Function PlantedBomb.PlantedBomb_C.AuthBeep // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyBeepSpeed(); // Function PlantedBomb.PlantedBomb_C.ApplyBeepSpeed // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetBeepInterval(double& Interval); // Function PlantedBomb.PlantedBomb_C.GetBeepInterval // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetDefuseProgress(double& LocalDefuseProgress); // Function PlantedBomb.PlantedBomb_C.GetDefuseProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void OnRep_BombDefuseState(); // Function PlantedBomb.PlantedBomb_C.OnRep_BombDefuseState // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayDefuseSuccessEffects(); // Function PlantedBomb.PlantedBomb_C.PlayDefuseSuccessEffects // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StopDefuseEffects(); // Function PlantedBomb.PlantedBomb_C.StopDefuseEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBombTickState(enum class EBombTickState TickState); // Function PlantedBomb.PlantedBomb_C.SetBombTickState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthExplode(); // Function PlantedBomb.PlantedBomb_C.AuthExplode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeBomb(); // Function PlantedBomb.PlantedBomb_C.InitializeBomb // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayDefuseEffects(); // Function PlantedBomb.PlantedBomb_C.PlayDefuseEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetCurrentBombSection(struct AShooterCharacter* Character, int32_t& Section, double& ProgressCheckpoint); // Function PlantedBomb.PlantedBomb_C.GetCurrentBombSection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetBombSections(int32_t& BombSections); // Function PlantedBomb.PlantedBomb_C.GetBombSections // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void OnRep_DefuseProgress(); // Function PlantedBomb.PlantedBomb_C.OnRep_DefuseProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CanDefuse(struct AShooterCharacter* NewUserCharacter, bool& CanDefuse); // Function PlantedBomb.PlantedBomb_C.CanDefuse // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UserConstructionScript(); // Function PlantedBomb.PlantedBomb_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Usable_K2Node_ComponentBoundEvent_116_UsableComponentCanUseSignature__DelegateSignature(struct UUsableComponent* UsableComponent, struct UInteractableUserComponent* User); // Function PlantedBomb.PlantedBomb_C.BndEvt__Usable_K2Node_ComponentBoundEvent_116_UsableComponentCanUseSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Usable_K2Node_ComponentBoundEvent_119_UsableComponentUseSuccessful__DelegateSignature(struct UInteractableUserComponent* User); // Function PlantedBomb.PlantedBomb_C.BndEvt__Usable_K2Node_ComponentBoundEvent_119_UsableComponentUseSuccessful__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function PlantedBomb.PlantedBomb_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void MulticastBeep(enum class EBombTickState BombTickState); // Function PlantedBomb.PlantedBomb_C.MulticastBeep // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Usable_K2Node_ComponentBoundEvent_115_UsableComponentUseStarted__DelegateSignature(struct UInteractableUserComponent* User); // Function PlantedBomb.PlantedBomb_C.BndEvt__Usable_K2Node_ComponentBoundEvent_115_UsableComponentUseStarted__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ClientBombExplode(); // Function PlantedBomb.PlantedBomb_C.ClientBombExplode // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Usable_K2Node_ComponentBoundEvent_266_UsableComponentUseCanceled__DelegateSignature(struct UInteractableUserComponent* User, enum class EUsableCancelReason CancelReason); // Function PlantedBomb.PlantedBomb_C.BndEvt__Usable_K2Node_ComponentBoundEvent_266_UsableComponentUseCanceled__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ReceiveTick(float DeltaSeconds); // Function PlantedBomb.PlantedBomb_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void RepDefuse(); // Function PlantedBomb.PlantedBomb_C.RepDefuse // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDefuseBegin(struct AShooterCharacter* ShooterCharacter); // Function PlantedBomb.PlantedBomb_C.OnDefuseBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function PlantedBomb.PlantedBomb_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerViewTargetChanged_Event_1(); // Function PlantedBomb.PlantedBomb_C.OnPlayerViewTargetChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EvaluateDefuseProgressDisagreement(); // Function PlantedBomb.PlantedBomb_C.EvaluateDefuseProgressDisagreement // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_PlantedBomb(int32_t EntryPoint); // Function PlantedBomb.PlantedBomb_C.ExecuteUbergraph_PlantedBomb // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnDefused__DelegateSignature(struct AShooterCharacter* Defuser); // Function PlantedBomb.PlantedBomb_C.OnDefused__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnExploded__DelegateSignature(struct ABombDetonationActor_C* Detonation); // Function PlantedBomb.PlantedBomb_C.OnExploded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

