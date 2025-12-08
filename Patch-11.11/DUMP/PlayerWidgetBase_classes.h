// WidgetBlueprintGeneratedClass PlayerWidgetBase.PlayerWidgetBase_C
// Size: 0x45f (Inherited: 0x318)
struct UPlayerWidgetBase_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USizeBox* Ability1; // 0x320(0x08)
	struct UProgressBar* Ability1_ChargeProgress; // 0x328(0x08)
	struct USizeBox* Ability2; // 0x330(0x08)
	struct UProgressBar* Ability2_ChargeProgress; // 0x338(0x08)
	struct USizeBox* Ability3; // 0x340(0x08)
	struct UProgressBar* Ability3_ChargeProgress; // 0x348(0x08)
	struct USizeBox* Ability4; // 0x350(0x08)
	struct UProgressBar* Ability4_ChargeProgress; // 0x358(0x08)
	struct UImage* ArmorIcon; // 0x360(0x08)
	struct USizeBox* ArmorIconWrapper; // 0x368(0x08)
	struct UImage* Image_139; // 0x370(0x08)
	struct UImage* Image_901; // 0x378(0x08)
	struct UImage* Image_1018; // 0x380(0x08)
	struct UImage* Image_1127; // 0x388(0x08)
	struct UImage* Image_1145; // 0x390(0x08)
	struct UTextBlock* PlayerHealth; // 0x398(0x08)
	struct UTextBlock* PlayerName; // 0x3a0(0x08)
	struct UImage* PortraitIcon; // 0x3a8(0x08)
	struct USizeBox* Primary; // 0x3b0(0x08)
	struct UImage* PrimaryWeaponIcon; // 0x3b8(0x08)
	struct USizeBox* Secondary; // 0x3c0(0x08)
	struct UImage* SecondaryWeaponIcon; // 0x3c8(0x08)
	struct AShooterPlayerState* PlayerState; // 0x3d0(0x08)
	struct FSlateColor AbilityUnchargedColor; // 0x3d8(0x14)
	struct FSlateColor AbilityChargedColor; // 0x3ec(0x14)
	bool Handle Valid; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct FMulticastInlineDelegate ExtendedInfoPress; // 0x408(0x10)
	struct UCharacterUIData* UIData; // 0x418(0x08)
	struct FMulticastInlineDelegate ExtendedInfoRelease; // 0x420(0x10)
	struct FMulticastInlineDelegate Update; // 0x430(0x10)
	double TickTimePassed; // 0x440(0x08)
	struct FSlateColor AbilityHighlightColor; // 0x448(0x14)
	bool bExtendedInfoHeld; // 0x45c(0x01)
	bool bPlayerLoadoutAlwaysVisible; // 0x45d(0x01)
	bool bShowLoadoutDueToGamePhase; // 0x45e(0x01)

	void RequestVisibilityUpdate(enum class ESlateVisibility Requested Visibility, bool& WasChangeApplied); // Function PlayerWidgetBase.PlayerWidgetBase_C.RequestVisibilityUpdate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateHealth(); // Function PlayerWidgetBase.PlayerWidgetBase_C.UpdateHealth // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateArmorIcon(struct UAresInventory* Inventory); // Function PlayerWidgetBase.PlayerWidgetBase_C.UpdateArmorIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateVisibility(); // Function PlayerWidgetBase.PlayerWidgetBase_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAbilityIcon(struct UProgressBar* AbilityIcon, struct AAresItem* Item, struct UCharacterUIData* CharacterUIData, struct AShooterCharacter* Character, int32_t CurrentCharges, int32_t MaxCharges, bool ShowChargeAmount, bool HighlightWhenFull, bool Ultimate); // Function PlayerWidgetBase.PlayerWidgetBase_C.UpdateAbilityIcon // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateWeaponIcon(struct UImage* ImageToUpdate, struct AAresItem* Item, bool HasCharges, struct UCharacterUIData* CharacterUIData, struct AShooterCharacter* Character); // Function PlayerWidgetBase.PlayerWidgetBase_C.UpdateWeaponIcon // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateDisplay(struct UCharacterUIData* CharacterUIData); // Function PlayerWidgetBase.PlayerWidgetBase_C.UpdateDisplay // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function PlayerWidgetBase.PlayerWidgetBase_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void InitPlayerState(struct AShooterPlayerState* ShooterPlayerState, struct AShooterCharacter* ShooterCharacter); // Function PlayerWidgetBase.PlayerWidgetBase_C.InitPlayerState // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GotCharacter(struct UCharacterHandle* CharacterHandle); // Function PlayerWidgetBase.PlayerWidgetBase_C.GotCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Press(); // Function PlayerWidgetBase.PlayerWidgetBase_C.Press // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Release(); // Function PlayerWidgetBase.PlayerWidgetBase_C.Release // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Phasechange(enum class EAresGamePhase NewGamePhase, int32_t RoundNumberEnded); // Function PlayerWidgetBase.PlayerWidgetBase_C.Phasechange // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function PlayerWidgetBase.PlayerWidgetBase_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Damaged(struct AActor* DamagedActor, float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function PlayerWidgetBase.PlayerWidgetBase_C.Damaged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToggleVisibility2(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function PlayerWidgetBase.PlayerWidgetBase_C.ToggleVisibility2 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function PlayerWidgetBase.PlayerWidgetBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_PlayerWidgetBase(int32_t EntryPoint); // Function PlayerWidgetBase.PlayerWidgetBase_C.ExecuteUbergraph_PlayerWidgetBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void Update__DelegateSignature(); // Function PlayerWidgetBase.PlayerWidgetBase_C.Update__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExtendedInfoRelease__DelegateSignature(); // Function PlayerWidgetBase.PlayerWidgetBase_C.ExtendedInfoRelease__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExtendedInfoPress__DelegateSignature(); // Function PlayerWidgetBase.PlayerWidgetBase_C.ExtendedInfoPress__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

