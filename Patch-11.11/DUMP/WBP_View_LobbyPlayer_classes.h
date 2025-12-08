// WidgetBlueprintGeneratedClass WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C
// Size: 0x1ba0 (Inherited: 0x1ae0)
struct UWBP_View_LobbyPlayer_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* FocusOff; // 0x1ae8(0x08)
	struct UWidgetAnimation* Press; // 0x1af0(0x08)
	struct UWidgetAnimation* FocusOn; // 0x1af8(0x08)
	struct UWBP_ContextMenuAnchor_SocialPlayer_C* ContextMenuAnchor; // 0x1b00(0x08)
	struct UAresButtonImageComponent* ImgLobbyInvite; // 0x1b08(0x08)
	struct UMenuAnchor* PCPingHoverAnchor; // 0x1b10(0x08)
	struct USizeBox* SizeBox_PlayerEXPBoost; // 0x1b18(0x08)
	struct USizeBox* SizeBox_Root; // 0x1b20(0x08)
	struct UWBP_LobbyPartyMemberPing_C* WBP_LobbyPartyMemberPing; // 0x1b28(0x08)
	struct UWBP_View_PlayerCardLarge_C* WBP_View_PlayerCardLarge; // 0x1b30(0x08)
	struct UWBP_VoiceSpeakerButton_Diamond_Console_C* WBP_VoiceSpeakerButton_Diamond_Console; // 0x1b38(0x08)
	struct UWBP_VoiceSpeakerButton_Icon_Desktop_C* WBP_VoiceSpeakerButton_Icon_Desktop; // 0x1b40(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x1b48(0x08)
	struct FVector2D Size; // 0x1b50(0x10)
	struct UVM_Ping_C* PingViewModel; // 0x1b60(0x08)
	bool bIsLocalPlayer; // 0x1b68(0x01)
	char pad_1B69[0x3]; // 0x1b69(0x03)
	int32_t EmptyIndex; // 0x1b6c(0x04)
	int32_t FilledIndex; // 0x1b70(0x04)
	bool bIsPlayerSlotEmpty; // 0x1b74(0x01)
	char pad_1B75[0x3]; // 0x1b75(0x03)
	struct FAresConditionalInputAction ConfirmHover; // 0x1b78(0x28)

	void OnMouseLeftPingPopupWindow(); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.OnMouseLeftPingPopupWindow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UUserWidget* GetPingPopupMenuContent(); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.GetPingPopupMenuContent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitLocalPlayerOnComponents(); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.InitLocalPlayerOnComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetEXPBoostVisibility(bool IsLocalPlayer); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.SetEXPBoostVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePingMaterialChanged(struct UMaterialInstanceDynamic* NewPingMaterial); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.HandlePingMaterialChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OpenPlayerContextMenu(); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.OpenPlayerContextMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateInviteVisualFocusState(bool Focused); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.UpdateInviteVisualFocusState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayerCardVisualFocusState(); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.UpdatePlayerCardVisualFocusState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindPingButton(bool Bind); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.BindPingButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindVoiceStatusButton(bool Bind); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.BindVoiceStatusButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindPlayerCardButton(bool Bind); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.BindPlayerCardButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindButtons(bool Bind); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.BindButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OpenInviteMenu(); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.OpenInviteMenu // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPingViewModel(struct UVM_Ping_C* NewViewModel); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.SetPingViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindPingViewModel(bool Bind); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.BindPingViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakePingViewModel(); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.MakePingViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitViewModels(); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.InitViewModels // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayerCardToBeEmpty(); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.UpdatePlayerCardToBeEmpty // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayerCardForSubject(struct FString Subject); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.UpdatePlayerCardForSubject // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSubject(struct FString Subject); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.SetSubject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePingChanged(int32_t NewPing); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.HandlePingChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePingButtonPressed(struct UCommonButtonBase* Button); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.HandlePingButtonPressed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSize(struct FVector2D Size); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.SetSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLobbyPlayerClicked(struct UCommonButtonBase* Button); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.OnLobbyPlayerClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnVoiceButtonHovered(struct UCommonButtonBase* Button); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.OnVoiceButtonHovered // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnVoiceButtonUnhovered(struct UCommonButtonBase* Button); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.OnVoiceButtonUnhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_View_LobbyPlayer_WBP_LobbyPartyMemberPing_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.BndEvt__WBP_View_LobbyPlayer_WBP_LobbyPartyMemberPing_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_View_LobbyPlayer_WBP_LobbyPartyMemberPing_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.BndEvt__WBP_View_LobbyPlayer_WBP_LobbyPartyMemberPing_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BP_OnTransitionPressed(); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.BP_OnTransitionPressed // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_View_LobbyPlayer(int32_t EntryPoint); // Function WBP_View_LobbyPlayer.WBP_View_LobbyPlayer_C.ExecuteUbergraph_WBP_View_LobbyPlayer // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

