// Class AudioSynesthesia.AudioSynesthesiaSettings
// Size: 0x30 (Inherited: 0x30)
struct UAudioSynesthesiaSettings : UAudioAnalyzerSettings {
};

// Class AudioSynesthesia.AudioSynesthesiaNRTSettings
// Size: 0x30 (Inherited: 0x30)
struct UAudioSynesthesiaNRTSettings : UAudioAnalyzerNRTSettings {
};

// Class AudioSynesthesia.AudioSynesthesiaNRT
// Size: 0x80 (Inherited: 0x80)
struct UAudioSynesthesiaNRT : UAudioAnalyzerNRT {
};

// Class AudioSynesthesia.ConstantQNRTSettings
// Size: 0x50 (Inherited: 0x30)
struct UConstantQNRTSettings : UAudioSynesthesiaNRTSettings {
	float StartingFrequency; // 0x30(0x04)
	int32_t NumBands; // 0x34(0x04)
	float NumBandsPerOctave; // 0x38(0x04)
	float AnalysisPeriod; // 0x3c(0x04)
	bool bDownmixToMono; // 0x40(0x01)
	enum class EConstantQFFTSizeEnum FFTSize; // 0x41(0x01)
	enum class EFFTWindowType WindowType; // 0x42(0x01)
	enum class EAudioSpectrumType SpectrumType; // 0x43(0x01)
	float BandWidthStretch; // 0x44(0x04)
	enum class EConstantQNormalizationEnum CQTNormalization; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float NoiseFloorDb; // 0x4c(0x04)
};

// Class AudioSynesthesia.ConstantQNRT
// Size: 0x88 (Inherited: 0x80)
struct UConstantQNRT : UAudioSynesthesiaNRT {
	struct UConstantQNRTSettings* Settings; // 0x80(0x08)

	void GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, struct TArray<float>& OutConstantQ); // Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x80dcf50
	void GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, struct TArray<float>& OutConstantQ); // Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x80dd1c0
};

// Class AudioSynesthesia.LoudnessSettings
// Size: 0x48 (Inherited: 0x30)
struct ULoudnessSettings : UAudioSynesthesiaSettings {
	float AnalysisPeriod; // 0x30(0x04)
	float MinimumFrequency; // 0x34(0x04)
	float MaximumFrequency; // 0x38(0x04)
	enum class ELoudnessCurveTypeEnum CurveType; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float NoiseFloorDb; // 0x40(0x04)
	float ExpectedMaxLoudness; // 0x44(0x04)
};

// Class AudioSynesthesia.LoudnessAnalyzer
// Size: 0xe0 (Inherited: 0x98)
struct ULoudnessAnalyzer : UAudioAnalyzer {
	struct ULoudnessSettings* Settings; // 0x98(0x08)
	struct FMulticastInlineDelegate OnOverallLoudnessResults; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnPerChannelLoudnessResults; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnLatestOverallLoudnessResults; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnLatestPerChannelLoudnessResults; // 0xd0(0x10)
};

// Class AudioSynesthesia.LoudnessNRTSettings
// Size: 0x48 (Inherited: 0x30)
struct ULoudnessNRTSettings : UAudioSynesthesiaNRTSettings {
	float AnalysisPeriod; // 0x30(0x04)
	float MinimumFrequency; // 0x34(0x04)
	float MaximumFrequency; // 0x38(0x04)
	enum class ELoudnessNRTCurveTypeEnum CurveType; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float NoiseFloorDb; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class AudioSynesthesia.LoudnessNRT
// Size: 0x88 (Inherited: 0x80)
struct ULoudnessNRT : UAudioSynesthesiaNRT {
	struct ULoudnessNRTSettings* Settings; // 0x80(0x08)

	void GetNormalizedLoudnessAtTime(float InSeconds, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x80dfee0
	void GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x80dfcb0
	void GetLoudnessAtTime(float InSeconds, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x80e02b0
	void GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x80e0080
};

// Class AudioSynesthesia.MeterSettings
// Size: 0x48 (Inherited: 0x30)
struct UMeterSettings : UAudioSynesthesiaSettings {
	float AnalysisPeriod; // 0x30(0x04)
	enum class EMeterPeakType PeakMode; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t MeterAttackTime; // 0x38(0x04)
	int32_t MeterReleaseTime; // 0x3c(0x04)
	int32_t PeakHoldTime; // 0x40(0x04)
	float ClippingThreshold; // 0x44(0x04)
};

// Class AudioSynesthesia.MeterAnalyzer
// Size: 0x140 (Inherited: 0x98)
struct UMeterAnalyzer : UAudioAnalyzer {
	struct UMeterSettings* Settings; // 0x98(0x08)
	struct FMulticastInlineDelegate OnOverallMeterResults; // 0xa0(0x10)
	char pad_B0[0x18]; // 0xb0(0x18)
	struct FMulticastInlineDelegate OnPerChannelMeterResults; // 0xc8(0x10)
	char pad_D8[0x18]; // 0xd8(0x18)
	struct FMulticastInlineDelegate OnLatestOverallMeterResults; // 0xf0(0x10)
	char pad_100[0x18]; // 0x100(0x18)
	struct FMulticastInlineDelegate OnLatestPerChannelMeterResults; // 0x118(0x10)
	char pad_128[0x18]; // 0x128(0x18)
};

// Class AudioSynesthesia.OnsetNRTSettings
// Size: 0x48 (Inherited: 0x30)
struct UOnsetNRTSettings : UAudioSynesthesiaNRTSettings {
	bool bDownmixToMono; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float GranularityInSeconds; // 0x34(0x04)
	float Sensitivity; // 0x38(0x04)
	float MinimumFrequency; // 0x3c(0x04)
	float MaximumFrequency; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// Class AudioSynesthesia.OnsetNRT
// Size: 0x88 (Inherited: 0x80)
struct UOnsetNRT : UAudioSynesthesiaNRT {
	struct UOnsetNRTSettings* Settings; // 0x80(0x08)

	void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, struct TArray<float>& OutOnsetTimestamps, struct TArray<float>& OutOnsetStrengths); // Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x80e2410
	void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, struct TArray<float>& OutOnsetTimestamps, struct TArray<float>& OutOnsetStrengths); // Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x80e27f0
};

// Class AudioSynesthesia.SynesthesiaSpectrumAnalysisSettings
// Size: 0x38 (Inherited: 0x30)
struct USynesthesiaSpectrumAnalysisSettings : UAudioSynesthesiaSettings {
	float AnalysisPeriod; // 0x30(0x04)
	enum class EFFTSize FFTSize; // 0x34(0x01)
	enum class EAudioSpectrumType SpectrumType; // 0x35(0x01)
	enum class EFFTWindowType WindowType; // 0x36(0x01)
	bool bDownmixToMono; // 0x37(0x01)
};

// Class AudioSynesthesia.SynesthesiaSpectrumAnalyzer
// Size: 0xf0 (Inherited: 0x98)
struct USynesthesiaSpectrumAnalyzer : UAudioAnalyzer {
	struct USynesthesiaSpectrumAnalysisSettings* Settings; // 0x98(0x08)
	struct FMulticastInlineDelegate OnSpectrumResults; // 0xa0(0x10)
	char pad_B0[0x18]; // 0xb0(0x18)
	struct FMulticastInlineDelegate OnLatestSpectrumResults; // 0xc8(0x10)
	char pad_D8[0x18]; // 0xd8(0x18)

	int32_t GetNumCenterFrequencies(); // Function AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetNumCenterFrequencies // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x80e41b0
	void GetCenterFrequencies(float InSampleRate, struct TArray<float>& OutCenterFrequencies); // Function AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetCenterFrequencies // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x80e41f0
};

