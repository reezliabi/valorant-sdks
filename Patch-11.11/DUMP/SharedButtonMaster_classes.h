// WidgetBlueprintGeneratedClass SharedButtonMaster.SharedButtonMaster_C
// Size: 0x529 (Inherited: 0x318)
struct USharedButtonMaster_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Click; // 0x320(0x08)
	struct UWidgetAnimation* hover; // 0x328(0x08)
	struct UOverlay* BorderWidgets; // 0x330(0x08)
	struct UOverlay* BottomBar; // 0x338(0x08)
	struct UImage* BottomBG; // 0x340(0x08)
	struct UTextBlock* BottomLabelTextWidget; // 0x348(0x08)
	struct UTelemetryButton* Button; // 0x350(0x08)
	struct UScaleBox* ButtonContentsScaleBox; // 0x358(0x08)
	struct UVerticalBox* ButtonContentsWidgets; // 0x360(0x08)
	struct UImage* ButtonIconWidget; // 0x368(0x08)
	struct UImage* ButtonIconWidget_Behind; // 0x370(0x08)
	struct UTextBlock* ButtonTextWidget; // 0x378(0x08)
	struct UImage* LiquidBG; // 0x380(0x08)
	struct UImage* LockIcon; // 0x388(0x08)
	struct UScaleBox* LockScaleBox; // 0x390(0x08)
	struct UImage* SelectBG; // 0x398(0x08)
	struct UImage* SelectedLiquidBG; // 0x3a0(0x08)
	struct UImage* TopBG; // 0x3a8(0x08)
	struct FMulticastInlineDelegate Clicked; // 0x3b0(0x10)
	struct FText BottomLabelText; // 0x3c0(0x18)
	struct FText ButtonText; // 0x3d8(0x18)
	struct UTexture2D* Icon; // 0x3f0(0x08)
	bool ShowBorder; // 0x3f8(0x01)
	enum class SharedButtonStyles ButtonStyle; // 0x3f9(0x01)
	bool IsDisabled; // 0x3fa(0x01)
	char pad_3FB[0x5]; // 0x3fb(0x05)
	struct FSharedButtonStyle ButtonStyleOverrides; // 0x400(0x48)
	struct TMap<enum class SharedButtonStyles, struct FSharedButtonStyle> StylesMap; // 0x448(0x50)
	struct FSharedButtonStyle ButtonStyleStruct; // 0x498(0x48)
	struct FLinearColor DefaultUglyColor; // 0x4e0(0x10)
	bool SendTelemetry; // 0x4f0(0x01)
	char pad_4F1[0x7]; // 0x4f1(0x07)
	struct FString TelemetryAction; // 0x4f8(0x10)
	struct FMargin ContentPadding; // 0x508(0x10)
	bool ShowLockWhenDisabled; // 0x518(0x01)
	char pad_519[0x7]; // 0x519(0x07)
	struct UAkAudioEvent* AUD_OnButtonEntered; // 0x520(0x08)
	bool IconAfterText; // 0x528(0x01)

	void SequenceEvent__ENTRYPOINTSharedButtonMaster_1(); // Function SharedButtonMaster.SharedButtonMaster_C.SequenceEvent__ENTRYPOINTSharedButtonMaster_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTSharedButtonMaster(); // Function SharedButtonMaster.SharedButtonMaster_C.SequenceEvent__ENTRYPOINTSharedButtonMaster // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBottomLabelTextColor(struct FLinearColor Color); // Function SharedButtonMaster.SharedButtonMaster_C.SetBottomLabelTextColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyProperties(); // Function SharedButtonMaster.SharedButtonMaster_C.ApplyProperties // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTelemetry(bool SendTelemetry, struct FString TelemetryAction); // Function SharedButtonMaster.SharedButtonMaster_C.UpdateTelemetry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateIsSelected(struct FLinearColor SetToColor, bool Reset); // Function SharedButtonMaster.SharedButtonMaster_C.UpdateIsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetContentPadding(struct FMargin Padding); // Function SharedButtonMaster.SharedButtonMaster_C.SetContentPadding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetButtonContents(); // Function SharedButtonMaster.SharedButtonMaster_C.SetButtonContents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBackgroundColors(); // Function SharedButtonMaster.SharedButtonMaster_C.SetBackgroundColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HoverB(); // Function SharedButtonMaster.SharedButtonMaster_C.HoverB // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HoverA(); // Function SharedButtonMaster.SharedButtonMaster_C.HoverA // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetLabelColor(struct FLinearColor Color); // Function SharedButtonMaster.SharedButtonMaster_C.SetLabelColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetButtonStyleOverrides(struct FSharedButtonStyle Style Override); // Function SharedButtonMaster.SharedButtonMaster_C.SetButtonStyleOverrides // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetButtonStyle(enum class SharedButtonStyles Style); // Function SharedButtonMaster.SharedButtonMaster_C.SetButtonStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetDisabled(bool IsDisabled); // Function SharedButtonMaster.SharedButtonMaster_C.SetDisabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBorderVisibility(bool Show); // Function SharedButtonMaster.SharedButtonMaster_C.SetBorderVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIcon(struct UTexture2D* Texture); // Function SharedButtonMaster.SharedButtonMaster_C.SetIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetButtonText(struct FText Text); // Function SharedButtonMaster.SharedButtonMaster_C.SetButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBottomLabelText(struct FText Text); // Function SharedButtonMaster.SharedButtonMaster_C.SetBottomLabelText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function SharedButtonMaster.SharedButtonMaster_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function SharedButtonMaster.SharedButtonMaster_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function SharedButtonMaster.SharedButtonMaster_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function SharedButtonMaster.SharedButtonMaster_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function SharedButtonMaster.SharedButtonMaster_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_SharedButtonMaster(int32_t EntryPoint); // Function SharedButtonMaster.SharedButtonMaster_C.ExecuteUbergraph_SharedButtonMaster // (Final|UbergraphFunction) // @ game+0x19be2f0
	void Clicked__DelegateSignature(); // Function SharedButtonMaster.SharedButtonMaster_C.Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

