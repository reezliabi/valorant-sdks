// WidgetBlueprintGeneratedClass WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C
// Size: 0x5b0 (Inherited: 0x520)
struct UWBP_Screen_CollectionsSprays_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UWBP_Panel_CollectionsContentGrid_C* WBP_Panel_CollectionsContentGrid; // 0x528(0x08)
	struct UWBP_Panel_CommonTitle_C* WBP_Panel_CommonTitle; // 0x530(0x08)
	struct UWBP_Panel_RadialSprayWheel_C* WBP_Panel_RadialSprayWheel; // 0x538(0x08)
	struct UWBP_View_RewardPreview_C* WBP_View_RewardPreview; // 0x540(0x08)
	struct UVM_InventoryItem_C* InventoryVM; // 0x548(0x08)
	bool ShowContentBindings; // 0x550(0x01)
	char pad_551[0x7]; // 0x551(0x07)
	struct UVM_SprayManagement_C* SprayScreenVM; // 0x558(0x08)
	struct FText ContextualWarningMessage; // 0x560(0x18)
	bool AssigningToWheel; // 0x578(0x01)
	char pad_579[0x7]; // 0x579(0x07)
	struct FText FavoriteText; // 0x580(0x18)
	struct FText UnfavoriteText; // 0x598(0x18)

	void SelectSprayFromNavigationParams(); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.SelectSprayFromNavigationParams // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateActionNames(); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.UpdateActionNames // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AssignSprayToWheelSlot(); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.AssignSprayToWheelSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BeginAssigningToWheel(); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.BeginAssigningToWheel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSlotsChanged(struct TArray<struct USprayEquipSlotHandle*>& SlotHandles); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.OnSlotsChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool BP_OnHandleBackAction(); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.BP_OnHandleBackAction // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnViewerHandleChanged(struct USprayHandle* ViewerHandle); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.OnViewerHandleChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSprayNameChanged(struct FText DisplaySprayName); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.OnSprayNameChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsFavoriteChanged(bool IsEquipped); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.OnIsFavoriteChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSprayCategoryChanged(enum class EAresSprayCategory DisplaySprayCategory); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.OnSprayCategoryChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindSprayVM(bool Bind, struct UVM_SprayManagement_C* Spray VM); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.BindSprayVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSprayVM(struct UVM_SprayManagement_C* SprayScreenVM); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.SetSprayVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindInventoryVM(bool Bind, struct UVM_InventoryItem_C* InventoryVM); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.BindInventoryVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetInventoryVM(struct UVM_InventoryItem_C* InventoryVM); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.SetInventoryVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleInputAction(struct FName ActionName); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.HandleInputAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RegisterSprayActionCallbacks(); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.RegisterSprayActionCallbacks // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakeViewModels(); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.MakeViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnActivated(); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_CollectionsSprays_WBP_Panel_CollectionsContentGrid_K2Node_ComponentBoundEvent_2_OnEntryInitialized__DelegateSignature(struct UObject* Item, struct UWidget* Widget); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.BndEvt__WBP_Screen_CollectionsSprays_WBP_Panel_CollectionsContentGrid_K2Node_ComponentBoundEvent_2_OnEntryInitialized__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void EndSprayAssignment(); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.EndSprayAssignment // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_CollectionsSprays_WBP_Panel_CollectionsContentGrid_K2Node_ComponentBoundEvent_1_OnListItemSelected__DelegateSignature(struct UBaseHandle* ListItem); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.BndEvt__WBP_Screen_CollectionsSprays_WBP_Panel_CollectionsContentGrid_K2Node_ComponentBoundEvent_1_OnListItemSelected__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_CollectionsSprays_WBP_Panel_CollectionsContentGrid_K2Node_ComponentBoundEvent_0_OnPageInformationChanged__DelegateSignature(int32_t CurrentPage, int32_t TotalPages); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.BndEvt__WBP_Screen_CollectionsSprays_WBP_Panel_CollectionsContentGrid_K2Node_ComponentBoundEvent_0_OnPageInformationChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Screen_CollectionsSprays(int32_t EntryPoint); // Function WBP_Screen_CollectionsSprays.WBP_Screen_CollectionsSprays_C.ExecuteUbergraph_WBP_Screen_CollectionsSprays // (Final|UbergraphFunction) // @ game+0x19be2f0
};

