// WidgetBlueprintGeneratedClass PremierLeaderboardRosterEntry.PremierLeaderboardRosterEntry_C
// Size: 0x578 (Inherited: 0x318)
struct UPremierLeaderboardRosterEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* 1st_PremierLogo; // 0x320(0x08)
	struct USizeBox* 1st_Texture_Plus_L; // 0x328(0x08)
	struct USizeBox* 1st_Texture_Plus_R; // 0x330(0x08)
	struct UImage* 1stBGgradient; // 0x338(0x08)
	struct UContextMenuAnchor_C* ContextMenuAnchor; // 0x340(0x08)
	struct UImage* Even_BackgroundColor; // 0x348(0x08)
	struct UGridPanel* GridPanel_45; // 0x350(0x08)
	struct UImage* Image; // 0x358(0x08)
	struct UImage* Image_2; // 0x360(0x08)
	struct UImage* Image_3; // 0x368(0x08)
	struct UImage* Image_4; // 0x370(0x08)
	struct UImage* Image_5; // 0x378(0x08)
	struct UImage* Image_108; // 0x380(0x08)
	struct UImage* Non_1st_Clip_L; // 0x388(0x08)
	struct UImage* Non_1st_Clip_R; // 0x390(0x08)
	struct UHorizontalBox* PlayoffResultBox; // 0x398(0x08)
	struct UAresTextBlock* PlayoffResultText; // 0x3a0(0x08)
	struct UAresTextBlock* PointsText; // 0x3a8(0x08)
	struct UScaleBox* PremierLogoBackground; // 0x3b0(0x08)
	struct UPremierRosterNameWidget_C* PremierRosterNameWidget; // 0x3b8(0x08)
	struct UAresTextBlock* RankTextchampion; // 0x3c0(0x08)
	struct UAresWidgetSwitcher* Ranktextchampionswitcher; // 0x3c8(0x08)
	struct UAresTextBlock* RankTextnonchampion; // 0x3d0(0x08)
	struct UAresTextBlock* RoundWinsLosesText; // 0x3d8(0x08)
	struct USizeBox* SB_LeaderboardEntry; // 0x3e0(0x08)
	struct UTournamentsTeamCustomization_C* TournamentsTeamCustomization; // 0x3e8(0x08)
	struct UAresTextBlock* WinsLosesText; // 0x3f0(0x08)
	struct FSlateColor RankTextColorDefault; // 0x3f8(0x14)
	struct FLinearColor BackgroundColorDefault; // 0x40c(0x10)
	struct FSlateColor WinLossTextColorDefault; // 0x41c(0x14)
	struct FSlateColor PointsTextColorDefault; // 0x430(0x14)
	struct FSlateColor RankTextColorHighlighted; // 0x444(0x14)
	struct FLinearColor BackgroundColorHighlighted; // 0x458(0x10)
	struct FSlateColor WinLossTextColorHighlighted; // 0x468(0x14)
	struct FSlateColor PointsTextColorHighlighted; // 0x47c(0x14)
	struct FSlateColor RankTextChampionColorDefault; // 0x490(0x14)
	struct FSlateColor RankTextChampionColorHighlighted; // 0x4a4(0x14)
	struct FSlateColor RoundWinLossTextColorDefault; // 0x4b8(0x14)
	struct FSlateColor RoundWinLossTextColorHighlighted; // 0x4cc(0x14)
	int32_t Rank; // 0x4e0(0x04)
	char pad_4E4[0x4]; // 0x4e4(0x04)
	struct FPremierLeaderboardEntry Roster Entry; // 0x4e8(0x90)

	void IsViewTeamEnabled(bool& ViewTeamEnabled); // Function PremierLeaderboardRosterEntry.PremierLeaderboardRosterEntry_C.IsViewTeamEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleReportTeamClicked(); // Function PremierLeaderboardRosterEntry.PremierLeaderboardRosterEntry_C.HandleReportTeamClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle View Team Clicked(); // Function PremierLeaderboardRosterEntry.PremierLeaderboardRosterEntry_C.Handle View Team Clicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleRosterEntrySet(); // Function PremierLeaderboardRosterEntry.PremierLeaderboardRosterEntry_C.HandleRosterEntrySet // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EnablePlayoffResultColumn(bool Enable); // Function PremierLeaderboardRosterEntry.PremierLeaderboardRosterEntry_C.EnablePlayoffResultColumn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void set PlayoffResult(enum class EPremierTournamentPlacement tournamentPlacement); // Function PremierLeaderboardRosterEntry.PremierLeaderboardRosterEntry_C.set PlayoffResult // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void set empty roster(); // Function PremierLeaderboardRosterEntry.PremierLeaderboardRosterEntry_C.set empty roster // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetDefaultColorsForTextAndBackground(); // Function PremierLeaderboardRosterEntry.PremierLeaderboardRosterEntry_C.SetDefaultColorsForTextAndBackground // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Text and Background Color(bool IsDefault); // Function PremierLeaderboardRosterEntry.PremierLeaderboardRosterEntry_C.Set Text and Background Color // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void set EntryStyle(int32_t Rank); // Function PremierLeaderboardRosterEntry.PremierLeaderboardRosterEntry_C.set EntryStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void set Roster(struct FPremierLeaderboardEntry Roster Entry); // Function PremierLeaderboardRosterEntry.PremierLeaderboardRosterEntry_C.set Roster // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function PremierLeaderboardRosterEntry.PremierLeaderboardRosterEntry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function PremierLeaderboardRosterEntry.PremierLeaderboardRosterEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PremierLeaderboardRosterEntry_ContextMenuAnchor_K2Node_ComponentBoundEvent_0_OnContextMenuCreated__DelegateSignature(struct UContextMenu_C* ContextMenu); // Function PremierLeaderboardRosterEntry.PremierLeaderboardRosterEntry_C.BndEvt__PremierLeaderboardRosterEntry_ContextMenuAnchor_K2Node_ComponentBoundEvent_0_OnContextMenuCreated__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_PremierLeaderboardRosterEntry(int32_t EntryPoint); // Function PremierLeaderboardRosterEntry.PremierLeaderboardRosterEntry_C.ExecuteUbergraph_PremierLeaderboardRosterEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

