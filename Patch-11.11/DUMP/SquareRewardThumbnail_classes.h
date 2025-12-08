// WidgetBlueprintGeneratedClass SquareRewardThumbnail.SquareRewardThumbnail_C
// Size: 0x3c0 (Inherited: 0x318)
struct USquareRewardThumbnail_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UBuddy_C* Buddy; // 0x320(0x08)
	struct UCharacterTile_C* CharacterTile; // 0x328(0x08)
	struct UContractXPRewardThumbnail_C* ContractXPRewardThumbnail; // 0x330(0x08)
	struct UCurrencyItem_C* CurrencyItem; // 0x338(0x08)
	struct ULevelBorderItem_C* LevelBorderItem; // 0x340(0x08)
	struct UPlayerCardsItem_C* PlayerCardsItem; // 0x348(0x08)
	struct UPlayerTitleItem_C* PlayerTitleItem; // 0x350(0x08)
	struct USpray_C* Spray; // 0x358(0x08)
	struct UWidgetSwitcher* Switcher; // 0x360(0x08)
	struct UTotem_C* Totem; // 0x368(0x08)
	struct UWeaponDetailsSkin_C* WeaponSkin; // 0x370(0x08)
	struct UWeaponSkinLevel_C* WeaponSkinLevel; // 0x378(0x08)
	struct FMulticastInlineDelegate OnIsOwnedChanged; // 0x380(0x10)
	struct FMulticastInlineDelegate OnIsEquippedChanged; // 0x390(0x10)
	struct FMulticastInlineDelegate OnIsLoyaltyContentChanged; // 0x3a0(0x10)
	struct FMulticastInlineDelegate OnIsFavoritedChanged; // 0x3b0(0x10)

	void HandleIsFavoritedChanged(bool IsFavorited, struct UUserWidget* Source); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleIsFavoritedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsLoyaltyChanged(bool IsLoyaltyContent, struct UUserWidget* Source); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleIsLoyaltyChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetContentFromDataAsset(struct UAresBasePrimaryDataAsset* DataAsset, int32_t Quantity, struct FAdditionalCarouselObjectContext AdditionalContext); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.SetContentFromDataAsset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsOwnedChanged(bool IsOwned, struct UUserWidget* Source); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleIsOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleIsEquippedChanged(struct UUserWidget* Source, bool IsEquipped); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleIsEquippedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetContent(struct UBaseHandle* InHandle, int32_t InQuantity, struct FAdditionalCarouselObjectContext AdditionalContext); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.SetContent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void HandleSkinIsEquippedChanged(bool IsEquipped); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleSkinIsEquippedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSkinIsOwnedChanged(bool IsOwned); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleSkinIsOwnedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleBuddyIsEquippedChanged(bool IsEquipped); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleBuddyIsEquippedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleBuddyIsOwnedChanged(bool IsOwned); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleBuddyIsOwnedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCharacterIsOwnedChanged(bool IsOwned); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleCharacterIsOwnedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCardEquippedChanged(bool IsEquipped); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleCardEquippedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCardIsOwnedChanged(bool IsOwned); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleCardIsOwnedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSprayEquippedChanged(bool IsEquipped); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleSprayEquippedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSprayOwnedChanged(bool IsOwned); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleSprayOwnedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSkinLevelEquippedChanged(bool IsEquipped); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleSkinLevelEquippedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSkinLevelOwnedChanged(bool IsOwned); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleSkinLevelOwnedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSkinLevelLoyaltyChanged(bool IsLoyaltyContent); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleSkinLevelLoyaltyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSkinIsLoyaltyChanged(bool IsLoyaltyContent); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleSkinIsLoyaltyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleLevelBorderOwnedChanged(bool IsOwned); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleLevelBorderOwnedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleLevelBorderEquippedChanged(bool IsEquipped); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleLevelBorderEquippedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSprayFavoriteChanged(bool IsFavorited); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleSprayFavoriteChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCardIsFavoritedChanged(bool IsFavorited); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleCardIsFavoritedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleLevelBorderFavoritedChanged(bool IsFavorited); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleLevelBorderFavoritedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleBuddyIsFavoritedChanged(bool IsFavorited); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleBuddyIsFavoritedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSkinIsFavoritedChanged(bool IsFavorited); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleSkinIsFavoritedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleTotemEquippedChanged(bool IsEquipped); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleTotemEquippedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleTotemOwnedChanged(bool IsOwned); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleTotemOwnedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleTotemFavoriteChanged(bool IsFavorited); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.HandleTotemFavoriteChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_SquareRewardThumbnail(int32_t EntryPoint); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.ExecuteUbergraph_SquareRewardThumbnail // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnIsFavoritedChanged__DelegateSignature(bool IsFavorited); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.OnIsFavoritedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsLoyaltyContentChanged__DelegateSignature(bool IsLoyaltyContent); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.OnIsLoyaltyContentChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsEquippedChanged__DelegateSignature(bool IsEquipped); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.OnIsEquippedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsOwnedChanged__DelegateSignature(bool IsOwned); // Function SquareRewardThumbnail.SquareRewardThumbnail_C.OnIsOwnedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

