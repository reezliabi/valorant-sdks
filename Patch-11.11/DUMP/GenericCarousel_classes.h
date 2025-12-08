// WidgetBlueprintGeneratedClass GenericCarousel.GenericCarousel_C
// Size: 0x3db (Inherited: 0x318)
struct UGenericCarousel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UButton* CheckboxLabelButton; // 0x320(0x08)
	struct UHorizontalBox* Filter; // 0x328(0x08)
	struct UTextBlock* IndexText; // 0x330(0x08)
	struct UInfiniteCarouselV2_C* InfiniteCarouselV2; // 0x338(0x08)
	struct UScaleBox* ItemCountBottom; // 0x340(0x08)
	struct USizeBox* ItemCountContainer; // 0x348(0x08)
	struct UScaleBox* ItemCountTop; // 0x350(0x08)
	struct UButton* previousItemButtonLeft; // 0x358(0x08)
	struct UButton* previousItemButtonRight; // 0x360(0x08)
	struct UVerticalBox* RootVBoxContainer; // 0x368(0x08)
	struct UButton* ScrollToStartButton; // 0x370(0x08)
	struct USharedClickableCheckboxButton_C* SharedClickableCheckboxButton; // 0x378(0x08)
	struct FVector2D EntrySize; // 0x380(0x10)
	int32_t EntriesPerSide; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct UUserWidget* PreviewEntryClassOverride; // 0x398(0x08)
	struct FMulticastInlineDelegate OnObjectSelected; // 0x3a0(0x10)
	struct UGenericCarouselObject_C* StartingObject; // 0x3b0(0x08)
	struct UUserWidget* EntryClassOverride; // 0x3b8(0x08)
	bool ShowFilters; // 0x3c0(0x01)
	bool ItemCountOnTop; // 0x3c1(0x01)
	char pad_3C2[0x6]; // 0x3c2(0x06)
	struct FMulticastInlineDelegate OnOwnershipChanged; // 0x3c8(0x10)
	bool PreventOnOwnershipChangedDispatch; // 0x3d8(0x01)
	bool PreventSavingSettings; // 0x3d9(0x01)
	bool EnableOwnershipDispatch; // 0x3da(0x01)

	void IsFilterEnabled(bool& IsEnabled); // Function GenericCarousel.GenericCarousel_C.IsFilterEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateIndexText(); // Function GenericCarousel.GenericCarousel_C.UpdateIndexText // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetStartingHandle(struct UBaseHandle* BaseHandle); // Function GenericCarousel.GenericCarousel_C.SetStartingHandle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SelectHandle(struct UBaseHandle* BaseHandle); // Function GenericCarousel.GenericCarousel_C.SelectHandle // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayCheckboxToggleSfx(); // Function GenericCarousel.GenericCarousel_C.PlayCheckboxToggleSfx // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnOwnershipFilterChanged(bool IsEnabled, bool ForceUpdateAndRedraw); // Function GenericCarousel.GenericCarousel_C.OnOwnershipFilterChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSorter(struct UObject* A, struct UObject* B, bool& Value); // Function GenericCarousel.GenericCarousel_C.HandleSorter // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FilterHandles(struct TArray<struct UBaseHandle*>& InHandles, struct TArray<struct UBaseHandle*>& OutHandles); // Function GenericCarousel.GenericCarousel_C.FilterHandles // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SaveCollectionShowOwnedOnlySetting(bool IsEnabled); // Function GenericCarousel.GenericCarousel_C.SaveCollectionShowOwnedOnlySetting // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ChangeOwnershipFilter(bool IsEnabled); // Function GenericCarousel.GenericCarousel_C.ChangeOwnershipFilter // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AreHandlesEqual(struct UObject* ValueA, struct UObject* ValueB, bool& Equal); // Function GenericCarousel.GenericCarousel_C.AreHandlesEqual // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateVisibility(bool IsVisible, bool OverrideFiltersBtn, enum class ESlateVisibility Override Filters Btn Visibility); // Function GenericCarousel.GenericCarousel_C.UpdateVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateOwnershipFilter(bool IsEnabled, bool PreventOnOwnershipChangedDispatch, bool PreventSavingSettings); // Function GenericCarousel.GenericCarousel_C.UpdateOwnershipFilter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Reset(); // Function GenericCarousel.GenericCarousel_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void JumpToHandle(struct UBaseHandle* BaseHandle); // Function GenericCarousel.GenericCarousel_C.JumpToHandle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetCurrentObject(struct UObject*& Object, int32_t& Quantity); // Function GenericCarousel.GenericCarousel_C.GetCurrentObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void AddObject(struct UObject* Object, int32_t Quantity, struct FAdditionalCarouselObjectContext AdditionalContext); // Function GenericCarousel.GenericCarousel_C.AddObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FilterOwned(struct UObject* Object, bool& Visible); // Function GenericCarousel.GenericCarousel_C.FilterOwned // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FilterAll(struct UObject* Object, bool& Visible); // Function GenericCarousel.GenericCarousel_C.FilterAll // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddHandles(struct TArray<struct UBaseHandle*>& Handles); // Function GenericCarousel.GenericCarousel_C.AddHandles // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__previousItemButtonLeft_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function GenericCarousel.GenericCarousel_C.BndEvt__previousItemButtonLeft_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__previousItemButtonRight_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function GenericCarousel.GenericCarousel_C.BndEvt__previousItemButtonRight_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function GenericCarousel.GenericCarousel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__InfiniteCarouselV2_K2Node_ComponentBoundEvent_3_OnObjectChanged__DelegateSignature(struct UObject* NewValue); // Function GenericCarousel.GenericCarousel_C.BndEvt__InfiniteCarouselV2_K2Node_ComponentBoundEvent_3_OnObjectChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ScrollToStartButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature(); // Function GenericCarousel.GenericCarousel_C.BndEvt__ScrollToStartButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__SharedClickableCheckboxButton_K2Node_ComponentBoundEvent_6_OnCheckedChanged__DelegateSignature(bool NewState); // Function GenericCarousel.GenericCarousel_C.BndEvt__SharedClickableCheckboxButton_K2Node_ComponentBoundEvent_6_OnCheckedChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__CheckboxLabelButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature(); // Function GenericCarousel.GenericCarousel_C.BndEvt__CheckboxLabelButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function GenericCarousel.GenericCarousel_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_GenericCarousel(int32_t EntryPoint); // Function GenericCarousel.GenericCarousel_C.ExecuteUbergraph_GenericCarousel // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnOwnershipChanged__DelegateSignature(bool IsChecked, bool HasMatchingContent); // Function GenericCarousel.GenericCarousel_C.OnOwnershipChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnObjectSelected__DelegateSignature(struct UObject* Object); // Function GenericCarousel.GenericCarousel_C.OnObjectSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

