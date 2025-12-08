// WidgetBlueprintGeneratedClass DefaultPartyV3.DefaultPartyV3_C
// Size: 0x410 (Inherited: 0x318)
struct UDefaultPartyV3_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Intro; // 0x320(0x08)
	struct UWidgetSwitcher* BannerSwitcher; // 0x328(0x08)
	struct UHorizontalBox* BetaIcon; // 0x330(0x08)
	struct UScaleBox* BTEPanel; // 0x338(0x08)
	struct UOverlay* EventBanners; // 0x340(0x08)
	struct UHorizontalBox* HorizListContainer; // 0x348(0x08)
	struct UImage* Image_BetaWIP_icon; // 0x350(0x08)
	struct UScaleBox* MFA_Banner; // 0x358(0x08)
	struct USizeBox* ModeDescriptionContainer; // 0x360(0x08)
	struct UAresMenuAnchor* NewMapIncentiveToolTip; // 0x368(0x08)
	struct UScaleBox* NMI_Banner; // 0x370(0x08)
	struct UPartyAccessibilitySettings_PC_C* PartyAccessibilitySettings_PC; // 0x378(0x08)
	struct USizeBox* PartyAccessibilitySizeBox; // 0x380(0x08)
	struct UPlayScreenPartyMemberListingV2_PC_C* PlayScreenPartyMemberListing1; // 0x388(0x08)
	struct UPlayScreenPartyMemberListingV2_PC_C* PlayScreenPartyMemberListing2; // 0x390(0x08)
	struct UPlayScreenPartyMemberListingV2_PC_C* PlayScreenPartyMemberListing4; // 0x398(0x08)
	struct UPlayScreenPartyMemberListingV2_PC_C* PlayScreenPartyMemberListing5; // 0x3a0(0x08)
	struct UTextBlock* QueueDescription; // 0x3a8(0x08)
	struct UQueueRestrictionIndicator_C* QueueRestrictionIndicator; // 0x3b0(0x08)
	struct UPlayScreenPartyMemberListingV2_PC_C* SelfPartyMemberWidget; // 0x3b8(0x08)
	struct UWBP_Panel_BTE_Banner_Home_Screen_Lobby_C* WBP_Panel_BTE_Banner_Home_Screen_Lobby; // 0x3c0(0x08)
	struct UWBP_Panel_MFABanner_C* WBP_Panel_MFABanner; // 0x3c8(0x08)
	struct UWBP_Panel_NewMapIncentiveBanner_C* WBP_Panel_NewMapIncentiveBanner; // 0x3d0(0x08)
	struct UPartyModel* PartyModel; // 0x3d8(0x08)
	struct UPartyViewController* PartyViewController; // 0x3e0(0x08)
	struct UPartyScreenUIFacade_C* PartyFacade; // 0x3e8(0x08)
	struct UPreconstructedWidgetListModelMediator* PartyListMediator; // 0x3f0(0x08)
	struct UUserWidget* PartyInvitePanel; // 0x3f8(0x08)
	struct TArray<struct UPlayScreenPartyMemberListingV2_PC_C*> PlayerWidgets; // 0x400(0x10)

	void SequenceEvent__ENTRYPOINTDefaultPartyV3_1(); // Function DefaultPartyV3.DefaultPartyV3_C.SequenceEvent__ENTRYPOINTDefaultPartyV3_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTDefaultPartyV3(); // Function DefaultPartyV3.DefaultPartyV3_C.SequenceEvent__ENTRYPOINTDefaultPartyV3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UUserWidget* OnMenuAnchorShieldGetMenuContent(); // Function DefaultPartyV3.DefaultPartyV3_C.OnMenuAnchorShieldGetMenuContent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateModeDescriptionVisibility(); // Function DefaultPartyV3.DefaultPartyV3_C.UpdateModeDescriptionVisibility // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitPartyState(); // Function DefaultPartyV3.DefaultPartyV3_C.InitPartyState // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OpenInvitePanel(); // Function DefaultPartyV3.DefaultPartyV3_C.OpenInvitePanel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePartyMemberActivated(struct UPartyPlayerModel* PartyPlayer, enum class PartyPlayerAction Action); // Function DefaultPartyV3.DefaultPartyV3_C.HandlePartyMemberActivated // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePartyMemberListItemActivated(struct UPreconstructedWidgetListModelMediator* Source, struct FListItemDisplayEntryActivatedEventData EventData); // Function DefaultPartyV3.DefaultPartyV3_C.HandlePartyMemberListItemActivated // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPartyListModel(struct TScriptInterface<IOrderedListModel> NewValue); // Function DefaultPartyV3.DefaultPartyV3_C.SetPartyListModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitPartyListMediator(); // Function DefaultPartyV3.DefaultPartyV3_C.InitPartyListMediator // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFacade(); // Function DefaultPartyV3.DefaultPartyV3_C.InitFacade // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitEventBanner(); // Function DefaultPartyV3.DefaultPartyV3_C.InitEventBanner // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateQueueDescription(struct UMatchmakingQueueHandle* QueueHandle); // Function DefaultPartyV3.DefaultPartyV3_C.UpdateQueueDescription // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetAndUpdateQueueDescription(struct FString QueueID); // Function DefaultPartyV3.DefaultPartyV3_C.GetAndUpdateQueueDescription // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent_2(); // Function DefaultPartyV3.DefaultPartyV3_C.SequenceEvent_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent_1(); // Function DefaultPartyV3.DefaultPartyV3_C.SequenceEvent_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayIntroAnimation(); // Function DefaultPartyV3.DefaultPartyV3_C.PlayIntroAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePartySizeWarning(); // Function DefaultPartyV3.DefaultPartyV3_C.UpdatePartySizeWarning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init(struct UPartyModel* Model, struct UPartyViewController* ViewController); // Function DefaultPartyV3.DefaultPartyV3_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function DefaultPartyV3.DefaultPartyV3_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void QueueChanged(struct FString NewValue); // Function DefaultPartyV3.DefaultPartyV3_C.QueueChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function DefaultPartyV3.DefaultPartyV3_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function DefaultPartyV3.DefaultPartyV3_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function DefaultPartyV3.DefaultPartyV3_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnConfigChanged(struct FName& ConfigName); // Function DefaultPartyV3.DefaultPartyV3_C.OnConfigChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__DefaultPartyV3_WBP_Panel_NewMapIncentiveBanner_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature(enum class ESlateVisibility InVisibility); // Function DefaultPartyV3.DefaultPartyV3_C.BndEvt__DefaultPartyV3_WBP_Panel_NewMapIncentiveBanner_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__DefaultPartyV3_WBP_Panel_BTE_Banner_Home_Screen_Lobby_K2Node_ComponentBoundEvent_7_OnVisibilityChangedEvent__DelegateSignature(enum class ESlateVisibility InVisibility); // Function DefaultPartyV3.DefaultPartyV3_C.BndEvt__DefaultPartyV3_WBP_Panel_BTE_Banner_Home_Screen_Lobby_K2Node_ComponentBoundEvent_7_OnVisibilityChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__DefaultPartyV3_WBP_Panel_NewMapIncentiveBanner_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function DefaultPartyV3.DefaultPartyV3_C.BndEvt__DefaultPartyV3_WBP_Panel_NewMapIncentiveBanner_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__DefaultPartyV3_WBP_Panel_NewMapIncentiveBanner_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function DefaultPartyV3.DefaultPartyV3_C.BndEvt__DefaultPartyV3_WBP_Panel_NewMapIncentiveBanner_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__DefaultPartyV3_WBP_Panel_MFABanner_K2Node_ComponentBoundEvent_2_OnVisibilityChangedEvent__DelegateSignature(enum class ESlateVisibility InVisibility); // Function DefaultPartyV3.DefaultPartyV3_C.BndEvt__DefaultPartyV3_WBP_Panel_MFABanner_K2Node_ComponentBoundEvent_2_OnVisibilityChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_DefaultPartyV3(int32_t EntryPoint); // Function DefaultPartyV3.DefaultPartyV3_C.ExecuteUbergraph_DefaultPartyV3 // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

