// BlueprintGeneratedClass VM_CharacterInfoPanel.VM_CharacterInfoPanel_C
// Size: 0x130 (Inherited: 0x90)
struct UVM_CharacterInfoPanel_C : UAresViewModelBase {
	struct UPregameViewController* PregameViewController; // 0x90(0x08)
	struct UPregamePlayerModel* LocalPlayer; // 0x98(0x08)
	struct UCharacterDataAsset* Character; // 0xa0(0x08)
	struct UCharacterHandle* CharacterHandle; // 0xa8(0x08)
	struct FMulticastInlineDelegate OnSelectedAbilityChanged; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnNameAndRoleChanged; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnAbilityIconsChanged; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnVisibilityChanged; // 0xe0(0x10)
	struct FMulticastInlineDelegate OnModeSpecificTabChanged; // 0xf0(0x10)
	bool SpawnedModeSpecificTab; // 0x100(0x01)
	bool DebugForceSpawnModeTestTab; // 0x101(0x01)
	char pad_102[0x6]; // 0x102(0x06)
	struct FMulticastInlineDelegate OnTabsChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnAbilityIconsChanged2; // 0x118(0x10)
	struct UTexture* ModeIconTexture; // 0x128(0x08)

	void GetOrderedAbilityButtonData(struct TArray<struct FStruct_AgentSelect_AbilityButtonData>& AbilityButtonDataArray); // Function VM_CharacterInfoPanel.VM_CharacterInfoPanel_C.GetOrderedAbilityButtonData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakeNavButtonDetails(bool IncludeModeDetails, struct TArray<struct FRGICommonNavBarDetails>& ButtonDetails); // Function VM_CharacterInfoPanel.VM_CharacterInfoPanel_C.MakeNavButtonDetails // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakeButtonDetail(enum class Enum_CharacterPreviewType PreviewType, enum class ECharacterAbilitySlot AbilitySlot, bool UseSmallWidgets, struct FRGICommonNavBarDetails& ButtonDetails, struct FText& ButtonDetails_Text, struct UTexture2D*& ButtonDetails_Icon, struct UAresCommonButton*& ButtonDetails_ButtonClass, struct FWildcard& ButtonDetails_Data); // Function VM_CharacterInfoPanel.VM_CharacterInfoPanel_C.MakeButtonDetail // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetInitialSelectedAbility(); // Function VM_CharacterInfoPanel.VM_CharacterInfoPanel_C.SetInitialSelectedAbility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SpawnTabs(); // Function VM_CharacterInfoPanel.VM_CharacterInfoPanel_C.SpawnTabs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAbilityClicked(enum class ECharacterAbilitySlot AbilitySlot, enum class Enum_CharacterPreviewType PreviewType); // Function VM_CharacterInfoPanel.VM_CharacterInfoPanel_C.UpdateAbilityClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetAbilityDataFromSlot(enum class ECharacterAbilitySlot AbilitySlot, struct UCharacterAbilityUIData*& AbilityData); // Function VM_CharacterInfoPanel.VM_CharacterInfoPanel_C.GetAbilityDataFromSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetAbilityIcons(); // Function VM_CharacterInfoPanel.VM_CharacterInfoPanel_C.SetAbilityIcons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetSelectedAbility(enum class ECharacterAbilitySlot AbilitySlot, enum class Enum_CharacterPreviewType PreviewType); // Function VM_CharacterInfoPanel.VM_CharacterInfoPanel_C.SetSelectedAbility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetDisplayCharacterRole(struct FText& DisplayRole); // Function VM_CharacterInfoPanel.VM_CharacterInfoPanel_C.GetDisplayCharacterRole // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetNameAndRole(struct UCharacterUIData* CharacterUIData, struct UCharacterRoleUIData* RoleUIData); // Function VM_CharacterInfoPanel.VM_CharacterInfoPanel_C.SetNameAndRole // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCharacterHandle(struct UCharacterHandle* Handle); // Function VM_CharacterInfoPanel.VM_CharacterInfoPanel_C.UpdateCharacterHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void LoadCharacterHandle(struct UCharacterDataAsset* Character); // Function VM_CharacterInfoPanel.VM_CharacterInfoPanel_C.LoadCharacterHandle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCharacter(struct UCharacterDataAsset* Character); // Function VM_CharacterInfoPanel.VM_CharacterInfoPanel_C.UpdateCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleLocalPlayerChanged(struct UPregamePlayerModel* Player); // Function VM_CharacterInfoPanel.VM_CharacterInfoPanel_C.HandleLocalPlayerChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Initialize(struct UPregameViewController* PregameViewController); // Function VM_CharacterInfoPanel.VM_CharacterInfoPanel_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAbilityIconsChanged2__DelegateSignature(struct TMap<struct FStruct_AgentSelect_AbilityButtonData, struct UTexture*> NewIcons); // Function VM_CharacterInfoPanel.VM_CharacterInfoPanel_C.OnAbilityIconsChanged2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTabsChanged__DelegateSignature(bool SpawnModeTab, struct UUserWidget* ModeTabWidget, struct UTexture* ModeIcon); // Function VM_CharacterInfoPanel.VM_CharacterInfoPanel_C.OnTabsChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnModeSpecificTabChanged__DelegateSignature(struct UUserWidget* DetailsTabWidget, struct FText IconPromptText, struct UTexture* Icon); // Function VM_CharacterInfoPanel.VM_CharacterInfoPanel_C.OnModeSpecificTabChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnVisibilityChanged__DelegateSignature(enum class ESlateVisibility Visibility); // Function VM_CharacterInfoPanel.VM_CharacterInfoPanel_C.OnVisibilityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAbilityIconsChanged__DelegateSignature(struct UTexture* Ability1Icon, struct UTexture* Ability2Icon, struct UTexture* GrenadeAbilityIcon, struct UTexture* UltimateAbilityIcon, struct UTexture* InfoDescriptionIcon); // Function VM_CharacterInfoPanel.VM_CharacterInfoPanel_C.OnAbilityIconsChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnNameAndRoleChanged__DelegateSignature(struct UCharacterUIData* CharacterUIData, struct UCharacterRoleUIData* RoleUIData); // Function VM_CharacterInfoPanel.VM_CharacterInfoPanel_C.OnNameAndRoleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSelectedAbilityChanged__DelegateSignature(struct FText DisplayName, struct FText Description, enum class ECharacterAbilitySlot AbilitySlot, enum class Enum_CharacterPreviewType PreviewType, struct FText CharacterDescription, struct UCharacterUIData* CharacterUIData); // Function VM_CharacterInfoPanel.VM_CharacterInfoPanel_C.OnSelectedAbilityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

