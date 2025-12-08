// WidgetBlueprintGeneratedClass PlayerParticipantWidget_v2.PlayerParticipantWidget_v2_C
// Size: 0x4b0 (Inherited: 0x318)
struct UPlayerParticipantWidget_v2_C : UUserWidget {
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
	struct UImage* CharacterPortrait; // 0x368(0x08)
	struct USizeBox* CharHead; // 0x370(0x08)
	struct UImage* DeadCharacter; // 0x378(0x08)
	struct UOverlay* Debuffed; // 0x380(0x08)
	struct UImage* DebuffedGradiant_3; // 0x388(0x08)
	struct UImage* DebuffedGradiant_4; // 0x390(0x08)
	struct UImage* DebuffedMat_2; // 0x398(0x08)
	struct UOverlay* DownedOverlay; // 0x3a0(0x08)
	struct UTextBlock* DownedTimer; // 0x3a8(0x08)
	struct UProgressBar* Health; // 0x3b0(0x08)
	struct UImage* HealthBG; // 0x3b8(0x08)
	struct UOverlay* HealthOverlay; // 0x3c0(0x08)
	struct UImage* Image; // 0x3c8(0x08)
	struct UImage* Image_2; // 0x3d0(0x08)
	struct UImage* Image_3; // 0x3d8(0x08)
	struct UImage* Image_4; // 0x3e0(0x08)
	struct UImage* Image_79; // 0x3e8(0x08)
	struct UImage* Image_107; // 0x3f0(0x08)
	struct UImage* Image_148; // 0x3f8(0x08)
	struct UInvalidationBox* InvalidationBox_PlayerParticipantWidget; // 0x400(0x08)
	struct UImage* Middle; // 0x408(0x08)
	struct UBorder* PlayerBorder; // 0x410(0x08)
	struct UOverlay* ReadyUlt; // 0x418(0x08)
	struct UImage* ReadyUltGradiant; // 0x420(0x08)
	struct UImage* ReadyUltGradiant_2; // 0x428(0x08)
	struct UImage* ReadyUltMat; // 0x430(0x08)
	struct UHorizontalBox* UltLine; // 0x438(0x08)
	struct UImage* UltOutline; // 0x440(0x08)
	struct UImage* UltOutline2; // 0x448(0x08)
	struct UImage* UltOutlineStationary; // 0x450(0x08)
	struct UImage* ViewedCharacter; // 0x458(0x08)
	struct UImage* YourPlayer; // 0x460(0x08)
	struct UHUDPlayerModel* PlayerModel; // 0x468(0x08)
	bool IsLocalPlayer; // 0x470(0x01)
	bool IsAlliedPlayer; // 0x471(0x01)
	char pad_472[0x6]; // 0x472(0x06)
	struct UCoordinatedHUDModel* HUDModel; // 0x478(0x08)
	bool UltReadyAnimationWillNeedPlaying; // 0x480(0x01)
	char pad_481[0x7]; // 0x481(0x07)
	struct TArray<struct UComp_Equippable_UltActiveOnEquip_C*> BoundUltActiveEquippables; // 0x488(0x10)
	bool UltIsActive; // 0x498(0x01)
	bool UltActiveAnimationWillNeedPlaying; // 0x499(0x01)
	bool IsOwnerObserver; // 0x49a(0x01)
	bool FaceRight; // 0x49b(0x01)
	char pad_49C[0x4]; // 0x49c(0x04)
	struct AAresPlayerStateBase* PlayerState; // 0x4a0(0x08)
	struct FTimerHandle DownedTimerHandle; // 0x4a8(0x08)

	bool ShouldShowUltUpdate(bool UltActive); // Function PlayerParticipantWidget_v2.PlayerParticipantWidget_v2_C.ShouldShowUltUpdate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Update Downed Timer(struct UComp_PlayerState_DownedState_C* Downed Component); // Function PlayerParticipantWidget_v2.PlayerParticipantWidget_v2_C.Update Downed Timer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateDowned(bool Downed); // Function PlayerParticipantWidget_v2.PlayerParticipantWidget_v2_C.UpdateDowned // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateDebuffed(bool Debuff Active); // Function PlayerParticipantWidget_v2.PlayerParticipantWidget_v2_C.UpdateDebuffed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateViewedCharacter(); // Function PlayerParticipantWidget_v2.PlayerParticipantWidget_v2_C.UpdateViewedCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	bool ShouldShowBombCarier(); // Function PlayerParticipantWidget_v2.PlayerParticipantWidget_v2_C.ShouldShowBombCarier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void BindToUltActivate(struct AShooterPlayerState* ShooterPlayerState); // Function PlayerParticipantWidget_v2.PlayerParticipantWidget_v2_C.BindToUltActivate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateUlt(); // Function PlayerParticipantWidget_v2.PlayerParticipantWidget_v2_C.UpdateUlt // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateWidgets(); // Function PlayerParticipantWidget_v2.PlayerParticipantWidget_v2_C.UpdateWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SpawnedCharacterChanged(struct AShooterCharacter* NewValue); // Function PlayerParticipantWidget_v2.PlayerParticipantWidget_v2_C.SpawnedCharacterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAliveStateChanged(bool NewValue); // Function PlayerParticipantWidget_v2.PlayerParticipantWidget_v2_C.OnAliveStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnUltActiveChanged(bool UltActive); // Function PlayerParticipantWidget_v2.PlayerParticipantWidget_v2_C.OnUltActiveChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function PlayerParticipantWidget_v2.PlayerParticipantWidget_v2_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Tick Downed Timer(); // Function PlayerParticipantWidget_v2.PlayerParticipantWidget_v2_C.Tick Downed Timer // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAnyPlayerTemporaryDeath(struct AShooterPlayerState* DamagerPlayerState, struct AShooterPlayerState* DownedPlayerState, struct UDamageResponse* DamageResponse, struct AAresEquippable* EquippableUsed, bool bRecoversInstantly); // Function PlayerParticipantWidget_v2.PlayerParticipantWidget_v2_C.OnAnyPlayerTemporaryDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAnyPlayerRecovered(struct AShooterPlayerState* RecoveredByPlayerState, struct AShooterPlayerState* RecoveredPlayerState); // Function PlayerParticipantWidget_v2.PlayerParticipantWidget_v2_C.OnAnyPlayerRecovered // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DesiredClassChanged(struct AShooterCharacter* NewValue); // Function PlayerParticipantWidget_v2.PlayerParticipantWidget_v2_C.DesiredClassChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void NumUltimatePointsChanged(int32_t NewValue, bool IsUltNewlyReady); // Function PlayerParticipantWidget_v2.PlayerParticipantWidget_v2_C.NumUltimatePointsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function PlayerParticipantWidget_v2.PlayerParticipantWidget_v2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnAwayPenaltyStateChanged(struct AShooterPlayerState* Owner, bool bIsPenalizedForBeingAway); // Function PlayerParticipantWidget_v2.PlayerParticipantWidget_v2_C.OnAwayPenaltyStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnVitalityDirtied(); // Function PlayerParticipantWidget_v2.PlayerParticipantWidget_v2_C.OnVitalityDirtied // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInventoryItemsChanged(); // Function PlayerParticipantWidget_v2.PlayerParticipantWidget_v2_C.OnInventoryItemsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_PlayerParticipantWidget_v2(int32_t EntryPoint); // Function PlayerParticipantWidget_v2.PlayerParticipantWidget_v2_C.ExecuteUbergraph_PlayerParticipantWidget_v2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

