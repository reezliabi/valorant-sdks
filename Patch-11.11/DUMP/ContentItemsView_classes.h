// WidgetBlueprintGeneratedClass ContentItemsView.ContentItemsView_C
// Size: 0x3c0 (Inherited: 0x338)
struct UContentItemsView_C : UContentItemsView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct FMulticastInlineDelegate OnObjectSelected; // 0x340(0x10)
	struct UArrayListModel* ListModel; // 0x350(0x08)
	struct UFilteredListModel* FilteredListModel; // 0x358(0x08)
	struct USortedListModel* SortedListModel; // 0x360(0x08)
	struct TArray<struct UFilterProviderBase_C*> FilterProviders; // 0x368(0x10)
	struct TArray<struct USortProviderBase_C*> SortProviders; // 0x378(0x10)
	bool UseDefaultSortProvider; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	double EntryHeight; // 0x390(0x08)
	double EntryWidth; // 0x398(0x08)
	enum class EListItemAlignment EntryAlignment; // 0x3a0(0x01)
	enum class EOrientation Orientation; // 0x3a1(0x01)
	char pad_3A2[0x6]; // 0x3a2(0x06)
	double EntrySpacing; // 0x3a8(0x08)
	bool FillWithPlaceholders; // 0x3b0(0x01)
	bool Refreshing; // 0x3b1(0x01)
	char pad_3B2[0x6]; // 0x3b2(0x06)
	struct UObject* SelectedObject; // 0x3b8(0x08)

	void ClearFilterProviders(); // Function ContentItemsView.ContentItemsView_C.ClearFilterProviders // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearSortProviders(); // Function ContentItemsView.ContentItemsView_C.ClearSortProviders // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddFilterProvider(struct UFilterProviderBase_C*& FilterProvider); // Function ContentItemsView.ContentItemsView_C.AddFilterProvider // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddSortProvider(struct USortProviderBase_C* SortProvider); // Function ContentItemsView.ContentItemsView_C.AddSortProvider // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetSelectedObject(struct UContentItemObject_C*& NewParam); // Function ContentItemsView.ContentItemsView_C.GetSelectedObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SelectHandle(struct UBaseHandle* BaseHandle, bool ScrollIntoView, bool SelectFromFullList); // Function ContentItemsView.ContentItemsView_C.SelectHandle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SelectObject(struct UObject* Object, bool ScrollIntoView); // Function ContentItemsView.ContentItemsView_C.SelectObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveAllObjects(); // Function ContentItemsView.ContentItemsView_C.RemoveAllObjects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetViewItemsForRefresh(struct TArray<struct FWildcard>& Items); // Function ContentItemsView.ContentItemsView_C.GetViewItemsForRefresh // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Refresh View Items(); // Function ContentItemsView.ContentItemsView_C.Refresh View Items // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResortItems(); // Function ContentItemsView.ContentItemsView_C.ResortItems // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool SortItem(struct FWildcard& ValueA, struct FWildcard& ValueB); // Function ContentItemsView.ContentItemsView_C.SortItem // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefilterItems(); // Function ContentItemsView.ContentItemsView_C.RefilterItems // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool Filter Item(struct FWildcard& Value); // Function ContentItemsView.ContentItemsView_C.Filter Item // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool KeyMatchFunction(struct FWildcard& Item, struct FWildcard& Key); // Function ContentItemsView.ContentItemsView_C.KeyMatchFunction // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FilterHandles(struct TArray<struct UBaseHandle*>& InHandles, struct TArray<struct UBaseHandle*>& OutHandles); // Function ContentItemsView.ContentItemsView_C.FilterHandles // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AreHandlesEqual(struct UObject* ValueA, struct UObject* ValueB, bool& Equal); // Function ContentItemsView.ContentItemsView_C.AreHandlesEqual // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HandleSorter(struct UObject* A, struct UObject* B, bool& Value); // Function ContentItemsView.ContentItemsView_C.HandleSorter // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddHandles(struct TArray<struct UBaseHandle*>& Handles); // Function ContentItemsView.ContentItemsView_C.AddHandles // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddObjects(struct TArray<struct UObject*>& Objects); // Function ContentItemsView.ContentItemsView_C.AddObjects // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddObject(struct UObject* Object, int32_t Quantity); // Function ContentItemsView.ContentItemsView_C.AddObject // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetObjects(struct TArray<struct UObject*>& Objects); // Function ContentItemsView.ContentItemsView_C.SetObjects // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnModelChanged(struct UObject* Source, struct FOrderedListModelChangeEventData& EventData); // Function ContentItemsView.ContentItemsView_C.OnModelChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function ContentItemsView.ContentItemsView_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function ContentItemsView.ContentItemsView_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ListViewItemSelectionChanged(struct UObject* Item, bool bIsSelected); // Function ContentItemsView.ContentItemsView_C.ListViewItemSelectionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function ContentItemsView.ContentItemsView_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function ContentItemsView.ContentItemsView_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_ContentItemsView(int32_t EntryPoint); // Function ContentItemsView.ContentItemsView_C.ExecuteUbergraph_ContentItemsView // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnObjectSelected__DelegateSignature(struct UContentItemObject_C* ContentItemObject); // Function ContentItemsView.ContentItemsView_C.OnObjectSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

