// WidgetBlueprintGeneratedClass WBP_Button_Price.WBP_Button_Price_C
// Size: 0x1bbf (Inherited: 0x1ae0)
struct UWBP_Button_Price_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UAresCommonText* ConsoleDiscountPercentText; // 0x1ae8(0x08)
	struct UVerticalBox* ContentsVerticalBox; // 0x1af0(0x08)
	struct UAresCommonText* DiscountPercentText; // 0x1af8(0x08)
	struct UImage* Image_84; // 0x1b00(0x08)
	struct UImage* IMG_DefaultDecoration; // 0x1b08(0x08)
	struct UImage* IMG_StrongBG; // 0x1b10(0x08)
	struct UImage* IMG_StrongDecoration; // 0x1b18(0x08)
	struct UOverlay* InputAwarePriceOverlay; // 0x1b20(0x08)
	struct UOverlay* O_discountPercentConsole; // 0x1b28(0x08)
	struct UOverlay* O_discountPercentWrap; // 0x1b30(0x08)
	struct UHorizontalBox* PricesHBox; // 0x1b38(0x08)
	struct USizeBox* SB_inputWrap; // 0x1b40(0x08)
	struct UWBP_Panel_StoreItemPrice_C* WBP_Panel_StoreItemPrice; // 0x1b48(0x08)
	struct FText UnownedDisplayText; // 0x1b50(0x18)
	struct FText OwnedDisplayText; // 0x1b68(0x18)
	struct UCommonTextStyle* PriceStyleFocused; // 0x1b80(0x08)
	struct UCommonTextStyle* PriceStyleUnfocused; // 0x1b88(0x08)
	struct FLinearColor CurrencyIconColorFocused; // 0x1b90(0x10)
	struct FLinearColor CurrencyIconColorUnfocused; // 0x1ba0(0x10)
	struct UCommonTextStyle* StrikethroughPriceStyle; // 0x1bb0(0x08)
	enum class EHorizontalAlignment ContentAlignment; // 0x1bb8(0x01)
	bool DisplayButtonText; // 0x1bb9(0x01)
	bool IsOwned; // 0x1bba(0x01)
	enum class EButtonProminence Prominence; // 0x1bbb(0x01)
	bool DisplayDiscountText; // 0x1bbc(0x01)
	bool DisplayDiscountPercent; // 0x1bbd(0x01)
	bool DisplayOwnedState; // 0x1bbe(0x01)

	void UpdateButtonTextVisibility(bool DisplayButtonText); // Function WBP_Button_Price.WBP_Button_Price_C.UpdateButtonTextVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateDiscountTextVisibility(bool DisplayDiscountText); // Function WBP_Button_Price.WBP_Button_Price_C.UpdateDiscountTextVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleInputMethodChanged(enum class ECommonInputType Index); // Function WBP_Button_Price.WBP_Button_Price_C.HandleInputMethodChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Prominence(enum class EButtonProminence InProminence); // Function WBP_Button_Price.WBP_Button_Price_C.Set Prominence // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleShowCheckmark(bool NewShowCheckmark); // Function WBP_Button_Price.WBP_Button_Price_C.HandleShowCheckmark // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateOwnershipVisuals(); // Function WBP_Button_Price.WBP_Button_Price_C.UpdateOwnershipVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleOwnedDisplayTextChanged(struct FText OwnedDisplayText); // Function WBP_Button_Price.WBP_Button_Price_C.HandleOwnedDisplayTextChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleUnownedDisplayTextChanged(struct FText UnownedDisplayText); // Function WBP_Button_Price.WBP_Button_Price_C.HandleUnownedDisplayTextChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCostsChanged(struct TArray<struct FOfferCostWithDiscountInfo>& NewCostList); // Function WBP_Button_Price.WBP_Button_Price_C.HandleCostsChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleDisplayDiscountPercentChanged(bool DisplayDiscountPercent); // Function WBP_Button_Price.WBP_Button_Price_C.HandleDisplayDiscountPercentChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleDiscountPercentChanged(int32_t Discount Percent); // Function WBP_Button_Price.WBP_Button_Price_C.HandleDiscountPercentChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleStrikethroughCostChanged(int32_t StrikethroughCost); // Function WBP_Button_Price.WBP_Button_Price_C.HandleStrikethroughCostChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateStyle(bool hasFocus); // Function WBP_Button_Price.WBP_Button_Price_C.UpdateStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetContentAlignment(enum class EHorizontalAlignment InputPin); // Function WBP_Button_Price.WBP_Button_Price_C.SetContentAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCurrencyIconChanged(struct UTexture* CurrencyIcon); // Function WBP_Button_Price.WBP_Button_Price_C.HandleCurrencyIconChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCostChanged(int32_t Cost); // Function WBP_Button_Price.WBP_Button_Price_C.HandleCostChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsItemOwnedChanged(bool bIsItemOwned); // Function WBP_Button_Price.WBP_Button_Price_C.HandleIsItemOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_Price.WBP_Button_Price_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnHovered(); // Function WBP_Button_Price.WBP_Button_Price_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnUnhovered(); // Function WBP_Button_Price.WBP_Button_Price_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Button_Price.WBP_Button_Price_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnInputMethodChanged(enum class ECommonInputType CurrentInputType); // Function WBP_Button_Price.WBP_Button_Price_C.BP_OnInputMethodChanged // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Button_Price(int32_t EntryPoint); // Function WBP_Button_Price.WBP_Button_Price_C.ExecuteUbergraph_WBP_Button_Price // (Final|UbergraphFunction) // @ game+0x19be2f0
};

