// BlueprintGeneratedClass VM_TopNavigation.VM_TopNavigation_C
// Size: 0x128 (Inherited: 0x90)
struct UVM_TopNavigation_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UUINavigationModel* UINavigationModel; // 0x98(0x08)
	enum class EWidgetVisibilityOption BreadcrumbVisibilityOption; // 0xa0(0x01)
	enum class EWidgetVisibilityOption PlayButtonVisibilityOption; // 0xa1(0x01)
	enum class EWidgetVisibilityOption NavigationBarVisibilityOption; // 0xa2(0x01)
	enum class EWidgetVisibilityOption LoyaltyVisibilityOption; // 0xa3(0x01)
	enum class EWidgetVisibilityOption ServerStatusVisibilityOption; // 0xa4(0x01)
	enum class EWidgetVisibilityOption SocialEntranceVisibilityOption; // 0xa5(0x01)
	enum class EWidgetVisibilityOption OptionsButtonVisibilityOption; // 0xa6(0x01)
	enum class EWidgetVisibilityOption WalletVisibilityOption; // 0xa7(0x01)
	struct FMulticastInlineDelegate OnBreadcrumbVisibilityOptionChanged; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnPlayButtonVisibilityOptionChanged; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnNavigationBarVisibilityOptionChanged; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnLoyaltyVisibilityOptionChanged; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnServerStatusVisibilityOptionChanged; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnSocialEntranceVisibilityOptionChanged; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnOptionsButtonVisibilityOptionChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnWalletVisibilityOptionChanged; // 0x118(0x10)

	void Refresh(); // Function VM_TopNavigation.VM_TopNavigation_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetWalletVisibilityOption(enum class EWidgetVisibilityOption InOption); // Function VM_TopNavigation.VM_TopNavigation_C.SetWalletVisibilityOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetOptionsButtonVisibilityOption(enum class EWidgetVisibilityOption InOption); // Function VM_TopNavigation.VM_TopNavigation_C.SetOptionsButtonVisibilityOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSocialEntranceVisibilityOption(enum class EWidgetVisibilityOption InOption); // Function VM_TopNavigation.VM_TopNavigation_C.SetSocialEntranceVisibilityOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetServerStatusVisibilityOption(enum class EWidgetVisibilityOption InOption); // Function VM_TopNavigation.VM_TopNavigation_C.SetServerStatusVisibilityOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetLoyaltyVisibilityOption(enum class EWidgetVisibilityOption InOption); // Function VM_TopNavigation.VM_TopNavigation_C.SetLoyaltyVisibilityOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetNavigationBarVisibilityOption(enum class EWidgetVisibilityOption InOption); // Function VM_TopNavigation.VM_TopNavigation_C.SetNavigationBarVisibilityOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPlayButtonVisibilityOption(enum class EWidgetVisibilityOption InOption); // Function VM_TopNavigation.VM_TopNavigation_C.SetPlayButtonVisibilityOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetBreadcrumbVisibilityOption(enum class EWidgetVisibilityOption InOption); // Function VM_TopNavigation.VM_TopNavigation_C.SetBreadcrumbVisibilityOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateWidgetVisibility(struct FShellWidgetVisibilityOptions WidgetVisibilityOptions); // Function VM_TopNavigation.VM_TopNavigation_C.UpdateWidgetVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToUINavigationModel(bool bShouldBind); // Function VM_TopNavigation.VM_TopNavigation_C.BindToUINavigationModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void NavigateToOptions(); // Function VM_TopNavigation.VM_TopNavigation_C.NavigateToOptions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void NavigateToLobby(); // Function VM_TopNavigation.VM_TopNavigation_C.NavigateToLobby // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnViewModelCreated(); // Function VM_TopNavigation.VM_TopNavigation_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_TopNavigation(int32_t EntryPoint); // Function VM_TopNavigation.VM_TopNavigation_C.ExecuteUbergraph_VM_TopNavigation // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnWalletVisibilityOptionChanged__DelegateSignature(enum class EWidgetVisibilityOption OutOption); // Function VM_TopNavigation.VM_TopNavigation_C.OnWalletVisibilityOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnOptionsButtonVisibilityOptionChanged__DelegateSignature(enum class EWidgetVisibilityOption OutOption); // Function VM_TopNavigation.VM_TopNavigation_C.OnOptionsButtonVisibilityOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSocialEntranceVisibilityOptionChanged__DelegateSignature(enum class EWidgetVisibilityOption OutOption); // Function VM_TopNavigation.VM_TopNavigation_C.OnSocialEntranceVisibilityOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnServerStatusVisibilityOptionChanged__DelegateSignature(enum class EWidgetVisibilityOption OutOption); // Function VM_TopNavigation.VM_TopNavigation_C.OnServerStatusVisibilityOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLoyaltyVisibilityOptionChanged__DelegateSignature(enum class EWidgetVisibilityOption OutOption); // Function VM_TopNavigation.VM_TopNavigation_C.OnLoyaltyVisibilityOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnNavigationBarVisibilityOptionChanged__DelegateSignature(enum class EWidgetVisibilityOption OutOption); // Function VM_TopNavigation.VM_TopNavigation_C.OnNavigationBarVisibilityOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayButtonVisibilityOptionChanged__DelegateSignature(enum class EWidgetVisibilityOption OutOption); // Function VM_TopNavigation.VM_TopNavigation_C.OnPlayButtonVisibilityOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBreadcrumbVisibilityOptionChanged__DelegateSignature(enum class EWidgetVisibilityOption OutOption); // Function VM_TopNavigation.VM_TopNavigation_C.OnBreadcrumbVisibilityOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

