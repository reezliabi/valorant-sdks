// BlueprintGeneratedClass Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C
// Size: 0x3f0 (Inherited: 0x379)
struct UComp_DefenderTeamCoordination_C : UComp_TeamCoordination_C {
	char pad_379[0x7]; // 0x379(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct TArray<struct ABombDestination_C*> BombSitesLeftToSearch; // 0x388(0x10)
	bool BombHasBeenPlanted; // 0x398(0x01)
	bool TeamHasDiscoveredBomb; // 0x399(0x01)
	char pad_39A[0x6]; // 0x39a(0x06)
	struct FVector BombEquippableDiscoveredLocation; // 0x3a0(0x18)
	struct FTimerHandle DefuseTimerHandle; // 0x3b8(0x08)
	bool DefuserMustStick; // 0x3c0(0x01)
	bool DefuserProtected; // 0x3c1(0x01)
	char pad_3C2[0x6]; // 0x3c2(0x06)
	double DefuserProtectionRadius; // 0x3c8(0x08)
	double DistanceCloserToBombToReassignBombDefuser; // 0x3d0(0x08)
	struct FVector NextBombSiteToSearch; // 0x3d8(0x18)

	void Update Next Bomb Site to Search(); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.Update Next Bomb Site to Search // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HasBombBeenSpotted(bool& bBombSpotted); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.HasBombBeenSpotted // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateDefuserProtected(); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.UpdateDefuserProtected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSearchedBombSites(); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.UpdateSearchedBombSites // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AssignBotBombDefuser(); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.AssignBotBombDefuser // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Has Discovered Bomb(); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.Update Has Discovered Bomb // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePointToCapture(); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.UpdatePointToCapture // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePointToProtect(); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.UpdatePointToProtect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool Is Bomb Site Underoccupied(int32_t BombSiteCoordinationInfoIndex); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.Is Bomb Site Underoccupied // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void DetermineBotAtBombSiteToReplace(int32_t BombSiteCoordinationInfoIndex, struct AShooterPlayerState* PlayerEnteringSite, struct AShooterPlayerState*& BotToReplace); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.DetermineBotAtBombSiteToReplace // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	bool IsSpawnBarrierOveroccupied(int32_t BombSiteInfoIndex); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.IsSpawnBarrierOveroccupied // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	bool IsBombSiteOveroccupied(int32_t BombSiteCoordinationInfoIndex); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.IsBombSiteOveroccupied // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void AssignToOpenSpawnBarrier(int32_t BombSiteCoordinationInfoIndex, struct AShooterPlayerState* PlayerState); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.AssignToOpenSpawnBarrier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AssignToOpenBombSite(struct AShooterPlayerState* PlayerState, int32_t& BombSiteCoordinationInfoIndex); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.AssignToOpenBombSite // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InferHumanSpawnBarriers(); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.InferHumanSpawnBarriers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InferHumanBombSites(); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.InferHumanBombSites // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReassignBotToReplaceDeadAlly(struct AShooterPlayerState* KilledPlayerState); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.ReassignBotToReplaceDeadAlly // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReassignBotsToNewBombSitesAndBarriers(); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.ReassignBotsToNewBombSitesAndBarriers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AssignInitialBotBombSitesAndBarriers(); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.AssignInitialBotBombSitesAndBarriers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsBombSiteRelevant(struct ABombDestination_C* BombDestination, bool& IsRelevant); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.IsBombSiteRelevant // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetTeamComponent(struct UBaseTeamComponent*& TeamComponent); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.GetTeamComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ReceiveTick(float DeltaSeconds); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnRoundBegin(int32_t RoundNumberBeginning); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.OnRoundBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBombPlanted(struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.OnBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerKilled(struct AOwnerExclusivePlayerInfo* Killer, struct AOwnerExclusivePlayerInfo* Victim, struct APawn* KilledPawn, struct UDamageResponse* Response, struct TArray<struct FAresAssist>& AssistList, struct UDamageType* DamageType); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.OnPlayerKilled // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void LastChanceToDefuse(); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.LastChanceToDefuse // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRoundEnd(int32_t RoundNumberEnded); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.OnRoundEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBombDefused(struct AShooterCharacter* DefusingCharacter); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.OnBombDefused // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Comp_DefenderTeamCoordination(int32_t EntryPoint); // Function Comp_DefenderTeamCoordination.Comp_DefenderTeamCoordination_C.ExecuteUbergraph_Comp_DefenderTeamCoordination // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

