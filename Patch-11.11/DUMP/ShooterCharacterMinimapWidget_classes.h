// WidgetBlueprintGeneratedClass ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C
// Size: 0x858 (Inherited: 0x348)
struct UShooterCharacterMinimapWidget_C : UShooterCharacterMinimapWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* Console_Edge_EnterExit; // 0x350(0x08)
	struct UWidgetAnimation* CriticalCommPulse; // 0x358(0x08)
	struct UWidgetAnimation* CommPulse; // 0x360(0x08)
	struct UOverlay* AliveAlly; // 0x368(0x08)
	struct UImage* AliveAllyIcon; // 0x370(0x08)
	struct UImage* AliveEnemy; // 0x378(0x08)
	struct UImage* AliveEnemyBackground; // 0x380(0x08)
	struct UOverlay* AliveEnemyOverlay; // 0x388(0x08)
	struct UImage* AllyHoldingBomb; // 0x390(0x08)
	struct UImage* DeadAlly; // 0x398(0x08)
	struct UImage* DeadEnemy; // 0x3a0(0x08)
	struct UOverlay* Debug; // 0x3a8(0x08)
	struct UImage* DebugDead; // 0x3b0(0x08)
	struct UImage* DebugDot; // 0x3b8(0x08)
	struct UTextBlock* DebugText; // 0x3c0(0x08)
	struct UImage* DebugVisibility; // 0x3c8(0x08)
	struct UImage* Edge; // 0x3d0(0x08)
	struct UImage* Edge_Console; // 0x3d8(0x08)
	struct UImage* FoWDebugMissingIcon; // 0x3e0(0x08)
	struct UHorizontalBox* FoWDebugStatuses; // 0x3e8(0x08)
	struct UImage* Image_49; // 0x3f0(0x08)
	struct UImage* Image_57; // 0x3f8(0x08)
	struct UOverlay* LocalPlayerAttacker; // 0x400(0x08)
	struct UImage* LocalPlayerAttackerIcon; // 0x408(0x08)
	struct UImage* LocalPlayerBackground; // 0x410(0x08)
	struct UOverlay* LocalPlayerDefender; // 0x418(0x08)
	struct UImage* LocalPlayerDefenderIcon; // 0x420(0x08)
	struct UImage* LocalPlayerIcon; // 0x428(0x08)
	struct UWidgetSwitcher* MinimapStates; // 0x430(0x08)
	struct UImage* MissingAliveEnemy; // 0x438(0x08)
	struct UImage* MissingDeadEnemy; // 0x440(0x08)
	double Missing Visible Lifetime; // 0x448(0x08)
	double Fadeout Time; // 0x450(0x08)
	struct FAresMinimapSlotConfig Local Player Slot; // 0x458(0x58)
	struct FAresMinimapSlotConfig Alive Ally Slot; // 0x4b0(0x58)
	struct FAresMinimapSlotConfig Ally Holding Bomb Slot; // 0x508(0x58)
	struct FAresMinimapSlotConfig Dead Ally Slot; // 0x560(0x58)
	struct FAresMinimapSlotConfig Alive Enemy Slot; // 0x5b8(0x58)
	struct FAresMinimapSlotConfig Dead Enemy Slot; // 0x610(0x58)
	struct FAresMinimapSlotConfig Missing Alive Enemy Slot; // 0x668(0x58)
	struct FAresMinimapSlotConfig Missing Dead Enemy Slot; // 0x6c0(0x58)
	struct TSet<struct UWidget*> Fade Out Widgets; // 0x718(0x50)
	enum class EAresMinimapRotationSpace Edge Rotation Space; // 0x768(0x01)
	char pad_769[0x7]; // 0x769(0x07)
	struct FVector Edge Size; // 0x770(0x18)
	enum class EAresMinimapSizeSpace Edge Size Space; // 0x788(0x01)
	char pad_789[0x7]; // 0x789(0x07)
	struct FAresMinimapSlotConfig Debug Slot; // 0x790(0x58)
	struct TMap<enum class EAresColorBlindMode, struct FLinearColor> Accesibility Self Colors; // 0x7e8(0x50)
	struct FVector Edge Size Console; // 0x838(0x18)
	double MissingOpacity; // 0x850(0x08)

	void InitializeFadeOutWidgets(); // Function ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C.InitializeFadeOutWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Initialize Edge Widget Settings(); // Function ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C.Initialize Edge Widget Settings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetEdgeFadeTime(double VisibleLifetime, double FadeOutTime, double InLastSeen); // Function ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C.SetEdgeFadeTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Voice Event(bool Speaking); // Function ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C.Voice Event // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Comm Event(enum class NonVerbalCommTypesEnum Nonverbal Comm); // Function ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C.Comm Event // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Slot From Config(struct FAresMinimapSlotConfig Config); // Function ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C.Set Slot From Config // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Missing Opacity(); // Function ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C.Update Missing Opacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Widget(); // Function ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C.Update Widget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveSetState(); // Function ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C.ReceiveSetState // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAccessibilityColors(enum class EAresIntSettingName SettingName, int32_t OldValue, int32_t NewValue); // Function ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C.UpdateAccessibilityColors // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleEdgeStateChange(bool bIsEdgeWidget); // Function ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C.HandleEdgeStateChange // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_ShooterCharacterMinimapWidget(int32_t EntryPoint); // Function ShooterCharacterMinimapWidget.ShooterCharacterMinimapWidget_C.ExecuteUbergraph_ShooterCharacterMinimapWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

