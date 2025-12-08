// BlueprintGeneratedClass VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C
// Size: 0x128 (Inherited: 0x90)
struct UVM_RecruitmentEventPanel_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct URecruitmentEventViewModel* VM_RecruitmentEvent; // 0x98(0x08)
	struct URecruitmentEventModel* Recruitment Event; // 0xa0(0x08)
	struct UCharacterHandle* Character Handle; // 0xa8(0x08)
	struct FMulticastInlineDelegate OnRecruitmentPanelVisibilityChanged; // 0xb0(0x10)
	struct UInventoryItemViewModel* InventoryModelVM; // 0xc0(0x08)
	struct FMulticastInlineDelegate OnRecruitmentPanelExpiryChanged; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnRecruitmentProgressChanged; // 0xd8(0x10)
	bool Should Show; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct FMulticastInlineDelegate OnRecruitmentPanelHeaderColorChanged; // 0xf0(0x10)
	struct FLinearColor Header Text Color; // 0x100(0x10)
	bool IsExpired; // 0x110(0x01)
	char pad_111[0x3]; // 0x111(0x03)
	int32_t Current Progress; // 0x114(0x04)
	int32_t Threshold; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	double Percent; // 0x120(0x08)

	void SetRecruitmentProgress(int32_t CurrentProgress, int32_t Threshold, double Percent); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.SetRecruitmentProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsExpired(bool IsExpired); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.SetIsExpired // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetShouldShow(bool ShouldShow); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.SetShouldShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshHeaderColor(); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.RefreshHeaderColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Refresh Recruitment Progress(); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.Refresh Recruitment Progress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshVisibility(); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.RefreshVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindInventoryModelEvents(bool Bind); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.BindInventoryModelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHandleLoaded(struct UBaseHandle* BaseHandle); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.OnHandleLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromCharacterData(struct UCharacterDataAsset* Character); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.InitFromCharacterData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitViewModels(); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindRecruitmentEvents(bool Bind); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.BindRecruitmentEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetRecruitmentProgress(int32_t& CurrentProgress, int32_t& Threshold, double& Percent); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.GetRecruitmentProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void IsCharacterRecruitmentCharacter(struct UCharacterHandle* CharacterHandle, bool& bIsRecruitmentCharacter); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.IsCharacterRecruitmentCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsRecruitmentEventActive(bool& bActive); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.IsRecruitmentEventActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsCharacterOwned(struct UCharacterHandle* CharacterHandle, bool& bOwned); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.IsCharacterOwned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsOwnedChanged(bool IsOwned); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.OnIsOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Should Show for Agent for Player(struct UCharacterHandle* Character Handle, bool& Should Show); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.Should Show for Agent for Player // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshRecruitmentEventPanel(); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.RefreshRecruitmentEventPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromCharacterHandle(struct UCharacterHandle* NewCharacterHandle); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.InitFromCharacterHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRecruitmentEventChanged(struct URecruitmentEventModel* RecruitmentEvent); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.OnRecruitmentEventChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindEvents(bool Bind); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshBroadcast(); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Reset(); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnViewModelCreated(); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_RecruitmentEventPanel(int32_t EntryPoint); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.ExecuteUbergraph_VM_RecruitmentEventPanel // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnRecruitmentPanelExpiryChanged__DelegateSignature(bool IsExpired); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.OnRecruitmentPanelExpiryChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRecruitmentPanelHeaderColorChanged__DelegateSignature(struct FLinearColor Header Color); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.OnRecruitmentPanelHeaderColorChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRecruitmentProgressChanged__DelegateSignature(int32_t CurrentProgress, int32_t Threshold, double Percent); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.OnRecruitmentProgressChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRecruitmentPanelVisibilityChanged__DelegateSignature(bool Visibility); // Function VM_RecruitmentEventPanel.VM_RecruitmentEventPanel_C.OnRecruitmentPanelVisibilityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

