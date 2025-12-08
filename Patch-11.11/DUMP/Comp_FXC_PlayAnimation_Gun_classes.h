// BlueprintGeneratedClass Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C
// Size: 0x158 (Inherited: 0xe8)
struct UComp_FXC_PlayAnimation_Gun_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct UAnimMontage* 1P_Cosmetic_Animation; // 0xf0(0x08)
	struct UAnimMontage* 1P_Animation; // 0xf8(0x08)
	struct UAnimMontage* 3P_Animation; // 0x100(0x08)
	struct UAnimMontage* LastShot_1P_Animation; // 0x108(0x08)
	struct UAnimMontage* LastShot_3P_Animation; // 0x110(0x08)
	bool StopAnimWhenEffectIsDestroyed; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	double 1P_PlayRate; // 0x120(0x08)
	double 3P_PlayRate; // 0x128(0x08)
	struct AAresEquippable* OwningEquippable; // 0x130(0x08)
	double TimeModifier; // 0x138(0x08)
	struct UFiringStateComponent* FiringStateComponent; // 0x140(0x08)
	struct UFiringEffectComponent* FiringEffect; // 0x148(0x08)
	double AttributeDrivenTimeDilation; // 0x150(0x08)

	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyTimeDilation(double NewTimeDilation); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.ApplyTimeDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetCurrentMontage(bool bLastShot, struct UAnimMontage*& Montage); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.GetCurrentMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetPlayRate(double BasePlayRate, double TimeModifier, double& PlayRate); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.GetPlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetEquippable(struct UObject* OnObject, struct AAresEquippable*& Equippable); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.GetEquippable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnNotifyEnd_141CBB2642EBFA18A8554496CC9AEC69(struct FName NotifyName); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.OnNotifyEnd_141CBB2642EBFA18A8554496CC9AEC69 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnNotifyBegin_141CBB2642EBFA18A8554496CC9AEC69(struct FName NotifyName); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.OnNotifyBegin_141CBB2642EBFA18A8554496CC9AEC69 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInterrupted_141CBB2642EBFA18A8554496CC9AEC69(struct FName NotifyName); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.OnInterrupted_141CBB2642EBFA18A8554496CC9AEC69 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBlendOut_141CBB2642EBFA18A8554496CC9AEC69(struct FName NotifyName); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.OnBlendOut_141CBB2642EBFA18A8554496CC9AEC69 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCompleted_141CBB2642EBFA18A8554496CC9AEC69(struct FName NotifyName); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.OnCompleted_141CBB2642EBFA18A8554496CC9AEC69 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnNotifyEnd_F51F86FC4373F93C6D03F492F01E9F83(struct FName NotifyName); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.OnNotifyEnd_F51F86FC4373F93C6D03F492F01E9F83 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnNotifyBegin_F51F86FC4373F93C6D03F492F01E9F83(struct FName NotifyName); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.OnNotifyBegin_F51F86FC4373F93C6D03F492F01E9F83 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInterrupted_F51F86FC4373F93C6D03F492F01E9F83(struct FName NotifyName); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.OnInterrupted_F51F86FC4373F93C6D03F492F01E9F83 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBlendOut_F51F86FC4373F93C6D03F492F01E9F83(struct FName NotifyName); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.OnBlendOut_F51F86FC4373F93C6D03F492F01E9F83 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCompleted_F51F86FC4373F93C6D03F492F01E9F83(struct FName NotifyName); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.OnCompleted_F51F86FC4373F93C6D03F492F01E9F83 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnNotifyEnd_67EC11014F25EC1BD3CBB1BD4DEA4A9E(struct FName NotifyName); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.OnNotifyEnd_67EC11014F25EC1BD3CBB1BD4DEA4A9E // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnNotifyBegin_67EC11014F25EC1BD3CBB1BD4DEA4A9E(struct FName NotifyName); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.OnNotifyBegin_67EC11014F25EC1BD3CBB1BD4DEA4A9E // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnInterrupted_67EC11014F25EC1BD3CBB1BD4DEA4A9E(struct FName NotifyName); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.OnInterrupted_67EC11014F25EC1BD3CBB1BD4DEA4A9E // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnBlendOut_67EC11014F25EC1BD3CBB1BD4DEA4A9E(struct FName NotifyName); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.OnBlendOut_67EC11014F25EC1BD3CBB1BD4DEA4A9E // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCompleted_67EC11014F25EC1BD3CBB1BD4DEA4A9E(struct FName NotifyName); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.OnCompleted_67EC11014F25EC1BD3CBB1BD4DEA4A9E // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void FxcOnShot(int32_t ShotIndex, bool bTracerEnabled, bool bWasLastShot, struct TArray<struct FFiringResults>& FiringResults); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.FxcOnShot // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StopAnimations(); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.StopAnimations // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetEffect(); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void FxcOnRegisterFiringState_Event_1(struct UFiringStateComponent* FiringState); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.FxcOnRegisterFiringState_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyAttributeDrivenTimeDilation(float TimeDilation); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.ApplyAttributeDrivenTimeDilation // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Comp_FXC_PlayAnimation_Gun(int32_t EntryPoint); // Function Comp_FXC_PlayAnimation_Gun.Comp_FXC_PlayAnimation_Gun_C.ExecuteUbergraph_Comp_FXC_PlayAnimation_Gun // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

