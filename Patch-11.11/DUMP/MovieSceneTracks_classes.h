// Class MovieSceneTracks.MovieSceneTransformOrigin
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneTransformOrigin : UInterface {

	struct FTransform BP_GetTransformOrigin(); // Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin // (RequiredAPI|Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
};

// Class MovieSceneTracks.MovieSceneConsoleVariableTrackInterface
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneConsoleVariableTrackInterface : UInterface {
};

// Class MovieSceneTracks.MovieSceneDecomposerTestObject
// Size: 0x38 (Inherited: 0x30)
struct UMovieSceneDecomposerTestObject : UObject {
	float FloatProperty; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class MovieSceneTracks.MovieSceneTestSequence
// Size: 0x98 (Inherited: 0x70)
struct UMovieSceneTestSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x70(0x08)
	struct TArray<struct UObject*> BoundObjects; // 0x78(0x10)
	struct TArray<struct FGuid> BindingGuids; // 0x88(0x10)
};

// Class MovieSceneTracks.MovieSceneDoublePerlinNoiseChannelContainer
// Size: 0xc8 (Inherited: 0x60)
struct UMovieSceneDoublePerlinNoiseChannelContainer : UMovieSceneChannelOverrideContainer {
	struct FMovieSceneDoublePerlinNoiseChannel PerlinNoiseChannel; // 0x60(0x68)
};

// Class MovieSceneTracks.MovieSceneFloatPerlinNoiseChannelContainer
// Size: 0xc8 (Inherited: 0x60)
struct UMovieSceneFloatPerlinNoiseChannelContainer : UMovieSceneChannelOverrideContainer {
	struct FMovieSceneFloatPerlinNoiseChannel PerlinNoiseChannel; // 0x60(0x68)
};

// Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
// Size: 0x1f8 (Inherited: 0x48)
struct UMovieSceneInterrogatedPropertyInstantiatorSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_48[0x1b0]; // 0x48(0x1b0)
};

// Class MovieSceneTracks.MovieSceneCameraShakeEvaluator
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneCameraShakeEvaluator : UObject {
};

// Class MovieSceneTracks.MovieScene3DConstraintSection
// Size: 0x120 (Inherited: 0xf8)
struct UMovieScene3DConstraintSection : UMovieSceneSection {
	struct FGuid ConstraintId; // 0xf8(0x10)
	struct FMovieSceneObjectBindingID ConstraintBindingID; // 0x108(0x18)

	void SetConstraintBindingID(struct FMovieSceneObjectBindingID& InConstraintBindingID); // Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3614560
	struct FMovieSceneObjectBindingID GetConstraintBindingID(); // Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3614680
};

// Class MovieSceneTracks.MovieScene3DAttachSection
// Size: 0x148 (Inherited: 0x120)
struct UMovieScene3DAttachSection : UMovieScene3DConstraintSection {
	char pad_120[0x8]; // 0x120(0x08)
	struct FName AttachSocketName; // 0x128(0x0c)
	struct FName AttachComponentName; // 0x134(0x0c)
	enum class EAttachmentRule AttachmentLocationRule; // 0x140(0x01)
	enum class EAttachmentRule AttachmentRotationRule; // 0x141(0x01)
	enum class EAttachmentRule AttachmentScaleRule; // 0x142(0x01)
	enum class EDetachmentRule DetachmentLocationRule; // 0x143(0x01)
	enum class EDetachmentRule DetachmentRotationRule; // 0x144(0x01)
	enum class EDetachmentRule DetachmentScaleRule; // 0x145(0x01)
	char pad_146[0x2]; // 0x146(0x02)
};

// Class MovieSceneTracks.MovieScene3DPathSection
// Size: 0x238 (Inherited: 0x120)
struct UMovieScene3DPathSection : UMovieScene3DConstraintSection {
	struct FMovieSceneFloatChannel TimingCurve; // 0x120(0x110)
	enum class MovieScene3DPathSection_Axis FrontAxisEnum; // 0x230(0x01)
	enum class MovieScene3DPathSection_Axis UpAxisEnum; // 0x231(0x01)
	char pad_232[0x2]; // 0x232(0x02)
	char bFollow : 1; // 0x234(0x01)
	char bReverse : 1; // 0x234(0x01)
	char bForceUpright : 1; // 0x234(0x01)
	char pad_234_3 : 5; // 0x234(0x01)
	char pad_235[0x3]; // 0x235(0x03)
};

// Class MovieSceneTracks.MovieScene3DTransformSectionConstraints
// Size: 0x40 (Inherited: 0x30)
struct UMovieScene3DTransformSectionConstraints : UObject {
	struct TArray<struct FConstraintAndActiveChannel> ConstraintsChannels; // 0x30(0x10)
};

// Class MovieSceneTracks.MovieScene3DTransformSection
// Size: 0xc40 (Inherited: 0xf8)
struct UMovieScene3DTransformSection : UMovieSceneSection {
	char pad_F8[0x40]; // 0xf8(0x40)
	struct FMovieSceneTransformMask TransformMask; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct FMovieSceneDoubleChannel Translation[0x3]; // 0x140(0x348)
	struct FMovieSceneDoubleChannel Rotation[0x3]; // 0x488(0x348)
	struct FMovieSceneDoubleChannel Scale[0x3]; // 0x7d0(0x348)
	struct FMovieSceneFloatChannel ManualWeight; // 0xb18(0x110)
	struct UMovieSceneSectionChannelOverrideRegistry* OverrideRegistry; // 0xc28(0x08)
	struct UMovieScene3DTransformSectionConstraints* Constraints; // 0xc30(0x08)
	bool bUseQuaternionInterpolation; // 0xc38(0x01)
	char pad_C39[0x7]; // 0xc39(0x07)
};

// Class MovieSceneTracks.MovieSceneActorReferenceSection
// Size: 0x2b0 (Inherited: 0xf8)
struct UMovieSceneActorReferenceSection : UMovieSceneSection {
	struct FMovieSceneActorReferenceData ActorReferenceData; // 0xf8(0x128)
	struct FIntegralCurve ActorGuidIndexCurve; // 0x220(0x80)
	struct TArray<struct FString> ActorGuidStrings; // 0x2a0(0x10)
};

// Class MovieSceneTracks.MovieSceneAudioSection
// Size: 0x640 (Inherited: 0xf8)
struct UMovieSceneAudioSection : UMovieSceneSection {
	char pad_F8[0x8]; // 0xf8(0x08)
	struct USoundBase* Sound; // 0x100(0x08)
	struct FFrameNumber StartFrameOffset; // 0x108(0x04)
	float StartOffset; // 0x10c(0x04)
	float AudioStartTime; // 0x110(0x04)
	float AudioDilationFactor; // 0x114(0x04)
	float AudioVolume; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FMovieSceneFloatChannel SoundVolume; // 0x120(0x110)
	struct FMovieSceneFloatChannel PitchMultiplier; // 0x230(0x110)
	struct TMap<struct FName, struct FMovieSceneFloatChannel> Inputs_Float; // 0x340(0x50)
	struct TMap<struct FName, struct FMovieSceneStringChannel> Inputs_String; // 0x390(0x50)
	struct TMap<struct FName, struct FMovieSceneBoolChannel> Inputs_Bool; // 0x3e0(0x50)
	struct TMap<struct FName, struct FMovieSceneIntegerChannel> Inputs_Int; // 0x430(0x50)
	struct TMap<struct FName, struct FMovieSceneAudioTriggerChannel> Inputs_Trigger; // 0x480(0x50)
	struct FMovieSceneActorReferenceData AttachActorData; // 0x4d0(0x128)
	bool bLooping; // 0x5f8(0x01)
	bool bSuppressSubtitles; // 0x5f9(0x01)
	bool bOverrideAttenuation; // 0x5fa(0x01)
	char pad_5FB[0x5]; // 0x5fb(0x05)
	struct USoundAttenuation* AttenuationSettings; // 0x600(0x08)
	struct FDelegate OnQueueSubtitles; // 0x608(0x14)
	char pad_61C[0x4]; // 0x61c(0x04)
	struct FMulticastInlineDelegate OnAudioFinished; // 0x620(0x10)
	struct FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x630(0x10)

	void SetSuppressSubtitles(bool bInSuppressSubtitles); // Function MovieSceneTracks.MovieSceneAudioSection.SetSuppressSubtitles // (Final|Native|Public|BlueprintCallable) // @ game+0x361bda0
	void SetStartOffset(struct FFrameNumber InStartOffset); // Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x361bfe0
	void SetSound(struct USoundBase* InSound); // Function MovieSceneTracks.MovieSceneAudioSection.SetSound // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x361c0f0
	void SetOverrideAttenuation(bool bInOverrideAttenuation); // Function MovieSceneTracks.MovieSceneAudioSection.SetOverrideAttenuation // (Final|Native|Public|BlueprintCallable) // @ game+0x361bc90
	void SetLooping(bool bInLooping); // Function MovieSceneTracks.MovieSceneAudioSection.SetLooping // (Final|Native|Public|BlueprintCallable) // @ game+0x361beb0
	void SetAttenuationSettings(struct USoundAttenuation* InAttenuationSettings); // Function MovieSceneTracks.MovieSceneAudioSection.SetAttenuationSettings // (Final|Native|Public|BlueprintCallable) // @ game+0x361bb80
	bool GetSuppressSubtitles(); // Function MovieSceneTracks.MovieSceneAudioSection.GetSuppressSubtitles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x361be90
	struct FFrameNumber GetStartOffset(); // Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x361bfc0
	struct USoundBase* GetSound(); // Function MovieSceneTracks.MovieSceneAudioSection.GetSound // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x361c0d0
	bool GetOverrideAttenuation(); // Function MovieSceneTracks.MovieSceneAudioSection.GetOverrideAttenuation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x361bd80
	bool GetLooping(); // Function MovieSceneTracks.MovieSceneAudioSection.GetLooping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x361bfa0
	struct USoundAttenuation* GetAttenuationSettings(); // Function MovieSceneTracks.MovieSceneAudioSection.GetAttenuationSettings // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x361bc70
};

// Class MovieSceneTracks.MovieSceneBaseCacheSection
// Size: 0x100 (Inherited: 0xf8)
struct UMovieSceneBaseCacheSection : UMovieSceneSection {
	char pad_F8[0x8]; // 0xf8(0x08)
};

// Class MovieSceneTracks.MovieSceneByteSection
// Size: 0x208 (Inherited: 0xf8)
struct UMovieSceneByteSection : UMovieSceneSection {
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FMovieSceneByteChannel ByteCurve; // 0x100(0x108)
};

// Class MovieSceneTracks.MovieSceneCameraCutSection
// Size: 0x1a0 (Inherited: 0xf8)
struct UMovieSceneCameraCutSection : UMovieSceneSection {
	char pad_F8[0x8]; // 0xf8(0x08)
	bool bLockPreviousCamera; // 0x100(0x01)
	char pad_101[0x3]; // 0x101(0x03)
	struct FGuid CameraGuid; // 0x104(0x10)
	struct FMovieSceneObjectBindingID CameraBindingID; // 0x114(0x18)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct FTransform InitialCameraCutTransform; // 0x130(0x60)
	bool bHasInitialCameraCutTransform; // 0x190(0x01)
	char pad_191[0xf]; // 0x191(0x0f)

	void SetCameraBindingID(struct FMovieSceneObjectBindingID& InCameraBindingID); // Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3620ef0
	struct FMovieSceneObjectBindingID GetCameraBindingID(); // Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3621010
};

// Class MovieSceneTracks.MovieSceneCameraShakeSection
// Size: 0x148 (Inherited: 0xf8)
struct UMovieSceneCameraShakeSection : UMovieSceneSection {
	struct FMovieSceneCameraShakeSectionData ShakeData; // 0xf8(0x28)
	struct UCameraShakeBase* ShakeClass; // 0x120(0x08)
	float PlayScale; // 0x128(0x04)
	enum class ECameraShakePlaySpace Playspace; // 0x12c(0x01)
	char pad_12D[0x3]; // 0x12d(0x03)
	struct FRotator UserDefinedPlaySpace; // 0x130(0x18)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection
// Size: 0x120 (Inherited: 0xf8)
struct UMovieSceneCameraShakeSourceShakeSection : UMovieSceneSection {
	struct FMovieSceneCameraShakeSectionData ShakeData; // 0xf8(0x28)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
// Size: 0x1f0 (Inherited: 0xf8)
struct UMovieSceneCameraShakeSourceTriggerSection : UMovieSceneSection {
	struct FMovieSceneCameraShakeSourceTriggerChannel Channel; // 0xf8(0xf8)
};

// Class MovieSceneTracks.MovieSceneCinematicShotSection
// Size: 0x168 (Inherited: 0x140)
struct UMovieSceneCinematicShotSection : UMovieSceneSubSection {
	struct FString ShotDisplayName; // 0x140(0x10)
	struct FText DisplayName; // 0x150(0x18)

	void SetShotDisplayName(struct FString InShotDisplayName); // Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName // (Final|Native|Public|BlueprintCallable) // @ game+0x3621cc0
	struct FString GetShotDisplayName(); // Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3621e50
};

// Class MovieSceneTracks.MovieSceneColorSection
// Size: 0x540 (Inherited: 0xf8)
struct UMovieSceneColorSection : UMovieSceneSection {
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FMovieSceneFloatChannel RedCurve; // 0x100(0x110)
	struct FMovieSceneFloatChannel GreenCurve; // 0x210(0x110)
	struct FMovieSceneFloatChannel BlueCurve; // 0x320(0x110)
	struct FMovieSceneFloatChannel AlphaCurve; // 0x430(0x110)
};

// Class MovieSceneTracks.MovieSceneConstrainedSection
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneConstrainedSection : UInterface {
};

// Class MovieSceneTracks.MovieSceneCVarSection
// Size: 0x160 (Inherited: 0xf8)
struct UMovieSceneCVarSection : UMovieSceneSection {
	char pad_F8[0x8]; // 0xf8(0x08)
	struct TArray<struct FMovieSceneConsoleVariableCollection> ConsoleVariableCollections; // 0x100(0x10)
	struct FMovieSceneCVarOverrides ConsoleVariables; // 0x110(0x50)

	void SetFromString(struct FString InString); // Function MovieSceneTracks.MovieSceneCVarSection.SetFromString // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3623760
	struct FString GetString(); // Function MovieSceneTracks.MovieSceneCVarSection.GetString // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x36236c0
};

// Class MovieSceneTracks.MovieSceneDataLayerSection
// Size: 0x128 (Inherited: 0xf8)
struct UMovieSceneDataLayerSection : UMovieSceneSection {
	char pad_F8[0x8]; // 0xf8(0x08)
	struct TArray<struct FActorDataLayer> DataLayers; // 0x100(0x10)
	struct TArray<struct UDataLayerAsset*> DataLayerAssets; // 0x110(0x10)
	enum class EDataLayerRuntimeState DesiredState; // 0x120(0x01)
	enum class EDataLayerRuntimeState PrerollState; // 0x121(0x01)
	bool bFlushOnUnload; // 0x122(0x01)
	char pad_123[0x5]; // 0x123(0x05)

	void SetPrerollState(enum class EDataLayerRuntimeState InPrerollState); // Function MovieSceneTracks.MovieSceneDataLayerSection.SetPrerollState // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3624b60
	void SetFlushOnUnload(bool bFlushOnUnload); // Function MovieSceneTracks.MovieSceneDataLayerSection.SetFlushOnUnload // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3624a50
	void SetDesiredState(enum class EDataLayerRuntimeState InDesiredState); // Function MovieSceneTracks.MovieSceneDataLayerSection.SetDesiredState // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3624c70
	void SetDataLayers(struct TArray<struct FActorDataLayer>& InDataLayers); // Function MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayers // (Final|Native|Private|HasOutParms|BlueprintCallable) // @ game+0x36246e0
	void SetDataLayerAssets(struct TArray<struct UDataLayerAsset*>& InDataLayerAssets); // Function MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayerAssets // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3624840
	enum class EDataLayerRuntimeState GetPrerollState(); // Function MovieSceneTracks.MovieSceneDataLayerSection.GetPrerollState // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3624c50
	bool GetFlushOnUnload(); // Function MovieSceneTracks.MovieSceneDataLayerSection.GetFlushOnUnload // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3624b40
	enum class EDataLayerRuntimeState GetDesiredState(); // Function MovieSceneTracks.MovieSceneDataLayerSection.GetDesiredState // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3624d60
	struct TArray<struct FActorDataLayer> GetDataLayers(); // Function MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayers // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // @ game+0x3624810
	struct TArray<struct UDataLayerAsset*> GetDataLayerAssets(); // Function MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayerAssets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x36249c0
};

// Class MovieSceneTracks.MovieSceneDoubleSection
// Size: 0x218 (Inherited: 0xf8)
struct UMovieSceneDoubleSection : UMovieSceneSection {
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FMovieSceneDoubleChannel DoubleCurve; // 0x100(0x118)
};

// Class MovieSceneTracks.MovieSceneEnumSection
// Size: 0x208 (Inherited: 0xf8)
struct UMovieSceneEnumSection : UMovieSceneSection {
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FMovieSceneByteChannel EnumCurve; // 0x100(0x108)
};

// Class MovieSceneTracks.MovieSceneEventSectionBase
// Size: 0xf8 (Inherited: 0xf8)
struct UMovieSceneEventSectionBase : UMovieSceneSection {
};

// Class MovieSceneTracks.MovieSceneEventRepeaterSection
// Size: 0x128 (Inherited: 0xf8)
struct UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase {
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FMovieSceneEvent event; // 0x100(0x28)
};

// Class MovieSceneTracks.MovieSceneEventSection
// Size: 0x268 (Inherited: 0xf8)
struct UMovieSceneEventSection : UMovieSceneSection {
	struct FNameCurve Events; // 0xf8(0x78)
	struct FMovieSceneEventSectionData EventData; // 0x170(0xf8)
};

// Class MovieSceneTracks.MovieSceneEventTriggerSection
// Size: 0x1f8 (Inherited: 0xf8)
struct UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase {
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FMovieSceneEventChannel EventChannel; // 0x100(0xf8)
};

// Class MovieSceneTracks.MovieSceneFadeSection
// Size: 0x228 (Inherited: 0xf8)
struct UMovieSceneFadeSection : UMovieSceneSection {
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FMovieSceneFloatChannel FloatCurve; // 0x100(0x110)
	struct FLinearColor FadeColor; // 0x210(0x10)
	char bFadeAudio : 1; // 0x220(0x01)
	char pad_220_1 : 7; // 0x220(0x01)
	char pad_221[0x7]; // 0x221(0x07)
};

// Class MovieSceneTracks.MovieSceneFloatSection
// Size: 0x220 (Inherited: 0xf8)
struct UMovieSceneFloatSection : UMovieSceneSection {
	char pad_F8[0x10]; // 0xf8(0x10)
	struct FMovieSceneFloatChannel FloatCurve; // 0x108(0x110)
	struct UMovieSceneSectionChannelOverrideRegistry* OverrideRegistry; // 0x218(0x08)
};

// Class MovieSceneTracks.MovieSceneIntegerSection
// Size: 0x200 (Inherited: 0xf8)
struct UMovieSceneIntegerSection : UMovieSceneSection {
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FMovieSceneIntegerChannel IntegerCurve; // 0x100(0x100)
};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// Size: 0x118 (Inherited: 0xf8)
struct UMovieSceneLevelVisibilitySection : UMovieSceneSection {
	char pad_F8[0x8]; // 0xf8(0x08)
	enum class ELevelVisibility Visibility; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct TArray<struct FName> LevelNames; // 0x108(0x10)

	void SetVisibility(enum class ELevelVisibility InVisibility); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x36c0880
	void SetLevelNames(struct TArray<struct FName>& InLevelNames); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x36c0720
	enum class ELevelVisibility GetVisibility(); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x36c0970
	struct TArray<struct FName> GetLevelNames(); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x36c0850
};

// Class MovieSceneTracks.MovieSceneObjectPropertySection
// Size: 0x230 (Inherited: 0xf8)
struct UMovieSceneObjectPropertySection : UMovieSceneSection {
	struct FMovieSceneObjectPathChannel ObjectChannel; // 0xf8(0x138)
};

// Class MovieSceneTracks.MovieSceneParameterSectionExtender
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneParameterSectionExtender : UInterface {
};

// Class MovieSceneTracks.MovieSceneParameterSection
// Size: 0x160 (Inherited: 0xf8)
struct UMovieSceneParameterSection : UMovieSceneSection {
	char pad_F8[0x8]; // 0xf8(0x08)
	struct TArray<struct FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0x100(0x10)
	struct TArray<struct FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0x110(0x10)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0x120(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x130(0x10)
	struct TArray<struct FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x140(0x10)
	struct TArray<struct FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x150(0x10)

	bool RemoveVectorParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x36c2270
	bool RemoveVector2DParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x36c23c0
	bool RemoveTransformParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x36c1fd0
	bool RemoveScalarParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x36c2660
	bool RemoveColorParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x36c2120
	bool RemoveBoolParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x36c2510
	void GetParameterNames(struct TSet<struct FName>& ParameterNames); // Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x36c1d10
	void AddVectorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x36c2cc0
	void AddVector2DParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector2D InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x36c2f20
	void AddTransformParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FTransform& InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x36c27b0
	void AddScalarParameterKey(struct FName InParameterName, struct FFrameNumber InTime, float InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x36c33c0
	void AddColorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FLinearColor InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x36c2a70
	void AddBoolParameterKey(struct FName InParameterName, struct FFrameNumber InTime, bool InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x36c3170
};

// Class MovieSceneTracks.MovieSceneParticleSection
// Size: 0x200 (Inherited: 0xf8)
struct UMovieSceneParticleSection : UMovieSceneSection {
	struct FMovieSceneParticleChannel ParticleKeys; // 0xf8(0x108)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// Size: 0x238 (Inherited: 0xf8)
struct UMovieScenePrimitiveMaterialSection : UMovieSceneSection {
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FMovieSceneObjectPathChannel MaterialChannel; // 0x100(0x138)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Size: 0x370 (Inherited: 0xf8)
struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection {
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FMovieSceneSkeletalAnimationParams Params; // 0x100(0x150)
	struct UAnimSequence* AnimSequence; // 0x250(0x08)
	struct UAnimSequenceBase* Animation; // 0x258(0x08)
	float StartOffset; // 0x260(0x04)
	float EndOffset; // 0x264(0x04)
	float PlayRate; // 0x268(0x04)
	char bReverse : 1; // 0x26c(0x01)
	char pad_26C_1 : 7; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct FName SlotName; // 0x270(0x0c)
	char pad_27C[0x4]; // 0x27c(0x04)
	struct FVector StartLocationOffset; // 0x280(0x18)
	struct FRotator StartRotationOffset; // 0x298(0x18)
	bool bMatchWithPrevious; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	struct FName MatchedBoneName; // 0x2b4(0x0c)
	struct FVector MatchedLocationOffset; // 0x2c0(0x18)
	struct FRotator MatchedRotationOffset; // 0x2d8(0x18)
	bool bMatchTranslation; // 0x2f0(0x01)
	bool bMatchIncludeZHeight; // 0x2f1(0x01)
	bool bMatchRotationYaw; // 0x2f2(0x01)
	bool bMatchRotationPitch; // 0x2f3(0x01)
	bool bMatchRotationRoll; // 0x2f4(0x01)
	char pad_2F5[0x7b]; // 0x2f5(0x7b)
};

// Class MovieSceneTracks.MovieSceneSlomoSection
// Size: 0x208 (Inherited: 0xf8)
struct UMovieSceneSlomoSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel FloatCurve; // 0xf8(0x110)
};

// Class MovieSceneTracks.MovieSceneStringSection
// Size: 0x210 (Inherited: 0xf8)
struct UMovieSceneStringSection : UMovieSceneSection {
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FMovieSceneStringChannel StringCurve; // 0x100(0x110)
};

// Class MovieSceneTracks.MovieSceneFloatVectorSection
// Size: 0x548 (Inherited: 0xf8)
struct UMovieSceneFloatVectorSection : UMovieSceneSection {
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FMovieSceneFloatChannel Curves[0x4]; // 0x100(0x440)
	int32_t ChannelsUsed; // 0x540(0x04)
	char pad_544[0x4]; // 0x544(0x04)
};

// Class MovieSceneTracks.MovieSceneDoubleVectorSection
// Size: 0x568 (Inherited: 0xf8)
struct UMovieSceneDoubleVectorSection : UMovieSceneSection {
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FMovieSceneDoubleChannel Curves[0x4]; // 0x100(0x460)
	int32_t ChannelsUsed; // 0x560(0x04)
	char pad_564[0x4]; // 0x564(0x04)
};

// Class MovieSceneTracks.BoolChannelEvaluatorSystem
// Size: 0x48 (Inherited: 0x48)
struct UBoolChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.ByteChannelEvaluatorSystem
// Size: 0x48 (Inherited: 0x48)
struct UByteChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.DoubleChannelEvaluatorSystem
// Size: 0x48 (Inherited: 0x48)
struct UDoubleChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.DoublePerlinNoiseChannelEvaluatorSystem
// Size: 0x48 (Inherited: 0x48)
struct UDoublePerlinNoiseChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.FloatChannelEvaluatorSystem
// Size: 0x48 (Inherited: 0x48)
struct UFloatChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.FloatPerlinNoiseChannelEvaluatorSystem
// Size: 0x48 (Inherited: 0x48)
struct UFloatPerlinNoiseChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.IntegerChannelEvaluatorSystem
// Size: 0x48 (Inherited: 0x48)
struct UIntegerChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieScenePropertySystem
// Size: 0x60 (Inherited: 0x48)
struct UMovieScenePropertySystem : UMovieSceneEntitySystem {
	char pad_48[0x8]; // 0x48(0x08)
	struct UMovieScenePropertyInstantiatorSystem* InstantiatorSystem; // 0x50(0x08)
	char pad_58[0x8]; // 0x58(0x08)
};

// Class MovieSceneTracks.MovieScene3DTransformPropertySystem
// Size: 0x60 (Inherited: 0x60)
struct UMovieScene3DTransformPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneAudioSystem
// Size: 0xf8 (Inherited: 0x48)
struct UMovieSceneAudioSystem : UMovieSceneEntitySystem {
	char pad_48[0xb0]; // 0x48(0xb0)
};

// Class MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem
// Size: 0x48 (Inherited: 0x48)
struct UMovieSceneBaseValueEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieSceneBoolPropertySystem
// Size: 0x60 (Inherited: 0x60)
struct UMovieSceneBoolPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneBytePropertySystem
// Size: 0x60 (Inherited: 0x60)
struct UMovieSceneBytePropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneColorPropertySystem
// Size: 0x60 (Inherited: 0x60)
struct UMovieSceneColorPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem
// Size: 0x48 (Inherited: 0x48)
struct UMovieSceneComponentAttachmentInvalidatorSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieSceneTracks.MovieSceneComponentAttachmentSystem
// Size: 0x1d8 (Inherited: 0x48)
struct UMovieSceneComponentAttachmentSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_48[0x190]; // 0x48(0x190)
};

// Class MovieSceneTracks.MovieSceneComponentMaterialSystem
// Size: 0x1a8 (Inherited: 0x48)
struct UMovieSceneComponentMaterialSystem : UMovieSceneEntitySystem {
	char pad_48[0x160]; // 0x48(0x160)
};

// Class MovieSceneTracks.MovieSceneComponentMobilitySystem
// Size: 0x238 (Inherited: 0x48)
struct UMovieSceneComponentMobilitySystem : UMovieSceneEntityInstantiatorSystem {
	char pad_48[0x1f0]; // 0x48(0x1f0)
};

// Class MovieSceneTracks.MovieSceneComponentTransformSystem
// Size: 0x60 (Inherited: 0x60)
struct UMovieSceneComponentTransformSystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneConstraintSystem
// Size: 0x58 (Inherited: 0x48)
struct UMovieSceneConstraintSystem : UMovieSceneEntitySystem {
	char pad_48[0x10]; // 0x48(0x10)
};

// Class MovieSceneTracks.MovieSceneDataLayerSystem
// Size: 0xd8 (Inherited: 0x48)
struct UMovieSceneDataLayerSystem : UMovieSceneEntitySystem {
	char pad_48[0x90]; // 0x48(0x90)
};

// Class MovieSceneTracks.MovieSceneDeferredComponentMovementSystem
// Size: 0x60 (Inherited: 0x48)
struct UMovieSceneDeferredComponentMovementSystem : UMovieSceneEntitySystem {
	char pad_48[0x18]; // 0x48(0x18)
};

// Class MovieSceneTracks.MovieSceneDoublePropertySystem
// Size: 0x60 (Inherited: 0x60)
struct UMovieSceneDoublePropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneEnumPropertySystem
// Size: 0x60 (Inherited: 0x60)
struct UMovieSceneEnumPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneEulerTransformPropertySystem
// Size: 0x60 (Inherited: 0x60)
struct UMovieSceneEulerTransformPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneEventSystem
// Size: 0x98 (Inherited: 0x48)
struct UMovieSceneEventSystem : UMovieSceneEntitySystem {
	char pad_48[0x50]; // 0x48(0x50)
};

// Class MovieSceneTracks.MovieScenePreSpawnEventSystem
// Size: 0x98 (Inherited: 0x98)
struct UMovieScenePreSpawnEventSystem : UMovieSceneEventSystem {
};

// Class MovieSceneTracks.MovieScenePostSpawnEventSystem
// Size: 0x98 (Inherited: 0x98)
struct UMovieScenePostSpawnEventSystem : UMovieSceneEventSystem {
};

// Class MovieSceneTracks.MovieScenePostEvalEventSystem
// Size: 0x98 (Inherited: 0x98)
struct UMovieScenePostEvalEventSystem : UMovieSceneEventSystem {
};

// Class MovieSceneTracks.MovieSceneFadeSystem
// Size: 0x58 (Inherited: 0x48)
struct UMovieSceneFadeSystem : UMovieSceneEntitySystem {
	char pad_48[0x10]; // 0x48(0x10)
};

// Class MovieSceneTracks.MovieSceneFloatPropertySystem
// Size: 0x60 (Inherited: 0x60)
struct UMovieSceneFloatPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem
// Size: 0x48 (Inherited: 0x48)
struct UMovieSceneHierarchicalBiasSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieSceneTracks.MovieSceneInitialValueSystem
// Size: 0x48 (Inherited: 0x48)
struct UMovieSceneInitialValueSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieSceneTracks.MovieSceneIntegerPropertySystem
// Size: 0x60 (Inherited: 0x60)
struct UMovieSceneIntegerPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySystem
// Size: 0x1d0 (Inherited: 0x48)
struct UMovieSceneLevelVisibilitySystem : UMovieSceneEntitySystem {
	char pad_48[0x188]; // 0x48(0x188)
};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionSystem
// Size: 0x68 (Inherited: 0x48)
struct UMovieSceneMaterialParameterCollectionSystem : UMovieSceneEntitySystem {
	char pad_48[0x20]; // 0x48(0x20)
};

// Class MovieSceneTracks.MovieSceneMaterialParameterSystem
// Size: 0x350 (Inherited: 0x48)
struct UMovieSceneMaterialParameterSystem : UMovieSceneEntitySystem {
	char pad_48[0x300]; // 0x48(0x300)
	struct UMovieScenePiecewiseDoubleBlenderSystem* DoubleBlenderSystem; // 0x348(0x08)
};

// Class MovieSceneTracks.MovieSceneMotionVectorSimulationSystem
// Size: 0xa0 (Inherited: 0x48)
struct UMovieSceneMotionVectorSimulationSystem : UMovieSceneEntitySystem {
	char pad_48[0x58]; // 0x48(0x58)
};

// Class MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem
// Size: 0x98 (Inherited: 0x70)
struct UMovieScenePiecewiseBoolBlenderSystem : UMovieSceneBlenderSystem {
	char pad_70[0x28]; // 0x70(0x28)
};

// Class MovieSceneTracks.MovieScenePiecewiseByteBlenderSystem
// Size: 0x98 (Inherited: 0x70)
struct UMovieScenePiecewiseByteBlenderSystem : UMovieSceneBlenderSystem {
	char pad_70[0x28]; // 0x70(0x28)
};

// Class MovieSceneTracks.MovieScenePiecewiseDoubleBlenderSystem
// Size: 0x138 (Inherited: 0x70)
struct UMovieScenePiecewiseDoubleBlenderSystem : UMovieSceneBlenderSystem {
	char pad_70[0xc8]; // 0x70(0xc8)
};

// Class MovieSceneTracks.MovieScenePiecewiseEnumBlenderSystem
// Size: 0x98 (Inherited: 0x70)
struct UMovieScenePiecewiseEnumBlenderSystem : UMovieSceneBlenderSystem {
	char pad_70[0x28]; // 0x70(0x28)
};

// Class MovieSceneTracks.MovieScenePiecewiseIntegerBlenderSystem
// Size: 0xb8 (Inherited: 0x70)
struct UMovieScenePiecewiseIntegerBlenderSystem : UMovieSceneBlenderSystem {
	char pad_70[0x48]; // 0x70(0x48)
};

// Class MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction
// Size: 0x88 (Inherited: 0x38)
struct UMovieSceneAsyncAction_SequencePrediction : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Result; // 0x38(0x10)
	struct FMulticastInlineDelegate Failure; // 0x48(0x10)
	char pad_58[0x10]; // 0x58(0x10)
	struct UMovieSceneSequencePlayer* SequencePlayer; // 0x68(0x08)
	struct USceneComponent* SceneComponent; // 0x70(0x08)
	char pad_78[0x10]; // 0x78(0x10)

	struct UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtTime(struct UMovieSceneSequencePlayer* Player, struct USceneComponent* TargetComponent, float TimeInSeconds); // Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x374eff0
	struct UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtFrame(struct UMovieSceneSequencePlayer* Player, struct USceneComponent* TargetComponent, struct FFrameTime FrameTime); // Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x374ed10
	struct UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtTime(struct UMovieSceneSequencePlayer* Player, struct USceneComponent* TargetComponent, float TimeInSeconds); // Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtTime // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x374ea60
	struct UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtFrame(struct UMovieSceneSequencePlayer* Player, struct USceneComponent* TargetComponent, struct FFrameTime FrameTime); // Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x374e780
};

// Class MovieSceneTracks.MovieScenePredictionSystem
// Size: 0xf8 (Inherited: 0x48)
struct UMovieScenePredictionSystem : UMovieSceneEntitySystem {
	char pad_48[0x90]; // 0x48(0x90)
	struct TArray<struct UMovieSceneAsyncAction_SequencePrediction*> PendingPredictions; // 0xd8(0x10)
	struct TArray<struct UMovieSceneAsyncAction_SequencePrediction*> ProcessingPredictions; // 0xe8(0x10)
};

// Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem
// Size: 0x270 (Inherited: 0x48)
struct UMovieScenePropertyInstantiatorSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_48[0x228]; // 0x48(0x228)
};

// Class MovieSceneTracks.MovieSceneQuaternionBlenderSystem
// Size: 0xd0 (Inherited: 0x70)
struct UMovieSceneQuaternionBlenderSystem : UMovieSceneBlenderSystem {
	char pad_70[0x60]; // 0x70(0x60)
};

// Class MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem
// Size: 0x48 (Inherited: 0x48)
struct UMovieSceneQuaternionInterpolationRotationSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSystem
// Size: 0xe8 (Inherited: 0x48)
struct UMovieSceneSkeletalAnimationSystem : UMovieSceneEntitySystem {
	char pad_48[0xa0]; // 0x48(0xa0)
};

// Class MovieSceneTracks.MovieSceneStringPropertySystem
// Size: 0x60 (Inherited: 0x60)
struct UMovieSceneStringPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneTransformOriginInstantiatorSystem
// Size: 0x48 (Inherited: 0x48)
struct UMovieSceneTransformOriginInstantiatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieSceneTransformOriginSystem
// Size: 0x80 (Inherited: 0x48)
struct UMovieSceneTransformOriginSystem : UMovieSceneEntitySystem {
	char pad_48[0x38]; // 0x48(0x38)
};

// Class MovieSceneTracks.MovieSceneFloatVectorPropertySystem
// Size: 0x60 (Inherited: 0x60)
struct UMovieSceneFloatVectorPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneDoubleVectorPropertySystem
// Size: 0x60 (Inherited: 0x60)
struct UMovieSceneDoubleVectorPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.ObjectPathChannelEvaluatorSystem
// Size: 0x48 (Inherited: 0x48)
struct UObjectPathChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.StringChannelEvaluatorSystem
// Size: 0x48 (Inherited: 0x48)
struct UStringChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
// Size: 0xe0 (Inherited: 0x48)
struct UMovieSceneHierarchicalEasingInstantiatorSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_48[0x88]; // 0x48(0x88)
	struct UWeightAndEasingEvaluatorSystem* EvaluatorSystem; // 0xd0(0x08)
	char pad_D8[0x8]; // 0xd8(0x08)
};

// Class MovieSceneTracks.MovieSceneHierarchicalEasingFinalizationSystem
// Size: 0x50 (Inherited: 0x48)
struct UMovieSceneHierarchicalEasingFinalizationSystem : UMovieSceneEntityInstantiatorSystem {
	struct UMovieSceneHierarchicalEasingInstantiatorSystem* InstantiatorSystem; // 0x48(0x08)
};

// Class MovieSceneTracks.WeightAndEasingEvaluatorSystem
// Size: 0x60 (Inherited: 0x48)
struct UWeightAndEasingEvaluatorSystem : UMovieSceneEntitySystem {
	char pad_48[0x18]; // 0x48(0x18)
};

// Class MovieSceneTracks.MovieSceneCameraCutTrackInstance
// Size: 0xd0 (Inherited: 0x58)
struct UMovieSceneCameraCutTrackInstance : UMovieSceneTrackInstance {
	char pad_58[0x78]; // 0x58(0x78)
};

// Class MovieSceneTracks.MovieSceneCVarTrackInstance
// Size: 0xa8 (Inherited: 0x58)
struct UMovieSceneCVarTrackInstance : UMovieSceneTrackInstance {
	char pad_58[0x50]; // 0x58(0x50)
};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
// Size: 0xb0 (Inherited: 0xa0)
struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> ConstraintSections; // 0xa0(0x10)
};

// Class MovieSceneTracks.MovieScene3DAttachTrack
// Size: 0xb0 (Inherited: 0xb0)
struct UMovieScene3DAttachTrack : UMovieScene3DConstraintTrack {
};

// Class MovieSceneTracks.MovieScene3DPathTrack
// Size: 0xb8 (Inherited: 0xb0)
struct UMovieScene3DPathTrack : UMovieScene3DConstraintTrack {
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 0xd8 (Inherited: 0xa0)
struct UMovieScenePropertyTrack : UMovieSceneNameableTrack {
	struct UMovieSceneSection* SectionToKey; // 0xa0(0x08)
	struct FMovieScenePropertyBinding PropertyBinding; // 0xa8(0x1c)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xc8(0x10)
};

// Class MovieSceneTracks.MovieScene3DTransformTrack
// Size: 0xe8 (Inherited: 0xd8)
struct UMovieScene3DTransformTrack : UMovieScenePropertyTrack {
	char pad_D8[0x8]; // 0xd8(0x08)
	struct UMovieSceneBlenderSystem* BlenderSystemClass; // 0xe0(0x08)
};

// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// Size: 0xe0 (Inherited: 0xd8)
struct UMovieSceneActorReferenceTrack : UMovieScenePropertyTrack {
	char pad_D8[0x8]; // 0xd8(0x08)
};

// Class MovieSceneTracks.MovieSceneAudioTrack
// Size: 0xb0 (Inherited: 0xa0)
struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> AudioSections; // 0xa0(0x10)
};

// Class MovieSceneTracks.MovieSceneBoolTrack
// Size: 0xe0 (Inherited: 0xd8)
struct UMovieSceneBoolTrack : UMovieScenePropertyTrack {
	char pad_D8[0x8]; // 0xd8(0x08)
};

// Class MovieSceneTracks.MovieSceneByteTrack
// Size: 0xe0 (Inherited: 0xd8)
struct UMovieSceneByteTrack : UMovieScenePropertyTrack {
	struct UEnum* Enum; // 0xd8(0x08)
};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
// Size: 0xb8 (Inherited: 0xa0)
struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	bool bCanBlend; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xa8(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack
// Size: 0xb8 (Inherited: 0xa0)
struct UMovieSceneCameraShakeSourceShakeTrack : UMovieSceneNameableTrack {
	char pad_A0[0x8]; // 0xa0(0x08)
	struct TArray<struct UMovieSceneSection*> CameraShakeSections; // 0xa8(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
// Size: 0xb8 (Inherited: 0xa0)
struct UMovieSceneCameraShakeSourceTriggerTrack : UMovieSceneTrack {
	char pad_A0[0x8]; // 0xa0(0x08)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xa8(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// Size: 0xb8 (Inherited: 0xa0)
struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack {
	char pad_A0[0x8]; // 0xa0(0x08)
	struct TArray<struct UMovieSceneSection*> CameraShakeSections; // 0xa8(0x10)
};

// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// Size: 0xb0 (Inherited: 0xb0)
struct UMovieSceneCinematicShotTrack : UMovieSceneSubTrack {
};

// Class MovieSceneTracks.MovieSceneColorTrack
// Size: 0xe0 (Inherited: 0xd8)
struct UMovieSceneColorTrack : UMovieScenePropertyTrack {
	bool bIsSlateColor; // 0xd8(0x01)
	char pad_D9[0x7]; // 0xd9(0x07)
};

// Class MovieSceneTracks.MovieSceneCVarTrack
// Size: 0xb0 (Inherited: 0xa0)
struct UMovieSceneCVarTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xa0(0x10)
};

// Class MovieSceneTracks.MovieSceneDataLayerTrack
// Size: 0xb0 (Inherited: 0xa0)
struct UMovieSceneDataLayerTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xa0(0x10)
};

// Class MovieSceneTracks.MovieSceneDoubleTrack
// Size: 0xd8 (Inherited: 0xd8)
struct UMovieSceneDoubleTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneEnumTrack
// Size: 0xe0 (Inherited: 0xd8)
struct UMovieSceneEnumTrack : UMovieScenePropertyTrack {
	struct UEnum* Enum; // 0xd8(0x08)
};

// Class MovieSceneTracks.MovieSceneEulerTransformTrack
// Size: 0xd8 (Inherited: 0xd8)
struct UMovieSceneEulerTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneEventTrack
// Size: 0xc8 (Inherited: 0xa0)
struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	char pad_A0[0x10]; // 0xa0(0x10)
	char bFireEventsWhenForwards : 1; // 0xb0(0x01)
	char bFireEventsWhenBackwards : 1; // 0xb0(0x01)
	char pad_B0_2 : 6; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	enum class EFireEventsAtPosition EventPosition; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xb8(0x10)
};

// Class MovieSceneTracks.MovieSceneFloatTrack
// Size: 0xd8 (Inherited: 0xd8)
struct UMovieSceneFloatTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneFadeTrack
// Size: 0xd8 (Inherited: 0xd8)
struct UMovieSceneFadeTrack : UMovieSceneFloatTrack {
};

// Class MovieSceneTracks.MovieSceneIntegerTrack
// Size: 0xd8 (Inherited: 0xd8)
struct UMovieSceneIntegerTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// Size: 0xb0 (Inherited: 0xa0)
struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xa0(0x10)
};

// Class MovieSceneTracks.MovieSceneMaterialTrack
// Size: 0xb8 (Inherited: 0xa0)
struct UMovieSceneMaterialTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xa0(0x10)
	struct UMovieSceneSection* SectionToKey; // 0xb0(0x08)
};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// Size: 0xd0 (Inherited: 0xb8)
struct UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack {
	char pad_B8[0x10]; // 0xb8(0x10)
	struct UMaterialParameterCollection* MPC; // 0xc8(0x08)
};

// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// Size: 0xd0 (Inherited: 0xb8)
struct UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack {
	char pad_B8[0x10]; // 0xb8(0x10)
	int32_t MaterialIndex; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// Size: 0xe8 (Inherited: 0xd8)
struct UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack {
	char pad_D8[0x8]; // 0xd8(0x08)
	ClassPtrProperty PropertyClass; // 0xe0(0x08)
};

// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// Size: 0xb8 (Inherited: 0xa0)
struct UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack {
	char pad_A0[0x8]; // 0xa0(0x08)
	struct TArray<struct UMovieSceneSection*> Sections; // 0xa8(0x10)
};

// Class MovieSceneTracks.MovieSceneParticleTrack
// Size: 0xb8 (Inherited: 0xa0)
struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	char pad_A0[0x8]; // 0xa0(0x08)
	struct TArray<struct UMovieSceneSection*> ParticleSections; // 0xa8(0x10)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// Size: 0xe0 (Inherited: 0xd8)
struct UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack {
	int32_t MaterialIndex; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// Size: 0x150 (Inherited: 0xa0)
struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0xa0(0x10)
	bool bUseLegacySectionIndexBlend; // 0xb0(0x01)
	char pad_B1[0xf]; // 0xb1(0x0f)
	struct FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams; // 0xc0(0x80)
	bool bBlendFirstChildOfRoot; // 0x140(0x01)
	enum class ESwapRootBone SwapRootBone; // 0x141(0x01)
	char pad_142[0xe]; // 0x142(0x0e)

	void SetSwapRootBone(enum class ESwapRootBone InValue); // Function MovieSceneTracks.MovieSceneSkeletalAnimationTrack.SetSwapRootBone // (Final|RequiredAPI|Native|Public) // @ game+0x37a21e0
	enum class ESwapRootBone GetSwapRootBone(); // Function MovieSceneTracks.MovieSceneSkeletalAnimationTrack.GetSwapRootBone // (Final|RequiredAPI|Native|Public|Const) // @ game+0x37a21c0
};

// Class MovieSceneTracks.MovieSceneSlomoTrack
// Size: 0xe0 (Inherited: 0xd8)
struct UMovieSceneSlomoTrack : UMovieSceneFloatTrack {
	char pad_D8[0x8]; // 0xd8(0x08)
};

// Class MovieSceneTracks.MovieSceneStringTrack
// Size: 0xd8 (Inherited: 0xd8)
struct UMovieSceneStringTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneTransformTrack
// Size: 0xd8 (Inherited: 0xd8)
struct UMovieSceneTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneFloatVectorTrack
// Size: 0xe0 (Inherited: 0xd8)
struct UMovieSceneFloatVectorTrack : UMovieScenePropertyTrack {
	int32_t NumChannelsUsed; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// Class MovieSceneTracks.MovieSceneDoubleVectorTrack
// Size: 0xe0 (Inherited: 0xd8)
struct UMovieSceneDoubleVectorTrack : UMovieScenePropertyTrack {
	int32_t NumChannelsUsed; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
};

// Class MovieSceneTracks.MovieSceneVisibilityTrack
// Size: 0xe0 (Inherited: 0xe0)
struct UMovieSceneVisibilityTrack : UMovieSceneBoolTrack {
};

