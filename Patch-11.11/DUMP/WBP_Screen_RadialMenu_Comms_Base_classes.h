// WidgetBlueprintGeneratedClass WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C
// Size: 0x620 (Inherited: 0x558)
struct UWBP_Screen_RadialMenu_Comms_Base_C : URadialCommScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x558(0x08)
	struct UWidgetSwitcher* TrackedWheelGroupSwitcher; // 0x560(0x08)
	struct TMap<struct UBaseNonVerbalCommsWheelGroup_C*, struct UWBP_Switcher_NonVerbalComms_C*> WheelGroupsToWheelWidgetSwitchers; // 0x568(0x50)
	int32_t CurrentWheelIndex; // 0x5b8(0x04)
	char pad_5BC[0x4]; // 0x5bc(0x04)
	struct UWidget* TrackedWheelMiddleIcon; // 0x5c0(0x08)
	struct UWidget* TrackedWheelUpIcon; // 0x5c8(0x08)
	struct UWidget* TrackedWheelDownIcon; // 0x5d0(0x08)
	struct UTextBlock* TrackedWheelUpText; // 0x5d8(0x08)
	struct UTextBlock* TrackedWheelDownText; // 0x5e0(0x08)
	struct TArray<enum class NonVerbalCommWheelGroupTypes> WheelGroupTypes; // 0x5e8(0x10)
	struct UVM_NonVerbalComms_C* CurrentNonVerbalCommsViewModel; // 0x5f8(0x08)
	struct TArray<struct UBaseNonVerbalCommsWheelGroup_C*> WheelGroups; // 0x600(0x10)
	int32_t DefaultWheelIndex; // 0x610(0x04)
	bool CanBroadcastPing; // 0x614(0x01)
	bool CanBroadcastVO; // 0x615(0x01)
	bool IsPlayerAlive; // 0x616(0x01)
	bool ShouldUpdateScrollPrompt; // 0x617(0x01)
	struct UTextBlock* TrackedWheelMiddleText; // 0x618(0x08)

	void HandleUnbindFromViewModel(); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.HandleUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CanBroadcastComm(bool& IsValid); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.CanBroadcastComm // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HandleWheelGroupChanged(struct UBaseNonVerbalCommsWheelGroup_C* NVCWheelGroup); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.HandleWheelGroupChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindScreenVisibilityChanged(); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.BindScreenVisibilityChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsObserverOrCoach(bool& IsObserverOrCoach); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.IsObserverOrCoach // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetVoicelinesFromRadialItems(struct TArray<struct FNVCRadialItemOptions>& RadialItems, struct TArray<enum class NonVerbalCommTypesEnum>& NonVerbalComms); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.GetVoicelinesFromRadialItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateScrollPrompt(); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.UpdateScrollPrompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTextFromWidgetIndex(struct UTextBlock* TextDisplay, struct UWidgetSwitcher* Switcher, int32_t Index); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.SetTextFromWidgetIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsValidWheelIndex(struct UWidgetSwitcher* WidgetSwitcher, int32_t Index, bool& IsValid); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.IsValidWheelIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetCurrentCommWheel(struct UWBP_Panel_GameRadialMenu_C*& RadialMenu); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.GetCurrentCommWheel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidgetSwitcher* GetCurrentWheelSwitcher(); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.GetCurrentWheelSwitcher // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetDisplayTextFromRadialItems(struct TArray<struct UBaseNonVerbalCommRadialItem_C*>& RadialItems, struct TArray<struct FText>& NonVerbalComms); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.GetDisplayTextFromRadialItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void CreateWheelGroup(struct UBaseNonVerbalCommsWheelGroup_C* NVCWheelGroup); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.CreateWheelGroup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWBP_Panel_GameRadialMenu_C* CreateWheel(struct UBaseNonVerbalCommWheel_C* NVCWheelOptions, struct UWBP_Switcher_NonVerbalComms_C* WidgetSwitcher); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.CreateWheel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupTrackedWidgets(); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.SetupTrackedWidgets // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHigherPriorityScreenVisbilityChanged(bool IsVisible); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.OnHigherPriorityScreenVisbilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EarlySetup(); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.EarlySetup // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void SetNewActiveCommWheel(int32_t WheelIndex); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.SetNewActiveCommWheel // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCanBroadcastChanged(bool CanBroadcastPing, bool CanBroadcastVO); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.HandleCanBroadcastChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleAliveStateChanged(bool IsAlive); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.HandleAliveStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateOpacity(); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.UpdateOpacity // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CommScrollUp(); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.CommScrollUp // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CommScrollDown(); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.CommScrollDown // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TrySwitchToWheelByIndex(int32_t Index); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.TrySwitchToWheelByIndex // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CloseCurrentWheel(); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.CloseCurrentWheel // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void SwitchWheelByToggle(); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.SwitchWheelByToggle // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Screen_RadialMenu_Comms_Base(int32_t EntryPoint); // Function WBP_Screen_RadialMenu_Comms_Base.WBP_Screen_RadialMenu_Comms_Base_C.ExecuteUbergraph_WBP_Screen_RadialMenu_Comms_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

