// WidgetBlueprintGeneratedClass SubscriptionDropdownPanel.SubscriptionDropdownPanel_C
// Size: 0x495 (Inherited: 0x318)
struct USubscriptionDropdownPanel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* LearnMoreTextHover; // 0x320(0x08)
	struct UWidgetAnimation* LInkIconHover; // 0x328(0x08)
	struct UWidgetAnimation* Intro; // 0x330(0x08)
	struct UVerticalBox* ActivePrograms_VerticalBox; // 0x338(0x08)
	struct UVerticalBox* CNLoyaltyBenefitsSwitcherContainer; // 0x340(0x08)
	struct UTelemetryButton* DetailsModalLink_Button; // 0x348(0x08)
	struct USubscription_RewardItem_Dropdown_C* Dynamic_Agents_Item; // 0x350(0x08)
	struct USubscription_RewardItem_Dropdown_C* Dynamic_GunBuddies_Item; // 0x358(0x08)
	struct USubscription_RewardItem_Dropdown_C* Dynamic_PlayerCards_Item; // 0x360(0x08)
	struct USubscription_RewardItem_Dropdown_C* Dynamic_PlayerTitles_Item; // 0x368(0x08)
	struct USubscription_RewardItem_Dropdown_C* Dynamic_Sprays_Item; // 0x370(0x08)
	struct USubscription_RewardItem_Dropdown_C* Dynamic_WeaponSkins_Item; // 0x378(0x08)
	struct USubscription_RewardItem_Dropdown_C* Dynamic_XpRewards; // 0x380(0x08)
	struct UVerticalBox* DynamicOverview_SwitcherContainer; // 0x388(0x08)
	struct UImage* LinkIcon; // 0x390(0x08)
	struct UImage* LongLine; // 0x398(0x08)
	struct UImage* LongLine_2; // 0x3a0(0x08)
	struct UVerticalBox* LoyaltyBenefitsSwitcherContainer; // 0x3a8(0x08)
	struct UImage* shortline; // 0x3b0(0x08)
	struct UImage* shortline_2; // 0x3b8(0x08)
	struct UImage* shortline_3; // 0x3c0(0x08)
	struct UImage* shortline_4; // 0x3c8(0x08)
	struct USubscription_RewardItem_Dropdown_C* SubscriptionBenefitsAgents; // 0x3d0(0x08)
	struct USubscription_RewardItem_Dropdown_C* SubscriptionBenefitsXP; // 0x3d8(0x08)
	struct UWidgetSwitcher* SubscriptionsBenefitsSwitcher; // 0x3e0(0x08)
	struct UVerticalBox* SubscriptionsBenefitsSwitcherContainer; // 0x3e8(0x08)
	struct TMap<struct USubscriptionDataAsset*, struct USubscriptionHandle*> Subscription Handles; // 0x3f0(0x50)
	struct UPlatformPlayer* Player; // 0x440(0x08)
	bool PreviewChinaLayout; // 0x448(0x01)
	char pad_449[0x3]; // 0x449(0x03)
	struct FName UseDynamicFlyout_ConfigName; // 0x44c(0x0c)
	bool UseDynamicFlyout_ConfigDefault; // 0x458(0x01)
	char pad_459[0x3]; // 0x459(0x03)
	struct FName ComputeContentRewardsInBp_ConfigName; // 0x45c(0x0c)
	bool ComputeContentRewardsInBp_ConfigDefault; // 0x468(0x01)
	char pad_469[0x3]; // 0x469(0x03)
	struct FName ShowItemNames_ConfigName; // 0x46c(0x0c)
	bool ShowItemNames_ConfigDefault; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct USubscriptionRewards_DetailsModal_C* DetailsModal; // 0x480(0x08)
	struct FName EnableDetailsModal_ConfigName; // 0x488(0x0c)
	bool EnableDetailsModal_ConfigDefault; // 0x494(0x01)

	void GenerateXpRewardText(struct FText& RewardText); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.GenerateXpRewardText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Set_RewardItem_Text(enum class ESubscriptionRewardType SubscriptionRewardType, struct FText Title, struct FText Details); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.Set_RewardItem_Text // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Compute_ContentRewardItem_Text(enum class ESubscriptionRewardType ContentRewardType, struct TArray<struct FString>& ContentRewardNames, struct FText& Title, struct FText& Details); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.Compute_ContentRewardItem_Text // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EnsureDetailsModalCreated(struct USubscriptionRewards_DetailsModal_C*& Widget); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.EnsureDetailsModalCreated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateDetailsModalButtonVisibility(); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.UpdateDetailsModalButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerTitlesLoaded_Dynamic(struct FPlayerTitleHandles& PlayerTitleHandles); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.OnPlayerTitlesLoaded_Dynamic // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerCardsLoaded_Dynamic(struct FPlayerCardHandles& PlayerCardHandles); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.OnPlayerCardsLoaded_Dynamic // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSpraysLoaded_Dynamic(struct FSprayHandles& SprayHandles); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.OnSpraysLoaded_Dynamic // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnGunBuddiesLoaded_Dynamic(struct FEquippableCharmHandles& EquippableCharmHandles); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.OnGunBuddiesLoaded_Dynamic // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnWeaponSkinsLoaded_Dynamic(struct FEquippableSkinHandles& EquippableSkinHandles); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.OnWeaponSkinsLoaded_Dynamic // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAgentsLoaded_Dynamic(struct FCharacterHandles& CharacterHandles); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.OnAgentsLoaded_Dynamic // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update_ContentRewardItem(struct TArray<struct UBaseHandle*>& BaseHandles, enum class ESubscriptionRewardType& SubscriptionRewardType); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.Update_ContentRewardItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAgentsRewards_IfAllUnlocked(bool& IsAllUnlockedResult); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.SetAgentsRewards_IfAllUnlocked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Collapse_ContentRewardItems(); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.Collapse_ContentRewardItems // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Compute_ XpRewardItem_Text(struct FText& RewardText); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.Compute_ XpRewardItem_Text // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update_XpItem(); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.Update_XpItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update_RewardItems(); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.Update_RewardItems // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateDropdownContent(); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.UpdateDropdownContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateRewards_ViaVersionSwitcher(); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.UpdateRewards_ViaVersionSwitcher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Should Use China Layout(bool& IsChinaLayout); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.Should Use China Layout // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Update_Rewards_OldVersion(); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.Update_Rewards_OldVersion // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update_Rewards_DynamicVersion(); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.Update_Rewards_DynamicVersion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetPlaceholderSubscriptionNames(struct TArray<struct FText>& SubscriptionNames); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.GetPlaceholderSubscriptionNames // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetActiveSubscriptionHeaders(struct TArray<struct FText>& SubscriptionNames); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.SetActiveSubscriptionHeaders // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddLoyaltyToSubscriptionLists(struct TArray<struct FText>& TextNamesIn, struct TArray<struct FString>& StringNamesIn, struct TArray<struct FText>& TextNamesOut, struct TArray<struct FString>& StringNamesOut); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.AddLoyaltyToSubscriptionLists // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddSubscriptionsToSubscriptionLists(struct TArray<struct FText>& TextNamesOut, struct TArray<struct FString>& StringNamesOut); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.AddSubscriptionsToSubscriptionLists // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateActiveSubscriptionHeaders(); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.UpdateActiveSubscriptionHeaders // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnGetAllSubscriptions(struct FSubscriptionHandles& SubscriptionHandles); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.OnGetAllSubscriptions // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAnyConfigUpdated(struct FName& ConfigName); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.OnAnyConfigUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__SubscriptionDropdownPanel_ViewDetailsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.BndEvt__SubscriptionDropdownPanel_ViewDetailsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_SubscriptionDropdownPanel(int32_t EntryPoint); // Function SubscriptionDropdownPanel.SubscriptionDropdownPanel_C.ExecuteUbergraph_SubscriptionDropdownPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

