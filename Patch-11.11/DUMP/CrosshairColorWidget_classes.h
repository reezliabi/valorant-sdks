// WidgetBlueprintGeneratedClass CrosshairColorWidget.CrosshairColorWidget_C
// Size: 0x3c6 (Inherited: 0x320)
struct UCrosshairColorWidget_C : UColorPickerWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UImage* Color_Preview; // 0x330(0x08)
	struct UComboBoxString* ComboBox; // 0x338(0x08)
	struct UTextBlock* DisplayNameText; // 0x340(0x08)
	struct UImage* Image_1; // 0x348(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x350(0x08)
	struct UEditableTextBox* ValueBox; // 0x358(0x08)
	struct FText DisplayText; // 0x360(0x18)
	struct FText DisplayTooltip; // 0x378(0x18)
	struct FColor ValueForNonCvar; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct FMulticastInlineDelegate valueUpdated; // 0x398(0x10)
	struct FColor CustomColor; // 0x3a8(0x04)
	enum class EAresStringSettingName CustomColorName; // 0x3ac(0x01)
	char pad_3AD[0x3]; // 0x3ad(0x03)
	struct FString CustomColorString; // 0x3b0(0x10)
	enum class EAresStringSettingName CustomColorName_ADS; // 0x3c0(0x01)
	bool CustomColorEnabled; // 0x3c1(0x01)
	enum class EAresBoolSettingName CustomColorEnabledSettingName; // 0x3c2(0x01)
	enum class EAresBoolSettingName CustomColorEnabledSettingName_ADS; // 0x3c3(0x01)
	enum class EAresStringSettingName ColorSettingName; // 0x3c4(0x01)
	enum class EAresStringSettingName ColorSettingName_ADS; // 0x3c5(0x01)

	void CacheSettingValues(); // Function CrosshairColorWidget.CrosshairColorWidget_C.CacheSettingValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateWigetVisibilities(); // Function CrosshairColorWidget.CrosshairColorWidget_C.UpdateWigetVisibilities // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateColorAndUI(); // Function CrosshairColorWidget.CrosshairColorWidget_C.UpdateColorAndUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateColorDisplay(); // Function CrosshairColorWidget.CrosshairColorWidget_C.UpdateColorDisplay // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToggleCustomColorUI(); // Function CrosshairColorWidget.CrosshairColorWidget_C.ToggleCustomColorUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool ShouldDisplay(); // Function CrosshairColorWidget.CrosshairColorWidget_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddStringsToComboBox(); // Function CrosshairColorWidget.CrosshairColorWidget_C.AddStringsToComboBox // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCrosshairColorSettings(struct FColor Color); // Function CrosshairColorWidget.CrosshairColorWidget_C.UpdateCrosshairColorSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetStaticText(); // Function CrosshairColorWidget.CrosshairColorWidget_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function CrosshairColorWidget.CrosshairColorWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function CrosshairColorWidget.CrosshairColorWidget_C.BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function CrosshairColorWidget.CrosshairColorWidget_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function CrosshairColorWidget.CrosshairColorWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function CrosshairColorWidget.CrosshairColorWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void SaveSetting(); // Function CrosshairColorWidget.CrosshairColorWidget_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ValueBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function CrosshairColorWidget.CrosshairColorWidget_C.BndEvt__ValueBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void SetUseADSSettings(bool ForADS); // Function CrosshairColorWidget.CrosshairColorWidget_C.SetUseADSSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSynchronizeProperties(); // Function CrosshairColorWidget.CrosshairColorWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnStringSettingChanged(enum class EAresStringSettingName SettingName, struct FString OldValue, struct FString NewValue); // Function CrosshairColorWidget.CrosshairColorWidget_C.OnStringSettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBoolSettingChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function CrosshairColorWidget.CrosshairColorWidget_C.OnBoolSettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitDisplay(); // Function CrosshairColorWidget.CrosshairColorWidget_C.InitDisplay // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_CrosshairColorWidget(int32_t EntryPoint); // Function CrosshairColorWidget.CrosshairColorWidget_C.ExecuteUbergraph_CrosshairColorWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void valueUpdated__DelegateSignature(struct FColor Value); // Function CrosshairColorWidget.CrosshairColorWidget_C.valueUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

