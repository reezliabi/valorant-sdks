// WidgetBlueprintGeneratedClass PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C
// Size: 0x429 (Inherited: 0x318)
struct UPlayScreenSpectateMemberListing_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* hover; // 0x320(0x08)
	struct UImage* Arrow; // 0x328(0x08)
	struct UCheckBox* BroadcastHUD; // 0x330(0x08)
	struct UWBP_ContextMenuAnchor_SocialPlayer_C* ContextMenuAnchor; // 0x338(0x08)
	struct UImage* HoverBacking; // 0x340(0x08)
	struct UButton* JoinTeamButton; // 0x348(0x08)
	struct UCheckBox* ModeratorStatus; // 0x350(0x08)
	struct UImage* OwnerIcon; // 0x358(0x08)
	struct USizeBox* SizeBox_BroadcastHUD; // 0x360(0x08)
	struct USizeBox* SizeBox_ModeratorStatus; // 0x368(0x08)
	struct USizeBox* SizeBox_VoiceIndicator; // 0x370(0x08)
	struct USocialPartyMemberIcon_C* SocialPartyMemberIcon_1; // 0x378(0x08)
	struct UTextBlock* StatusText; // 0x380(0x08)
	struct UImage* TeamBorder; // 0x388(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x390(0x08)
	struct UWBP_VoiceSpeakerButton_Icon_Desktop_C* WBP_VoiceSpeakerButton_Icon_Desktop; // 0x398(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x3a0(0x08)
	bool IsSelf; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct UAresContextMenuActionBaseWidget* KickButton; // 0x3b0(0x08)
	struct UAresContextMenuActionBaseWidget* ReportButton; // 0x3b8(0x08)
	struct UPartyPlayerModel* Model; // 0x3c0(0x08)
	struct UPartyViewController* Controller; // 0x3c8(0x08)
	struct UPartyModel* PartyModel; // 0x3d0(0x08)
	struct TMap<int32_t, struct UTexture2D*> CallingCardTextures; // 0x3d8(0x50)
	enum class ECustomGameTeam Team; // 0x428(0x01)

	void UpdateStatusText(struct UPlatformPlayer* PlatformPlayer); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.UpdateStatusText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* Get_BroadcastHUD_ToolTipWidget_1(); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.Get_BroadcastHUD_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetModel(struct UPartyPlayerModel*& PlayerModel); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.GetModel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	struct UWidget* Get_ModeratorStatus_ToolTipWidget_1(); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.Get_ModeratorStatus_ToolTipWidget_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdatePlayerNameText(); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.UpdatePlayerNameText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTeamChange(enum class ECustomGameTeam PlayerTeam); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.OnTeamChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCallingCard(int32_t PlayerPosition); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.UpdateCallingCard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateIsOwner(); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.UpdateIsOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemovePlayer(struct UPartyPlayerModel* Player); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.RemovePlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HasPlayer(bool& HasPlayer); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.HasPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Init(struct UPartyViewController* ViewController); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPlayer(struct UPartyPlayerModel* Player, int32_t PlayerPosition); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.SetPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateContextButtonEnabledState(); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.UpdateContextButtonEnabledState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Is Self(bool IsSelf); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.Update Is Self // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsOwnerChanged(bool IsOwner); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.HandleIsOwnerChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__JoinTeamButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.BndEvt__JoinTeamButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__JoinTeamButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.BndEvt__JoinTeamButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__JoinTeamButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.BndEvt__JoinTeamButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ModeratorCheckboxChanged(bool bIsChecked); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.ModeratorCheckboxChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTournamentModeEnabled(bool Enabled); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.OnTournamentModeEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnModeratorStatusUpdated(bool Status); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.OnModeratorStatusUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyOwnerChanged(bool IsOwner); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.OnPartyOwnerChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnGameRuleBoolChanged(enum class EGameRuleBoolName Rule, bool Value); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.OnGameRuleBoolChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BroadcastHUDCheckboxChanged(bool bIsChecked); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.BroadcastHUDCheckboxChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBroadcastHUDStateUpdated(bool Status); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.OnBroadcastHUDStateUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_PlayScreenSpectateMemberListing(int32_t EntryPoint); // Function PlayScreenSpectateMemberListing.PlayScreenSpectateMemberListing_C.ExecuteUbergraph_PlayScreenSpectateMemberListing // (Final|UbergraphFunction) // @ game+0x19be2f0
};

