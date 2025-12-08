// BlueprintGeneratedClass BaseGameMode.BaseGameMode_C
// Size: 0xbe9 (Inherited: 0xa90)
struct ABaseGameMode_C : AShooterGameMode {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa90(0x08)
	struct UComp_GameMode_DPTCommandExecution_C* Comp_GameMode_DPTCommandExecution; // 0xa98(0x08)
	struct UComp_GameMode_KillVO_C* Comp_GameMode_KillVO; // 0xaa0(0x08)
	struct UGameStateGameOverComponent_C* GameStateGameOverComponent; // 0xaa8(0x08)
	struct UGameStateSetupComponent_C* GameStateSetupComponent; // 0xab0(0x08)
	struct UGameStateIntroComponent_C* GameStateIntroComponent; // 0xab8(0x08)
	struct UGameStateLoadInComponent_C* GameStateLoadInComponent; // 0xac0(0x08)
	struct UBombTeamComponent* RedBombTeam; // 0xac8(0x08)
	struct UBombTeamComponent* BlueBombTeam; // 0xad0(0x08)
	struct UBaseGameStateComponent* GameStateAwaitingShutdown; // 0xad8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0xae0(0x08)
	struct UAudBaseGameModeVOComponent_C* AudGameModeVOComponentClass; // 0xae8(0x08)
	struct UAudBaseGameModeVOComponent_C* AudGameModeVOComponent; // 0xaf0(0x08)
	struct TArray<struct AShooterPlayerState*> PlayersToSpawn; // 0xaf8(0x10)
	struct TArray<double> PlayerSpawnTimes; // 0xb08(0x10)
	double RespawnDelay; // 0xb18(0x08)
	struct USpawnPointPlayerSpawner* SpawnPointSpawn; // 0xb20(0x08)
	double CorpseLifetime; // 0xb28(0x08)
	struct TArray<struct AGameObject*> Domes; // 0xb30(0x10)
	struct TArray<struct AGameObject*> SoundBarriers; // 0xb40(0x10)
	struct TArray<struct AGameObject*> BarrierVFX; // 0xb50(0x10)
	struct FMulticastInlineDelegate OnLevelStreamingComplete; // 0xb60(0x10)
	struct TSet<struct AShooterPlayerState*> SuccessfullySpawnedPlayers; // 0xb70(0x50)
	enum class EMatchCompletionState MatchCompletionState; // 0xbc0(0x01)
	bool IsGameEnding; // 0xbc1(0x01)
	char pad_BC2[0x6]; // 0xbc2(0x06)
	struct UBaseTeamComponent* WinningTeam; // 0xbc8(0x08)
	bool bPlayCharDeathmatchWinVO; // 0xbd0(0x01)
	bool bIsNPE; // 0xbd1(0x01)
	bool bAllowAbilitySharing; // 0xbd2(0x01)
	char pad_BD3[0x5]; // 0xbd3(0x05)
	struct FMulticastInlineDelegate AuthWinRoundEvent2; // 0xbd8(0x10)
	bool FirstTimeRunningWinGameCheat; // 0xbe8(0x01)

	void InitializeLoadInStateLength(); // Function BaseGameMode.BaseGameMode_C.InitializeLoadInStateLength // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetLastInRoundGameState(struct UTimeGameStateComponent*& LastInRoundGameState); // Function BaseGameMode.BaseGameMode_C.GetLastInRoundGameState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldSpawnPlayer(struct AShooterPlayerState* Player, bool& ShouldSpawn); // Function BaseGameMode.BaseGameMode_C.ShouldSpawnPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void BombDropped(struct AShooterCharacter* CharacterThatDroppedBomb); // Function BaseGameMode.BaseGameMode_C.BombDropped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetGameStatePostRound(struct UTimeGameStateComponent*& GameStatePostRound); // Function BaseGameMode.BaseGameMode_C.GetGameStatePostRound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetPreviousRoundWinner(struct UBaseTeamComponent*& WinningTeam); // Function BaseGameMode.BaseGameMode_C.GetPreviousRoundWinner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void StopScoreboardUpdating(); // Function BaseGameMode.BaseGameMode_C.StopScoreboardUpdating // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldPlayBombDroppedVO(bool& ShouldPlay); // Function BaseGameMode.BaseGameMode_C.ShouldPlayBombDroppedVO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FinalizeEndOfGame(); // Function BaseGameMode.BaseGameMode_C.FinalizeEndOfGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitiateEndOfGame(struct UBaseTeamComponent* WinningTeam, enum class EMatchCompletionState CompletionState); // Function BaseGameMode.BaseGameMode_C.InitiateEndOfGame // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetAllPlayers(); // Function BaseGameMode.BaseGameMode_C.ResetAllPlayers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EndOfMatchSlowTime(); // Function BaseGameMode.BaseGameMode_C.EndOfMatchSlowTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ForceGameOverState(); // Function BaseGameMode.BaseGameMode_C.ForceGameOverState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CleanDomes(); // Function BaseGameMode.BaseGameMode_C.CleanDomes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SpawnDomes(); // Function BaseGameMode.BaseGameMode_C.SpawnDomes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecutePlayerSpawns(bool& Finished); // Function BaseGameMode.BaseGameMode_C.ExecutePlayerSpawns // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupPlayerSpawns(bool ShouldAddSpawnDelay, bool RespawnSuccessfullySpawnedPlayers); // Function BaseGameMode.BaseGameMode_C.SetupPlayerSpawns // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AudSetupComponents(); // Function BaseGameMode.BaseGameMode_C.AudSetupComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function BaseGameMode.BaseGameMode_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void DrawGameEvent(); // Function BaseGameMode.BaseGameMode_C.DrawGameEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemakeGameEvent(); // Function BaseGameMode.BaseGameMode_C.RemakeGameEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void WinGameEvent(struct UBaseTeamComponent* Team); // Function BaseGameMode.BaseGameMode_C.WinGameEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheatWinGame(struct UBaseTeamComponent* WinningTeam); // Function BaseGameMode.BaseGameMode_C.CheatWinGame // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__GameStateSetupComponent_K2Node_ComponentBoundEvent_0_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BaseGameMode.BaseGameMode_C.BndEvt__GameStateSetupComponent_K2Node_ComponentBoundEvent_0_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void CheatAdvanceToRoundStarting(); // Function BaseGameMode.BaseGameMode_C.CheatAdvanceToRoundStarting // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void WinCheatInternal(struct UBaseTeamComponent* WinningTeam); // Function BaseGameMode.BaseGameMode_C.WinCheatInternal // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthHandlePlayerDisassociated(struct AShooterPlayerState* PlayerState); // Function BaseGameMode.BaseGameMode_C.AuthHandlePlayerDisassociated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_BaseGameMode(int32_t EntryPoint); // Function BaseGameMode.BaseGameMode_C.ExecuteUbergraph_BaseGameMode // (Final|UbergraphFunction) // @ game+0x19be2f0
	void AuthWinRoundEvent2__DelegateSignature(struct UBaseTeamComponent* Winning Team); // Function BaseGameMode.BaseGameMode_C.AuthWinRoundEvent2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLevelStreamingComplete__DelegateSignature(); // Function BaseGameMode.BaseGameMode_C.OnLevelStreamingComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

