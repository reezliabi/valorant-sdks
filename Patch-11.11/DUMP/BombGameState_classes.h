// BlueprintGeneratedClass BombGameState.BombGameState_C
// Size: 0x11e0 (Inherited: 0xfb0)
struct ABombGameState_C : ABaseTwoTeamGameState_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xfb0(0x08)
	struct USyncedTimerComponent* BeforePostRoundTransitionSyncTimer; // 0xfb8(0x08)
	struct URoundRestoreManagerComponent* RoundRestoreManager; // 0xfc0(0x08)
	struct UBombCinematicsManagerComponent_C* BombCinematicsManagerComponent; // 0xfc8(0x08)
	struct UComp_GameMode_Overtime_SuddenDeath_C* Comp_GameMode_Overtime_SuddenDeath; // 0xfd0(0x08)
	struct UComp_BombEvents_C* Comp_BombEvents; // 0xfd8(0x08)
	struct UAnnouncerVOComponent_C* AttackerAnnouncer; // 0xfe0(0x08)
	struct UAnnouncerVOComponent_C* DefenderAnnouncer; // 0xfe8(0x08)
	enum class EAresBombStates BombState; // 0xff0(0x01)
	bool ShouldOverrideMatchTimer; // 0xff1(0x01)
	char pad_FF2[0x6]; // 0xff2(0x06)
	struct APlantedBomb_C* PlantedBomb; // 0xff8(0x08)
	struct FText OverrideMatchTimerText; // 0x1000(0x18)
	struct TArray<int32_t> BombRewardStacksPerSite; // 0x1018(0x10)
	struct TArray<int32_t> BombRewardPerStacks; // 0x1028(0x10)
	enum class BombSiteEnum BombSiteRewardReset; // 0x1038(0x01)
	bool ShouldResetBombSiteReward; // 0x1039(0x01)
	char pad_103A[0x2]; // 0x103a(0x02)
	int32_t LostStreakMultiplier; // 0x103c(0x04)
	int32_t CurrentLossStreak; // 0x1040(0x04)
	int32_t MaxLossStreak; // 0x1044(0x04)
	struct UBaseTeamComponent* LossStreakTeam; // 0x1048(0x08)
	struct FMulticastInlineDelegate OnOrbPickedUp; // 0x1050(0x10)
	bool bDebugInWorldTeamVision; // 0x1060(0x01)
	bool bVerboseDebugInWorldTeamVision; // 0x1061(0x01)
	char pad_1062[0x6]; // 0x1062(0x06)
	struct TMap<struct AShooterCharacter*, struct AInWorldTeamVisionActor_C*> ShooterCharacterToInWorldTeamVisionActor; // 0x1068(0x50)
	struct AShooterCharacter* BombCarrier; // 0x10b8(0x08)
	struct FDateTime CarrierSpottedTimestamp; // 0x10c0(0x08)
	bool enableInWorldTeamVision; // 0x10c8(0x01)
	char pad_10C9[0x7]; // 0x10c9(0x07)
	struct FMulticastInlineDelegate EnemyEnteredVisibility; // 0x10d0(0x10)
	struct FMulticastInlineDelegate EnemyExitVisibility; // 0x10e0(0x10)
	struct TArray<struct ADangerCompassActor_C*> enemyLocationsToIndicate; // 0x10f0(0x10)
	struct TArray<struct FSpottedCharacterEntry> SpottedEnemies; // 0x1100(0x10)
	struct AShooterCharacter* LastKilledShooterCharacter; // 0x1110(0x08)
	struct TArray<struct FSpottedCharacterEntry> SpottedEnemiesPlayer; // 0x1118(0x10)
	struct FMulticastInlineDelegate OnBuyPhaseUpdated; // 0x1128(0x10)
	bool IsBuyPhase; // 0x1138(0x01)
	char pad_1139[0x7]; // 0x1139(0x07)
	struct AShooterCharacter* BombDropper; // 0x1140(0x08)
	bool ShouldPlayBombCarrierEvents; // 0x1148(0x01)
	bool ShouldResetEconOnSideSwap; // 0x1149(0x01)
	char pad_114A[0x2]; // 0x114a(0x02)
	int32_t MinimumIncomeForLoss; // 0x114c(0x04)
	bool WillResetMoneyNextRound; // 0x1150(0x01)
	char pad_1151[0x7]; // 0x1151(0x07)
	struct AShooterCharacter* CharacterVO_Killer; // 0x1158(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0x1160(0x10)
	struct FMulticastInlineDelegate OnPostRoundTimerExpired; // 0x1170(0x10)
	struct FMulticastInlineDelegate OnOrbSpawned; // 0x1180(0x10)
	struct FMulticastInlineDelegate OnOrbUseStarted; // 0x1190(0x10)
	struct FMulticastInlineDelegate OnOrbUseCancelled; // 0x11a0(0x10)
	struct FMulticastInlineDelegate OnOrbDespawned; // 0x11b0(0x10)
	struct FMulticastInlineDelegate OnPlasmaArmorRegenPoolUpdated; // 0x11c0(0x10)
	struct FMulticastInlineDelegate OnPlasmaArmorMaxRegenPoolUpdated; // 0x11d0(0x10)

	bool IsBombModeGameState(); // Function BombGameState.BombGameState_C.IsBombModeGameState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	void AuthOnPostRoundPreExit(); // Function BombGameState.BombGameState_C.AuthOnPostRoundPreExit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthOnPostRoundEnded(); // Function BombGameState.BombGameState_C.AuthOnPostRoundEnded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool IsNextRoundOvertime(); // Function BombGameState.BombGameState_C.IsNextRoundOvertime // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void IsOnePointAwayFromMatchPoint(struct UBaseTeamComponent* Team, bool& Ret); // Function BombGameState.BombGameState_C.IsOnePointAwayFromMatchPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void ShouldAnnouncerPlayForObserver(struct UAnnouncerVOComponent_C* Announcer Component, struct AObserverPlayerState*& Observer, bool& Should Play); // Function BombGameState.BombGameState_C.ShouldAnnouncerPlayForObserver // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetDefuseProgress(double& CurProgress, double& MaxProgress); // Function BombGameState.BombGameState_C.GetDefuseProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetPlantProgress(double& CurProgress, double& MaxProgress); // Function BombGameState.BombGameState_C.GetPlantProgress // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetPlantInProgress(bool& InProgress); // Function BombGameState.BombGameState_C.GetPlantInProgress // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetBombState(enum class EAresBombStates& CurrentState); // Function BombGameState.BombGameState_C.GetBombState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldPlayBombEvents(bool& ReturnVal); // Function BombGameState.BombGameState_C.ShouldPlayBombEvents // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Set Minimum Income Variables(int32_t MinimumIncomeForLoss, bool WillResetMoneyNextRound, int32_t IncomeForWin, int32_t IncomeForLossStreak); // Function BombGameState.BombGameState_C.Set Minimum Income Variables // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CalculateNextRoundMinimumMoney(int32_t CurrentMoney, int32_t& MinimumMoney); // Function BombGameState.BombGameState_C.CalculateNextRoundMinimumMoney // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void CalculateLossStreakBonusMoney(bool IsForNextRound, int32_t& Return Value); // Function BombGameState.BombGameState_C.CalculateLossStreakBonusMoney // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void IsMinimumRoundRequirementMet(int32_t Current Round, bool& Has Played Minimum Rounds); // Function BombGameState.BombGameState_C.IsMinimumRoundRequirementMet // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void AuthResetCurrentLossStreak(); // Function BombGameState.BombGameState_C.AuthResetCurrentLossStreak // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthSetSwitchedTeamRoles(); // Function BombGameState.BombGameState_C.AuthSetSwitchedTeamRoles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRep_BombState(); // Function BombGameState.BombGameState_C.OnRep_BombState // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MarkDroppedBombForAttackers(struct AAresOnGroundEquippable* DroppedBombActor, struct AShooterCharacter* BombDropper); // Function BombGameState.BombGameState_C.MarkDroppedBombForAttackers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBuyPhaseUpdate(bool IsBuyPhase); // Function BombGameState.BombGameState_C.OnBuyPhaseUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheckVisibleEnemyAgainstMarkedLocations(struct AShooterCharacter* SpottedCharacter); // Function BombGameState.BombGameState_C.CheckVisibleEnemyAgainstMarkedLocations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldSwitchSides(bool& Should Switch Sides); // Function BombGameState.BombGameState_C.ShouldSwitchSides // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void IsMatchPoint(bool& Ret); // Function BombGameState.BombGameState_C.IsMatchPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HasTeamWon(struct UBaseTeamComponent* Team, bool& HasWon); // Function BombGameState.BombGameState_C.HasTeamWon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetTeamByName(struct FName TeamName, struct UBaseTeamComponent*& Team); // Function BombGameState.BombGameState_C.GetTeamByName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearLossStreak(); // Function BombGameState.BombGameState_C.ClearLossStreak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetCurrentDefuser(struct AShooterCharacter*& Defuser); // Function BombGameState.BombGameState_C.GetCurrentDefuser // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void OnUseCancelled(struct AShooterCharacter* User, enum class EUsableCancelReason Reason); // Function BombGameState.BombGameState_C.OnUseCancelled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheckPlayerKill(struct AShooterCharacter* Player); // Function BombGameState.BombGameState_C.CheckPlayerKill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetAnnouncerVOComponent(struct UBaseTeamComponent* Team, struct UAnnouncerVOComponent_C*& AnnouncerComponent); // Function BombGameState.BombGameState_C.GetAnnouncerVOComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void CheckForLossStreaking(struct UBaseTeamComponent* Team); // Function BombGameState.BombGameState_C.CheckForLossStreaking // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FlagRewardResetForSite(enum class BombSiteEnum BombSite); // Function BombGameState.BombGameState_C.FlagRewardResetForSite // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetBombRewardForSite(enum class BombSiteEnum BombSite, int32_t& BombReward, bool& IsValid, bool& IsMax); // Function BombGameState.BombGameState_C.GetBombRewardForSite // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateBombRewardStacks(); // Function BombGameState.BombGameState_C.UpdateBombRewardStacks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeBombRewardStacks(); // Function BombGameState.BombGameState_C.InitializeBombRewardStacks // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	int32_t GetPreRoundAddTime(int32_t RoundNumberIn); // Function BombGameState.BombGameState_C.GetPreRoundAddTime // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	void SetOverrideMatchTimer(bool ShouldOverride, struct FText OverrideText); // Function BombGameState.BombGameState_C.SetOverrideMatchTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryOverrideMatchTimerText(bool& ShouldOverride, struct FText& OverrideText); // Function BombGameState.BombGameState_C.TryOverrideMatchTimerText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryOverrideMatchTimerColor(bool& ShouldOverride, struct FLinearColor& OverrideColor); // Function BombGameState.BombGameState_C.TryOverrideMatchTimerColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthSetBombState(enum class EAresBombStates NewState); // Function BombGameState.BombGameState_C.AuthSetBombState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClientRoundStart(); // Function BombGameState.BombGameState_C.ClientRoundStart // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function BombGameState.BombGameState_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void Auth Side Switch Event(); // Function BombGameState.BombGameState_C.Auth Side Switch Event // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Round Won(struct UBaseTeamComponent* Winning Team); // Function BombGameState.BombGameState_C.Event Round Won // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Multicast Side Switch Event(); // Function BombGameState.BombGameState_C.Multicast Side Switch Event // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCharacterEnteredTeamVisibility(struct AShooterCharacter* Character); // Function BombGameState.BombGameState_C.OnCharacterEnteredTeamVisibility // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void HandleEnemyEnteringVisibility(struct AShooterCharacter* EnemyShooterCharacter); // Function BombGameState.BombGameState_C.HandleEnemyEnteringVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCharacterExitedTeamVisibility(struct AShooterCharacter* Character); // Function BombGameState.BombGameState_C.OnCharacterExitedTeamVisibility // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerKilled(struct AOwnerExclusivePlayerInfo* Killer, struct AOwnerExclusivePlayerInfo* Victim, struct APawn* KilledPawn, struct UDamageResponse* Response, struct TArray<struct FAresAssist>& AssistList, struct UDamageType* DamageType); // Function BombGameState.BombGameState_C.OnPlayerKilled // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClientBuyPhaseEnd(); // Function BombGameState.BombGameState_C.ClientBuyPhaseEnd // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AnnouncerVOCeremony(struct AAresCeremony* ChosenCeremony); // Function BombGameState.BombGameState_C.AnnouncerVOCeremony // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SoundTheAlarm(struct TArray<struct FSpottedCharacterEntry>& SpottedCharactersOnDeath, struct AShooterCharacter* CallingCharacter); // Function BombGameState.BombGameState_C.SoundTheAlarm // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ActorDestroyed(struct AActor* DestroyedActor); // Function BombGameState.BombGameState_C.ActorDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBombPickedUp(struct AShooterCharacter* NewBombHolder); // Function BombGameState.BombGameState_C.OnBombPickedUp // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBombDropped(struct AShooterCharacter* OldBombHolder); // Function BombGameState.BombGameState_C.OnBombDropped // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Set Overtime Rules(); // Function BombGameState.BombGameState_C.Event Set Overtime Rules // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GameRuleBoolChanged(enum class EGameRuleBoolName GameRuleName, bool bEnabled); // Function BombGameState.BombGameState_C.GameRuleBoolChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBombPlanted(struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function BombGameState.BombGameState_C.OnBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EventRoundBegin(int32_t RoundNumberBeginning); // Function BombGameState.BombGameState_C.EventRoundBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MarkDroppedBombEvent(struct AEquippableGroundPickup_C* DroppedBombActor); // Function BombGameState.BombGameState_C.MarkDroppedBombEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OrbPickedUpRPC(struct AShooterCharacter* Orb Gatherer, struct ABaseCollectableOrb_C* Collectable Orb); // Function BombGameState.BombGameState_C.OrbPickedUpRPC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MulticastSetLossStreakSettings(int32_t Loss Streak Multiplier, int32_t Max Loss Streak); // Function BombGameState.BombGameState_C.MulticastSetLossStreakSettings // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__BombGameState_BeforePostRoundTransitionSyncTimer_K2Node_ComponentBoundEvent_1_OnTimerExpired__DelegateSignature(); // Function BombGameState.BombGameState_C.BndEvt__BombGameState_BeforePostRoundTransitionSyncTimer_K2Node_ComponentBoundEvent_1_OnTimerExpired__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OrbSpawned(struct ABaseCollectableOrb_C* Collectable Orb); // Function BombGameState.BombGameState_C.OrbSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OrbUseStarted(struct AShooterCharacter* Orb Gatherer, struct ABaseCollectableOrb_C* Collectable Orb); // Function BombGameState.BombGameState_C.OrbUseStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OrbUseCancelled(struct AShooterCharacter* Orb Gatherer, struct ABaseCollectableOrb_C* Collectable Orb); // Function BombGameState.BombGameState_C.OrbUseCancelled // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OrbDespawned(struct ABaseCollectableOrb_C* Collectable Orb); // Function BombGameState.BombGameState_C.OrbDespawned // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlasmaArmorRegenPoolUpdated(struct AShooterCharacter* OwningPlayer, double NewValue); // Function BombGameState.BombGameState_C.PlasmaArmorRegenPoolUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlasmaArmorMaxRegenPoolUpdated(struct AShooterCharacter* OwningPlayer, double NewValue); // Function BombGameState.BombGameState_C.PlasmaArmorMaxRegenPoolUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_BombGameState(int32_t EntryPoint); // Function BombGameState.BombGameState_C.ExecuteUbergraph_BombGameState // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnPlasmaArmorMaxRegenPoolUpdated__DelegateSignature(struct AShooterCharacter* OwningPlayer, double NewValue); // Function BombGameState.BombGameState_C.OnPlasmaArmorMaxRegenPoolUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlasmaArmorRegenPoolUpdated__DelegateSignature(struct AShooterCharacter* OwningPlayer, double New Value); // Function BombGameState.BombGameState_C.OnPlasmaArmorRegenPoolUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnOrbDespawned__DelegateSignature(struct ABaseCollectableOrb_C* Collectable Orb); // Function BombGameState.BombGameState_C.OnOrbDespawned__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnOrbUseCancelled__DelegateSignature(struct AShooterCharacter* Orb Gatherer, struct ABaseCollectableOrb_C* Collectable Orb); // Function BombGameState.BombGameState_C.OnOrbUseCancelled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnOrbUseStarted__DelegateSignature(struct AShooterCharacter* Orb Gatherer, struct ABaseCollectableOrb_C* Collectable Orb); // Function BombGameState.BombGameState_C.OnOrbUseStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnOrbSpawned__DelegateSignature(struct ABaseCollectableOrb_C* Collectable Orb); // Function BombGameState.BombGameState_C.OnOrbSpawned__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPostRoundTimerExpired__DelegateSignature(); // Function BombGameState.BombGameState_C.OnPostRoundTimerExpired__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void NewEventDispatcher_0__DelegateSignature(); // Function BombGameState.BombGameState_C.NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBuyPhaseUpdated__DelegateSignature(bool IsBuyPhase); // Function BombGameState.BombGameState_C.OnBuyPhaseUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EnemyExitVisibility__DelegateSignature(struct AShooterCharacter* EnemyCharacter); // Function BombGameState.BombGameState_C.EnemyExitVisibility__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EnemyEnteredVisibility__DelegateSignature(struct AShooterCharacter* NewParam); // Function BombGameState.BombGameState_C.EnemyEnteredVisibility__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnOrbPickedUp__DelegateSignature(struct AShooterCharacter* Orb Gatherer, struct ABaseCollectableOrb_C* Collectable Orb); // Function BombGameState.BombGameState_C.OnOrbPickedUp__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

