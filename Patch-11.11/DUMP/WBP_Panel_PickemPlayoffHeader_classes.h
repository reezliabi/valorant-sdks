// WidgetBlueprintGeneratedClass WBP_Panel_PickemPlayoffHeader.WBP_Panel_PickemPlayoffHeader_C
// Size: 0x4b1 (Inherited: 0x3e0)
struct UWBP_Panel_PickemPlayoffHeader_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresWidgetSwitcher* AresWidgetSwitcher_170; // 0x3e8(0x08)
	struct UWBP_Button_Esports_Secondary_C* ClearButton; // 0x3f0(0x08)
	struct UWBP_Button_Esports_Secondary_C* ClearButton_V2; // 0x3f8(0x08)
	struct UHorizontalBox* HB_ClearV1AndGPR; // 0x400(0x08)
	struct UHorizontalBox* HB_ClearV2; // 0x408(0x08)
	struct UImage* Image; // 0x410(0x08)
	struct UImage* Image_2; // 0x418(0x08)
	struct UImage* Image_3; // 0x420(0x08)
	struct UImage* Image_150; // 0x428(0x08)
	struct USizeBox* SizeBox_ClearButton; // 0x430(0x08)
	struct USizeBox* SizeBox_ClearButton_V2; // 0x438(0x08)
	struct USizeBox* SizeBox_GPR; // 0x440(0x08)
	struct USizeBox* SizeBox_ViewBracketButton; // 0x448(0x08)
	struct UAresWidgetSwitcher* TopRightButtonWidgetSwitcher; // 0x450(0x08)
	struct UWBP_Button_Esports_Secondary_C* ViewBracketButton; // 0x458(0x08)
	struct UWBP_Button_Esports_Secondary_C* WBP_Button_GPR; // 0x460(0x08)
	struct UWBP_Panel_PickemPlayoffResultLegend_C* WBP_Panel_PickemPlayoffResultLegend; // 0x468(0x08)
	struct UWBP_Panel_PickemProgressBar_Detailed_C* WBP_Panel_PickemProgressBar_Detailed; // 0x470(0x08)
	struct UWBP_Panel_Pickems_SmallTitle_C* WBP_Panel_Pickems_SmallTitle; // 0x478(0x08)
	struct UPickemPickBlockViewModel* PickemPickBlockVM; // 0x480(0x08)
	struct FMulticastInlineDelegate OnClear; // 0x488(0x10)
	struct UPickemPlayoffChoiceProgressViewModel* PickemPlayoffChoiceProgressVM; // 0x498(0x08)
	struct FMulticastInlineDelegate OnToggleBracketView; // 0x4a0(0x10)
	bool CurrentlyViewingStaticBracket; // 0x4b0(0x01)

	void SwitchBracketView(); // Function WBP_Panel_PickemPlayoffHeader.WBP_Panel_PickemPlayoffHeader_C.SwitchBracketView // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearPicks(); // Function WBP_Panel_PickemPlayoffHeader.WBP_Panel_PickemPlayoffHeader_C.ClearPicks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnClientChoiceCountChanged(int32_t NewValue); // Function WBP_Panel_PickemPlayoffHeader.WBP_Panel_PickemPlayoffHeader_C.OnClientChoiceCountChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnNumSavedPicksChanged(int32_t NewValue); // Function WBP_Panel_PickemPlayoffHeader.WBP_Panel_PickemPlayoffHeader_C.OnNumSavedPicksChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeViewModel(struct UPickemBlockModel* PickemBlockModel, enum class EAresPickemStage CurrentStage); // Function WBP_Panel_PickemPlayoffHeader.WBP_Panel_PickemPlayoffHeader_C.InitializeViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindOrUnbindEvents(bool Bind); // Function WBP_Panel_PickemPlayoffHeader.WBP_Panel_PickemPlayoffHeader_C.BindOrUnbindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPickCloseTimeChanged(struct FDateTime& InDateTime); // Function WBP_Panel_PickemPlayoffHeader.WBP_Panel_PickemPlayoffHeader_C.OnPickCloseTimeChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Panel_PickemPlayoffHeader.WBP_Panel_PickemPlayoffHeader_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_PickemPlayoffHeader_ClearButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_PickemPlayoffHeader.WBP_Panel_PickemPlayoffHeader_C.BndEvt__WBP_Panel_PickemPlayoffHeader_ClearButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_PickemPlayoffHeader_ViewResultsButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_PickemPlayoffHeader.WBP_Panel_PickemPlayoffHeader_C.BndEvt__WBP_Panel_PickemPlayoffHeader_ViewResultsButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_PickemPlayoffHeader_ClearButton_V2_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_PickemPlayoffHeader.WBP_Panel_PickemPlayoffHeader_C.BndEvt__WBP_Panel_PickemPlayoffHeader_ClearButton_V2_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_PickemPlayoffHeader_WBP_Button_GPR_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_PickemPlayoffHeader.WBP_Panel_PickemPlayoffHeader_C.BndEvt__WBP_Panel_PickemPlayoffHeader_WBP_Button_GPR_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function WBP_Panel_PickemPlayoffHeader.WBP_Panel_PickemPlayoffHeader_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_PickemPlayoffHeader(int32_t EntryPoint); // Function WBP_Panel_PickemPlayoffHeader.WBP_Panel_PickemPlayoffHeader_C.ExecuteUbergraph_WBP_Panel_PickemPlayoffHeader // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnToggleBracketView__DelegateSignature(bool ShouldShowStaticBracket); // Function WBP_Panel_PickemPlayoffHeader.WBP_Panel_PickemPlayoffHeader_C.OnToggleBracketView__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnClear__DelegateSignature(); // Function WBP_Panel_PickemPlayoffHeader.WBP_Panel_PickemPlayoffHeader_C.OnClear__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

