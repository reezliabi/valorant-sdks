// WidgetBlueprintGeneratedClass AnnouncementHUDElement.AnnouncementHUDElement_C
// Size: 0x3f3 (Inherited: 0x330)
struct UAnnouncementHUDElement_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x338(0x08)
	struct UBaseAnnouncementWidget_C* CurrentAnnouncement; // 0x340(0x08)
	struct FTimerHandle CurrentIdleTimer; // 0x348(0x08)
	struct ABaseGameState_C* BaseGameState; // 0x350(0x08)
	struct TArray<struct UAnnouncement_Generic_Widget_C*> SavedAnnouncements; // 0x358(0x10)
	struct TArray<struct UBombDefusingAnnouncement_C*> SavedBombDefuseAnnouncements; // 0x368(0x10)
	struct TArray<struct UBombPlantingAnnouncement_C*> SavedBombPlantAnnouncements; // 0x378(0x10)
	struct TArray<struct UAnnouncement_ULTReady_C*> SavedUltReadyAnnouncements; // 0x388(0x10)
	struct TArray<struct UAnnouncement_BuyPhase_C*> SavedBuyPhaseAnnouncements; // 0x398(0x10)
	struct TArray<struct UAnnouncement_WaitingForPlayers_C*> SavedWaitingForPlayerAnnouncements; // 0x3a8(0x10)
	struct FMulticastInlineDelegate OnAnnouncementChange; // 0x3b8(0x10)
	struct TArray<struct UBombPickedUpAnnouncement_C*> SavedBombPickedUpAnnouncements; // 0x3c8(0x10)
	struct UAnnouncement_ULTReady_C* TEST ULT READY ANN; // 0x3d8(0x08)
	struct TArray<struct UAnnouncement_Warmup_C*> SavedWarmupAnnouncements; // 0x3e0(0x10)
	enum class EAresBombStates BombState; // 0x3f0(0x01)
	bool bAlreadyShowingQueuedDefuseAnnouncement; // 0x3f1(0x01)
	bool AnnouncementCancelled; // 0x3f2(0x01)

	void IsProgressBarAnnouncement(struct UBaseAnnouncementWidget_C* Announcement, bool& Return Value); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.IsProgressBarAnnouncement // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetAnimateOut(struct UWidgetAnimation*& Animation); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.GetAnimateOut // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetAnimateIn(struct UWidgetAnimation*& Animation); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.GetAnimateIn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetAnnouncementHolder(struct UBorder*& AnnouncementHolder); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.GetAnnouncementHolder // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void CreateOrGetWarmupAnnouncement(struct APlayerController* Owning Player, struct AShooterCharacter* Character, struct AActor* Actor for Location Text, double Idle Time, struct UAnnouncement_Warmup_C*& Widget); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.CreateOrGetWarmupAnnouncement // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldPlayBombEvents(bool& ShouldPlayBombCarrierEvents); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.ShouldPlayBombEvents // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void CreateOrGetBombPickedUpAnnouncement(struct APlayerController* Owning Player, struct AShooterCharacter* Character, double Idle Time, struct UBombPickedUpAnnouncement_C*& Widget); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.CreateOrGetBombPickedUpAnnouncement // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateOrGetWaitingForPlayersAnnouncement(struct APlayerController* Owning Player, struct AShooterCharacter* Character, struct AActor* Actor for Location Text, double Idle Time, struct UAnnouncement_WaitingForPlayers_C*& Widget); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.CreateOrGetWaitingForPlayersAnnouncement // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateOrGetUltReadyAnnouncement(struct APlayerController* Owning Player, struct AShooterCharacter* Character, struct FText Seconday Text, struct AActor* Actor for Location Text, struct FText Money, struct FText Round Number, struct FText Objective, struct FText Side Swap, struct FText Ult Name, struct FSlateBrush Ulticon, struct FText Primary Text, double Idle Time, struct UAnnouncement_ULTReady_C*& Widget); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.CreateOrGetUltReadyAnnouncement // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateOrGetBombPlantAnnouncement(struct APlayerController* Owning Player, struct AShooterCharacter* Character, double Idle Time, struct UBombPlantingAnnouncement_C*& Widget); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.CreateOrGetBombPlantAnnouncement // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateOrGetBombDefuseAnnouncement(struct APlayerController* Owning Player, struct AShooterCharacter* Character, double Idle Time, struct UBombDefusingAnnouncement_C*& Widget); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.CreateOrGetBombDefuseAnnouncement // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateOrGetAnnouncement(struct APlayerController* Owning Player, struct AShooterCharacter* Character, struct FText Text, struct AActor* Actor for Location Text, double Idle Time, bool Interruptable, struct UAnnouncement_Generic_Widget_C*& Widget); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.CreateOrGetAnnouncement // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsAttacker(bool& Attacker); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.IsAttacker // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void IsDefender(bool& Defender); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.IsDefender // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void MakeRoundNotificationText(struct FText& RoundString); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.MakeRoundNotificationText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EndOfRoundCeremony(struct AAresCeremony* ChosenCeremony); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.EndOfRoundCeremony // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIdleTimer(); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.SetIdleTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CancelAnnouncement(struct UBaseAnnouncementWidget_C* AnnounceType); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.CancelAnnouncement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowNewAnnouncement(struct UBaseAnnouncementWidget_C* NextAnnouncment); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.ShowNewAnnouncement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleRoundNumberChanged(); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.HandleRoundNumberChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetPortrait(struct AShooterPlayerState* Player State, struct UTexture*& Portrait); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.GetPortrait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void OnAnimateInFinished(); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnAnimateInFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DoStartNextAnnouncement(struct UBaseAnnouncementWidget_C* NextAnnouncement); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.DoStartNextAnnouncement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StartOutAnim(); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.StartOutAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAnimateOutFinished(); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnAnimateOutFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnAnimationFinished_Event_1(); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnAnimationFinished_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Idle Timer Finished(); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.On Idle Timer Finished // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAnimationFinished_Event_2(); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnAnimationFinished_Event_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRoundNumebrChanged_Event_1(int32_t NewValue); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnRoundNumebrChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnGameStateChanged(); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnGameStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCarrierKilled(struct AShooterCharacter* OldCarrier); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnCarrierKilled // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBombDropped(struct AShooterCharacter* Old Bomb Holder); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnBombDropped // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlanterKilled(struct AShooterCharacter* Planter); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnPlanterKilled // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBombDefuseStart(struct AShooterCharacter* Defuser); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnBombDefuseStart // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDefuseStop(); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnDefuseStop // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRoundResultsUpdated(); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnRoundResultsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCeremonyChosen(struct AAresCeremony* ChosenCeremony); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnCeremonyChosen // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnShouldDisplayCeremony(struct AAresCeremony* ChosenCeremony); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnShouldDisplayCeremony // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnUltPointsChanged(int32_t NewValue, bool IsUltNewlyReady); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnUltPointsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDefuserKilled(struct AShooterCharacter* Defuser); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnDefuserKilled // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBombPlanted(struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBombPickedUp(struct AShooterCharacter* NewBombHolder); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnBombPickedUp // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void WaitingForPlayersChanged(bool WaitingForPlayers); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.WaitingForPlayersChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayCarrierKilledAnnouncement(struct ABombEquippable_C* BombEquippable, struct AShooterCharacter* OldCarrier); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.PlayCarrierKilledAnnouncement // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCinematicModeUpdated_Event_1(); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnCinematicModeUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindBombEvents(); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.BindBombEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlantStarted(struct AShooterCharacter* Planter, enum class BombSiteEnum PlantSite); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnPlantStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBombPlantCancelled(enum class BombSiteEnum PlantSite); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnBombPlantCancelled // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ScoreboardVisibilityChanged(bool IsVisible); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.ScoreboardVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerViewTargetChanged(); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnPlayerViewTargetChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnWarmupRoundChanged_Event_1(bool IsWarmupRound); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnWarmupRoundChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerStateChanged(struct AAresPlayerStateBase* NewValue); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnPlayerStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowAnyQueuedDefuseAnnouncement(); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.ShowAnyQueuedDefuseAnnouncement // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_AnnouncementHUDElement(int32_t EntryPoint); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.ExecuteUbergraph_AnnouncementHUDElement // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnAnnouncementChange__DelegateSignature(bool AnnouncementVisible); // Function AnnouncementHUDElement.AnnouncementHUDElement_C.OnAnnouncementChange__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

