// BlueprintGeneratedClass BombGameMode.BombGameMode_C
// Size: 0x10a8 (Inherited: 0xbe9)
struct ABombGameMode_C : ABaseGameMode_C {
	char pad_BE9[0x7]; // 0xbe9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xbf0(0x08)
	struct UComp_GameMode_DelayableFinishers_C* Comp_GameMode_DelayableFinishers; // 0xbf8(0x08)
	struct UTimeGameStateComponent* GameStateTimeoutCountdown; // 0xc00(0x08)
	struct UComp_Actor_MultiTargetHandler_Buff_C* Comp_Actor_MultiTargetHandler_Buff_TimeoutFreeze; // 0xc08(0x08)
	struct UBaseGameStateComponent* GameStateTimeoutQueued; // 0xc10(0x08)
	struct UTimeGameStateComponent* GameStateTimeout; // 0xc18(0x08)
	struct UBaseGameStateComponent* GameStateTimeoutInactive; // 0xc20(0x08)
	struct UStateMachineComponent* TimeoutStateMachine; // 0xc28(0x08)
	struct UComp_MatchResults_StayedInSpawn_C* Comp_MatchResults_StayedInSpawn; // 0xc30(0x08)
	struct UComp_BombRoundStateLog_C* Comp_BombRoundStateLog; // 0xc38(0x08)
	struct UGameStateVoteComponent_C* GameStateVoteComponent; // 0xc40(0x08)
	struct UComp_GameMode_OvertimeDrawVotes_C* Comp_GameMode_OvertimeDrawVotes; // 0xc48(0x08)
	struct UComp_GameMode_GrantPurchasables_C* Comp_GameMode_GrantPurchasables; // 0xc50(0x08)
	struct UComp_MatchResults_RoundCeremony_C* Comp_MatchResults_RoundCeremony; // 0xc58(0x08)
	struct UComp_MatchResults_PlayerScores_C* Comp_MatchResults_PlayerScores; // 0xc60(0x08)
	struct UComp_MatchResults_Penalites_C* Comp_MatchResults_Penalites; // 0xc68(0x08)
	struct UComp_MatchResults_Kill_C* Comp_MatchResults_Kill; // 0xc70(0x08)
	struct UComp_MatchResults_Economy_C* Comp_MatchResults_Economy; // 0xc78(0x08)
	struct UComp_MatchResults_Damage_C* Comp_MatchResults_Damage; // 0xc80(0x08)
	struct UComp_MatchResults_Bomb_C* Comp_MatchResults_Bomb; // 0xc88(0x08)
	struct UComp_MatchResults_Abilities_C* Comp_MatchResults_Abilities; // 0xc90(0x08)
	struct UTimeGameStateComponent* GameStateBuyPhase; // 0xc98(0x08)
	struct UTimeGameStateComponent* GameStateBombPlanted; // 0xca0(0x08)
	struct UBaseGameStateComponent* GameStateTeamSwitch; // 0xca8(0x08)
	struct UTimeGameStateComponent* GameStatePostRound; // 0xcb0(0x08)
	struct UTimeGameStateComponent* GameStateRound; // 0xcb8(0x08)
	struct FTransform BombSpawnTransform; // 0xcc0(0x60)
	struct APlantedBomb_C* BombPlantedObject; // 0xd20(0x08)
	double MatchTimerWarning; // 0xd28(0x08)
	bool HasPlayedMatchTimerWarning; // 0xd30(0x01)
	char pad_D31[0x7]; // 0xd31(0x07)
	double BombPlantedMatchTimerWarning; // 0xd38(0x08)
	struct FAresGameRewardMultiplier BombPlantTeamMateMultiplier; // 0xd40(0x24)
	int32_t WinSpread; // 0xd64(0x04)
	int32_t WinningDirection; // 0xd68(0x04)
	char pad_D6C[0x4]; // 0xd6c(0x04)
	struct TArray<double> CloseLossBonuses; // 0xd70(0x10)
	struct UBaseTeamComponent* L_LosingTeam; // 0xd80(0x08)
	double EscalatingMoney; // 0xd88(0x08)
	double PerRoundEscalationMoney; // 0xd90(0x08)
	struct FName L_RewardName; // 0xd98(0x0c)
	char pad_DA4[0x4]; // 0xda4(0x04)
	double PerRoundEscalationEnergy; // 0xda8(0x08)
	double EscalatingEnergy; // 0xdb0(0x08)
	int32_t EscalatingWinEnergy; // 0xdb8(0x04)
	int32_t PerRoundWinEnergyEscalation; // 0xdbc(0x04)
	int32_t StartingEnergy; // 0xdc0(0x04)
	char pad_DC4[0x4]; // 0xdc4(0x04)
	struct TArray<struct FRoundEndRewards> RoundEndRewards; // 0xdc8(0x10)
	double KillMoneyEscalation; // 0xdd8(0x08)
	struct AActor* SensorTowerMarker; // 0xde0(0x08)
	int32_t UltimatePointsGrantedOnKill; // 0xde8(0x04)
	char pad_DEC[0x4]; // 0xdec(0x04)
	struct TArray<struct AOwnerExclusivePlayerInfo*> RedPlayersWhoGotUltimate; // 0xdf0(0x10)
	struct TArray<struct AOwnerExclusivePlayerInfo*> BluePlayersWhoGotUltimate; // 0xe00(0x10)
	int32_t UltimatePointsGrantedOnDeath; // 0xe10(0x04)
	int32_t DeadWinners; // 0xe14(0x04)
	int32_t CloseLossKillBonus; // 0xe18(0x04)
	char pad_E1C[0x4]; // 0xe1c(0x04)
	struct TArray<struct FInsuranceRewards> InsuranceRewards; // 0xe20(0x10)
	struct FString Close Loss Reward Name; // 0xe30(0x10)
	int32_t ComputedUltimatePointsForKill; // 0xe40(0x04)
	char pad_E44[0x4]; // 0xe44(0x04)
	struct ABombDetonationActor_C* BombDetonationActor; // 0xe48(0x08)
	struct FMulticastInlineDelegate OnDefendersWipe; // 0xe50(0x10)
	struct FMulticastInlineDelegate OnAttackersWipe; // 0xe60(0x10)
	struct UAudBombGameModeVOComponent_C* AudBombGameModeVOComponent; // 0xe70(0x08)
	double InitialEquippableCooldownOnRoundStart; // 0xe78(0x08)
	int32_t BombPlanterUltimatePointReward; // 0xe80(0x04)
	int32_t BombDefuserUltimatePointReward; // 0xe84(0x04)
	struct FMulticastInlineDelegate AuthSideSwitchEvent; // 0xe88(0x10)
	double New Time Out Time; // 0xe98(0x08)
	bool IsFirstRoundOnSide; // 0xea0(0x01)
	bool IsGameserverLoggingEnabled; // 0xea1(0x01)
	char pad_EA2[0x6]; // 0xea2(0x06)
	struct UBaseAudioComponent_C* Aud_BombGameMode; // 0xea8(0x08)
	struct TArray<struct AGameObject*> BuyDomes; // 0xeb0(0x10)
	struct ABaseCeremony_C* AceCeremony; // 0xec0(0x08)
	struct TSoftClassPtr<UObject> BasePistolClass; // 0xec8(0x30)
	struct TArray<struct AAresItem*> DroppedBasePistols; // 0xef8(0x10)
	int32_t MaxOnGroundBasePistols; // 0xf08(0x04)
	char pad_F0C[0x4]; // 0xf0c(0x04)
	struct FClassInclusionExclusionFilter DeletableOnGroundEquippable; // 0xf10(0x50)
	struct FMulticastInlineDelegate BuyPhaseStarted; // 0xf60(0x10)
	char DefaultTickRate; // 0xf70(0x01)
	char PreRoundTickRate; // 0xf71(0x01)
	bool IsRedTeamAllAFK; // 0xf72(0x01)
	bool IsBlueTeamAllAFK; // 0xf73(0x01)
	char pad_F74[0x4]; // 0xf74(0x04)
	struct TArray<struct AShooterPlayerState*> LightArmorGrantsForDisconnects; // 0xf78(0x10)
	struct TMap<struct UBaseTeamComponent*, int32_t> UltOrbGrantsForDisconnects; // 0xf88(0x50)
	bool HasPendingDisconnectGrants; // 0xfd8(0x01)
	bool BombPlantPhaseStarted; // 0xfd9(0x01)
	bool IsStoreEnabled; // 0xfda(0x01)
	bool ShouldSpawnBomb; // 0xfdb(0x01)
	bool ShouldTrackPistolDropsForDeletion; // 0xfdc(0x01)
	char pad_FDD[0x3]; // 0xfdd(0x03)
	double MatchTimeoutQueued; // 0xfe0(0x08)
	struct UBaseTeamComponent* LastRoundWinningTeam; // 0xfe8(0x08)
	struct ABombEquippable_C* BombEquippableActor; // 0xff0(0x08)
	struct FMulticastInlineDelegate InitializeTimeoutStateMachine; // 0xff8(0x10)
	struct FMulticastInlineDelegate QueueTimeout; // 0x1008(0x10)
	struct AShooterPlayerState* MatchTimeoutCallingPlayer; // 0x1018(0x08)
	struct FMulticastInlineDelegate CancelTimeout; // 0x1020(0x10)
	bool MatchTimeoutWasStoreEnabled; // 0x1030(0x01)
	bool NewVar_1; // 0x1031(0x01)
	bool SwitchingSide_VO; // 0x1032(0x01)
	bool MatchPoint_VO; // 0x1033(0x01)
	char pad_1034[0x4]; // 0x1034(0x04)
	struct FTimerHandle OvertimeCheatTimerHandle; // 0x1038(0x08)
	struct FTimerHandle AdvanceNumRoundsCheatTimerHandle; // 0x1040(0x08)
	int32_t AdvanceNumRoundsCheatTotalStartPoints; // 0x1048(0x04)
	bool DisableVandalRound2; // 0x104c(0x01)
	char pad_104D[0x3]; // 0x104d(0x03)
	struct TArray<struct TSoftClassPtr<UObject>> AllowedWeapons; // 0x1050(0x10)
	struct FMulticastInlineDelegate OnPostRoundEnded; // 0x1060(0x10)
	struct FMulticastInlineDelegate OnPostRoundPreExit; // 0x1070(0x10)
	struct UInteractableUserComponent* FurthestProgressCharacter; // 0x1080(0x08)
	struct FName RoundWinReasonAttacker; // 0x1088(0x0c)
	struct FName RoundWinReasonDefender; // 0x1094(0x0c)
	double MinTimeRemainingForDisplayOnDefuse; // 0x10a0(0x08)

	void Clean Up Round(enum class EAresRoundOutcome RoundResult, struct UBaseTeamComponent* WinningTeam, struct FName Reason); // Function BombGameMode.BombGameMode_C.Clean Up Round // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Bomb Defused Round Cleanup(struct AShooterCharacter* DefusingCharacter, bool& BombStateSet); // Function BombGameMode.BombGameMode_C.Bomb Defused Round Cleanup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool Did Bomb Defuser Die(); // Function BombGameMode.BombGameMode_C.Did Bomb Defuser Die // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheatAdvanceRoundsEnd(struct FTimerHandle TickTimerToInvalidate); // Function BombGameMode.BombGameMode_C.CheatAdvanceRoundsEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheatAdvanceRoundsTick(); // Function BombGameMode.BombGameMode_C.CheatAdvanceRoundsTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePostRoundEnded(); // Function BombGameMode.BombGameMode_C.HandlePostRoundEnded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct AActor* CheatGetGameModeItem(); // Function BombGameMode.BombGameMode_C.CheatGetGameModeItem // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Player Spawned Any Phase(struct APawn* SpawnedPawn); // Function BombGameMode.BombGameMode_C.On Player Spawned Any Phase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthHandlePlayerKilled(struct AOwnerExclusivePlayerInfo* Killer, struct AOwnerExclusivePlayerInfo* Victim, struct APawn* KilledPawn, struct UDamageResponse* Response, struct TArray<struct FAresAssist>& AssistList, struct UDamageType* DamageType); // Function BombGameMode.BombGameMode_C.AuthHandlePlayerKilled // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToShooterCharacterPreventTeamWipeAttribute(struct AShooterCharacter* ShooterCharacter); // Function BombGameMode.BombGameMode_C.BindToShooterCharacterPreventTeamWipeAttribute // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPreventTeamWipeAttributeChanged(struct UAresAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute& Attribute, float OldValue, float NewValue); // Function BombGameMode.BombGameMode_C.OnPreventTeamWipeAttributeChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheckTeamsForAllDead(bool bCheckPreventionAttribute, bool& IsATeamWiped); // Function BombGameMode.BombGameMode_C.CheckTeamsForAllDead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsWeaponAllowedInGameMode(struct UAresPurchasable* Weapon, bool& IsAllowed); // Function BombGameMode.BombGameMode_C.IsWeaponAllowedInGameMode // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BombDropped(struct AShooterCharacter* CharacterThatDroppedBomb); // Function BombGameMode.BombGameMode_C.BombDropped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetGameStatePostRound(struct UTimeGameStateComponent*& GameStatePostRound); // Function BombGameMode.BombGameMode_C.GetGameStatePostRound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void AuthCancelMatchTimeout(); // Function BombGameMode.BombGameMode_C.AuthCancelMatchTimeout // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetPreviousRoundWinner(struct UBaseTeamComponent*& WinningTeam); // Function BombGameMode.BombGameMode_C.GetPreviousRoundWinner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void GetBombGameState(struct ABombGameState_C*& BombGameState); // Function BombGameMode.BombGameMode_C.GetBombGameState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ShouldPlayBombDroppedVO(bool& ShouldPlay); // Function BombGameMode.BombGameMode_C.ShouldPlayBombDroppedVO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool AuthStartMatchTimeout(float Duration, struct AShooterPlayerState* CallingPlayer); // Function BombGameMode.BombGameMode_C.AuthStartMatchTimeout // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerMatchPointVOIfNeeded(); // Function BombGameMode.BombGameMode_C.TriggerMatchPointVOIfNeeded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyDeathUltimatePoints(struct AShooterCharacter* Character, bool IsDelayed); // Function BombGameMode.BombGameMode_C.ApplyDeathUltimatePoints // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GrantDeathUltimatePoints(struct AOwnerExclusivePlayerInfo* KillerInfo, struct AOwnerExclusivePlayerInfo* VictimInfo, struct UObject* VictimPawn); // Function BombGameMode.BombGameMode_C.GrantDeathUltimatePoints // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsNonBotTeam(struct TArray<struct AShooterPlayerState*>& ShooterPlayerStates, bool& output); // Function BombGameMode.BombGameMode_C.IsNonBotTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GrantStartOfRoundCompensationForDisconnects(); // Function BombGameMode.BombGameMode_C.GrantStartOfRoundCompensationForDisconnects // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheckAFKPlayersAndEndEarly(); // Function BombGameMode.BombGameMode_C.CheckAFKPlayersAndEndEarly // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RedistributeDisconnectedMoneyForTeam(struct UBaseTeamComponent* Team); // Function BombGameMode.BombGameMode_C.RedistributeDisconnectedMoneyForTeam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Up Defuser Equippable(); // Function BombGameMode.BombGameMode_C.Set Up Defuser Equippable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PerformEconomyReset(); // Function BombGameMode.BombGameMode_C.PerformEconomyReset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetPlayerResources(struct AOwnerExclusivePlayerInfo* PlayerInfo); // Function BombGameMode.BombGameMode_C.ResetPlayerResources // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveDamagedArmor(); // Function BombGameMode.BombGameMode_C.RemoveDamagedArmor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveWeaponsLoweredBuff(); // Function BombGameMode.BombGameMode_C.RemoveWeaponsLoweredBuff // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyWeaponsLoweredBuff(); // Function BombGameMode.BombGameMode_C.ApplyWeaponsLoweredBuff // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CleanBuyDomes(); // Function BombGameMode.BombGameMode_C.CleanBuyDomes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SpawnBuyDomes(); // Function BombGameMode.BombGameMode_C.SpawnBuyDomes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetRoundEndReason(enum class EBombRoundEndReason& BombRoundEndReason); // Function BombGameMode.BombGameMode_C.GetRoundEndReason // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetGameModeVOState(struct FString& RedTeamState_RoundStart, struct FString& BlueTeamState_RoundStart, struct FString& RedTeamState_BubbleDown, struct FString& BlueTeamState_BubbleDown, struct FString& RedTeamState_BubbleDown_New, struct FString& BlueTeamState_BubbleDown_New, struct TArray<struct FAkSwitch>& Attacker Bubble Down Ak Switches, struct TArray<struct FAkSwitch>& Defender BubbleDown Ak Switches); // Function BombGameMode.BombGameMode_C.GetGameModeVOState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	bool CanPlayOnKillEffects(struct AShooterCharacter* Victim); // Function BombGameMode.BombGameMode_C.CanPlayOnKillEffects // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	void GameserverLogMessage(struct FString Log String); // Function BombGameMode.BombGameMode_C.GameserverLogMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTimeUntilPlantedBombExplodes(double TimeToExplode); // Function BombGameMode.BombGameMode_C.SetTimeUntilPlantedBombExplodes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AdjustScoreKillStreak(struct AOwnerExclusivePlayerInfo* Killer); // Function BombGameMode.BombGameMode_C.AdjustScoreKillStreak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AdjustScoreForPlant(struct AShooterCharacter* Planting Character); // Function BombGameMode.BombGameMode_C.AdjustScoreForPlant // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool IsSpawnpointValid(struct AShooterTeamStart* SpawnPoint, struct AShooterPlayerState* PlayerState); // Function BombGameMode.BombGameMode_C.IsSpawnpointValid // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	void ConsumeUltimatePointsForAllPlayers(); // Function BombGameMode.BombGameMode_C.ConsumeUltimatePointsForAllPlayers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GrantBombPlantReward(struct AShooterCharacter* Planting Character, enum class BombSiteEnum BombSite); // Function BombGameMode.BombGameMode_C.GrantBombPlantReward // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlaySideSwitchTransition(); // Function BombGameMode.BombGameMode_C.PlaySideSwitchTransition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthApplyMoveToGameObject(struct FVector EndPoint, double Time); // Function BombGameMode.BombGameMode_C.AuthApplyMoveToGameObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBuyPhaseStarted(); // Function BombGameMode.BombGameMode_C.OnBuyPhaseStarted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSideSwitch(); // Function BombGameMode.BombGameMode_C.OnSideSwitch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleWinningTeamRewards(struct UBaseTeamComponent* WinningTeam); // Function BombGameMode.BombGameMode_C.HandleWinningTeamRewards // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePerRoundEscalatingRewards(); // Function BombGameMode.BombGameMode_C.UpdatePerRoundEscalatingRewards // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleLosingTeamRewards(struct UBaseTeamComponent* LosingTeam); // Function BombGameMode.BombGameMode_C.HandleLosingTeamRewards // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BombExplode_ShooterCharacters(); // Function BombGameMode.BombGameMode_C.BombExplode_ShooterCharacters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GrantCloseLossBonus(struct UBaseTeamComponent* WinningTeam); // Function BombGameMode.BombGameMode_C.GrantCloseLossBonus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BombExplode_WorldDynamic(); // Function BombGameMode.BombGameMode_C.BombExplode_WorldDynamic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BombExplode_WorldStatic(); // Function BombGameMode.BombGameMode_C.BombExplode_WorldStatic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GiveUltimatePointsToLoser(struct UBaseTeamComponent* Losing Team); // Function BombGameMode.BombGameMode_C.GiveUltimatePointsToLoser // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheatAutoHeal(struct AShooterPlayerController* ExecutingController); // Function BombGameMode.BombGameMode_C.CheatAutoHeal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetBombState(enum class EAresBombStates& CurrentState); // Function BombGameMode.BombGameMode_C.GetBombState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthBombDefused(struct AShooterCharacter* Defuser); // Function BombGameMode.BombGameMode_C.AuthBombDefused // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBombExploded(struct ABombDetonationActor_C* Detonation); // Function BombGameMode.BombGameMode_C.OnBombExploded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BombPlanted(struct AShooterCharacter* PlantingCharacter, enum class BombSiteEnum Site, struct APlantedBomb_C* PlantedBomb); // Function BombGameMode.BombGameMode_C.BombPlanted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BombPickedUp(struct AShooterCharacter* PickupCharacter); // Function BombGameMode.BombGameMode_C.BombPickedUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBombState(enum class EAresBombStates NewBombState); // Function BombGameMode.BombGameMode_C.SetBombState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RoundTeardown(); // Function BombGameMode.BombGameMode_C.RoundTeardown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RoundSetup(); // Function BombGameMode.BombGameMode_C.RoundSetup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeTimeoutStateMachine_Event(); // Function BombGameMode.BombGameMode_C.InitializeTimeoutStateMachine_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__GameStateTimeoutQueued_K2Node_ComponentBoundEvent_0_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateTimeoutQueued_K2Node_ComponentBoundEvent_0_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void TransitionToTimeout(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.TransitionToTimeout // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__GameStateTimeoutQueued_K2Node_ComponentBoundEvent_1_OnGameStateExitSignature__DelegateSignature(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateTimeoutQueued_K2Node_ComponentBoundEvent_1_OnGameStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__GameStateTimeout_K2Node_ComponentBoundEvent_2_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateTimeout_K2Node_ComponentBoundEvent_2_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__GameStateTimeout_K2Node_ComponentBoundEvent_3_OnGameStateExitSignature__DelegateSignature(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateTimeout_K2Node_ComponentBoundEvent_3_OnGameStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void QueueTimeout_Event(double Duration); // Function BombGameMode.BombGameMode_C.QueueTimeout_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Exit Timeout State(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.Exit Timeout State // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CancelTimeout_Event(); // Function BombGameMode.BombGameMode_C.CancelTimeout_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__GameStateTimeoutCountdown_K2Node_ComponentBoundEvent_4_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateTimeoutCountdown_K2Node_ComponentBoundEvent_4_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Play Three Second Countdown Events(); // Function BombGameMode.BombGameMode_C.Play Three Second Countdown Events // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function BombGameMode.BombGameMode_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnGameRestart_Event_1(struct UBaseGameStateComponent* CurrentState); // Function BombGameMode.BombGameMode_C.OnGameRestart_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDefendersWipe_GameStateRound(); // Function BombGameMode.BombGameMode_C.OnDefendersWipe_GameStateRound // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAttackersWipe_GameStateRound(); // Function BombGameMode.BombGameMode_C.OnAttackersWipe_GameStateRound // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTimeout_GameStateRound(); // Function BombGameMode.BombGameMode_C.OnTimeout_GameStateRound // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TurnOffBuying(); // Function BombGameMode.BombGameMode_C.TurnOffBuying // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GoingToPreGame(); // Function BombGameMode.BombGameMode_C.GoingToPreGame // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAuthTookDamage_GameStateRound(struct AShooterCharacter* VictimCharacter, struct AController* DamageInstigator, struct AActor* DamagCauser, float Damage); // Function BombGameMode.BombGameMode_C.OnAuthTookDamage_GameStateRound // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDefendersWipe_GameStateBombPlanted(); // Function BombGameMode.BombGameMode_C.OnDefendersWipe_GameStateBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTimeout_GameStateBombPlanted(); // Function BombGameMode.BombGameMode_C.OnTimeout_GameStateBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePlayerSpawnInRound(struct APawn* SpawnedPawn); // Function BombGameMode.BombGameMode_C.HandlePlayerSpawnInRound // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDamageSectionDestroyed(struct UDamageableComponent* DamageHandler, struct UDamageSectionComponent* Section, struct UDamageType* DamageTypeClass, struct AController* Instigator, struct AActor* DamageCauser); // Function BombGameMode.BombGameMode_C.OnDamageSectionDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FiveSecondsBeforeSetupEnds(); // Function BombGameMode.BombGameMode_C.FiveSecondsBeforeSetupEnds // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStateEnter (GameStateBuyPhase)(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateEnter (GameStateBuyPhase) // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStateEnter (GameStateRound)(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateEnter (GameStateRound) // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStateExit (GameStateRound)(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateExit (GameStateRound) // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStateEnter (GameStatePostRound)(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateEnter (GameStatePostRound) // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStateExit (GameStatePostRound)(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateExit (GameStatePostRound) // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStateEnter (GameStateTeamSwitch)(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateEnter (GameStateTeamSwitch) // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStateExit (GameStateTeamSwitch)(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateExit (GameStateTeamSwitch) // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStateEnter (GameStateBombPlanted)(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateEnter (GameStateBombPlanted) // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStateExit (GameStateBombPlanted)(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateExit (GameStateBombPlanted) // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStateTick (GameStateBuyPhase)(struct UBaseGameStateComponent* State, float DeltaTimeSeconds); // Function BombGameMode.BombGameMode_C.OnStateTick (GameStateBuyPhase) // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStateExit (GameStateBuyPhase)(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateExit (GameStateBuyPhase) // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ThreeSecCountdownEvent(); // Function BombGameMode.BombGameMode_C.ThreeSecCountdownEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStateTick (GameStateRound)(struct UBaseGameStateComponent* State, float DeltaTimeSeconds); // Function BombGameMode.BombGameMode_C.OnStateTick (GameStateRound) // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBombPlanted(struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function BombGameMode.BombGameMode_C.OnBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBombDefused_GameStateBombPlanted(struct AShooterCharacter* DefusingCharacter); // Function BombGameMode.BombGameMode_C.OnBombDefused_GameStateBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearWinEvents(); // Function BombGameMode.BombGameMode_C.ClearWinEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleAwayPenaltiesAndEndRound(bool PersistDuringReset); // Function BombGameMode.BombGameMode_C.HandleAwayPenaltiesAndEndRound // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FinalizeEndOfGame(); // Function BombGameMode.BombGameMode_C.FinalizeEndOfGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__GameStateLoadInComponent_K2Node_ComponentBoundEvent_2_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateLoadInComponent_K2Node_ComponentBoundEvent_2_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__GameStateGameOverComponent_K2Node_ComponentBoundEvent_0_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateGameOverComponent_K2Node_ComponentBoundEvent_0_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__GameStateSetupComponent_K2Node_ComponentBoundEvent_3_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateSetupComponent_K2Node_ComponentBoundEvent_3_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__GameStateIntroComponent_K2Node_ComponentBoundEvent_8_OnGameStateExitSignature__DelegateSignature(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateIntroComponent_K2Node_ComponentBoundEvent_8_OnGameStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerSpawned (BuyPhase)(struct APawn* SpawnedPawn); // Function BombGameMode.BombGameMode_C.OnPlayerSpawned (BuyPhase) // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ModifyRewards(); // Function BombGameMode.BombGameMode_C.ModifyRewards // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__GameStateLoadInComponent_K2Node_ComponentBoundEvent_4_OnGameStateExitSignature__DelegateSignature(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateLoadInComponent_K2Node_ComponentBoundEvent_4_OnGameStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void CheatAdvanceToOvertime(); // Function BombGameMode.BombGameMode_C.CheatAdvanceToOvertime // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AdvanceToOvertimeTick(); // Function BombGameMode.BombGameMode_C.AdvanceToOvertimeTick // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheatAdvanceNumRounds(int32_t NumRounds); // Function BombGameMode.BombGameMode_C.CheatAdvanceNumRounds // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AdvanceNumRoundsTick(); // Function BombGameMode.BombGameMode_C.AdvanceNumRoundsTick // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreGameStatePostRoundExit(); // Function BombGameMode.BombGameMode_C.PreGameStatePostRoundExit // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__BombGameMode_VoteManagerComponent_K2Node_ComponentBoundEvent_5_OnVoteManagerRoundStarting__DelegateSignature(); // Function BombGameMode.BombGameMode_C.BndEvt__BombGameMode_VoteManagerComponent_K2Node_ComponentBoundEvent_5_OnVoteManagerRoundStarting__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnAuthWinRound(struct UBaseTeamComponent* WinningTeam); // Function BombGameMode.BombGameMode_C.OnAuthWinRound // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BroadcastErrorMessage(struct FString ErrorMessage); // Function BombGameMode.BombGameMode_C.BroadcastErrorMessage // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AudSetupComponents(); // Function BombGameMode.BombGameMode_C.AudSetupComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMatchTimerWarning(); // Function BombGameMode.BombGameMode_C.OnMatchTimerWarning // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BeginTrackingPistolDrops(); // Function BombGameMode.BombGameMode_C.BeginTrackingPistolDrops // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EndTrackingPistolDrops(); // Function BombGameMode.BombGameMode_C.EndTrackingPistolDrops // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthOnInventoryTransaction_Event_1(enum class EInventoryTransaction Transaction, struct UAresInventory* Inventory, struct AAresItem* Item); // Function BombGameMode.BombGameMode_C.AuthOnInventoryTransaction_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RedistributeDisconnectedPlayerMoney(); // Function BombGameMode.BombGameMode_C.RedistributeDisconnectedPlayerMoney // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Aud On Bomb Carrier Killed(struct AShooterCharacter* OldCarrier); // Function BombGameMode.BombGameMode_C.Aud On Bomb Carrier Killed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheatSetLossStreakSettings(int32_t Loss Streak Multiplier, int32_t Loss Streak Max); // Function BombGameMode.BombGameMode_C.CheatSetLossStreakSettings // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheatSetGameReward(struct FName RewardName, int32_t Money); // Function BombGameMode.BombGameMode_C.CheatSetGameReward // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheatSetPlantReward(int32_t Money); // Function BombGameMode.BombGameMode_C.CheatSetPlantReward // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GrantDelayedUltPointDeathReward(struct AShooterCharacter* Character); // Function BombGameMode.BombGameMode_C.GrantDelayedUltPointDeathReward // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_BombGameMode(int32_t EntryPoint); // Function BombGameMode.BombGameMode_C.ExecuteUbergraph_BombGameMode // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnPostRoundPreExit__DelegateSignature(); // Function BombGameMode.BombGameMode_C.OnPostRoundPreExit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPostRoundEnded__DelegateSignature(); // Function BombGameMode.BombGameMode_C.OnPostRoundEnded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CancelTimeout__DelegateSignature(); // Function BombGameMode.BombGameMode_C.CancelTimeout__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void QueueTimeout__DelegateSignature(); // Function BombGameMode.BombGameMode_C.QueueTimeout__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeTimeoutStateMachine__DelegateSignature(); // Function BombGameMode.BombGameMode_C.InitializeTimeoutStateMachine__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BuyPhaseStarted__DelegateSignature(); // Function BombGameMode.BombGameMode_C.BuyPhaseStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthSideSwitchEvent__DelegateSignature(); // Function BombGameMode.BombGameMode_C.AuthSideSwitchEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAttackersWipe__DelegateSignature(); // Function BombGameMode.BombGameMode_C.OnAttackersWipe__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDefendersWipe__DelegateSignature(); // Function BombGameMode.BombGameMode_C.OnDefendersWipe__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

