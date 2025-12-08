// BlueprintGeneratedClass BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C
// Size: 0x31c (Inherited: 0xd8)
struct UBTMPlayerAssistantComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct UShopContentWidgetBase_C* W_ShopContent; // 0xe0(0x08)
	struct TArray<struct TSoftClassPtr<UObject>> RecommendedLoadout_Current; // 0xe8(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> RecommendedLoadout_Round0; // 0xf8(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> RecommendedLoadout_Round1; // 0x108(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> RecommendedLoadout_Round2; // 0x118(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> RecommendedLoadout_Round3; // 0x128(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> RecommendedLoadout_Round4; // 0x138(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> RecommendedLoadout_Round5; // 0x148(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> RecommendedLoadout_Round6; // 0x158(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> RecommendedLoadout_Round7; // 0x168(0x10)
	struct TArray<struct TSoftClassPtr<UObject>> RecommendedLoadout_Round8; // 0x178(0x10)
	struct UShopPurchasableModel* ShopPurchasableModel; // 0x188(0x08)
	struct TArray<struct Uitem_C*> RecommendedLoadout_CurrentItems; // 0x190(0x10)
	struct TArray<struct AAresItem*> RecommendedLoadout_CurrentItemClasses; // 0x1a0(0x10)
	bool IsBound?; // 0x1b0(0x01)
	char pad_1B1[0x7]; // 0x1b1(0x07)
	double Counter; // 0x1b8(0x08)
	int32_t CurrentRound; // 0x1c0(0x04)
	char pad_1C4[0x4]; // 0x1c4(0x04)
	double InitialPreroundExtension; // 0x1c8(0x08)
	struct UBaseTeamComponent* Player_TeamComp; // 0x1d0(0x08)
	struct TArray<int32_t> Phoenix_ValidMollyRounds; // 0x1d8(0x10)
	struct TArray<int32_t> Sage_ValidWallRounds; // 0x1e8(0x10)
	bool BTMPlayerGuidanceApplied?; // 0x1f8(0x01)
	char pad_1F9[0x7]; // 0x1f9(0x07)
	struct TArray<int32_t> Sage_C_Ally_RoundAssignments; // 0x200(0x10)
	struct UJobProvider_BTM_DefendBombSite_C* JobProviderBTM_Ally_Defense; // 0x210(0x08)
	struct UMoneyManagementComponent* Player_MoneyManagementComp; // 0x218(0x08)
	struct UWBP_View_BTM_BuyPromptTip_C* W_BuyPhasePrompt; // 0x220(0x08)
	enum class EAresGamePhase ShopPrompt_GamePhase; // 0x228(0x01)
	char pad_229[0x3]; // 0x229(0x03)
	int32_t RoundStartLoadoutMoney; // 0x22c(0x04)
	struct TArray<int32_t> LowestMoneyPerRound; // 0x230(0x10)
	struct TSoftClassPtr<UObject> Armor_HeavyShield; // 0x240(0x30)
	struct TSoftClassPtr<UObject> Armor_RegenShield; // 0x270(0x30)
	struct UMapPingComponent* PingComp; // 0x2a0(0x08)
	struct UNavigationPath* Path; // 0x2a8(0x08)
	struct UPlayerPurchaseablesComponent* Player_PurchaseablesComp; // 0x2b0(0x08)
	int32_t Loadouts_AdditionalMoney; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct FTimerHandle FallbackVO_Handle; // 0x2c0(0x08)
	struct TArray<struct FVector> GuidedPath; // 0x2c8(0x10)
	struct FTimerHandle GuidedPathUpdate_Handle; // 0x2d8(0x08)
	int32_t GuidedPath_CurrentIndex; // 0x2e0(0x04)
	char pad_2E4[0x4]; // 0x2e4(0x04)
	struct FEffectID GuidedPathPing_FXC; // 0x2e8(0x20)
	struct TArray<struct AShooterPlayerState*> GuidedPath_EnemyPlayerStates; // 0x308(0x10)
	int32_t SageFallback_Counter; // 0x318(0x04)

	void Bind_ToOptionsDisplayed(); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.Bind_ToOptionsDisplayed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Create_GuidedPathPing(struct AEffectContainer* PingFXC, struct FVector Location); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.Create_GuidedPathPing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Evaluate_FollowingGuidedPath(); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.Evaluate_FollowingGuidedPath // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Display_NavigationPings(struct TArray<struct FVector>& GuidedNavPath); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.Display_NavigationPings // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Query_PlayFallbackVO(); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.Query_PlayFallbackVO // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddRecommendedAbilitiesToLoadout(struct AShooterCharacter* ShooterCharacter); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.AddRecommendedAbilitiesToLoadout // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Upgrade_RecommendLoadoutItem(struct TArray<bool>& RecommendedLoadout, int32_t TargetItemIndex, struct TSoftClassPtr<UObject> NewLoadoutItem); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.Upgrade_RecommendLoadoutItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get_MinimumStartingMoneyForRound(int32_t Round, int32_t& MinimumFunds); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.Get_MinimumStartingMoneyForRound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void IsReadyForSetup(bool& IsReady); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.IsReadyForSetup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthOnPhaseChanged(enum class EAresGamePhase NewPhase); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.AuthOnPhaseChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSettingsUpdated_Visibility_Prompt(bool IsVisible); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.OnSettingsUpdated_Visibility_Prompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnScoreboardUpdated_Visibility_Prompt(bool IsVisible); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.OnScoreboardUpdated_Visibility_Prompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMegamapUpdated_Visibility_Prompt(bool IsOpen); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.OnMegamapUpdated_Visibility_Prompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnShopUpdated_Visibility_Prompt(bool IsOpen); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.OnShopUpdated_Visibility_Prompt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Setup_SageSiteChanges_Ally(); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.Setup_SageSiteChanges_Ally // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Setup_BotSkillAlterations_Timed(); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.Setup_BotSkillAlterations_Timed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Setup_ShopPrompting(); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.Setup_ShopPrompting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Setup_ShopRecommendations(); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.Setup_ShopRecommendations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool ShouldHighlightBeVisible?(struct Uitem_C* Item); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.ShouldHighlightBeVisible? // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void OnShopUpdated_Visibility_Loadouts(bool IsOpen); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.OnShopUpdated_Visibility_Loadouts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnShopUpdated_Items(); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.OnShopUpdated_Items // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClearPreviousRoundRecommendations(); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.ClearPreviousRoundRecommendations // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AssignRecommendedRoundLoadout(int32_t RoundIndex); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.AssignRecommendedRoundLoadout // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetRecommendedLoadout(int32_t RoundIndex); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.SetRecommendedLoadout // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Owning_OnRoundBegin_ResetRecommendations(int32_t RoundNumberBeginning); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.Owning_OnRoundBegin_ResetRecommendations // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Owning_OnPreroundEnd_HideShopPrompt(enum class EAresGamePhase NewPhase); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.Owning_OnPreroundEnd_HideShopPrompt // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Owning_PlayWarningAudio(); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.Owning_PlayWarningAudio // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BeginPlay_Server(); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.BeginPlay_Server // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void BeginPlay_Clients(); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.BeginPlay_Clients // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRoundBegin(int32_t RoundNumberBeginning); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.OnRoundBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On_MoneyUpdated(); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.On_MoneyUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Owning_Bind_UpdateEconomy(); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.Owning_Bind_UpdateEconomy // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On_BombPlanted(struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.On_BombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Server_MakePingFXC(struct TArray<int32_t>& PathPoints); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.Server_MakePingFXC // (Net|NetReliableNetServer|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Create_PingPathToSite(struct FVector TargetSite); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.Create_PingPathToSite // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_BTMPlayerAssistantComponent(int32_t EntryPoint); // Function BtmPlayerAssistantComponent.BTMPlayerAssistantComponent_C.ExecuteUbergraph_BTMPlayerAssistantComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

