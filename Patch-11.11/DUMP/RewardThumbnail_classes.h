// WidgetBlueprintGeneratedClass RewardThumbnail.RewardThumbnail_C
// Size: 0x3b0 (Inherited: 0x318)
struct URewardThumbnail_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Icon; // 0x320(0x08)
	struct UTelemetryButton* RewardButton; // 0x328(0x08)
	struct FText ToolTip; // 0x330(0x18)
	struct FMulticastInlineDelegate OnClicked; // 0x348(0x10)
	struct URewardModel* RewardModel; // 0x358(0x08)
	struct UAkAudioEvent* SoundHover; // 0x360(0x08)
	struct UAkAudioEvent* SoundUnhover; // 0x368(0x08)
	struct UAkAudioEvent* SoundClick; // 0x370(0x08)
	struct FMulticastInlineDelegate OnHovered; // 0x378(0x10)
	bool Clickable; // 0x388(0x01)
	char pad_389[0x7]; // 0x389(0x07)
	struct FMulticastInlineDelegate OnUnhovered; // 0x390(0x10)
	struct FMulticastInlineDelegate RewardLoaded; // 0x3a0(0x10)

	void ShowTotem(struct UTotemRewardModel* RewardModel); // Function RewardThumbnail.RewardThumbnail_C.ShowTotem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTotemLoaded(struct UTotemHandle* TotemHandle); // Function RewardThumbnail.RewardThumbnail_C.OnTotemLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetClickable(bool Clickable); // Function RewardThumbnail.RewardThumbnail_C.SetClickable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateTelemetryTargets(); // Function RewardThumbnail.RewardThumbnail_C.UpdateTelemetryTargets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerTitleLoaded(struct UPlayerTitleHandle* PlayerTitleHandle); // Function RewardThumbnail.RewardThumbnail_C.OnPlayerTitleLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowPlayerTitle(struct UPlayerTitleRewardModel* RewardModel); // Function RewardThumbnail.RewardThumbnail_C.ShowPlayerTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerCardLoaded(struct UPlayerCardHandle* PlayerCardHandle); // Function RewardThumbnail.RewardThumbnail_C.OnPlayerCardLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowPlayerCard(struct UPlayerCardRewardModel* PlayerCard); // Function RewardThumbnail.RewardThumbnail_C.ShowPlayerCard // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAlpha(double Alpha); // Function RewardThumbnail.RewardThumbnail_C.SetAlpha // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnGunBuddyLoaded(struct UEquippableCharmHandle* BuddyHandle); // Function RewardThumbnail.RewardThumbnail_C.OnGunBuddyLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowGunBuddyLevel(struct UEquippableCharmLevelRewardModel* BuddyLevel); // Function RewardThumbnail.RewardThumbnail_C.ShowGunBuddyLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCharacterLoaded(struct UCharacterHandle* CharacterHandle); // Function RewardThumbnail.RewardThumbnail_C.OnCharacterLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowCharacter(struct UCharacterRewardModel* CharacterReward); // Function RewardThumbnail.RewardThumbnail_C.ShowCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrencyLoaded(struct UCurrencyHandle* CurrencyHandle); // Function RewardThumbnail.RewardThumbnail_C.OnCurrencyLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippableSkinChromaLoaded(struct UEquippableSkinChromaHandle* Handle); // Function RewardThumbnail.RewardThumbnail_C.OnEquippableSkinChromaLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippableSkinLevelLoaded(struct UEquippableSkinLevelHandle* Handle); // Function RewardThumbnail.RewardThumbnail_C.OnEquippableSkinLevelLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowEquippableSkinChroma(struct UEquippableSkinChromaRewardModel* SkinChromaReward); // Function RewardThumbnail.RewardThumbnail_C.ShowEquippableSkinChroma // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowEquippableSkinLevel(struct UEquippableSkinLevelRewardModel* SkinLevelReward); // Function RewardThumbnail.RewardThumbnail_C.ShowEquippableSkinLevel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowNoReward(); // Function RewardThumbnail.RewardThumbnail_C.ShowNoReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetContent(struct FText ToolTip, struct UTexture* Icon, struct FWidgetTransform IconTransform); // Function RewardThumbnail.RewardThumbnail_C.SetContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetReward(struct URewardModel* RewardModel); // Function RewardThumbnail.RewardThumbnail_C.SetReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* OnGetMenuContent_1(); // Function RewardThumbnail.RewardThumbnail_C.OnGetMenuContent_1 // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSprayLoaded(struct USprayHandle* SprayHandle); // Function RewardThumbnail.RewardThumbnail_C.OnSprayLoaded // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowSpray(struct USprayRewardModel* SprayReward); // Function RewardThumbnail.RewardThumbnail_C.ShowSpray // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowCurrency(struct UWalletRewardModel* Reward); // Function RewardThumbnail.RewardThumbnail_C.ShowCurrency // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippableSkinLoaded(struct UEquippableSkinHandle* Handle); // Function RewardThumbnail.RewardThumbnail_C.OnEquippableSkinLoaded // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowEquippableSkin(struct UEquippableSkinRewardModel* SkinReward); // Function RewardThumbnail.RewardThumbnail_C.ShowEquippableSkin // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function RewardThumbnail.RewardThumbnail_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RewardBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function RewardThumbnail.RewardThumbnail_C.BndEvt__RewardBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RewardBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function RewardThumbnail.RewardThumbnail_C.BndEvt__RewardBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__RewardBtn_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function RewardThumbnail.RewardThumbnail_C.BndEvt__RewardBtn_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_RewardThumbnail(int32_t EntryPoint); // Function RewardThumbnail.RewardThumbnail_C.ExecuteUbergraph_RewardThumbnail // (Final|UbergraphFunction) // @ game+0x19be2f0
	void RewardLoaded__DelegateSignature(struct UBaseHandle* Handle, int32_t Amount); // Function RewardThumbnail.RewardThumbnail_C.RewardLoaded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnUnHovered__DelegateSignature(struct URewardModel* RewardModel); // Function RewardThumbnail.RewardThumbnail_C.OnUnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHovered__DelegateSignature(struct URewardModel* RewardModel); // Function RewardThumbnail.RewardThumbnail_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnClicked__DelegateSignature(struct URewardModel* RewardModel); // Function RewardThumbnail.RewardThumbnail_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

