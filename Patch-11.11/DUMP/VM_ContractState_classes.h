// BlueprintGeneratedClass VM_ContractState.VM_ContractState_C
// Size: 0x1b9 (Inherited: 0x90)
struct UVM_ContractState_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	bool IsPremiumOwned; // 0x98(0x01)
	bool IsTierOwned; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
	struct FMulticastInlineDelegate OnIsPremiumOwnedChanged; // 0xa0(0x10)
	bool IsCompleted; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	int32_t Current Level Index; // 0xb4(0x04)
	struct UContractLevelViewModel* CurrentLevel; // 0xb8(0x08)
	int32_t Current Chapter Index; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct UContractChapterViewModel* CurrentChapter; // 0xc8(0x08)
	struct FMulticastInlineDelegate OnIsTierOwnedChanged; // 0xd0(0x10)
	struct UContractViewModel* ActiveContract; // 0xe0(0x08)
	struct FMulticastInlineDelegate OnCurrentChapterChanged; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnCurrentChapterLevelChanged; // 0xf8(0x10)
	int32_t CurrentXP; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	double CurrentChapterCompletion; // 0x110(0x08)
	struct FMulticastInlineDelegate OnCurrentLevelModelChanged; // 0x118(0x10)
	struct FMulticastInlineDelegate OnCurrentChapterModelChanged; // 0x128(0x10)
	struct FMulticastInlineDelegate OnCurrentChapterCompletionChanged; // 0x138(0x10)
	struct FMulticastInlineDelegate OnCurrentXPChanged; // 0x148(0x10)
	struct FMulticastInlineDelegate OnIsCompletedChanged; // 0x158(0x10)
	int32_t NumLevelsExcludingEpilogue; // 0x168(0x04)
	int32_t XPRequiredForNextLevel; // 0x16c(0x04)
	struct FMulticastInlineDelegate OnXPRequiredForNextLevelChanged; // 0x170(0x10)
	struct FMulticastInlineDelegate OnNumLevelsExcludingEpilogueChanged; // 0x180(0x10)
	int32_t NumLevels; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
	struct FMulticastInlineDelegate OnNumLevelsChanged; // 0x198(0x10)
	struct FMulticastInlineDelegate OnHasPremiumTrackChanged; // 0x1a8(0x10)
	bool HasPremiumTrack; // 0x1b8(0x01)

	void SetHasPremiumTrack(bool HasPremiumTrack); // Function VM_ContractState.VM_ContractState_C.SetHasPremiumTrack // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetNumLevels(int32_t NewNumLevels); // Function VM_ContractState.VM_ContractState_C.SetNumLevels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetXPRequiredForNextLevel(int32_t NewXPRequiredForNextLevel); // Function VM_ContractState.VM_ContractState_C.SetXPRequiredForNextLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCurrentChapterCompletion(); // Function VM_ContractState.VM_ContractState_C.UpdateCurrentChapterCompletion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Bind Contract Model Events(bool Bind); // Function VM_ContractState.VM_ContractState_C.Bind Contract Model Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Current Level Index Changed(int32_t Current Level Index); // Function VM_ContractState.VM_ContractState_C.Handle Current Level Index Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Current Level Completed(bool NewValue); // Function VM_ContractState.VM_ContractState_C.Handle Current Level Completed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCurrentLevel(int32_t Level Index); // Function VM_ContractState.VM_ContractState_C.SetCurrentLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetNumLevelsExcludingEpilogue(int32_t NewNumLevelsExcludingEpilogue); // Function VM_ContractState.VM_ContractState_C.SetNumLevelsExcludingEpilogue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCurrentXP(int32_t CurrentXP); // Function VM_ContractState.VM_ContractState_C.SetCurrentXP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsCompleted(bool IsCompleted); // Function VM_ContractState.VM_ContractState_C.SetIsCompleted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromContract(struct UContractViewModel* Contract); // Function VM_ContractState.VM_ContractState_C.InitFromContract // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCurrentChapter(int32_t Level Index); // Function VM_ContractState.VM_ContractState_C.SetCurrentChapter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetIsPremiumOwned(bool IsPremiumOwned); // Function VM_ContractState.VM_ContractState_C.SetIsPremiumOwned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Current Chapter Completion(double Current Chapter Completion); // Function VM_ContractState.VM_ContractState_C.Set Current Chapter Completion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshBroadcast(); // Function VM_ContractState.VM_ContractState_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Reset(); // Function VM_ContractState.VM_ContractState_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_ContractState(int32_t EntryPoint); // Function VM_ContractState.VM_ContractState_C.ExecuteUbergraph_VM_ContractState // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnHasPremiumTrackChanged__DelegateSignature(bool HasPremiumTrack); // Function VM_ContractState.VM_ContractState_C.OnHasPremiumTrackChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnNumLevelsChanged__DelegateSignature(int32_t NewNumLevels); // Function VM_ContractState.VM_ContractState_C.OnNumLevelsChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnNumLevelsExcludingEpilogueChanged__DelegateSignature(int32_t NewNumLevelsExcludingEpilogue); // Function VM_ContractState.VM_ContractState_C.OnNumLevelsExcludingEpilogueChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnXPRequiredForNextLevelChanged__DelegateSignature(int32_t NewXPRequiredForNextLevel); // Function VM_ContractState.VM_ContractState_C.OnXPRequiredForNextLevelChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsCompletedChanged__DelegateSignature(bool IsCompleted); // Function VM_ContractState.VM_ContractState_C.OnIsCompletedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrentXPChanged__DelegateSignature(int32_t CurrentXP); // Function VM_ContractState.VM_ContractState_C.OnCurrentXPChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrentChapterCompletionChanged__DelegateSignature(double Current Chapter Completion); // Function VM_ContractState.VM_ContractState_C.OnCurrentChapterCompletionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrentChapterModelChanged__DelegateSignature(struct UContractChapterViewModel* Chapter); // Function VM_ContractState.VM_ContractState_C.OnCurrentChapterModelChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrentLevelModelChanged__DelegateSignature(struct UContractLevelViewModel* Current level); // Function VM_ContractState.VM_ContractState_C.OnCurrentLevelModelChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsTierOwnedChanged__DelegateSignature(bool IsTierOwned); // Function VM_ContractState.VM_ContractState_C.OnIsTierOwnedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrentChapterLevelChanged__DelegateSignature(int32_t CurrentLevel); // Function VM_ContractState.VM_ContractState_C.OnCurrentChapterLevelChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrentChapterChanged__DelegateSignature(int32_t Chapter Index); // Function VM_ContractState.VM_ContractState_C.OnCurrentChapterChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsPremiumOwnedChanged__DelegateSignature(bool IsPremiumOwned); // Function VM_ContractState.VM_ContractState_C.OnIsPremiumOwnedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

