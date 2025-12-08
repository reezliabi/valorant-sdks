// WidgetBlueprintGeneratedClass LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C
// Size: 0x36c (Inherited: 0x318)
struct ULargeDetailedPlayerCard_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UPartyPlayerModel* PartyPlayerModel; // 0x320(0x08)
	struct UPlatformPlayer* PlatformPlayer; // 0x328(0x08)
	struct UPartyModel* PartyModel; // 0x330(0x08)
	struct TScriptInterface<IVoiceSessionParticipantModelInterface> VoiceSessionParticipantModel; // 0x338(0x10)
	struct UVoiceSessionParticipantModelSelector* BuiltInVoiceParticipantModelSelector; // 0x348(0x08)
	enum class EVoiceSessionType VoiceSessionType; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct TArray<bool> InvalidFlags; // 0x358(0x10)
	int32_t BlockValidationCount; // 0x368(0x04)

	void HandlePremierPrestigeChanged(struct UPlatformPlayer* PlatformPlayer); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.HandlePremierPrestigeChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsPartyEligibleForPremierChanged(bool NewValue); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.HandleIsPartyEligibleForPremierChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetIneligibilityTooltipText(struct FText& IneligibilityTooltipText); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.GetIneligibilityTooltipText // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void HandleIneligibleRosterPartyMemberReasonChanged(enum class ERosterPartyMemberEligibility Ineligible Roster Party Member Reason); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.HandleIneligibleRosterPartyMemberReasonChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnVoiceSessionParticipantModelSet(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.OnVoiceSessionParticipantModelSet // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UnblockValidation(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.UnblockValidation // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BlockValidation(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.BlockValidation // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct TScriptInterface<IVoiceSessionParticipantModelInterface> GetVoiceSessionParticipantModel(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.GetVoiceSessionParticipantModel // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	int32_t GetCompetitiveTier(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.GetCompetitiveTier // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	struct UPartyModel* GetPartyModel(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.GetPartyModel // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	struct UPartyPlayerModel* GetPartyPlayer(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.GetPartyPlayer // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void UnbindVoiceSessionParticipantModelListeners(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.UnbindVoiceSessionParticipantModelListeners // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindVoiceSessionParticipantModelListeners(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.BindVoiceSessionParticipantModelListeners // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsInvalid(enum class LargeDetailedPlayerCard_ValidationFlags Flag, bool& Invalid); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.IsInvalid // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void UpdateAllWidgets(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.UpdateAllWidgets // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ValidateNow(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.ValidateNow // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryValidateNow(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.TryValidateNow // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InvalidateFlag(enum class LargeDetailedPlayerCard_ValidationFlags InvalidFlag); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.InvalidateFlag // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitInvalidFlags(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.InitInvalidFlags // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FLargeDetailedPlayerCard_StatusInfo GetStatusInfo(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.GetStatusInfo // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HandlePlayerPresenceStateChanged(struct UPlatformPlayer* PlatformPlayer); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.HandlePlayerPresenceStateChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FormatSkillDisparityText(struct FText& WarningText); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.FormatSkillDisparityText // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void FormatIneligibleRosterPartyMemberText(struct FText& WarningText); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.FormatIneligibleRosterPartyMemberText // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void GetPartyQueueID(struct FString& QueueID); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.GetPartyQueueID // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	bool IsPartyOwner(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.IsPartyOwner // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	bool IsSelf(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.IsSelf // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateSubject(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.UpdateSubject // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetVoiceSessionParticipantModel(struct TScriptInterface<IVoiceSessionParticipantModelInterface> NewValue); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.SetVoiceSessionParticipantModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BuildVoiceModelSelector(struct TScriptInterface<IVoiceSessionParticipantModelInterface>& NewParticipantModel); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.BuildVoiceModelSelector // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleAnyConfigChanged(struct FName& ConfigName); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.HandleAnyConfigChanged // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayRevealAnimation(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.PlayRevealAnimation // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool IsIneligible(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.IsIneligible // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HandleCompetitiveTierChanged(int32_t NewValue); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.HandleCompetitiveTierChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePlayerSessionLoopStateChanged(struct UPlatformPlayer* PlatformPlayer); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.HandlePlayerSessionLoopStateChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleIneligibleToPlayWIthSubjectsChanged(struct TSet<struct FString> IneligibleToPlayWithSubjects); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.HandleIneligibleToPlayWIthSubjectsChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleQueueEligibleRemainingAccountLevelsChanged(int32_t NewValue); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.HandleQueueEligibleRemainingAccountLevelsChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UnbindPartyPlayerListeners(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.UnbindPartyPlayerListeners // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindPartyPlayerListeners(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.BindPartyPlayerListeners // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsOwnerChanged(bool IsOwner); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.HandleIsOwnerChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleQueueIDChanged(struct FString NewValue); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.HandleQueueIDChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsRosterPartyChanged(bool NewValue); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.HandleIsRosterPartyChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UnbindPartyModelListeners(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.UnbindPartyModelListeners // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindPartyModelListeners(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.BindPartyModelListeners // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPartyModel(struct UPartyModel* NewValue); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.SetPartyModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UnbindPlatformPlayerListeners(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.UnbindPlatformPlayerListeners // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindPlatformPlayerListeners(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.BindPlatformPlayerListeners // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplaySubject(struct FPlatformPlayerSubject Subject, bool IsSelf); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.DisplaySubject // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPlatformPlayer(struct UPlatformPlayer* NewValue); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.SetPlatformPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsRanked(bool& Ranked); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.IsRanked // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	struct UPlatformPlayer* GetPlatformPlayer(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.GetPlatformPlayer // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void SetPlatformPlayerInternal(struct UPlatformPlayer* NewValue); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.SetPlatformPlayerInternal // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlatformPlayerFromPartyPlayer(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.UpdatePlatformPlayerFromPartyPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPartyPlayer(struct UPartyPlayerModel* Player); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.SetPartyPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_LargeDetailedPlayerCard_Base(int32_t EntryPoint); // Function LargeDetailedPlayerCard_Base.LargeDetailedPlayerCard_Base_C.ExecuteUbergraph_LargeDetailedPlayerCard_Base // (Final|UbergraphFunction) // @ game+0x19be2f0
};

