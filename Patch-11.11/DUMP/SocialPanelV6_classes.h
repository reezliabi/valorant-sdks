// WidgetBlueprintGeneratedClass SocialPanelV6.SocialPanelV6_C
// Size: 0x451 (Inherited: 0x320)
struct USocialPanelV6_C : USocialPanel_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* GlowFade; // 0x328(0x08)
	struct UWidgetAnimation* HoverNudge; // 0x330(0x08)
	struct UWidgetAnimation* ExpandAnimation; // 0x338(0x08)
	struct UWidgetAnimation* CollapseAnimation; // 0x340(0x08)
	struct UWidgetAnimation* ShowAnimation; // 0x348(0x08)
	struct UWidgetAnimation* HideAnimation; // 0x350(0x08)
	struct UWidgetAnimation* ShowImmediate; // 0x358(0x08)
	struct UWidgetAnimation* HideImmediate; // 0x360(0x08)
	struct UButton* AutoReject; // 0x368(0x08)
	struct UImage* BG; // 0x370(0x08)
	struct UButton* ExpandButton; // 0x378(0x08)
	struct UOverlay* GlowAndshadowContainer; // 0x380(0x08)
	struct UHelpFlyout_C* HelpFlyout; // 0x388(0x08)
	struct UCanvasPanel* HelpWrapper; // 0x390(0x08)
	struct UImage* HoverGlow; // 0x398(0x08)
	struct UHorizontalBox* IconBox; // 0x3a0(0x08)
	struct UImage* Image_60; // 0x3a8(0x08)
	struct UImage* Image_102; // 0x3b0(0x08)
	struct UImage* Image_115; // 0x3b8(0x08)
	struct UImage* Image_246; // 0x3c0(0x08)
	struct UImage* menuButtonImage; // 0x3c8(0x08)
	struct UOverlay* Overlay_SocialFriendRequestBox; // 0x3d0(0x08)
	struct UImage* PlayIcon; // 0x3d8(0x08)
	struct UImage* Shadow; // 0x3e0(0x08)
	struct UTextBlock* SocialHeaderText; // 0x3e8(0x08)
	struct UImage* socialIcon; // 0x3f0(0x08)
	struct UOverlay* SocialPanel; // 0x3f8(0x08)
	struct USocialPanelButtonsV6_C* SocialPanelButtons; // 0x400(0x08)
	struct UVerticalBox* SocialPanelContainer; // 0x408(0x08)
	struct USocialPartyListV6_C* SocialPartyList; // 0x410(0x08)
	struct USocialRosterInvitesBox_C* SocialRosterInvitesBox; // 0x418(0x08)
	struct UStartGameWidget_C* StartGameWidget; // 0x420(0x08)
	struct UWBP_Panel_PriorityInterventionStatus_C* WBP_Panel_PriorityInterventionStatus; // 0x428(0x08)
	struct UMainMenuViewModel* Model; // 0x430(0x08)
	struct UMainMenuViewController* Controller; // 0x438(0x08)
	bool IsMinimized; // 0x440(0x01)
	bool ManuallyOpened; // 0x441(0x01)
	bool IsAnimating; // 0x442(0x01)
	bool IsHovered_1; // 0x443(0x01)
	bool IsInGame; // 0x444(0x01)
	bool IsAutoRejectEnabled; // 0x445(0x01)
	char pad_446[0x2]; // 0x446(0x02)
	struct USocialFriendRequestsBox_Base_C* SocialFriendRequestBoxInstance; // 0x448(0x08)
	bool DesignTime_UseFriendRequestV2; // 0x450(0x01)

	void SequenceEvent__ENTRYPOINTSocialPanelV6_1(); // Function SocialPanelV6.SocialPanelV6_C.SequenceEvent__ENTRYPOINTSocialPanelV6_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTSocialPanelV6(); // Function SocialPanelV6.SocialPanelV6_C.SequenceEvent__ENTRYPOINTSocialPanelV6 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateFriendRequestBox(bool UseFriendRequestV2); // Function SocialPanelV6.SocialPanelV6_C.CreateFriendRequestBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetSocialFriendRequestBox(struct USocialFriendRequestsBox_Base_C*& SocialFriendRequestBoxInstance); // Function SocialPanelV6.SocialPanelV6_C.GetSocialFriendRequestBox // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleNavigationStateChanged(); // Function SocialPanelV6.SocialPanelV6_C.HandleNavigationStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetViewContext(struct UMainMenuViewModel* Model, struct UMainMenuViewController* Controller); // Function SocialPanelV6.SocialPanelV6_C.SetViewContext // (Public|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ReceiveParentMenuStackEntry(struct UMenuStackEntry* ParentMenuStackEntry); // Function SocialPanelV6.SocialPanelV6_C.ReceiveParentMenuStackEntry // (Public|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateAutoRejectIndicator(); // Function SocialPanelV6.SocialPanelV6_C.UpdateAutoRejectIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply HandlePreviewMouseButtonDown(struct FPointerEvent MouseEvent); // Function SocialPanelV6.SocialPanelV6_C.HandlePreviewMouseButtonDown // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SocialPanelV6.SocialPanelV6_C.OnPreviewMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnPreviewMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function SocialPanelV6.SocialPanelV6_C.OnPreviewMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool IsContextMenuAllowed(); // Function SocialPanelV6.SocialPanelV6_C.IsContextMenuAllowed // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SocialPanelV6.SocialPanelV6_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function SocialPanelV6.SocialPanelV6_C.OnMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SocialPanelV6.SocialPanelV6_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent_2(); // Function SocialPanelV6.SocialPanelV6_C.SequenceEvent_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent_1(); // Function SocialPanelV6.SocialPanelV6_C.SequenceEvent_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleScreenChanged(); // Function SocialPanelV6.SocialPanelV6_C.HandleScreenChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCollapseAnimationFinished(); // Function SocialPanelV6.SocialPanelV6_C.OnCollapseAnimationFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnExpandAnimationFinished(); // Function SocialPanelV6.SocialPanelV6_C.OnExpandAnimationFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowSocialPanel(); // Function SocialPanelV6.SocialPanelV6_C.ShowSocialPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HideSocialPanel(bool Animate); // Function SocialPanelV6.SocialPanelV6_C.HideSocialPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldCollapse(bool& output); // Function SocialPanelV6.SocialPanelV6_C.ShouldCollapse // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetViewContextInternal(struct UMainMenuViewModel* Model, struct UMainMenuViewController* Controller); // Function SocialPanelV6.SocialPanelV6_C.SetViewContextInternal // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function SocialPanelV6.SocialPanelV6_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SocialPanelV6.SocialPanelV6_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SocialPanelV6.SocialPanelV6_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void HandleSessionLoopStateChanged(struct UPlatformPlayer* PlatformPlayer); // Function SocialPanelV6.SocialPanelV6_C.HandleSessionLoopStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Panel No Longer Hovered?(); // Function SocialPanelV6.SocialPanelV6_C.Panel No Longer Hovered? // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__SocialPanelButtons_K2Node_ComponentBoundEvent_3_OnFilterAdded__DelegateSignature(struct FString Filter); // Function SocialPanelV6.SocialPanelV6_C.BndEvt__SocialPanelButtons_K2Node_ComponentBoundEvent_3_OnFilterAdded__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ExpandButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function SocialPanelV6.SocialPanelV6_C.BndEvt__ExpandButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ExpandButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function SocialPanelV6.SocialPanelV6_C.BndEvt__ExpandButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void HandleMenuOpenOrClose(struct UMenuStackEntry* Menu); // Function SocialPanelV6.SocialPanelV6_C.HandleMenuOpenOrClose // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFriendAdded_Event_2(struct UFriendModel* FriendModel); // Function SocialPanelV6.SocialPanelV6_C.OnFriendAdded_Event_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ExpandButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function SocialPanelV6.SocialPanelV6_C.BndEvt__ExpandButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__AutoReject_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function SocialPanelV6.SocialPanelV6_C.BndEvt__AutoReject_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__AutoReject_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function SocialPanelV6.SocialPanelV6_C.BndEvt__AutoReject_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnAutoRejectChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function SocialPanelV6.SocialPanelV6_C.OnAutoRejectChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function SocialPanelV6.SocialPanelV6_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Required_Events(); // Function SocialPanelV6.SocialPanelV6_C.Required_Events // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function SocialPanelV6.SocialPanelV6_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_SocialPanelV6(int32_t EntryPoint); // Function SocialPanelV6.SocialPanelV6_C.ExecuteUbergraph_SocialPanelV6 // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

