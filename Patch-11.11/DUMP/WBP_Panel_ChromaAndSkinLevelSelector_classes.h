// WidgetBlueprintGeneratedClass WBP_Panel_ChromaAndSkinLevelSelector.WBP_Panel_ChromaAndSkinLevelSelector_C
// Size: 0x488 (Inherited: 0x3e0)
struct UWBP_Panel_ChromaAndSkinLevelSelector_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresTextBlock* LevelsText; // 0x3e8(0x08)
	struct UAresCommonText* RadianiteInfoText; // 0x3f0(0x08)
	struct UAresTextBlock* VariantsText; // 0x3f8(0x08)
	struct UWBP_Panel_SkinLevelIndicator_C* WBP_Panel_SkinLevelIndicator; // 0x400(0x08)
	struct UWBP_Panel_SkinVideoPreviewButton_PC_C* WBP_Panel_SkinVideoPreviewButton_PC; // 0x408(0x08)
	struct UWBP_Panel_WeaponVariantList_C* WBP_Panel_WeaponVariantList; // 0x410(0x08)
	struct UEquippableSkinHandle* CurrentSkin; // 0x418(0x08)
	struct UEquippableSkinLevelHandle* CurrentSkinLevel; // 0x420(0x08)
	struct UEquippableSkinChromaHandle* CurrentChroma; // 0x428(0x08)
	bool ShowRadianiteInfoText; // 0x430(0x01)
	char pad_431[0x3]; // 0x431(0x03)
	int32_t CurrentSkinLevelIndex; // 0x434(0x04)
	struct FMulticastInlineDelegate OnSkinLevelIndexChanged; // 0x438(0x10)
	struct FMulticastInlineDelegate OnSkinLevelChanged; // 0x448(0x10)
	struct FMulticastInlineDelegate OnChromaChanged; // 0x458(0x10)
	struct FMulticastInlineDelegate OnSkinLevelOrChromaChanged; // 0x468(0x10)
	struct FMulticastInlineDelegate OnSkinPreviewPopupClosed; // 0x478(0x10)

	void HandleSkinPreviewPopupClosed(); // Function WBP_Panel_ChromaAndSkinLevelSelector.WBP_Panel_ChromaAndSkinLevelSelector_C.HandleSkinPreviewPopupClosed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetChromaForSkin(struct UEquippableSkinHandle* Skin, struct UEquippableSkinChromaHandle*& Chroma); // Function WBP_Panel_ChromaAndSkinLevelSelector.WBP_Panel_ChromaAndSkinLevelSelector_C.GetChromaForSkin // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetEquippedOrHighestUnlockedLevelForSkin(struct UEquippableSkinHandle* Skin, struct UEquippableSkinLevelHandle*& Skin Level); // Function WBP_Panel_ChromaAndSkinLevelSelector.WBP_Panel_ChromaAndSkinLevelSelector_C.GetEquippedOrHighestUnlockedLevelForSkin // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetHighestUnlockedSkinLevel(struct UEquippableSkinHandle* Skin, struct UEquippableSkinLevelHandle*& Level); // Function WBP_Panel_ChromaAndSkinLevelSelector.WBP_Panel_ChromaAndSkinLevelSelector_C.GetHighestUnlockedSkinLevel // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetLevelNumber(struct UEquippableSkinLevelHandle* Level, int32_t& LevelNumber); // Function WBP_Panel_ChromaAndSkinLevelSelector.WBP_Panel_ChromaAndSkinLevelSelector_C.GetLevelNumber // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetHighestLevelForSkin(struct UEquippableSkinHandle* Skin, struct UEquippableSkinLevelHandle*& Skin Level); // Function WBP_Panel_ChromaAndSkinLevelSelector.WBP_Panel_ChromaAndSkinLevelSelector_C.GetHighestLevelForSkin // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetHighestLevelHighlighted(bool IsHighlighted); // Function WBP_Panel_ChromaAndSkinLevelSelector.WBP_Panel_ChromaAndSkinLevelSelector_C.SetHighestLevelHighlighted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleChromaChanged(struct UEquippableSkinChromaHandle* SelectedChroma, int32_t LevelOverride, bool IsBaseChroma, struct UEquippableSkinLevelHandle* MaxEquippedOrUnlockedLevel); // Function WBP_Panel_ChromaAndSkinLevelSelector.WBP_Panel_ChromaAndSkinLevelSelector_C.HandleChromaChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSkinLevelChanged(struct UEquippableSkinHandle* Level Skin, int32_t NewSkinLevelIndex); // Function WBP_Panel_ChromaAndSkinLevelSelector.WBP_Panel_ChromaAndSkinLevelSelector_C.HandleSkinLevelChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateWeaponVariantListSelection(struct UEquippableSkinChromaHandle* NewChroma); // Function WBP_Panel_ChromaAndSkinLevelSelector.WBP_Panel_ChromaAndSkinLevelSelector_C.UpdateWeaponVariantListSelection // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitViewModels(); // Function WBP_Panel_ChromaAndSkinLevelSelector.WBP_Panel_ChromaAndSkinLevelSelector_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindEvents(bool Bind); // Function WBP_Panel_ChromaAndSkinLevelSelector.WBP_Panel_ChromaAndSkinLevelSelector_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateWidgetVisibility(struct UEquippableSkinHandle* SkinHandle); // Function WBP_Panel_ChromaAndSkinLevelSelector.WBP_Panel_ChromaAndSkinLevelSelector_C.UpdateWidgetVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSkinHandle(struct UEquippableSkinHandle* NewSkin); // Function WBP_Panel_ChromaAndSkinLevelSelector.WBP_Panel_ChromaAndSkinLevelSelector_C.SetSkinHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Panel_ChromaAndSkinLevelSelector.WBP_Panel_ChromaAndSkinLevelSelector_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_ChromaAndSkinLevelSelector.WBP_Panel_ChromaAndSkinLevelSelector_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Panel_ChromaAndSkinLevelSelector.WBP_Panel_ChromaAndSkinLevelSelector_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_ChromaAndSkinLevelSelector(int32_t EntryPoint); // Function WBP_Panel_ChromaAndSkinLevelSelector.WBP_Panel_ChromaAndSkinLevelSelector_C.ExecuteUbergraph_WBP_Panel_ChromaAndSkinLevelSelector // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnSkinPreviewPopupClosed__DelegateSignature(); // Function WBP_Panel_ChromaAndSkinLevelSelector.WBP_Panel_ChromaAndSkinLevelSelector_C.OnSkinPreviewPopupClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSkinLevelOrChromaChanged__DelegateSignature(struct UEquippableSkinChromaHandle* NewChroma, struct UEquippableSkinLevelHandle* NewSkinLevel, int32_t NewSkinLevelIndex); // Function WBP_Panel_ChromaAndSkinLevelSelector.WBP_Panel_ChromaAndSkinLevelSelector_C.OnSkinLevelOrChromaChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnChromaChanged__DelegateSignature(struct UEquippableSkinChromaHandle* NewChroma); // Function WBP_Panel_ChromaAndSkinLevelSelector.WBP_Panel_ChromaAndSkinLevelSelector_C.OnChromaChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSkinLevelChanged__DelegateSignature(struct UEquippableSkinLevelHandle* NewSkinLevel); // Function WBP_Panel_ChromaAndSkinLevelSelector.WBP_Panel_ChromaAndSkinLevelSelector_C.OnSkinLevelChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSkinLevelIndexChanged__DelegateSignature(int32_t NewSkinLevelIndex); // Function WBP_Panel_ChromaAndSkinLevelSelector.WBP_Panel_ChromaAndSkinLevelSelector_C.OnSkinLevelIndexChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

