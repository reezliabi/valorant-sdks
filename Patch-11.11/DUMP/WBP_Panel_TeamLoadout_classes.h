// WidgetBlueprintGeneratedClass WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C
// Size: 0x448 (Inherited: 0x318)
struct UWBP_Panel_TeamLoadout_C : UShopTeamLoadout {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Ani_BuyBtnHover; // 0x320(0x08)
	struct UWidgetAnimation* Ani_SaveBtnHover; // 0x328(0x08)
	struct UWidgetAnimation* SetAllButtonStates; // 0x330(0x08)
	struct UWidgetAnimation* Ani_ImRichHover; // 0x338(0x08)
	struct UImage* armorTabImageBg; // 0x340(0x08)
	struct UImage* BuyBtn; // 0x348(0x08)
	struct UButton* buyButton; // 0x350(0x08)
	struct UNamedSlot* ConfirmationArea; // 0x358(0x08)
	struct UImage* Image_202; // 0x360(0x08)
	struct UImage* Image_237; // 0x368(0x08)
	struct UImage* Image_523; // 0x370(0x08)
	struct UImage* Image_524; // 0x378(0x08)
	struct UImage* Image_525; // 0x380(0x08)
	struct UImage* ImRichBtn; // 0x388(0x08)
	struct UButton* imRichButton; // 0x390(0x08)
	struct UMenuAnchor* lossTooltipAnchor; // 0x398(0x08)
	struct UTextBlock* minimumNextRoundBalance; // 0x3a0(0x08)
	struct UDynamicConfigSwitcher_C* NameWidgetSwitcher; // 0x3a8(0x08)
	struct UImage* PlayerCharacterIcon; // 0x3b0(0x08)
	struct UTextBlock* playerCurrentMoney; // 0x3b8(0x08)
	struct UTextBlock* PlayerName; // 0x3c0(0x08)
	struct UButton* saveButton; // 0x3c8(0x08)
	struct UButton* saveInfoButton; // 0x3d0(0x08)
	struct UOverlay* SaveTooltipContainer; // 0x3d8(0x08)
	struct UslotWhitePreviewPrimary_C* slotWhitePreviewPrimary; // 0x3e0(0x08)
	struct UslotWhitePreviewSidearm_C* slotWhitePreviewSidearm; // 0x3e8(0x08)
	struct UVerticalBox* TeamLoadout; // 0x3f0(0x08)
	struct UVerticalBox* teammatesContainer; // 0x3f8(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x400(0x08)
	struct UShopPlayerModel* PlayerModel; // 0x408(0x08)
	double lastGameTimeButtonPushed; // 0x410(0x08)
	int32_t timesButtonPressed; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct UShopContentWidgetBase_C* ParentShopWidget; // 0x420(0x08)
	int32_t FullMinMoneyLoss; // 0x428(0x04)
	int32_t FullMinMoneyLossWin; // 0x42c(0x04)
	int32_t MaxBankedMoney; // 0x430(0x04)
	int32_t NumPreviewTeammates; // 0x434(0x04)
	bool bIsNewPlayerClass; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct APawn* CachedDesiredClass; // 0x440(0x08)

	void RefreshTacticalCalloutButtonStates(); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.RefreshTacticalCalloutButtonStates // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateLocalPlayerName(); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.UpdateLocalPlayerName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* On Loss Tooltip Anchor Get Menu Content 0(); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.On Loss Tooltip Anchor Get Menu Content 0 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateLocalPlayerCharacterThumbnail(); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.UpdateLocalPlayerCharacterThumbnail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CanPlayerPushTheButtonAgain(bool& allowPush); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.CanPlayerPushTheButtonAgain // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateLocalPlayerMoney(); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.UpdateLocalPlayerMoney // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateLocalPlayerArmor(); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.UpdateLocalPlayerArmor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateLocalPlayer(); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.UpdateLocalPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Player Thumb(struct UCharacterHandle* CharacterHandle); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.Set Player Thumb // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_64_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_64_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__saveButton_K2Node_ComponentBoundEvent_113_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.BndEvt__saveButton_K2Node_ComponentBoundEvent_113_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__buyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.BndEvt__buyButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__saveButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.BndEvt__saveButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void CreateTeammateWidgets(struct TArray<struct UShopPlayerModel*>& TeammatePlayerModels, struct UShopPlayerModel* PlayerModel); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.CreateTeammateWidgets // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetLocalPlayer(struct UShopPlayerModel* PlayerModel); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.SetLocalPlayer // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__saveInfoButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.BndEvt__saveInfoButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__saveInfoButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.BndEvt__saveInfoButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ShopClosed(); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.ShopClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_TeamLoadout_imRichButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.BndEvt__WBP_Panel_TeamLoadout_imRichButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_TeamLoadout_imRichButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.BndEvt__WBP_Panel_TeamLoadout_imRichButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_TeamLoadout_saveButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.BndEvt__WBP_Panel_TeamLoadout_saveButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_TeamLoadout_buyButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.BndEvt__WBP_Panel_TeamLoadout_buyButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void SetTeammatesOpacity(double Opacity); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.SetTeammatesOpacity // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_TeamLoadout(int32_t EntryPoint); // Function WBP_Panel_TeamLoadout.WBP_Panel_TeamLoadout_C.ExecuteUbergraph_WBP_Panel_TeamLoadout // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

