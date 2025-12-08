// BlueprintGeneratedClass ModelViewer_Equipables.ModelViewer_Equipables_C
// Size: 0x582 (Inherited: 0x460)
struct AModelViewer_Equipables_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UStaticMeshComponent* Sphere; // 0x468(0x08)
	struct UDirectionalLightComponent* DirectionalLight; // 0x470(0x08)
	struct USkeletalMeshComponent* ExampleWeapon; // 0x478(0x08)
	struct UStaticMeshComponent* Ground; // 0x480(0x08)
	struct UStaticMeshComponent* MV_Cube; // 0x488(0x08)
	struct UChildActorComponent* Display Actor; // 0x490(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x498(0x08)
	struct UPointLightComponent* Main Point Light; // 0x4a0(0x08)
	struct USceneComponent* Scene; // 0x4a8(0x08)
	struct ASphereReflectionCapture* Default Ares Ambient Reflection; // 0x4b0(0x08)
	double Default FOV; // 0x4b8(0x08)
	double Min FOV; // 0x4c0(0x08)
	double Max FOV; // 0x4c8(0x08)
	double Current FOV; // 0x4d0(0x08)
	double Desired FOV; // 0x4d8(0x08)
	struct FRotator Current Rotation; // 0x4e0(0x18)
	struct FRotator Desired Rotation; // 0x4f8(0x18)
	bool Focus Gunbuddy; // 0x510(0x01)
	bool Loading Equippable; // 0x511(0x01)
	char pad_512[0x6]; // 0x512(0x06)
	struct FVector Starting Position; // 0x518(0x18)
	double Max Pan Width; // 0x530(0x08)
	double Current Pan; // 0x538(0x08)
	double Desired Pan; // 0x540(0x08)
	struct ASphereReflectionCapture* Gun Buddy Ares Ambient Reflection Override; // 0x548(0x08)
	struct FMulticastInlineDelegate LoadingComplete; // 0x550(0x10)
	double FOV Offset Deferred; // 0x560(0x08)
	int32_t User Counter; // 0x568(0x04)
	int32_t User Visibility Counter; // 0x56c(0x04)
	struct UModelViewerPanel_C* OwningModelViewerPanel; // 0x570(0x08)
	struct AActor* Actor Class; // 0x578(0x08)
	bool HasPreviewed; // 0x580(0x01)
	bool HasEnabledCamera; // 0x581(0x01)

	void Reset Scene Capture(); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.Reset Scene Capture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Enable Camera(); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.Enable Camera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetActorVisibility(bool bShouldShow); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.SetActorVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Scene Capture Field Of View(double Field of View); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.Set Scene Capture Field Of View // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set FOV Immediate(double FOV); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.Set FOV Immediate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set FOV Values(double In Default FOV, double In Min FOV, double In Max FOV); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.Set FOV Values // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTotem(struct UTotemHandle* TotemHandle); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.SetTotem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Determine Camera Data Generic(bool UseModelViewerOverrides, double InputDefaultFOV, double Input Max FOV, double Input Min FOV, struct FVector Input Camera Position, double Input Current Pan, double Input Desired Pan, double Input Max Pan Width, double Base Default FOV, double Base Max FOV, double Base Min FOV, struct FVector Base Camera Position); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.Determine Camera Data Generic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Determine Camera Data for JuiceBox(struct UJuiceBoxUIData* Juice Box UI Data); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.Determine Camera Data for JuiceBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Determine Camera Data For Skins(struct AMenuDisplayEquippable_C* Display Equippable, struct UEquippableSkinUIData* Skin UI Data, struct UEquippableUIData* Equippable UI Data); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.Determine Camera Data For Skins // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetJuiceBox(struct UJuiceBoxDataAsset* JuiceBoxDataAsset); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.SetJuiceBox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Update Ares Ambient Reflection(); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.Update Ares Ambient Reflection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Camera Location(struct FVector Pan Offset); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.Set Camera Location // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Spray(struct USprayHandle* Spray Handle); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.Set Spray // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Clear And Disable Camera(bool Clear scene); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.Clear And Disable Camera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Pan(double Pan Increment); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.Set Pan // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Starting Position(struct FVector CameraPosition); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.Set Starting Position // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Gunbuddy(struct UEquippableCharmLevelDataAsset* CharmAsset); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.Set Gunbuddy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HideOtherObjects(); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.HideOtherObjects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Reset Zoom(); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.Reset Zoom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Zoom(double Zoom); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.Set Zoom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Rotation(double X (Roll), double Z (Yaw)); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.Set Rotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Set Skin(struct UEquippableSkinDataAsset* EquippableSkinAsset, struct UEquippableSkinChromaDataAsset* EquippableChromaAsset, int32_t Level, struct UEquippableCharmDataAsset* EquippableCharmAsset, int32_t CharmLevel, bool Focus Gunbuddy, bool GunbuddyUpdateOnly); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.Set Skin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get Equippables(struct AMenuDisplayEquippable_C*& DisplayEquippable); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.Get Equippables // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void ReceiveTick(float DeltaSeconds); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_ModelViewer_Equipables(int32_t EntryPoint); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.ExecuteUbergraph_ModelViewer_Equipables // (Final|UbergraphFunction) // @ game+0x19be2f0
	void LoadingComplete__DelegateSignature(); // Function ModelViewer_Equipables.ModelViewer_Equipables_C.LoadingComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

