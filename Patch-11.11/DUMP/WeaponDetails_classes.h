// WidgetBlueprintGeneratedClass WeaponDetails.WeaponDetails_C
// Size: 0x420 (Inherited: 0x318)
struct UWeaponDetails_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BackgroundGradient_Bot; // 0x320(0x08)
	struct UImage* BackgroundGradient_Top; // 0x328(0x08)
	struct UImage* Image_315; // 0x330(0x08)
	struct ULargeModal_C* LargeModal; // 0x338(0x08)
	struct UMenuOrnament_C* MenuOrnament; // 0x340(0x08)
	struct UModelViewerPanel_C* ModelViewerPanel; // 0x348(0x08)
	struct UOverlay* Overlay_63; // 0x350(0x08)
	struct UTabbedContent_C* TabbedContent; // 0x358(0x08)
	struct UTierIcon_C* TierIcon; // 0x360(0x08)
	struct UArsenalViewController* ArsenalViewController; // 0x368(0x08)
	struct UBuddiesTab_C* BuddiesTab; // 0x370(0x08)
	struct UEquippableSkinChromaHandle* CurrentChroma; // 0x378(0x08)
	struct UEquippableCharmHandle* CurrentBuddy; // 0x380(0x08)
	double CurrentOpacity; // 0x388(0x08)
	struct UEquippableSkinHandle* CurrentSkin; // 0x390(0x08)
	struct UEquippableHandle* EquippableHandle; // 0x398(0x08)
	bool FocusGunbuddy; // 0x3a0(0x01)
	bool ModelViewerPressed; // 0x3a1(0x01)
	char pad_3A2[0x6]; // 0x3a2(0x06)
	struct UAkAudioEvent* AUD_Model_Viewer_Pressed; // 0x3a8(0x08)
	struct UAresAudioComponent* NewVar_1; // 0x3b0(0x08)
	struct UAresAudioComponent* NewVar_3; // 0x3b8(0x08)
	int32_t Level; // 0x3c0(0x04)
	char pad_3C4[0x4]; // 0x3c4(0x04)
	struct FEquippableSkinHandles SkinHandles; // 0x3c8(0x50)
	struct USkinsTab_C* SkinsTab; // 0x418(0x08)

	bool IsWidgetActive(); // Function WeaponDetails.WeaponDetails_C.IsWidgetActive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	struct FAresMainMenuNavBarData GetNavBarData(); // Function WeaponDetails.WeaponDetails_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	bool HandleBackRequest(); // Function WeaponDetails.WeaponDetails_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsMelee(bool& IsMelee); // Function WeaponDetails.WeaponDetails_C.IsMelee // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateBuddyModelViewer(struct UEquippableSkinHandle* EquippableSkinHandle); // Function WeaponDetails.WeaponDetails_C.UpdateBuddyModelViewer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateBuddyPreview(); // Function WeaponDetails.WeaponDetails_C.UpdateBuddyPreview // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetCurrentlyEquippedSkin(struct UEquippableSkinHandle*& EquippedSkin); // Function WeaponDetails.WeaponDetails_C.GetCurrentlyEquippedSkin // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleTabContentFilterApplied(bool IsOwnedOnlyFilterEnabled, bool HasMatchingContent); // Function WeaponDetails.WeaponDetails_C.HandleTabContentFilterApplied // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSkinsTabLevelUnlocked(struct UEquippableHandle* Equippable, struct UEquippableSkinHandle* Skin, struct UEquippableSkinChromaHandle* Chroma, int32_t Level); // Function WeaponDetails.WeaponDetails_C.HandleSkinsTabLevelUnlocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitTabTelemetry(); // Function WeaponDetails.WeaponDetails_C.InitTabTelemetry // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FilterTabs(); // Function WeaponDetails.WeaponDetails_C.FilterTabs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitCurrentBuddy(); // Function WeaponDetails.WeaponDetails_C.InitCurrentBuddy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleBuddiesTabSelectionUpdated(struct UEquippableCharmHandle* Buddy); // Function WeaponDetails.WeaponDetails_C.HandleBuddiesTabSelectionUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSkinTabSelectionUpdated(struct UEquippableHandle* Equippable, struct UEquippableSkinHandle* Skin, struct UEquippableSkinChromaHandle* Chroma, int32_t Level); // Function WeaponDetails.WeaponDetails_C.HandleSkinTabSelectionUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitTabs(bool Reinit Selection); // Function WeaponDetails.WeaponDetails_C.InitTabs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippableSkinHandlesLoaded(struct FEquippableSkinHandles& EquippableSkinHandles); // Function WeaponDetails.WeaponDetails_C.OnEquippableSkinHandlesLoaded // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEquippableHandleLoaded(struct UEquippableHandle* Handle); // Function WeaponDetails.WeaponDetails_C.OnEquippableHandleLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Model Viewer(struct UEquippableSkinHandle* Equippable Skin Handle); // Function WeaponDetails.WeaponDetails_C.Update Model Viewer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePreview(); // Function WeaponDetails.WeaponDetails_C.UpdatePreview // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init(struct UArsenalViewController* ArsenalViewController); // Function WeaponDetails.WeaponDetails_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetEquippable(struct UEquippableDataAsset* Equippable); // Function WeaponDetails.WeaponDetails_C.SetEquippable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnStackDeactivation(); // Function WeaponDetails.WeaponDetails_C.OnStackDeactivation // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WeaponDetails.WeaponDetails_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WeaponDetails.WeaponDetails_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void HandleTabChanged(struct UTabButtonBase_C* TabButton); // Function WeaponDetails.WeaponDetails_C.HandleTabChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Model Viewer Pressed(); // Function WeaponDetails.WeaponDetails_C.Model Viewer Pressed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Model Viewer Released(); // Function WeaponDetails.WeaponDetails_C.Model Viewer Released // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WeaponDetails.WeaponDetails_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WeaponDetails.WeaponDetails_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnStackActivation(); // Function WeaponDetails.WeaponDetails_C.OnStackActivation // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WeaponDetails(int32_t EntryPoint); // Function WeaponDetails.WeaponDetails_C.ExecuteUbergraph_WeaponDetails // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

