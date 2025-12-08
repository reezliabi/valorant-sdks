// BlueprintGeneratedClass VM_CharacterInformationBanner.VM_CharacterInformationBanner_C
// Size: 0x101 (Inherited: 0x90)
struct UVM_CharacterInformationBanner_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UTexture* CharacterInformationBannerImage; // 0x98(0x08)
	struct FText CharacterInformationBannerText; // 0xa0(0x18)
	struct FMulticastInlineDelegate OnCharacterInformationBannerImageChanged; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnCharacterInformationBannerTextChanged; // 0xc8(0x10)
	struct UCharacterHandle* CharacterHandle; // 0xd8(0x08)
	struct UInventoryItemViewModel* VM_InventoryItem; // 0xe0(0x08)
	struct UCurrencyViewModel_C* VM_Currency; // 0xe8(0x08)
	struct UBTEViewModel* VM_BTE; // 0xf0(0x08)
	struct URecruitmentEventViewModel* VM_Recruitment; // 0xf8(0x08)
	bool OnlyShowRecruitmentText; // 0x100(0x01)

	void IsRecruitmentEventExpired(bool& Expired); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.IsRecruitmentEventExpired // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void IsAgentBaseContent(bool& IsBaseContent); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.IsAgentBaseContent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void OnRecruitmentEventChanged(struct URecruitmentEventModel* RecruitmentEvent); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.OnRecruitmentEventChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindRecruitmentModelEvents(bool Bind); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.BindRecruitmentModelEvents // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRecruitmentModel(struct URecruitmentEventViewModel* VM_Recruitment); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.SetRecruitmentModel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitRecruitmentModel(); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.InitRecruitmentModel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBTEActiveMilestoneChanged(int32_t ActiveMilestone); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.OnBTEActiveMilestoneChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBTEEnabledChanged(bool Enabled); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.OnBTEEnabledChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindBTEModelEvents(bool Bind); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.BindBTEModelEvents // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBTEModel(struct UBTEViewModel* BTE VM); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.SetBTEModel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init BTE Model(); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.Init BTE Model // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Free Agent Token Amount Changed(struct FText Amount, bool bAtCap, bool bIsNegative); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.On Free Agent Token Amount Changed // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindCurrencyViewModelEvents(bool Bind); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.BindCurrencyViewModelEvents // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCurrencyViewModel(struct UCurrencyViewModel_C* CurrencyVM); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.SetCurrencyViewModel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init Currency View Model(); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.Init Currency View Model // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsOwnedChanged(bool IsOwned); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.OnIsOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsUnlockedOnlyBySubscriptionChanged(bool IsUnlockedBySubscription); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.OnIsUnlockedOnlyBySubscriptionChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Is Unlocked Changed(bool IsUnlocked); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.On Is Unlocked Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Bind Inventory Model Events(bool Bind); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.Bind Inventory Model Events // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetInventoryItemModel(struct UInventoryItemViewModel* InventoryItemVM); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.SetInventoryItemModel // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init Inventory Item Model(); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.Init Inventory Item Model // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromCharacterHandle(struct UCharacterHandle* CharacterHandle); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.InitFromCharacterHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromOfferDTO(struct UOfferDTO* Offer DTO, bool OnlyShowRecruitmentText); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.InitFromOfferDTO // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Selected Agent Changed(); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.Handle Selected Agent Changed // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsAgentOwned(bool& IsAgentOwned); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.IsAgentOwned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void IsAgentLocked(bool& IsAgentLocked); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.IsAgentLocked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void IsRecruitmentEventActive(bool& IsRecruitmentEventActive); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.IsRecruitmentEventActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void HasFreeAgentToken(bool& HasFreeAgentToken); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.HasFreeAgentToken // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void IsNewPlayerEventActive(bool& IsNewPlayerEventActive); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.IsNewPlayerEventActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void HasRewardsProgram(bool& HasRewardsProgram); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.HasRewardsProgram // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void SetCharacterInformationBannerText(struct FText CharacterInformationBannerText); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.SetCharacterInformationBannerText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCharacterInformationBannerImage(struct UTexture* CharacterInformationBannerImage); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.SetCharacterInformationBannerImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Reset(); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshBroadcast(); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_CharacterInformationBanner(int32_t EntryPoint); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.ExecuteUbergraph_VM_CharacterInformationBanner // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnCharacterInformationBannerImageChanged__DelegateSignature(struct UTexture* CharacterInformationBannerImage); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.OnCharacterInformationBannerImageChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCharacterInformationBannerTextChanged__DelegateSignature(struct FText CharacterInformationBannerText); // Function VM_CharacterInformationBanner.VM_CharacterInformationBanner_C.OnCharacterInformationBannerTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

