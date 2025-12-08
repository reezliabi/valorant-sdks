// WidgetBlueprintGeneratedClass PlayScreenCustomPartyMemberListing.PlayScreenCustomPartyMemberListing_C
// Size: 0x400 (Inherited: 0x318)
struct UPlayScreenCustomPartyMemberListing_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* HoverArrow; // 0x320(0x08)
	struct UImage* Arrow; // 0x328(0x08)
	struct UBorder* Border_2; // 0x330(0x08)
	struct UWBP_ContextMenuAnchor_SocialPlayer_C* ContextMenuAnchor; // 0x338(0x08)
	struct UDynamicConfigSwitcher_C* DynamicConfigSwitcher; // 0x340(0x08)
	struct UImage* HoverBacking; // 0x348(0x08)
	struct UButton* JoinTeamButton; // 0x350(0x08)
	struct UImage* OwnerIcon; // 0x358(0x08)
	struct UTextBlock* PingText; // 0x360(0x08)
	struct UImage* PlayerBar; // 0x368(0x08)
	struct UPlayerCard_C* PlayerCard; // 0x370(0x08)
	struct UHorizontalBox* PlayerInfo; // 0x378(0x08)
	struct USizeBox* SizeBox_VoiceIndicator; // 0x380(0x08)
	struct UTextBlock* StatusText; // 0x388(0x08)
	struct UImage* TeamBorder; // 0x390(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x398(0x08)
	struct UWBP_VoiceSpeakerButton_Icon_Desktop_C* WBP_VoiceSpeakerButton_Icon_Desktop; // 0x3a0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x3a8(0x08)
	struct UOverlay* WithoutPlayer; // 0x3b0(0x08)
	struct UOverlay* WithPlayer; // 0x3b8(0x08)
	struct UAresContextMenuActionBaseWidget* KickButton; // 0x3c0(0x08)
	struct UAresContextMenuActionBaseWidget* ReportButton; // 0x3c8(0x08)
	struct UPartyPlayerModel* Model; // 0x3d0(0x08)
	struct UPartyViewController* Controller; // 0x3d8(0x08)
	struct UPartyModel* PartyModel; // 0x3e0(0x08)
	enum class ECustomGameTeam Team; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct UPlatformPlayer* PlatformPlayer; // 0x3f0(0x08)
	struct UPartyMemberDragWidget_C* DraggedWidget; // 0x3f8(0x08)

	void SetParentListIndex(); // Function PlayScreenCustomPartyMemberListing.PlayScreenCustomPartyMemberListing_C.SetParentListIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function PlayScreenCustomPartyMemberListing.PlayScreenCustomPartyMemberListing_C.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function PlayScreenCustomPartyMemberListing.PlayScreenCustomPartyMemberListing_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePing(struct FString GamePod); // Function PlayScreenCustomPartyMemberListing.PlayScreenCustomPartyMemberListing_C.UpdatePing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBackgroundColor(struct FLinearColor InContentColorAndOpacity); // Function PlayScreenCustomPartyMemberListing.PlayScreenCustomPartyMemberListing_C.SetBackgroundColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayerNameText(); // Function PlayScreenCustomPartyMemberListing.PlayScreenCustomPartyMemberListing_C.UpdatePlayerNameText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateStatusText(struct UPlatformPlayer* PlatformPlayer); // Function PlayScreenCustomPartyMemberListing.PlayScreenCustomPartyMemberListing_C.UpdateStatusText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayerBarColor(); // Function PlayScreenCustomPartyMemberListing.PlayScreenCustomPartyMemberListing_C.UpdatePlayerBarColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTeamChange(enum class ECustomGameTeam PlayerTeam); // Function PlayScreenCustomPartyMemberListing.PlayScreenCustomPartyMemberListing_C.OnTeamChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayerCard(); // Function PlayScreenCustomPartyMemberListing.PlayScreenCustomPartyMemberListing_C.UpdatePlayerCard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateIsOwner(bool IsOwner); // Function PlayScreenCustomPartyMemberListing.PlayScreenCustomPartyMemberListing_C.UpdateIsOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemovePlayer(struct UPartyPlayerModel* Player); // Function PlayScreenCustomPartyMemberListing.PlayScreenCustomPartyMemberListing_C.RemovePlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HasPlayer(bool& HasPlayer); // Function PlayScreenCustomPartyMemberListing.PlayScreenCustomPartyMemberListing_C.HasPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Init(struct UPartyViewController* ViewController); // Function PlayScreenCustomPartyMemberListing.PlayScreenCustomPartyMemberListing_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPlayer(struct UPartyPlayerModel* Player, int32_t PlayerPosition); // Function PlayScreenCustomPartyMemberListing.PlayScreenCustomPartyMemberListing_C.SetPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__JoinTeamButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function PlayScreenCustomPartyMemberListing.PlayScreenCustomPartyMemberListing_C.BndEvt__JoinTeamButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__JoinTeamButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function PlayScreenCustomPartyMemberListing.PlayScreenCustomPartyMemberListing_C.BndEvt__JoinTeamButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__JoinTeamButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function PlayScreenCustomPartyMemberListing.PlayScreenCustomPartyMemberListing_C.BndEvt__JoinTeamButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerListingDropped(struct UDragDropOperation* DragOperation); // Function PlayScreenCustomPartyMemberListing.PlayScreenCustomPartyMemberListing_C.OnPlayerListingDropped // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_PlayScreenCustomPartyMemberListing(int32_t EntryPoint); // Function PlayScreenCustomPartyMemberListing.PlayScreenCustomPartyMemberListing_C.ExecuteUbergraph_PlayScreenCustomPartyMemberListing // (Final|UbergraphFunction) // @ game+0x19be2f0
};

