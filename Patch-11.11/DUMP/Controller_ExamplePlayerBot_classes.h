// BlueprintGeneratedClass Controller_ExamplePlayerBot.Controller_ExamplePlayerBot_C
// Size: 0x958 (Inherited: 0x7e8)
struct AController_ExamplePlayerBot_C : ABasePlayerBotController_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7e8(0x08)
	struct USelectPreaimLocation_PlayerBot_C* SelectPreaimLocation_PlayerBot; // 0x7f0(0x08)
	struct USelectCombatTarget_PlayerBot_C* SelectCombatTarget_PlayerBot; // 0x7f8(0x08)
	struct UAresBotAimDebugComponent_ExamplePlayerBot_C* AresBotAimDebugComponent_ExamplePlayerBot; // 0x800(0x08)
	struct UAIAimPriorityComponent* AIAimPriority; // 0x808(0x08)
	struct UAIUpdateMovementAimTargetComponent_ExamplePlayerBot_C* AIUpdateMovementAimTargetComponent_ExamplePlayerBot; // 0x810(0x08)
	struct UAIFiringStateTuningComponent_ExamplePlayerBot_C* AIFiringStateTuningComponent_ExamplePlayerBot; // 0x818(0x08)
	struct UMapPingComponent* Mapping; // 0x820(0x08)
	struct UPlayerNonverbalCommComponent_C* PlayerNonverbalCommComponent; // 0x828(0x08)
	struct UComp_EquippableActivationComponentLoader_C* Comp_EquippableActivationComponentLoader; // 0x830(0x08)
	struct UCharacterBehaviorTreeLoaderComponent_C* CharacterBehaviorTreeLoaderComponent; // 0x838(0x08)
	struct UEngageDistanceComponent_C* EngageDistanceComponent; // 0x840(0x08)
	struct URoomPathFinderComponent_ExamplePlayerBot_C* RoomPathfinderComponent_ExamplePlayerBot; // 0x848(0x08)
	struct UAIAimComp_MechanicalAim_C* AIAimComp_MechanicalAim; // 0x850(0x08)
	struct UAIAimComp_MovementCompensation_C* AIAimComp_MovementCompensation; // 0x858(0x08)
	struct UAresBotDebugComponent* AresBotDebugComponent; // 0x860(0x08)
	struct UAIAimComp_PlayerCharacterOffset_C* AIAimComp_PlayerCharacterOffset; // 0x868(0x08)
	int32_t DebugFocalPointSphereId; // 0x870(0x04)
	int32_t DebugDesiredRotatorLineId; // 0x874(0x04)
	int32_t DebugDesiredRotatorSphereId; // 0x878(0x04)
	int32_t DebugCompensatedRotatorLineId; // 0x87c(0x04)
	int32_t DebugCompensatedRotatorSphereId; // 0x880(0x04)
	char pad_884[0x4]; // 0x884(0x04)
	struct AActor* PrevTargetActor; // 0x888(0x08)
	struct FVector PrevFocalPoint; // 0x890(0x18)
	struct UObject* PreviousCombatTarget; // 0x8a8(0x08)
	double TimestampOfNewTargetAquisition; // 0x8b0(0x08)
	double TimestampOfTargetEnteringVision; // 0x8b8(0x08)
	double FiringDelaySecondsAgainstNewTarget; // 0x8c0(0x08)
	double FiringDelaySecondsAfterTargetEntersVision; // 0x8c8(0x08)
	bool bWasTargetInVisionLastTick; // 0x8d0(0x01)
	bool bHasPrintedFiringDelayDebugLog; // 0x8d1(0x01)
	char pad_8D2[0x2]; // 0x8d2(0x02)
	struct FName CombatTargetBlackboardKeyName; // 0x8d4(0x0c)
	struct FName CombatTargetIsVisibleBlackboardKeyName; // 0x8e0(0x0c)
	bool PingOnCooldown; // 0x8ec(0x01)
	char pad_8ED[0x3]; // 0x8ed(0x03)
	struct FMulticastInlineDelegate Debug_NewCombatTargetPushed; // 0x8f0(0x10)
	struct FMulticastInlineDelegate Debug_NewPreaimPointPushed; // 0x900(0x10)
	struct FMulticastInlineDelegate Debug_CombatTargetsShouldBeCleared; // 0x910(0x10)
	struct FMulticastInlineDelegate Debug_PreaimPointsShouldBeCleared; // 0x920(0x10)
	double MinRePingTime; // 0x930(0x08)
	double MaxRePingTime; // 0x938(0x08)
	struct UBotTrainingMatchVOComponent_C* VOComponent; // 0x940(0x08)
	double IncreaseBurstTimeDistance; // 0x948(0x08)
	double CloseRangeBurstTimeIncrease; // 0x950(0x08)

	void RefreshEnemySpottedPingCooldown(); // Function Controller_ExamplePlayerBot.Controller_ExamplePlayerBot_C.RefreshEnemySpottedPingCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryPingEnemySpotted(struct AActor* PerceivedActor, struct FAIStimulus Stimulus); // Function Controller_ExamplePlayerBot.Controller_ExamplePlayerBot_C.TryPingEnemySpotted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HasPassedFiringDelay(bool& ShouldFire); // Function Controller_ExamplePlayerBot.Controller_ExamplePlayerBot_C.HasPassedFiringDelay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void CheckNewTarget(struct AActor* TargetActor, struct FVector FocalPoint, struct FVector& AimFocalPoint); // Function Controller_ExamplePlayerBot.Controller_ExamplePlayerBot_C.CheckNewTarget // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Debug Draw Recoil Compensation(struct FRotator CompensatedRotator, struct FRotator DesiredRotator); // Function Controller_ExamplePlayerBot.Controller_ExamplePlayerBot_C.Debug Draw Recoil Compensation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DebugDrawFocalPoint(struct FVector FocalPoint); // Function Controller_ExamplePlayerBot.Controller_ExamplePlayerBot_C.DebugDrawFocalPoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ConvertLocationToAimRotation(struct FVector AimLocation, struct FRotator FallbackRotation, struct FRotator& AimAtRotation); // Function Controller_ExamplePlayerBot.Controller_ExamplePlayerBot_C.ConvertLocationToAimRotation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateCombatTargetDelay(); // Function Controller_ExamplePlayerBot.Controller_ExamplePlayerBot_C.UpdateCombatTargetDelay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FRotator TickCombatAim(double DeltaTime, struct FRotator NewControlRotation); // Function Controller_ExamplePlayerBot.Controller_ExamplePlayerBot_C.TickCombatAim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FRotator OverrideControlRotation(float DeltaTime, struct FRotator NewControlRotation); // Function Controller_ExamplePlayerBot.Controller_ExamplePlayerBot_C.OverrideControlRotation // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Controller_ExamplePlayerBot.Controller_ExamplePlayerBot_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnRoundBegin(int32_t RoundNumberBeginning); // Function Controller_ExamplePlayerBot.Controller_ExamplePlayerBot_C.OnRoundBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAllyCharacterDamageTaken(struct AActor* DamagedActor, double Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function Controller_ExamplePlayerBot.Controller_ExamplePlayerBot_C.OnAllyCharacterDamageTaken // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRoundEnd(int32_t RoundNumberEnded); // Function Controller_ExamplePlayerBot.Controller_ExamplePlayerBot_C.OnRoundEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceivePossess(struct APawn* PossessedPawn); // Function Controller_ExamplePlayerBot.Controller_ExamplePlayerBot_C.ReceivePossess // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnTargetPerceptionUpdated(struct AActor* Actor, struct FAIStimulus Stimulus); // Function Controller_ExamplePlayerBot.Controller_ExamplePlayerBot_C.OnTargetPerceptionUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveUnPossess(struct APawn* UnpossessedPawn); // Function Controller_ExamplePlayerBot.Controller_ExamplePlayerBot_C.ReceiveUnPossess // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Controller_ExamplePlayerBot(int32_t EntryPoint); // Function Controller_ExamplePlayerBot.Controller_ExamplePlayerBot_C.ExecuteUbergraph_Controller_ExamplePlayerBot // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void Debug_PreaimPointsShouldBeCleared__DelegateSignature(); // Function Controller_ExamplePlayerBot.Controller_ExamplePlayerBot_C.Debug_PreaimPointsShouldBeCleared__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Debug_CombatTargetsShouldBeCleared__DelegateSignature(); // Function Controller_ExamplePlayerBot.Controller_ExamplePlayerBot_C.Debug_CombatTargetsShouldBeCleared__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Debug_NewPreaimPointPushed__DelegateSignature(struct AActor* PreaimPoint, struct TMap<struct FString, double> UtilityValues, double TotalUtility, int32_t HeapSize); // Function Controller_ExamplePlayerBot.Controller_ExamplePlayerBot_C.Debug_NewPreaimPointPushed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Debug_NewCombatTargetPushed__DelegateSignature(struct AActor* CombatTarget, struct TMap<struct FString, double> UtilityValues, double TotalUtility, int32_t HeapSize); // Function Controller_ExamplePlayerBot.Controller_ExamplePlayerBot_C.Debug_NewCombatTargetPushed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

