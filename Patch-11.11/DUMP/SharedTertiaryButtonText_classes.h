// WidgetBlueprintGeneratedClass SharedTertiaryButtonText.SharedTertiaryButtonText_C
// Size: 0x441 (Inherited: 0x320)
struct USharedTertiaryButtonText_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* Default; // 0x328(0x08)
	struct UWidgetAnimation* Disabled; // 0x330(0x08)
	struct UWidgetAnimation* OnClick; // 0x338(0x08)
	struct UWidgetAnimation* hover; // 0x340(0x08)
	struct UImage* Backing; // 0x348(0x08)
	struct UImage* Border; // 0x350(0x08)
	struct UButton* Button; // 0x358(0x08)
	struct UOverlay* ButtonContainer; // 0x360(0x08)
	struct UImage* IconButton; // 0x368(0x08)
	struct UTextBlock* TextBlockHover; // 0x370(0x08)
	struct UTextBlock* TextBlockNormal; // 0x378(0x08)
	struct FText ButtonText; // 0x380(0x18)
	struct FMulticastInlineDelegate OnClicked; // 0x398(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x3a8(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x3b8(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x3c8(0x10)
	bool Enabled; // 0x3d8(0x01)
	enum class EUMGSequencePlayMode NewVar_1; // 0x3d9(0x01)
	bool DarkHoverEnable; // 0x3da(0x01)
	bool ShadowEnable; // 0x3db(0x01)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct FMulticastInlineDelegate OnDisabled; // 0x3e0(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x3f0(0x10)
	struct UTexture2D* Icon; // 0x400(0x08)
	struct FLinearColor IconColor; // 0x408(0x10)
	bool LeftJustified; // 0x418(0x01)
	bool Tracking; // 0x419(0x01)
	char pad_41A[0x2]; // 0x41a(0x02)
	int32_t FontSize; // 0x41c(0x04)
	struct UAkAudioEvent* AUD_Hover; // 0x420(0x08)
	struct UAkAudioEvent* AUD_UnHover; // 0x428(0x08)
	struct UAkAudioEvent* AUD_Pressed; // 0x430(0x08)
	struct UAkAudioEvent* AUD_Released; // 0x438(0x08)
	bool IsBeingClicked; // 0x440(0x01)

	void SetFontTracking(bool Tracking); // Function SharedTertiaryButtonText.SharedTertiaryButtonText_C.SetFontTracking // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetJustification(bool LeftJustified); // Function SharedTertiaryButtonText.SharedTertiaryButtonText_C.SetJustification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StopAllAnimationsBlueprint(); // Function SharedTertiaryButtonText.SharedTertiaryButtonText_C.StopAllAnimationsBlueprint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsEnabledOverride(bool InIsEnabled); // Function SharedTertiaryButtonText.SharedTertiaryButtonText_C.SetIsEnabledOverride // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetImage(); // Function SharedTertiaryButtonText.SharedTertiaryButtonText_C.SetImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetButtonEnabled(bool IsEnabled); // Function SharedTertiaryButtonText.SharedTertiaryButtonText_C.SetButtonEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateButtonText(struct FText ButtonText); // Function SharedTertiaryButtonText.SharedTertiaryButtonText_C.UpdateButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RematchButton_K2Node_ComponentBoundEvent_203_OnButtonHoverEvent__DelegateSignature(); // Function SharedTertiaryButtonText.SharedTertiaryButtonText_C.BndEvt__RematchButton_K2Node_ComponentBoundEvent_203_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RematchButton_K2Node_ComponentBoundEvent_257_OnButtonHoverEvent__DelegateSignature(); // Function SharedTertiaryButtonText.SharedTertiaryButtonText_C.BndEvt__RematchButton_K2Node_ComponentBoundEvent_257_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function SharedTertiaryButtonText.SharedTertiaryButtonText_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RematchButton_K2Node_ComponentBoundEvent_476_OnButtonClickedEvent__DelegateSignature(); // Function SharedTertiaryButtonText.SharedTertiaryButtonText_C.BndEvt__RematchButton_K2Node_ComponentBoundEvent_476_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RematchButton_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature(); // Function SharedTertiaryButtonText.SharedTertiaryButtonText_C.BndEvt__RematchButton_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnSynchronizeProperties(); // Function SharedTertiaryButtonText.SharedTertiaryButtonText_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature(); // Function SharedTertiaryButtonText.SharedTertiaryButtonText_C.BndEvt__Button_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void WidgetAnimationEvt_OnClick_K2Node_WidgetAnimationEvent_1(); // Function SharedTertiaryButtonText.SharedTertiaryButtonText_C.WidgetAnimationEvt_OnClick_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_SharedTertiaryButtonText(int32_t EntryPoint); // Function SharedTertiaryButtonText.SharedTertiaryButtonText_C.ExecuteUbergraph_SharedTertiaryButtonText // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnReleased__DelegateSignature(struct USharedTertiaryButtonText_C* TextButton); // Function SharedTertiaryButtonText.SharedTertiaryButtonText_C.OnReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDisabled__DelegateSignature(struct USharedTertiaryButtonText_C* NewParam); // Function SharedTertiaryButtonText.SharedTertiaryButtonText_C.OnDisabled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPressed__DelegateSignature(struct USharedTertiaryButtonText_C* TextButton); // Function SharedTertiaryButtonText.SharedTertiaryButtonText_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnUnHovered__DelegateSignature(struct USharedTertiaryButtonText_C* TextButton); // Function SharedTertiaryButtonText.SharedTertiaryButtonText_C.OnUnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHovered__DelegateSignature(struct USharedTertiaryButtonText_C* TextButton); // Function SharedTertiaryButtonText.SharedTertiaryButtonText_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnClicked__DelegateSignature(struct USharedTertiaryButtonText_C* TextButton); // Function SharedTertiaryButtonText.SharedTertiaryButtonText_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

