// WidgetBlueprintGeneratedClass StartGameWidget.StartGameWidget_C
// Size: 0x458 (Inherited: 0x358)
struct UStartGameWidget_C : UStartGameWidgetBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UWidgetAnimation* DisableWithWarning; // 0x360(0x08)
	struct UWidgetAnimation* Collapsed; // 0x368(0x08)
	struct UWidgetAnimation* Active; // 0x370(0x08)
	struct UWidgetAnimation* Default; // 0x378(0x08)
	struct UImage* ActiveEffect; // 0x380(0x08)
	struct UWidgetSwitcher* BigButtonSwitcher; // 0x388(0x08)
	struct UImage* ButtonDisabledRedFillBG; // 0x390(0x08)
	struct UVerticalBox* ButtonDisabledWarningBox; // 0x398(0x08)
	struct UImage* ButtonDisabledWarningIcon; // 0x3a0(0x08)
	struct UTextBlock* ButtonDisabledWarningText; // 0x3a8(0x08)
	struct UButton* Cancel; // 0x3b0(0x08)
	struct UButton* CloseButton; // 0x3b8(0x08)
	struct UMenuAnchor* DisableToolTipAnchor; // 0x3c0(0x08)
	struct UImage* Fill; // 0x3c8(0x08)
	struct USharedButtonMaster_C* FindMatchButton; // 0x3d0(0x08)
	struct UTextBlock* FindMatchText; // 0x3d8(0x08)
	struct UImage* Glow; // 0x3e0(0x08)
	struct UImage* Image_116; // 0x3e8(0x08)
	struct USharedButtonMaster_C* InQueueCancelButton; // 0x3f0(0x08)
	struct UButton* LeaveQueueButton; // 0x3f8(0x08)
	struct UImage* LogoBackgroundIcon; // 0x400(0x08)
	struct UPartyMatchmakingTimer_C* PartyMatchmakingTimer; // 0x408(0x08)
	struct UQueueRestrictedTimer_C* QueueRestrictedTimer; // 0x410(0x08)
	struct UTextBlock* QueueText; // 0x418(0x08)
	struct UOverlay* StartButtonOverlay; // 0x420(0x08)
	struct UOverlay* StopQueue; // 0x428(0x08)
	struct UOverlay* StopQueueNoTimer; // 0x430(0x08)
	struct UAkAudioEvent* AUD_Click_FindMatch_1; // 0x438(0x08)
	struct FText ToolTip; // 0x440(0x18)

	struct UUserWidget* On_DisableToolTipAnchor_GetMenuContent_1(); // Function StartGameWidget.StartGameWidget_C.On_DisableToolTipAnchor_GetMenuContent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateButtonEnabled(); // Function StartGameWidget.StartGameWidget_C.UpdateButtonEnabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateButtonWidget(); // Function StartGameWidget.StartGameWidget_C.UpdateButtonWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init(struct UPartyModel* Model, struct UPartyViewController* View Controller); // Function StartGameWidget.StartGameWidget_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetQueueDataAndSetQueueText(struct FString QueueID); // Function StartGameWidget.StartGameWidget_C.GetQueueDataAndSetQueueText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateQueueTextFromModel(); // Function StartGameWidget.StartGameWidget_C.UpdateQueueTextFromModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToggleCollapsedView(bool Collapsed); // Function StartGameWidget.StartGameWidget_C.ToggleCollapsedView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__StartButton_K2Node_ComponentBoundEvent_181_OnButtonClickedEvent__DelegateSignature(); // Function StartGameWidget.StartGameWidget_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_181_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__StartButton_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature(); // Function StartGameWidget.StartGameWidget_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_27_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__StartButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature(); // Function StartGameWidget.StartGameWidget_C.BndEvt__StartButton_K2Node_ComponentBoundEvent_37_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__LeaveButton_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature(struct USharedTertiaryButtonText_C* TextButton); // Function StartGameWidget.StartGameWidget_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__LeaveQueueButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function StartGameWidget.StartGameWidget_C.BndEvt__LeaveQueueButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void QueueIDChanged(struct FString NewValue); // Function StartGameWidget.StartGameWidget_C.QueueIDChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function StartGameWidget.StartGameWidget_C.BndEvt__Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function StartGameWidget.StartGameWidget_C.BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__FindMatchButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(); // Function StartGameWidget.StartGameWidget_C.BndEvt__FindMatchButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnStateChanged_Event(enum class EPartyViewState PartyState); // Function StartGameWidget.StartGameWidget_C.OnStateChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function StartGameWidget.StartGameWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function StartGameWidget.StartGameWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function StartGameWidget.StartGameWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_StartGameWidget(int32_t EntryPoint); // Function StartGameWidget.StartGameWidget_C.ExecuteUbergraph_StartGameWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

