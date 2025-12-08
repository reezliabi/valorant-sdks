// Class TemplateSequence.TemplateSequence
// Size: 0xf8 (Inherited: 0x70)
struct UTemplateSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x70(0x08)
	struct TSoftClassPtr<UObject> BoundActorClass; // 0x78(0x30)
	struct TMap<struct FGuid, struct FName> BoundActorComponents; // 0xa8(0x50)
};

// Class TemplateSequence.CameraAnimationSequence
// Size: 0xf8 (Inherited: 0xf8)
struct UCameraAnimationSequence : UTemplateSequence {
};

// Class TemplateSequence.CameraAnimationSequenceCameraStandIn
// Size: 0x960 (Inherited: 0x30)
struct UCameraAnimationSequenceCameraStandIn : UObject {
	float fieldOfView; // 0x30(0x04)
	char bConstrainAspectRatio : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float AspectRatio; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FPostProcessSettings PostProcessSettings; // 0x40(0x800)
	float PostProcessBlendWeight; // 0x840(0x04)
	struct FCameraFilmbackSettings Filmback; // 0x844(0x0c)
	struct FCameraLensSettings LensSettings; // 0x850(0x1c)
	char pad_86C[0x4]; // 0x86c(0x04)
	struct FCameraFocusSettings FocusSettings; // 0x870(0x68)
	float CurrentFocalLength; // 0x8d8(0x04)
	float CurrentAperture; // 0x8dc(0x04)
	float CurrentFocusDistance; // 0x8e0(0x04)
	char pad_8E4[0x7c]; // 0x8e4(0x7c)
};

// Class TemplateSequence.CameraAnimationSequencePlayer
// Size: 0x3a0 (Inherited: 0x30)
struct UCameraAnimationSequencePlayer : UObject {
	char pad_30[0x270]; // 0x30(0x270)
	struct UObject* BoundObjectOverride; // 0x2a0(0x08)
	struct UMovieSceneSequence* Sequence; // 0x2a8(0x08)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x2b0(0x88)
	char pad_338[0x68]; // 0x338(0x68)
};

// Class TemplateSequence.CameraAnimationSpawnableSystem
// Size: 0x48 (Inherited: 0x48)
struct UCameraAnimationSpawnableSystem : UMovieSceneEntitySystem {
};

// Class TemplateSequence.CameraAnimationBoundObjectInstantiator
// Size: 0x48 (Inherited: 0x48)
struct UCameraAnimationBoundObjectInstantiator : UMovieSceneEntityInstantiatorSystem {
};

// Class TemplateSequence.CameraAnimationEntitySystemLinker
// Size: 0x740 (Inherited: 0x740)
struct UCameraAnimationEntitySystemLinker : UMovieSceneEntitySystemLinker {
};

// Class TemplateSequence.CameraAnimationSequenceSubsystem
// Size: 0x50 (Inherited: 0x38)
struct UCameraAnimationSequenceSubsystem : UWorldSubsystem {
	struct UMovieSceneEntitySystemLinker* Linker; // 0x38(0x08)
	char pad_40[0x10]; // 0x40(0x10)
};

// Class TemplateSequence.TemplateSequenceSection
// Size: 0x150 (Inherited: 0x140)
struct UTemplateSequenceSection : UMovieSceneSubSection {
	struct TArray<struct FTemplateSectionPropertyScale> PropertyScales; // 0x140(0x10)
};

// Class TemplateSequence.SequenceCameraShakePattern
// Size: 0x80 (Inherited: 0x30)
struct USequenceCameraShakePattern : UCameraShakePattern {
	struct UCameraAnimationSequence* Sequence; // 0x30(0x08)
	float PlayRate; // 0x38(0x04)
	float Scale; // 0x3c(0x04)
	float BlendInTime; // 0x40(0x04)
	float BlendOutTime; // 0x44(0x04)
	float RandomSegmentDuration; // 0x48(0x04)
	bool bRandomSegment; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct UCameraAnimationSequencePlayer* Player; // 0x50(0x08)
	struct UCameraAnimationSequenceCameraStandIn* CameraStandIn; // 0x58(0x08)
	char pad_60[0x20]; // 0x60(0x20)
};

// Class TemplateSequence.TemplateSequenceSystem
// Size: 0xb8 (Inherited: 0x48)
struct UTemplateSequenceSystem : UMovieSceneEntitySystem {
	char pad_48[0x70]; // 0x48(0x70)
};

// Class TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
// Size: 0xa0 (Inherited: 0x48)
struct UTemplateSequencePropertyScalingInstantiatorSystem : UMovieSceneEntitySystem {
	char pad_48[0x58]; // 0x48(0x58)
};

// Class TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
// Size: 0x98 (Inherited: 0x48)
struct UTemplateSequencePropertyScalingEvaluatorSystem : UMovieSceneEntitySystem {
	char pad_48[0x50]; // 0x48(0x50)
};

// Class TemplateSequence.TemplateSequenceActor
// Size: 0x4c8 (Inherited: 0x460)
struct ATemplateSequenceActor : AActor {
	char pad_460[0x8]; // 0x460(0x08)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x468(0x20)
	struct UTemplateSequencePlayer* SequencePlayer; // 0x488(0x08)
	struct FSoftObjectPath TemplateSequence; // 0x490(0x28)
	struct FTemplateSequenceBindingOverrideData BindingOverride; // 0x4b8(0x0c)
	char pad_4C4[0x4]; // 0x4c4(0x04)

	void SetSequence(struct UTemplateSequence* InSequence); // Function TemplateSequence.TemplateSequenceActor.SetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x538cac0
	void SetBinding(struct AActor* Actor, bool bOverridesDefault); // Function TemplateSequence.TemplateSequenceActor.SetBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x538c7a0
	struct UTemplateSequence* LoadSequence(); // Function TemplateSequence.TemplateSequenceActor.LoadSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x538cd40
	struct UTemplateSequencePlayer* GetSequencePlayer(); // Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x538ca80
	struct UTemplateSequence* GetSequence(); // Function TemplateSequence.TemplateSequenceActor.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x538cdc0
};

// Class TemplateSequence.TemplateSequencePlayer
// Size: 0x4d8 (Inherited: 0x4d0)
struct UTemplateSequencePlayer : UMovieSceneSequencePlayer {
	char pad_4D0[0x8]; // 0x4d0(0x08)

	struct UTemplateSequencePlayer* CreateTemplateSequencePlayer(struct UObject* WorldContextObject, struct UTemplateSequence* TemplateSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ATemplateSequenceActor*& OutActor); // Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x538e460
};

// Class TemplateSequence.SequenceCameraShakeTestUtil
// Size: 0x30 (Inherited: 0x30)
struct USequenceCameraShakeTestUtil : UBlueprintFunctionLibrary {

	bool GetPostProcessBlendCache(struct APlayerController* PlayerController, int32_t PPIndex, struct FPostProcessSettings& OutPPSettings, float& OutPPBlendWeight); // Function TemplateSequence.SequenceCameraShakeTestUtil.GetPostProcessBlendCache // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x538f5e0
	struct FMinimalViewInfo GetLastFrameCameraCachePOV(struct APlayerController* PlayerController); // Function TemplateSequence.SequenceCameraShakeTestUtil.GetLastFrameCameraCachePOV // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x538f950
	struct FMinimalViewInfo GetCameraCachePOV(struct APlayerController* PlayerController); // Function TemplateSequence.SequenceCameraShakeTestUtil.GetCameraCachePOV // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x538fc10
};

// Class TemplateSequence.TemplateSequenceTrack
// Size: 0xb0 (Inherited: 0xb0)
struct UTemplateSequenceTrack : UMovieSceneSubTrack {
};

