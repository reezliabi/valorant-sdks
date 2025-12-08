// WidgetBlueprintGeneratedClass MatureSettingWidget.MatureSettingWidget_C
// Size: 0x419 (Inherited: 0x320)
struct UMatureSettingWidget_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* HightlightFalse; // 0x328(0x08)
	struct UWidgetAnimation* HighlightTrue; // 0x330(0x08)
	struct UImage* Background; // 0x338(0x08)
	struct UTextBlock* DisplayNameText; // 0x340(0x08)
	struct UButton* FalseButton; // 0x348(0x08)
	struct UImage* FalseSelected; // 0x350(0x08)
	struct UTextBlock* FalseText; // 0x358(0x08)
	struct UImage* Image_1; // 0x360(0x08)
	struct UImage* Image_2; // 0x368(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x370(0x08)
	struct UButton* TrueButton; // 0x378(0x08)
	struct UImage* TrueSelected; // 0x380(0x08)
	struct UTextBlock* TrueText; // 0x388(0x08)
	struct FText DisplayText; // 0x390(0x18)
	struct FText DisplayTooltip; // 0x3a8(0x18)
	bool Value; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct FText TrueDisplayText; // 0x3c8(0x18)
	struct FText FalseDisplayText; // 0x3e0(0x18)
	struct FMulticastInlineDelegate valueUpdated; // 0x3f8(0x10)
	bool InvertValue; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct UConfirmationModal_C* ConfirmPopup; // 0x410(0x08)
	bool InitialValue; // 0x418(0x01)

	bool ShouldDisplay(); // Function MatureSettingWidget.MatureSettingWidget_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowPopupConfirmation(); // Function MatureSettingWidget.MatureSettingWidget_C.ShowPopupConfirmation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetValue(bool Value, bool IgnoreInvert, bool& OutValue); // Function MatureSettingWidget.MatureSettingWidget_C.SetValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetValue(bool IgnoreInvert, bool& Value); // Function MatureSettingWidget.MatureSettingWidget_C.GetValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateFalse(bool Immediate); // Function MatureSettingWidget.MatureSettingWidget_C.UpdateFalse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTrue(bool Immediate); // Function MatureSettingWidget.MatureSettingWidget_C.UpdateTrue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSetting(bool NewValue); // Function MatureSettingWidget.MatureSettingWidget_C.UpdateSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetColors(); // Function MatureSettingWidget.MatureSettingWidget_C.SetColors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyStaticUI(); // Function MatureSettingWidget.MatureSettingWidget_C.ApplyStaticUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function MatureSettingWidget.MatureSettingWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnSynchronizeProperties(); // Function MatureSettingWidget.MatureSettingWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TrueButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function MatureSettingWidget.MatureSettingWidget_C.BndEvt__TrueButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__FalseButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature(); // Function MatureSettingWidget.MatureSettingWidget_C.BndEvt__FalseButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__FalseButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(); // Function MatureSettingWidget.MatureSettingWidget_C.BndEvt__FalseButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TrueButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function MatureSettingWidget.MatureSettingWidget_C.BndEvt__TrueButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TrueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function MatureSettingWidget.MatureSettingWidget_C.BndEvt__TrueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__FalseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function MatureSettingWidget.MatureSettingWidget_C.BndEvt__FalseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function MatureSettingWidget.MatureSettingWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function MatureSettingWidget.MatureSettingWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void ConfirmPressed(); // Function MatureSettingWidget.MatureSettingWidget_C.ConfirmPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SaveSetting(); // Function MatureSettingWidget.MatureSettingWidget_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_MatureSettingWidget(int32_t EntryPoint); // Function MatureSettingWidget.MatureSettingWidget_C.ExecuteUbergraph_MatureSettingWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void valueUpdated__DelegateSignature(bool Value); // Function MatureSettingWidget.MatureSettingWidget_C.valueUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

