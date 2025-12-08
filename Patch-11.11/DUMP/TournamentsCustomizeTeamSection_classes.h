// WidgetBlueprintGeneratedClass TournamentsCustomizeTeamSection.TournamentsCustomizeTeamSection_C
// Size: 0x5c0 (Inherited: 0x318)
struct UTournamentsCustomizeTeamSection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* DecoLeft; // 0x320(0x08)
	struct UImage* DecoRight; // 0x328(0x08)
	struct UImage* FullScreenLoader; // 0x330(0x08)
	struct UImage* Gradient; // 0x338(0x08)
	struct UImage* Image_1; // 0x340(0x08)
	struct UImage* Image_2; // 0x348(0x08)
	struct UImage* Image_3; // 0x350(0x08)
	struct UImage* Image_4; // 0x358(0x08)
	struct UImage* Image_256; // 0x360(0x08)
	struct UButton* LeaveButton; // 0x368(0x08)
	struct UImage* Logo; // 0x370(0x08)
	struct UImage* Pattern; // 0x378(0x08)
	struct UImage* Pattern_2; // 0x380(0x08)
	struct UTextBlock* ServiceErrorText; // 0x388(0x08)
	struct UVerticalBox* TabButtons; // 0x390(0x08)
	struct UCanvasPanel* TabContentContainer; // 0x398(0x08)
	struct UTournamentsTeamCustomization_C* TeamCustomization; // 0x3a0(0x08)
	struct UTextBlock* Title; // 0x3a8(0x08)
	struct UImage* topornament; // 0x3b0(0x08)
	struct UImage* Triangle; // 0x3b8(0x08)
	struct UWBP_MenuButtonPrimary_C* WBP_MenuButtonPrimary; // 0x3c0(0x08)
	struct UTabButtonBase_C* TabButtonWidgetClass; // 0x3c8(0x08)
	struct TMap<struct UTabButtonBase_C*, struct FTabDefinition> TabButtonsToDefinitions; // 0x3d0(0x50)
	struct UTabButtonBase_C* ActiveTabButton; // 0x420(0x08)
	struct UUserWidget* ActiveTabContent; // 0x428(0x08)
	struct UPremierRosterViewController* Premier Roster View Controller; // 0x430(0x08)
	struct URosterModel* Roster Model; // 0x438(0x08)
	struct FGuid Current Icon; // 0x440(0x10)
	struct FLinearColor DefaultPrimaryColor; // 0x450(0x10)
	struct FLinearColor DefaultSecondaryColor; // 0x460(0x10)
	struct FLinearColor DefaultTertiaryColor; // 0x470(0x10)
	struct FLinearColor CurrentPrimaryColor; // 0x480(0x10)
	struct FLinearColor CurrentSecondaryColor; // 0x490(0x10)
	struct FLinearColor CurrentTertiaryColor; // 0x4a0(0x10)
	struct FText Icon Tab Display Text; // 0x4b0(0x18)
	struct UTournamentsCustomizeTeamTabButton_C* Icon Tab Button; // 0x4c8(0x08)
	struct TMap<struct FString, struct UTabButtonBase_C*> DisplayTextStringToTabButton; // 0x4d0(0x50)
	struct FGuid DefaultIcon; // 0x520(0x10)
	struct TMap<struct UTabButtonBase_C*, struct FString> TabButtonToColorLevel; // 0x530(0x50)
	struct FString PrimaryColorString; // 0x580(0x10)
	struct FString SecondaryColorString; // 0x590(0x10)
	struct FString TertiaryColorString; // 0x5a0(0x10)
	bool NewRoster; // 0x5b0(0x01)
	char pad_5B1[0x7]; // 0x5b1(0x07)
	struct UPremierRosterViewModel* Premier Roster Model; // 0x5b8(0x08)

	void Set Initial Customization(struct URosterModel* Roster Model); // Function TournamentsCustomizeTeamSection.TournamentsCustomizeTeamSection_C.Set Initial Customization // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init New Roster(); // Function TournamentsCustomizeTeamSection.TournamentsCustomizeTeamSection_C.Init New Roster // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Color Tab Button(struct UTabButtonBase_C* Tab Button, struct FLinearColor Current Color); // Function TournamentsCustomizeTeamSection.TournamentsCustomizeTeamSection_C.Set Color Tab Button // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Team Card Icon(struct UTexture* UpdatedTexture, struct FGuid IconUuid); // Function TournamentsCustomizeTeamSection.TournamentsCustomizeTeamSection_C.Update Team Card Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Team Card Color(struct FLinearColor Updated Color, struct FString Color Level); // Function TournamentsCustomizeTeamSection.TournamentsCustomizeTeamSection_C.Update Team Card Color // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Active Content(struct UUserWidget* Active Content, struct FString Tab Content Display Text, bool& Content Set); // Function TournamentsCustomizeTeamSection.TournamentsCustomizeTeamSection_C.Set Active Content // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Active Tab(struct UTabButtonBase_C* TabButton, struct UUserWidget*& TabContent); // Function TournamentsCustomizeTeamSection.TournamentsCustomizeTeamSection_C.Set Active Tab // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Tab Button Clicked(struct UTabButtonBase_C* TabButton); // Function TournamentsCustomizeTeamSection.TournamentsCustomizeTeamSection_C.Handle Tab Button Clicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Add Tab(struct FTabDefinition TabDefinition, struct UTabButtonBase_C*& TabButton); // Function TournamentsCustomizeTeamSection.TournamentsCustomizeTeamSection_C.Add Tab // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init(); // Function TournamentsCustomizeTeamSection.TournamentsCustomizeTeamSection_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__LeaveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function TournamentsCustomizeTeamSection.TournamentsCustomizeTeamSection_C.BndEvt__LeaveButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void Set New Roster Default Customization(); // Function TournamentsCustomizeTeamSection.TournamentsCustomizeTeamSection_C.Set New Roster Default Customization // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Default customization success(struct FPremierRosterCustomization& PremierRosterCustomization); // Function TournamentsCustomizeTeamSection.TournamentsCustomizeTeamSection_C.Default customization success // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Default customization error(); // Function TournamentsCustomizeTeamSection.TournamentsCustomizeTeamSection_C.Default customization error // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update customization success(struct FPremierRosterCustomization& PremierRosterCustomization); // Function TournamentsCustomizeTeamSection.TournamentsCustomizeTeamSection_C.Update customization success // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update customization error(); // Function TournamentsCustomizeTeamSection.TournamentsCustomizeTeamSection_C.Update customization error // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Customization(); // Function TournamentsCustomizeTeamSection.TournamentsCustomizeTeamSection_C.Update Customization // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__TournamentsCustomizeTeamSection_WBP_MenuButtonPrimary_K2Node_ComponentBoundEvent_2_OnUniversalButtonVoidEvent__DelegateSignature(); // Function TournamentsCustomizeTeamSection.TournamentsCustomizeTeamSection_C.BndEvt__TournamentsCustomizeTeamSection_WBP_MenuButtonPrimary_K2Node_ComponentBoundEvent_2_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_TournamentsCustomizeTeamSection(int32_t EntryPoint); // Function TournamentsCustomizeTeamSection.TournamentsCustomizeTeamSection_C.ExecuteUbergraph_TournamentsCustomizeTeamSection // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

