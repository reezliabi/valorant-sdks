// WidgetBlueprintGeneratedClass Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C
// Size: 0x408 (Inherited: 0x320)
struct UCrosshair_LineScalingWidget_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UImage* BackgroundRight; // 0x330(0x08)
	struct UImage* ButtonImage; // 0x338(0x08)
	struct UTextBlock* DisplayNameText; // 0x340(0x08)
	struct UButton* Enable_Button; // 0x348(0x08)
	struct UImage* Image_1; // 0x350(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x358(0x08)
	struct USlider* Slider_A; // 0x360(0x08)
	struct USlider* Slider_B; // 0x368(0x08)
	struct UEditableTextBox* ValueBox_A; // 0x370(0x08)
	struct UEditableTextBox* ValueBox_B; // 0x378(0x08)
	bool toggleState; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	double SliderState_A; // 0x388(0x08)
	double SliderState_B; // 0x390(0x08)
	enum class EAresBoolSettingName ToggleSettingName; // 0x398(0x01)
	enum class EAresBoolSettingName ToggleSettingADSName; // 0x399(0x01)
	enum class EAresFloatSettingName SliderStateSettingName_A; // 0x39a(0x01)
	enum class EAresFloatSettingName SliderStateADSSettingName_A; // 0x39b(0x01)
	enum class EAresFloatSettingName SliderStateSettingName_B; // 0x39c(0x01)
	enum class EAresFloatSettingName SliderStateADSSettingName_B; // 0x39d(0x01)
	enum class ESlateVisibility Default Visibility; // 0x39e(0x01)
	char pad_39F[0x1]; // 0x39f(0x01)
	struct FText DisplayText; // 0x3a0(0x18)
	struct FText DisplayTooltip; // 0x3b8(0x18)
	double minSliderRange; // 0x3d0(0x08)
	double maxSliderRange; // 0x3d8(0x08)
	bool Modify Slider_B; // 0x3e0(0x01)
	bool Truncate; // 0x3e1(0x01)
	char pad_3E2[0x2]; // 0x3e2(0x02)
	int32_t TruncateInteger; // 0x3e4(0x04)
	bool ShouldPersistSetting; // 0x3e8(0x01)
	bool ValueSliderEngaged_A; // 0x3e9(0x01)
	bool ValueSliderEngaged_B; // 0x3ea(0x01)
	char pad_3EB[0x5]; // 0x3eb(0x05)
	struct UTexture* OnImage; // 0x3f0(0x08)
	struct UTexture* OffImage; // 0x3f8(0x08)
	bool AddedChangedEvent; // 0x400(0x01)
	bool UseADSSettingName; // 0x401(0x01)
	char pad_402[0x2]; // 0x402(0x02)
	int32_t MaxTextLength; // 0x404(0x04)

	void UpdateWithTruncatedText(struct FText Text, enum class EAresFloatSettingName SettingName); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.UpdateWithTruncatedText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheckTextStringBounds(struct FText Text, enum class EAresFloatSettingName FloatSettingName, struct FText& TruncatedText); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.CheckTextStringBounds // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSliderValueAndSaveSetting(double InputValue); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.UpdateSliderValueAndSaveSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetFloatSettingValueFromName(enum class EAresFloatSettingName SettingNameIn, double Value); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.SetFloatSettingValueFromName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetFloatSettingDataFromName(enum class EAresFloatSettingName SettingName, double& ValueOut, struct USlider*& SliderOut, struct UEditableTextBox*& TextBoxOut); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.GetFloatSettingDataFromName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetFloatSettingData(bool IsSlider1, double& ValueOut, enum class EAresFloatSettingName& SettingName, struct USlider*& SliderOut, struct UEditableTextBox*& TextBoxOut); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.GetFloatSettingData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void CommitText(struct FText Text, enum class ETextCommit Commit Method, double& TypedValue); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.CommitText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SaveFloatSetting(enum class EAresFloatSettingName SettingName, double Value, bool SliderEngaged); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.SaveFloatSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TruncateValue(double Value, double& NewValue); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.TruncateValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetValueWithinBounds(double Value); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.GetValueWithinBounds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	double ClampSliderValue(enum class EAresFloatSettingName SettingName, double Value); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.ClampSliderValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	double Clamp Setting Value(double Value, enum class EAresFloatSettingName TargetSettingName); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.Clamp Setting Value // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Display Clamped Value(enum class EAresFloatSettingName SettingEnum); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.Display Clamped Value // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Static Text(); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.Set Static Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitSettings(); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.InitSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Bool Visuals(); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.Update Bool Visuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnBoolSettingChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.OnBoolSettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnFloatSettingChanged(enum class EAresFloatSettingName Setting Name, float Old Value, float New Value); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.OnFloatSettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSynchronizeProperties(); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void TryDisplay(); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.TryDisplay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Slider_1_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.BndEvt__Slider_1_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void SaveSetting(); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Slider_0_K2Node_ComponentBoundEvent_6_OnMouseCaptureBeginEvent__DelegateSignature(); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_6_OnMouseCaptureBeginEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Slider_0_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature(); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Slider_1_K2Node_ComponentBoundEvent_12_OnMouseCaptureBeginEvent__DelegateSignature(); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.BndEvt__Slider_1_K2Node_ComponentBoundEvent_12_OnMouseCaptureBeginEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Slider_1_K2Node_ComponentBoundEvent_13_OnMouseCaptureEndEvent__DelegateSignature(); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.BndEvt__Slider_1_K2Node_ComponentBoundEvent_13_OnMouseCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ValueBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.BndEvt__ValueBox_0_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ValueBox_1_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.BndEvt__ValueBox_1_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Enable_Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature(); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.BndEvt__Enable_Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void SetUseADSSettings(bool ForADS); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.SetUseADSSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSettingsName(enum class EAresFloatSettingName FloatSetting, enum class EAresFloatSettingName FloatSetting2, enum class EAresBoolSettingName BoolSetting); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.UpdateSettingsName // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Crosshair_LineScalingWidget_ValueBox_A_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.BndEvt__Crosshair_LineScalingWidget_ValueBox_A_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Crosshair_LineScalingWidget_ValueBox_B_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.BndEvt__Crosshair_LineScalingWidget_ValueBox_B_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Crosshair_LineScalingWidget(int32_t EntryPoint); // Function Crosshair_LineScalingWidget.Crosshair_LineScalingWidget_C.ExecuteUbergraph_Crosshair_LineScalingWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

