// WidgetBlueprintGeneratedClass WBP_Panel_TopNavigation_Console.WBP_Panel_TopNavigation_Console_C
// Size: 0x4e8 (Inherited: 0x408)
struct UWBP_Panel_TopNavigation_Console_C : UWBP_Panel_TopNavigation_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UQueueViewModel_C* QueueViewModel; // 0x410(0x08)
	struct UWidgetAnimation* PlayButtonIntro; // 0x418(0x08)
	struct UWBP_NavBar_Main_C* AresCommonNavBar; // 0x420(0x08)
	struct USizeBox* BreadcrumbSizeBox; // 0x428(0x08)
	struct UWBP_Button_MenuNavigation_C* NavBarPlayButton; // 0x430(0x08)
	struct UWBP_TabList_Navigation_C* NavigationTabList; // 0x438(0x08)
	struct USizeBox* PlayButtonSizeBox; // 0x440(0x08)
	struct UWBP_Button_NavBar_Main_Lobby_C* QueueTimerButtonSolo; // 0x448(0x08)
	struct USizeBox* QueueTimerSizeBox; // 0x450(0x08)
	struct UWBP_Panel_SocialTrigger_C* UI_SocialTrigger; // 0x458(0x08)
	struct UWBP_Button_CurrencyShortcut_C* WBP_Button_CurrencyShortcut; // 0x460(0x08)
	struct UWBP_Button_NavShortcut_C* WBP_Button_OptionsShortcut; // 0x468(0x08)
	struct UWBP_Panel_Breadcrumbs_C* WBP_Panel_Breadcrumbs; // 0x470(0x08)
	struct UWBP_Panel_InterventionAlertTrigger_C* WBP_Panel_InterventionAlertTrigger; // 0x478(0x08)
	struct UWBP_Panel_RewardProgram_C* WBP_Panel_RewardProgram; // 0x480(0x08)
	bool IsNavBarInitialized; // 0x488(0x01)
	char pad_489[0x7]; // 0x489(0x07)
	struct FMulticastInlineDelegate PlayButtonClicked; // 0x490(0x10)
	struct FMulticastInlineDelegate SettingsButtonClicked; // 0x4a0(0x10)
	double AnimMaskLeft; // 0x4b0(0x08)
	struct FName MaskLeft; // 0x4b8(0x0c)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	double AnimContainerOpacity; // 0x4c8(0x08)
	struct FName ContainerOpacity; // 0x4d0(0x0c)
	char pad_4DC[0x4]; // 0x4dc(0x04)
	struct UMaterialInstanceDynamic* SocialTriggerBackgroundMaterial; // 0x4e0(0x08)

	void SetAnimContainerOpacity(double AnimContainerOpacity); // Function WBP_Panel_TopNavigation_Console.WBP_Panel_TopNavigation_Console_C.SetAnimContainerOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAnimMaskLeft(double AnimMaskRight); // Function WBP_Panel_TopNavigation_Console.WBP_Panel_TopNavigation_Console_C.SetAnimMaskLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateWalletVisibility(enum class EWidgetVisibilityOption InOption); // Function WBP_Panel_TopNavigation_Console.WBP_Panel_TopNavigation_Console_C.UpdateWalletVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateOptionsButtonVisibility(enum class EWidgetVisibilityOption InOption); // Function WBP_Panel_TopNavigation_Console.WBP_Panel_TopNavigation_Console_C.UpdateOptionsButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSocialEntranceVisibility(enum class EWidgetVisibilityOption InOption); // Function WBP_Panel_TopNavigation_Console.WBP_Panel_TopNavigation_Console_C.UpdateSocialEntranceVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateServerStatusVisibility(enum class EWidgetVisibilityOption InOption); // Function WBP_Panel_TopNavigation_Console.WBP_Panel_TopNavigation_Console_C.UpdateServerStatusVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateLoyaltyVisibility(enum class EWidgetVisibilityOption InOption); // Function WBP_Panel_TopNavigation_Console.WBP_Panel_TopNavigation_Console_C.UpdateLoyaltyVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateNavigationBarVisibility(enum class EWidgetVisibilityOption InOption); // Function WBP_Panel_TopNavigation_Console.WBP_Panel_TopNavigation_Console_C.UpdateNavigationBarVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayButtonVisibility(enum class EWidgetVisibilityOption InOption); // Function WBP_Panel_TopNavigation_Console.WBP_Panel_TopNavigation_Console_C.UpdatePlayButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateBreadcrumbVisibility(enum class EWidgetVisibilityOption InOption); // Function WBP_Panel_TopNavigation_Console.WBP_Panel_TopNavigation_Console_C.UpdateBreadcrumbVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateIsNavigationBarEnabled(bool bIsEnabled); // Function WBP_Panel_TopNavigation_Console.WBP_Panel_TopNavigation_Console_C.UpdateIsNavigationBarEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateNavigationBarIndex(int32_t ScreenIndex); // Function WBP_Panel_TopNavigation_Console.WBP_Panel_TopNavigation_Console_C.UpdateNavigationBarIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateNavigationBar(struct TArray<struct FRGICommonNavBarDetails>& InNavigationBarData); // Function WBP_Panel_TopNavigation_Console.WBP_Panel_TopNavigation_Console_C.UpdateNavigationBar // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_TopNavigation_Console.WBP_Panel_TopNavigation_Console_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_TopNavigation_Console_AresCommonNavBar_K2Node_ComponentBoundEvent_1_RGICommonNavBarButtonSelected__DelegateSignature(int32_t NavBarIndex, struct UAresCommonButton* Button); // Function WBP_Panel_TopNavigation_Console.WBP_Panel_TopNavigation_Console_C.BndEvt__WBP_Panel_TopNavigation_Console_AresCommonNavBar_K2Node_ComponentBoundEvent_1_RGICommonNavBarButtonSelected__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_TopNavigation_Console_NavBarPlayButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_TopNavigation_Console.WBP_Panel_TopNavigation_Console_C.BndEvt__WBP_Panel_TopNavigation_Console_NavBarPlayButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_TopNavigation_Console_WBP_Button_CurrencyShortcut_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_TopNavigation_Console.WBP_Panel_TopNavigation_Console_C.BndEvt__WBP_Panel_TopNavigation_Console_WBP_Button_CurrencyShortcut_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_TopNavigation_Console_WBP_Button_NavShortcut_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_TopNavigation_Console.WBP_Panel_TopNavigation_Console_C.BndEvt__WBP_Panel_TopNavigation_Console_WBP_Button_NavShortcut_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_TopNavigation_Console(int32_t EntryPoint); // Function WBP_Panel_TopNavigation_Console.WBP_Panel_TopNavigation_Console_C.ExecuteUbergraph_WBP_Panel_TopNavigation_Console // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void SettingsButtonClicked__DelegateSignature(); // Function WBP_Panel_TopNavigation_Console.WBP_Panel_TopNavigation_Console_C.SettingsButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayButtonClicked__DelegateSignature(); // Function WBP_Panel_TopNavigation_Console.WBP_Panel_TopNavigation_Console_C.PlayButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

