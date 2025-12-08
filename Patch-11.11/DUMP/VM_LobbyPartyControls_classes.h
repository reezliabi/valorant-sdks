// BlueprintGeneratedClass VM_LobbyPartyControls.VM_LobbyPartyControls_C
// Size: 0x4c8 (Inherited: 0xa0)
struct UVM_LobbyPartyControls_C : UAresPartyViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct FMulticastInlineDelegate PartyInformationUpdated; // 0xa8(0x10)
	struct FAresParty CurrentParty; // 0xb8(0x3b8)
	int32_t PartyCount; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct FMulticastInlineDelegate PartyCountUpdated; // 0x478(0x10)
	struct FMulticastInlineDelegate OnPartyLeft; // 0x488(0x10)
	struct FMulticastInlineDelegate PartyAccessibilityChanged; // 0x498(0x10)
	struct FDateTime PartyAccessibilityLastInputAt; // 0x4a8(0x08)
	bool ShouldTriggerAccessibilityToggleTimedEvent; // 0x4b0(0x01)
	enum class EAresPartyAccessibility StoredAccessibility; // 0x4b1(0x01)
	bool bIsPartyOwner; // 0x4b2(0x01)
	char pad_4B3[0x5]; // 0x4b3(0x05)
	struct FMulticastInlineDelegate OnPartyOwnerChanged; // 0x4b8(0x10)

	void InternalRefreshBroadcast(); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.InternalRefreshBroadcast // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsOwner(bool IsPartyOwner); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.SetIsOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetAccessibilityInputBuffer(double& InputBuffer); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.GetAccessibilityInputBuffer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Set Stored Party Accessibility(); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.Set Stored Party Accessibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPartyAccessibility(enum class EAresPartyAccessibility NewAccessibility); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.SetPartyAccessibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldUpdatePartyAccessibility(bool& ShouldUpdatePartyAccessibility); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.ShouldUpdatePartyAccessibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void TimedEventUpdatePartyAccessibility(); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.TimedEventUpdatePartyAccessibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePartyPreferredGamepodsUpdated(); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.HandlePartyPreferredGamepodsUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnConvertToMatchmadePartyFail(enum class EPartyErrorEnum PartyErrorEnum); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.OnConvertToMatchmadePartyFail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnConvertToMatchmadePartySuccess(); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.OnConvertToMatchmadePartySuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnConvertToCustomPartyFail(enum class EPartyErrorEnum PartyErrorEnum); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.OnConvertToCustomPartyFail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnConvertToCustomPartySuccess(); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.OnConvertToCustomPartySuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ConvertToMatchmadeParty(); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.ConvertToMatchmadeParty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ConvertToCustomParty(); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.ConvertToCustomParty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void NavigateToPartyLobby(); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.NavigateToPartyLobby // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAccessibilityRequestCompleted(); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.SetAccessibilityRequestCompleted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TogglePartyAccessibilityDirectly(); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.TogglePartyAccessibilityDirectly // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TogglePartyAccessibility(bool IsExecutedByTimedEvent); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.TogglePartyAccessibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleLeaveParty(); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.HandleLeaveParty // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RequestLeaveParty(); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.RequestLeaveParty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	int32_t GetPartySize(struct FAresParty& AresParty); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.GetPartySize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HandleToggleAccessibilityButtonPressed(struct UCommonButtonBase* Button); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.HandleToggleAccessibilityButtonPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleLeavePartyButtonPressed(struct UCommonButtonBase* Button); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.HandleLeavePartyButtonPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyInformationUpdated(struct FAresParty Party); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.OnPartyInformationUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnViewModelCreated(); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void HandlePartyUpdated(); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.HandlePartyUpdated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void RefreshBroadcast(); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_LobbyPartyControls(int32_t EntryPoint); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.ExecuteUbergraph_VM_LobbyPartyControls // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnPartyOwnerChanged__DelegateSignature(bool IsPartyOwner); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.OnPartyOwnerChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PartyAccessibilityChanged__DelegateSignature(enum class EAresPartyAccessibility NewAccessibility); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.PartyAccessibilityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyLeft__DelegateSignature(); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.OnPartyLeft__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PartyCountUpdated__DelegateSignature(int32_t NewCount); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.PartyCountUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PartyInformationUpdated__DelegateSignature(struct FAresParty Party); // Function VM_LobbyPartyControls.VM_LobbyPartyControls_C.PartyInformationUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

