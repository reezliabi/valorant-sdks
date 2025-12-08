// BlueprintGeneratedClass VM_PlayerCardManagement.VM_PlayerCardManagement_C
// Size: 0x1d0 (Inherited: 0xb0)
struct UVM_PlayerCardManagement_C : UAresPersonalizationViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct UPlayerCardHandle* SelectedHandle; // 0xb8(0x08)
	struct FText DisplayName; // 0xc0(0x18)
	struct FMulticastInlineDelegate OnDisplayNameChanged; // 0xd8(0x10)
	struct ULevelBorderHandle* SelectedLevelBorder; // 0xe8(0x08)
	struct UPlayerTitleHandle* SelectedTitle; // 0xf0(0x08)
	struct FString PlayerSubject; // 0xf8(0x10)
	struct UPlatformPlayer* ObservedPlayer; // 0x108(0x08)
	bool HideLevelBorder; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FMulticastInlineDelegate OnHideLevelBorderChanged; // 0x118(0x10)
	struct FText BorderDisplayName; // 0x128(0x18)
	struct UTexture2D* BorderTexture; // 0x140(0x08)
	struct FMulticastInlineDelegate OnBorderNameChanged; // 0x148(0x10)
	struct FMulticastInlineDelegate OnBorderTextureChanged; // 0x158(0x10)
	struct FMulticastInlineDelegate OnLevelBorderChanged; // 0x168(0x10)
	struct FText PlayerTitleDisplayName; // 0x178(0x18)
	struct FMulticastInlineDelegate OnPlayerTitleTextChanged; // 0x190(0x10)
	struct FMulticastInlineDelegate OnPlayerTitleAssetChanged; // 0x1a0(0x10)
	struct FGuid PlayerCardId; // 0x1b0(0x10)
	struct FMulticastInlineDelegate OnPlayerCardIdChanged; // 0x1c0(0x10)

	void SetPlayerCardId(struct FGuid In Player Card ID); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.SetPlayerCardId // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePlayerTitleChanged(struct UPlatformPlayer* PlatformPlayer); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.HandlePlayerTitleChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSetHideAccountLevelCompleted(bool Successful); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.HandleSetHideAccountLevelCompleted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DoFavoriteActionForSelectedTitle(); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.DoFavoriteActionForSelectedTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DoEquipActionForSelectedTitle(); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.DoEquipActionForSelectedTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSelectedTitle(struct UPlayerTitleHandle* SelectedTitle); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.SetSelectedTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePlayerBorderChanged(struct UPlatformPlayer* PlatformPlayer); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.HandlePlayerBorderChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToPersonalizationManager(bool Bind); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.BindToPersonalizationManager // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToPlayer(struct UPlatformPlayer* Player, bool Bind); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.BindToPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBorderTexture(struct UTexture2D* BorderTexture); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.SetBorderTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBorderDisplayName(struct FText BorderDisplayName); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.SetBorderDisplayName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPlayerTitleText(struct FText TitleText); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.SetPlayerTitleText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSelectedBorder(struct ULevelBorderHandle* SelectedLevelBorder); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.SetSelectedBorder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DoFavoriteActionForSelectedBorder(); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.DoFavoriteActionForSelectedBorder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DoEquipActionForSelectedBorder(); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.DoEquipActionForSelectedBorder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool Should Hide Level(); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.Should Hide Level // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void RefreshLevelBorderVisibility(struct UPlatformPlayer* Player); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.RefreshLevelBorderVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToggleAccountLevelDisplay(bool bHideAccountLevel); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.ToggleAccountLevelDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetHideLevelBorder(bool HideLevelBorder); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.SetHideLevelBorder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPlayerSubject(struct FString PlayerSubject); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.SetPlayerSubject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DoFavoriteActionForSelectedHandle(); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.DoFavoriteActionForSelectedHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DoEquipActionForSelectedHandle(); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.DoEquipActionForSelectedHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetDisplayName(struct FText DisplayName); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.SetDisplayName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSelectedHandle(struct UPlayerCardHandle* SelectedHandle); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.SetSelectedHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromHandle(struct UPlayerCardHandle* SelectedHandle); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.InitFromHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSelectedHandleChanged(struct UPlayerCardHandle* SelectedHandle); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.OnSelectedHandleChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerSubjectChanged(struct FString PlayerSubject); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.OnPlayerSubjectChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSelectedBorderChanged(struct ULevelBorderHandle* SelectedLevelBorder); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.OnSelectedBorderChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSelectedTitleChanged(struct UPlayerTitleHandle* SelectedTitle); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.OnSelectedTitleChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnViewModelCreated(); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_PlayerCardManagement(int32_t EntryPoint); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.ExecuteUbergraph_VM_PlayerCardManagement // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnPlayerCardIdChanged__DelegateSignature(struct FGuid Player Card ID); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.OnPlayerCardIdChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerTitleAssetChanged__DelegateSignature(struct UPlayerTitleDataAsset* TitleAsset); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.OnPlayerTitleAssetChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerTitleTextChanged__DelegateSignature(struct FText Title Text); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.OnPlayerTitleTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLevelBorderChanged__DelegateSignature(); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.OnLevelBorderChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBorderTextureChanged__DelegateSignature(struct UTexture2D* BorderTexture); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.OnBorderTextureChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBorderNameChanged__DelegateSignature(struct FText BorderDisplayName); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.OnBorderNameChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHideLevelBorderChanged__DelegateSignature(bool HideLevelBorder); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.OnHideLevelBorderChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDisplayNameChanged__DelegateSignature(struct FText DisplayName); // Function VM_PlayerCardManagement.VM_PlayerCardManagement_C.OnDisplayNameChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

