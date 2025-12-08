// WidgetBlueprintGeneratedClass MatchDetailsBombMode.MatchDetailsBombMode_C
// Size: 0x549 (Inherited: 0x318)
struct UMatchDetailsBombMode_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* premiereog; // 0x320(0x08)
	struct UWidgetAnimation* SeasonRankFadeIn; // 0x328(0x08)
	struct UWidgetAnimation* PlayAgainFadeIn; // 0x330(0x08)
	struct UWidgetAnimation* MVPScreen; // 0x338(0x08)
	struct UWidgetAnimation* Intro_MatchDetailsBombmode; // 0x340(0x08)
	struct UImage* Background; // 0x348(0x08)
	struct UCompetitiveTierIconSubscriber_C* CompetitiveTierIconSubscriber; // 0x350(0x08)
	struct UDynamicConfigSwitcher_C* DynamicConfigSwitcher; // 0x358(0x08)
	struct UDynamicConfigSwitcher_C* DynamicConfigSwitcher_646; // 0x360(0x08)
	struct ULazyPlatformWidgetLoader_Universal_C* GameScoreLazyLoader; // 0x368(0x08)
	struct UImage* Image_205; // 0x370(0x08)
	struct UImage* Image_313; // 0x378(0x08)
	struct UImage* Image_837; // 0x380(0x08)
	struct UImage* IMG_RoundDetails_BG; // 0x388(0x08)
	struct UOverlay* LoadedContent; // 0x390(0x08)
	struct UWidgetSwitcher* LoadingSwitcher; // 0x398(0x08)
	struct UImage* loadingthrobber; // 0x3a0(0x08)
	struct UMatchDetailsMVPScreenV2_C* MatchDetailsMVPScreenV2; // 0x3a8(0x08)
	struct UMenuAnchor* MenuAnchor_SeasonViewInCareer; // 0x3b0(0x08)
	struct UMenuOrnament_C* MenuOrnament; // 0x3b8(0x08)
	struct USizeBox* PlayAgainSizeBox; // 0x3c0(0x08)
	struct ULazyPlatformWidgetLoader_Universal_C* PlayAgainWidgetLazyLoader; // 0x3c8(0x08)
	struct UWidgetSwitcher* PlayAgainWidgetSwitcher; // 0x3d0(0x08)
	struct ULazyPlatformWidgetLoader_Universal_C* PremierEOG_Lazy; // 0x3d8(0x08)
	struct USizeBox* RankSection; // 0x3e0(0x08)
	struct ULazyPlatformWidgetLoader_Universal_C* ReplayButtonLazyLoader; // 0x3e8(0x08)
	struct USharedButtonMaster_C* ReturnToTournamentsHubButton; // 0x3f0(0x08)
	struct UVerticalBox* SeasonRankSection; // 0x3f8(0x08)
	struct UTextBlock* SeasonRankWinText; // 0x400(0x08)
	struct UButton* SeasonWinCareerButton; // 0x408(0x08)
	struct UHorizontalBox* SeasonWinSection; // 0x410(0x08)
	struct USeasonWinTriangle_C* SeasonWinTriangle; // 0x418(0x08)
	struct UTabbedContent_C* TabbedContent; // 0x420(0x08)
	struct TMap<struct FString, struct UTabButtonBase_C*> TabNameToButtonMap; // 0x428(0x50)
	struct UTabButton_C* CurrentActiveTab; // 0x478(0x08)
	struct FMulticastInlineDelegate ActivateTab; // 0x480(0x10)
	struct UMatchDetailsViewModel* ViewModel; // 0x490(0x08)
	struct FString VictimToInitializeTimeline; // 0x498(0x10)
	int32_t RoundNumToInitializeTimeline; // 0x4a8(0x04)
	char pad_4AC[0x4]; // 0x4ac(0x04)
	struct FString ExpectedFirstTab; // 0x4b0(0x10)
	struct FString ProgressionTab; // 0x4c0(0x10)
	struct UTabButtonBase_C* NewVar_1; // 0x4d0(0x08)
	struct FGameModeMatchDetailsConfig ModeConfig; // 0x4d8(0x20)
	bool bSkipCeremony; // 0x4f8(0x01)
	bool IsEndOfGame; // 0x4f9(0x01)
	bool bIsRosterMatch; // 0x4fa(0x01)
	bool bIsStillInTournament; // 0x4fb(0x01)
	bool bWonMatch; // 0x4fc(0x01)
	bool bPremierDataReady; // 0x4fd(0x01)
	bool bIsTournamentMatch; // 0x4fe(0x01)
	char pad_4FF[0x1]; // 0x4ff(0x01)
	struct FString MatchID; // 0x500(0x10)
	struct FString PremierTournamentID; // 0x510(0x10)
	struct FString PremierMatchupID; // 0x520(0x10)
	struct URosterModel* RosterModel; // 0x530(0x08)
	enum class EMatchupNextSteps PremierTournamentNextSteps; // 0x538(0x01)
	char pad_539[0x7]; // 0x539(0x07)
	struct UPremierEOG_Base_C* PremierEOG_Instance; // 0x540(0x08)
	bool ScoreboardV2; // 0x548(0x01)

	void SwitchActiveTabAndGoToTabs(); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.SwitchActiveTabAndGoToTabs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HideFinalScreenAndSwitchActiveTab(struct UWidget* FinalScreen); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.HideFinalScreenAndSwitchActiveTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetScreenUIDetails(bool& Show MVP Screen, bool& Show Play Again Button); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.GetScreenUIDetails // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void HideMVPScreenAndSwitchActiveTab(); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.HideMVPScreenAndSwitchActiveTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheckForEOGSurvey(); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.CheckForEOGSurvey // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* On_MenuAnchor_SeasonViewInCareer_GetMenuContent_1(); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.On_MenuAnchor_SeasonViewInCareer_GetMenuContent_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ShowPlayAgainButton(); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.ShowPlayAgainButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddTelemetryToTabButton(struct UTabButtonBase_C* BaseTabButton, struct FString ActionTarget); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.AddTelemetryToTabButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateNewTabWithCallback(struct FText DisplayText, struct FString TabKey, struct UUserWidget* TabWidgetClass, struct FDelegate& Callback, bool IsLastTab, struct UTabButtonBase_C*& TabButton); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.CreateNewTabWithCallback // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitScoreboardRefactorTab(struct UUserWidget* Tab); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.InitScoreboardRefactorTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitTab(struct UUserWidget* Tab); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.InitTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetMatchDetails(struct UMatchDetailsViewModel*& MatchDetails, struct FGameModeMatchDetailsConfig ModeConfig, bool IsEndOfGame); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.SetMatchDetails // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Play Through Premier EOG Flow(); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.Play Through Premier EOG Flow // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Finish Premier EOG Animation(); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.Finish Premier EOG Animation // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnSetMatchDetails(); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.OnSetMatchDetails // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ForceChangeTab(struct FString TabName); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.ForceChangeTab // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnChildForceChangeTab(struct FString TabDisplayName); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.OnChildForceChangeTab // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent_1(struct UUserWidget* TabContent); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InteractionClicked(struct FString Victim, int32_t RoundNum); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.InteractionClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTimeline(struct UUserWidget* TabContent); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.OnTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnProgressionActivated(struct UUserWidget* TabContent); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.OnProgressionActivated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void WidgetAnimationEvt_MVPScreen_K2Node_WidgetAnimationEvent_1(); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.WidgetAnimationEvt_MVPScreen_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x19be2f0
	void OnSummaryActivated(struct UUserWidget* TabContent); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.OnSummaryActivated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent(struct FString TabDisplayName); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_644_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.BndEvt__Button_644_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__SeasonWinCareerButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.BndEvt__SeasonWinCareerButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__SeasonWinCareerButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.BndEvt__SeasonWinCareerButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnTabActivated(struct UUserWidget* TabContent); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.OnTabActivated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__MatchDetailsBombMode_ReturnToTournamentsHubButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.BndEvt__MatchDetailsBombMode_ReturnToTournamentsHubButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void FinishMVPAnimation(); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.FinishMVPAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_MatchDetailsBombMode(int32_t EntryPoint); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.ExecuteUbergraph_MatchDetailsBombMode // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void ActivateTab__DelegateSignature(struct FText TabDisplayName); // Function MatchDetailsBombMode.MatchDetailsBombMode_C.ActivateTab__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

