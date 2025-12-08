// BlueprintGeneratedClass Comp_TeamCoordination.Comp_TeamCoordination_C
// Size: 0x379 (Inherited: 0xd8)
struct UComp_TeamCoordination_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct FVector BombLocation; // 0xe0(0x18)
	struct APlantedBomb_C* PlantedBomb; // 0xf8(0x08)
	struct TArray<struct ABombDestination_C*> BombDestinations; // 0x100(0x10)
	struct TArray<struct ASpawnBarrier_C*> AlliedSpawnBarriers; // 0x110(0x10)
	struct ABombGameMode_C* BombGameMode; // 0x120(0x08)
	struct FVector AverageSpawnLocation; // 0x128(0x18)
	struct TArray<struct FBombSiteCoordinationInfo> BombSiteCoordinationInfo; // 0x140(0x10)
	struct TMap<struct AShooterPlayerState*, struct FVector> PointProtectionAssignments; // 0x150(0x50)
	struct TMap<struct AShooterPlayerState*, struct FVector> PointCaptureAssignments; // 0x1a0(0x50)
	struct AShooterPlayerState* BombDefuser; // 0x1f0(0x08)
	enum class BombSiteEnum BombPlantSite; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	struct TArray<struct AShooterPlayerState*> AlliedPlayerStates; // 0x200(0x10)
	bool ShouldTeamSaveThisRound; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	int32_t MoneyToConsiderAbleToFullBuy; // 0x214(0x04)
	double ChanceToForceBuy; // 0x218(0x08)
	double PathfindingThresholdForSpawnBarrierToCountForMultipleSites; // 0x220(0x08)
	double CapturePointSpreadOutRadius; // 0x228(0x08)
	double DefendPointSpreadOutRadius; // 0x230(0x08)
	double CaptureBombSiteSpreadOutRadius; // 0x238(0x08)
	double DefendBombSiteSpreadOutRadius; // 0x240(0x08)
	double DefendPostPlantSpreadOutRadius; // 0x248(0x08)
	double DroppedBombSpreadOutRadius; // 0x250(0x08)
	struct TArray<struct UAresPurchasableEquippable*> TeamIntendedWeaponsThisRound; // 0x258(0x10)
	struct TMap<struct AShooterCharacter*, struct FVector> LastKnownEnemyLocations; // 0x268(0x50)
	struct TMap<struct ABombDestination_C*, double> BombSitePerceivedDanger; // 0x2b8(0x50)
	struct TMap<struct ABombDestination_C*, double> AllyDamageOnBombSite; // 0x308(0x50)
	double DistanceToBombSiteToAssignEnemyToIt; // 0x358(0x08)
	struct FMulticastInlineDelegate OnAllyCharacterDamageTaken; // 0x360(0x10)
	double DistanceToBombSiteToMarkSearched; // 0x370(0x08)
	bool UseFormationAssignment; // 0x378(0x01)

	void OnCharacterChanged_UpdateBinds(struct AShooterCharacter* NewValue, struct AShooterCharacter* PrevValue); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.OnCharacterChanged_UpdateBinds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UnBindDamageTakenEvents(); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.UnBindDamageTakenEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindDamageTakenEvents(); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.BindDamageTakenEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePerceivedDangerOfBombSites(); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.UpdatePerceivedDangerOfBombSites // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateKnownEnemyPositions(); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.UpdateKnownEnemyPositions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool ShouldTeamSave(); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.ShouldTeamSave // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UnassignPlayerFromSpawnBarrier(struct AShooterPlayerState* PlayerState); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.UnassignPlayerFromSpawnBarrier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UnassignPlayerFromBombSite(struct AShooterPlayerState* PlayerState); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.UnassignPlayerFromBombSite // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReassignBotsToNearestSiteAndBarrier(); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.ReassignBotsToNearestSiteAndBarrier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReassignPlayerToNearestSiteToActor(struct AShooterPlayerState* In_PlayerState, struct AActor* In_Actor); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.ReassignPlayerToNearestSiteToActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePointToCapture(); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.UpdatePointToCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePointToProtect(); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.UpdatePointToProtect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Match Spawn Barriers to Nearest Bomb Sites(); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.Match Spawn Barriers to Nearest Bomb Sites // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearBombSiteCoordinationInfo(); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.ClearBombSiteCoordinationInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PopulateInitialBombSiteInfo(); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.PopulateInitialBombSiteInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAverageSpawnLocation(); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.SetAverageSpawnLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsBombSiteRelevant(struct ABombDestination_C* BombDestination, bool& IsRelevant); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.IsBombSiteRelevant // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetPointToCapture(struct AShooterPlayerState* PlayerState, struct FVector& Point); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.GetPointToCapture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetPointToProtect(struct AShooterPlayerState* PlayerState, struct FVector& Point); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.GetPointToProtect // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetMostPopulatedBombSites(int32_t& MostNumPlayersAssignedToASite, struct TArray<int32_t>& MostAssignedBombSiteInfoIndices); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.GetMostPopulatedBombSites // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetLeastPopulatedSpawnBarriers(int32_t BombSiteInfoIndex, int32_t& LeastNumPlayersAssignedToABarrier, struct TArray<struct ASpawnBarrier_C*>& LeastAssignedSpawnBarriers); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.GetLeastPopulatedSpawnBarriers // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetLeastPopulatedBombSites(int32_t& LeastNumPlayersAssignedToASite, struct TArray<int32_t>& LeastAssignedBombSiteInfoIndices); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.GetLeastPopulatedBombSites // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetSpawnBarrierAssignment(struct APlayerState* PlayerState, struct ASpawnBarrier_C*& SpawnBarrier); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.GetSpawnBarrierAssignment // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetBombSiteCoordinationInfoForBombDestination(struct ABombDestination_C* BombDestination, int32_t& BombSiteCoordinationInfoIndex); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.GetBombSiteCoordinationInfoForBombDestination // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetBombSiteCoordinationInfo(struct AShooterPlayerState* PlayerState, int32_t& BombSiteCoordinationInfoIndex); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.GetBombSiteCoordinationInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetTeamComponent(struct UBaseTeamComponent*& TeamComponent); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.GetTeamComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnRoundBegin(int32_t RoundNumberBeginning); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.OnRoundBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveTick(float DeltaSeconds); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerResurrect(struct AShooterPlayerState* ResurrectorPlayerState, struct AShooterPlayerState* ResurrectedPlayerState, int32_t KillNumberInRoundForResurrector, int32_t KillNumberInRoundForResurrected); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.OnPlayerResurrect // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerSpawned(struct APawn* SpawnedPawn); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.OnPlayerSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EnableTickOnlyIfThereAreLivingBotPlayers(); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.EnableTickOnlyIfThereAreLivingBotPlayers // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerKilled(struct AOwnerExclusivePlayerInfo* Killer, struct AOwnerExclusivePlayerInfo* Victim, struct APawn* KilledPawn, struct UDamageResponse* Response, struct TArray<struct FAresAssist>& AssistList, struct UDamageType* DamageType); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.OnPlayerKilled // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBombPlanted(struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.OnBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBombDefuseStart(struct AShooterCharacter* Defuser); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.OnBombDefuseStart // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBombDefuseStop(); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.OnBombDefuseStop // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBombDefuserKilled(struct AShooterCharacter* Defuser); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.OnBombDefuserKilled // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBombDefused(struct AShooterCharacter* DefusingCharacter); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.OnBombDefused // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTakeAnyDamage(struct AActor* DamagedActor, float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.OnTakeAnyDamage // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRoundEnd(int32_t RoundNumberEnded); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.OnRoundEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Comp_TeamCoordination(int32_t EntryPoint); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.ExecuteUbergraph_Comp_TeamCoordination // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnAllyCharacterDamageTaken__DelegateSignature(struct AActor* DamagedActor, double Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function Comp_TeamCoordination.Comp_TeamCoordination_C.OnAllyCharacterDamageTaken__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

