// WidgetBlueprintGeneratedClass WBP_Panel_EsportsSpotlightTimelineSection.WBP_Panel_EsportsSpotlightTimelineSection_C
// Size: 0x5e8 (Inherited: 0x4a8)
struct UWBP_Panel_EsportsSpotlightTimelineSection_C : UAresCommonActivatableWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct UWidgetAnimation* OnHover; // 0x4b0(0x08)
	struct UAresCommonText* AresCommonText_506; // 0x4b8(0x08)
	struct UImage* Border; // 0x4c0(0x08)
	struct UImage* Border_hovered; // 0x4c8(0x08)
	struct UCommonActivatableWidgetSwitcher* CommonActivatableWidgetSwitcher_1; // 0x4d0(0x08)
	struct UAresCommonText* CT_EventBlurb; // 0x4d8(0x08)
	struct UAresCommonText* CT_EventName; // 0x4e0(0x08)
	struct UAresCommonText* CT_EventName_Secondary; // 0x4e8(0x08)
	struct UAresCommonText* CT_EventType; // 0x4f0(0x08)
	struct UImage* Image_bg; // 0x4f8(0x08)
	struct UImage* Image_Champions; // 0x500(0x08)
	struct UImage* Image_CN; // 0x508(0x08)
	struct UImage* Image_EMEA; // 0x510(0x08)
	struct UImage* Image_Hover; // 0x518(0x08)
	struct UImage* Image_Masters; // 0x520(0x08)
	struct UImage* Image_NA; // 0x528(0x08)
	struct UImage* Image_PACIFIC; // 0x530(0x08)
	struct UOverlay* O_EventBlurbDisplay; // 0x538(0x08)
	struct UOverlay* Overlay_ConcludedState; // 0x540(0x08)
	struct UOverlay* Overlay_InProgressState; // 0x548(0x08)
	struct USharedBlurBg_C* SharedBlurBg; // 0x550(0x08)
	struct UVerticalBox* VB_EventIconandName; // 0x558(0x08)
	struct UWBP_Misc_Esports_EventDots_C* WBP_Misc_Esports_EventDots; // 0x560(0x08)
	struct UCommonActivatableWidgetSwitcher* WidgetSwitcher_Icons; // 0x568(0x08)
	enum class E2024VCTEvent event; // 0x570(0x01)
	char pad_571[0x7]; // 0x571(0x07)
	struct UEsportsEventViewModel* EsportsEventViewModel; // 0x578(0x08)
	struct FSlateColor Base Line Color; // 0x580(0x14)
	struct FSlateColor VCT Red; // 0x594(0x14)
	struct FSlateColor Masters Purple; // 0x5a8(0x14)
	struct FSlateColor Champions Gold; // 0x5bc(0x14)
	bool bIsLastEvent; // 0x5d0(0x01)
	char pad_5D1[0x7]; // 0x5d1(0x07)
	struct UEsportsSplitViewModel* EsportsSplitViewModel; // 0x5d8(0x08)
	struct UEsportsOverviewViewModel* OverviewVM; // 0x5e0(0x08)

	void InitForV2(); // Function WBP_Panel_EsportsSpotlightTimelineSection.WBP_Panel_EsportsSpotlightTimelineSection_C.InitForV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function WBP_Panel_EsportsSpotlightTimelineSection.WBP_Panel_EsportsSpotlightTimelineSection_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Tournament Status Changed(struct FDateTime& NewValue); // Function WBP_Panel_EsportsSpotlightTimelineSection.WBP_Panel_EsportsSpotlightTimelineSection_C.On Tournament Status Changed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Event Status Changed(enum class EEsportsMatchStatus Event Status); // Function WBP_Panel_EsportsSpotlightTimelineSection.WBP_Panel_EsportsSpotlightTimelineSection_C.On Event Status Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Bind To Or Unbind From View Model(bool Should Bind); // Function WBP_Panel_EsportsSpotlightTimelineSection.WBP_Panel_EsportsSpotlightTimelineSection_C.Bind To Or Unbind From View Model // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Highlighted State(bool Highlighted); // Function WBP_Panel_EsportsSpotlightTimelineSection.WBP_Panel_EsportsSpotlightTimelineSection_C.Set Highlighted State // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Text(); // Function WBP_Panel_EsportsSpotlightTimelineSection.WBP_Panel_EsportsSpotlightTimelineSection_C.Set Text // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Style Widget(); // Function WBP_Panel_EsportsSpotlightTimelineSection.WBP_Panel_EsportsSpotlightTimelineSection_C.Style Widget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_EsportsSpotlightTimelineSection.WBP_Panel_EsportsSpotlightTimelineSection_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Panel_EsportsSpotlightTimelineSection.WBP_Panel_EsportsSpotlightTimelineSection_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Panel_EsportsSpotlightTimelineSection.WBP_Panel_EsportsSpotlightTimelineSection_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_EsportsSpotlightTimelineSection.WBP_Panel_EsportsSpotlightTimelineSection_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Panel_EsportsSpotlightTimelineSection.WBP_Panel_EsportsSpotlightTimelineSection_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Panel_EsportsSpotlightTimelineSection.WBP_Panel_EsportsSpotlightTimelineSection_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function WBP_Panel_EsportsSpotlightTimelineSection.WBP_Panel_EsportsSpotlightTimelineSection_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_EsportsSpotlightTimelineSection(int32_t EntryPoint); // Function WBP_Panel_EsportsSpotlightTimelineSection.WBP_Panel_EsportsSpotlightTimelineSection_C.ExecuteUbergraph_WBP_Panel_EsportsSpotlightTimelineSection // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

