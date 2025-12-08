// WidgetBlueprintGeneratedClass PlayerParticipantWidget.PlayerParticipantWidget_C
// Size: 0x4b0 (Inherited: 0x318)
struct UPlayerParticipantWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* UltActive; // 0x320(0x08)
	struct UWidgetAnimation* UltReady; // 0x328(0x08)
	struct UOverlay* ActiveUlt; // 0x330(0x08)
	struct UImage* ActiveUltGradiant; // 0x338(0x08)
	struct UImage* ActiveUltMat; // 0x340(0x08)
	struct UImage* Bomb; // 0x348(0x08)
	struct UOverlay* BombCarrier; // 0x350(0x08)
	struct UImage* bombCarrrierIcon; // 0x358(0x08)
	struct USizeBox* BombContainer; // 0x360(0x08)
	struct UOverlay* Debuffed; // 0x368(0x08)
	struct UImage* DebuffedGradiant_3; // 0x370(0x08)
	struct UImage* DebuffedGradiant_4; // 0x378(0x08)
	struct UImage* DebuffedMat_2; // 0x380(0x08)
	struct UOverlay* DownedOverlay; // 0x388(0x08)
	struct UTextBlock* DownedTimer; // 0x390(0x08)
	struct UProgressBar* Health; // 0x398(0x08)
	struct UImage* HealthBG; // 0x3a0(0x08)
	struct UOverlay* HealthOverlay; // 0x3a8(0x08)
	struct UImage* Image; // 0x3b0(0x08)
	struct UImage* Image_2; // 0x3b8(0x08)
	struct UImage* Image_3; // 0x3c0(0x08)
	struct UImage* Image_4; // 0x3c8(0x08)
	struct UImage* Image_79; // 0x3d0(0x08)
	struct UImage* Image_148; // 0x3d8(0x08)
	struct UImage* Image_InPeril; // 0x3e0(0x08)
	struct UImage* Middle; // 0x3e8(0x08)
	struct UPlayerParticipantPortrait_C* PlayerParticipantPortrait; // 0x3f0(0x08)
	struct USizeBox* PortraitContainer; // 0x3f8(0x08)
	struct UOverlay* ReadyUlt; // 0x400(0x08)
	struct UImage* ReadyUltGradiant; // 0x408(0x08)
	struct UImage* ReadyUltGradiant_2; // 0x410(0x08)
	struct UImage* ReadyUltMat; // 0x418(0x08)
	struct UHorizontalBox* UltLine; // 0x420(0x08)
	struct UImage* UltOutline; // 0x428(0x08)
	struct UImage* UltOutline2; // 0x430(0x08)
	struct UImage* UltOutlineStationary; // 0x438(0x08)
	struct UImage* ViewedCharacter; // 0x440(0x08)
	struct UImage* YourPlayer; // 0x448(0x08)
	struct UHUDPlayerModel* PlayerModel; // 0x450(0x08)
	bool IsLocalPlayer; // 0x458(0x01)
	bool IsAlliedPlayer; // 0x459(0x01)
	char pad_45A[0x6]; // 0x45a(0x06)
	struct UCoordinatedHUDModel* HUDModel; // 0x460(0x08)
	bool UltReadyAnimationWillNeedPlaying; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
	struct TArray<struct UComp_Equippable_UltActiveOnEquip_C*> BoundUltActiveEquippables; // 0x470(0x10)
	bool UltIsActive; // 0x480(0x01)
	bool UltActiveAnimationWillNeedPlaying; // 0x481(0x01)
	bool IsOwnerObserver; // 0x482(0x01)
	bool FaceRight; // 0x483(0x01)
	char pad_484[0x4]; // 0x484(0x04)
	struct AAresPlayerStateBase* PlayerState; // 0x488(0x08)
	struct FTimerHandle InPerilTimerHandle; // 0x490(0x08)
	struct UComp_PlayerState_DownedState_C* DownedStateComponent; // 0x498(0x08)
	struct UComp_PlayerState_InPerilHandler_C* InPerilHandlerComponent; // 0x4a0(0x08)
	struct AShooterCharacter* CurrentSpawnedCharacter; // 0x4a8(0x08)

	void SetHealthBarColor(double HealthPercentage, bool PlayerHealing); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.SetHealthBarColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetHealthBarBackgroundColor(struct FSlateColor TintColor); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.SetHealthBarBackgroundColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get Current Portrait Widget(struct UPlayerParticipantPortraitBase_C*& PortraitWidget); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.Get Current Portrait Widget // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void UpdatePortrait(); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.UpdatePortrait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleUltStateChanged(bool UltActive); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.HandleUltStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool Should Widget be Visible(); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.Should Widget be Visible // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	bool ShouldShowDownedTimer(); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.ShouldShowDownedTimer // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	bool BuffIsActiveOnAbilitySystem(struct UAresAbilitySystemComponent* AresAbilitySystem, struct UGameplayEffect* EffectDefinition); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.BuffIsActiveOnAbilitySystem // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsPlayerModelAllyOrObserver(bool& IsAllyOrObserver); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.IsPlayerModelAllyOrObserver // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	bool ShouldUpdateUltActive(bool UltActive); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.ShouldUpdateUltActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Update Downed Timer(struct UComp_PlayerState_DownedState_C* Downed Component); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.Update Downed Timer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Peril(bool InPeril); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.Update Peril // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateDebuffed(bool Debuff Active); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.UpdateDebuffed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateViewedCharacter(); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.UpdateViewedCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool ShouldShowBombCarier(); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.ShouldShowBombCarier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void BindToUltActivate(struct AShooterPlayerState* ShooterPlayerState); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.BindToUltActivate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateUlt(); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.UpdateUlt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateWidgets(); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.UpdateWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void NumUltimatePointsChanged(int32_t NewValue, bool IsUltNewlyReady); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.NumUltimatePointsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DesiredClassChanged(struct AShooterCharacter* NewValue); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.DesiredClassChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SpawnedCharacterChanged(struct AShooterCharacter* SpawnedCharacter); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.SpawnedCharacterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAliveStateChanged(bool NewValue); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.OnAliveStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnUltActiveChanged(bool UltActive); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.OnUltActiveChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Tick Downed Timer(); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.Tick Downed Timer // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAwayPenaltyStateChanged(struct AShooterPlayerState* Owner, bool bIsPenalizedForBeingAway); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.OnAwayPenaltyStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnVitalityDirtied(); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.OnVitalityDirtied // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInventoryItemsChanged(); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.OnInventoryItemsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GameplayActiveUpdate(bool NewGameplayActive); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.GameplayActiveUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInPerilChanged(struct UAresAbilitySystemComponent* AbilitySystem, bool IsInPeril, float OldValue, float NewValue); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.OnInPerilChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInPerilStarted(struct UAresAbilitySystemComponent* AbilitySystem); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.OnInPerilStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInPerilEnded(struct UAresAbilitySystemComponent* AbilitySystem); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.OnInPerilEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TeamWipeAttributeChanged(struct UAresAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute& Attribute, float OldValue, float NewValue); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.TeamWipeAttributeChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleIconsChanged(); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.HandleIconsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnHealBuffTagChanged(struct UAresAbilitySystemComponent* AbilitySystem, struct FGameplayTag Tag, bool TagActive); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.OnHealBuffTagChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_PlayerParticipantWidget(int32_t EntryPoint); // Function PlayerParticipantWidget.PlayerParticipantWidget_C.ExecuteUbergraph_PlayerParticipantWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

