// WidgetBlueprintGeneratedClass WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C
// Size: 0x5a0 (Inherited: 0x3e0)
struct UWBP_Panel_CollectionsContentGrid_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UBreadcrumb_C* Breadcrumb; // 0x3e8(0x08)
	struct UWBP_List_Grid_C* ContentGrid; // 0x3f0(0x08)
	struct UWBP_Button_ResponsivePopup_C* ConvergedCollectionsFilter; // 0x3f8(0x08)
	struct USizeBox* ConvergedFilterSizeBox; // 0x400(0x08)
	struct UWBP_Button_IconTab_C* FilterButton; // 0x408(0x08)
	struct USizeBox* FilterSBox; // 0x410(0x08)
	struct UHorizontalBox* OldFilterHBox; // 0x418(0x08)
	struct UWBP_Input_TextBox_C* SearchBar; // 0x420(0x08)
	struct UWBP_Button_ListToggle_C* UnownedToggle; // 0x428(0x08)
	struct UCollectionsContentGridViewModel* ContentGridViewModel; // 0x430(0x08)
	struct UEquippableDataAsset* EquippableClass; // 0x438(0x08)
	struct UFP_CollectionsContentOwnership_C* OwnershipFP; // 0x440(0x08)
	struct UFP_CollectionsContentSearch_C* SearchFP; // 0x448(0x08)
	struct FName NavParamName; // 0x450(0x0c)
	char pad_45C[0x4]; // 0x45c(0x04)
	struct UAresBasePrimaryDataAsset* BaseContentClass; // 0x460(0x08)
	struct UCommonButtonStyle* EntryStyle; // 0x468(0x08)
	struct FMulticastInlineDelegate OnContentItemSelected; // 0x470(0x10)
	bool UseContentInstances; // 0x480(0x01)
	char pad_481[0x7]; // 0x481(0x07)
	struct FMulticastInlineDelegate OnInputActionPreferenceChanged; // 0x488(0x10)
	struct UFP_CollectionsContentFavorite_C* FavoritesFP; // 0x498(0x08)
	int32_t SelectedIndex; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct FMulticastInlineDelegate OnItemClicked; // 0x4a8(0x10)
	struct FMulticastInlineDelegate OnEntryInitialized; // 0x4b8(0x10)
	struct UFP_CollectionsEquippableSkinRarityTier_C* RarityFilterProvider; // 0x4c8(0x08)
	bool LimitedFilterDisplay; // 0x4d0(0x01)
	char pad_4D1[0x3]; // 0x4d1(0x03)
	int32_t DefaultSelectedIndex; // 0x4d4(0x04)
	bool HideFavoriteFilter; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	struct FAresListConfiguration ListConfiguration; // 0x4e0(0x38)
	struct FAresPaginatedListConfiguration PaginationConfiguration; // 0x518(0x0c)
	char pad_524[0x4]; // 0x524(0x04)
	struct FMulticastInlineDelegate OnListItemSelected; // 0x528(0x10)
	struct UUserWidget* Entry Widget Class; // 0x538(0x08)
	struct TArray<struct USortProviderBase_C*> SortProviders; // 0x540(0x10)
	struct FMulticastInlineDelegate OnPageInformationChanged; // 0x550(0x10)
	struct UBaseHandle* LastSelectedItemHandle; // 0x560(0x08)
	bool LoadDataOnConstruction; // 0x568(0x01)
	char pad_569[0x7]; // 0x569(0x07)
	struct FMulticastInlineDelegate OnFiltersFocusChanged; // 0x570(0x10)
	bool IsActivated; // 0x580(0x01)
	bool InitialSelected; // 0x581(0x01)
	char pad_582[0x6]; // 0x582(0x06)
	struct FText SearchText; // 0x588(0x18)

	enum class EActivationPreference GetActivationPreferenceForAction(struct FAresConditionalInputAction Action); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.GetActivationPreferenceForAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSelectedGridElement(struct UObject* Item); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.SetSelectedGridElement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnGridElementSelection(struct UObject* Item); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.OnGridElementSelection // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Overwrite Last Selected Item Handle(struct UBaseHandle* inLastSelectedItemHandle); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.Overwrite Last Selected Item Handle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitContentGridMV(); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.InitContentGridMV // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool IsLastSelectedItemInList(struct TArray<struct UObject*>& Array); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.IsLastSelectedItemInList // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Grid Items Updated(struct TArray<struct UObject*>& NewListItems); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.Handle Grid Items Updated // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FindFirstValidHandle(struct TArray<struct UObject*>& InListItems, struct UBaseHandle*& AsBase Handle); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.FindFirstValidHandle // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsEquippedItem(struct UObject* InGridItem, bool& IsEquipped); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.IsEquippedItem // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsEquippedBuddy(struct UObject* InGridItem, bool& IsEquippedBuddy); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.IsEquippedBuddy // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FindFirstEquippedOrValidHandle(struct TArray<struct UObject*>& InListItems, struct UBaseHandle*& AsBase Handle); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.FindFirstEquippedOrValidHandle // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Trigger Filters Focus Changed Event(); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.Trigger Filters Focus Changed Event // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Reselect the Last Seleted Item(); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.Reselect the Last Seleted Item // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateActiveFilterIndicator(); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.UpdateActiveFilterIndicator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void hasActiveFilter(bool& hasActiveFilter); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.hasActiveFilter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFilterChanged(); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.OnFilterChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupSearchBarCallback(); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.SetupSearchBarCallback // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Search Bar Unhoverd(struct UCommonButtonBase* Button); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.On Search Bar Unhoverd // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Search Bar Hovered(struct UCommonButtonBase* Button); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.On Search Bar Hovered // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetFilterProviderNavParameters(); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.SetFilterProviderNavParameters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeSortProviders(); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.InitializeSortProviders // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetDisplayedWidgetWithHandle(struct UBaseHandle* Handle, struct UWidget*& Item Widget); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.GetDisplayedWidgetWithHandle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldShowEquipAction(bool bIsEquipped, bool bIsUnlocked, bool& bShowActive); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.ShouldShowEquipAction // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ResetSortProviders(); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.ResetSortProviders // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddSortProvider(struct TScriptInterface<ISortProvider> SortProvider); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.AddSortProvider // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnOwnedFilterUpdated(); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.OnOwnedFilterUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsFocusingFilters(bool& bOut); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.IsFocusingFilters // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void InitializeContentItemDisplay(struct UWBP_View_ContentItemDisplay_C* Widget, struct UObject* Item); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.InitializeContentItemDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearContentItems(); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.ClearContentItems // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSearchFilter(struct FText SearchText); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.UpdateSearchFilter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateOwnedFilter(bool bShowUnowned); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.UpdateOwnedFilter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshContentGrid(); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.RefreshContentGrid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitGridViewModel(); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.InitGridViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindContentGridEvents(bool bBind); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.BindContentGridEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeFilterProvider(); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.InitializeFilterProvider // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleContentItemsChanged(struct TArray<struct UBaseHandle*>& InContentItems); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.HandleContentItemsChanged // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_CollectionsContentGrid_UnownedToggle_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.BndEvt__WBP_Panel_CollectionsContentGrid_UnownedToggle_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_CollectionsContentGrid_FilterButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.BndEvt__WBP_Panel_CollectionsContentGrid_FilterButton_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_CollectionsContentGrid_FilterButton_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.BndEvt__WBP_Panel_CollectionsContentGrid_FilterButton_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_CollectionsContentGrid_SearchBar_K2Node_ComponentBoundEvent_10_OnTextChanged__DelegateSignature(struct FText Text); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.BndEvt__WBP_Panel_CollectionsContentGrid_SearchBar_K2Node_ComponentBoundEvent_10_OnTextChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnSelectedChangedBase_Event_1(struct UCommonButtonBase* Button, bool Selected); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.OnSelectedChangedBase_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_CollectionsContentGrid_UnownedToggle_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.BndEvt__WBP_Panel_CollectionsContentGrid_UnownedToggle_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_CollectionsContentGrid_ContentGrid_New_K2Node_ComponentBoundEvent_2_OnEntryObjectAndWidgetChanged__DelegateSignature(struct UObject* EntryObject, struct UUserWidget* EntryWidget); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.BndEvt__WBP_Panel_CollectionsContentGrid_ContentGrid_New_K2Node_ComponentBoundEvent_2_OnEntryObjectAndWidgetChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_CollectionsContentGrid_ContentGrid_K2Node_ComponentBoundEvent_1_OnCurrentAndTotalPageChanged__DelegateSignature(int32_t CurrentPage, int32_t TotalPages); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.BndEvt__WBP_Panel_CollectionsContentGrid_ContentGrid_K2Node_ComponentBoundEvent_1_OnCurrentAndTotalPageChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_CollectionsContentGrid_ConvergedCollectionsFilter_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.BndEvt__WBP_Panel_CollectionsContentGrid_ConvergedCollectionsFilter_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnChildItemClicked(struct UObject* Item); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.OnChildItemClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_CollectionsContentGrid_ContentGrid_K2Node_ComponentBoundEvent_3_OnEntryObjectWidgetAndStateChanged__DelegateSignature(struct UObject* EntryObject, struct UUserWidget* EntryWidget, bool EntryState); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.BndEvt__WBP_Panel_CollectionsContentGrid_ContentGrid_K2Node_ComponentBoundEvent_3_OnEntryObjectWidgetAndStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_CollectionsContentGrid_ContentGrid_New_K2Node_ComponentBoundEvent_4_OnEntryObjectAndWidgetChanged__DelegateSignature(struct UObject* EntryObject, struct UUserWidget* EntryWidget); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.BndEvt__WBP_Panel_CollectionsContentGrid_ContentGrid_New_K2Node_ComponentBoundEvent_4_OnEntryObjectAndWidgetChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_CollectionsContentGrid_ConvergedCollectionsFilter_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.BndEvt__WBP_Panel_CollectionsContentGrid_ConvergedCollectionsFilter_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_CollectionsContentGrid_FilterButton_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.BndEvt__WBP_Panel_CollectionsContentGrid_FilterButton_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_CollectionsContentGrid_UnownedToggle_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.BndEvt__WBP_Panel_CollectionsContentGrid_UnownedToggle_K2Node_ComponentBoundEvent_12_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_CollectionsContentGrid_SearchBar_K2Node_ComponentBoundEvent_14_OnHovered__DelegateSignature(); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.BndEvt__WBP_Panel_CollectionsContentGrid_SearchBar_K2Node_ComponentBoundEvent_14_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_CollectionsContentGrid_SearchBar_K2Node_ComponentBoundEvent_15_OnFocused__DelegateSignature(); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.BndEvt__WBP_Panel_CollectionsContentGrid_SearchBar_K2Node_ComponentBoundEvent_15_OnFocused__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_CollectionsContentGrid_ConvergedCollectionsFilter_K2Node_ComponentBoundEvent_16_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.BndEvt__WBP_Panel_CollectionsContentGrid_ConvergedCollectionsFilter_K2Node_ComponentBoundEvent_16_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_CollectionsContentGrid_ContentGrid_K2Node_ComponentBoundEvent_13_OnEntryObjectWidgetAndStateChanged__DelegateSignature(struct UObject* EntryObject, struct UUserWidget* EntryWidget, bool EntryState); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.BndEvt__WBP_Panel_CollectionsContentGrid_ContentGrid_K2Node_ComponentBoundEvent_13_OnEntryObjectWidgetAndStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_CollectionsContentGrid(int32_t EntryPoint); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.ExecuteUbergraph_WBP_Panel_CollectionsContentGrid // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnFiltersFocusChanged__DelegateSignature(bool hasFocus); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.OnFiltersFocusChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPageInformationChanged__DelegateSignature(int32_t CurrentPage, int32_t TotalPages); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.OnPageInformationChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnListItemSelected__DelegateSignature(struct UBaseHandle* ListItem); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.OnListItemSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEntryInitialized__DelegateSignature(struct UObject* Item, struct UWidget* Widget); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.OnEntryInitialized__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnItemClicked__DelegateSignature(struct UObject* Item); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.OnItemClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInputActionPreferenceChanged__DelegateSignature(); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.OnInputActionPreferenceChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnContentItemSelected__DelegateSignature(struct UContentItemObject_C* ContentItem); // Function WBP_Panel_CollectionsContentGrid.WBP_Panel_CollectionsContentGrid_C.OnContentItemSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

