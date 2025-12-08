// WidgetBlueprintGeneratedClass RosterHistoryMatchEntry.RosterHistoryMatchEntry_C
// Size: 0x48c (Inherited: 0x318)
struct URosterHistoryMatchEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* BestOfText; // 0x320(0x08)
	struct UButton* Button_1; // 0x328(0x08)
	struct UContextMenuAnchor_C* ContextMenuAnchor; // 0x330(0x08)
	struct UOverlay* ErrorLoadingMatchOverlay; // 0x338(0x08)
	struct UImage* HoverBorder; // 0x340(0x08)
	struct UImage* Icon_Expand_Arrow; // 0x348(0x08)
	struct UImage* Image_280; // 0x350(0x08)
	struct UImage* IMG_BgColor; // 0x358(0x08)
	struct UImage* IMG_WinLossGradient; // 0x360(0x08)
	struct UTextBlock* LossesText; // 0x368(0x08)
	struct UTextBlock* LPEarned; // 0x370(0x08)
	struct UTextBlock* LPValue; // 0x378(0x08)
	struct UImage* MapImage; // 0x380(0x08)
	struct UTextBlock* MapName; // 0x388(0x08)
	struct USharedBlurBg_C* MatchBG; // 0x390(0x08)
	struct UVerticalBox* MatchesContainer; // 0x398(0x08)
	struct UWidgetSwitcher* O_ExpandWrap; // 0x3a0(0x08)
	struct UOverlay* O_MatchEntry; // 0x3a8(0x08)
	struct UHorizontalBox* PointsHB; // 0x3b0(0x08)
	struct UWidgetSwitcher* PSorPracticeSwitcher; // 0x3b8(0x08)
	struct UTextBlock* RosterName; // 0x3c0(0x08)
	struct UTextBlock* RosterTag; // 0x3c8(0x08)
	struct UTextBlock* RoundName; // 0x3d0(0x08)
	struct USizeBox* SB_MainWrap; // 0x3d8(0x08)
	struct USpacer* Spacer1; // 0x3e0(0x08)
	struct USpacer* Spacer2; // 0x3e8(0x08)
	struct UAresCommonText* T_RoundResult; // 0x3f0(0x08)
	struct UTextBlock* TB_SCRIMtext; // 0x3f8(0x08)
	struct USharedBlurBg_C* TournamentBG_2; // 0x400(0x08)
	struct UVerticalBox* TournamentDisplay; // 0x408(0x08)
	struct UTournamentsTeamCustomization_C* TournamentsTeamCustomization; // 0x410(0x08)
	struct UVerticalBox* VB_TeamName; // 0x418(0x08)
	struct UTextBlock* VerseText; // 0x420(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_bgSwitcherBasedOnEntryType; // 0x428(0x08)
	struct UTextBlock* WinsText; // 0x430(0x08)
	struct UWidgetSwitcher* WS_DivisionOrTournyStage; // 0x438(0x08)
	struct UWidgetSwitcher* WS_MatchEntryState; // 0x440(0x08)
	struct FMulticastInlineDelegate OnMatchClicked; // 0x448(0x10)
	bool bIsHovered; // 0x458(0x01)
	bool bIsTournamentEntry; // 0x459(0x01)
	char pad_45A[0x6]; // 0x45a(0x06)
	struct UPremierRosterMatchHistoryEntryOld* MatchHistoryEntry; // 0x460(0x08)
	struct TArray<struct UPremierRosterMatchHistoryEntryOld*> MatchHistoryEntries; // 0x468(0x10)
	enum class EPremierEventType EventType; // 0x478(0x01)
	bool bIsBestOf; // 0x479(0x01)
	char pad_47A[0x2]; // 0x47a(0x02)
	struct FMargin EntryPadding; // 0x47c(0x10)

	void HandleReportTeamClicked(); // Function RosterHistoryMatchEntry.RosterHistoryMatchEntry_C.HandleReportTeamClicked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DetermineBestOfNumber(enum class ETournamentRound Tournament Round, int32_t& BestOfNumber); // Function RosterHistoryMatchEntry.RosterHistoryMatchEntry_C.DetermineBestOfNumber // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HandleBestOfsEntries(); // Function RosterHistoryMatchEntry.RosterHistoryMatchEntry_C.HandleBestOfsEntries // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DetermineRoundType(enum class ETournamentRound& TournamentRound); // Function RosterHistoryMatchEntry.RosterHistoryMatchEntry_C.DetermineRoundType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void DetermineEventType(enum class EPremierEventType& EventType); // Function RosterHistoryMatchEntry.RosterHistoryMatchEntry_C.DetermineEventType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void DetermineEnemyInfo(struct FTournamentRosterInfo& EnemyInfo); // Function RosterHistoryMatchEntry.RosterHistoryMatchEntry_C.DetermineEnemyInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void DetermineWinLoss(int32_t& Wins, int32_t& Losses); // Function RosterHistoryMatchEntry.RosterHistoryMatchEntry_C.DetermineWinLoss // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetEnemyTeamInfo(); // Function RosterHistoryMatchEntry.RosterHistoryMatchEntry_C.SetEnemyTeamInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetEntryInfo(); // Function RosterHistoryMatchEntry.RosterHistoryMatchEntry_C.SetEntryInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMapDataLoaded(struct UMapHandle* MapUIData); // Function RosterHistoryMatchEntry.RosterHistoryMatchEntry_C.OnMapDataLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetMapBackgroundImage(); // Function RosterHistoryMatchEntry.RosterHistoryMatchEntry_C.SetMapBackgroundImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StyleForEntryType(bool IsTournamentEntry, enum class EPremierEventType EventType); // Function RosterHistoryMatchEntry.RosterHistoryMatchEntry_C.StyleForEntryType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetUpMatchHistoryEntry(); // Function RosterHistoryMatchEntry.RosterHistoryMatchEntry_C.SetUpMatchHistoryEntry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetEntryResults(); // Function RosterHistoryMatchEntry.RosterHistoryMatchEntry_C.SetEntryResults // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function RosterHistoryMatchEntry.RosterHistoryMatchEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function RosterHistoryMatchEntry.RosterHistoryMatchEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void WidgetAnimationEvt_Hover_K2Node_WidgetAnimationEvent_1(); // Function RosterHistoryMatchEntry.RosterHistoryMatchEntry_C.WidgetAnimationEvt_Hover_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x19be2f0
	void SubMatchEntryClicked(struct FString MatchID); // Function RosterHistoryMatchEntry.RosterHistoryMatchEntry_C.SubMatchEntryClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RosterHistoryMatchEntry_Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature(); // Function RosterHistoryMatchEntry.RosterHistoryMatchEntry_C.BndEvt__RosterHistoryMatchEntry_Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function RosterHistoryMatchEntry.RosterHistoryMatchEntry_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function RosterHistoryMatchEntry.RosterHistoryMatchEntry_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TournamentsTeamCardWithScore_ContextMenuAnchor_K2Node_ComponentBoundEvent_0_OnContextMenuCreated__DelegateSignature(struct UContextMenu_C* ContextMenu); // Function RosterHistoryMatchEntry.RosterHistoryMatchEntry_C.BndEvt__TournamentsTeamCardWithScore_ContextMenuAnchor_K2Node_ComponentBoundEvent_0_OnContextMenuCreated__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_RosterHistoryMatchEntry(int32_t EntryPoint); // Function RosterHistoryMatchEntry.RosterHistoryMatchEntry_C.ExecuteUbergraph_RosterHistoryMatchEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnMatchClicked__DelegateSignature(struct FString MatchID); // Function RosterHistoryMatchEntry.RosterHistoryMatchEntry_C.OnMatchClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

