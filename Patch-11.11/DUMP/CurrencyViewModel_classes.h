// BlueprintGeneratedClass CurrencyViewModel.CurrencyViewModel_C
// Size: 0x1d8 (Inherited: 0x90)
struct UCurrencyViewModel_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct FGuid CurrencyID; // 0x98(0x10)
	struct UCurrencyHandle* CurrencyHandle; // 0xa8(0x08)
	struct FMulticastInlineDelegate CurrencyImageUpdated; // 0xb0(0x10)
	struct FMulticastInlineDelegate CurrencyAmountUpdated; // 0xc0(0x10)
	bool bShouldSurfaceCap; // 0xd0(0x01)
	bool bCurrencyAtCap; // 0xd1(0x01)
	bool bConfigValue; // 0xd2(0x01)
	char pad_D3[0x5]; // 0xd3(0x05)
	struct FMulticastInlineDelegate CurrencyAmountNumUpdated; // 0xd8(0x10)
	struct FMulticastInlineDelegate DisplayConfigurationUpdated; // 0xe8(0x10)
	struct FName ConfigName; // 0xf8(0x0c)
	bool bDefaultConfigValue; // 0x104(0x01)
	bool bShouldBeVisibleWhenDisabled; // 0x105(0x01)
	bool bShouldNegateConfig; // 0x106(0x01)
	enum class ESlateVisibility VisibilityState; // 0x107(0x01)
	struct TMap<struct FGuid, struct FString> CurrencyIdToRouteName; // 0x108(0x50)
	struct UTexture* CurrencyImage; // 0x158(0x08)
	struct FText CurrencyText; // 0x160(0x18)
	int32_t CurrencyCap; // 0x178(0x04)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FMulticastInlineDelegate OnCurrencyCapChanged; // 0x180(0x10)
	struct FMulticastInlineDelegate OnCurrencyTextUpdated; // 0x190(0x10)
	bool bCurrencyIsNegative; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	struct FMulticastInlineDelegate LargeCurrencyImageUpdated; // 0x1a8(0x10)
	struct FMulticastInlineDelegate CurrencyRewardPreviewImageUpdated; // 0x1b8(0x10)
	struct UTexture* LargeCurrencyImage; // 0x1c8(0x08)
	struct UTexture* RewardPreviewCurrencyImage; // 0x1d0(0x08)

	void SetRewardPreviewCurrencyImage(struct UTexture* New Currency Image); // Function CurrencyViewModel.CurrencyViewModel_C.SetRewardPreviewCurrencyImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetLargeCurrencyImage(struct UTexture* New Currency Image); // Function CurrencyViewModel.CurrencyViewModel_C.SetLargeCurrencyImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCurrencyImageThroughCurrencyHandle(struct UCurrencyHandle* CurrencyHandle); // Function CurrencyViewModel.CurrencyViewModel_C.SetCurrencyImageThroughCurrencyHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToCurrencyBalanceChanged(struct UCurrencyHandle* CurrencyHandle, bool Bind); // Function CurrencyViewModel.CurrencyViewModel_C.BindToCurrencyBalanceChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnWalletNotLoaded(); // Function CurrencyViewModel.CurrencyViewModel_C.OnWalletNotLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Currency Cap From ID(); // Function CurrencyViewModel.CurrencyViewModel_C.Set Currency Cap From ID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitAsRecruitmentTokens(); // Function CurrencyViewModel.CurrencyViewModel_C.InitAsRecruitmentTokens // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Currency Text(struct FText CurrencyText); // Function CurrencyViewModel.CurrencyViewModel_C.Set Currency Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Currency Image(struct UTexture* New Currency Image); // Function CurrencyViewModel.CurrencyViewModel_C.Set Currency Image // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Currency Cap(); // Function CurrencyViewModel.CurrencyViewModel_C.Update Currency Cap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Refresh(); // Function CurrencyViewModel.CurrencyViewModel_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Currency Cap(int32_t CurrencyCap); // Function CurrencyViewModel.CurrencyViewModel_C.Set Currency Cap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleClick(); // Function CurrencyViewModel.CurrencyViewModel_C.HandleClick // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitAsKC(); // Function CurrencyViewModel.CurrencyViewModel_C.InitAsKC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromCurrencyID(struct FGuid CurrencyID); // Function CurrencyViewModel.CurrencyViewModel_C.InitFromCurrencyID // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Display Config Updated(struct FName& InConfigName); // Function CurrencyViewModel.CurrencyViewModel_C.On Display Config Updated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Display Config Name(struct FName InConfigName); // Function CurrencyViewModel.CurrencyViewModel_C.Set Display Config Name // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBalanceChanged(int32_t NewBalance); // Function CurrencyViewModel.CurrencyViewModel_C.OnBalanceChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrencyLoaded(struct UCurrencyHandle* CurrencyHandle); // Function CurrencyViewModel.CurrencyViewModel_C.OnCurrencyLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Currency ID(struct FGuid CurrencyID); // Function CurrencyViewModel.CurrencyViewModel_C.Set Currency ID // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnViewModelCreated(); // Function CurrencyViewModel.CurrencyViewModel_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_CurrencyViewModel(int32_t EntryPoint); // Function CurrencyViewModel.CurrencyViewModel_C.ExecuteUbergraph_CurrencyViewModel // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void CurrencyRewardPreviewImageUpdated__DelegateSignature(struct UTexture* New Currency Image); // Function CurrencyViewModel.CurrencyViewModel_C.CurrencyRewardPreviewImageUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void LargeCurrencyImageUpdated__DelegateSignature(struct UTexture* New Currency Image); // Function CurrencyViewModel.CurrencyViewModel_C.LargeCurrencyImageUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CurrencyAmountNumUpdated__DelegateSignature(int32_t AmountInt); // Function CurrencyViewModel.CurrencyViewModel_C.CurrencyAmountNumUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrencyTextUpdated__DelegateSignature(struct FText CurrencyText); // Function CurrencyViewModel.CurrencyViewModel_C.OnCurrencyTextUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrencyCapChanged__DelegateSignature(int32_t CurrencyCap); // Function CurrencyViewModel.CurrencyViewModel_C.OnCurrencyCapChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplayConfigurationUpdated__DelegateSignature(enum class ESlateVisibility OutVisibility); // Function CurrencyViewModel.CurrencyViewModel_C.DisplayConfigurationUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CurrencyAmountUpdated__DelegateSignature(struct FText Amount, bool bAtCap, bool bIsNegative); // Function CurrencyViewModel.CurrencyViewModel_C.CurrencyAmountUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CurrencyImageUpdated__DelegateSignature(struct UTexture* Image); // Function CurrencyViewModel.CurrencyViewModel_C.CurrencyImageUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

