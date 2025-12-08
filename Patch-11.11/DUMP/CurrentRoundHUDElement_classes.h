// WidgetBlueprintGeneratedClass CurrentRoundHUDElement.CurrentRoundHUDElement_C
// Size: 0x3b8 (Inherited: 0x330)
struct UCurrentRoundHUDElement_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x338(0x08)
	int32_t NumberOfHideRequests; // 0x340(0x04)
	char pad_344[0x4]; // 0x344(0x04)
	struct UGamepadInputIconBase* BuyButtonGamepad; // 0x348(0x08)
	struct UTextBlock* Attacking_ref; // 0x350(0x08)
	struct UTextBlock* Defending_ref; // 0x358(0x08)
	struct UTextBlock* BuyButtonB_ref; // 0x360(0x08)
	struct UOverlay* BuyPhaseAnnouncement_ref; // 0x368(0x08)
	struct UBorder* NewVar_1; // 0x370(0x08)
	struct UBorder* GamepadPromptBorder_ref; // 0x378(0x08)
	struct UTextBlock* MainText_ref; // 0x380(0x08)
	struct UHorizontalBox* PressButtonToBuy_ref; // 0x388(0x08)
	struct UTextBlock* RoundText_ref; // 0x390(0x08)
	struct UCanvasPanel* SecondaryCanvas_ref; // 0x398(0x08)
	struct USizeBox* sizebox_ref; // 0x3a0(0x08)
	struct UWidgetAnimation* IntroAnimation_ref; // 0x3a8(0x08)
	struct UActionNameIconPrompt_C* ActionNameIconPrompt_ref; // 0x3b0(0x08)

	void HandleBuyPhaseAnnouncementHidden(); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.HandleBuyPhaseAnnouncementHidden // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleBuyPhaseAnnouncementVisible(); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.HandleBuyPhaseAnnouncementVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetActionNameIconPrompt(struct UActionNameIconPrompt_C*& ActionNameIconPrompt); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.GetActionNameIconPrompt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetIntroAnimation(struct UWidgetAnimation*& IntroAnimation_ref); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.GetIntroAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetSizeboxWidget(struct USizeBox*& sizebox_ref); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.GetSizeboxWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetSecondaryCanvasWidget(struct UCanvasPanel*& SecondaryCanvas_ref); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.GetSecondaryCanvasWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetRoundTextWidget(struct UTextBlock*& RoundText_ref); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.GetRoundTextWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetMainTextWidget(struct UTextBlock*& MainText_ref); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.GetMainTextWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetBuyPhaseAnnouncementWidget(struct UOverlay*& BuyPhaseAnnouncement_ref); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.GetBuyPhaseAnnouncementWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetDefendingTextWidget(struct UTextBlock*& Defending_ref); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.GetDefendingTextWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetAttackingTextWidget(struct UTextBlock*& AttackingText); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.GetAttackingTextWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct FText GetOvertimeNotifyText(struct ABaseGameState_C* BaseGameState); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.GetOvertimeNotifyText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void CheckForGameStateOverride(); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.CheckForGameStateOverride // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateBuyButtonVisibility(); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.UpdateBuyButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RequestShow(); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.RequestShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RequestHide(); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.RequestHide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void makeRoundNotifyText(struct ABaseGameState_C*& BaseGameState); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.makeRoundNotifyText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateVisibility(); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateWidgets(); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.UpdateWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnGameStateHUDConfigChanged_Event_1(struct UGameStateHUDConfig* NewConfig); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.OnGameStateHUDConfigChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRoundNumberChanged(int32_t NewValue); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.OnRoundNumberChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PlayerStateChanged_Event_1(struct AAresPlayerStateBase* NewValue); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.PlayerStateChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnGameStateChanged_Event_1(); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.OnGameStateChanged_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAnnouncementChange_Event_1(bool AnnouncementVisible); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.OnAnnouncementChange_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Fade Out Widget(); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.Fade Out Widget // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMenuOpened(struct UMenuStackEntry* OpenedEntry); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.OnMenuOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMenuClosed(struct UMenuStackEntry* ClosedEntry); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.OnMenuClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnViewTargetChanged_Event(struct AActor* NewViewTarget); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.OnViewTargetChanged_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ScoreboardVisibilityChanged(bool IsVisible); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.ScoreboardVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_CurrentRoundHUDElement(int32_t EntryPoint); // Function CurrentRoundHUDElement.CurrentRoundHUDElement_C.ExecuteUbergraph_CurrentRoundHUDElement // (Final|UbergraphFunction) // @ game+0x19be2f0
};

