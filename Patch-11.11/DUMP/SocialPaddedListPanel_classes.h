// WidgetBlueprintGeneratedClass SocialPaddedListPanel.SocialPaddedListPanel_C
// Size: 0x438 (Inherited: 0x318)
struct USocialPaddedListPanel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UGridPanel* GridPanel_Content; // 0x320(0x08)
	struct TArray<struct UGridSlot*> ChildGridSlots; // 0x328(0x10)
	enum class EAresTouchSwipeDirection SortDirection; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	struct FMargin ChildSlotPadding; // 0x33c(0x10)
	enum class EHorizontalAlignment ChildSlotHorizontalAlignment; // 0x34c(0x01)
	enum class EVerticalAlignment ChildSlotVertical Alignment; // 0x34d(0x01)
	char pad_34E[0x2]; // 0x34e(0x02)
	struct FMulticastInlineDelegate ChildCountChanged; // 0x350(0x10)
	struct TMap<struct UGridSlot*, struct UUserWidget*> ChildGridSlotToWidgetDict; // 0x360(0x50)
	struct FMulticastInlineDelegate ChildVisibilityChanged; // 0x3b0(0x10)
	int32_t PrimaryLineCount; // 0x3c0(0x04)
	char pad_3C4[0x4]; // 0x3c4(0x04)
	struct TArray<struct UGridSlot*> FillerGridSlots; // 0x3c8(0x10)
	struct TMap<struct UGridSlot*, struct UUserWidget*> FillerGridSlotToWidgetDict; // 0x3d8(0x50)
	struct FMulticastInlineDelegate OnFocusedItemRemoved; // 0x428(0x10)

	void GetAllChildren(struct TArray<struct UUserWidget*>& Widgets); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.GetAllChildren // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetChildIndex(struct UUserWidget* ChildWidget, int32_t& Index); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.GetChildIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SortList(struct TArray<struct UUserWidget*>& WidgetList); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.SortList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSortDirection(enum class EAresTouchSwipeDirection SortDirection); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.SetSortDirection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ValidateFillerCount(); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.ValidateFillerCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateFillerWidgets(); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.UpdateFillerWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AllChildrenAreCollapsed(bool& Result); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.AllChildrenAreCollapsed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetChildAt(int32_t ListIndex, struct UUserWidget*& Widget); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.GetChildAt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetChildCount(int32_t& Count); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.GetChildCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetGridPosition(int32_t Index, int32_t& Row, int32_t& Column); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.GetGridPosition // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Handle Child Count Changed(); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.Handle Child Count Changed // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BroadcastChildVisibilityChanged(); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.BroadcastChildVisibilityChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleChildVisibilityChanged(enum class ESlateVisibility Visibility); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.HandleChildVisibilityChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearChildren(); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.ClearChildren // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveChild(struct UUserWidget* Content, bool& WasRemoved); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.RemoveChild // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AppendChild(struct UUserWidget* Content); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.AppendChild // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InsertChild(struct UUserWidget* Content, int32_t Index); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.InsertChild // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RepositionElements(int32_t StartingIndex); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.RepositionElements // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetChildSlotVerticalAlignment(enum class EVerticalAlignment NewVerticalAlignment); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.SetChildSlotVerticalAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetChildSlotHorizontalAlignment(enum class EHorizontalAlignment NewHorizontalAlignment); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.SetChildSlotHorizontalAlignment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetChildSlotPadding(struct FMargin NewChildSlotPadding); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.SetChildSlotPadding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPrimaryLineCount(int32_t PrimaryLineCount); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.SetPrimaryLineCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_SocialPaddedListPanel(int32_t EntryPoint); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.ExecuteUbergraph_SocialPaddedListPanel // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnFocusedItemRemoved__DelegateSignature(struct USocialPaddedListPanel_C* List, struct UUserWidget* RemovedItem, int32_t RemovedItemIndex); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.OnFocusedItemRemoved__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ChildVisibilityChanged__DelegateSignature(); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.ChildVisibilityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ChildCountChanged__DelegateSignature(int32_t Count); // Function SocialPaddedListPanel.SocialPaddedListPanel_C.ChildCountChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

