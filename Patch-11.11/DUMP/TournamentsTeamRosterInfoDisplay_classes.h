// WidgetBlueprintGeneratedClass TournamentsTeamRosterInfoDisplay.TournamentsTeamRosterInfoDisplay_C
// Size: 0x4d0 (Inherited: 0x318)
struct UTournamentsTeamRosterInfoDisplay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UButton* B_SettingsButton; // 0x320(0x08)
	struct UImage* BLKBG; // 0x328(0x08)
	struct UTextBlock* DivisionLocksText; // 0x330(0x08)
	struct UOverlay* DivisionNotLocked; // 0x338(0x08)
	struct UHorizontalBox* HB_IconPointsWrap; // 0x340(0x08)
	struct UImage* IMG_HeaderBG; // 0x348(0x08)
	struct UImage* IMG_MainBackground; // 0x350(0x08)
	struct UImage* IMG_RosterBG; // 0x358(0x08)
	struct UImage* IMG_SettingIcon; // 0x360(0x08)
	struct UImage* IMG_Ticket; // 0x368(0x08)
	struct UOverlay* NoConferenceStatus; // 0x370(0x08)
	struct UOverlay* NoErrorState; // 0x378(0x08)
	struct UOverlay* NotEnoughMemberStatus; // 0x380(0x08)
	struct UTextBlock* NotEnoughMemberWarningText; // 0x388(0x08)
	struct UOverlay* O_Contender+; // 0x390(0x08)
	struct UOverlay* O_Division23Warning; // 0x398(0x08)
	struct UOverlay* O_NonContender; // 0x3a0(0x08)
	struct UOverlay* O_PlayoffStatus; // 0x3a8(0x08)
	struct UOverlay* O_PromotionStatus; // 0x3b0(0x08)
	struct UOverlay* O_RenameWarning; // 0x3b8(0x08)
	struct UProgressBar* PBar_PremierPointsProgress; // 0x3c0(0x08)
	struct UTextBlock* PremierLeaderboardRank; // 0x3c8(0x08)
	struct UImage* PromotionIcon; // 0x3d0(0x08)
	struct UOverlay* QualificationRequirement; // 0x3d8(0x08)
	struct UTextBlock* QualificationRequirementsText; // 0x3e0(0x08)
	struct UTextBlock* QualifiedForPlayoffsText; // 0x3e8(0x08)
	struct UOverlay* QualifiedStatus; // 0x3f0(0x08)
	struct URetainerBox* RB_QualifiedGoldGradient; // 0x3f8(0x08)
	struct UImage* RenameWarningIcon; // 0x400(0x08)
	struct URosterConferenceDivision_C* RosterConferenceDivision; // 0x408(0x08)
	struct UTextBlock* RosterName; // 0x410(0x08)
	struct UTextBlock* RosterTag; // 0x418(0x08)
	struct URosterView_C* RosterView; // 0x420(0x08)
	struct UOverlay* RosterViewSection; // 0x428(0x08)
	struct UWidgetSwitcher* RosterViewSwitcher; // 0x430(0x08)
	struct URosterViewV2_C* RosterViewV2; // 0x438(0x08)
	struct USizeBox* SB_PointsProgress; // 0x440(0x08)
	struct UMenuAnchor* SettingsMenuAnchor; // 0x448(0x08)
	struct UTextBlock* TB_PremierPoints; // 0x450(0x08)
	struct UTextBlock* TB_WaitingMessage_2; // 0x458(0x08)
	struct UTextBlock* TB_WarningMessage; // 0x460(0x08)
	struct UOverlay* TeamIneligibleStatus; // 0x468(0x08)
	struct UTournamentsTeamCustomization_C* TournamentsTeamCustomization; // 0x470(0x08)
	struct UWidgetSwitcher* WS_ContenderPlayoffStatus; // 0x478(0x08)
	struct UWidgetSwitcher* WS_EnrollmentState; // 0x480(0x08)
	struct UWidgetSwitcher* WS_PlayoffPromotionStatus; // 0x488(0x08)
	struct UWidgetSwitcher* WS_PlayoffStatusDisplayStyle; // 0x490(0x08)
	struct UWidgetSwitcher* WS_QualifiedPointsQualified; // 0x498(0x08)
	struct UPremierRosterViewController* Premier Roster View Controller; // 0x4a0(0x08)
	struct URosterModel* Roster Model; // 0x4a8(0x08)
	enum class E_PremierTeamValidationStates VerificationState; // 0x4b0(0x01)
	char pad_4B1[0x7]; // 0x4b1(0x07)
	struct UPremierRosterViewModel* PremierRosterModel; // 0x4b8(0x08)
	struct URosterMemberModel* SelfRosterMemberModel; // 0x4c0(0x08)
	int32_t Contender+ Division Lower Bound; // 0x4c8(0x04)
	int32_t Holding Division Number; // 0x4cc(0x04)

	void GetActiveSeasonDivisionConferenceThreshold(struct UPremierDivisionThresholdModelOld*& DivisionThreshold); // Function TournamentsTeamRosterInfoDisplay.TournamentsTeamRosterInfoDisplay_C.GetActiveSeasonDivisionConferenceThreshold // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HandleLeaderboardRankFetch(int64_t& EntityRank); // Function TournamentsTeamRosterInfoDisplay.TournamentsTeamRosterInfoDisplay_C.HandleLeaderboardRankFetch // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HideLeaderboardRank(); // Function TournamentsTeamRosterInfoDisplay.TournamentsTeamRosterInfoDisplay_C.HideLeaderboardRank // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateLeaderboardRankDisplay(); // Function TournamentsTeamRosterInfoDisplay.TournamentsTeamRosterInfoDisplay_C.UpdateLeaderboardRankDisplay // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayoffPromotionStatus(); // Function TournamentsTeamRosterInfoDisplay.TournamentsTeamRosterInfoDisplay_C.UpdatePlayoffPromotionStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheckAndSetEnrollmentErrors(); // Function TournamentsTeamRosterInfoDisplay.TournamentsTeamRosterInfoDisplay_C.CheckAndSetEnrollmentErrors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSettingsButtonVisibility(); // Function TournamentsTeamRosterInfoDisplay.TournamentsTeamRosterInfoDisplay_C.UpdateSettingsButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* On Settings Menu Anchor Get Menu Content(); // Function TournamentsTeamRosterInfoDisplay.TournamentsTeamRosterInfoDisplay_C.On Settings Menu Anchor Get Menu Content // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdatePremierPoints(); // Function TournamentsTeamRosterInfoDisplay.TournamentsTeamRosterInfoDisplay_C.UpdatePremierPoints // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init(struct URosterModel* Roster Model, bool Hide RosterLocks); // Function TournamentsTeamRosterInfoDisplay.TournamentsTeamRosterInfoDisplay_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPremierViewModelUpdated(struct UPremierRosterViewModel* UpdatedPremierRosterModel); // Function TournamentsTeamRosterInfoDisplay.TournamentsTeamRosterInfoDisplay_C.OnPremierViewModelUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEnrollmentChanged(bool NewValue); // Function TournamentsTeamRosterInfoDisplay.TournamentsTeamRosterInfoDisplay_C.OnEnrollmentChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function TournamentsTeamRosterInfoDisplay.TournamentsTeamRosterInfoDisplay_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void InitWithPremierModel(); // Function TournamentsTeamRosterInfoDisplay.TournamentsTeamRosterInfoDisplay_C.InitWithPremierModel // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCustomization(struct UPremierRosterViewModel* Roster); // Function TournamentsTeamRosterInfoDisplay.TournamentsTeamRosterInfoDisplay_C.UpdateCustomization // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TournamentsTeamRosterInfoDisplay_B_SettingsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function TournamentsTeamRosterInfoDisplay.TournamentsTeamRosterInfoDisplay_C.BndEvt__TournamentsTeamRosterInfoDisplay_B_SettingsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnSelfRoleChanged(); // Function TournamentsTeamRosterInfoDisplay.TournamentsTeamRosterInfoDisplay_C.OnSelfRoleChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TournamentsTeamRosterInfoDisplay_B_SettingsButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function TournamentsTeamRosterInfoDisplay.TournamentsTeamRosterInfoDisplay_C.BndEvt__TournamentsTeamRosterInfoDisplay_B_SettingsButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TournamentsTeamRosterInfoDisplay_B_SettingsButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function TournamentsTeamRosterInfoDisplay.TournamentsTeamRosterInfoDisplay_C.BndEvt__TournamentsTeamRosterInfoDisplay_B_SettingsButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnRosterModelMembersUpdated(); // Function TournamentsTeamRosterInfoDisplay.TournamentsTeamRosterInfoDisplay_C.OnRosterModelMembersUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnNameChanged(struct FString NewValue); // Function TournamentsTeamRosterInfoDisplay.TournamentsTeamRosterInfoDisplay_C.OnNameChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTagChanged(struct FString NewValue); // Function TournamentsTeamRosterInfoDisplay.TournamentsTeamRosterInfoDisplay_C.OnTagChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_TournamentsTeamRosterInfoDisplay(int32_t EntryPoint); // Function TournamentsTeamRosterInfoDisplay.TournamentsTeamRosterInfoDisplay_C.ExecuteUbergraph_TournamentsTeamRosterInfoDisplay // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

