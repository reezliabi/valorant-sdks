// WidgetBlueprintGeneratedClass BloomSettingWidget.BloomSettingWidget_C
// Size: 0x420 (Inherited: 0x320)
struct UBloomSettingWidget_C : UBaseSettingsWidget {
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
	struct USpacer* OptionsSpacer; // 0x370(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x378(0x08)
	struct UButton* TrueButton; // 0x380(0x08)
	struct UOverlay* TrueOverlay; // 0x388(0x08)
	struct UImage* TrueSelected; // 0x390(0x08)
	struct UTextBlock* TrueText; // 0x398(0x08)
	struct FText DisplayText; // 0x3a0(0x18)
	struct FText DisplayTooltip; // 0x3b8(0x18)
	bool Value; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct FText TrueDisplayText; // 0x3d8(0x18)
	struct FText FalseDisplayText; // 0x3f0(0x18)
	struct FMulticastInlineDelegate valueUpdated; // 0x408(0x10)
	bool InvertValue; // 0x418(0x01)
	char pad_419[0x3]; // 0x419(0x03)
	int32_t MaxBloomQuality; // 0x41c(0x04)

	void GetIntSettingName(enum class EAresIntSettingName& IntSettingName); // Function BloomSettingWidget.BloomSettingWidget_C.GetIntSettingName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool ShouldDisplay(); // Function BloomSettingWidget.BloomSettingWidget_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyMaxRestrictions(); // Function BloomSettingWidget.BloomSettingWidget_C.ApplyMaxRestrictions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetValue(bool Value, bool IgnoreInvert, bool& OutValue); // Function BloomSettingWidget.BloomSettingWidget_C.SetValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetValue(bool IgnoreInvert, bool& Value); // Function BloomSettingWidget.BloomSettingWidget_C.GetValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateFalse(bool Immediate); // Function BloomSettingWidget.BloomSettingWidget_C.UpdateFalse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTrue(bool Immediate); // Function BloomSettingWidget.BloomSettingWidget_C.UpdateTrue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SelectOffValue(); // Function BloomSettingWidget.BloomSettingWidget_C.SelectOffValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSetting(bool NewValue); // Function BloomSettingWidget.BloomSettingWidget_C.UpdateSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetColors(); // Function BloomSettingWidget.BloomSettingWidget_C.SetColors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyStaticUI(); // Function BloomSettingWidget.BloomSettingWidget_C.ApplyStaticUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function BloomSettingWidget.BloomSettingWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnSynchronizeProperties(); // Function BloomSettingWidget.BloomSettingWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TrueButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function BloomSettingWidget.BloomSettingWidget_C.BndEvt__TrueButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__FalseButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature(); // Function BloomSettingWidget.BloomSettingWidget_C.BndEvt__FalseButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__FalseButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(); // Function BloomSettingWidget.BloomSettingWidget_C.BndEvt__FalseButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TrueButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function BloomSettingWidget.BloomSettingWidget_C.BndEvt__TrueButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TrueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function BloomSettingWidget.BloomSettingWidget_C.BndEvt__TrueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__FalseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function BloomSettingWidget.BloomSettingWidget_C.BndEvt__FalseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function BloomSettingWidget.BloomSettingWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function BloomSettingWidget.BloomSettingWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void SaveSetting(); // Function BloomSettingWidget.BloomSettingWidget_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshIntSettingVisual(); // Function BloomSettingWidget.BloomSettingWidget_C.RefreshIntSettingVisual // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_BloomSettingWidget(int32_t EntryPoint); // Function BloomSettingWidget.BloomSettingWidget_C.ExecuteUbergraph_BloomSettingWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void valueUpdated__DelegateSignature(bool Value); // Function BloomSettingWidget.BloomSettingWidget_C.valueUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

