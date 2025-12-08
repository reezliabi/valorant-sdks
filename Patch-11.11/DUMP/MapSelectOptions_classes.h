// WidgetBlueprintGeneratedClass MapSelectOptions.MapSelectOptions_C
// Size: 0x390 (Inherited: 0x318)
struct UMapSelectOptions_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* hover; // 0x320(0x08)
	struct UBorder* CaptainView; // 0x328(0x08)
	struct UWidgetSwitcher* CaptainViewSwitcher; // 0x330(0x08)
	struct UTextBlock* FollowerMapName; // 0x338(0x08)
	struct UOverlay* FollowerView; // 0x340(0x08)
	struct UImage* Image_92; // 0x348(0x08)
	struct USharedComboBox_C* SharedComboBox; // 0x350(0x08)
	struct UTextBlock* TextBlock_1; // 0x358(0x08)
	struct UPartyModel* Model; // 0x360(0x08)
	struct UPartyViewController* ViewController; // 0x368(0x08)
	bool Initialized; // 0x370(0x01)
	bool SettingsExpanded; // 0x371(0x01)
	char pad_372[0x2]; // 0x372(0x02)
	struct FName EnableBotsConfigName; // 0x374(0x0c)
	struct FMulticastInlineDelegate OnMapSelected; // 0x380(0x10)

	void GetSelectedMode(struct UGameModeDataAsset*& Mode); // Function MapSelectOptions.MapSelectOptions_C.GetSelectedMode // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void On Mode Changed(struct FString NewValue); // Function MapSelectOptions.MapSelectOptions_C.On Mode Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MapValidWithMode(struct UMapDataAsset* MapDataAsset, struct UGameModeDataAsset* ModeDataAsset, bool& Result); // Function MapSelectOptions.MapSelectOptions_C.MapValidWithMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetMapDisplayName(struct UObject* MapDataAsset, struct FText& DisplayName); // Function MapSelectOptions.MapSelectOptions_C.GetMapDisplayName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SortMaps(struct UObject* Left, struct UObject* Right, bool& bIsLeftLessThanRight); // Function MapSelectOptions.MapSelectOptions_C.SortMaps // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToggleMapSelection(bool MapSelection); // Function MapSelectOptions.MapSelectOptions_C.ToggleMapSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSelectedMap(struct UCustomGameModel* Model); // Function MapSelectOptions.MapSelectOptions_C.UpdateSelectedMap // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeMapSelector(); // Function MapSelectOptions.MapSelectOptions_C.InitializeMapSelector // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleMapOptionRemoved(struct UMapDataAsset* Removed Option); // Function MapSelectOptions.MapSelectOptions_C.HandleMapOptionRemoved // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleMapOptionAdded(struct UMapDataAsset* Added Option); // Function MapSelectOptions.MapSelectOptions_C.HandleMapOptionAdded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleMapSelectionInput(struct FString Selection); // Function MapSelectOptions.MapSelectOptions_C.HandleMapSelectionInput // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateVisibility(); // Function MapSelectOptions.MapSelectOptions_C.UpdateVisibility // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init(struct UPartyModel* Model, struct UPartyViewController* ViewController); // Function MapSelectOptions.MapSelectOptions_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsOwnerChanged(bool NewValue); // Function MapSelectOptions.MapSelectOptions_C.OnIsOwnerChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMemberAdded(struct UPartyPlayerModel* Player); // Function MapSelectOptions.MapSelectOptions_C.OnMemberAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMemberRemoved(struct UPartyPlayerModel* Player); // Function MapSelectOptions.MapSelectOptions_C.OnMemberRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMapSelectionChanged(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function MapSelectOptions.MapSelectOptions_C.OnMapSelectionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Initialized(); // Function MapSelectOptions.MapSelectOptions_C.On Initialized // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMapOptionAdded(struct UMapDataAsset* MapAsset); // Function MapSelectOptions.MapSelectOptions_C.OnMapOptionAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMapOptionRemoved(struct UMapDataAsset* MapAsset); // Function MapSelectOptions.MapSelectOptions_C.OnMapOptionRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAnyConfigUpdated_Event_1(struct FName& ConfigName); // Function MapSelectOptions.MapSelectOptions_C.OnAnyConfigUpdated_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMapChanged(struct FString NewValue); // Function MapSelectOptions.MapSelectOptions_C.OnMapChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function MapSelectOptions.MapSelectOptions_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function MapSelectOptions.MapSelectOptions_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_MapSelectOptions(int32_t EntryPoint); // Function MapSelectOptions.MapSelectOptions_C.ExecuteUbergraph_MapSelectOptions // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnMapSelected__DelegateSignature(struct UMapUIData* MapUIData); // Function MapSelectOptions.MapSelectOptions_C.OnMapSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

