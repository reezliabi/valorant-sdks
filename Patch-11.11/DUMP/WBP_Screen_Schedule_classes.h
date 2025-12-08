// WidgetBlueprintGeneratedClass WBP_Screen_Schedule.WBP_Screen_Schedule_C
// Size: 0x6c9 (Inherited: 0x550)
struct UWBP_Screen_Schedule_C : UEsportsScreenBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UAresScrollBox* AresScrollBox_ScheduleContainer; // 0x558(0x08)
	struct UImage* Border; // 0x560(0x08)
	struct UWBP_Button_IconTab_C* Button_FilterConsole; // 0x568(0x08)
	struct UAresCommonText* CT_Error; // 0x570(0x08)
	struct UAresCommonText* CT_Error_2; // 0x578(0x08)
	struct UEsportsHubSafeArea* EsportsHubSafeArea; // 0x580(0x08)
	struct UEsports_Loading_C* EsportsLoadingThrobber; // 0x588(0x08)
	struct UEsports_Loading_C* EsportsLoadingThrobber_2; // 0x590(0x08)
	struct UHorizontalBox* HB_MainPanel; // 0x598(0x08)
	struct UImage* Icon_2; // 0x5a0(0x08)
	struct UImage* Image; // 0x5a8(0x08)
	struct UImage* Image_2; // 0x5b0(0x08)
	struct UImage* Image_3; // 0x5b8(0x08)
	struct UImage* Image_4; // 0x5c0(0x08)
	struct UImage* Image_5; // 0x5c8(0x08)
	struct UImage* Image_6; // 0x5d0(0x08)
	struct UImage* Image_7; // 0x5d8(0x08)
	struct UImage* Image_47; // 0x5e0(0x08)
	struct UImage* Image_79; // 0x5e8(0x08)
	struct UImage* Image_361; // 0x5f0(0x08)
	struct UImage* Image_shadow; // 0x5f8(0x08)
	struct UOverlay* LeftPanel_Console; // 0x600(0x08)
	struct UWBP_Panel_Schedule_Properties_C* Panel_FilterPC; // 0x608(0x08)
	struct USizeBox* SB_FilterButtonConsole; // 0x610(0x08)
	struct USizeBox* SB_FilterButtonPC; // 0x618(0x08)
	struct UOverlay* SchedulePostConvergence; // 0x620(0x08)
	struct UOverlay* SchedulePreConvergence; // 0x628(0x08)
	struct USizeBox* ScrollToTopBtn; // 0x630(0x08)
	struct USharedBlurBg_C* SharedBlurBg; // 0x638(0x08)
	struct UAresCommonText* Text_NoEvents; // 0x640(0x08)
	struct UAresCommonText* Text_NoEvents_2; // 0x648(0x08)
	struct UButton* ToTopButton; // 0x650(0x08)
	struct UWBP_Panel_EsportsSpotlightTitle_C* WBP_Panel_EsportsSpotlightTitle; // 0x658(0x08)
	struct UWBP_Panel_EsportsSpotlightTitle_C* WBP_Panel_EsportsSpotlightTitle_2; // 0x660(0x08)
	struct UWBP_Panel_Schedule_Entry_List_V2_C* WBP_Panel_Schedule_Entry_List_V2; // 0x668(0x08)
	struct UWBP_Panel_Schedule_Properties_C* WBP_Panel_ScheduleProperties; // 0x670(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x678(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_FilterButton; // 0x680(0x08)
	struct UWBP_Panel_Schedule_Entry_List_C* ScheduleEntryList; // 0x688(0x08)
	bool HasRequestedMoreItems; // 0x690(0x01)
	bool ShouldLoadNextItems; // 0x691(0x01)
	char pad_692[0x6]; // 0x692(0x06)
	struct FVector2D CurrentSize; // 0x698(0x10)
	struct UEsportsScheduleEntryListViewModel* ScheduleEntryListViewModel; // 0x6a8(0x08)
	struct UEsportsScheduleEntryListViewModelV2* ScheduleEntryListViewModelV2; // 0x6b0(0x08)
	struct UEsports_Loading_C* Esports_LoadingAnimation; // 0x6b8(0x08)
	struct UFP_EsportsScheduleFilterProvider_C* Schedule Filter; // 0x6c0(0x08)
	bool IsScheduleLoaded; // 0x6c8(0x01)

	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Screen_Schedule.WBP_Screen_Schedule_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	void OnError(); // Function WBP_Screen_Schedule.WBP_Screen_Schedule_C.OnError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Enable Schedule Converged(); // Function WBP_Screen_Schedule.WBP_Screen_Schedule_C.Enable Schedule Converged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Enable Schedule Pre Convergence(); // Function WBP_Screen_Schedule.WBP_Screen_Schedule_C.Enable Schedule Pre Convergence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateLoadingVisibility(bool IsScheduleLoaded); // Function WBP_Screen_Schedule.WBP_Screen_Schedule_C.UpdateLoadingVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMatchIDsChanged(struct TArray<struct FString>& NewMatchIDs); // Function WBP_Screen_Schedule.WBP_Screen_Schedule_C.OnMatchIDsChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowOrHideTopBtn(double CurrentOffset); // Function WBP_Screen_Schedule.WBP_Screen_Schedule_C.ShowOrHideTopBtn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ScrollToTop(); // Function WBP_Screen_Schedule.WBP_Screen_Schedule_C.ScrollToTop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDateToScrollTo(struct FDateTime& DateToScrollTo); // Function WBP_Screen_Schedule.WBP_Screen_Schedule_C.OnDateToScrollTo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFilterApplied(bool IsFilterChanged); // Function WBP_Screen_Schedule.WBP_Screen_Schedule_C.OnFilterApplied // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnClientScheduleSizeUpdated(bool IsClientScheduleSizeGreaterThanMaxScheduleSize); // Function WBP_Screen_Schedule.WBP_Screen_Schedule_C.OnClientScheduleSizeUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnWidgetToScrollTo(int32_t LastWidgetAddedIndex); // Function WBP_Screen_Schedule.WBP_Screen_Schedule_C.OnWidgetToScrollTo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnNoMoreNextItemsToLoad(); // Function WBP_Screen_Schedule.WBP_Screen_Schedule_C.OnNoMoreNextItemsToLoad // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToEvents(bool Bind); // Function WBP_Screen_Schedule.WBP_Screen_Schedule_C.BindToEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_Schedule_Container_AresScrollBox_ScheduleContainer_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset); // Function WBP_Screen_Schedule.WBP_Screen_Schedule_C.BndEvt__WBP_Panel_Schedule_Container_AresScrollBox_ScheduleContainer_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Screen_Schedule.WBP_Screen_Schedule_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_Schedule_Container_ToTopButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Screen_Schedule.WBP_Screen_Schedule_C.BndEvt__WBP_Panel_Schedule_Container_ToTopButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_Schedule_Container_WBP_Panel_ScheduleProperties_K2Node_ComponentBoundEvent_5_LeagueFilterUpdated__DelegateSignature(struct TSet<enum class EVCTLeague> Leagues); // Function WBP_Screen_Schedule.WBP_Screen_Schedule_C.BndEvt__WBP_Panel_Schedule_Container_WBP_Panel_ScheduleProperties_K2Node_ComponentBoundEvent_5_LeagueFilterUpdated__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Screen_Schedule.WBP_Screen_Schedule_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnScreenReady(); // Function WBP_Screen_Schedule.WBP_Screen_Schedule_C.OnScreenReady // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_Schedule_FilterButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Screen_Schedule.WBP_Screen_Schedule_C.BndEvt__WBP_Screen_Schedule_FilterButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Screen_Schedule(int32_t EntryPoint); // Function WBP_Screen_Schedule.WBP_Screen_Schedule_C.ExecuteUbergraph_WBP_Screen_Schedule // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

