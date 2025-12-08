// WidgetBlueprintGeneratedClass AgentPurchaseButtons.AgentPurchaseButtons_C
// Size: 0x3f4 (Inherited: 0x318)
struct UAgentPurchaseButtons_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UHorizontalBox* AcknowledgementBox; // 0x320(0x08)
	struct USharedClickableCheckboxButton_C* AcknowledgementCheckbox; // 0x328(0x08)
	struct UWidgetSwitcher* AcknowledgementTextSwitcher; // 0x330(0x08)
	struct USharedButtonWithPopout_C* CurrencySelectDough; // 0x338(0x08)
	struct USharedButtonWithPopout_C* CurrencySelectToken; // 0x340(0x08)
	struct USharedButtonWithPopout_C* CurrencySelectVP; // 0x348(0x08)
	struct UHorizontalBox* DigitalGoodsDisclaimerBox; // 0x350(0x08)
	struct URichTextBlock* DigitalGoodsDisclaimerDescription; // 0x358(0x08)
	struct UWidgetSwitcher* DoughorTokenSwitcher; // 0x360(0x08)
	struct USharedButtonWithPopout_C* Purchase_SharedButtonWithPopout; // 0x368(0x08)
	struct UScaleBox* RefundMessage; // 0x370(0x08)
	struct URichTextBlock* RefundText; // 0x378(0x08)
	struct USharedHyperlinkButon_C* TermsAndConditionsLinkOut; // 0x380(0x08)
	struct UScaleBox* TermsAndConditionsMessage; // 0x388(0x08)
	struct URichTextBlock* TermsAndConditionsRead; // 0x390(0x08)
	struct UBodegaOfferModel* BodegaOffer; // 0x398(0x08)
	struct FMulticastInlineDelegate OnVPOfferClicked; // 0x3a0(0x10)
	struct FMulticastInlineDelegate OnDoughOfferClicked; // 0x3b0(0x10)
	struct FMulticastInlineDelegate OnTokenOfferClicked; // 0x3c0(0x10)
	struct UTexture2D* VP Icon Texture; // 0x3d0(0x08)
	enum class Enum_AgentPurchaseScenario Agent Purchase Scenario; // 0x3d8(0x01)
	char pad_3D9[0x3]; // 0x3d9(0x03)
	int32_t Extra Dough Needed; // 0x3dc(0x04)
	struct UWBP_MenuButtonPrimaryWithSubtitle_C* Purchase Button; // 0x3e0(0x08)
	struct UGenericProgressionTooltip_C* Purchase Button Popout; // 0x3e8(0x08)
	int32_t Extra VP Needed; // 0x3f0(0x04)

	void SetDigitalGoodsDisclaimerVisibility(); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.SetDigitalGoodsDisclaimerVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get Dough Popout(struct UGenericProgressionTooltip_C*& Popout); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.Get Dough Popout // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Get Token Popout(struct UGenericProgressionTooltip_C*& Popout); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.Get Token Popout // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Get Dough Button(struct UButtonWithClickableCheckbox_C*& Button); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.Get Dough Button // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Get Token Button(struct UButtonWithClickableCheckbox_C*& Button); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.Get Token Button // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Get VP Button(struct UButtonWithClickableCheckbox_C*& Button); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.Get VP Button // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Reset Purchase Button With Popout(); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.Reset Purchase Button With Popout // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Reset Acknowledgement Checkbox(); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.Reset Acknowledgement Checkbox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FGuid Get Checked Currency UUID Or Nil(); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.Get Checked Currency UUID Or Nil // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Handle Purchase Button Clicked(); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.Handle Purchase Button Clicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Purchase Button(bool Is Button Enabled, struct FGuid Currency Type); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.Update Purchase Button // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set VP Icon for Insufficient Funds(struct UCurrencyHandle* CurrencyHandle); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.Set VP Icon for Insufficient Funds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Reset Currency Selections(); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.Reset Currency Selections // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Acknowledgement Checkbox Clicked(bool NewState); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.On Acknowledgement Checkbox Clicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Dough Button with Popout(struct UStoreOffer* StoreOffer); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.Set Dough Button with Popout // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Token Button with Popout(struct UStoreOffer* StoreOffer); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.Set Token Button with Popout // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetState(); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.ResetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleWalletUpdate(); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.HandleWalletUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On VP Checkbox Changed(bool Updated VP Checkbox State); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.On VP Checkbox Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On KC Or Token Checkbox Changed(bool Updated KC or Token Checkbox State); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.On KC Or Token Checkbox Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Currency Selection Button(struct UWBP_MenuButtonPrimaryWithSubtitle_C* Button with Subtitle, struct UCurrencyHandle* CurrencyHandle, bool Enabled, bool LeftIcon, struct FVector2D IconSize); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.Update Currency Selection Button // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get Cost Type(struct UStoreOffer* StoreOffer, struct FGuid& CostType); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.Get Cost Type // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowVPPurchase(); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.ShowVPPurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set VP Button With Popout(struct UStoreOffer* StoreOffer); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.Set VP Button With Popout // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Initialize(struct UBodegaOfferModel* BodegaOffer); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDoughLoaded(struct UCurrencyHandle* CurrencyHandle); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.OnDoughLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTokenLoaded(struct UCurrencyHandle* CurrencyHandle); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.OnTokenLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void On Purchase Click(); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.On Purchase Click // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Checkbox Changed_VP(bool Checkbox State); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.On Checkbox Changed_VP // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Checkbox Changed_Token(bool Checkbox State); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.On Checkbox Changed_Token // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Checkbox Changed_Dough(bool Checkbox State); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.On Checkbox Changed_Dough // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnVPLoaded(struct UCurrencyHandle* CurrencyHandle); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.OnVPLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_AgentPurchaseButtons(int32_t EntryPoint); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.ExecuteUbergraph_AgentPurchaseButtons // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnTokenOfferClicked__DelegateSignature(); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.OnTokenOfferClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnDoughOfferClicked__DelegateSignature(); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.OnDoughOfferClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnVPOfferClicked__DelegateSignature(); // Function AgentPurchaseButtons.AgentPurchaseButtons_C.OnVPOfferClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

