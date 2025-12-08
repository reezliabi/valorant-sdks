// WidgetBlueprintGeneratedClass SharedThreadedChatWidget.SharedThreadedChatWidget_C
// Size: 0x3f3 (Inherited: 0x318)
struct USharedThreadedChatWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* InGameChatFade; // 0x320(0x08)
	struct UWidgetAnimation* ShowHideButtonFlip; // 0x328(0x08)
	struct UBackgroundBlur* BackgroundBlur_Bottom; // 0x330(0x08)
	struct UBackgroundBlur* BackgroundBlur_Top; // 0x338(0x08)
	struct UImage* BackgroundTint_Bottom; // 0x340(0x08)
	struct UImage* BackgroundTint_Top; // 0x348(0x08)
	struct UWidgetSwitcher* ChatDisplayBoxSwitcher; // 0x350(0x08)
	struct UVerticalBox* Foregroundbottomalignment; // 0x358(0x08)
	struct UInvalidationBox* InvalidationBox_Background; // 0x360(0x08)
	struct UInvalidationBox* InvalidationBox_BottomBackground; // 0x368(0x08)
	struct UInvalidationBox* InvalidationBox_ShowHideChat; // 0x370(0x08)
	struct UThreadedChatMessageDisplayBox_C* PopupMessages; // 0x378(0x08)
	struct UButton* ShowHideChatButton; // 0x380(0x08)
	struct UThreadedChatInputV2_C* ThreadedChatInput_219; // 0x388(0x08)
	struct UThreadedChatMessageDisplayBox_C* ThreadedChatMessageDisplayBoxGroups; // 0x390(0x08)
	struct UThreadedChatMessageDisplayBox_C* ThreadedChatMessageDisplayBoxWhispers; // 0x398(0x08)
	struct FMulticastInlineDelegate OnFocusEnter; // 0x3a0(0x10)
	struct FMulticastInlineDelegate OnFocusLeave; // 0x3b0(0x10)
	enum class ETextChatRoomType CurrentActiveChatTab; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct FText LastWhisperRecipient; // 0x3c8(0x18)
	struct FMulticastInlineDelegate MessageAdded; // 0x3e0(0x10)
	bool IsChatCollapsed; // 0x3f0(0x01)
	bool ChatCollapseAllowed; // 0x3f1(0x01)
	bool InGame; // 0x3f2(0x01)

	void GetWidgetContext(enum class EGameFlowStateType& post transition state); // Function SharedThreadedChatWidget.SharedThreadedChatWidget_C.GetWidgetContext // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetChatCollapse(bool PlayAnimation, bool Collapse); // Function SharedThreadedChatWidget.SharedThreadedChatWidget_C.SetChatCollapse // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SwitchChatTabs(enum class ETextChatRoomType ChatTab); // Function SharedThreadedChatWidget.SharedThreadedChatWidget_C.SwitchChatTabs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFocused(); // Function SharedThreadedChatWidget.SharedThreadedChatWidget_C.OnFocused // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SharedThreadedChatWidget.SharedThreadedChatWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SharedThreadedChatWidget.SharedThreadedChatWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void Unforcused(); // Function SharedThreadedChatWidget.SharedThreadedChatWidget_C.Unforcused // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ThreadedChatInput_218_K2Node_ComponentBoundEvent_1_OnChatTabSelection__DelegateSignature(enum class ETextChatRoomType ChatTabChoice); // Function SharedThreadedChatWidget.SharedThreadedChatWidget_C.BndEvt__ThreadedChatInput_218_K2Node_ComponentBoundEvent_1_OnChatTabSelection__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ThreadedChatMessageDisplayBoxGroups_K2Node_ComponentBoundEvent_0_MessageAddedToDisplay__DelegateSignature(); // Function SharedThreadedChatWidget.SharedThreadedChatWidget_C.BndEvt__ThreadedChatMessageDisplayBoxGroups_K2Node_ComponentBoundEvent_0_MessageAddedToDisplay__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ThreadedChatMessageDisplayBoxWhispers_K2Node_ComponentBoundEvent_2_MessageAddedToDisplay__DelegateSignature(); // Function SharedThreadedChatWidget.SharedThreadedChatWidget_C.BndEvt__ThreadedChatMessageDisplayBoxWhispers_K2Node_ComponentBoundEvent_2_MessageAddedToDisplay__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Initialize(enum class EChatRoomType SendAll, enum class EChatRoomType SendTeam, bool InGame); // Function SharedThreadedChatWidget.SharedThreadedChatWidget_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void WidgetAnimationEvt_ShowHideButtonFlip_K2Node_WidgetAnimationEvent_1(); // Function SharedThreadedChatWidget.SharedThreadedChatWidget_C.WidgetAnimationEvt_ShowHideButtonFlip_K2Node_WidgetAnimationEvent_1 // (BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function SharedThreadedChatWidget.SharedThreadedChatWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ThreadedChatInput_218_K2Node_ComponentBoundEvent_4_OnExpandRequest__DelegateSignature(enum class ETextChatRoomType Requested Tab); // Function SharedThreadedChatWidget.SharedThreadedChatWidget_C.BndEvt__ThreadedChatInput_218_K2Node_ComponentBoundEvent_4_OnExpandRequest__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ThreadedChatInput_218_K2Node_ComponentBoundEvent_5_OnCollapseRequest__DelegateSignature(); // Function SharedThreadedChatWidget.SharedThreadedChatWidget_C.BndEvt__ThreadedChatInput_218_K2Node_ComponentBoundEvent_5_OnCollapseRequest__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ShowHideChatButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function SharedThreadedChatWidget.SharedThreadedChatWidget_C.BndEvt__ShowHideChatButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void WidgetAnimationEvt_InGameChatFade_K2Node_WidgetAnimationEvent_2(); // Function SharedThreadedChatWidget.SharedThreadedChatWidget_C.WidgetAnimationEvt_InGameChatFade_K2Node_WidgetAnimationEvent_2 // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_SharedThreadedChatWidget(int32_t EntryPoint); // Function SharedThreadedChatWidget.SharedThreadedChatWidget_C.ExecuteUbergraph_SharedThreadedChatWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void MessageAdded__DelegateSignature(); // Function SharedThreadedChatWidget.SharedThreadedChatWidget_C.MessageAdded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFocusLeave__DelegateSignature(); // Function SharedThreadedChatWidget.SharedThreadedChatWidget_C.OnFocusLeave__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFocusEnter__DelegateSignature(); // Function SharedThreadedChatWidget.SharedThreadedChatWidget_C.OnFocusEnter__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

