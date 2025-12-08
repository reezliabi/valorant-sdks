// WidgetBlueprintGeneratedClass CommTreeIndex.CommTreeIndex_C
// Size: 0x430 (Inherited: 0x330)
struct UCommTreeIndex_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UCommTreeNavigationOption_C* ActiontreeNavOption; // 0x338(0x08)
	struct UImage* Border; // 0x340(0x08)
	struct UWidgetSwitcher* CommTreeWidgetSwitcher; // 0x348(0x08)
	struct UTextBlock* dismissKeyText; // 0x350(0x08)
	struct UImage* Image_854; // 0x358(0x08)
	struct UImage* Image_856; // 0x360(0x08)
	struct UImage* Image_857; // 0x368(0x08)
	struct UImage* Image_858; // 0x370(0x08)
	struct UImage* Image_1309; // 0x378(0x08)
	struct UVerticalBox* Index; // 0x380(0x08)
	struct UCommTreeNavigationOption_C* SocialTreeNavOption; // 0x388(0x08)
	struct UCommTreeNavigationOption_C* StrategyTreeNavOption; // 0x390(0x08)
	struct UImage* tacticalImageHeader; // 0x398(0x08)
	struct UTextBlock* TextBlock_1; // 0x3a0(0x08)
	struct TArray<struct UCommTree_C*> CommTrees; // 0x3a8(0x10)
	struct TArray<enum class NonVerbalCommTypesEnum> CombatCommEnums; // 0x3b8(0x10)
	struct TArray<enum class NonVerbalCommTypesEnum> StrategicCommEnums; // 0x3c8(0x10)
	struct TArray<enum class NonVerbalCommTypesEnum> SocialCommEnums; // 0x3d8(0x10)
	double EnabledOpacity; // 0x3e8(0x08)
	double DisabledOpacity; // 0x3f0(0x08)
	struct TArray<struct FName> ActionNamesForCommTrees; // 0x3f8(0x10)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0x408(0x10)
	struct TArray<enum class NonVerbalCommTypesEnum> TacticalCommEnums; // 0x418(0x10)
	struct FTimerHandle TimeoutTimerHandle; // 0x428(0x08)

	void HideTree(); // Function CommTreeIndex.CommTreeIndex_C.HideTree // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowTree(); // Function CommTreeIndex.CommTreeIndex_C.ShowTree // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CloseCommTreeAndStopTimer(); // Function CommTreeIndex.CommTreeIndex_C.CloseCommTreeAndStopTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTimeoutTimer(bool ResetTimer, bool StopTimer); // Function CommTreeIndex.CommTreeIndex_C.UpdateTimeoutTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetActionMappingKey(struct FName ActionMappingToFind, struct FText& KeyDisplayName); // Function CommTreeIndex.CommTreeIndex_C.GetActionMappingKey // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StartListeningForCommOptionInputs(); // Function CommTreeIndex.CommTreeIndex_C.StartListeningForCommOptionInputs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ActivateCommOption(int32_t OptionIndex); // Function CommTreeIndex.CommTreeIndex_C.ActivateCommOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StopListeningForCommOptionInputs(); // Function CommTreeIndex.CommTreeIndex_C.StopListeningForCommOptionInputs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryConsumePlayerBroadcast(bool& CanPlayerBroadcast); // Function CommTreeIndex.CommTreeIndex_C.TryConsumePlayerBroadcast // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CanPlayerBroadcast(bool& CanPlayerBroadcast); // Function CommTreeIndex.CommTreeIndex_C.CanPlayerBroadcast // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function CommTreeIndex.CommTreeIndex_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Pressed(); // Function CommTreeIndex.CommTreeIndex_C.Pressed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function CommTreeIndex.CommTreeIndex_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OpenTree1(); // Function CommTreeIndex.CommTreeIndex_C.OpenTree1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OpenTree2(); // Function CommTreeIndex.CommTreeIndex_C.OpenTree2 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OpenTree3(); // Function CommTreeIndex.CommTreeIndex_C.OpenTree3 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StartListeningForCommInput(); // Function CommTreeIndex.CommTreeIndex_C.StartListeningForCommInput // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent_1(); // Function CommTreeIndex.CommTreeIndex_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent(); // Function CommTreeIndex.CommTreeIndex_C.CustomEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent_2(); // Function CommTreeIndex.CommTreeIndex_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent_4(); // Function CommTreeIndex.CommTreeIndex_C.CustomEvent_4 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent_5(); // Function CommTreeIndex.CommTreeIndex_C.CustomEvent_5 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent_6(); // Function CommTreeIndex.CommTreeIndex_C.CustomEvent_6 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent_7(); // Function CommTreeIndex.CommTreeIndex_C.CustomEvent_7 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent_8(); // Function CommTreeIndex.CommTreeIndex_C.CustomEvent_8 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent_9(); // Function CommTreeIndex.CommTreeIndex_C.CustomEvent_9 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CustomEvent_10(); // Function CommTreeIndex.CommTreeIndex_C.CustomEvent_10 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EscPressed(); // Function CommTreeIndex.CommTreeIndex_C.EscPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OpenTree4(); // Function CommTreeIndex.CommTreeIndex_C.OpenTree4 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AllocateCommOptionWidgets(); // Function CommTreeIndex.CommTreeIndex_C.AllocateCommOptionWidgets // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToSettingsMenuOpened(); // Function CommTreeIndex.CommTreeIndex_C.BindToSettingsMenuOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_CommTreeIndex(int32_t EntryPoint); // Function CommTreeIndex.CommTreeIndex_C.ExecuteUbergraph_CommTreeIndex // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void NewEventDispatcher_0__DelegateSignature(); // Function CommTreeIndex.CommTreeIndex_C.NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

