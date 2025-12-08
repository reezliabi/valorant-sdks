// BlueprintGeneratedClass Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C
// Size: 0x170 (Inherited: 0xd8)
struct UComp_Ability_CooldownComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	double CooldownSeconds; // 0xe0(0x08)
	bool AutoCooldown; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct FMulticastInlineDelegate OnCooldownStarted; // 0xf0(0x10)
	struct FTimerHandle CooldownTimer; // 0x100(0x08)
	bool PlaySignatureReplenishVisuals; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct FMulticastInlineDelegate OnCooldownComplete; // 0x110(0x10)
	double DPT_Cooldown; // 0x120(0x08)
	enum class EGameFeatureToggleName DPT_FeatureToggle; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	int32_t AuthMaxChargesThisRound; // 0x12c(0x04)
	bool ReplenishTempCharges; // 0x130(0x01)
	bool AllowPreRoundUse; // 0x131(0x01)
	bool RechargeDisabled; // 0x132(0x01)
	bool PauseDuringPreRound; // 0x133(0x01)
	bool InstantCooldownOnRecall; // 0x134(0x01)
	bool AuthInRoundTransition; // 0x135(0x01)
	char pad_136[0x2]; // 0x136(0x02)
	double StartTimeStamp; // 0x138(0x08)
	bool CooldownActive; // 0x140(0x01)
	bool CooldownPausedDuringPreRound; // 0x141(0x01)
	char pad_142[0x6]; // 0x142(0x06)
	double DEPRECATED_StartTimestamp; // 0x148(0x08)
	bool DEPRECATED_InRoundTransition; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	double DEPRECATED_CooldownSeconds; // 0x158(0x08)
	int32_t DEPRECATED_MaxChargesThisRound; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct FTimerHandle DEPRECATED_CooldownTimer; // 0x168(0x08)

	void CooldownStatus(bool& OnCooldown, double& TimeRemaining); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.CooldownStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	void DEPRECATED_AuthResetAndRestartCooldown(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.DEPRECATED_AuthResetAndRestartCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DEPRECATED_ReplenishCharge(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.DEPRECATED_ReplenishCharge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DEPRECATED_PlayReplenishVisuals(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.DEPRECATED_PlayReplenishVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DEPRECATED_AuthRestartCooldown(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.DEPRECATED_AuthRestartCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DEPRECATED_SetCooldown(double NewCooldownSeconds); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.DEPRECATED_SetCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DEPRECATED_PotentiallyPerformSubsequentCooldown(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.DEPRECATED_PotentiallyPerformSubsequentCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DEPRECATED_AttemptToStartCooldown(bool AbilityDestroyed, double NewCooldownDuration); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.DEPRECATED_AttemptToStartCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool DEPRECATED_CanCooldownStart(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.DEPRECATED_CanCooldownStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DEPRECATED_CooldownStatus(bool& OnCooldown, double& TimeRemaining); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.DEPRECATED_CooldownStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	void OnRep_CooldownActive(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.OnRep_CooldownActive // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetRemainingTime(double& RemainingTime); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.GetRemainingTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	void GetElapsedTime(double& ElapsedTime); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.GetElapsedTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x19be2f0
	void GetCooldownStatus(bool& InCooldown, double& SecondsRemaining); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.GetCooldownStatus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	bool AuthCanCooldownStart(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthCanCooldownStart // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthPlayReplenishVisuals(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthPlayReplenishVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthReplenishCharge(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthReplenishCharge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthUpdateCooldownTimeForDPT(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthUpdateCooldownTimeForDPT // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthSetCooldownDuration(double NewCooldownSeconds, bool DEPRECATED_UseAlternateMulticastPath); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthSetCooldownDuration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthCancelCooldown(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthCancelCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthFinishCooldown(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthFinishCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthRestartCooldown(bool DEPRECATED_UseAlternateMulticastPath); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthRestartCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthStartCooldown(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthStartCooldown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthStartCooldownOrReplenishCharge(bool AbilityDestroyed); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthStartCooldownOrReplenishCharge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthAttemptToStartCooldown(bool AbilityDestroyed, bool DEPRECATED_UseAlternateMulticastPath); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthAttemptToStartCooldown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void AuthOnResourceChanged(struct UResourceComponent* ResourceComponent); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthOnResourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnRoundEnd(int32_t RoundNumberEnded); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.OnRoundEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthOnGameplayActiveChanged(bool NewGameplayActive); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthOnGameplayActiveChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthOnGameFeatureToggleChanged(enum class EGameFeatureToggleName GameFeatureToggleName, bool bEnabled); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthOnGameFeatureToggleChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AuthOnRoundBegin(int32_t RoundNumberBeginning); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.AuthOnRoundBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DEPRECATED_Event Start Cooldown(bool AbilityDestroyed); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.DEPRECATED_Event Start Cooldown // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DEPRECATED_Event Finish Cooldown(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.DEPRECATED_Event Finish Cooldown // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DEPRECATED_EventMulticastSetCooldown(double InCooldown); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.DEPRECATED_EventMulticastSetCooldown // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DEPRECATED_StartCooldownTimer(double Time); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.DEPRECATED_StartCooldownTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DEPRECATED_EventMulticastCancelCooldown(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.DEPRECATED_EventMulticastCancelCooldown // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DEPRECATED_EventMulticastRestartCooldown(double Cooldown); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.DEPRECATED_EventMulticastRestartCooldown // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DEPRECATED_MulticastSetCooldown(double New Cooldown Seconds); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.DEPRECATED_MulticastSetCooldown // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DEPRECATED_OnRoundEnd(int32_t RoundNumberEnded); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.DEPRECATED_OnRoundEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DEPRECATED_OnGameplayActiveChanged(bool NewGameplayActive); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.DEPRECATED_OnGameplayActiveChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DEPRECATED_OnRoundBegin(int32_t RoundNumberBeginning); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.DEPRECATED_OnRoundBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DEPRECATED_OnResourceChanged(struct UResourceComponent* ResourceComponent); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.DEPRECATED_OnResourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Comp_Ability_CooldownComponent(int32_t EntryPoint); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.ExecuteUbergraph_Comp_Ability_CooldownComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnCooldownComplete__DelegateSignature(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.OnCooldownComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCooldownStarted__DelegateSignature(); // Function Comp_Ability_CooldownComponent.Comp_Ability_CooldownComponent_C.OnCooldownStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

