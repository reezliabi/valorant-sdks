// WidgetBlueprintGeneratedClass WBP_Panel_CheckToggleIndicator_PC.WBP_Panel_CheckToggleIndicator_PC_C
// Size: 0x1b80 (Inherited: 0x1ae0)
struct UWBP_Panel_CheckToggleIndicator_PC_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* Unhover; // 0x1ae8(0x08)
	struct UWidgetAnimation* hover; // 0x1af0(0x08)
	struct UScaleBox* LevelDetails; // 0x1af8(0x08)
	struct UAresTextBlock* LevelName; // 0x1b00(0x08)
	struct UAresTextBlock* LevelNumber; // 0x1b08(0x08)
	struct UAresMenuAnchor* TooltipAnchor; // 0x1b10(0x08)
	struct FName BaseSelectedParameterName; // 0x1b18(0x0c)
	char pad_1B24[0x4]; // 0x1b24(0x04)
	struct UVM_WeaponSkinLevel_C* WeaponSkinLevelVM; // 0x1b28(0x08)
	bool ShowLevelDetails; // 0x1b30(0x01)
	char pad_1B31[0x7]; // 0x1b31(0x07)
	struct FText LevelNameText; // 0x1b38(0x18)
	struct FText LevelNumberText; // 0x1b50(0x18)
	struct FName BaseLockedParameterName; // 0x1b68(0x0c)
	struct FName BaseHighlightedParameterName; // 0x1b74(0x0c)

	struct FString GetListItemTelemetryTarget(); // Function WBP_Panel_CheckToggleIndicator_PC.WBP_Panel_CheckToggleIndicator_PC_C.GetListItemTelemetryTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetHighlighted(bool IsHighlighted); // Function WBP_Panel_CheckToggleIndicator_PC.WBP_Panel_CheckToggleIndicator_PC_C.SetHighlighted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* GetTooltipContent(); // Function WBP_Panel_CheckToggleIndicator_PC.WBP_Panel_CheckToggleIndicator_PC_C.GetTooltipContent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromEquippableSkinHandle(struct UEquippableSkinHandle* SkinHandle, int32_t Level); // Function WBP_Panel_CheckToggleIndicator_PC.WBP_Panel_CheckToggleIndicator_PC_C.InitFromEquippableSkinHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLevelNumberChanged(struct FText LevelNumberText); // Function WBP_Panel_CheckToggleIndicator_PC.WBP_Panel_CheckToggleIndicator_PC_C.OnLevelNumberChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnLevelNameChanged(struct FText New Value); // Function WBP_Panel_CheckToggleIndicator_PC.WBP_Panel_CheckToggleIndicator_PC_C.OnLevelNameChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetOwned(bool IsOwned); // Function WBP_Panel_CheckToggleIndicator_PC.WBP_Panel_CheckToggleIndicator_PC_C.SetOwned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetEquipped(bool IsEquipped); // Function WBP_Panel_CheckToggleIndicator_PC.WBP_Panel_CheckToggleIndicator_PC_C.SetEquipped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsEquippedChanged(bool NewValue); // Function WBP_Panel_CheckToggleIndicator_PC.WBP_Panel_CheckToggleIndicator_PC_C.OnIsEquippedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsOwnedChanged(bool NewValue); // Function WBP_Panel_CheckToggleIndicator_PC.WBP_Panel_CheckToggleIndicator_PC_C.OnIsOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindViewModel(bool Bind); // Function WBP_Panel_CheckToggleIndicator_PC.WBP_Panel_CheckToggleIndicator_PC_C.BindViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateViewModel(); // Function WBP_Panel_CheckToggleIndicator_PC.WBP_Panel_CheckToggleIndicator_PC_C.CreateViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set View Model(struct UVM_WeaponSkinLevel_C* InWeaponSkinLevelVM); // Function WBP_Panel_CheckToggleIndicator_PC.WBP_Panel_CheckToggleIndicator_PC_C.Set View Model // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetLevelLinkVisibility(bool ShowLink, int32_t Level); // Function WBP_Panel_CheckToggleIndicator_PC.WBP_Panel_CheckToggleIndicator_PC_C.SetLevelLinkVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnEntryReleased(); // Function WBP_Panel_CheckToggleIndicator_PC.WBP_Panel_CheckToggleIndicator_PC_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Panel_CheckToggleIndicator_PC.WBP_Panel_CheckToggleIndicator_PC_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Panel_CheckToggleIndicator_PC.WBP_Panel_CheckToggleIndicator_PC_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_CheckToggleIndicator_PC.WBP_Panel_CheckToggleIndicator_PC_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Panel_CheckToggleIndicator_PC.WBP_Panel_CheckToggleIndicator_PC_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Panel_CheckToggleIndicator_PC.WBP_Panel_CheckToggleIndicator_PC_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Panel_CheckToggleIndicator_PC.WBP_Panel_CheckToggleIndicator_PC_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnHovered(); // Function WBP_Panel_CheckToggleIndicator_PC.WBP_Panel_CheckToggleIndicator_PC_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnUnhovered(); // Function WBP_Panel_CheckToggleIndicator_PC.WBP_Panel_CheckToggleIndicator_PC_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_CheckToggleIndicator_PC(int32_t EntryPoint); // Function WBP_Panel_CheckToggleIndicator_PC.WBP_Panel_CheckToggleIndicator_PC_C.ExecuteUbergraph_WBP_Panel_CheckToggleIndicator_PC // (Final|UbergraphFunction) // @ game+0x19be2f0
};

