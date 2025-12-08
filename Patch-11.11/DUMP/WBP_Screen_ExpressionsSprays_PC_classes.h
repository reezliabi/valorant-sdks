// WidgetBlueprintGeneratedClass WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C
// Size: 0x3f8 (Inherited: 0x318)
struct UWBP_Screen_ExpressionsSprays_PC_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* PrePostWarning; // 0x320(0x08)
	struct UTextBlock* AESKey_Hold; // 0x328(0x08)
	struct UTextBlock* AESKey_Tap; // 0x330(0x08)
	struct UOverlay* ContentOverlay; // 0x338(0x08)
	struct UHorizontalBox* ContextualWarningBox; // 0x340(0x08)
	struct UWBP_MenuButtonPrimary_C* EquipButtonNew; // 0x348(0x08)
	struct UOverlay* ExpressionDataAndEquip; // 0x350(0x08)
	struct UTextBlock* ExpressionName; // 0x358(0x08)
	struct UFavoriteContentButton_C* FavoriteContentButton; // 0x360(0x08)
	struct UTextBlock* Hold; // 0x368(0x08)
	struct UOverlay* HoldOverlay; // 0x370(0x08)
	struct ULargeModal_C* LargeModal; // 0x378(0x08)
	struct UNoResultsMessageV1_C* NoResultsMessage; // 0x380(0x08)
	struct USprayPreview_C* Preview; // 0x388(0x08)
	struct UTextBlock* SprayWheelSlotText; // 0x390(0x08)
	struct UOverlay* TapOverlay; // 0x398(0x08)
	struct UWBP_Panel_ContentItemsView_Expressions_C* WBP_Panel_ContentItemsView_Expressions; // 0x3a0(0x08)
	struct UWBP_Panel_RadialButton_C* WBP_Panel_RadialButton; // 0x3a8(0x08)
	bool ModelViewerPressed; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	double CurrentOpacity; // 0x3b8(0x08)
	struct UContentFilterViewModel* FiltersModel; // 0x3c0(0x08)
	bool IsContentFilterEnabled; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct UCollectionOwnershipContentFilterProvider_C* OwnershipFilterProvider; // 0x3d0(0x08)
	struct UContentFilter* OwnershipFilter; // 0x3d8(0x08)
	struct UExpressionHandle* ExpressionSelected; // 0x3e0(0x08)
	struct UExpressionHandle* OptionalExpressionHandle; // 0x3e8(0x08)
	struct UExpressionManagementViewModel* ExpressionVM; // 0x3f0(0x08)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	bool HandleBackRequest(); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitContentGrid(); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.InitContentGrid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitRadialButton(); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.InitRadialButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnExpressionsLoaded(); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.OnExpressionsLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetWheelTooltip(); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.SetWheelTooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateFilterIcons(struct UContentFilterViewModel* FilterModel); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.UpdateFilterIcons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateEquipButton(); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.UpdateEquipButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetExpressionIndexSelected(struct UExpressionHandle* ExpressionHandle, int32_t ExpressionIndex); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.SetExpressionIndexSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindFavoriteChangeEvent(struct UBaseHandle* New Handle); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.BindFavoriteChangeEvent // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleFavoriteChanged(); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.HandleFavoriteChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitContentFilters(); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.InitContentFilters // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTabWidgetVis(bool HasMatchingContent); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.UpdateTabWidgetVis // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Select Spray(struct UExpressionHandle* ExpressionHandle); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.Select Spray // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Load and Select Spray(struct UExpressionHandle* Expression Handle); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.Load and Select Spray // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Model Viewer Released(); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.Model Viewer Released // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__SpraysScreen_EuipButtonNew_K2Node_ComponentBoundEvent_2_OnUniversalButtonVoidEvent__DelegateSignature(); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.BndEvt__SpraysScreen_EuipButtonNew_K2Node_ComponentBoundEvent_2_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void AESActionBindingChanged(struct UActionBindSet* ActionBindSet, int32_t BindIndex, enum class EActionBindChangeSource ChangeSource, struct FName Character); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.AESActionBindingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AESWheelHoldChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.AESWheelHoldChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Model Viewer Pressed(); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.Model Viewer Pressed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent_1(struct FExpressionHandleArrayWrapper EquippedExpressions); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_ExpressionsSprays_PC_WBP_Panel_ContentItemsView_Expressions_K2Node_ComponentBoundEvent_3_OnExpressionSelected__DelegateSignature(); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.BndEvt__WBP_Screen_ExpressionsSprays_PC_WBP_Panel_ContentItemsView_Expressions_K2Node_ComponentBoundEvent_3_OnExpressionSelected__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_ExpressionsSprays_PC_WBP_Panel_RadialButton_K2Node_ComponentBoundEvent_4_ExpressionSegmentClicked__DelegateSignature(struct UExpressionHandle* ExpressionHandle, int32_t Index); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.BndEvt__WBP_Screen_ExpressionsSprays_PC_WBP_Panel_RadialButton_K2Node_ComponentBoundEvent_4_ExpressionSegmentClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Screen_ExpressionsSprays_PC(int32_t EntryPoint); // Function WBP_Screen_ExpressionsSprays_PC.WBP_Screen_ExpressionsSprays_PC_C.ExecuteUbergraph_WBP_Screen_ExpressionsSprays_PC // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

