// WidgetBlueprintGeneratedClass shopTeammateVanilla_Base.shopTeammateVanilla_Base_C
// Size: 0x3a8 (Inherited: 0x318)
struct UshopTeammateVanilla_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0x320(0x08)
	struct UObject* Ultimate Icon; // 0x328(0x08)
	struct UShopPlayerModel* Teammate Player Model; // 0x330(0x08)
	struct UShopPlayerModel* Owner Player Model; // 0x338(0x08)
	int32_t requestPrice; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct UCharacterHandle* CharacterHandle; // 0x348(0x08)
	struct UAresPurchasableEquippable* RequestedGun; // 0x350(0x08)
	struct UImage* teammateCharacterIcon; // 0x358(0x08)
	struct UTextBlock* PlayerName; // 0x360(0x08)
	struct UImage* Primary_icon; // 0x368(0x08)
	struct UImage* Sidearm_icon; // 0x370(0x08)
	struct UImage* Armor_Icon; // 0x378(0x08)
	struct UTextBlock* gunRequestText; // 0x380(0x08)
	struct UTextBlock* gunRequestPrice; // 0x388(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_207; // 0x390(0x08)
	struct UHorizontalBox* Request; // 0x398(0x08)
	struct UHorizontalBox* Loadout; // 0x3a0(0x08)

	void SetArmorBrush(struct UAresInventory* Inventory, struct UImage* ImageControl); // Function shopTeammateVanilla_Base.shopTeammateVanilla_Base_C.SetArmorBrush // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Find Matching Equippable(struct AAresItem* Item, struct UAresPurchasableEquippable*& PurchasableEquippable); // Function shopTeammateVanilla_Base.shopTeammateVanilla_Base_C.Find Matching Equippable // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSlotBrush(struct UAresInventory* Inventory, enum class EAresItemSlot Slot, struct UImage* ImageControl); // Function shopTeammateVanilla_Base.shopTeammateVanilla_Base_C.SetSlotBrush // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get_WeaponImage_Brush(); // Function shopTeammateVanilla_Base.shopTeammateVanilla_Base_C.Get_WeaponImage_Brush // (Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetCharacterIcon(struct UCharacterHandle* Character Handle); // Function shopTeammateVanilla_Base.shopTeammateVanilla_Base_C.SetCharacterIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool Get_requestFulfillButton_bIsEnabled_1(); // Function shopTeammateVanilla_Base.shopTeammateVanilla_Base_C.Get_requestFulfillButton_bIsEnabled_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void showLoadout(); // Function shopTeammateVanilla_Base.shopTeammateVanilla_Base_C.showLoadout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void makeRequestDetails(struct FAresGunRequest Gun Request Details); // Function shopTeammateVanilla_Base.shopTeammateVanilla_Base_C.makeRequestDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FSlateColor Get_teammateMoney_ColorAndOpacity_2(); // Function shopTeammateVanilla_Base.shopTeammateVanilla_Base_C.Get_teammateMoney_ColorAndOpacity_2 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	struct FSlateBrush Get_teammateCharacterIcon_Brush_1(); // Function shopTeammateVanilla_Base.shopTeammateVanilla_Base_C.Get_teammateCharacterIcon_Brush_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	struct FSlateBrush Get_armorImage_Brush_1(); // Function shopTeammateVanilla_Base.shopTeammateVanilla_Base_C.Get_armorImage_Brush_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Get_teammateMoney_ColorAndOpacity_1(); // Function shopTeammateVanilla_Base.shopTeammateVanilla_Base_C.Get_teammateMoney_ColorAndOpacity_1 // (Public|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	struct FText Get_teammateMoney_Text_1(); // Function shopTeammateVanilla_Base.shopTeammateVanilla_Base_C.Get_teammateMoney_Text_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	struct FText Get_teammateMoneySpent_Text_1(); // Function shopTeammateVanilla_Base.shopTeammateVanilla_Base_C.Get_teammateMoneySpent_Text_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Construct(); // Function shopTeammateVanilla_Base.shopTeammateVanilla_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_102_OnButtonReleasedEvent__DelegateSignature(); // Function shopTeammateVanilla_Base.shopTeammateVanilla_Base_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_102_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnCancelGunReqeust(struct FAresGunRequest UpdatedGunRequest, struct AShooterPlayerState* RequestingPlayer); // Function shopTeammateVanilla_Base.shopTeammateVanilla_Base_C.OnCancelGunReqeust // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMakeGunRequest(struct FAresGunRequest UpdatedGunRequest, struct AShooterPlayerState* RequestingPlayer); // Function shopTeammateVanilla_Base.shopTeammateVanilla_Base_C.OnMakeGunRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFulfillGunRequest(struct FAresGunRequest UpdatedGunRequest, struct AShooterPlayerState* FulfillingPlayer, struct AShooterPlayerState* RequestingPlayer); // Function shopTeammateVanilla_Base.shopTeammateVanilla_Base_C.OnFulfillGunRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Player Thumb(struct UCharacterHandle* CharacterHandle); // Function shopTeammateVanilla_Base.shopTeammateVanilla_Base_C.Set Player Thumb // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayerModelUpdated(); // Function shopTeammateVanilla_Base.shopTeammateVanilla_Base_C.PlayerModelUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function shopTeammateVanilla_Base.shopTeammateVanilla_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void FulfillRequest_Gamepad(); // Function shopTeammateVanilla_Base.shopTeammateVanilla_Base_C.FulfillRequest_Gamepad // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_shopTeammateVanilla_Base(int32_t EntryPoint); // Function shopTeammateVanilla_Base.shopTeammateVanilla_Base_C.ExecuteUbergraph_shopTeammateVanilla_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

