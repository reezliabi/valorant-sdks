// WidgetBlueprintGeneratedClass UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C
// Size: 0x3a1 (Inherited: 0x318)
struct UUniversalProgressionIconsWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* hover; // 0x320(0x08)
	struct UDailyRewardsCounter_C* DailyRewardsCounter; // 0x328(0x08)
	struct UHorizontalBox* NPEsContainer; // 0x330(0x08)
	struct UTextBlock* NPEsText; // 0x338(0x08)
	struct UMenuAnchor* ProgressionMenuAnchor; // 0x340(0x08)
	struct UTelemetryButton* TelemetryButton_2; // 0x348(0x08)
	struct UHorizontalBox* WeekliesContainer; // 0x350(0x08)
	struct UTextBlock* WeekliesText; // 0x358(0x08)
	int32_t NumTotalWeeklies; // 0x360(0x04)
	int32_t NumCompletedWeeklies; // 0x364(0x04)
	struct UContractsViewController* ContractsViewController; // 0x368(0x08)
	bool MissionsExpired; // 0x370(0x01)
	char pad_371[0x7]; // 0x371(0x07)
	struct FTimerHandle MissionExpiredTimer; // 0x378(0x08)
	int32_t NumTotalNPEs; // 0x380(0x04)
	int32_t NumCompletedNPEs; // 0x384(0x04)
	struct FMulticastInlineDelegate OnTogglePopup; // 0x388(0x10)
	struct UProgressionSummary_C* FlyoutWidget; // 0x398(0x08)
	bool HorizontalLayout; // 0x3a0(0x01)

	void SequenceEvent__ENTRYPOINTUniversalProgressionIconsWidget(); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.SequenceEvent__ENTRYPOINTUniversalProgressionIconsWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMissionsExpiredChanged(bool Expired); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.OnMissionsExpiredChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateLayout(bool HorizontalLayout); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.UpdateLayout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent_1(); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.SequenceEvent_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMissionRemoved(struct UMissionViewModel* Mission); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.OnMissionRemoved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMissionAdded(struct UMissionViewModel* Mission); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.OnMissionAdded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTimerExpirationDate(struct FDateTime MissionExpirationUTC); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.UpdateTimerExpirationDate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DateTimeMin(struct FDateTime DateTime1, struct FDateTime DateTime2, struct FDateTime& MinDateTime); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.DateTimeMin // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Init(struct UContractsViewController* ContractsViewController); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshMissionsNums(); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.RefreshMissionsNums // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* OnGetUserMenuContent(); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.OnGetUserMenuContent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateCompletionText(); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.UpdateCompletionText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TelemetryButton_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.BndEvt__TelemetryButton_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TelemetryButton_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.BndEvt__TelemetryButton_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void FlyoutUnhovered(); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.FlyoutUnhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__UniversalMissionWidget_TelemetryButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.BndEvt__UniversalMissionWidget_TelemetryButton_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnDailyRewardsEnabledChanged(); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.OnDailyRewardsEnabledChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDailyRewardsEnabledConfigChanged(); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.OnDailyRewardsEnabledConfigChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMissionExpirationTimerExpired(); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.OnMissionExpirationTimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMissionExpirationTimeChanged(struct FDateTime& Unused); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.OnMissionExpirationTimeChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshMissionsNumbers(struct UMissionViewModel* Mission); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.RefreshMissionsNumbers // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMissionCompletionChanged(bool Completed); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.OnMissionCompletionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_UniversalProgressionIconsWidget(int32_t EntryPoint); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.ExecuteUbergraph_UniversalProgressionIconsWidget // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnTogglePopup__DelegateSignature(bool Show); // Function UniversalProgressionIconsWidget.UniversalProgressionIconsWidget_C.OnTogglePopup__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

