// WidgetBlueprintGeneratedClass WBP_Panel_ShopItems.WBP_Panel_ShopItems_C
// Size: 0x24d0 (Inherited: 0x2214)
struct UWBP_Panel_ShopItems_C : Uitem_C {
	char pad_2214[0x4]; // 0x2214(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2218(0x08)
	struct UWidgetAnimation* Ani_ArmorPurchase; // 0x2220(0x08)
	struct UWidgetAnimation* Ani_NPEFocus; // 0x2228(0x08)
	struct UWidgetAnimation* Ani_Drop; // 0x2230(0x08)
	struct UWidgetAnimation* Ani_Hover_Off_CantAfford; // 0x2238(0x08)
	struct UWidgetAnimation* Ani_LowArmor; // 0x2240(0x08)
	struct UWidgetAnimation* Ani_Press_Sell; // 0x2248(0x08)
	struct UWidgetAnimation* Ani_Request; // 0x2250(0x08)
	struct UWidgetAnimation* Ani_Invalid; // 0x2258(0x08)
	struct UWidgetAnimation* Ani_Press_Purchase; // 0x2260(0x08)
	struct UWidgetAnimation* Ani_Hover_Off; // 0x2268(0x08)
	struct UWidgetAnimation* Ani_Hover_On; // 0x2270(0x08)
	struct UImage* ArmorBackground; // 0x2278(0x08)
	struct UOverlay* ArmorContentWrapper; // 0x2280(0x08)
	struct UTextBlock* ArmorValue; // 0x2288(0x08)
	struct UBorder* buyButton; // 0x2290(0x08)
	struct UImage* Frame_Objective_Highlight; // 0x2298(0x08)
	struct UImage* Icon; // 0x22a0(0x08)
	struct UImage* LowArmor_AlertGlow; // 0x22a8(0x08)
	struct UImage* PlasmaPoolBackground; // 0x22b0(0x08)
	struct UOverlay* PlasmaPoolOverlay; // 0x22b8(0x08)
	struct UTextBlock* PlasmaPoolValue; // 0x22c0(0x08)
	struct UMenuAnchor* Prompt_Tooltip; // 0x22c8(0x08)
	struct UImage* Requested_Border_VFX; // 0x22d0(0x08)
	struct UTextBlock* RequestedText; // 0x22d8(0x08)
	struct UScaleBox* SB_IconParent; // 0x22e0(0x08)
	struct UShopItemCharges_C* ShopItemCharges; // 0x22e8(0x08)
	struct UImage* SubtextBGBottom; // 0x22f0(0x08)
	struct UImage* SubtextBgTop; // 0x22f8(0x08)
	struct UTextBlock* SubTextBottom; // 0x2300(0x08)
	struct UCanvasPanel* SubtextCanvasBottom; // 0x2308(0x08)
	struct UCanvasPanel* SubtextCanvasTop; // 0x2310(0x08)
	struct UTextBlock* SubTextTop; // 0x2318(0x08)
	struct UTextBlock* txt_ItemName; // 0x2320(0x08)
	struct UTextBlock* txt_ItemPrice; // 0x2328(0x08)
	bool hasMaxCharges; // 0x2330(0x01)
	char pad_2331[0x3]; // 0x2331(0x03)
	struct FLinearColor FullShieldArmorColor; // 0x2334(0x10)
	struct FLinearColor LowShieldArmorColor; // 0x2344(0x10)
	char pad_2354[0x4]; // 0x2354(0x04)
	struct UMaterialInstanceDynamic* ButtonFrameInstance; // 0x2358(0x08)
	struct FMargin WidgetMargin; // 0x2360(0x10)
	struct UMaterialInstanceDynamic* BorderInstance; // 0x2370(0x08)
	bool CachedRequestedState; // 0x2378(0x01)
	char pad_2379[0x7]; // 0x2379(0x07)
	struct UMaterialInterface* Material; // 0x2380(0x08)
	bool CachedOwnedState; // 0x2388(0x01)
	char pad_2389[0x7]; // 0x2389(0x07)
	double Anim_IsSelected; // 0x2390(0x08)
	struct FName MatParam_IsSelected; // 0x2398(0x0c)
	char pad_23A4[0x4]; // 0x23a4(0x04)
	double Anim_IsFocused; // 0x23a8(0x08)
	struct FName MatParam_IsFocused; // 0x23b0(0x0c)
	struct FName MatParam_IsRequested; // 0x23bc(0x0c)
	double Anim_GradientBottomOpacity; // 0x23c8(0x08)
	struct FName MatParam_GradientBottomOpacity; // 0x23d0(0x0c)
	char pad_23DC[0x4]; // 0x23dc(0x04)
	double Anim_WipeStart; // 0x23e0(0x08)
	struct FName MatParam_WipeStart; // 0x23e8(0x0c)
	char pad_23F4[0x4]; // 0x23f4(0x04)
	double Anim_WipeEnd; // 0x23f8(0x08)
	struct FName MatParam_WipeEnd; // 0x2400(0x0c)
	struct FLinearColor Anim_WipeColor; // 0x240c(0x10)
	struct FName MatParam_WipeColor; // 0x241c(0x0c)
	struct UMaterialInstanceDynamic* MID_ArmorMaterial; // 0x2428(0x08)
	double Anim_BorderThickness; // 0x2430(0x08)
	struct FName MatParam_BorderThickness; // 0x2438(0x0c)
	bool bIsAbility; // 0x2444(0x01)
	char pad_2445[0x3]; // 0x2445(0x03)
	double Anim_IsDisabled; // 0x2448(0x08)
	struct FName MatParam_IsDisabled; // 0x2450(0x0c)
	char pad_245C[0x4]; // 0x245c(0x04)
	double Anim_IsInvalid; // 0x2460(0x08)
	struct FName MatParam_IsInvalid; // 0x2468(0x0c)
	char pad_2474[0x4]; // 0x2474(0x04)
	struct UMaterialInstanceDynamic* MID_ArmorBackground; // 0x2478(0x08)
	bool bIsPlasmaArmor_delete; // 0x2480(0x01)
	char pad_2481[0x3]; // 0x2481(0x03)
	struct FLinearColor MidShieldArmorColor; // 0x2484(0x10)
	char pad_2494[0x4]; // 0x2494(0x04)
	struct UMaterialInstance* MI_ArmorBackground; // 0x2498(0x08)
	struct UMaterialInstance* MI_Armor_Material; // 0x24a0(0x08)
	double ArmorPercentageLowThreshold; // 0x24a8(0x08)
	struct FLinearColor LowMidShieldArmorTextColor; // 0x24b0(0x10)
	struct FLinearColor FullShieldArmorTextColor; // 0x24c0(0x10)

	void armorLowVisualReset(); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.armorLowVisualReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void armorStatusColorSelect(double Armor Percentage, struct FLinearColor& Color State, struct FSlateColor& Text Color State (Slate)); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.armorStatusColorSelect // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HideArmorNumbers(); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.HideArmorNumbers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateArmorVis(struct AAresItem* Item); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.UpdateArmorVis // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCanPurchaseState(); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.UpdateCanPurchaseState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToggleHighlighting(bool ToggleOn, bool DisableSelling, struct FText SubText, enum class ShopHighlightingSubtextDisplayDirection SubtextDisplayDirection); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.ToggleHighlighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void isDisabledHover(bool& disabledHover); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.isDisabledHover // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void applyHoverColor(); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.applyHoverColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAnim_IsDisabled(double Anim_IsDisabled); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.SetAnim_IsDisabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StopAnims(bool stopPurchaseSellInvalid, bool stopHoverOnOff); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.StopAnims // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAnim_IsInvalid(double Anim_IsInvalid); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.SetAnim_IsInvalid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAnim_BorderThickness(double Anim_BorderThickness); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.SetAnim_BorderThickness // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAnim_WipeColor(struct FLinearColor Anim_WipeColor); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.SetAnim_WipeColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAnim_WipeEnd(double Anim_WipeEnd); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.SetAnim_WipeEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAnim_WipeStart(double Anim_WipeStart); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.SetAnim_WipeStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAnim_GradientBottomOpacity(double Anim_GradientBottomOpacity); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.SetAnim_GradientBottomOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAnim_IsFocused(double Anim_IsFocused); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.SetAnim_IsFocused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAnim_IsSelected(double Anim_IsSelected); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.SetAnim_IsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshStyle(); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.RefreshStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void handleMouseDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent, struct FEventReply& Reply); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.handleMouseDown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetOwnedState(bool Owned); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.SetOwnedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply tryTransaction(struct FGeometry MyGeometry, struct FKey KeyUsed); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.tryTransaction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Can PurchaseState(bool CanPurchase); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.Set Can PurchaseState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePromptOnModelChange(bool& DidUpdate); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.UpdatePromptOnModelChange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void refreshItemSelectState(struct FEventReply& Reply); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.refreshItemSelectState // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void onItemDeselectedByExternalSource(); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.onItemDeselectedByExternalSource // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void playDeselectAnimations(); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.playDeselectAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void playSelectAnimations(); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.playSelectAnimations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void canBuyWhenAlreadyOwned(bool& canBuyWhenAlreadyOwned); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.canBuyWhenAlreadyOwned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void canRemove(bool& canRemove); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.canRemove // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetAbilityItemPrice(struct UInventorySlotModel* Inventory Slot); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.GetAbilityItemPrice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void setChargeDots(struct UInventorySlotModel* Inventory Slot); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.setChargeDots // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ItemStates(bool IsOwned); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.ItemStates // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ItemOwned(bool& IsOwned); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.ItemOwned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateItemDisplayFromMakeGunRequest(bool ShouldDisplay); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.UpdateItemDisplayFromMakeGunRequest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* On_Prompt_Tooltip_GetMenuContent_1(); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.On_Prompt_Tooltip_GetMenuContent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FSlateBrush getWeaponIcon(); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.getWeaponIcon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void actionTooltip(); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.actionTooltip // (Public|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	struct FLinearColor ownedAffordedOpacity(); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.ownedAffordedOpacity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	enum class ESlateVisibility sellButtonVisibility(); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.sellButtonVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	struct FEventReply TryPurchase(); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.TryPurchase // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	struct FText getItemPrice(); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.getItemPrice // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	struct FEventReply TrySell(struct FGeometry NewParam, struct FPointerEvent& NewParam1); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.TrySell // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Construct(); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnCancelGunRequest(struct FAresGunRequest UpdatedGunRequest, struct AShooterPlayerState* RequestingPlayer); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.OnCancelGunRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFulfillGunRequest(struct FAresGunRequest UpdatedGunRequest, struct AShooterPlayerState* FulfillingPlayer, struct AShooterPlayerState* RequestingPlayer); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.OnFulfillGunRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMakeGunRequest(struct FAresGunRequest UpdatedGunRequest, struct AShooterPlayerState* RequestingPlayer); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.OnMakeGunRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerModelUpdated_Event(); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.OnPlayerModelUpdated_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnModelUpdated(); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.OnModelUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_ShopItems(int32_t EntryPoint); // Function WBP_Panel_ShopItems.WBP_Panel_ShopItems_C.ExecuteUbergraph_WBP_Panel_ShopItems // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

