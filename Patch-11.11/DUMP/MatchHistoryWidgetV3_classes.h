// WidgetBlueprintGeneratedClass MatchHistoryWidgetV3.MatchHistoryWidgetV3_C
// Size: 0x448 (Inherited: 0x318)
struct UMatchHistoryWidgetV3_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* dot_left; // 0x320(0x08)
	struct UImage* dot_right; // 0x328(0x08)
	struct UDynamicConfigSwitcher_C* DynamicConfigSwitcher; // 0x330(0x08)
	struct UDynamicConfigSwitcher_C* DynamicConfigSwitcher_156; // 0x338(0x08)
	struct UVerticalBox* ErrorBox; // 0x340(0x08)
	struct UImage* FullScreenLoader; // 0x348(0x08)
	struct UImage* Image_112; // 0x350(0x08)
	struct ULazyDynamicWidgetSwitcher_C* LazyDynamicWidgetSwitcher; // 0x358(0x08)
	struct UImage* line_divider; // 0x360(0x08)
	struct UImage* Loader; // 0x368(0x08)
	struct UVerticalBox* MatchesContainer; // 0x370(0x08)
	struct UTextBlock* NoMatchesText; // 0x378(0x08)
	struct UVerticalBox* PageContentVBox; // 0x380(0x08)
	struct UWidgetSwitcher* PageLoadingSwitcher; // 0x388(0x08)
	struct UQueueSelectOptions_C* QueueSelectOptions; // 0x390(0x08)
	struct UWidgetSwitcher* RankProgressWidgetSwitcher_2; // 0x398(0x08)
	struct USharedClickableCheckboxButton_C* ReplayFilterCheckboxButton; // 0x3a0(0x08)
	struct UHorizontalBox* ReplayFilterContainer; // 0x3a8(0x08)
	struct UTextBlock* TierVisibilityRequirementText; // 0x3b0(0x08)
	struct UBorder* TopLevelBorder; // 0x3b8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x3c0(0x08)
	struct UMatchHistoryViewModel* MatchHistoryViewModel; // 0x3c8(0x08)
	struct UMatchHistoryViewController* MatchHistoryController; // 0x3d0(0x08)
	struct FMulticastInlineDelegate OnMatchClicked; // 0x3d8(0x10)
	struct UAkAudioEvent* AUD_Click_Match_History_Open; // 0x3e8(0x08)
	struct UAkAudioEvent* AUD_Click_Match_History_Close; // 0x3f0(0x08)
	struct FMulticastInlineDelegate OnBackRequested; // 0x3f8(0x10)
	bool IsPopup; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct USeasonHistory_C* SeasonHistory; // 0x410(0x08)
	bool MMRDataLoaded; // 0x418(0x01)
	bool MatchHistoryLoaded; // 0x419(0x01)
	char pad_41A[0x6]; // 0x41a(0x06)
	struct UCompetitiveTierIconLarge_C* CompetitiveTierLarge; // 0x420(0x08)
	struct UCompetitiveTierIconLargeV2_C* CompetitiveTierLargeV2; // 0x428(0x08)
	bool HasInitiallyLoaded; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct TArray<None> Added Matches; // 0x438(0x10)

	void IsReplayFileAvailableForPlayback(struct UMatchViewModel* Match, bool& Available); // Function MatchHistoryWidgetV3.MatchHistoryWidgetV3_C.IsReplayFileAvailableForPlayback // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void OnChildMatchClicked(struct FString MatchID); // Function MatchHistoryWidgetV3.MatchHistoryWidgetV3_C.OnChildMatchClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PopulateMatchesContainer(); // Function MatchHistoryWidgetV3.MatchHistoryWidgetV3_C.PopulateMatchesContainer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateLoading(); // Function MatchHistoryWidgetV3.MatchHistoryWidgetV3_C.UpdateLoading // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateView(); // Function MatchHistoryWidgetV3.MatchHistoryWidgetV3_C.UpdateView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyLoadingVisuals(bool IsLoading, bool IsError); // Function MatchHistoryWidgetV3.MatchHistoryWidgetV3_C.ApplyLoadingVisuals // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMatchClosed(); // Function MatchHistoryWidgetV3.MatchHistoryWidgetV3_C.OnMatchClosed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLoadingStateChanged(); // Function MatchHistoryWidgetV3.MatchHistoryWidgetV3_C.OnLoadingStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnError(); // Function MatchHistoryWidgetV3.MatchHistoryWidgetV3_C.OnError // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMatchesAdded(struct TArray<struct UMatchViewModel*>& AddedMatches); // Function MatchHistoryWidgetV3.MatchHistoryWidgetV3_C.OnMatchesAdded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function MatchHistoryWidgetV3.MatchHistoryWidgetV3_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent_1(); // Function MatchHistoryWidgetV3.MatchHistoryWidgetV3_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init(struct UMatchHistoryViewController* NewParam, bool ShowLeaderboard); // Function MatchHistoryWidgetV3.MatchHistoryWidgetV3_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_0_EnabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function MatchHistoryWidgetV3.MatchHistoryWidgetV3_C.BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_0_EnabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_1_DisabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function MatchHistoryWidgetV3.MatchHistoryWidgetV3_C.BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_1_DisabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnQueueSelectionChanged(); // Function MatchHistoryWidgetV3.MatchHistoryWidgetV3_C.OnQueueSelectionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnReplayFilterChanged(bool NewState); // Function MatchHistoryWidgetV3.MatchHistoryWidgetV3_C.OnReplayFilterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_MatchHistoryWidgetV3(int32_t EntryPoint); // Function MatchHistoryWidgetV3.MatchHistoryWidgetV3_C.ExecuteUbergraph_MatchHistoryWidgetV3 // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnBackRequested__DelegateSignature(); // Function MatchHistoryWidgetV3.MatchHistoryWidgetV3_C.OnBackRequested__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMatchClicked__DelegateSignature(struct FString MatchID, struct FString Subject); // Function MatchHistoryWidgetV3.MatchHistoryWidgetV3_C.OnMatchClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

