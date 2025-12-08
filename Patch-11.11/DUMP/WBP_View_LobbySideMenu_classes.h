// WidgetBlueprintGeneratedClass WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C
// Size: 0x518 (Inherited: 0x408)
struct UWBP_View_LobbySideMenu_C : UAresCommonWidgetPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UWidgetAnimation* FocusLost; // 0x410(0x08)
	struct UWidgetAnimation* FocusGained; // 0x418(0x08)
	struct UWBP_Button_SelectBox_C* CustomModesButton; // 0x420(0x08)
	struct UWBP_Button_TertiaryButton_C* LeavePartyButton; // 0x428(0x08)
	struct UWBP_Button_SelectBox_C* MapSelectButton; // 0x430(0x08)
	struct UWBP_Button_SelectBox_C* OptionsButton; // 0x438(0x08)
	struct UWBP_Button_TertiaryButton_C* PartyCodeButton; // 0x440(0x08)
	struct UWBP_Button_StyledToggle_C* PartyToggle; // 0x448(0x08)
	struct UWBP_Button_TertiaryButton_C* PracticeButton; // 0x450(0x08)
	struct UWBP_Button_SelectBox_C* QueueSelectButton; // 0x458(0x08)
	struct UWBP_Button_SelectBox_C* ServerSelectButton; // 0x460(0x08)
	struct FMulticastInlineDelegate QueueSelectPressed; // 0x468(0x10)
	struct FMulticastInlineDelegate MapSelectPressed; // 0x478(0x10)
	struct FMulticastInlineDelegate OptionsPressed; // 0x488(0x10)
	struct FMulticastInlineDelegate ServerSelectPressed; // 0x498(0x10)
	struct FMulticastInlineDelegate PracticePressed; // 0x4a8(0x10)
	struct FMulticastInlineDelegate PartyTogglePressed; // 0x4b8(0x10)
	struct FMulticastInlineDelegate EXPBoostPressed; // 0x4c8(0x10)
	struct FMulticastInlineDelegate LeavePartyPressed; // 0x4d8(0x10)
	struct UUserWidget* LastSelectedWidget; // 0x4e8(0x08)
	bool bLobbyStateTransitioning; // 0x4f0(0x01)
	char pad_4F1[0x7]; // 0x4f1(0x07)
	struct FMulticastInlineDelegate CustomModeSelectPressed; // 0x4f8(0x10)
	struct FMulticastInlineDelegate PartyCodePressed; // 0x508(0x10)

	void SetCustomModeSelectable(bool bSelectable); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetCustomModeSelectable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCustomModeName(struct FText& InText); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetCustomModeName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCustomModeIcon(struct UTexture* Icon); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetCustomModeIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Is Widget Valid Focus Target(struct UWidget* Widget, bool& Focusable); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.Is Widget Valid Focus Target // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void ClearLastSelection(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.ClearLastSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetEXPBoostVisibility(enum class ESlateVisibility InVisibility); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetEXPBoostVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetServerName(struct FText& InText); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetServerName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPracticeButtonVisibility(enum class ESlateVisibility InVisibility); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetPracticeButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAccessibilityToggle(enum class EAresPartyAccessibility NewAccessibility); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.UpdateAccessibilityToggle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetLeavePartySelectable(bool bSelectable); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetLeavePartySelectable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetWidgetVisibilityForLobby(bool bIsCustomLobby); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetWidgetVisibilityForLobby // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetMapSelectable(bool bSelectable); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetMapSelectable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetMapName(struct FText& InText); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetMapName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetMapIcon(struct UTexture* Icon); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetMapIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void SetQueueSelectable(bool bSelectable); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetQueueSelectable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetQueueName(struct FText& InText); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetQueueName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetQueueIcon(struct UTexture* Icon); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.SetQueueIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_View_LobbySideMenu_QueueSelectButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BndEvt__WBP_View_LobbySideMenu_QueueSelectButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_View_LobbySideMenu_MapSelectButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BndEvt__WBP_View_LobbySideMenu_MapSelectButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_View_LobbySideMenu_OptionsButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BndEvt__WBP_View_LobbySideMenu_OptionsButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_View_LobbySideMenu_ServerSelectButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BndEvt__WBP_View_LobbySideMenu_ServerSelectButton_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_View_LobbySideMenu_PracticeButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BndEvt__WBP_View_LobbySideMenu_PracticeButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_View_LobbySideMenu_PartyToggle_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BndEvt__WBP_View_LobbySideMenu_PartyToggle_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_View_LobbySideMenu_LeavePartyButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BndEvt__WBP_View_LobbySideMenu_LeavePartyButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnChildWidgetFocusChanged(struct UUserWidget* ChildWidget); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BP_OnChildWidgetFocusChanged // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_View_LobbySideMenu_CustomModesButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BndEvt__WBP_View_LobbySideMenu_CustomModesButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_View_LobbySideMenu_PartyCodeButton_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.BndEvt__WBP_View_LobbySideMenu_PartyCodeButton_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_View_LobbySideMenu(int32_t EntryPoint); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.ExecuteUbergraph_WBP_View_LobbySideMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void PartyCodePressed__DelegateSignature(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.PartyCodePressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomModeSelectPressed__DelegateSignature(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.CustomModeSelectPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void LeavePartyPressed__DelegateSignature(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.LeavePartyPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EXPBoostPressed__DelegateSignature(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.EXPBoostPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PartyTogglePressed__DelegateSignature(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.PartyTogglePressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PracticePressed__DelegateSignature(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.PracticePressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ServerSelectPressed__DelegateSignature(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.ServerSelectPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OptionsPressed__DelegateSignature(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.OptionsPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MapSelectPressed__DelegateSignature(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.MapSelectPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void QueueSelectPressed__DelegateSignature(); // Function WBP_View_LobbySideMenu.WBP_View_LobbySideMenu_C.QueueSelectPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

