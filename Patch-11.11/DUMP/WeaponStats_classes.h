// WidgetBlueprintGeneratedClass WeaponStats.WeaponStats_C
// Size: 0x468 (Inherited: 0x318)
struct UWeaponStats_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UEquippableUIData* UIData; // 0x320(0x08)
	double BaseRunSpeedMS; // 0x328(0x08)
	struct UEquippableUIData* PreviewData; // 0x330(0x08)
	double RateOfFireMin; // 0x338(0x08)
	double RateOfFireMax; // 0x340(0x08)
	double RunSpeedMin; // 0x348(0x08)
	double RunSpeedMax; // 0x350(0x08)
	double MagazineSizeMin; // 0x358(0x08)
	double MagazineSizeMax; // 0x360(0x08)
	double EquipTimeMin; // 0x368(0x08)
	double EquipTimeMax; // 0x370(0x08)
	double ReloadTimeMin; // 0x378(0x08)
	double ReloadTimeMax; // 0x380(0x08)
	double FirstBulletAccuracyMin; // 0x388(0x08)
	double FirstBulletAccuracyMax; // 0x390(0x08)
	struct TArray<struct UEquippableDataAsset*> ComparableWeapons; // 0x398(0x10)
	bool bIsNonWeaponItem; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct UImage* Image_NonWeaponItemMobile; // 0x3b0(0x08)
	struct UTextBlock* Text_NonWeaponItemDesc; // 0x3b8(0x08)
	struct UWidgetSwitcher* WS_StatsTouch; // 0x3c0(0x08)
	struct FMulticastInlineDelegate InfoCloseBtnPressMobile; // 0x3c8(0x10)
	struct FMulticastInlineDelegate SetSelectedWeaponImageMobile; // 0x3d8(0x10)
	struct UImage* Image_WeaponMobile; // 0x3e8(0x08)
	struct UTextBlock* Name; // 0x3f0(0x08)
	struct UTextBlock* Category; // 0x3f8(0x08)
	struct UTextBlock* FireType; // 0x400(0x08)
	struct UTextBlock* WallPen; // 0x408(0x08)
	struct UWeaponStats_StatEntry_C* MagazineSize; // 0x410(0x08)
	struct UWeaponStats_StatEntry_C* RunSpeed; // 0x418(0x08)
	struct UWeaponStats_StatEntry_C* EquipSpeed; // 0x420(0x08)
	struct UWeaponStats_StatEntry_C* FireRate; // 0x428(0x08)
	struct UWeaponStats_StatEntry_C* FirstBulletAccuracy; // 0x430(0x08)
	struct UWeaponStats_InfoBlock_C* AltFire; // 0x438(0x08)
	struct UWeaponStats_InfoBlock_C* Feature; // 0x440(0x08)
	struct UWeaponStats_DamageFalloff_C* DamageFalloff; // 0x448(0x08)
	struct UTextBlock* PelletCountText; // 0x450(0x08)
	struct UWeaponStats_StatEntry_C* ReloadSpeed; // 0x458(0x08)
	struct UWeaponStats_DamageFalloffRanges_C* DamageFalloffRangs; // 0x460(0x08)

	void SetNonWeaponItemStatVisibilityMobile(); // Function WeaponStats.WeaponStats_C.SetNonWeaponItemStatVisibilityMobile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetContentNonWeaponItemMobile(struct UShopPurchasableModel* NonWeaponItem, struct UTexture* NonWeaponDisplayIcon); // Function WeaponStats.WeaponStats_C.SetContentNonWeaponItemMobile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePelletCount(struct UEquippableUIData* UIData); // Function WeaponStats.WeaponStats_C.UpdatePelletCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAllMinMaxValues(); // Function WeaponStats.WeaponStats_C.UpdateAllMinMaxValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSingleMinMax(double& MinValue, double& MaxValue, double NewValue); // Function WeaponStats.WeaponStats_C.UpdateSingleMinMax // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ValidateComparable(struct UEquippableUIData* EquippableUIData); // Function WeaponStats.WeaponStats_C.ValidateComparable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateDamageFalloff(struct FWeaponStatUIData Stats); // Function WeaponStats.WeaponStats_C.UpdateDamageFalloff // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateFeature(enum class EWeaponStatsFeature NewParam); // Function WeaponStats.WeaponStats_C.UpdateFeature // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetAltFireShotgunDetails(struct FWeaponStatUIData Stats, struct TArray<struct FText>& Details); // Function WeaponStats.WeaponStats_C.GetAltFireShotgunDetails // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetAltFireAirBurstDetails(struct FWeaponStatUIData Stats, struct TArray<struct FText>& Details); // Function WeaponStats.WeaponStats_C.GetAltFireAirBurstDetails // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetAltFireADSDetails(struct FWeaponStatUIData Stats, struct TArray<struct FText>& Details); // Function WeaponStats.WeaponStats_C.GetAltFireADSDetails // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void RoundToTwoDecimals(double In, double& Out); // Function WeaponStats.WeaponStats_C.RoundToTwoDecimals // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateAltFire(struct FWeaponStatUIData Stats); // Function WeaponStats.WeaponStats_C.UpdateAltFire // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateStats(struct FWeaponStatUIData Stats, struct UEquippableUIData* EquippableUIData); // Function WeaponStats.WeaponStats_C.UpdateStats // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCategory(enum class EEquippableCategory Category); // Function WeaponStats.WeaponStats_C.UpdateCategory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateName(struct FText Name); // Function WeaponStats.WeaponStats_C.UpdateName // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetContent(struct UEquippableUIData* EquippableUIData); // Function WeaponStats.WeaponStats_C.SetContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WeaponStats.WeaponStats_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WeaponStats.WeaponStats_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function WeaponStats.WeaponStats_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WeaponStats(int32_t EntryPoint); // Function WeaponStats.WeaponStats_C.ExecuteUbergraph_WeaponStats // (Final|UbergraphFunction) // @ game+0x19be2f0
	void SetSelectedWeaponImageMobile__DelegateSignature(); // Function WeaponStats.WeaponStats_C.SetSelectedWeaponImageMobile__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InfoCloseBtnPressMobile__DelegateSignature(); // Function WeaponStats.WeaponStats_C.InfoCloseBtnPressMobile__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

