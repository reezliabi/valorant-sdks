// WidgetBlueprintGeneratedClass WBP_Panel_PriorityInterventionStatus.WBP_Panel_PriorityInterventionStatus_C
// Size: 0x4a8 (Inherited: 0x3e0)
struct UWBP_Panel_PriorityInterventionStatus_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct USocialExperienceOpenStateViewModel* SocialExperienceOpenStateViewModel; // 0x3e8(0x08)
	struct UPriorityVisibleInterventionViewModel* PriorityVisibleInterventionViewModel; // 0x3f0(0x08)
	struct UAresInputSwitcher* AresInputSwitcher_1; // 0x3f8(0x08)
	struct UAresCommonRichText* ExpiresIn_Console; // 0x400(0x08)
	struct UWBP_Button_Social_Intervention_C* PriorityInterventionButton; // 0x408(0x08)
	struct UVerticalBox* Timer_Console; // 0x410(0x08)
	struct UAresCommonRichText* Title_ActiveBehavior_Console; // 0x418(0x08)
	struct UAresCommonRichText* Title_AtRiskAlert; // 0x420(0x08)
	struct UAresCommonRichText* Title_AtRiskBehavior; // 0x428(0x08)
	struct UAresCommonRichText* Title_Restriction; // 0x430(0x08)
	struct UAresCommonRichText* Title_Restriction_Console; // 0x438(0x08)
	struct UWBP_Timer_Countdown_C* WBP_Timer_Countdown; // 0x440(0x08)
	struct UWBP_Timer_Countdown_C* WBP_Timer_Countdown_Console; // 0x448(0x08)
	enum class EInterventionType DesignTimeInterventionType; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	struct FText AtRiskAlertText; // 0x458(0x18)
	struct FText AtRiskAlertsText; // 0x470(0x18)
	int32_t ButtonWidth; // 0x488(0x04)
	int32_t ButtonHeight; // 0x48c(0x04)
	bool bIsInteractiveWhenSocialExperienceIsClosed; // 0x490(0x01)
	char pad_491[0x7]; // 0x491(0x07)
	struct FString ObservedPlayerSubject; // 0x498(0x10)

	void UpdateVisibilty(); // Function WBP_Panel_PriorityInterventionStatus.WBP_Panel_PriorityInterventionStatus_C.UpdateVisibilty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetObservedPlayer(struct FString PlayerSubject); // Function WBP_Panel_PriorityInterventionStatus.WBP_Panel_PriorityInterventionStatus_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSocialExperienceIsOpenChanged(bool bIsOpen); // Function WBP_Panel_PriorityInterventionStatus.WBP_Panel_PriorityInterventionStatus_C.HandleSocialExperienceIsOpenChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateInteractionAppearance(); // Function WBP_Panel_PriorityInterventionStatus.WBP_Panel_PriorityInterventionStatus_C.UpdateInteractionAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCountdownTimerExpired(); // Function WBP_Panel_PriorityInterventionStatus.WBP_Panel_PriorityInterventionStatus_C.HandleCountdownTimerExpired // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleAtRiskCountChanged(int32_t AtRiskCount); // Function WBP_Panel_PriorityInterventionStatus.WBP_Panel_PriorityInterventionStatus_C.HandleAtRiskCountChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Intervention Type(enum class EInterventionType InterventionType); // Function WBP_Panel_PriorityInterventionStatus.WBP_Panel_PriorityInterventionStatus_C.Set Intervention Type // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleBehaviorTitleChanged(struct FText BehaviorTitle); // Function WBP_Panel_PriorityInterventionStatus.WBP_Panel_PriorityInterventionStatus_C.HandleBehaviorTitleChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleInterventionExpiryChanged(struct FDateTime InterventionExpiry); // Function WBP_Panel_PriorityInterventionStatus.WBP_Panel_PriorityInterventionStatus_C.HandleInterventionExpiryChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleInterventionTitleChanged(struct FText InterventionTitle); // Function WBP_Panel_PriorityInterventionStatus.WBP_Panel_PriorityInterventionStatus_C.HandleInterventionTitleChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleInterventionsChanged(enum class EInterventionType InterventionType); // Function WBP_Panel_PriorityInterventionStatus.WBP_Panel_PriorityInterventionStatus_C.HandleInterventionsChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PriorityInterventionStatus.WBP_Panel_PriorityInterventionStatus_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function WBP_Panel_PriorityInterventionStatus.WBP_Panel_PriorityInterventionStatus_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_PriorityInterventionStatus_WBP_Timer_Countdown_K2Node_ComponentBoundEvent_3_OnTimerExpired__DelegateSignature(); // Function WBP_Panel_PriorityInterventionStatus.WBP_Panel_PriorityInterventionStatus_C.BndEvt__WBP_Panel_PriorityInterventionStatus_WBP_Timer_Countdown_K2Node_ComponentBoundEvent_3_OnTimerExpired__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_PriorityInterventionStatus_WBP_Button_Social_Intervention_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_PriorityInterventionStatus.WBP_Panel_PriorityInterventionStatus_C.BndEvt__WBP_Panel_PriorityInterventionStatus_WBP_Button_Social_Intervention_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_PriorityInterventionStatus_ActiveButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_PriorityInterventionStatus.WBP_Panel_PriorityInterventionStatus_C.BndEvt__WBP_Panel_PriorityInterventionStatus_ActiveButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_PriorityInterventionStatus_ActiveButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_PriorityInterventionStatus.WBP_Panel_PriorityInterventionStatus_C.BndEvt__WBP_Panel_PriorityInterventionStatus_ActiveButton_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_PriorityInterventionStatus_PriorityInterventionButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_PriorityInterventionStatus.WBP_Panel_PriorityInterventionStatus_C.BndEvt__WBP_Panel_PriorityInterventionStatus_PriorityInterventionButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_PriorityInterventionStatus_PriorityInterventionButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_PriorityInterventionStatus.WBP_Panel_PriorityInterventionStatus_C.BndEvt__WBP_Panel_PriorityInterventionStatus_PriorityInterventionButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_PriorityInterventionStatus_WBP_Timer_Countdown_Console_K2Node_ComponentBoundEvent_6_OnTimerExpired__DelegateSignature(); // Function WBP_Panel_PriorityInterventionStatus.WBP_Panel_PriorityInterventionStatus_C.BndEvt__WBP_Panel_PriorityInterventionStatus_WBP_Timer_Countdown_Console_K2Node_ComponentBoundEvent_6_OnTimerExpired__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_PriorityInterventionStatus(int32_t EntryPoint); // Function WBP_Panel_PriorityInterventionStatus.WBP_Panel_PriorityInterventionStatus_C.ExecuteUbergraph_WBP_Panel_PriorityInterventionStatus // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

