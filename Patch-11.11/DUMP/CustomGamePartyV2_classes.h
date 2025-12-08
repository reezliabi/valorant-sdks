// WidgetBlueprintGeneratedClass CustomGamePartyV2.CustomGamePartyV2_C
// Size: 0x3d0 (Inherited: 0x318)
struct UCustomGamePartyV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USharedTertiaryButtonText_C* Autobalance; // 0x320(0x08)
	struct UButton* Button_309; // 0x328(0x08)
	struct UCustomPartyList_C* CustomPartyList; // 0x330(0x08)
	struct UDynamicConfigSwitcher_C* DynamicConfigSwitcher; // 0x338(0x08)
	struct USizeBox* GamePodBox; // 0x340(0x08)
	struct UTextBlock* GamePodOverride; // 0x348(0x08)
	struct UGamePodSelectOptions_C* GamePodSelectOptions; // 0x350(0x08)
	struct UImage* Image_82; // 0x358(0x08)
	struct USharedTertiaryButtonText_C* InviteButton; // 0x360(0x08)
	struct UImage* MapBG; // 0x368(0x08)
	struct UMapSelectOptions_C* MapSelectOptions; // 0x370(0x08)
	struct UMenuAnchor* MenuAnchor_343; // 0x378(0x08)
	struct UModeSelectOptions_C* ModeSelectOptions; // 0x380(0x08)
	struct USharedTertiaryButtonText_C* OPTIONS; // 0x388(0x08)
	struct UPartyAccessibilitySettings_PC_C* PartyAccessibilitySettings_PC; // 0x390(0x08)
	struct USizeBox* SizeBox_2; // 0x398(0x08)
	struct UPartyModel* Model; // 0x3a0(0x08)
	struct UPartyViewController* View Controller; // 0x3a8(0x08)
	struct FString BalanceWarningsList; // 0x3b0(0x10)
	struct UGameModeDataAsset* Mode; // 0x3c0(0x08)
	struct UCustomGameUIFacade_C* Facade; // 0x3c8(0x08)

	struct UWidget* OnGetMenuContent_1(); // Function CustomGamePartyV2.CustomGamePartyV2_C.OnGetMenuContent_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAutobalanceTooltipVisibility(bool Visible); // Function CustomGamePartyV2.CustomGamePartyV2_C.UpdateAutobalanceTooltipVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateOwnerOnlyWidgets(); // Function CustomGamePartyV2.CustomGamePartyV2_C.UpdateOwnerOnlyWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateHeightFromConfig(); // Function CustomGamePartyV2.CustomGamePartyV2_C.UpdateHeightFromConfig // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAutoBalanceVisibility(); // Function CustomGamePartyV2.CustomGamePartyV2_C.UpdateAutoBalanceVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	enum class ESlateVisibility GetVisibility_1(); // Function CustomGamePartyV2.CustomGamePartyV2_C.GetVisibility_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateGamePodOverride(); // Function CustomGamePartyV2.CustomGamePartyV2_C.UpdateGamePodOverride // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSpectateVisibility(); // Function CustomGamePartyV2.CustomGamePartyV2_C.UpdateSpectateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Noop(); // Function CustomGamePartyV2.CustomGamePartyV2_C.Noop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsTeamFull(enum class ECustomGameTeam Team, bool& Full); // Function CustomGamePartyV2.CustomGamePartyV2_C.IsTeamFull // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsFull(bool& IsFull); // Function CustomGamePartyV2.CustomGamePartyV2_C.IsFull // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Init(struct UPartyModel* Model, struct UPartyViewController* View Controller); // Function CustomGamePartyV2.CustomGamePartyV2_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__JoinSpectatorsButton_K2Node_ComponentBoundEvent_47_OnButtonReleasedEvent__DelegateSignature(); // Function CustomGamePartyV2.CustomGamePartyV2_C.BndEvt__JoinSpectatorsButton_K2Node_ComponentBoundEvent_47_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnIsOwnerChanged(bool NewValue); // Function CustomGamePartyV2.CustomGamePartyV2_C.OnIsOwnerChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Initialized(); // Function CustomGamePartyV2.CustomGamePartyV2_C.On Initialized // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerAddedToTeamOne_Event_1(struct UPartyPlayerModel* Player); // Function CustomGamePartyV2.CustomGamePartyV2_C.OnPlayerAddedToTeamOne_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerRemovedFromTeamOne_Event_1(struct UPartyPlayerModel* Player); // Function CustomGamePartyV2.CustomGamePartyV2_C.OnPlayerRemovedFromTeamOne_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerAddedToTeamTwo_Event_1(struct UPartyPlayerModel* Player); // Function CustomGamePartyV2.CustomGamePartyV2_C.OnPlayerAddedToTeamTwo_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerRemovedFromTeamTwo_Event_1(struct UPartyPlayerModel* Player); // Function CustomGamePartyV2.CustomGamePartyV2_C.OnPlayerRemovedFromTeamTwo_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMyTeamChanged(enum class ECustomGameTeam Team); // Function CustomGamePartyV2.CustomGamePartyV2_C.OnMyTeamChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__StartButton_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature(); // Function CustomGamePartyV2.CustomGamePartyV2_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__StartButton_K2Node_ComponentBoundEvent_94_OnButtonHoverEvent__DelegateSignature(); // Function CustomGamePartyV2.CustomGamePartyV2_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_94_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerRemovedFromTeamSpectate_Event_1(struct UPartyPlayerModel* Player); // Function CustomGamePartyV2.CustomGamePartyV2_C.OnPlayerRemovedFromTeamSpectate_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerAddedToTeamSpectate_Event_1(struct UPartyPlayerModel* Player); // Function CustomGamePartyV2.CustomGamePartyV2_C.OnPlayerAddedToTeamSpectate_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Autobalance_K2Node_ComponentBoundEvent_207_OnButtonReleasedEvent__DelegateSignature(); // Function CustomGamePartyV2.CustomGamePartyV2_C.BndEvt__Autobalance_K2Node_ComponentBoundEvent_207_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnGamePodOverrideChanged_Event_1(struct FString NewValue); // Function CustomGamePartyV2.CustomGamePartyV2_C.OnGamePodOverrideChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function CustomGamePartyV2.CustomGamePartyV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__MapSelectOptions_K2Node_ComponentBoundEvent_0_OnMapSelected__DelegateSignature(struct UMapUIData* MapUIData); // Function CustomGamePartyV2.CustomGamePartyV2_C.BndEvt__MapSelectOptions_K2Node_ComponentBoundEvent_0_OnMapSelected__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Autobalance_1_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature(struct USharedTertiaryButtonText_C* TextButton); // Function CustomGamePartyV2.CustomGamePartyV2_C.BndEvt__Autobalance_1_K2Node_ComponentBoundEvent_1_OnReleased__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__InviteButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct USharedTertiaryButtonText_C* TextButton); // Function CustomGamePartyV2.CustomGamePartyV2_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_308_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function CustomGamePartyV2.CustomGamePartyV2_C.BndEvt__Button_308_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_308_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function CustomGamePartyV2.CustomGamePartyV2_C.BndEvt__Button_308_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnGameRuleChanged(enum class EGameRuleBoolName GameRuleName, bool bEnabled); // Function CustomGamePartyV2.CustomGamePartyV2_C.OnGameRuleChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_CustomGamePartyV2(int32_t EntryPoint); // Function CustomGamePartyV2.CustomGamePartyV2_C.ExecuteUbergraph_CustomGamePartyV2 // (Final|UbergraphFunction) // @ game+0x19be2f0
};

