// WidgetBlueprintGeneratedClass PremierEOG.PremierEOG_C
// Size: 0x64c (Inherited: 0x539)
struct UPremierEOG_C : UPremierEOG_Base_C {
	char pad_539[0x7]; // 0x539(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x540(0x08)
	struct UWidgetAnimation* HideContinueButton; // 0x548(0x08)
	struct UWidgetAnimation* Qualified; // 0x550(0x08)
	struct UWidgetAnimation* FaceoffResultsFadeOut; // 0x558(0x08)
	struct UWidgetAnimation* ShowContinueButton; // 0x560(0x08)
	struct UWidgetAnimation* PointsEarned; // 0x568(0x08)
	struct UWidgetAnimation* WinLossCons; // 0x570(0x08)
	struct UWidgetAnimation* FaceoffResults; // 0x578(0x08)
	struct UWBP_MenuButton_Premier_C* ContinueButton; // 0x580(0x08)
	struct UTextBlock* ErrorState; // 0x588(0x08)
	struct UOverlay* LoadedState; // 0x590(0x08)
	struct ULoadingThrobberSmall_C* LoadingState; // 0x598(0x08)
	struct UGamepadNavigationWidgetSwitcher* LoadingSwitcher; // 0x5a0(0x08)
	struct UPremierEOG_CrestCeremony_C* PremierEOG_CrestCeremony; // 0x5a8(0x08)
	struct UPremierEOG_FaceoffResults_C* PremierEOG_FaceoffResults; // 0x5b0(0x08)
	struct UPremierEOG_PointsEarned_C* PremierEOG_PointsEarned; // 0x5b8(0x08)
	struct UPremierEOG_Qualified_C* PremierEOG_Qualified; // 0x5c0(0x08)
	struct UPremierEOG_WinLossCons_C* PremierEOG_WinLossCons; // 0x5c8(0x08)
	struct UMatchDetailsViewModel* MatchDetailsViewModel; // 0x5d0(0x08)
	bool bMatchDataReady; // 0x5d8(0x01)
	bool bIsTournamentMatch; // 0x5d9(0x01)
	char pad_5DA[0x6]; // 0x5da(0x06)
	struct FString tournamentid; // 0x5e0(0x10)
	struct FString MatchupID; // 0x5f0(0x10)
	struct FString MatchID; // 0x600(0x10)
	bool bWonMatch; // 0x610(0x01)
	enum class EMatchupNextSteps TournamentNextSteps; // 0x611(0x01)
	char pad_612[0x6]; // 0x612(0x06)
	struct UWidgetAnimation* CurrentAnimation; // 0x618(0x08)
	bool EOGComplete; // 0x620(0x01)
	bool bNewlyQualified; // 0x621(0x01)
	bool IsScrimMatch; // 0x622(0x01)
	char pad_623[0x5]; // 0x623(0x05)
	struct UVM_PremierCrests_C* PremierCrestsVM; // 0x628(0x08)
	enum class EPremierEventType Event Type; // 0x630(0x01)
	bool bPremierCrestDataReady; // 0x631(0x01)
	char pad_632[0x6]; // 0x632(0x06)
	struct FTimerHandle ModelHasMatchErrorTimer; // 0x638(0x08)
	struct FTimerHandle VMModelHasMatchPollingTimer; // 0x640(0x08)
	int32_t FetchAttempts_CrestsVM; // 0x648(0x04)

	void PollCrestsVMModel(); // Function PremierEOG.PremierEOG_C.PollCrestsVMModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowErrorForPremierData(); // Function PremierEOG.PremierEOG_C.ShowErrorForPremierData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheckAndClearModelTimer(struct UPremierRosterViewModel* UpdatedPremierRosterModel); // Function PremierEOG.PremierEOG_C.CheckAndClearModelTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PremierRosterModelHasMatch(struct UPremierRosterViewModel* PremierRosterViewModel, bool& MatchFound); // Function PremierEOG.PremierEOG_C.PremierRosterModelHasMatch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void LoadScreensData(); // Function PremierEOG.PremierEOG_C.LoadScreensData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitData(struct UMatchDetailsViewModel* MatchDetailsViewModel); // Function PremierEOG.PremierEOG_C.InitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Skip CrestCeremony(); // Function PremierEOG.PremierEOG_C.Skip CrestCeremony // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CrestCeremonyComplete(); // Function PremierEOG.PremierEOG_C.CrestCeremonyComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayScreen_Qualified(); // Function PremierEOG.PremierEOG_C.PlayScreen_Qualified // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void WidgetAnimationEvt_Qualified_K2Node_WidgetAnimationEvent_2(); // Function PremierEOG.PremierEOG_C.WidgetAnimationEvt_Qualified_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x19be2f0
	void PlayScreen_PointsEarned(); // Function PremierEOG.PremierEOG_C.PlayScreen_PointsEarned // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Skip PointsEarned(); // Function PremierEOG.PremierEOG_C.Skip PointsEarned // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void WidgetAnimationEvt_PointsEarned_K2Node_WidgetAnimationEvent_6(); // Function PremierEOG.PremierEOG_C.WidgetAnimationEvt_PointsEarned_K2Node_WidgetAnimationEvent_6 // (BlueprintEvent) // @ game+0x19be2f0
	void New Qualification Progress Complete(); // Function PremierEOG.PremierEOG_C.New Qualification Progress Complete // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Play Stinger(); // Function PremierEOG.PremierEOG_C.Play Stinger // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set NewlyQualified(bool IsNewlyQualified); // Function PremierEOG.PremierEOG_C.Set NewlyQualified // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayScreen_FaceoffResults(); // Function PremierEOG.PremierEOG_C.PlayScreen_FaceoffResults // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void WidgetAnimationEvt_FaceoffResults_K2Node_WidgetAnimationEvent_4(); // Function PremierEOG.PremierEOG_C.WidgetAnimationEvt_FaceoffResults_K2Node_WidgetAnimationEvent_4 // (BlueprintEvent) // @ game+0x19be2f0
	void FadeFaceoffResults(); // Function PremierEOG.PremierEOG_C.FadeFaceoffResults // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void WidgetAnimationEvt_FaceoffResultsFadeOut_K2Node_WidgetAnimationEvent_1(); // Function PremierEOG.PremierEOG_C.WidgetAnimationEvt_FaceoffResultsFadeOut_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function PremierEOG.PremierEOG_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PlayScreen_WinLossCons(); // Function PremierEOG.PremierEOG_C.PlayScreen_WinLossCons // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Skip WinLossCons(); // Function PremierEOG.PremierEOG_C.Skip WinLossCons // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Finish Premier EOG(); // Function PremierEOG.PremierEOG_C.Finish Premier EOG // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Play Through Premier EOG Flow(struct UMatchDetailsViewModel* Match Details View Model); // Function PremierEOG.PremierEOG_C.Play Through Premier EOG Flow // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void WidgetAnimationEvt_WinLossCons_K2Node_WidgetAnimationEvent_5(); // Function PremierEOG.PremierEOG_C.WidgetAnimationEvt_WinLossCons_K2Node_WidgetAnimationEvent_5 // (BlueprintEvent) // @ game+0x19be2f0
	void HandlePopupModals(); // Function PremierEOG.PremierEOG_C.HandlePopupModals // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CloseLossModal(); // Function PremierEOG.PremierEOG_C.CloseLossModal // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CloseConsolationModal(); // Function PremierEOG.PremierEOG_C.CloseConsolationModal // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Show Consolation Bracket(); // Function PremierEOG.PremierEOG_C.Show Consolation Bracket // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CloseBracketModal(); // Function PremierEOG.PremierEOG_C.CloseBracketModal // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PremierEOG_ContinueButton_K2Node_ComponentBoundEvent_0_OnUniversalButtonVoidEvent__DelegateSignature(); // Function PremierEOG.PremierEOG_C.BndEvt__PremierEOG_ContinueButton_K2Node_ComponentBoundEvent_0_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void PlayScreen_CrestCeremony(); // Function PremierEOG.PremierEOG_C.PlayScreen_CrestCeremony // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_PremierEOG(int32_t EntryPoint); // Function PremierEOG.PremierEOG_C.ExecuteUbergraph_PremierEOG // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

