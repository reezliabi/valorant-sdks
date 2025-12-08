// WidgetBlueprintGeneratedClass pingWidget.pingWidget_C
// Size: 0x478 (Inherited: 0x330)
struct UpingWidget_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* ExpandInnerRing; // 0x338(0x08)
	struct UWidgetAnimation* FadeUp; // 0x340(0x08)
	struct UImage* InnerRing; // 0x348(0x08)
	struct UCanvasPanel* ParentCanvas; // 0x350(0x08)
	struct URadialMenu_C* PingWheel; // 0x358(0x08)
	double quickCommsMenuDisplayThreshold; // 0x360(0x08)
	bool IsPingWheelValid; // 0x368(0x01)
	char pad_369[0x7]; // 0x369(0x07)
	struct TArray<struct UTexture*> PingIcons; // 0x370(0x10)
	struct FTimerHandle HoldPingKeyTimer; // 0x380(0x08)
	bool WasCancelled; // 0x388(0x01)
	bool didMarkSomething; // 0x389(0x01)
	char pad_38A[0x6]; // 0x38a(0x06)
	struct FString LastCommString; // 0x390(0x10)
	struct FTimerHandle TimeoutTimer; // 0x3a0(0x08)
	struct TArray<enum class NonVerbalCommTypesEnum> NULL; // 0x3a8(0x10)
	double EnabledOpacity; // 0x3b8(0x08)
	double DisabledOpacity; // 0x3c0(0x08)
	double LastBroadcastTime; // 0x3c8(0x08)
	bool WasClosedWithGamepad; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct FVector2D GamepadStickVectorWhenClosed; // 0x3d8(0x10)
	struct AEquippableGroundPickup_C* RecentlyPingedEquippable; // 0x3e8(0x08)
	double NewEquippablePingedTime; // 0x3f0(0x08)
	struct TMap<struct FString, int32_t> NewVar_1; // 0x3f8(0x50)
	bool InTouchEditMode; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
	struct TArray<struct AActor*> SpawnBarriers; // 0x450(0x10)
	bool MegamapPingingInTargetingWorld; // 0x460(0x01)
	char pad_461[0x7]; // 0x461(0x07)
	struct UComp_ShooterCharacter_ViewTargetingModeManager_C* ViewTargetingModeManager; // 0x468(0x08)
	struct AShooterPlayerState* ShooterPlayerState; // 0x470(0x08)

	void AnyClickableMapVisible(bool& Open); // Function pingWidget.pingWidget_C.AnyClickableMapVisible // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetPingTraceChannelAndActorsToIgnore(enum class ETraceTypeQuery& Trace Channel, struct TArray<struct AActor*>& ActorsToIgnore); // Function pingWidget.pingWidget_C.GetPingTraceChannelAndActorsToIgnore // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void MegamapPingInTargetingView(); // Function pingWidget.pingWidget_C.MegamapPingInTargetingView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryConsumeBroadcastPing(bool& Out); // Function pingWidget.pingWidget_C.TryConsumeBroadcastPing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HideInnerRing(); // Function pingWidget.pingWidget_C.HideInnerRing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowInnerRing(); // Function pingWidget.pingWidget_C.ShowInnerRing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryCastBombDefusePing(struct AActor* HitActor, bool& CreatedPing); // Function pingWidget.pingWidget_C.TryCastBombDefusePing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryCastBombPlantPing(struct FVector Location, bool& CreatedPing); // Function pingWidget.pingWidget_C.TryCastBombPlantPing // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CastPing(bool ForcePingIndex, int32_t ForcedPingIndex, enum class EMapPingType MappingType); // Function pingWidget.pingWidget_C.CastPing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePingIcons(); // Function pingWidget.pingWidget_C.UpdatePingIcons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function pingWidget.pingWidget_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PingKeyPressed(); // Function pingWidget.pingWidget_C.PingKeyPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PingWheelKeyReleased(); // Function pingWidget.pingWidget_C.PingWheelKeyReleased // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AliveStateChanged(bool NewValue); // Function pingWidget.pingWidget_C.AliveStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Ping Key Held(); // Function pingWidget.pingWidget_C.Ping Key Held // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CancelWheel(); // Function pingWidget.pingWidget_C.CancelWheel // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CautionDirectPing(); // Function pingWidget.pingWidget_C.CautionDirectPing // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void WatchingHereDirectPing(); // Function pingWidget.pingWidget_C.WatchingHereDirectPing // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void NeedSupportDirectPing(); // Function pingWidget.pingWidget_C.NeedSupportDirectPing // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMyMarkDirectPing(); // Function pingWidget.pingWidget_C.OnMyMarkDirectPing // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function pingWidget.pingWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnAresPlayerStateChanged_Event(struct AAresPlayerStateBase* NewValue); // Function pingWidget.pingWidget_C.OnAresPlayerStateChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindForTargetViewMode(); // Function pingWidget.pingWidget_C.BindForTargetViewMode // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UnbindForTargetViewMode(); // Function pingWidget.pingWidget_C.UnbindForTargetViewMode // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPossessedCharacterChanged(struct AShooterCharacter* NewCharacter); // Function pingWidget.pingWidget_C.OnPossessedCharacterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleTargetViewModeUpdated(bool TargetViewActive); // Function pingWidget.pingWidget_C.HandleTargetViewModeUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_pingWidget(int32_t EntryPoint); // Function pingWidget.pingWidget_C.ExecuteUbergraph_pingWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

