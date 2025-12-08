// BlueprintGeneratedClass VM_StartGame.VM_StartGame_C
// Size: 0x180 (Inherited: 0xa0)
struct UVM_StartGame_C : UAresPartyViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	bool bCanStartGame; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct UPartyModel* PartyModel; // 0xb0(0x08)
	struct FMulticastInlineDelegate OnCanStartGameChanged; // 0xb8(0x10)
	bool bRequestInProgress; // 0xc8(0x01)
	bool bPartyReady; // 0xc9(0x01)
	char pad_CA[0x6]; // 0xca(0x06)
	struct FMulticastInlineDelegate OnPartyReadyChanged; // 0xd0(0x10)
	bool IsPlayerUnverified; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct FText PartyReadyWarning; // 0xe8(0x18)
	bool bTitleUpdateAvailable; // 0x100(0x01)
	bool bInteractionEnabled; // 0x101(0x01)
	bool bHotfixAvailable; // 0x102(0x01)
	bool bPartyIneligible; // 0x103(0x01)
	char pad_104[0x4]; // 0x104(0x04)
	struct FText QueueRestrictionWarningText; // 0x108(0x18)
	struct FDateTime QueueRestrictionExpiryTime; // 0x120(0x08)
	bool bPartyUnverified; // 0x128(0x01)
	bool LocalPlayerUnverified; // 0x129(0x01)
	char pad_12A[0x6]; // 0x12a(0x06)
	struct FText WarningText; // 0x130(0x18)
	struct FDateTime ExpiryTime; // 0x148(0x08)
	struct FText QueueRestrictionIndicatorText; // 0x150(0x18)
	struct FText QueueExpiryWarningText; // 0x168(0x18)

	void SetQueueExpiryWarningText(struct FText QueueExpiryWarningText); // Function VM_StartGame.VM_StartGame_C.SetQueueExpiryWarningText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetQueueRestrictionIndicatorText(struct FText QueueRestrictionIndicatorText); // Function VM_StartGame.VM_StartGame_C.SetQueueRestrictionIndicatorText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetQueueRestrictionWarningText(struct FText QueueRestrictionWarningText); // Function VM_StartGame.VM_StartGame_C.SetQueueRestrictionWarningText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetExpiryTime(struct FDateTime ExpiryTime); // Function VM_StartGame.VM_StartGame_C.SetExpiryTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPartyUnverified(bool bPartyUnverified); // Function VM_StartGame.VM_StartGame_C.SetPartyUnverified // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPartyIneligible(bool bPartyIneligible); // Function VM_StartGame.VM_StartGame_C.SetPartyIneligible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetHotfixAvailable(bool bHotfixAvailable); // Function VM_StartGame.VM_StartGame_C.SetHotfixAvailable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTitleUpdateAvailable(bool bTitleUpdateAvailable); // Function VM_StartGame.VM_StartGame_C.SetTitleUpdateAvailable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateWarningAndEnabledState(); // Function VM_StartGame.VM_StartGame_C.UpdateWarningAndEnabledState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPartyReadyState(bool bPartyReady, struct FText WarningText); // Function VM_StartGame.VM_StartGame_C.SetPartyReadyState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetLocalPlayerUnverified(bool NewIsPlayerUnverified); // Function VM_StartGame.VM_StartGame_C.SetLocalPlayerUnverified // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OpenVerifyModal(); // Function VM_StartGame.VM_StartGame_C.OpenVerifyModal // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetLatestCanStartGame(bool& bCanStartGame); // Function VM_StartGame.VM_StartGame_C.GetLatestCanStartGame // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdatePartyReady(); // Function VM_StartGame.VM_StartGame_C.UpdatePartyReady // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init(); // Function VM_StartGame.VM_StartGame_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateStartGameState(); // Function VM_StartGame.VM_StartGame_C.UpdateStartGameState // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToPartyModel(struct UPartyModel* NewPartyModel, bool Bind); // Function VM_StartGame.VM_StartGame_C.BindToPartyModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Refresh(); // Function VM_StartGame.VM_StartGame_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCanStartGame(bool NewCanStartGame); // Function VM_StartGame.VM_StartGame_C.SetCanStartGame // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EmptyCallback(); // Function VM_StartGame.VM_StartGame_C.EmptyCallback // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EmptyErrorCallback(enum class EPartyErrorEnum PartyErrorEnum); // Function VM_StartGame.VM_StartGame_C.EmptyErrorCallback // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RequestStartCustomGame(); // Function VM_StartGame.VM_StartGame_C.RequestStartCustomGame // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RequestStartGame(); // Function VM_StartGame.VM_StartGame_C.RequestStartGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerJoinedTeam(struct UPartyPlayerModel* Player); // Function VM_StartGame.VM_StartGame_C.OnPlayerJoinedTeam // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnViewModelCreated(); // Function VM_StartGame.VM_StartGame_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnMatchmakingChanged(bool NewValue); // Function VM_StartGame.VM_StartGame_C.OnMatchmakingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PartyStateChanged(enum class EPartyViewState PartyState); // Function VM_StartGame.VM_StartGame_C.PartyStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsEntirePartyReadyChangedEvent(bool NewValue); // Function VM_StartGame.VM_StartGame_C.OnIsEntirePartyReadyChangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshBroadcast(); // Function VM_StartGame.VM_StartGame_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_StartGame(int32_t EntryPoint); // Function VM_StartGame.VM_StartGame_C.ExecuteUbergraph_VM_StartGame // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnPartyReadyChanged__DelegateSignature(bool bIsPartyReady, struct FText WarningText); // Function VM_StartGame.VM_StartGame_C.OnPartyReadyChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCanStartGameChanged__DelegateSignature(bool NewCanStartGame); // Function VM_StartGame.VM_StartGame_C.OnCanStartGameChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

