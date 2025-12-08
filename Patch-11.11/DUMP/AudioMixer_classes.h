// Class AudioMixer.AudioBusSubsystem
// Size: 0x98 (Inherited: 0x38)
struct UAudioBusSubsystem : UAudioEngineSubsystem {
	char pad_38[0x60]; // 0x38(0x60)
};

// Class AudioMixer.AudioDeviceNotificationSubsystem
// Size: 0x130 (Inherited: 0x38)
struct UAudioDeviceNotificationSubsystem : UEngineSubsystem {
	char pad_38[0x8]; // 0x38(0x08)
	struct FMulticastInlineDelegate DefaultCaptureDeviceChanged; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)
	struct FMulticastInlineDelegate DefaultRenderDeviceChanged; // 0x68(0x10)
	char pad_78[0x18]; // 0x78(0x18)
	struct FMulticastInlineDelegate DeviceAdded; // 0x90(0x10)
	char pad_A0[0x18]; // 0xa0(0x18)
	struct FMulticastInlineDelegate DeviceRemoved; // 0xb8(0x10)
	char pad_C8[0x18]; // 0xc8(0x18)
	struct FMulticastInlineDelegate DeviceStateChanged; // 0xe0(0x10)
	char pad_F0[0x18]; // 0xf0(0x18)
	struct FMulticastInlineDelegate DeviceSwitched; // 0x108(0x10)
	char pad_118[0x18]; // 0x118(0x18)
};

// Class AudioMixer.AudioMixerBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAudioMixerBlueprintLibrary : UBlueprintFunctionLibrary {

	float TrimAudioCache(float InMegabytesToFree); // Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x396dc50
	void SwapAudioOutputDevice(struct UObject* WorldContextObject, struct FString NewDeviceId, struct FDelegate& OnCompletedDeviceSwap); // Function AudioMixer.AudioMixerBlueprintLibrary.SwapAudioOutputDevice // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x396d090
	struct USoundWave* StopRecordingOutput(struct UObject* WorldContextObject, enum class EAudioRecordingExportType ExportType, struct FString Name, struct FString Path, struct USoundSubmix* SubmixToRecord, struct USoundWave* ExistingSoundWaveToOverwrite); // Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x3970c40
	void StopAudioBus(struct UObject* WorldContextObject, struct UAudioBus* AudioBus); // Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x396d880
	void StopAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToStopAnalyzing); // Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x3970220
	void StartRecordingOutput(struct UObject* WorldContextObject, float ExpectedDuration, struct USoundSubmix* SubmixToRecord); // Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x39710d0
	void StartAudioBus(struct UObject* WorldContextObject, struct UAudioBus* AudioBus); // Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x396da60
	void StartAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToAnalyze, enum class EFFTSize FFTSize, enum class EFFTPeakInterpolationMethod InterpolationMethod, enum class EFFTWindowType WindowType, float HopSize, enum class EAudioSpectrumType SpectrumType); // Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x39703e0
	void SetSubmixEffectChainOverride(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct TArray<struct USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec); // Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x3971520
	void SetBypassSourceEffectChainEntry(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed); // Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x396e410
	void ResumeRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause); // Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x39708c0
	void ReplaceSubmixEffect(struct UObject* WorldContextObject, struct USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSubmixEffect // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x3971b00
	void ReplaceSoundEffectSubmix(struct UObject* WorldContextObject, struct USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x3971b00
	void RemoveSubmixEffectPresetAtIndex(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, int32_t SubmixChainIndex); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x3971e80
	void RemoveSubmixEffectPreset(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x39720a0
	void RemoveSubmixEffectAtIndex(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, int32_t SubmixChainIndex); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectAtIndex // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x3971e80
	void RemoveSubmixEffect(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffect // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x39720a0
	void RemoveSourceEffectFromPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x396e7f0
	void RemoveMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x39726c0
	void PrimeSoundForPlayback(struct USoundWave* SoundWave, struct FDelegate OnLoadCompletion); // Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x396dec0
	void PrimeSoundCueForPlayback(struct USoundCue* SoundCue); // Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x396ddc0
	void PauseRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause); // Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x3970a80
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(enum class EAudioSpectrumBandPresetType InBandPresetType, int32_t InNumBands, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x396f5e0
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int32_t InNumSemitones, enum class EMusicalNoteName InStartingMusicalNote, int32_t InStartingOctave, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x396fd40
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int32_t InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32_t InAttackTimeMsec, int32_t InReleaseTimeMsec); // Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x396f970
	bool IsAudioBusActive(struct UObject* WorldContextObject, struct UAudioBus* AudioBus); // Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x396d690
	void GetPhaseForFrequencies(struct UObject* WorldContextObject, struct TArray<float>& Frequencies, struct TArray<float>& Phases, struct USoundSubmix* SubmixToAnalyze); // Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x396eec0
	int32_t GetNumberOfEntriesInSourceEffectChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain); // Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x396e1b0
	void GetMagnitudeForFrequencies(struct UObject* WorldContextObject, struct TArray<float>& Frequencies, struct TArray<float>& Magnitudes, struct USoundSubmix* SubmixToAnalyze); // Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x396f250
	void GetCurrentAudioOutputDeviceName(struct UObject* WorldContextObject, struct FDelegate& OnObtainCurrentDeviceEvent); // Function AudioMixer.AudioMixerBlueprintLibrary.GetCurrentAudioOutputDeviceName // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x396d310
	void GetAvailableAudioOutputDevices(struct UObject* WorldContextObject, struct FDelegate& OnObtainDevicesEvent); // Function AudioMixer.AudioMixerBlueprintLibrary.GetAvailableAudioOutputDevices // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x396d4d0
	struct FString Conv_AudioOutputDeviceInfoToString(struct FAudioOutputDeviceInfo& Info); // Function AudioMixer.AudioMixerBlueprintLibrary.Conv_AudioOutputDeviceInfoToString // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3972ba0
	void ClearSubmixEffects(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix); // Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x3971850
	void ClearSubmixEffectChainOverride(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, float FadeTimeSec); // Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x39712f0
	void ClearMasterSubmixEffects(struct UObject* WorldContextObject); // Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x39725b0
	int32_t AddSubmixEffect(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x39722c0
	void AddSourceEffectToPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, struct FSourceEffectChainEntry Entry); // Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x396eb60
	void AddMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x39728d0
};

// Class AudioMixer.SynthSound
// Size: 0x4b0 (Inherited: 0x490)
struct USynthSound : USoundWaveProcedural {
	struct TWeakObjectPtr<struct USynthComponent> OwningSynthComponent; // 0x490(0x08)
	char pad_498[0x18]; // 0x498(0x18)
};

// Class AudioMixer.SynthComponent
// Size: 0x9a0 (Inherited: 0x330)
struct USynthComponent : USceneComponent {
	char bAutoDestroy : 1; // 0x330(0x01)
	char bStopWhenOwnerDestroyed : 1; // 0x330(0x01)
	char bAllowSpatialization : 1; // 0x330(0x01)
	char bOverrideAttenuation : 1; // 0x330(0x01)
	char pad_330_4 : 4; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	char bEnableBusSends : 1; // 0x334(0x01)
	char bEnableBaseSubmix : 1; // 0x334(0x01)
	char bEnableSubmixSends : 1; // 0x334(0x01)
	char pad_334_3 : 5; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	struct USoundAttenuation* AttenuationSettings; // 0x338(0x08)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x340(0x3d8)
	struct USoundConcurrency* ConcurrencySettings; // 0x718(0x08)
	struct TSet<struct USoundConcurrency*> ConcurrencySet; // 0x720(0x50)
	struct FSoundModulationDefaultRoutingSettings ModulationRouting; // 0x770(0x168)
	struct USoundClass* SoundClass; // 0x8d8(0x08)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x8e0(0x08)
	struct USoundSubmixBase* SoundSubmix; // 0x8e8(0x08)
	struct TArray<struct FSoundSubmixSendInfo> SoundSubmixSends; // 0x8f0(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> BusSends; // 0x900(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> PreEffectBusSends; // 0x910(0x10)
	char bIsUISound : 1; // 0x920(0x01)
	char bIsPreviewSound : 1; // 0x920(0x01)
	char pad_920_2 : 6; // 0x920(0x01)
	char pad_921[0x3]; // 0x921(0x03)
	int32_t EnvelopeFollowerAttackTime; // 0x924(0x04)
	int32_t EnvelopeFollowerReleaseTime; // 0x928(0x04)
	char pad_92C[0x4]; // 0x92c(0x04)
	struct FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x930(0x10)
	char pad_940[0x20]; // 0x940(0x20)
	struct USynthSound* Synth; // 0x960(0x08)
	struct UAudioComponent* AudioComponent; // 0x968(0x08)
	char pad_970[0x30]; // 0x970(0x30)

	void Stop(); // Function AudioMixer.SynthComponent.Stop // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39b2e10
	void Start(); // Function AudioMixer.SynthComponent.Start // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39b2e30
	void SetVolumeMultiplier(float VolumeMultiplier); // Function AudioMixer.SynthComponent.SetVolumeMultiplier // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39b2cb0
	void SetSubmixSend(struct USoundSubmixBase* Submix, float SendLevel); // Function AudioMixer.SynthComponent.SetSubmixSend // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39b2b00
	void SetSourceBusSendPreEffect(struct USoundSourceBus* SoundSourceBus, float SourceBusSendLevel); // Function AudioMixer.SynthComponent.SetSourceBusSendPreEffect // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39b2940
	void SetSourceBusSendPostEffect(struct USoundSourceBus* SoundSourceBus, float SourceBusSendLevel); // Function AudioMixer.SynthComponent.SetSourceBusSendPostEffect // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39b2780
	void SetOutputToBusOnly(bool bInOutputToBusOnly); // Function AudioMixer.SynthComponent.SetOutputToBusOnly // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39b2100
	void SetModulationRouting(struct TSet<struct USoundModulatorBase*>& Modulators, enum class EModulationDestination Destination, enum class EModulationRouting RoutingMethod); // Function AudioMixer.SynthComponent.SetModulationRouting // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39b1600
	void SetLowPassFilterFrequency(float InLowPassFilterFrequency); // Function AudioMixer.SynthComponent.SetLowPassFilterFrequency // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39b2200
	void SetLowPassFilterEnabled(bool InLowPassFilterEnabled); // Function AudioMixer.SynthComponent.SetLowPassFilterEnabled // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39b2300
	void SetAudioBusSendPreEffect(struct UAudioBus* AudioBus, float AudioBusSendLevel); // Function AudioMixer.SynthComponent.SetAudioBusSendPreEffect // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39b25c0
	void SetAudioBusSendPostEffect(struct UAudioBus* AudioBus, float AudioBusSendLevel); // Function AudioMixer.SynthComponent.SetAudioBusSendPostEffect // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39b2400
	bool IsPlaying(); // Function AudioMixer.SynthComponent.IsPlaying // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x39b2db0
	struct TSet<struct USoundModulatorBase*> GetModulators(enum class EModulationDestination Destination); // Function AudioMixer.SynthComponent.GetModulators // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x39b1380
	void FadeOut(float FadeOutDuration, float FadeVolumeLevel, enum class EAudioFaderCurve FadeCurve); // Function AudioMixer.SynthComponent.FadeOut // (Final|RequiredAPI|Native|Public|BlueprintCallable|Const) // @ game+0x39b1bc0
	void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, enum class EAudioFaderCurve FadeCurve); // Function AudioMixer.SynthComponent.FadeIn // (Final|RequiredAPI|Native|Public|BlueprintCallable|Const) // @ game+0x39b1e10
	void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, enum class EAudioFaderCurve FadeCurve); // Function AudioMixer.SynthComponent.AdjustVolume // (Final|RequiredAPI|Native|Public|BlueprintCallable|Const) // @ game+0x39b1970
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// Size: 0x158 (Inherited: 0x70)
struct USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset {
	char pad_70[0x88]; // 0x70(0x88)
	struct FSubmixEffectDynamicsProcessorSettings Settings; // 0xf8(0x60)

	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings& Settings); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39b6580
	void SetExternalSubmix(struct USoundSubmix* Submix); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39b6770
	void SetAudioBus(struct UAudioBus* AudioBus); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetAudioBus // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39b68e0
	void ResetKey(); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.ResetKey // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39b6a50
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
// Size: 0xb8 (Inherited: 0x70)
struct USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset {
	char pad_70[0x38]; // 0x70(0x38)
	struct FSubmixEffectSubmixEQSettings Settings; // 0xa8(0x10)

	void SetSettings(struct FSubmixEffectSubmixEQSettings& InSettings); // Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39b8700
};

// Class AudioMixer.SubmixEffectReverbPreset
// Size: 0x118 (Inherited: 0x70)
struct USubmixEffectReverbPreset : USoundEffectSubmixPreset {
	char pad_70[0x68]; // 0x70(0x68)
	struct FSubmixEffectReverbSettings Settings; // 0xd8(0x40)

	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39ba210
	void SetSettings(struct FSubmixEffectReverbSettings& InSettings); // Function AudioMixer.SubmixEffectReverbPreset.SetSettings // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39ba4e0
};

// Class AudioMixer.AudioGenerator
// Size: 0xb0 (Inherited: 0x30)
struct UAudioGenerator : UObject {
	char pad_30[0x80]; // 0x30(0x80)
};

// Class AudioMixer.QuartzClockHandle
// Size: 0x208 (Inherited: 0x30)
struct UQuartzClockHandle : UObject {
	char pad_30[0x1d8]; // 0x30(0x1d8)

	void UnsubscribeFromTimeDivision(struct UObject* WorldContextObject, enum class EQuartzCommandQuantization InQuantizationBoundary, struct UQuartzClockHandle*& ClockHandle); // Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39c0470
	void UnsubscribeFromAllTimeDivisions(struct UObject* WorldContextObject, struct UQuartzClockHandle*& ClockHandle); // Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39c0160
	void SubscribeToQuantizationEvent(struct UObject* WorldContextObject, enum class EQuartzCommandQuantization InQuantizationBoundary, struct FDelegate& OnQuantizationEvent, struct UQuartzClockHandle*& ClockHandle); // Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39c0aa0
	void SubscribeToAllQuantizationEvents(struct UObject* WorldContextObject, struct FDelegate& OnQuantizationEvent, struct UQuartzClockHandle*& ClockHandle); // Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39c0820
	void StopClock(struct UObject* WorldContextObject, bool CancelPendingEvents, struct UQuartzClockHandle*& ClockHandle); // Function AudioMixer.QuartzClockHandle.StopClock // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39c24a0
	void StartOtherClock(struct UObject* WorldContextObject, struct FName OtherClockName, struct FQuartzQuantizationBoundary InQuantizationBoundary, struct FDelegate& InDelegate); // Function AudioMixer.QuartzClockHandle.StartOtherClock // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39c0db0
	void StartClock(struct UObject* WorldContextObject, struct UQuartzClockHandle*& ClockHandle); // Function AudioMixer.QuartzClockHandle.StartClock // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39c2100
	void SetTicksPerSecond(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, struct UQuartzClockHandle*& ClockHandle, float TicksPerSecond); // Function AudioMixer.QuartzClockHandle.SetTicksPerSecond // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39bf670
	void SetThirtySecondNotesPerMinute(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, struct UQuartzClockHandle*& ClockHandle, float ThirtySecondsNotesPerMinute); // Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39bebb0
	void SetSecondsPerTick(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, struct UQuartzClockHandle*& ClockHandle, float SecondsPerTick); // Function AudioMixer.QuartzClockHandle.SetSecondsPerTick // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39bf120
	void SetMillisecondsPerTick(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, struct UQuartzClockHandle*& ClockHandle, float MillisecondsPerTick); // Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39bfc00
	void SetBeatsPerMinute(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, struct UQuartzClockHandle*& ClockHandle, float BeatsPerMinute); // Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39be640
	void ResumeClock(struct UObject* WorldContextObject, struct UQuartzClockHandle*& ClockHandle); // Function AudioMixer.QuartzClockHandle.ResumeClock // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39c2100
	void ResetTransportQuantized(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary InQuantizationBoundary, struct FDelegate& InDelegate, struct UQuartzClockHandle*& ClockHandle); // Function AudioMixer.QuartzClockHandle.ResetTransportQuantized // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39c1b20
	void ResetTransport(struct UObject* WorldContextObject, struct FDelegate& InDelegate); // Function AudioMixer.QuartzClockHandle.ResetTransport // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39c1f40
	void PauseClock(struct UObject* WorldContextObject, struct UQuartzClockHandle*& ClockHandle); // Function AudioMixer.QuartzClockHandle.PauseClock // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39c22d0
	void NotifyOnQuantizationBoundary(struct UObject* WorldContextObject, struct FQuartzQuantizationBoundary InQuantizationBoundary, struct FDelegate& InDelegate, float InMsOffset); // Function AudioMixer.QuartzClockHandle.NotifyOnQuantizationBoundary // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39c1600
	bool IsClockRunning(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.IsClockRunning // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39c1a20
	float GetTicksPerSecond(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.GetTicksPerSecond // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x39be3e0
	float GetThirtySecondNotesPerMinute(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x39be1a0
	float GetSecondsPerTick(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.GetSecondsPerTick // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x39be2c0
	float GetMillisecondsPerTick(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x39be520
	float GetEstimatedRunTime(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.GetEstimatedRunTime // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39c11d0
	float GetDurationOfQuantizationTypeInSeconds(struct UObject* WorldContextObject, enum class EQuartzCommandQuantization& QuantizationType, float Multiplier); // Function AudioMixer.QuartzClockHandle.GetDurationOfQuantizationTypeInSeconds // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39c13d0
	struct FQuartzTransportTimeStamp GetCurrentTimestamp(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.GetCurrentTimestamp // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39c12d0
	float GetBeatsPerMinute(struct UObject* WorldContextObject); // Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x39be080
	float GetBeatProgressPercent(enum class EQuartzCommandQuantization QuantizationBoundary, float PhaseOffset, float MsOffset); // Function AudioMixer.QuartzClockHandle.GetBeatProgressPercent // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39bde60
};

// Class AudioMixer.QuartzSubsystem
// Size: 0x78 (Inherited: 0x58)
struct UQuartzSubsystem : UTickableWorldSubsystem {
	char pad_58[0x20]; // 0x58(0x20)

	bool IsQuartzEnabled(); // Function AudioMixer.QuartzSubsystem.IsQuartzEnabled // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39ca320
	bool IsClockRunning(struct UObject* WorldContextObject, struct FName ClockName); // Function AudioMixer.QuartzSubsystem.IsClockRunning // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39c9220
	float GetRoundTripMinLatency(struct UObject* WorldContextObject); // Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39c8500
	float GetRoundTripMaxLatency(struct UObject* WorldContextObject); // Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39c83b0
	float GetRoundTripAverageLatency(struct UObject* WorldContextObject); // Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39c8650
	struct UQuartzClockHandle* GetHandleForClock(struct UObject* WorldContextObject, struct FName ClockName); // Function AudioMixer.QuartzSubsystem.GetHandleForClock // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39c95e0
	float GetGameThreadToAudioRenderThreadMinLatency(struct UObject* WorldContextObject); // Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39c88f0
	float GetGameThreadToAudioRenderThreadMaxLatency(struct UObject* WorldContextObject); // Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39c88f0
	float GetGameThreadToAudioRenderThreadAverageLatency(struct UObject* WorldContextObject); // Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39c89f0
	float GetEstimatedClockRunTime(struct UObject* WorldContextObject, struct FName& InClockName); // Function AudioMixer.QuartzSubsystem.GetEstimatedClockRunTime // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39c8af0
	float GetDurationOfQuantizationTypeInSeconds(struct UObject* WorldContextObject, struct FName ClockName, enum class EQuartzCommandQuantization& QuantizationType, float Multiplier); // Function AudioMixer.QuartzSubsystem.GetDurationOfQuantizationTypeInSeconds // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39c8ec0
	struct FQuartzTransportTimeStamp GetCurrentClockTimestamp(struct UObject* WorldContextObject, struct FName& InClockName); // Function AudioMixer.QuartzSubsystem.GetCurrentClockTimestamp // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39c8cd0
	float GetAudioRenderThreadToGameThreadMinLatency(); // Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39c8810
	float GetAudioRenderThreadToGameThreadMaxLatency(); // Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39c87a0
	float GetAudioRenderThreadToGameThreadAverageLatency(); // Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39c8880
	bool DoesClockExist(struct UObject* WorldContextObject, struct FName ClockName); // Function AudioMixer.QuartzSubsystem.DoesClockExist // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39c9400
	void DeleteClockByName(struct UObject* WorldContextObject, struct FName ClockName); // Function AudioMixer.QuartzSubsystem.DeleteClockByName // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39c9a90
	void DeleteClockByHandle(struct UObject* WorldContextObject, struct UQuartzClockHandle*& InClockHandle); // Function AudioMixer.QuartzSubsystem.DeleteClockByHandle // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x39c9880
	struct UQuartzClockHandle* CreateNewClock(struct UObject* WorldContextObject, struct FName ClockName, struct FQuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager); // Function AudioMixer.QuartzSubsystem.CreateNewClock // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x39c9c90
};

