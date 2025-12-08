// WidgetBlueprintGeneratedClass StartGameWidgetBase.StartGameWidgetBase_C
// Size: 0x358 (Inherited: 0x318)
struct UStartGameWidgetBase_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UPartyModel* Model; // 0x320(0x08)
	struct UPartyViewController* View Controller; // 0x328(0x08)
	struct UAkAudioEvent* AUD_Click_FindMatch; // 0x330(0x08)
	int64_t SecondsRemaining; // 0x338(0x08)
	struct FText CNAntiAddictionTooltipText; // 0x340(0x18)

	void IsMFAEnabled(bool& IsMFAEnabled); // Function StartGameWidgetBase.StartGameWidgetBase_C.IsMFAEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetQueueUnverifiedText(struct TArray<struct FString>& QueueUnverifiedNames, struct FText& ReturnText); // Function StartGameWidgetBase.StartGameWidgetBase_C.GetQueueUnverifiedText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetCNAntiAddictionTooltipText(struct FString QueueID, struct FText& ToolTipText); // Function StartGameWidgetBase.StartGameWidgetBase_C.GetCNAntiAddictionTooltipText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ContinueJoiningTournamentQueue(bool Continue); // Function StartGameWidgetBase.StartGameWidgetBase_C.ContinueJoiningTournamentQueue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void JoinTournamentQueueWithRosterPendingInvites(); // Function StartGameWidgetBase.StartGameWidgetBase_C.JoinTournamentQueueWithRosterPendingInvites // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetQueueRestrictionTooltip(struct FText& Result); // Function StartGameWidgetBase.StartGameWidgetBase_C.GetQueueRestrictionTooltip // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void DisplayInQueueState(); // Function StartGameWidgetBase.StartGameWidgetBase_C.DisplayInQueueState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplayStartState(); // Function StartGameWidgetBase.StartGameWidgetBase_C.DisplayStartState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateButtonWidget(); // Function StartGameWidgetBase.StartGameWidgetBase_C.UpdateButtonWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateButtonEnabled(); // Function StartGameWidgetBase.StartGameWidgetBase_C.UpdateButtonEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StartMatchmakingQueue(); // Function StartGameWidgetBase.StartGameWidgetBase_C.StartMatchmakingQueue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetStartGameAvailability(enum class EStartGameAvailability& StartGameAvailability, struct FText& WarningText, struct FText& ToolTipText); // Function StartGameWidgetBase.StartGameWidgetBase_C.GetStartGameAvailability // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetQueueDelayTooltip(struct FText& Result); // Function StartGameWidgetBase.StartGameWidgetBase_C.GetQueueDelayTooltip // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Init(struct UPartyModel* Model, struct UPartyViewController* View Controller); // Function StartGameWidgetBase.StartGameWidgetBase_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Initialized(); // Function StartGameWidgetBase.StartGameWidgetBase_C.On Initialized // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMemberAdded(struct UPartyPlayerModel* Player); // Function StartGameWidgetBase.StartGameWidgetBase_C.OnMemberAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMemberRemoved(struct UPartyPlayerModel* Player); // Function StartGameWidgetBase.StartGameWidgetBase_C.OnMemberRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsOwnerChanged(bool NewValue); // Function StartGameWidgetBase.StartGameWidgetBase_C.OnIsOwnerChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMatchmakingChanged(bool NewValue); // Function StartGameWidgetBase.StartGameWidgetBase_C.OnMatchmakingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMatchmakingSettingsChanged(int32_t NewValue); // Function StartGameWidgetBase.StartGameWidgetBase_C.OnMatchmakingSettingsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSessionLoopStateChanged(struct UPlatformPlayer* PlatformPlayer); // Function StartGameWidgetBase.StartGameWidgetBase_C.OnSessionLoopStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStateChanged(enum class EPartyViewState PartyState); // Function StartGameWidgetBase.StartGameWidgetBase_C.OnStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAcceptNotFullWarning(); // Function StartGameWidgetBase.StartGameWidgetBase_C.OnAcceptNotFullWarning // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSuccessStartCustomGame(); // Function StartGameWidgetBase.StartGameWidgetBase_C.OnSuccessStartCustomGame // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DoNothingCustomGameErrorModal(); // Function StartGameWidgetBase.StartGameWidgetBase_C.DoNothingCustomGameErrorModal // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSuccessJoinMatchmaking(); // Function StartGameWidgetBase.StartGameWidgetBase_C.OnSuccessJoinMatchmaking // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnErrorJoinMatchmaking(enum class EPartyErrorEnum PartyErrorEnum); // Function StartGameWidgetBase.StartGameWidgetBase_C.OnErrorJoinMatchmaking // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnErrorStartCustomGame(enum class EPartyErrorEnum PartyErrorEnum); // Function StartGameWidgetBase.StartGameWidgetBase_C.OnErrorStartCustomGame // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnQueueConfigUpdated(); // Function StartGameWidgetBase.StartGameWidgetBase_C.OnQueueConfigUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnChatConnectedChanged(bool NewValue); // Function StartGameWidgetBase.StartGameWidgetBase_C.OnChatConnectedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnQueueIDChanged_Event_1(struct FString NewValue); // Function StartGameWidgetBase.StartGameWidgetBase_C.OnQueueIDChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMyGameflowStateChanged(enum class EGameFlowStateType NewState); // Function StartGameWidgetBase.StartGameWidgetBase_C.OnMyGameflowStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTeamCompositionsChanged(struct UPartyPlayerModel* Player); // Function StartGameWidgetBase.StartGameWidgetBase_C.OnTeamCompositionsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyModelBoolChanged(bool NewValue); // Function StartGameWidgetBase.StartGameWidgetBase_C.OnPartyModelBoolChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPatchAvailable(bool NewValue); // Function StartGameWidgetBase.StartGameWidgetBase_C.OnPatchAvailable // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PartyModelRestrictionsChanged(); // Function StartGameWidgetBase.StartGameWidgetBase_C.PartyModelRestrictionsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RestrictionsManagerRestrictionsChanged(); // Function StartGameWidgetBase.StartGameWidgetBase_C.RestrictionsManagerRestrictionsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHasInvalidPartySizeChanged_Event_1(bool NewValue); // Function StartGameWidgetBase.StartGameWidgetBase_C.OnHasInvalidPartySizeChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnQueueEligibleRemainingAccountLevelsChanged(int32_t NewValue); // Function StartGameWidgetBase.StartGameWidgetBase_C.OnQueueEligibleRemainingAccountLevelsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsRosterPartyChanged(bool NewValue); // Function StartGameWidgetBase.StartGameWidgetBase_C.OnIsRosterPartyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsPartyEligibleForPremierChanged(bool NewValue); // Function StartGameWidgetBase.StartGameWidgetBase_C.OnIsPartyEligibleForPremierChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CNAntiAddictionManagerRestrictionsChanged(); // Function StartGameWidgetBase.StartGameWidgetBase_C.CNAntiAddictionManagerRestrictionsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CNAntiAddictionManagerTimeRemainingChanged(); // Function StartGameWidgetBase.StartGameWidgetBase_C.CNAntiAddictionManagerTimeRemainingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_StartGameWidgetBase(int32_t EntryPoint); // Function StartGameWidgetBase.StartGameWidgetBase_C.ExecuteUbergraph_StartGameWidgetBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

