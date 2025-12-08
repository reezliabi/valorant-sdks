// WidgetBlueprintGeneratedClass TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C
// Size: 0x3da (Inherited: 0x320)
struct UTextSettingsWidgetWithSlider_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UImage* BackgroundRight; // 0x330(0x08)
	struct UTextBlock* DisplayNameText; // 0x338(0x08)
	struct UImage* Image_1; // 0x340(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x348(0x08)
	struct USlider* Slider_1; // 0x350(0x08)
	struct UEditableTextBox* ValueBox; // 0x358(0x08)
	struct FText DisplayText; // 0x360(0x18)
	struct FText DisplayTooltip; // 0x378(0x18)
	enum class EAresFloatSettingName SettingName; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct UObject* RoamingSetting; // 0x398(0x08)
	double minSliderRange; // 0x3a0(0x08)
	double maxSliderRange; // 0x3a8(0x08)
	struct FMulticastInlineDelegate ValueChanged; // 0x3b0(0x10)
	int32_t TruncateInteger; // 0x3c0(0x04)
	bool Truncate; // 0x3c4(0x01)
	char pad_3C5[0x3]; // 0x3c5(0x03)
	double Value; // 0x3c8(0x08)
	bool ShouldPersistSetting; // 0x3d0(0x01)
	bool ValueSliderEngaged; // 0x3d1(0x01)
	char pad_3D2[0x2]; // 0x3d2(0x02)
	int32_t MaxTextLength; // 0x3d4(0x04)
	bool AddedChangedEvent; // 0x3d8(0x01)
	enum class ESlateVisibility DefaultVisibility; // 0x3d9(0x01)

	void GetFloatSettingName(enum class EAresFloatSettingName& FloatSettingName); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.GetFloatSettingName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateVisibility(bool& IsVisible); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.UpdateVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ChangeDefaultVisibility(enum class ESlateVisibility New Default Visibility); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.ChangeDefaultVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool ShouldDisplay(); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetValueWithinBounds(double Value, int32_t TruncationXDecimals); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.SetValueWithinBounds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TruncateValue(); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.TruncateValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	double ClampSliderValue(double Value); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.ClampSliderValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplayClampedValue(double Value); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.DisplayClampedValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	double ClampSettingValue(double Value); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.ClampSettingValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSetting(struct FText NewValue); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.UpdateSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetStaticText(); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ValueBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.BndEvt__ValueBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnSynchronizeProperties(); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Slider_0_K2Node_ComponentBoundEvent_60_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_60_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnSettingChanged(enum class EAresFloatSettingName SettingName, float OldValue, float NewValue); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.OnSettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SaveSetting(); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryDisplay(); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.TryDisplay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshFloatSettingVisual(); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.RefreshFloatSettingVisual // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature(); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature(); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ValueBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.BndEvt__ValueBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSettingsName(enum class EAresFloatSettingName New Setting Name); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.UpdateSettingsName // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_TextSettingsWidgetWithSlider(int32_t EntryPoint); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.ExecuteUbergraph_TextSettingsWidgetWithSlider // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void ValueChanged__DelegateSignature(struct FText Value); // Function TextSettingsWidgetWithSlider.TextSettingsWidgetWithSlider_C.ValueChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

