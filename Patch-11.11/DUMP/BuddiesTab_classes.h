// WidgetBlueprintGeneratedClass BuddiesTab.BuddiesTab_C
// Size: 0x3e1 (Inherited: 0x320)
struct UBuddiesTab_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UOverlay* BuddyDataAndEquip; // 0x328(0x08)
	struct UTextBlock* BuddyName; // 0x330(0x08)
	struct UContentFilterButton_C* ContentFilterButton; // 0x338(0x08)
	struct USharedButtonMaster_C* EquipButton; // 0x340(0x08)
	struct UVerticalBox* EquipButtonVerticalBox; // 0x348(0x08)
	struct UFavoriteContentButton_C* FavoriteContentButton; // 0x350(0x08)
	struct UGenericCarousel_C* GenericCarousel; // 0x358(0x08)
	struct UBuddyInstanceComboBoxV2_C* InstanceSelectorV2; // 0x360(0x08)
	struct UNoResultsMessageV1_C* NoResultsMessage; // 0x368(0x08)
	struct UUniversalHorizontalDivider_C* UniversalHorizontalDivider; // 0x370(0x08)
	struct FMulticastInlineDelegate OnBuddySelected; // 0x378(0x10)
	struct TArray<struct UEquippableCharmHandle*> BuddiesHandles; // 0x388(0x10)
	struct UEquippableCharmHandle* CurrentBuddy; // 0x398(0x08)
	struct UArsenalViewController* ArsenalViewController; // 0x3a0(0x08)
	struct UEquippableCharmInstanceHandle* CurrentBuddyInstance; // 0x3a8(0x08)
	struct UEquippableHandle* Equippable; // 0x3b0(0x08)
	struct UEquippableCharmHandle* InitialBuddy; // 0x3b8(0x08)
	struct FMulticastInlineDelegate OnContentFiltersApplied; // 0x3c0(0x10)
	struct UContentFilterViewModel* FiltersModel; // 0x3d0(0x08)
	struct UContentFilter* OwnershipFilter; // 0x3d8(0x08)
	bool IsContentFilterEnabled; // 0x3e0(0x01)

	void BindFavoriteChangeEvent(struct UBaseHandle* NewHandle); // Function BuddiesTab.BuddiesTab_C.BindFavoriteChangeEvent // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleFavoriteChanged(); // Function BuddiesTab.BuddiesTab_C.HandleFavoriteChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCarouselContent(struct TArray<struct UBaseHandle*>& CarouselContent); // Function BuddiesTab.BuddiesTab_C.UpdateCarouselContent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitContentFilter(); // Function BuddiesTab.BuddiesTab_C.InitContentFilter // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCarouselOnOwnershipChanged(bool IsChecked, bool HasMatchingContent); // Function BuddiesTab.BuddiesTab_C.HandleCarouselOnOwnershipChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleApplyContentFilters(struct UContentFilterViewModel* FilterViewModel, bool OverrideOwnershipChangedDispatch, bool PreventOwnershipChangedDispatch); // Function BuddiesTab.BuddiesTab_C.HandleApplyContentFilters // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTabWidgetVisAndDispatchEvent(bool HasMatchingContent); // Function BuddiesTab.BuddiesTab_C.UpdateTabWidgetVisAndDispatchEvent // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateOwnershipFilter(bool IsEnabled); // Function BuddiesTab.BuddiesTab_C.UpdateOwnershipFilter // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleBuddiesLoaded(struct FEquippableCharmHandles& Handles); // Function BuddiesTab.BuddiesTab_C.HandleBuddiesLoaded // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitCarousel(); // Function BuddiesTab.BuddiesTab_C.InitCarousel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsCurrentBuddyEquipped(bool& Equipped); // Function BuddiesTab.BuddiesTab_C.IsCurrentBuddyEquipped // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetCurrentBuddy(struct UEquippableCharmHandle* Buddy); // Function BuddiesTab.BuddiesTab_C.SetCurrentBuddy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateEquipSwitcher(); // Function BuddiesTab.BuddiesTab_C.UpdateEquipSwitcher // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init(struct UArsenalViewController* ArsenalViewController, struct UEquippableHandle* Equippable, struct UEquippableCharmHandle* BuddyOverride); // Function BuddiesTab.BuddiesTab_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function BuddiesTab.BuddiesTab_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__InstanceSelectorV2_K2Node_ComponentBoundEvent_6_OnBuddyInstanceSelected__DelegateSignature(struct UEquippableCharmInstanceHandle* BuddyInstance); // Function BuddiesTab.BuddiesTab_C.BndEvt__InstanceSelectorV2_K2Node_ComponentBoundEvent_6_OnBuddyInstanceSelected__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__InstanceSelectorV2_K2Node_ComponentBoundEvent_7_OnContentUpdated__DelegateSignature(); // Function BuddiesTab.BuddiesTab_C.BndEvt__InstanceSelectorV2_K2Node_ComponentBoundEvent_7_OnContentUpdated__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function BuddiesTab.BuddiesTab_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__GenericCarousel_K2Node_ComponentBoundEvent_2_OnObjectSelected__DelegateSignature(struct UObject* Object); // Function BuddiesTab.BuddiesTab_C.BndEvt__GenericCarousel_K2Node_ComponentBoundEvent_2_OnObjectSelected__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function BuddiesTab.BuddiesTab_C.BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__GenericCarousel_K2Node_ComponentBoundEvent_0_OnOwnershipChanged__DelegateSignature(bool IsChecked, bool HasMatchingContent); // Function BuddiesTab.BuddiesTab_C.BndEvt__GenericCarousel_K2Node_ComponentBoundEvent_0_OnOwnershipChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ContentFilterButton_K2Node_ComponentBoundEvent_3_FiltersApplied__DelegateSignature(struct UContentFilterViewModel* FiltersViewModel); // Function BuddiesTab.BuddiesTab_C.BndEvt__ContentFilterButton_K2Node_ComponentBoundEvent_3_FiltersApplied__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function BuddiesTab.BuddiesTab_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_BuddiesTab(int32_t EntryPoint); // Function BuddiesTab.BuddiesTab_C.ExecuteUbergraph_BuddiesTab // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnContentFiltersApplied__DelegateSignature(bool IsOwnedOnlyFilterEnabled, bool HasMatchingContent); // Function BuddiesTab.BuddiesTab_C.OnContentFiltersApplied__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBuddySelected__DelegateSignature(struct UEquippableCharmHandle* Buddy); // Function BuddiesTab.BuddiesTab_C.OnBuddySelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

