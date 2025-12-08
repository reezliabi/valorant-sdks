// WidgetBlueprintGeneratedClass WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C
// Size: 0x3c8 (Inherited: 0x390)
struct UWBP_IndividualSocialSettings_Base_C : UIndividualSocialSettingsContentBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	bool IsAlly; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct AShooterPlayerState* PlayerState; // 0x3a0(0x08)
	struct FString Subject; // 0x3a8(0x10)
	struct UConfirmationModal_C* BlockPlayerConfirmationModal; // 0x3b8(0x08)
	struct UPlatformPlayer* PlatformPlayer; // 0x3c0(0x08)

	void ShowReportOptions(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.ShowReportOptions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Add Context Menu Actions(struct UContextMenu_C* ContextMenu); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.Add Context Menu Actions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreatePremierTeamReportWidget(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.CreatePremierTeamReportWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Report Button(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.Update Report Button // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitBlockPlayerButton(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.InitBlockPlayerButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool GetIsBlocked(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.GetIsBlocked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateBlockPlayerButton(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.UpdateBlockPlayerButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleBlockUpdated(bool IsBlocked); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.HandleBlockUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAddFriendButton(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.UpdateAddFriendButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitMutePingsCheck(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.InitMutePingsCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsMutedChanged(bool OnIsMuted); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.OnIsMutedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAcceptInviteButton(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.UpdateAcceptInviteButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTextChatMuteBtn(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.UpdateTextChatMuteBtn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateChatMuteTooltip(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.UpdateChatMuteTooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateReportWidget(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.CreateReportWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateVoiceMuteTooltip(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.UpdateVoiceMuteTooltip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsMe(bool& IsMe); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.IsMe // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateVoiceSlider(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.UpdateVoiceSlider // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateVoiceChatMuteBtn(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.UpdateVoiceChatMuteBtn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAddToPartyButton(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.UpdateAddToPartyButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayerNameText(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.UpdatePlayerNameText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCharacterNameText(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.UpdateCharacterNameText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCharacterIcon(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.UpdateCharacterIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Noop(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.Noop // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnError(struct FString ReasonStringInDebugOnly); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.OnError // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyMembersChanged(struct UPartyPlayerModel* Player); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.OnPartyMembersChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent_1(struct UVoiceSessionParticipantModel* VoiceSessionParticipant); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnParticipantChange_Event_1(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.OnParticipantChange_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInvitesChanged(struct UPartyMessageModel* PartyInviteModel); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.OnInvitesChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SettingChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.SettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFriendsChanged(struct USocialPlayer* SocialPlayer); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.OnFriendsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AcceptInviteButton_OnClicked(struct USharedTertiaryButtonText_C* TextButton); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.AcceptInviteButton_OnClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddToParty_OnClicked(struct USharedTertiaryButtonText_C* TextButton); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.AddToParty_OnClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PingsMuteCheck_Changed(bool bIsChecked); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.PingsMuteCheck_Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReportButton_OnClicked(struct USharedTertiaryButtonText_C* TextButton); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.ReportButton_OnClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TextChatMuteEvent(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.TextChatMuteEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TextMuteCheck_StateChanged(bool bIsChecked); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.TextMuteCheck_StateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void VoiceMuteCheck_OnStateChanged(bool bIsChecked); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.VoiceMuteCheck_OnStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void VolumeSetSlider_OnValueChanged(float Value); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.VolumeSetSlider_OnValueChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void VolumeSetSlider_OnMouseCaptureEnd(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.VolumeSetSlider_OnMouseCaptureEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddFriendButton_OnClicked(struct USharedTertiaryButtonText_C* TextButton); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.AddFriendButton_OnClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BlockPlayerButton_OnClicked(struct USharedTertiaryButtonText_C* TextButton); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.BlockPlayerButton_OnClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBlockConfirmationModalConfirmed(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.OnBlockConfirmationModalConfirmed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBlockConfirmationModalCancelled(); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.OnBlockConfirmationModalCancelled // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_IndividualSocialSettings_Base(int32_t EntryPoint); // Function WBP_IndividualSocialSettings_Base.WBP_IndividualSocialSettings_Base_C.ExecuteUbergraph_WBP_IndividualSocialSettings_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

