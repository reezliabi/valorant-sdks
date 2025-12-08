// WidgetBlueprintGeneratedClass WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C
// Size: 0x1d7c (Inherited: 0x1b90)
struct UWBP_ScoreboardPlayerCardBase_C : UScoreboardPlayerCardWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b90(0x08)
	bool wasLastAlive; // 0x1b98(0x01)
	char pad_1B99[0x7]; // 0x1b99(0x07)
	struct FString ClassName; // 0x1ba0(0x10)
	struct FScoreboardPlayerInfo PlayerInformation; // 0x1bb0(0xb0)
	double LastUpdateTime; // 0x1c60(0x08)
	struct FScoreboardPlayerInfo LastAppliedValues; // 0x1c68(0xb0)
	struct FSlateColor FFAColorSelf; // 0x1d18(0x14)
	struct FSlateColor FFAColorOther; // 0x1d2c(0x14)
	bool IsSelf; // 0x1d40(0x01)
	bool IsEnemy; // 0x1d41(0x01)
	char pad_1D42[0x2]; // 0x1d42(0x02)
	struct FLinearColor DefaultTeamColor; // 0x1d44(0x10)
	char pad_1D54[0x4]; // 0x1d54(0x04)
	double MicContainerPaddingLeftWithBomb; // 0x1d58(0x08)
	double MicContainerPaddingLeftWithoutBomb; // 0x1d60(0x08)
	struct FSlateColor DefaultCharacterPortraitTint; // 0x1d68(0x14)

	void OnFinalStatsSettingChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.OnFinalStatsSettingChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateDeadOverlay(); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.UpdateDeadOverlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool IsPlayerSelf(); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.IsPlayerSelf // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTextColors(struct FSlateColor InColor); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.SetTextColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void swapSocialVisibility(bool Visibility); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.swapSocialVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Deprecated_setPoints(); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.Deprecated_setPoints // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateUlt(bool ForceUpdate); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.UpdateUlt // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePlayerName(); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.UpdatePlayerName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdatePing(bool ForceUpdate); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.UpdatePing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateMoney(bool IsObserver, bool ForceUpdate); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.UpdateMoney // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void updateKDA(bool ForceUpdate); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.updateKDA // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Information(); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.Update Information // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateHealth(bool ForceUpdate); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.UpdateHealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void updateHasBomb(bool ForceUpdate); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.updateHasBomb // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void updateGun(bool ForceUpdate); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.updateGun // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateCompetitiveTier(); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.UpdateCompetitiveTier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateBackgroundColor(); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.UpdateBackgroundColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void updateArmor(bool ForceUpdate); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.updateArmor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void setDead(); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.setDead // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void setAlive(); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.setAlive // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void refreshRowValues(bool ForceUpdate); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.refreshRowValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void makePortrait(); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.makePortrait // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void getDesiredArmorIcon(struct UObject*& ArmorIcon); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.getDesiredArmorIcon // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	void Construct(); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__characterInfoButton_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature(); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.BndEvt__characterInfoButton_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_WBP_ScoreboardPlayerCardBase(int32_t EntryPoint); // Function WBP_ScoreboardPlayerCardBase.WBP_ScoreboardPlayerCardBase_C.ExecuteUbergraph_WBP_ScoreboardPlayerCardBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

