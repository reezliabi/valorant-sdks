// WidgetBlueprintGeneratedClass PremierLeaderBoardContent.PremierLeaderBoardContent_C
// Size: 0x670 (Inherited: 0x318)
struct UPremierLeaderBoardContent_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* ErrorMessageScreen; // 0x320(0x08)
	struct UButton* Firstpagebutton; // 0x328(0x08)
	struct UButton* Gobackbutton; // 0x330(0x08)
	struct UButton* Gonextbutton; // 0x338(0x08)
	struct UImage* Image; // 0x340(0x08)
	struct UImage* Image_108; // 0x348(0x08)
	struct UImage* Image_211; // 0x350(0x08)
	struct UButton* JumpToMeButton; // 0x358(0x08)
	struct UButton* Lastpagebutton; // 0x360(0x08)
	struct UHorizontalBox* LeaderboardBottomControls; // 0x368(0x08)
	struct UWidgetSwitcher* LeaderboardContentSwitcher; // 0x370(0x08)
	struct UGridPanel* LeaderboardEntries; // 0x378(0x08)
	struct UGridPanel* LeaderboardHeaders; // 0x380(0x08)
	struct UVerticalBox* LeaderboardsContainer; // 0x388(0x08)
	struct UImage* Loader; // 0x390(0x08)
	struct UAresTextBlock* PaginationText; // 0x398(0x08)
	struct UTextBlock* PlayoffResultHeader; // 0x3a0(0x08)
	struct UPremierLeaderboardQualifingCutoff_C* PremierLeaderboardInviteDemotionThreshold; // 0x3a8(0x08)
	struct UPremierLeaderboardQualifingCutoff_C* PremierLeaderboardPlayoffThreshold; // 0x3b0(0x08)
	struct UPremierLeaderboardQualifingCutoff_C* PremierLeaderboardPromotionThreshold; // 0x3b8(0x08)
	struct UPremierLeaderboardRosterEntry_C* PremierLeaderboardRosterEntry_2; // 0x3c0(0x08)
	struct UPremierLeaderboardRosterEntry_C* PremierLeaderboardRosterEntry_3; // 0x3c8(0x08)
	struct UPremierLeaderboardRosterEntry_C* PremierLeaderboardRosterEntry_4; // 0x3d0(0x08)
	struct UPremierLeaderboardRosterEntry_C* PremierLeaderboardRosterEntry_5; // 0x3d8(0x08)
	struct UPremierLeaderboardRosterEntry_C* PremierLeaderboardRosterEntry_6; // 0x3e0(0x08)
	struct UPremierLeaderboardRosterEntry_C* PremierLeaderboardRosterEntry_7; // 0x3e8(0x08)
	struct UPremierLeaderboardRosterEntry_C* PremierLeaderboardRosterEntry_8; // 0x3f0(0x08)
	struct UPremierLeaderboardRosterEntry_C* PremierLeaderboardRosterEntry_9; // 0x3f8(0x08)
	struct UPremierLeaderboardRosterEntry_C* PremierLeaderboardRosterEntry_10; // 0x400(0x08)
	struct UPremierLeaderboardRosterEntry_C* PremierLeaderboardRosterEntry_11; // 0x408(0x08)
	struct UPremierLeaderboardSelectors_C* PremierLeaderboardSelectors; // 0x410(0x08)
	struct UPremierPnPInfo_C* PremierPromotionInfo; // 0x418(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_71; // 0x420(0x08)
	int32_t currentPageNumber; // 0x428(0x04)
	int32_t totalPageNumber; // 0x42c(0x04)
	struct TMap<struct UPremierLeaderboardQualifingCutoff_C*, int32_t> Threshold Indices; // 0x430(0x50)
	bool Is Roster On Current Leaderboard; // 0x480(0x01)
	bool Is Roster On Current Page; // 0x481(0x01)
	char pad_482[0x6]; // 0x482(0x06)
	struct TMap<struct FString, struct UPremierSeasonModelOld*> SeasonNameToModelMap; // 0x488(0x50)
	struct TMap<struct FString, struct UPremierConferenceModelOld*> ConferenceNameToModelMap; // 0x4d8(0x50)
	struct TMap<struct FString, struct FPremierDivisionData> DivisionNameToDataMap; // 0x528(0x50)
	struct FGuid SelectedSeasonID; // 0x578(0x10)
	struct UPremierSeasonModelOld* SelectedSeasonModel; // 0x588(0x08)
	struct FGuid SelectedConferenceID; // 0x590(0x10)
	struct UPremierConferenceModelOld* SelectedConferenceModel; // 0x5a0(0x08)
	struct FPremierDivisionData SelectedDivision; // 0x5a8(0x60)
	struct FPremierLeaderboard JumpToMeLeaderboard; // 0x608(0x50)
	bool NeedToRefreshJTML; // 0x658(0x01)
	bool SelectionsReady; // 0x659(0x01)
	bool ShowPlayoffResult; // 0x65a(0x01)
	char pad_65B[0x5]; // 0x65b(0x05)
	struct TArray<struct UObject*> LeaderboardContentObjects; // 0x660(0x10)

	void HandleNewSelection(struct FGuid SeasonID, struct UPremierSeasonModelOld* SeasonModel, struct FGuid ConferenceID, struct UPremierConferenceModelOld* ConferenceModel, struct FPremierDivisionData Division); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.HandleNewSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreconstructLeaderboardObjectsFill(); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.PreconstructLeaderboardObjectsFill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get Entry Index Above Invite Demotion Threshold(struct FPremierLeaderboard Leaderboard, int32_t& Index); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.Get Entry Index Above Invite Demotion Threshold // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get Entry Index Above Promotion Threshold(struct FPremierLeaderboard Leaderboard, int32_t& Index); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.Get Entry Index Above Promotion Threshold // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get Entry Index Above Playoff Threshold(struct FPremierLeaderboard Leaderboard, int32_t& Index); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.Get Entry Index Above Playoff Threshold // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Playoff Result Column(); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.Handle Playoff Result Column // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Leaderboard Contains PlayoffResult Placement(struct FPremierLeaderboard Leaderboard, bool& Valid Placement Exists); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.Leaderboard Contains PlayoffResult Placement // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ShowPlayoffResult Column if Needed(struct FPremierLeaderboard Leaderboard); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.ShowPlayoffResult Column if Needed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Jump To Me Error(); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.Jump To Me Error // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetCurrentRosterDivision(int32_t& Division); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.GetCurrentRosterDivision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ShouldCheckIfRosterOnCurrentLeaderboard(bool& ShouldCheck); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.ShouldCheckIfRosterOnCurrentLeaderboard // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetActiveSeasonID(struct FGuid& ActiveSeasonID); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.GetActiveSeasonID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetContentVisibility(bool Show); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.SetContentVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetCurrentRosterConferenceID(struct FGuid& ConferenceID); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.GetCurrentRosterConferenceID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Update Pagination widget Empty(); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.Update Pagination widget Empty // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Leaderboard Fetch Empty(); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.On Leaderboard Fetch Empty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Change Jump To My Team Button Visibility(); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.Change Jump To My Team Button Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Check If Roster is My Roster(struct FPremierLeaderboardEntry Entry); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.Check If Roster is My Roster // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Jump To Me Exists(struct FPremierLeaderboard& Leaderboard); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.Jump To Me Exists // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Hide Threshold(struct UPremierLeaderboardQualifingCutoff_C* Threshold Widget); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.Hide Threshold // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Show Thresholds If Needed(struct FPremierLeaderboard Leaderboard); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.Show Thresholds If Needed // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Entry In Roster(struct TArray<struct FPremierLeaderboardEntry>& Entries, int32_t Index, int32_t Page Size); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.Set Entry In Roster // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Entries result(struct FPremierLeaderboard& Leaderboard); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.Entries result // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Leaderboard Object Style(struct UObject* Entry); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.Set Leaderboard Object Style // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get Leaderboard Page(int32_t PageNumber, struct FDelegate& OnSuccess, struct FDelegate& OnError); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.Get Leaderboard Page // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Select Roster Entry Widget(int32_t EntryToSelect, struct UPremierLeaderboardRosterEntry_C*& PremierRosterEntry); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.Select Roster Entry Widget // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Update Pagination widget(struct FPremierLeaderboard Leaderboard); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.Update Pagination widget // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PremierLeaderBoardContent_Gonextbutton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.BndEvt__PremierLeaderBoardContent_Gonextbutton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PremierLeaderBoardContent_Gobackbutton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.BndEvt__PremierLeaderBoardContent_Gobackbutton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PremierLeaderBoardContent_Firstpagebutton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.BndEvt__PremierLeaderBoardContent_Firstpagebutton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PremierLeaderBoardContent_Lastpagebutton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.BndEvt__PremierLeaderBoardContent_Lastpagebutton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PremierLeaderBoardContent_JumpToMebutton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.BndEvt__PremierLeaderBoardContent_JumpToMebutton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void GetLeaderboardEntries(); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.GetLeaderboardEntries // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheckIfRosterOnLeaderboard(); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.CheckIfRosterOnLeaderboard // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Leaderboard Fetch Error(); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.On Leaderboard Fetch Error // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_PremierLeaderBoardContent(int32_t EntryPoint); // Function PremierLeaderBoardContent.PremierLeaderBoardContent_C.ExecuteUbergraph_PremierLeaderBoardContent // (Final|UbergraphFunction) // @ game+0x19be2f0
};

