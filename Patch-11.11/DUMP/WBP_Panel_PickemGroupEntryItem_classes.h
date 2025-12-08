// WidgetBlueprintGeneratedClass WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C
// Size: 0x508 (Inherited: 0x3e0)
struct UWBP_Panel_PickemGroupEntryItem_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* Anim_ShowTeam; // 0x3e8(0x08)
	struct UBorder* Border_RankOrdinal; // 0x3f0(0x08)
	struct UHorizontalBox* HorizontalBox_SecondaryTeam; // 0x3f8(0x08)
	struct UImage* Image_DropdownArrow; // 0x400(0x08)
	struct UImage* Image_NoTeamLogo; // 0x408(0x08)
	struct UImage* Image_PrimaryTeamLogo; // 0x410(0x08)
	struct UImage* Image_YourPickIcon; // 0x418(0x08)
	struct UAresMenuAnchor* MenuAnchor_Dropdown; // 0x420(0x08)
	struct USizeBox* SizeBox_DropdownArrow; // 0x428(0x08)
	struct UAresCommonText* Text_PrimaryTeamName; // 0x430(0x08)
	struct UAresCommonText* Text_RankOrdinal; // 0x438(0x08)
	struct UAresCommonText* Text_SecondaryTeamName; // 0x440(0x08)
	struct UWBP_Button_Esports_PickemGroupEntry_C* WBP_Button_Esports_PickemGroupEntry; // 0x448(0x08)
	struct UWBP_Panel_PickemAwardedPointsDisplay_C* WBP_Panel_PickemAwardedPointsDisplay; // 0x450(0x08)
	struct UWBP_Panel_PickemResultBadge_C* WBP_Panel_PickemResultBadge; // 0x458(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Details; // 0x460(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_TeamLogo; // 0x468(0x08)
	struct FText InvalidTeamCode; // 0x470(0x18)
	struct FString TournamentSlug; // 0x488(0x10)
	struct FString SectionID; // 0x498(0x10)
	int32_t EntryIndex; // 0x4a8(0x04)
	char pad_4AC[0x4]; // 0x4ac(0x04)
	struct UPickemGroupEntryItemViewModel* EntryItemViewModel; // 0x4b0(0x08)
	struct UPickemBlockStageViewModel* BlockStageViewModel; // 0x4b8(0x08)
	struct UPickemGroupAutosaveViewModel* GroupAutosaveViewModel; // 0x4c0(0x08)
	struct UEsportsTeamViewModel* PrimaryTeamViewModel; // 0x4c8(0x08)
	struct UEsportsTeamViewModel* SecondaryTeamViewModel; // 0x4d0(0x08)
	struct TArray<struct FText> OrdinalNumberStrings; // 0x4d8(0x10)
	struct FString tournamentid; // 0x4e8(0x10)
	struct UEsportsTeamViewModelV2* PrimaryTeamViewModelV2; // 0x4f8(0x08)
	struct UEsportsTeamViewModelV2* SecondaryTeamViewModelV2; // 0x500(0x08)

	void HandleSecondaryTeamCodeChangedV2(struct FString NewValue); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.HandleSecondaryTeamCodeChangedV2 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Primary Team Code Changed V2(struct FString NewValue); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.Handle Primary Team Code Changed V2 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleAutosaveStateChanged(enum class EEsportsPickemAutosaveState AutosaveState); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.HandleAutosaveStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePickemCurrentStageChanged(enum class EAresPickemStage PickemStage); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.HandlePickemCurrentStageChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateButtonVisibility(); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.UpdateButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSecondaryTeamVisibility(); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.UpdateSecondaryTeamVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTeamCodeText(struct UTextBlock* TextWidget, struct FText TeamCode, bool bPlayRevealAnimation); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.SetTeamCodeText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSecondaryTeamCodeChanged(struct FText& NewValue); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.HandleSecondaryTeamCodeChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePrimaryTeamLogoChanged(struct UTexture2D* NewValue); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.HandlePrimaryTeamLogoChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePrimaryTeamCodeChanged(struct FText& NewValue); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.HandlePrimaryTeamCodeChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Is Advancing Entry Changed(bool NewValue); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.Handle Is Advancing Entry Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateButtonAppearance(); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.UpdateButtonAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleRankOrdinalChanged(int32_t NewValue); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.HandleRankOrdinalChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleAwardedPointsChanged(int32_t NewValue); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.HandleAwardedPointsChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleResultTypeChanged(enum class EAresPickemResult& ResultType); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.HandleResultTypeChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateDetailsAppearance(); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.UpdateDetailsAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleTeamIDChanged(struct FString NewValue); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.HandleTeamIDChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindOrUnbindViewModels(bool bDoBind); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.BindOrUnbindViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateViewModels(); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.CreateViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Initialize(struct FString InTournamentSlug, struct FString InTournamentID, struct FString InSectionID, int32_t InEntryIndex); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UUserWidget* CreateMenuAnchorDropdown(); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.CreateMenuAnchorDropdown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_PickemGroupTeamItem_MenuAnchor_Dropdown_K2Node_ComponentBoundEvent_3_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.BndEvt__WBP_Panel_PickemGroupTeamItem_MenuAnchor_Dropdown_K2Node_ComponentBoundEvent_3_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_GroupsPickemPlacementItem_WBP_Button_Esports_GroupsPickemPlacement_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.BndEvt__WBP_Panel_GroupsPickemPlacementItem_WBP_Button_Esports_GroupsPickemPlacement_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void HandleDropdownInteractionCompleted(); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.HandleDropdownInteractionCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_PickemGroupEntryItem(int32_t EntryPoint); // Function WBP_Panel_PickemGroupEntryItem.WBP_Panel_PickemGroupEntryItem_C.ExecuteUbergraph_WBP_Panel_PickemGroupEntryItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

