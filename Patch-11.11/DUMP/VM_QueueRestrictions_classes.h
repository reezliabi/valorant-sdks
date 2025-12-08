// BlueprintGeneratedClass VM_QueueRestrictions.VM_QueueRestrictions_C
// Size: 0x170 (Inherited: 0xa0)
struct UVM_QueueRestrictions_C : UAresPartyViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct FDateTime PartyQueueRestrictionExpiry; // 0xa8(0x08)
	bool PartyAnyIneligible; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FText PartyQueueWarningText; // 0xb8(0x18)
	struct FText PartyQueueIndicatorText; // 0xd0(0x18)
	struct TArray<struct FString> PartyQueueIneligiblePuuids; // 0xe8(0x10)
	struct TArray<struct FString> PartyQueueRestrictedPuuids; // 0xf8(0x10)
	struct UPartyModel* PartyModel; // 0x108(0x08)
	struct FMulticastInlineDelegate OnPartyQueueRestrictionExpiryChanged; // 0x110(0x10)
	struct URestrictionsManager* RestrictionsManager; // 0x120(0x08)
	struct FMulticastInlineDelegate OnPartyQueueRestrictionEligibilityChanged; // 0x128(0x10)
	struct FMulticastInlineDelegate OnPartyQueueRestrictionIndicatorChanged; // 0x138(0x10)
	struct FMulticastInlineDelegate OnPartyQueueRestrictionUnverifiedChanged; // 0x148(0x10)
	bool PartyAnyUnverified; // 0x158(0x01)
	bool IsLocalPlayerUnverified; // 0x159(0x01)
	char pad_15A[0x6]; // 0x15a(0x06)
	struct FMulticastInlineDelegate OnLocalPlayerUnverifiedChanged; // 0x160(0x10)

	void GetCNAntiAddictionText(struct FString QueueID, struct FText& WarningText); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.GetCNAntiAddictionText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void IsMFAEnabled(bool& IsMFAEnabled); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.IsMFAEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateLocalPlayerUnverified(); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.UpdateLocalPlayerUnverified // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Local Player Unverified(bool NewLocalPlayerUnverified); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.Set Local Player Unverified // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetQueueUnverifiedText(struct TArray<struct FString>& QueueUnverifiedNames, struct FText& ReturnText); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.GetQueueUnverifiedText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Set Party Queue Restriction Unverified(bool AnyUnverified); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.Set Party Queue Restriction Unverified // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyMemberLoopstateChanged(struct UPlatformPlayer* PlatformPlayer); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.OnPartyMemberLoopstateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToPartyMemberModel(struct UPartyPlayerModel* PartyMemeber, bool Bind); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.BindToPartyMemberModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyMemberRemoved(struct UPartyPlayerModel* PartyMember); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.OnPartyMemberRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyMemberAdded(struct UPartyPlayerModel* PartyMember); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.OnPartyMemberAdded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyStateChanged(enum class EPartyViewState PartyState); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.OnPartyStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyMembersChanged(struct UPartyPlayerModel* Player, bool Added); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.OnPartyMembersChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHasPartyInvalidSizeChanged(bool InvalidSize); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.OnHasPartyInvalidSizeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetPartyQueueRestrictionIndicator(struct FText& Indicator Text); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.GetPartyQueueRestrictionIndicator // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Set Party Queue Restriction Indicator(); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.Set Party Queue Restriction Indicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyRRPenaltyChanged(float Penalty); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.OnPartyRRPenaltyChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartySkillChanged(bool Skill); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.OnPartySkillChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartySizeChanged(int32_t Size); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.OnPartySizeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyOwnerChanged(bool IsOwner); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.OnPartyOwnerChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerEligibleRemainingAccountLevelsChanged(int32_t NewValue); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.OnPlayerEligibleRemainingAccountLevelsChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePartyQueueRestrictionEligibility(struct FString QueueID); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.UpdatePartyQueueRestrictionEligibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetPartyQueueRestrictedPuuids(struct TArray<struct FString>& PartyQueueRestrictedPuuids); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.GetPartyQueueRestrictedPuuids // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetPartyQueueEligibility(bool& AnyIneligible, struct FText& WarningText); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.GetPartyQueueEligibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetPartyQueueRestrictionExpiry(struct FDateTime& PartyQueueRestrictionExpiry); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.GetPartyQueueRestrictionExpiry // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void PartyQueueRestrictedPuuidsUpdate(struct TArray<struct FString>& NewPartyQueueRestrictedPuuids, bool& WasUpdated); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.PartyQueueRestrictedPuuidsUpdate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PartyQueueRestrictionExpiryUpdate(struct FDateTime NewPartyQueueRestrictionExpiry, bool& WasUpdated); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.PartyQueueRestrictionExpiryUpdate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetQueueRestrictedText(struct TArray<struct FString>& QueueRestrictedPuuids, struct FText& ReturnText); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.GetQueueRestrictedText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void IsPartyRestricted(bool& IsPartyRestricted); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.IsPartyRestricted // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void PuuidsToGamertags(struct TArray<struct FString>& Puuids, struct TArray<struct FString>& Gamertags); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.PuuidsToGamertags // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Set Party Queue Restriction Expiry(struct FDateTime NewPartyQueueRestrictionExpiry, struct TArray<struct FString>& NewPartyQueueRestrictedPuuids); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.Set Party Queue Restriction Expiry // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Party Queue Restriction Eligibility(bool AnyIneligible); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.Set Party Queue Restriction Eligibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnQueueDelayChanged(bool NewValue); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.OnQueueDelayChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnQueueRestrictionsChanged(); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.OnQueueRestrictionsChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyQueueRestrictionExpiryQueueIDChanged(struct FString QueueID); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.OnPartyQueueRestrictionExpiryQueueIDChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePartyQueueRestrictionExpiry(); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.UpdatePartyQueueRestrictionExpiry // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToPartyModel(struct UPartyModel* NewPartyModel, bool Bind); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.BindToPartyModel // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Refresh(); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnViewModelCreated(); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_QueueRestrictions(int32_t EntryPoint); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.ExecuteUbergraph_VM_QueueRestrictions // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnLocalPlayerUnverifiedChanged__DelegateSignature(bool IsLocalPlayerUnverified); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.OnLocalPlayerUnverifiedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyQueueRestrictionUnverifiedChanged__DelegateSignature(bool AnyUnverified, struct FText WarningText); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.OnPartyQueueRestrictionUnverifiedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyQueueRestrictionIndicatorChanged__DelegateSignature(struct FText IndicatorText); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.OnPartyQueueRestrictionIndicatorChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyQueueRestrictionEligibilityChanged__DelegateSignature(bool AnyIneligible, struct FText WarningText); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.OnPartyQueueRestrictionEligibilityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPartyQueueRestrictionExpiryChanged__DelegateSignature(struct FDateTime NewPartyQueueRestrictedExpiry, struct TArray<struct FString>& NewQueueRestrictedPuuids); // Function VM_QueueRestrictions.VM_QueueRestrictions_C.OnPartyQueueRestrictionExpiryChanged__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

