// WidgetBlueprintGeneratedClass PlayerFacingPerfSettingsWidget.PlayerFacingPerfSettingsWidget_C
// Size: 0x45d (Inherited: 0x320)
struct UPlayerFacingPerfSettingsWidget_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UTextBlock* DevOnlyText; // 0x330(0x08)
	struct UImage* Image_1; // 0x338(0x08)
	struct UButton* OptionGraphOnlyButton; // 0x340(0x08)
	struct UImage* OptionGraphOnlySelected; // 0x348(0x08)
	struct UTextBlock* OptionGraphOnlyTextBox; // 0x350(0x08)
	struct UButton* OptionHideButton; // 0x358(0x08)
	struct UImage* OptionHideSelected; // 0x360(0x08)
	struct UTextBlock* OptionHideTextBox; // 0x368(0x08)
	struct UButton* OptionShowBothButton; // 0x370(0x08)
	struct UImage* OptionShowBothSelected; // 0x378(0x08)
	struct UTextBlock* OptionShowBothTextBox; // 0x380(0x08)
	struct UButton* OptionTextOnlyButton; // 0x388(0x08)
	struct UImage* OptionTextOnlySelected; // 0x390(0x08)
	struct UTextBlock* OptionTextOnlyTextBox; // 0x398(0x08)
	struct UTextBlock* SettingDisplayNameTextBox; // 0x3a0(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x3a8(0x08)
	struct FText Setting Display Name Text; // 0x3b0(0x18)
	struct FText Setting Tooltip Text; // 0x3c8(0x18)
	enum class EAresIntSettingName SettingName; // 0x3e0(0x01)
	char pad_3E1[0x3]; // 0x3e1(0x03)
	int32_t Chosen Value; // 0x3e4(0x04)
	struct FText Option Hide Text; // 0x3e8(0x18)
	struct FText Option Text Only Text; // 0x400(0x18)
	struct FText Option Graph Only Text; // 0x418(0x18)
	int32_t Option Hide Value; // 0x430(0x04)
	int32_t Option Text Only Value; // 0x434(0x04)
	int32_t Option Graph Only Value; // 0x438(0x04)
	char pad_43C[0x4]; // 0x43c(0x04)
	struct FText Option Show Both Text; // 0x440(0x18)
	int32_t Option Show Both Value; // 0x458(0x04)
	enum class EPlayerPerfMetricCategory MetricCategory; // 0x45c(0x01)

	void GetIntSettingName(enum class EAresIntSettingName& IntSettingName); // Function PlayerFacingPerfSettingsWidget.PlayerFacingPerfSettingsWidget_C.GetIntSettingName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetButtonValue(int32_t SettingState); // Function PlayerFacingPerfSettingsWidget.PlayerFacingPerfSettingsWidget_C.SetButtonValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetButtons(); // Function PlayerFacingPerfSettingsWidget.PlayerFacingPerfSettingsWidget_C.ResetButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToggleButtons(bool ButtonState); // Function PlayerFacingPerfSettingsWidget.PlayerFacingPerfSettingsWidget_C.ToggleButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool ShouldDisplay(); // Function PlayerFacingPerfSettingsWidget.PlayerFacingPerfSettingsWidget_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetRoamingSettingsManager(struct URoamingSettingsManager*& RoamingSettingsManager); // Function PlayerFacingPerfSettingsWidget.PlayerFacingPerfSettingsWidget_C.GetRoamingSettingsManager // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetColors(); // Function PlayerFacingPerfSettingsWidget.PlayerFacingPerfSettingsWidget_C.SetColors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyStaticUI(); // Function PlayerFacingPerfSettingsWidget.PlayerFacingPerfSettingsWidget_C.ApplyStaticUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function PlayerFacingPerfSettingsWidget.PlayerFacingPerfSettingsWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnSynchronizeProperties(); // Function PlayerFacingPerfSettingsWidget.PlayerFacingPerfSettingsWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TrueButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function PlayerFacingPerfSettingsWidget.PlayerFacingPerfSettingsWidget_C.BndEvt__TrueButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__FalseButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature(); // Function PlayerFacingPerfSettingsWidget.PlayerFacingPerfSettingsWidget_C.BndEvt__FalseButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__LowButton_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature(); // Function PlayerFacingPerfSettingsWidget.PlayerFacingPerfSettingsWidget_C.BndEvt__LowButton_K2Node_ComponentBoundEvent_96_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void SettingChanged(enum class EAresIntSettingName SettingName, int32_t OldValue, int32_t NewValue); // Function PlayerFacingPerfSettingsWidget.PlayerFacingPerfSettingsWidget_C.SettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__OptionShowBothButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function PlayerFacingPerfSettingsWidget.PlayerFacingPerfSettingsWidget_C.BndEvt__OptionShowBothButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function PlayerFacingPerfSettingsWidget.PlayerFacingPerfSettingsWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function PlayerFacingPerfSettingsWidget.PlayerFacingPerfSettingsWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void SaveSetting(); // Function PlayerFacingPerfSettingsWidget.PlayerFacingPerfSettingsWidget_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshIntSettingVisual(); // Function PlayerFacingPerfSettingsWidget.PlayerFacingPerfSettingsWidget_C.RefreshIntSettingVisual // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_PlayerFacingPerfSettingsWidget(int32_t EntryPoint); // Function PlayerFacingPerfSettingsWidget.PlayerFacingPerfSettingsWidget_C.ExecuteUbergraph_PlayerFacingPerfSettingsWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

