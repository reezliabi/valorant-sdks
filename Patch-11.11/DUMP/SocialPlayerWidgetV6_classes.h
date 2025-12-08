// WidgetBlueprintGeneratedClass SocialPlayerWidgetV6.SocialPlayerWidgetV6_C
// Size: 0x448 (Inherited: 0x379)
struct USocialPlayerWidgetV6_C : USocialPlayerWidget_Base_C {
	char pad_379[0x7]; // 0x379(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct USocialPanelPlayerNameIdentitySourceViewModel* SocialPanelPlayerNameIdentitySourceViewModel; // 0x388(0x08)
	struct UWidgetAnimation* Outro; // 0x390(0x08)
	struct UWidgetAnimation* Intro; // 0x398(0x08)
	struct UWBP_ContextMenuAnchor_SocialPlayer_C* ContextMenuAnchor; // 0x3a0(0x08)
	struct UOverlay* EditFriendNoteContainer; // 0x3a8(0x08)
	struct UMenuAnchor* HovercardMenuAnchor; // 0x3b0(0x08)
	struct UImage* ImageBackground; // 0x3b8(0x08)
	struct UImage* ImageHoverGradient; // 0x3c0(0x08)
	struct UImage* ImageLeaderIcon; // 0x3c8(0x08)
	struct UImage* OnlineStatusBar; // 0x3d0(0x08)
	struct UOverlay* OnlineStatusBar_Overlay; // 0x3d8(0x08)
	struct UPlayerCardWithPresenceStatus_C* PlayerCardWithPresenceStatus; // 0x3e0(0x08)
	struct UButton* PlayerNoteButton; // 0x3e8(0x08)
	struct UTextBlock* PresenceText; // 0x3f0(0x08)
	struct UWBP_IdentitySourceIcon_C* WBP_IdentitySourceIcon; // 0x3f8(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x400(0x08)
	struct UVM_PlayerPrimaryIdentitySource_C* PlayerPrimaryIdentitySourceViewModel; // 0x408(0x08)
	bool IsEditingFriendNote; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct USocialPlayerEditNoteWidget_C* EditFriendNoteWidget; // 0x418(0x08)
	struct FString ContextMenuUpdateLockTag; // 0x420(0x10)
	struct FString FriendNoteEditorUpdateLockTag; // 0x430(0x10)
	struct UVM_PlayerPresence_C* PlayerPresenceViewModel; // 0x440(0x08)

	void ToggleEditFriendNoteDialog(); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.ToggleEditFriendNoteDialog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Show Edit Friend Note Dialog(); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.Show Edit Friend Note Dialog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DismissEditFriendNoteDialog(); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.DismissEditFriendNoteDialog // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupBinds(bool bShouldBind); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.SetupBinds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleInviteOrRequestChanged(struct UPartyMessageModel* PartyInviteModel); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.HandleInviteOrRequestChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetOrCreateEditFriendNoteWidget(struct USocialPlayerEditNoteWidget_C*& NewParam); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.GetOrCreateEditFriendNoteWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Is Friend(); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.Update Is Friend // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* On_HovercardMenuAnchor_GetMenuContent_1(); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.On_HovercardMenuAnchor_GetMenuContent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateInviteHoverNotification(); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.UpdateInviteHoverNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetInviteBarVisibility(bool InviteBarVisible); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.SetInviteBarVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePartyOwner(); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.UpdatePartyOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayerName(); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.UpdatePlayerName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateStatusText(); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.UpdateStatusText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetNoteVisibility(); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.SetNoteVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__PlayerNoteButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.BndEvt__PlayerNoteButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnEditFriendNoteCompleted(); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.OnEditFriendNoteCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEditFriendNoteRequested(); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.OnEditFriendNoteRequested // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSocialPanelOpenStateChanged(bool bSocialPanelIsOpen); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.OnSocialPanelOpenStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFriendNoteRestrictionChanged(bool NewValue); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.OnFriendNoteRestrictionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePlayerPlatformTypeChanged(struct UPlatformPlayer* PlatformPlayer); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.HandlePlayerPlatformTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void HandlePrimaryIdentitySourceChanged(enum class EAresIdentitySource PrimaryIdentitySource); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.HandlePrimaryIdentitySourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPresenceStateChanged(); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.OnPresenceStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__SocialPlayerWidgetV6_WBP_ContextMenuAnchor_SocialPlayer_K2Node_ComponentBoundEvent_2_OnContextMenuOpenChanged__DelegateSignature(bool bIsOpen); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.BndEvt__SocialPlayerWidgetV6_WBP_ContextMenuAnchor_SocialPlayer_K2Node_ComponentBoundEvent_2_OnContextMenuOpenChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerNameIdentitySourceChanged(enum class EAresIdentitySource PlayerNameIdentitySource); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.OnPlayerNameIdentitySourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_SocialPlayerWidgetV6(int32_t EntryPoint); // Function SocialPlayerWidgetV6.SocialPlayerWidgetV6_C.ExecuteUbergraph_SocialPlayerWidgetV6 // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

