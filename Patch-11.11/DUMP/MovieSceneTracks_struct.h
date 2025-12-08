// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class MovieScene3DPathSection_Axis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	NEG_X = 3,
	NEG_Y = 4,
	NEG_Z = 5,
	MovieScene3DPathSection_MAX = 6
};

// Enum MovieSceneTracks.ELevelVisibility
enum class ELevelVisibility : uint8 {
	Visible = 0,
	Hidden = 1,
	ELevelVisibility_MAX = 2
};

// Enum MovieSceneTracks.EParticleKey
enum class EParticleKey : uint8 {
	Activate = 0,
	Deactivate = 1,
	Trigger = 2,
	EParticleKey_MAX = 3
};

// Enum MovieSceneTracks.EFireEventsAtPosition
enum class EFireEventsAtPosition : uint8 {
	AtStartOfEvaluation = 0,
	AtEndOfEvaluation = 1,
	AfterSpawn = 2,
	EFireEventsAtPosition_MAX = 3
};

// ScriptStruct MovieSceneTracks.MovieScenePreAnimatedMaterialParameters
// Size: 0x38 (Inherited: 0x00)
struct FMovieScenePreAnimatedMaterialParameters {
	struct UMaterialInterface* PreviousMaterial; // 0x00(0x08)
	struct TSoftObjectPtr<UMaterialInterface> SoftPreviousMaterial; // 0x08(0x30)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTrigger
// Size: 0x28 (Inherited: 0x00)
struct FMovieSceneCameraShakeSourceTrigger {
	struct UCameraShakeBase* ShakeClass; // 0x00(0x08)
	float PlayScale; // 0x08(0x04)
	enum class ECameraShakePlaySpace Playspace; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FRotator UserDefinedPlaySpace; // 0x10(0x18)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerChannel
// Size: 0xf8 (Inherited: 0x50)
struct FMovieSceneCameraShakeSourceTriggerChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> KeyTimes; // 0x50(0x10)
	struct TArray<struct FMovieSceneCameraShakeSourceTrigger> KeyValues; // 0x60(0x10)
	struct FMovieSceneKeyHandleMap KeyHandles; // 0x70(0x88)
};

// ScriptStruct MovieSceneTracks.MovieSceneDoublePerlinNoiseChannel
// Size: 0x68 (Inherited: 0x50)
struct FMovieSceneDoublePerlinNoiseChannel : FMovieSceneChannel {
	struct FPerlinNoiseParams PerlinNoiseParams; // 0x50(0x18)
};

// ScriptStruct MovieSceneTracks.PerlinNoiseParams
// Size: 0x18 (Inherited: 0x00)
struct FPerlinNoiseParams {
	float Frequency; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	double Amplitude; // 0x08(0x08)
	float Offset; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPayloadVariable
// Size: 0x10 (Inherited: 0x00)
struct FMovieSceneEventPayloadVariable {
	struct FString Value; // 0x00(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventPtrs
// Size: 0x28 (Inherited: 0x00)
struct FMovieSceneEventPtrs {
	struct UFunction* Function; // 0x00(0x08)
	struct TFieldPath<FProperty> BoundObjectProperty; // 0x08(0x20)
};

// ScriptStruct MovieSceneTracks.MovieSceneEvent
// Size: 0x28 (Inherited: 0x00)
struct FMovieSceneEvent {
	struct FMovieSceneEventPtrs Ptrs; // 0x00(0x28)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventChannel
// Size: 0xf8 (Inherited: 0x50)
struct FMovieSceneEventChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> KeyTimes; // 0x50(0x10)
	struct TArray<struct FMovieSceneEvent> KeyValues; // 0x60(0x10)
	struct FMovieSceneKeyHandleMap KeyHandles; // 0x70(0x88)
};

// ScriptStruct MovieSceneTracks.MovieSceneFloatPerlinNoiseChannel
// Size: 0x68 (Inherited: 0x50)
struct FMovieSceneFloatPerlinNoiseChannel : FMovieSceneChannel {
	struct FPerlinNoiseParams PerlinNoiseParams; // 0x50(0x18)
};

// ScriptStruct MovieSceneTracks.MovieSceneStringChannel
// Size: 0x110 (Inherited: 0x50)
struct FMovieSceneStringChannel : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; // 0x50(0x10)
	struct TArray<struct FString> Values; // 0x60(0x10)
	struct FString DefaultValue; // 0x70(0x10)
	bool bHasDefaultValue; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FMovieSceneKeyHandleMap KeyHandles; // 0x88(0x88)
};

// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// Size: 0x150 (Inherited: 0x20)
struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneObjectBindingID PathBindingID; // 0x20(0x18)
	struct FMovieSceneFloatChannel TimingCurve; // 0x38(0x110)
	enum class MovieScene3DPathSection_Axis FrontAxisEnum; // 0x148(0x01)
	enum class MovieScene3DPathSection_Axis UpAxisEnum; // 0x149(0x01)
	char pad_14A[0x2]; // 0x14a(0x02)
	char bFollow : 1; // 0x14c(0x01)
	char bReverse : 1; // 0x14c(0x01)
	char bForceUpright : 1; // 0x14c(0x01)
	char pad_14C_3 : 5; // 0x14c(0x01)
	char pad_14D[0x3]; // 0x14d(0x03)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// Size: 0x168 (Inherited: 0x20)
struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieScenePropertySectionData PropertyData; // 0x20(0x20)
	struct FMovieSceneActorReferenceData ActorReferenceData; // 0x40(0x128)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData
// Size: 0x128 (Inherited: 0x50)
struct FMovieSceneActorReferenceData : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> KeyTimes; // 0x50(0x10)
	struct FMovieSceneActorReferenceKey DefaultValue; // 0x60(0x30)
	struct TArray<struct FMovieSceneActorReferenceKey> KeyValues; // 0x90(0x10)
	struct FMovieSceneKeyHandleMap KeyHandles; // 0xa0(0x88)
};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey
// Size: 0x30 (Inherited: 0x00)
struct FMovieSceneActorReferenceKey {
	struct FMovieSceneObjectBindingID Object; // 0x00(0x18)
	struct FName ComponentName; // 0x18(0x0c)
	struct FName SocketName; // 0x24(0x0c)
};

// ScriptStruct MovieSceneTracks.MovieSceneBaseCacheSectionTemplateParameters
// Size: 0x08 (Inherited: 0x00)
struct FMovieSceneBaseCacheSectionTemplateParameters {
	struct FFrameNumber SectionStartTime; // 0x00(0x04)
	struct FFrameNumber SectionEndTime; // 0x04(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceShakeSectionTemplate
// Size: 0x50 (Inherited: 0x20)
struct FMovieSceneCameraShakeSourceShakeSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneCameraShakeSectionData SourceData; // 0x20(0x28)
	struct FFrameNumber SectionStartTime; // 0x48(0x04)
	struct FFrameNumber SectionEndTime; // 0x4c(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
// Size: 0x28 (Inherited: 0x00)
struct FMovieSceneCameraShakeSectionData {
	struct UCameraShakeBase* ShakeClass; // 0x00(0x08)
	float PlayScale; // 0x08(0x04)
	enum class ECameraShakePlaySpace Playspace; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FRotator UserDefinedPlaySpace; // 0x10(0x18)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSectionTemplate
// Size: 0x40 (Inherited: 0x20)
struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : FMovieSceneEvalTemplate {
	struct TArray<struct FFrameNumber> TriggerTimes; // 0x20(0x10)
	struct TArray<struct FMovieSceneCameraShakeSourceTrigger> TriggerValues; // 0x30(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// Size: 0x50 (Inherited: 0x20)
struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneCameraShakeSectionData SourceData; // 0x20(0x28)
	struct FFrameNumber SectionStartTime; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// Size: 0x120 (Inherited: 0x20)
struct FMovieSceneEventSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneEventSectionData EventData; // 0x20(0xf8)
	char bFireEventsWhenForwards : 1; // 0x118(0x01)
	char bFireEventsWhenBackwards : 1; // 0x118(0x01)
	char pad_118_2 : 6; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// Size: 0xf8 (Inherited: 0x50)
struct FMovieSceneEventSectionData : FMovieSceneChannel {
	struct TArray<struct FFrameNumber> Times; // 0x50(0x10)
	struct TArray<struct FEventPayload> KeyValues; // 0x60(0x10)
	struct FMovieSceneKeyHandleMap KeyHandles; // 0x70(0x88)
};

// ScriptStruct MovieSceneTracks.EventPayload
// Size: 0x48 (Inherited: 0x00)
struct FEventPayload {
	struct FName EventName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMovieSceneEventParameters Parameters; // 0x10(0x38)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// Size: 0x38 (Inherited: 0x00)
struct FMovieSceneEventParameters {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate
// Size: 0x178 (Inherited: 0x40)
struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneObjectPathChannel ObjectChannel; // 0x40(0x138)
};

// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// Size: 0x80 (Inherited: 0x20)
struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	struct TArray<struct FScalarParameterNameAndCurve> Scalars; // 0x20(0x10)
	struct TArray<struct FBoolParameterNameAndCurve> Bools; // 0x30(0x10)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2Ds; // 0x40(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> Vectors; // 0x50(0x10)
	struct TArray<struct FColorParameterNameAndCurves> Colors; // 0x60(0x10)
	struct TArray<struct FTransformParameterNameAndCurves> Transforms; // 0x70(0x10)
};

// ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves
// Size: 0x9a0 (Inherited: 0x00)
struct FTransformParameterNameAndCurves {
	struct FName ParameterName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMovieSceneFloatChannel Translation[0x3]; // 0x10(0x330)
	struct FMovieSceneFloatChannel Rotation[0x3]; // 0x340(0x330)
	struct FMovieSceneFloatChannel Scale[0x3]; // 0x670(0x330)
};

// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// Size: 0x450 (Inherited: 0x00)
struct FColorParameterNameAndCurves {
	struct FName ParameterName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMovieSceneFloatChannel RedCurve; // 0x10(0x110)
	struct FMovieSceneFloatChannel GreenCurve; // 0x120(0x110)
	struct FMovieSceneFloatChannel BlueCurve; // 0x230(0x110)
	struct FMovieSceneFloatChannel AlphaCurve; // 0x340(0x110)
};

// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// Size: 0x340 (Inherited: 0x00)
struct FVectorParameterNameAndCurves {
	struct FName ParameterName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMovieSceneFloatChannel XCurve; // 0x10(0x110)
	struct FMovieSceneFloatChannel YCurve; // 0x120(0x110)
	struct FMovieSceneFloatChannel ZCurve; // 0x230(0x110)
};

// ScriptStruct MovieSceneTracks.Vector2DParameterNameAndCurves
// Size: 0x230 (Inherited: 0x00)
struct FVector2DParameterNameAndCurves {
	struct FName ParameterName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMovieSceneFloatChannel XCurve; // 0x10(0x110)
	struct FMovieSceneFloatChannel YCurve; // 0x120(0x110)
};

// ScriptStruct MovieSceneTracks.BoolParameterNameAndCurve
// Size: 0x110 (Inherited: 0x00)
struct FBoolParameterNameAndCurve {
	struct FName ParameterName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMovieSceneBoolChannel ParameterCurve; // 0x10(0x100)
};

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// Size: 0x120 (Inherited: 0x00)
struct FScalarParameterNameAndCurve {
	struct FName ParameterName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMovieSceneFloatChannel ParameterCurve; // 0x10(0x110)
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// Size: 0x80 (Inherited: 0x80)
struct FMovieSceneParticleParameterSectionTemplate : FMovieSceneParameterSectionTemplate {
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// Size: 0x128 (Inherited: 0x20)
struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneParticleChannel ParticleKeys; // 0x20(0x108)
};

// ScriptStruct MovieSceneTracks.MovieSceneParticleChannel
// Size: 0x108 (Inherited: 0x108)
struct FMovieSceneParticleChannel : FMovieSceneByteChannel {
};

// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// Size: 0x140 (Inherited: 0x40)
struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneBoolChannel BoolCurve; // 0x40(0x100)
};

// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// Size: 0x130 (Inherited: 0x20)
struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneFloatChannel SlomoCurve; // 0x20(0x110)
};

// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// Size: 0x140 (Inherited: 0x140)
struct FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate {
};

// ScriptStruct MovieSceneTracks.LevelVisibilityComponentData
// Size: 0x08 (Inherited: 0x00)
struct FLevelVisibilityComponentData {
	struct UMovieSceneLevelVisibilitySection* Section; // 0x00(0x08)
};

// ScriptStruct MovieSceneTracks.MovieSceneDataLayerComponentData
// Size: 0x08 (Inherited: 0x00)
struct FMovieSceneDataLayerComponentData {
	struct UMovieSceneDataLayerSection* Section; // 0x00(0x08)
};

// ScriptStruct MovieSceneTracks.ConstraintComponentData
// Size: 0x18 (Inherited: 0x00)
struct FConstraintComponentData {
	struct FName ConstraintName; // 0x00(0x0c)
	char pad_C[0xc]; // 0x0c(0x0c)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationComponentData
// Size: 0x08 (Inherited: 0x00)
struct FMovieSceneSkeletalAnimationComponentData {
	struct UMovieSceneSkeletalAnimationSection* Section; // 0x00(0x08)
};

// ScriptStruct MovieSceneTracks.MovieSceneAudioComponentData
// Size: 0x08 (Inherited: 0x00)
struct FMovieSceneAudioComponentData {
	struct UMovieSceneAudioSection* Section; // 0x00(0x08)
};

// ScriptStruct MovieSceneTracks.MovieSceneAudioInputData
// Size: 0x90 (Inherited: 0x00)
struct FMovieSceneAudioInputData {
	struct FName FloatInputs[0x9]; // 0x00(0x6c)
	struct FName StringInput; // 0x6c(0x0c)
	struct FName BoolInput; // 0x78(0x0c)
	struct FName IntInput; // 0x84(0x0c)
};

// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// Size: 0x40 (Inherited: 0x08)
struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	struct FVector Location; // 0x08(0x18)
	struct FFrameNumber Time; // 0x20(0x04)
	char pad_24[0x1c]; // 0x24(0x1c)
};

// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// Size: 0x40 (Inherited: 0x08)
struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	struct FRotator Rotation; // 0x08(0x18)
	struct FFrameNumber Time; // 0x20(0x04)
	char pad_24[0x1c]; // 0x24(0x1c)
};

// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// Size: 0x30 (Inherited: 0x08)
struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	struct FVector3f Scale; // 0x08(0x0c)
	struct FFrameNumber Time; // 0x14(0x04)
	char pad_18[0x18]; // 0x18(0x18)
};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// Size: 0x60 (Inherited: 0x08)
struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	struct FVector Location; // 0x08(0x18)
	struct FRotator Rotation; // 0x20(0x18)
	struct FVector3f Scale; // 0x38(0x0c)
	struct FFrameNumber Time; // 0x44(0x04)
	char pad_48[0x18]; // 0x48(0x18)
};

// ScriptStruct MovieSceneTracks.MovieSceneTransformMask
// Size: 0x04 (Inherited: 0x00)
struct FMovieSceneTransformMask {
	uint32_t Mask; // 0x00(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneBaseCacheParams
// Size: 0x20 (Inherited: 0x00)
struct FMovieSceneBaseCacheParams {
	char pad_0[0x8]; // 0x00(0x08)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0x08(0x04)
	struct FFrameNumber StartFrameOffset; // 0x0c(0x04)
	struct FFrameNumber EndFrameOffset; // 0x10(0x04)
	float PlayRate; // 0x14(0x04)
	char bReverse : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// Size: 0x38 (Inherited: 0x08)
struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	struct FLinearColor Color; // 0x08(0x10)
	struct FFrameNumber Time; // 0x18(0x04)
	char pad_1C[0x1c]; // 0x1c(0x1c)
};

// ScriptStruct MovieSceneTracks.MovieSceneConsoleVariableCollection
// Size: 0x18 (Inherited: 0x00)
struct FMovieSceneConsoleVariableCollection {
	struct TScriptInterface<IMovieSceneConsoleVariableTrackInterface> Interface; // 0x00(0x10)
	bool bOnlyIncludeChecked; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct MovieSceneTracks.MovieSceneCVarOverrides
// Size: 0x50 (Inherited: 0x00)
struct FMovieSceneCVarOverrides {
	struct TMap<struct FString, struct FString> ValuesByCVar; // 0x00(0x50)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// Size: 0x150 (Inherited: 0x00)
struct FMovieSceneSkeletalAnimationParams {
	struct UAnimSequenceBase* Animation; // 0x00(0x08)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0x08(0x04)
	struct FFrameNumber StartFrameOffset; // 0x0c(0x04)
	struct FFrameNumber EndFrameOffset; // 0x10(0x04)
	float PlayRate; // 0x14(0x04)
	char bReverse : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	struct FName SlotName; // 0x1c(0x0c)
	struct UMirrorDataTable* MirrorDataTable; // 0x28(0x08)
	struct FMovieSceneFloatChannel Weight; // 0x30(0x110)
	bool bSkipAnimNotifiers; // 0x140(0x01)
	bool bForceCustomMode; // 0x141(0x01)
	enum class ESwapRootBone SwapRootBone; // 0x142(0x01)
	char pad_143[0x1]; // 0x143(0x01)
	float StartOffset; // 0x144(0x04)
	float EndOffset; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneFloatVectorKeyStructBase
// Size: 0x28 (Inherited: 0x08)
struct FMovieSceneFloatVectorKeyStructBase : FMovieSceneKeyStruct {
	struct FFrameNumber Time; // 0x08(0x04)
	char pad_C[0x1c]; // 0x0c(0x1c)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector2fKeyStruct
// Size: 0x30 (Inherited: 0x28)
struct FMovieSceneVector2fKeyStruct : FMovieSceneFloatVectorKeyStructBase {
	struct FVector2f Vector; // 0x28(0x08)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector3fKeyStruct
// Size: 0x38 (Inherited: 0x28)
struct FMovieSceneVector3fKeyStruct : FMovieSceneFloatVectorKeyStructBase {
	struct FVector3f Vector; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector4fKeyStruct
// Size: 0x40 (Inherited: 0x28)
struct FMovieSceneVector4fKeyStruct : FMovieSceneFloatVectorKeyStructBase {
	char pad_28[0x8]; // 0x28(0x08)
	struct FVector4f Vector; // 0x30(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneDoubleVectorKeyStructBase
// Size: 0x28 (Inherited: 0x08)
struct FMovieSceneDoubleVectorKeyStructBase : FMovieSceneKeyStruct {
	struct FFrameNumber Time; // 0x08(0x04)
	char pad_C[0x1c]; // 0x0c(0x1c)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// Size: 0x38 (Inherited: 0x28)
struct FMovieSceneVector2DKeyStruct : FMovieSceneDoubleVectorKeyStructBase {
	struct FVector2D Vector; // 0x28(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector3dKeyStruct
// Size: 0x40 (Inherited: 0x28)
struct FMovieSceneVector3dKeyStruct : FMovieSceneDoubleVectorKeyStructBase {
	struct FVector3d Vector; // 0x28(0x18)
};

// ScriptStruct MovieSceneTracks.MovieSceneVector4dKeyStruct
// Size: 0x50 (Inherited: 0x28)
struct FMovieSceneVector4dKeyStruct : FMovieSceneDoubleVectorKeyStructBase {
	char pad_28[0x8]; // 0x28(0x08)
	struct FVector4d Vector; // 0x30(0x20)
};

// ScriptStruct MovieSceneTracks.MovieSceneEventTriggerData
// Size: 0x48 (Inherited: 0x00)
struct FMovieSceneEventTriggerData {
	struct FMovieSceneEventPtrs Ptrs; // 0x00(0x28)
	struct FGuid ObjectBindingID; // 0x28(0x10)
	char pad_38[0x10]; // 0x38(0x10)
};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimRootMotionTrackParams
// Size: 0x80 (Inherited: 0x00)
struct FMovieSceneSkeletalAnimRootMotionTrackParams {
	char pad_0[0x80]; // 0x00(0x80)
};

