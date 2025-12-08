// WidgetBlueprintGeneratedClass PartyInvitePanelV3.PartyInvitePanelV3_C
// Size: 0x424 (Inherited: 0x318)
struct UPartyInvitePanelV3_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Outro; // 0x320(0x08)
	struct UWidgetAnimation* Intro; // 0x328(0x08)
	struct UTextBlock* AlreadyInPartyResponse; // 0x330(0x08)
	struct UImage* DecoBot; // 0x338(0x08)
	struct UImage* DecoLeft; // 0x340(0x08)
	struct UImage* DecoRight; // 0x348(0x08)
	struct UImage* DecoTop; // 0x350(0x08)
	struct UImage* FocusTint; // 0x358(0x08)
	struct UTextBlock* HiddenResponse; // 0x360(0x08)
	struct UImage* Image_3; // 0x368(0x08)
	struct UImage* Image_5; // 0x370(0x08)
	struct UImage* Image_21; // 0x378(0x08)
	struct UImage* Image_24; // 0x380(0x08)
	struct UTextBlock* InviteError; // 0x388(0x08)
	struct UTextBlock* InviteSuccess; // 0x390(0x08)
	struct UButton* LeaveButton; // 0x398(0x08)
	struct UVerticalBox* ListingBox; // 0x3a0(0x08)
	struct UTextBlock* LookupError; // 0x3a8(0x08)
	struct UWidgetSwitcher* LookupResponseWidgetSwitcher; // 0x3b0(0x08)
	struct UEditableTextBox* SearchText; // 0x3b8(0x08)
	struct USharedButtonMaster_C* SendInviteButton; // 0x3c0(0x08)
	struct UImage* tint_bg; // 0x3c8(0x08)
	struct TMap<struct FString, struct UPartyInvitePanelListingWidget_C*> PlayerToWidgetMap; // 0x3d0(0x50)
	bool InitialListPopulationComplete; // 0x420(0x01)
	bool Exiting; // 0x421(0x01)
	bool PlayerListCanUpdate; // 0x422(0x01)
	bool DisableOnTextChangedEventHandling; // 0x423(0x01)

	void HandleInviteLookupError(enum class EPartyErrorEnum PartyErrorEnum, struct FString Description); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.HandleInviteLookupError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePlayerListInvalidated(); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.HandlePlayerListInvalidated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ComparePlatformPlayerDisplayNames(struct UObject* LHS, struct UObject* RHS, bool& LHS<RHS); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.ComparePlatformPlayerDisplayNames // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetInvitablePlayers(struct TArray<struct UPlatformPlayer*>& SortedInvitablePlayers); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.GetInvitablePlayers // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Exit(); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.Exit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddWidgetToContainer(struct UPartyInvitePanelListingWidget_C* Widget); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.AddWidgetToContainer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FilterWidget(struct UPartyInvitePanelListingWidget_C* Widget); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.FilterWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayerListImmediately(); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.UpdatePlayerListImmediately // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleInvitePlayerCompleted(); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.HandleInvitePlayerCompleted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleInvitePlayerRequested(struct UPlatformPlayer* PlayerToInvite); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.HandleInvitePlayerRequested // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveWidgetForPlayer(struct UPlatformPlayer* Player); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.RemoveWidgetForPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateWidgetForPlayer(struct UPlatformPlayer* Player, bool IsNewAddition, struct UPartyInvitePanelListingWidget_C*& NewWidget); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.CreateWidgetForPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnOutroAnimationComplete(); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.OnOutroAnimationComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIntroAnimationComplete(); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.OnIntroAnimationComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_18_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_18_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void HandleInviteSuccess(); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.HandleInviteSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleFriendWidgetInviteError(struct FString ErrorStringInDebugOnly); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.HandleFriendWidgetInviteError // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnOutroAnimationFinished(); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.OnOutroAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIntroAnimationFinished(); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.OnIntroAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__LeaveButton_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature(); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__SendInviteButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.BndEvt__SendInviteButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnPartyPlayer(struct UPartyPlayerModel* Player); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.OnPartyPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSocialUpdate(); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.OnSocialUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__SearchText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.BndEvt__SearchText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_PartyInvitePanelV3(int32_t EntryPoint); // Function PartyInvitePanelV3.PartyInvitePanelV3_C.ExecuteUbergraph_PartyInvitePanelV3 // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

