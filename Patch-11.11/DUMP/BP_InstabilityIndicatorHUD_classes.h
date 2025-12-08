// WidgetBlueprintGeneratedClass BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C
// Size: 0x4b8 (Inherited: 0x330)
struct UBP_InstabilityIndicatorHUD_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UOverlay* Background; // 0x338(0x08)
	struct UImage* ClientFPSLowIcon; // 0x340(0x08)
	struct UVerticalBox* DeveloperItemVerticalBox; // 0x348(0x08)
	struct UVerticalBox* HighPingContainer; // 0x350(0x08)
	struct UImage* HighPingIcon; // 0x358(0x08)
	struct UCanvasPanel* InstabilityCanvas; // 0x360(0x08)
	struct UVerticalBox* LowClientFPSContainer; // 0x368(0x08)
	struct UScaleBox* ScaleBox_1; // 0x370(0x08)
	struct UVerticalBox* ServerFPSContainer; // 0x378(0x08)
	struct UImage* ServerFPSLowIcon; // 0x380(0x08)
	struct UVerticalBox* ServerUnreachableContainer; // 0x388(0x08)
	struct UImage* ServerUnreachableIcon; // 0x390(0x08)
	struct FText AveragePingText; // 0x398(0x18)
	struct FText ClientText; // 0x3b0(0x18)
	struct FText ServerText; // 0x3c8(0x18)
	struct FText ServerResponsivenessText; // 0x3e0(0x18)
	struct AShooterGameState* PrevShooterGameState; // 0x3f8(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x400(0x08)
	double HideTimeDelay; // 0x408(0x08)
	struct FTimerHandle NetworkInstability_HideWaitDurationTimerHandle; // 0x410(0x08)
	struct FTimerHandle ClientFrameRate_HideWaitDurationTimerHandle; // 0x418(0x08)
	struct FTimerHandle ServerFrameRate_HideWaitDurationTimerHandle; // 0x420(0x08)
	struct FTimerHandle ServerResponsiveness_HideWaitDurationTimerHandle; // 0x428(0x08)
	struct FSlateColor CriticalIconTint; // 0x430(0x14)
	struct FSlateColor NonCriticalIconTint; // 0x444(0x14)
	struct TMap<struct UInstabilityTrackingDetails*, struct UDevInstabilityItem_C*> DeveloperItemWidgets; // 0x458(0x50)
	struct TArray<struct UInstabilityTrackingDetails*> BlueprintDeveloperItemTrackingDetails; // 0x4a8(0x10)

	void WipeDevItemInstabilityData(); // Function BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C.WipeDevItemInstabilityData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateContainerVisibility(); // Function BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C.UpdateContainerVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearBlueprintDevItems(struct UClientPerformanceMonitoringComponent* ClientPerformanceMonitoringComponent); // Function BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C.ClearBlueprintDevItems // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddBlueprintDevItems(struct UClientPerformanceMonitoringComponent* ClientPerformanceComponent); // Function BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C.AddBlueprintDevItems // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HideAllIcons(); // Function BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C.HideAllIcons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsAnyIconVisible(bool& AnyIconVisible); // Function BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C.IsAnyIconVisible // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetIconVisibility(bool Visible, struct UImage* IconWidget, bool IsCritical, struct UVerticalBox* Container); // Function BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C.SetIconVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnNetworkInstabilityToggle(bool bInstabilityDetected, bool bIsCritical); // Function BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C.OnNetworkInstabilityToggle // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnClientFramerateInstabilityToggle(bool bInstabilityDetected, bool bIsCritical); // Function BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C.OnClientFramerateInstabilityToggle // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnServerFramerateInstabilityToggle(bool bInstabilityDetected, bool bIsCritical); // Function BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C.OnServerFramerateInstabilityToggle // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnServerResponsivenessChanged(bool bInstabilityDetected, bool bIsCritical); // Function BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C.OnServerResponsivenessChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnGameStateChanged_Event_1(); // Function BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C.OnGameStateChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToShooterGameStateEvents(struct AShooterGameState* ShooterGameState); // Function BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C.BindToShooterGameStateEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void NetworkInstability_OnHideWaitDurationTimer(); // Function BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C.NetworkInstability_OnHideWaitDurationTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClientFrameRate_OnHideWaitDurationTimer(); // Function BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C.ClientFrameRate_OnHideWaitDurationTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ServerFrameRate_OnHideWaitDurationTimer(); // Function BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C.ServerFrameRate_OnHideWaitDurationTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ServerResponsiveness_OnHideWaitDurationTimer(); // Function BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C.ServerResponsiveness_OnHideWaitDurationTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDeveloperItemRegisteredEvent(struct UInstabilityTrackingDetails* Item); // Function BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C.OnDeveloperItemRegisteredEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPopulateDeveloperItemsEvent(); // Function BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C.OnPopulateDeveloperItemsEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnClearDeveloperItemsEvent(); // Function BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C.OnClearDeveloperItemsEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDeveloperItemUnregisteredEvent(struct UInstabilityTrackingDetails* Item); // Function BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C.OnDeveloperItemUnregisteredEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnChildWidgetVisibilityChanged(); // Function BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C.OnChildWidgetVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnWipeInstabilityData(); // Function BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C.OnWipeInstabilityData // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_BP_InstabilityIndicatorHUD(int32_t EntryPoint); // Function BP_InstabilityIndicatorHUD.BP_InstabilityIndicatorHUD_C.ExecuteUbergraph_BP_InstabilityIndicatorHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

