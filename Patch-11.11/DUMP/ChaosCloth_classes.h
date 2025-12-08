// Class ChaosCloth.ChaosClothConfig
// Size: 0x120 (Inherited: 0x30)
struct UChaosClothConfig : UClothConfigCommon {
	enum class EClothMassMode MassMode; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float UniformMass; // 0x34(0x04)
	float TotalMass; // 0x38(0x04)
	float Density; // 0x3c(0x04)
	float MinPerParticleMass; // 0x40(0x04)
	struct FChaosClothWeightedValue EdgeStiffnessWeighted; // 0x44(0x08)
	struct FChaosClothWeightedValue BendingStiffnessWeighted; // 0x4c(0x08)
	bool bUseBendingElements; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	float BucklingRatio; // 0x58(0x04)
	struct FChaosClothWeightedValue BucklingStiffnessWeighted; // 0x5c(0x08)
	struct FChaosClothWeightedValue AreaStiffnessWeighted; // 0x64(0x08)
	float VolumeStiffness; // 0x6c(0x04)
	struct FChaosClothWeightedValue TetherStiffness; // 0x70(0x08)
	struct FChaosClothWeightedValue TetherScale; // 0x78(0x08)
	bool bUseGeodesicDistance; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float ShapeTargetStiffness; // 0x84(0x04)
	float CollisionThickness; // 0x88(0x04)
	float FrictionCoefficient; // 0x8c(0x04)
	bool bUseCCD; // 0x90(0x01)
	bool bUseSelfCollisions; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	float SelfCollisionThickness; // 0x94(0x04)
	float SelfCollisionFriction; // 0x98(0x04)
	bool bUseSelfIntersections; // 0x9c(0x01)
	bool bUseLegacyBackstop; // 0x9d(0x01)
	char pad_9E[0x2]; // 0x9e(0x02)
	float DampingCoefficient; // 0xa0(0x04)
	float LocalDampingCoefficient; // 0xa4(0x04)
	bool bUsePointBasedWindModel; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	struct FChaosClothWeightedValue Drag; // 0xac(0x08)
	struct FChaosClothWeightedValue Lift; // 0xb4(0x08)
	bool bUseGravityOverride; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	float GravityScale; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FVector Gravity; // 0xc8(0x18)
	struct FChaosClothWeightedValue Pressure; // 0xe0(0x08)
	struct FChaosClothWeightedValue AnimDriveStiffness; // 0xe8(0x08)
	struct FChaosClothWeightedValue AnimDriveDamping; // 0xf0(0x08)
	struct FVector LinearVelocityScale; // 0xf8(0x18)
	float AngularVelocityScale; // 0x110(0x04)
	float FictitiousAngularScale; // 0x114(0x04)
	bool bUseTetrahedralConstraints; // 0x118(0x01)
	bool bUseThinShellVolumeConstraints; // 0x119(0x01)
	bool bUseContinuousCollisionDetection; // 0x11a(0x01)
	char pad_11B[0x5]; // 0x11b(0x05)
};

// Class ChaosCloth.ChaosClothSharedSimConfig
// Size: 0x40 (Inherited: 0x30)
struct UChaosClothSharedSimConfig : UClothSharedConfigCommon {
	int32_t IterationCount; // 0x30(0x04)
	int32_t MaxIterationCount; // 0x34(0x04)
	int32_t SubdivisionCount; // 0x38(0x04)
	bool bUseLocalSpaceSimulation; // 0x3c(0x01)
	bool bUseXPBDConstraints; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
};

// Class ChaosCloth.ChaosClothingSimulationFactory
// Size: 0x30 (Inherited: 0x30)
struct UChaosClothingSimulationFactory : UClothingSimulationFactory {
};

// Class ChaosCloth.ChaosClothingInteractor
// Size: 0x58 (Inherited: 0x38)
struct UChaosClothingInteractor : UClothingInteractor {
	char pad_38[0x20]; // 0x38(0x20)

	void SetWind(struct FVector2D Drag, struct FVector2D Lift, float AirDensity, struct FVector WindVelocity); // Function ChaosCloth.ChaosClothingInteractor.SetWind // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7581840
	void SetVelocityScale(struct FVector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale); // Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7580db0
	void SetPressure(struct FVector2D Pressure); // Function ChaosCloth.ChaosClothingInteractor.SetPressure // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75816a0
	void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7582dc0
	void SetMaterial(struct FVector2D EdgeStiffness, struct FVector2D BendingStiffness, struct FVector2D AreaStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetMaterial // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7582ac0
	void SetLongRangeAttachmentLinear(float TetherStiffness, float TetherScale); // Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7582830
	void SetLongRangeAttachment(struct FVector2D TetherStiffness, struct FVector2D TetherScale); // Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75825e0
	void SetGravity(float GravityScale, bool bIsGravityOverridden, struct FVector GravityOverride); // Function ChaosCloth.ChaosClothingInteractor.SetGravity // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x75813d0
	void SetDamping(float DampingCoefficient, float LocalDampingCoefficient); // Function ChaosCloth.ChaosClothingInteractor.SetDamping // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7581ea0
	void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness); // Function ChaosCloth.ChaosClothingInteractor.SetCollision // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7582280
	void SetBackstop(bool bEnabled); // Function ChaosCloth.ChaosClothingInteractor.SetBackstop // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x75820f0
	void SetAnimDriveLinear(float AnimDriveStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x75812e0
	void SetAnimDrive(struct FVector2D AnimDriveStiffness, struct FVector2D AnimDriveDamping); // Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7581090
	void SetAerodynamics(float DragCoefficient, float LiftCoefficient, struct FVector WindVelocity); // Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7581bc0
	void ResetAndTeleport(bool bReset, bool bTeleport); // Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7580c20
};

// Class ChaosCloth.ChaosClothingSimulationInteractor
// Size: 0xb8 (Inherited: 0x98)
struct UChaosClothingSimulationInteractor : UClothingSimulationInteractor {
	char pad_98[0x20]; // 0x98(0x20)
};

