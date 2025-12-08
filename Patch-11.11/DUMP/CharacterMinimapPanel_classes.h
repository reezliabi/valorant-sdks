// WidgetBlueprintGeneratedClass CharacterMinimapPanel.CharacterMinimapPanel_C
// Size: 0x4a0 (Inherited: 0x318)
struct UCharacterMinimapPanel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Map; // 0x320(0x08)
	struct UAresMinimapPanel* MinimapPanel; // 0x328(0x08)
	double CursorRadius; // 0x330(0x08)
	double SearchHeight; // 0x338(0x08)
	double AdditionalDepth; // 0x340(0x08)
	struct TArray<struct FName> TargetingBlockingTags; // 0x348(0x10)
	struct TMap<struct URadialTargetingMinimapWidget_C*, struct FVector> PotentialLocationsV2Components; // 0x358(0x50)
	struct UMapTargetingStateComponent* MapTargetingComponent; // 0x3a8(0x08)
	struct TArray<struct URadialTargetingMinimapWidget_C*> RadialTargetingWidgetPool; // 0x3b0(0x10)
	struct URadialTargetingMinimapWidget_C* CursorWidget; // 0x3c0(0x08)
	int32_t VisibleLayers; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct UMaterialInstance* MapBrush; // 0x3d0(0x08)
	bool CenterCharacterOnMap; // 0x3d8(0x01)
	bool RestrictCursorToMinimap; // 0x3d9(0x01)
	char pad_3DA[0x6]; // 0x3da(0x06)
	double MaxDistanceFromCenter; // 0x3e0(0x08)
	double ZoomSpeed; // 0x3e8(0x08)
	double Zoom; // 0x3f0(0x08)
	double MaxZoom; // 0x3f8(0x08)
	double MinZoom; // 0x400(0x08)
	struct URadialTargetingMinimapWidget_C* CursorWidgetClass; // 0x408(0x08)
	double MapEdgePanSpeed; // 0x410(0x08)
	struct FTimerHandle Blind Timer Handle; // 0x418(0x08)
	double FlashFadeEndTime; // 0x420(0x08)
	double FlashFadeDuration; // 0x428(0x08)
	struct FTimerHandle UpdateTimer; // 0x430(0x08)
	struct FVector2D InitialCursorOffset; // 0x438(0x10)
	bool CursorPositionInitialized; // 0x448(0x01)
	bool DrawEdgeWidgets; // 0x449(0x01)
	bool bMapInteractionsActive; // 0x44a(0x01)
	char pad_44B[0x1]; // 0x44b(0x01)
	int32_t NumTargetingWidgetsPerCharge; // 0x44c(0x04)
	struct TSet<struct UWidget*> WidgetsToFadeOnBlind; // 0x450(0x50)

	void HandleBlindChanged(bool IsBlinded, double TimeSinceLastBlindedChanged); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.HandleBlindChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Map Fade Wrapper(bool IsBlinded, double TimeSinceLastBlindedChanged, struct FLinearColor BaseLinearColor, struct UObject* WorldContextObject, bool ShouldBindFadeHandlerFunction, struct FLinearColor& ResultColorAndOpacity); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.Handle Map Fade Wrapper // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddWidgetToFadeOnBlinded(struct UWidget*& NewItem); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.AddWidgetToFadeOnBlinded // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetPingBindingName(struct FName& Name); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.GetPingBindingName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void PingCurrentLocation(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.PingCurrentLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPingInputReleased(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.OnPingInputReleased // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPingInputPressed(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.OnPingInputPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemovePingBindings(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.RemovePingBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeCursorPosition(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.InitializeCursorPosition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateClipCenter(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.UpdateClipCenter // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetMapCenter(struct FVector WorldLocation); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.SetMapCenter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsLocationInsideMap(struct FVector WorldPosition, bool& InRange); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.IsLocationInsideMap // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetOrCreateCursorWidget(struct URadialTargetingMinimapWidget_C*& CursorWidget); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.GetOrCreateCursorWidget // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ValidateCurrentPosition(struct FVector& WorldPosition, bool& IsValid); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.ValidateCurrentPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ChangeMapZoom(double ZoomChangeValue); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.ChangeMapZoom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OverrideMapSettings(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.OverrideMapSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnResourceChanged(struct UResourceComponent* Resource Component); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.OnResourceChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTargetingWidgetPosition(struct UWidget* Widget, struct FVector2D ScreenPosition); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.SetTargetingWidgetPosition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool ValidateWorldPosition(struct FVector WorldPosition, struct FVector& UpdatedLocation); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.ValidateWorldPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitPingBindings(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.InitPingBindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerViewTargetModeChanged(enum class EAresPlayerViewTargetMode NewPlayerViewTargetMode); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.OnPlayerViewTargetModeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMinimapRotationSettingChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.OnMinimapRotationSettingChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool ProjectPointToNavigation(struct FVector WorldPosition, struct FVector& OutProjectedPoint); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.ProjectPointToNavigation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void InitMinimap(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.InitMinimap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitMapTargetingComponent(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.InitMapTargetingComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateMouseOverTargetingWidget(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.UpdateMouseOverTargetingWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ProjectMouseLocationToWorld(struct FVector& World); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.ProjectMouseLocationToWorld // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ValidateCurrentLocations(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.ValidateCurrentLocations // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateMinimapRotation(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.UpdateMinimapRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FreeAllRadialTargetingWidgets(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.FreeAllRadialTargetingWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FreeRecentRadialTargetingWidget(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.FreeRecentRadialTargetingWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FreeRadialTargetingWidget(struct URadialTargetingMinimapWidget_C* RadialTargetingWidget); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.FreeRadialTargetingWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddRadialTargetingWidgetAtWorldPosition(struct FVector InWorldPosition, struct URadialTargetingMinimapWidget_C*& TargetingWidget); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.AddRadialTargetingWidgetAtWorldPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UAresMinimapPanelSlot* AddRadialTargetingWidgetToMinimap(struct UWidget* RadialTargetingWidget); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.AddRadialTargetingWidgetToMinimap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateRadialTargetingWidget(struct URadialTargetingMinimapWidget_C*& RadialTargetingWidget); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.CreateRadialTargetingWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool CanPlaceRadialTargetingWidget(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.CanPlaceRadialTargetingWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	int32_t GetMaxRadialTargetingWidgets(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.GetMaxRadialTargetingWidgets // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetRadialTargetingWidgetLocations(struct TArray<struct FVector>& Locations); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.GetRadialTargetingWidgetLocations // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetRadialTargetingWidgets(struct TArray<struct URadialTargetingMinimapWidget_C*>& Widgets); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.GetRadialTargetingWidgets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	int32_t GetNumRadialTargetingWidgets(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.GetNumRadialTargetingWidgets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ProjectMinimapToWorld(struct FVector2D Position, struct FVector& World); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.ProjectMinimapToWorld // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnInputModeChanged(bool bGameInputActive, bool bUIInputActive); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.OnInputModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CycleMapFloors(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.CycleMapFloors // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMinimapTextureUpdated(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.OnMinimapTextureUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BeginMapInteractions(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.BeginMapInteractions // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EndMapInteractions(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.EndMapInteractions // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MoveMapCenter(struct FVector2D NewCenter); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.MoveMapCenter // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateZoom(double ZoomDelta); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.UpdateZoom // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Update Fade(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.Update Fade // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleBlindManagerBlindChanged(); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.HandleBlindManagerBlindChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_CharacterMinimapPanel(int32_t EntryPoint); // Function CharacterMinimapPanel.CharacterMinimapPanel_C.ExecuteUbergraph_CharacterMinimapPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

