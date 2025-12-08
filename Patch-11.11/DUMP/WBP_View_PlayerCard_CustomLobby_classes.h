// WidgetBlueprintGeneratedClass WBP_View_PlayerCard_CustomLobby.WBP_View_PlayerCard_CustomLobby_C
// Size: 0x4e0 (Inherited: 0x410)
struct UWBP_View_PlayerCard_CustomLobby_C : UWBP_Panel_PlayerCard_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	struct UCustomGamePlayerViewModel* CustomGamePlayerViewModel; // 0x418(0x08)
	struct UCheckBox* BroadcastHUD; // 0x420(0x08)
	struct UHorizontalBox* HorizontalBox_Observer; // 0x428(0x08)
	struct UCheckBox* ModeratorStatus; // 0x430(0x08)
	struct USizeBox* SizeBox_BroadcastHUD; // 0x438(0x08)
	struct USizeBox* SizeBox_ModeratorStatus; // 0x440(0x08)
	struct USizeBox* SizeBox_PlayerCardImage; // 0x448(0x08)
	struct UVerticalBox* VerticalBox_PlayerInfo; // 0x450(0x08)
	struct UWBP_IdentitySourceIcon_C* WBP_IdentitySourceIcon; // 0x458(0x08)
	struct UWBP_Panel_PartyLeader_C* WBP_Panel_PartyLeader; // 0x460(0x08)
	struct UWBP_Panel_PlayerCardImage_C* WBP_Panel_PlayerCardImage; // 0x468(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x470(0x08)
	struct UWBP_Panel_PlayerPartyReadiness_C* WBP_Panel_PlayerPartyReadiness; // 0x478(0x08)
	struct UCommonTextStyle* ReadyFocusedTextStyle; // 0x480(0x08)
	struct UCommonTextStyle* PlayerNameTextStyle; // 0x488(0x08)
	struct UCommonTextStyle* LocalPlayerNameTextStyle; // 0x490(0x08)
	struct UVM_PlayerPrimaryIdentitySource_C* PlayerPrimaryIdentitySourceViewModel; // 0x498(0x08)
	struct FString PlayerNameTextStyleTag; // 0x4a0(0x10)
	struct FString LocalPlayerNameTextStyleTag; // 0x4b0(0x10)
	struct FLinearColor PartyLeaderIconColor; // 0x4c0(0x10)
	struct FLinearColor LocalPartyLeaderIconColor; // 0x4d0(0x10)

	void CreateModeratorOptionTooltipWidget(); // Function WBP_View_PlayerCard_CustomLobby.WBP_View_PlayerCard_CustomLobby_C.CreateModeratorOptionTooltipWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateBroadcastHUDOptionTooltipWidget(); // Function WBP_View_PlayerCard_CustomLobby.WBP_View_PlayerCard_CustomLobby_C.CreateBroadcastHUDOptionTooltipWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleUsingBroadcastHUDChanged(bool NewValue); // Function WBP_View_PlayerCard_CustomLobby.WBP_View_PlayerCard_CustomLobby_C.HandleUsingBroadcastHUDChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsModeratorChanged(bool NewValue); // Function WBP_View_PlayerCard_CustomLobby.WBP_View_PlayerCard_CustomLobby_C.HandleIsModeratorChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePlayerPrimaryIdentitySourceChanged(enum class EAresIdentitySource PrimaryIdentitySource); // Function WBP_View_PlayerCard_CustomLobby.WBP_View_PlayerCard_CustomLobby_C.HandlePlayerPrimaryIdentitySourceChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindViewModelEvents(bool bDoBind); // Function WBP_View_PlayerCard_CustomLobby.WBP_View_PlayerCard_CustomLobby_C.BindViewModelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetHasValidPresence(bool bHasValidPresence); // Function WBP_View_PlayerCard_CustomLobby.WBP_View_PlayerCard_CustomLobby_C.SetHasValidPresence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetShowPlayerCardImage(bool bShowPlayerCardImage); // Function WBP_View_PlayerCard_CustomLobby.WBP_View_PlayerCard_CustomLobby_C.SetShowPlayerCardImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsLocalPlayer(bool bIsLocalPlayer); // Function WBP_View_PlayerCard_CustomLobby.WBP_View_PlayerCard_CustomLobby_C.SetIsLocalPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsVisuallyFocused(bool bIsVisuallyFocused); // Function WBP_View_PlayerCard_CustomLobby.WBP_View_PlayerCard_CustomLobby_C.SetIsVisuallyFocused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPlayerSubject(struct FString PlayerSubject); // Function WBP_View_PlayerCard_CustomLobby.WBP_View_PlayerCard_CustomLobby_C.SetPlayerSubject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayerNameTextStyle(); // Function WBP_View_PlayerCard_CustomLobby.WBP_View_PlayerCard_CustomLobby_C.UpdatePlayerNameTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateReadyTextStyle(); // Function WBP_View_PlayerCard_CustomLobby.WBP_View_PlayerCard_CustomLobby_C.UpdateReadyTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function WBP_View_PlayerCard_CustomLobby.WBP_View_PlayerCard_CustomLobby_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_View_PlayerCard_CustomLobby.WBP_View_PlayerCard_CustomLobby_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_View_PlayerCard_CustomLobby_ModeratorStatus_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function WBP_View_PlayerCard_CustomLobby.WBP_View_PlayerCard_CustomLobby_C.BndEvt__WBP_View_PlayerCard_CustomLobby_ModeratorStatus_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_View_PlayerCard_CustomLobby_BroadcastHUD_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function WBP_View_PlayerCard_CustomLobby.WBP_View_PlayerCard_CustomLobby_C.BndEvt__WBP_View_PlayerCard_CustomLobby_BroadcastHUD_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_View_PlayerCard_CustomLobby(int32_t EntryPoint); // Function WBP_View_PlayerCard_CustomLobby.WBP_View_PlayerCard_CustomLobby_C.ExecuteUbergraph_WBP_View_PlayerCard_CustomLobby // (Final|UbergraphFunction) // @ game+0x19be2f0
};

