// WidgetBlueprintGeneratedClass WBP_SideScreen_VisibleInterventionStatus.WBP_SideScreen_VisibleInterventionStatus_C
// Size: 0x5e0 (Inherited: 0x520)
struct UWBP_SideScreen_VisibleInterventionStatus_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UBackgroundBlur* BackgroundBlur; // 0x528(0x08)
	struct UAresWidgetSwitcher* ContentSwitcher; // 0x530(0x08)
	struct UAresCommonRichText* ExplanationText_AtRiskBehaviors; // 0x538(0x08)
	struct UAresCommonRichText* ExplanationText_NoData; // 0x540(0x08)
	struct UImage* Gradient_Console; // 0x548(0x08)
	struct UWBP_Panel_List_VisibleIntervention_C* List_ActiveInterventions; // 0x550(0x08)
	struct UWBP_Panel_List_VisibleIntervention_C* List_AtRiskBehaviors; // 0x558(0x08)
	struct UAresInputSwitcher* MoreInfoInputSwitcher; // 0x560(0x08)
	struct UAresCommonRichText* MoreInfoLinks; // 0x568(0x08)
	struct UAresCommonRichText* MoreInfoLinks_Console; // 0x570(0x08)
	struct UWBP_Panel_VisibleInterventionStatus_QRCodes_C* QRCodesPanel; // 0x578(0x08)
	struct UWBP_Template_SideScreenContent_C* Template_SideScreenContent; // 0x580(0x08)
	struct UAresCommonText* Text_BehaviorTitle; // 0x588(0x08)
	struct UAresCommonRichText* Title_ActiveInterventions; // 0x590(0x08)
	struct UAresCommonRichText* Title_AtRiskBehaviors; // 0x598(0x08)
	struct FMulticastInlineDelegate OnBackAction; // 0x5a0(0x10)
	bool bShowActiveInterventionsDesignTime; // 0x5b0(0x01)
	bool bShowAtRiskBehaviorsDesignTime; // 0x5b1(0x01)
	char pad_5B2[0x6]; // 0x5b2(0x06)
	struct UVisibleInterventionListViewModel* VisibleInterventionListVM_Active; // 0x5b8(0x08)
	struct UVisibleInterventionListViewModel* VisibleInterventionListVM_AtRisk; // 0x5c0(0x08)
	struct FText Text_CN_MoreInfoLinks; // 0x5c8(0x18)

	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_SideScreen_VisibleInterventionStatus.WBP_SideScreen_VisibleInterventionStatus_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	bool BP_OnHandleBackAction(); // Function WBP_SideScreen_VisibleInterventionStatus.WBP_SideScreen_VisibleInterventionStatus_C.BP_OnHandleBackAction // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Input Action(struct FName ActionName); // Function WBP_SideScreen_VisibleInterventionStatus.WBP_SideScreen_VisibleInterventionStatus_C.Handle Input Action // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RegisterCallbacks(); // Function WBP_SideScreen_VisibleInterventionStatus.WBP_SideScreen_VisibleInterventionStatus_C.RegisterCallbacks // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleAtRiskInterventionsChanged(struct TArray<struct UVisibleInterventionListItem*>& ChangedInterventions); // Function WBP_SideScreen_VisibleInterventionStatus.WBP_SideScreen_VisibleInterventionStatus_C.HandleAtRiskInterventionsChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleActiveInterventionsChanged(struct TArray<struct UVisibleInterventionListItem*>& ChangedInterventions); // Function WBP_SideScreen_VisibleInterventionStatus.WBP_SideScreen_VisibleInterventionStatus_C.HandleActiveInterventionsChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindOrUnbindViewModel(bool DoBind); // Function WBP_SideScreen_VisibleInterventionStatus.WBP_SideScreen_VisibleInterventionStatus_C.BindOrUnbindViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init Interventions List VMs(); // Function WBP_SideScreen_VisibleInterventionStatus.WBP_SideScreen_VisibleInterventionStatus_C.Init Interventions List VMs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update No Data Appearance(); // Function WBP_SideScreen_VisibleInterventionStatus.WBP_SideScreen_VisibleInterventionStatus_C.Update No Data Appearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetAtRiskBehaviorsVisibility(bool bIsVisible); // Function WBP_SideScreen_VisibleInterventionStatus.WBP_SideScreen_VisibleInterventionStatus_C.SetAtRiskBehaviorsVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetActiveInterventionsVisibility(bool bIsVisible); // Function WBP_SideScreen_VisibleInterventionStatus.WBP_SideScreen_VisibleInterventionStatus_C.SetActiveInterventionsVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateHeaderAppearance(); // Function WBP_SideScreen_VisibleInterventionStatus.WBP_SideScreen_VisibleInterventionStatus_C.UpdateHeaderAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_SideScreen_VisibleInterventionStatus.WBP_SideScreen_VisibleInterventionStatus_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnActivated(); // Function WBP_SideScreen_VisibleInterventionStatus.WBP_SideScreen_VisibleInterventionStatus_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_SideScreen_VisibleInterventionStatus.WBP_SideScreen_VisibleInterventionStatus_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function WBP_SideScreen_VisibleInterventionStatus.WBP_SideScreen_VisibleInterventionStatus_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_SideScreen_VisibleInterventionStatus.WBP_SideScreen_VisibleInterventionStatus_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_SideScreen_VisibleInterventionStatus.WBP_SideScreen_VisibleInterventionStatus_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_SideScreen_VisibleInterventionStatus(int32_t EntryPoint); // Function WBP_SideScreen_VisibleInterventionStatus.WBP_SideScreen_VisibleInterventionStatus_C.ExecuteUbergraph_WBP_SideScreen_VisibleInterventionStatus // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnBackAction__DelegateSignature(); // Function WBP_SideScreen_VisibleInterventionStatus.WBP_SideScreen_VisibleInterventionStatus_C.OnBackAction__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

