// WidgetBlueprintGeneratedClass RosterHistoryTournamentEntry.RosterHistoryTournamentEntry_C
// Size: 0x3e0 (Inherited: 0x318)
struct URosterHistoryTournamentEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UButton* But_ExpandTournament; // 0x320(0x08)
	struct UButton* But_ViewBracket; // 0x328(0x08)
	struct UImage* ExpandBG; // 0x330(0x08)
	struct UImage* hover; // 0x338(0x08)
	struct UImage* Icon; // 0x340(0x08)
	struct UImage* icon_expand; // 0x348(0x08)
	struct UImage* Image_89; // 0x350(0x08)
	struct UImage* IMG_BracketButtonBorder; // 0x358(0x08)
	struct UImage* IMG_ExpandHover; // 0x360(0x08)
	struct UTextBlock* LPEarned; // 0x368(0x08)
	struct UTextBlock* LPValue; // 0x370(0x08)
	struct UVerticalBox* MatchesContainer; // 0x378(0x08)
	struct URichTextBlock* RT_Standing; // 0x380(0x08)
	struct USharedBlurBg_C* SharedBlurBg; // 0x388(0x08)
	struct UTextBlock* T_LossesText; // 0x390(0x08)
	struct UTextBlock* T_WinsText; // 0x398(0x08)
	struct UWBP_TournamentBottomPadding_C* WBP_TournamentBottomPadding; // 0x3a0(0x08)
	struct FMulticastInlineDelegate OnBracketClicked; // 0x3a8(0x10)
	struct FMulticastInlineDelegate OnMatchClicked; // 0x3b8(0x10)
	struct UPremierRosterMatchHistoryEntryOld* MatchHistoryTournamentEntry; // 0x3c8(0x08)
	struct FMargin EntryPadding; // 0x3d0(0x10)

	void SetColorForWinLossText(int32_t Wins, int32_t Losses); // Function RosterHistoryTournamentEntry.RosterHistoryTournamentEntry_C.SetColorForWinLossText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function RosterHistoryTournamentEntry.RosterHistoryTournamentEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ViewBracketButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function RosterHistoryTournamentEntry.RosterHistoryTournamentEntry_C.BndEvt__ViewBracketButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnMatchOpened(struct FString MatchID); // Function RosterHistoryTournamentEntry.RosterHistoryTournamentEntry_C.OnMatchOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RosterHistoryTournamentEntry_But_ExpandTournament_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function RosterHistoryTournamentEntry.RosterHistoryTournamentEntry_C.BndEvt__RosterHistoryTournamentEntry_But_ExpandTournament_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RosterHistoryTournamentEntry_But_ViewBracket_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function RosterHistoryTournamentEntry.RosterHistoryTournamentEntry_C.BndEvt__RosterHistoryTournamentEntry_But_ViewBracket_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RosterHistoryTournamentEntry_But_ViewBracket_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function RosterHistoryTournamentEntry.RosterHistoryTournamentEntry_C.BndEvt__RosterHistoryTournamentEntry_But_ViewBracket_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RosterHistoryTournamentEntry_But_ViewBracket_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature(); // Function RosterHistoryTournamentEntry.RosterHistoryTournamentEntry_C.BndEvt__RosterHistoryTournamentEntry_But_ViewBracket_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RosterHistoryTournamentEntry_But_ViewBracket_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature(); // Function RosterHistoryTournamentEntry.RosterHistoryTournamentEntry_C.BndEvt__RosterHistoryTournamentEntry_But_ViewBracket_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RosterHistoryTournamentEntry_But_ExpandTournament_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function RosterHistoryTournamentEntry.RosterHistoryTournamentEntry_C.BndEvt__RosterHistoryTournamentEntry_But_ExpandTournament_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RosterHistoryTournamentEntry_But_ExpandTournament_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function RosterHistoryTournamentEntry.RosterHistoryTournamentEntry_C.BndEvt__RosterHistoryTournamentEntry_But_ExpandTournament_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RosterHistoryTournamentEntry_But_ExpandTournament_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature(); // Function RosterHistoryTournamentEntry.RosterHistoryTournamentEntry_C.BndEvt__RosterHistoryTournamentEntry_But_ExpandTournament_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RosterHistoryTournamentEntry_But_ExpandTournament_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature(); // Function RosterHistoryTournamentEntry.RosterHistoryTournamentEntry_C.BndEvt__RosterHistoryTournamentEntry_But_ExpandTournament_K2Node_ComponentBoundEvent_9_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_RosterHistoryTournamentEntry(int32_t EntryPoint); // Function RosterHistoryTournamentEntry.RosterHistoryTournamentEntry_C.ExecuteUbergraph_RosterHistoryTournamentEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnMatchClicked__DelegateSignature(struct FString MatchID); // Function RosterHistoryTournamentEntry.RosterHistoryTournamentEntry_C.OnMatchClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBracketClicked__DelegateSignature(struct FString tournamentid); // Function RosterHistoryTournamentEntry.RosterHistoryTournamentEntry_C.OnBracketClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

