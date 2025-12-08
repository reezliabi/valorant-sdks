// BlueprintGeneratedClass Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C
// Size: 0x268 (Inherited: 0xe8)
struct UComp_FXC_SpawnParticle_ShooterCharacter_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct UFXSystemComponent* VFX_1P; // 0xf0(0x08)
	struct UFXSystemComponent* VFX_3P; // 0xf8(0x08)
	struct UFXSystemAsset* EmitterTemplate1P; // 0x100(0x08)
	struct FName AttachPoint1P; // 0x108(0x0c)
	char pad_114[0x4]; // 0x114(0x04)
	struct FVector EmitterOffset1P; // 0x118(0x18)
	struct FRotator EmitterRotation1P; // 0x130(0x18)
	struct FVector EmitterScale1P; // 0x148(0x18)
	bool Attach1PEffectToCamera; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	double ParticleStartDelay1P; // 0x168(0x08)
	double WarmupTime1P; // 0x170(0x08)
	struct FTimerHandle StartTimer1P; // 0x178(0x08)
	struct UFXSystemAsset* EmitterTemplate3P; // 0x180(0x08)
	struct FName AttachPoint3P; // 0x188(0x0c)
	char pad_194[0x4]; // 0x194(0x04)
	struct FVector EmitterOffset3P; // 0x198(0x18)
	struct FRotator EmitterRotation3P; // 0x1b0(0x18)
	struct FVector EmitterScale3P; // 0x1c8(0x18)
	double ParticleStartDelay3P; // 0x1e0(0x08)
	double WarmupTime3P; // 0x1e8(0x08)
	struct FTimerHandle StartTimer3P; // 0x1f0(0x08)
	enum class Struct_ParticleStopBehavior StopEffectBehavior; // 0x1f8(0x01)
	bool StopEmitterOnEffectStop; // 0x1f9(0x01)
	bool StopEmitterOnEffectEndPlay; // 0x1fa(0x01)
	bool AttachToCosmeticMesh; // 0x1fb(0x01)
	char pad_1FC[0x4]; // 0x1fc(0x04)
	struct FMulticastInlineDelegate OnEmitterSpawned1P; // 0x200(0x10)
	struct FMulticastInlineDelegate OnEmitterSpawned3P; // 0x210(0x10)
	struct FMulticastInlineDelegate OnPreEmitterSpawn1P; // 0x220(0x10)
	struct FMulticastInlineDelegate OnPreEmitterSpawn3P; // 0x230(0x10)
	bool DestroyEffectIfCameraSocketDoesNotExist; // 0x240(0x01)
	bool SpawnOnStartEffect; // 0x241(0x01)
	bool ParticlesActive; // 0x242(0x01)
	char pad_243[0x5]; // 0x243(0x05)
	struct AActor* Target; // 0x248(0x08)
	struct UObject* Context; // 0x250(0x08)
	bool ParticlesManuallyQueued; // 0x258(0x01)
	char pad_259[0x7]; // 0x259(0x07)
	double AttributeDrivenTimeDilation; // 0x260(0x08)

	void SetTimeDilation(double TimeDilation); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.SetTimeDilation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetClassValues(); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.ResetClassValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void IsValidTarget(struct AActor* Actor, bool& Valid); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.IsValidTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetEffectCharacter(struct AActor* Target, struct UObject* Context, struct AShooterCharacter*& Character); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.GetEffectCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetAttachComponent3P(struct AActor* Target, struct UObject* Context, struct USceneComponent*& ParentComponent3P); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.GetAttachComponent3P // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetAttachComponent1P(struct AActor* Target, struct UObject* Context, struct USceneComponent*& ParentComponent1P); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.GetAttachComponent1P // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void TrySetVisibility(struct USceneComponent* VFX, bool bNewVisibility); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.TrySetVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetEmitter3P(struct UParticleSystemComponent*& Emitter3P); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.GetEmitter3P // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetEmitter1P(struct UParticleSystemComponent*& Emitter1P); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.GetEmitter1P // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Event Update Visibility(); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.Event Update Visibility // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Event Deactivate Particles(); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.Event Deactivate Particles // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Destroy Particles(); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.Event Destroy Particles // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void StartDelay1PFinished(); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.StartDelay1PFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ResetEffect(); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void StartDelay3PFinished(); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.StartDelay3PFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ManualStart(); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.ManualStart // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ApplyAttributeDrivenTimeDilation(float TimeDilation); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.ApplyAttributeDrivenTimeDilation // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Comp_FXC_SpawnParticle_ShooterCharacter(int32_t EntryPoint); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.ExecuteUbergraph_Comp_FXC_SpawnParticle_ShooterCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnPreEmitterSpawn3P__DelegateSignature(); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.OnPreEmitterSpawn3P__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnPreEmitterSpawn1P__DelegateSignature(); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.OnPreEmitterSpawn1P__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEmitterSpawned3P__DelegateSignature(struct UParticleSystemComponent* Emitter3P); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.OnEmitterSpawned3P__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnEmitterSpawned1P__DelegateSignature(struct UParticleSystemComponent* Emitter1P); // Function Comp_FXC_SpawnParticle_ShooterCharacter.Comp_FXC_SpawnParticle_ShooterCharacter_C.OnEmitterSpawned1P__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

