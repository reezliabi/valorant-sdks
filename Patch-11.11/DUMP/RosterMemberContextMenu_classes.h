// WidgetBlueprintGeneratedClass RosterMemberContextMenu.RosterMemberContextMenu_C
// Size: 0x3f9 (Inherited: 0x318)
struct URosterMemberContextMenu_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UContextMenuAnchor_C* ContextMenuAnchor; // 0x320(0x08)
	struct UContextMenu_C* ContextMenuObject; // 0x328(0x08)
	struct FString Subject; // 0x330(0x10)
	bool IsMe; // 0x340(0x01)
	bool IsOwner; // 0x341(0x01)
	char pad_342[0x6]; // 0x342(0x06)
	struct UAresContextMenuActionBaseWidget* ContextAction_LeaveTeam; // 0x348(0x08)
	struct UAresContextMenuActionBaseWidget* ContextAction_AddRemoveFriend; // 0x350(0x08)
	struct FMulticastInlineDelegate LeaveRosterClicked; // 0x358(0x10)
	struct UAresContextMenuActionBaseWidget* ContextAction_SendMessage; // 0x368(0x08)
	struct UAresContextMenuActionBaseWidget* ContextAction_ViewCareer; // 0x370(0x08)
	struct UAresContextMenuActionBaseWidget* ContextAction_KickPlayer; // 0x378(0x08)
	struct UAresContextMenuActionBaseWidget* ContextAction_MakeCaptain; // 0x380(0x08)
	struct UAresContextMenuActionBaseWidget* ContextAction_TransferOwnership; // 0x388(0x08)
	struct URosterMemberModel* RosterMember; // 0x390(0x08)
	struct URosterMemberModel* MyRosterMemberModel; // 0x398(0x08)
	struct UPlatformPlayer* PlatformPlayer; // 0x3a0(0x08)
	struct FMulticastInlineDelegate OnMenuOpenChanged; // 0x3a8(0x10)
	struct FDateTime DateJoined; // 0x3b8(0x08)
	bool IsEditor; // 0x3c0(0x01)
	char pad_3C1[0x7]; // 0x3c1(0x07)
	struct FMulticastInlineDelegate TransferOwnershipClicked; // 0x3c8(0x10)
	struct FMulticastInlineDelegate KickPlayerClicked; // 0x3d8(0x10)
	struct FMulticastInlineDelegate OnChangeMemberRoleClicked; // 0x3e8(0x10)
	bool IsRoleChangePromotion; // 0x3f8(0x01)

	void SetActionAvailability(struct UAresContextMenuActionBaseWidget* Action Widget, bool Visible, bool Enabled); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.SetActionAvailability // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateContextMenuActionsVisibility(); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.UpdateContextMenuActionsVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FString GetOpenedSubject(); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.GetOpenedSubject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void LeaveTeam(); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.LeaveTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddRemoveFriend(); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.AddRemoveFriend // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSendMessage(); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.OnSendMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent_1(); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnKickPlayerFromRoster(); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.OnKickPlayerFromRoster // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ContextMenuAnchor_K2Node_ComponentBoundEvent_0_OnContextMenuCreated__DelegateSignature(struct UContextMenu_C* ContextMenu); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.BndEvt__ContextMenuAnchor_K2Node_ComponentBoundEvent_0_OnContextMenuCreated__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ContextMenuAnchor_K2Node_ComponentBoundEvent_1_OnMenuOpenChanged__DelegateSignature(bool IsOpen); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.BndEvt__ContextMenuAnchor_K2Node_ComponentBoundEvent_1_OnMenuOpenChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ConfirmRemoveFriend(); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.ConfirmRemoveFriend // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CancelRemoveFriend(); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.CancelRemoveFriend // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ConfirmDeleteTeam(); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.ConfirmDeleteTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CancelDeleteTeam(); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.CancelDeleteTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTransferOwnership(); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.OnTransferOwnership // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ConfirmLeaveTeam(); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.ConfirmLeaveTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CancelLeaveTeam(); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.CancelLeaveTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void KickPlayerConfirm(); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.KickPlayerConfirm // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void KickPlayerCancel(); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.KickPlayerCancel // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnConfirmChangeMemberRole(); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.OnConfirmChangeMemberRole // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CancelRoleChange(); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.CancelRoleChange // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnChangeRoleOptionSelected(); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.OnChangeRoleOptionSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_RosterMemberContextMenu(int32_t EntryPoint); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.ExecuteUbergraph_RosterMemberContextMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnChangeMemberRoleClicked__DelegateSignature(struct FString Subject, enum class ERosterMemberRole NewRole); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.OnChangeMemberRoleClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void KickPlayerClicked__DelegateSignature(struct FString Subject); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.KickPlayerClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TransferOwnershipClicked__DelegateSignature(struct FString Subject); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.TransferOwnershipClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMenuOpenChanged__DelegateSignature(bool IsOpen); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.OnMenuOpenChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void LeaveRosterClicked__DelegateSignature(struct FString Subject); // Function RosterMemberContextMenu.RosterMemberContextMenu_C.LeaveRosterClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

