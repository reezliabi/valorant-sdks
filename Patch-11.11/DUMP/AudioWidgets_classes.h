// Class AudioWidgets.AudioMeter
// Size: 0x740 (Inherited: 0x1b8)
struct UAudioMeter : UWidget {
	struct TArray<struct FMeterChannelInfo> MeterChannelInfo; // 0x1b8(0x10)
	struct FDelegate MeterChannelInfoDelegate; // 0x1c8(0x14)
	char pad_1DC[0x4]; // 0x1dc(0x04)
	struct FAudioMeterStyle WidgetStyle; // 0x1e0(0x4d0)
	enum class EOrientation Orientation; // 0x6b0(0x01)
	char pad_6B1[0x3]; // 0x6b1(0x03)
	struct FLinearColor BackgroundColor; // 0x6b4(0x10)
	struct FLinearColor MeterBackgroundColor; // 0x6c4(0x10)
	struct FLinearColor MeterValueColor; // 0x6d4(0x10)
	struct FLinearColor MeterPeakColor; // 0x6e4(0x10)
	struct FLinearColor MeterClippingColor; // 0x6f4(0x10)
	struct FLinearColor MeterScaleColor; // 0x704(0x10)
	struct FLinearColor MeterScaleLabelColor; // 0x714(0x10)
	char pad_724[0x1c]; // 0x724(0x1c)

	void SetMeterValueColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetMeterValueColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x810a0c0
	void SetMeterScaleLabelColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetMeterScaleLabelColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x8109ac0
	void SetMeterScaleColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetMeterScaleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x8109c40
	void SetMeterPeakColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetMeterPeakColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x8109f40
	void SetMeterClippingColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetMeterClippingColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x8109dc0
	void SetMeterChannelInfo(struct TArray<struct FMeterChannelInfo>& InMeterChannelInfo); // Function AudioWidgets.AudioMeter.SetMeterChannelInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x810a540
	void SetMeterBackgroundColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetMeterBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x810a240
	void SetBackgroundColor(struct FLinearColor InValue); // Function AudioWidgets.AudioMeter.SetBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x810a3c0
	struct TArray<struct FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature(); // DelegateFunction AudioWidgets.AudioMeter.GetMeterChannelInfo__DelegateSignature // (Public|Delegate) // @ game+0x19be2f0
	struct TArray<struct FMeterChannelInfo> GetMeterChannelInfo(); // Function AudioWidgets.AudioMeter.GetMeterChannelInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x810a670
};

// Class AudioWidgets.AudioRadialSlider
// Size: 0x3e0 (Inherited: 0x1b8)
struct UAudioRadialSlider : UWidget {
	float Value; // 0x1b8(0x04)
	struct FDelegate ValueDelegate; // 0x1bc(0x14)
	enum class EAudioRadialSliderLayout WidgetLayout; // 0x1d0(0x01)
	char pad_1D1[0x3]; // 0x1d1(0x03)
	struct FLinearColor CenterBackgroundColor; // 0x1d4(0x10)
	struct FLinearColor SliderProgressColor; // 0x1e4(0x10)
	struct FLinearColor SliderBarColor; // 0x1f4(0x10)
	char pad_204[0x4]; // 0x204(0x04)
	struct FVector2D HandStartEndRatio; // 0x208(0x10)
	struct FText UnitsText; // 0x218(0x18)
	struct FLinearColor TextLabelBackgroundColor; // 0x230(0x10)
	bool ShowLabelOnlyOnHover; // 0x240(0x01)
	bool ShowUnitsText; // 0x241(0x01)
	bool IsUnitsTextReadOnly; // 0x242(0x01)
	bool IsValueTextReadOnly; // 0x243(0x01)
	float SliderThickness; // 0x244(0x04)
	struct FVector2D OutputRange; // 0x248(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x258(0x10)
	char pad_268[0x178]; // 0x268(0x178)

	void SetWidgetLayout(enum class EAudioRadialSliderLayout InLayout); // Function AudioWidgets.AudioRadialSlider.SetWidgetLayout // (Final|Native|Public|BlueprintCallable) // @ game+0x810d0e0
	void SetValueTextReadOnly(bool bIsReadOnly); // Function AudioWidgets.AudioRadialSlider.SetValueTextReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x810c7b0
	void SetUnitsTextReadOnly(bool bIsReadOnly); // Function AudioWidgets.AudioRadialSlider.SetUnitsTextReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x810c8e0
	void SetUnitsText(struct FText Units); // Function AudioWidgets.AudioRadialSlider.SetUnitsText // (Final|Native|Public|BlueprintCallable) // @ game+0x810c9f0
	void SetTextLabelBackgroundColor(struct FSlateColor InColor); // Function AudioWidgets.AudioRadialSlider.SetTextLabelBackgroundColor // (Final|Native|Public|BlueprintCallable) // @ game+0x810cb30
	void SetSliderThickness(float InThickness); // Function AudioWidgets.AudioRadialSlider.SetSliderThickness // (Final|Native|Public|BlueprintCallable) // @ game+0x810c470
	void SetSliderProgressColor(struct FLinearColor InValue); // Function AudioWidgets.AudioRadialSlider.SetSliderProgressColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x810cec0
	void SetSliderBarColor(struct FLinearColor InValue); // Function AudioWidgets.AudioRadialSlider.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x810cdb0
	void SetShowUnitsText(bool bShowUnitsText); // Function AudioWidgets.AudioRadialSlider.SetShowUnitsText // (Final|Native|Public|BlueprintCallable) // @ game+0x810c590
	void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover); // Function AudioWidgets.AudioRadialSlider.SetShowLabelOnlyOnHover // (Final|Native|Public|BlueprintCallable) // @ game+0x810c6a0
	void SetOutputRange(struct FVector2D InOutputRange); // Function AudioWidgets.AudioRadialSlider.SetOutputRange // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x810c360
	void SetHandStartEndRatio(struct FVector2D InHandStartEndRatio); // Function AudioWidgets.AudioRadialSlider.SetHandStartEndRatio // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x810ccb0
	void SetCenterBackgroundColor(struct FLinearColor InValue); // Function AudioWidgets.AudioRadialSlider.SetCenterBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x810cfd0
	float GetSliderValue(float OutputValue); // Function AudioWidgets.AudioRadialSlider.GetSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x810d1e0
	float GetOutputValue(float InSliderValue); // Function AudioWidgets.AudioRadialSlider.GetOutputValue // (Final|Native|Public|BlueprintCallable) // @ game+0x810d2f0
};

// Class AudioWidgets.AudioVolumeRadialSlider
// Size: 0x3e0 (Inherited: 0x3e0)
struct UAudioVolumeRadialSlider : UAudioRadialSlider {
};

// Class AudioWidgets.AudioFrequencyRadialSlider
// Size: 0x3e0 (Inherited: 0x3e0)
struct UAudioFrequencyRadialSlider : UAudioRadialSlider {
};

// Class AudioWidgets.AudioSliderBase
// Size: 0xa20 (Inherited: 0x1b8)
struct UAudioSliderBase : UWidget {
	float Value; // 0x1b8(0x04)
	char pad_1BC[0x4]; // 0x1bc(0x04)
	struct FText UnitsText; // 0x1c0(0x18)
	struct FLinearColor TextLabelBackgroundColor; // 0x1d8(0x10)
	struct FDelegate TextLabelBackgroundColorDelegate; // 0x1e8(0x14)
	bool ShowLabelOnlyOnHover; // 0x1fc(0x01)
	bool ShowUnitsText; // 0x1fd(0x01)
	bool IsUnitsTextReadOnly; // 0x1fe(0x01)
	bool IsValueTextReadOnly; // 0x1ff(0x01)
	struct FDelegate ValueDelegate; // 0x200(0x14)
	struct FLinearColor SliderBackgroundColor; // 0x214(0x10)
	struct FDelegate SliderBackgroundColorDelegate; // 0x224(0x14)
	struct FLinearColor SliderBarColor; // 0x238(0x10)
	struct FDelegate SliderBarColorDelegate; // 0x248(0x14)
	struct FLinearColor SliderThumbColor; // 0x25c(0x10)
	struct FDelegate SliderThumbColorDelegate; // 0x26c(0x14)
	struct FLinearColor WidgetBackgroundColor; // 0x280(0x10)
	struct FDelegate WidgetBackgroundColorDelegate; // 0x290(0x14)
	enum class EOrientation Orientation; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct FMulticastInlineDelegate OnValueChanged; // 0x2a8(0x10)
	char pad_2B8[0x768]; // 0x2b8(0x768)

	void SetWidgetBackgroundColor(struct FLinearColor InValue); // Function AudioWidgets.AudioSliderBase.SetWidgetBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x81108f0
	void SetValueTextReadOnly(bool bIsReadOnly); // Function AudioWidgets.AudioSliderBase.SetValueTextReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x8110f50
	void SetUnitsTextReadOnly(bool bIsReadOnly); // Function AudioWidgets.AudioSliderBase.SetUnitsTextReadOnly // (Final|Native|Public|BlueprintCallable) // @ game+0x8111080
	void SetUnitsText(struct FText Units); // Function AudioWidgets.AudioSliderBase.SetUnitsText // (Final|Native|Public|BlueprintCallable) // @ game+0x8111190
	void SetTextLabelBackgroundColor(struct FSlateColor InColor); // Function AudioWidgets.AudioSliderBase.SetTextLabelBackgroundColor // (Final|Native|Public|BlueprintCallable) // @ game+0x81112d0
	void SetSliderThumbColor(struct FLinearColor InValue); // Function AudioWidgets.AudioSliderBase.SetSliderThumbColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x8110a00
	void SetSliderBarColor(struct FLinearColor InValue); // Function AudioWidgets.AudioSliderBase.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x8110b10
	void SetSliderBackgroundColor(struct FLinearColor InValue); // Function AudioWidgets.AudioSliderBase.SetSliderBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x8110c20
	void SetShowUnitsText(bool bShowUnitsText); // Function AudioWidgets.AudioSliderBase.SetShowUnitsText // (Final|Native|Public|BlueprintCallable) // @ game+0x8110d30
	void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover); // Function AudioWidgets.AudioSliderBase.SetShowLabelOnlyOnHover // (Final|Native|Public|BlueprintCallable) // @ game+0x8110e40
	float GetSliderValue(float OutputValue); // Function AudioWidgets.AudioSliderBase.GetSliderValue // (Final|Native|Public|BlueprintCallable) // @ game+0x8111450
	float GetOutputValue(float InSliderValue); // Function AudioWidgets.AudioSliderBase.GetOutputValue // (Final|Native|Public|BlueprintCallable) // @ game+0x8111560
	float GetLinValue(float OutputValue); // Function AudioWidgets.AudioSliderBase.GetLinValue // (Final|Native|Public|BlueprintCallable) // @ game+0x8111450
};

// Class AudioWidgets.AudioSlider
// Size: 0xa30 (Inherited: 0xa20)
struct UAudioSlider : UAudioSliderBase {
	struct TWeakObjectPtr<struct UCurveFloat> LinToOutputCurve; // 0xa20(0x08)
	struct TWeakObjectPtr<struct UCurveFloat> OutputToLinCurve; // 0xa28(0x08)
};

// Class AudioWidgets.AudioVolumeSlider
// Size: 0xa30 (Inherited: 0xa30)
struct UAudioVolumeSlider : UAudioSlider {
};

// Class AudioWidgets.AudioFrequencySlider
// Size: 0xa30 (Inherited: 0xa20)
struct UAudioFrequencySlider : UAudioSliderBase {
	struct FVector2D OutputRange; // 0xa20(0x10)
};

