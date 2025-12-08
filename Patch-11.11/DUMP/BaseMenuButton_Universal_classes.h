// WidgetBlueprintGeneratedClass BaseMenuButton_Universal.BaseMenuButton_Universal_C
// Size: 0x5ca (Inherited: 0x370)
struct UBaseMenuButton_Universal_C : UAresUniversalButtonWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x370(0x08)
	struct FText Text; // 0x378(0x18)
	bool ShowText; // 0x390(0x01)
	bool bShowLeftIcon; // 0x391(0x01)
	char pad_392[0x6]; // 0x392(0x06)
	struct UTexture2D* LeftIconTexture; // 0x398(0x08)
	struct UImage* LeftIcon; // 0x3a0(0x08)
	struct FVector2D LeftIconSize; // 0x3a8(0x10)
	struct FMargin LeftIconPadding; // 0x3b8(0x10)
	bool bShowRightIcon; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct UTexture2D* RightIconTexture; // 0x3d0(0x08)
	struct UImage* RightIcon; // 0x3d8(0x08)
	struct UAkAudioEvent* AUD_OnClick; // 0x3e0(0x08)
	struct UAresTextBlock* ButtonText; // 0x3e8(0x08)
	struct FAresFontStyle FontStyleOverride; // 0x3f0(0x68)
	enum class E_MenuButtonStyles ButtonStyle; // 0x458(0x01)
	char pad_459[0x7]; // 0x459(0x07)
	struct UBorder* Border_BG; // 0x460(0x08)
	struct UBorder* Border_Outline; // 0x468(0x08)
	struct TArray<struct FName> StyleNames; // 0x470(0x10)
	struct TMap<enum class E_MenuButtonStyles, struct UMenuButtonStyle_C*> ButtonStyles; // 0x480(0x50)
	struct UMenuButtonStyle_C* ButtonStyling; // 0x4d0(0x08)
	struct FVector2D RightIconSize; // 0x4d8(0x10)
	struct FMargin RightIconPadding; // 0x4e8(0x10)
	struct UScaleBox* TextScaleBox; // 0x4f8(0x08)
	struct UMaterialInstanceDynamic* BorderOutline; // 0x500(0x08)
	struct USizeBox* ButtSizeBox; // 0x508(0x08)
	struct TMap<enum class E_MenuButtonSizes, struct UMenuButtonSize_C*> ButtonSizes; // 0x510(0x50)
	enum class E_MenuButtonSizes ButtonSize; // 0x560(0x01)
	char pad_561[0x7]; // 0x561(0x07)
	struct UMenuButtonSize_C* UpdatedButtonSize; // 0x568(0x08)
	enum class E_UIPlatform ButtonPlatform; // 0x570(0x01)
	char pad_571[0x7]; // 0x571(0x07)
	double ButtonHeightSize; // 0x578(0x08)
	double ButtonWidthSize; // 0x580(0x08)
	bool bButtonSizeOverride; // 0x588(0x01)
	char pad_589[0x7]; // 0x589(0x07)
	double OverrideButtonWidth; // 0x590(0x08)
	double OverrideButtonHeight; // 0x598(0x08)
	bool IsInPressedState; // 0x5a0(0x01)
	bool IsInHoverState; // 0x5a1(0x01)
	char pad_5A2[0x6]; // 0x5a2(0x06)
	struct UAkAudioEvent* AUD_OnButtonEntered; // 0x5a8(0x08)
	struct UAkAudioEvent* AUD_OnButtonExited; // 0x5b0(0x08)
	bool IsInSelectedState; // 0x5b8(0x01)
	char pad_5B9[0x7]; // 0x5b9(0x07)
	struct UMenuButtonStyleRules_Base_C* MenuButtonStyleRules; // 0x5c0(0x08)
	enum class EAresButtonInteractionState DesignerPreviewState; // 0x5c8(0x01)
	bool DesignerPreviewIsSelected; // 0x5c9(0x01)

	void Get Expressed IsSelected(bool& IsSelected); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.Get Expressed IsSelected // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetExpressedAppearance(struct FMenuButtonStateAppearance& Button Appearance, bool& Is Valid); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.GetExpressedAppearance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetIsSelected(bool InIsSelected); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.SetIsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get Expressed State(enum class EAresButtonInteractionState& Expressed State); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.Get Expressed State // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void UpdateButtonFontStyle(); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.UpdateButtonFontStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Cache Button Style Data(); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.Cache Button Style Data // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateButtonSize(); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.UpdateButtonSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyButtonAppearance(struct FMenuButtonStateAppearance Appearance); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.ApplyButtonAppearance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateIconDisplay(bool Enabled, struct UImage* IconImage, struct UTexture2D* IconTexture, struct FVector2D IconSize, struct FMargin IconPadding); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.UpdateIconDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GenerateMenuButtonStyles(); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.GenerateMenuButtonStyles // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateButtonText(struct FText ButtonText); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.UpdateButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void HandleButtonPressed(); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.HandleButtonPressed // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void HandleButtonReleased(); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.HandleButtonReleased // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void HandleButtonExited(); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.HandleButtonExited // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void HandleEnabledChanged(bool bNowEnabled); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.HandleEnabledChanged // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void HandleButtonEntered(); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.HandleButtonEntered // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void Apply Appearance For Current State(); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.Apply Appearance For Current State // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Start Press Anim(); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.Start Press Anim // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Start Release Anim(); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.Start Release Anim // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Start Enter Anim(); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.Start Enter Anim // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Start Exit Anim(); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.Start Exit Anim // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Start Disable Anim(); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.Start Disable Anim // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Start Enable Anim(); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.Start Enable Anim // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StartSelectedAnim(); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.StartSelectedAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StartDeselectedAnim(); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.StartDeselectedAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_BaseMenuButton_Universal(int32_t EntryPoint); // Function BaseMenuButton_Universal.BaseMenuButton_Universal_C.ExecuteUbergraph_BaseMenuButton_Universal // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

