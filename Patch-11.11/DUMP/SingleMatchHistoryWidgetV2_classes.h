// WidgetBlueprintGeneratedClass SingleMatchHistoryWidgetV2.SingleMatchHistoryWidgetV2_C
// Size: 0x456 (Inherited: 0x318)
struct USingleMatchHistoryWidgetV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* hover; // 0x320(0x08)
	struct UWidgetAnimation* Intro; // 0x328(0x08)
	struct UTextBlock* AssistsText; // 0x330(0x08)
	struct UButton* Button_1; // 0x338(0x08)
	struct UCharacterPortraitIcon_C* CharacterPortraitIcon; // 0x340(0x08)
	struct UVerticalBox* CompetitiveIconBox; // 0x348(0x08)
	struct UCompetitiveTierIconSmallV2_C* CompetitiveTierIconSmallV2; // 0x350(0x08)
	struct UTextBlock* DeathsText; // 0x358(0x08)
	struct UOverlay* ErrorLoadingMatchOverlay; // 0x360(0x08)
	struct UGameModeIcon_C* GameModeIcon; // 0x368(0x08)
	struct USizeBox* GameModeIcon_SizeBox; // 0x370(0x08)
	struct UImage* HoverBorder; // 0x378(0x08)
	struct UImage* icon_expand; // 0x380(0x08)
	struct UWidgetSwitcher* IconWidgetSwitcher; // 0x388(0x08)
	struct UImage* Image_238; // 0x390(0x08)
	struct UImage* Image_280; // 0x398(0x08)
	struct UTextBlock* KillsText; // 0x3a0(0x08)
	struct UTextBlock* LossesText; // 0x3a8(0x08)
	struct UImage* MapImage; // 0x3b0(0x08)
	struct UOverlay* MatchInfoOverlay; // 0x3b8(0x08)
	struct UTextBlock* matchmvp; // 0x3c0(0x08)
	struct UWidgetSwitcher* PerformanceIndicator; // 0x3c8(0x08)
	struct ULazyPlatformWidgetLoaderAsOverlay_Universal_C* PlaybackStatusLazyLoader; // 0x3d0(0x08)
	struct UPremierGameModeIcon_C* PremierGameModeIcon; // 0x3d8(0x08)
	struct USizeBox* PremierIcon_SizeBox; // 0x3e0(0x08)
	struct UTelemetryButton* RetryMatchDetails; // 0x3e8(0x08)
	struct UTextBlock* RoundHyphenLabel; // 0x3f0(0x08)
	struct UTextBlock* RoundResult; // 0x3f8(0x08)
	struct UTextBlock* ScoreText; // 0x400(0x08)
	struct UTextBlock* TEAMMVP; // 0x408(0x08)
	struct UTextBlock* UnknownPerformance; // 0x410(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_112; // 0x418(0x08)
	struct UImage* WinLosecolorbar; // 0x420(0x08)
	struct UImage* WinLossBG; // 0x428(0x08)
	struct UTextBlock* WinsText; // 0x430(0x08)
	struct UMatchViewModel* Match; // 0x438(0x08)
	struct FMulticastInlineDelegate OnMatchClicked; // 0x440(0x10)
	int32_t TeamHighScore; // 0x450(0x04)
	enum class EAresPlayerRelationship HighScoreTeammate; // 0x454(0x01)
	bool bIsHovered; // 0x455(0x01)

	void SetWinLoseTextColor(bool IsWin); // Function SingleMatchHistoryWidgetV2.SingleMatchHistoryWidgetV2_C.SetWinLoseTextColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void LazyLoadPlaybackStatus(struct FString Match ID); // Function SingleMatchHistoryWidgetV2.SingleMatchHistoryWidgetV2_C.LazyLoadPlaybackStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMapImageLoaded(struct UMapHandle* MapUIData); // Function SingleMatchHistoryWidgetV2.SingleMatchHistoryWidgetV2_C.OnMapImageLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetUpMatchHistoryEntry(struct UMatchViewModel* Match); // Function SingleMatchHistoryWidgetV2.SingleMatchHistoryWidgetV2_C.SetUpMatchHistoryEntry // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCompetitiveTier(); // Function SingleMatchHistoryWidgetV2.SingleMatchHistoryWidgetV2_C.SetCompetitiveTier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnContentLoaded(); // Function SingleMatchHistoryWidgetV2.SingleMatchHistoryWidgetV2_C.OnContentLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetMatchResult(enum class EMatchOutcome DidPlayerWinMatch); // Function SingleMatchHistoryWidgetV2.SingleMatchHistoryWidgetV2_C.SetMatchResult // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetWinsLosses(int32_t RoundsWin, int32_t RoundsLost); // Function SingleMatchHistoryWidgetV2.SingleMatchHistoryWidgetV2_C.SetWinsLosses // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetKDA(int32_t Kills, int32_t Deaths, int32_t Assists); // Function SingleMatchHistoryWidgetV2.SingleMatchHistoryWidgetV2_C.SetKDA // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function SingleMatchHistoryWidgetV2.SingleMatchHistoryWidgetV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_119_OnButtonHoverEvent__DelegateSignature(); // Function SingleMatchHistoryWidgetV2.SingleMatchHistoryWidgetV2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_119_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_152_OnButtonHoverEvent__DelegateSignature(); // Function SingleMatchHistoryWidgetV2.SingleMatchHistoryWidgetV2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_152_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature(); // Function SingleMatchHistoryWidgetV2.SingleMatchHistoryWidgetV2_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RetryMatchDetails_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function SingleMatchHistoryWidgetV2.SingleMatchHistoryWidgetV2_C.BndEvt__RetryMatchDetails_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Successfully fetched match details(struct FMatchDetailsDTO& MatchDetails); // Function SingleMatchHistoryWidgetV2.SingleMatchHistoryWidgetV2_C.Successfully fetched match details // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Failed to fetch match details(); // Function SingleMatchHistoryWidgetV2.SingleMatchHistoryWidgetV2_C.Failed to fetch match details // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RetryMatchDetails_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function SingleMatchHistoryWidgetV2.SingleMatchHistoryWidgetV2_C.BndEvt__RetryMatchDetails_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RetryMatchDetails_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function SingleMatchHistoryWidgetV2.SingleMatchHistoryWidgetV2_C.BndEvt__RetryMatchDetails_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void WidgetAnimationEvt_Hover_K2Node_WidgetAnimationEvent_1(); // Function SingleMatchHistoryWidgetV2.SingleMatchHistoryWidgetV2_C.WidgetAnimationEvt_Hover_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_SingleMatchHistoryWidgetV2(int32_t EntryPoint); // Function SingleMatchHistoryWidgetV2.SingleMatchHistoryWidgetV2_C.ExecuteUbergraph_SingleMatchHistoryWidgetV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnMatchClicked__DelegateSignature(struct FString MatchID); // Function SingleMatchHistoryWidgetV2.SingleMatchHistoryWidgetV2_C.OnMatchClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

