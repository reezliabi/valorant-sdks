// WidgetBlueprintGeneratedClass WBP_Panel_OfferPreview.WBP_Panel_OfferPreview_C
// Size: 0x508 (Inherited: 0x3e0)
struct UWBP_Panel_OfferPreview_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWidgetAnimation* GenericPurchaseCelebration; // 0x3e8(0x08)
	struct UImage* LB; // 0x3f0(0x08)
	struct UImage* LB_2; // 0x3f8(0x08)
	struct UImage* LT; // 0x400(0x08)
	struct UImage* LT_2; // 0x408(0x08)
	struct UOverlay* OfferPreviewOverlay; // 0x410(0x08)
	struct UWidgetSwitcher* PreviewSwitcher; // 0x418(0x08)
	struct UImage* RB; // 0x420(0x08)
	struct UImage* RB_2; // 0x428(0x08)
	struct UImage* RT; // 0x430(0x08)
	struct UImage* RT_2; // 0x438(0x08)
	struct UWBP_View_RewardPreview_C* WBP_View_RewardPreview; // 0x440(0x08)
	struct TMap<struct UOfferDTO*, struct UAresCommonUserWidget*> OfferToPreviewWidget; // 0x448(0x50)
	struct UVM_StoreOffer_C* OfferViewModel; // 0x498(0x08)
	struct UImage* DefaultRewardIcon; // 0x4a0(0x08)
	enum class Enum_OfferPreview_DefaultBehavior OfferPreviewDefaultBehavior; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct UAresCommonUserWidget* CurrentPanelWidgetClass; // 0x4b0(0x08)
	struct UAresCommonUserWidget* CurrentOfferPreviewWidget; // 0x4b8(0x08)
	struct UAresCommonUserWidget* Design Preview Offer Widget; // 0x4c0(0x08)
	struct FMargin OfferPreviewPadding; // 0x4c8(0x10)
	struct FMulticastInlineDelegate OnCurrentOfferPreviewWidgetIsScrollableUpdated; // 0x4d8(0x10)
	bool bShowContentWallpaper; // 0x4e8(0x01)
	char pad_4E9[0x7]; // 0x4e9(0x07)
	struct UMaterialInstanceDynamic* CelebrationMaterialFront; // 0x4f0(0x08)
	struct UMaterialInstanceDynamic* CelebrationMaterial; // 0x4f8(0x08)
	struct UMaterialInstanceDynamic* BackgroundOverlayMaterial; // 0x500(0x08)

	void SequenceEvent__ENTRYPOINTWBP_Panel_OfferPreview_1(); // Function WBP_Panel_OfferPreview.WBP_Panel_OfferPreview_C.SequenceEvent__ENTRYPOINTWBP_Panel_OfferPreview_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent__ENTRYPOINTWBP_Panel_OfferPreview(); // Function WBP_Panel_OfferPreview.WBP_Panel_OfferPreview_C.SequenceEvent__ENTRYPOINTWBP_Panel_OfferPreview // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetMaterials(); // Function WBP_Panel_OfferPreview.WBP_Panel_OfferPreview_C.SetMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerAnimation(enum class EStoreAnimationType Animation Type, double Start at time, enum class EUMGSequencePlayMode Play Mode, struct TScriptInterface<IStoreOfferAnimationCaller> Animation Finish Callback); // Function WBP_Panel_OfferPreview.WBP_Panel_OfferPreview_C.TriggerAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CleanUpCurrentOfferPreviewWidget(); // Function WBP_Panel_OfferPreview.WBP_Panel_OfferPreview_C.CleanUpCurrentOfferPreviewWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Current Offer Preview Widget Is Scrollable Changed(bool IsScrollable); // Function WBP_Panel_OfferPreview.WBP_Panel_OfferPreview_C.Handle Current Offer Preview Widget Is Scrollable Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindToCurrentOfferPreviewWidget(bool Bind); // Function WBP_Panel_OfferPreview.WBP_Panel_OfferPreview_C.BindToCurrentOfferPreviewWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromHandle(struct UBaseHandle* InHandle); // Function WBP_Panel_OfferPreview.WBP_Panel_OfferPreview_C.InitFromHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromReward(struct URewardModel* InRewardModel); // Function WBP_Panel_OfferPreview.WBP_Panel_OfferPreview_C.InitFromReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindEvents(bool Bind); // Function WBP_Panel_OfferPreview.WBP_Panel_OfferPreview_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitViewModels(); // Function WBP_Panel_OfferPreview.WBP_Panel_OfferPreview_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Offer Preview Widget(struct UAresCommonUserWidget* PanelWidget, struct UOfferDTO* OfferDTO); // Function WBP_Panel_OfferPreview.WBP_Panel_OfferPreview_C.Set Offer Preview Widget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitFromOfferDTO(struct UOfferDTO* OfferDTO); // Function WBP_Panel_OfferPreview.WBP_Panel_OfferPreview_C.InitFromOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent(); // Function WBP_Panel_OfferPreview.WBP_Panel_OfferPreview_C.SequenceEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SequenceEvent_1(); // Function WBP_Panel_OfferPreview.WBP_Panel_OfferPreview_C.SequenceEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Panel_OfferPreview.WBP_Panel_OfferPreview_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Panel_OfferPreview.WBP_Panel_OfferPreview_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Panel_OfferPreview.WBP_Panel_OfferPreview_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_OfferPreview.WBP_Panel_OfferPreview_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_OfferPreview(int32_t EntryPoint); // Function WBP_Panel_OfferPreview.WBP_Panel_OfferPreview_C.ExecuteUbergraph_WBP_Panel_OfferPreview // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnCurrentOfferPreviewWidgetIsScrollableUpdated__DelegateSignature(bool IsScrollable); // Function WBP_Panel_OfferPreview.WBP_Panel_OfferPreview_C.OnCurrentOfferPreviewWidgetIsScrollableUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

