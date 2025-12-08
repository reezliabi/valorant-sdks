// WidgetBlueprintGeneratedClass SocialPlayerWidget_Base.SocialPlayerWidget_Base_C
// Size: 0x379 (Inherited: 0x318)
struct USocialPlayerWidget_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USocialPlayer* SocialPlayer; // 0x320(0x08)
	struct FName UseGnTConfig; // 0x328(0x0c)
	char pad_334[0x4]; // 0x334(0x04)
	struct FString TagLine #; // 0x338(0x10)
	struct FString LastFilter; // 0x348(0x10)
	struct USocialPartyList_Base_C* OwningSocialPartyList; // 0x358(0x08)
	struct FMulticastInlineDelegate OnFriendClicked; // 0x360(0x10)
	struct UPlatformPlayer* PlatformPlayer; // 0x370(0x08)
	bool bAssignedSocialPlayer; // 0x378(0x01)

	struct USocialPlayer* GetSocialPlayer(); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.GetSocialPlayer // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void UnbindPlatformPlayerListeners(); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.UnbindPlatformPlayerListeners // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsFriendChanged(bool NewValue); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.OnIsFriendChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMatchScoreChanged(struct UPlatformPlayer* PlatformPlayer); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.OnMatchScoreChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMaxSizeChanged(int32_t NewValue); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.OnMaxSizeChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnQueueIDChanged_Event_1(struct FString NewValue); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.OnQueueIDChanged_Event_1 // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSessionLoopStateChanged(struct UPlatformPlayer* PlatformPlayer); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.OnSessionLoopStateChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyOwnerChange(struct UPlatformPlayer* PlatformPlayer); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.OnPartyOwnerChange // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartySizeChanged(int32_t NewValue); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.OnPartySizeChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyIDChanged(struct UPlatformPlayer* PlatformPlayer); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.OnPartyIDChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyStateChanged(struct UPlatformPlayer* PlatformPlayer); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.OnPartyStateChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleDisplayNameChanged(struct FDisplayName& DisplayName); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.HandleDisplayNameChanged // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleMatchMapChanged(struct UPlatformPlayer* PlatformPlayer); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.HandleMatchMapChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePresenceStateChanged(struct UPlatformPlayer* PlatformPlayer); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.HandlePresenceStateChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindPlatformPlayerListeners(); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.BindPlatformPlayerListeners // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UPlatformPlayer* GetPlatformPlayer(); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.GetPlatformPlayer // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void SetPlatformPlayer(struct UPlatformPlayer* NewValue); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.SetPlatformPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlatformPlayer(); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.UpdatePlatformPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UnbindSocialPlayerListeners(); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.UnbindSocialPlayerListeners // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindSocialPlayerListeners(); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.BindSocialPlayerListeners // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSocialPlayer(struct USocialPlayer* NewValue); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.SetSocialPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleInviteOrRequestChanged(struct UPartyMessageModel* PartyInviteModel); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.HandleInviteOrRequestChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Is Friend(); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.Update Is Friend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetInviteBarVisibility(bool InviteBarVisible); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.SetInviteBarVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetNoteVisibility(); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.SetNoteVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsPlayerPartyFull(bool& IsPartyFull); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.IsPlayerPartyFull // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HasValidInviteOrRequest(bool& HasInvite, bool& HasValidInviteOrRequest); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.HasValidInviteOrRequest // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void PlayInviteSound(struct UPartyMessageModel* PartyMessage); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.PlayInviteSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateInviteHoverNotification(); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.UpdateInviteHoverNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyLastFilter(); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.ApplyLastFilter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyFilter(struct FString Filter); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.ApplyFilter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePartyOwner(); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.UpdatePartyOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayerName(); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.UpdatePlayerName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateStatusText(); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.UpdateStatusText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeWidget(); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.InitializeWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnInviteAcceptFailure(struct FString ReasonStringInDebugOnly); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.OnInviteAcceptFailure // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Noop(); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.Noop // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_SocialPlayerWidget_Base(int32_t EntryPoint); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.ExecuteUbergraph_SocialPlayerWidget_Base // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnFriendClicked__DelegateSignature(struct USocialPlayerWidget_Base_C* PlayerWidget); // Function SocialPlayerWidget_Base.SocialPlayerWidget_Base_C.OnFriendClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

