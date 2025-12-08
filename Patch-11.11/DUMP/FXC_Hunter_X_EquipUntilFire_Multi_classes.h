// BlueprintGeneratedClass FXC_Hunter_X_EquipUntilFire_Multi.FXC_Hunter_X_EquipUntilFire_Multi_C
// Size: 0x6f8 (Inherited: 0x600)
struct AFXC_Hunter_X_EquipUntilFire_Multi_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x600(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic; // 0x608(0x08)
	struct UParticleSystemComponent* Arrow; // 0x610(0x08)
	struct UParticleSystemComponent* BeamParticle2; // 0x618(0x08)
	struct UParticleSystemComponent* BeamParticle1; // 0x620(0x08)
	struct UParticleSystemComponent* 3P_Particle; // 0x628(0x08)
	struct UParticleSystemComponent* 1P_Particle; // 0x630(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x638(0x08)
	struct FVector Timeline_3_SizeB_688572C1433704300251B2A66AE60108; // 0x640(0x18)
	struct FVector Timeline_3_SizeA_688572C1433704300251B2A66AE60108; // 0x658(0x18)
	enum class ETimelineDirection Timeline_3__Direction_688572C1433704300251B2A66AE60108; // 0x670(0x01)
	char pad_671[0x7]; // 0x671(0x07)
	struct UTimelineComponent* Timeline_4; // 0x678(0x08)
	float Timeline_4_BowEmissive_D73111764FB2557FED0A11ADC3A345BC; // 0x680(0x04)
	enum class ETimelineDirection Timeline_4__Direction_D73111764FB2557FED0A11ADC3A345BC; // 0x684(0x01)
	char pad_685[0x3]; // 0x685(0x03)
	struct UTimelineComponent* Timeline_5; // 0x688(0x08)
	float Timeline_2_Alpha_Dissolve_Opacity_D11D88DB47673BDB291F2D8A229F35BA; // 0x690(0x04)
	enum class ETimelineDirection Timeline_2__Direction_D11D88DB47673BDB291F2D8A229F35BA; // 0x694(0x01)
	char pad_695[0x3]; // 0x695(0x03)
	struct UTimelineComponent* Timeline_3; // 0x698(0x08)
	float Timeline_1_Alpha_Dissolve_Opacity_59E2065844133E38BDD1D1B3AAB98B8D; // 0x6a0(0x04)
	enum class ETimelineDirection Timeline_1__Direction_59E2065844133E38BDD1D1B3AAB98B8D; // 0x6a4(0x01)
	char pad_6A5[0x3]; // 0x6a5(0x03)
	struct UTimelineComponent* Timeline_2; // 0x6a8(0x08)
	float Timeline_0_Alpha_Dissolve_Opacity_85DC043846D1F17BAA1E61BF9382F9A4; // 0x6b0(0x04)
	enum class ETimelineDirection Timeline_0__Direction_85DC043846D1F17BAA1E61BF9382F9A4; // 0x6b4(0x01)
	char pad_6B5[0x3]; // 0x6b5(0x03)
	struct UTimelineComponent* Timeline_1; // 0x6b8(0x08)
	struct UMaterialInstanceDynamic* DynamicStringMaterial; // 0x6c0(0x08)
	struct AAbility_Hunter_X_LaserMulti_C* Equippable; // 0x6c8(0x08)
	struct UMaterialInstanceDynamic* DynamicArrowMaterial; // 0x6d0(0x08)
	struct UMaterialInstanceDynamic* DynamicBowMaterial; // 0x6d8(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0x6e0(0x08)
	int32_t ShotFired; // 0x6e8(0x04)
	char pad_6EC[0x4]; // 0x6ec(0x04)
	struct UAkAudioEvent* SFX_EquippedLoop; // 0x6f0(0x08)

	void CheckStateArrowDeactivate(); // Function FXC_Hunter_X_EquipUntilFire_Multi.FXC_Hunter_X_EquipUntilFire_Multi_C.CheckStateArrowDeactivate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Timeline_0__FinishedFunc(); // Function FXC_Hunter_X_EquipUntilFire_Multi.FXC_Hunter_X_EquipUntilFire_Multi_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Timeline_0__UpdateFunc(); // Function FXC_Hunter_X_EquipUntilFire_Multi.FXC_Hunter_X_EquipUntilFire_Multi_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Timeline_1__FinishedFunc(); // Function FXC_Hunter_X_EquipUntilFire_Multi.FXC_Hunter_X_EquipUntilFire_Multi_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Timeline_1__UpdateFunc(); // Function FXC_Hunter_X_EquipUntilFire_Multi.FXC_Hunter_X_EquipUntilFire_Multi_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Timeline_2__FinishedFunc(); // Function FXC_Hunter_X_EquipUntilFire_Multi.FXC_Hunter_X_EquipUntilFire_Multi_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Timeline_2__UpdateFunc(); // Function FXC_Hunter_X_EquipUntilFire_Multi.FXC_Hunter_X_EquipUntilFire_Multi_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Timeline_4__FinishedFunc(); // Function FXC_Hunter_X_EquipUntilFire_Multi.FXC_Hunter_X_EquipUntilFire_Multi_C.Timeline_4__FinishedFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Timeline_4__UpdateFunc(); // Function FXC_Hunter_X_EquipUntilFire_Multi.FXC_Hunter_X_EquipUntilFire_Multi_C.Timeline_4__UpdateFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Timeline_3__FinishedFunc(); // Function FXC_Hunter_X_EquipUntilFire_Multi.FXC_Hunter_X_EquipUntilFire_Multi_C.Timeline_3__FinishedFunc // (BlueprintEvent) // @ game+0x19be2f0
	void Timeline_3__UpdateFunc(); // Function FXC_Hunter_X_EquipUntilFire_Multi.FXC_Hunter_X_EquipUntilFire_Multi_C.Timeline_3__UpdateFunc // (BlueprintEvent) // @ game+0x19be2f0
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_Hunter_X_EquipUntilFire_Multi.FXC_Hunter_X_EquipUntilFire_Multi_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_Hunter_X_EquipUntilFire_Multi.FXC_Hunter_X_EquipUntilFire_Multi_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void StopEquipTimeline(); // Function FXC_Hunter_X_EquipUntilFire_Multi.FXC_Hunter_X_EquipUntilFire_Multi_C.StopEquipTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveTick(float DeltaSeconds); // Function FXC_Hunter_X_EquipUntilFire_Multi.FXC_Hunter_X_EquipUntilFire_Multi_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function FXC_Hunter_X_EquipUntilFire_Multi.FXC_Hunter_X_EquipUntilFire_Multi_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function FXC_Hunter_X_EquipUntilFire_Multi.FXC_Hunter_X_EquipUntilFire_Multi_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void EffectDataUpdated(); // Function FXC_Hunter_X_EquipUntilFire_Multi.FXC_Hunter_X_EquipUntilFire_Multi_C.EffectDataUpdated // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_FXC_Hunter_X_EquipUntilFire_Multi(int32_t EntryPoint); // Function FXC_Hunter_X_EquipUntilFire_Multi.FXC_Hunter_X_EquipUntilFire_Multi_C.ExecuteUbergraph_FXC_Hunter_X_EquipUntilFire_Multi // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
};

