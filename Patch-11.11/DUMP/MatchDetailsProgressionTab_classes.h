// WidgetBlueprintGeneratedClass MatchDetailsProgressionTab.MatchDetailsProgressionTab_C
// Size: 0x721 (Inherited: 0x5a9)
struct UMatchDetailsProgressionTab_C : UMatchDetailsTabBase_C {
	char pad_5A9[0x7]; // 0x5a9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5b0(0x08)
	struct ULazyPlatformWidgetLoaderAsOverlay_Universal_C* DoughFlyOut_LazyLoader; // 0x5b8(0x08)
	struct UTextBlock* ErrorState; // 0x5c0(0x08)
	struct UVerticalBox* LoadedState; // 0x5c8(0x08)
	struct ULoadingThrobberSmall_C* LoadingState; // 0x5d0(0x08)
	struct UWidgetSwitcher* LoadingSwitcher; // 0x5d8(0x08)
	struct UMatchDetailsProgressionAccountLevel_C* MatchDetailsProgressionAccountLevel; // 0x5e0(0x08)
	struct UMatchDetailsProgressionXP_C* MatchDetailsProgressionXP; // 0x5e8(0x08)
	struct UMatchDetailsSummaryContractsV2_C* MatchDetailsSummaryContractsV2; // 0x5f0(0x08)
	struct ULazyDynamicWidgetSwitcher_C* PremierLazyDynamicWidgetSwitcher; // 0x5f8(0x08)
	struct UVerticalBox* PremierSection; // 0x600(0x08)
	struct ULazyDynamicWidgetSwitcher_C* RankedLazyDynamicWidgetSwitcher; // 0x608(0x08)
	struct UWidgetSwitcher* RankedPremierSectionWidgetSwitcher; // 0x610(0x08)
	struct UVerticalBox* RankedSection; // 0x618(0x08)
	struct UButton* TestCeremony; // 0x620(0x08)
	struct UTotalRewardsTracker_C* TotalRewardsTracker; // 0x628(0x08)
	struct UTotalXPTracker_C* TotalXPTracker; // 0x630(0x08)
	struct UWidgetSwitcher* TrackerSwitcher; // 0x638(0x08)
	struct FMulticastInlineDelegate ForceChangeTab; // 0x640(0x10)
	bool PendingCeremony; // 0x650(0x01)
	char pad_651[0x3]; // 0x651(0x03)
	int32_t FetchAttempts_Contracts; // 0x654(0x04)
	struct FTimerHandle PollingHandle_Contracts; // 0x658(0x08)
	struct UMatchDetailsRankProgress_C* MatchDetailsRankProgress; // 0x660(0x08)
	bool IsRankProgressEnabled; // 0x668(0x01)
	char pad_669[0x7]; // 0x669(0x07)
	struct UContractMatchResultsViewModel* ContractMatchResults; // 0x670(0x08)
	int32_t FetchAttempts_AccountXP; // 0x678(0x04)
	char pad_67C[0x4]; // 0x67c(0x04)
	struct FTimerHandle PollingHandle_AccountXP; // 0x680(0x08)
	int32_t TotalMatchXP; // 0x688(0x04)
	bool AccountXPMatchResultsFound; // 0x68c(0x01)
	char pad_68D[0x3]; // 0x68d(0x03)
	struct FTimerHandle PollingHandle_DailyRewards; // 0x690(0x08)
	int32_t FetchAttempts_DailyRewards; // 0x698(0x04)
	char pad_69C[0x4]; // 0x69c(0x04)
	struct UDailyRewardsProcessedMatchModel* DailyRewardsMatchResults; // 0x6a0(0x08)
	struct FTimerHandle ErrorTimerHandle_MMR; // 0x6a8(0x08)
	bool MMRMatchResultsFound; // 0x6b0(0x01)
	char pad_6B1[0x3]; // 0x6b1(0x03)
	int32_t TotalMatchDough; // 0x6b4(0x04)
	bool IsDoughEnabled; // 0x6b8(0x01)
	char pad_6B9[0x7]; // 0x6b9(0x07)
	double SecondsDelayBeforeMatchProgression; // 0x6c0(0x08)
	int32_t MillisecondsDurationTrickleRewards; // 0x6c8(0x04)
	char pad_6CC[0x4]; // 0x6cc(0x04)
	double SecondsDelayAfterTrickleRewards; // 0x6d0(0x08)
	int32_t MillisecondsDurationAnimateFullTracker; // 0x6d8(0x04)
	char pad_6DC[0x4]; // 0x6dc(0x04)
	double SecondsDelayAfterAnimateFullTracker; // 0x6e0(0x08)
	int32_t MillisecondsDurationAnimateProgressContracts; // 0x6e8(0x04)
	char pad_6EC[0x4]; // 0x6ec(0x04)
	double SecondsDelayAfterAnimateProgressContracts; // 0x6f0(0x08)
	bool IsPremierMatch; // 0x6f8(0x01)
	char pad_6F9[0x7]; // 0x6f9(0x07)
	struct FString MatchID; // 0x700(0x10)
	bool IsCrestProgressEnabled; // 0x710(0x01)
	char pad_711[0x7]; // 0x711(0x07)
	struct UMatchDetailsPremierCrestProgress_C* MatchDetailsPremierCrestProgress; // 0x718(0x08)
	bool IsRanked; // 0x720(0x01)

	void Get Match ID From Processed Match Details DTO(struct FString& MatchID); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.Get Match ID From Processed Match Details DTO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Call RMS Fail Fallback to Populate Match Results(); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.Call RMS Fail Fallback to Populate Match Results // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsRanked(bool IsRanked); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.SetIsRanked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitPremierProgression(); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.InitPremierProgression // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsPremierMatch(bool IsPremierMatch, struct FString MatchID); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.SetIsPremierMatch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UDoughFlyOutBase_C* Get Lazy Loaded Dough Fly Out Widget(); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.Get Lazy Loaded Dough Fly Out Widget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ShowErrorForMMR(); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.ShowErrorForMMR // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool Should Show Daily Rewards(); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.Should Show Daily Rewards // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Apply Daily Rewards Match Results(struct UDailyRewardsProcessedMatchModel* ProcessedMatch); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.Apply Daily Rewards Match Results // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Poll Daily Rewards Match Results(); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.Poll Daily Rewards Match Results // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Read Daily Rewards Match Results(struct UDailyRewardsProcessedMatchModel*& MatchResults, bool& IsValid); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.Read Daily Rewards Match Results // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Fetch Daily Rewards Match Results(); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.Fetch Daily Rewards Match Results // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetMatchTotals(); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.SetMatchTotals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Skip Ceremony(bool bSkipCeremony); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.Set Skip Ceremony // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyAccountXPMatchResults(struct FAccountXPMatch MatchResults); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.ApplyAccountXPMatchResults // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PollAccount XPMatch Results(); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.PollAccount XPMatch Results // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReadAccount XPMatch Results(struct FAccountXPMatch& MatchResults, bool& IsValid); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.ReadAccount XPMatch Results // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void FetchAccountXPMatchResults(); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.FetchAccountXPMatchResults // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HasAllRequiredData(bool& HasData); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.HasAllRequiredData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void OnDataReceived(); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.OnDataReceived // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyMMRMatchResults(); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.ApplyMMRMatchResults // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReadMMRMatchResults(struct FMMRMatchInfo& MatchResult, bool& IsValid); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.ReadMMRMatchResults // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void FetchMMRMatchResults(); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.FetchMMRMatchResults // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldShowPremierCeremony(bool& ShowCrest); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.ShouldShowPremierCeremony // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ShouldShowRankCeremony(bool& ShowRank); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.ShouldShowRankCeremony // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ShowEndState(); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.ShowEndState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OpenRewardsSummary(); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.OpenRewardsSummary // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyContractMatchResults(struct UContractMatchResultsViewModel* Results); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.ApplyContractMatchResults // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PollContractMatchResults(); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.PollContractMatchResults // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReadContractMatchResults(struct UContractMatchResultsViewModel*& ContractMatchResults); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.ReadContractMatchResults // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void FetchContractMatchResults(); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.FetchContractMatchResults // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetNextHighestHighlight(struct TMap<enum class MatchDetailsHighlightEnum, struct FMatchDetailsHighlight> HighlightsMap, struct FMatchDetailsHighlight& ReturnHighlight, bool& NewParam1); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.GetNextHighestHighlight // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TestCeremony_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.BndEvt__TestCeremony_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void XPWentUp(); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.XPWentUp // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRankCeremonyCompleted(); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.OnRankCeremonyCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAccountXPAnimationCompleted(); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.OnAccountXPAnimationCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BeginCeremony(); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.BeginCeremony // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void EventOnInit(); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.EventOnInit // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_3_EnabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_3_EnabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_4_DisabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_4_DisabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__MatchDetailsProgressionTab_PremierLazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_0_EnabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.BndEvt__MatchDetailsProgressionTab_PremierLazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_0_EnabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__MatchDetailsProgressionTab_PremierLazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_1_DisabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.BndEvt__MatchDetailsProgressionTab_PremierLazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_1_DisabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_MatchDetailsProgressionTab(int32_t EntryPoint); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.ExecuteUbergraph_MatchDetailsProgressionTab // (Final|UbergraphFunction) // @ game+0x19be2f0
	void ForceChangeTab__DelegateSignature(struct FString TabDisplayName); // Function MatchDetailsProgressionTab.MatchDetailsProgressionTab_C.ForceChangeTab__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

