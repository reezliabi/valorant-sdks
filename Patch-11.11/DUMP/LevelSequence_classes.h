// Class LevelSequence.DefaultLevelSequenceInstanceData
// Size: 0xa0 (Inherited: 0x30)
struct UDefaultLevelSequenceInstanceData : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct AActor* TransformOriginActor; // 0x38(0x08)
	struct FTransform TransformOrigin; // 0x40(0x60)
};

// Class LevelSequence.AnimSequenceLevelSequenceLink
// Size: 0x68 (Inherited: 0x30)
struct UAnimSequenceLevelSequenceLink : UAssetUserData {
	struct FGuid SkelTrackGuid; // 0x30(0x10)
	struct FSoftObjectPath PathToLevelSequence; // 0x40(0x28)
};

// Class LevelSequence.LevelSequence
// Size: 0x228 (Inherited: 0x70)
struct ULevelSequence : UMovieSceneSequence {
	char pad_70[0x8]; // 0x70(0x08)
	struct UMovieScene* MovieScene; // 0x78(0x08)
	struct FLevelSequenceObjectReferenceMap ObjectReferences; // 0x80(0x50)
	struct FLevelSequenceBindingReferences BindingReferences; // 0xd0(0xf0)
	struct TMap<struct FString, struct FLevelSequenceObject> PossessedObjects; // 0x1c0(0x50)
	ClassPtrProperty DirectorClass; // 0x210(0x08)
	struct TArray<struct UAssetUserData*> AssetUserData; // 0x218(0x10)

	void RemoveMetaDataByClass(struct UObject* InClass); // Function LevelSequence.LevelSequence.RemoveMetaDataByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x33ba9c0
	struct UObject* FindOrAddMetaDataByClass(struct UObject* InClass); // Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass // (Final|Native|Public|BlueprintCallable) // @ game+0x3a49850
	struct UObject* FindMetaDataByClass(struct UObject* InClass); // Function LevelSequence.LevelSequence.FindMetaDataByClass // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a49850
	struct UObject* CopyMetaData(struct UObject* InMetaData); // Function LevelSequence.LevelSequence.CopyMetaData // (Final|Native|Public|BlueprintCallable) // @ game+0x3a49850
};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// Size: 0x30 (Inherited: 0x30)
struct ULevelSequenceBurnInInitSettings : UObject {
};

// Class LevelSequence.LevelSequenceBurnInOptions
// Size: 0x68 (Inherited: 0x30)
struct ULevelSequenceBurnInOptions : UObject {
	bool bUseBurnIn; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FSoftClassPath BurnInClass; // 0x38(0x28)
	struct ULevelSequenceBurnInInitSettings* Settings; // 0x60(0x08)

	void SetBurnIn(struct FSoftClassPath InBurnInClass); // Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3a4af50
};

// Class LevelSequence.LevelSequenceActor
// Size: 0x500 (Inherited: 0x460)
struct ALevelSequenceActor : AActor {
	char pad_460[0x18]; // 0x460(0x18)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x478(0x20)
	struct ULevelSequencePlayer* SequencePlayer; // 0x498(0x08)
	struct ULevelSequence* LevelSequenceAsset; // 0x4a0(0x08)
	struct FLevelSequenceCameraSettings CameraSettings; // 0x4a8(0x02)
	char pad_4AA[0x6]; // 0x4aa(0x06)
	struct ULevelSequenceBurnInOptions* BurnInOptions; // 0x4b0(0x08)
	struct UMovieSceneBindingOverrides* BindingOverrides; // 0x4b8(0x08)
	char bAutoPlay : 1; // 0x4c0(0x01)
	char bOverrideInstanceData : 1; // 0x4c0(0x01)
	char bReplicatePlayback : 1; // 0x4c0(0x01)
	char pad_4C0_3 : 5; // 0x4c0(0x01)
	char pad_4C1[0x7]; // 0x4c1(0x07)
	struct UObject* DefaultInstanceData; // 0x4c8(0x08)
	struct ULevelSequenceBurnIn* BurnInInstance; // 0x4d0(0x08)
	bool bShowBurnin; // 0x4d8(0x01)
	char pad_4D9[0x7]; // 0x4d9(0x07)
	struct FWorldPartitionResolveData WorldPartitionResolveData; // 0x4e0(0x20)

	void ShowBurnin(); // Function LevelSequence.LevelSequenceActor.ShowBurnin // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a4c4b0
	void SetSequence(struct ULevelSequence* InSequence); // Function LevelSequence.LevelSequenceActor.SetSequence // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a4c650
	void SetReplicatePlayback(bool ReplicatePlayback); // Function LevelSequence.LevelSequenceActor.SetReplicatePlayback // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a4c540
	void SetBindingByTag(struct FName BindingTag, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBindingByTag // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3a4bf90
	void SetBinding(struct FMovieSceneObjectBindingID Binding, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBinding // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3a4c220
	void ResetBindings(); // Function LevelSequence.LevelSequenceActor.ResetBindings // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a4b5e0
	void ResetBinding(struct FMovieSceneObjectBindingID Binding); // Function LevelSequence.LevelSequenceActor.ResetBinding // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a4b630
	void RemoveBindingByTag(struct FName Tag, struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.RemoveBindingByTag // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a4b750
	void RemoveBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.RemoveBinding // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a4b900
	void OnLevelSequenceLoaded__DelegateSignature(); // DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature // (Public|Delegate) // @ game+0x19be2f0
	void HideBurnin(); // Function LevelSequence.LevelSequenceActor.HideBurnin // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a4c4e0
	struct ULevelSequencePlayer* GetSequencePlayer(); // Function LevelSequence.LevelSequenceActor.GetSequencePlayer // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a4c500
	struct ULevelSequence* GetSequence(); // Function LevelSequence.LevelSequenceActor.GetSequence // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a4c770
	struct TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBindings // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a4b2f0
	struct FMovieSceneObjectBindingID FindNamedBinding(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBinding // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a4b480
	void AddBindingByTag(struct FName BindingTag, struct AActor* Actor, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBindingByTag // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a4bad0
	void AddBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBinding // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a4bd20
};

// Class LevelSequence.ReplicatedLevelSequenceActor
// Size: 0x500 (Inherited: 0x500)
struct AReplicatedLevelSequenceActor : ALevelSequenceActor {
};

// Class LevelSequence.LevelSequenceAnimSequenceLink
// Size: 0x40 (Inherited: 0x30)
struct ULevelSequenceAnimSequenceLink : UAssetUserData {
	struct TArray<struct FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks; // 0x30(0x10)
};

// Class LevelSequence.LevelSequenceBurnIn
// Size: 0x3f0 (Inherited: 0x318)
struct ULevelSequenceBurnIn : UUserWidget {
	struct FLevelSequencePlayerSnapshot FrameInformation; // 0x318(0xd0)
	struct ALevelSequenceActor* LevelSequenceActor; // 0x3e8(0x08)

	void SetSettings(struct UObject* InSettings); // Function LevelSequence.LevelSequenceBurnIn.SetSettings // (RequiredAPI|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	struct ULevelSequenceBurnInInitSettings* GetSettingsClass(); // Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass // (RequiredAPI|Native|Event|Public|BlueprintEvent|Const) // @ game+0x3a54c20
};

// Class LevelSequence.LevelSequenceDirector
// Size: 0x40 (Inherited: 0x30)
struct ULevelSequenceDirector : UObject {
	struct ULevelSequencePlayer* Player; // 0x30(0x08)
	int32_t SubSequenceID; // 0x38(0x04)
	int32_t MovieScenePlayerIndex; // 0x3c(0x04)

	void OnCreated(); // Function LevelSequence.LevelSequenceDirector.OnCreated // (RequiredAPI|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	struct UMovieSceneSequence* GetSequence(); // Function LevelSequence.LevelSequenceDirector.GetSequence // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a55040
	struct FQualifiedFrameTime GetRootSequenceTime(); // Function LevelSequence.LevelSequenceDirector.GetRootSequenceTime // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a55c00
	struct FQualifiedFrameTime GetMasterSequenceTime(); // Function LevelSequence.LevelSequenceDirector.GetMasterSequenceTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a55bc0
	struct FQualifiedFrameTime GetCurrentTime(); // Function LevelSequence.LevelSequenceDirector.GetCurrentTime // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a559e0
	struct TArray<struct UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding); // Function LevelSequence.LevelSequenceDirector.GetBoundObjects // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a55770
	struct UObject* GetBoundObject(struct FMovieSceneObjectBindingID ObjectBinding); // Function LevelSequence.LevelSequenceDirector.GetBoundObject // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a55580
	struct TArray<struct AActor*> GetBoundActors(struct FMovieSceneObjectBindingID ObjectBinding); // Function LevelSequence.LevelSequenceDirector.GetBoundActors // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a55300
	struct AActor* GetBoundActor(struct FMovieSceneObjectBindingID ObjectBinding); // Function LevelSequence.LevelSequenceDirector.GetBoundActor // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a55100
};

// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// Size: 0xb0 (Inherited: 0xb0)
struct ULegacyLevelSequenceDirectorBlueprint : UBlueprint {
};

// Class LevelSequence.LevelSequencePlayer
// Size: 0x620 (Inherited: 0x4d0)
struct ULevelSequencePlayer : UMovieSceneSequencePlayer {
	struct FMulticastInlineDelegate OnCameraCut; // 0x4d0(0x10)
	char pad_4E0[0x140]; // 0x4e0(0x140)

	struct UCameraComponent* GetActiveCameraComponent(); // Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a57f20
	struct ULevelSequencePlayer* CreateLevelSequencePlayer(struct UObject* WorldContextObject, struct ULevelSequence* LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ALevelSequenceActor*& OutActor); // Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3a57f60
};

// Class LevelSequence.LevelSequenceProjectSettings
// Size: 0x78 (Inherited: 0x48)
struct ULevelSequenceProjectSettings : UDeveloperSettings {
	bool bDefaultLockEngineToDisplayRate; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString DefaultDisplayRate; // 0x50(0x10)
	struct FString DefaultTickResolution; // 0x60(0x10)
	enum class EUpdateClockSource DefaultClockSource; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class LevelSequence.LevelSequenceMediaController
// Size: 0x488 (Inherited: 0x460)
struct ALevelSequenceMediaController : AActor {
	char pad_460[0x8]; // 0x460(0x08)
	struct ALevelSequenceActor* Sequence; // 0x468(0x08)
	struct UMediaComponent* MediaComponent; // 0x470(0x08)
	float ServerStartTimeSeconds; // 0x478(0x04)
	char pad_47C[0xc]; // 0x47c(0x0c)

	void SynchronizeToServer(float DesyncThresholdSeconds); // Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a5afd0
	void Play(); // Function LevelSequence.LevelSequenceMediaController.Play // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3a5b1c0
	void OnRep_ServerStartTimeSeconds(); // Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds // (Final|RequiredAPI|Native|Private) // @ game+0x3a5afb0
	struct ALevelSequenceActor* GetSequence(); // Function LevelSequence.LevelSequenceMediaController.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a5b1a0
	struct UMediaComponent* GetMediaComponent(); // Function LevelSequence.LevelSequenceMediaController.GetMediaComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3957540
};

