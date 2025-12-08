// WidgetBlueprintGeneratedClass MatchDetailsProgressionXP.MatchDetailsProgressionXP_C
// Size: 0x6bc (Inherited: 0x318)
struct UMatchDetailsProgressionXP_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UMatchDetailsProgressionXPWarning_C* AntiAddictionWarning; // 0x320(0x08)
	struct ULazyPlatformWidgetLoaderAsOverlay_Universal_C* DailyRewardsProgress_LazyLoader; // 0x328(0x08)
	struct UVerticalBox* DynamicItems; // 0x330(0x08)
	struct UMatchDetailsProgressionXPLineItem_C* GamePlayedLineItem; // 0x338(0x08)
	struct UMatchDetailsProgressionXPLineItem_C* GameWonLineItem; // 0x340(0x08)
	struct UMatchDetailsProgressionXPWarning_C* PenaltyWarning; // 0x348(0x08)
	struct USpecialXPProgress_C* PremiumContractXPProgress; // 0x350(0x08)
	struct UMatchDetailsProgressionXPWarning_C* QueueWarning; // 0x358(0x08)
	struct UMatchDetailsProgressionXPLineItem_C* RoundsPlayedLineItem; // 0x360(0x08)
	struct UMatchDetailsProgressionXPLineItem_C* RoundsWonLineItem; // 0x368(0x08)
	struct USharedBlurBg_C* SharedBlurBg_71; // 0x370(0x08)
	struct USpecialXPProgress_C* SocialXPProgress; // 0x378(0x08)
	struct UMatchDetailsProgressionXPLineItem_C* SubscriptionBonusXPLineItem; // 0x380(0x08)
	struct USpecialXPProgress_C* SubscriptionXPProgress; // 0x388(0x08)
	struct UOverlay* XPBreakdown; // 0x390(0x08)
	struct FProcessedMatchDetails MatchDetails; // 0x398(0x278)
	struct UContractMatchResultsViewModel* ContractMatchResults; // 0x610(0x08)
	struct FMulticastInlineDelegate XPAnimationComplete; // 0x618(0x10)
	struct FTimespan MissionsAnimationDuration; // 0x628(0x08)
	struct TMap<struct USubscriptionDataAsset*, struct USubscriptionHandle*> SubscriptionHandles; // 0x630(0x50)
	bool SubscriptionHandlesLoaded; // 0x680(0x01)
	char pad_681[0x7]; // 0x681(0x07)
	struct UDailyRewardsProcessedMatchModel* Daily Rewards Match Results; // 0x688(0x08)
	int32_t SubscriptionPrio; // 0x690(0x04)
	char pad_694[0x4]; // 0x694(0x04)
	struct USubscriptionHandle* SubscriptionHandleWithHighestPrio; // 0x698(0x08)
	struct FName IgnoreLoyaltyDataAssetConfig; // 0x6a0(0x0c)
	struct FGuid LoyaltyEntitlementTypeID; // 0x6ac(0x10)

	void Init Daily Rewards(struct UDailyRewardsProcessedMatchModel* Match); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.Init Daily Rewards // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateProgressionLineItem(struct UMatchDetailsProgressionXPLineItem_C* LineItem, int32_t Dough, int32_t XP); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.UpdateProgressionLineItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UDailyRewardsProgressBase_C* Get Lazy Loaded Daily Rewards Progress Widget(); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.Get Lazy Loaded Daily Rewards Progress Widget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateDailyRewards(); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.UpdateDailyRewards // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetModifierValueBySubscription(struct USubscriptionDataAsset* SubscriptionDataAsset, double& Modifier); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.GetModifierValueBySubscription // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdatePenaltyText(); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.UpdatePenaltyText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePremiumContractXP(); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.UpdatePremiumContractXP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSubscriptionXP(); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.UpdateSubscriptionXP // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateSocialXP(); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.UpdateSocialXP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnQueueLoaded(struct UMatchmakingQueueHandle* QueueHandle); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.OnQueueLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool HasXPByModifier(enum class EXPModifier XP Mod); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.HasXPByModifier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SortMissions(struct UObject* A, struct UObject* B, bool& A<B); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.SortMissions // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShowEndState(); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.ShowEndState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateAntiAddictionText(); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.UpdateAntiAddictionText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetNumRoundsWon(int32_t& NumRounds); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.GetNumRoundsWon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetNumRoundsPlayed(int32_t& NumRounds); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.GetNumRoundsPlayed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdateMissions(); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.UpdateMissions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateXPBreakdown(); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.UpdateXPBreakdown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AddDynamicItem(struct UWidget* Widget); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.AddDynamicItem // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Init Contracts(struct FProcessedMatchDetails MatchDetailsDTO, struct UContractMatchResultsViewModel* ContractMatchResults); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.Init Contracts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AnimateXPBreakdown(); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.AnimateXPBreakdown // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Reset(); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.Reset // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PreConstruct(bool IsDesignTime); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnInitialized(); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnAllSubscriptionsLoaded(struct FSubscriptionHandles& SubscriptionHandles); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.OnAllSubscriptionsLoaded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_MatchDetailsProgressionXP(int32_t EntryPoint); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.ExecuteUbergraph_MatchDetailsProgressionXP // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void XPAnimationComplete__DelegateSignature(); // Function MatchDetailsProgressionXP.MatchDetailsProgressionXP_C.XPAnimationComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

