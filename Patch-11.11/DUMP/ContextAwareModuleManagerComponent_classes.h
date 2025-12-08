// BlueprintGeneratedClass ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C
// Size: 0x480 (Inherited: 0x2e8)
struct UContextAwareModuleManagerComponent_C : UContextAwareModuleManagerComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct TArray<struct ATipBase_C*> TipsToShow; // 0x2f0(0x10)
	struct ATipBase_C* CurrentShownTip; // 0x300(0x08)
	struct UVM_ContextAwareModule_Tip_C* TipViewModel; // 0x308(0x08)
	struct UWBP_Tip_C* TipHUDContainerWidget; // 0x310(0x08)
	double MinRoundTimeRemainingForTipToShow; // 0x318(0x08)
	struct FTimerHandle ShowTipOnSetupCompleteTimerHandle; // 0x320(0x08)
	double DelayBeforeShowingTipsAfterSetup; // 0x328(0x08)
	struct FTimerHandle ShowFollowUpTipTimerHandle; // 0x330(0x08)
	double DelayBeforeShowingFollowUpTip; // 0x338(0x08)
	double DelayBeforeShowingFollowUpTip_InShootingRange; // 0x340(0x08)
	struct FTimerHandle HideTipTimerHandle; // 0x348(0x08)
	struct AShooterCharacter* SpawnedCharacter; // 0x350(0x08)
	struct FTimerHandle SlowTickTimerHandle; // 0x358(0x08)
	struct TArray<struct Uitem_C*> HighlightedItems; // 0x360(0x10)
	struct UShopContentWidgetBase_C* ShopContent; // 0x370(0x08)
	struct UShopScreen* ShopScreen; // 0x378(0x08)
	enum class HighlightType HighlightType; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	struct TArray<struct Uitem_C*> ShopGuns; // 0x388(0x10)
	struct TArray<struct Uitem_C*> ShopAbilities; // 0x398(0x10)
	struct TArray<struct Uitem_C*> ShopArmors; // 0x3a8(0x10)
	struct TArray<struct Uitem_C*> ShopAssaultRifles; // 0x3b8(0x10)
	struct TMap<struct ATip*, int32_t> TipsToGracePeriodRounds; // 0x3c8(0x50)
	bool PrevCanShowTips; // 0x418(0x01)
	char pad_419[0x7]; // 0x419(0x07)
	struct UBaseUsableHUDComponent_C* CurrentMainUsableHUDComponent; // 0x420(0x08)
	bool JustHadSwitchingTeamsPhase; // 0x428(0x01)
	enum class EAresTeamRole PreviousTeamRole; // 0x429(0x01)
	char pad_42A[0x6]; // 0x42a(0x06)
	struct FTimerHandle SetupShopEventsTimerHandle; // 0x430(0x08)
	struct AShootingRangeController_C* ShootingRangeController; // 0x438(0x08)
	struct UCharacterAbilitiesTooltip_Base_C* CharacterAbilitiesTooltipBase; // 0x440(0x08)
	struct AAimBotsManager_C* AimBotsManager_InShootingRange; // 0x448(0x08)
	struct FTimerHandle SetupChallengeSequenceEventsTimerHandle; // 0x450(0x08)
	double ToBeShownGracePeriod; // 0x458(0x08)
	struct FMulticastInlineDelegate OnTipShowComplete; // 0x460(0x10)
	struct UScoreboardContentWidgetBase_C* ScoreboardScreen; // 0x470(0x08)
	struct UContextAwareModuleDebugComponent* CAMDebugComponent; // 0x478(0x08)

	void AddDisplayStateDebugStatement(struct FString Key, struct FString Value); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.AddDisplayStateDebugStatement // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetScoreboardWidget(struct UScoreboardContentWidgetBase_C*& ScoreboardWidget); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.GetScoreboardWidget // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RemoveFromTipToShow(struct ATipBase_C* RemovedTip, bool RemoveAll); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.RemoveFromTipToShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddTipToShow(struct ATipBase_C* NewTip); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.AddTipToShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleChallengeSequenceAborted_InShootingRange(); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.HandleChallengeSequenceAborted_InShootingRange // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleChallengeSequenceCompleted_InShootingRange(int32_t Score); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.HandleChallengeSequenceCompleted_InShootingRange // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupChallengeSequenceEvents_InShootingRange(); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.SetupChallengeSequenceEvents_InShootingRange // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UCharacterAbilitiesTooltip_Base_C* GetCharacterAbilitiesTooltipBase(); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.GetCharacterAbilitiesTooltipBase // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupShopEvents(); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.SetupShopEvents // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryRegisterTipGracePeriod(struct ATip*& Tip); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.TryRegisterTipGracePeriod // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearOldGracePeriods(); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.ClearOldGracePeriods // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TipIsInGracePeriod(struct ATip* TipToCheck, bool& GracePeriodActive); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.TipIsInGracePeriod // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateHighlightForShopItem(struct Uitem_C* ShopItem); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.UpdateHighlightForShopItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetShopWidgetsFromItems(struct TArray<struct TSoftClassPtr<UObject>>& Items, struct TArray<struct Uitem_C*>& InShopWidgets); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.GetShopWidgetsFromItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetShopItemsFromHighlightType(enum class HighlightType HighlightType, struct TArray<struct Uitem_C*>& ShopItems); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.GetShopItemsFromHighlightType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleCharacterSelectActiveChanged_InShootingRange(bool Active); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.HandleCharacterSelectActiveChanged_InShootingRange // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleSpawnedCharacterChanged(struct AShooterCharacter* NewValue); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.HandleSpawnedCharacterChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool GameModeIsShootingRange(); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.GameModeIsShootingRange // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	struct AShooterPlayerState* GetPlayerState(); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.GetPlayerState // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	double GetDelayBeforeShowingFollowUpTip(); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.GetDelayBeforeShowingFollowUpTip // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void CanShowHighlights(bool& CanDisplayHighlights); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.CanShowHighlights // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	bool TipsBlockedByGameplayState(); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.TipsBlockedByGameplayState // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	bool TipsBlockedByImportantUI(); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.TipsBlockedByImportantUI // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void CanShowTips(bool& CanDisplay); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.CanShowTips // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void IsShowingTip(bool& IsShowing); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.IsShowingTip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void TryShowFollowUpTip(); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.TryShowFollowUpTip // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DisplayTip(struct ATipBase_C* NewTip, bool& DisplaySuccess); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.DisplayTip // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SortTipsPred(struct UObject* Left, struct UObject* Right, bool& bIsLeftLessThanRight); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.SortTipsPred // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PickBestTip(struct TArray<struct ATipBase_C*>& Tips, struct ATipBase_C*& BestTip); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.PickBestTip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetTipsToShow(struct TArray<int32_t>& ValidTips); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.GetTipsToShow // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ClearTip(); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.ClearTip // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryDisplayTip(); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.TryDisplayTip // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TryDisplayTipOnSetupComplete(); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.TryDisplayTipOnSetupComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SlowTick(); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.SlowTick // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTipTimerExpire(); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.OnTipTimerExpire // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateHighlights(); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.UpdateHighlights // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearAllHighlights(); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.ClearAllHighlights // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnShopVisibilityChanged(enum class ESlateVisibility InVisibility); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.OnShopVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveSetupContextAwareModule(); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.ReceiveSetupContextAwareModule // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveTeardownContextAwareModule(); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.ReceiveTeardownContextAwareModule // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnTipSpawned(struct ATip* NewTip); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.OnTipSpawned // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnMainUsableHudUpdated(struct UBaseUsableHUDComponent_C* HUDComponent, bool CurrentlyInUse); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.OnMainUsableHudUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnShopItemModelUpdated(); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.OnShopItemModelUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTipWantsToBeShown(struct ATipBase_C* TipToShow); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.OnTipWantsToBeShown // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnTipStopToBeShown(struct ATipBase_C* TipToStop); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.OnTipStopToBeShown // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCommonUIShopVisibilityChanged(bool IsVisible); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.OnCommonUIShopVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_ContextAwareModuleManagerComponent(int32_t EntryPoint); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.ExecuteUbergraph_ContextAwareModuleManagerComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnTipShowComplete__DelegateSignature(); // Function ContextAwareModuleManagerComponent.ContextAwareModuleManagerComponent_C.OnTipShowComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

