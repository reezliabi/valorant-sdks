// WidgetBlueprintGeneratedClass item.item_C
// Size: 0x2214 (Inherited: 0x1ae0)
struct Uitem_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UShopPurchasableModel* Model; // 0x1ae8(0x08)
	struct UShopPlayerModel* PlayerModel; // 0x1af0(0x08)
	enum class ESlateVisibility ownedBg; // 0x1af8(0x01)
	enum class ESlateVisibility tooltipBgVisibility; // 0x1af9(0x01)
	char pad_1AFA[0x6]; // 0x1afa(0x06)
	struct UInventorySlotModel* InventorySlotModel; // 0x1b00(0x08)
	struct FText abilityItemActionTooltipText; // 0x1b08(0x18)
	enum class ESlateVisibility abilityOwnedBg; // 0x1b20(0x01)
	char pad_1B21[0x7]; // 0x1b21(0x07)
	struct FText FireRate; // 0x1b28(0x18)
	struct FText ReloadSpeed; // 0x1b40(0x18)
	struct FText MagazineSize; // 0x1b58(0x18)
	struct FText MaxDamage; // 0x1b70(0x18)
	struct FText MinDamage; // 0x1b88(0x18)
	struct FText MaxSpread; // 0x1ba0(0x18)
	struct FText MinSpread; // 0x1bb8(0x18)
	struct FText MovementSpeed; // 0x1bd0(0x18)
	struct UObject* itemInfoPanel; // 0x1be8(0x08)
	int32_t MaxCharges; // 0x1bf0(0x04)
	int32_t CurrentCharges; // 0x1bf4(0x04)
	struct FVector2D itemPosition; // 0x1bf8(0x10)
	struct FText leftClick; // 0x1c08(0x18)
	struct FText rightClick; // 0x1c20(0x18)
	struct FLinearColor bgcolor; // 0x1c38(0x10)
	char pad_1C48[0x8]; // 0x1c48(0x08)
	struct FSlateBrush promptIcon; // 0x1c50(0xd0)
	struct FLinearColor blackBgColor; // 0x1d20(0x10)
	struct FLinearColor grayBgColor; // 0x1d30(0x10)
	struct FSlateBrush leftClickIcon; // 0x1d40(0xd0)
	struct FSlateBrush rightClickIcon; // 0x1e10(0xd0)
	struct FSlateBrush noClickIcon; // 0x1ee0(0xd0)
	struct FSlateBrush leftRightClickIcon; // 0x1fb0(0xd0)
	struct UShopConfirmationToast* ShopConfirmationToast; // 0x2080(0x08)
	struct FText toast_purchaseCompleteText; // 0x2088(0x18)
	struct FText toast_itemSoldText; // 0x20a0(0x18)
	struct FText toast_abilityCantSell; // 0x20b8(0x18)
	struct FText toast_itemDropped; // 0x20d0(0x18)
	struct FText toast_itemDestroyed; // 0x20e8(0x18)
	struct FText toast_armorReplaced; // 0x2100(0x18)
	struct FText toast_armorFull; // 0x2118(0x18)
	struct FText toast_abilityAlreadyCharged; // 0x2130(0x18)
	struct FText toast_gunAlreadyEquipped; // 0x2148(0x18)
	struct FLinearColor grayBgColorTransparent; // 0x2160(0x10)
	bool Purchased; // 0x2170(0x01)
	char pad_2171[0x7]; // 0x2171(0x07)
	struct FText toast_cannotAffordText; // 0x2178(0x18)
	struct FLinearColor noBgColor; // 0x2190(0x10)
	enum class EAresItemSlot TargetSlot; // 0x21a0(0x01)
	enum class ESlateVisibility ultimtateOwnedBg; // 0x21a1(0x01)
	bool IsFavorite; // 0x21a2(0x01)
	char pad_21A3[0x5]; // 0x21a3(0x05)
	struct FText toast_gunRequested; // 0x21a8(0x18)
	struct FText toast_gunRequestCancelled; // 0x21c0(0x18)
	struct FText toast_cantRequestAlreadyHaveGun; // 0x21d8(0x18)
	bool ignoreTransactionCooldown; // 0x21f0(0x01)
	bool IsSelected; // 0x21f1(0x01)
	char pad_21F2[0x6]; // 0x21f2(0x06)
	struct UAresTouchLongPressFilter* longPressFilter; // 0x21f8(0x08)
	bool acceptMouseUpEvents; // 0x2200(0x01)
	char pad_2201[0x7]; // 0x2201(0x07)
	struct UShopItemDetailPanel* ItemDetailPreview; // 0x2208(0x08)
	bool BlockPurchases; // 0x2210(0x01)
	bool BlockRequests; // 0x2211(0x01)
	bool isSuccessfulPurchase; // 0x2212(0x01)
	bool IsHighlighted; // 0x2213(0x01)

	void ShouldSellCurrentItemInsteadofPurchase(bool& Input, bool& Return Value); // Function item.item_C.ShouldSellCurrentItemInsteadofPurchase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToggleHighlighting(bool ToggleOn, bool DisableSelling, struct FText SubText, enum class ShopHighlightingSubtextDisplayDirection SubtextDisplayDirection); // Function item.item_C.ToggleHighlighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void refreshItemSelectState(struct FEventReply& Reply); // Function item.item_C.refreshItemSelectState // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void handleMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent, struct FEventReply& Reply); // Function item.item_C.handleMouseMove // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void handleMouseUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent, struct FEventReply& Reply); // Function item.item_C.handleMouseUp // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void handleMouseDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent, struct FEventReply& Reply); // Function item.item_C.handleMouseDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void feedbackCancelRequestSuccess(); // Function item.item_C.feedbackCancelRequestSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void feedbackMakeRequestSuccess(); // Function item.item_C.feedbackMakeRequestSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateItemDisplayFromMakeGunRequest(bool ShouldDisplay); // Function item.item_C.UpdateItemDisplayFromMakeGunRequest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void favoriteFunction(); // Function item.item_C.favoriteFunction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void makeShopPromptOptionsUltimate(struct UShopPlayerModel*& PlayerModel, struct UShopPurchasableModel*& shopModel); // Function item.item_C.makeShopPromptOptionsUltimate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FText ultimateItemPrice(); // Function item.item_C.ultimateItemPrice // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void canBuyWhenAlreadyOwned(bool& canBuyWhenAlreadyOwned); // Function item.item_C.canBuyWhenAlreadyOwned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void canRemove(bool& canRemove); // Function item.item_C.canRemove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CanBuyForTargetSlot(bool& CanBuyForTargetSlot); // Function item.item_C.CanBuyForTargetSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CanSellFromTargetSlot(bool& CanSellFromTargetSlot); // Function item.item_C.CanSellFromTargetSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void feedbackDropSuccess(); // Function item.item_C.feedbackDropSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void feedbackDestroySuccess(); // Function item.item_C.feedbackDestroySuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void feedbackPurchaseFailureCannotAfford(); // Function item.item_C.feedbackPurchaseFailureCannotAfford // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void feedbackPurchaseSuccessArmorReplaced(); // Function item.item_C.feedbackPurchaseSuccessArmorReplaced // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void feedbackPurchaseFailureArmorFull(); // Function item.item_C.feedbackPurchaseFailureArmorFull // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void feedbackPurchaseFailureAlreadyOwned(); // Function item.item_C.feedbackPurchaseFailureAlreadyOwned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void feedbackSellSuccess(); // Function item.item_C.feedbackSellSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void feedbackSellFailure(); // Function item.item_C.feedbackSellFailure // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void feedbackPurchaseFailure(); // Function item.item_C.feedbackPurchaseFailure // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void feedbackPurchaseSuccess(); // Function item.item_C.feedbackPurchaseSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsOwnedInTargetSlot(bool& IsOwnedInTargetSlot); // Function item.item_C.IsOwnedInTargetSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void makeShopPromptOptions(struct UShopPurchasableModel*& NewParam); // Function item.item_C.makeShopPromptOptions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply tryRenew(); // Function item.item_C.tryRenew // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void makeShopPromptOptionsAbilities(struct UShopPurchasableModel*& NewParam, struct UInventorySlotModel*& NewParam1); // Function item.item_C.makeShopPromptOptionsAbilities // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	enum class ESlateVisibility chargeCount(); // Function item.item_C.chargeCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	struct FEventReply tryTransaction(struct FGeometry MyGeometry, struct FKey KeyUsed); // Function item.item_C.tryTransaction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	enum class ESlateVisibility sellButtonVisibility(); // Function item.item_C.sellButtonVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	struct FEventReply TrySell(struct FGeometry NewParam, struct FPointerEvent& NewParam1); // Function item.item_C.TrySell // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	struct FEventReply TryPurchase(); // Function item.item_C.TryPurchase // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	struct FText getItemPrice(); // Function item.item_C.getItemPrice // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Construct(); // Function item.item_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnModelUpdate(); // Function item.item_C.OnModelUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLongPress(int32_t TouchIndex); // Function item.item_C.OnLongPress // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function item.item_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_item(int32_t EntryPoint); // Function item.item_C.ExecuteUbergraph_item // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

