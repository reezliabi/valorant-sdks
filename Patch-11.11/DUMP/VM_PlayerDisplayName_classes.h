// BlueprintGeneratedClass VM_PlayerDisplayName.VM_PlayerDisplayName_C
// Size: 0x1c8 (Inherited: 0x98)
struct UVM_PlayerDisplayName_C : UVM_PlatformPlayerObserver_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	struct FMulticastInlineDelegate OnPlayerNameChanged; // 0xa0(0x10)
	struct FText PlayerName; // 0xb0(0x18)
	struct FText PlayerTag; // 0xc8(0x18)
	struct FText RiotTag; // 0xe0(0x18)
	struct FText RiotName; // 0xf8(0x18)
	struct FText PlayStationName; // 0x110(0x18)
	struct FText XboxName; // 0x128(0x18)
	struct FMulticastInlineDelegate OnPlayerTagChanged; // 0x140(0x10)
	enum class EAresIdentitySource IdentitySource; // 0x150(0x01)
	bool Allow Anonymized Names; // 0x151(0x01)
	char pad_152[0x6]; // 0x152(0x06)
	struct FText XboxTag; // 0x158(0x18)
	struct FMulticastInlineDelegate OnPlayerPrefixChanged; // 0x170(0x10)
	struct FText PlayerPrefix; // 0x180(0x18)
	struct FText RiotPrefix; // 0x198(0x18)
	struct FText QQName; // 0x1b0(0x18)

	void HandleQQNameChanged(struct FString NewQQName); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.HandleQQNameChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetQQName(struct FText NewQQName); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.SetQQName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRiotPrefix(struct FText NewRiotPrefix); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.SetRiotPrefix // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePrefixChanged(struct UPlatformPlayer* PlatformPlayer); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.HandlePrefixChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPlayerPrefix(struct FText NewPrefix); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.SetPlayerPrefix // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleXboxTagChanged(struct FString NewValue); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.HandleXboxTagChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIdentitySource(enum class EAresIdentitySource NewIdentitySource); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.SetIdentitySource // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetFormattedDisplayName(struct FText& DisplayName); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.GetFormattedDisplayName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HandleRiotNameChanged(struct FDisplayName& DisplayName); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.HandleRiotNameChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshRiotNameAndTag(); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.RefreshRiotNameAndTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshPlayerNameAndTag(); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.RefreshPlayerNameAndTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UnbindFromPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.UnbindFromPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.BindToPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshAllData(); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.RefreshAllData // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAllowAnonymizedNames(bool InAllowAnonymizedNames); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.SetAllowAnonymizedNames // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetXboxTag(struct FText NewTag); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.SetXboxTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetXboxName(struct FText NewName); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.SetXboxName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPlayStationName(struct FText NewName); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.SetPlayStationName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRiotTag(struct FText NewRiotTag); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.SetRiotTag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRiotName(struct FText NewRiotName); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.SetRiotName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPlayerTag(struct FText NewPlayerTag); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.SetPlayerTag // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPlayerName(struct FText NewPlayerName); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.SetPlayerName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePlayStationNameChanged(struct FString NewName); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.HandlePlayStationNameChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleXboxNameChanged(struct FString NewName); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.HandleXboxNameChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshBroadcast(); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_PlayerDisplayName(int32_t EntryPoint); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.ExecuteUbergraph_VM_PlayerDisplayName // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnPlayerPrefixChanged__DelegateSignature(struct FText OutPlayerPrefix); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.OnPlayerPrefixChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerTagChanged__DelegateSignature(struct FText OutPlayerTag); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.OnPlayerTagChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerNameChanged__DelegateSignature(struct FText OutPlayerName); // Function VM_PlayerDisplayName.VM_PlayerDisplayName_C.OnPlayerNameChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

