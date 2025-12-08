// BlueprintGeneratedClass SelectCombatTarget_PlayerBot.SelectCombatTarget_PlayerBot_C
// Size: 0x368 (Inherited: 0xd8)
struct USelectCombatTarget_PlayerBot_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct AActor* BestTarget; // 0xe0(0x08)
	struct APawn* ControlledPawn; // 0xe8(0x08)
	struct TSet<struct AActor*> TargetCandidates; // 0xf0(0x50)
	struct UEngageDistanceComponent_C* EngageDistanceComponent; // 0x140(0x08)
	struct TMap<struct AActor*, double> LastPerceptionUpdatedTime; // 0x148(0x50)
	double CandidatePerceptionExpireTime; // 0x198(0x08)
	struct TSet<struct AActor*> VisibleTargetCandidates; // 0x1a0(0x50)
	struct TMap<struct AActor*, struct FEngageDistanceInfo> CandidateEngageDistanceInfo; // 0x1f0(0x50)
	double MaxCandidateEngageDistance; // 0x240(0x08)
	struct TMap<struct AActor*, struct FVector> LastPerceptionUpdatedLocation; // 0x248(0x50)
	struct FVector LastEngageDistanceUpdateLocation; // 0x298(0x18)
	double EngageDistanceUpdateDistanceInterval; // 0x2b0(0x08)
	struct FVector PreaimTargetOffset; // 0x2b8(0x18)
	bool DrawDebug; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	double DebounceUtility; // 0x2d8(0x08)
	double VisionUtility; // 0x2e0(0x08)
	double DistanceMax; // 0x2e8(0x08)
	double DistanceFactor; // 0x2f0(0x08)
	struct UAIAimPriorityComponent* AimPriorityComponent; // 0x2f8(0x08)
	struct AController_ExamplePlayerBot_C* BotController; // 0x300(0x08)
	struct FName CombatTargetBlackboardName; // 0x308(0x0c)
	struct FName CombatTargetIsVisibleBlackboardName; // 0x314(0x0c)
	struct FName InDirectCombatThreatBlackboardName; // 0x320(0x0c)
	char pad_32C[0x4]; // 0x32c(0x04)
	struct USelectPreaimLocation_PlayerBot_C* SelectPreaimLocationComponent; // 0x330(0x08)
	double CombatPreaimDisableThreshold; // 0x338(0x08)
	double DirectThreatEngageDistanceThreshold; // 0x340(0x08)
	bool InDirectCombatThreat; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	struct UAISpatialAwarenessAmortizationManagerComponent* AmortizationManagerComponent; // 0x350(0x08)
	double ClosingSpeedBonusCos; // 0x358(0x08)
	double ClosingSpeedBonus; // 0x360(0x08)

	void UpdatePreaimTargetEnabled(); // Function SelectCombatTarget_PlayerBot.SelectCombatTarget_PlayerBot_C.UpdatePreaimTargetEnabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCharacterCombatTargetDeath(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function SelectCombatTarget_PlayerBot.SelectCombatTarget_PlayerBot_C.OnCharacterCombatTargetDeath // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsVisibleFromLocation(struct AActor* TargetCandidate, bool& bVisible); // Function SelectCombatTarget_PlayerBot.SelectCombatTarget_PlayerBot_C.IsVisibleFromLocation // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetInDirectCombatThreat(); // Function SelectCombatTarget_PlayerBot.SelectCombatTarget_PlayerBot_C.SetInDirectCombatThreat // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetBestTargetCandidate(struct AActor*& BestCandidate); // Function SelectCombatTarget_PlayerBot.SelectCombatTarget_PlayerBot_C.GetBestTargetCandidate // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCandidateEngageDistance(); // Function SelectCombatTarget_PlayerBot.SelectCombatTarget_PlayerBot_C.UpdateCandidateEngageDistance // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetCandidateUtility(struct AActor* Candidate, double& CandidateUtility); // Function SelectCombatTarget_PlayerBot.SelectCombatTarget_PlayerBot_C.GetCandidateUtility // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveIrrelevantCandidates(); // Function SelectCombatTarget_PlayerBot.SelectCombatTarget_PlayerBot_C.RemoveIrrelevantCandidates // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DeregisterCandidate(struct AActor* CandidateActor); // Function SelectCombatTarget_PlayerBot.SelectCombatTarget_PlayerBot_C.DeregisterCandidate // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RegisterCandidate(struct AActor* CandidateActor, struct FEngageDistanceInfo CandidateEngageDistanceInfo, bool SightSense, bool Visible); // Function SelectCombatTarget_PlayerBot.SelectCombatTarget_PlayerBot_C.RegisterCandidate // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FilterAndUpdateCandidatesOnPerceived(struct AActor* Actor, bool SightSense, bool Visible); // Function SelectCombatTarget_PlayerBot.SelectCombatTarget_PlayerBot_C.FilterAndUpdateCandidatesOnPerceived // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTargetPerceptionUpdated(struct AActor* Actor, struct FAIStimulus Stimulus); // Function SelectCombatTarget_PlayerBot.SelectCombatTarget_PlayerBot_C.OnTargetPerceptionUpdated // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ForceRunEventTick(); // Function SelectCombatTarget_PlayerBot.SelectCombatTarget_PlayerBot_C.ForceRunEventTick // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function SelectCombatTarget_PlayerBot.SelectCombatTarget_PlayerBot_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveTick(float DeltaSeconds); // Function SelectCombatTarget_PlayerBot.SelectCombatTarget_PlayerBot_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnRoundBegin(int32_t RoundNumberBeginning); // Function SelectCombatTarget_PlayerBot.SelectCombatTarget_PlayerBot_C.OnRoundBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function SelectCombatTarget_PlayerBot.SelectCombatTarget_PlayerBot_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PerformAmortizedWork(); // Function SelectCombatTarget_PlayerBot.SelectCombatTarget_PlayerBot_C.PerformAmortizedWork // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_SelectCombatTarget_PlayerBot(int32_t EntryPoint); // Function SelectCombatTarget_PlayerBot.SelectCombatTarget_PlayerBot_C.ExecuteUbergraph_SelectCombatTarget_PlayerBot // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

