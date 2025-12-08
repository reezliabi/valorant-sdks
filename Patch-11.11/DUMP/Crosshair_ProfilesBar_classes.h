// WidgetBlueprintGeneratedClass Crosshair_ProfilesBar.Crosshair_ProfilesBar_C
// Size: 0x408 (Inherited: 0x318)
struct UCrosshair_ProfilesBar_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Background; // 0x320(0x08)
	struct USharedTertiaryButtonText_C* CopyButton; // 0x328(0x08)
	struct UImage* CopyButtonDisableOverlay; // 0x330(0x08)
	struct UCrosshair_Profiles_ComboBox_C* Crosshair_Profiles_ComboBox; // 0x338(0x08)
	struct USharedTertiaryButtonText_C* DeleteButton; // 0x340(0x08)
	struct UImage* DeleteButtonDisabledOverlay; // 0x348(0x08)
	struct UTextBlock* DisplayNameText; // 0x350(0x08)
	struct USharedTertiaryButtonText_C* EditButton; // 0x358(0x08)
	struct USharedTertiaryButtonText_C* ExportButton; // 0x360(0x08)
	struct UCanvasPanel* ExportPanel; // 0x368(0x08)
	struct UImage* Image; // 0x370(0x08)
	struct USharedTertiaryButtonText_C* ImportButton; // 0x378(0x08)
	struct UOverlay* ImportButtonOverlay; // 0x380(0x08)
	struct UImage* ImportDisableOverlay; // 0x388(0x08)
	struct UEditableText* InputBox; // 0x390(0x08)
	struct UMenuAnchor* MenuAnchor_93; // 0x398(0x08)
	struct UWidget_UniversalChargeBar_Divider_C* Widget_UniversalChargeBar_Divider; // 0x3a0(0x08)
	bool Editting; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct FCrosshairProfileData CrosshairProfileData; // 0x3b0(0x18)
	struct UConfirmationModal_C* DeleteConfirmationModal; // 0x3c8(0x08)
	struct UConfirmationModal_C* DuplicateConfirmationModal; // 0x3d0(0x08)
	int32_t MaxProfileNameLength; // 0x3d8(0x04)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct UCrosshairCodeEntryModal_C* CrosshairCodeInputModal; // 0x3e0(0x08)
	struct USharedTertiaryButtonText_C* NewVar_1; // 0x3e8(0x08)
	struct UMenuStackEntry* InportModalStackEntry; // 0x3f0(0x08)
	struct TArray<struct FText> DefaultCrosshairProfileNames; // 0x3f8(0x10)

	void GetNextFreeCrosshairName(struct FString& OutCrosshairName); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.GetNextFreeCrosshairName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* OnGetMenuContent(); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.OnGetMenuContent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateImportButton(); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.UpdateImportButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateButtonsEnabled(); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.UpdateButtonsEnabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EnforceMaxNameLength(struct FString ProfileName, struct FString& OutProfileName); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.EnforceMaxNameLength // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OpenModalWidget(struct UConfirmationModal_C* modal); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.OpenModalWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CloseModalWidget(struct UConfirmationModal_C* modal); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.CloseModalWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetEditMode(bool Enable Edits); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.SetEditMode // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetComboBoxVisibility(enum class ESlateVisibility Visibility); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.SetComboBoxVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetInputBoxVisibility(enum class ESlateVisibility Visibility); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.SetInputBoxVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__DeleteButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature(struct USharedTertiaryButtonText_C* TextButton); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.BndEvt__DeleteButton_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__CopyButton_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature(struct USharedTertiaryButtonText_C* TextButton); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.BndEvt__CopyButton_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__EditButton_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature(struct USharedTertiaryButtonText_C* TextButton); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.BndEvt__EditButton_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__InputBox_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.BndEvt__InputBox_K2Node_ComponentBoundEvent_6_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void DeleteOnConfirmationPressed(); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.DeleteOnConfirmationPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DeleteOnCancelPressed(); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.DeleteOnCancelPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DuplicateOnConfirmationPressed(); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.DuplicateOnConfirmationPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DuplicateOnCancelPressed(); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.DuplicateOnCancelPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__InputBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.BndEvt__InputBox_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Crosshair_Profiles_ComboBox_K2Node_ComponentBoundEvent_4_OnCreateProfileSelected__DelegateSignature(); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.BndEvt__Crosshair_Profiles_ComboBox_K2Node_ComponentBoundEvent_4_OnCreateProfileSelected__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Crosshair_Profiles_ComboBox_K2Node_ComponentBoundEvent_8_OnSelectProfileSelected__DelegateSignature(int32_t Profile Index); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.BndEvt__Crosshair_Profiles_ComboBox_K2Node_ComponentBoundEvent_8_OnSelectProfileSelected__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ExportButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(struct USharedTertiaryButtonText_C* TextButton); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.BndEvt__ExportButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ImportButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature(struct USharedTertiaryButtonText_C* TextButton); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.BndEvt__ImportButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void CrosshairCodeModalComplete(); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.CrosshairCodeModalComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CloseExportPopup(); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.CloseExportPopup // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__ExportButton_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature(struct USharedTertiaryButtonText_C* TextButton); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.BndEvt__ExportButton_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnDismissed_Event_1(); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.OnDismissed_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Crosshair_ProfilesBar(int32_t EntryPoint); // Function Crosshair_ProfilesBar.Crosshair_ProfilesBar_C.ExecuteUbergraph_Crosshair_ProfilesBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

