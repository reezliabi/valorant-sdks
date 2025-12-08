// WidgetBlueprintGeneratedClass WBP_Panel_RadialButton.WBP_Panel_RadialButton_C
// Size: 0x450 (Inherited: 0x318)
struct UWBP_Panel_RadialButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UButton* Button_1065; // 0x320(0x08)
	struct UImage* InteractionOverlay; // 0x328(0x08)
	struct UOverlay* Items; // 0x330(0x08)
	struct UImage* Wheel; // 0x338(0x08)
	struct URetainerBox* WheelRTT; // 0x340(0x08)
	bool DisplaySprays; // 0x348(0x01)
	bool IsInteractive; // 0x349(0x01)
	char pad_34A[0x6]; // 0x34a(0x06)
	double RadiusInner; // 0x350(0x08)
	double RadiusOuter; // 0x358(0x08)
	struct UTexture* WheelTexture; // 0x360(0x08)
	struct UTexture* HighlightTexture; // 0x368(0x08)
	struct UAkAudioEvent* SoundClick; // 0x370(0x08)
	struct UAkAudioEvent* SoundHover; // 0x378(0x08)
	int32_t NumOptions; // 0x380(0x04)
	char pad_384[0x4]; // 0x384(0x04)
	struct UMaterialInstanceDynamic* WheelMaterial; // 0x388(0x08)
	struct TArray<struct UExpressionEquipSlotHandle*> EquipSlotHandles; // 0x390(0x10)
	struct TArray<struct FRadialMenuSlotDescriptor> SlotDescriptors; // 0x3a0(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x3b0(0x10)
	struct FMulticastInlineDelegate EquipSlotClicked; // 0x3c0(0x10)
	double HighlightedSegment; // 0x3d0(0x08)
	bool Hovered; // 0x3d8(0x01)
	char pad_3D9[0x3]; // 0x3d9(0x03)
	int32_t HoveredSegment; // 0x3dc(0x04)
	double MouseAngle; // 0x3e0(0x08)
	double MouseDist; // 0x3e8(0x08)
	struct FMulticastInlineDelegate OnAfterEquipSlotsLoaded; // 0x3f0(0x10)
	double SelectedSegment; // 0x400(0x08)
	struct UTexture* SelectedTexture; // 0x408(0x08)
	struct UExpressionManagementViewModel* ExpressionVM; // 0x410(0x08)
	struct UAresBasePrimaryDataAsset* BaseContentClass; // 0x418(0x08)
	struct TArray<struct UExpressionHandle*> EquippedExpressionHandles; // 0x420(0x10)
	struct FMulticastInlineDelegate OnAfterEquippedExpressionsLoaded; // 0x430(0x10)
	struct FMulticastInlineDelegate ExpressionSegmentClicked; // 0x440(0x10)

	void Create Expression VM(struct UExpressionManagementViewModel*& VM); // Function WBP_Panel_RadialButton.WBP_Panel_RadialButton_C.Create Expression VM // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EquipExpression(struct UExpressionHandle* ExpressionHandle); // Function WBP_Panel_RadialButton.WBP_Panel_RadialButton_C.EquipExpression // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HighlightExpressionSlot(int32_t Index); // Function WBP_Panel_RadialButton.WBP_Panel_RadialButton_C.HighlightExpressionSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleEquippedExpressionsChanged(struct TArray<struct UExpressionHandle*>& HandleExpressionsChanged); // Function WBP_Panel_RadialButton.WBP_Panel_RadialButton_C.HandleEquippedExpressionsChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateMouseParams(struct FGeometry MyGeometry); // Function WBP_Panel_RadialButton.WBP_Panel_RadialButton_C.UpdateMouseParams // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateHighlightedSegment(bool& Updated); // Function WBP_Panel_RadialButton.WBP_Panel_RadialButton_C.UpdateHighlightedSegment // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HighlightEquipSlot(struct UExpressionEquipSlotDataAsset* EquipSlotData); // Function WBP_Panel_RadialButton.WBP_Panel_RadialButton_C.HighlightEquipSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateRadialPieces(struct TArray<struct FRadialMenuSlotDescriptor>& SlotDescriptors); // Function WBP_Panel_RadialButton.WBP_Panel_RadialButton_C.CreateRadialPieces // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Initialize Radial Button(); // Function WBP_Panel_RadialButton.WBP_Panel_RadialButton_C.Initialize Radial Button // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeMaterial(); // Function WBP_Panel_RadialButton.WBP_Panel_RadialButton_C.InitializeMaterial // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	double CalculateAngleFromVector2D(struct FVector2D A); // Function WBP_Panel_RadialButton.WBP_Panel_RadialButton_C.CalculateAngleFromVector2D // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_RadialButton.WBP_Panel_RadialButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Panel_RadialButton.WBP_Panel_RadialButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_1064_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_RadialButton.WBP_Panel_RadialButton_C.BndEvt__Button_1064_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_1064_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_RadialButton.WBP_Panel_RadialButton_C.BndEvt__Button_1064_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_1064_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Panel_RadialButton.WBP_Panel_RadialButton_C.BndEvt__Button_1064_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Panel_RadialButton.WBP_Panel_RadialButton_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_RadialButton(int32_t EntryPoint); // Function WBP_Panel_RadialButton.WBP_Panel_RadialButton_C.ExecuteUbergraph_WBP_Panel_RadialButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void ExpressionSegmentClicked__DelegateSignature(struct UExpressionHandle* ExpressionHandle, int32_t Index); // Function WBP_Panel_RadialButton.WBP_Panel_RadialButton_C.ExpressionSegmentClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAfterEquippedExpressionsLoaded__DelegateSignature(struct FExpressionHandleArrayWrapper EquippedExpressions); // Function WBP_Panel_RadialButton.WBP_Panel_RadialButton_C.OnAfterEquippedExpressionsLoaded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAfterEquipSlotsLoaded__DelegateSignature(struct TArray<struct UExpressionEquipSlotHandle*>& EquipSlotHandles); // Function WBP_Panel_RadialButton.WBP_Panel_RadialButton_C.OnAfterEquipSlotsLoaded__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EquipSlotClicked__DelegateSignature(struct UExpressionEquipSlotHandle* SlotHandle); // Function WBP_Panel_RadialButton.WBP_Panel_RadialButton_C.EquipSlotClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnClicked__DelegateSignature(); // Function WBP_Panel_RadialButton.WBP_Panel_RadialButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

