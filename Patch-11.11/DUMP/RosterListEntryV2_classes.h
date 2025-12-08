// WidgetBlueprintGeneratedClass RosterListEntryV2.RosterListEntryV2_C
// Size: 0x4d8 (Inherited: 0x318)
struct URosterListEntryV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BG; // 0x320(0x08)
	struct UButton* CancelInviteButton_2; // 0x328(0x08)
	struct UImage* CancelInviteButtonIcon_2; // 0x330(0x08)
	struct UMenuAnchor* CancelInviteMenuAnchor_2; // 0x338(0x08)
	struct UOverlay* CancelInviteOverlay; // 0x340(0x08)
	struct UOverlay* ContenderEligibility; // 0x348(0x08)
	struct UImage* ContenderIcon; // 0x350(0x08)
	struct UImage* Disabled; // 0x358(0x08)
	struct UWidgetSwitcher* EntrySwitcher; // 0x360(0x08)
	struct UImage* IMG_OnlineStatusDot; // 0x368(0x08)
	struct UImage* IMG_OnlineStatusDot_2; // 0x370(0x08)
	struct UButton* InviteBTN; // 0x378(0x08)
	struct UPlayerNameWidget_C* InvitedPlayerNameWidget; // 0x380(0x08)
	struct UImage* InvitePlayerDisabledColor; // 0x388(0x08)
	struct UOverlay* InvitePlayerDisabledOverlay; // 0x390(0x08)
	struct UMenuAnchor* InvitePlayerDisabledTooltip; // 0x398(0x08)
	struct UImage* MemberBackgroundImage; // 0x3a0(0x08)
	struct UOverlay* NoRoleIcon; // 0x3a8(0x08)
	struct UOverlay* O_StatusIndicator; // 0x3b0(0x08)
	struct UTextBlock* PendingText; // 0x3b8(0x08)
	struct UTextBlock* PendingText_2; // 0x3c0(0x08)
	struct UPlayerCardWithPresenceStatus_C* PlayerCardWithPresenceStatus; // 0x3c8(0x08)
	struct UPlayerCardWithPresenceStatus_C* PlayerCardWithPresenceStatus_351; // 0x3d0(0x08)
	struct UImage* PlayerMenuButton; // 0x3d8(0x08)
	struct UButton* PlayerNameButtonNone; // 0x3e0(0x08)
	struct UButton* PremierIneligibilityIcon; // 0x3e8(0x08)
	struct USizeBox* PremierIneligibilityIconBox; // 0x3f0(0x08)
	struct UOverlay* ReadyIconOverlay; // 0x3f8(0x08)
	struct UWidgetSwitcher* RoleIconWidgetSwitcher; // 0x400(0x08)
	struct UImage* RosterCaptainIcon; // 0x408(0x08)
	struct UImage* RosterOwnerIcon; // 0x410(0x08)
	struct UButton* SettingsButton; // 0x418(0x08)
	struct UMenuAnchor* SettingsMenuAnchor; // 0x420(0x08)
	struct UTextBlock* StatusText; // 0x428(0x08)
	struct UWidgetSwitcher* TitleTextSwitcher; // 0x430(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x438(0x08)
	struct URosterInvitePanel_C* RosterInvite; // 0x440(0x08)
	struct FMulticastInlineDelegate RemovePlayerEvent; // 0x448(0x10)
	struct FString Subject; // 0x458(0x10)
	struct URosterPlayerMenu_C* RosterPlayerMenu; // 0x468(0x08)
	struct FMulticastInlineDelegate TransferOwnershipEvent; // 0x470(0x10)
	struct FPlayerRestrictions PlayerRestrictions; // 0x480(0x30)
	bool IsRosterLocked; // 0x4b0(0x01)
	char pad_4B1[0x7]; // 0x4b1(0x07)
	struct UVM_PlayerPresence_C* PlayerPresenceViewModel; // 0x4b8(0x08)
	struct UPremierRosterMemberVM* RosterMemberVM; // 0x4c0(0x08)
	struct UPremierRosterListFunctionsVM* RosterFunctionsVM; // 0x4c8(0x08)
	struct UPremierRosterVM* RosterVM; // 0x4d0(0x08)

	void IsRosterMemberSelf(bool& IsSelf); // Function RosterListEntryV2.RosterListEntryV2_C.IsRosterMemberSelf // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateMemberStatus(); // Function RosterListEntryV2.RosterListEntryV2_C.UpdateMemberStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateMemberRole(bool IsCurrenPlayer); // Function RosterListEntryV2.RosterListEntryV2_C.UpdateMemberRole // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* On_InvitePlayerDisabledTooltip_GetMenuContent_1(); // Function RosterListEntryV2.RosterListEntryV2_C.On_InvitePlayerDisabledTooltip_GetMenuContent_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateVisibilityForRole(); // Function RosterListEntryV2.RosterListEntryV2_C.UpdateVisibilityForRole // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* On_CancelInviteMenuAnchor_1_GetMenuContent_1(); // Function RosterListEntryV2.RosterListEntryV2_C.On_CancelInviteMenuAnchor_1_GetMenuContent_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Get Player Status(struct FText& StatusText, struct FSlateColor& Color); // Function RosterListEntryV2.RosterListEntryV2_C.Get Player Status // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void IsMemberLockedIn(bool& LockedIn); // Function RosterListEntryV2.RosterListEntryV2_C.IsMemberLockedIn // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void InitPendingInvite(struct FString Subject, struct UPremierRosterVM* RosterModel); // Function RosterListEntryV2.RosterListEntryV2_C.InitPendingInvite // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init Member(struct FPlayerRestrictions PlayerRestrictions, struct UPremierRosterVM* Roster, struct UPremierRosterMemberVM* Member); // Function RosterListEntryV2.RosterListEntryV2_C.Init Member // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* On Settings Menu Anchor Get Menu Content 0(); // Function RosterListEntryV2.RosterListEntryV2_C.On Settings Menu Anchor Get Menu Content 0 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Init Empty(); // Function RosterListEntryV2.RosterListEntryV2_C.Init Empty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PostInit(); // Function RosterListEntryV2.RosterListEntryV2_C.PostInit // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTournamentDataChanged(struct UPlatformPlayer* PlatformPlayer); // Function RosterListEntryV2.RosterListEntryV2_C.OnTournamentDataChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function RosterListEntryV2.RosterListEntryV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__CancelInviteButton_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function RosterListEntryV2.RosterListEntryV2_C.BndEvt__CancelInviteButton_1_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__CancelInviteButton_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function RosterListEntryV2.RosterListEntryV2_C.BndEvt__CancelInviteButton_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__CancelInviteButton_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function RosterListEntryV2.RosterListEntryV2_C.BndEvt__CancelInviteButton_1_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnLeaveRosterClicked(struct FString Subject); // Function RosterListEntryV2.RosterListEntryV2_C.OnLeaveRosterClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnQueueIDChanged(struct FString NewValue); // Function RosterListEntryV2.RosterListEntryV2_C.OnQueueIDChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTransferOwnershipClicked(struct FString Subject); // Function RosterListEntryV2.RosterListEntryV2_C.OnTransferOwnershipClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRosterMemberRoleUpdated(); // Function RosterListEntryV2.RosterListEntryV2_C.OnRosterMemberRoleUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RosterListEntry_Button_759_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function RosterListEntryV2.RosterListEntryV2_C.BndEvt__RosterListEntry_Button_759_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RosterListEntry_InviteBTN_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function RosterListEntryV2.RosterListEntryV2_C.BndEvt__RosterListEntry_InviteBTN_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RosterListEntry_InviteBTN_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function RosterListEntryV2.RosterListEntryV2_C.BndEvt__RosterListEntry_InviteBTN_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnKickPlayerClicked(struct FString Subject); // Function RosterListEntryV2.RosterListEntryV2_C.OnKickPlayerClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Hovered (SettingsButton)(); // Function RosterListEntryV2.RosterListEntryV2_C.On Hovered (SettingsButton) // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Unhovered (SettingsButton)(); // Function RosterListEntryV2.RosterListEntryV2_C.On Unhovered (SettingsButton) // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RosterListEntry_SettingsButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function RosterListEntryV2.RosterListEntryV2_C.BndEvt__RosterListEntry_SettingsButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RosterListEntry_SettingsButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature(); // Function RosterListEntryV2.RosterListEntryV2_C.BndEvt__RosterListEntry_SettingsButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RosterListEntry_SettingsButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature(); // Function RosterListEntryV2.RosterListEntryV2_C.BndEvt__RosterListEntry_SettingsButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RosterListEntry_ErrorImage_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function RosterListEntryV2.RosterListEntryV2_C.BndEvt__RosterListEntry_ErrorImage_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnChangePlayerRole(struct FString Subject, enum class ERosterMemberRole NewRole); // Function RosterListEntryV2.RosterListEntryV2_C.OnChangePlayerRole // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCloseModal(); // Function RosterListEntryV2.RosterListEntryV2_C.OnCloseModal // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPresenceStateChanged(); // Function RosterListEntryV2.RosterListEntryV2_C.OnPresenceStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Roster Eligibility(); // Function RosterListEntryV2.RosterListEntryV2_C.Update Roster Eligibility // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RosterListEntry_PlayerNameButtonNone_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(); // Function RosterListEntryV2.RosterListEntryV2_C.BndEvt__RosterListEntry_PlayerNameButtonNone_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RosterListEntry_PlayerNameButtonNone_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature(); // Function RosterListEntryV2.RosterListEntryV2_C.BndEvt__RosterListEntry_PlayerNameButtonNone_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnChangeRoleErrored(enum class EPremierRosterChangeRoleErrorType& ErrorType); // Function RosterListEntryV2.RosterListEntryV2_C.OnChangeRoleErrored // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Error{}(enum class EPremierRosterInviteErrorType& ErrorType); // Function RosterListEntryV2.RosterListEntryV2_C.Error{} // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Success{}(struct FPremierRosterV2& Roster); // Function RosterListEntryV2.RosterListEntryV2_C.Success{} // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent_1(enum class ERosterMemberRole& Role); // Function RosterListEntryV2.RosterListEntryV2_C.CustomEvent_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent(); // Function RosterListEntryV2.RosterListEntryV2_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_RosterListEntryV2(int32_t EntryPoint); // Function RosterListEntryV2.RosterListEntryV2_C.ExecuteUbergraph_RosterListEntryV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void TransferOwnershipEvent__DelegateSignature(struct FString Subject, struct FString Game Name, struct FString Tag Line); // Function RosterListEntryV2.RosterListEntryV2_C.TransferOwnershipEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemovePlayerEvent__DelegateSignature(struct FString Subject); // Function RosterListEntryV2.RosterListEntryV2_C.RemovePlayerEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

