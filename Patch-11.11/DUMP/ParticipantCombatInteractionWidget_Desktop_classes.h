// WidgetBlueprintGeneratedClass ParticipantCombatInteractionWidget_Desktop.ParticipantCombatInteractionWidget_Desktop_C
// Size: 0x5f1 (Inherited: 0x324)
struct UParticipantCombatInteractionWidget_Desktop_C : UWBP_CombatReportInteractionWidget_Base_C {
	char pad_324[0x4]; // 0x324(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UCommonVisibilitySwitcher* AllyOrSelfTextSwitcher; // 0x330(0x08)
	struct UAresCommonText* AllyText; // 0x338(0x08)
	struct UImage* Arrow; // 0x340(0x08)
	struct UAresCommonText* AssistText; // 0x348(0x08)
	struct UImage* Bg_AllyTint; // 0x350(0x08)
	struct UMenuAnchor* detailedCombatInteractionsAnchor; // 0x358(0x08)
	struct UDynamicConfigSwitcher_C* DynamicConfigSwitcher; // 0x360(0x08)
	struct UAresCommonText* enemyBodyHitsDealt; // 0x368(0x08)
	struct UImage* EnemyBodyIcon; // 0x370(0x08)
	struct UAresCommonText* enemyDamageDealtTotal; // 0x378(0x08)
	struct UAresCommonText* enemyHeadHitsDealt; // 0x380(0x08)
	struct UImage* EnemyHeadIcon; // 0x388(0x08)
	struct UAresCommonText* enemyLegHitsDealt; // 0x390(0x08)
	struct UImage* EnemyLegsIcon; // 0x398(0x08)
	struct UImage* FocusHighlight; // 0x3a0(0x08)
	struct UImage* IncomingDamageBar; // 0x3a8(0x08)
	struct UImage* IncomingDamageGradient; // 0x3b0(0x08)
	struct UAresCommonText* isKillerText; // 0x3b8(0x08)
	struct UAresCommonText* killedText; // 0x3c0(0x08)
	struct UAresCommonText* OpponentNameText; // 0x3c8(0x08)
	struct UWBP_Panel_PlayerName_C* OpponentNameWidget; // 0x3d0(0x08)
	struct UImage* opponentPortraitImage; // 0x3d8(0x08)
	struct UImage* opponentWeaponIcon; // 0x3e0(0x08)
	struct UImage* OutgoingDamageBar; // 0x3e8(0x08)
	struct UImage* OutgoingDamageGradient; // 0x3f0(0x08)
	struct UAresCommonText* playerBodyHitsDealt; // 0x3f8(0x08)
	struct UAresCommonText* playerDamageDealtTotal; // 0x400(0x08)
	struct UImage* playerDealtBodyRegionIcon; // 0x408(0x08)
	struct UImage* playerDealtHeadRegionIcon; // 0x410(0x08)
	struct UImage* playerDealtLegRegionIcon; // 0x418(0x08)
	struct UAresCommonText* playerHeadHitsDealt; // 0x420(0x08)
	struct UAresCommonText* playerLegHitsDealt; // 0x428(0x08)
	struct UAresCommonText* SelfText; // 0x430(0x08)
	struct FParticipantInteractions ParticipantInteractions; // 0x438(0x90)
	struct UDetailedCombatInteractionsWidget_C* Detailed CombatInteractionWidget; // 0x4c8(0x08)
	bool wasFriendlyFire; // 0x4d0(0x01)
	char pad_4D1[0x3]; // 0x4d1(0x03)
	struct FSlateColor ArrowColor - Border - Standard; // 0x4d4(0x14)
	struct FSlateColor ArrowColor - Border - ToEnemy; // 0x4e8(0x14)
	struct FSlateColor ArrowColor - Border - ToAlly; // 0x4fc(0x14)
	struct FSlateColor ArrowColor - BG - ToEnemy - Kill; // 0x510(0x14)
	struct FSlateColor ArrowColor - BG - ToEnemy - Assist; // 0x524(0x14)
	struct FSlateColor ArrowColor - BG - ToAlly - Kill; // 0x538(0x14)
	struct FSlateColor Color - Transparent; // 0x54c(0x14)
	struct FSlateColor AgentPortraitColor - DeathTint; // 0x560(0x14)
	struct FSlateColor AgentPortraitColor - Alive; // 0x574(0x14)
	bool wasSelfFire; // 0x588(0x01)
	char pad_589[0x3]; // 0x589(0x03)
	struct FSlateColor TextColor - SelfDamage; // 0x58c(0x14)
	struct FSlateColor TextColor - NormalDamage; // 0x5a0(0x14)
	struct FSlateColor TextColor - Disabled; // 0x5b4(0x14)
	struct FSlateColor BodyPartColor - Enabled; // 0x5c8(0x14)
	struct FSlateColor BodyPartColor - Disabled; // 0x5dc(0x14)
	bool IsInBuyPhase; // 0x5f0(0x01)

	bool IsPlayerSelfDamaging(); // Function ParticipantCombatInteractionWidget_Desktop.ParticipantCombatInteractionWidget_Desktop_C.IsPlayerSelfDamaging // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetInteractionData(struct FParticipantInteractions InData); // Function ParticipantCombatInteractionWidget_Desktop.ParticipantCombatInteractionWidget_Desktop_C.SetInteractionData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetCounters(); // Function ParticipantCombatInteractionWidget_Desktop.ParticipantCombatInteractionWidget_Desktop_C.ResetCounters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void On_Mouse_Leave(); // Function ParticipantCombatInteractionWidget_Desktop.ParticipantCombatInteractionWidget_Desktop_C.On_Mouse_Leave // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	struct UWidget* CreateFlyoutDetailWidget(); // Function ParticipantCombatInteractionWidget_Desktop.ParticipantCombatInteractionWidget_Desktop_C.CreateFlyoutDetailWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function ParticipantCombatInteractionWidget_Desktop.ParticipantCombatInteractionWidget_Desktop_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function ParticipantCombatInteractionWidget_Desktop.ParticipantCombatInteractionWidget_Desktop_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void New Round(int32_t RoundNumberBeginning); // Function ParticipantCombatInteractionWidget_Desktop.ParticipantCombatInteractionWidget_Desktop_C.New Round // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnUpdateData(); // Function ParticipantCombatInteractionWidget_Desktop.ParticipantCombatInteractionWidget_Desktop_C.OnUpdateData // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ParticipantCombatInteractionWidget_Desktop.ParticipantCombatInteractionWidget_Desktop_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function ParticipantCombatInteractionWidget_Desktop.ParticipantCombatInteractionWidget_Desktop_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_ParticipantCombatInteractionWidget_Desktop(int32_t EntryPoint); // Function ParticipantCombatInteractionWidget_Desktop.ParticipantCombatInteractionWidget_Desktop_C.ExecuteUbergraph_ParticipantCombatInteractionWidget_Desktop // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

