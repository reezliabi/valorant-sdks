// WidgetBlueprintGeneratedClass WBP_Screen_Esports_League_Event.WBP_Screen_Esports_League_Event_C
// Size: 0x658 (Inherited: 0x578)
struct UWBP_Screen_Esports_League_Event_C : UEsportsHubScreenV2 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x578(0x08)
	struct UEsportsHubSafeArea* EsportsHubSafeArea_FullScreen; // 0x580(0x08)
	struct UImage* Image; // 0x588(0x08)
	struct UImage* Image_2; // 0x590(0x08)
	struct UImage* Image_3; // 0x598(0x08)
	struct UImage* Image_4; // 0x5a0(0x08)
	struct UImage* Image_5; // 0x5a8(0x08)
	struct UImage* Image_43; // 0x5b0(0x08)
	struct UImage* Image_108; // 0x5b8(0x08)
	struct UImage* Image_123; // 0x5c0(0x08)
	struct UImage* Image_Divider; // 0x5c8(0x08)
	struct UImage* Image_Divider_3; // 0x5d0(0x08)
	struct UImage* IMG_HermesBG; // 0x5d8(0x08)
	struct UImage* RedL1_3; // 0x5e0(0x08)
	struct UImage* RedL1_4; // 0x5e8(0x08)
	struct UImage* RedL2_3; // 0x5f0(0x08)
	struct UImage* RedL2_4; // 0x5f8(0x08)
	struct USizeBox* SB_Pickems; // 0x600(0x08)
	struct USizeBox* SB_Standings; // 0x608(0x08)
	struct UAresCommonRichText* T_SchedulesHeader; // 0x610(0x08)
	struct UWBP_Button_Event_TabbedContent1_C* WBP_Button_Event_TabbedContent1; // 0x618(0x08)
	struct UWBP_Button_EventBracket_C* WBP_Button_EventBracket; // 0x620(0x08)
	struct UWBP_Button_EventStandings_C* WBP_Button_EventStandings; // 0x628(0x08)
	struct UWBP_Panel_EsportsUpcomingEventsArea_C* WBP_Panel_EsportsUpcomingEventsArea; // 0x630(0x08)
	struct UWBP_Panel_VCTEventInfo_C* WBP_Panel_VCTEventInfo; // 0x638(0x08)
	struct UEsportsEventViewModel* Esports Event View Model; // 0x640(0x08)
	struct UTabbedContent_C* Tabbed Content; // 0x648(0x08)
	struct UEsportsTournamentViewModel* EsportsTournamentViewModel; // 0x650(0x08)

	void InitFromParameterEvent(); // Function WBP_Screen_Esports_League_Event.WBP_Screen_Esports_League_Event_C.InitFromParameterEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Screen_Esports_League_Event.WBP_Screen_Esports_League_Event_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	void NavigateToPickems(); // Function WBP_Screen_Esports_League_Event.WBP_Screen_Esports_League_Event_C.NavigateToPickems // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateBracketOverlay(); // Function WBP_Screen_Esports_League_Event.WBP_Screen_Esports_League_Event_C.CreateBracketOverlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateStandingsOverlay(); // Function WBP_Screen_Esports_League_Event.WBP_Screen_Esports_League_Event_C.CreateStandingsOverlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEventChanged(enum class E2024VCTEvent InEvent); // Function WBP_Screen_Esports_League_Event.WBP_Screen_Esports_League_Event_C.OnEventChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StylePageForEvent(enum class E2024VCTEvent InEvent); // Function WBP_Screen_Esports_League_Event.WBP_Screen_Esports_League_Event_C.StylePageForEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHasRegularSeasonChanged(bool bHasRegularSeason); // Function WBP_Screen_Esports_League_Event.WBP_Screen_Esports_League_Event_C.OnHasRegularSeasonChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Event IDs Changed(struct FString NewLeagueID, struct FString NewTournamentID); // Function WBP_Screen_Esports_League_Event.WBP_Screen_Esports_League_Event_C.On Event IDs Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Style Page For Event Type(); // Function WBP_Screen_Esports_League_Event.WBP_Screen_Esports_League_Event_C.Style Page For Event Type // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Bind To Or Unbind From View Model(bool Should Bind); // Function WBP_Screen_Esports_League_Event.WBP_Screen_Esports_League_Event_C.Bind To Or Unbind From View Model // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetEvent(enum class E2024VCTEvent event); // Function WBP_Screen_Esports_League_Event.WBP_Screen_Esports_League_Event_C.SetEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Screen_Esports_League_Event.WBP_Screen_Esports_League_Event_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_Esports_League_Event_WBP_Button_EventBracket_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Screen_Esports_League_Event.WBP_Screen_Esports_League_Event_C.BndEvt__WBP_Screen_Esports_League_Event_WBP_Button_EventBracket_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Screen_Esports_League_Event.WBP_Screen_Esports_League_Event_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Screen_Esports_League_Event.WBP_Screen_Esports_League_Event_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_Esports_League_Event_WBP_Button_EventStandings_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Screen_Esports_League_Event.WBP_Screen_Esports_League_Event_C.BndEvt__WBP_Screen_Esports_League_Event_WBP_Button_EventStandings_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_Esports_League_Event_WBP_Button_Event_TabbedContent1_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Screen_Esports_League_Event.WBP_Screen_Esports_League_Event_C.BndEvt__WBP_Screen_Esports_League_Event_WBP_Button_Event_TabbedContent1_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnScreenReady(); // Function WBP_Screen_Esports_League_Event.WBP_Screen_Esports_League_Event_C.OnScreenReady // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnActivated(); // Function WBP_Screen_Esports_League_Event.WBP_Screen_Esports_League_Event_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Screen_Esports_League_Event(int32_t EntryPoint); // Function WBP_Screen_Esports_League_Event.WBP_Screen_Esports_League_Event_C.ExecuteUbergraph_WBP_Screen_Esports_League_Event // (Final|UbergraphFunction) // @ game+0x19be2f0
};

