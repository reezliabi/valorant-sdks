// Class MovieScene.MovieSceneBlenderSystemSupport
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneBlenderSystemSupport : UInterface {
};

// Class MovieScene.MovieSceneBoundObjectProxy
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneBoundObjectProxy : UInterface {

	struct UObject* BP_GetBoundObjectForSequencer(struct UObject* ResolvedObject); // Function MovieScene.MovieSceneBoundObjectProxy.BP_GetBoundObjectForSequencer // (RequiredAPI|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

// Class MovieScene.MovieSceneChannelOverrideProvider
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneChannelOverrideProvider : UInterface {
};

// Class MovieScene.MovieSceneDeterminismSource
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneDeterminismSource : UInterface {
};

// Class MovieScene.MovieSceneEvaluationHook
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneEvaluationHook : UInterface {
};

// Class MovieScene.MovieSceneMetaDataInterface
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneMetaDataInterface : UInterface {
};

// Class MovieScene.MovieScenePlaybackClient
// Size: 0x30 (Inherited: 0x30)
struct UMovieScenePlaybackClient : UInterface {
};

// Class MovieScene.MovieSceneSequencePlayerObserver
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneSequencePlayerObserver : UInterface {
};

// Class MovieScene.MovieSceneBindingOwnerInterface
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneBindingOwnerInterface : UInterface {
};

// Class MovieScene.MovieSceneCachedTrack
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneCachedTrack : UInterface {
};

// Class MovieScene.MovieSceneEasingFunction
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneEasingFunction : UInterface {

	float OnEvaluate(float Interp); // Function MovieScene.MovieSceneEasingFunction.OnEvaluate // (RequiredAPI|Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
};

// Class MovieScene.MovieSceneKeyProxy
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneKeyProxy : UInterface {
};

// Class MovieScene.MovieSceneSequenceTickManagerClient
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneSequenceTickManagerClient : UInterface {
};

// Class MovieScene.MovieSceneSignedObject
// Size: 0x60 (Inherited: 0x30)
struct UMovieSceneSignedObject : UObject {
	char pad_30[0x4]; // 0x30(0x04)
	struct FGuid Signature; // 0x34(0x10)
	char pad_44[0x1c]; // 0x44(0x1c)
};

// Class MovieScene.MovieSceneChannelOverrideContainer
// Size: 0x60 (Inherited: 0x60)
struct UMovieSceneChannelOverrideContainer : UMovieSceneSignedObject {
};

// Class MovieScene.MovieSceneSectionChannelOverrideRegistry
// Size: 0x80 (Inherited: 0x30)
struct UMovieSceneSectionChannelOverrideRegistry : UObject {
	struct TMap<struct FName, struct UMovieSceneChannelOverrideContainer*> Overrides; // 0x30(0x50)
};

// Class MovieScene.MovieSceneTrackTemplateProducer
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneTrackTemplateProducer : UInterface {
};

// Class MovieScene.MovieSceneCompiledData
// Size: 0x400 (Inherited: 0x30)
struct UMovieSceneCompiledData : UObject {
	struct FMovieSceneEvaluationTemplate EvaluationTemplate; // 0x30(0x160)
	struct FMovieSceneSequenceHierarchy Hierarchy; // 0x190(0x118)
	struct FMovieSceneEntityComponentField EntityComponentField; // 0x2a8(0xf0)
	struct FMovieSceneEvaluationField TrackTemplateField; // 0x398(0x30)
	struct TArray<struct FFrameTime> DeterminismFences; // 0x3c8(0x10)
	struct FGuid CompiledSignature; // 0x3d8(0x10)
	struct FGuid CompilerVersion; // 0x3e8(0x10)
	struct FMovieSceneSequenceCompilerMaskStruct AccumulatedMask; // 0x3f8(0x01)
	struct FMovieSceneSequenceCompilerMaskStruct AllocatedMask; // 0x3f9(0x01)
	enum class EMovieSceneSequenceFlags AccumulatedFlags; // 0x3fa(0x01)
	char pad_3FB[0x5]; // 0x3fb(0x05)
};

// Class MovieScene.MovieSceneCompiledDataManager
// Size: 0x238 (Inherited: 0x30)
struct UMovieSceneCompiledDataManager : UObject {
	char pad_30[0xb0]; // 0x30(0xb0)
	struct TMap<int32_t, struct FMovieSceneSequenceHierarchy> Hierarchies; // 0xe0(0x50)
	struct TMap<int32_t, struct FMovieSceneEvaluationTemplate> TrackTemplates; // 0x130(0x50)
	struct TMap<int32_t, struct FMovieSceneEvaluationField> TrackTemplateFields; // 0x180(0x50)
	struct TMap<int32_t, struct FMovieSceneEntityComponentField> EntityComponentFields; // 0x1d0(0x50)
	char pad_220[0x18]; // 0x220(0x18)
};

// Class MovieScene.MovieSceneEntityProvider
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneEntityProvider : UInterface {
};

// Class MovieScene.MovieSceneEntitySystem
// Size: 0x48 (Inherited: 0x30)
struct UMovieSceneEntitySystem : UObject {
	struct UMovieSceneEntitySystemLinker* Linker; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)
};

// Class MovieScene.MovieSceneBlenderSystem
// Size: 0x70 (Inherited: 0x48)
struct UMovieSceneBlenderSystem : UMovieSceneEntitySystem {
	char pad_48[0x28]; // 0x48(0x28)
};

// Class MovieScene.MovieSceneEntityInstantiatorSystem
// Size: 0x48 (Inherited: 0x48)
struct UMovieSceneEntityInstantiatorSystem : UMovieSceneEntitySystem {
};

// Class MovieScene.MovieSceneGenericBoundObjectInstantiator
// Size: 0x48 (Inherited: 0x48)
struct UMovieSceneGenericBoundObjectInstantiator : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieScene.MovieSceneBoundSceneComponentInstantiator
// Size: 0x48 (Inherited: 0x48)
struct UMovieSceneBoundSceneComponentInstantiator : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieScene.MovieSceneValueDecomposer
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneValueDecomposer : UInterface {
};

// Class MovieScene.MovieSceneEntitySystemLinker
// Size: 0x740 (Inherited: 0x30)
struct UMovieSceneEntitySystemLinker : UObject {
	char pad_30[0x278]; // 0x30(0x278)
	struct FMovieSceneEntitySystemGraph SystemGraph; // 0x2a8(0x190)
	char pad_438[0x308]; // 0x438(0x308)
};

// Class MovieScene.MovieSceneEvalTimeSystem
// Size: 0x1b8 (Inherited: 0x48)
struct UMovieSceneEvalTimeSystem : UMovieSceneEntitySystem {
	char pad_48[0x170]; // 0x48(0x170)
};

// Class MovieScene.MovieSceneEvaluationHookSystem
// Size: 0x98 (Inherited: 0x48)
struct UMovieSceneEvaluationHookSystem : UMovieSceneEntitySystem {
	struct TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance; // 0x48(0x50)
};

// Class MovieScene.MovieScenePreAnimatedStateSystemInterface
// Size: 0x30 (Inherited: 0x30)
struct UMovieScenePreAnimatedStateSystemInterface : UInterface {
};

// Class MovieScene.MovieSceneCachePreAnimatedStateSystem
// Size: 0x48 (Inherited: 0x48)
struct UMovieSceneCachePreAnimatedStateSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieScene.MovieSceneRestorePreAnimatedStateSystem
// Size: 0x58 (Inherited: 0x48)
struct UMovieSceneRestorePreAnimatedStateSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_48[0x10]; // 0x48(0x10)
};

// Class MovieScene.MovieSceneRootInstantiatorSystem
// Size: 0x48 (Inherited: 0x48)
struct UMovieSceneRootInstantiatorSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieScene.MovieSceneSpawnablesSystem
// Size: 0x48 (Inherited: 0x48)
struct UMovieSceneSpawnablesSystem : UMovieSceneEntitySystem {
};

// Class MovieScene.MovieSceneTrackInstance
// Size: 0x58 (Inherited: 0x30)
struct UMovieSceneTrackInstance : UObject {
	struct TWeakObjectPtr<struct UObject> WeakAnimatedObject; // 0x30(0x08)
	bool bIsRootTrackInstance; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UMovieSceneEntitySystemLinker* PrivateLinker; // 0x40(0x08)
	struct TArray<struct FMovieSceneTrackInstanceInput> Inputs; // 0x48(0x10)
};

// Class MovieScene.MovieSceneTrackInstanceInstantiator
// Size: 0xf8 (Inherited: 0x48)
struct UMovieSceneTrackInstanceInstantiator : UMovieSceneEntityInstantiatorSystem {
	char pad_48[0xb0]; // 0x48(0xb0)
};

// Class MovieScene.MovieSceneTrackInstanceSystem
// Size: 0x50 (Inherited: 0x48)
struct UMovieSceneTrackInstanceSystem : UMovieSceneEntitySystem {
	struct UMovieSceneTrackInstanceInstantiator* Instantiator; // 0x48(0x08)
};

// Class MovieScene.MovieSceneCustomClockSource
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneCustomClockSource : UInterface {

	void OnTick(float DeltaSeconds, float InPlayRate); // Function MovieScene.MovieSceneCustomClockSource.OnTick // (Native|Public) // @ game+0x3465820
	void OnStopPlaying(struct FQualifiedFrameTime& InStopTime); // Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying // (Native|Public|HasOutParms) // @ game+0x3465600
	void OnStartPlaying(struct FQualifiedFrameTime& InStartTime); // Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying // (Native|Public|HasOutParms) // @ game+0x3465710
	struct FFrameTime OnRequestCurrentTime(struct FQualifiedFrameTime& InCurrentTime, float InPlayRate); // Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime // (Native|Public|HasOutParms) // @ game+0x3465430
};

// Class MovieScene.MovieSceneBuiltInEasingFunction
// Size: 0x40 (Inherited: 0x30)
struct UMovieSceneBuiltInEasingFunction : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	enum class EMovieSceneBuiltInEasing Type; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class MovieScene.MovieSceneEasingExternalCurve
// Size: 0x40 (Inherited: 0x30)
struct UMovieSceneEasingExternalCurve : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UCurveFloat* Curve; // 0x38(0x08)
};

// Class MovieScene.NodeAndChannelMappings
// Size: 0x30 (Inherited: 0x30)
struct UNodeAndChannelMappings : UInterface {
};

// Class MovieScene.MovieSceneNodeGroup
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneNodeGroup : UObject {
};

// Class MovieScene.MovieSceneNodeGroupCollection
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneNodeGroupCollection : UObject {
};

// Class MovieScene.MovieScene
// Size: 0x170 (Inherited: 0x60)
struct UMovieScene : UMovieSceneSignedObject {
	char pad_60[0x8]; // 0x60(0x08)
	struct TArray<struct FMovieSceneSpawnable> Spawnables; // 0x68(0x10)
	struct TArray<struct FMovieScenePossessable> Possessables; // 0x78(0x10)
	struct TArray<struct FMovieSceneBinding> ObjectBindings; // 0x88(0x10)
	struct TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups; // 0x98(0x50)
	struct TArray<struct UMovieSceneTrack*> Tracks; // 0xe8(0x10)
	struct UMovieSceneTrack* CameraCutTrack; // 0xf8(0x08)
	struct FMovieSceneFrameRange SelectionRange; // 0x100(0x10)
	struct FMovieSceneFrameRange PlaybackRange; // 0x110(0x10)
	struct FFrameRate TickResolution; // 0x120(0x08)
	struct FFrameRate DisplayRate; // 0x128(0x08)
	enum class EMovieSceneEvaluationType EvaluationType; // 0x130(0x01)
	enum class EUpdateClockSource ClockSource; // 0x131(0x01)
	char pad_132[0x6]; // 0x132(0x06)
	struct FSoftObjectPath CustomClockSourcePath; // 0x138(0x28)
	struct TArray<struct FMovieSceneMarkedFrame> MarkedFrames; // 0x160(0x10)
};

// Class MovieScene.MovieSceneBindingOverrides
// Size: 0x98 (Inherited: 0x30)
struct UMovieSceneBindingOverrides : UObject {
	struct TArray<struct FMovieSceneBindingOverrideData> BindingData; // 0x30(0x10)
	char pad_40[0x58]; // 0x40(0x58)
};

// Class MovieScene.BuiltInDynamicBindingResolverLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBuiltInDynamicBindingResolverLibrary : UBlueprintFunctionLibrary {

	struct FMovieSceneDynamicBindingResolveResult ResolveToPlayerPawn(struct UObject* WorldContextObject, int32_t PlayerControllerIndex); // Function MovieScene.BuiltInDynamicBindingResolverLibrary.ResolveToPlayerPawn // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x34a2060
};

// Class MovieScene.MovieSceneFolder
// Size: 0x80 (Inherited: 0x30)
struct UMovieSceneFolder : UObject {
	char pad_30[0x4]; // 0x30(0x04)
	struct FName FolderName; // 0x34(0x0c)
	struct TArray<struct UMovieSceneFolder*> ChildFolders; // 0x40(0x10)
	struct TArray<struct UMovieSceneTrack*> ChildTracks; // 0x50(0x10)
	struct TArray<struct FString> ChildObjectBindingStrings; // 0x60(0x10)
	char pad_70[0x10]; // 0x70(0x10)
};

// Class MovieScene.MovieSceneMetaData
// Size: 0x60 (Inherited: 0x30)
struct UMovieSceneMetaData : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FString Author; // 0x38(0x10)
	struct FDateTime Created; // 0x48(0x08)
	struct FString Notes; // 0x50(0x10)

	void SetNotes(struct FString InNotes); // Function MovieScene.MovieSceneMetaData.SetNotes // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34a4ea0
	void SetCreated(struct FDateTime InCreated); // Function MovieScene.MovieSceneMetaData.SetCreated // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x34a5080
	void SetAuthor(struct FString InAuthor); // Function MovieScene.MovieSceneMetaData.SetAuthor // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34a5170
	struct FString GetNotes(); // Function MovieScene.MovieSceneMetaData.GetNotes // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34a5350
	struct FDateTime GetCreated(); // Function MovieScene.MovieSceneMetaData.GetCreated // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x34a5450
	struct FString GetAuthor(); // Function MovieScene.MovieSceneMetaData.GetAuthor // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34a5470
};

// Class MovieScene.MovieSceneTrack
// Size: 0xa0 (Inherited: 0x60)
struct UMovieSceneTrack : UMovieSceneSignedObject {
	struct FMovieSceneTrackEvalOptions EvalOptions; // 0x60(0x04)
	char pad_64[0x1]; // 0x64(0x01)
	bool bIsEvalDisabled; // 0x65(0x01)
	char pad_66[0x2]; // 0x66(0x02)
	struct TArray<int32_t> RowsDisabled; // 0x68(0x10)
	char pad_78[0x4]; // 0x78(0x04)
	struct FGuid EvaluationFieldGuid; // 0x7c(0x10)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FMovieSceneTrackEvaluationField EvaluationField; // 0x90(0x10)
};

// Class MovieScene.MovieSceneNameableTrack
// Size: 0xa0 (Inherited: 0xa0)
struct UMovieSceneNameableTrack : UMovieSceneTrack {
};

// Class MovieScene.MovieSceneSection
// Size: 0xf8 (Inherited: 0x60)
struct UMovieSceneSection : UMovieSceneSignedObject {
	struct FMovieSceneSectionEvalOptions EvalOptions; // 0x60(0x02)
	char pad_62[0x6]; // 0x62(0x06)
	struct FMovieSceneEasingSettings Easing; // 0x68(0x38)
	struct FMovieSceneFrameRange SectionRange; // 0xa0(0x10)
	struct FFrameNumber PreRollFrames; // 0xb0(0x04)
	struct FFrameNumber PostRollFrames; // 0xb4(0x04)
	int32_t RowIndex; // 0xb8(0x04)
	int32_t OverlapPriority; // 0xbc(0x04)
	char bIsActive : 1; // 0xc0(0x01)
	char bIsLocked : 1; // 0xc0(0x01)
	char pad_C0_2 : 6; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	float StartTime; // 0xc4(0x04)
	float EndTime; // 0xc8(0x04)
	float PrerollTime; // 0xcc(0x04)
	float PostrollTime; // 0xd0(0x04)
	char bIsInfinite : 1; // 0xd4(0x01)
	char pad_D4_1 : 7; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	bool bSupportsInfiniteRange; // 0xd8(0x01)
	struct FOptionalMovieSceneBlendType BlendType; // 0xd9(0x02)
	char pad_DB[0x1d]; // 0xdb(0x1d)

	void SetRowIndex(int32_t NewRowIndex); // Function MovieScene.MovieSceneSection.SetRowIndex // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34aab10
	void SetPreRollFrames(int32_t InPreRollFrames); // Function MovieScene.MovieSceneSection.SetPreRollFrames // (Final|Native|Public|BlueprintCallable) // @ game+0x34aa670
	void SetPostRollFrames(int32_t InPostRollFrames); // Function MovieScene.MovieSceneSection.SetPostRollFrames // (Final|Native|Public|BlueprintCallable) // @ game+0x34aa550
	void SetOverlapPriority(int32_t NewPriority); // Function MovieScene.MovieSceneSection.SetOverlapPriority // (Final|Native|Public|BlueprintCallable) // @ game+0x34aaa00
	void SetIsLocked(bool bInIsLocked); // Function MovieScene.MovieSceneSection.SetIsLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x34aa7a0
	void SetIsActive(bool bInIsActive); // Function MovieScene.MovieSceneSection.SetIsActive // (Final|Native|Public|BlueprintCallable) // @ game+0x34aa8d0
	void SetCompletionMode(enum class EMovieSceneCompletionMode InCompletionMode); // Function MovieScene.MovieSceneSection.SetCompletionMode // (Final|Native|Public|BlueprintCallable) // @ game+0x34aad30
	void SetColorTint(struct FColor& InColorTint); // Function MovieScene.MovieSceneSection.SetColorTint // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x34aa460
	void SetBlendType(enum class EMovieSceneBlendType InBlendType); // Function MovieScene.MovieSceneSection.SetBlendType // (Native|Public|BlueprintCallable) // @ game+0x34aac00
	bool IsLocked(); // Function MovieScene.MovieSceneSection.IsLocked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34aa770
	bool IsActive(); // Function MovieScene.MovieSceneSection.IsActive // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34aa8a0
	int32_t GetRowIndex(); // Function MovieScene.MovieSceneSection.GetRowIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34aaaf0
	int32_t GetPreRollFrames(); // Function MovieScene.MovieSceneSection.GetPreRollFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34aa650
	int32_t GetPostRollFrames(); // Function MovieScene.MovieSceneSection.GetPostRollFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34aa530
	int32_t GetOverlapPriority(); // Function MovieScene.MovieSceneSection.GetOverlapPriority // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34aa9e0
	enum class EMovieSceneCompletionMode GetCompletionMode(); // Function MovieScene.MovieSceneSection.GetCompletionMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34aae20
	struct FColor GetColorTint(); // Function MovieScene.MovieSceneSection.GetColorTint // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x34aa430
	struct FOptionalMovieSceneBlendType GetBlendType(); // Function MovieScene.MovieSceneSection.GetBlendType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34aad00
};

// Class MovieScene.MovieSceneSequence
// Size: 0x70 (Inherited: 0x60)
struct UMovieSceneSequence : UMovieSceneSignedObject {
	struct UMovieSceneCompiledData* CompiledData; // 0x60(0x08)
	enum class EMovieSceneCompletionMode DefaultCompletionMode; // 0x68(0x01)
	bool bParentContextsAreSignificant; // 0x69(0x01)
	bool bPlayableDirectly; // 0x6a(0x01)
	enum class EMovieSceneSequenceFlags SequenceFlags; // 0x6b(0x01)
	char pad_6C[0x4]; // 0x6c(0x04)

	struct FMovieSceneTimecodeSource GetEarliestTimecodeSource(); // Function MovieScene.MovieSceneSequence.GetEarliestTimecodeSource // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ad590
	struct TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingsByTag // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ad5e0
	struct FMovieSceneObjectBindingID FindBindingByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingByTag // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34ad700
};

// Class MovieScene.MovieSceneSequencePlayer
// Size: 0x4d0 (Inherited: 0x30)
struct UMovieSceneSequencePlayer : UObject {
	char pad_30[0x200]; // 0x30(0x200)
	struct TScriptInterface<IMovieSceneSequencePlayerObserver> Observer; // 0x230(0x10)
	struct FMulticastInlineDelegate OnPlay; // 0x240(0x10)
	struct FMulticastInlineDelegate OnPlayReverse; // 0x250(0x10)
	struct FMulticastInlineDelegate OnStop; // 0x260(0x10)
	struct FMulticastInlineDelegate OnPause; // 0x270(0x10)
	struct FMulticastInlineDelegate OnFinished; // 0x280(0x10)
	enum class EMovieScenePlayerStatus Status; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	char bReversePlayback : 1; // 0x294(0x01)
	char pad_294_1 : 7; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct UMovieSceneSequence* Sequence; // 0x298(0x08)
	struct FFrameNumber StartTime; // 0x2a0(0x04)
	int32_t DurationFrames; // 0x2a4(0x04)
	float DurationSubFrames; // 0x2a8(0x04)
	int32_t CurrentNumLoops; // 0x2ac(0x04)
	int32_t SerialNumber; // 0x2b0(0x04)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x2b4(0x20)
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x2d8(0x88)
	char pad_360[0x90]; // 0x360(0x90)
	struct FMovieSceneSequenceReplProperties NetSyncProps; // 0x3f0(0x14)
	char pad_404[0x4]; // 0x404(0x04)
	struct TScriptInterface<IMovieScenePlaybackClient> PlaybackClient; // 0x408(0x10)
	struct UMovieSceneSequenceTickManager* TickManager; // 0x418(0x08)
	char pad_420[0xb0]; // 0x420(0xb0)

	void StopAtCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34b0ba0
	void Stop(); // Function MovieScene.MovieSceneSequencePlayer.Stop // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34b0bd0
	void SetWeight(double InWeight); // Function MovieScene.MovieSceneSequencePlayer.SetWeight // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34b0600
	void SetTimeRange(float StartTime, float Duration); // Function MovieScene.MovieSceneSequencePlayer.SetTimeRange // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34b0120
	void SetPlayRate(float PlayRate); // Function MovieScene.MovieSceneSequencePlayer.SetPlayRate // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34afab0
	void SetPlaybackPosition(struct FMovieSceneSequencePlaybackParams PlaybackParams); // Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34afce0
	void SetFrameRate(struct FFrameRate FrameRate); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRate // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34b07a0
	void SetFrameRange(int32_t StartFrame, int32_t Duration, float SubFrames); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRange // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34b03a0
	void SetDisableCameraCuts(bool bInDisableCameraCuts); // Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts // (Final|Native|Public|BlueprintCallable) // @ game+0x34af9b0
	void Scrub(); // Function MovieScene.MovieSceneSequencePlayer.Scrub // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34b0bf0
	void RPC_OnStopEvent(struct FFrameTime StoppedTime, int32_t NewSerialNumber); // Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent // (Final|RequiredAPI|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x34af050
	void RPC_OnFinishPlaybackEvent(struct FFrameTime StoppedTime, int32_t NewSerialNumber); // Function MovieScene.MovieSceneSequencePlayer.RPC_OnFinishPlaybackEvent // (Final|RequiredAPI|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x34aeeb0
	void RPC_ExplicitServerUpdateEvent(enum class EUpdatePositionMethod Method, struct FFrameTime RelevantTime, int32_t NewSerialNumber); // Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent // (Final|RequiredAPI|Net|NetReliableNative|Event|NetMulticast|Private) // @ game+0x34af1f0
	void RestoreState(); // Function MovieScene.MovieSceneSequencePlayer.RestoreState // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34afc50
	void RemoveWeight(); // Function MovieScene.MovieSceneSequencePlayer.RemoveWeight // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34b05c0
	void PlayTo(struct FMovieSceneSequencePlaybackParams PlaybackParams, struct FMovieSceneSequencePlayToParams PlayToParams); // Function MovieScene.MovieSceneSequencePlayer.PlayTo // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34afed0
	void PlayReverse(); // Function MovieScene.MovieSceneSequencePlayer.PlayReverse // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34b0d40
	void PlayLooping(int32_t NumLoops); // Function MovieScene.MovieSceneSequencePlayer.PlayLooping // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34b0c30
	void Play(); // Function MovieScene.MovieSceneSequencePlayer.Play // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34b0d60
	void Pause(); // Function MovieScene.MovieSceneSequencePlayer.Pause // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34b0c10
	bool IsReversed(); // Function MovieScene.MovieSceneSequencePlayer.IsReversed // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34afbc0
	bool IsPlaying(); // Function MovieScene.MovieSceneSequencePlayer.IsPlaying // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34afc20
	bool IsPaused(); // Function MovieScene.MovieSceneSequencePlayer.IsPaused // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34afbf0
	void GoToEndAndStop(); // Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34b0aa0
	struct FQualifiedFrameTime GetStartTime(); // Function MovieScene.MovieSceneSequencePlayer.GetStartTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34b0750
	struct FString GetSequenceName(bool bAddClientInfo); // Function MovieScene.MovieSceneSequencePlayer.GetSequenceName // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34af410
	struct UMovieSceneSequence* GetSequence(); // Function MovieScene.MovieSceneSequencePlayer.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34af570
	float GetPlayRate(); // Function MovieScene.MovieSceneSequencePlayer.GetPlayRate // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34afba0
	struct TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(struct UObject* InObject); // Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34af590
	struct FFrameRate GetFrameRate(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34b09e0
	int32_t GetFrameDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34b0a00
	struct FQualifiedFrameTime GetEndTime(); // Function MovieScene.MovieSceneSequencePlayer.GetEndTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34b0700
	struct FQualifiedFrameTime GetDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetDuration // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34b0a20
	bool GetDisableCameraCuts(); // Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts // (Final|Native|Public|BlueprintCallable) // @ game+0x34af980
	struct FQualifiedFrameTime GetCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34b0a70
	struct TArray<struct UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding); // Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34af700
	void ChangePlaybackDirection(); // Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34b0d20
};

// Class MovieScene.MovieSceneSequenceTickManager
// Size: 0xa0 (Inherited: 0x30)
struct UMovieSceneSequenceTickManager : UObject {
	char pad_30[0x70]; // 0x30(0x70)
};

// Class MovieScene.MovieSceneBoolSection
// Size: 0x200 (Inherited: 0xf8)
struct UMovieSceneBoolSection : UMovieSceneSection {
	bool DefaultValue; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FMovieSceneBoolChannel BoolCurve; // 0x100(0x100)
};

// Class MovieScene.MovieSceneHookSection
// Size: 0x110 (Inherited: 0xf8)
struct UMovieSceneHookSection : UMovieSceneSection {
	char pad_F8[0x10]; // 0xf8(0x10)
	char bRequiresRangedHook : 1; // 0x108(0x01)
	char bRequiresTriggerHooks : 1; // 0x108(0x01)
	char pad_108_2 : 6; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
};

// Class MovieScene.MovieSceneSpawnSection
// Size: 0x208 (Inherited: 0x200)
struct UMovieSceneSpawnSection : UMovieSceneBoolSection {
	char pad_200[0x8]; // 0x200(0x08)
};

// Class MovieScene.MovieSceneSubSection
// Size: 0x140 (Inherited: 0xf8)
struct UMovieSceneSubSection : UMovieSceneSection {
	char pad_F8[0x8]; // 0xf8(0x08)
	struct FMovieSceneSectionParameters Parameters; // 0x100(0x28)
	float StartOffset; // 0x128(0x04)
	float TimeScale; // 0x12c(0x04)
	float PrerollTime; // 0x130(0x04)
	char NetworkMask; // 0x134(0x01)
	char pad_135[0x3]; // 0x135(0x03)
	struct UMovieSceneSequence* SubSequence; // 0x138(0x08)

	void SetSequence(struct UMovieSceneSequence* Sequence); // Function MovieScene.MovieSceneSubSection.SetSequence // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34c76b0
	struct UMovieSceneSequence* GetSequence(); // Function MovieScene.MovieSceneSubSection.GetSequence // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x34c77a0
};

// Class MovieScene.TestMovieSceneTrack
// Size: 0xc0 (Inherited: 0xa0)
struct UTestMovieSceneTrack : UMovieSceneTrack {
	char pad_A0[0x8]; // 0xa0(0x08)
	bool bHighPassFilter; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0xb0(0x10)
};

// Class MovieScene.TestMovieSceneSection
// Size: 0xf8 (Inherited: 0xf8)
struct UTestMovieSceneSection : UMovieSceneSection {
};

// Class MovieScene.TestMovieSceneSequence
// Size: 0x78 (Inherited: 0x70)
struct UTestMovieSceneSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x70(0x08)
};

// Class MovieScene.MovieSceneSubTrack
// Size: 0xb0 (Inherited: 0xa0)
struct UMovieSceneSubTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xa0(0x10)
};

// Class MovieScene.TestMovieSceneSubTrack
// Size: 0xc0 (Inherited: 0xb0)
struct UTestMovieSceneSubTrack : UMovieSceneSubTrack {
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0xb0(0x10)
};

// Class MovieScene.TestMovieSceneSubSection
// Size: 0x140 (Inherited: 0x140)
struct UTestMovieSceneSubSection : UMovieSceneSubSection {
};

// Class MovieScene.TestMovieSceneEvalHookTrack
// Size: 0xb0 (Inherited: 0xa0)
struct UTestMovieSceneEvalHookTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> SectionArray; // 0xa0(0x10)
};

// Class MovieScene.TestMovieSceneEvalHookSection
// Size: 0x128 (Inherited: 0x110)
struct UTestMovieSceneEvalHookSection : UMovieSceneHookSection {
	char pad_110[0x18]; // 0x110(0x18)
};

// Class MovieScene.MovieSceneSpawnTrack
// Size: 0xc0 (Inherited: 0xa0)
struct UMovieSceneSpawnTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xa0(0x10)
	struct FGuid ObjectGuid; // 0xb0(0x10)
};

