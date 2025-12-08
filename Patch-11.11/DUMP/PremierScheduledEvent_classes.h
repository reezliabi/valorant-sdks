// WidgetBlueprintGeneratedClass PremierScheduledEvent.PremierScheduledEvent_C
// Size: 0x464 (Inherited: 0x318)
struct UPremierScheduledEvent_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* On_Hover; // 0x320(0x08)
	struct UImage* BG; // 0x328(0x08)
	struct UButton* BTN_EventButton; // 0x330(0x08)
	struct USizeBox* ButtonSizeBox; // 0x338(0x08)
	struct UImage* Img-PastEventOverlay; // 0x340(0x08)
	struct UImage* IMG_Border; // 0x348(0x08)
	struct UImage* IMG_empty; // 0x350(0x08)
	struct UImage* IMG_EventTypeIcon; // 0x358(0x08)
	struct UImage* IMG_EventTypeIcon_BG; // 0x360(0x08)
	struct UImage* IMG_EventTypeIcon_BG_Hover; // 0x368(0x08)
	struct UImage* IMG_FutureEvent_Empty; // 0x370(0x08)
	struct UImage* IMG_HoverBorder; // 0x378(0x08)
	struct UImage* IMG_LeftBarBG; // 0x380(0x08)
	struct UImage* IMG_LiveEventBG; // 0x388(0x08)
	struct UImage* IMG_RailDiamond; // 0x390(0x08)
	struct UImage* IMG_RailDiamondGlow; // 0x398(0x08)
	struct UImage* IMG_SelectionBorder; // 0x3a0(0x08)
	struct UTextBlock* Info_DayOfWeek; // 0x3a8(0x08)
	struct UTextBlock* Info_EventSubText; // 0x3b0(0x08)
	struct UTextBlock* Info_Month_Date; // 0x3b8(0x08)
	struct UTextBlock* Info_StartTimesLine; // 0x3c0(0x08)
	struct UOverlay* O_EventTypeIcon; // 0x3c8(0x08)
	struct UOverlay* O_SelectedState; // 0x3d0(0x08)
	struct UOverlay* RailOverlay; // 0x3d8(0x08)
	struct UTextBlock* TB_Next; // 0x3e0(0x08)
	struct UWBP_LiveTag_C* WBP_LiveTag; // 0x3e8(0x08)
	struct UWidgetSwitcher* WS_EventBG; // 0x3f0(0x08)
	struct UWidgetSwitcher* WS_LiveOrNext; // 0x3f8(0x08)
	struct UPremierEventModelOld* EventModel; // 0x400(0x08)
	enum class BPE_UpcomingEventStatus E_EntryStatus; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct FMulticastInlineDelegate OnScheduledEventSelected; // 0x410(0x10)
	bool IsCurrentOrNextEvent; // 0x420(0x01)
	bool IsSelected; // 0x421(0x01)
	char pad_422[0x2]; // 0x422(0x02)
	struct FLinearColor SelectedColor; // 0x424(0x10)
	struct FLinearColor CurrentOrNextEventColor; // 0x434(0x10)
	char pad_444[0x4]; // 0x444(0x04)
	struct UPremierScheduledEventModelOld* ScheduledEventModel; // 0x448(0x08)
	bool IsModal; // 0x450(0x01)
	char pad_451[0x3]; // 0x451(0x03)
	struct FLinearColor PastEventColor; // 0x454(0x10)

	void AdjustDataDisplaysForProEvent(int32_t EventNumber); // Function PremierScheduledEvent.PremierScheduledEvent_C.AdjustDataDisplaysForProEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetModalStyle(bool IsModal); // Function PremierScheduledEvent.PremierScheduledEvent_C.SetModalStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCurrentEventStyleV2(enum class BPE_UpcomingEventStatus entryStatus); // Function PremierScheduledEvent.PremierScheduledEvent_C.SetCurrentEventStyleV2 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateStates(); // Function PremierScheduledEvent.PremierScheduledEvent_C.UpdateStates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsEventLive(bool& Is Live, bool& IsPast); // Function PremierScheduledEvent.PremierScheduledEvent_C.IsEventLive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateDataDisplays(); // Function PremierScheduledEvent.PremierScheduledEvent_C.UpdateDataDisplays // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function PremierScheduledEvent.PremierScheduledEvent_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Init(struct UPremierScheduledEventModelOld* ScheduledEventModel); // Function PremierScheduledEvent.PremierScheduledEvent_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function PremierScheduledEvent.PremierScheduledEvent_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Select Event(); // Function PremierScheduledEvent.PremierScheduledEvent_C.Select Event // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TournamentsUpcomingEvent_Button_444_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function PremierScheduledEvent.PremierScheduledEvent_C.BndEvt__TournamentsUpcomingEvent_Button_444_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TournamentsUpcomingEvent_Button_444_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function PremierScheduledEvent.PremierScheduledEvent_C.BndEvt__TournamentsUpcomingEvent_Button_444_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TournamentsUpcomingEvent_Button_444_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature(); // Function PremierScheduledEvent.PremierScheduledEvent_C.BndEvt__TournamentsUpcomingEvent_Button_444_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void UpdateIsCurrentOrNextEvent(bool IsCurrentOrNext); // Function PremierScheduledEvent.PremierScheduledEvent_C.UpdateIsCurrentOrNextEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Deselect Event(); // Function PremierScheduledEvent.PremierScheduledEvent_C.Deselect Event // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_PremierScheduledEvent(int32_t EntryPoint); // Function PremierScheduledEvent.PremierScheduledEvent_C.ExecuteUbergraph_PremierScheduledEvent // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnScheduledEventSelected__DelegateSignature(struct UPremierScheduledEventModelOld* Scheduled Event Model); // Function PremierScheduledEvent.PremierScheduledEvent_C.OnScheduledEventSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

