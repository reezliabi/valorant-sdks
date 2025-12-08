// WidgetBlueprintGeneratedClass WBP_Panel_PickemPickBlock.WBP_Panel_PickemPickBlock_C
// Size: 0x520 (Inherited: 0x3e0)
struct UWBP_Panel_PickemPickBlock_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* BG; // 0x3e8(0x08)
	struct UWBP_Button_Primary_C* Button_OpenPickemScreen; // 0x3f0(0x08)
	struct UWBP_Timer_Countdown_C* CountdownTimer_StageEndTime; // 0x3f8(0x08)
	struct UAresCommonText* CT_PickWindowDateRange; // 0x400(0x08)
	struct UAresCommonText* CT_PickWindowN; // 0x408(0x08)
	struct UEsports_TabbedContentBtn_C* Esports_PickemsCardAnimation; // 0x410(0x08)
	struct UOverlay* FocusState; // 0x418(0x08)
	struct UHorizontalBox* HorizontalBox_PointsContainer; // 0x420(0x08)
	struct UHorizontalBox* HorizontalBox_TimeToNextStage; // 0x428(0x08)
	struct UButton* Hoverable_Button; // 0x430(0x08)
	struct USizeBox* SizeBox_ProgressBar; // 0x438(0x08)
	struct UAresWidgetSwitcher* Switcher_Content; // 0x440(0x08)
	struct UAresWidgetSwitcher* Switcher_TopLeft; // 0x448(0x08)
	struct UAresCommonText* Text_CountdownTitle; // 0x450(0x08)
	struct UAresCommonText* Text_DateRange; // 0x458(0x08)
	struct UAresCommonText* Text_Points; // 0x460(0x08)
	struct UAresCommonText* Text_PointsAmount; // 0x468(0x08)
	struct UAresCommonText* Text_StageName; // 0x470(0x08)
	struct UAresCommonText* Text_StageWindowName; // 0x478(0x08)
	struct UAresCommonText* UnregisteredHover_Text; // 0x480(0x08)
	struct UWBP_Panel_PickemPickBlockStateIndicator_C* WBP_Panel_PickemPickBlockStateIndicator; // 0x488(0x08)
	struct UWBP_Panel_PickemProgressBar_Simple_C* WBP_Panel_PickemProgressBar_Simple; // 0x490(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_TimeDetails; // 0x498(0x08)
	struct UPickemBlockStageViewModel* PickemStageViewModel; // 0x4a0(0x08)
	struct UPickemPickBlockViewModel* PickemPickBlockViewModel; // 0x4a8(0x08)
	struct UPickemBlockModel* PickemBlockModel; // 0x4b0(0x08)
	struct FString TournamentSlug; // 0x4b8(0x10)
	enum class EPickemBlockSlug PickemBlock; // 0x4c8(0x01)
	char pad_4C9[0x3]; // 0x4c9(0x03)
	struct FSlateColor StandardTitleColor; // 0x4cc(0x14)
	struct FSlateColor OpenTitleColor; // 0x4e0(0x14)
	char pad_4F4[0x4]; // 0x4f4(0x04)
	struct UPickemEventInfoViewModel* PickemEventVM; // 0x4f8(0x08)
	struct FString tournamentid; // 0x500(0x10)
	struct FMulticastInlineDelegate PickBlockIsEmpty; // 0x510(0x10)

	void Init Pickem Event VM(); // Function WBP_Panel_PickemPickBlock.WBP_Panel_PickemPickBlock_C.Init Pickem Event VM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On Pickem Event VM Has Valid Data Changed(bool IsPickemInfoLoaded); // Function WBP_Panel_PickemPickBlock.WBP_Panel_PickemPickBlock_C.On Pickem Event VM Has Valid Data Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void NavigateToConvergedPickemScreen(); // Function WBP_Panel_PickemPickBlock.WBP_Panel_PickemPickBlock_C.NavigateToConvergedPickemScreen // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePickBlockElementsChanged(struct TArray<struct UPickemBlockElementModel*>& PickBlockElements); // Function WBP_Panel_PickemPickBlock.WBP_Panel_PickemPickBlock_C.HandlePickBlockElementsChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MakePlayoffScreen(); // Function WBP_Panel_PickemPickBlock.WBP_Panel_PickemPickBlock_C.MakePlayoffScreen // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleRegistrationStatusChanged(enum class EPickemRegistrationStatus& RegistrationStatus); // Function WBP_Panel_PickemPickBlock.WBP_Panel_PickemPickBlock_C.HandleRegistrationStatusChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleOpenCloseTimeChanged(struct FDateTime& NewValue); // Function WBP_Panel_PickemPickBlock.WBP_Panel_PickemPickBlock_C.HandleOpenCloseTimeChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleNextStageBeginTimeChanged(struct FDateTime& NewValue); // Function WBP_Panel_PickemPickBlock.WBP_Panel_PickemPickBlock_C.HandleNextStageBeginTimeChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCurrentPickemStageChanged(enum class EAresPickemStage PickemStage); // Function WBP_Panel_PickemPickBlock.WBP_Panel_PickemPickBlock_C.HandleCurrentPickemStageChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BindOrUnbindViewModels(bool bDoBind); // Function WBP_Panel_PickemPickBlock.WBP_Panel_PickemPickBlock_C.BindOrUnbindViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeViewModel(struct UPickemBlockModel* BlockModel); // Function WBP_Panel_PickemPickBlock.WBP_Panel_PickemPickBlock_C.InitializeViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Initialize(struct FString InTournamentSlug, struct FString InTournamentID); // Function WBP_Panel_PickemPickBlock.WBP_Panel_PickemPickBlock_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PickemPickBlock.WBP_Panel_PickemPickBlock_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_StageInfo_WBP_Button_Primary_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_PickemPickBlock.WBP_Panel_PickemPickBlock_C.BndEvt__WBP_Panel_StageInfo_WBP_Button_Primary_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function WBP_Panel_PickemPickBlock.WBP_Panel_PickemPickBlock_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void K2_BindToViewModel(); // Function WBP_Panel_PickemPickBlock.WBP_Panel_PickemPickBlock_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_Panel_PickemPickBlock.WBP_Panel_PickemPickBlock_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_PickemPickBlock_Button_400_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_PickemPickBlock.WBP_Panel_PickemPickBlock_C.BndEvt__WBP_Panel_PickemPickBlock_Button_400_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_PickemPickBlock_Button_400_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_PickemPickBlock.WBP_Panel_PickemPickBlock_C.BndEvt__WBP_Panel_PickemPickBlock_Button_400_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__WBP_Panel_PickemPickBlock_Button_OpenPickemScreen_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_PickemPickBlock.WBP_Panel_PickemPickBlock_C.BndEvt__WBP_Panel_PickemPickBlock_Button_OpenPickemScreen_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_Panel_PickemPickBlock(int32_t EntryPoint); // Function WBP_Panel_PickemPickBlock.WBP_Panel_PickemPickBlock_C.ExecuteUbergraph_WBP_Panel_PickemPickBlock // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void PickBlockIsEmpty__DelegateSignature(bool bIsEmpty); // Function WBP_Panel_PickemPickBlock.WBP_Panel_PickemPickBlock_C.PickBlockIsEmpty__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

