// BlueprintGeneratedClass ShootingRangeController.ShootingRangeController_C
// Size: 0x1138 (Inherited: 0x10b0)
struct AShootingRangeController_C : ABaseController_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x10b0(0x08)
	struct UShootableSwitchHoverComponent_C* ShootableSwitchHoverComponent; // 0x10b8(0x08)
	struct URateLimiterComponent* RateLimiter; // 0x10c0(0x08)
	struct UComp_Actor_MultiTargetHandler_FXC_C* Comp_Actor_MultiTargetHandler_FXC; // 0x10c8(0x08)
	bool CharacterSelectActive; // 0x10d0(0x01)
	char pad_10D1[0x7]; // 0x10d1(0x07)
	struct UCharacterDataAsset* SelectedCharacter; // 0x10d8(0x08)
	bool WaitingForDefaultCharacter; // 0x10e0(0x01)
	bool LoadingNewCharacter; // 0x10e1(0x01)
	char pad_10E2[0x6]; // 0x10e2(0x06)
	struct ATriggerVolume* CharacterSelectValidVolume; // 0x10e8(0x08)
	struct FEffectID FXC_ID_InputHUD; // 0x10f0(0x20)
	struct APawn* InputHUD_Pawn; // 0x1110(0x08)
	struct AAimBotsManager_C* AimbotsManager; // 0x1118(0x08)
	struct FMulticastInlineDelegate OnCharacterSelectActiveChanged; // 0x1120(0x10)
	struct UCharacterDataAsset* PreviousCharacter; // 0x1130(0x08)

	void OpenRangeTargetPracticeSettingsWidget(struct ARangeTargetPracticeWindow_Console_C* RangeTargetPracticeWindow); // Function ShootingRangeController.ShootingRangeController_C.OpenRangeTargetPracticeSettingsWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OpenRangeSkillTestSettingsWidget(); // Function ShootingRangeController.ShootingRangeController_C.OpenRangeSkillTestSettingsWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void CreateCharacterSelectWidget(struct UWBP_InGameCharacterSelect_Base_C*& CharacterSelectWidget); // Function ShootingRangeController.ShootingRangeController_C.CreateCharacterSelectWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetAimBotsManager(struct AAimBotsManager_C*& AimbotsManager); // Function ShootingRangeController.ShootingRangeController_C.GetAimBotsManager // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void TurnOffSwapCharacterEffect(); // Function ShootingRangeController.ShootingRangeController_C.TurnOffSwapCharacterEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TurnOnSwapCharacterEffect(); // Function ShootingRangeController.ShootingRangeController_C.TurnOnSwapCharacterEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ChangeCharacterSelectCharacter(struct UCharacterDataAsset* NewCharacter); // Function ShootingRangeController.ShootingRangeController_C.ChangeCharacterSelectCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InpActEvt_CharacterSelect_K2Node_InputActionEvent_1(struct FKey Key); // Function ShootingRangeController.ShootingRangeController_C.InpActEvt_CharacterSelect_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x19be2f0
	void OpenCharacterSelectUI(); // Function ShootingRangeController.ShootingRangeController_C.OpenCharacterSelectUI // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnSelectionConfirmed(struct UCharacterDataAsset* Character); // Function ShootingRangeController.ShootingRangeController_C.OnSelectionConfirmed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCharacterSelectUIClosed(); // Function ShootingRangeController.ShootingRangeController_C.OnCharacterSelectUIClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StartCharacterSelect(); // Function ShootingRangeController.ShootingRangeController_C.StartCharacterSelect // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetupAndStartCharacterSelect(); // Function ShootingRangeController.ShootingRangeController_C.SetupAndStartCharacterSelect // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void LoadAndSwapCharacter(); // Function ShootingRangeController.ShootingRangeController_C.LoadAndSwapCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ServerLoadAndSwapCharacter(struct UCharacterDataAsset* Character); // Function ShootingRangeController.ShootingRangeController_C.ServerLoadAndSwapCharacter // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ClientCharacterSwapComplete(); // Function ShootingRangeController.ShootingRangeController_C.ClientCharacterSwapComplete // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function ShootingRangeController.ShootingRangeController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void RetryDesiredClass(); // Function ShootingRangeController.ShootingRangeController_C.RetryDesiredClass // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceivePossess(struct APawn* PossessedPawn); // Function ShootingRangeController.ShootingRangeController_C.ReceivePossess // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveUnPossess(struct APawn* UnpossessedPawn); // Function ShootingRangeController.ShootingRangeController_C.ReceiveUnPossess // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void OnActorBeginOverlap_Event_1(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function ShootingRangeController.ShootingRangeController_C.OnActorBeginOverlap_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnActorEndOverlap_Event_1(struct AActor* OverlappedActor, struct AActor* OtherActor); // Function ShootingRangeController.ShootingRangeController_C.OnActorEndOverlap_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateMissionSettings(struct AGameObject_PracticeModule_Parent_C* MissionModule, int32_t Difficulty, bool InfiniteAmmo); // Function ShootingRangeController.ShootingRangeController_C.UpdateMissionSettings // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ServerEndMissionModule(struct AGameObject_PracticeModule_Parent_C* MissionModule); // Function ShootingRangeController.ShootingRangeController_C.ServerEndMissionModule // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void EndMissionModule(struct AGameObject_PracticeModule_Parent_C* MissionModule); // Function ShootingRangeController.ShootingRangeController_C.EndMissionModule // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetBots(); // Function ShootingRangeController.ShootingRangeController_C.ResetBots // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ServerResetBots(); // Function ShootingRangeController.ShootingRangeController_C.ServerResetBots // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetInfiniteAmmoEnabled(bool Enabled); // Function ShootingRangeController.ShootingRangeController_C.SetInfiniteAmmoEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToggleShootingRangeBotsStrafe(); // Function ShootingRangeController.ShootingRangeController_C.ToggleShootingRangeBotsStrafe // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetShootingRangeBotArmorEnabled(bool Enabled); // Function ShootingRangeController.ShootingRangeController_C.SetShootingRangeBotArmorEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetActiveShootingRangeChallenge(struct FStruct_AimBots_ChallengeSettings ChallengeSettings); // Function ShootingRangeController.ShootingRangeController_C.SetActiveShootingRangeChallenge // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ToggleFreeShooting(); // Function ShootingRangeController.ShootingRangeController_C.ToggleFreeShooting // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ServerToggleFreeShooting(); // Function ShootingRangeController.ShootingRangeController_C.ServerToggleFreeShooting // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SendShootingRangeSettingsToServer(); // Function ShootingRangeController.ShootingRangeController_C.SendShootingRangeSettingsToServer // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ServerUpdateShootingRangeSettings(struct FShootingRangeSettings ShootingRangeSettings); // Function ShootingRangeController.ShootingRangeController_C.ServerUpdateShootingRangeSettings // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void loadcompleted(struct TSoftClassPtr<UObject> Class, bool bSuccess); // Function ShootingRangeController.ShootingRangeController_C.loadcompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ServerUpdateTargetPracticeSettings(int32_t DistanceIndex, bool BotEnabled, bool IsInitSettingsFlow); // Function ShootingRangeController.ShootingRangeController_C.ServerUpdateTargetPracticeSettings // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SendTargetPracticeSettingsToServer(); // Function ShootingRangeController.ShootingRangeController_C.SendTargetPracticeSettingsToServer // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Client Update Range Settings(); // Function ShootingRangeController.ShootingRangeController_C.Client Update Range Settings // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_ShootingRangeController(int32_t EntryPoint); // Function ShootingRangeController.ShootingRangeController_C.ExecuteUbergraph_ShootingRangeController // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnCharacterSelectActiveChanged__DelegateSignature(bool Active); // Function ShootingRangeController.ShootingRangeController_C.OnCharacterSelectActiveChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

