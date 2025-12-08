// WidgetBlueprintGeneratedClass ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C
// Size: 0x748 (Inherited: 0x540)
struct UScoreboardContentWidgetBase_C : UScoreboardContentWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x548(0x08)
	struct TArray<struct UCoordinatedHUDElement*> CoordinatedHUDElement; // 0x550(0x10)
	struct FClassInclusionExclusionFilter PlayerClassFilter; // 0x560(0x50)
	struct TArray<struct UObject*> allyWidgets; // 0x5b0(0x10)
	struct TArray<struct AShooterCharacter*> basePlayerCharacterArray; // 0x5c0(0x10)
	bool hideExtendedInfo; // 0x5d0(0x01)
	char pad_5D1[0x7]; // 0x5d1(0x07)
	struct AShooterCharacter* lastLocalShooterCharacter; // 0x5d8(0x08)
	bool allyCloseToWinning; // 0x5e0(0x01)
	bool enemyCloseToWinning; // 0x5e1(0x01)
	char pad_5E2[0x2]; // 0x5e2(0x02)
	int32_t AllyScoreInteger; // 0x5e4(0x04)
	int32_t EnemyScoreInteger; // 0x5e8(0x04)
	char pad_5EC[0x4]; // 0x5ec(0x04)
	struct FText allyObjectiveText; // 0x5f0(0x18)
	struct FText enemyObjectiveText; // 0x608(0x18)
	struct FKey NewVar_1; // 0x620(0x20)
	struct TArray<struct UUserWidget*> AllyPlayerCardCache; // 0x640(0x10)
	struct TArray<struct UUserWidget*> EnemyPlayerCardCache; // 0x650(0x10)
	struct TArray<struct AShooterPlayerState*> RedPlayerStates; // 0x660(0x10)
	struct TArray<struct AShooterPlayerState*> BluePlayerStates; // 0x670(0x10)
	int32_t NumberOfPlayersPerTeamToPreallocate; // 0x680(0x04)
	char pad_684[0x4]; // 0x684(0x04)
	struct FTimerHandle TimerHandle; // 0x688(0x08)
	int32_t LastUpdatedRoundNumber; // 0x690(0x04)
	int32_t RoundNumber; // 0x694(0x04)
	bool ValidOutput; // 0x698(0x01)
	bool bIsAFK; // 0x699(0x01)
	enum class EAresTeamRole CachedTeamRole; // 0x69a(0x01)
	bool bShouldAutoShow; // 0x69b(0x01)
	bool bIsScoreboardToggled; // 0x69c(0x01)
	bool bIsScoreboardShowing; // 0x69d(0x01)
	char pad_69E[0x2]; // 0x69e(0x02)
	double LastToggleTime; // 0x6a0(0x08)
	double TimeToIgnoreAutoAfterManualToggle; // 0x6a8(0x08)
	bool SidesWereSwitchedSinceLastUpdate; // 0x6b0(0x01)
	char pad_6B1[0x7]; // 0x6b1(0x07)
	struct TSoftClassPtr<UObject> AllyCardClass; // 0x6b8(0x30)
	struct TSoftClassPtr<UObject> EnemyCardClass; // 0x6e8(0x30)
	struct TSoftClassPtr<UObject> FFACardClass; // 0x718(0x30)

	void TryGetEndOfMatchScoreboardInfo(struct AShooterPlayerState* InPlayer, struct FScoreboardPlayerFinalStatsInfo& FinalStats); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.TryGetEndOfMatchScoreboardInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void BindInput(); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.BindInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheckAddWidgetToPlayerScreen(); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.CheckAddWidgetToPlayerScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool HaveSidesSwitchedSinceLastUpdate(); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.HaveSidesSwitchedSinceLastUpdate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void MakePlayerCardsIfNecessary(bool HasPlayerCountChanged); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.MakePlayerCardsIfNecessary // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CacheTeamRole(); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.CacheTeamRole // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HasTeamRoleChanged(bool& HasChanged); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.HasTeamRoleChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	struct TArray<struct AShooterPlayerState*> GetEnemyBoxPlayerStatesForPlayer(); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.GetEnemyBoxPlayerStatesForPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct TArray<struct AShooterPlayerState*> GetAllyBoxPlayerStatesForPlayer(); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.GetAllyBoxPlayerStatesForPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateRoundScore(); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.UpdateRoundScore // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetScoreboardInfoStructFromPlayerState(struct AShooterPlayerState* InPlayer, bool IsNewRound, struct FScoreboardPlayerInfo& OutInfo); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.GetScoreboardInfoStructFromPlayerState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetUpdatedPlayerStructs(bool bIsObserver, bool bIsNewRound, struct TArray<struct FScoreboardPlayerInfo>& AllyStructs, struct TArray<struct FScoreboardPlayerInfo>& EnemyStructs); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.GetUpdatedPlayerStructs // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreAllocatePlayerCards(); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.PreAllocatePlayerCards // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateKeybinds(); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.UpdateKeybinds // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTeamPlayerStatesForObservers(); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.UpdateTeamPlayerStatesForObservers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateEnemyPlayerCard(struct UUserWidget*& PlayerCard); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.CreateEnemyPlayerCard // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetOrCreateEnemyPlayerCard(struct APlayerController* OwningPlayer, struct UUserWidget*& PlayerCard); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.GetOrCreateEnemyPlayerCard // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateAllyPlayerCard(struct UUserWidget*& PlayerCard); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.CreateAllyPlayerCard // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetOrCreateAllyPlayerCard(struct APlayerController* OwningPlayer, struct UUserWidget*& PlayerCard); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.GetOrCreateAllyPlayerCard // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void checkPlayerVsCardCounts(int32_t AllyPlayers, int32_t EnemyPlayers, int32_t allyCards, int32_t enemyCards, bool isPlayerAttacker, bool& remakeCards); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.checkPlayerVsCardCounts // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void updatePlayerCards(bool IsNewRound); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.updatePlayerCards // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void removeChildren(); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.removeChildren // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool sortPlayersByKills(struct UObject* shooterChar1, struct UObject* shooterChar2); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.sortPlayersByKills // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void makePlayerCards(); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.makePlayerCards // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void UpdateScoreboard(bool IsNewRound); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.UpdateScoreboard // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnSettingsChanged(struct FName& Setting); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.OnSettingsChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToggleScoreboardOn(); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.ToggleScoreboardOn // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToggleScoreboardOff(); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.ToggleScoreboardOff // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void NewRound(int32_t RoundNumberBeginning); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.NewRound // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateScoreboardWhileOpen(); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.UpdateScoreboardWhileOpen // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnScoreboardAutoShowStarted_Event_1(); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.OnScoreboardAutoShowStarted_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnScoreboardAutoShowStopped_Event_1(); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.OnScoreboardAutoShowStopped_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowScoreboard(); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.ShowScoreboard // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HideScoreboard(); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.HideScoreboard // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Check Scoreboard Visibility(); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.Event Check Scoreboard Visibility // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.SetHUDModel // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToggleScoreboardOnDispatch(); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.ToggleScoreboardOnDispatch // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToggleScoreboardOffDispatch(); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.ToggleScoreboardOffDispatch // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_ScoreboardContentWidgetBase(int32_t EntryPoint); // Function ScoreboardContentWidgetBase.ScoreboardContentWidgetBase_C.ExecuteUbergraph_ScoreboardContentWidgetBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

