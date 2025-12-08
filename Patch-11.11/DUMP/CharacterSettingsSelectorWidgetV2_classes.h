// WidgetBlueprintGeneratedClass CharacterSettingsSelectorWidgetV2.CharacterSettingsSelectorWidgetV2_C
// Size: 0x3a0 (Inherited: 0x318)
struct UCharacterSettingsSelectorWidgetV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UButton* CancelCreatingProfileButton; // 0x320(0x08)
	struct UVerticalBox* CharactersList; // 0x328(0x08)
	struct UButton* CreateNewProfileButton; // 0x330(0x08)
	struct UWidgetSwitcher* CreateProfileSwitcher; // 0x338(0x08)
	struct UCharacterSettingsEntryWidget_C* DefaultSelection; // 0x340(0x08)
	struct UImage* Image_521; // 0x348(0x08)
	struct UImage* Image_522; // 0x350(0x08)
	struct UImage* Image_526; // 0x358(0x08)
	struct UScrollBox* ScrollBox_1; // 0x360(0x08)
	struct USearchBarWidget_C* SearchBarWidget; // 0x368(0x08)
	struct UTextBlock* TextBlock_545; // 0x370(0x08)
	struct FMulticastInlineDelegate OnCharacterSelected; // 0x378(0x10)
	struct UCharacterSettingsEntryWidget_C* CurrentlySelectedEntry; // 0x388(0x08)
	bool bInCreateMode; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct UControlsSettings_C* ControlsPage; // 0x398(0x08)

	void OnCharacterProfileClicked(struct UCharacterSettingsProfileEntryWidget_C* CharacterProfile); // Function CharacterSettingsSelectorWidgetV2.CharacterSettingsSelectorWidgetV2_C.OnCharacterProfileClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateConflictStateForProfile(struct UCharacterSettingsProfileEntryWidget_C* ProfileWidget); // Function CharacterSettingsSelectorWidgetV2.CharacterSettingsSelectorWidgetV2_C.UpdateConflictStateForProfile // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DoesCharacterHaveConflictsFiltered(struct FName Character, bool& bHasConflicts); // Function CharacterSettingsSelectorWidgetV2.CharacterSettingsSelectorWidgetV2_C.DoesCharacterHaveConflictsFiltered // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void OnSearchCleared(struct UCharacterSettingsProfileEntryWidget_C* Profile); // Function CharacterSettingsSelectorWidgetV2.CharacterSettingsSelectorWidgetV2_C.OnSearchCleared // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSearch(bool bIsHit, struct UCharacterSettingsProfileEntryWidget_C* HitProfile); // Function CharacterSettingsSelectorWidgetV2.CharacterSettingsSelectorWidgetV2_C.OnSearch // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDeleteProfileClicked(struct UCharacterSettingsProfileEntryWidget_C* DeletedProfile); // Function CharacterSettingsSelectorWidgetV2.CharacterSettingsSelectorWidgetV2_C.OnDeleteProfileClicked // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAddProfileClicked(struct UCharacterSettingsProfileEntryWidget_C* AddedProfile); // Function CharacterSettingsSelectorWidgetV2.CharacterSettingsSelectorWidgetV2_C.OnAddProfileClicked // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCreateModeActive(bool bIsCreateModeActive); // Function CharacterSettingsSelectorWidgetV2.CharacterSettingsSelectorWidgetV2_C.SetCreateModeActive // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SelectCharacter(struct FName CharacterName); // Function CharacterSettingsSelectorWidgetV2.CharacterSettingsSelectorWidgetV2_C.SelectCharacter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetSelectedCharacter(struct UCharacterHandle*& SelectedCharacter); // Function CharacterSettingsSelectorWidgetV2.CharacterSettingsSelectorWidgetV2_C.GetSelectedCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void AddCharacterWidget(struct UCharacterHandle* Character, struct UCharacterSettingsProfileEntryWidget_C*& AddedWidget); // Function CharacterSettingsSelectorWidgetV2.CharacterSettingsSelectorWidgetV2_C.AddCharacterWidget // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCharacterEntryClicked(struct UCharacterSettingsEntryWidget_C* CharacterEntry); // Function CharacterSettingsSelectorWidgetV2.CharacterSettingsSelectorWidgetV2_C.OnCharacterEntryClicked // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SortCharacters(struct UObject* A, struct UObject* B, bool& A<B); // Function CharacterSettingsSelectorWidgetV2.CharacterSettingsSelectorWidgetV2_C.SortCharacters // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Initialize(struct UControlsSettings_C* ControlsPage); // Function CharacterSettingsSelectorWidgetV2.CharacterSettingsSelectorWidgetV2_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCharactersLoaded(struct FCharacterHandles& CharacterHandles); // Function CharacterSettingsSelectorWidgetV2.CharacterSettingsSelectorWidgetV2_C.OnCharactersLoaded // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function CharacterSettingsSelectorWidgetV2.CharacterSettingsSelectorWidgetV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnConflictStatesUpdated(); // Function CharacterSettingsSelectorWidgetV2.CharacterSettingsSelectorWidgetV2_C.OnConflictStatesUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__CreateNewProfileButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature(); // Function CharacterSettingsSelectorWidgetV2.CharacterSettingsSelectorWidgetV2_C.BndEvt__CreateNewProfileButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__CancelCreatingProfileButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature(); // Function CharacterSettingsSelectorWidgetV2.CharacterSettingsSelectorWidgetV2_C.BndEvt__CancelCreatingProfileButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function CharacterSettingsSelectorWidgetV2.CharacterSettingsSelectorWidgetV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_CharacterSettingsSelectorWidgetV2(int32_t EntryPoint); // Function CharacterSettingsSelectorWidgetV2.CharacterSettingsSelectorWidgetV2_C.ExecuteUbergraph_CharacterSettingsSelectorWidgetV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnCharacterSelected__DelegateSignature(struct UCharacterHandle* CharacterHandle); // Function CharacterSettingsSelectorWidgetV2.CharacterSettingsSelectorWidgetV2_C.OnCharacterSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

