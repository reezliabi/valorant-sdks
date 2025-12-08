// WidgetBlueprintGeneratedClass Reward.Reward_C
// Size: 0x3c8 (Inherited: 0x318)
struct UReward_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCanvasPanel* AgentContainer; // 0x320(0x08)
	struct UAgentGlitchPortrait_C* AgentGlitchPortrait; // 0x328(0x08)
	struct UImage* CurrencyImage; // 0x330(0x08)
	struct UScaleBox* CurrencyScaleBox; // 0x338(0x08)
	struct UModelViewerPanel_C* ModelViewerPanel; // 0x340(0x08)
	struct UPlayerCardPreview_C* PlayerCardPreview; // 0x348(0x08)
	struct USizeBox* PlayerCardSizeBox; // 0x350(0x08)
	struct UWidgetSwitcher* PreviewSwitcher; // 0x358(0x08)
	struct UTextBlock* RewardTextBlock; // 0x360(0x08)
	struct USprayPreview_C* SprayPreview; // 0x368(0x08)
	struct UEquippableDataAsset* BuddyGunClass; // 0x370(0x08)
	struct UEquippableHandle* BuddyGunHandle; // 0x378(0x08)
	struct FMulticastInlineDelegate OnRewardHandleLoaded; // 0x380(0x10)
	struct UAresBasePrimaryDataAsset* DataAsset; // 0x390(0x08)
	int32_t Amount; // 0x398(0x04)
	char pad_39C[0x4]; // 0x39c(0x04)
	struct UEquippableSkinChromaHandle* Current Chroma; // 0x3a0(0x08)
	struct UEquippableSkinHandle* Current Skin; // 0x3a8(0x08)
	struct URewardModel* RewardModel; // 0x3b0(0x08)
	int32_t CurrentLevel; // 0x3b8(0x04)
	bool ShouldLoadModelViewer; // 0x3bc(0x01)
	bool ShouldReloadBuddyGunHandle; // 0x3bd(0x01)
	char pad_3BE[0x2]; // 0x3be(0x02)
	int32_t DefaultRewardFontSize; // 0x3c0(0x04)
	int32_t XPRewardFontSize; // 0x3c4(0x04)

	void EnableModelViewerCamera(); // Function Reward.Reward_C.EnableModelViewerCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnContractLoadedForXPReward(struct UContractV2Handle* ContractV2Handle); // Function Reward.Reward_C.OnContractLoadedForXPReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Reward Preview Font Size(int32_t Size); // Function Reward.Reward_C.Set Reward Preview Font Size // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowContractXPReward(struct UContractDataAssetV2* DataAsset); // Function Reward.Reward_C.ShowContractXPReward // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Reset Buddy Gun Handle(); // Function Reward.Reward_C.Reset Buddy Gun Handle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OverrideSkinOnSkinLoaded(struct UEquippableSkinHandle* LevelHandle); // Function Reward.Reward_C.OverrideSkinOnSkinLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldSetReward(struct UAresBasePrimaryDataAsset* Data Asset Content, bool ForceRefresh, int32_t Amount, bool& Return Value); // Function Reward.Reward_C.ShouldSetReward // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRewardFromRewardModel(struct URewardModel* Content, int32_t InputAmount, bool ForceRefresh); // Function Reward.Reward_C.SetRewardFromRewardModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ForceRefreshReward(); // Function Reward.Reward_C.ForceRefreshReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OverrideSkin(int32_t LevelOverride, struct UEquippableSkinChromaHandle* ChromaOverride); // Function Reward.Reward_C.OverrideSkin // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisableModelViewerCamera(); // Function Reward.Reward_C.DisableModelViewerCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnJuiceContentLoaded(struct UEquippableSkinHandle* Handle); // Function Reward.Reward_C.OnJuiceContentLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetChromaForSkin(struct UEquippableSkinHandle* Skin, struct UEquippableSkinChromaHandle*& Chroma); // Function Reward.Reward_C.GetChromaForSkin // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void On Gun Buddy Equippable Loaded(struct UEquippableHandle* Equippable); // Function Reward.Reward_C.On Gun Buddy Equippable Loaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerTitleLoaded(struct UPlayerTitleHandle* PlayerTitle); // Function Reward.Reward_C.OnPlayerTitleLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowJuiceContent(struct UEquippableSkinDataAsset* Data Asset); // Function Reward.Reward_C.ShowJuiceContent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPlayerCardLoaded(struct UPlayerCardHandle* PlayerCardHandle); // Function Reward.Reward_C.OnPlayerCardLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowPlayerTitle(struct UPlayerTitleDataAsset* DataAsset); // Function Reward.Reward_C.ShowPlayerTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowPlayerCard(struct UPlayerCardDataAsset* DataAsset); // Function Reward.Reward_C.ShowPlayerCard // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnGunBuddyLevelLoaded(struct UEquippableCharmHandle* BuddyLevelHandle); // Function Reward.Reward_C.OnGunBuddyLevelLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowGunBuddyLevel(struct UEquippableCharmLevelDataAsset* DataAsset); // Function Reward.Reward_C.ShowGunBuddyLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCharacterLoaded(struct UCharacterHandle* CharacterHandle); // Function Reward.Reward_C.OnCharacterLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowCharacter(struct UCharacterDataAsset* DataAsset); // Function Reward.Reward_C.ShowCharacter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCurrencyLoaded(struct UCurrencyHandle* CurrencyHandle); // Function Reward.Reward_C.OnCurrencyLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippableSkinChromaLoaded(struct UEquippableSkinChromaHandle* Handle); // Function Reward.Reward_C.OnEquippableSkinChromaLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowEquippableSkinChroma(struct UEquippableSkinChromaDataAsset* DataAsset); // Function Reward.Reward_C.ShowEquippableSkinChroma // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippableSkinLevelLoaded(struct UEquippableSkinHandle* Handle); // Function Reward.Reward_C.OnEquippableSkinLevelLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTotemLoaded(struct UTotemHandle* Handle); // Function Reward.Reward_C.OnTotemLoaded // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowEquippableSkinLevel(struct UEquippableSkinLevelDataAsset* DataAsset); // Function Reward.Reward_C.ShowEquippableSkinLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowTotem(struct UTotemDataAsset* DataAsset); // Function Reward.Reward_C.ShowTotem // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSprayLoaded(struct USprayHandle* Handle); // Function Reward.Reward_C.OnSprayLoaded // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowSpray(struct USprayDataAsset* DataAsset); // Function Reward.Reward_C.ShowSpray // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowCurrency(struct UCurrencyDataAsset* DataAsset); // Function Reward.Reward_C.ShowCurrency // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippableSkinLoaded(struct UEquippableSkinHandle* Handle); // Function Reward.Reward_C.OnEquippableSkinLoaded // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowEquippableSkin(struct UEquippableSkinDataAsset* DataAsset); // Function Reward.Reward_C.ShowEquippableSkin // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetContent(struct UTexture* Image, struct FText Text); // Function Reward.Reward_C.SetContent // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetReward(struct UAresBasePrimaryDataAsset* Content, int32_t Amount, bool ForceRefresh); // Function Reward.Reward_C.SetReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function Reward.Reward_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Reward(int32_t EntryPoint); // Function Reward.Reward_C.ExecuteUbergraph_Reward // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnRewardHandleLoaded__DelegateSignature(struct UBaseHandle* RewardHandle, int32_t Amount); // Function Reward.Reward_C.OnRewardHandleLoaded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

