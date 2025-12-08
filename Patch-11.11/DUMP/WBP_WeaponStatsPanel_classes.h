// WidgetBlueprintGeneratedClass WBP_WeaponStatsPanel.WBP_WeaponStatsPanel_C
// Size: 0x510 (Inherited: 0x3b0)
struct UWBP_WeaponStatsPanel_C : UWBP_WeaponStatsPanel_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	struct UWidgetAnimation* WeaponDetailConstructAnimation; // 0x3b8(0x08)
	struct UImage* AccentLine; // 0x3c0(0x08)
	struct UVerticalBox* AltFireADSEntries; // 0x3c8(0x08)
	struct UVerticalBox* AltFireBulletedEntries; // 0x3d0(0x08)
	struct UTextBlock* AltFireCategory; // 0x3d8(0x08)
	struct UBorder* AltFireContainer; // 0x3e0(0x08)
	struct UWBP_WeaponStats_BulletedTextEntry_C* AltFireEntry1; // 0x3e8(0x08)
	struct UWBP_WeaponStats_BulletedTextEntry_C* AltFireEntry2; // 0x3f0(0x08)
	struct UWBP_WeaponStats_BulletedTextEntry_C* AltFireEntry3; // 0x3f8(0x08)
	struct UWBP_WeaponStats_BulletedTextEntry_C* AltFireEntry4; // 0x400(0x08)
	struct UTextBlock* AltFireName; // 0x408(0x08)
	struct UTextBlock* Category; // 0x410(0x08)
	struct UWBP_WeaponStats_DamageFalloff_C* DamageFalloff; // 0x418(0x08)
	struct UWBP_WeaponStatsEntry_C* EquipSpeed; // 0x420(0x08)
	struct UVerticalBox* FeatureBulletedEntries; // 0x428(0x08)
	struct UTextBlock* FeatureCategory; // 0x430(0x08)
	struct UBorder* FeatureContainer; // 0x438(0x08)
	struct UWBP_WeaponStats_BulletedTextEntry_C* FeatureEntry1; // 0x440(0x08)
	struct UWBP_WeaponStats_BulletedTextEntry_C* FeatureEntry2; // 0x448(0x08)
	struct UTextBlock* FeatureName; // 0x450(0x08)
	struct UWBP_WeaponStatsEntry_C* FireRate; // 0x458(0x08)
	struct UTextBlock* FireRateText; // 0x460(0x08)
	struct UTextBlock* FireRateValue; // 0x468(0x08)
	struct UTextBlock* FireType; // 0x470(0x08)
	struct UWBP_WeaponStatsEntry_C* FirstShotSpread; // 0x478(0x08)
	struct UWBP_WeaponStatsEntry_C* Magazine; // 0x480(0x08)
	struct UTextBlock* MoveSpeedText; // 0x488(0x08)
	struct UTextBlock* MoveSpeedValue; // 0x490(0x08)
	struct UTextBlock* Name; // 0x498(0x08)
	struct UWBP_WeaponStatsCategoryHeader_StageLoadouts_C* PrimaryFireHeader; // 0x4a0(0x08)
	struct UWBP_WeaponStatsEntry_C* ReloadSpeed; // 0x4a8(0x08)
	struct UWBP_WeaponStatsEntry_C* RunSpeed; // 0x4b0(0x08)
	struct UTextBlock* WallPen; // 0x4b8(0x08)
	struct UTextBlock* ZoomText; // 0x4c0(0x08)
	struct UTextBlock* ZoomValue; // 0x4c8(0x08)
	struct TArray<None> DamageFalloffs; // 0x4d0(0x10)
	struct TArray<struct UWBP_WeaponStats_DamageFalloffRange_C*> DamageFalloffRanges1; // 0x4e0(0x10)
	struct TArray<struct UWBP_WeaponStats_DamageFalloffRange_C*> DamageFalloffRanges2; // 0x4f0(0x10)
	struct TArray<struct UWBP_WeaponStats_DamageFalloffRange_C*> DamageFalloffRanges3; // 0x500(0x10)

	void UpdateFeature(enum class EWeaponStatsFeature Feature); // Function WBP_WeaponStatsPanel.WBP_WeaponStatsPanel_C.UpdateFeature // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAltFireNone(); // Function WBP_WeaponStatsPanel.WBP_WeaponStatsPanel_C.UpdateAltFireNone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAltFireShotgun(struct FWeaponStatUIData Stats); // Function WBP_WeaponStatsPanel.WBP_WeaponStatsPanel_C.UpdateAltFireShotgun // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAltFireAirBurst(struct FWeaponStatUIData Stats); // Function WBP_WeaponStatsPanel.WBP_WeaponStatsPanel_C.UpdateAltFireAirBurst // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAltFireADS(struct FWeaponStatUIData Stats); // Function WBP_WeaponStatsPanel.WBP_WeaponStatsPanel_C.UpdateAltFireADS // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAltFire(struct FWeaponStatUIData Stats); // Function WBP_WeaponStatsPanel.WBP_WeaponStatsPanel_C.UpdateAltFire // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateDamageFalloff(struct TArray<struct FWeaponStatDamageUIData>& Damages); // Function WBP_WeaponStatsPanel.WBP_WeaponStatsPanel_C.UpdateDamageFalloff // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateFirstShotSpread(double FirstShotAccuracy, double ADSFirstShotAccuracy); // Function WBP_WeaponStatsPanel.WBP_WeaponStatsPanel_C.UpdateFirstShotSpread // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateFireRate(double FireRate); // Function WBP_WeaponStatsPanel.WBP_WeaponStatsPanel_C.UpdateFireRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateMagazine(int32_t MagazineSize); // Function WBP_WeaponStatsPanel.WBP_WeaponStatsPanel_C.UpdateMagazine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateReloadSpeed(double ReloadSpeed); // Function WBP_WeaponStatsPanel.WBP_WeaponStatsPanel_C.UpdateReloadSpeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateEquipSpeed(double EquipSpeed); // Function WBP_WeaponStatsPanel.WBP_WeaponStatsPanel_C.UpdateEquipSpeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Run Speed(double RunSpeedMultiplier); // Function WBP_WeaponStatsPanel.WBP_WeaponStatsPanel_C.Update Run Speed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateWallPen(enum class EWallPenetrationDisplayType WallPenType); // Function WBP_WeaponStatsPanel.WBP_WeaponStatsPanel_C.UpdateWallPen // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateFireType(enum class EWeaponFireModeDisplayType FireType); // Function WBP_WeaponStatsPanel.WBP_WeaponStatsPanel_C.UpdateFireType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCategory(enum class EEquippableCategory EquippableCategory); // Function WBP_WeaponStatsPanel.WBP_WeaponStatsPanel_C.UpdateCategory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateName(struct FText Name); // Function WBP_WeaponStatsPanel.WBP_WeaponStatsPanel_C.UpdateName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_WeaponStatsPanel.WBP_WeaponStatsPanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_WeaponStatsPanel.WBP_WeaponStatsPanel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_WeaponStatsPanel(int32_t EntryPoint); // Function WBP_WeaponStatsPanel.WBP_WeaponStatsPanel_C.ExecuteUbergraph_WBP_WeaponStatsPanel // (Final|UbergraphFunction) // @ game+0x19be2f0
};

