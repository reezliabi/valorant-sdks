// WidgetBlueprintGeneratedClass WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C
// Size: 0x51d (Inherited: 0x402)
struct UWBP_Panel_VoiceIndicator_SpeakerIcon_C : UWBP_Panel_VoiceIndicator_Base_C {
	char pad_402[0x6]; // 0x402(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UImage* Image_PTTIndicator; // 0x410(0x08)
	struct UImage* Image_Soundwave; // 0x418(0x08)
	struct UImage* Image_Speaker; // 0x420(0x08)
	bool bCollapseWhenNotInRoom; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct UVM_IsLocalPlayer_C* IsLocalPlayerViewModel; // 0x430(0x08)
	struct UVM_IsSelfMuted_C* IsSelfMutedViewModel; // 0x438(0x08)
	struct FSlateColor DefaultColor; // 0x440(0x14)
	struct FSlateColor PartyColor; // 0x454(0x14)
	struct FSlateColor TeamColor; // 0x468(0x14)
	struct FSlateColor RestrictedColor; // 0x47c(0x14)
	bool bCollapseWhenNotSpeaking; // 0x490(0x01)
	char pad_491[0x7]; // 0x491(0x07)
	struct UTexture2D* ConnectedSpeakerTexture; // 0x498(0x08)
	struct UTexture2D* MutedSpeakerTexture; // 0x4a0(0x08)
	struct UTexture2D* DisconnectedSpeakerTexture; // 0x4a8(0x08)
	struct UTexture2D* RestrictedSpeakerTexture; // 0x4b0(0x08)
	struct TArray<struct UTexture2D*> SoundwaveTextures; // 0x4b8(0x10)
	struct FMulticastInlineDelegate OnIsInRoomChanged; // 0x4c8(0x10)
	struct FMulticastInlineDelegate OnIsMutedChanged; // 0x4d8(0x10)
	struct FMulticastInlineDelegate OnIsRestrictedChanged; // 0x4e8(0x10)
	struct FMulticastInlineDelegate OnIsLocalPlayerChanged; // 0x4f8(0x10)
	struct FSlateColor OverrideColor; // 0x508(0x14)
	bool bHasOverrideColor; // 0x51c(0x01)

	void ClearOverrideColor(); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.ClearOverrideColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetOverrideColor(struct FSlateColor InOverrideColor); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.SetOverrideColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool GetIsLocalPlayer(); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.GetIsLocalPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	bool GetIsRestricted(); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.GetIsRestricted // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	bool GetIsMuted(); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.GetIsMuted // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	bool GetIsInRoom(); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.GetIsInRoom // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetObservedPlayer(struct FString PlayerSubject); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DeriveCurrentSoundwaveTexture(struct UTexture2D*& Out Texture, bool& bIsVisible); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.DeriveCurrentSoundwaveTexture // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetIsVisuallyMuted(bool& bIsMuted); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.GetIsVisuallyMuted // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void BindOrUnbindViewModels(bool bDoBind); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.BindOrUnbindViewModels // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DeriveCurrentSpeakerTexture(struct UTexture2D*& OutTexture); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.DeriveCurrentSpeakerTexture // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSpeakerIcon(); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.UpdateSpeakerIcon // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Colors(); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.Update Colors // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsInRoomChanged(bool bIsInRoom); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.HandleIsInRoomChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsSpeakingChanged(bool bIsSpeaking); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.HandleIsSpeakingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsMutedChanged(bool bIsMuted); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.HandleIsMutedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsRestrictedChanged(bool bIsRestricted); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.HandleIsRestrictedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsLocalPlayerChanged(bool bIsLocalPlayer); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.HandleIsLocalPlayerChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsSelfMutedChanged(bool bIsSelfMuted); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.HandleIsSelfMutedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsPTTPressedChanged(bool bIsPTTPressed); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.HandleIsPTTPressedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleEnergyChanged(int32_t Energy, float NormalizedEnergy); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.HandleEnergyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePrimaryVoiceSessionTypeChanged(enum class EVoiceSessionType PrimaryVoiceSessionType); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.HandlePrimaryVoiceSessionTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_VoiceIndicator_SpeakerIcon(int32_t EntryPoint); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.ExecuteUbergraph_WBP_Panel_VoiceIndicator_SpeakerIcon // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnIsInRoomChanged__DelegateSignature(bool bIsInRoom); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.OnIsInRoomChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsLocalPlayerChanged__DelegateSignature(bool bIsLocalPlayer); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.OnIsLocalPlayerChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsRestrictedChanged__DelegateSignature(bool bIsRestricted); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.OnIsRestrictedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsMutedChanged__DelegateSignature(bool bIsMuted); // Function WBP_Panel_VoiceIndicator_SpeakerIcon.WBP_Panel_VoiceIndicator_SpeakerIcon_C.OnIsMutedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

