// Class AkAudio.AkPortalComponent
// Size: 0x410 (Inherited: 0x330)
struct UAkPortalComponent : USceneComponent {
	bool bDynamic; // 0x330(0x01)
	enum class AkAcousticPortalState InitialState; // 0x331(0x01)
	char pad_332[0x2]; // 0x332(0x02)
	float ObstructionRefreshInterval; // 0x334(0x04)
	enum class ECollisionChannel ObstructionCollisionChannel; // 0x338(0x01)
	char pad_339[0xd7]; // 0x339(0xd7)

	void SetDynamic(bool bInDynamic); // Function AkAudio.AkPortalComponent.SetDynamic // (Final|Native|Public|BlueprintCallable) // @ game+0x4ef93d0
	bool PortalPlacementValid(); // Function AkAudio.AkPortalComponent.PortalPlacementValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ef94e0
	void OpenPortal(); // Function AkAudio.AkPortalComponent.OpenPortal // (Final|Native|Public|BlueprintCallable) // @ game+0x4ef9630
	struct UPrimitiveComponent* GetPrimitiveParent(); // Function AkAudio.AkPortalComponent.GetPrimitiveParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ef9560
	enum class AkAcousticPortalState GetCurrentState(); // Function AkAudio.AkPortalComponent.GetCurrentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ef95c0
	void ClosePortal(); // Function AkAudio.AkPortalComponent.ClosePortal // (Final|Native|Public|BlueprintCallable) // @ game+0x4ef95e0
};

// Class AkAudio.AkAcousticPortal
// Size: 0x4a8 (Inherited: 0x498)
struct AAkAcousticPortal : AVolume {
	struct UAkPortalComponent* Portal; // 0x498(0x08)
	bool bValidForOcclusionPaths; // 0x4a0(0x01)
	enum class AkAcousticPortalState InitialState; // 0x4a1(0x01)
	bool bRequiresStateMigration; // 0x4a2(0x01)
	char pad_4A3[0x5]; // 0x4a3(0x05)

	void OpenPortal(); // Function AkAudio.AkAcousticPortal.OpenPortal // (Final|Native|Public|BlueprintCallable) // @ game+0x4ef9ab0
	enum class AkAcousticPortalState GetCurrentState(); // Function AkAudio.AkAcousticPortal.GetCurrentState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4ef98e0
	void ClosePortal(); // Function AkAudio.AkAcousticPortal.ClosePortal // (Final|Native|Public|BlueprintCallable) // @ game+0x4ef99c0
};

// Class AkAudio.AkAudioType
// Size: 0x58 (Inherited: 0x30)
struct UAkAudioType : UObject {
	bool bAutoLoad; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<struct UObject*> UserData; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)

	void UnloadData(bool bAsync); // Function AkAudio.AkAudioType.UnloadData // (Native|Public|BlueprintCallable) // @ game+0x38a7e20
	void LoadData(); // Function AkAudio.AkAudioType.LoadData // (Native|Public|BlueprintCallable) // @ game+0x3a67e30
	int32_t GetWwiseShortId(); // Function AkAudio.AkAudioType.GetWwiseShortId // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b9bfb0
};

// Class AkAudio.AkAcousticTexture
// Size: 0x68 (Inherited: 0x58)
struct UAkAcousticTexture : UAkAudioType {
	struct FWwiseAcousticTextureCookedData AcousticTextureCookedData; // 0x58(0x10)
};

// Class AkAudio.AkAcousticTextureSetComponent
// Size: 0x350 (Inherited: 0x330)
struct UAkAcousticTextureSetComponent : USceneComponent {
	char pad_330[0x20]; // 0x330(0x20)
};

// Class AkAudio.AkAmbientSound
// Size: 0x4a0 (Inherited: 0x460)
struct AAkAmbientSound : AActor {
	struct UAkAudioEvent* AkAudioEvent; // 0x460(0x08)
	struct UAkComponent* AkComponent; // 0x468(0x08)
	bool bDisableAkComponentTick; // 0x470(0x01)
	bool StopWhenOwnerIsDestroyed; // 0x471(0x01)
	bool AutoPost; // 0x472(0x01)
	char pad_473[0x2d]; // 0x473(0x2d)

	void StopAmbientSound(); // Function AkAudio.AkAmbientSound.StopAmbientSound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4efa160
	void StartAmbientSound(); // Function AkAudio.AkAmbientSound.StartAmbientSound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4efa1c0
};

// Class AkAudio.AkAndroidInitializationSettings
// Size: 0x110 (Inherited: 0x30)
struct UAkAndroidInitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x70)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8(0x20)
	struct FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xc8(0x44)
	char pad_10C[0x4]; // 0x10c(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x4efa6f0
};

// Class AkAudio.AkPlatformInfo
// Size: 0x78 (Inherited: 0x30)
struct UAkPlatformInfo : UObject {
	char pad_30[0x48]; // 0x30(0x48)
};

// Class AkAudio.AkAndroidPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkAndroidPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkAudioBank
// Size: 0x60 (Inherited: 0x58)
struct UAkAudioBank : UAkAudioType {
	bool AutoLoad; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// Class AkAudio.AkAudioDeviceShareSet
// Size: 0x68 (Inherited: 0x58)
struct UAkAudioDeviceShareSet : UAkAudioType {
	struct FWwiseAudioDeviceShareSetCookedData AudioDeviceShareSetCookedData; // 0x58(0x10)
};

// Class AkAudio.AkAudioEvent
// Size: 0xe0 (Inherited: 0x58)
struct UAkAudioEvent : UAkAudioType {
	float MaxAttenuationRadius; // 0x58(0x04)
	bool IsInfinite; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	float MinimumDuration; // 0x60(0x04)
	float MaximumDuration; // 0x64(0x04)
	enum class EAkAudioEventDurationType DurationType; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FWwiseLocalizedEventCookedData EventCookedData; // 0x70(0x60)
	struct UAkAudioBank* RequiredBank; // 0xd0(0x08)
	char pad_D8[0x8]; // 0xd8(0x08)

	int32_t PostOnGameObjectAndWait(struct UAkGameObject* GameObject, struct FLatentActionInfo LatentActionInfo); // Function AkAudio.AkAudioEvent.PostOnGameObjectAndWait // (Final|Native|Public|BlueprintCallable) // @ game+0x4efbb80
	int32_t PostOnGameObject(struct UAkGameObject* GameObject, struct FDelegate& Delegate, int32_t CallbackMask); // Function AkAudio.AkAudioEvent.PostOnGameObject // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4efca50
	int32_t PostOnComponentAndWait(struct UAkComponent* Component, bool bStopWhenAttachedObjectDestroyed, struct FLatentActionInfo LatentActionInfo); // Function AkAudio.AkAudioEvent.PostOnComponentAndWait // (Final|Native|Public|BlueprintCallable) // @ game+0x4efbf50
	int32_t PostOnComponent(struct UAkComponent* Component, struct FDelegate& Delegate, int32_t CallbackMask, bool bStopWhenAttachedObjectDestroyed); // Function AkAudio.AkAudioEvent.PostOnComponent // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4efccf0
	int32_t PostOnActorAndWait(struct AActor* Actor, bool bStopWhenAttachedObjectDestroyed, struct FLatentActionInfo LatentActionInfo); // Function AkAudio.AkAudioEvent.PostOnActorAndWait // (Final|Native|Public|BlueprintCallable) // @ game+0x4efc490
	int32_t PostOnActor(struct AActor* Actor, struct FDelegate& Delegate, int32_t CallbackMask, bool bStopWhenAttachedObjectDestroyed); // Function AkAudio.AkAudioEvent.PostOnActor // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4efd0d0
	int32_t PostAtLocation(struct FVector Location, struct FRotator Orientation, struct FDelegate& Callback, int32_t CallbackMask, struct UObject* WorldContextObject); // Function AkAudio.AkAudioEvent.PostAtLocation // (Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4efb7d0
	bool IsLocalized(); // Function AkAudio.AkAudioEvent.IsLocalized // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4efb3f0
	int32_t ExecuteAction(enum class AkActionOnEventType ActionType, struct AActor* Actor, int32_t PlayingID, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve); // Function AkAudio.AkAudioEvent.ExecuteAction // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4efb460
};

// Class AkAudio.AkGameObject
// Size: 0x350 (Inherited: 0x330)
struct UAkGameObject : USceneComponent {
	struct UAkAudioEvent* AkAudioEvent; // 0x330(0x08)
	struct FString EventName; // 0x338(0x10)
	bool bIsPersistent; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)

	void Stop(); // Function AkAudio.AkGameObject.Stop // (BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x3e28620
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct FString RTPC); // Function AkAudio.AkGameObject.SetRTPCValue // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|Const) // @ game+0x4f04f50
	void PostAssociatedAkEventAsync(struct UObject* WorldContextObject, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct FLatentActionInfo LatentInfo, int32_t& PlayingID); // Function AkAudio.AkGameObject.PostAssociatedAkEventAsync // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4f05a20
	int32_t PostAssociatedAkEvent(int32_t CallbackMask, struct FDelegate& PostEventCallback); // Function AkAudio.AkGameObject.PostAssociatedAkEvent // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4f05dd0
	void PostAkEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, int32_t& PlayingID, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkGameObject.PostAkEventAsync // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4f05280
	int32_t PostAkEvent(struct UAkAudioEvent* AkEvent, int32_t CallbackMask, struct FDelegate& PostEventCallback, struct FString InEventName); // Function AkAudio.AkGameObject.PostAkEvent // (BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4f056e0
	void GetRTPCValue(struct UAkRtpc* RTPCValue, enum class ERTPCValueType InputValueType, float& Value, enum class ERTPCValueType& OutputValueType, struct FString RTPC, int32_t PlayingID); // Function AkAudio.AkGameObject.GetRTPCValue // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x4f04ac0
};

// Class AkAudio.AkComponent
// Size: 0x500 (Inherited: 0x350)
struct UAkComponent : UAkGameObject {
	bool bUseSpatialAudio; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	enum class EAkCollisionChannel OcclusionCollisionChannel; // 0x358(0x01)
	bool EnableSpotReflectors; // 0x359(0x01)
	char pad_35A[0x2]; // 0x35a(0x02)
	float OuterRadius; // 0x35c(0x04)
	float InnerRadius; // 0x360(0x04)
	char pad_364[0x4]; // 0x364(0x04)
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x368(0x08)
	struct FString EarlyReflectionAuxBusName; // 0x370(0x10)
	int32_t EarlyReflectionOrder; // 0x380(0x04)
	float EarlyReflectionBusSendGain; // 0x384(0x04)
	float EarlyReflectionMaxPathLength; // 0x388(0x04)
	float roomReverbAuxBusGain; // 0x38c(0x04)
	int32_t diffractionMaxEdges; // 0x390(0x04)
	int32_t diffractionMaxPaths; // 0x394(0x04)
	float diffractionMaxPathLength; // 0x398(0x04)
	bool DrawFirstOrderReflections; // 0x39c(0x01)
	bool DrawSecondOrderReflections; // 0x39d(0x01)
	bool DrawHigherOrderReflections; // 0x39e(0x01)
	bool DrawDiffraction; // 0x39f(0x01)
	bool StopWhenOwnerDestroyed; // 0x3a0(0x01)
	char pad_3A1[0x3]; // 0x3a1(0x03)
	float AttenuationScalingFactor; // 0x3a4(0x04)
	float OcclusionRefreshInterval; // 0x3a8(0x04)
	bool bUseReverbVolumes; // 0x3ac(0x01)
	char pad_3AD[0x153]; // 0x3ad(0x153)

	void UseReverbVolumes(bool inUseReverbVolumes); // Function AkAudio.AkComponent.UseReverbVolumes // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4f00ae0
	void UseEarlyReflections(struct UAkAuxBus* AuxBus, int32_t Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, struct FString AuxBusName); // Function AkAudio.AkComponent.UseEarlyReflections // (Final|Native|Public|BlueprintCallable) // @ game+0x4f006e0
	void SetSwitch(struct UAkSwitchValue* SwitchValue, struct FString SwitchGroup, struct FString SwitchState); // Function AkAudio.AkComponent.SetSwitch // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4f00df0
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed); // Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4f00d00
	void SetOutputBusVolume(float BusVolume); // Function AkAudio.AkComponent.SetOutputBusVolume // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4f00320
	void SetListeners(struct TArray<struct UAkComponent*>& Listeners); // Function AkAudio.AkComponent.SetListeners // (Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4f00bd0
	void SetGameObjectRadius(float in_outerRadius, float in_innerRadius); // Function AkAudio.AkComponent.SetGameObjectRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x4f01dc0
	void SetEnableSpotReflectors(bool in_enable); // Function AkAudio.AkComponent.SetEnableSpotReflectors // (Final|Native|Public|BlueprintCallable) // @ game+0x4f01cc0
	void SetEarlyReflectionsVolume(float SendVolume); // Function AkAudio.AkComponent.SetEarlyReflectionsVolume // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4f00410
	void SetEarlyReflectionsAuxBus(struct FString AuxBusName); // Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4f00540
	void SetAttenuationScalingFactor(float Value); // Function AkAudio.AkComponent.SetAttenuationScalingFactor // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4f00230
	bool SeekOnPlayingID(int32_t Milliseconds, int32_t PlayingID); // Function AkAudio.AkComponent.SeekOnPlayingID // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4effbc0
	void SeekOnEvent(int32_t Milliseconds, int32_t PlayingID); // Function AkAudio.AkComponent.SeekOnEvent // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4effa30
	void PostTrigger(struct UAkTrigger* TriggerValue, struct FString Trigger); // Function AkAudio.AkComponent.PostTrigger // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4f01120
	void PostAssociatedAkEventAndWaitForEndAsync(int32_t& PlayingID, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4f01960
	int32_t PostAssociatedAkEventAndWaitForEnd(struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x4f01b80
	int32_t PostAkEventById(int32_t EventID); // Function AkAudio.AkComponent.PostAkEventById // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4f013b0
	void PostAkEventAndWaitForEndAsync(struct UAkAudioEvent* AkEvent, int32_t& PlayingID, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4f014b0
	int32_t PostAkEventAndWaitForEnd(struct UAkAudioEvent* AkEvent, struct FLatentActionInfo LatentInfo); // Function AkAudio.AkComponent.PostAkEventAndWaitForEnd // (Final|Native|Public|BlueprintCallable) // @ game+0x4f01770
	bool HasActiveEventsPlaying(); // Function AkAudio.AkComponent.HasActiveEventsPlaying // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4f001c0
	int32_t GetSourcePlayPosition(int32_t PlayingID); // Function AkAudio.AkComponent.GetSourcePlayPosition // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4effe80
	enum class ECollisionChannel GetOcclusionCollisionChannel(); // Function AkAudio.AkComponent.GetOcclusionCollisionChannel // (Final|Native|Public|BlueprintCallable) // @ game+0x4f01fa0
	int32_t GetEventIDFromPlayingID(int32_t PlayingID); // Function AkAudio.AkComponent.GetEventIDFromPlayingID // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4effff0
	struct TArray<int32_t> GetEmitterPlayingIDs(); // Function AkAudio.AkComponent.GetEmitterPlayingIDs // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4f00140
	float GetAttenuationRadius(); // Function AkAudio.AkComponent.GetAttenuationRadius // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4f001f0
};

// Class AkAudio.AkAudioInputComponent
// Size: 0x530 (Inherited: 0x500)
struct UAkAudioInputComponent : UAkComponent {
	char pad_500[0x30]; // 0x500(0x30)

	int32_t PostAssociatedAudioInputEvent(); // Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent // (BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4efdcb0
};

// Class AkAudio.AkAuxBus
// Size: 0xd0 (Inherited: 0x58)
struct UAkAuxBus : UAkAudioType {
	float MaxAttenuationRadius; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FWwiseLocalizedAuxBusCookedData AuxBusCookedData; // 0x60(0x60)
	struct UAkAudioBank* RequiredBank; // 0xc0(0x08)
	char pad_C8[0x8]; // 0xc8(0x08)
};

// Class AkAudio.AkCheckBox
// Size: 0x1060 (Inherited: 0x1d0)
struct UAkCheckBox : UContentWidget {
	char pad_1D0[0x2b8]; // 0x1d0(0x2b8)
	enum class ECheckBoxState CheckedState; // 0x488(0x01)
	char pad_489[0x3]; // 0x489(0x03)
	struct FDelegate CheckedStateDelegate; // 0x48c(0x14)
	struct FCheckBoxStyle WidgetStyle; // 0x4a0(0xae0)
	enum class EHorizontalAlignment HorizontalAlignment; // 0xf80(0x01)
	bool IsFocusable; // 0xf81(0x01)
	char pad_F82[0x6]; // 0xf82(0x06)
	struct FAkBoolPropertyToControl ThePropertyToControl; // 0xf88(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0xf98(0x40)
	struct FMulticastInlineDelegate AkOnCheckStateChanged; // 0xfd8(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0xfe8(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0xff8(0x10)
	char pad_1008[0x58]; // 0x1008(0x58)

	void SetIsChecked(bool InIsChecked); // Function AkAudio.AkCheckBox.SetIsChecked // (Final|Native|Public|BlueprintCallable) // @ game+0x4eff090
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function AkAudio.AkCheckBox.SetCheckedState // (Final|Native|Public|BlueprintCallable) // @ game+0x4efeea0
	void SetAkItemId(struct FGuid& ItemId); // Function AkAudio.AkCheckBox.SetAkItemId // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4efeda0
	void SetAkBoolProperty(struct FString ItemProperty); // Function AkAudio.AkCheckBox.SetAkBoolProperty // (Final|Native|Public|BlueprintCallable) // @ game+0x4efebb0
	bool IsPressed(); // Function AkAudio.AkCheckBox.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4eff230
	bool IsChecked(); // Function AkAudio.AkCheckBox.IsChecked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4eff1e0
	enum class ECheckBoxState GetCheckedState(); // Function AkAudio.AkCheckBox.GetCheckedState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4eff190
	struct FString GetAkProperty(); // Function AkAudio.AkCheckBox.GetAkProperty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4efeac0
	struct FGuid GetAkItemId(); // Function AkAudio.AkCheckBox.GetAkItemId // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x4efed40
};

// Class AkAudio.AkAssetData
// Size: 0x58 (Inherited: 0x30)
struct UAkAssetData : UObject {
	char pad_30[0x28]; // 0x30(0x28)
};

// Class AkAudio.AkAssetPlatformData
// Size: 0x38 (Inherited: 0x30)
struct UAkAssetPlatformData : UObject {
	struct UAkAssetData* CurrentAssetData; // 0x30(0x08)
};

// Class AkAudio.AkMediaAssetData
// Size: 0x40 (Inherited: 0x30)
struct UAkMediaAssetData : UObject {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class AkAudio.AkMediaAsset
// Size: 0x80 (Inherited: 0x30)
struct UAkMediaAsset : UObject {
	struct TMap<struct FString, struct UAkMediaAssetData*> MediaAssetDataPerPlatform; // 0x30(0x50)
};

// Class AkAudio.AkLocalizedMediaAsset
// Size: 0x80 (Inherited: 0x80)
struct UAkLocalizedMediaAsset : UAkMediaAsset {
};

// Class AkAudio.AkExternalMediaAsset
// Size: 0x80 (Inherited: 0x80)
struct UAkExternalMediaAsset : UAkMediaAsset {
};

// Class AkAudio.AkFolder
// Size: 0x58 (Inherited: 0x58)
struct UAkFolder : UAkAudioType {
};

// Class AkAudio.DrawPortalComponent
// Size: 0x690 (Inherited: 0x690)
struct UDrawPortalComponent : UPrimitiveComponent {
};

// Class AkAudio.DrawRoomComponent
// Size: 0x690 (Inherited: 0x690)
struct UDrawRoomComponent : UPrimitiveComponent {
};

// Class AkAudio.AkEffectShareSet
// Size: 0xc0 (Inherited: 0x58)
struct UAkEffectShareSet : UAkAudioType {
	struct FWwiseLocalizedShareSetCookedData ShareSetCookedData; // 0x58(0x60)
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class AkAudio.AkGameplayStatics
// Size: 0x30 (Inherited: 0x30)
struct UAkGameplayStatics : UBlueprintFunctionLibrary {

	void UnloadBankByName(struct FString BankName); // Function AkAudio.AkGameplayStatics.UnloadBankByName // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x4f082b0
	void StopProfilerCapture(); // Function AkAudio.AkGameplayStatics.StopProfilerCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x4f07db0
	void StopOutputCapture(); // Function AkAudio.AkGameplayStatics.StopOutputCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x4f07f30
	void StopAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StopAllAmbientSounds // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x4f08490
	void StopAll(); // Function AkAudio.AkGameplayStatics.StopAll // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x4f087f0
	void StartProfilerCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartProfilerCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x4f07e10
	void StartOutputCapture(struct FString Filename); // Function AkAudio.AkGameplayStatics.StartOutputCapture // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x4f08190
	void StartAllAmbientSounds(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.StartAllAmbientSounds // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x4f08570
	void SetState(struct UAkStateValue* StateValue, struct FName StateGroup, struct FName State); // Function AkAudio.AkGameplayStatics.SetState // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x4f0acf0
	void SetSpeakerAngles(struct TArray<float>& SpeakerAngles, float HeightAngle, struct FString DeviceShareSet); // Function AkAudio.AkGameplayStatics.SetSpeakerAngles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f08820
	void SetRTPCValue(struct UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.SetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x4f0b800
	void SetRandomSeed(int32_t Seed); // Function AkAudio.AkGameplayStatics.SetRandomSeed // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x4f0bcb0
	void SetPortalToPortalObstruction(struct UAkPortalComponent* PortalComponent0, struct UAkPortalComponent* PortalComponent1, float ObstructionValue); // Function AkAudio.AkGameplayStatics.SetPortalToPortalObstruction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4f09780
	void SetPortalObstructionAndOcclusion(struct UAkPortalComponent* PortalComponent, float ObstructionValue, float OcclusionValue); // Function AkAudio.AkGameplayStatics.SetPortalObstructionAndOcclusion // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4f09d20
	void SetPanningRule(enum class PanningRule PanRule); // Function AkAudio.AkGameplayStatics.SetPanningRule // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4f09450
	bool SetOutputDeviceEffect(struct FAkOutputDeviceID InDeviceId, int32_t InEffectIndex, struct UAkEffectShareSet* InEffectShareSet); // Function AkAudio.AkGameplayStatics.SetOutputDeviceEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4f07130
	void SetMultiplePositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultiplePositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4f0a990
	void SetMultipleChannelMaskEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<struct FAkChannelMask> ChannelMasks, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4f0a050
	void SetMultipleChannelEmitterPositions(struct UAkComponent* GameObjectAkComponent, struct TArray<enum class AkChannelConfiguration> ChannelMasks, struct TArray<struct FTransform> Positions, enum class AkMultiPositionType MultiPositionType); // Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4f0a4f0
	void SetGameObjectToPortalObstruction(struct UAkComponent* GameObjectAkComponent, struct UAkPortalComponent* PortalComponent, float ObstructionValue); // Function AkAudio.AkGameplayStatics.SetGameObjectToPortalObstruction // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4f09a50
	void SetDistanceProbe(struct AActor* Listener, struct AActor* DistanceProbe); // Function AkAudio.AkGameplayStatics.SetDistanceProbe // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4f06320
	void SetCurrentAudioCultureAsync(struct FString AudioCulture, struct FDelegate& Completed); // Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f075f0
	void SetCurrentAudioCulture(struct FString AudioCulture, struct FLatentActionInfo LatentInfo, struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4f078b0
	bool SetBusEffectByName(struct FString InBusName, int32_t InEffectIndex, struct UAkEffectShareSet* InEffectShareSet); // Function AkAudio.AkGameplayStatics.SetBusEffectByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4f06d70
	bool SetBusEffectByID(struct FAkUniqueID InBusID, int32_t InEffectIndex, struct UAkEffectShareSet* InEffectShareSet); // Function AkAudio.AkGameplayStatics.SetBusEffectByID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4f06ae0
	void SetBusConfig(struct FString BusName, enum class AkChannelConfiguration ChannelConfiguration); // Function AkAudio.AkGameplayStatics.SetBusConfig // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4f09560
	bool SetAuxBusEffect(struct UAkAuxBus* InAuxBus, int32_t InEffectIndex, struct UAkEffectShareSet* InEffectShareSet); // Function AkAudio.AkGameplayStatics.SetAuxBusEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4f06820
	bool SetActorMixerEffect(struct FAkUniqueID InAudioNodeID, int32_t InEffectIndex, struct UAkEffectShareSet* InEffectShareSet); // Function AkAudio.AkGameplayStatics.SetActorMixerEffect // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4f06590
	void ResetRTPCValue(struct UAkRtpc* RTPCValue, int32_t InterpolationTimeMs, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.ResetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x4f0af30
	void ReplaceMainOutput(struct FAkOutputSettings& MainOutputSettings); // Function AkAudio.AkGameplayStatics.ReplaceMainOutput // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f08ec0
	void RemoveOutput(struct FAkOutputDeviceID in_OutputDeviceId); // Function AkAudio.AkGameplayStatics.RemoveOutput // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4f090a0
	bool IsGame(struct UObject* WorldContextObject); // Function AkAudio.AkGameplayStatics.IsGame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4f0c490
	bool IsEditor(); // Function AkAudio.AkGameplayStatics.IsEditor // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3ae4720
	void GetSpeakerAngles(struct TArray<float>& SpeakerAngles, float& HeightAngle, struct FString DeviceShareSet); // Function AkAudio.AkGameplayStatics.GetSpeakerAngles // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f08b50
	void GetRTPCValue(struct UAkRtpc* RTPCValue, int32_t PlayingID, enum class ERTPCValueType InputValueType, float& Value, enum class ERTPCValueType& OutputValueType, struct AActor* Actor, struct FName RTPC); // Function AkAudio.AkGameplayStatics.GetRTPCValue // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f0b200
	struct FString GetCurrentAudioCulture(); // Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4f07c10
	struct TArray<struct FString> GetAvailableAudioCultures(); // Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4f07b30
	struct UObject* GetAkAudioTypeUserData(struct UAkAudioType* Instance, struct UObject* Type); // Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x4f073d0
	void ExecuteActionOnPlayingID(enum class AkActionOnEventType ActionType, int32_t PlayingID, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve); // Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x4f0bdb0
	void ExecuteActionOnEvent(struct UAkAudioEvent* AkEvent, enum class AkActionOnEventType ActionType, struct AActor* Actor, int32_t TransitionDuration, enum class EAkCurveInterpolation FadeCurve, int32_t PlayingID); // Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x4f0c0a0
	void ClearSoundBanksAndMedia(); // Function AkAudio.AkGameplayStatics.ClearSoundBanksAndMedia // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x4f08460
	void ClearBanks(); // Function AkAudio.AkGameplayStatics.ClearBanks // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x4f08460
	void CancelEventCallback(struct FDelegate& PostEventCallback); // Function AkAudio.AkGameplayStatics.CancelEventCallback // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f08650
	void AddOutputCaptureMarker(struct FString MarkerText); // Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // @ game+0x4f07f90
	void AddOutput(struct FAkOutputSettings& in_Settings, struct FAkOutputDeviceID& out_DeviceID, struct TArray<struct UAkComponent*>& in_ListenerIDs); // Function AkAudio.AkGameplayStatics.AddOutput // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f091c0
};

// Class AkAudio.AkCallbackInfo
// Size: 0x38 (Inherited: 0x30)
struct UAkCallbackInfo : UObject {
	struct UAkComponent* AkComponent; // 0x30(0x08)
};

// Class AkAudio.AkEventCallbackInfo
// Size: 0x40 (Inherited: 0x38)
struct UAkEventCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x38(0x04)
	int32_t EventID; // 0x3c(0x04)
};

// Class AkAudio.AkMIDIEventCallbackInfo
// Size: 0x50 (Inherited: 0x40)
struct UAkMIDIEventCallbackInfo : UAkEventCallbackInfo {
	char pad_40[0x10]; // 0x40(0x10)

	enum class EAkMidiEventType GetType(); // Function AkAudio.AkMIDIEventCallbackInfo.GetType // (Final|Native|Public|BlueprintCallable) // @ game+0x4f0fa30
	bool GetProgramChange(struct FAkMidiProgramChange& AsProgramChange); // Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4f0efa0
	bool GetPitchBend(struct FAkMidiPitchBend& AsPitchBend); // Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4f0f370
	bool GetNoteOn(struct FAkMidiNoteOnOff& AsNoteOn); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4f0f780
	bool GetNoteOff(struct FAkMidiNoteOnOff& AsNoteOff); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4f0f630
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch& AsNoteAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4f0f220
	bool GetGeneric(struct FAkMidiGeneric& AsGeneric); // Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4f0f8d0
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch& AsChannelAftertouch); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4f0f0e0
	char GetChannel(); // Function AkAudio.AkMIDIEventCallbackInfo.GetChannel // (Final|Native|Public|BlueprintCallable) // @ game+0x4f0fa10
	bool GetCc(struct FAkMidiCc& AsCc); // Function AkAudio.AkMIDIEventCallbackInfo.GetCc // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4f0f4e0
};

// Class AkAudio.AkMarkerCallbackInfo
// Size: 0x58 (Inherited: 0x40)
struct UAkMarkerCallbackInfo : UAkEventCallbackInfo {
	int32_t Identifier; // 0x40(0x04)
	int32_t Position; // 0x44(0x04)
	struct FString Label; // 0x48(0x10)
};

// Class AkAudio.AkDurationCallbackInfo
// Size: 0x58 (Inherited: 0x40)
struct UAkDurationCallbackInfo : UAkEventCallbackInfo {
	float Duration; // 0x40(0x04)
	float EstimatedDuration; // 0x44(0x04)
	int32_t AudioNodeID; // 0x48(0x04)
	int32_t MediaId; // 0x4c(0x04)
	bool bStreaming; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// Class AkAudio.AkMusicSyncCallbackInfo
// Size: 0x78 (Inherited: 0x38)
struct UAkMusicSyncCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x38(0x04)
	struct FAkSegmentInfo SegmentInfo; // 0x3c(0x24)
	enum class EAkCallbackType MusicSyncType; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FString UserCueName; // 0x68(0x10)
};

// Class AkAudio.AkGeometryComponent
// Size: 0x4d0 (Inherited: 0x350)
struct UAkGeometryComponent : UAkAcousticTextureSetComponent {
	enum class AkMeshType MeshType; // 0x348(0x01)
	int32_t LOD; // 0x34c(0x04)
	float WeldingThreshold; // 0x350(0x04)
	struct TMap<struct UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride; // 0x358(0x50)
	struct FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride; // 0x3a8(0x18)
	bool bEnableDiffraction; // 0x3c0(0x01)
	bool bEnableDiffractionOnBoundaryEdges; // 0x3c1(0x01)
	char pad_3C3[0x5]; // 0x3c3(0x05)
	struct AActor* AssociatedRoom; // 0x3c8(0x08)
	char pad_3D0[0x10]; // 0x3d0(0x10)
	struct FAkGeometryData GeometryData; // 0x3e0(0x50)
	struct TMap<int32_t, double> SurfaceAreas; // 0x430(0x50)
	char pad_480[0x50]; // 0x480(0x50)

	void UpdateGeometry(); // Function AkAudio.AkGeometryComponent.UpdateGeometry // (Final|Native|Public|BlueprintCallable) // @ game+0x4f11630
	void SendGeometry(); // Function AkAudio.AkGeometryComponent.SendGeometry // (Final|Native|Public|BlueprintCallable) // @ game+0x4f11650
	void RemoveGeometry(); // Function AkAudio.AkGeometryComponent.RemoveGeometry // (Final|Native|Public|BlueprintCallable) // @ game+0x4f11610
	void ConvertMesh(); // Function AkAudio.AkGeometryComponent.ConvertMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x4f11670
};

// Class AkAudio.AkGroupValue
// Size: 0x80 (Inherited: 0x58)
struct UAkGroupValue : UAkAudioType {
	struct FWwiseGroupValueCookedData GroupValueCookedData; // 0x58(0x18)
	uint32_t GroupShortId; // 0x70(0x04)
	char pad_74[0xc]; // 0x74(0x0c)
};

// Class AkAudio.AkHololensInitializationSettings
// Size: 0x108 (Inherited: 0x30)
struct UAkHololensInitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x70)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8(0x20)
	struct FAkHololensAdvancedInitializationSettings AdvancedSettings; // 0xc8(0x40)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x4efa6f0
};

// Class AkAudio.AkHololensPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkHololensPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkInitBank
// Size: 0xb8 (Inherited: 0x58)
struct UAkInitBank : UAkAudioType {
	struct FWwiseInitBankCookedData InitBankCookedData; // 0x58(0x58)
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class AkAudio.AkIOSInitializationSettings
// Size: 0x118 (Inherited: 0x30)
struct UAkIOSInitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x70)
	struct FAkAudioSession AudioSession; // 0xa8(0x0c)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xb8(0x20)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xd8(0x3c)
	char pad_114[0x4]; // 0x114(0x04)
};

// Class AkAudio.AkIOSPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkIOSPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkItemBoolPropertiesConv
// Size: 0x30 (Inherited: 0x30)
struct UAkItemBoolPropertiesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkBoolPropertyToControlToText(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4f15010
	struct FString Conv_FAkBoolPropertyToControlToString(struct FAkBoolPropertyToControl& INAkBoolPropertyToControl); // Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4f15160
};

// Class AkAudio.AkItemBoolProperties
// Size: 0x1f8 (Inherited: 0x1b8)
struct UAkItemBoolProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x1b8(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x1c8(0x10)
	char pad_1D8[0x20]; // 0x1d8(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemBoolProperties.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4f15410
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemBoolProperties.GetSelectedProperty // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4f15890
	struct FString GetSearchText(); // Function AkAudio.AkItemBoolProperties.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4f15740
};

// Class AkAudio.AkItemPropertiesConv
// Size: 0x30 (Inherited: 0x30)
struct UAkItemPropertiesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkPropertyToControlToText(struct FAkPropertyToControl& INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4f15010
	struct FString Conv_FAkPropertyToControlToString(struct FAkPropertyToControl& INAkPropertyToControl); // Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4f15160
};

// Class AkAudio.AkItemProperties
// Size: 0x1f8 (Inherited: 0x1b8)
struct UAkItemProperties : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x1b8(0x10)
	struct FMulticastInlineDelegate OnPropertyDragged; // 0x1c8(0x10)
	char pad_1D8[0x20]; // 0x1d8(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkItemProperties.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4f15410
	struct FString GetSelectedProperty(); // Function AkAudio.AkItemProperties.GetSelectedProperty // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4f15f20
	struct FString GetSearchText(); // Function AkAudio.AkItemProperties.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4f15740
};

// Class AkAudio.AkLateReverbComponent
// Size: 0x3c0 (Inherited: 0x330)
struct UAkLateReverbComponent : USceneComponent {
	bool bEnable; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	float SendLevel; // 0x334(0x04)
	float FadeRate; // 0x338(0x04)
	float Priority; // 0x33c(0x04)
	bool AutoAssignAuxBus; // 0x340(0x01)
	char pad_341[0x7]; // 0x341(0x07)
	struct UAkAuxBus* AuxBus; // 0x348(0x08)
	struct FString AuxBusName; // 0x350(0x10)
	char pad_360[0x8]; // 0x360(0x08)
	struct UAkAuxBus* AuxBusManual; // 0x368(0x08)
	char pad_370[0x50]; // 0x370(0x50)

	void AssociateAkTextureSetComponent(struct UAkAcousticTextureSetComponent* textureSetComponent); // Function AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x4f16320
};

// Class AkAudio.AkLinuxArm64InitializationSettings
// Size: 0x108 (Inherited: 0x30)
struct UAkLinuxArm64InitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x70)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8(0x20)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc8(0x3c)
	char pad_104[0x4]; // 0x104(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkLinuxArm64InitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x4efa6f0
};

// Class AkAudio.AkLinuxArm64PlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkLinuxArm64PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkLinuxInitializationSettings
// Size: 0x108 (Inherited: 0x30)
struct UAkLinuxInitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x70)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8(0x20)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc8(0x3c)
	char pad_104[0x4]; // 0x104(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x4efa6f0
};

// Class AkAudio.AkLinuxPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkLinuxPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkMacInitializationSettings
// Size: 0x108 (Inherited: 0x30)
struct UAkMacInitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x70)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8(0x20)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc8(0x3c)
	char pad_104[0x4]; // 0x104(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x4efa6f0
};

// Class AkAudio.AkMacPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkMacPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkPlatformInitialisationSettingsBase
// Size: 0x30 (Inherited: 0x30)
struct UAkPlatformInitialisationSettingsBase : UInterface {
};

// Class AkAudio.AkPS4InitializationSettings
// Size: 0x108 (Inherited: 0x30)
struct UAkPS4InitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x38(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x20)
	struct FAkPS4AdvancedInitializationSettings AdvancedSettings; // 0xc0(0x44)
	char pad_104[0x4]; // 0x104(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x4f19b20
};

// Class AkAudio.AkPS4PlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkPS4PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkPS5InitializationSettings
// Size: 0x110 (Inherited: 0x30)
struct UAkPS5InitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x38(0x68)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0(0x20)
	struct FAkPS5AdvancedInitializationSettings AdvancedSettings; // 0xc0(0x50)
};

// Class AkAudio.AkDPXInitializationSettings
// Size: 0x110 (Inherited: 0x110)
struct UAkDPXInitializationSettings : UAkPS5InitializationSettings {
};

// Class AkAudio.AkPS5PlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkPS5PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkReverbVolume
// Size: 0x4d0 (Inherited: 0x498)
struct AAkReverbVolume : AVolume {
	bool bEnabled; // 0x498(0x01)
	char pad_499[0x7]; // 0x499(0x07)
	struct UAkAuxBus* AuxBus; // 0x4a0(0x08)
	struct FString AuxBusName; // 0x4a8(0x10)
	float SendLevel; // 0x4b8(0x04)
	float FadeRate; // 0x4bc(0x04)
	float Priority; // 0x4c0(0x04)
	char pad_4C4[0x4]; // 0x4c4(0x04)
	struct UAkLateReverbComponent* LateReverbComponent; // 0x4c8(0x08)
};

// Class AkAudio.AkRoomComponent
// Size: 0x390 (Inherited: 0x350)
struct UAkRoomComponent : UAkGameObject {
	bool bEnable; // 0x350(0x01)
	bool bDynamic; // 0x351(0x01)
	char pad_352[0x2]; // 0x352(0x02)
	float Priority; // 0x354(0x04)
	float WallOcclusion; // 0x358(0x04)
	float AuxSendLevel; // 0x35c(0x04)
	bool AutoPost; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct UAkAudioEvent* AmbientEvent; // 0x368(0x08)
	float AuxSendLevelToSelf; // 0x370(0x04)
	char pad_374[0xc]; // 0x374(0x0c)
	struct UAkAcousticTextureSetComponent* GeometryComponent; // 0x380(0x08)
	char pad_388[0x8]; // 0x388(0x08)

	void SetGeometryComponent(struct UAkAcousticTextureSetComponent* textureSetComponent); // Function AkAudio.AkRoomComponent.SetGeometryComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x4f1b4d0
	void SetDynamic(bool bInDynamic); // Function AkAudio.AkRoomComponent.SetDynamic // (Final|Native|Public|BlueprintCallable) // @ game+0x4f1b650
	struct UPrimitiveComponent* GetPrimitiveParent(); // Function AkAudio.AkRoomComponent.GetPrimitiveParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4f1b610
};

// Class AkAudio.AkRtpc
// Size: 0x68 (Inherited: 0x58)
struct UAkRtpc : UAkAudioType {
	struct FWwiseGameParameterCookedData GameParameterCookedData; // 0x58(0x10)
};

// Class AkAudio.AkSettings
// Size: 0x3b8 (Inherited: 0x30)
struct UAkSettings : UObject {
	char MaxSimultaneousReverbVolumes; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FFilePath WwiseProjectPath; // 0x38(0x10)
	struct FFilePath TemporaryAudioFileStubPath; // 0x48(0x10)
	struct FFilePath ReportOutputPath; // 0x58(0x10)
	struct FFilePath ReportIgnoreListPath; // 0x68(0x10)
	struct FDirectoryPath WwiseSoundDataFolder; // 0x78(0x10)
	struct FDirectoryPath RootOutputPath; // 0x88(0x10)
	struct FDirectoryPath GeneratedSoundBanksFolder; // 0x98(0x10)
	struct FDirectoryPath WwiseStagingDirectory; // 0xa8(0x10)
	bool bSoundBanksTransfered; // 0xb8(0x01)
	bool bAssetsMigrated; // 0xb9(0x01)
	bool bProjectMigrated; // 0xba(0x01)
	bool bAutoConnectToWAAPI; // 0xbb(0x01)
	enum class ECollisionChannel DefaultOcclusionCollisionChannel; // 0xbc(0x01)
	enum class ECollisionChannel DefaultFitToGeometryCollisionChannel; // 0xbd(0x01)
	char pad_BE[0x2]; // 0xbe(0x02)
	struct TMap<struct TSoftObjectPtr<UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap> AkGeometryMap; // 0xc0(0x50)
	float GlobalDecayAbsorption; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct TSoftObjectPtr<UAkAuxBus> DefaultReverbAuxBus; // 0x118(0x30)
	struct TMap<float, struct TSoftObjectPtr<UAkAuxBus>> EnvironmentDecayAuxBusMap; // 0x148(0x50)
	struct FString HFDampingName; // 0x198(0x10)
	struct FString DecayEstimateName; // 0x1a8(0x10)
	struct FString TimeToFirstReflectionName; // 0x1b8(0x10)
	struct TSoftObjectPtr<UAkRtpc> HFDampingRTPC; // 0x1c8(0x30)
	struct TSoftObjectPtr<UAkRtpc> DecayEstimateRTPC; // 0x1f8(0x30)
	struct TSoftObjectPtr<UAkRtpc> TimeToFirstReflectionRTPC; // 0x228(0x30)
	struct TSoftObjectPtr<UAkAudioEvent> AudioInputEvent; // 0x258(0x30)
	struct TMap<struct FGuid, struct FAkAcousticTextureParams> AcousticTextureParamsMap; // 0x288(0x50)
	bool SplitSwitchContainerMedia; // 0x2d8(0x01)
	bool SplitMediaPerFolder; // 0x2d9(0x01)
	bool UseEventBasedPackaging; // 0x2da(0x01)
	char pad_2DB[0x5]; // 0x2db(0x05)
	struct FString CommandletCommitMessage; // 0x2e0(0x10)
	struct TMap<struct FString, struct FString> UnrealCultureToWwiseCulture; // 0x2f0(0x50)
	struct FString DefaultAssetCreationPath; // 0x340(0x10)
	struct TSoftObjectPtr<UAkInitBank> InitBank; // 0x350(0x30)
	enum class EAkUnrealAudioRouting AudioRouting; // 0x380(0x04)
	bool bWwiseSoundEngineEnabled; // 0x384(0x01)
	bool bWwiseAudioLinkEnabled; // 0x385(0x01)
	bool bAkAudioMixerEnabled; // 0x386(0x01)
	char pad_387[0x1]; // 0x387(0x01)
	float DefaultScalingFactor; // 0x388(0x04)
	bool AskedToUseNewAssetManagement; // 0x38c(0x01)
	bool bEnableMultiCoreRendering; // 0x38d(0x01)
	bool MigratedEnableMultiCoreRendering; // 0x38e(0x01)
	bool FixupRedirectorsDuringMigration; // 0x38f(0x01)
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x390(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x3a0(0x10)
	char pad_3B0[0x8]; // 0x3b0(0x08)
};

// Class AkAudio.AkSettingsPerUser
// Size: 0x98 (Inherited: 0x30)
struct UAkSettingsPerUser : UObject {
	struct FDirectoryPath WwiseWindowsInstallationPath; // 0x30(0x10)
	struct FFilePath WwiseMacInstallationPath; // 0x40(0x10)
	struct FDirectoryPath RootOutputPathOverride; // 0x50(0x10)
	struct FDirectoryPath GeneratedSoundBanksFolderOverride; // 0x60(0x10)
	struct FString WaapiIPAddress; // 0x70(0x10)
	uint32_t WaapiPort; // 0x80(0x04)
	bool bAutoConnectToWAAPI; // 0x84(0x01)
	bool AutoSyncSelection; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
	uint32_t WaapiTranslatorTimeout; // 0x88(0x04)
	bool SuppressGeneratedSoundBanksPathWarnings; // 0x8c(0x01)
	bool SoundDataGenerationSkipLanguage; // 0x8d(0x01)
	bool SoundDataGenerationAutoImport; // 0x8e(0x01)
	bool SoundDataGenerationReconcileOriginals; // 0x8f(0x01)
	bool AskForWwiseAssetReload; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
};

// Class AkAudio.AkSlider
// Size: 0x7a0 (Inherited: 0x1b8)
struct UAkSlider : UWidget {
	float Value; // 0x1b8(0x04)
	struct FDelegate ValueDelegate; // 0x1bc(0x14)
	struct FSliderStyle WidgetStyle; // 0x1d0(0x500)
	enum class EOrientation Orientation; // 0x6d0(0x01)
	char pad_6D1[0x3]; // 0x6d1(0x03)
	struct FLinearColor SliderBarColor; // 0x6d4(0x10)
	struct FLinearColor SliderHandleColor; // 0x6e4(0x10)
	bool IndentHandle; // 0x6f4(0x01)
	bool Locked; // 0x6f5(0x01)
	char pad_6F6[0x2]; // 0x6f6(0x02)
	float StepSize; // 0x6f8(0x04)
	bool IsFocusable; // 0x6fc(0x01)
	char pad_6FD[0x3]; // 0x6fd(0x03)
	struct FAkPropertyToControl ThePropertyToControl; // 0x700(0x10)
	struct FAkWwiseItemToControl ItemToControl; // 0x710(0x40)
	struct FMulticastInlineDelegate OnValueChanged; // 0x750(0x10)
	struct FMulticastInlineDelegate OnItemDropped; // 0x760(0x10)
	struct FMulticastInlineDelegate OnPropertyDropped; // 0x770(0x10)
	char pad_780[0x20]; // 0x780(0x20)

	void SetValue(float InValue); // Function AkAudio.AkSlider.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x4f1d780
	void SetStepSize(float InValue); // Function AkAudio.AkSlider.SetStepSize // (Final|Native|Public|BlueprintCallable) // @ game+0x4f1d2a0
	void SetSliderHandleColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4f1cf60
	void SetSliderBarColor(struct FLinearColor InValue); // Function AkAudio.AkSlider.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x4f1d100
	void SetLocked(bool InValue); // Function AkAudio.AkSlider.SetLocked // (Final|Native|Public|BlueprintCallable) // @ game+0x4f1d440
	void SetIndentHandle(bool InValue); // Function AkAudio.AkSlider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // @ game+0x4f1d5e0
	void SetAkSliderItemProperty(struct FString ItemProperty); // Function AkAudio.AkSlider.SetAkSliderItemProperty // (Final|Native|Public|BlueprintCallable) // @ game+0x4f1cbd0
	void SetAkSliderItemId(struct FGuid& ItemId); // Function AkAudio.AkSlider.SetAkSliderItemId // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x4f1ce60
	float GetValue(); // Function AkAudio.AkSlider.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4f1d870
	struct FString GetAkSliderItemProperty(); // Function AkAudio.AkSlider.GetAkSliderItemProperty // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4f1cae0
	struct FGuid GetAkSliderItemId(); // Function AkAudio.AkSlider.GetAkSliderItemId // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x4f1cdf0
};

// Class AkAudio.AkSpatialAudioVolume
// Size: 0x4a8 (Inherited: 0x498)
struct AAkSpatialAudioVolume : AVolume {
	struct UAkLateReverbComponent* LateReverb; // 0x498(0x08)
	struct UAkRoomComponent* Room; // 0x4a0(0x08)
};

// Class AkAudio.AkSpotReflector
// Size: 0x498 (Inherited: 0x460)
struct AAkSpotReflector : AActor {
	struct UAkAuxBus* EarlyReflectionAuxBus; // 0x460(0x08)
	struct FString EarlyReflectionAuxBusName; // 0x468(0x10)
	struct UAkAcousticTexture* AcousticTexture; // 0x478(0x08)
	float DistanceScalingFactor; // 0x480(0x04)
	float Level; // 0x484(0x04)
	bool SameRoomOnly; // 0x488(0x01)
	bool EnableRoomOverride; // 0x489(0x01)
	char pad_48A[0x6]; // 0x48a(0x06)
	struct AActor* RoomOverride; // 0x490(0x08)
};

// Class AkAudio.AkStateValue
// Size: 0x80 (Inherited: 0x80)
struct UAkStateValue : UAkGroupValue {
};

// Class AkAudio.AkSubmixInputComponent
// Size: 0x550 (Inherited: 0x530)
struct UAkSubmixInputComponent : UAkAudioInputComponent {
	struct USoundSubmix* SubmixToRecord; // 0x530(0x08)
	char pad_538[0x18]; // 0x538(0x18)
};

// Class AkAudio.AkSurfaceReflectorSetComponent
// Size: 0x380 (Inherited: 0x350)
struct UAkSurfaceReflectorSetComponent : UAkAcousticTextureSetComponent {
	bool bEnableSurfaceReflectors; // 0x348(0x01)
	struct TArray<struct FAkSurfacePoly> AcousticPolys; // 0x350(0x10)
	bool bEnableDiffraction; // 0x360(0x01)
	bool bEnableDiffractionOnBoundaryEdges; // 0x361(0x01)
	char pad_363[0x5]; // 0x363(0x05)
	struct AActor* AssociatedRoom; // 0x368(0x08)
	char pad_370[0x10]; // 0x370(0x10)

	void UpdateSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x4f1f9c0
	void UpdateAcousticProperties(struct TArray<struct FAkSurfacePoly> in_AcousticPolys); // Function AkAudio.AkSurfaceReflectorSetComponent.UpdateAcousticProperties // (Final|Native|Public|BlueprintCallable) // @ game+0x4f1f790
	void SendSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x4f1f9e0
	void RemoveSurfaceReflectorSet(); // Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet // (Final|Native|Public|BlueprintCallable) // @ game+0x4f11610
};

// Class AkAudio.AkSwitchInitializationSettings
// Size: 0x108 (Inherited: 0x30)
struct UAkSwitchInitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x70)
	struct FAkCommunicationSettingsWithCommSelection CommunicationSettings; // 0xa8(0x20)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc8(0x3c)
	char pad_104[0x4]; // 0x104(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x4efa6f0
};

// Class AkAudio.AkSwitchPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkSwitchPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkSwitchValue
// Size: 0x80 (Inherited: 0x80)
struct UAkSwitchValue : UAkGroupValue {
};

// Class AkAudio.AkTrigger
// Size: 0x68 (Inherited: 0x58)
struct UAkTrigger : UAkAudioType {
	struct FWwiseTriggerCookedData TriggerCookedData; // 0x58(0x10)
};

// Class AkAudio.AkTVOSInitializationSettings
// Size: 0x118 (Inherited: 0x30)
struct UAkTVOSInitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x70)
	struct FAkAudioSession AudioSession; // 0xa8(0x0c)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xb8(0x20)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xd8(0x3c)
	char pad_114[0x4]; // 0x114(0x04)
};

// Class AkAudio.AkTVOSPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkTVOSPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWaapiCalls
// Size: 0x30 (Inherited: 0x30)
struct UAkWaapiCalls : UBlueprintFunctionLibrary {

	struct FAKWaapiJsonObject Unsubscribe(struct FAkWaapiSubscriptionId& SubscriptionId, bool& UnsubscriptionDone); // Function AkAudio.AkWaapiCalls.Unsubscribe // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f21ac0
	struct FAKWaapiJsonObject SubscribeToWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiOptions, struct FDelegate& Callback, struct FAkWaapiSubscriptionId& SubscriptionId, bool& SubscriptionDone); // Function AkAudio.AkWaapiCalls.SubscribeToWaapi // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f21c70
	void SetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription, int32_t ID); // Function AkAudio.AkWaapiCalls.SetSubscriptionID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f226d0
	bool RegisterWaapiProjectLoadedCallback(struct FDelegate& Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f224a0
	bool RegisterWaapiConnectionLostCallback(struct FDelegate& Callback); // Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f22360
	int32_t GetSubscriptionID(struct FAkWaapiSubscriptionId& Subscription); // Function AkAudio.AkWaapiCalls.GetSubscriptionID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f225e0
	struct FText Conv_FAkWaapiSubscriptionIdToText(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4f21840
	struct FString Conv_FAkWaapiSubscriptionIdToString(struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId); // Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4f21950
	struct FAKWaapiJsonObject CallWaapi(struct FAkWaapiUri& WaapiUri, struct FAKWaapiJsonObject& WaapiArgs, struct FAKWaapiJsonObject& WaapiOptions); // Function AkAudio.AkWaapiCalls.CallWaapi // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f22070
};

// Class AkAudio.SAkWaapiFieldNamesConv
// Size: 0x30 (Inherited: 0x30)
struct USAkWaapiFieldNamesConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkWaapiFieldNamesToText(struct FAkWaapiFieldNames& INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4f15010
	struct FString Conv_FAkWaapiFieldNamesToString(struct FAkWaapiFieldNames& INAkWaapiFieldNames); // Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4f15160
};

// Class AkAudio.AkWaapiJsonManager
// Size: 0x30 (Inherited: 0x30)
struct UAkWaapiJsonManager : UBlueprintFunctionLibrary {

	struct FAKWaapiJsonObject SetStringField(struct FAkWaapiFieldNames& FieldName, struct FString FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetStringField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f25180
	struct FAKWaapiJsonObject SetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetObjectField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f24800
	struct FAKWaapiJsonObject SetNumberField(struct FAkWaapiFieldNames& FieldName, float FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetNumberField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f24b80
	struct FAKWaapiJsonObject SetBoolField(struct FAkWaapiFieldNames& FieldName, bool FieldValue, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetBoolField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f24e70
	struct FAKWaapiJsonObject SetArrayStringFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FString>& FieldStringValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayStringFields // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f244a0
	struct FAKWaapiJsonObject SetArrayObjectFields(struct FAkWaapiFieldNames& FieldName, struct TArray<struct FAKWaapiJsonObject>& FieldObjectValues, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f24160
	struct FString GetStringField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetStringField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f23ec0
	struct FAKWaapiJsonObject GetObjectField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetObjectField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f23530
	float GetNumberField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetNumberField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f23a30
	int32_t GetIntegerField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetIntegerField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f237f0
	bool GetBoolField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetBoolField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f23c80
	struct TArray<struct FAKWaapiJsonObject> GetArrayField(struct FAkWaapiFieldNames& FieldName, struct FAKWaapiJsonObject Target); // Function AkAudio.AkWaapiJsonManager.GetArrayField // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f23250
	struct FText Conv_FAKWaapiJsonObjectToText(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4f22f90
	struct FString Conv_FAKWaapiJsonObjectToString(struct FAKWaapiJsonObject INAKWaapiJsonObject); // Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x4f230d0
};

// Class AkAudio.AkWaapiUriConv
// Size: 0x30 (Inherited: 0x30)
struct UAkWaapiUriConv : UBlueprintFunctionLibrary {

	struct FText Conv_FAkWaapiUriToText(struct FAkWaapiUri& INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4f15010
	struct FString Conv_FAkWaapiUriToString(struct FAkWaapiUri& INAkWaapiUri); // Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x4f15160
};

// Class AkAudio.AkWindowsInitializationSettings
// Size: 0x110 (Inherited: 0x30)
struct UAkWindowsInitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x70)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8(0x20)
	struct FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xc8(0x44)
	char pad_10C[0x4]; // 0x10c(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x4efa6f0
};

// Class AkAudio.AkWin32PlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkWin32PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWin64PlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkWin64PlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWindowsPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkWindowsPlatformInfo : UAkWin64PlatformInfo {
};

// Class AkAudio.AkWinGDKInitializationSettings
// Size: 0x110 (Inherited: 0x30)
struct UAkWinGDKInitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x38(0x70)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8(0x20)
	struct FAkWinGDKAdvancedInitializationSettings AdvancedSettings; // 0xc8(0x44)
	char pad_10C[0x4]; // 0x10c(0x04)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkWinGDKInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x4efa6f0
};

// Class AkAudio.AkWinAnvilInitializationSettings
// Size: 0x110 (Inherited: 0x110)
struct UAkWinAnvilInitializationSettings : UAkWinGDKInitializationSettings {
};

// Class AkAudio.AkWinGDKPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkWinGDKPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkWinAnvilPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkWinAnvilPlatformInfo : UAkWinGDKPlatformInfo {
};

// Class AkAudio.AkWwiseTree
// Size: 0x1f8 (Inherited: 0x1b8)
struct UAkWwiseTree : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x1b8(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x1c8(0x10)
	char pad_1D8[0x20]; // 0x1d8(0x20)

	void SetSearchText(struct FString newText); // Function AkAudio.AkWwiseTree.SetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x4f15410
	struct FAkWwiseObjectDetails GetSelectedItem(); // Function AkAudio.AkWwiseTree.GetSelectedItem // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4f288f0
	struct FString GetSearchText(); // Function AkAudio.AkWwiseTree.GetSearchText // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x4f15740
};

// Class AkAudio.AkWwiseTreeSelector
// Size: 0x218 (Inherited: 0x1b8)
struct UAkWwiseTreeSelector : UWidget {
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x1b8(0x10)
	struct FMulticastInlineDelegate OnItemDragged; // 0x1c8(0x10)
	char pad_1D8[0x40]; // 0x1d8(0x40)
};

// Class AkAudio.AkXboxOneGDKInitializationSettings
// Size: 0x108 (Inherited: 0x30)
struct UAkXboxOneGDKInitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x38(0x68)
	struct FAkXboxOneGDKApuHeapInitializationSettings ApuHeapSettings; // 0xa0(0x08)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8(0x20)
	struct FAkXboxOneGDKAdvancedInitializationSettings AdvancedSettings; // 0xc8(0x40)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXboxOneGDKInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x4efa6f0
};

// Class AkAudio.AkXboxOneAnvilInitializationSettings
// Size: 0x108 (Inherited: 0x108)
struct UAkXboxOneAnvilInitializationSettings : UAkXboxOneGDKInitializationSettings {
};

// Class AkAudio.AkXB1InitializationSettings
// Size: 0x108 (Inherited: 0x108)
struct UAkXB1InitializationSettings : UAkXboxOneGDKInitializationSettings {
};

// Class AkAudio.AkXboxOneGDKPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkXboxOneGDKPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkXboxOneAnvilPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkXboxOneAnvilPlatformInfo : UAkXboxOneGDKPlatformInfo {
};

// Class AkAudio.AkXB1PlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkXB1PlatformInfo : UAkXboxOneGDKPlatformInfo {
};

// Class AkAudio.AkXboxOneInitializationSettings
// Size: 0x108 (Inherited: 0x30)
struct UAkXboxOneInitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x38(0x68)
	struct FAkXboxOneApuHeapInitializationSettings ApuHeapSettings; // 0xa0(0x08)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8(0x20)
	struct FAkXboxOneAdvancedInitializationSettings AdvancedSettings; // 0xc8(0x40)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x4efa6f0
};

// Class AkAudio.AkXboxOnePlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkXboxOnePlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.AkXSXInitializationSettings
// Size: 0x110 (Inherited: 0x30)
struct UAkXSXInitializationSettings : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FAkCommonInitializationSettings CommonSettings; // 0x38(0x68)
	struct FAkXSXApuHeapInitializationSettings ApuHeapSettings; // 0xa0(0x08)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8(0x20)
	struct FAkXSXAdvancedInitializationSettings AdvancedSettings; // 0xc8(0x48)

	void MigrateMultiCoreRendering(bool NewValue); // Function AkAudio.AkXSXInitializationSettings.MigrateMultiCoreRendering // (Final|Native|Public) // @ game+0x4efa6f0
};

// Class AkAudio.AkMPXInitializationSettings
// Size: 0x110 (Inherited: 0x110)
struct UAkMPXInitializationSettings : UAkXSXInitializationSettings {
};

// Class AkAudio.AkXSXPlatformInfo
// Size: 0x78 (Inherited: 0x78)
struct UAkXSXPlatformInfo : UAkPlatformInfo {
};

// Class AkAudio.MovieSceneAkAudioEventSection
// Size: 0x178 (Inherited: 0xf8)
struct UMovieSceneAkAudioEventSection : UMovieSceneSection {
	char pad_F8[0x28]; // 0xf8(0x28)
	struct UAkAudioEvent* event; // 0x120(0x08)
	bool RetriggerEvent; // 0x128(0x01)
	char pad_129[0x3]; // 0x129(0x03)
	int32_t ScrubTailLengthMs; // 0x12c(0x04)
	bool StopAtSectionEnd; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
	struct FString EventName; // 0x138(0x10)
	float MaxSourceDuration; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct FString MaxDurationSourceID; // 0x150(0x10)
	char pad_160[0x18]; // 0x160(0x18)
};

// Class AkAudio.MovieSceneAkTrack
// Size: 0xb8 (Inherited: 0xa0)
struct UMovieSceneAkTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0xa0(0x10)
	bool bIsAMasterTrack; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class AkAudio.MovieSceneAkAudioEventTrack
// Size: 0xc0 (Inherited: 0xb8)
struct UMovieSceneAkAudioEventTrack : UMovieSceneAkTrack {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class AkAudio.MovieSceneAkAudioRTPCSection
// Size: 0x2d0 (Inherited: 0xf8)
struct UMovieSceneAkAudioRTPCSection : UMovieSceneSection {
	struct UAkRtpc* RTPC; // 0xf8(0x08)
	struct FString Name; // 0x100(0x10)
	struct FRichCurve FloatCurve; // 0x110(0x80)
	struct FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x190(0x30)
	struct FMovieSceneFloatChannel RTPCChannel; // 0x1c0(0x110)
};

// Class AkAudio.MovieSceneAkAudioRTPCTrack
// Size: 0xc0 (Inherited: 0xb8)
struct UMovieSceneAkAudioRTPCTrack : UMovieSceneAkTrack {
	char pad_B8[0x8]; // 0xb8(0x08)
};

// Class AkAudio.PostEventAsync
// Size: 0x98 (Inherited: 0x38)
struct UPostEventAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x38(0x10)
	char pad_48[0x50]; // 0x48(0x50)

	struct UPostEventAsync* PostEventAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct AActor* Actor, int32_t CallbackMask, struct FDelegate& PostEventCallback, bool bStopWhenAttachedToDestroyed); // Function AkAudio.PostEventAsync.PostEventAsync // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4f2d330
	void PollPostEventFuture(); // Function AkAudio.PostEventAsync.PollPostEventFuture // (Final|Native|Private) // @ game+0x4f2d310
};

// Class AkAudio.PostEventAtLocationAsync
// Size: 0xa0 (Inherited: 0x38)
struct UPostEventAtLocationAsync : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate Completed; // 0x38(0x10)
	char pad_48[0x58]; // 0x48(0x58)

	struct UPostEventAtLocationAsync* PostEventAtLocationAsync(struct UObject* WorldContextObject, struct UAkAudioEvent* AkEvent, struct FVector Location, struct FRotator Orientation); // Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x4f2daf0
	void PollPostEventFuture(); // Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture // (Final|Native|Private) // @ game+0x4f2dad0
};

