// WidgetBlueprintGeneratedClass PartyMemberContextMenu.PartyMemberContextMenu_C
// Size: 0x448 (Inherited: 0x318)
struct UPartyMemberContextMenu_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UNamedSlot* ChildSlot2; // 0x320(0x08)
	struct UContextMenuAnchor_C* ContextMenuAnchor; // 0x328(0x08)
	struct FString DisplayName; // 0x330(0x10)
	struct FString Subject; // 0x340(0x10)
	bool IsMe; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct UContextMenu_C* ContextMenuObject; // 0x358(0x08)
	struct UAresContextMenuActionBaseWidget* ContextAction_RequestJoin; // 0x360(0x08)
	struct UAresContextMenuActionBaseWidget* ContextAction_PartyFull; // 0x368(0x08)
	struct UAresContextMenuActionBaseWidget* ContextAction_JoinParty; // 0x370(0x08)
	struct UAresContextMenuActionBaseWidget* ContextAction_SendMessage; // 0x378(0x08)
	struct UAresContextMenuActionBaseWidget* ContextAction_Invite; // 0x380(0x08)
	struct UAresContextMenuActionBaseWidget* ContextAction_Kick; // 0x388(0x08)
	struct UAresContextMenuActionBaseWidget* ContextAction_AddRemoveFriend; // 0x390(0x08)
	struct UAresContextMenuActionBaseWidget* ContextAction_LeaveParty; // 0x398(0x08)
	struct UAresContextMenuActionBaseWidget* ContextAction_Report; // 0x3a0(0x08)
	struct UAresContextMenuActionBaseWidget* ContextAction_BlockPlayer; // 0x3a8(0x08)
	struct UAresContextMenuActionBaseWidget* ContextAction_ViewCareer; // 0x3b0(0x08)
	struct UAresContextMenuActionBaseWidget* ContextAction_EditFriendNote; // 0x3b8(0x08)
	struct UPlatformPlayer* PlatformPlayer; // 0x3c0(0x08)
	struct FString MatchID; // 0x3c8(0x10)
	struct FMulticastInlineDelegate OnEditFriendNoteActionTriggered; // 0x3d8(0x10)
	bool AllowEditFriendNote; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct FMulticastInlineDelegate OnMenuOpenChanged; // 0x3f0(0x10)
	bool ShowPartyManagementActions; // 0x400(0x01)
	bool AllowReport; // 0x401(0x01)
	char pad_402[0x6]; // 0x402(0x06)
	struct UAresContextMenuActionBaseWidget* ContextAction_MakeLeader; // 0x408(0x08)
	struct TArray<struct UUserActionContextMenuButtonMediator_C*> UserActionMenuButtonMediators; // 0x410(0x10)
	struct UPartyMemberActionSet_Base_C* PartyMemberActionSet; // 0x420(0x08)
	bool AllowAvoid; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct UAresContextMenuActionBaseWidget* ContextAction_ReportTeam; // 0x430(0x08)
	bool bOnlyShowViewCareer; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct UAresContextMenuActionBaseWidget* ContextAction_ViewTeam; // 0x440(0x08)

	void AddLeaderboardViewCareerAction(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.AddLeaderboardViewCareerAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void LegacyShowViewCareer(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.LegacyShowViewCareer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Volume Adjusted(double Value); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.Handle Volume Adjusted // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetContextMenuV2Enabled(bool& ConfigBool); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.GetContextMenuV2Enabled // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void AddUserActionByEnum(enum class EPartyMemberAction EUserAction); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.AddUserActionByEnum // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddUserActionToMenu(struct TScriptInterface<IUserAction> UserAction); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.AddUserActionToMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Item Visibility(struct UWidget* Item, bool Visible); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.Set Item Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddSpacer(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.AddSpacer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get Item Visibility(struct UWidget* Item, bool& IsVisible); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.Get Item Visibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Set Action Item Availability(struct UAresContextMenuActionBaseWidget* ActionItem, bool Visible, bool Enabled); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.Set Action Item Availability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPartyManagementActionsEnabled(bool Enabled); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.SetPartyManagementActionsEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct USocialPartyModel* GetOpenedSocialPlayerParty(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.GetOpenedSocialPlayerParty // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	struct USocialPlayer* GetOpenedSocialPlayer(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.GetOpenedSocialPlayer // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	struct FString GetOpenedSubject(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.GetOpenedSubject // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void SetEditFriendNoteEnabled(bool Enabled); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.SetEditFriendNoteEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAvoidTeammateEnabled(bool Enabled); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.SetAvoidTeammateEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateContextMenuSpacerVisibility(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.UpdateContextMenuSpacerVisibility // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateContextMenuActionsVisibility(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.UpdateContextMenuActionsVisibility // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init(struct FString Subject, struct FString MatchID, bool AllowReport); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetIsPlatformPlayerBlocked(bool& Return); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.GetIsPlatformPlayerBlocked // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateBlockPlayerLabel(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.UpdateBlockPlayerLabel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAddRemoveFriendLabel(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.UpdateAddRemoveFriendLabel // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddVolumeSliderToMenu(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.AddVolumeSliderToMenu // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ContextMenuAnchor_K2Node_ComponentBoundEvent_0_OnContextMenuCreated__DelegateSignature(struct UContextMenu_C* ContextMenu); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.BndEvt__ContextMenuAnchor_K2Node_ComponentBoundEvent_0_OnContextMenuCreated__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ContextMenuAnchor_K2Node_ComponentBoundEvent_1_OnMenuOpenChanged__DelegateSignature(bool IsOpen); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.BndEvt__ContextMenuAnchor_K2Node_ComponentBoundEvent_1_OnMenuOpenChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void HandleEditNoteRequested(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.HandleEditNoteRequested // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Empty(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.Empty // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Kick(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.Kick // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent_1(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleInviteError(enum class EPartyErrorEnum PartyErrorEnum, struct FString Description); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.HandleInviteError // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Invite(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.Invite // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSendMessage(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.OnSendMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSuccessfulJoinRequest(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.OnSuccessfulJoinRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RequestJoinError(struct FString ReasonStringInDebugOnly); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.RequestJoinError // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyError(enum class EPartyErrorEnum PartyErrorEnum); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.OnPartyError // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSuccessfulJoin(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.OnSuccessfulJoin // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PartyFull(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.PartyFull // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RequestJoin(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.RequestJoin // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void JoinParty(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.JoinParty // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Report(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.Report // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEditFriendNoteAction(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.OnEditFriendNoteAction // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Cancel Remove Friend(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.Cancel Remove Friend // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Confirm Remove Friend(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.Confirm Remove Friend // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveFriendOrAddFriend(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.RemoveFriendOrAddFriend // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLeaveParty(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.OnLeaveParty // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Transfer Owner Error(enum class EPartyErrorEnum PartyErrorEnum); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.On Transfer Owner Error // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Transfer Owner Success(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.On Transfer Owner Success // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Make Leader(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.Make Leader // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBlockCancelled(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.OnBlockCancelled // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBlockConfirmed(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.OnBlockConfirmed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBlockPlayerError(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.OnBlockPlayerError // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBlockPlayerSuccess(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.OnBlockPlayerSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void bLock(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.bLock // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReportTeam(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.ReportTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ViewTeam(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.ViewTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_PartyMemberContextMenu(int32_t EntryPoint); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.ExecuteUbergraph_PartyMemberContextMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnMenuOpenChanged__DelegateSignature(bool IsOpen); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.OnMenuOpenChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEditFriendNoteActionTriggered__DelegateSignature(); // Function PartyMemberContextMenu.PartyMemberContextMenu_C.OnEditFriendNoteActionTriggered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

