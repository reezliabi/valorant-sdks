// WidgetBlueprintGeneratedClass WBP_Panel_Schedule_Entry.WBP_Panel_Schedule_Entry_C
// Size: 0x578 (Inherited: 0x3e0)
struct UWBP_Panel_Schedule_Entry_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* AresCommonText_124; // 0x3e8(0x08)
	struct UUI_AresRichTextButton_C* Button_LiveClickout; // 0x3f0(0x08)
	struct UAresCommonText* CT_EventRegionAndType; // 0x3f8(0x08)
	struct UAresCommonText* CT_MatchStartTime; // 0x400(0x08)
	struct UAresCommonText* CT_Team_One_Name; // 0x408(0x08)
	struct UAresCommonText* CT_Team_Two_Name; // 0x410(0x08)
	struct UAresCommonText* CT_TeamOneScore; // 0x418(0x08)
	struct UAresCommonText* CT_TeamTwoScore; // 0x420(0x08)
	struct UAresCommonText* CT_TimeZone; // 0x428(0x08)
	struct UAresCommonText* CT_TournamentStage; // 0x430(0x08)
	struct UImage* Gradient; // 0x438(0x08)
	struct UOverlay* HB_FinalScore; // 0x440(0x08)
	struct UImage* Image_TeamOneAdvantageArrow; // 0x448(0x08)
	struct UImage* Image_TeamOneLogo; // 0x450(0x08)
	struct UImage* Image_TeamTwoAdvantageArrow; // 0x458(0x08)
	struct UImage* Image_TeamTwoLogo; // 0x460(0x08)
	struct UImage* Img_Divider; // 0x468(0x08)
	struct UImage* IMG_ScheduleBackground_2; // 0x470(0x08)
	struct UImage* IMG_VS; // 0x478(0x08)
	struct UImage* redbg; // 0x480(0x08)
	struct UImage* Solid_Border_Block; // 0x488(0x08)
	struct UVerticalBox* VB_MatchInfo; // 0x490(0x08)
	struct UWBP_LiveTag_EsportsHub_C* WBP_LiveTag_EsportsHub; // 0x498(0x08)
	struct UWidgetSwitcher* WS_VSoutcome; // 0x4a0(0x08)
	struct UObject* ScheduleEntry; // 0x4a8(0x08)
	struct UEsportsScheduleEntryViewModel* ScheduleEntryViewModel; // 0x4b0(0x08)
	struct FLinearColor ChampionsColor; // 0x4b8(0x10)
	struct FLinearColor MastersColor; // 0x4c8(0x10)
	struct FLinearColor EMEAColor; // 0x4d8(0x10)
	struct FLinearColor AmericasColor; // 0x4e8(0x10)
	struct FLinearColor PacificColor; // 0x4f8(0x10)
	struct FLinearColor ChinaColor; // 0x508(0x10)
	struct FText TournamentRegionNameCombinedText; // 0x518(0x18)
	struct FText EventTypeText; // 0x530(0x18)
	struct FText EventRegionText; // 0x548(0x18)
	struct UEsportsScheduleEntryViewModelV2* ScheduleEntryViewModelV2; // 0x560(0x08)
	struct FString MatchID; // 0x568(0x10)

	void OnTeamOutcomeChanged(enum class EEsportsMatchTeamOutcome TeamOutcome, bool IsFirstTeam); // Function WBP_Panel_Schedule_Entry.WBP_Panel_Schedule_Entry_C.OnTeamOutcomeChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStageNameChangedV2(struct FString New Stage Name); // Function WBP_Panel_Schedule_Entry.WBP_Panel_Schedule_Entry_C.OnStageNameChangedV2 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnVCTEventChanged(enum class E2024VCTEvent New TournamentEvent); // Function WBP_Panel_Schedule_Entry.WBP_Panel_Schedule_Entry_C.OnVCTEventChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStartTimeUTCChanged(struct FDateTime& New StartTimeUTC); // Function WBP_Panel_Schedule_Entry.WBP_Panel_Schedule_Entry_C.OnStartTimeUTCChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryFormatRegionAndEventText(); // Function WBP_Panel_Schedule_Entry.WBP_Panel_Schedule_Entry_C.TryFormatRegionAndEventText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnProviderURLUpdated(struct FString ProviderURL); // Function WBP_Panel_Schedule_Entry.WBP_Panel_Schedule_Entry_C.OnProviderURLUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMatchStatusUpdated(enum class EEsportsMatchStatus MatchStatus); // Function WBP_Panel_Schedule_Entry.WBP_Panel_Schedule_Entry_C.OnMatchStatusUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetVCTGradient(struct FLinearColor Color01, struct FLinearColor Color02, struct UMaterialInstance*& OutMaterialInstance); // Function WBP_Panel_Schedule_Entry.WBP_Panel_Schedule_Entry_C.SetVCTGradient // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnVctLeagueUpdated(enum class EVCTLeague VCTLeague); // Function WBP_Panel_Schedule_Entry.WBP_Panel_Schedule_Entry_C.OnVctLeagueUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnWinningTeamUpdated(enum class EWinningTeam WinningTeam); // Function WBP_Panel_Schedule_Entry.WBP_Panel_Schedule_Entry_C.OnWinningTeamUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTeamLogoUpdated(struct UTexture2D* TeamLogo, bool IsFirstTeam); // Function WBP_Panel_Schedule_Entry.WBP_Panel_Schedule_Entry_C.OnTeamLogoUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStageNameUpdated(struct FString MatchID, struct FString StageName); // Function WBP_Panel_Schedule_Entry.WBP_Panel_Schedule_Entry_C.OnStageNameUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTournamentNameUpdated(struct FString tournamentid, struct FString TournamentName); // Function WBP_Panel_Schedule_Entry.WBP_Panel_Schedule_Entry_C.OnTournamentNameUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMatchStartTimeUpdated(struct FString MatchID, struct FDateTime StartTime); // Function WBP_Panel_Schedule_Entry.WBP_Panel_Schedule_Entry_C.OnMatchStartTimeUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTeamCodeUpdated(struct FString TeamCode, bool IsFirstTeam); // Function WBP_Panel_Schedule_Entry.WBP_Panel_Schedule_Entry_C.OnTeamCodeUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnGameWinsUpdated(int32_t GameScore, bool IsFirstTeam); // Function WBP_Panel_Schedule_Entry.WBP_Panel_Schedule_Entry_C.OnGameWinsUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindOrUnbindEvents(bool Bind); // Function WBP_Panel_Schedule_Entry.WBP_Panel_Schedule_Entry_C.BindOrUnbindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitViewModel(); // Function WBP_Panel_Schedule_Entry.WBP_Panel_Schedule_Entry_C.InitViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Panel_Schedule_Entry.WBP_Panel_Schedule_Entry_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Panel_Schedule_Entry.WBP_Panel_Schedule_Entry_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Panel_Schedule_Entry.WBP_Panel_Schedule_Entry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_Schedule_Entry_Button_LiveClickout_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_Schedule_Entry.WBP_Panel_Schedule_Entry_C.BndEvt__WBP_Panel_Schedule_Entry_Button_LiveClickout_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_Schedule_Entry(int32_t EntryPoint); // Function WBP_Panel_Schedule_Entry.WBP_Panel_Schedule_Entry_C.ExecuteUbergraph_WBP_Panel_Schedule_Entry // (Final|UbergraphFunction) // @ game+0x19be2f0
};

