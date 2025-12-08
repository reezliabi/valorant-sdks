// WidgetBlueprintGeneratedClass LeaderboardWidget.LeaderboardWidget_C
// Size: 0x5a0 (Inherited: 0x318)
struct ULeaderboardWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCheckBox* AnonCheckBox; // 0x320(0x08)
	struct UHorizontalBox* AnonToggleBox; // 0x328(0x08)
	struct UButton* ClearSearch; // 0x330(0x08)
	struct UImage* DecoLeft; // 0x338(0x08)
	struct UImage* DecoRight; // 0x340(0x08)
	struct UImage* dot1; // 0x348(0x08)
	struct UImage* dot1_2; // 0x350(0x08)
	struct UImage* dot2; // 0x358(0x08)
	struct UImage* dot2_2; // 0x360(0x08)
	struct UImage* dot3; // 0x368(0x08)
	struct UImage* dot3_2; // 0x370(0x08)
	struct UImage* dot4; // 0x378(0x08)
	struct UImage* dot4_2; // 0x380(0x08)
	struct UTextBlock* ErrorText; // 0x388(0x08)
	struct UWidgetSwitcher* FirstPlayerSwitcher; // 0x390(0x08)
	struct UGenericTextTooltipContainer_C* GenericTextTooltipContainer; // 0x398(0x08)
	struct UGridPanel* GridPanel_120; // 0x3a0(0x08)
	struct UButton* HeaderButton; // 0x3a8(0x08)
	struct UTextBlock* HeaderText; // 0x3b0(0x08)
	struct UImage* Image; // 0x3b8(0x08)
	struct UImage* Image_2; // 0x3c0(0x08)
	struct UImage* Image_3; // 0x3c8(0x08)
	struct UImage* Image_4; // 0x3d0(0x08)
	struct UImage* Image_5; // 0x3d8(0x08)
	struct UImage* Image_6; // 0x3e0(0x08)
	struct UImage* Image_7; // 0x3e8(0x08)
	struct UImage* Image_8; // 0x3f0(0x08)
	struct UImage* Image_9; // 0x3f8(0x08)
	struct UImage* Image_10; // 0x400(0x08)
	struct UImage* Image_11; // 0x408(0x08)
	struct UImage* Image_450; // 0x410(0x08)
	struct UImage* Image_531; // 0x418(0x08)
	struct UImage* Image_2002; // 0x420(0x08)
	struct UImage* Image_2226; // 0x428(0x08)
	struct UImage* IMG_Search; // 0x430(0x08)
	struct UImage* IMG_SearchBoarder; // 0x438(0x08)
	struct UVerticalBox* LeaderboardContainer; // 0x440(0x08)
	struct UWidgetSwitcher* LeaderboardDataSwitcher; // 0x448(0x08)
	struct ULeaderboardFirstPlayerViewEntry_C* LeaderboardFirstPlayerViewEntry; // 0x450(0x08)
	struct ULeaderboardListViewEntry_C* LeaderboardListViewEntry_2; // 0x458(0x08)
	struct ULeaderboardListViewEntry_C* LeaderboardListViewEntry_3; // 0x460(0x08)
	struct ULeaderboardListViewEntry_C* LeaderboardListViewEntry_4; // 0x468(0x08)
	struct ULeaderboardListViewEntry_C* LeaderboardListViewEntry_5; // 0x470(0x08)
	struct ULeaderboardListViewEntry_C* LeaderboardListViewEntry_6; // 0x478(0x08)
	struct ULeaderboardListViewEntry_C* LeaderboardListViewEntry_7; // 0x480(0x08)
	struct ULeaderboardListViewEntry_C* LeaderboardListViewEntry_8; // 0x488(0x08)
	struct ULeaderboardListViewEntry_C* LeaderboardListViewEntry_9; // 0x490(0x08)
	struct ULeaderboardListViewEntry_C* LeaderboardListViewEntry_10; // 0x498(0x08)
	struct ULeaderboardListViewEntry_C* LeaderboardListViewEntry_11; // 0x4a0(0x08)
	struct ULoadingThrobberSmall_C* LoadingThrobberSmall; // 0x4a8(0x08)
	struct UButton* NextButton; // 0x4b0(0x08)
	struct UButton* NextButton_Max; // 0x4b8(0x08)
	struct UTextBlock* NoDataText; // 0x4c0(0x08)
	struct UTextBlock* PagesText; // 0x4c8(0x08)
	struct UPlayerCard_C* PlayerCard; // 0x4d0(0x08)
	struct UGridPanel* PlayerContainer; // 0x4d8(0x08)
	struct UPlayerNameWidget_C* PlayerLeaderboardName; // 0x4e0(0x08)
	struct UButton* PlayerLeaderboardPageButton; // 0x4e8(0x08)
	struct UTextBlock* PlayerLeaderboardRank; // 0x4f0(0x08)
	struct UButton* PreviousButton; // 0x4f8(0x08)
	struct UButton* PreviousButton_Max; // 0x500(0x08)
	struct UImage* RANK_ICON; // 0x508(0x08)
	struct UGenericTextTooltipContainer_C* Rank_Tooltip_Container; // 0x510(0x08)
	struct UTextBlock* SearchEmptyText; // 0x518(0x08)
	struct UEditableTextBox* SearchText; // 0x520(0x08)
	struct USeasonComboBox_C* SeasonComboBox; // 0x528(0x08)
	struct UTextBlock* SeasonEndingText; // 0x530(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x538(0x08)
	struct UMatchHistoryViewController* MatchHistoryController; // 0x540(0x08)
	struct FMulticastInlineDelegate OnBackRequested; // 0x548(0x10)
	struct TArray<struct ULeaderboardListViewEntry_C*> Entries; // 0x558(0x10)
	int32_t CurrentTier; // 0x568(0x04)
	int32_t CurrentPage; // 0x56c(0x04)
	int32_t PlayerLeaderboardIndex; // 0x570(0x04)
	char pad_574[0x4]; // 0x574(0x04)
	struct ULeaderboardPlayerModel* CurLeaderboardPlayer; // 0x578(0x08)
	struct FGuid SelectedSeason; // 0x580(0x10)
	struct ULeaderboardViewModel* LeaderboardModel; // 0x590(0x08)
	bool NavWithHeaderButton; // 0x598(0x01)
	char pad_599[0x3]; // 0x599(0x03)
	int32_t CurrentHeaderButtonTier; // 0x59c(0x04)

	void IsTopTier(int32_t Tier, bool& bool); // Function LeaderboardWidget.LeaderboardWidget_C.IsTopTier // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetNextHeaderIndex(int32_t& Index); // Function LeaderboardWidget.LeaderboardWidget_C.GetNextHeaderIndex // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateIsOnLeaderboard(); // Function LeaderboardWidget.LeaderboardWidget_C.UpdateIsOnLeaderboard // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool ShowFirstPlayerAsBig(); // Function LeaderboardWidget.LeaderboardWidget_C.ShowFirstPlayerAsBig // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetLeaderboardModel(); // Function LeaderboardWidget.LeaderboardWidget_C.SetLeaderboardModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetLeaderboardGamesRequirementHoverText(); // Function LeaderboardWidget.LeaderboardWidget_C.SetLeaderboardGamesRequirementHoverText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetLeaderboardNavButtonState(); // Function LeaderboardWidget.LeaderboardWidget_C.SetLeaderboardNavButtonState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayerLeaderboardIndex(); // Function LeaderboardWidget.LeaderboardWidget_C.UpdatePlayerLeaderboardIndex // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePageCounts(); // Function LeaderboardWidget.LeaderboardWidget_C.UpdatePageCounts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAnonCheckedStatus(); // Function LeaderboardWidget.LeaderboardWidget_C.UpdateAnonCheckedStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSeasonEndingText(); // Function LeaderboardWidget.LeaderboardWidget_C.UpdateSeasonEndingText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init(struct UMatchHistoryViewController* MatchHistoryController); // Function LeaderboardWidget.LeaderboardWidget_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function LeaderboardWidget.LeaderboardWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__NextButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void InitLeaderboard(); // Function LeaderboardWidget.LeaderboardWidget_C.InitLeaderboard // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent_1(struct FGuid SeasonID); // Function LeaderboardWidget.LeaderboardWidget_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__AnonCheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__AnonCheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnAnonymizeError(enum class EMmrErrorEnum ErrorEnum); // Function LeaderboardWidget.LeaderboardWidget_C.OnAnonymizeError // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClosePopUp(); // Function LeaderboardWidget.LeaderboardWidget_C.ClosePopUp // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__NextButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PreviousButton_Max_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__PreviousButton_Max_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__NextButton_Max_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__NextButton_Max_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PreviousButton_Max_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__PreviousButton_Max_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__HeaderButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__HeaderButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void PopulateLeaderboardPlayers(struct TArray<struct ULeaderboardPlayerModel*>& Players); // Function LeaderboardWidget.LeaderboardWidget_C.PopulateLeaderboardPlayers // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__SearchText_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__SearchText_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ClearSearch_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function LeaderboardWidget.LeaderboardWidget_C.BndEvt__ClearSearch_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_LeaderboardWidget(int32_t EntryPoint); // Function LeaderboardWidget.LeaderboardWidget_C.ExecuteUbergraph_LeaderboardWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnBackRequested__DelegateSignature(); // Function LeaderboardWidget.LeaderboardWidget_C.OnBackRequested__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

