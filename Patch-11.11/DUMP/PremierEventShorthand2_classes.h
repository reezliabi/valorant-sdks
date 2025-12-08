// WidgetBlueprintGeneratedClass PremierEventShorthand2.PremierEventShorthand2_C
// Size: 0x4f8 (Inherited: 0x330)
struct UPremierEventShorthand2_C : UTournamentsScreenV1 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UButton* B_Bracket; // 0x338(0x08)
	struct UButton* But_ToHUBButton; // 0x340(0x08)
	struct UHorizontalBox* HB_Info_And_Time; // 0x348(0x08)
	struct UHorizontalBox* HB_Info_And_Time_2; // 0x350(0x08)
	struct UHorizontalBox* HB_Info_And_Time_3; // 0x358(0x08)
	struct UHorizontalBox* HB_MatchLabel; // 0x360(0x08)
	struct UHorizontalBox* HB_MatchLabel_2; // 0x368(0x08)
	struct UHorizontalBox* HB_PatientWaitingRoom; // 0x370(0x08)
	struct UHorizontalBox* HB_PatientWaitingTime; // 0x378(0x08)
	struct UHorizontalBox* HB_ScrimLabel; // 0x380(0x08)
	struct UHorizontalBox* HB_TimeWindow; // 0x388(0x08)
	struct UHorizontalBox* HB_TournamentLabel; // 0x390(0x08)
	struct UHorizontalBox* HB_TournamentLabel_2; // 0x398(0x08)
	struct UHorizontalBox* HB_TournamentWaitingRoom_2; // 0x3a0(0x08)
	struct UHorizontalBox* HB_TournamentWaitingTime_2; // 0x3a8(0x08)
	struct UHorizontalBox* HB_VS_And_Opponent; // 0x3b0(0x08)
	struct UHorizontalBox* HB_WaitingForNextMatchup; // 0x3b8(0x08)
	struct UImage* IMG_BracketButtonBorder; // 0x3c0(0x08)
	struct UImage* IMG_OnHoverImg; // 0x3c8(0x08)
	struct UScaleBox* MatchInfo; // 0x3d0(0x08)
	struct UScaleBox* MatchInfo_2; // 0x3d8(0x08)
	struct UScaleBox* MatchInfo_3; // 0x3e0(0x08)
	struct UOverlay* O_Event_Info; // 0x3e8(0x08)
	struct UOverlay* O_EventDetails; // 0x3f0(0x08)
	struct UOverlay* O_OnHoverWrap; // 0x3f8(0x08)
	struct UOverlay* O_PatientMatchWaitingQueue; // 0x400(0x08)
	struct UOverlay* O_TeamNotEnrolledWarning; // 0x408(0x08)
	struct UOverlay* O_TournamentWaitingQueue; // 0x410(0x08)
	struct USizeBox* SB_OpponentLogoWrap; // 0x418(0x08)
	struct USharedBlurBg_C* SharedBlurBg; // 0x420(0x08)
	struct UTextBlock* TB_MatchName; // 0x428(0x08)
	struct UTextBlock* TB_MatchName_2; // 0x430(0x08)
	struct UTextBlock* TB_MatchName_3; // 0x438(0x08)
	struct UTextBlock* TB_MatchTime; // 0x440(0x08)
	struct UTextBlock* TB_PatientWaitCountdown; // 0x448(0x08)
	struct UTextBlock* TB_StatusQueueOpens; // 0x450(0x08)
	struct UTextBlock* TB_TournamentInfo; // 0x458(0x08)
	struct UTextBlock* TB_TournamentWaitCountdown; // 0x460(0x08)
	struct UTournamentsRestPeriodStatus_C* TournamentsRestPeriodStatus; // 0x468(0x08)
	struct UTournamentsTeamCustomization_C* TournamentsTeamCustomization; // 0x470(0x08)
	struct UWBP_LiveTag_C* WBP_StatusLiveTag; // 0x478(0x08)
	struct UWBP_LiveTag_C* WBP_StatusLiveTag_2; // 0x480(0x08)
	struct UWBP_LiveTag_C* WBP_StatusLiveTag_3; // 0x488(0x08)
	struct UWidgetSwitcher* WS_EventType_Label; // 0x490(0x08)
	struct UWidgetSwitcher* WS_Info__Waiting; // 0x498(0x08)
	struct UWidgetSwitcher* WS_InTournamentQueue; // 0x4a0(0x08)
	struct UWidgetSwitcher* WS_MatchInfo__VS; // 0x4a8(0x08)
	struct UWidgetSwitcher* WS_Time__RestPeriod; // 0x4b0(0x08)
	struct UPremierEventModelOld* EventModel; // 0x4b8(0x08)
	struct FString Conference; // 0x4c0(0x10)
	struct UPartyViewController* PartyViewController; // 0x4d0(0x08)
	struct UPartyModel* PartyModel; // 0x4d8(0x08)
	struct FMulticastInlineDelegate OnViewBracketButtonClicked; // 0x4e0(0x10)
	struct UPremierScheduledEventModelOld* Scheduled Event Model; // 0x4f0(0x08)

	void Set WS_InPatientWaitingQueue(bool InPatientQueue); // Function PremierEventShorthand2.PremierEventShorthand2_C.Set WS_InPatientWaitingQueue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateIsLive(); // Function PremierEventShorthand2.PremierEventShorthand2_C.UpdateIsLive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTimer(); // Function PremierEventShorthand2.PremierEventShorthand2_C.UpdateTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set WS_InTournamentWaitingQueue(bool InTournamentQueue); // Function PremierEventShorthand2.PremierEventShorthand2_C.Set WS_InTournamentWaitingQueue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set WS_Time__RestPeriod(bool IsRestPeriod); // Function PremierEventShorthand2.PremierEventShorthand2_C.Set WS_Time__RestPeriod // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set WS_Live__QueueOpens_Label(bool IsLive); // Function PremierEventShorthand2.PremierEventShorthand2_C.Set WS_Live__QueueOpens_Label // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set WS_Enrollment__Event_Info(bool IsEvent); // Function PremierEventShorthand2.PremierEventShorthand2_C.Set WS_Enrollment__Event_Info // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set WS Match Info  VS(bool IsMatchInfo); // Function PremierEventShorthand2.PremierEventShorthand2_C.Set WS Match Info  VS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set WS_Match__Tournament(enum class EPremierEventType PremierEventType); // Function PremierEventShorthand2.PremierEventShorthand2_C.Set WS_Match__Tournament // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set WS_Info__Waiting(bool IsInfo); // Function PremierEventShorthand2.PremierEventShorthand2_C.Set WS_Info__Waiting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetRestPeriodTimer(); // Function PremierEventShorthand2.PremierEventShorthand2_C.ResetRestPeriodTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTournamentInfoWithEnemy(struct UMatchupParticipantModel* EnemyMatchupParticipantModel); // Function PremierEventShorthand2.PremierEventShorthand2_C.UpdateTournamentInfoWithEnemy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateMatchInfo(struct FText MatchName); // Function PremierEventShorthand2.PremierEventShorthand2_C.UpdateMatchInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateEventTimes(); // Function PremierEventShorthand2.PremierEventShorthand2_C.UpdateEventTimes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateIsLiveInfo(bool IsLive); // Function PremierEventShorthand2.PremierEventShorthand2_C.UpdateIsLiveInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateEnrollmentLockinInfo(int32_t DaysRemaining); // Function PremierEventShorthand2.PremierEventShorthand2_C.UpdateEnrollmentLockinInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowEnrollmentWarning(bool IsEnrolled); // Function PremierEventShorthand2.PremierEventShorthand2_C.ShowEnrollmentWarning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowTournamentBracketButton(bool ShouldDisplay); // Function PremierEventShorthand2.PremierEventShorthand2_C.ShowTournamentBracketButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function PremierEventShorthand2.PremierEventShorthand2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function PremierEventShorthand2.PremierEventShorthand2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__BPW_TournamentEventShorthand_But_ToHUBButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function PremierEventShorthand2.PremierEventShorthand2_C.BndEvt__BPW_TournamentEventShorthand_But_ToHUBButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__BPW_TournamentEventShorthand_But_ToHUBButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function PremierEventShorthand2.PremierEventShorthand2_C.BndEvt__BPW_TournamentEventShorthand_But_ToHUBButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__BPW_TournamentEventShorthand_B_Bracket_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function PremierEventShorthand2.PremierEventShorthand2_C.BndEvt__BPW_TournamentEventShorthand_B_Bracket_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__BPW_TournamentEventShorthand_B_Bracket_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function PremierEventShorthand2.PremierEventShorthand2_C.BndEvt__BPW_TournamentEventShorthand_B_Bracket_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__BPW_TournamentEventShorthand_But_ToHUBButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function PremierEventShorthand2.PremierEventShorthand2_C.BndEvt__BPW_TournamentEventShorthand_But_ToHUBButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__BPW_TournamentEventShorthand_B_Bracket_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function PremierEventShorthand2.PremierEventShorthand2_C.BndEvt__BPW_TournamentEventShorthand_B_Bracket_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void SetScheduledEvent(struct UPremierScheduledEventModelOld* ScheduledEventModel); // Function PremierEventShorthand2.PremierEventShorthand2_C.SetScheduledEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function PremierEventShorthand2.PremierEventShorthand2_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_PremierEventShorthand2(int32_t EntryPoint); // Function PremierEventShorthand2.PremierEventShorthand2_C.ExecuteUbergraph_PremierEventShorthand2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnViewBracketButtonClicked__DelegateSignature(); // Function PremierEventShorthand2.PremierEventShorthand2_C.OnViewBracketButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

