// WidgetBlueprintGeneratedClass WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C
// Size: 0x6a8 (Inherited: 0x520)
struct UWBP_Screen_Lobby_Converged_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UAresInputSwitcher* AresInputSwitcher_StartGame; // 0x528(0x08)
	struct UDynamicConfigSwitcher_C* DebugEventSelector_ConfigSwitcher; // 0x530(0x08)
	struct UImage* Image_ConnectorLine; // 0x538(0x08)
	struct UImage* Image_ConnectorLine_2; // 0x540(0x08)
	struct UImage* Img_PremierFogLight; // 0x548(0x08)
	struct UImage* Img_TournamentBG; // 0x550(0x08)
	struct USizeBox* LeaveButtonSizebox; // 0x558(0x08)
	struct USharedButtonMaster_C* LeavePartyButton_PC; // 0x560(0x08)
	struct UOverlay* MatchmadeBanner_Overlay; // 0x568(0x08)
	struct UOverlay* Overlay_Premier_BG; // 0x570(0x08)
	struct USharedButtonMaster_C* PracticeButton_PC; // 0x578(0x08)
	struct UOverlay* Premier_Banner_Overlay; // 0x580(0x08)
	struct UOverlay* Premier_DebugEventSelectorSwitcher; // 0x588(0x08)
	struct UPremierEventNotification_C* PremierEventNotification; // 0x590(0x08)
	struct UImage* Selected_Map_Background; // 0x598(0x08)
	struct UWidgetSwitcher* StartGameButtonSwitcher; // 0x5a0(0x08)
	struct UStartGameWidgetV2_C* StartGameWidgetV2; // 0x5a8(0x08)
	struct ULazyPlatformWidgetLoader_Universal_C* TournamentQueueButtonLoader; // 0x5b0(0x08)
	struct UWBP_Decoration_ScreenEdgeTriangle_C* WBP_Decoration_ScreenEdgeTriangle; // 0x5b8(0x08)
	struct UWBP_Panel_EventBanners_C* WBP_Panel_EventBanners; // 0x5c0(0x08)
	struct UWBP_Panel_StartGame_C* WBP_Panel_StartGame; // 0x5c8(0x08)
	struct UWBP_View_CustomLobbyParty_C* WBP_View_CustomLobbyParty; // 0x5d0(0x08)
	struct UWBP_View_LobbyParty_C* WBP_View_LobbyParty; // 0x5d8(0x08)
	struct UWBP_View_LobbySideMenu_C* WBP_View_LobbySideMenu; // 0x5e0(0x08)
	struct UCommonActivatableWidgetSwitcher* WidgetSwitcher; // 0x5e8(0x08)
	struct UVM_LobbyPartyControls_C* VM_LobbyPartyControls; // 0x5f0(0x08)
	struct UVM_PracticeMode_C* VM_PracticeMode; // 0x5f8(0x08)
	struct UVM_CustomGame_MapSelect_C* VM_CustomGameMapSelect; // 0x600(0x08)
	struct UVM_MatchmakingGameMode_C* VM_MatchmakingGameMode; // 0x608(0x08)
	struct UWBP_QueueTimer_C* QueueTimer; // 0x610(0x08)
	struct UVM_StartGame_C* VM_StartGame; // 0x618(0x08)
	struct UVM_PlayerEXPBoost_C* VM_PlayerExpBoost; // 0x620(0x08)
	struct URewardProgramListViewModel* VM_RewardProgramList; // 0x628(0x08)
	struct UVM_Lobby_ServerSelect_C* VM_LobbyServerSelect; // 0x630(0x08)
	bool bIsPartyOwner; // 0x638(0x01)
	bool bIsMatchmaking; // 0x639(0x01)
	bool bCanStartGame; // 0x63a(0x01)
	enum class ELobbyType CurrentLobbyType; // 0x63b(0x01)
	char pad_63C[0x4]; // 0x63c(0x04)
	struct TArray<struct UAresViewModelBase*> AllViewModels; // 0x640(0x10)
	enum class EAresPartyAccessibility CurrentPartyAccessibility; // 0x650(0x01)
	enum class ELobbyType CurrentDesiredLobby; // 0x651(0x01)
	char pad_652[0x6]; // 0x652(0x06)
	struct ULobbyViewModel* VM_LobbyNative; // 0x658(0x08)
	struct UEXPBoostViewModel* EXPBoostViewModel; // 0x660(0x08)
	struct FAresConditionalInputAction R3EXPBoostAlways; // 0x668(0x28)
	int32_t CustomWidgetIndex; // 0x690(0x04)
	int32_t MatchmadeWidgetIndex; // 0x694(0x04)
	int32_t StartGameWidgetIndex; // 0x698(0x04)
	int32_t PremierStartGameWidgetIndex; // 0x69c(0x04)
	struct UResponsivePopupViewModel* VM_OptionsPopup; // 0x6a0(0x08)

	void MakeOptionsPopupViewModel(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.MakeOptionsPopupViewModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleTournamentModeEnabledChanged(bool NewValue); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.HandleTournamentModeEnabledChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateStartButtonPC(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.UpdateStartButtonPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePartyCodeButtonEnabled(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.UpdatePartyCodeButtonEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitPremierBanner(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.InitPremierBanner // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RequestLeaveParty(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.RequestLeaveParty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePremierVisuals(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.UpdatePremierVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPreEnterPremierLobby(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.OnPreEnterPremierLobby // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEnteredPremierLobby(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.OnEnteredPremierLobby // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleEXPBoostButtonClicked(struct FName ActionName); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.HandleEXPBoostButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindCIAButtons(bool Is Any Boost Active); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.BindCIAButtons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleEXPBoostChanged(bool NewValue); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.HandleEXPBoostChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakeEXPBoostViewModel(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.MakeEXPBoostViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindEXPBoostViewModel(bool Bind); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.BindEXPBoostViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPreEnterCustomLobby(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.OnPreEnterCustomLobby // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPreEnterMatchmadeLobby(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.OnPreEnterMatchmadeLobby // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsTransitioningLobbies(bool& bIsTransitioningLobbies); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.IsTransitioningLobbies // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void OnDesiredLobbyChanged(enum class ELobbyType LobbyType); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.OnDesiredLobbyChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EnableButtonAndUpdateFocus(struct UWidget* WidgetToEnable, bool bShouldEnable); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.EnableButtonAndUpdateFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCustomModeSelectButtonEnabled(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.UpdateCustomModeSelectButtonEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateMapSelectButtonEnabled(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.UpdateMapSelectButtonEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateOptionsButtonEnabled(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.UpdateOptionsButtonEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateServerSelectButtonEnabled(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.UpdateServerSelectButtonEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsMatchMakingChanged(bool IsMatchmaking); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.OnIsMatchMakingChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateBackgroundVisbility(bool bVisible); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.UpdateBackgroundVisbility // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEnteredUnknownLobby(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.OnEnteredUnknownLobby // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEnteredCustomLobby(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.OnEnteredCustomLobby // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEnteredMatchmadeLobby(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.OnEnteredMatchmadeLobby // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyAccessibilityChanged(enum class EAresPartyAccessibility NewAccessibility); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.OnPartyAccessibilityChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCanStartGameChanged(bool CanStartGame); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.OnCanStartGameChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToStartGameViewModel(bool bBind); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.BindToStartGameViewModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshViewModels(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.RefreshViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToMatchmakingGamemodeViewModel(bool bBind); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.BindToMatchmakingGamemodeViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToViewModels(bool bBind); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.BindToViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToLobbyViewModel(bool bBind); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.BindToLobbyViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakeLobbyViewModel(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.MakeLobbyViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyOwnerChanged(bool bIsOwner); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.OnPartyOwnerChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePartyToggleEnabled(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.UpdatePartyToggleEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLobbyTypeChanged(enum class ELobbyType LobbyType); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.OnLobbyTypeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakeViewModels(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.MakeViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* OnNavigateTowardSwitcher(enum class EUINavigation Navigation); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.OnNavigateTowardSwitcher // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* OnNavigateAwayFromSwitcher(enum class EUINavigation Navigation); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.OnNavigateAwayFromSwitcher // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleOnCanGameChangeChanged(bool bNewCanGameChange); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.HandleOnCanGameChangeChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnServerPingMaterialChanged(struct UMaterialInstance* PingMaterial); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.OnServerPingMaterialChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnServerTextUpdated(struct FString GamePodText); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.OnServerTextUpdated // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToLobbyServerSelectViewModel(bool Bind); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.BindToLobbyServerSelectViewModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakeServerSelectViewModel(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.MakeServerSelectViewModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakeRewardProgramListViewModel(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.MakeRewardProgramListViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToPartyControlsViewModel(bool Bind); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.BindToPartyControlsViewModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakeStartGameControlsViewModel(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.MakeStartGameControlsViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakeLobbyPartyControlsViewModel(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.MakeLobbyPartyControlsViewModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakeMatchmakingGameModeViewModel(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.MakeMatchmakingGameModeViewModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplayPracticeModeSelect(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.DisplayPracticeModeSelect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	void ChangeBackgroundImage(struct UMapDataAsset* DataAsset); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.ChangeBackgroundImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnGameModeNameTextUpdated(struct FText ModeName); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.OnGameModeNameTextUpdated // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMapDisplayUpdated(struct FText MapName); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.OnMapDisplayUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToCustomGameMapSelectViewModel(bool Bind); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.BindToCustomGameMapSelectViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakeCustomGameMapSelectViewModel(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.MakeCustomGameMapSelectViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePracticeButtonEnabled(bool IsEnabled); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.UpdatePracticeButtonEnabled // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToPracticeModeViewModel(bool Bind); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.BindToPracticeModeViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakePracticeModeViewModel(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.MakePracticeModeViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAccessibilityToggle(enum class EAresPartyAccessibility NewAccessibility); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.UpdateAccessibilityToggle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheckNeedFocusRefresh(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.CheckNeedFocusRefresh // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyCountUpdated(int32_t NewCount); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.OnPartyCountUpdated // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyInformationUpdated(struct FAresParty Party); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.OnPartyInformationUpdated // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStartGameButtonClicked(struct UCommonButtonBase* Button); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.OnStartGameButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_Lobby_WBP_View_LobbySideMenu_K2Node_ComponentBoundEvent_9_ServerSelectPressed__DelegateSignature(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.BndEvt__WBP_Screen_Lobby_WBP_View_LobbySideMenu_K2Node_ComponentBoundEvent_9_ServerSelectPressed__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_Lobby_WBP_View_LobbySideMenu_K2Node_ComponentBoundEvent_8_EXPBoostPressed__DelegateSignature(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.BndEvt__WBP_Screen_Lobby_WBP_View_LobbySideMenu_K2Node_ComponentBoundEvent_8_EXPBoostPressed__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_Lobby_WBP_View_LobbySideMenu_K2Node_ComponentBoundEvent_7_OptionsPressed__DelegateSignature(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.BndEvt__WBP_Screen_Lobby_WBP_View_LobbySideMenu_K2Node_ComponentBoundEvent_7_OptionsPressed__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_Lobby_WBP_View_LobbySideMenu_K2Node_ComponentBoundEvent_1_PracticePressed__DelegateSignature(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.BndEvt__WBP_Screen_Lobby_WBP_View_LobbySideMenu_K2Node_ComponentBoundEvent_1_PracticePressed__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_Lobby_WBP_View_LobbySideMenu_K2Node_ComponentBoundEvent_6_MapSelectPressed__DelegateSignature(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.BndEvt__WBP_Screen_Lobby_WBP_View_LobbySideMenu_K2Node_ComponentBoundEvent_6_MapSelectPressed__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_Lobby_WBP_View_LobbySideMenu_K2Node_ComponentBoundEvent_2_PartyTogglePressed__DelegateSignature(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.BndEvt__WBP_Screen_Lobby_WBP_View_LobbySideMenu_K2Node_ComponentBoundEvent_2_PartyTogglePressed__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_Lobby_WBP_View_LobbySideMenu_K2Node_ComponentBoundEvent_5_QueueSelectPressed__DelegateSignature(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.BndEvt__WBP_Screen_Lobby_WBP_View_LobbySideMenu_K2Node_ComponentBoundEvent_5_QueueSelectPressed__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_Lobby_WBP_View_LobbySideMenu_K2Node_ComponentBoundEvent_3_LeavePartyPressed__DelegateSignature(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.BndEvt__WBP_Screen_Lobby_WBP_View_LobbySideMenu_K2Node_ComponentBoundEvent_3_LeavePartyPressed__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BP_OnActivated(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnDeactivated(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_Lobby_New_WBP_View_LobbySideMenu_K2Node_ComponentBoundEvent_4_CustomModeSelectPressed__DelegateSignature(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.BndEvt__WBP_Screen_Lobby_New_WBP_View_LobbySideMenu_K2Node_ComponentBoundEvent_4_CustomModeSelectPressed__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_Lobby_Converged_RangeButton_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.BndEvt__WBP_Screen_Lobby_Converged_RangeButton_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_Lobby_Converged_leavePartyButton_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.BndEvt__WBP_Screen_Lobby_Converged_leavePartyButton_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_Lobby_Converged_WBP_View_LobbySideMenu_K2Node_ComponentBoundEvent_12_PartyCodePressed__DelegateSignature(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.BndEvt__WBP_Screen_Lobby_Converged_WBP_View_LobbySideMenu_K2Node_ComponentBoundEvent_12_PartyCodePressed__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Screen_Lobby_Converged(int32_t EntryPoint); // Function WBP_Screen_Lobby_Converged.WBP_Screen_Lobby_Converged_C.ExecuteUbergraph_WBP_Screen_Lobby_Converged // (Final|UbergraphFunction) // @ game+0x19be2f0
};

