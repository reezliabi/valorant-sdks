// WidgetBlueprintGeneratedClass WBP_GenericTextCycler.WBP_GenericTextCycler_C
// Size: 0x1c7c (Inherited: 0x1bd0)
struct UWBP_GenericTextCycler_C : UAresCycleSettingClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1bd0(0x08)
	struct UAresInputSwitcher* AresInputSwitcher; // 0x1bd8(0x08)
	struct UHorizontalBox* HorizontalTabBox; // 0x1be0(0x08)
	struct UWBP_Button_Basic_C* LeftArrow_Console; // 0x1be8(0x08)
	struct UWBP_Button_Basic_C* LeftArrow_PC; // 0x1bf0(0x08)
	struct UAresButtonTextComponent* OptionsText_PC; // 0x1bf8(0x08)
	struct UWBP_Button_Basic_C* RightArrow_Console; // 0x1c00(0x08)
	struct UWBP_Button_Basic_C* RightArrow_PC; // 0x1c08(0x08)
	struct UAresButtonImageComponent* TextTabs; // 0x1c10(0x08)
	struct UAresButtonTextComponent* Txt_Primary; // 0x1c18(0x08)
	struct UAresButtonTextComponent* Txt_Secondary; // 0x1c20(0x08)
	double Content Spacing; // 0x1c28(0x08)
	struct UMaterialInstanceDynamic* MITabs; // 0x1c30(0x08)
	struct UMaterialInstance* MatTabsParent; // 0x1c38(0x08)
	struct FMulticastInlineDelegate OnOptionChanged; // 0x1c40(0x10)
	bool bRightArrowPressed; // 0x1c50(0x01)
	bool bLeftArrowPressed; // 0x1c51(0x01)
	char pad_1C52[0x2]; // 0x1c52(0x02)
	struct FName IsPressedName; // 0x1c54(0x0c)
	struct FName IsFocusedName; // 0x1c60(0x0c)
	int32_t NumberOfOptions; // 0x1c6c(0x04)
	struct FName IsDisabledName; // 0x1c70(0x0c)

	void Set Disabled Visual State(bool IsDisabled); // Function WBP_GenericTextCycler.WBP_GenericTextCycler_C.Set Disabled Visual State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetHoveredVisualState(bool IsHovered); // Function WBP_GenericTextCycler.WBP_GenericTextCycler_C.SetHoveredVisualState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetLeftArrowPressed(bool IsPressed); // Function WBP_GenericTextCycler.WBP_GenericTextCycler_C.SetLeftArrowPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRightArrowPressed(bool IsPressed); // Function WBP_GenericTextCycler.WBP_GenericTextCycler_C.SetRightArrowPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetMaterialSelectedTab(int32_t NewSelection); // Function WBP_GenericTextCycler.WBP_GenericTextCycler_C.SetMaterialSelectedTab // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetDynamicTabsMaterial(); // Function WBP_GenericTextCycler.WBP_GenericTextCycler_C.SetDynamicTabsMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTabCount(int32_t TabCount); // Function WBP_GenericTextCycler.WBP_GenericTextCycler_C.SetTabCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetContentSpacing(); // Function WBP_GenericTextCycler.WBP_GenericTextCycler_C.SetContentSpacing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_GenericTextCycler.WBP_GenericTextCycler_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnTransitionHovered(); // Function WBP_GenericTextCycler.WBP_GenericTextCycler_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnTransitionUnHovered(); // Function WBP_GenericTextCycler.WBP_GenericTextCycler_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void InternalOnRightNavigation(); // Function WBP_GenericTextCycler.WBP_GenericTextCycler_C.InternalOnRightNavigation // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void InternalOnLeftNavigation(); // Function WBP_GenericTextCycler.WBP_GenericTextCycler_C.InternalOnLeftNavigation // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void InternalOnRightNavigationHeld(); // Function WBP_GenericTextCycler.WBP_GenericTextCycler_C.InternalOnRightNavigationHeld // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnClicked(); // Function WBP_GenericTextCycler.WBP_GenericTextCycler_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void InternalOnLeftNavigationHeld(); // Function WBP_GenericTextCycler.WBP_GenericTextCycler_C.InternalOnLeftNavigationHeld // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnTransitionDisabled(); // Function WBP_GenericTextCycler.WBP_GenericTextCycler_C.BP_OnTransitionDisabled // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnTransitionEnabled(); // Function WBP_GenericTextCycler.WBP_GenericTextCycler_C.BP_OnTransitionEnabled // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnNumberOfOptionsSet(int32_t NewNumberOfOptions); // Function WBP_GenericTextCycler.WBP_GenericTextCycler_C.BP_OnNumberOfOptionsSet // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnCurrentOptionIndexSet(int32_t NewCurrentOptionIndex); // Function WBP_GenericTextCycler.WBP_GenericTextCycler_C.BP_OnCurrentOptionIndexSet // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnTextCurrentOptionSet(struct FText& NewOption); // Function WBP_GenericTextCycler.WBP_GenericTextCycler_C.BP_OnTextCurrentOptionSet // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_GenericTextCycler_LeftArrow_PC_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_GenericTextCycler.WBP_GenericTextCycler_C.BndEvt__WBP_GenericTextCycler_LeftArrow_PC_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_GenericTextCycler_RightArrow_PC_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_GenericTextCycler.WBP_GenericTextCycler_C.BndEvt__WBP_GenericTextCycler_RightArrow_PC_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_GenericTextCycler(int32_t EntryPoint); // Function WBP_GenericTextCycler.WBP_GenericTextCycler_C.ExecuteUbergraph_WBP_GenericTextCycler // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnOptionChanged__DelegateSignature(); // Function WBP_GenericTextCycler.WBP_GenericTextCycler_C.OnOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

