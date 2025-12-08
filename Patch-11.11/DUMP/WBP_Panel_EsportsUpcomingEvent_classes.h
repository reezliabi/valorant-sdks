// WidgetBlueprintGeneratedClass WBP_Panel_EsportsUpcomingEvent.WBP_Panel_EsportsUpcomingEvent_C
// Size: 0x4a8 (Inherited: 0x3e0)
struct UWBP_Panel_EsportsUpcomingEvent_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UUI_AresRichTextButton_C* Button_LiveClickout; // 0x3e8(0x08)
	struct UAresCommonText* CT_Concluded; // 0x3f0(0x08)
	struct UAresCommonText* CT_Date; // 0x3f8(0x08)
	struct UAresCommonText* CT_MatchType; // 0x400(0x08)
	struct UAresCommonText* CT_TeamOneCode; // 0x408(0x08)
	struct UAresCommonText* CT_TeamOneScore; // 0x410(0x08)
	struct UAresCommonText* CT_TeamTwoCode; // 0x418(0x08)
	struct UAresCommonText* CT_TeamTwoScore; // 0x420(0x08)
	struct UAresCommonText* CT_Time; // 0x428(0x08)
	struct UAresCommonText* CT_TimeZone; // 0x430(0x08)
	struct UImage* I_Furniture; // 0x438(0x08)
	struct UImage* I_Furniture_2; // 0x440(0x08)
	struct UImage* I_TeamOneLogo; // 0x448(0x08)
	struct UImage* I_TeamTwoLogo; // 0x450(0x08)
	struct UImage* Image_84; // 0x458(0x08)
	struct UImage* Image_DateAreaBG; // 0x460(0x08)
	struct UImage* Image_TeamAreaBG; // 0x468(0x08)
	struct UOverlay* O_Livestate; // 0x470(0x08)
	struct UVerticalBox* VB_Time_TimeZone; // 0x478(0x08)
	struct UWBP_LiveTag_EsportsHub_C* WBP_LiveTag_EsportsHub; // 0x480(0x08)
	struct UWidgetSwitcher* WS_Score; // 0x488(0x08)
	struct UWidgetSwitcher* WS_TimeInfo; // 0x490(0x08)
	struct UEsportsScheduleEntryViewModel* EsportsScheduleEntryViewModel; // 0x498(0x08)
	struct UEsportsScheduleEntryViewModelV2* EsportsScheduleEntryViewModelV2; // 0x4a0(0x08)

	void SetMatchID(struct FString InMatchID); // Function WBP_Panel_EsportsUpcomingEvent.WBP_Panel_EsportsUpcomingEvent_C.SetMatchID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStageNameChangedV2(struct FString NewStageName); // Function WBP_Panel_EsportsUpcomingEvent.WBP_Panel_EsportsUpcomingEvent_C.OnStageNameChangedV2 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateWinningTeam(enum class EWinningTeam Selection); // Function WBP_Panel_EsportsUpcomingEvent.WBP_Panel_EsportsUpcomingEvent_C.UpdateWinningTeam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTeamOutcomeChanged(enum class EEsportsMatchTeamOutcome TeamOutcome, bool IsFirstTeam); // Function WBP_Panel_EsportsUpcomingEvent.WBP_Panel_EsportsUpcomingEvent_C.OnTeamOutcomeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateStartTimeUTC(struct FDateTime StartTimeUTC); // Function WBP_Panel_EsportsUpcomingEvent.WBP_Panel_EsportsUpcomingEvent_C.UpdateStartTimeUTC // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStartTimeUTCChanged(struct FDateTime& StartTimeUTC); // Function WBP_Panel_EsportsUpcomingEvent.WBP_Panel_EsportsUpcomingEvent_C.OnStartTimeUTCChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Match Status Updated(enum class EEsportsMatchStatus MatchStatus); // Function WBP_Panel_EsportsUpcomingEvent.WBP_Panel_EsportsUpcomingEvent_C.On Match Status Updated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Provider URL Updated(struct FString ProviderURL); // Function WBP_Panel_EsportsUpcomingEvent.WBP_Panel_EsportsUpcomingEvent_C.On Provider URL Updated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Winning Team Updated(enum class EWinningTeam WinningTeam); // Function WBP_Panel_EsportsUpcomingEvent.WBP_Panel_EsportsUpcomingEvent_C.On Winning Team Updated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Game Wins Updated(int32_t GameScore, bool IsFirstTeam); // Function WBP_Panel_EsportsUpcomingEvent.WBP_Panel_EsportsUpcomingEvent_C.On Game Wins Updated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Team Code Updated(struct FString TeamCode, bool IsFirstTeam); // Function WBP_Panel_EsportsUpcomingEvent.WBP_Panel_EsportsUpcomingEvent_C.On Team Code Updated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Match Start Time Updated(struct FString MatchID, struct FDateTime StartTime); // Function WBP_Panel_EsportsUpcomingEvent.WBP_Panel_EsportsUpcomingEvent_C.On Match Start Time Updated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Stage Name Updated(struct FString MatchID, struct FString StageName); // Function WBP_Panel_EsportsUpcomingEvent.WBP_Panel_EsportsUpcomingEvent_C.On Stage Name Updated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Team Logo Updated(struct UTexture2D* TeamLogo, bool IsFirstTeam); // Function WBP_Panel_EsportsUpcomingEvent.WBP_Panel_EsportsUpcomingEvent_C.On Team Logo Updated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToOrUnbindFromViewModel(bool ShouldBind); // Function WBP_Panel_EsportsUpcomingEvent.WBP_Panel_EsportsUpcomingEvent_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetModel(struct UEventDataModel* EventDataModel); // Function WBP_Panel_EsportsUpcomingEvent.WBP_Panel_EsportsUpcomingEvent_C.SetModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Panel_EsportsUpcomingEvent.WBP_Panel_EsportsUpcomingEvent_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_EsportsUpcomingEvent_Button_LiveClickout_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_EsportsUpcomingEvent.WBP_Panel_EsportsUpcomingEvent_C.BndEvt__WBP_Panel_EsportsUpcomingEvent_Button_LiveClickout_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Panel_EsportsUpcomingEvent.WBP_Panel_EsportsUpcomingEvent_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_EsportsUpcomingEvent(int32_t EntryPoint); // Function WBP_Panel_EsportsUpcomingEvent.WBP_Panel_EsportsUpcomingEvent_C.ExecuteUbergraph_WBP_Panel_EsportsUpcomingEvent // (Final|UbergraphFunction) // @ game+0x19be2f0
};

