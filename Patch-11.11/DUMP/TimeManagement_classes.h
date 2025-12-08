// Class TimeManagement.FixedFrameRateCustomTimeStep
// Size: 0x48 (Inherited: 0x30)
struct UFixedFrameRateCustomTimeStep : UEngineCustomTimeStep {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class TimeManagement.GenlockedCustomTimeStep
// Size: 0x50 (Inherited: 0x48)
struct UGenlockedCustomTimeStep : UFixedFrameRateCustomTimeStep {
	bool bAutoDetectFormat; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// Class TimeManagement.GenlockedFixedRateCustomTimeStep
// Size: 0x70 (Inherited: 0x50)
struct UGenlockedFixedRateCustomTimeStep : UGenlockedCustomTimeStep {
	struct FFrameRate FrameRate; // 0x50(0x08)
	bool bShouldBlock; // 0x58(0x01)
	bool bForceSingleFrameDeltaTime; // 0x59(0x01)
	char pad_5A[0x16]; // 0x5a(0x16)
};

// Class TimeManagement.GenlockedTimecodeProvider
// Size: 0x60 (Inherited: 0x38)
struct UGenlockedTimecodeProvider : UTimecodeProvider {
	bool bUseGenlockToCount; // 0x38(0x01)
	char pad_39[0x27]; // 0x39(0x27)
};

// Class TimeManagement.TimeManagementBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UTimeManagementBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FFrameTime TransformTime(struct FFrameTime& SourceTime, struct FFrameRate& SourceRate, struct FFrameRate& DestinationRate); // Function TimeManagement.TimeManagementBlueprintLibrary.TransformTime // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x33e9070
	struct FFrameNumber Subtract_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x33e8770
	struct FFrameNumber Subtract_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B); // Function TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x33e8a90
	struct FFrameTime SnapFrameTimeToRate(struct FFrameTime& SourceTime, struct FFrameRate& SourceRate, struct FFrameRate& SnapToRate); // Function TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x33e8db0
	struct FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds, struct FFrameRate& FrameRate); // Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x33e9820
	struct FFrameNumber Multiply_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x33e85e0
	bool IsValid_MultipleOf(struct FFrameRate& InFrameRate, struct FFrameRate& OtherFramerate); // Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x33e92f0
	bool IsValid_Framerate(struct FFrameRate& InFrameRate); // Function TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x33e9500
	struct FFrameRate GetTimecodeFrameRate(); // Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x33e8290
	struct FTimecode GetTimecode(); // Function TimeManagement.TimeManagementBlueprintLibrary.GetTimecode // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x33e82d0
	struct FFrameNumber Divide_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x33e8450
	struct FString Conv_TimecodeToString(struct FTimecode& InTimecode, bool bForceSignDisplay); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x33e9600
	float Conv_QualifiedFrameTimeToSeconds(struct FQualifiedFrameTime& InFrameTime); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x33e9a70
	float Conv_FrameRateToSeconds(struct FFrameRate& InFrameRate); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x33e9cd0
	float Conv_FrameRateToInterval(struct FFrameRate InFrameRate); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToInterval // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x33e9bc0
	int32_t Conv_FrameNumberToInteger(struct FFrameNumber& InFrameNumber); // Function TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x33e8360
	struct FFrameNumber Add_FrameNumberInteger(struct FFrameNumber A, int32_t B); // Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x33e8900
	struct FFrameNumber Add_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B); // Function TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber // (Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x33e8c20
};

// Class TimeManagement.TimeSynchronizationSource
// Size: 0x38 (Inherited: 0x30)
struct UTimeSynchronizationSource : UObject {
	bool bUseForSynchronization; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t FrameOffset; // 0x34(0x04)
};

