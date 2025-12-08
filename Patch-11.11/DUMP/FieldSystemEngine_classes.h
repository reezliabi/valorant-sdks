// Class FieldSystemEngine.FieldSystemActor
// Size: 0x468 (Inherited: 0x460)
struct AFieldSystemActor : AActor {
	struct UFieldSystemComponent* FieldSystemComponent; // 0x460(0x08)
};

// Class FieldSystemEngine.FieldSystem
// Size: 0x40 (Inherited: 0x30)
struct UFieldSystem : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class FieldSystemEngine.FieldSystemComponent
// Size: 0x760 (Inherited: 0x690)
struct UFieldSystemComponent : UPrimitiveComponent {
	struct UFieldSystem* FieldSystem; // 0x688(0x08)
	bool bIsWorldField; // 0x690(0x01)
	bool bIsChaosField; // 0x691(0x01)
	struct TArray<struct TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x698(0x10)
	struct FFieldObjectCommands ConstructionCommands; // 0x6a8(0x30)
	struct FFieldObjectCommands BufferCommands; // 0x6d8(0x30)
	char pad_70A[0x56]; // 0x70a(0x56)

	void ResetFieldSystem(); // Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34e5fa0
	void RemovePersistentFields(); // Function FieldSystemEngine.FieldSystemComponent.RemovePersistentFields // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34e62d0
	void ApplyUniformVectorFalloffForce(bool Enabled, struct FVector Position, struct FVector Direction, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34e6c10
	void ApplyStrainField(bool Enabled, struct FVector Position, float Radius, float Magnitude, int32_t Iterations); // Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34e6890
	void ApplyStayDynamicField(bool Enabled, struct FVector Position, float Radius); // Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34e7600
	void ApplyRadialVectorFalloffForce(bool Enabled, struct FVector Position, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34e6f90
	void ApplyRadialForce(bool Enabled, struct FVector Position, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34e7280
	void ApplyPhysicsField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34e65c0
	void ApplyLinearForce(bool Enabled, struct FVector Direction, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34e7850
	void AddPersistentField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddPersistentField // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34e62f0
	void AddFieldCommand(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34e6000
};

// Class FieldSystemEngine.FieldSystemMetaData
// Size: 0xd8 (Inherited: 0xd8)
struct UFieldSystemMetaData : UActorComponent {
};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
// Size: 0xe0 (Inherited: 0xd8)
struct UFieldSystemMetaDataIteration : UFieldSystemMetaData {
	int32_t Iterations; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)

	struct UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations); // Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x34e9950
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Size: 0xe0 (Inherited: 0xd8)
struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	enum class EFieldResolutionType ResolutionType; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)

	struct UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType); // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x34e9af0
};

// Class FieldSystemEngine.FieldSystemMetaDataFilter
// Size: 0xe0 (Inherited: 0xd8)
struct UFieldSystemMetaDataFilter : UFieldSystemMetaData {
	enum class EFieldFilterType FilterType; // 0xd8(0x01)
	enum class EFieldObjectType ObjectType; // 0xd9(0x01)
	enum class EFieldPositionType PositionType; // 0xda(0x01)
	char pad_DB[0x5]; // 0xdb(0x05)

	struct UFieldSystemMetaDataFilter* SetMetaDataFilterType(enum class EFieldFilterType FilterType, enum class EFieldObjectType ObjectType, enum class EFieldPositionType PositionType); // Function FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x34e9c90
};

// Class FieldSystemEngine.FieldNodeBase
// Size: 0xd8 (Inherited: 0xd8)
struct UFieldNodeBase : UActorComponent {
};

// Class FieldSystemEngine.FieldNodeInt
// Size: 0xd8 (Inherited: 0xd8)
struct UFieldNodeInt : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeFloat
// Size: 0xd8 (Inherited: 0xd8)
struct UFieldNodeFloat : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeVector
// Size: 0xd8 (Inherited: 0xd8)
struct UFieldNodeVector : UFieldNodeBase {
};

// Class FieldSystemEngine.UniformInteger
// Size: 0xe0 (Inherited: 0xd8)
struct UUniformInteger : UFieldNodeInt {
	int32_t Magnitude; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)

	struct UUniformInteger* SetUniformInteger(int32_t Magnitude); // Function FieldSystemEngine.UniformInteger.SetUniformInteger // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x34e9950
};

// Class FieldSystemEngine.RadialIntMask
// Size: 0x108 (Inherited: 0xd8)
struct URadialIntMask : UFieldNodeInt {
	float Radius; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FVector Position; // 0xe0(0x18)
	int32_t InteriorValue; // 0xf8(0x04)
	int32_t ExteriorValue; // 0xfc(0x04)
	enum class ESetMaskConditionType SetMaskCondition; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)

	struct URadialIntMask* SetRadialIntMask(float Radius, struct FVector Position, int32_t InteriorValue, int32_t ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn); // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x34ea0f0
};

// Class FieldSystemEngine.UniformScalar
// Size: 0xe0 (Inherited: 0xd8)
struct UUniformScalar : UFieldNodeFloat {
	float Magnitude; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)

	struct UUniformScalar* SetUniformScalar(float Magnitude); // Function FieldSystemEngine.UniformScalar.SetUniformScalar // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x34ea530
};

// Class FieldSystemEngine.WaveScalar
// Size: 0x108 (Inherited: 0xd8)
struct UWaveScalar : UFieldNodeFloat {
	float Magnitude; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FVector Position; // 0xe0(0x18)
	float Wavelength; // 0xf8(0x04)
	float Period; // 0xfc(0x04)
	enum class EWaveFunctionType Function; // 0x100(0x01)
	enum class EFieldFalloffType Falloff; // 0x101(0x01)
	char pad_102[0x6]; // 0x102(0x06)

	struct UWaveScalar* SetWaveScalar(float Magnitude, struct FVector Position, float Wavelength, float Period, float Time, enum class EWaveFunctionType Function, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.WaveScalar.SetWaveScalar // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x34ea6d0
};

// Class FieldSystemEngine.RadialFalloff
// Size: 0x110 (Inherited: 0xd8)
struct URadialFalloff : UFieldNodeFloat {
	float Magnitude; // 0xd8(0x04)
	float MinRange; // 0xdc(0x04)
	float MaxRange; // 0xe0(0x04)
	float Default; // 0xe4(0x04)
	float Radius; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FVector Position; // 0xf0(0x18)
	enum class EFieldFalloffType Falloff; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)

	struct URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct FVector Position, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x34eac10
};

// Class FieldSystemEngine.PlaneFalloff
// Size: 0x128 (Inherited: 0xd8)
struct UPlaneFalloff : UFieldNodeFloat {
	float Magnitude; // 0xd8(0x04)
	float MinRange; // 0xdc(0x04)
	float MaxRange; // 0xe0(0x04)
	float Default; // 0xe4(0x04)
	float Distance; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FVector Position; // 0xf0(0x18)
	struct FVector Normal; // 0x108(0x18)
	enum class EFieldFalloffType Falloff; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)

	struct UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector Position, struct FVector Normal, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x34eb160
};

// Class FieldSystemEngine.BoxFalloff
// Size: 0x160 (Inherited: 0xd8)
struct UBoxFalloff : UFieldNodeFloat {
	float Magnitude; // 0xd8(0x04)
	float MinRange; // 0xdc(0x04)
	float MaxRange; // 0xe0(0x04)
	float Default; // 0xe4(0x04)
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FTransform Transform; // 0xf0(0x60)
	enum class EFieldFalloffType Falloff; // 0x150(0x01)
	char pad_151[0xf]; // 0x151(0x0f)

	struct UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x34eb760
};

// Class FieldSystemEngine.NoiseField
// Size: 0x140 (Inherited: 0xd8)
struct UNoiseField : UFieldNodeFloat {
	float MinRange; // 0xd8(0x04)
	float MaxRange; // 0xdc(0x04)
	struct FTransform Transform; // 0xe0(0x60)

	struct UNoiseField* SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform); // Function FieldSystemEngine.NoiseField.SetNoiseField // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x34ebcb0
};

// Class FieldSystemEngine.UniformVector
// Size: 0xf8 (Inherited: 0xd8)
struct UUniformVector : UFieldNodeVector {
	float Magnitude; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FVector Direction; // 0xe0(0x18)

	struct UUniformVector* SetUniformVector(float Magnitude, struct FVector Direction); // Function FieldSystemEngine.UniformVector.SetUniformVector // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x34ec050
};

// Class FieldSystemEngine.RadialVector
// Size: 0xf8 (Inherited: 0xd8)
struct URadialVector : UFieldNodeVector {
	float Magnitude; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FVector Position; // 0xe0(0x18)

	struct URadialVector* SetRadialVector(float Magnitude, struct FVector Position); // Function FieldSystemEngine.RadialVector.SetRadialVector // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x34ec050
};

// Class FieldSystemEngine.RandomVector
// Size: 0xe0 (Inherited: 0xd8)
struct URandomVector : UFieldNodeVector {
	float Magnitude; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)

	struct URandomVector* SetRandomVector(float Magnitude); // Function FieldSystemEngine.RandomVector.SetRandomVector // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x34ea530
};

// Class FieldSystemEngine.OperatorField
// Size: 0xf8 (Inherited: 0xd8)
struct UOperatorField : UFieldNodeBase {
	float Magnitude; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct UFieldNodeBase* RightField; // 0xe0(0x08)
	struct UFieldNodeBase* LeftField; // 0xe8(0x08)
	enum class EFieldOperationType Operation; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)

	struct UOperatorField* SetOperatorField(float Magnitude, struct UFieldNodeBase* LeftField, struct UFieldNodeBase* RightField, enum class EFieldOperationType Operation); // Function FieldSystemEngine.OperatorField.SetOperatorField // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x34ec3f0
};

// Class FieldSystemEngine.ToIntegerField
// Size: 0xe0 (Inherited: 0xd8)
struct UToIntegerField : UFieldNodeInt {
	struct UFieldNodeFloat* FloatField; // 0xd8(0x08)

	struct UToIntegerField* SetToIntegerField(struct UFieldNodeFloat* FloatField); // Function FieldSystemEngine.ToIntegerField.SetToIntegerField // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x34ec760
};

// Class FieldSystemEngine.ToFloatField
// Size: 0xe0 (Inherited: 0xd8)
struct UToFloatField : UFieldNodeFloat {
	struct UFieldNodeInt* IntField; // 0xd8(0x08)

	struct UToFloatField* SetToFloatField(struct UFieldNodeInt* IntegerField); // Function FieldSystemEngine.ToFloatField.SetToFloatField // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x34ec760
};

// Class FieldSystemEngine.CullingField
// Size: 0xf0 (Inherited: 0xd8)
struct UCullingField : UFieldNodeBase {
	struct UFieldNodeBase* Culling; // 0xd8(0x08)
	struct UFieldNodeBase* Field; // 0xe0(0x08)
	enum class EFieldCullingOperationType Operation; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)

	struct UCullingField* SetCullingField(struct UFieldNodeBase* Culling, struct UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation); // Function FieldSystemEngine.CullingField.SetCullingField // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x34ec9a0
};

// Class FieldSystemEngine.ReturnResultsTerminal
// Size: 0xd8 (Inherited: 0xd8)
struct UReturnResultsTerminal : UFieldNodeBase {

	struct UReturnResultsTerminal* SetReturnResultsTerminal(); // Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x34ecc70
};

