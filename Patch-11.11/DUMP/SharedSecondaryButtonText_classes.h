// WidgetBlueprintGeneratedClass SharedSecondaryButtonText.SharedSecondaryButtonText_C
// Size: 0x4a0 (Inherited: 0x320)
struct USharedSecondaryButtonText_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* Selected_Ani; // 0x328(0x08)
	struct UWidgetAnimation* Default; // 0x330(0x08)
	struct UWidgetAnimation* Disabled; // 0x338(0x08)
	struct UWidgetAnimation* hover; // 0x340(0x08)
	struct UImage* BG; // 0x348(0x08)
	struct UImage* Border; // 0x350(0x08)
	struct UTelemetryButton* Button; // 0x358(0x08)
	struct UImage* HoverBG; // 0x360(0x08)
	struct UImage* HoverGlow; // 0x368(0x08)
	struct UImage* IconButton; // 0x370(0x08)
	struct UImage* OnClickBacking; // 0x378(0x08)
	struct UImage* PipBottomLeft; // 0x380(0x08)
	struct UImage* PipBottomRight; // 0x388(0x08)
	struct UImage* PipTopLeft; // 0x390(0x08)
	struct UImage* PipTopRight; // 0x398(0x08)
	struct UTextBlock* TextBlockHover; // 0x3a0(0x08)
	struct UTextBlock* TextBlockNormal; // 0x3a8(0x08)
	struct UMenuAnchor* TooltipAnchor; // 0x3b0(0x08)
	struct FLinearColor HoverColor; // 0x3b8(0x10)
	struct FText ButtonText; // 0x3c8(0x18)
	struct FText ButtonTooltip; // 0x3e0(0x18)
	struct FMulticastInlineDelegate OnClicked; // 0x3f8(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x408(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x418(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x428(0x10)
	bool Enabled; // 0x438(0x01)
	bool DarkHoverEnable; // 0x439(0x01)
	bool ShadowEnable; // 0x43a(0x01)
	char pad_43B[0x5]; // 0x43b(0x05)
	struct FMulticastInlineDelegate OnDisabled; // 0x440(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x450(0x10)
	struct UTexture2D* Icon; // 0x460(0x08)
	bool Hovered; // 0x468(0x01)
	bool Selected; // 0x469(0x01)
	char pad_46A[0x6]; // 0x46a(0x06)
	struct UAkAudioEvent* AUD_Click; // 0x470(0x08)
	struct UAkAudioEvent* AUD_Hover; // 0x478(0x08)
	bool SendTelemetry; // 0x480(0x01)
	char pad_481[0x7]; // 0x481(0x07)
	struct FString ActionTarget; // 0x488(0x10)
	struct UAkAudioEvent* AUD_UnHover; // 0x498(0x08)

	void SetActionTarget(struct FString Target); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.SetActionTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetButtonTooltip(struct FText NewTooltip); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.SetButtonTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* On_TooltipAnchor_GetMenuContent_1(); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.On_TooltipAnchor_GetMenuContent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetButtonSelected(bool IsSelected); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.SetButtonSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAnimation(); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.UpdateAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StopAllAnimationsBlueprint(); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.StopAllAnimationsBlueprint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsEnabledOverride(bool InIsEnabled); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.SetIsEnabledOverride // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetImage(); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.SetImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetButtonEnabled(bool IsEnabled); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.SetButtonEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateButtonText(struct FText ButtonText); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.UpdateButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnSynchronizeProperties(); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TelemetryButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.BndEvt__TelemetryButton_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TelemetryButton_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.BndEvt__TelemetryButton_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TelemetryButton_0_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature(); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.BndEvt__TelemetryButton_0_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TelemetryButton_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.BndEvt__TelemetryButton_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TelemetryButton_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.BndEvt__TelemetryButton_0_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_SharedSecondaryButtonText(int32_t EntryPoint); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.ExecuteUbergraph_SharedSecondaryButtonText // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnReleased__DelegateSignature(struct USharedSecondaryButtonText_C* TextButton); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.OnReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDisabled__DelegateSignature(struct USharedSecondaryButtonText_C* NewParam); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.OnDisabled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPressed__DelegateSignature(struct USharedSecondaryButtonText_C* TextButton); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnUnHovered__DelegateSignature(struct USharedButtonText1_C* TextButton); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.OnUnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHovered__DelegateSignature(struct USharedSecondaryButtonText_C* TextButton); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnClicked__DelegateSignature(struct USharedSecondaryButtonText_C* TextButton); // Function SharedSecondaryButtonText.SharedSecondaryButtonText_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

