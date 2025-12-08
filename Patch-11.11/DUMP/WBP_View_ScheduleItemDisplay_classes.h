// WidgetBlueprintGeneratedClass WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C
// Size: 0x1c48 (Inherited: 0x1ae0)
struct UWBP_View_ScheduleItemDisplay_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UAresCommonText* AresCommonText_124; // 0x1ae8(0x08)
	struct UAresCommonText* CT_EventRegionAndType; // 0x1af0(0x08)
	struct UAresCommonText* CT_MatchStartTime; // 0x1af8(0x08)
	struct UAresCommonText* CT_Month; // 0x1b00(0x08)
	struct UAresCommonText* CT_Team_One_Name; // 0x1b08(0x08)
	struct UAresCommonText* CT_Team_Two_Name; // 0x1b10(0x08)
	struct UAresCommonText* CT_TeamOneScore; // 0x1b18(0x08)
	struct UAresCommonText* CT_TeamTwoScore; // 0x1b20(0x08)
	struct UAresCommonText* CT_TimeZone; // 0x1b28(0x08)
	struct UAresCommonText* CT_TournamentStage; // 0x1b30(0x08)
	struct UAresCommonText* CT_Weekday; // 0x1b38(0x08)
	struct UOverlay* DayContainer; // 0x1b40(0x08)
	struct UImage* Gradient; // 0x1b48(0x08)
	struct UOverlay* HB_FinalScore; // 0x1b50(0x08)
	struct UImage* Image_TeamOneAdvantageArrow; // 0x1b58(0x08)
	struct UImage* Image_TeamOneLogo; // 0x1b60(0x08)
	struct UImage* Image_TeamTwoAdvantageArrow; // 0x1b68(0x08)
	struct UImage* Image_TeamTwoLogo; // 0x1b70(0x08)
	struct UImage* IMG_CircleDeco; // 0x1b78(0x08)
	struct UImage* Img_Divider; // 0x1b80(0x08)
	struct UImage* IMG_ScheduleBackground_2; // 0x1b88(0x08)
	struct UImage* IMG_VS; // 0x1b90(0x08)
	struct UImage* Line; // 0x1b98(0x08)
	struct UImage* line_thick; // 0x1ba0(0x08)
	struct UOverlay* O_TodayTag; // 0x1ba8(0x08)
	struct UImage* redbg; // 0x1bb0(0x08)
	struct UOverlay* ScheduleEntryItem; // 0x1bb8(0x08)
	struct UImage* Solid_Border_Block; // 0x1bc0(0x08)
	struct UVerticalBox* VB_MatchInfo; // 0x1bc8(0x08)
	struct UVerticalBox* VerticalBox_MatchContainer; // 0x1bd0(0x08)
	struct UWBP_LiveTag_EsportsHub_C* WBP_LiveTag_EsportsHub; // 0x1bd8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_609; // 0x1be0(0x08)
	struct UWidgetSwitcher* WS_VSoutcome; // 0x1be8(0x08)
	struct UEsportsScheduleEntryConvergedViewModelV2* Schedule Entry View Model; // 0x1bf0(0x08)
	struct FText EventRegionText; // 0x1bf8(0x18)
	struct FText EventTypeText; // 0x1c10(0x18)
	struct FText TournamentRegionNameCombinedText; // 0x1c28(0x18)
	struct FDateTime Start Time; // 0x1c40(0x08)

	struct FString GetListItemTelemetryTarget(); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.GetListItemTelemetryTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetEventDate(struct FDateTime EventDate); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.SetEventDate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryFormatRegionAndEventText(); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.TryFormatRegionAndEventText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetVCTGradient(struct FLinearColor Color01, struct FLinearColor Color02, struct UMaterialInstance*& OutMaterialInstance); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.SetVCTGradient // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRightTeamCodeChanged(struct FString NewValue); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.OnRightTeamCodeChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLeftTeamCodeChanged(struct FString NewValue); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.OnLeftTeamCodeChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStreamProviderURLChanged(struct FString NewValue); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.OnStreamProviderURLChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEventChanged(enum class E2024VCTEvent& event); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.OnEventChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnVCTLeagueChanged(enum class EVCTLeague& VCTLeague); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.OnVCTLeagueChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStatusChanged(enum class EEsportsMatchStatus& Status); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.OnStatusChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRightTeamLogoChanged(struct UTexture2D* RightTeamLogo); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.OnRightTeamLogoChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLeftTeamLogoChanged(struct UTexture2D* LeftTeamLogo); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.OnLeftTeamLogoChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStartTimeChanged(struct FDateTime& NewValue); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.OnStartTimeChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRightTeamOutcomeChanged(enum class EEsportsMatchTeamOutcome& RightTeamOutcome); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.OnRightTeamOutcomeChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLeftTeamOutcomeChanged(enum class EEsportsMatchTeamOutcome& LeftTeamOutcome); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.OnLeftTeamOutcomeChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStageNameChanged(struct FString NewValue); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.OnStageNameChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRightTeamGameWinsChanged(int32_t NewValue); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.OnRightTeamGameWinsChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLeftTeamGameWinsChanged(int32_t NewValue); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.OnLeftTeamGameWinsChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindViewModelEvents(bool Bind); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.BindViewModelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnEntryReleased(); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_View_ScheduleItemDisplay(int32_t EntryPoint); // Function WBP_View_ScheduleItemDisplay.WBP_View_ScheduleItemDisplay_C.ExecuteUbergraph_WBP_View_ScheduleItemDisplay // (Final|UbergraphFunction) // @ game+0x19be2f0
};

