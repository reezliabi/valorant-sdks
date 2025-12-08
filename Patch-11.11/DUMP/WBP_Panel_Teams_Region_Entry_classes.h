// WidgetBlueprintGeneratedClass WBP_Panel_Teams_Region_Entry.WBP_Panel_Teams_Region_Entry_C
// Size: 0x488 (Inherited: 0x3e0)
struct UWBP_Panel_Teams_Region_Entry_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* HideBG; // 0x3e8(0x08)
	struct UWidgetAnimation* ShowBG; // 0x3f0(0x08)
	struct UWidgetAnimation* textHover; // 0x3f8(0x08)
	struct UButton* But_RegionName; // 0x400(0x08)
	struct UImage* IMG_BG; // 0x408(0x08)
	struct UImage* IMG_ExpandArrow; // 0x410(0x08)
	struct UImage* IMG_isExpandedBG; // 0x418(0x08)
	struct UImage* IMG_isSelectedBG; // 0x420(0x08)
	struct UImage* RegionLogo; // 0x428(0x08)
	struct UAresCommonText* T_RegionName; // 0x430(0x08)
	struct UWBP_Panel_Teams_List_C* WBP_EsportsTeamList; // 0x438(0x08)
	bool IsExpanded; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct UEsports_VCTInfoSection_C* EsportsTeamInfoSection; // 0x448(0x08)
	bool IsEnterAnimPending; // 0x450(0x01)
	bool IsExitAnimPending; // 0x451(0x01)
	bool IsHighlighted; // 0x452(0x01)
	char pad_453[0x5]; // 0x453(0x05)
	struct FMulticastInlineDelegate RegionOnTeamEntrySelected; // 0x458(0x10)
	struct FMulticastInlineDelegate OnRegionEntrySelected; // 0x468(0x10)
	struct FMulticastInlineDelegate RegionOnTeamEntrySelectedV2; // 0x478(0x10)

	void SetRegionStyle(struct UTexture2D* Logo, struct FSlateColor Color); // Function WBP_Panel_Teams_Region_Entry.WBP_Panel_Teams_Region_Entry_C.SetRegionStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitTeamListV2(struct TArray<struct FString>& Team IDs, struct UEsportsTeamsByRegionDropdownViewModelV2*& TeamsByRegionDropdownViewModel); // Function WBP_Panel_Teams_Region_Entry.WBP_Panel_Teams_Region_Entry_C.InitTeamListV2 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleTeamSelected(struct UWBP_Panel_Teams_List_C* SelectedTeamList, struct FString NewSelectedTeamName); // Function WBP_Panel_Teams_Region_Entry.WBP_Panel_Teams_Region_Entry_C.HandleTeamSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearTeamSelection(); // Function WBP_Panel_Teams_Region_Entry.WBP_Panel_Teams_Region_Entry_C.ClearTeamSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetHighlightedState(bool SetIsHighlighted); // Function WBP_Panel_Teams_Region_Entry.WBP_Panel_Teams_Region_Entry_C.SetHighlightedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitTeamList(struct TArray<struct UTeamModel*>& Teams); // Function WBP_Panel_Teams_Region_Entry.WBP_Panel_Teams_Region_Entry_C.InitTeamList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRegionName(struct FText RegionName); // Function WBP_Panel_Teams_Region_Entry.WBP_Panel_Teams_Region_Entry_C.SetRegionName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetExpandedState(bool SetIsExpanded); // Function WBP_Panel_Teams_Region_Entry.WBP_Panel_Teams_Region_Entry_C.SetExpandedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Finished_CEE7DB78475FAAE291F6619AC0116922(); // Function WBP_Panel_Teams_Region_Entry.WBP_Panel_Teams_Region_Entry_C.Finished_CEE7DB78475FAAE291F6619AC0116922 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_Teams_Region_Entry.WBP_Panel_Teams_Region_Entry_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Panel_Teams_Region_Entry.WBP_Panel_Teams_Region_Entry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_esports_TeamListItem_Button_48_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_Teams_Region_Entry.WBP_Panel_Teams_Region_Entry_C.BndEvt__WBP_esports_TeamListItem_Button_48_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_esports_TeamListItem_But_TeamName_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_Teams_Region_Entry.WBP_Panel_Teams_Region_Entry_C.BndEvt__WBP_esports_TeamListItem_But_TeamName_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_esports_TeamListItem_But_TeamName_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Panel_Teams_Region_Entry.WBP_Panel_Teams_Region_Entry_C.BndEvt__WBP_esports_TeamListItem_But_TeamName_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Set Entry Selected(bool SkipAudio); // Function WBP_Panel_Teams_Region_Entry.WBP_Panel_Teams_Region_Entry_C.Set Entry Selected // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Team Selected V2(struct UWBP_Panel_Teams_List_C* SelectedTeamList, struct FString SelectedTeamID); // Function WBP_Panel_Teams_Region_Entry.WBP_Panel_Teams_Region_Entry_C.Handle Team Selected V2 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_Teams_Region_Entry(int32_t EntryPoint); // Function WBP_Panel_Teams_Region_Entry.WBP_Panel_Teams_Region_Entry_C.ExecuteUbergraph_WBP_Panel_Teams_Region_Entry // (Final|UbergraphFunction) // @ game+0x19be2f0
	void RegionOnTeamEntrySelectedV2__DelegateSignature(struct UWBP_Panel_Teams_Region_Entry_C* SelectedTeamRegion, struct FString SelectedTeamID); // Function WBP_Panel_Teams_Region_Entry.WBP_Panel_Teams_Region_Entry_C.RegionOnTeamEntrySelectedV2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRegionEntrySelected__DelegateSignature(struct UWBP_Panel_Teams_Region_Entry_C* RegionToExpandOrCollapse); // Function WBP_Panel_Teams_Region_Entry.WBP_Panel_Teams_Region_Entry_C.OnRegionEntrySelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RegionOnTeamEntrySelected__DelegateSignature(struct UWBP_Panel_Teams_Region_Entry_C* SelectedTeamRegion, struct FString SelectedTeamName); // Function WBP_Panel_Teams_Region_Entry.WBP_Panel_Teams_Region_Entry_C.RegionOnTeamEntrySelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

