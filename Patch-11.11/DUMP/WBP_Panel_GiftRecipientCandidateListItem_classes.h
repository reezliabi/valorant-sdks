// WidgetBlueprintGeneratedClass WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C
// Size: 0x1c40 (Inherited: 0x1ae0)
struct UWBP_Panel_GiftRecipientCandidateListItem_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* AnimRelease; // 0x1ae8(0x08)
	struct UWidgetAnimation* AnimPress; // 0x1af0(0x08)
	struct UWidgetAnimation* AnimUnhover; // 0x1af8(0x08)
	struct UWidgetAnimation* AnimHover; // 0x1b00(0x08)
	struct UImage* ButtonBorder; // 0x1b08(0x08)
	struct UWBP_ContextMenuAnchor_SocialPlayer_C* ContextMenuAnchor; // 0x1b10(0x08)
	struct UImage* DefaultPlayerCardImage; // 0x1b18(0x08)
	struct UImage* FriendNoteicon; // 0x1b20(0x08)
	struct UAresCommonText* IneligibilityText; // 0x1b28(0x08)
	struct UHorizontalBox* NoteContainer; // 0x1b30(0x08)
	struct UWidgetSwitcher* PlayerCardImageSwitcher; // 0x1b38(0x08)
	struct UWBP_IdentitySourceIcon_C* WBP_IdentitySourceIcon; // 0x1b40(0x08)
	struct UWBP_Panel_FriendNote_C* WBP_Panel_FriendNote; // 0x1b48(0x08)
	struct UWBP_Panel_PlayerCardImage_C* WBP_Panel_PlayerCardImage; // 0x1b50(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x1b58(0x08)
	struct UWBP_Panel_PresenceColoredImage_C* WBP_Panel_PresenceColoredImage; // 0x1b60(0x08)
	bool DisplayPresenceIcon; // 0x1b68(0x01)
	bool PreviewIsEligible; // 0x1b69(0x01)
	bool DisplayPlatformIcon; // 0x1b6a(0x01)
	bool DisplayIneligibleTextIfApplicable; // 0x1b6b(0x01)
	char pad_1B6C[0x4]; // 0x1b6c(0x04)
	struct UGiftRecipientCandidateInfo* GiftRecipientCandidate; // 0x1b70(0x08)
	struct UVM_PlayerPrimaryIdentitySource_C* PrimaryIdentitySourceViewModel; // 0x1b78(0x08)
	struct UPlayerCardImageSet_C* DefaultPlayerCardImageSet; // 0x1b80(0x08)
	struct UMaterialInstance* BorderMaterial; // 0x1b88(0x08)
	bool HighlightWhenIneligible; // 0x1b90(0x01)
	char pad_1B91[0x3]; // 0x1b91(0x03)
	struct FLinearColor Temp_IneligibleHighlightColor; // 0x1b94(0x10)
	struct FLinearColor Temp_DefaultColor; // 0x1ba4(0x10)
	char pad_1BB4[0x4]; // 0x1bb4(0x04)
	struct TMap<struct FName, struct UMaterialInstanceDynamic*> InMap; // 0x1bb8(0x50)
	struct FName OutlineMaterialName; // 0x1c08(0x0c)
	char pad_1C14[0x4]; // 0x1c14(0x04)
	struct UMaterialInstance* New Outline Material; // 0x1c18(0x08)
	struct FMulticastInlineDelegate OnConditionalInputActionCallback; // 0x1c20(0x10)
	struct UVM_GiftRecipientCandidate_C* GiftRecipientCandidateViewModel; // 0x1c30(0x08)
	struct UVM_GiftRecipientCandidate_C* ShowPlayerDisplayPanelCIA; // 0x1c38(0x08)

	struct FString GetListItemTelemetryTarget(); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.GetListItemTelemetryTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePlayerDisplayPanel(struct FName ActionName); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.HandlePlayerDisplayPanel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupCIACallbacks(); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.SetupCIACallbacks // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCIAActiveState(); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.SetCIAActiveState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetOutlineMaterial(struct UMaterialInstance* NewOutlineMaterial); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.SetOutlineMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct TMap<struct FName, struct UMaterialInstanceDynamic*> GetAnimatableMaterialsMap(); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.GetAnimatableMaterialsMap // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePrimaryIdentitySourceChanged(enum class EAresIdentitySource PrimaryIdentitySource); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.HandlePrimaryIdentitySourceChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindEvents(bool Bind); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitViewModels(); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateVisibility(bool UseEligibleForSelectionVisuals, bool UseEligibleForGiftVisuals); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.UpdateVisibility // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromGiftRecipientCandidate(struct UGiftRecipientCandidateInfo* inGiftRecipientCandidate); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.InitFromGiftRecipientCandidate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnClicked(); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_GiftRecipientCandidateListItem_WBP_Panel_FriendNote_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature(enum class ESlateVisibility InVisibility); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.BndEvt__WBP_Panel_GiftRecipientCandidateListItem_WBP_Panel_FriendNote_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void HandleSelectInputAction(struct FName ActionName); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.HandleSelectInputAction // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnHovered(); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnUnhovered(); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnPressed(); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnReleased(); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.BP_OnReleased // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnEntryReleased(); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_GiftRecipientCandidateListItem(int32_t EntryPoint); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.ExecuteUbergraph_WBP_Panel_GiftRecipientCandidateListItem // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnConditionalInputActionCallback__DelegateSignature(struct FAresConditionalInputAction Action, struct FDelegate& Callback); // Function WBP_Panel_GiftRecipientCandidateListItem.WBP_Panel_GiftRecipientCandidateListItem_C.OnConditionalInputActionCallback__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

