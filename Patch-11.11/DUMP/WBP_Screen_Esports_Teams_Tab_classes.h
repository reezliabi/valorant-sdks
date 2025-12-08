// WidgetBlueprintGeneratedClass WBP_Screen_Esports_Teams_Tab.WBP_Screen_Esports_Teams_Tab_C
// Size: 0x6e8 (Inherited: 0x550)
struct UWBP_Screen_Esports_Teams_Tab_C : UEsportsScreenBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetAnimation* Pressed; // 0x558(0x08)
	struct UWidgetAnimation* hover; // 0x560(0x08)
	struct UImage* Border_2; // 0x568(0x08)
	struct UEsportsHubSafeArea* EsportsHubSafeArea; // 0x570(0x08)
	struct UImage* Focus; // 0x578(0x08)
	struct UImage* Image_2; // 0x580(0x08)
	struct UImage* Image_3; // 0x588(0x08)
	struct UImage* Image_4; // 0x590(0x08)
	struct UImage* Image_6; // 0x598(0x08)
	struct UImage* Image_7; // 0x5a0(0x08)
	struct UImage* Image_8; // 0x5a8(0x08)
	struct UImage* Image_9; // 0x5b0(0x08)
	struct UImage* Image_84; // 0x5b8(0x08)
	struct UImage* Image_121; // 0x5c0(0x08)
	struct UImage* Image_123; // 0x5c8(0x08)
	struct UOverlay* LandingPage; // 0x5d0(0x08)
	struct UWBP_Panel_Teams_Upcoming_Matches_C* Panel_Upcoming_Matches; // 0x5d8(0x08)
	struct UImage* RedL1; // 0x5e0(0x08)
	struct UImage* RedL1_2; // 0x5e8(0x08)
	struct UImage* RedL1_5; // 0x5f0(0x08)
	struct UImage* RedL1_6; // 0x5f8(0x08)
	struct UImage* RedL1_7; // 0x600(0x08)
	struct UImage* RedL1_8; // 0x608(0x08)
	struct UImage* RedL2; // 0x610(0x08)
	struct UImage* RedL2_2; // 0x618(0x08)
	struct UImage* RedL2_5; // 0x620(0x08)
	struct UImage* RedL2_6; // 0x628(0x08)
	struct UImage* RedL2_7; // 0x630(0x08)
	struct UImage* RedL2_8; // 0x638(0x08)
	struct USpacer* RightPanelSpaceHolder; // 0x640(0x08)
	struct USizeBox* SB_RightSidePanel; // 0x648(0x08)
	struct USizeBox* SizeBox_TeamsRightPanel; // 0x650(0x08)
	struct USizeBox* StoreVCTLinkoutContainer; // 0x658(0x08)
	struct USizeBox* TeamCapsuleLinkoutContainer; // 0x660(0x08)
	struct USizeBox* TeamInfoContainer; // 0x668(0x08)
	struct UWBP_Panel_Teams_Region_Dropdown_List_C* TeamsRegionDropdownList; // 0x670(0x08)
	struct UVerticalBox* VB_LandingPage; // 0x678(0x08)
	struct UVerticalBox* VB_TeamsTabRightSidepanel; // 0x680(0x08)
	struct UVerticalBox* VB_TeamsTabRightSidepanel_2; // 0x688(0x08)
	struct UTelemetryButton* VCTStoreLinkoutTelemetryButton; // 0x690(0x08)
	struct UWBP_Panel_Teams_Info_Section_C* Panel_TeamInfoSection; // 0x698(0x08)
	struct UWBP_Panel_Teams_Store_Linkout_C* Panel_TeamCapsuleStoreLinkout; // 0x6a0(0x08)
	bool StoreEnabled; // 0x6a8(0x01)
	char pad_6A9[0x7]; // 0x6a9(0x07)
	struct FText Teams Tab Name; // 0x6b0(0x18)
	bool ShowLandingPageLinkout; // 0x6c8(0x01)
	char pad_6C9[0x7]; // 0x6c9(0x07)
	struct FText EsportsTabName; // 0x6d0(0x18)

	void InitTeamCapsuleLinkoutPanelV2(struct FString SelectedTeamID); // Function WBP_Screen_Esports_Teams_Tab.WBP_Screen_Esports_Teams_Tab_C.InitTeamCapsuleLinkoutPanelV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitTeamInfoSectionPanelV2(struct FString SelectedTeamID); // Function WBP_Screen_Esports_Teams_Tab.WBP_Screen_Esports_Teams_Tab_C.InitTeamInfoSectionPanelV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplayInfoOnTeamSelectedV2(struct FString SelectedTeamID); // Function WBP_Screen_Esports_Teams_Tab.WBP_Screen_Esports_Teams_Tab_C.DisplayInfoOnTeamSelectedV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplayTeamsLandingPage(); // Function WBP_Screen_Esports_Teams_Tab.WBP_Screen_Esports_Teams_Tab_C.DisplayTeamsLandingPage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BrowseToEsportsStoreTab(struct UTabbedContent_C* StoreTabbedContent); // Function WBP_Screen_Esports_Teams_Tab.WBP_Screen_Esports_Teams_Tab_C.BrowseToEsportsStoreTab // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleReturnToTeamsTab(struct UWBP_Screen_Esports_Teams_Tab_C* TeamsTabContent, struct FString SelectedTeamName, enum class EVCTRegion SelectedTeamVCTRegion); // Function WBP_Screen_Esports_Teams_Tab.WBP_Screen_Esports_Teams_Tab_C.HandleReturnToTeamsTab // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitTeamInfoSectionPanel(struct UTeamModel* SelectedTeam); // Function WBP_Screen_Esports_Teams_Tab.WBP_Screen_Esports_Teams_Tab_C.InitTeamInfoSectionPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitTeamCapsuleLinkoutPanel(struct UTeamModel* SelectedTeam); // Function WBP_Screen_Esports_Teams_Tab.WBP_Screen_Esports_Teams_Tab_C.InitTeamCapsuleLinkoutPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplayInfoOnTeamSelected(struct UTeamModel* SelectedTeam); // Function WBP_Screen_Esports_Teams_Tab.WBP_Screen_Esports_Teams_Tab_C.DisplayInfoOnTeamSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitInfoSectionWithTeamModel(struct UTeamModel* TeamToDisplay); // Function WBP_Screen_Esports_Teams_Tab.WBP_Screen_Esports_Teams_Tab_C.InitInfoSectionWithTeamModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Screen_Esports_Teams_Tab.WBP_Screen_Esports_Teams_Tab_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_Esports_Teams_Tab_VCTStoreLinkoutTelemetryButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Screen_Esports_Teams_Tab.WBP_Screen_Esports_Teams_Tab_C.BndEvt__WBP_Screen_Esports_Teams_Tab_VCTStoreLinkoutTelemetryButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_Esports_Teams_Tab_VCTStoreLinkoutTelemetryButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature(); // Function WBP_Screen_Esports_Teams_Tab.WBP_Screen_Esports_Teams_Tab_C.BndEvt__WBP_Screen_Esports_Teams_Tab_VCTStoreLinkoutTelemetryButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_Esports_Teams_Tab_VCTStoreLinkoutTelemetryButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Screen_Esports_Teams_Tab.WBP_Screen_Esports_Teams_Tab_C.BndEvt__WBP_Screen_Esports_Teams_Tab_VCTStoreLinkoutTelemetryButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Screen_Esports_Teams_Tab_VCTStoreLinkoutTelemetryButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Screen_Esports_Teams_Tab.WBP_Screen_Esports_Teams_Tab_C.BndEvt__WBP_Screen_Esports_Teams_Tab_VCTStoreLinkoutTelemetryButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Screen_Esports_Teams_Tab.WBP_Screen_Esports_Teams_Tab_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnScreenReady(); // Function WBP_Screen_Esports_Teams_Tab.WBP_Screen_Esports_Teams_Tab_C.OnScreenReady // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Screen_Esports_Teams_Tab(int32_t EntryPoint); // Function WBP_Screen_Esports_Teams_Tab.WBP_Screen_Esports_Teams_Tab_C.ExecuteUbergraph_WBP_Screen_Esports_Teams_Tab // (Final|UbergraphFunction) // @ game+0x19be2f0
};

