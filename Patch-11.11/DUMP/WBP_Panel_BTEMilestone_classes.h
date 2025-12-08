// WidgetBlueprintGeneratedClass WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C
// Size: 0x1c40 (Inherited: 0x1ae0)
struct UWBP_Panel_BTEMilestone_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* AnimRelease; // 0x1ae8(0x08)
	struct UWidgetAnimation* AnimPress; // 0x1af0(0x08)
	struct UWidgetAnimation* Press_All; // 0x1af8(0x08)
	struct UWidgetAnimation* Unfocus_Material; // 0x1b00(0x08)
	struct UWidgetAnimation* Focus_Material; // 0x1b08(0x08)
	struct UOverlay* ActiveMilestone; // 0x1b10(0x08)
	struct UImage* AgentBackground; // 0x1b18(0x08)
	struct UImage* GrayedOut_2; // 0x1b20(0x08)
	struct UImage* Icon; // 0x1b28(0x08)
	struct UImage* Image_144; // 0x1b30(0x08)
	struct UImage* IMG_BorderForAnim; // 0x1b38(0x08)
	struct UAresCommonText* LockedExplanationText; // 0x1b40(0x08)
	struct UAresCommonText* MilestoneTitle; // 0x1b48(0x08)
	struct USizeBox* MissionsSizeBox; // 0x1b50(0x08)
	struct UWBP_MenuButtonPrimary_C* PCNavigationButton; // 0x1b58(0x08)
	struct UWBP_List_Base_C* WBP_List_Base; // 0x1b60(0x08)
	struct UWBP_Panel_Missions_BTE_C* WBP_Panel_Missions_BTE; // 0x1b68(0x08)
	struct UVM_BTEMilestone_C* BTE Milestone VM; // 0x1b70(0x08)
	struct FString Link; // 0x1b78(0x10)
	struct UVM_RewardList_C* RewardsVM; // 0x1b88(0x08)
	struct FGuid MilestoneID; // 0x1b90(0x10)
	enum class BTEMilestoneState DesignViewState; // 0x1ba0(0x01)
	char pad_1BA1[0x7]; // 0x1ba1(0x07)
	struct UTexture2D* AgentTexture; // 0x1ba8(0x08)
	struct FAresConditionalInputAction ViewRewardsAction; // 0x1bb0(0x28)
	struct FAresConditionalInputAction NavigateAction; // 0x1bd8(0x28)
	struct UTexture2D* GrayscaleAgentTexture; // 0x1c00(0x08)
	double Anim_MarginCut; // 0x1c08(0x08)
	struct FAresConditionalInputAction NavigateToLobbyAction; // 0x1c10(0x28)
	double Set_DisabledDarken; // 0x1c38(0x08)

	void DESIGNTIMEChangeState(enum class BTEMilestoneState NewState); // Function WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C.DESIGNTIMEChangeState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FText GetConditionalInputActionName(struct FAresConditionalInputAction Action); // Function WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C.GetConditionalInputActionName // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateHoverAnimation(bool bHover); // Function WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C.UpdateHoverAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Earnable Rewards List Changed(struct TArray<struct UBTEEarnableItem*>& EarnableRewards); // Function WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C.Handle Earnable Rewards List Changed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleButtonTextChanged(struct FText ButtonText); // Function WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C.HandleButtonTextChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle Link Changed(struct FString Link); // Function WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C.Handle Link Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Handle State Changed(enum class BTEMilestoneState State); // Function WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C.Handle State Changed // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleTitleChanged(struct FText Title); // Function WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C.HandleTitleChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetViewModel(struct UVM_BTEMilestone_C* BTEMilestoneVM); // Function WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C.SetViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindEvents(bool Bind); // Function WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitViewModels(); // Function WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnHovered(); // Function WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnUnhovered(); // Function WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void NavigateToRewards(struct FName ActionName); // Function WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C.NavigateToRewards // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_BTEMilestone_PCNavigationButton_K2Node_ComponentBoundEvent_0_OnUniversalButtonVoidEvent__DelegateSignature(); // Function WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C.BndEvt__WBP_Panel_BTEMilestone_PCNavigationButton_K2Node_ComponentBoundEvent_0_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_BTEMilestone_WBP_List_Base_K2Node_ComponentBoundEvent_3_OnEntryObjectAndWidgetChanged__DelegateSignature(struct UObject* EntryObject, struct UUserWidget* EntryWidget); // Function WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C.BndEvt__WBP_Panel_BTEMilestone_WBP_List_Base_K2Node_ComponentBoundEvent_3_OnEntryObjectAndWidgetChanged__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnEntryClicked(struct UObject* Item); // Function WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C.OnEntryClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void NavigateToLobby(struct FName ActionName); // Function WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C.NavigateToLobby // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnPressed(); // Function WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void BP_OnReleased(); // Function WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C.BP_OnReleased // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_BTEMilestone(int32_t EntryPoint); // Function WBP_Panel_BTEMilestone.WBP_Panel_BTEMilestone_C.ExecuteUbergraph_WBP_Panel_BTEMilestone // (Final|UbergraphFunction) // @ game+0x19be2f0
};

