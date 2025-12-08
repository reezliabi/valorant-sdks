// WidgetBlueprintGeneratedClass RadialButton.RadialButton_C
// Size: 0x410 (Inherited: 0x318)
struct URadialButton_C : UUserWidget {
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
	struct TArray<struct USprayEquipSlotHandle*> EquipSlotHandles; // 0x390(0x10)
	struct TArray<struct FRadialMenuSlotDescriptor> SlotDescriptors; // 0x3a0(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x3b0(0x10)
	struct FMulticastInlineDelegate SprayEquipSlotClicked; // 0x3c0(0x10)
	double HighlightedSegment; // 0x3d0(0x08)
	bool Hovered; // 0x3d8(0x01)
	char pad_3D9[0x3]; // 0x3d9(0x03)
	int32_t HoveredSegment; // 0x3dc(0x04)
	double MouseAngle; // 0x3e0(0x08)
	double MouseDist; // 0x3e8(0x08)
	struct FMulticastInlineDelegate OnAfterEquipSlotsLoaded; // 0x3f0(0x10)
	double SelectedSegment; // 0x400(0x08)
	struct UTexture* SelectedTexture; // 0x408(0x08)

	void UpdateMouseParams(struct FGeometry MyGeometry); // Function RadialButton.RadialButton_C.UpdateMouseParams // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateHighlightedSegment(bool& Updated); // Function RadialButton.RadialButton_C.UpdateHighlightedSegment // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HighlightSprayEquipSlot(struct USprayEquipSlotDataAsset* SprayEquipSlotData); // Function RadialButton.RadialButton_C.HighlightSprayEquipSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Equipped Sprays Loaded(struct FSprayHandles& SprayHandles); // Function RadialButton.RadialButton_C.On Equipped Sprays Loaded // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateRadialPieces(struct TArray<struct FRadialMenuSlotDescriptor>& SlotDescriptors); // Function RadialButton.RadialButton_C.CreateRadialPieces // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Filter Equip Slot Handles(struct FSprayEquipSlotHandles Slot Handles, struct TArray<struct USprayEquipSlotHandle*>& Filtered Handles); // Function RadialButton.RadialButton_C.Filter Equip Slot Handles // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Sort Equip Slot Handles(struct UObject* Left, struct UObject* Right, bool& bIsLeftLessThanRight); // Function RadialButton.RadialButton_C.Sort Equip Slot Handles // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Equip Slots Loaded(struct FSprayEquipSlotHandles& SprayEquipSlotHandles); // Function RadialButton.RadialButton_C.On Equip Slots Loaded // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Initialize Radial Button(); // Function RadialButton.RadialButton_C.Initialize Radial Button // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeMaterial(); // Function RadialButton.RadialButton_C.InitializeMaterial // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	double CalculateAngleFromVector2D(struct FVector2D A); // Function RadialButton.RadialButton_C.CalculateAngleFromVector2D // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function RadialButton.RadialButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function RadialButton.RadialButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_1064_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function RadialButton.RadialButton_C.BndEvt__Button_1064_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_1064_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function RadialButton.RadialButton_C.BndEvt__Button_1064_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_1064_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function RadialButton.RadialButton_C.BndEvt__Button_1064_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function RadialButton.RadialButton_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Initialize(); // Function RadialButton.RadialButton_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_RadialButton(int32_t EntryPoint); // Function RadialButton.RadialButton_C.ExecuteUbergraph_RadialButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnAfterEquipSlotsLoaded__DelegateSignature(struct TArray<struct USprayEquipSlotHandle*>& SprayEquipSlotHandles); // Function RadialButton.RadialButton_C.OnAfterEquipSlotsLoaded__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SprayEquipSlotClicked__DelegateSignature(struct USprayEquipSlotHandle* SlotHandle); // Function RadialButton.RadialButton_C.SprayEquipSlotClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnClicked__DelegateSignature(); // Function RadialButton.RadialButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

