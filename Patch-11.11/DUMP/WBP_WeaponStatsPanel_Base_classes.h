// WidgetBlueprintGeneratedClass WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C
// Size: 0x3b0 (Inherited: 0x318)
struct UWBP_WeaponStatsPanel_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UEquippableUIData* PreviewData; // 0x320(0x08)
	struct UEquippableUIData* UIData; // 0x328(0x08)
	struct TArray<struct UEquippableDataAsset*> ComparableWeapons; // 0x330(0x10)
	double RateOfFireMin; // 0x340(0x08)
	double RateOfFireMax; // 0x348(0x08)
	double MagazineSizeMin; // 0x350(0x08)
	double MagazineSizeMax; // 0x358(0x08)
	double RunSpeedMin; // 0x360(0x08)
	double RunSpeedMax; // 0x368(0x08)
	double EquipTimeMin; // 0x370(0x08)
	double EquipTimeMax; // 0x378(0x08)
	double ReloadTimeMin; // 0x380(0x08)
	double ReloadTimeMax; // 0x388(0x08)
	double FirstBulletAccuracyMin; // 0x390(0x08)
	double FirstBulletAccuracyMax; // 0x398(0x08)
	double BaseRunSpeedMS; // 0x3a0(0x08)
	struct UEquippableDataAsset* DefaultData; // 0x3a8(0x08)

	void UpdateFeature(enum class EWeaponStatsFeature Feature); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.UpdateFeature // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAltFireNone(); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.UpdateAltFireNone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAltFireShotgun(struct FWeaponStatUIData Stats); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.UpdateAltFireShotgun // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAltFireAirBurst(struct FWeaponStatUIData Stats); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.UpdateAltFireAirBurst // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAltFireADS(struct FWeaponStatUIData Stats); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.UpdateAltFireADS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAltFire(struct FWeaponStatUIData Stats); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.UpdateAltFire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateDamageFalloff(struct TArray<struct FWeaponStatDamageUIData>& Damages); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.UpdateDamageFalloff // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateFirstShotSpread(double FirstShotAccuracy, double ADSFirstShotAccuracy); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.UpdateFirstShotSpread // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateFireRate(double FireRate); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.UpdateFireRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateMagazine(int32_t MagazineSize); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.UpdateMagazine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateReloadSpeed(double ReloadSpeed); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.UpdateReloadSpeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateEquipSpeed(double EquipSpeed); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.UpdateEquipSpeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Run Speed(double RunSpeedMultiplier); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.Update Run Speed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ValidateComparable(struct UEquippableUIData* EquippableUIData); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.ValidateComparable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSingleMinMax(double& MinValue, double& MaxValue, double NewValue); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.UpdateSingleMinMax // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateMinMaxValues(); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.UpdateMinMaxValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateStats(struct FWeaponStatUIData Stats); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.UpdateStats // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateWallPen(enum class EWallPenetrationDisplayType WallPenType); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.UpdateWallPen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateFireType(enum class EWeaponFireModeDisplayType FireType); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.UpdateFireType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCategory(enum class EEquippableCategory EquippableCategory); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.UpdateCategory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateName(struct FText Name); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.UpdateName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetContent(struct UEquippableUIData* EquippableUIData); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.SetContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_WeaponStatsPanel_Base(int32_t EntryPoint); // Function WBP_WeaponStatsPanel_Base.WBP_WeaponStatsPanel_Base_C.ExecuteUbergraph_WBP_WeaponStatsPanel_Base // (Final|UbergraphFunction) // @ game+0x19be2f0
};

