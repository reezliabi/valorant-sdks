// WidgetBlueprintGeneratedClass AgentStorefront.AgentStorefront_C
// Size: 0x668 (Inherited: 0x520)
struct UAgentStorefront_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UImage* AgentGradient; // 0x528(0x08)
	struct UScrollBox* AgentGridScrollBox; // 0x530(0x08)
	struct UUniformGridPanel* AgentOfferGrid; // 0x538(0x08)
	struct UWidgetSwitcher* AgentOffersSwitcher; // 0x540(0x08)
	struct UVerticalBox* AgentOverlay; // 0x548(0x08)
	struct UImage* Background; // 0x550(0x08)
	struct UHorizontalBox* DiamondDividerLine; // 0x558(0x08)
	struct UFeaturedAgent_C* FeaturedAgent; // 0x560(0x08)
	struct UAresTextBlock* FreeAgentTokenAmountText; // 0x568(0x08)
	struct UImage* Image_8; // 0x570(0x08)
	struct UImage* Image_9; // 0x578(0x08)
	struct UImage* Image_10; // 0x580(0x08)
	struct UImage* Image_11; // 0x588(0x08)
	struct UImage* Image_12; // 0x590(0x08)
	struct UImage* Image_13; // 0x598(0x08)
	struct UImage* Image_381; // 0x5a0(0x08)
	struct UImage* LeftPost_2; // 0x5a8(0x08)
	struct URichTextBlock* RichTextBlock; // 0x5b0(0x08)
	struct URichTextBlock* RichTextBlock_114; // 0x5b8(0x08)
	struct UImage* RightPost; // 0x5c0(0x08)
	struct UOverlay* ShowErrorOrDisabled; // 0x5c8(0x08)
	struct UOverlay* ShowOffers; // 0x5d0(0x08)
	struct UOverlay* ShowOwnAllAgentsText; // 0x5d8(0x08)
	struct USharedClickableCheckboxButton_C* ShowUnownedAgentsOnlyCheckbox; // 0x5e0(0x08)
	struct UHorizontalBox* ShowUnownedOnlyFilter; // 0x5e8(0x08)
	struct UOverlay* TokenCounterOverlay; // 0x5f0(0x08)
	struct FMargin GridPadding; // 0x5f8(0x10)
	int32_t AgentsPerColumn; // 0x608(0x04)
	char pad_60C[0x4]; // 0x60c(0x04)
	struct TArray<struct UBodegaOfferModel*> BodegaOffers; // 0x610(0x10)
	bool IsShowingOwnedAgents; // 0x620(0x01)
	char pad_621[0x3]; // 0x621(0x03)
	int32_t AgentsInGrid; // 0x624(0x04)
	bool EventBindings; // 0x628(0x01)
	char pad_629[0x3]; // 0x629(0x03)
	struct FGuid FeaturedAgentID; // 0x62c(0x10)
	char pad_63C[0x4]; // 0x63c(0x04)
	struct UMaterialInstanceDynamic* DMI_AgentGradient; // 0x640(0x08)
	struct FMulticastInlineDelegate UpdateGradientColors; // 0x648(0x10)
	struct FGuid NextFeaturedAgentID; // 0x658(0x10)

	void ResetFeaturedAgentBGGradient(); // Function AgentStorefront.AgentStorefront_C.ResetFeaturedAgentBGGradient // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetFeaturedAgentVisibility(bool bShouldShow); // Function AgentStorefront.AgentStorefront_C.SetFeaturedAgentVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBodegaDataDirtyChanged(bool IsBodegaDataDirty); // Function AgentStorefront.AgentStorefront_C.OnBodegaDataDirtyChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Bodega Model Updated(struct UBodegaModel* BodegaOfferModel); // Function AgentStorefront.AgentStorefront_C.On Bodega Model Updated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Show Error or Disabled State(); // Function AgentStorefront.AgentStorefront_C.Show Error or Disabled State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateFeaturedAgentBGGradient(struct UCharacterHandle* CharacterHandle); // Function AgentStorefront.AgentStorefront_C.UpdateFeaturedAgentBGGradient // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAgentTokens(); // Function AgentStorefront.AgentStorefront_C.UpdateAgentTokens // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddAgentToGrid(struct UBodegaOfferModel* BodegaOffer); // Function AgentStorefront.AgentStorefront_C.AddAgentToGrid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Is Agent Owned(struct UBodegaOfferModel* BodegaOffer, bool& IsOwned); // Function AgentStorefront.AgentStorefront_C.Is Agent Owned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleShowUnownedAgentsOnlyToggle(bool NewState); // Function AgentStorefront.AgentStorefront_C.HandleShowUnownedAgentsOnlyToggle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleUserScrolled(double CurrentOffset); // Function AgentStorefront.AgentStorefront_C.HandleUserScrolled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldShowAgentInGrid(struct UBodegaOfferModel* BodegaOffer, bool& ShouldShowInGrid); // Function AgentStorefront.AgentStorefront_C.ShouldShowAgentInGrid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PopulateAgentStore(); // Function AgentStorefront.AgentStorefront_C.PopulateAgentStore // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FetchIfDirty(); // Function AgentStorefront.AgentStorefront_C.FetchIfDirty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init(); // Function AgentStorefront.AgentStorefront_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAgentsOwnedSwitcher(bool ShowAgentGrid); // Function AgentStorefront.AgentStorefront_C.UpdateAgentsOwnedSwitcher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEntitlementUpdate(); // Function AgentStorefront.AgentStorefront_C.OnEntitlementUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitEntitlementListeners(struct UBodegaOfferModel* BodegaOfferModel); // Function AgentStorefront.AgentStorefront_C.InitEntitlementListeners // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function AgentStorefront.AgentStorefront_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function AgentStorefront.AgentStorefront_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnUserScrolled_Event(float CurrentOffset); // Function AgentStorefront.AgentStorefront_C.OnUserScrolled_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnShowUnownedAgentsOnlyChecked(bool NewState); // Function AgentStorefront.AgentStorefront_C.OnShowUnownedAgentsOnlyChecked // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnWalletUpdated(); // Function AgentStorefront.AgentStorefront_C.OnWalletUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnIsBodegaEnabledChangedEvent(); // Function AgentStorefront.AgentStorefront_C.OnIsBodegaEnabledChangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_AgentStorefront(int32_t EntryPoint); // Function AgentStorefront.AgentStorefront_C.ExecuteUbergraph_AgentStorefront // (Final|UbergraphFunction) // @ game+0x19be2f0
	void UpdateGradientColors__DelegateSignature(); // Function AgentStorefront.AgentStorefront_C.UpdateGradientColors__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

