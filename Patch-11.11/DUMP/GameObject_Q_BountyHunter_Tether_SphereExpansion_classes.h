// BlueprintGeneratedClass GameObject_Q_BountyHunter_Tether_SphereExpansion.GameObject_Q_BountyHunter_Tether_SphereExpansion_C
// Size: 0x671 (Inherited: 0x4b0)
struct AGameObject_Q_BountyHunter_Tether_SphereExpansion_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct UComp_Actor_TrackDisplacedCharacters_C* Comp_Actor_TrackDisplacedCharacters; // 0x4b8(0x08)
	struct UComp_Actor_MultiTargetHandler_FXC_C* Comp_Actor_MultiTargetHandler_FXC; // 0x4c0(0x08)
	struct UMinimapComponent_EnemyRequiredDistance_C* MinimapComponent_EnemyRequiredDistance_Radius; // 0x4c8(0x08)
	struct UComp_Actor_BuffLevelOverTime_C* Comp_Actor_BuffLevelOverTime; // 0x4d0(0x08)
	struct UStaticMeshComponent* Cylinder; // 0x4d8(0x08)
	struct UComp_Actor_MultiTargetHandler_Buff_C* Comp_Actor_MultiTargetHandler_BuffDecay; // 0x4e0(0x08)
	struct UComp_Actor_MultiTargetHandler_Buff_C* Comp_Actor_MultiTargetHandler_BuffDeafen; // 0x4e8(0x08)
	struct USphereComponent* InRangeShape; // 0x4f0(0x08)
	struct UComp_Actor_MultiTargetHandler_ForceModule_C* Comp_Actor_MultiTargetHandler_ForceModule; // 0x4f8(0x08)
	struct UActorVisibilityComponent* ActorVisibility; // 0x500(0x08)
	struct USceneComponent* TetherAttachPoint; // 0x508(0x08)
	float Expand_Timeline_NewTrack_0_3A647C20408843BB66E111B2A480BE3D; // 0x510(0x04)
	enum class ETimelineDirection Expand_Timeline__Direction_3A647C20408843BB66E111B2A480BE3D; // 0x514(0x01)
	char pad_515[0x3]; // 0x515(0x03)
	struct UTimelineComponent* Expand Timeline; // 0x518(0x08)
	struct TArray<None> Attached Players; // 0x520(0x10)
	double Tether Scan Radius; // 0x530(0x08)
	struct TMap<struct AActor*, struct FEffectID> CharacterWarningFXC_ID; // 0x538(0x50)
	double Expand Time; // 0x588(0x08)
	struct UMaterialInstanceDynamic* MI Dynamic Pulse; // 0x590(0x08)
	struct UMaterialInterface* MI Enemy Pulse Material; // 0x598(0x08)
	double Scale Divisor; // 0x5a0(0x08)
	struct TArray<struct AShooterCharacter*> Overlapping Not Attached Players; // 0x5a8(0x10)
	struct FEffectID Tether Intro ID; // 0x5b8(0x20)
	struct FEffectID Tether Idle ID; // 0x5d8(0x20)
	bool PlayDestroy; // 0x5f8(0x01)
	char pad_5F9[0x7]; // 0x5f9(0x07)
	struct FEffectData EffectData_3P_Break; // 0x600(0x58)
	double Scale Divisor_Z; // 0x658(0x08)
	struct UAbilityFilterConfig* LivingEnemyPlayer; // 0x660(0x08)
	struct UAbilityFilterConfig* NotImmuneLivingEnemyShooter; // 0x668(0x08)
	bool TimelineFinished; // 0x670(0x01)

	void IsBuffStillActiveOnPlayer(struct AShooterCharacter* TargetPlayer, bool& BuffActive); // Function GameObject_Q_BountyHunter_Tether_SphereExpansion.GameObject_Q_BountyHunter_Tether_SphereExpansion_C.IsBuffStillActiveOnPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void AuthDestroySelfNoAffectedTargets(); // Function GameObject_Q_BountyHunter_Tether_SphereExpansion.GameObject_Q_BountyHunter_Tether_SphereExpansion_C.AuthDestroySelfNoAffectedTargets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthOnTetherBuffLost(struct AShooterCharacter* TetherVictim); // Function GameObject_Q_BountyHunter_Tether_SphereExpansion.GameObject_Q_BountyHunter_Tether_SphereExpansion_C.AuthOnTetherBuffLost // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Is Visible to Detection Point(struct AShooterCharacter* In Shooter Character, bool& IsVisible); // Function GameObject_Q_BountyHunter_Tether_SphereExpansion.GameObject_Q_BountyHunter_Tether_SphereExpansion_C.Is Visible to Detection Point // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Expand Timeline__FinishedFunc(); // Function GameObject_Q_BountyHunter_Tether_SphereExpansion.GameObject_Q_BountyHunter_Tether_SphereExpansion_C.Expand Timeline__FinishedFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Expand Timeline__UpdateFunc(); // Function GameObject_Q_BountyHunter_Tether_SphereExpansion.GameObject_Q_BountyHunter_Tether_SphereExpansion_C.Expand Timeline__UpdateFunc // (BlueprintEvent) // @ game+0x19be2f0
	void ReceiveDestroyed(); // Function GameObject_Q_BountyHunter_Tether_SphereExpansion.GameObject_Q_BountyHunter_Tether_SphereExpansion_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Attach Tether(struct AShooterCharacter* Tethered Player); // Function GameObject_Q_BountyHunter_Tether_SphereExpansion.GameObject_Q_BountyHunter_Tether_SphereExpansion_C.Attach Tether // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Expand Sphere(); // Function GameObject_Q_BountyHunter_Tether_SphereExpansion.GameObject_Q_BountyHunter_Tether_SphereExpansion_C.Expand Sphere // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function GameObject_Q_BountyHunter_Tether_SphereExpansion.GameObject_Q_BountyHunter_Tether_SphereExpansion_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function GameObject_Q_BountyHunter_Tether_SphereExpansion.GameObject_Q_BountyHunter_Tether_SphereExpansion_C.BndEvt__Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function GameObject_Q_BountyHunter_Tether_SphereExpansion.GameObject_Q_BountyHunter_Tether_SphereExpansion_C.BndEvt__Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ReceiveTick(float DeltaSeconds); // Function GameObject_Q_BountyHunter_Tether_SphereExpansion.GameObject_Q_BountyHunter_Tether_SphereExpansion_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void On Teleported(struct AShooterCharacter* Tether Victim); // Function GameObject_Q_BountyHunter_Tether_SphereExpansion.GameObject_Q_BountyHunter_Tether_SphereExpansion_C.On Teleported // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__InRangeShape_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult); // Function GameObject_Q_BountyHunter_Tether_SphereExpansion.GameObject_Q_BountyHunter_Tether_SphereExpansion_C.BndEvt__InRangeShape_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__InRangeShape_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function GameObject_Q_BountyHunter_Tether_SphereExpansion.GameObject_Q_BountyHunter_Tether_SphereExpansion_C.BndEvt__InRangeShape_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Tether Target Killed(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function GameObject_Q_BountyHunter_Tether_SphereExpansion.GameObject_Q_BountyHunter_Tether_SphereExpansion_C.Tether Target Killed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_GameObject_Q_BountyHunter_Tether_SphereExpansion(int32_t EntryPoint); // Function GameObject_Q_BountyHunter_Tether_SphereExpansion.GameObject_Q_BountyHunter_Tether_SphereExpansion_C.ExecuteUbergraph_GameObject_Q_BountyHunter_Tether_SphereExpansion // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

