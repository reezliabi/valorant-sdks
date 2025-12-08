// WidgetBlueprintGeneratedClass WBP_Panel_Teams_Store_Linkout.WBP_Panel_Teams_Store_Linkout_C
// Size: 0x50a (Inherited: 0x3e0)
struct UWBP_Panel_Teams_Store_Linkout_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* Pressed; // 0x3e8(0x08)
	struct UWidgetAnimation* hover; // 0x3f0(0x08)
	struct UAresCommonText* AresCommonText_6; // 0x3f8(0x08)
	struct UImage* Border_3; // 0x400(0x08)
	struct UAresCommonButtonText* CapsulePromoText; // 0x408(0x08)
	struct UImage* Focus; // 0x410(0x08)
	struct UImage* Image_bg; // 0x418(0x08)
	struct UOverlay* LLBracket_3; // 0x420(0x08)
	struct UOverlay* LLBracket_4; // 0x428(0x08)
	struct UImage* RedL1_3; // 0x430(0x08)
	struct UImage* RedL1_4; // 0x438(0x08)
	struct UImage* RedL2_3; // 0x440(0x08)
	struct UImage* RedL2_4; // 0x448(0x08)
	struct USpacer* Spacer_67; // 0x450(0x08)
	struct USpacer* Spacer_title; // 0x458(0x08)
	struct UTelemetryButton* StoreLinkoutTelemetryButton; // 0x460(0x08)
	struct UOverlay* StoreTeamCapsuleContainer; // 0x468(0x08)
	struct UImage* TeamCapsuleImage; // 0x470(0x08)
	struct UWBP_Button_Teams_Store_Linkout_C* WBP_Button_Teams_Store_Linkout; // 0x478(0x08)
	struct UEsportsTeamViewModel* TeamViewModel; // 0x480(0x08)
	struct UBundleViewModel* TeamCapsuleBundleViewModel; // 0x488(0x08)
	int32_t EsportsStorefrontTabIndex; // 0x490(0x04)
	char pad_494[0x4]; // 0x494(0x04)
	struct FMulticastInlineDelegate OnReturnFromCapsule; // 0x498(0x10)
	struct UTeamModel* CurrentTeamModel; // 0x4a8(0x08)
	struct FText TeamsTabName; // 0x4b0(0x18)
	struct FString CurrentTeamName; // 0x4c8(0x10)
	enum class EVCTRegion CurrentTeamRegion; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	struct UMenuStackEntry* TeamBundleMenuEntry; // 0x4e0(0x08)
	struct FText EsportsTabName; // 0x4e8(0x18)
	struct UEsportsTeamViewModelV2* TeamViewModelV2; // 0x500(0x08)
	bool IsConvergenceStyling; // 0x508(0x01)
	bool UseTeamBundleDataAssetIDs; // 0x509(0x01)

	void SetStyleForConvergence(bool NewParam); // Function WBP_Panel_Teams_Store_Linkout.WBP_Panel_Teams_Store_Linkout_C.SetStyleForConvergence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitWithTeamV2(struct FString TeamID); // Function WBP_Panel_Teams_Store_Linkout.WBP_Panel_Teams_Store_Linkout_C.InitWithTeamV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEnterStoreViaTopNav(); // Function WBP_Panel_Teams_Store_Linkout.WBP_Panel_Teams_Store_Linkout_C.OnEnterStoreViaTopNav // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnVCTCapsuleClose(); // Function WBP_Panel_Teams_Store_Linkout.WBP_Panel_Teams_Store_Linkout_C.OnVCTCapsuleClose // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetPromoImage(struct UStorefrontItemHandle* StorefrontItemHandle); // Function WBP_Panel_Teams_Store_Linkout.WBP_Panel_Teams_Store_Linkout_C.SetPromoImage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplayTeamCapsuleBundleDetails(); // Function WBP_Panel_Teams_Store_Linkout.WBP_Panel_Teams_Store_Linkout_C.DisplayTeamCapsuleBundleDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BrowseToEsportsStoreTab(); // Function WBP_Panel_Teams_Store_Linkout.WBP_Panel_Teams_Store_Linkout_C.BrowseToEsportsStoreTab // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitWithTeamModel(struct UTeamModel* TeamModel); // Function WBP_Panel_Teams_Store_Linkout.WBP_Panel_Teams_Store_Linkout_C.InitWithTeamModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Team Bundle Data Asset ID Updated(struct FString NewBundleDataAssetID); // Function WBP_Panel_Teams_Store_Linkout.WBP_Panel_Teams_Store_Linkout_C.On Team Bundle Data Asset ID Updated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Team Bundle ID Updated(struct FString NewBundleID); // Function WBP_Panel_Teams_Store_Linkout.WBP_Panel_Teams_Store_Linkout_C.On Team Bundle ID Updated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindOrUnbindEvents(bool Bind); // Function WBP_Panel_Teams_Store_Linkout.WBP_Panel_Teams_Store_Linkout_C.BindOrUnbindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Panel_Teams_Store_Linkout.WBP_Panel_Teams_Store_Linkout_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Panel_Teams_Store_Linkout.WBP_Panel_Teams_Store_Linkout_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function WBP_Panel_Teams_Store_Linkout.WBP_Panel_Teams_Store_Linkout_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_Teams_Store_Linkout_TelemetryButton_171_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Panel_Teams_Store_Linkout.WBP_Panel_Teams_Store_Linkout_C.BndEvt__WBP_Panel_Teams_Store_Linkout_TelemetryButton_171_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_Teams_Store_Linkout_StoreLinkoutTelemetryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_Teams_Store_Linkout.WBP_Panel_Teams_Store_Linkout_C.BndEvt__WBP_Panel_Teams_Store_Linkout_StoreLinkoutTelemetryButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_Teams_Store_Linkout_StoreLinkoutTelemetryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_Teams_Store_Linkout.WBP_Panel_Teams_Store_Linkout_C.BndEvt__WBP_Panel_Teams_Store_Linkout_StoreLinkoutTelemetryButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_Teams_Store_Linkout_StoreLinkoutTelemetryButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function WBP_Panel_Teams_Store_Linkout.WBP_Panel_Teams_Store_Linkout_C.BndEvt__WBP_Panel_Teams_Store_Linkout_StoreLinkoutTelemetryButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_Teams_Store_Linkout_StoreLinkoutTelemetryButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function WBP_Panel_Teams_Store_Linkout.WBP_Panel_Teams_Store_Linkout_C.BndEvt__WBP_Panel_Teams_Store_Linkout_StoreLinkoutTelemetryButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_Teams_Store_Linkout_WBP_Button_Teams_Store_Linkout_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_Teams_Store_Linkout.WBP_Panel_Teams_Store_Linkout_C.BndEvt__WBP_Panel_Teams_Store_Linkout_WBP_Button_Teams_Store_Linkout_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_Teams_Store_Linkout(int32_t EntryPoint); // Function WBP_Panel_Teams_Store_Linkout.WBP_Panel_Teams_Store_Linkout_C.ExecuteUbergraph_WBP_Panel_Teams_Store_Linkout // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnReturnFromCapsule__DelegateSignature(struct UWBP_Screen_Esports_Teams_Tab_C* UpdatedTeamsTab, struct FString SelectedTeamName, enum class EVCTRegion SelectedTeamRegion); // Function WBP_Panel_Teams_Store_Linkout.WBP_Panel_Teams_Store_Linkout_C.OnReturnFromCapsule__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

