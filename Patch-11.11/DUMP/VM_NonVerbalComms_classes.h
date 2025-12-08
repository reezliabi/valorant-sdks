// BlueprintGeneratedClass VM_NonVerbalComms.VM_NonVerbalComms_C
// Size: 0x178 (Inherited: 0x90)
struct UVM_NonVerbalComms_C : UNonVerbalCommsViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct FMulticastInlineDelegate EventCanBroadcastChanged; // 0x98(0x10)
	struct FMulticastInlineDelegate EventInitializeRadialMenu; // 0xa8(0x10)
	bool IsPlayerAlive; // 0xb8(0x01)
	enum class EAresGamePhase CurrentGamePhase; // 0xb9(0x01)
	char pad_BA[0x6]; // 0xba(0x06)
	struct FMulticastInlineDelegate EventAliveStateChanged; // 0xc0(0x10)
	bool CanBroadcastPing; // 0xd0(0x01)
	bool CanBroadcastVO; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)
	struct UBaseNonVerbalCommsWheelGroup_C* CurrentNVCGroup; // 0xd8(0x08)
	enum class NonVerbalCommWheelGroupTypes CurrentNVCGroupType; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct TMap<enum class NonVerbalCommWheelGroupTypes, struct UBaseNonVerbalCommsWheelGroup_C*> NVCGroups; // 0xe8(0x50)
	struct AShooterPlayerState* PlayerState; // 0x138(0x08)
	struct FMulticastInlineDelegate EventWheelGroupChanged; // 0x140(0x10)
	struct AEquippableGroundPickup_C* RecentlyPingedEquippable; // 0x150(0x08)
	double NewEquippablePingedTime; // 0x158(0x08)
	enum class EAresTeamRole CurrentTeam; // 0x160(0x01)
	bool IsMegamap; // 0x161(0x01)
	char pad_162[0x6]; // 0x162(0x06)
	struct TArray<struct AActor*> SpawnBarriers; // 0x168(0x10)

	void GetPingTraceChannelAndActorsToIgnore(enum class ETraceTypeQuery& Trace Channel, struct TArray<struct AActor*>& ActorsToIgnore); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.GetPingTraceChannelAndActorsToIgnore // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void MegamapPingInTargetingView(int32_t PingIndex); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.MegamapPingInTargetingView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryConsumeBroadcastPing(bool& Out); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.TryConsumeBroadcastPing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RecordNVCTelemetryForCastPing(struct FVector PingLocation, struct FString OptionalPingedItem, enum class ENonVerbalCommSystemName SystemName); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.RecordNVCTelemetryForCastPing // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RecordNVCTelemetry(struct UBaseNonVerbalCommsWheelGroup_C* WheelGroupClass, struct UBaseNonVerbalCommWheel_C* WheelClass, struct UBaseNonVerbalCommRadialItem_C* RadialItemClass, struct FVector PingLocation, struct FString OptionalPingedItem); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.RecordNVCTelemetry // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetNVCGroups(struct TArray<enum class NonVerbalCommWheelGroupTypes>& GroupTypes, struct TArray<struct UBaseNonVerbalCommsWheelGroup_C*>& Groups); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.GetNVCGroups // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HandleMegamapBasicPing(struct FVector Location); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.HandleMegamapBasicPing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleMegamapCautionPing(struct FVector Location); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.HandleMegamapCautionPing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateMegamapPing(struct FVector Location, int32_t PingIndex); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.CreateMegamapPing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool TrySendRateLimitedComm(struct ABaseController_C* BaseController); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.TrySendRateLimitedComm // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetNVCGroup(enum class NonVerbalCommWheelGroupTypes Key, struct UBaseNonVerbalCommsWheelGroup_C*& Value); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.GetNVCGroup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void CastCommPingWithLocation(struct FVector Location, enum class NonVerbalCommTypesEnum Comm); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.CastCommPingWithLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CheckEquippablePingTime(); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.CheckEquippablePingTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CastPing(int32_t PingIndex, enum class EMapPingType MappingType); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.CastPing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryCastBombPlantPing(struct FVector Location, bool& CreatedPing); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.TryCastBombPlantPing // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryCastBombDefusePing(struct AActor* HitActor, bool& CreatedPing); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.TryCastBombDefusePing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CastCommPing(enum class NonVerbalCommTypesEnum Comm); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.CastCommPing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleTeamChanged(); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.HandleTeamChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleBasicPing(); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.HandleBasicPing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCautionPing(); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.HandleCautionPing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UBaseNonVerbalCommsWheelGroup_C* GetCurrentNVCGroup(); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.GetCurrentNVCGroup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HandleAresPlayerStateChanged(struct AAresPlayerStateBase* NewPlayerState); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.HandleAresPlayerStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeNVCGroups(); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.InitializeNVCGroups // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RefreshCurrentNVCGroup(); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.RefreshCurrentNVCGroup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UnregisterPlayerEvents(); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.UnregisterPlayerEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleBroadcastCheck(); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.HandleBroadcastCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleMegamapRadialOptionSelected(int32_t SelectedOption, int32_t WheelIndex, struct FVector Location); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.HandleMegamapRadialOptionSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleRadialOptionSelected(int32_t SelectedOption, int32_t WheelIndex, struct URadialMenuBase* RadialMenu); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.HandleRadialOptionSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePlayerAliveStateChanged(bool NewIsAlive); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.HandlePlayerAliveStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializePlayerStateEvents(); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.InitializePlayerStateEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleGamePhaseChanged(enum class EAresGamePhase NewGamePhase, int32_t RoundNumberEnded); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.HandleGamePhaseChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeGameStateEvents(); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.InitializeGameStateEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnViewModelCreated(); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void InitializePlayerStateEventsWhenReady(); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.InitializePlayerStateEventsWhenReady // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_VM_NonVerbalComms(int32_t EntryPoint); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.ExecuteUbergraph_VM_NonVerbalComms // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void EventWheelGroupChanged__DelegateSignature(struct UBaseNonVerbalCommsWheelGroup_C* NewNVCGroup); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.EventWheelGroupChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EventAliveStateChanged__DelegateSignature(bool IsAlive); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.EventAliveStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EventInitializeRadialMenu__DelegateSignature(bool NewParam); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.EventInitializeRadialMenu__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EventCanBroadcastChanged__DelegateSignature(bool CanBroadcastPing, bool CanBroadcastVO); // Function VM_NonVerbalComms.VM_NonVerbalComms_C.EventCanBroadcastChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

