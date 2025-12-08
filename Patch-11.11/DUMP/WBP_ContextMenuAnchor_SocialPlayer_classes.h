// WidgetBlueprintGeneratedClass WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C
// Size: 0x3c1 (Inherited: 0x338)
struct UWBP_ContextMenuAnchor_SocialPlayer_C : UWBP_ContextMenuAnchor_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UAresMenuAnchor* MenuAnchor; // 0x340(0x08)
	struct UPartyMemberContextMenu_C* PartyMemberContextMenu; // 0x348(0x08)
	struct UNamedSlot* RightClickableContent; // 0x350(0x08)
	bool bAnchorOnMouse; // 0x358(0x01)
	char pad_359[0x3]; // 0x359(0x03)
	struct FMargin MouseAnchoredPadding; // 0x35c(0x10)
	enum class EMenuPlacement NonMouseAnchoredPlacement; // 0x36c(0x01)
	char pad_36D[0x3]; // 0x36d(0x03)
	struct UAresContextMenuItemFilterDataAsset* ItemFilter; // 0x370(0x08)
	struct FString PlayerSubject; // 0x378(0x10)
	struct FString MatchID; // 0x388(0x10)
	struct FGuid OverridePlayerCardID; // 0x398(0x10)
	bool bIncludePartyManagementActions; // 0x3a8(0x01)
	bool bIncludeReportPlayer; // 0x3a9(0x01)
	bool bIncludeEditFriendNote; // 0x3aa(0x01)
	char pad_3AB[0x5]; // 0x3ab(0x05)
	struct FMulticastInlineDelegate OnFriendNoteActionTriggeredLegacy; // 0x3b0(0x10)
	bool bIsLeaderboardContextMenu; // 0x3c0(0x01)

	void SetOverridePlayerCardID(struct FGuid OverridePlayerCardID); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.SetOverridePlayerCardID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetMatchID(struct FString MatchID); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.SetMatchID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPlayerSubject(struct FString PlayerSubject); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.SetPlayerSubject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetItemFilter(struct UAresContextMenuItemFilterDataAsset* ItemFilter); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.SetItemFilter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIncludeEditFriendNote(bool bNewValue); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.SetIncludeEditFriendNote // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIncludeReportPlayer(bool bNewValue); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.SetIncludeReportPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIncludePartyManagementActions(bool bNewValue); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.SetIncludePartyManagementActions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCloseContextMenuRequested(); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.HandleCloseContextMenuRequested // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UUserWidget* On_MenuAnchor_GetUserMenuContent(); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.On_MenuAnchor_GetUserMenuContent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool GetIsUsingLegacyContextMenu(); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.GetIsUsingLegacyContextMenu // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void CloseContextMenuViaNavSystem(); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.CloseContextMenuViaNavSystem // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CloseContextMenuViaMenuAnchor(); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.CloseContextMenuViaMenuAnchor // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OpenContextMenuViaNavSystem(); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.OpenContextMenuViaNavSystem // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OpenContextMenuViaMenuAnchor(); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.OpenContextMenuViaMenuAnchor // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_ContextMenuAnchor_SocialPlayer_PartyMemberContextMenu_K2Node_ComponentBoundEvent_0_OnMenuOpenChanged__DelegateSignature(bool IsOpen); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.BndEvt__WBP_ContextMenuAnchor_SocialPlayer_PartyMemberContextMenu_K2Node_ComponentBoundEvent_0_OnMenuOpenChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_ContextMenuAnchor_SocialPlayer_MenuAnchor_K2Node_ComponentBoundEvent_1_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.BndEvt__WBP_ContextMenuAnchor_SocialPlayer_MenuAnchor_K2Node_ComponentBoundEvent_1_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_ContextMenuAnchor_SocialPlayer_PartyMemberContextMenu_K2Node_ComponentBoundEvent_2_OnEditFriendNoteActionTriggered__DelegateSignature(); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.BndEvt__WBP_ContextMenuAnchor_SocialPlayer_PartyMemberContextMenu_K2Node_ComponentBoundEvent_2_OnEditFriendNoteActionTriggered__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_ContextMenuAnchor_SocialPlayer(int32_t EntryPoint); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.ExecuteUbergraph_WBP_ContextMenuAnchor_SocialPlayer // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnFriendNoteActionTriggeredLegacy__DelegateSignature(); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.OnFriendNoteActionTriggeredLegacy__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

