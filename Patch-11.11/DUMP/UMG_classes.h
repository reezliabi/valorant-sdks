// Class UMG.Visual
// Size: 0x30 (Inherited: 0x30)
struct UVisual : UObject {
};

// Class UMG.Widget
// Size: 0x1b8 (Inherited: 0x30)
struct UWidget : UVisual {
	char pad_30[0x8]; // 0x30(0x08)
	struct UPanelSlot* Slot; // 0x38(0x08)
	struct FName TagOverride; // 0x40(0x0c)
	struct FName Tag; // 0x4c(0x0c)
	struct FDelegate bIsEnabledDelegate; // 0x58(0x14)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FText ToolTipText; // 0x70(0x18)
	struct FDelegate ToolTipTextDelegate; // 0x88(0x14)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct UWidget* ToolTipWidget; // 0xa0(0x08)
	struct FDelegate ToolTipWidgetDelegate; // 0xa8(0x14)
	struct FDelegate VisibilityDelegate; // 0xbc(0x14)
	struct FWidgetTransform RenderTransform; // 0xd0(0x38)
	struct FVector2D RenderTransformPivot; // 0x108(0x10)
	enum class EFlowDirectionPreference FlowDirectionPreference; // 0x118(0x01)
	char bIsVariable : 1; // 0x119(0x01)
	char bCreatedByConstructionScript : 1; // 0x119(0x01)
	char bIsEnabled : 1; // 0x119(0x01)
	char bOverride_Cursor : 1; // 0x119(0x01)
	char bIsVolatile : 1; // 0x119(0x01)
	char pad_119_5 : 3; // 0x119(0x01)
	enum class EMouseCursor Cursor; // 0x11a(0x01)
	enum class EWidgetClipping Clipping; // 0x11b(0x01)
	enum class ESlateVisibility Visibility; // 0x11c(0x01)
	enum class ESlateQuality Quality; // 0x11d(0x01)
	char pad_11E[0x2]; // 0x11e(0x02)
	float RenderOpacity; // 0x120(0x04)
	enum class EWidgetPixelSnapping PixelSnapping; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
	struct USlateAccessibleWidgetData* AccessibleWidgetData; // 0x128(0x08)
	struct UWidgetNavigation* Navigation; // 0x130(0x08)
	char pad_138[0x50]; // 0x138(0x50)
	struct TArray<struct UPropertyBinding*> NativeBindings; // 0x188(0x10)
	char pad_198[0x20]; // 0x198(0x20)

	void SetVisibility(enum class ESlateVisibility InVisibility); // Function UMG.Widget.SetVisibility // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a7710
	void SetUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.SetUserFocus // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a6330
	void SetToolTipText(struct FText& InToolTipText); // Function UMG.Widget.SetToolTipText // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x38a7c90
	void SetToolTip(struct UWidget* Widget); // Function UMG.Widget.SetToolTip // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a7ba0
	void SetTagOverride(struct FName InTag); // Function UMG.Widget.SetTagOverride // (Final|Native|Public|BlueprintCallable) // @ game+0x38a7140
	void SetRenderTranslation(struct FVector2D Translation); // Function UMG.Widget.SetRenderTranslation // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x38a8040
	void SetRenderTransformPivot(struct FVector2D Pivot); // Function UMG.Widget.SetRenderTransformPivot // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x38a7f50
	void SetRenderTransformAngle(float Angle); // Function UMG.Widget.SetRenderTransformAngle // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a8150
	void SetRenderTransform(struct FWidgetTransform InTransform); // Function UMG.Widget.SetRenderTransform // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a8430
	void SetRenderShear(struct FVector2D Shear); // Function UMG.Widget.SetRenderShear // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x38a8250
	void SetRenderScale(struct FVector2D Scale); // Function UMG.Widget.SetRenderScale // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x38a8340
	void SetRenderOpacity(float InOpacity); // Function UMG.Widget.SetRenderOpacity // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a7370
	void SetQuality(enum class ESlateQuality InQuality); // Function UMG.Widget.SetQuality // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a7490
	void SetNavigationRuleExplicit(enum class EUINavigation Direction, struct UWidget* InWidget); // Function UMG.Widget.SetNavigationRuleExplicit // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a5ad0
	void SetNavigationRuleCustomBoundary(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustomBoundary // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a56f0
	void SetNavigationRuleCustom(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustom // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a58e0
	void SetNavigationRuleBase(enum class EUINavigation Direction, enum class EUINavigationRule Rule); // Function UMG.Widget.SetNavigationRuleBase // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a5cc0
	void SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetNavigationRule // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a5ec0
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a6b30
	void SetIsEnabled(bool bInIsEnabled); // Function UMG.Widget.SetIsEnabled // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a7e20
	void SetFocus(); // Function UMG.Widget.SetFocus // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a6580
	void SetCursor(enum class EMouseCursor InCursor); // Function UMG.Widget.SetCursor // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a7ab0
	void SetClipping(enum class EWidgetClipping InClipping); // Function UMG.Widget.SetClipping // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a7250
	void SetAllNavigationRules(enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetAllNavigationRules // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a6110
	void ResetCursor(); // Function UMG.Widget.ResetCursor // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a7990
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a5690
	struct FEventReply OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature // (Public|Delegate) // @ game+0x19be2f0
	struct FEventReply OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature // (Public|Delegate|HasOutParms) // @ game+0x19be2f0
	void K2_RemoveFieldValueChangedDelegate(struct FFieldNotificationId FieldId, struct FDelegate Delegate); // Function UMG.Widget.K2_RemoveFieldValueChangedDelegate // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a5000
	void K2_BroadcastFieldValueChanged(struct FFieldNotificationId FieldId); // Function UMG.Widget.K2_BroadcastFieldValueChanged // (Final|RequiredAPI|Native|Protected|BlueprintCallable) // @ game+0x38a4e00
	void K2_AddFieldValueChangedDelegate(struct FFieldNotificationId FieldId, struct FDelegate Delegate); // Function UMG.Widget.K2_AddFieldValueChangedDelegate // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a5320
	bool IsVisible(); // Function UMG.Widget.IsVisible // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a7840
	bool IsRendered(); // Function UMG.Widget.IsRendered // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a7870
	bool IsInViewport(); // Function UMG.Widget.IsInViewport // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a7db0
	bool IsHovered(); // Function UMG.Widget.IsHovered // (RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a7000
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a62f0
	bool HasUserFocusedDescendants(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocusedDescendants // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a65c0
	bool HasUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocus // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a6910
	bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex); // Function UMG.Widget.HasMouseCaptureByUser // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a6b50
	bool HasMouseCapture(); // Function UMG.Widget.HasMouseCapture // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a6de0
	bool HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a6ef0
	bool HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a67c0
	bool HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a67f0
	struct UWidget* GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature // (Public|Delegate) // @ game+0x19be2f0
	enum class ESlateVisibility GetVisibility(); // Function UMG.Widget.GetVisibility // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a7810
	struct FGeometry GetTickSpaceGeometry(); // Function UMG.Widget.GetTickSpaceGeometry // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a5640
	struct FText GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature // (Public|Delegate) // @ game+0x19be2f0
	enum class ESlateVisibility GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature // (Public|Delegate) // @ game+0x19be2f0
	struct FSlateColor GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature // (Public|Delegate) // @ game+0x19be2f0
	struct FSlateBrush GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature // (Public|Delegate) // @ game+0x19be2f0
	float GetRenderTransformAngle(); // Function UMG.Widget.GetRenderTransformAngle // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a8130
	float GetRenderOpacity(); // Function UMG.Widget.GetRenderOpacity // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a7460
	enum class ESlateQuality GetQuality(); // Function UMG.Widget.GetQuality // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a7590
	struct UPanelWidget* GetParent(); // Function UMG.Widget.GetParent // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a56c0
	struct FGeometry GetPaintSpaceGeometry(); // Function UMG.Widget.GetPaintSpaceGeometry // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a55f0
	struct APlayerController* GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer // (RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a4d70
	struct ULocalPlayer* GetOwningLocalPlayer(); // Function UMG.Widget.GetOwningLocalPlayer // (RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a4d30
	enum class EMouseCursor GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature // (Public|Delegate) // @ game+0x19be2f0
	struct FLinearColor GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature // (Public|Delegate|HasDefaults) // @ game+0x19be2f0
	bool GetIsEnabled(); // Function UMG.Widget.GetIsEnabled // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a7f20
	int32_t GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature // (Public|Delegate) // @ game+0x19be2f0
	struct UGameInstance* GetGameInstance(); // Function UMG.Widget.GetGameInstance // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a4db0
	float GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature // (Public|Delegate) // @ game+0x19be2f0
	struct FVector2D GetDesiredSize(); // Function UMG.Widget.GetDesiredSize // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a62b0
	enum class EWidgetClipping GetClipping(); // Function UMG.Widget.GetClipping // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a7340
	enum class ECheckBoxState GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature // (Public|Delegate) // @ game+0x19be2f0
	struct FGeometry GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a5640
	bool GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature // (Public|Delegate) // @ game+0x19be2f0
	struct FText GetAccessibleText(); // Function UMG.Widget.GetAccessibleText // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a4ce0
	struct FText GetAccessibleSummaryText(); // Function UMG.Widget.GetAccessibleSummaryText // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a4c90
	struct UWidget* GenerateWidgetForString__DelegateSignature(struct FString Item); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature // (Public|Delegate) // @ game+0x19be2f0
	struct UWidget* GenerateWidgetForObject__DelegateSignature(struct UObject* Item); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature // (Public|Delegate) // @ game+0x19be2f0
	void ForceVolatile(bool bForce); // Function UMG.Widget.ForceVolatile // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a7040
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a6310
};

// Class UMG.ListViewBase
// Size: 0x2d0 (Inherited: 0x1b8)
struct UListViewBase : UWidget {
	struct FMulticastInlineDelegate BP_OnEntryGenerated; // 0x1b8(0x10)
	char pad_1C8[0x10]; // 0x1c8(0x10)
	struct UUserWidget* EntryWidgetClass; // 0x1d8(0x08)
	float WheelScrollMultiplier; // 0x1e0(0x04)
	bool bEnableScrollAnimation; // 0x1e4(0x01)
	bool AllowOverscroll; // 0x1e5(0x01)
	bool bEnableRightClickScrolling; // 0x1e6(0x01)
	bool bEnableFixedLineOffset; // 0x1e7(0x01)
	float FixedLineScrollOffset; // 0x1e8(0x04)
	bool bAllowDragging; // 0x1ec(0x01)
	char pad_1ED[0x3]; // 0x1ed(0x03)
	struct FMulticastInlineDelegate BP_OnEntryReleased; // 0x1f0(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x200(0x88)
	char pad_288[0x48]; // 0x288(0x48)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ListViewBase.SetWheelScrollMultiplier // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3870ec0
	void SetScrollOffset(float InScrollOffset); // Function UMG.ListViewBase.SetScrollOffset // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3870fe0
	void SetScrollbarVisibility(enum class ESlateVisibility InVisibility); // Function UMG.ListViewBase.SetScrollbarVisibility // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3870dd0
	void ScrollToTop(); // Function UMG.ListViewBase.ScrollToTop // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3871110
	void ScrollToBottom(); // Function UMG.ListViewBase.ScrollToBottom // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38710e0
	void RequestRefresh(); // Function UMG.ListViewBase.RequestRefresh // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3870d90
	void RegenerateAllEntries(); // Function UMG.ListViewBase.RegenerateAllEntries // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3871140
	float GetScrollOffset(); // Function UMG.ListViewBase.GetScrollOffset // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3871160
	struct TArray<struct UUserWidget*> GetDisplayedEntryWidgets(); // Function UMG.ListViewBase.GetDisplayedEntryWidgets // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38711a0
};

// Class UMG.ListView
// Size: 0xcb0 (Inherited: 0x2d0)
struct UListView : UListViewBase {
	char pad_2D0[0xf0]; // 0x2d0(0xf0)
	struct FTableViewStyle WidgetStyle; // 0x3c0(0xe0)
	struct FScrollBarStyle ScrollBarStyle; // 0x4a0(0x770)
	enum class EOrientation Orientation; // 0xc10(0x01)
	enum class ESelectionMode SelectionMode; // 0xc11(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0xc12(0x01)
	bool bClearSelectionOnClick; // 0xc13(0x01)
	bool bIsFocusable; // 0xc14(0x01)
	bool bReturnFocusToSelection; // 0xc15(0x01)
	char pad_C16[0x2]; // 0xc16(0x02)
	struct TArray<struct UObject*> ListItems; // 0xc18(0x10)
	char pad_C28[0x10]; // 0xc28(0x10)
	float HorizontalEntrySpacing; // 0xc38(0x04)
	float VerticalEntrySpacing; // 0xc3c(0x04)
	struct FMulticastInlineDelegate BP_OnEntryInitialized; // 0xc40(0x10)
	struct FMulticastInlineDelegate BP_OnItemClicked; // 0xc50(0x10)
	struct FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0xc60(0x10)
	struct FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0xc70(0x10)
	struct FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0xc80(0x10)
	struct FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0xc90(0x10)
	struct FMulticastInlineDelegate BP_OnListViewScrolled; // 0xca0(0x10)

	void SetSelectionMode(enum class ESelectionMode SelectionMode); // Function UMG.ListView.SetSelectionMode // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x386e8b0
	void SetSelectedIndex(int32_t Index); // Function UMG.ListView.SetSelectedIndex // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x386e5d0
	void ScrollIndexIntoView(int32_t Index); // Function UMG.ListView.ScrollIndexIntoView // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x386e700
	void RemoveItem(struct UObject* Item); // Function UMG.ListView.RemoveItem // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x386ec30
	void OnListItemOuterEndPlayed(struct AActor* ItemOuter, enum class EEndPlayReason EndPlayReason); // Function UMG.ListView.OnListItemOuterEndPlayed // (Final|RequiredAPI|Native|Protected) // @ game+0x386e170
	void OnListItemEndPlayed(struct AActor* Item, enum class EEndPlayReason EndPlayReason); // Function UMG.ListView.OnListItemEndPlayed // (Final|RequiredAPI|Native|Protected) // @ game+0x386e300
	void NavigateToIndex(int32_t Index); // Function UMG.ListView.NavigateToIndex // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x386e490
	bool IsRefreshPending(); // Function UMG.ListView.IsRefreshPending // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x386e860
	float GetVerticalEntrySpacing(); // Function UMG.ListView.GetVerticalEntrySpacing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x386e130
	int32_t GetNumItems(); // Function UMG.ListView.GetNumItems // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x386eaf0
	struct TArray<struct UObject*> GetListItems(); // Function UMG.ListView.GetListItems // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x386f040
	struct UObject* GetItemAt(int32_t Index); // Function UMG.ListView.GetItemAt // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x386eb10
	int32_t GetIndexForItem(struct UObject* Item); // Function UMG.ListView.GetIndexForItem // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x386e9c0
	float GetHorizontalEntrySpacing(); // Function UMG.ListView.GetHorizontalEntrySpacing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x386e150
	void ClearListItems(); // Function UMG.ListView.ClearListItems // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x386e9a0
	void BP_SetSelectedItem(struct UObject* Item); // Function UMG.ListView.BP_SetSelectedItem // (Final|RequiredAPI|Native|Private|BlueprintCallable) // @ game+0x386e030
	void BP_SetListItems(struct TArray<struct UObject*>& InListItems); // Function UMG.ListView.BP_SetListItems // (Final|RequiredAPI|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x386d700
	void BP_SetItemSelection(struct UObject* Item, bool bSelected); // Function UMG.ListView.BP_SetItemSelection // (Final|RequiredAPI|Native|Private|BlueprintCallable) // @ game+0x386de80
	void BP_ScrollItemIntoView(struct UObject* Item); // Function UMG.ListView.BP_ScrollItemIntoView // (Final|RequiredAPI|Native|Private|BlueprintCallable) // @ game+0x386d870
	void BP_NavigateToItem(struct UObject* Item); // Function UMG.ListView.BP_NavigateToItem // (Final|RequiredAPI|Native|Private|BlueprintCallable) // @ game+0x386d9b0
	bool BP_IsItemVisible(struct UObject* Item); // Function UMG.ListView.BP_IsItemVisible // (Final|RequiredAPI|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x386dae0
	bool BP_GetSelectedItems(struct TArray<struct UObject*>& Items); // Function UMG.ListView.BP_GetSelectedItems // (Final|RequiredAPI|Native|Private|HasOutParms|BlueprintCallable|Const) // @ game+0x386dc60
	struct UObject* BP_GetSelectedItem(); // Function UMG.ListView.BP_GetSelectedItem // (Final|RequiredAPI|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x386d6d0
	int32_t BP_GetNumItemsSelected(); // Function UMG.ListView.BP_GetNumItemsSelected // (Final|RequiredAPI|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x386ddd0
	void BP_ClearSelection(); // Function UMG.ListView.BP_ClearSelection // (Final|RequiredAPI|Native|Private|BlueprintCallable) // @ game+0x386de30
	void BP_CancelScrollIntoView(); // Function UMG.ListView.BP_CancelScrollIntoView // (Final|RequiredAPI|Native|Private|BlueprintCallable) // @ game+0x386d830
	void AddItem(struct UObject* Item); // Function UMG.ListView.AddItem // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x386ed20
};

// Class UMG.ListViewDesignerPreviewItem
// Size: 0x30 (Inherited: 0x30)
struct UListViewDesignerPreviewItem : UObject {
};

// Class UMG.SlateAccessibleWidgetData
// Size: 0x98 (Inherited: 0x30)
struct USlateAccessibleWidgetData : UObject {
	bool bCanChildrenBeAccessible; // 0x30(0x01)
	enum class ESlateAccessibleBehavior AccessibleBehavior; // 0x31(0x01)
	enum class ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x32(0x01)
	char pad_33[0x5]; // 0x33(0x05)
	struct FText AccessibleText; // 0x38(0x18)
	struct FDelegate AccessibleTextDelegate; // 0x50(0x14)
	char pad_64[0x4]; // 0x64(0x04)
	struct FText AccessibleSummaryText; // 0x68(0x18)
	struct FDelegate AccessibleSummaryTextDelegate; // 0x80(0x14)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class UMG.TableViewBase
// Size: 0x1b8 (Inherited: 0x1b8)
struct UTableViewBase : UWidget {
};

// Class UMG.UserWidgetBlueprint
// Size: 0xb0 (Inherited: 0xb0)
struct UUserWidgetBlueprint : UBlueprint {
};

// Class UMG.UserWidget
// Size: 0x318 (Inherited: 0x1b8)
struct UUserWidget : UWidget {
	char pad_1B8[0x8]; // 0x1b8(0x08)
	struct FLinearColor ColorAndOpacity; // 0x1c0(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x1d0(0x14)
	struct FSlateColor ForegroundColor; // 0x1e4(0x14)
	struct FDelegate ForegroundColorDelegate; // 0x1f8(0x14)
	char pad_20C[0x4]; // 0x20c(0x04)
	struct FMulticastInlineDelegate OnVisibilityChanged; // 0x210(0x10)
	char pad_220[0x18]; // 0x220(0x18)
	struct FMargin Padding; // 0x238(0x10)
	int32_t Priority; // 0x248(0x04)
	char bIsFocusable : 1; // 0x24c(0x01)
	char bStopAction : 1; // 0x24c(0x01)
	char pad_24C_2 : 6; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
	struct TArray<struct UUMGSequencePlayer*> ActiveSequencePlayers; // 0x250(0x10)
	struct UUMGSequenceTickManager* AnimationTickManager; // 0x260(0x08)
	struct TArray<struct UUMGSequencePlayer*> StoppedSequencePlayers; // 0x268(0x10)
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings; // 0x278(0x10)
	struct TArray<struct UUserWidgetExtension*> Extensions; // 0x288(0x10)
	struct UWidgetTree* WidgetTree; // 0x298(0x08)
	char bFlushPressedKeysOnAcquiringFocusFromViewport : 1; // 0x2a0(0x01)
	char bHasScriptImplementedTick : 1; // 0x2a0(0x01)
	char bHasScriptImplementedPaint : 1; // 0x2a0(0x01)
	char pad_2A0_3 : 5; // 0x2a0(0x01)
	char pad_2A1[0x17]; // 0x2a1(0x17)
	enum class EWidgetTickFrequency TickFrequency; // 0x2b8(0x01)
	char pad_2B9[0x3]; // 0x2b9(0x03)
	struct FWidgetChild DesiredFocusWidget; // 0x2bc(0x14)
	struct UInputComponent* InputComponent; // 0x2d0(0x08)
	struct TArray<struct FAnimationEventBinding> AnimationCallbacks; // 0x2d8(0x10)
	char pad_2E8[0x10]; // 0x2e8(0x10)
	bool bCreateWidgetOnInitAndKeepInMemory; // 0x2f8(0x01)
	char pad_2F9[0x1f]; // 0x2f9(0x1f)

	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3929ca0
	void UnpinSlateWidget(); // Function UMG.UserWidget.UnpinSlateWidget // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3929880
	void UnbindFromAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationStarted // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x392e080
	void UnbindFromAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationFinished // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x392dc10
	void UnbindAllFromAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationStarted // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x392df90
	void UnbindAllFromAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationFinished // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x392db20
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG.UserWidget.Tick // (RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void StopListeningForInputAction(struct FName ActionName, enum class EInputEvent EventType); // Function UMG.UserWidget.StopListeningForInputAction // (Final|RequiredAPI|Native|Protected|BlueprintCallable) // @ game+0x3929da0
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions // (Final|RequiredAPI|Native|Protected|BlueprintCallable) // @ game+0x3929d80
	void StopAnimationsAndLatentActions(); // Function UMG.UserWidget.StopAnimationsAndLatentActions // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x392e400
	void StopAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.StopAnimation // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x392c330
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x392c310
	void SetPositionInViewport(struct FVector2D Position, bool bRemoveDPIScale); // Function UMG.UserWidget.SetPositionInViewport // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x392ec00
	void SetPlaybackSpeed(struct UWidgetAnimation* InAnimation, float PlaybackSpeed); // Function UMG.UserWidget.SetPlaybackSpeed // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x392b840
	void SetPadding(struct FMargin InPadding); // Function UMG.UserWidget.SetPadding // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x392d330
	void SetOwningPlayer(struct APlayerController* LocalPlayerController); // Function UMG.UserWidget.SetOwningPlayer // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x392e4f0
	void SetNumLoopsToPlay(struct UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay); // Function UMG.UserWidget.SetNumLoopsToPlay // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x392ba10
	void SetInputActionPriority(int32_t NewPriority); // Function UMG.UserWidget.SetInputActionPriority // (Final|RequiredAPI|Native|Protected|BlueprintCallable) // @ game+0x3929a50
	void SetInputActionBlocking(bool bShouldBlock); // Function UMG.UserWidget.SetInputActionBlocking // (Final|RequiredAPI|Native|Protected|BlueprintCallable) // @ game+0x3929930
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.UserWidget.SetForegroundColor // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x392d430
	void SetDesiredSizeInViewport(struct FVector2D Size); // Function UMG.UserWidget.SetDesiredSizeInViewport // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x392ea00
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.UserWidget.SetColorAndOpacity // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x392d540
	void SetAnimationCurrentTime(struct UWidgetAnimation* InAnimation, float InTime); // Function UMG.UserWidget.SetAnimationCurrentTime // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x392bd50
	void SetAnchorsInViewport(struct FAnchors Anchors); // Function UMG.UserWidget.SetAnchorsInViewport // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x392e820
	void SetAlignmentInViewport(struct FVector2D Alignment); // Function UMG.UserWidget.SetAlignmentInViewport // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x392e730
	void ReverseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.ReverseAnimation // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x392b6e0
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x38a5690
	void RemoveExtensions(struct UUserWidgetExtension* InExtensionType); // Function UMG.UserWidget.RemoveExtensions // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x392ae40
	void RemoveExtension(struct UUserWidgetExtension* InExtension); // Function UMG.UserWidget.RemoveExtension // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x392af30
	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3929d10
	void PreConstruct(bool IsDesignTime); // Function UMG.UserWidget.PreConstruct // (RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PlaySound(struct USoundBase* SoundToPlay); // Function UMG.UserWidget.PlaySound // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x392ad30
	struct UUMGSequencePlayer* PlayAnimationTimeRange(struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationTimeRange // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x392cac0
	struct UUMGSequencePlayer* PlayAnimationReverse(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationReverse // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x392c480
	struct UUMGSequencePlayer* PlayAnimationForward(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationForward // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x392c7a0
	struct UUMGSequencePlayer* PlayAnimation(struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimation // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x392cf40
	float PauseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.PauseAnimation // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x392c170
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchStarted // (RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchMoved // (RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent& GestureEvent); // Function UMG.UserWidget.OnTouchGesture // (RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnTouchForceChanged(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchForceChanged // (RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchEnded // (RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnRemovedFromFocusPath // (RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnPreviewMouseButtonDown // (RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnPreviewMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function UMG.UserWidget.OnPreviewMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnPreviewKeyDown // (RequiredAPI|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnPaint(struct FPaintContext& Context); // Function UMG.UserWidget.OnPaint // (RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const) // @ game+0x19be2f0
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseWheel // (RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseMove // (RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseLeave // (RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseEnter // (RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseCaptureLost(); // Function UMG.UserWidget.OnMouseCaptureLost // (RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseButtonUp // (RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseButtonDown // (RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function UMG.UserWidget.OnMouseButtonDoubleClick // (RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent); // Function UMG.UserWidget.OnMotionDetected // (RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyUp // (RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyDown // (RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent); // Function UMG.UserWidget.OnKeyChar // (RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function UMG.UserWidget.OnInitialized // (RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusReceived // (RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusLost // (RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDrop // (RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	bool OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragOver // (RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragLeave // (RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragEnter // (RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function UMG.UserWidget.OnDragDetected // (RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragCancelled // (RequiredAPI|BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationStarted // (RequiredAPI|BlueprintCosmetic|Native|Event|Protected|BlueprintEvent) // @ game+0x392d730
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationFinished // (RequiredAPI|BlueprintCosmetic|Native|Event|Protected|BlueprintEvent) // @ game+0x392d630
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function UMG.UserWidget.OnAnalogValueChanged // (RequiredAPI|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnAddedToFocusPath // (RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	struct UUserWidget* LookupUserWidgetWithInterface(struct UInterface* InterfaceClass, bool bRecurse); // Function UMG.UserWidget.LookupUserWidgetWithInterface // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x392a5b0
	void LookupUserWidgetsWithInterface(struct UInterface* InterfaceClass, struct TArray<struct UUserWidget*>& OutWidgets, bool bRecurse); // Function UMG.UserWidget.LookupUserWidgetsWithInterface // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x392a2f0
	void LookupUserWidgets(struct UUserWidget* WidgetClass, struct TArray<struct UUserWidget*>& OutWidgets, bool bRecurse); // Function UMG.UserWidget.LookupUserWidgets // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x392a810
	struct UUserWidget* LookupUserWidget(struct UUserWidget* WidgetClass, bool bRecurse); // Function UMG.UserWidget.LookupUserWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x392aad0
	void ListenForInputAction(struct FName ActionName, enum class EInputEvent EventType, bool bConsume, struct FDelegate Callback); // Function UMG.UserWidget.ListenForInputAction // (Final|RequiredAPI|Native|Protected|BlueprintCallable) // @ game+0x3929fb0
	bool IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x392a2c0
	bool IsListeningForInputAction(struct FName ActionName); // Function UMG.UserWidget.IsListeningForInputAction // (Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3929b50
	bool IsInteractable(); // Function UMG.UserWidget.IsInteractable // (RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent|Const) // @ game+0x19be2f0
	bool IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x392a2c0
	bool IsAnimationPlayingForward(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlayingForward // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x392b5b0
	bool IsAnimationPlaying(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlaying // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x392bbf0
	struct APawn* GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x392e4a0
	struct APlayerCameraManager* GetOwningPlayerCameraManager(); // Function UMG.UserWidget.GetOwningPlayerCameraManager // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x392e450
	bool GetIsVisible(); // Function UMG.UserWidget.GetIsVisible // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a7db0
	struct UInputComponent* GetInputComponent(); // Function UMG.UserWidget.GetInputComponent // (Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure) // @ game+0x3929810
	struct TArray<struct UUserWidgetExtension*> GetExtensions(struct UUserWidgetExtension* ExtensionType); // Function UMG.UserWidget.GetExtensions // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x392b1f0
	struct UUserWidgetExtension* GetExtension(struct UUserWidgetExtension* ExtensionType); // Function UMG.UserWidget.GetExtension // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x392b410
	float GetAnimationCurrentTime(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.GetAnimationCurrentTime // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x392bfe0
	struct FAnchors GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x392e6b0
	struct FVector2D GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x392e620
	void FlushAnimations(); // Function UMG.UserWidget.FlushAnimations // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x392b580
	void Destruct(); // Function UMG.UserWidget.Destruct // (RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function UMG.UserWidget.Construct // (RequiredAPI|BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void CancelLatentActions(); // Function UMG.UserWidget.CancelLatentActions // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x392e430
	void BindToAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationStarted // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x392e240
	void BindToAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationFinished // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x392ddd0
	void BindToAnimationEvent(struct UWidgetAnimation* Animation, struct FDelegate Delegate, enum class EWidgetAnimationEvent AnimationEvent, struct FName UserTag); // Function UMG.UserWidget.BindToAnimationEvent // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x392d830
	void AddToViewport(int32_t ZOrder); // Function UMG.UserWidget.AddToViewport // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x392eea0
	bool AddToPlayerScreen(int32_t ZOrder); // Function UMG.UserWidget.AddToPlayerScreen // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x392eda0
	struct UUserWidgetExtension* AddExtension(struct UUserWidgetExtension* InExtensionType); // Function UMG.UserWidget.AddExtension // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x392b0f0
};

// Class UMG.UserWidgetExtension
// Size: 0x30 (Inherited: 0x30)
struct UUserWidgetExtension : UObject {
};

// Class UMG.WidgetBlueprintGeneratedClassExtension
// Size: 0x30 (Inherited: 0x30)
struct UWidgetBlueprintGeneratedClassExtension : UObject {
};

// Class UMG.WidgetFieldNotificationExtension
// Size: 0x48 (Inherited: 0x30)
struct UWidgetFieldNotificationExtension : UUserWidgetExtension {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class UMG.WidgetNavigation
// Size: 0x138 (Inherited: 0x30)
struct UWidgetNavigation : UObject {
	struct FWidgetNavigationData Up; // 0x30(0x2c)
	struct FWidgetNavigationData Down; // 0x5c(0x2c)
	struct FWidgetNavigationData Left; // 0x88(0x2c)
	struct FWidgetNavigationData Right; // 0xb4(0x2c)
	struct FWidgetNavigationData Next; // 0xe0(0x2c)
	struct FWidgetNavigationData Previous; // 0x10c(0x2c)
};

// Class UMG.MovieScene2DTransformPropertySystem
// Size: 0x60 (Inherited: 0x60)
struct UMovieScene2DTransformPropertySystem : UMovieScenePropertySystem {
};

// Class UMG.MovieScene2DTransformSection
// Size: 0x878 (Inherited: 0xf8)
struct UMovieScene2DTransformSection : UMovieSceneSection {
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FMovieScene2DTransformMask TransformMask; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct FMovieSceneFloatChannel Translation[0x2]; // 0x108(0x220)
	struct FMovieSceneFloatChannel Rotation; // 0x328(0x110)
	struct FMovieSceneFloatChannel Scale[0x2]; // 0x438(0x220)
	struct FMovieSceneFloatChannel Shear[0x2]; // 0x658(0x220)
};

// Class UMG.MovieScene2DTransformTrack
// Size: 0xd8 (Inherited: 0xd8)
struct UMovieScene2DTransformTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneMarginPropertySystem
// Size: 0x60 (Inherited: 0x60)
struct UMovieSceneMarginPropertySystem : UMovieScenePropertySystem {
};

// Class UMG.MovieSceneMarginSection
// Size: 0x540 (Inherited: 0xf8)
struct UMovieSceneMarginSection : UMovieSceneSection {
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FMovieSceneFloatChannel TopCurve; // 0x100(0x110)
	struct FMovieSceneFloatChannel LeftCurve; // 0x210(0x110)
	struct FMovieSceneFloatChannel RightCurve; // 0x320(0x110)
	struct FMovieSceneFloatChannel BottomCurve; // 0x430(0x110)
};

// Class UMG.MovieSceneMarginTrack
// Size: 0xd8 (Inherited: 0xd8)
struct UMovieSceneMarginTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneWidgetMaterialSystem
// Size: 0x1a8 (Inherited: 0x48)
struct UMovieSceneWidgetMaterialSystem : UMovieSceneEntitySystem {
	char pad_48[0x160]; // 0x48(0x160)
};

// Class UMG.MovieSceneWidgetMaterialTrack
// Size: 0xe8 (Inherited: 0xb8)
struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack {
	char pad_B8[0x10]; // 0xb8(0x10)
	struct TArray<struct FName> BrushPropertyNamePath; // 0xc8(0x10)
	struct FName TrackName; // 0xd8(0x0c)
	char pad_E4[0x4]; // 0xe4(0x04)
};

// Class UMG.UMGSequencePlayer
// Size: 0x348 (Inherited: 0x30)
struct UUMGSequencePlayer : UObject {
	char pad_30[0x1f8]; // 0x30(0x1f8)
	struct UWidgetAnimation* Animation; // 0x228(0x08)
	char pad_230[0x8]; // 0x230(0x08)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x238(0x88)
	char pad_2C0[0x88]; // 0x2c0(0x88)

	void SetUserTag(struct FName InUserTag); // Function UMG.UMGSequencePlayer.SetUserTag // (Final|Native|Public|BlueprintCallable) // @ game+0x37fb690
	struct FName GetUserTag(); // Function UMG.UMGSequencePlayer.GetUserTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x37fb790
};

// Class UMG.UMGSequenceTickManager
// Size: 0xc8 (Inherited: 0x30)
struct UUMGSequenceTickManager : UObject {
	struct TMap<struct TWeakObjectPtr<struct UUserWidget>, struct FSequenceTickManagerWidgetData> WeakUserWidgetData; // 0x30(0x50)
	struct UMovieSceneEntitySystemLinker* Linker; // 0x80(0x08)
	char pad_88[0x40]; // 0x88(0x40)
};

// Class UMG.WidgetAnimation
// Size: 0xa0 (Inherited: 0x70)
struct UWidgetAnimation : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x70(0x08)
	struct TArray<struct FWidgetAnimationBinding> AnimationBindings; // 0x78(0x10)
	bool bLegacyFinishOnStop; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FString DisplayLabel; // 0x90(0x10)

	void UnbindFromAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x37ff870
	void UnbindFromAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x37ff3d0
	void UnbindAllFromAnimationStarted(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x37ff770
	void UnbindAllFromAnimationFinished(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x37ff2d0
	float GetStartTime(); // Function UMG.WidgetAnimation.GetStartTime // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x37ffca0
	float GetEndTime(); // Function UMG.WidgetAnimation.GetEndTime // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x37ffc10
	void BindToAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationStarted // (Final|Native|Public|BlueprintCallable) // @ game+0x37ffa40
	void BindToAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationFinished // (Final|Native|Public|BlueprintCallable) // @ game+0x37ff5a0
};

// Class UMG.WidgetAnimationDelegateBinding
// Size: 0x40 (Inherited: 0x30)
struct UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding {
	struct TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x30(0x10)
};

// Class UMG.WidgetAnimationPlayCallbackProxy
// Size: 0x48 (Inherited: 0x30)
struct UWidgetAnimationPlayCallbackProxy : UObject {
	struct FMulticastInlineDelegate Finished; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)

	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x38013e0
	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3801990
};

// Class UMG.PropertyBinding
// Size: 0x80 (Inherited: 0x30)
struct UPropertyBinding : UObject {
	struct TWeakObjectPtr<struct UObject> SourceObject; // 0x30(0x08)
	struct FDynamicPropertyPath SourcePath; // 0x38(0x38)
	struct FName DestinationProperty; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// Class UMG.BoolBinding
// Size: 0x80 (Inherited: 0x80)
struct UBoolBinding : UPropertyBinding {

	bool GetValue(); // Function UMG.BoolBinding.GetValue // (Final|RequiredAPI|Native|Public|Const) // @ game+0x38027d0
};

// Class UMG.BrushBinding
// Size: 0x88 (Inherited: 0x80)
struct UBrushBinding : UPropertyBinding {
	char pad_80[0x8]; // 0x80(0x08)

	struct FSlateBrush GetValue(); // Function UMG.BrushBinding.GetValue // (Final|RequiredAPI|Native|Public|Const) // @ game+0x3802b40
};

// Class UMG.CheckedStateBinding
// Size: 0x88 (Inherited: 0x80)
struct UCheckedStateBinding : UPropertyBinding {
	char pad_80[0x8]; // 0x80(0x08)

	enum class ECheckBoxState GetValue(); // Function UMG.CheckedStateBinding.GetValue // (Final|RequiredAPI|Native|Public|Const) // @ game+0x3803060
};

// Class UMG.ColorBinding
// Size: 0x88 (Inherited: 0x80)
struct UColorBinding : UPropertyBinding {
	char pad_80[0x8]; // 0x80(0x08)

	struct FSlateColor GetSlateValue(); // Function UMG.ColorBinding.GetSlateValue // (Final|RequiredAPI|Native|Public|Const) // @ game+0x3803700
	struct FLinearColor GetLinearValue(); // Function UMG.ColorBinding.GetLinearValue // (Final|RequiredAPI|Native|Public|HasDefaults|Const) // @ game+0x38036c0
};

// Class UMG.FloatBinding
// Size: 0x80 (Inherited: 0x80)
struct UFloatBinding : UPropertyBinding {

	float GetValue(); // Function UMG.FloatBinding.GetValue // (Final|RequiredAPI|Native|Public|Const) // @ game+0x38043e0
};

// Class UMG.Int32Binding
// Size: 0x80 (Inherited: 0x80)
struct UInt32Binding : UPropertyBinding {

	int32_t GetValue(); // Function UMG.Int32Binding.GetValue // (Final|RequiredAPI|Native|Public|Const) // @ game+0x3804780
};

// Class UMG.MouseCursorBinding
// Size: 0x80 (Inherited: 0x80)
struct UMouseCursorBinding : UPropertyBinding {

	enum class EMouseCursor GetValue(); // Function UMG.MouseCursorBinding.GetValue // (Final|RequiredAPI|Native|Public|Const) // @ game+0x38049e0
};

// Class UMG.WidgetBinaryStateRegistration
// Size: 0x30 (Inherited: 0x30)
struct UWidgetBinaryStateRegistration : UObject {
};

// Class UMG.WidgetHoveredStateRegistration
// Size: 0x30 (Inherited: 0x30)
struct UWidgetHoveredStateRegistration : UWidgetBinaryStateRegistration {
};

// Class UMG.WidgetPressedStateRegistration
// Size: 0x30 (Inherited: 0x30)
struct UWidgetPressedStateRegistration : UWidgetBinaryStateRegistration {
};

// Class UMG.WidgetDisabledStateRegistration
// Size: 0x30 (Inherited: 0x30)
struct UWidgetDisabledStateRegistration : UWidgetBinaryStateRegistration {
};

// Class UMG.WidgetSelectedStateRegistration
// Size: 0x30 (Inherited: 0x30)
struct UWidgetSelectedStateRegistration : UWidgetBinaryStateRegistration {
};

// Class UMG.WidgetEnumStateRegistration
// Size: 0x30 (Inherited: 0x30)
struct UWidgetEnumStateRegistration : UObject {
};

// Class UMG.WidgetStateSettings
// Size: 0x838 (Inherited: 0x48)
struct UWidgetStateSettings : UDeveloperSettings {
	char pad_48[0x7f0]; // 0x48(0x7f0)
};

// Class UMG.TextBinding
// Size: 0x88 (Inherited: 0x80)
struct UTextBinding : UPropertyBinding {
	char pad_80[0x8]; // 0x80(0x08)

	struct FText GetTextValue(); // Function UMG.TextBinding.GetTextValue // (Final|RequiredAPI|Native|Public|Const) // @ game+0x3806fa0
	struct FString GetStringValue(); // Function UMG.TextBinding.GetStringValue // (Final|RequiredAPI|Native|Public|Const) // @ game+0x3806f00
};

// Class UMG.VisibilityBinding
// Size: 0x80 (Inherited: 0x80)
struct UVisibilityBinding : UPropertyBinding {

	enum class ESlateVisibility GetValue(); // Function UMG.VisibilityBinding.GetValue // (Final|RequiredAPI|Native|Public|Const) // @ game+0x3807db0
};

// Class UMG.WidgetBinding
// Size: 0x80 (Inherited: 0x80)
struct UWidgetBinding : UPropertyBinding {

	struct UWidget* GetValue(); // Function UMG.WidgetBinding.GetValue // (Final|RequiredAPI|Native|Public|Const) // @ game+0x3808340
};

// Class UMG.AsyncTaskDownloadImage
// Size: 0x58 (Inherited: 0x38)
struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x38(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x48(0x10)

	struct UAsyncTaskDownloadImage* DownloadImage(struct FString URL); // Function UMG.AsyncTaskDownloadImage.DownloadImage // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x3808640
};

// Class UMG.GameViewportSubsystem
// Size: 0xb8 (Inherited: 0x38)
struct UGameViewportSubsystem : UEngineSubsystem {
	char pad_38[0x80]; // 0x38(0x80)

	struct FGameViewportWidgetSlot SetWidgetSlotPosition(struct FGameViewportWidgetSlot Slot, struct UWidget* Widget, struct FVector2D Position, bool bRemoveDPIScale); // Function UMG.GameViewportSubsystem.SetWidgetSlotPosition // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x380a550
	struct FGameViewportWidgetSlot SetWidgetSlotDesiredSize(struct FGameViewportWidgetSlot Slot, struct FVector2D Size); // Function UMG.GameViewportSubsystem.SetWidgetSlotDesiredSize // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x380a320
	void SetWidgetSlot(struct UWidget* Widget, struct FGameViewportWidgetSlot Slot); // Function UMG.GameViewportSubsystem.SetWidgetSlot // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x380a910
	void RemoveWidget(struct UWidget* Widget); // Function UMG.GameViewportSubsystem.RemoveWidget // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x380b1e0
	bool IsWidgetAdded(struct UWidget* Widget); // Function UMG.GameViewportSubsystem.IsWidgetAdded // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x380ba70
	struct FGameViewportWidgetSlot GetWidgetSlot(struct UWidget* Widget); // Function UMG.GameViewportSubsystem.GetWidgetSlot // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x380af70
	bool AddWidgetForPlayer(struct UWidget* Widget, struct ULocalPlayer* Player, struct FGameViewportWidgetSlot Slot); // Function UMG.GameViewportSubsystem.AddWidgetForPlayer // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x380b590
	bool AddWidget(struct UWidget* Widget, struct FGameViewportWidgetSlot Slot); // Function UMG.GameViewportSubsystem.AddWidget // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x380b850
};

// Class UMG.UserListEntry
// Size: 0x30 (Inherited: 0x30)
struct UUserListEntry : UInterface {

	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG.UserListEntry.BP_OnItemSelectionChanged // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UMG.UserListEntry.BP_OnItemExpansionChanged // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnEntryReleased(); // Function UMG.UserListEntry.BP_OnEntryReleased // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
};

// Class UMG.UserListEntryLibrary
// Size: 0x30 (Inherited: 0x30)
struct UUserListEntryLibrary : UBlueprintFunctionLibrary {

	bool IsListItemSelected(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemSelected // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x380ed00
	bool IsListItemExpanded(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemExpanded // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x380ec00
	struct UListViewBase* GetOwningListView(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.GetOwningListView // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x380eb00
};

// Class UMG.UserObjectListEntry
// Size: 0x30 (Inherited: 0x30)
struct UUserObjectListEntry : UUserListEntry {

	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UMG.UserObjectListEntry.OnListItemObjectSet // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	struct FString GetListItemTelemetryTarget(); // Function UMG.UserObjectListEntry.GetListItemTelemetryTarget // (RequiredAPI|Event|Public|BlueprintEvent) // @ game+0x19be2f0
};

// Class UMG.UserObjectListEntryLibrary
// Size: 0x30 (Inherited: 0x30)
struct UUserObjectListEntryLibrary : UBlueprintFunctionLibrary {

	struct UObject* GetListItemObject(struct TScriptInterface<IUserObjectListEntry> UserObjectListEntry); // Function UMG.UserObjectListEntryLibrary.GetListItemObject // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x380f7a0
};

// Class UMG.PanelWidget
// Size: 0x1d0 (Inherited: 0x1b8)
struct UPanelWidget : UWidget {
	struct TArray<struct UPanelSlot*> Slots; // 0x1b8(0x10)
	char pad_1C8[0x8]; // 0x1c8(0x08)

	bool RemoveChildAt(int32_t Index); // Function UMG.PanelWidget.RemoveChildAt // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x387c1e0
	bool RemoveChild(struct UWidget* Content); // Function UMG.PanelWidget.RemoveChild // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x387be30
	bool HasChild(struct UWidget* Content); // Function UMG.PanelWidget.HasChild // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x387c2e0
	bool HasAnyChildren(); // Function UMG.PanelWidget.HasAnyChildren // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x387be00
	int32_t GetChildrenCount(); // Function UMG.PanelWidget.GetChildrenCount // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x387c790
	int32_t GetChildIndex(struct UWidget* Content); // Function UMG.PanelWidget.GetChildIndex // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x387c3f0
	struct UWidget* GetChildAt(int32_t Index); // Function UMG.PanelWidget.GetChildAt // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x387c660
	struct TArray<struct UWidget*> GetAllChildren(); // Function UMG.PanelWidget.GetAllChildren // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x387c540
	void ClearChildren(); // Function UMG.PanelWidget.ClearChildren // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x387bdd0
	struct UPanelSlot* AddChild(struct UWidget* Content); // Function UMG.PanelWidget.AddChild // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x387bf90
};

// Class UMG.ContentWidget
// Size: 0x1d0 (Inherited: 0x1d0)
struct UContentWidget : UPanelWidget {

	struct UPanelSlot* SetContent(struct UWidget* Content); // Function UMG.ContentWidget.SetContent // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3854b10
	struct UPanelSlot* GetContentSlot(); // Function UMG.ContentWidget.GetContentSlot // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3854d70
	struct UWidget* GetContent(); // Function UMG.ContentWidget.GetContent // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3854ad0
};

// Class UMG.BackgroundBlur
// Size: 0x4a0 (Inherited: 0x1d0)
struct UBackgroundBlur : UContentWidget {
	struct FMargin Padding; // 0x1d0(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x1e0(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x1e1(0x01)
	bool bApplyAlphaToBlur; // 0x1e2(0x01)
	char pad_1E3[0x1]; // 0x1e3(0x01)
	float BlurStrength; // 0x1e4(0x04)
	bool bOverrideAutoRadiusCalculation; // 0x1e8(0x01)
	char pad_1E9[0x3]; // 0x1e9(0x03)
	int32_t BlurRadius; // 0x1ec(0x04)
	struct FVector4 CornerRadius; // 0x1f0(0x20)
	struct FSlateBrush LowQualityFallbackBrush; // 0x210(0xd0)
	struct FSlateBrush MaskImage; // 0x2e0(0xd0)
	struct FLinearColor Tint; // 0x3b0(0x10)
	struct FSlateBrush LowQualityMaskedFallbackBrush; // 0x3c0(0xd0)
	char pad_490[0x10]; // 0x490(0x10)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlur.SetVerticalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3810d30
	void SetTint(struct FLinearColor& InTint); // Function UMG.BackgroundBlur.SetTint // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3810400
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlur.SetPadding // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3810f90
	void SetMaskImage(struct FSlateBrush& InBrush); // Function UMG.BackgroundBlur.SetMaskImage // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x38104f0
	void SetLowQualityFallbackBrush(struct FSlateBrush& InBrush); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3810710
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlur.SetHorizontalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3810e60
	void SetCornerRadius(struct FVector4 InCornerRadius); // Function UMG.BackgroundBlur.SetCornerRadius // (RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3810910
	void SetBlurStrength(float InStrength); // Function UMG.BackgroundBlur.SetBlurStrength // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3810a30
	void SetBlurRadius(int32_t InBlurRadius); // Function UMG.BackgroundBlur.SetBlurRadius // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3810b30
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3810c20
};

// Class UMG.PanelSlot
// Size: 0x40 (Inherited: 0x30)
struct UPanelSlot : UVisual {
	struct UPanelWidget* Parent; // 0x30(0x08)
	struct UWidget* Content; // 0x38(0x08)
};

// Class UMG.BackgroundBlurSlot
// Size: 0x68 (Inherited: 0x40)
struct UBackgroundBlurSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlurSlot.SetVerticalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3813f00
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlurSlot.SetPadding // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3814180
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlurSlot.SetHorizontalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3814040
};

// Class UMG.Border
// Size: 0x390 (Inherited: 0x1d0)
struct UBorder : UContentWidget {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x1d0(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x1d1(0x01)
	char bShowEffectWhenDisabled : 1; // 0x1d2(0x01)
	char pad_1D2_1 : 7; // 0x1d2(0x01)
	char pad_1D3[0x1]; // 0x1d3(0x01)
	struct FLinearColor ContentColorAndOpacity; // 0x1d4(0x10)
	struct FDelegate ContentColorAndOpacityDelegate; // 0x1e4(0x14)
	struct FMargin Padding; // 0x1f8(0x10)
	char pad_208[0x8]; // 0x208(0x08)
	struct FSlateBrush Background; // 0x210(0xd0)
	struct FDelegate BackgroundDelegate; // 0x2e0(0x14)
	struct FLinearColor BrushColor; // 0x2f4(0x10)
	struct FDelegate BrushColorDelegate; // 0x304(0x14)
	struct FVector2D DesiredSizeScale; // 0x318(0x10)
	bool bFlipForRightToLeftFlowDirection; // 0x328(0x01)
	char pad_329[0x3]; // 0x329(0x03)
	struct FDelegate OnMouseButtonDownEvent; // 0x32c(0x14)
	struct FDelegate OnMouseButtonUpEvent; // 0x340(0x14)
	struct FDelegate OnMouseMoveEvent; // 0x354(0x14)
	struct FDelegate OnMouseDoubleClickEvent; // 0x368(0x14)
	char pad_37C[0x14]; // 0x37c(0x14)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.Border.SetVerticalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38153e0
	void SetShowEffectWhenDisabled(bool bInShowEffectWhenDisabled); // Function UMG.Border.SetShowEffectWhenDisabled // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3814d40
	void SetPadding(struct FMargin InPadding); // Function UMG.Border.SetPadding // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3815640
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.Border.SetHorizontalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3815510
	void SetDesiredSizeScale(struct FVector2D InScale); // Function UMG.Border.SetDesiredSizeScale // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3814b00
	void SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity); // Function UMG.Border.SetContentColorAndOpacity // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3815770
	void SetBrushFromTexture(struct UTexture2D* Texture); // Function UMG.Border.SetBrushFromTexture // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3814e70
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Border.SetBrushFromMaterial // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3814e70
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Border.SetBrushFromAsset // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3814fa0
	void SetBrushColor(struct FLinearColor InBrushColor); // Function UMG.Border.SetBrushColor // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x38152c0
	void SetBrush(struct FSlateBrush& InBrush); // Function UMG.Border.SetBrush // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3815090
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3814c20
};

// Class UMG.BorderSlot
// Size: 0x68 (Inherited: 0x40)
struct UBorderSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BorderSlot.SetVerticalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3817600
	void SetPadding(struct FMargin InPadding); // Function UMG.BorderSlot.SetPadding // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3817880
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BorderSlot.SetHorizontalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3817740
};

// Class UMG.Button
// Size: 0x660 (Inherited: 0x1d0)
struct UButton : UContentWidget {
	struct FButtonStyle WidgetStyle; // 0x1d0(0x400)
	struct FLinearColor ColorAndOpacity; // 0x5d0(0x10)
	struct FLinearColor BackgroundColor; // 0x5e0(0x10)
	enum class EButtonClickMethod ClickMethod; // 0x5f0(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0x5f1(0x01)
	enum class EButtonPressMethod PressMethod; // 0x5f2(0x01)
	bool IsFocusable; // 0x5f3(0x01)
	enum class EButtonInputPriority InteractionPriority; // 0x5f4(0x01)
	char pad_5F5[0x3]; // 0x5f5(0x03)
	struct FMulticastInlineDelegate OnClicked; // 0x5f8(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x608(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x618(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x628(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x638(0x10)
	char pad_648[0x18]; // 0x648(0x18)

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function UMG.Button.SetTouchMethod // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3818510
	void SetStyle(struct FButtonStyle& InStyle); // Function UMG.Button.SetStyle // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3818990
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function UMG.Button.SetPressMethod // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3818410
	void SetInteractionPriority(enum class EButtonInputPriority NewValue); // Function UMG.Button.SetInteractionPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x3818310
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Button.SetColorAndOpacity // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3818870
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function UMG.Button.SetClickMethod // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3818610
	void SetBackgroundColor(struct FLinearColor InBackgroundColor); // Function UMG.Button.SetBackgroundColor // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3818750
	bool IsPressed(); // Function UMG.Button.IsPressed // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3818710
};

// Class UMG.ButtonSlot
// Size: 0x68 (Inherited: 0x40)
struct UButtonSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ButtonSlot.SetVerticalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x381a230
	void SetPadding(struct FMargin InPadding); // Function UMG.ButtonSlot.SetPadding // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x381a410
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ButtonSlot.SetHorizontalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x381a320
};

// Class UMG.CanvasPanel
// Size: 0x1e0 (Inherited: 0x1d0)
struct UCanvasPanel : UPanelWidget {
	char pad_1D0[0x10]; // 0x1d0(0x10)

	struct UCanvasPanelSlot* AddChildToCanvas(struct UWidget* Content); // Function UMG.CanvasPanel.AddChildToCanvas // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x381add0
};

// Class UMG.CanvasPanelSlot
// Size: 0x90 (Inherited: 0x40)
struct UCanvasPanelSlot : UPanelSlot {
	struct FAnchorData LayoutData; // 0x40(0x40)
	bool bAutoSize; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	int32_t ZOrder; // 0x84(0x04)
	char pad_88[0x8]; // 0x88(0x08)

	void SetZOrder(int32_t InZOrder); // Function UMG.CanvasPanelSlot.SetZOrder // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x381bba0
	void SetSize(struct FVector2D InSize); // Function UMG.CanvasPanelSlot.SetSize // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x381c3e0
	void SetPosition(struct FVector2D InPosition); // Function UMG.CanvasPanelSlot.SetPosition // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x381c510
	void SetOffsets(struct FMargin InOffset); // Function UMG.CanvasPanelSlot.SetOffsets // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x381c2a0
	void SetMinimum(struct FVector2D InMinimumAnchors); // Function UMG.CanvasPanelSlot.SetMinimum // (Final|RequiredAPI|Native|Public|HasDefaults) // @ game+0x381b9f0
	void SetMaximum(struct FVector2D InMaximumAnchors); // Function UMG.CanvasPanelSlot.SetMaximum // (Final|RequiredAPI|Native|Public|HasDefaults) // @ game+0x381b880
	void SetLayout(struct FAnchorData& InLayoutData); // Function UMG.CanvasPanelSlot.SetLayout // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x381c640
	void SetAutoSize(bool InbAutoSize); // Function UMG.CanvasPanelSlot.SetAutoSize // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x381bd00
	void SetAnchors(struct FAnchors InAnchors); // Function UMG.CanvasPanelSlot.SetAnchors // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x381c070
	void SetAlignment(struct FVector2D InAlignment); // Function UMG.CanvasPanelSlot.SetAlignment // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x381bec0
	int32_t GetZOrder(); // Function UMG.CanvasPanelSlot.GetZOrder // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x381bb60
	struct FVector2D GetSize(); // Function UMG.CanvasPanelSlot.GetSize // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x381c3a0
	struct FVector2D GetPosition(); // Function UMG.CanvasPanelSlot.GetPosition // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x381c4d0
	struct FMargin GetOffsets(); // Function UMG.CanvasPanelSlot.GetOffsets // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x381c1f0
	struct FAnchorData GetLayout(); // Function UMG.CanvasPanelSlot.GetLayout // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x381c600
	bool GetAutoSize(); // Function UMG.CanvasPanelSlot.GetAutoSize // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x381bcb0
	struct FAnchors GetAnchors(); // Function UMG.CanvasPanelSlot.GetAnchors // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x381bfb0
	struct FVector2D GetAlignment(); // Function UMG.CanvasPanelSlot.GetAlignment // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x381be00
};

// Class UMG.CheckBox
// Size: 0xd00 (Inherited: 0x1d0)
struct UCheckBox : UContentWidget {
	enum class ECheckBoxState CheckedState; // 0x1d0(0x01)
	char pad_1D1[0x3]; // 0x1d1(0x03)
	struct FDelegate CheckedStateDelegate; // 0x1d4(0x14)
	char pad_1E8[0x8]; // 0x1e8(0x08)
	struct FCheckBoxStyle WidgetStyle; // 0x1f0(0xae0)
	enum class EHorizontalAlignment HorizontalAlignment; // 0xcd0(0x01)
	enum class EButtonClickMethod ClickMethod; // 0xcd1(0x01)
	enum class EButtonTouchMethod TouchMethod; // 0xcd2(0x01)
	enum class EButtonPressMethod PressMethod; // 0xcd3(0x01)
	bool IsFocusable; // 0xcd4(0x01)
	char pad_CD5[0x3]; // 0xcd5(0x03)
	struct FMulticastInlineDelegate OnCheckStateChanged; // 0xcd8(0x10)
	char pad_CE8[0x18]; // 0xce8(0x18)

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function UMG.CheckBox.SetTouchMethod // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x381dd80
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function UMG.CheckBox.SetPressMethod // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x381dc80
	void SetIsChecked(bool InIsChecked); // Function UMG.CheckBox.SetIsChecked // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x381e070
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function UMG.CheckBox.SetClickMethod // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x381de80
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function UMG.CheckBox.SetCheckedState // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x381df80
	bool IsPressed(); // Function UMG.CheckBox.IsPressed // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x381e210
	bool IsChecked(); // Function UMG.CheckBox.IsChecked // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x381e1c0
	enum class ECheckBoxState GetCheckedState(); // Function UMG.CheckBox.GetCheckedState // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x381e170
};

// Class UMG.WidgetCheckedStateRegistration
// Size: 0x30 (Inherited: 0x30)
struct UWidgetCheckedStateRegistration : UWidgetEnumStateRegistration {
};

// Class UMG.CircularThrobber
// Size: 0x2c0 (Inherited: 0x1b8)
struct UCircularThrobber : UWidget {
	int32_t NumberOfPieces; // 0x1b8(0x04)
	float Period; // 0x1bc(0x04)
	float Radius; // 0x1c0(0x04)
	char pad_1C4[0xc]; // 0x1c4(0x0c)
	struct FSlateBrush Image; // 0x1d0(0xd0)
	bool bEnableRadius; // 0x2a0(0x01)
	char pad_2A1[0x1f]; // 0x2a1(0x1f)

	void SetRadius(float InRadius); // Function UMG.CircularThrobber.SetRadius // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x384cd10
	void SetPeriod(float InPeriod); // Function UMG.CircularThrobber.SetPeriod // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x384ce40
	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.CircularThrobber.SetNumberOfPieces // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x384cf70
};

// Class UMG.ComboBox
// Size: 0x970 (Inherited: 0x1b8)
struct UComboBox : UWidget {
	char pad_1B8[0x8]; // 0x1b8(0x08)
	struct FScrollBarStyle ScrollBarStyle; // 0x1c0(0x770)
	struct TArray<struct UObject*> Items; // 0x930(0x10)
	struct FDelegate OnGenerateWidgetEvent; // 0x940(0x14)
	bool bIsFocusable; // 0x954(0x01)
	char pad_955[0x1b]; // 0x955(0x1b)
};

// Class UMG.ComboBoxKey
// Size: 0x1dc0 (Inherited: 0x1b8)
struct UComboBoxKey : UWidget {
	struct TArray<struct FName> OPTIONS; // 0x1b8(0x10)
	struct FName SelectedOption; // 0x1c8(0x0c)
	char pad_1D4[0xc]; // 0x1d4(0x0c)
	struct FComboBoxStyle WidgetStyle; // 0x1e0(0x680)
	struct FTableRowStyle ItemStyle; // 0x860(0xd50)
	struct FScrollBarStyle ScrollBarStyle; // 0x15b0(0x770)
	struct FSlateColor ForegroundColor; // 0x1d20(0x14)
	struct FMargin ContentPadding; // 0x1d34(0x10)
	float MaxListHeight; // 0x1d44(0x04)
	bool bHasDownArrow; // 0x1d48(0x01)
	bool bEnableGamepadNavigationMode; // 0x1d49(0x01)
	bool bIsFocusable; // 0x1d4a(0x01)
	char pad_1D4B[0x1]; // 0x1d4b(0x01)
	struct FDelegate OnGenerateContentWidget; // 0x1d4c(0x14)
	struct FDelegate OnGenerateItemWidget; // 0x1d60(0x14)
	char pad_1D74[0x4]; // 0x1d74(0x04)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x1d78(0x10)
	struct FMulticastInlineDelegate OnOpening; // 0x1d88(0x10)
	char pad_1D98[0x28]; // 0x1d98(0x28)

	void SetSelectedOption(struct FName Option); // Function UMG.ComboBoxKey.SetSelectedOption // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x384ed40
	bool RemoveOption(struct FName Option); // Function UMG.ComboBoxKey.RemoveOption // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x384efc0
	void OnSelectionChangedEvent__DelegateSignature(struct FName SelectedItem, enum class ESelectInfo SelectionType); // DelegateFunction UMG.ComboBoxKey.OnSelectionChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxKey.OnOpeningEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	bool IsOpen(); // Function UMG.ComboBoxKey.IsOpen // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x384ecb0
	struct FName GetSelectedOption(); // Function UMG.ComboBoxKey.GetSelectedOption // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x384ed10
	struct UWidget* GenerateWidgetEvent__DelegateSignature(struct FName Item); // DelegateFunction UMG.ComboBoxKey.GenerateWidgetEvent__DelegateSignature // (Public|Delegate) // @ game+0x19be2f0
	void ClearSelection(); // Function UMG.ComboBoxKey.ClearSelection // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x384ef10
	void ClearOptions(); // Function UMG.ComboBoxKey.ClearOptions // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x384ef40
	void AddOption(struct FName Option); // Function UMG.ComboBoxKey.AddOption // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x384f1a0
};

// Class UMG.ComboBoxString
// Size: 0x1e40 (Inherited: 0x1b8)
struct UComboBoxString : UWidget {
	struct TArray<struct FString> DefaultOptions; // 0x1b8(0x10)
	struct FString SelectedOption; // 0x1c8(0x10)
	char pad_1D8[0x8]; // 0x1d8(0x08)
	struct FComboBoxStyle WidgetStyle; // 0x1e0(0x680)
	struct FTableRowStyle ItemStyle; // 0x860(0xd50)
	struct FScrollBarStyle ScrollBarStyle; // 0x15b0(0x770)
	struct FMargin ContentPadding; // 0x1d20(0x10)
	float MaxListHeight; // 0x1d30(0x04)
	bool HasDownArrow; // 0x1d34(0x01)
	bool EnableGamepadNavigationMode; // 0x1d35(0x01)
	char pad_1D36[0x2]; // 0x1d36(0x02)
	struct FSlateFontInfo Font; // 0x1d38(0x60)
	struct FSlateColor ForegroundColor; // 0x1d98(0x14)
	bool bIsFocusable; // 0x1dac(0x01)
	char pad_1DAD[0x3]; // 0x1dad(0x03)
	struct FDelegate OnGenerateWidgetEvent; // 0x1db0(0x14)
	char pad_1DC4[0x4]; // 0x1dc4(0x04)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x1dc8(0x10)
	struct FMulticastInlineDelegate OnOpening; // 0x1dd8(0x10)
	char pad_1DE8[0x58]; // 0x1de8(0x58)

	void SetSelectedOption(struct FString Option); // Function UMG.ComboBoxString.SetSelectedOption // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3851470
	void SetSelectedIndex(int32_t Index); // Function UMG.ComboBoxString.SetSelectedIndex // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3851380
	bool RemoveOption(struct FString Option); // Function UMG.ComboBoxString.RemoveOption // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3851a20
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3851640
	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	bool IsOpen(); // Function UMG.ComboBoxString.IsOpen // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3851180
	struct FString GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3851260
	int32_t GetSelectedIndex(); // Function UMG.ComboBoxString.GetSelectedIndex // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3851200
	int32_t GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38511e0
	struct FString GetOptionAtIndex(int32_t Index); // Function UMG.ComboBoxString.GetOptionAtIndex // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3851700
	int32_t FindOptionIndex(struct FString Option); // Function UMG.ComboBoxString.FindOptionIndex // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38518e0
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3851680
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38516a0
	void AddOption(struct FString Option); // Function UMG.ComboBoxString.AddOption // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3851bd0
};

// Class UMG.DynamicEntryBoxBase
// Size: 0x298 (Inherited: 0x1b8)
struct UDynamicEntryBoxBase : UWidget {
	struct FVector2D EntrySpacing; // 0x1b8(0x10)
	struct TArray<struct FVector2D> SpacingPattern; // 0x1c8(0x10)
	enum class EDynamicBoxType EntryBoxType; // 0x1d8(0x01)
	char pad_1D9[0x3]; // 0x1d9(0x03)
	struct FSlateChildSize EntrySizeRule; // 0x1dc(0x08)
	enum class EHorizontalAlignment EntryHorizontalAlignment; // 0x1e4(0x01)
	enum class EVerticalAlignment EntryVerticalAlignment; // 0x1e5(0x01)
	char pad_1E6[0x2]; // 0x1e6(0x02)
	int32_t MaxElementSize; // 0x1e8(0x04)
	struct FRadialBoxSettings RadialBoxSettings; // 0x1ec(0x10)
	char pad_1FC[0x14]; // 0x1fc(0x14)
	struct FUserWidgetPool EntryWidgetPool; // 0x210(0x88)

	void SetRadialSettings(struct FRadialBoxSettings& InSettings); // Function UMG.DynamicEntryBoxBase.SetRadialSettings // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3856030
	void SetEntrySpacing(struct FVector2D& InEntrySpacing); // Function UMG.DynamicEntryBoxBase.SetEntrySpacing // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3856140
	int32_t GetNumEntries(); // Function UMG.DynamicEntryBoxBase.GetNumEntries // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3856230
	struct TArray<struct UUserWidget*> GetAllEntries(); // Function UMG.DynamicEntryBoxBase.GetAllEntries // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3856250
};

// Class UMG.DynamicEntryBox
// Size: 0x2a0 (Inherited: 0x298)
struct UDynamicEntryBox : UDynamicEntryBoxBase {
	struct UUserWidget* EntryWidgetClass; // 0x298(0x08)

	void Reset(bool bDeleteWidgets); // Function UMG.DynamicEntryBox.Reset // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3855af0
	void RemoveEntry(struct UUserWidget* EntryWidget); // Function UMG.DynamicEntryBox.RemoveEntry // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3855520
	struct UUserWidget* BP_CreateEntryOfClass(struct UUserWidget* EntryClass); // Function UMG.DynamicEntryBox.BP_CreateEntryOfClass // (Final|RequiredAPI|Native|Private|BlueprintCallable) // @ game+0x38552c0
	struct UUserWidget* BP_CreateEntry(); // Function UMG.DynamicEntryBox.BP_CreateEntry // (Final|RequiredAPI|Native|Private|BlueprintCallable) // @ game+0x38554e0
};

// Class UMG.EditableText
// Size: 0x570 (Inherited: 0x1b8)
struct UEditableText : UWidget {
	struct FText Text; // 0x1b8(0x18)
	struct FDelegate TextDelegate; // 0x1d0(0x14)
	char pad_1E4[0x4]; // 0x1e4(0x04)
	struct FText HintText; // 0x1e8(0x18)
	struct FDelegate HintTextDelegate; // 0x200(0x14)
	char pad_214[0xc]; // 0x214(0x0c)
	struct FEditableTextStyle WidgetStyle; // 0x220(0x2f0)
	bool IsReadOnly; // 0x510(0x01)
	bool IsPassword; // 0x511(0x01)
	char pad_512[0x2]; // 0x512(0x02)
	struct FUnicodeStringLength MaximumTextEntryLimit; // 0x514(0x08)
	float MinimumDesiredWidth; // 0x51c(0x04)
	bool IsCaretMovedWhenGainFocus; // 0x520(0x01)
	bool SelectAllTextWhenFocused; // 0x521(0x01)
	bool RevertTextOnEscape; // 0x522(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x523(0x01)
	bool SelectAllTextOnCommit; // 0x524(0x01)
	bool AllowContextMenu; // 0x525(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0x526(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x527(0x01)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x528(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x529(0x01)
	enum class ETextJustify Justification; // 0x52a(0x01)
	enum class ETextOverflowPolicy OverflowPolicy; // 0x52b(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0x52c(0x03)
	char pad_52F[0x1]; // 0x52f(0x01)
	struct FMulticastInlineDelegate OnTextChanged; // 0x530(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x540(0x10)
	struct FMulticastInlineDelegate OnTextOverflowed; // 0x550(0x10)
	char pad_560[0x10]; // 0x560(0x10)

	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy); // Function UMG.EditableText.SetTextOverflowPolicy // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38596d0
	void SetText(struct FText InText); // Function UMG.EditableText.SetText // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3859f80
	void SetMinimumDesiredWidth(float InMinDesiredWidth); // Function UMG.EditableText.SetMinimumDesiredWidth // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3859b50
	void SetMaximumTextEntryLimit(struct FUnicodeStringLength InMaximumTextEntryLimit); // Function UMG.EditableText.SetMaximumTextEntryLimit // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38597e0
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableText.SetJustification // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3859920
	void SetIsReadOnly(bool InbIsReadyOnly); // Function UMG.EditableText.SetIsReadOnly // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3859a30
	void SetIsPassword(bool InbIsPassword); // Function UMG.EditableText.SetIsPassword // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3859e60
	void SetHintText(struct FText InHintText); // Function UMG.EditableText.SetHintText // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3859c90
	void SetFontOutlineMaterial(struct UMaterialInterface* InMaterial); // Function UMG.EditableText.SetFontOutlineMaterial // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3859260
	void SetFontMaterial(struct UMaterialInterface* InMaterial); // Function UMG.EditableText.SetFontMaterial // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3859370
	void SetFont(struct FSlateFontInfo InFontInfo); // Function UMG.EditableText.SetFont // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3859480
	void OnEditableTextOverflowedEvent__DelegateSignature(); // DelegateFunction UMG.EditableText.OnEditableTextOverflowedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	void OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x19be2f0
	void OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x19be2f0
	struct FText GetText(); // Function UMG.EditableText.GetText // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x385a0c0
	enum class ETextJustify GetJustification(); // Function UMG.EditableText.GetJustification // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3859a10
	struct FText GetHintText(); // Function UMG.EditableText.GetHintText // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3859dd0
	struct FSlateFontInfo GetFont(); // Function UMG.EditableText.GetFont // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38596a0
};

// Class UMG.EditableTextBox
// Size: 0x1100 (Inherited: 0x1b8)
struct UEditableTextBox : UWidget {
	struct FText Text; // 0x1b8(0x18)
	struct FDelegate TextDelegate; // 0x1d0(0x14)
	char pad_1E4[0xc]; // 0x1e4(0x0c)
	struct FEditableTextBoxStyle WidgetStyle; // 0x1f0(0xe80)
	struct FText HintText; // 0x1070(0x18)
	struct FDelegate HintTextDelegate; // 0x1088(0x14)
	bool IsReadOnly; // 0x109c(0x01)
	bool IsPassword; // 0x109d(0x01)
	char pad_109E[0x2]; // 0x109e(0x02)
	struct FUnicodeStringLength MaximumTextEntryLimit; // 0x10a0(0x08)
	float MinimumDesiredWidth; // 0x10a8(0x04)
	bool IsCaretMovedWhenGainFocus; // 0x10ac(0x01)
	bool SelectAllTextWhenFocused; // 0x10ad(0x01)
	bool RevertTextOnEscape; // 0x10ae(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x10af(0x01)
	bool SelectAllTextOnCommit; // 0x10b0(0x01)
	bool AllowContextMenu; // 0x10b1(0x01)
	enum class EVirtualKeyboardType KeyboardType; // 0x10b2(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x10b3(0x01)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x10b4(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x10b5(0x01)
	enum class ETextJustify Justification; // 0x10b6(0x01)
	enum class ETextOverflowPolicy OverflowPolicy; // 0x10b7(0x01)
	struct FShapedTextOptions ShapedTextOptions; // 0x10b8(0x03)
	char pad_10BB[0x5]; // 0x10bb(0x05)
	struct FMulticastInlineDelegate OnTextChanged; // 0x10c0(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x10d0(0x10)
	struct FMulticastInlineDelegate OnTextOverflowed; // 0x10e0(0x10)
	char pad_10F0[0x10]; // 0x10f0(0x10)

	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy); // Function UMG.EditableTextBox.SetTextOverflowPolicy // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x385c960
	void SetText(struct FText InText); // Function UMG.EditableTextBox.SetText // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x385d270
	void SetMaximumTextEntryLimit(struct FUnicodeStringLength InMaximumTextEntryLimit); // Function UMG.EditableTextBox.SetMaximumTextEntryLimit // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x385cb60
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableTextBox.SetJustification // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x385ca70
	void SetIsReadOnly(bool bReadOnly); // Function UMG.EditableTextBox.SetIsReadOnly // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x385cea0
	void SetIsPassword(bool bIsPassword); // Function UMG.EditableTextBox.SetIsPassword // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x385cd80
	void SetHintText(struct FText InText); // Function UMG.EditableTextBox.SetHintText // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x385d130
	void SetForegroundColor(struct FLinearColor Color); // Function UMG.EditableTextBox.SetForegroundColor // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x385c830
	void SetError(struct FText InError); // Function UMG.EditableTextBox.SetError // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x385cfc0
	void OnEditableTextBoxOverflowedEvent__DelegateSignature(); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxOverflowedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	void OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x19be2f0
	void OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x19be2f0
	bool HasError(); // Function UMG.EditableTextBox.HasError // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x385cca0
	struct FText GetText(); // Function UMG.EditableTextBox.GetText // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x385d3b0
	struct FVector2D GetContentSize(); // Function UMG.EditableTextBox.GetContentSize // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x385c7c0
	void ClearError(); // Function UMG.EditableTextBox.ClearError // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x385cd10
};

// Class UMG.ExpandableArea
// Size: 0x4c0 (Inherited: 0x1b8)
struct UExpandableArea : UWidget {
	char pad_1B8[0x8]; // 0x1b8(0x08)
	struct FExpandableAreaStyle Style; // 0x1c0(0x1c0)
	struct FSlateBrush BorderBrush; // 0x380(0xd0)
	struct FSlateColor BorderColor; // 0x450(0x14)
	bool bIsExpanded; // 0x464(0x01)
	char pad_465[0x3]; // 0x465(0x03)
	float MaxHeight; // 0x468(0x04)
	struct FMargin HeaderPadding; // 0x46c(0x10)
	struct FMargin AreaPadding; // 0x47c(0x10)
	char pad_48C[0x4]; // 0x48c(0x04)
	struct FMulticastInlineDelegate OnExpansionChanged; // 0x490(0x10)
	struct UWidget* HeaderContent; // 0x4a0(0x08)
	struct UWidget* BodyContent; // 0x4a8(0x08)
	char pad_4B0[0x10]; // 0x4b0(0x10)

	void SetIsExpanded_Animated(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded_Animated // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x385fd00
	void SetIsExpanded(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x385feb0
	bool GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x385ffb0
};

// Class UMG.GridPanel
// Size: 0x200 (Inherited: 0x1d0)
struct UGridPanel : UPanelWidget {
	struct TArray<float> ColumnFill; // 0x1d0(0x10)
	struct TArray<float> RowFill; // 0x1e0(0x10)
	char pad_1F0[0x10]; // 0x1f0(0x10)

	void SetRowFill(int32_t RowIndex, float Coefficient); // Function UMG.GridPanel.SetRowFill // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3861c00
	void SetColumnFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetColumnFill // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3861e10
	struct UGridSlot* AddChildToGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.GridPanel.AddChildToGrid // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3862020
};

// Class UMG.GridSlot
// Size: 0x80 (Inherited: 0x40)
struct UGridSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x2]; // 0x52(0x02)
	int32_t Row; // 0x54(0x04)
	int32_t RowSpan; // 0x58(0x04)
	int32_t Column; // 0x5c(0x04)
	int32_t ColumnSpan; // 0x60(0x04)
	int32_t Layer; // 0x64(0x04)
	struct FVector2D Nudge; // 0x68(0x10)
	char pad_78[0x8]; // 0x78(0x08)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.GridSlot.SetVerticalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3862cf0
	void SetRowSpan(int32_t InRowSpan); // Function UMG.GridSlot.SetRowSpan // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3863340
	void SetRow(int32_t InRow); // Function UMG.GridSlot.SetRow // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3863440
	void SetPadding(struct FMargin InPadding); // Function UMG.GridSlot.SetPadding // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3863540
	void SetNudge(struct FVector2D InNudge); // Function UMG.GridSlot.SetNudge // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3862f30
	void SetLayer(int32_t InLayer); // Function UMG.GridSlot.SetLayer // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3863040
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.GridSlot.SetHorizontalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3862e10
	void SetColumnSpan(int32_t InColumnSpan); // Function UMG.GridSlot.SetColumnSpan // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3863140
	void SetColumn(int32_t InColumn); // Function UMG.GridSlot.SetColumn // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3863240
};

// Class UMG.HorizontalBox
// Size: 0x1e0 (Inherited: 0x1d0)
struct UHorizontalBox : UPanelWidget {
	char pad_1D0[0x10]; // 0x1d0(0x10)

	struct UHorizontalBoxSlot* AddChildToHorizontalBox(struct UWidget* Content); // Function UMG.HorizontalBox.AddChildToHorizontalBox // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3864240
};

// Class UMG.HorizontalBoxSlot
// Size: 0x68 (Inherited: 0x40)
struct UHorizontalBoxSlot : UPanelSlot {
	char pad_40[0x8]; // 0x40(0x08)
	struct FSlateChildSize Size; // 0x48(0x08)
	struct FMargin Padding; // 0x50(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x60(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.HorizontalBoxSlot.SetVerticalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3864a90
	void SetSize(struct FSlateChildSize InSize); // Function UMG.HorizontalBoxSlot.SetSize // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3864cd0
	void SetPadding(struct FMargin InPadding); // Function UMG.HorizontalBoxSlot.SetPadding // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3864de0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.HorizontalBoxSlot.SetHorizontalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3864bb0
};

// Class UMG.Image
// Size: 0x330 (Inherited: 0x1b8)
struct UImage : UWidget {
	char pad_1B8[0x8]; // 0x1b8(0x08)
	struct FSlateBrush Brush; // 0x1c0(0xd0)
	struct FDelegate BrushDelegate; // 0x290(0x14)
	struct FLinearColor ColorAndOpacity; // 0x2a4(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x2b4(0x14)
	bool bFlipForRightToLeftFlowDirection; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	struct FDelegate OnMouseButtonDownEvent; // 0x2cc(0x14)
	char pad_2E0[0x50]; // 0x2e0(0x50)

	void SetOpacity(float InOpacity); // Function UMG.Image.SetOpacity // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38667f0
	void SetDesiredSizeOverride(struct FVector2D DesiredSize); // Function UMG.Image.SetDesiredSizeOverride // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x38666c0
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Image.SetColorAndOpacity // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3866910
	void SetBrushTintColor(struct FSlateColor TintColor); // Function UMG.Image.SetBrushTintColor // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38665b0
	void SetBrushResourceObject(struct UObject* ResourceObject); // Function UMG.Image.SetBrushResourceObject // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38664c0
	void SetBrushFromTextureDynamic(struct UTexture2DDynamic* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTextureDynamic // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3865cc0
	void SetBrushFromTexture(struct UTexture2D* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTexture // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3866020
	void SetBrushFromSoftTexture(struct TSoftObjectPtr<UTexture2D> SoftTexture, bool bMatchSize); // Function UMG.Image.SetBrushFromSoftTexture // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3865950
	void SetBrushFromSoftMaterial(struct TSoftObjectPtr<UMaterialInterface> SoftMaterial); // Function UMG.Image.SetBrushFromSoftMaterial // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3865780
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Image.SetBrushFromMaterial // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3865bc0
	void SetBrushFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize); // Function UMG.Image.SetBrushFromAtlasInterface // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3865e60
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Image.SetBrushFromAsset // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38661c0
	void SetBrush(struct FSlateBrush& InBrush); // Function UMG.Image.SetBrush // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x38662c0
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3865750
};

// Class UMG.InputKeySelector
// Size: 0x9c0 (Inherited: 0x1b8)
struct UInputKeySelector : UWidget {
	char pad_1B8[0x8]; // 0x1b8(0x08)
	struct FButtonStyle WidgetStyle; // 0x1c0(0x400)
	struct FTextBlockStyle TextStyle; // 0x5c0(0x340)
	struct FInputChord SelectedKey; // 0x900(0x28)
	struct FMargin Margin; // 0x928(0x10)
	struct FText KeySelectionText; // 0x938(0x18)
	struct FText NoKeySpecifiedText; // 0x950(0x18)
	bool bAllowModifierKeys; // 0x968(0x01)
	bool bAllowGamepadKeys; // 0x969(0x01)
	char pad_96A[0x6]; // 0x96a(0x06)
	struct TArray<struct FKey> EscapeKeys; // 0x970(0x10)
	struct FMulticastInlineDelegate OnKeySelected; // 0x980(0x10)
	struct FMulticastInlineDelegate OnKeySelectionSuccessful; // 0x990(0x10)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x9a0(0x10)
	char pad_9B0[0x10]; // 0x9b0(0x10)

	void SetTextBlockVisibility(enum class ESlateVisibility InVisibility); // Function UMG.InputKeySelector.SetTextBlockVisibility // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3869fd0
	void SetSelectedKey(struct FInputChord& InSelectedKey); // Function UMG.InputKeySelector.SetSelectedKey // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x386a680
	void SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText); // Function UMG.InputKeySelector.SetNoKeySpecifiedText // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x386a380
	void SetKeySelectionText(struct FText InKeySelectionText); // Function UMG.InputKeySelector.SetKeySelectionText // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x386a4c0
	void SetEscapeKeys(struct TArray<struct FKey>& InKeys); // Function UMG.InputKeySelector.SetEscapeKeys // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3869db0
	void SetAllowModifierKeys(bool bInAllowModifierKeys); // Function UMG.InputKeySelector.SetAllowModifierKeys // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x386a280
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys); // Function UMG.InputKeySelector.SetAllowGamepadKeys // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x386a180
	void OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	bool GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x386a140
	void ClearSelectedKey(); // Function UMG.InputKeySelector.ClearSelectedKey // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x386a600
};

// Class UMG.InvalidationBox
// Size: 0x1e8 (Inherited: 0x1d0)
struct UInvalidationBox : UContentWidget {
	bool bCanCache; // 0x1d0(0x01)
	char pad_1D1[0x17]; // 0x1d1(0x17)

	void SetCanCache(bool CanCache); // Function UMG.InvalidationBox.SetCanCache // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x386c870
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x386c9d0
	bool GetCanCache(); // Function UMG.InvalidationBox.GetCanCache // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x386c970
};

// Class UMG.MenuAnchor
// Size: 0x228 (Inherited: 0x1d0)
struct UMenuAnchor : UContentWidget {
	struct UUserWidget* MenuClass; // 0x1d0(0x08)
	struct FDelegate OnGetMenuContentEvent; // 0x1d8(0x14)
	struct FDelegate OnGetUserMenuContentEvent; // 0x1ec(0x14)
	enum class EMenuPlacement Placement; // 0x200(0x01)
	bool bFitInWindow; // 0x201(0x01)
	bool ShouldDeferPaintingAfterWindowContent; // 0x202(0x01)
	bool UseApplicationMenuStack; // 0x203(0x01)
	bool ShowMenuBackground; // 0x204(0x01)
	char pad_205[0x3]; // 0x205(0x03)
	struct FMulticastInlineDelegate OnMenuOpenChanged; // 0x208(0x10)
	char pad_218[0x10]; // 0x218(0x10)

	void ToggleOpen(bool bFocusOnOpen); // Function UMG.MenuAnchor.ToggleOpen // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3872bb0
	bool ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3872960
	void SetPlacement(enum class EMenuPlacement InPlacement); // Function UMG.MenuAnchor.SetPlacement // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3872dc0
	void Open(bool bFocusMenu); // Function UMG.MenuAnchor.Open // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3872a70
	bool IsOpen(); // Function UMG.MenuAnchor.IsOpen // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38729c0
	bool HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38728c0
	struct UUserWidget* GetUserWidget__DelegateSignature(); // DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature // (Public|Delegate) // @ game+0x19be2f0
	struct FVector2D GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3872910
	void FitInWindow(bool bFit); // Function UMG.MenuAnchor.FitInWindow // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3872cb0
	void Close(); // Function UMG.MenuAnchor.Close // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3872a20
};

// Class UMG.TextLayoutWidget
// Size: 0x1d8 (Inherited: 0x1b8)
struct UTextLayoutWidget : UWidget {
	struct FShapedTextOptions ShapedTextOptions; // 0x1b8(0x03)
	enum class ETextJustify Justification; // 0x1bb(0x01)
	enum class ETextWrappingPolicy WrappingPolicy; // 0x1bc(0x01)
	char AutoWrapText : 1; // 0x1bd(0x01)
	char pad_1BD_1 : 7; // 0x1bd(0x01)
	char pad_1BE[0x2]; // 0x1be(0x02)
	float WrapTextAt; // 0x1c0(0x04)
	struct FMargin Margin; // 0x1c4(0x10)
	float LineHeightPercentage; // 0x1d4(0x04)

	void SetJustification(enum class ETextJustify InJustification); // Function UMG.TextLayoutWidget.SetJustification // (Native|Public|BlueprintCallable) // @ game+0x389c730
};

// Class UMG.MultiLineEditableText
// Size: 0x5c0 (Inherited: 0x1d8)
struct UMultiLineEditableText : UTextLayoutWidget {
	struct FText Text; // 0x1d8(0x18)
	struct FText HintText; // 0x1f0(0x18)
	struct FDelegate HintTextDelegate; // 0x208(0x14)
	char pad_21C[0x4]; // 0x21c(0x04)
	struct FTextBlockStyle WidgetStyle; // 0x220(0x340)
	bool bIsReadOnly; // 0x560(0x01)
	char pad_561[0x3]; // 0x561(0x03)
	struct FUnicodeStringLength MaximumTextEntryLimit; // 0x564(0x08)
	bool SelectAllTextWhenFocused; // 0x56c(0x01)
	bool ClearTextSelectionOnFocusLoss; // 0x56d(0x01)
	bool RevertTextOnEscape; // 0x56e(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x56f(0x01)
	bool AllowContextMenu; // 0x570(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x571(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x572(0x01)
	char pad_573[0x5]; // 0x573(0x05)
	struct FMulticastInlineDelegate OnTextChanged; // 0x578(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x588(0x10)
	struct FMulticastInlineDelegate OnTextOverflowed; // 0x598(0x10)
	char pad_5A8[0x18]; // 0x5a8(0x18)

	void SetWidgetStyle(struct FTextBlockStyle& InWidgetStyle); // Function UMG.MultiLineEditableText.SetWidgetStyle // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3874af0
	void SetText(struct FText InText); // Function UMG.MultiLineEditableText.SetText // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3874fe0
	void SetMaximumTextEntryLimit(struct FUnicodeStringLength InMaximumTextEntryLimit); // Function UMG.MultiLineEditableText.SetMaximumTextEntryLimit // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38749b0
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableText.SetIsReadOnly // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3874cd0
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableText.SetHintText // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3874e10
	void SetFontOutlineMaterial(struct UMaterialInterface* InMaterial); // Function UMG.MultiLineEditableText.SetFontOutlineMaterial // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3874470
	void SetFontMaterial(struct UMaterialInterface* InMaterial); // Function UMG.MultiLineEditableText.SetFontMaterial // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38745d0
	void SetFont(struct FSlateFontInfo InFontInfo); // Function UMG.MultiLineEditableText.SetFont // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3874730
	void OnMultiLineEditableTextOverflowedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextOverflowedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x19be2f0
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x19be2f0
	struct FText GetText(); // Function UMG.MultiLineEditableText.GetText // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3875120
	struct FText GetHintText(); // Function UMG.MultiLineEditableText.GetHintText // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3874f50
	struct FSlateFontInfo GetFont(); // Function UMG.MultiLineEditableText.GetFont // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38596a0
};

// Class UMG.MultiLineEditableTextBox
// Size: 0x10f0 (Inherited: 0x1d8)
struct UMultiLineEditableTextBox : UTextLayoutWidget {
	struct FText Text; // 0x1d8(0x18)
	struct FText HintText; // 0x1f0(0x18)
	struct FDelegate HintTextDelegate; // 0x208(0x14)
	char pad_21C[0x4]; // 0x21c(0x04)
	struct FEditableTextBoxStyle WidgetStyle; // 0x220(0xe80)
	bool bIsReadOnly; // 0x10a0(0x01)
	char pad_10A1[0x3]; // 0x10a1(0x03)
	struct FUnicodeStringLength MaximumTextEntryLimit; // 0x10a4(0x08)
	bool AllowContextMenu; // 0x10ac(0x01)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x10ad(0x01)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x10ae(0x01)
	char pad_10AF[0x1]; // 0x10af(0x01)
	struct FMulticastInlineDelegate OnTextChanged; // 0x10b0(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x10c0(0x10)
	struct FMulticastInlineDelegate OnTextOverflowed; // 0x10d0(0x10)
	char pad_10E0[0x10]; // 0x10e0(0x10)

	void SetTextStyle(struct FTextBlockStyle& InTextStyle); // Function UMG.MultiLineEditableTextBox.SetTextStyle // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3877660
	void SetText(struct FText InText); // Function UMG.MultiLineEditableTextBox.SetText // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3877c80
	void SetMaximumTextEntryLimit(struct FUnicodeStringLength InMaximumTextEntryLimit); // Function UMG.MultiLineEditableTextBox.SetMaximumTextEntryLimit // (Final|Native|Public|BlueprintCallable) // @ game+0x3877520
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38777f0
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableTextBox.SetHintText // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3877aa0
	void SetForegroundColor(struct FLinearColor Color); // Function UMG.MultiLineEditableTextBox.SetForegroundColor // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3877400
	void SetError(struct FText InError); // Function UMG.MultiLineEditableTextBox.SetError // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3877930
	void OnMultiLineEditableTextBoxOverflowedEvent__DelegateSignature(); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxOverflowedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x19be2f0
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // @ game+0x19be2f0
	struct FText GetText(); // Function UMG.MultiLineEditableTextBox.GetText // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3877dc0
	struct FText GetHintText(); // Function UMG.MultiLineEditableTextBox.GetHintText // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3877be0
};

// Class UMG.NamedSlot
// Size: 0x1e0 (Inherited: 0x1d0)
struct UNamedSlot : UContentWidget {
	char pad_1D0[0x10]; // 0x1d0(0x10)
};

// Class UMG.NamedSlotInterface
// Size: 0x30 (Inherited: 0x30)
struct UNamedSlotInterface : UInterface {
};

// Class UMG.NativeWidgetHost
// Size: 0x1c8 (Inherited: 0x1b8)
struct UNativeWidgetHost : UWidget {
	char pad_1B8[0x10]; // 0x1b8(0x10)
};

// Class UMG.Overlay
// Size: 0x1e0 (Inherited: 0x1d0)
struct UOverlay : UPanelWidget {
	char pad_1D0[0x10]; // 0x1d0(0x10)

	bool ReplaceOverlayChildAt(int32_t Index, struct UWidget* Content); // Function UMG.Overlay.ReplaceOverlayChildAt // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x387a810
	struct UOverlaySlot* AddChildToOverlay(struct UWidget* Content); // Function UMG.Overlay.AddChildToOverlay // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x387a9d0
};

// Class UMG.OverlaySlot
// Size: 0x60 (Inherited: 0x40)
struct UOverlaySlot : UPanelSlot {
	char pad_40[0x8]; // 0x40(0x08)
	struct FMargin Padding; // 0x48(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.OverlaySlot.SetVerticalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x387b280
	void SetPadding(struct FMargin InPadding); // Function UMG.OverlaySlot.SetPadding // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x387b4c0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.OverlaySlot.SetHorizontalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x387b3a0
};

// Class UMG.ProgressBar
// Size: 0x4b0 (Inherited: 0x1b8)
struct UProgressBar : UWidget {
	char pad_1B8[0x8]; // 0x1b8(0x08)
	struct FProgressBarStyle WidgetStyle; // 0x1c0(0x290)
	float Percent; // 0x450(0x04)
	enum class EProgressBarFillType BarFillType; // 0x454(0x01)
	enum class EProgressBarFillStyle BarFillStyle; // 0x455(0x01)
	bool bIsMarquee; // 0x456(0x01)
	char pad_457[0x1]; // 0x457(0x01)
	struct FVector2D BorderPadding; // 0x458(0x10)
	struct FDelegate PercentDelegate; // 0x468(0x14)
	struct FLinearColor FillColorAndOpacity; // 0x47c(0x10)
	struct FDelegate FillColorAndOpacityDelegate; // 0x48c(0x14)
	char pad_4A0[0x10]; // 0x4a0(0x10)

	void SetPercent(float InPercent); // Function UMG.ProgressBar.SetPercent // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x387d690
	void SetIsMarquee(bool InbIsMarquee); // Function UMG.ProgressBar.SetIsMarquee // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x387d590
	void SetFillColorAndOpacity(struct FLinearColor InColor); // Function UMG.ProgressBar.SetFillColorAndOpacity // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x387d470
};

// Class UMG.RetainerBox
// Size: 0x208 (Inherited: 0x1d0)
struct URetainerBox : UContentWidget {
	bool bRetainRender; // 0x1d0(0x01)
	bool RenderOnInvalidation; // 0x1d1(0x01)
	bool RenderOnPhase; // 0x1d2(0x01)
	char pad_1D3[0x1]; // 0x1d3(0x01)
	int32_t Phase; // 0x1d4(0x04)
	int32_t PhaseCount; // 0x1d8(0x04)
	char pad_1DC[0x4]; // 0x1dc(0x04)
	struct UMaterialInterface* EffectMaterial; // 0x1e0(0x08)
	struct FName TextureParameter; // 0x1e8(0x0c)
	char pad_1F4[0x14]; // 0x1f4(0x14)

	void SetTextureParameter(struct FName TextureParameter); // Function UMG.RetainerBox.SetTextureParameter // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x387ece0
	void SetRetainRendering(bool bInRetainRendering); // Function UMG.RetainerBox.SetRetainRendering // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x387ebe0
	void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases); // Function UMG.RetainerBox.SetRenderingPhase // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x387f010
	void SetEffectMaterial(struct UMaterialInterface* EffectMaterial); // Function UMG.RetainerBox.SetEffectMaterial // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x387ee00
	void RequestRender(); // Function UMG.RetainerBox.RequestRender // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x387efd0
	struct UMaterialInstanceDynamic* GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x387ef90
};

// Class UMG.RichTextBlock
// Size: 0x8d0 (Inherited: 0x1d8)
struct URichTextBlock : UTextLayoutWidget {
	struct FText Text; // 0x1d8(0x18)
	struct UDataTable* TextStyleSet; // 0x1f0(0x08)
	struct TArray<struct URichTextBlockDecorator*> DecoratorClasses; // 0x1f8(0x10)
	bool bOverrideDefaultStyle; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)
	struct FTextBlockStyle DefaultTextStyleOverride; // 0x210(0x340)
	float MinDesiredWidth; // 0x550(0x04)
	enum class ETextTransformPolicy TextTransformPolicy; // 0x554(0x01)
	enum class ETextOverflowPolicy TextOverflowPolicy; // 0x555(0x01)
	char pad_556[0xa]; // 0x556(0x0a)
	struct FTextBlockStyle DefaultTextStyle; // 0x560(0x340)
	struct TArray<struct URichTextBlockDecorator*> InstanceDecorators; // 0x8a0(0x10)
	char pad_8B0[0x20]; // 0x8b0(0x20)

	void SetWrapTextAt(float InWrapTextAt); // Function UMG.RichTextBlock.SetWrapTextAt // (Final|Native|Protected|BlueprintCallable) // @ game+0x3880250
	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy); // Function UMG.RichTextBlock.SetTextTransformPolicy // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3880e10
	void SetTextStyleSet(struct UDataTable* NewTextStyleSet); // Function UMG.RichTextBlock.SetTextStyleSet // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3880560
	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy); // Function UMG.RichTextBlock.SetTextOverflowPolicy // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3880d00
	void SetText(struct FText& InText); // Function UMG.RichTextBlock.SetText // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3880670
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.RichTextBlock.SetMinDesiredWidth // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3881120
	void SetDefaultTextStyle(struct FTextBlockStyle& InDefaultTextStyle); // Function UMG.RichTextBlock.SetDefaultTextStyle // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3880ba0
	void SetDefaultStrikeBrush(struct FSlateBrush& InStrikeBrush); // Function UMG.RichTextBlock.SetDefaultStrikeBrush // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3881210
	void SetDefaultShadowOffset(struct FVector2D InShadowOffset); // Function UMG.RichTextBlock.SetDefaultShadowOffset // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3881680
	void SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x38817d0
	void SetDefaultMaterial(struct UMaterialInterface* InMaterial); // Function UMG.RichTextBlock.SetDefaultMaterial // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3880a70
	void SetDefaultFont(struct FSlateFontInfo InFontInfo); // Function UMG.RichTextBlock.SetDefaultFont // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3881440
	void SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultColorAndOpacity // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3881900
	void SetDecorators(struct TArray<struct URichTextBlockDecorator*>& InDecoratorClasses); // Function UMG.RichTextBlock.SetDecorators // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x38807f0
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.RichTextBlock.SetAutoWrapText // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3880f00
	void RefreshTextLayout(); // Function UMG.RichTextBlock.RefreshTextLayout // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38803c0
	struct UDataTable* GetTextStyleSet(); // Function UMG.RichTextBlock.GetTextStyleSet // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3880650
	struct FText GetText(); // Function UMG.RichTextBlock.GetText // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38807a0
	struct UMaterialInstanceDynamic* GetDefaultDynamicMaterial(); // Function UMG.RichTextBlock.GetDefaultDynamicMaterial // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3880920
	struct URichTextBlockDecorator* GetDecoratorByClass(struct URichTextBlockDecorator* DecoratorClass); // Function UMG.RichTextBlock.GetDecoratorByClass // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38803f0
	void ClearAllDefaultStyleOverrides(); // Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3880a30
};

// Class UMG.RichTextBlockDecorator
// Size: 0x30 (Inherited: 0x30)
struct URichTextBlockDecorator : UObject {
};

// Class UMG.RichTextBlockImageDecorator
// Size: 0x38 (Inherited: 0x30)
struct URichTextBlockImageDecorator : URichTextBlockDecorator {
	struct UDataTable* ImageSet; // 0x30(0x08)
};

// Class UMG.SafeZone
// Size: 0x1e8 (Inherited: 0x1d0)
struct USafeZone : UContentWidget {
	bool PadLeft; // 0x1d0(0x01)
	bool PadRight; // 0x1d1(0x01)
	bool PadTop; // 0x1d2(0x01)
	bool PadBottom; // 0x1d3(0x01)
	char pad_1D4[0x14]; // 0x1d4(0x14)

	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom); // Function UMG.SafeZone.SetSidesToPad // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3886c50
};

// Class UMG.SafeZoneSlot
// Size: 0x78 (Inherited: 0x40)
struct USafeZoneSlot : UPanelSlot {
	bool bIsTitleSafe; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	struct FMargin SafeAreaScale; // 0x44(0x10)
	enum class EHorizontalAlignment HAlign; // 0x54(0x01)
	enum class EVerticalAlignment VAlign; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	struct FMargin Padding; // 0x58(0x10)
	char pad_68[0x10]; // 0x68(0x10)
};

// Class UMG.ScaleBox
// Size: 0x1f0 (Inherited: 0x1d0)
struct UScaleBox : UContentWidget {
	enum class EStretch Stretch; // 0x1d0(0x01)
	enum class EStretchDirection StretchDirection; // 0x1d1(0x01)
	char pad_1D2[0x2]; // 0x1d2(0x02)
	float UserSpecifiedScale; // 0x1d4(0x04)
	bool IgnoreInheritedScale; // 0x1d8(0x01)
	char pad_1D9[0x17]; // 0x1d9(0x17)

	void SetUserSpecifiedScale(float InUserSpecifiedScale); // Function UMG.ScaleBox.SetUserSpecifiedScale // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38886a0
	void SetStretchDirection(enum class EStretchDirection InStretchDirection); // Function UMG.ScaleBox.SetStretchDirection // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3888790
	void SetStretch(enum class EStretch InStretch); // Function UMG.ScaleBox.SetStretch // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38888c0
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale); // Function UMG.ScaleBox.SetIgnoreInheritedScale // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38885a0
};

// Class UMG.ScaleBoxSlot
// Size: 0x58 (Inherited: 0x40)
struct UScaleBoxSlot : UPanelSlot {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x40(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x41(0x01)
	char pad_42[0x16]; // 0x42(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScaleBoxSlot.SetVerticalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3889300
	void SetPadding(struct FMargin InPadding); // Function UMG.ScaleBoxSlot.SetPadding // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38894e0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScaleBoxSlot.SetHorizontalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38893f0
};

// Class UMG.ScrollBar
// Size: 0x970 (Inherited: 0x1b8)
struct UScrollBar : UWidget {
	char pad_1B8[0x8]; // 0x1b8(0x08)
	struct FScrollBarStyle WidgetStyle; // 0x1c0(0x770)
	bool bAlwaysShowScrollbar; // 0x930(0x01)
	bool bAlwaysShowScrollbarTrack; // 0x931(0x01)
	enum class EOrientation Orientation; // 0x932(0x01)
	char pad_933[0x5]; // 0x933(0x05)
	struct FVector2D Thickness; // 0x938(0x10)
	struct FMargin Padding; // 0x948(0x10)
	char pad_958[0x18]; // 0x958(0x18)

	void SetState(float InOffsetFraction, float InThumbSizeFraction); // Function UMG.ScrollBar.SetState // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3889d40
};

// Class UMG.ScrollBox
// Size: 0xd40 (Inherited: 0x1d0)
struct UScrollBox : UPanelWidget {
	struct FScrollBoxStyle WidgetStyle; // 0x1d0(0x370)
	struct FScrollBarStyle WidgetBarStyle; // 0x540(0x770)
	enum class EOrientation Orientation; // 0xcb0(0x01)
	enum class ESlateVisibility ScrollBarVisibility; // 0xcb1(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0xcb2(0x01)
	char pad_CB3[0x5]; // 0xcb3(0x05)
	struct FVector2D ScrollbarThickness; // 0xcb8(0x10)
	struct FMargin ScrollbarPadding; // 0xcc8(0x10)
	bool AlwaysShowScrollbar; // 0xcd8(0x01)
	bool AlwaysShowScrollbarTrack; // 0xcd9(0x01)
	bool AllowOverscroll; // 0xcda(0x01)
	bool BackPadScrolling; // 0xcdb(0x01)
	bool FrontPadScrolling; // 0xcdc(0x01)
	bool bAnimateWheelScrolling; // 0xcdd(0x01)
	enum class EDescendantScrollDestination NavigationDestination; // 0xcde(0x01)
	char pad_CDF[0x1]; // 0xcdf(0x01)
	float NavigationScrollPadding; // 0xce0(0x04)
	enum class EScrollWhenFocusChanges ScrollWhenFocusChanges; // 0xce4(0x01)
	bool bAllowRightClickDragScrolling; // 0xce5(0x01)
	char pad_CE6[0x2]; // 0xce6(0x02)
	float WheelScrollMultiplier; // 0xce8(0x04)
	char pad_CEC[0x4]; // 0xcec(0x04)
	struct FMulticastInlineDelegate OnUserScrolled; // 0xcf0(0x10)
	struct FMulticastInlineDelegate OnFocusChannged; // 0xd00(0x10)
	struct FMulticastInlineDelegate OnIsScrollableChanged; // 0xd10(0x10)
	char pad_D20[0x20]; // 0xd20(0x20)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ScrollBox.SetWheelScrollMultiplier // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388aeb0
	void SetScrollWhenFocusChanges(enum class EScrollWhenFocusChanges NewScrollWhenFocusChanges); // Function UMG.ScrollBox.SetScrollWhenFocusChanges // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388adb0
	void SetScrollOffset(float NewScrollOffset); // Function UMG.ScrollBox.SetScrollOffset // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388ab60
	void SetScrollbarVisibility(enum class ESlateVisibility NewScrollBarVisibility); // Function UMG.ScrollBox.SetScrollbarVisibility // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388b4f0
	void SetScrollbarThickness(struct FVector2D& NewScrollbarThickness); // Function UMG.ScrollBox.SetScrollbarThickness // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x388b400
	void SetScrollbarPadding(struct FMargin& NewScrollbarPadding); // Function UMG.ScrollBox.SetScrollbarPadding // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x388b2f0
	void SetOrientation(enum class EOrientation NewOrientation); // Function UMG.ScrollBox.SetOrientation // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388b5e0
	void SetNavigationDestination(enum class EDescendantScrollDestination NewNavigationDestination); // Function UMG.ScrollBox.SetNavigationDestination // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388acb0
	void SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel); // Function UMG.ScrollBox.SetConsumeMouseWheel // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388b6e0
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling); // Function UMG.ScrollBox.SetAnimateWheelScrolling // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388afc0
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar); // Function UMG.ScrollBox.SetAlwaysShowScrollbar // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388b1e0
	void SetAllowOverscroll(bool NewAllowOverscroll); // Function UMG.ScrollBox.SetAllowOverscroll // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388b0d0
	void ScrollWidgetIntoView(struct UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination, float Padding); // Function UMG.ScrollBox.ScrollWidgetIntoView // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388a6f0
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388a9f0
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388a9c0
	float GetViewOffsetFraction(); // Function UMG.ScrollBox.GetViewOffsetFraction // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x388aa30
	float GetViewFraction(); // Function UMG.ScrollBox.GetViewFraction // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x388aa80
	float GetScrollOffsetOfEnd(); // Function UMG.ScrollBox.GetScrollOffsetOfEnd // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x388aad0
	float GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x388ab20
	void EndInertialScrolling(); // Function UMG.ScrollBox.EndInertialScrolling // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388ac80
};

// Class UMG.ScrollBoxSlot
// Size: 0x68 (Inherited: 0x40)
struct UScrollBoxSlot : UPanelSlot {
	struct FSlateChildSize Size; // 0x40(0x08)
	struct FMargin Padding; // 0x48(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScrollBoxSlot.SetVerticalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388d400
	void SetPadding(struct FMargin InPadding); // Function UMG.ScrollBoxSlot.SetPadding // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388d640
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScrollBoxSlot.SetHorizontalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388d520
};

// Class UMG.SizeBox
// Size: 0x208 (Inherited: 0x1d0)
struct USizeBox : UContentWidget {
	char pad_1D0[0x10]; // 0x1d0(0x10)
	float WidthOverride; // 0x1e0(0x04)
	float HeightOverride; // 0x1e4(0x04)
	float MinDesiredWidth; // 0x1e8(0x04)
	float MinDesiredHeight; // 0x1ec(0x04)
	float MaxDesiredWidth; // 0x1f0(0x04)
	float MaxDesiredHeight; // 0x1f4(0x04)
	float MinAspectRatio; // 0x1f8(0x04)
	float MaxAspectRatio; // 0x1fc(0x04)
	char bOverride_WidthOverride : 1; // 0x200(0x01)
	char bOverride_HeightOverride : 1; // 0x200(0x01)
	char bOverride_MinDesiredWidth : 1; // 0x200(0x01)
	char bOverride_MinDesiredHeight : 1; // 0x200(0x01)
	char bOverride_MaxDesiredWidth : 1; // 0x200(0x01)
	char bOverride_MaxDesiredHeight : 1; // 0x200(0x01)
	char bOverride_MinAspectRatio : 1; // 0x200(0x01)
	char bOverride_MaxAspectRatio : 1; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)

	void SetWidthOverride(float InWidthOverride); // Function UMG.SizeBox.SetWidthOverride // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388e9f0
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.SizeBox.SetMinDesiredWidth // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388e6d0
	void SetMinDesiredHeight(float InMinDesiredHeight); // Function UMG.SizeBox.SetMinDesiredHeight // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388e540
	void SetMinAspectRatio(float InMinAspectRatio); // Function UMG.SizeBox.SetMinAspectRatio // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388e090
	void SetMaxDesiredWidth(float InMaxDesiredWidth); // Function UMG.SizeBox.SetMaxDesiredWidth // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388e3b0
	void SetMaxDesiredHeight(float InMaxDesiredHeight); // Function UMG.SizeBox.SetMaxDesiredHeight // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388e220
	void SetMaxAspectRatio(float InMaxAspectRatio); // Function UMG.SizeBox.SetMaxAspectRatio // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388df00
	void SetHeightOverride(float InHeightOverride); // Function UMG.SizeBox.SetHeightOverride // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388e860
	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388e990
	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388e670
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388e4e0
	void ClearMinAspectRatio(); // Function UMG.SizeBox.ClearMinAspectRatio // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388e030
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388e350
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388e1c0
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388dea0
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388e800
};

// Class UMG.SizeBoxSlot
// Size: 0x68 (Inherited: 0x40)
struct USizeBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x60(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.SizeBoxSlot.SetVerticalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388fda0
	void SetPadding(struct FMargin InPadding); // Function UMG.SizeBoxSlot.SetPadding // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388ff80
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.SizeBoxSlot.SetHorizontalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388fe90
};

// Class UMG.Slider
// Size: 0x770 (Inherited: 0x1b8)
struct USlider : UWidget {
	float Value; // 0x1b8(0x04)
	struct FDelegate ValueDelegate; // 0x1bc(0x14)
	float MinValue; // 0x1d0(0x04)
	float MaxValue; // 0x1d4(0x04)
	char pad_1D8[0x8]; // 0x1d8(0x08)
	struct FSliderStyle WidgetStyle; // 0x1e0(0x500)
	enum class EOrientation Orientation; // 0x6e0(0x01)
	char pad_6E1[0x3]; // 0x6e1(0x03)
	struct FLinearColor SliderBarColor; // 0x6e4(0x10)
	struct FLinearColor SliderHandleColor; // 0x6f4(0x10)
	bool IndentHandle; // 0x704(0x01)
	bool Locked; // 0x705(0x01)
	bool MouseUsesStep; // 0x706(0x01)
	bool RequiresControllerLock; // 0x707(0x01)
	float StepSize; // 0x708(0x04)
	bool IsFocusable; // 0x70c(0x01)
	char pad_70D[0x3]; // 0x70d(0x03)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x710(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x720(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x730(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x740(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x750(0x10)
	char pad_760[0x10]; // 0x760(0x10)

	void SetValue(float InValue); // Function UMG.Slider.SetValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3891350
	void SetStepSize(float InValue); // Function UMG.Slider.SetStepSize // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3890d70
	void SetSliderHandleColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderHandleColor // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3890b30
	void SetSliderBarColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderBarColor // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3890c50
	void SetMinValue(float InValue); // Function UMG.Slider.SetMinValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3891210
	void SetMaxValue(float InValue); // Function UMG.Slider.SetMaxValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38910d0
	void SetLocked(bool InValue); // Function UMG.Slider.SetLocked // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3890e90
	void SetIndentHandle(bool InValue); // Function UMG.Slider.SetIndentHandle // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3890fb0
	float GetValue(); // Function UMG.Slider.GetValue // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38914d0
	float GetNormalizedValue(); // Function UMG.Slider.GetNormalizedValue // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3891440
};

// Class UMG.Spacer
// Size: 0x1d8 (Inherited: 0x1b8)
struct USpacer : UWidget {
	struct FVector2D Size; // 0x1b8(0x10)
	char pad_1C8[0x10]; // 0x1c8(0x10)

	void SetSize(struct FVector2D InSize); // Function UMG.Spacer.SetSize // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3893110
};

// Class UMG.SpinBox
// Size: 0x8d0 (Inherited: 0x1b8)
struct USpinBox : UWidget {
	float Value; // 0x1b8(0x04)
	struct FDelegate ValueDelegate; // 0x1bc(0x14)
	struct FSpinBoxStyle WidgetStyle; // 0x1d0(0x600)
	int32_t MinFractionalDigits; // 0x7d0(0x04)
	int32_t MaxFractionalDigits; // 0x7d4(0x04)
	bool bAlwaysUsesDeltaSnap; // 0x7d8(0x01)
	bool bEnableSlider; // 0x7d9(0x01)
	char pad_7DA[0x2]; // 0x7da(0x02)
	float Delta; // 0x7dc(0x04)
	float SliderExponent; // 0x7e0(0x04)
	char pad_7E4[0x4]; // 0x7e4(0x04)
	struct FSlateFontInfo Font; // 0x7e8(0x60)
	enum class ETextJustify Justification; // 0x848(0x01)
	char pad_849[0x3]; // 0x849(0x03)
	float MinDesiredWidth; // 0x84c(0x04)
	enum class EVirtualKeyboardType KeyboardType; // 0x850(0x01)
	bool ClearKeyboardFocusOnCommit; // 0x851(0x01)
	bool SelectAllTextOnCommit; // 0x852(0x01)
	char pad_853[0x1]; // 0x853(0x01)
	struct FSlateColor ForegroundColor; // 0x854(0x14)
	struct FMulticastInlineDelegate OnValueChanged; // 0x868(0x10)
	struct FMulticastInlineDelegate OnValueCommitted; // 0x878(0x10)
	struct FMulticastInlineDelegate OnBeginSliderMovement; // 0x888(0x10)
	struct FMulticastInlineDelegate OnEndSliderMovement; // 0x898(0x10)
	char bOverride_MinValue : 1; // 0x8a8(0x01)
	char bOverride_MaxValue : 1; // 0x8a8(0x01)
	char bOverride_MinSliderValue : 1; // 0x8a8(0x01)
	char bOverride_MaxSliderValue : 1; // 0x8a8(0x01)
	char pad_8A8_4 : 4; // 0x8a8(0x01)
	char pad_8A9[0x3]; // 0x8a9(0x03)
	float MinValue; // 0x8ac(0x04)
	float MaxValue; // 0x8b0(0x04)
	float MinSliderValue; // 0x8b4(0x04)
	float MaxSliderValue; // 0x8b8(0x04)
	char pad_8BC[0x14]; // 0x8bc(0x14)

	void SetValue(float NewValue); // Function UMG.SpinBox.SetValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38944b0
	void SetMinValue(float NewValue); // Function UMG.SpinBox.SetMinValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3893ef0
	void SetMinSliderValue(float NewValue); // Function UMG.SpinBox.SetMinSliderValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3893c50
	void SetMinFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMinFractionalDigits // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38943a0
	void SetMaxValue(float NewValue); // Function UMG.SpinBox.SetMaxValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3893da0
	void SetMaxSliderValue(float NewValue); // Function UMG.SpinBox.SetMaxSliderValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3893b00
	void SetMaxFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMaxFractionalDigits // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3894290
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.SpinBox.SetForegroundColor // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38939a0
	void SetDelta(float NewValue); // Function UMG.SpinBox.SetDelta // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3894020
	void SetAlwaysUsesDeltaSnap(bool bNewValue); // Function UMG.SpinBox.SetAlwaysUsesDeltaSnap // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3894140
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x19be2f0
	float GetValue(); // Function UMG.SpinBox.GetValue // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38945a0
	float GetMinValue(); // Function UMG.SpinBox.GetMinValue // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3893fe0
	float GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3893d40
	int32_t GetMinFractionalDigits(); // Function UMG.SpinBox.GetMinFractionalDigits // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3894490
	float GetMaxValue(); // Function UMG.SpinBox.GetMaxValue // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3893e90
	float GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3893bf0
	int32_t GetMaxFractionalDigits(); // Function UMG.SpinBox.GetMaxFractionalDigits // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3894380
	float GetDelta(); // Function UMG.SpinBox.GetDelta // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3894120
	bool GetAlwaysUsesDeltaSnap(); // Function UMG.SpinBox.GetAlwaysUsesDeltaSnap // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3894240
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3893ed0
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3893c30
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3893d80
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3893ae0
};

// Class UMG.StackBox
// Size: 0x1e8 (Inherited: 0x1d0)
struct UStackBox : UPanelWidget {
	enum class EOrientation Orientation; // 0x1d0(0x01)
	char pad_1D1[0x17]; // 0x1d1(0x17)

	bool ReplaceStackBoxChildAt(int32_t Index, struct UWidget* Content); // Function UMG.StackBox.ReplaceStackBoxChildAt // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38971b0
	struct UStackBoxSlot* AddChildToStackBox(struct UWidget* Content); // Function UMG.StackBox.AddChildToStackBox // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3897370
};

// Class UMG.StackBoxSlot
// Size: 0x68 (Inherited: 0x40)
struct UStackBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	struct FSlateChildSize Size; // 0x50(0x08)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)
};

// Class UMG.TextBlock
// Size: 0x3b0 (Inherited: 0x1d8)
struct UTextBlock : UTextLayoutWidget {
	struct FText Text; // 0x1d8(0x18)
	struct FDelegate TextDelegate; // 0x1f0(0x14)
	struct FSlateColor ColorAndOpacity; // 0x204(0x14)
	struct FDelegate ColorAndOpacityDelegate; // 0x218(0x14)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct FSlateFontInfo Font; // 0x230(0x60)
	struct FSlateBrush StrikeBrush; // 0x290(0xd0)
	struct FVector2D ShadowOffset; // 0x360(0x10)
	struct FLinearColor ShadowColorAndOpacity; // 0x370(0x10)
	struct FDelegate ShadowColorAndOpacityDelegate; // 0x380(0x14)
	float MinDesiredWidth; // 0x394(0x04)
	bool bWrapWithInvalidationPanel; // 0x398(0x01)
	enum class ETextTransformPolicy TextTransformPolicy; // 0x399(0x01)
	enum class ETextOverflowPolicy TextOverflowPolicy; // 0x39a(0x01)
	bool bSimpleTextMode; // 0x39b(0x01)
	char pad_39C[0x14]; // 0x39c(0x14)

	void SetWrapTextAt(float InWrapTextAt); // Function UMG.TextBlock.SetWrapTextAt // (Final|Native|Public|BlueprintCallable) // @ game+0x3898ae0
	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy); // Function UMG.TextBlock.SetTextTransformPolicy // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3898f40
	void SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy); // Function UMG.TextBlock.SetTextOverflowPolicy // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3898e40
	void SetText(struct FText InText); // Function UMG.TextBlock.SetText // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3899bb0
	void SetStrikeBrush(struct FSlateBrush InStrikeBrush); // Function UMG.TextBlock.SetStrikeBrush // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38992b0
	void SetShadowOffset(struct FVector2D InShadowOffset); // Function UMG.TextBlock.SetShadowOffset // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3899690
	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.TextBlock.SetShadowColorAndOpacity // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x38997b0
	void SetOpacity(float InOpacity); // Function UMG.TextBlock.SetOpacity // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38998d0
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.TextBlock.SetMinDesiredWidth // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3899190
	void SetFontOutlineMaterial(struct UMaterialInterface* InMaterial); // Function UMG.TextBlock.SetFontOutlineMaterial // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3898c00
	void SetFontMaterial(struct UMaterialInterface* InMaterial); // Function UMG.TextBlock.SetFontMaterial // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3898d20
	void SetFont(struct FSlateFontInfo InFontInfo); // Function UMG.TextBlock.SetFont // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38994a0
	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.TextBlock.SetColorAndOpacity // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3899a70
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.TextBlock.SetAutoWrapText // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3899060
	struct FText GetText(); // Function UMG.TextBlock.GetText // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3899d00
	struct UMaterialInstanceDynamic* GetDynamicOutlineMaterial(); // Function UMG.TextBlock.GetDynamicOutlineMaterial // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3898980
	struct UMaterialInstanceDynamic* GetDynamicFontMaterial(); // Function UMG.TextBlock.GetDynamicFontMaterial // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3898a30
};

// Class UMG.Throbber
// Size: 0x2a0 (Inherited: 0x1b8)
struct UThrobber : UWidget {
	int32_t NumberOfPieces; // 0x1b8(0x04)
	bool bAnimateHorizontally; // 0x1bc(0x01)
	bool bAnimateVertically; // 0x1bd(0x01)
	bool bAnimateOpacity; // 0x1be(0x01)
	char pad_1BF[0x1]; // 0x1bf(0x01)
	struct FSlateBrush Image; // 0x1c0(0xd0)
	char pad_290[0x10]; // 0x290(0x10)

	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.Throbber.SetNumberOfPieces // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x389ce70
	void SetAnimateVertically(bool bInAnimateVertically); // Function UMG.Throbber.SetAnimateVertically // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x389cbf0
	void SetAnimateOpacity(bool bInAnimateOpacity); // Function UMG.Throbber.SetAnimateOpacity // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x389cab0
	void SetAnimateHorizontally(bool bInAnimateHorizontally); // Function UMG.Throbber.SetAnimateHorizontally // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x389cd30
};

// Class UMG.TileView
// Size: 0xce0 (Inherited: 0xcb0)
struct UTileView : UListView {
	float EntryHeight; // 0xcb0(0x04)
	float EntryWidth; // 0xcb4(0x04)
	enum class EListItemAlignment TileAlignment; // 0xcb8(0x01)
	bool bWrapHorizontalNavigation; // 0xcb9(0x01)
	char pad_CBA[0x16]; // 0xcba(0x16)
	bool bEntrySizeIncludesEntrySpacing; // 0xcd0(0x01)
	char pad_CD1[0xf]; // 0xcd1(0x0f)

	void SetEntryWidth(float NewWidth); // Function UMG.TileView.SetEntryWidth // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x389d950
	void SetEntryHeight(float NewHeight); // Function UMG.TileView.SetEntryHeight // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x389dab0
	bool IsAligned(); // Function UMG.TileView.IsAligned // (Final|RequiredAPI|Native|Private|Const) // @ game+0x389d8e0
	float GetEntryWidth(); // Function UMG.TileView.GetEntryWidth // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x389d910
	float GetEntryHeight(); // Function UMG.TileView.GetEntryHeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x389d930
};

// Class UMG.TreeView
// Size: 0xd10 (Inherited: 0xcb0)
struct UTreeView : UListView {
	char pad_CB0[0x10]; // 0xcb0(0x10)
	struct FDelegate BP_OnGetItemChildren; // 0xcc0(0x14)
	char pad_CD4[0x4]; // 0xcd4(0x04)
	struct FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0xcd8(0x10)
	char pad_CE8[0x28]; // 0xce8(0x28)

	void SetItemExpansion(struct UObject* Item, bool bExpandItem); // Function UMG.TreeView.SetItemExpansion // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x389e1c0
	void ExpandAll(); // Function UMG.TreeView.ExpandAll // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x389e1a0
	void CollapseAll(); // Function UMG.TreeView.CollapseAll // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x389e180
};

// Class UMG.UniformGridPanel
// Size: 0x1f8 (Inherited: 0x1d0)
struct UUniformGridPanel : UPanelWidget {
	struct FMargin SlotPadding; // 0x1d0(0x10)
	float MinDesiredSlotWidth; // 0x1e0(0x04)
	float MinDesiredSlotHeight; // 0x1e4(0x04)
	char pad_1E8[0x10]; // 0x1e8(0x10)

	void SetSlotPadding(struct FMargin InSlotPadding); // Function UMG.UniformGridPanel.SetSlotPadding // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x389f390
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x389f270
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x389f150
	struct UUniformGridSlot* AddChildToUniformGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.UniformGridPanel.AddChildToUniformGrid // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x389ed00
};

// Class UMG.UniformGridSlot
// Size: 0x58 (Inherited: 0x40)
struct UUniformGridSlot : UPanelSlot {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x40(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x41(0x01)
	char pad_42[0x2]; // 0x42(0x02)
	int32_t Row; // 0x44(0x04)
	int32_t Column; // 0x48(0x04)
	char pad_4C[0xc]; // 0x4c(0x0c)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.UniformGridSlot.SetVerticalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x389fd50
	void SetRow(int32_t InRow); // Function UMG.UniformGridSlot.SetRow // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a00b0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.UniformGridSlot.SetHorizontalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x389fe70
	void SetColumn(int32_t InColumn); // Function UMG.UniformGridSlot.SetColumn // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x389ff90
};

// Class UMG.VerticalBox
// Size: 0x1e0 (Inherited: 0x1d0)
struct UVerticalBox : UPanelWidget {
	char pad_1D0[0x10]; // 0x1d0(0x10)

	struct UVerticalBoxSlot* AddChildToVerticalBox(struct UWidget* Content); // Function UMG.VerticalBox.AddChildToVerticalBox // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a0840
};

// Class UMG.VerticalBoxSlot
// Size: 0x68 (Inherited: 0x40)
struct UVerticalBoxSlot : UPanelSlot {
	struct FSlateChildSize Size; // 0x40(0x08)
	struct FMargin Padding; // 0x48(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0xe]; // 0x5a(0x0e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.VerticalBoxSlot.SetVerticalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388d400
	void SetSize(struct FSlateChildSize InSize); // Function UMG.VerticalBoxSlot.SetSize // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a0f60
	void SetPadding(struct FMargin InPadding); // Function UMG.VerticalBoxSlot.SetPadding // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388d640
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.VerticalBoxSlot.SetHorizontalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x388d520
};

// Class UMG.Viewport
// Size: 0x220 (Inherited: 0x1d0)
struct UViewport : UContentWidget {
	struct FLinearColor BackgroundColor; // 0x1d0(0x10)
	char pad_1E0[0x40]; // 0x1e0(0x40)

	struct AActor* Spawn(struct AActor* ActorClass); // Function UMG.Viewport.Spawn // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38a1c80
	void SetViewRotation(struct FRotator Rotation); // Function UMG.Viewport.SetViewRotation // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x38a1ea0
	void SetViewLocation(struct FVector Location); // Function UMG.Viewport.SetViewLocation // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x38a2020
	struct FRotator GetViewRotation(); // Function UMG.Viewport.GetViewRotation // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a1fb0
	struct UWorld* GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a21b0
	struct FVector GetViewLocation(); // Function UMG.Viewport.GetViewLocation // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a2140
};

// Class UMG.WidgetComponent
// Size: 0x810 (Inherited: 0x6d0)
struct UWidgetComponent : UMeshComponent {
	enum class EWidgetSpace Space; // 0x6d0(0x01)
	enum class EWidgetTimingPolicy TimingPolicy; // 0x6d1(0x01)
	char pad_6D2[0x6]; // 0x6d2(0x06)
	struct UUserWidget* WidgetClass; // 0x6d8(0x08)
	struct FIntPoint DrawSize; // 0x6e0(0x08)
	bool bManuallyRedraw; // 0x6e8(0x01)
	bool bRedrawRequested; // 0x6e9(0x01)
	char pad_6EA[0x2]; // 0x6ea(0x02)
	float RedrawTime; // 0x6ec(0x04)
	char pad_6F0[0x8]; // 0x6f0(0x08)
	struct FIntPoint CurrentDrawSize; // 0x6f8(0x08)
	bool bDrawAtDesiredSize; // 0x700(0x01)
	char pad_701[0x7]; // 0x701(0x07)
	struct FVector2D Pivot; // 0x708(0x10)
	bool bReceiveHardwareInput; // 0x718(0x01)
	bool bWindowFocusable; // 0x719(0x01)
	enum class EWindowVisibility WindowVisibility; // 0x71a(0x01)
	bool bApplyGammaCorrection; // 0x71b(0x01)
	char pad_71C[0x4]; // 0x71c(0x04)
	struct ULocalPlayer* OwnerPlayer; // 0x720(0x08)
	struct FLinearColor BackgroundColor; // 0x728(0x10)
	struct FLinearColor TintColorAndOpacity; // 0x738(0x10)
	float OpacityFromTexture; // 0x748(0x04)
	enum class EWidgetBlendMode BlendMode; // 0x74c(0x01)
	bool bIsTwoSided; // 0x74d(0x01)
	bool TickWhenOffscreen; // 0x74e(0x01)
	char pad_74F[0x1]; // 0x74f(0x01)
	struct UBodySetup* BodySetup; // 0x750(0x08)
	struct UMaterialInterface* TranslucentMaterial; // 0x758(0x08)
	struct UMaterialInterface* TranslucentMaterial_OneSided; // 0x760(0x08)
	struct UMaterialInterface* OpaqueMaterial; // 0x768(0x08)
	struct UMaterialInterface* OpaqueMaterial_OneSided; // 0x770(0x08)
	struct UMaterialInterface* MaskedMaterial; // 0x778(0x08)
	struct UMaterialInterface* MaskedMaterial_OneSided; // 0x780(0x08)
	struct UTextureRenderTarget2D* RenderTarget; // 0x788(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x790(0x08)
	bool bAddedToScreen; // 0x798(0x01)
	bool bEditTimeUsable; // 0x799(0x01)
	char pad_79A[0x2]; // 0x79a(0x02)
	struct FName SharedLayerName; // 0x79c(0x0c)
	int32_t LayerZOrder; // 0x7a8(0x04)
	enum class EWidgetGeometryMode GeometryMode; // 0x7ac(0x01)
	char pad_7AD[0x3]; // 0x7ad(0x03)
	float CylinderArcAngle; // 0x7b0(0x04)
	enum class ETickMode TickMode; // 0x7b4(0x01)
	char pad_7B5[0x2b]; // 0x7b5(0x2b)
	struct UUserWidget* Widget; // 0x7e0(0x08)
	char pad_7E8[0x28]; // 0x7e8(0x28)

	void SetWindowVisibility(enum class EWindowVisibility InVisibility); // Function UMG.WidgetComponent.SetWindowVisibility // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38b0400
	void SetWindowFocusable(bool bInWindowFocusable); // Function UMG.WidgetComponent.SetWindowFocusable // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38b05c0
	void SetWidgetSpace(enum class EWidgetSpace NewSpace); // Function UMG.WidgetComponent.SetWidgetSpace // (Final|Native|Public|BlueprintCallable) // @ game+0x38b0910
	void SetWidget(struct UUserWidget* Widget); // Function UMG.WidgetComponent.SetWidget // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38b1690
	void SetTwoSided(bool bWantTwoSided); // Function UMG.WidgetComponent.SetTwoSided // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38b10f0
	void SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity); // Function UMG.WidgetComponent.SetTintColorAndOpacity // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x38b0d60
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen); // Function UMG.WidgetComponent.SetTickWhenOffscreen // (Final|Native|Public|BlueprintCallable) // @ game+0x38b0fe0
	void SetTickMode(enum class ETickMode InTickMode); // Function UMG.WidgetComponent.SetTickMode // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38b02f0
	void SetRedrawTime(float InRedrawTime); // Function UMG.WidgetComponent.SetRedrawTime // (Final|Native|Public|BlueprintCallable) // @ game+0x38b0a20
	void SetPivot(struct FVector2D& InPivot); // Function UMG.WidgetComponent.SetPivot // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x38b0c40
	void SetOwnerPlayer(struct ULocalPlayer* LocalPlayer); // Function UMG.WidgetComponent.SetOwnerPlayer // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38b1590
	void SetManuallyRedraw(bool bUseManualRedraw); // Function UMG.WidgetComponent.SetManuallyRedraw // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38b1480
	void SetGeometryMode(enum class EWidgetGeometryMode InGeometryMode); // Function UMG.WidgetComponent.SetGeometryMode // (Final|Native|Public|BlueprintCallable) // @ game+0x38b0800
	void SetDrawSize(struct FVector2D Size); // Function UMG.WidgetComponent.SetDrawSize // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x38b1280
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize); // Function UMG.WidgetComponent.SetDrawAtDesiredSize // (Final|Native|Public|BlueprintCallable) // @ game+0x38b0b30
	void SetCylinderArcAngle(float InCylinderArcAngle); // Function UMG.WidgetComponent.SetCylinderArcAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x38b06f0
	void SetBackgroundColor(struct FLinearColor NewBackgroundColor); // Function UMG.WidgetComponent.SetBackgroundColor // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x38b0ea0
	void RequestRenderUpdate(); // Function UMG.WidgetComponent.RequestRenderUpdate // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38b1220
	void RequestRedraw(); // Function UMG.WidgetComponent.RequestRedraw // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38b1250
	bool IsWidgetVisible(); // Function UMG.WidgetComponent.IsWidgetVisible // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38b02c0
	enum class EWindowVisibility GetWindowVisiblility(); // Function UMG.WidgetComponent.GetWindowVisiblility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38b05a0
	bool GetWindowFocusable(); // Function UMG.WidgetComponent.GetWindowFocusable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38b06d0
	enum class EWidgetSpace GetWidgetSpace(); // Function UMG.WidgetComponent.GetWidgetSpace // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38b0a00
	struct UUserWidget* GetWidget(); // Function UMG.WidgetComponent.GetWidget // (RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38b1790
	struct UUserWidget* GetUserWidgetObject(); // Function UMG.WidgetComponent.GetUserWidgetObject // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38b1810
	bool GetTwoSided(); // Function UMG.WidgetComponent.GetTwoSided // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38b1200
	bool GetTickWhenOffscreen(); // Function UMG.WidgetComponent.GetTickWhenOffscreen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38b10d0
	struct UTextureRenderTarget2D* GetRenderTarget(); // Function UMG.WidgetComponent.GetRenderTarget // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38b17f0
	float GetRedrawTime(); // Function UMG.WidgetComponent.GetRedrawTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38b0b10
	struct FVector2D GetPivot(); // Function UMG.WidgetComponent.GetPivot // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x38b0d30
	struct ULocalPlayer* GetOwnerPlayer(); // Function UMG.WidgetComponent.GetOwnerPlayer // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38b1410
	struct UMaterialInstanceDynamic* GetMaterialInstance(); // Function UMG.WidgetComponent.GetMaterialInstance // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38b17d0
	bool GetManuallyRedraw(); // Function UMG.WidgetComponent.GetManuallyRedraw // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38b1570
	enum class EWidgetGeometryMode GetGeometryMode(); // Function UMG.WidgetComponent.GetGeometryMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38b08f0
	struct FVector2D GetDrawSize(); // Function UMG.WidgetComponent.GetDrawSize // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x38b13d0
	bool GetDrawAtDesiredSize(); // Function UMG.WidgetComponent.GetDrawAtDesiredSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38b0c20
	float GetCylinderArcAngle(); // Function UMG.WidgetComponent.GetCylinderArcAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38b07e0
	struct FVector2D GetCurrentDrawSize(); // Function UMG.WidgetComponent.GetCurrentDrawSize // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x38b1390
};

// Class UMG.WidgetInteractionComponent
// Size: 0x610 (Inherited: 0x330)
struct UWidgetInteractionComponent : USceneComponent {
	struct FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x330(0x10)
	char pad_340[0x10]; // 0x340(0x10)
	int32_t VirtualUserIndex; // 0x350(0x04)
	int32_t PointerIndex; // 0x354(0x04)
	enum class ECollisionChannel TraceChannel; // 0x358(0x01)
	char pad_359[0x3]; // 0x359(0x03)
	float InteractionDistance; // 0x35c(0x04)
	enum class EWidgetInteractionSource InteractionSource; // 0x360(0x01)
	bool bEnableHitTesting; // 0x361(0x01)
	bool bShowDebug; // 0x362(0x01)
	char pad_363[0x1]; // 0x363(0x01)
	float DebugSphereLineThickness; // 0x364(0x04)
	float DebugLineThickness; // 0x368(0x04)
	struct FLinearColor DebugColor; // 0x36c(0x10)
	char pad_37C[0x7c]; // 0x37c(0x7c)
	struct FHitResult CustomHitResult; // 0x3f8(0xf0)
	struct FVector2D LocalHitLocation; // 0x4e8(0x10)
	struct FVector2D LastLocalHitLocation; // 0x4f8(0x10)
	struct UWidgetComponent* HoveredWidgetComponent; // 0x508(0x08)
	struct FHitResult LastHitResult; // 0x510(0xf0)
	bool bIsHoveredWidgetInteractable; // 0x600(0x01)
	bool bIsHoveredWidgetFocusable; // 0x601(0x01)
	bool bIsHoveredWidgetHitTestVisible; // 0x602(0x01)
	char pad_603[0xd]; // 0x603(0x0d)

	void SetFocus(struct UWidget* FocusWidget); // Function UMG.WidgetInteractionComponent.SetFocus // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38fe8f0
	void SetCustomHitResult(struct FHitResult& HitResult); // Function UMG.WidgetInteractionComponent.SetCustomHitResult // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x38fea60
	bool SendKeyChar(struct FString Characters, bool bRepeat); // Function UMG.WidgetInteractionComponent.SendKeyChar // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38fee70
	void ScrollWheel(float ScrollDelta); // Function UMG.WidgetInteractionComponent.ScrollWheel // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38fed70
	void ReleasePointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleasePointerKey // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38ff620
	bool ReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleaseKey // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38ff250
	void PressPointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressPointerKey // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38ff7a0
	bool PressKey(struct FKey Key, bool bRepeat); // Function UMG.WidgetInteractionComponent.PressKey // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38ff3e0
	bool PressAndReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressAndReleaseKey // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x38ff0c0
	bool IsOverInteractableWidget(); // Function UMG.WidgetInteractionComponent.IsOverInteractableWidget // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38fed30
	bool IsOverHitTestVisibleWidget(); // Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38fecf0
	bool IsOverFocusableWidget(); // Function UMG.WidgetInteractionComponent.IsOverFocusableWidget // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38fed10
	struct FHitResult GetLastHitResult(); // Function UMG.WidgetInteractionComponent.GetLastHitResult // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38fec40
	struct UWidgetComponent* GetHoveredWidgetComponent(); // Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38fed50
	struct FVector2D Get2DHitLocation(); // Function UMG.WidgetInteractionComponent.Get2DHitLocation // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x38fec10
};

// Class UMG.WidgetSwitcher
// Size: 0x1e8 (Inherited: 0x1d0)
struct UWidgetSwitcher : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x1d0(0x04)
	char pad_1D4[0x14]; // 0x1d4(0x14)

	void SetActiveWidgetIndex(int32_t Index); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3903d80
	void SetActiveWidget(struct UWidget* Widget); // Function UMG.WidgetSwitcher.SetActiveWidget // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3865bc0
	struct UWidget* GetWidgetAtIndex(int32_t Index); // Function UMG.WidgetSwitcher.GetWidgetAtIndex // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3903c50
	int32_t GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3903ed0
	int32_t GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3903e80
	struct UWidget* GetActiveWidget(); // Function UMG.WidgetSwitcher.GetActiveWidget // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3903bd0
};

// Class UMG.WidgetSwitcherSlot
// Size: 0x60 (Inherited: 0x40)
struct UWidgetSwitcherSlot : UPanelSlot {
	char pad_40[0x8]; // 0x40(0x08)
	struct FMargin Padding; // 0x48(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WidgetSwitcherSlot.SetVerticalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x387b280
	void SetPadding(struct FMargin InPadding); // Function UMG.WidgetSwitcherSlot.SetPadding // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x387b4c0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x387b3a0
};

// Class UMG.WindowTitleBarArea
// Size: 0x1f0 (Inherited: 0x1d0)
struct UWindowTitleBarArea : UContentWidget {
	bool bWindowButtonsEnabled; // 0x1d0(0x01)
	bool bDoubleClickTogglesFullscreen; // 0x1d1(0x01)
	char pad_1D2[0x1e]; // 0x1d2(0x1e)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarArea.SetVerticalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3905310
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarArea.SetPadding // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3905570
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarArea.SetHorizontalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3905440
};

// Class UMG.WindowTitleBarAreaSlot
// Size: 0x68 (Inherited: 0x40)
struct UWindowTitleBarAreaSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x01)
	char pad_52[0x16]; // 0x52(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3909f80
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarAreaSlot.SetPadding // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x390a1e0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x390a0b0
};

// Class UMG.WrapBox
// Size: 0x1f8 (Inherited: 0x1d0)
struct UWrapBox : UPanelWidget {
	struct FVector2D InnerSlotPadding; // 0x1d0(0x10)
	float WrapSize; // 0x1e0(0x04)
	bool bExplicitWrapSize; // 0x1e4(0x01)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x1e5(0x01)
	enum class EOrientation Orientation; // 0x1e6(0x01)
	char pad_1E7[0x11]; // 0x1e7(0x11)

	void SetInnerSlotPadding(struct FVector2D InPadding); // Function UMG.WrapBox.SetInnerSlotPadding // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x390aef0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WrapBox.SetHorizontalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x390add0
	struct UWrapBoxSlot* AddChildToWrapBox(struct UWidget* Content); // Function UMG.WrapBox.AddChildToWrapBox // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x390ab20
};

// Class UMG.WrapBoxSlot
// Size: 0x60 (Inherited: 0x40)
struct UWrapBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x40(0x10)
	float FillSpanWhenLessThan; // 0x50(0x04)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x54(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x55(0x01)
	bool bFillEmptySpace; // 0x56(0x01)
	bool bForceNewLine; // 0x57(0x01)
	char pad_58[0x8]; // 0x58(0x08)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WrapBoxSlot.SetVerticalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x390bac0
	void SetPadding(struct FMargin InPadding); // Function UMG.WrapBoxSlot.SetPadding // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x390bf10
	void SetNewLine(bool InForceNewLine); // Function UMG.WrapBoxSlot.SetNewLine // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x390b9a0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WrapBoxSlot.SetHorizontalAlignment // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x390bbe0
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan); // Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x390bd00
	void SetFillEmptySpace(bool InbFillEmptySpace); // Function UMG.WrapBoxSlot.SetFillEmptySpace // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x390bdf0
};

// Class UMG.DragDropOperation
// Size: 0x98 (Inherited: 0x30)
struct UDragDropOperation : UObject {
	struct FString Tag; // 0x30(0x10)
	struct UObject* Payload; // 0x40(0x08)
	struct UWidget* DefaultDragVisual; // 0x48(0x08)
	enum class EDragPivot Pivot; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FVector2D Offset; // 0x58(0x10)
	struct FMulticastInlineDelegate OnDrop; // 0x68(0x10)
	struct FMulticastInlineDelegate OnDragCancelled; // 0x78(0x10)
	struct FMulticastInlineDelegate OnDragged; // 0x88(0x10)

	void Drop(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.Drop // (RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x390cde0
	void Dragged(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.Dragged // (RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x390ca40
	void DragCancelled(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.DragCancelled // (RequiredAPI|Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x390cc10
};

// Class UMG.SlateBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct USlateBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FVector2D TransformVectorLocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalVector); // Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x390e830
	struct FVector2D TransformVectorAbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteVector); // Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x390eab0
	float TransformScalarLocalToAbsolute(struct FGeometry& Geometry, float LocalScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x390ece0
	float TransformScalarAbsoluteToLocal(struct FGeometry& Geometry, float AbsoluteScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x390ef20
	void ScreenToWidgetLocal(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D ScreenPosition, struct FVector2D& LocalCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x390d940
	void ScreenToWidgetAbsolute(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x390d670
	void ScreenToViewport(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.ScreenToViewport // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x390d410
	void LocalToViewport(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D LocalCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.LocalToViewport // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x390e060
	struct FVector2D LocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalCoordinate); // Function UMG.SlateBlueprintLibrary.LocalToAbsolute // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x390f610
	bool IsUnderLocation(struct FGeometry& Geometry, struct FVector2D& AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.IsUnderLocation // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x390fb90
	struct FVector2D GetLocalTopLeft(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalTopLeft // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x390f440
	struct FVector2D GetLocalSize(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalSize // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x390f2e0
	struct FVector2D GetAbsoluteSize(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetAbsoluteSize // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x390f130
	bool EqualEqual_SlateBrush(struct FSlateBrush& A, struct FSlateBrush& B); // Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x390e490
	void AbsoluteToViewport(struct UObject* WorldContextObject, struct FVector2D AbsoluteDesktopCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.AbsoluteToViewport // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x390dd80
	struct FVector2D AbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.AbsoluteToLocal // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x390f880
};

// Class UMG.SlateVectorArtData
// Size: 0x78 (Inherited: 0x30)
struct USlateVectorArtData : UObject {
	struct TArray<struct FSlateMeshVertex> VertexData; // 0x30(0x10)
	struct TArray<uint32_t> IndexData; // 0x40(0x10)
	struct UMaterialInterface* Material; // 0x50(0x08)
	struct FVector2D ExtentMin; // 0x58(0x10)
	struct FVector2D ExtentMax; // 0x68(0x10)
};

// Class UMG.WidgetBlueprintGeneratedClass
// Size: 0x3e8 (Inherited: 0x378)
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct UWidgetTree* WidgetTree; // 0x378(0x08)
	struct TArray<struct UWidgetBlueprintGeneratedClassExtension*> Extensions; // 0x380(0x10)
	char bClassRequiresNativeTick : 1; // 0x390(0x01)
	char pad_390_1 : 7; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct TArray<struct FDelegateRuntimeBinding> Bindings; // 0x398(0x10)
	struct TArray<struct UWidgetAnimation*> Animations; // 0x3a8(0x10)
	struct TArray<struct FName> NamedSlots; // 0x3b8(0x10)
	struct TArray<struct FName> AvailableNamedSlots; // 0x3c8(0x10)
	struct TArray<struct FName> InstanceNamedSlots; // 0x3d8(0x10)
};

// Class UMG.WidgetBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UWidgetBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FEventReply UnlockMouse(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.UnlockMouse // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3944780
	struct FEventReply Unhandled(); // Function UMG.WidgetBlueprintLibrary.Unhandled // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3944f80
	void SetWindowTitleBarState(struct UWidget* TitleBarContent, enum class EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x393ff20
	void SetWindowTitleBarOnCloseClickedDelegate(struct FDelegate Delegate); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x393fd90
	void SetWindowTitleBarCloseButtonActive(bool bActive); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x393fcb0
	struct FEventReply SetUserFocus(struct FEventReply& Reply, struct UWidget* FocusWidget, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.SetUserFocus // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3944430
	struct FEventReply SetMousePosition(struct FEventReply& Reply, struct FVector2D NewMousePosition); // Function UMG.WidgetBlueprintLibrary.SetMousePosition // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x3944000
	void SetInputMode_UIOnlyEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bFlushInput); // Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx // (Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x3947390
	void SetInputMode_GameOnly(struct APlayerController* PlayerController, bool bFlushInput); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly // (Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x3946cd0
	void SetInputMode_GameAndUIEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture, bool bFlushInput); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx // (Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x3946ea0
	bool SetHardwareCursor(struct UObject* WorldContextObject, enum class EMouseCursor CursorShape, struct FName CursorName, struct FVector2D HotSpot); // Function UMG.WidgetBlueprintLibrary.SetHardwareCursor // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x3940280
	void SetFocusToGameViewport(); // Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport // (Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x3946cb0
	void SetColorVisionDeficiencyType(enum class EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency); // Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType // (Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x3940580
	void SetBrushResourceToTexture(struct FSlateBrush& Brush, struct UTexture2D* Texture); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3941dd0
	void SetBrushResourceToMaterial(struct FSlateBrush& Brush, struct UMaterialInterface* Material); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3941dd0
	void RestorePreviousWindowTitleBarState(); // Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x393ff00
	struct FEventReply ReleaseMouseCapture(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3944b80
	struct FEventReply ReleaseJoystickCapture(struct FEventReply& Reply, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3944220
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature(); // DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature // (Public|Delegate) // @ game+0x19be2f0
	struct FSlateBrush NoResourceBrush(); // Function UMG.WidgetBlueprintLibrary.NoResourceBrush // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3941d30
	struct FSlateBrush MakeBrushFromTexture(struct UTexture2D* Texture, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3942bc0
	struct FSlateBrush MakeBrushFromMaterial(struct UMaterialInterface* Material, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3942690
	struct FSlateBrush MakeBrushFromAsset(struct USlateBrushAsset* BrushAsset); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3943120
	struct FEventReply LockMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.LockMouse // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x39448e0
	bool IsDragDropping(); // Function UMG.WidgetBlueprintLibrary.IsDragDropping // (Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3943460
	struct FEventReply Handled(); // Function UMG.WidgetBlueprintLibrary.Handled // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3944ff0
	void GetSafeZonePadding(struct UObject* WorldContextObject, struct FVector4& SafePadding, struct FVector2D& SafePaddingScale, struct FVector4& SpillOverPadding); // Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3940890
	struct FKeyEvent GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent& event); // Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3941080
	struct FInputEvent GetInputEventFromPointerEvent(struct FPointerEvent& event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3940d60
	struct FInputEvent GetInputEventFromNavigationEvent(struct FNavigationEvent& event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3940c10
	struct FInputEvent GetInputEventFromKeyEvent(struct FKeyEvent& event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x39412f0
	struct FInputEvent GetInputEventFromCharacterEvent(struct FCharacterEvent& event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3940f40
	struct UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3941ac0
	struct UDragDropOperation* GetDragDroppingContent(); // Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent // (Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x39432c0
	struct UTexture2D* GetBrushResourceAsTexture2D(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3942280
	struct UMaterialInterface* GetBrushResourceAsMaterial(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3942060
	struct UObject* GetBrushResource(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResource // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x39424a0
	void GetAllWidgetsWithInterface(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, struct UInterface* Interface, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface // (Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3941490
	void GetAllWidgetsOfClass(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, struct UUserWidget* WidgetClass, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass // (Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3941790
	struct FEventReply EndDragDrop(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.EndDragDrop // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x39435a0
	void DrawTextFormatted(struct FPaintContext& Context, struct FText& Text, struct FVector2D Position, struct UFont* Font, float FontSize, struct FName FontTypeFace, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawTextFormatted // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3945060
	void DrawText(struct FPaintContext& Context, struct FString InString, struct FVector2D Position, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawText // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x39457a0
	void DrawSpline(struct FPaintContext& Context, struct FVector2D Start, struct FVector2D StartDir, struct FVector2D End, struct FVector2D EndDir, struct FLinearColor Tint, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawSpline // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3946280
	void DrawLines(struct FPaintContext& Context, struct TArray<struct FVector2D>& Points, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLines // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3945ad0
	void DrawLine(struct FPaintContext& Context, struct FVector2D PositionA, struct FVector2D PositionB, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLine // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3945e80
	void DrawBox(struct FPaintContext& Context, struct FVector2D Position, struct FVector2D Size, struct USlateBrushAsset* Brush, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawBox // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3946810
	void DismissAllMenus(); // Function UMG.WidgetBlueprintLibrary.DismissAllMenus // (Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x3941a90
	struct FEventReply DetectDragIfPressed(struct FPointerEvent& PointerEvent, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3943710
	struct FEventReply DetectDrag(struct FEventReply& Reply, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDrag // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3943ba0
	struct UDragDropOperation* CreateDragDropOperation(struct UDragDropOperation* OperationClass); // Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x39477e0
	struct UUserWidget* Create(struct UObject* WorldContextObject, struct UUserWidget* WidgetType, struct APlayerController* OwningPlayer); // Function UMG.WidgetBlueprintLibrary.Create // (Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x3947a60
	struct FEventReply ClearUserFocus(struct FEventReply& Reply, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.ClearUserFocus // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3944220
	struct FEventReply CaptureMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.CaptureMouse // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3944ce0
	struct FEventReply CaptureJoystick(struct FEventReply& Reply, struct UWidget* CapturingWidget, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.CaptureJoystick // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3944430
	void CancelDragDrop(); // Function UMG.WidgetBlueprintLibrary.CancelDragDrop // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x39432a0
};

// Class UMG.WidgetLayoutLibrary
// Size: 0x30 (Inherited: 0x30)
struct UWidgetLayoutLibrary : UBlueprintFunctionLibrary {

	struct UWrapBoxSlot* SlotAsWrapBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x394dee0
	struct UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x394dda0
	struct UVerticalBoxSlot* SlotAsVerticalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x394e520
	struct UUniformGridSlot* SlotAsUniformGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x394e660
	struct USizeBoxSlot* SlotAsSizeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x394e020
	struct UScrollBoxSlot* SlotAsScrollBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x394e3e0
	struct UScaleBoxSlot* SlotAsScaleBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x394e160
	struct USafeZoneSlot* SlotAsSafeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x394e2a0
	struct UOverlaySlot* SlotAsOverlaySlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x394e7a0
	struct UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x394e8e0
	struct UGridSlot* SlotAsGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsGridSlot // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x394ea20
	struct UCanvasPanelSlot* SlotAsCanvasSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x394eb60
	struct UBorderSlot* SlotAsBorderSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x394eca0
	void RemoveAllWidgets(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.RemoveAllWidgets // (Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x394dcc0
	bool ProjectWorldLocationToWidgetPosition(struct APlayerController* PlayerController, struct FVector WorldLocation, struct FVector2D& ScreenPosition, bool bPlayerViewportRelative); // Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition // (Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x394f790
	struct FGeometry GetViewportWidgetGeometry(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x394f480
	struct FVector2D GetViewportSize(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportSize // (Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x394f5b0
	float GetViewportScale(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportScale // (Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x394f6a0
	struct FGeometry GetPlayerScreenWidgetGeometry(struct APlayerController* PlayerController); // Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x394f350
	bool GetMousePositionScaledByDPI(struct APlayerController* Player, float& LocationX, float& LocationY); // Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI // (Final|RequiredAPI|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x394ede0
	struct FVector2D GetMousePositionOnViewport(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x394f060
	struct FVector2D GetMousePositionOnPlatform(); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x394f2e0
};

// Class UMG.WidgetTree
// Size: 0x90 (Inherited: 0x30)
struct UWidgetTree : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UWidget* RootWidget; // 0x38(0x08)
	struct TMap<struct FName, struct UWidget*> NamedSlotBindings; // 0x40(0x50)
};

