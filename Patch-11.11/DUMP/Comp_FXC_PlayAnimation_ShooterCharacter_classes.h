// BlueprintGeneratedClass Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C
// Size: 0x1e1 (Inherited: 0xe8)
struct UComp_FXC_PlayAnimation_ShooterCharacter_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct UAnimMontage* 1P_Animation; // 0xf0(0x08)
	struct UAnimMontage* 1P_Overlay_Animation; // 0xf8(0x08)
	struct UAnimMontage* 3P_Animation; // 0x100(0x08)
	struct UAnimMontage* 3P_Cosmetic_Animation; // 0x108(0x08)
	bool StopAnimWhenEffectIsDestroyed; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	double StopAnimBlendOutTime; // 0x118(0x08)
	double 1P_PlayRate; // 0x120(0x08)
	double 3P_PlayRate; // 0x128(0x08)
	struct AShooterCharacter* OwningShooterCharacter; // 0x130(0x08)
	double StartTime; // 0x138(0x08)
	double TimeModifier; // 0x140(0x08)
	bool DestroyEffectWhenAnimIsInterrupted; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct TArray<struct FStruct_PlayingMontage> ActiveMontages; // 0x150(0x10)
	struct FMulticastInlineDelegate DispatchMontageStopped; // 0x160(0x10)
	bool bManualStart; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
	struct AAresEquippable* AssociatedEquippable; // 0x178(0x08)
	double MontageEndTime; // 0x180(0x08)
	bool Debug Montage State; // 0x188(0x01)
	bool 3PDelayDeadAndSettled; // 0x189(0x01)
	bool Stop All Montages On Play; // 0x18a(0x01)
	bool UseAngleMatching3P_Animation; // 0x18b(0x01)
	int32_t AngleMatchInterval; // 0x18c(0x04)
	struct TMap<int32_t, struct UAnimMontage*> AngleTo3P_Animation; // 0x190(0x50)
	bool DebugAngleMatching; // 0x1e0(0x01)

	void ValidateAngleMatchingInterval(); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.ValidateAngleMatchingInterval // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AngleMatchAnim(); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.AngleMatchAnim // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void RoundPitchToInterval(int32_t& RoundedPitch); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.RoundPitchToInterval // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayAndTrackMontage(struct UAnimInstance* Instance, struct UAnimMontage* Montage, double PlayRate, double StartTime); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.PlayAndTrackMontage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get Time Modifier(double& TimeModifier); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.Get Time Modifier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Update Play Rates(double New 1P Play Rate, double New 3P Play Rate); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.Update Play Rates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetMontagePosition(struct UAnimMontage* InMontage, double& OutMontagePosition); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.GetMontagePosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTimeDilation(double TimeDilation); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.SetTimeDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GoToMontageSection(struct FString SectionName); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.GoToMontageSection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetPlayRate(double BasePlayRate, double TimeModifier, double& PlayRate); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.GetPlayRate // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void PlayAnimation(double StartTime, bool FirstPerson); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.PlayAnimation // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void MontageStopped(struct UAnimMontage* Montage, bool bInterrupted); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.MontageStopped // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StopActiveMontages(); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.StopActiveMontages // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UnbindMontageEvents(); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.UnbindMontageEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TriggerManualStart(); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.TriggerManualStart // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void AssociateAnim(struct UAnimationAsset* Anim); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.AssociateAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void DelayedMontageUnbind(); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.DelayedMontageUnbind // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyAttributeDrivenTimeDilation(float TimeDilation); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.ApplyAttributeDrivenTimeDilation // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Comp_FXC_PlayAnimation_ShooterCharacter(int32_t EntryPoint); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.ExecuteUbergraph_Comp_FXC_PlayAnimation_ShooterCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void DispatchMontageStopped__DelegateSignature(); // Function Comp_FXC_PlayAnimation_ShooterCharacter.Comp_FXC_PlayAnimation_ShooterCharacter_C.DispatchMontageStopped__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

