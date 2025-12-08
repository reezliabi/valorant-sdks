// WidgetBlueprintGeneratedClass WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C
// Size: 0x610 (Inherited: 0x402)
struct UWBP_Panel_VoiceIndicator_HUD_C : UWBP_Panel_VoiceIndicator_Base_C {
	char pad_402[0x6]; // 0x402(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UWidgetAnimation* Anim_Appear; // 0x410(0x08)
	struct UBorder* Border_Content; // 0x418(0x08)
	struct UBorder* Border_DetailTextTint; // 0x420(0x08)
	struct UImage* Image_AgentPortrait; // 0x428(0x08)
	struct UImage* Image_Soundwaves; // 0x430(0x08)
	struct UImage* Image_SoundwavesFlipbook; // 0x438(0x08)
	struct UScaleBox* ScaleBox_DetailText; // 0x440(0x08)
	struct USizeBox* SizeBox_PlayerIcon; // 0x448(0x08)
	struct UAresCommonRichText* Text_Details; // 0x450(0x08)
	struct UVerticalBox* VerticalBox_Text; // 0x458(0x08)
	struct UWBP_Panel_PlayerCardImage_C* WBP_Panel_PlayerCardImage; // 0x460(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x468(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_PlayerIcon; // 0x470(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Soundwaves; // 0x478(0x08)
	double ContentUpdateInterval; // 0x480(0x08)
	struct FTimerHandle ContentUpdateTimerHandle; // 0x488(0x08)
	struct FLinearColor TeamVoiceColor; // 0x490(0x10)
	struct FLinearColor PartyVoiceColor; // 0x4a0(0x10)
	struct FLinearColor AllVoiceColor; // 0x4b0(0x10)
	struct FLinearColor LocalPlayerColor; // 0x4c0(0x10)
	struct UVM_IsLocalPlayer_C* IsLocalPlayerViewModel; // 0x4d0(0x08)
	struct FString TeamVoiceStyle; // 0x4d8(0x10)
	struct FString PartyVoiceStyle; // 0x4e8(0x10)
	struct FString AllVoiceStyle; // 0x4f8(0x10)
	struct FString EnemyStyle; // 0x508(0x10)
	struct FString ObserverStyle; // 0x518(0x10)
	struct FString RestrictedStyle; // 0x528(0x10)
	struct APlayerState* PlayerState; // 0x538(0x08)
	struct AShooterPlayerState* ShooterPlayerState; // 0x540(0x08)
	struct AObserverPlayerState* ObserverPlayerState; // 0x548(0x08)
	bool bPreviewLegacyAppearance; // 0x550(0x01)
	char pad_551[0x7]; // 0x551(0x07)
	double LegacyHeight; // 0x558(0x08)
	struct FLinearColor LegacyDefaultColor; // 0x560(0x10)
	struct FLinearColor LegacyAllyColor; // 0x570(0x10)
	struct FLinearColor LegacyEnemyColor; // 0x580(0x10)
	struct FLinearColor LegacyObserverColor; // 0x590(0x10)
	struct FLinearColor LegacyRestrictedColor; // 0x5a0(0x10)
	struct FString LegacyDetailStyle; // 0x5b0(0x10)
	struct UDataTable* LegacyTextStyleSet; // 0x5c0(0x08)
	bool bIsUsingLegacyAppearance; // 0x5c8(0x01)
	char pad_5C9[0x7]; // 0x5c9(0x07)
	struct UMaterialInterface* SoundwavesMaterial; // 0x5d0(0x08)
	struct FName SoundwavesYOffsetParameterName; // 0x5d8(0x0c)
	struct FName SoundwavesSpeedParameterName; // 0x5e4(0x0c)
	double SoundwavesYOffsetMin; // 0x5f0(0x08)
	double SoundwavesYOffsetMax; // 0x5f8(0x08)
	double SoundwavesSpeedMin; // 0x600(0x08)
	double SoundwavesSpeedMax; // 0x608(0x08)

	void InitializeSoundwaves(); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.InitializeSoundwaves // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FormatDetailText(struct FText StatusText, struct FString StatusStyle, struct FText ChannelText, struct FString ChannelStyle, struct FText& DetailText); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.FormatDetailText // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ApplyConsoleAppearance(); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.ApplyConsoleAppearance // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CacheIsUsingLegacyAppearance(); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.CacheIsUsingLegacyAppearance // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FormatStatusText(struct FText Text, struct FText& Return Value); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.FormatStatusText // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ClearContentUpdateTimer(); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.ClearContentUpdateTimer // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StartContentUpdateTimer(); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.StartContentUpdateTimer // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetPlayerTeamAlignment(bool& LocalPlayerIsObserver, bool& PlayerIsEnemyOfLocalPlayer); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.GetPlayerTeamAlignment // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetLegacyDetailColor(struct FLinearColor& Return Value); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.GetLegacyDetailColor // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetLegacyNameColor(struct FLinearColor& Return Value); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.GetLegacyNameColor // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	struct FLinearColor GetPlayerNameColor(); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.GetPlayerNameColor // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ApplyLegacyAppearance(); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.ApplyLegacyAppearance // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FLinearColor GetVoiceChannelColor(); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.GetVoiceChannelColor // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ClearPlayerState(); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.ClearPlayerState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ValidatePlayerState(); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.ValidatePlayerState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetVoiceChannelTextAndStyle(struct FText& ChannelText, struct FString& ChannelStyle); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.GetVoiceChannelTextAndStyle // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetStatusTextAndStyle(struct FText& StatusText, struct FString& StatusStyle); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.GetStatusTextAndStyle // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindOrUnbindViewModels(bool bDoBind); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.BindOrUnbindViewModels // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetObservedPlayer(struct FString PlayerSubject); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayerName(); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.UpdatePlayerName // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayerIcon(); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.UpdatePlayerIcon // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSoundwaves(); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.UpdateSoundwaves // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateContent(); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.UpdateContent // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateDesignTimeContent(); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.UpdateDesignTimeContent // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateVisibility(); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.UpdateVisibility // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsSpeakingChanged(bool bIsSpeaking); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.HandleIsSpeakingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsPTTPressedChanged(bool bIsPTTPressed); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.HandleIsPTTPressedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsRestrictedChanged(bool bIsRestricted); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.HandleIsRestrictedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleEnergyChanged(int32_t Energy, float NormalizedEnergy); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.HandleEnergyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsLocalPlayerChanged(bool bIsLocalPlayer); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.HandleIsLocalPlayerChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_VoiceIndicator_HUD(int32_t EntryPoint); // Function WBP_Panel_VoiceIndicator_HUD.WBP_Panel_VoiceIndicator_HUD_C.ExecuteUbergraph_WBP_Panel_VoiceIndicator_HUD // (Final|UbergraphFunction) // @ game+0x19be2f0
};

