// WidgetBlueprintGeneratedClass MainMenuNavBar_PC.MainMenuNavBar_PC_C
// Size: 0x648 (Inherited: 0x508)
struct UMainMenuNavBar_PC_C : UMainMenuNavBar_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x508(0x08)
	struct UWidgetAnimation* hover; // 0x510(0x08)
	struct UButton* AlertButton; // 0x518(0x08)
	struct UImage* arrowtx; // 0x520(0x08)
	struct UButton* BackButton; // 0x528(0x08)
	struct UMenuAnchor* BackButtonAnchor; // 0x530(0x08)
	struct UTextBlock* BackText; // 0x538(0x08)
	struct UImage* bg_addon; // 0x540(0x08)
	struct UBonusShopButton_C* BonusShopButton; // 0x548(0x08)
	struct UWBP_MenuButtonNavShortcut_C* CareerShortcut_3; // 0x550(0x08)
	struct UWBP_MenuButtonNavShortcut_C* CareerShortcut_Main; // 0x558(0x08)
	struct UDynamicConfigSwitcher_C* DynamicConfigSwitcher; // 0x560(0x08)
	struct UWBP_MenuButtonNavShortcut_C* EsportsHubrShortcut; // 0x568(0x08)
	struct UWBP_MenuButtonNavShortcut_C* EsportsShortcut_Addon; // 0x570(0x08)
	struct UOverlay* GlobalNavCluster; // 0x578(0x08)
	struct UWidgetSwitcher* GlobalNavWidgetSwitcher; // 0x580(0x08)
	struct UGlobalQueueTimer_Universal_C* GlobalQueueTimer_Universal; // 0x588(0x08)
	struct UGlobalQueueTimer_Universal_C* GlobalQueueTimer_Universal_176; // 0x590(0x08)
	struct UOverlay* HomeScreenNavCluster; // 0x598(0x08)
	struct UImage* Image_101; // 0x5a0(0x08)
	struct UImage* Image_143; // 0x5a8(0x08)
	struct UMainMenuAlert_C* MainMenuAlert; // 0x5b0(0x08)
	struct UTextBlock* PageNameText; // 0x5b8(0x08)
	struct UWBP_MenuButtonNavShortcut_C* PremierShortcut_Addon; // 0x5c0(0x08)
	struct UWBP_MenuButtonNavShortcut_C* PremierShortcut_Main; // 0x5c8(0x08)
	struct USizeBox* SB_Addon; // 0x5d0(0x08)
	struct USectionPlay_C* SectionPlay; // 0x5d8(0x08)
	struct USectionPlay_C* SectionPlay_2; // 0x5e0(0x08)
	struct UUniversalProgressionWidget_C* UPW; // 0x5e8(0x08)
	struct UUtilityMenuButton_C* UtilityMenuButton; // 0x5f0(0x08)
	struct UWalletSummary_PC_C* WalletSummary_PC; // 0x5f8(0x08)
	struct TScriptInterface<INavBarMenu> ActiveNavBarMenu; // 0x600(0x10)
	struct UAkAudioEvent* AUD_BackHovered; // 0x610(0x08)
	struct UAkAudioEvent* AUD_BackUnhovered; // 0x618(0x08)
	struct UAkAudioEvent* AUD_BackClick; // 0x620(0x08)
	struct FMulticastInlineDelegate OnBackButtonTriggered; // 0x628(0x10)
	struct FMulticastInlineDelegate OnBackButtonClicked; // 0x638(0x10)

	void UpdateTopNavWidgetVisibility(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.UpdateTopNavWidgetVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerBackButton(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.TriggerBackButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UUserWidget* OnBackButtonAnchor_GetUserMenuContent(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.OnBackButtonAnchor_GetUserMenuContent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTopNavBarMenuChanged(struct TScriptInterface<INavBarMenu> TopMenu); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.OnTopNavBarMenuChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RequestCloseTopMenu(bool& MenuWasClosed); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.RequestCloseTopMenu // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateViewForNavBarData(struct FAresMainMenuNavBarData InNavBarData); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.UpdateViewForNavBarData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__AlertButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.BndEvt__AlertButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__MainMenuNavBar_PC_BackButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.BndEvt__MainMenuNavBar_PC_BackButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__MainMenuNavBar_PC_BackButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.BndEvt__MainMenuNavBar_PC_BackButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__MainMenuNavBar_PC_BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.BndEvt__MainMenuNavBar_PC_BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnNavigationStateChanged_2(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.OnNavigationStateChanged_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTickerChanged(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.OnTickerChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_MainMenuNavBar_PC(int32_t EntryPoint); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.ExecuteUbergraph_MainMenuNavBar_PC // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnBackButtonClicked__DelegateSignature(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.OnBackButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBackButtonTriggered__DelegateSignature(); // Function MainMenuNavBar_PC.MainMenuNavBar_PC_C.OnBackButtonTriggered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

