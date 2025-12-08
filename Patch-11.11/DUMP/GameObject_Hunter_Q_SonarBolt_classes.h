// BlueprintGeneratedClass GameObject_Hunter_Q_SonarBolt.GameObject_Hunter_Q_SonarBolt_C
// Size: 0x6e0 (Inherited: 0x4b0)
struct AGameObject_Hunter_Q_SonarBolt_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UMultiPointSeenFromLogicComponent* MultiPointSeenFromLogic; // 0x4b8(0x08)
	struct UAttachedAbilityObjectComponent* AttachedAbilityObject; // 0x4c0(0x08)
	struct UAimToolingTargetPoint* PMAimToolingTargetPoint; // 0x4c8(0x08)
	struct UAimToolingPointsTargetComponent* PMAimToolingPointsTarget; // 0x4d0(0x08)
	struct UComp_ApplySelfBuffs_C* Comp_ApplySelfBuffs; // 0x4d8(0x08)
	struct UAresAbilitySystemComponent* AresAbilitySystem; // 0x4e0(0x08)
	struct UBoxComponent* HitBox; // 0x4e8(0x08)
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0x4f0(0x08)
	struct UWallPenetrationNonParticipant_C* WallPenetrationNonParticipant; // 0x4f8(0x08)
	struct UMinimapComponent_EnemyRequiredDistance_C* MinimapComponent_EnemyRequiredDistance_Radius; // 0x500(0x08)
	struct UMinimapComponent_EnemyRequiredDistance_C* MinimapComponent_EnemyRequiredDistance_Middle; // 0x508(0x08)
	struct UGameObjectVisibilityComponent* GameObjectVisibility; // 0x510(0x08)
	struct UStaticMeshComponent* InRangeShape; // 0x518(0x08)
	struct UComp_Actor_MultiTargetHandler_FXC_C* Comp_Actor_MultiTargetHandler_FXC_HUD_Warning; // 0x520(0x08)
	struct UComp_Actor_MultiTargetHandler_Buff_C* Comp_Actor_MultiTargetHandler_Buff; // 0x528(0x08)
	struct USceneComponent* TestPoint_04; // 0x530(0x08)
	struct USceneComponent* TestPoint_03; // 0x538(0x08)
	struct USceneComponent* TestPoint_02; // 0x540(0x08)
	struct USceneComponent* TestPoint_01; // 0x548(0x08)
	struct UParticleSystemComponent* Hunter_Q_BoltImpact_VFX; // 0x550(0x08)
	struct UComp_Actor_MultiTargetHandler_FOW_Override_C* Comp_Actor_MultiTargetFOW_Override_Handler; // 0x558(0x08)
	struct USceneComponent* Origin; // 0x560(0x08)
	double InitialPingDelay; // 0x568(0x08)
	double SearchRadius; // 0x570(0x08)
	bool VO_Played; // 0x578(0x01)
	char pad_579[0x7]; // 0x579(0x07)
	double RevealDuration; // 0x580(0x08)
	struct TSet<struct AShooterCharacter*> RevealedLastCheck; // 0x588(0x50)
	double DelayBetweenPings; // 0x5d8(0x08)
	struct TArray<struct AShooterPlayerState*> ShooterPlayerStates; // 0x5e0(0x10)
	double NearsightSearchRadius; // 0x5f0(0x08)
	bool Active; // 0x5f8(0x01)
	char pad_5F9[0x7]; // 0x5f9(0x07)
	struct TSet<struct AShooterCharacter*> EverRevealed; // 0x600(0x50)
	int32_t PingsSent; // 0x650(0x04)
	char pad_654[0x4]; // 0x654(0x04)
	struct AGameObject_Hunter_Q_SonarPing_C* LastPing; // 0x658(0x08)
	struct TMap<struct AActor*, struct FEffectID> CharacterWarningFXC_ID; // 0x660(0x50)
	struct TArray<struct AShooterCharacter*> RevealedCharacters; // 0x6b0(0x10)
	int32_t MaxPings; // 0x6c0(0x04)
	int32_t SonarBoltIdent; // 0x6c4(0x04)
	struct AShooterCharacter* L_ShooterCharacter; // 0x6c8(0x08)
	struct UAkAudioEvent* SFX_DeployedLoop; // 0x6d0(0x08)
	struct UAbilityFilterConfig* NotImmuneLivingEnemyShooter; // 0x6d8(0x08)

	double GetRadiusAgainstDoorCrushBox(); // Function GameObject_Hunter_Q_SonarBolt.GameObject_Hunter_Q_SonarBolt_C.GetRadiusAgainstDoorCrushBox // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Setup Seen from Points(); // Function GameObject_Hunter_Q_SonarBolt.GameObject_Hunter_Q_SonarBolt_C.Setup Seen from Points // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool InPandemicUlt(); // Function GameObject_Hunter_Q_SonarBolt.GameObject_Hunter_Q_SonarBolt_C.InPandemicUlt // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateInRangeSize(); // Function GameObject_Hunter_Q_SonarBolt.GameObject_Hunter_Q_SonarBolt_C.UpdateInRangeSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsVisibleToDetectionPoint(struct AShooterCharacter* ShooterCharacter, bool& IsVisible); // Function GameObject_Hunter_Q_SonarBolt.GameObject_Hunter_Q_SonarBolt_C.IsVisibleToDetectionPoint // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function GameObject_Hunter_Q_SonarBolt.GameObject_Hunter_Q_SonarBolt_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void RevealExpire(); // Function GameObject_Hunter_Q_SonarBolt.GameObject_Hunter_Q_SonarBolt_C.RevealExpire // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PulseReveal(); // Function GameObject_Hunter_Q_SonarBolt.GameObject_Hunter_Q_SonarBolt_C.PulseReveal // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function GameObject_Hunter_Q_SonarBolt.GameObject_Hunter_Q_SonarBolt_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function GameObject_Hunter_Q_SonarBolt.GameObject_Hunter_Q_SonarBolt_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ReceiveDestroyed(); // Function GameObject_Hunter_Q_SonarBolt.GameObject_Hunter_Q_SonarBolt_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PlayerRevealed_Event(struct AShooterCharacter* RevealedCharacter); // Function GameObject_Hunter_Q_SonarBolt.GameObject_Hunter_Q_SonarBolt_C.PlayerRevealed_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__DamageHandler_K2Node_ComponentBoundEvent_1_OnDeathSignature__DelegateSignature(struct UDamageResponse* Response); // Function GameObject_Hunter_Q_SonarBolt.GameObject_Hunter_Q_SonarBolt_C.BndEvt__DamageHandler_K2Node_ComponentBoundEvent_1_OnDeathSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_GameObject_Hunter_Q_SonarBolt(int32_t EntryPoint); // Function GameObject_Hunter_Q_SonarBolt.GameObject_Hunter_Q_SonarBolt_C.ExecuteUbergraph_GameObject_Hunter_Q_SonarBolt // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

