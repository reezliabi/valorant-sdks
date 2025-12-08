// WidgetBlueprintGeneratedClass shopItems.shopItems_C
// Size: 0x230c (Inherited: 0x2214)
struct UshopItems_C : Uitem_C {
	char pad_2214[0x4]; // 0x2214(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2218(0x08)
	struct UWidgetAnimation* lowArmorBlink; // 0x2220(0x08)
	struct UWidgetAnimation* Ani_hover_CantAfford; // 0x2228(0x08)
	struct UWidgetAnimation* Ani_hover; // 0x2230(0x08)
	struct UTextBlock* armorPoolValue; // 0x2238(0x08)
	struct UBorder* buyButton; // 0x2240(0x08)
	struct UImage* Fill; // 0x2248(0x08)
	struct UImage* fill_Owned; // 0x2250(0x08)
	struct UImage* Frame; // 0x2258(0x08)
	struct UImage* Frame_Objective_Highlight; // 0x2260(0x08)
	struct UImage* Frame_Owned; // 0x2268(0x08)
	struct UImage* hover; // 0x2270(0x08)
	struct UImage* Icon; // 0x2278(0x08)
	struct UMenuAnchor* Prompt_Tooltip; // 0x2280(0x08)
	struct UBorder* RequestedBorder; // 0x2288(0x08)
	struct UTextBlock* RequestedText; // 0x2290(0x08)
	struct UScaleBox* SB_IconParent; // 0x2298(0x08)
	struct UShopItemCharges_C* ShopItemCharges; // 0x22a0(0x08)
	struct UImage* SubtextBGBottom; // 0x22a8(0x08)
	struct UImage* SubtextBgTop; // 0x22b0(0x08)
	struct UTextBlock* SubTextBottom; // 0x22b8(0x08)
	struct UCanvasPanel* SubtextCanvasBottom; // 0x22c0(0x08)
	struct UCanvasPanel* SubtextCanvasTop; // 0x22c8(0x08)
	struct UTextBlock* SubTextTop; // 0x22d0(0x08)
	struct UTextBlock* txt_ItemName; // 0x22d8(0x08)
	struct UTextBlock* txt_ItemPrice; // 0x22e0(0x08)
	bool hasMaxCharges; // 0x22e8(0x01)
	char pad_22E9[0x3]; // 0x22e9(0x03)
	struct FLinearColor FullShieldArmorTextColor; // 0x22ec(0x10)
	struct FLinearColor LowShieldArmorTextStartColor; // 0x22fc(0x10)

	void SetOwnedState(bool Owned); // Function shopItems.shopItems_C.SetOwnedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply tryTransaction(struct FGeometry MyGeometry, struct FKey KeyUsed); // Function shopItems.shopItems_C.tryTransaction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Can PurchaseState(bool CanPurchase); // Function shopItems.shopItems_C.Set Can PurchaseState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePromptOnModelChange(bool& DidUpdate); // Function shopItems.shopItems_C.UpdatePromptOnModelChange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void refreshItemSelectState(struct FEventReply& Reply); // Function shopItems.shopItems_C.refreshItemSelectState // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void onItemDeselectedByExternalSource(); // Function shopItems.shopItems_C.onItemDeselectedByExternalSource // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void playDeselectAnimations(); // Function shopItems.shopItems_C.playDeselectAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void playSelectAnimations(); // Function shopItems.shopItems_C.playSelectAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void canBuyWhenAlreadyOwned(bool& canBuyWhenAlreadyOwned); // Function shopItems.shopItems_C.canBuyWhenAlreadyOwned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void canRemove(bool& canRemove); // Function shopItems.shopItems_C.canRemove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetAbilityItemPrice(struct UInventorySlotModel* Inventory Slot); // Function shopItems.shopItems_C.GetAbilityItemPrice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void setChargeDots(struct UInventorySlotModel* Inventory Slot); // Function shopItems.shopItems_C.setChargeDots // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ItemStates(bool Condition); // Function shopItems.shopItems_C.ItemStates // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ItemOwned(bool& IsOwned); // Function shopItems.shopItems_C.ItemOwned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateItemDisplayFromMakeGunRequest(bool ShouldDisplay); // Function shopItems.shopItems_C.UpdateItemDisplayFromMakeGunRequest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* On_Prompt_Tooltip_GetMenuContent_1(); // Function shopItems.shopItems_C.On_Prompt_Tooltip_GetMenuContent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FSlateBrush getWeaponIcon(); // Function shopItems.shopItems_C.getWeaponIcon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void actionTooltip(); // Function shopItems.shopItems_C.actionTooltip // (Public|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	struct FLinearColor ownedAffordedOpacity(); // Function shopItems.shopItems_C.ownedAffordedOpacity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	enum class ESlateVisibility sellButtonVisibility(); // Function shopItems.shopItems_C.sellButtonVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	struct FEventReply TryPurchase(); // Function shopItems.shopItems_C.TryPurchase // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	struct FText getItemPrice(); // Function shopItems.shopItems_C.getItemPrice // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	struct FEventReply TrySell(struct FGeometry NewParam, struct FPointerEvent& NewParam1); // Function shopItems.shopItems_C.TrySell // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void OnCancelGunRequest(struct FAresGunRequest UpdatedGunRequest, struct AShooterPlayerState* RequestingPlayer); // Function shopItems.shopItems_C.OnCancelGunRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFulfillGunRequest(struct FAresGunRequest UpdatedGunRequest, struct AShooterPlayerState* FulfillingPlayer, struct AShooterPlayerState* RequestingPlayer); // Function shopItems.shopItems_C.OnFulfillGunRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMakeGunRequest(struct FAresGunRequest UpdatedGunRequest, struct AShooterPlayerState* RequestingPlayer); // Function shopItems.shopItems_C.OnMakeGunRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function shopItems.shopItems_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function shopItems.shopItems_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function shopItems.shopItems_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function shopItems.shopItems_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerModelUpdated_Event(); // Function shopItems.shopItems_C.OnPlayerModelUpdated_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnModelUpdated(); // Function shopItems.shopItems_C.OnModelUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_shopItems(int32_t EntryPoint); // Function shopItems.shopItems_C.ExecuteUbergraph_shopItems // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

