// BlueprintGeneratedClass Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C
// Size: 0x461 (Inherited: 0x379)
struct UComp_AttackerTeamCoordination_C : UComp_TeamCoordination_C {
	char pad_379[0x7]; // 0x379(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct AShooterPlayerState* BombCarrier; // 0x388(0x08)
	bool HasBombBeenPickedUpThisRound; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct ABombDestination_C* PreviousBombSite; // 0x398(0x08)
	struct ABombDestination_C* TargetBombSite; // 0x3a0(0x08)
	struct UCurveFloat* ChanceToRetreatFromSiteCurve; // 0x3a8(0x08)
	bool ShouldRetreatFromBombSite; // 0x3b0(0x01)
	bool HasBombBeenPlantedThisRound; // 0x3b1(0x01)
	char pad_3B2[0x6]; // 0x3b2(0x06)
	double ChanceFor1BotToPushNotTargetSite; // 0x3b8(0x08)
	double ChanceFor2BotsToPushNotTargetSite; // 0x3c0(0x08)
	struct FTimerHandle DecideToRetreatTimer; // 0x3c8(0x08)
	double DecideToRetreatTime; // 0x3d0(0x08)
	double DistanceOfBombCarrierToBombSiteToPreventRetreat; // 0x3d8(0x08)
	enum class BombPickupBehaviorWithHumanTeammates BombPickupBehaviorWithHumanTeammates; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	double PreRoundDelayBeforePickingUpBomb; // 0x3e8(0x08)
	struct FVector TargetSitePlantOrigin; // 0x3f0(0x18)
	struct FVector TargetSitePlantBoxExtent; // 0x408(0x18)
	bool bWasBombInAttackerInventory; // 0x420(0x01)
	bool bBecomeBombCarrierMidHold; // 0x421(0x01)
	char pad_422[0x6]; // 0x422(0x06)
	struct AShooterCharacter* PotentialBombCarrier; // 0x428(0x08)
	struct FVector BombSpawnLocation; // 0x430(0x18)
	struct FVector InFrontOfBombSpawnLocation; // 0x448(0x18)
	bool bHasHumanPickedUpBomb; // 0x460(0x01)

	void ResetBombCarrierVars(); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.ResetBombCarrierVars // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryBecomeBombCarrier(struct AShooterCharacter* CurrentBombHolder); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.TryBecomeBombCarrier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetHasBombBeenPickedUpThisRound(bool& NewParam); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.GetHasBombBeenPickedUpThisRound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void DropBomb(struct AShooterCharacter* NewBombHolder); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.DropBomb // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get Bomb Site From String(struct FString BotTargetSiteString, struct ABombDestination_C*& BombSite); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.Get Bomb Site From String // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTargetSiteDetails(); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.SetTargetSiteDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool DoesNeedBombCarrier(); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.DoesNeedBombCarrier // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ShouldDeferToHumanBombCarrier(bool& DeferToHumanBombCarriers); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.ShouldDeferToHumanBombCarrier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void MarkBombSiteCleared(struct APawn* BOT); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.MarkBombSiteCleared // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DecideWhetherToRetreatFromSite(); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.DecideWhetherToRetreatFromSite // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePointToCapture(); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.UpdatePointToCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePointToProtect(); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.UpdatePointToProtect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BecomeBombCarrier(struct AShooterPlayerState* PlayerState); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.BecomeBombCarrier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AssignBotBombCarrierIfNeeded(); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.AssignBotBombCarrierIfNeeded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AssignSpawnBarriersToPlayers(); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.AssignSpawnBarriersToPlayers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AssignBombSitesToPlayers(); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.AssignBombSitesToPlayers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DetermineTargetBombSite(); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.DetermineTargetBombSite // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetTeamComponent(struct UBaseTeamComponent*& TeamComponent); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.GetTeamComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ReceiveTick(float DeltaSeconds); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnBombDropped(struct AShooterCharacter* OldBombHolder); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.OnBombDropped // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRoundBegin(int32_t RoundNumberBeginning); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.OnRoundBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBombPlanted(struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.OnBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerKilled(struct AOwnerExclusivePlayerInfo* Killer, struct AOwnerExclusivePlayerInfo* Victim, struct APawn* KilledPawn, struct UDamageResponse* Response, struct TArray<struct FAresAssist>& AssistList, struct UDamageType* DamageType); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.OnPlayerKilled // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBombPickedUp(struct AShooterCharacter* NewBombHolder); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.OnBombPickedUp // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDecideToRetreatTimer(); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.OnDecideToRetreatTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Comp_AttackerTeamCoordination(int32_t EntryPoint); // Function Comp_AttackerTeamCoordination.Comp_AttackerTeamCoordination_C.ExecuteUbergraph_Comp_AttackerTeamCoordination // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

