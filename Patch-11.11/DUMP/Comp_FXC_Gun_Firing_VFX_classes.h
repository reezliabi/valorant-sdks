// BlueprintGeneratedClass Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C
// Size: 0x160 (Inherited: 0xe8)
struct UComp_FXC_Gun_Firing_VFX_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct AAresEquippable* OwningEquippable; // 0xf0(0x08)
	enum class PreviousFiringParticleBehaviorEnum PreviousFiringParticleBehavior; // 0xf8(0x01)
	enum class FiringParticleFrequencyEnum FiringParticleFrequency; // 0xf9(0x01)
	char pad_FA[0x6]; // 0xfa(0x06)
	struct TArray<struct UParticleSystemComponent*> ActiveEffects; // 0x100(0x10)
	struct TArray<struct FEquippableParticleEffect> FXs1P; // 0x110(0x10)
	struct TArray<struct FEquippableParticleEffect> FXs1PZoomed; // 0x120(0x10)
	struct TArray<struct FEquippableParticleEffect> FXs3P; // 0x130(0x10)
	struct UFiringEffectComponent* FiringComponent; // 0x140(0x08)
	double AttributeDrivenTimeDilation; // 0x148(0x08)
	struct TArray<struct UParticleSystemComponent*> AllActiveEffects; // 0x150(0x10)

	void DestroyAllActiveEffects(); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.DestroyAllActiveEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OverrideTimeDilation(double TimeDilation); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.OverrideTimeDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ShouldUseGrayscaleAltLUT(struct UParticleSystem* ParticleSystem, bool& OutShouldUseLUT1); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.ShouldUseGrayscaleAltLUT // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetLUTToUse(enum class EAresParticleVariantColor DefaultLUT, struct UParticleSystem* ParticleSystem, enum class EAresParticleVariantColor& OutLUT); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.GetLUTToUse // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void OverrideVariantColors(enum class EAresParticleVariantColor Variant Color, bool bGrayscaleAltVariant); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.OverrideVariantColors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get Preload Asset Paths From Particle Overrides(struct TArray<struct FStruct_ParticleOverrides>& ParticleOverrides, struct TArray<struct FSoftObjectPath>& PreloadAssetPaths); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.Get Preload Asset Paths From Particle Overrides // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OverrideParticleSystemMaterials(struct TArray<struct FStruct_ParticleOverrides>& ParticleOverrides, struct UParticleSystemComponent* ParticleSystem); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.OverrideParticleSystemMaterials // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void K2_GetPreloadAssetPaths(int32_t AssetTypes, struct TArray<struct FSoftObjectPath>& AssetPathsToPreload); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.K2_GetPreloadAssetPaths // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePreviousEffect(enum class PreviousFiringParticleBehaviorEnum Behavior); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.HandlePreviousEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void PlayFiringParticles(struct TArray<struct FEquippableParticleEffect>& FiringEffects, bool IsFirstPerson, bool Skip Override Variant Colors, struct TArray<struct UParticleSystemComponent*>& Registered effects); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.PlayFiringParticles // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandlePreviousEffects(); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.HandlePreviousEffects // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetEquippable(struct UObject* OnObject, struct AAresEquippable*& Equippable); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.GetEquippable // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void FxcOnStartedShooting(); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.FxcOnStartedShooting // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void FxcOnShot(int32_t ShotIndex, bool bTracerEnabled, bool bWasLastShot, struct TArray<struct FFiringResults>& FiringResults); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.FxcOnShot // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetEffect(); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void FxcOnRegisterFiringState_Event_1(struct UFiringStateComponent* FiringState); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.FxcOnRegisterFiringState_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnFiringParticleFinished(struct UParticleSystemComponent* PSystem); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.OnFiringParticleFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ApplyAttributeDrivenTimeDilation(float TimeDilation); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.ApplyAttributeDrivenTimeDilation // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Comp_FXC_Gun_Firing_VFX(int32_t EntryPoint); // Function Comp_FXC_Gun_Firing_VFX.Comp_FXC_Gun_Firing_VFX_C.ExecuteUbergraph_Comp_FXC_Gun_Firing_VFX // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

