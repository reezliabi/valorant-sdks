// Class SequencerScripting.MovieSceneScriptingKey
// Size: 0x48 (Inherited: 0x30)
struct UMovieSceneScriptingKey : UObject {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class SequencerScripting.MovieSceneScriptingActorReferenceKey
// Size: 0x68 (Inherited: 0x48)
struct UMovieSceneScriptingActorReferenceKey : UMovieSceneScriptingKey {
	char pad_48[0x20]; // 0x48(0x20)

	void SetValue(struct FMovieSceneObjectBindingID& InNewValue); // Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetValue // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73e3a00
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingActorReferenceKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x73e3cd0
	struct FMovieSceneObjectBindingID GetValue(); // Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e3ba0
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingActorReferenceKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e4010
};

// Class SequencerScripting.MovieSceneScriptingChannel
// Size: 0x40 (Inherited: 0x30)
struct UMovieSceneScriptingChannel : UObject {
	struct FName ChannelName; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// Class SequencerScripting.MovieSceneScriptingActorReferenceChannel
// Size: 0x70 (Inherited: 0x40)
struct UMovieSceneScriptingActorReferenceChannel : UMovieSceneScriptingChannel {
	char pad_40[0x30]; // 0x40(0x30)

	void SetDefault(struct FMovieSceneObjectBindingID InDefaultValue); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x73e4530
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x5776dc0
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x73e4410
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e4330
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a33360
	struct FMovieSceneObjectBindingID GetDefault(); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e4490
	struct UMovieSceneScriptingActorReferenceKey* AddKey(struct FFrameNumber InTime, struct FMovieSceneObjectBindingID NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingActorReferenceChannel.AddKey // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x73e46f0
};

// Class SequencerScripting.MovieSceneScriptingBoolKey
// Size: 0x68 (Inherited: 0x48)
struct UMovieSceneScriptingBoolKey : UMovieSceneScriptingKey {
	char pad_48[0x20]; // 0x48(0x20)

	void SetValue(bool InNewValue); // Function SequencerScripting.MovieSceneScriptingBoolKey.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x73e4e90
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingBoolKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x73e3cd0
	bool GetValue(); // Function SequencerScripting.MovieSceneScriptingBoolKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e4fd0
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingBoolKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e4010
};

// Class SequencerScripting.MovieSceneScriptingBoolChannel
// Size: 0x70 (Inherited: 0x40)
struct UMovieSceneScriptingBoolChannel : UMovieSceneScriptingChannel {
	char pad_40[0x30]; // 0x40(0x30)

	void SetDefault(bool InDefaultValue); // Function SequencerScripting.MovieSceneScriptingBoolChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x73e54c0
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x5776dc0
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x73e5300
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e5220
	int32_t GetNumKeys(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.GetNumKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e5a30
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a33360
	bool GetDefault(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e53c0
	struct TArray<bool> EvaluateKeys(struct FSequencerScriptingRange Range, struct FFrameRate FrameRate); // Function SequencerScripting.MovieSceneScriptingBoolChannel.EvaluateKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e57c0
	struct FSequencerScriptingRange ComputeEffectiveRange(); // Function SequencerScripting.MovieSceneScriptingBoolChannel.ComputeEffectiveRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e5630
	struct UMovieSceneScriptingBoolKey* AddKey(struct FFrameNumber& InTime, bool NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingBoolChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x73e5aa0
};

// Class SequencerScripting.MovieSceneScriptingByteKey
// Size: 0x68 (Inherited: 0x48)
struct UMovieSceneScriptingByteKey : UMovieSceneScriptingKey {
	char pad_48[0x20]; // 0x48(0x20)

	void SetValue(char InNewValue); // Function SequencerScripting.MovieSceneScriptingByteKey.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x73e6410
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingByteKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x73e3cd0
	char GetValue(); // Function SequencerScripting.MovieSceneScriptingByteKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e6550
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingByteKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e4010
};

// Class SequencerScripting.MovieSceneScriptingByteChannel
// Size: 0x70 (Inherited: 0x40)
struct UMovieSceneScriptingByteChannel : UMovieSceneScriptingChannel {
	char pad_40[0x30]; // 0x40(0x30)

	void SetDefault(char InDefaultValue); // Function SequencerScripting.MovieSceneScriptingByteChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x73e6790
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x5776dc0
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingByteChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x73e5300
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingByteChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e5220
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingByteChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a33360
	char GetDefault(); // Function SequencerScripting.MovieSceneScriptingByteChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e53c0
	struct UMovieSceneScriptingByteKey* AddKey(struct FFrameNumber& InTime, char NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation); // Function SequencerScripting.MovieSceneScriptingByteChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x73e6900
};

// Class SequencerScripting.MovieSceneScriptingDoubleKey
// Size: 0x68 (Inherited: 0x48)
struct UMovieSceneScriptingDoubleKey : UMovieSceneScriptingKey {
	char pad_48[0x20]; // 0x48(0x20)

	void SetValue(double InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x73e7f10
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x73e80d0
	void SetTangentWeightMode(enum class ERichCurveTangentWeightMode InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentWeightMode // (Final|Native|Public|BlueprintCallable) // @ game+0x73e7680
	void SetTangentMode(enum class ERichCurveTangentMode InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetTangentMode // (Final|Native|Public|BlueprintCallable) // @ game+0x73e7bb0
	void SetLeaveTangentWeight(float InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangentWeight // (Final|Native|Public|BlueprintCallable) // @ game+0x73e7300
	void SetLeaveTangent(float InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetLeaveTangent // (Final|Native|Public|BlueprintCallable) // @ game+0x73e7830
	void SetInterpolationMode(enum class ERichCurveInterpMode InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetInterpolationMode // (Final|Native|Public|BlueprintCallable) // @ game+0x73e7d60
	void SetArriveTangentWeight(float InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangentWeight // (Final|Native|Public|BlueprintCallable) // @ game+0x73e74c0
	void SetArriveTangent(float InNewValue); // Function SequencerScripting.MovieSceneScriptingDoubleKey.SetArriveTangent // (Final|Native|Public|BlueprintCallable) // @ game+0x73e79f0
	double GetValue(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e8070
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e4010
	enum class ERichCurveTangentWeightMode GetTangentWeightMode(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentWeightMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e77d0
	enum class ERichCurveTangentMode GetTangentMode(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetTangentMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e7d00
	float GetLeaveTangentWeight(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangentWeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e7460
	float GetLeaveTangent(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetLeaveTangent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e7990
	enum class ERichCurveInterpMode GetInterpolationMode(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetInterpolationMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e7eb0
	float GetArriveTangentWeight(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangentWeight // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e7620
	float GetArriveTangent(); // Function SequencerScripting.MovieSceneScriptingDoubleKey.GetArriveTangent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e7b50
};

// Class SequencerScripting.MovieSceneScriptingDoubleChannel
// Size: 0x70 (Inherited: 0x40)
struct UMovieSceneScriptingDoubleChannel : UMovieSceneScriptingChannel {
	char pad_40[0x30]; // 0x40(0x30)

	void SetPreInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPreInfinityExtrapolation // (Final|Native|Public|BlueprintCallable) // @ game+0x73e8df0
	void SetPostInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetPostInfinityExtrapolation // (Final|Native|Public|BlueprintCallable) // @ game+0x73e8c80
	void SetDefault(double InDefaultValue); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x73e8b00
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x5776dc0
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x73e89a0
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e8910
	enum class ERichCurveExtrapolation GetPreInfinityExtrapolation(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPreInfinityExtrapolation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e8f10
	enum class ERichCurveExtrapolation GetPostInfinityExtrapolation(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetPostInfinityExtrapolation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e8da0
	int32_t GetNumKeys(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetNumKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e9360
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a33360
	double GetDefault(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e8a60
	struct TArray<double> EvaluateKeys(struct FSequencerScriptingRange Range, struct FFrameRate FrameRate); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.EvaluateKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e90f0
	struct FSequencerScriptingRange ComputeEffectiveRange(); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.ComputeEffectiveRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e8f60
	struct UMovieSceneScriptingDoubleKey* AddKey(struct FFrameNumber& InTime, double NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation); // Function SequencerScripting.MovieSceneScriptingDoubleChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x73e93d0
};

// Class SequencerScripting.MovieSceneScriptingEventKey
// Size: 0x68 (Inherited: 0x48)
struct UMovieSceneScriptingEventKey : UMovieSceneScriptingKey {
	char pad_48[0x20]; // 0x48(0x20)

	void SetValue(struct FMovieSceneEvent& InNewValue); // Function SequencerScripting.MovieSceneScriptingEventKey.SetValue // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x73e9ea0
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingEventKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x73e3cd0
	struct FMovieSceneEvent GetValue(); // Function SequencerScripting.MovieSceneScriptingEventKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73ea070
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingEventKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e4010
};

// Class SequencerScripting.MovieSceneScriptingEventChannel
// Size: 0x70 (Inherited: 0x40)
struct UMovieSceneScriptingEventChannel : UMovieSceneScriptingChannel {
	char pad_40[0x30]; // 0x40(0x30)

	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingEventChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x5776dc0
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingEventChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a33360
	struct UMovieSceneScriptingEventKey* AddKey(struct FFrameNumber& InTime, struct FMovieSceneEvent NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingEventChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x73ea220
};

// Class SequencerScripting.MovieSceneScriptingFloatKey
// Size: 0x48 (Inherited: 0x48)
struct UMovieSceneScriptingFloatKey : UMovieSceneScriptingKey {

	void SetValue(float InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetValue // (Native|Public|BlueprintCallable) // @ game+0x73ef4e0
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetTime // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x73ef620
	void SetTangentWeightMode(enum class ERichCurveTangentWeightMode InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode // (Native|Public|BlueprintCallable) // @ game+0x389c730
	void SetTangentMode(enum class ERichCurveTangentMode InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode // (Native|Public|BlueprintCallable) // @ game+0x73ef2e0
	void SetLeaveTangentWeight(float InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight // (Native|Public|BlueprintCallable) // @ game+0x3810a30
	void SetLeaveTangent(float InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent // (Native|Public|BlueprintCallable) // @ game+0x73ef160
	void SetInterpolationMode(enum class ERichCurveInterpMode InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode // (Native|Public|BlueprintCallable) // @ game+0x73ef3e0
	void SetArriveTangentWeight(float InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight // (Native|Public|BlueprintCallable) // @ game+0x73ef020
	void SetArriveTangent(float InNewValue); // Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent // (Native|Public|BlueprintCallable) // @ game+0x3dfad00
	float GetValue(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetValue // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73ef5e0
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e4010
	enum class ERichCurveTangentWeightMode GetTangentWeightMode(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x40b1a40
	enum class ERichCurveTangentMode GetTangentMode(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x413fef0
	float GetLeaveTangentWeight(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73eefe0
	float GetLeaveTangent(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73ef260
	enum class ERichCurveInterpMode GetInterpolationMode(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x38a7000
	float GetArriveTangentWeight(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73ef120
	float GetArriveTangent(); // Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73ef2a0
};

// Class SequencerScripting.MovieSceneScriptingActualFloatKey
// Size: 0x68 (Inherited: 0x48)
struct UMovieSceneScriptingActualFloatKey : UMovieSceneScriptingFloatKey {
	char pad_48[0x20]; // 0x48(0x20)
};

// Class SequencerScripting.MovieSceneScriptingDoubleAsFloatKey
// Size: 0x68 (Inherited: 0x48)
struct UMovieSceneScriptingDoubleAsFloatKey : UMovieSceneScriptingFloatKey {
	char pad_48[0x20]; // 0x48(0x20)
};

// Class SequencerScripting.MovieSceneScriptingFloatChannel
// Size: 0x90 (Inherited: 0x40)
struct UMovieSceneScriptingFloatChannel : UMovieSceneScriptingChannel {
	char pad_40[0x50]; // 0x40(0x50)

	void SetPreInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation); // Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation // (Final|Native|Public|BlueprintCallable) // @ game+0x73f06a0
	void SetPostInfinityExtrapolation(enum class ERichCurveExtrapolation InExtrapolation); // Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation // (Final|Native|Public|BlueprintCallable) // @ game+0x73f0500
	void SetDefault(float InDefaultValue); // Function SequencerScripting.MovieSceneScriptingFloatChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x73f02f0
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x5776dc0
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x73f0090
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73eff90
	enum class ERichCurveExtrapolation GetPreInfinityExtrapolation(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73f07d0
	enum class ERichCurveExtrapolation GetPostInfinityExtrapolation(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73f0630
	int32_t GetNumKeys(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73f0ac0
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a33360
	float GetDefault(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73f01d0
	struct TArray<float> EvaluateKeys(struct FSequencerScriptingRange Range, struct FFrameRate FrameRate); // Function SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73f0880
	struct FSequencerScriptingRange ComputeEffectiveRange(); // Function SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73f0840
	struct UMovieSceneScriptingFloatKey* AddKey(struct FFrameNumber& InTime, float NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit, enum class EMovieSceneKeyInterpolation InInterpolation); // Function SequencerScripting.MovieSceneScriptingFloatChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x73f0b50
};

// Class SequencerScripting.MovieSceneScriptingIntegerKey
// Size: 0x68 (Inherited: 0x48)
struct UMovieSceneScriptingIntegerKey : UMovieSceneScriptingKey {
	char pad_48[0x20]; // 0x48(0x20)

	void SetValue(int32_t InNewValue); // Function SequencerScripting.MovieSceneScriptingIntegerKey.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x73f1690
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingIntegerKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x73e3cd0
	int32_t GetValue(); // Function SequencerScripting.MovieSceneScriptingIntegerKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73f17d0
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingIntegerKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e4010
};

// Class SequencerScripting.MovieSceneScriptingIntegerChannel
// Size: 0x70 (Inherited: 0x40)
struct UMovieSceneScriptingIntegerChannel : UMovieSceneScriptingChannel {
	char pad_40[0x30]; // 0x40(0x30)

	void SetDefault(int32_t InDefaultValue); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x73f1bf0
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x5776dc0
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x73f1a90
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73f1a00
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a33360
	int32_t GetDefault(); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73f1b50
	struct UMovieSceneScriptingIntegerKey* AddKey(struct FFrameNumber& InTime, int32_t NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingIntegerChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x73f1d60
};

// Class SequencerScripting.MovieSceneScriptingObjectPathKey
// Size: 0x68 (Inherited: 0x48)
struct UMovieSceneScriptingObjectPathKey : UMovieSceneScriptingKey {
	char pad_48[0x20]; // 0x48(0x20)

	void SetValue(struct UObject* InNewValue); // Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x73f27e0
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingObjectPathKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x73e3cd0
	struct UObject* GetValue(); // Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73f2980
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingObjectPathKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e4010
};

// Class SequencerScripting.MovieSceneScriptingObjectPathChannel
// Size: 0x70 (Inherited: 0x40)
struct UMovieSceneScriptingObjectPathChannel : UMovieSceneScriptingChannel {
	char pad_40[0x30]; // 0x40(0x30)

	void SetDefault(struct UObject* InDefaultValue); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x73f2b50
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x5776dc0
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x73e4410
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73f2ae0
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a33360
	struct UObject* GetDefault(); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73f2b20
	struct UMovieSceneScriptingObjectPathKey* AddKey(struct FFrameNumber InTime, struct UObject* NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingObjectPathChannel.AddKey // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x73f2dd0
};

// Class SequencerScripting.MovieSceneScriptingStringKey
// Size: 0x68 (Inherited: 0x48)
struct UMovieSceneScriptingStringKey : UMovieSceneScriptingKey {
	char pad_48[0x20]; // 0x48(0x20)

	void SetValue(struct FString InNewValue); // Function SequencerScripting.MovieSceneScriptingStringKey.SetValue // (Final|Native|Public|BlueprintCallable) // @ game+0x73f3870
	void SetTime(struct FFrameNumber& NewFrameNumber, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingStringKey.SetTime // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x73e3cd0
	struct FString GetValue(); // Function SequencerScripting.MovieSceneScriptingStringKey.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73f3a40
	struct FFrameTime GetTime(enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingStringKey.GetTime // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73e4010
};

// Class SequencerScripting.MovieSceneScriptingStringChannel
// Size: 0x70 (Inherited: 0x40)
struct UMovieSceneScriptingStringChannel : UMovieSceneScriptingChannel {
	char pad_40[0x30]; // 0x40(0x30)

	void SetDefault(struct FString InDefaultValue); // Function SequencerScripting.MovieSceneScriptingStringChannel.SetDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x73f3d90
	void RemoveKey(struct UMovieSceneScriptingKey* Key); // Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey // (Native|Public|BlueprintCallable) // @ game+0x5776dc0
	void RemoveDefault(); // Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x73e89a0
	bool HasDefault(); // Function SequencerScripting.MovieSceneScriptingStringChannel.HasDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73f3c10
	struct TArray<struct UMovieSceneScriptingKey*> GetKeys(); // Function SequencerScripting.MovieSceneScriptingStringChannel.GetKeys // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3a33360
	struct FString GetDefault(); // Function SequencerScripting.MovieSceneScriptingStringChannel.GetDefault // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x73f3cf0
	struct UMovieSceneScriptingStringKey* AddKey(struct FFrameNumber& InTime, struct FString NewValue, float SubFrame, enum class ESequenceTimeUnit TimeUnit); // Function SequencerScripting.MovieSceneScriptingStringChannel.AddKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x73f3fc0
};

// Class SequencerScripting.MovieSceneBindingExtensions
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneBindingExtensions : UBlueprintFunctionLibrary {

	void SetSpawnableBindingID(struct FMovieSceneBindingProxy& InBinding, struct FMovieSceneObjectBindingID& SpawnableBindingID); // Function SequencerScripting.MovieSceneBindingExtensions.SetSpawnableBindingID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x73f4a20
	void SetSortingOrder(struct FMovieSceneBindingProxy& InBinding, int32_t SortingOrder); // Function SequencerScripting.MovieSceneBindingExtensions.SetSortingOrder // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x73f60b0
	void SetParent(struct FMovieSceneBindingProxy& InBinding, struct FMovieSceneBindingProxy& InParentBinding); // Function SequencerScripting.MovieSceneBindingExtensions.SetParent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x73f4ea0
	void SetName(struct FMovieSceneBindingProxy& InBinding, struct FString InName); // Function SequencerScripting.MovieSceneBindingExtensions.SetName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x73f6340
	void SetDisplayName(struct FMovieSceneBindingProxy& InBinding, struct FText& InDisplayName); // Function SequencerScripting.MovieSceneBindingExtensions.SetDisplayName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x73f6860
	void RemoveTrack(struct FMovieSceneBindingProxy& InBinding, struct UMovieSceneTrack* TrackToRemove); // Function SequencerScripting.MovieSceneBindingExtensions.RemoveTrack // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x73f5860
	void Remove(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.Remove // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x73f5770
	void MoveBindingContents(struct FMovieSceneBindingProxy& SourceBindingId, struct FMovieSceneBindingProxy& DestinationBindingId); // Function SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x73f4c40
	bool IsValid(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.IsValid // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x73f6cd0
	struct TArray<struct UMovieSceneTrack*> GetTracks(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetTracks // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x73f5e50
	int32_t GetSortingOrder(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetSortingOrder // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x73f6250
	struct UObject* GetPossessedObjectClass(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x73f5210
	struct FMovieSceneBindingProxy GetParent(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetParent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x73f50b0
	struct UObject* GetObjectTemplate(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x73f5320
	struct FString GetName(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x73f6620
	struct FGuid GetID(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetID // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x73f6bd0
	struct FText GetDisplayName(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetDisplayName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x73f6a40
	struct TArray<struct FMovieSceneBindingProxy> GetChildPossessables(struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x73f5460
	struct TArray<struct UMovieSceneTrack*> FindTracksByType(struct FMovieSceneBindingProxy& InBinding, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByType // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x73f5c40
	struct TArray<struct UMovieSceneTrack*> FindTracksByExactType(struct FMovieSceneBindingProxy& InBinding, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x73f5a30
	struct UMovieSceneTrack* AddTrack(struct FMovieSceneBindingProxy& InBinding, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneBindingExtensions.AddTrack // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x73f55c0
};

// Class SequencerScripting.MovieSceneEventTrackExtensions
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneEventTrackExtensions : UBlueprintFunctionLibrary {

	struct UObject* GetBoundObjectPropertyClass(struct FMovieSceneEvent& EventKey); // Function SequencerScripting.MovieSceneEventTrackExtensions.GetBoundObjectPropertyClass // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x73f7d00
	struct UMovieSceneEventTriggerSection* AddEventTriggerSection(struct UMovieSceneEventTrack* InTrack); // Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73f7e40
	struct UMovieSceneEventRepeaterSection* AddEventRepeaterSection(struct UMovieSceneEventTrack* InTrack); // Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73f7f90
};

// Class SequencerScripting.MovieSceneFolderExtensions
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneFolderExtensions : UBlueprintFunctionLibrary {

	bool SetFolderName(struct UMovieSceneFolder* Folder, struct FName InFolderName); // Function SequencerScripting.MovieSceneFolderExtensions.SetFolderName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73f99a0
	bool SetFolderColor(struct UMovieSceneFolder* Folder, struct FColor InFolderColor); // Function SequencerScripting.MovieSceneFolderExtensions.SetFolderColor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x73f96e0
	bool RemoveChildTrack(struct UMovieSceneFolder* Folder, struct UMovieSceneTrack* InTrack); // Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildTrack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73f88e0
	bool RemoveChildObjectBinding(struct UMovieSceneFolder* Folder, struct FMovieSceneBindingProxy InObjectBinding); // Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73f8300
	bool RemoveChildMasterTrack(struct UMovieSceneFolder* Folder, struct UMovieSceneTrack* InTrack); // Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73f88e0
	bool RemoveChildFolder(struct UMovieSceneFolder* TargetFolder, struct UMovieSceneFolder* FolderToRemove); // Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73f90e0
	struct FName GetFolderName(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetFolderName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x73f9b70
	struct FColor GetFolderColor(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetFolderColor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x73f98a0
	struct TArray<struct UMovieSceneTrack*> GetChildTracks(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetChildTracks // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x73f8f20
	struct TArray<struct FMovieSceneBindingProxy> GetChildObjectBindings(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x73f8760
	struct TArray<struct UMovieSceneTrack*> GetChildMasterTracks(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x73f8d60
	struct TArray<struct UMovieSceneFolder*> GetChildFolders(struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneFolderExtensions.GetChildFolders // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x73f9560
	bool AddChildTrack(struct UMovieSceneFolder* Folder, struct UMovieSceneTrack* InTrack); // Function SequencerScripting.MovieSceneFolderExtensions.AddChildTrack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73f8b70
	bool AddChildObjectBinding(struct UMovieSceneFolder* Folder, struct FMovieSceneBindingProxy InObjectBinding); // Function SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73f8530
	bool AddChildMasterTrack(struct UMovieSceneFolder* Folder, struct UMovieSceneTrack* InTrack); // Function SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73f8b70
	bool AddChildFolder(struct UMovieSceneFolder* TargetFolder, struct UMovieSceneFolder* FolderToAdd); // Function SequencerScripting.MovieSceneFolderExtensions.AddChildFolder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73f9370
};

// Class SequencerScripting.MovieSceneMaterialTrackExtensions
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneMaterialTrackExtensions : UBlueprintFunctionLibrary {

	void SetMaterialIndex(struct UMovieSceneComponentMaterialTrack* Track, int32_t MaterialIndex); // Function SequencerScripting.MovieSceneMaterialTrackExtensions.SetMaterialIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73fa500
	int32_t GetMaterialIndex(struct UMovieSceneComponentMaterialTrack* Track); // Function SequencerScripting.MovieSceneMaterialTrackExtensions.GetMaterialIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73fa3f0
};

// Class SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions
// Size: 0x30 (Inherited: 0x30)
struct UMovieScenePrimitiveMaterialTrackExtensions : UBlueprintFunctionLibrary {

	void SetMaterialIndex(struct UMovieScenePrimitiveMaterialTrack* Track, int32_t MaterialIndex); // Function SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.SetMaterialIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73fa930
	int32_t GetMaterialIndex(struct UMovieScenePrimitiveMaterialTrack* Track); // Function SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions.GetMaterialIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73fa820
};

// Class SequencerScripting.MovieScenePropertyTrackExtensions
// Size: 0x30 (Inherited: 0x30)
struct UMovieScenePropertyTrackExtensions : UBlueprintFunctionLibrary {

	void SetPropertyNameAndPath(struct UMovieScenePropertyTrack* Track, struct FName& InPropertyName, struct FString InPropertyPath); // Function SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x73fb5b0
	void SetObjectPropertyClass(struct UMovieSceneObjectPropertyTrack* Track, struct UObject* PropertyClass); // Function SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73fb020
	void SetByteTrackEnum(struct UMovieSceneByteTrack* Track, struct UEnum* InEnum); // Function SequencerScripting.MovieScenePropertyTrackExtensions.SetByteTrackEnum // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73fad60
	struct FName GetUniqueTrackName(struct UMovieScenePropertyTrack* Track); // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73fb1d0
	struct FString GetPropertyPath(struct UMovieScenePropertyTrack* Track); // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73fb2e0
	struct FName GetPropertyName(struct UMovieScenePropertyTrack* Track); // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73fb490
	struct UObject* GetObjectPropertyClass(struct UMovieSceneObjectPropertyTrack* Track); // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73faf10
	struct UEnum* GetByteTrackEnum(struct UMovieSceneByteTrack* Track); // Function SequencerScripting.MovieScenePropertyTrackExtensions.GetByteTrackEnum // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x73fac50
};

// Class SequencerScripting.MovieSceneSectionExtensions
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneSectionExtensions : UBlueprintFunctionLibrary {

	void SetStartFrameSeconds(struct UMovieSceneSection* Section, float StartTime); // Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73ffbe0
	void SetStartFrameBounded(struct UMovieSceneSection* Section, bool bIsBounded); // Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73ffa00
	void SetStartFrame(struct UMovieSceneSection* Section, int32_t StartFrame); // Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73ffe50
	void SetRangeSeconds(struct UMovieSceneSection* Section, float StartTime, float EndTime); // Function SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7400050
	void SetRange(struct UMovieSceneSection* Section, int32_t StartFrame, int32_t EndFrame); // Function SequencerScripting.MovieSceneSectionExtensions.SetRange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7400480
	void SetEndFrameSeconds(struct UMovieSceneSection* Section, float EndTime); // Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73ff590
	void SetEndFrameBounded(struct UMovieSceneSection* Section, bool bIsBounded); // Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73ff3b0
	void SetEndFrame(struct UMovieSceneSection* Section, int32_t EndFrame); // Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73ff800
	bool HasStartFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.HasStartFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7401960
	bool HasEndFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.HasEndFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x74014f0
	float GetStartFrameSeconds(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7401600
	int32_t GetStartFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x74017e0
	int32_t GetParentSequenceFrame(struct UMovieSceneSubSection* Section, int32_t InFrame, struct UMovieSceneSequence* ParentSequence); // Function SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73fe3c0
	float GetEndFrameSeconds(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7401190
	int32_t GetEndFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7401370
	struct TArray<struct UMovieSceneScriptingChannel*> GetChannelsByType(struct UMovieSceneSection* Section, struct UMovieSceneScriptingChannel* ChannelType); // Function SequencerScripting.MovieSceneSectionExtensions.GetChannelsByType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73fea40
	float GetAutoSizeStartFrameSeconds(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrameSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7400c80
	int32_t GetAutoSizeStartFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeStartFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7400ea0
	bool GetAutoSizeHasStartFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasStartFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7401050
	bool GetAutoSizeHasEndFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeHasEndFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7400b40
	float GetAutoSizeEndFrameSeconds(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrameSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7400770
	int32_t GetAutoSizeEndFrame(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetAutoSizeEndFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7400990
	struct TArray<struct UMovieSceneScriptingChannel*> GetAllChannels(struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneSectionExtensions.GetAllChannels // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x73ff060
};

// Class SequencerScripting.MovieSceneSequenceExtensions
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneSequenceExtensions : UBlueprintFunctionLibrary {

	void SortMarkedFrames(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7403190
	void SetWorkRangeStart(struct UMovieSceneSequence* InSequence, float StartTimeInSeconds); // Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7406720
	void SetWorkRangeEnd(struct UMovieSceneSequence* InSequence, float EndTimeInSeconds); // Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7406450
	void SetViewRangeStart(struct UMovieSceneSequence* InSequence, float StartTimeInSeconds); // Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7406cc0
	void SetViewRangeEnd(struct UMovieSceneSequence* InSequence, float EndTimeInSeconds); // Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x74069f0
	void SetTickResolutionDirectly(struct UMovieSceneSequence* Sequence, struct FFrameRate TickResolution); // Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7408c70
	void SetTickResolution(struct UMovieSceneSequence* Sequence, struct FFrameRate TickResolution); // Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7408e40
	void SetReadOnly(struct UMovieSceneSequence* Sequence, bool bInReadOnly); // Function SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x74028d0
	void SetPlaybackStartSeconds(struct UMovieSceneSequence* Sequence, float StartTime); // Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7407480
	void SetPlaybackStart(struct UMovieSceneSequence* Sequence, int32_t StartFrame); // Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x74077b0
	void SetPlaybackRangeLocked(struct UMovieSceneSequence* Sequence, bool bInLocked); // Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackRangeLocked // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7402630
	void SetPlaybackEndSeconds(struct UMovieSceneSequence* Sequence, float EndTime); // Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7406e70
	void SetPlaybackEnd(struct UMovieSceneSequence* Sequence, int32_t EndFrame); // Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x74071a0
	void SetMarkedFramesLocked(struct UMovieSceneSequence* Sequence, bool bInLocked); // Function SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFramesLocked // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7402390
	void SetMarkedFrame(struct UMovieSceneSequence* Sequence, int32_t InMarkIndex, struct FFrameNumber InFrameNumber); // Function SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x74035b0
	void SetEvaluationType(struct UMovieSceneSequence* InSequence, enum class EMovieSceneEvaluationType InEvaluationType); // Function SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7406160
	void SetDisplayRate(struct UMovieSceneSequence* Sequence, struct FFrameRate DisplayRate); // Function SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7409140
	void SetClockSource(struct UMovieSceneSequence* InSequence, enum class EUpdateClockSource InClockSource); // Function SequencerScripting.MovieSceneSequenceExtensions.SetClockSource // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7405e30
	struct FMovieSceneBindingProxy ResolveBindingID(struct UMovieSceneSequence* RootSequence, struct FMovieSceneObjectBindingID InObjectBindingID); // Function SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7404400
	bool RemoveTrack(struct UMovieSceneSequence* Sequence, struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneSequenceExtensions.RemoveTrack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7409440
	void RemoveRootFolderFromSequence(struct UMovieSceneSequence* Sequence, struct UMovieSceneFolder* Folder); // Function SequencerScripting.MovieSceneSequenceExtensions.RemoveRootFolderFromSequence // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7403d30
	bool RemoveMasterTrack(struct UMovieSceneSequence* Sequence, struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7409440
	struct FSequencerScriptingRange MakeRangeSeconds(struct UMovieSceneSequence* Sequence, float StartTime, float Duration); // Function SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7408580
	struct FSequencerScriptingRange MakeRange(struct UMovieSceneSequence* Sequence, int32_t StartFrame, int32_t Duration); // Function SequencerScripting.MovieSceneSequenceExtensions.MakeRange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7408990
	struct TArray<struct UObject*> LocateBoundObjects(struct UMovieSceneSequence* Sequence, struct FMovieSceneBindingProxy& InBinding, struct UObject* Context); // Function SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7404ab0
	bool IsReadOnly(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x74027d0
	bool IsPlaybackRangeLocked(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.IsPlaybackRangeLocked // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7402530
	float GetWorkRangeStart(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7406600
	float GetWorkRangeEnd(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7406330
	float GetViewRangeStart(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7406ba0
	float GetViewRangeEnd(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x74068d0
	struct TArray<struct UMovieSceneTrack*> GetTracks(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetTracks // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x740a100
	struct FFrameRate GetTickResolution(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7409010
	struct TArray<struct FMovieSceneBindingProxy> GetSpawnables(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x74054d0
	struct TArray<struct UMovieSceneFolder*> GetRootFoldersInSequence(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7404280
	struct TArray<struct FMovieSceneBindingProxy> GetPossessables(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPossessables // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7405350
	struct FMovieSceneObjectBindingID GetPortableBindingID(struct UMovieSceneSequence* RootSequence, struct UMovieSceneSequence* DestinationSequence, struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7404690
	float GetPlaybackStartSeconds(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7407f20
	int32_t GetPlaybackStart(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x74081a0
	struct FSequencerScriptingRange GetPlaybackRange(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x74083b0
	float GetPlaybackEndSeconds(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7407a90
	int32_t GetPlaybackEnd(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7407d10
	struct UMovieScene* GetMovieScene(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x740a280
	struct TArray<struct UMovieSceneTrack*> GetMasterTracks(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7409f70
	struct TArray<struct FMovieSceneMarkedFrame> GetMarkedFrames(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7403a30
	enum class EMovieSceneEvaluationType GetEvaluationType(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7406030
	struct FFrameRate GetDisplayRate(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7409310
	enum class EUpdateClockSource GetClockSource(struct UMovieSceneSequence* InSequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetClockSource // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x7405d00
	struct TArray<struct FMovieSceneBindingProxy> GetBindings(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.GetBindings // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7405650
	struct FMovieSceneObjectBindingID GetBindingID(struct UMovieSceneSequence* Sequence, struct FMovieSceneBindingProxy& InBinding); // Function SequencerScripting.MovieSceneSequenceExtensions.GetBindingID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x74048f0
	struct TArray<struct UMovieSceneTrack*> FindTracksByType(struct UMovieSceneSequence* Sequence, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneSequenceExtensions.FindTracksByType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7409c20
	struct TArray<struct UMovieSceneTrack*> FindTracksByExactType(struct UMovieSceneSequence* Sequence, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneSequenceExtensions.FindTracksByExactType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x74098e0
	int32_t FindNextMarkedFrame(struct UMovieSceneSequence* Sequence, struct FFrameNumber InFrameNumber, bool bForward); // Function SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x7402a70
	struct TArray<struct UMovieSceneTrack*> FindMasterTracksByType(struct UMovieSceneSequence* Sequence, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7409c20
	struct TArray<struct UMovieSceneTrack*> FindMasterTracksByExactType(struct UMovieSceneSequence* Sequence, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x74098e0
	int32_t FindMarkedFrameByLabel(struct UMovieSceneSequence* Sequence, struct FString InLabel); // Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7402f90
	int32_t FindMarkedFrameByFrameNumber(struct UMovieSceneSequence* Sequence, struct FFrameNumber InFrameNumber); // Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x7402da0
	struct FMovieSceneBindingProxy FindBindingByName(struct UMovieSceneSequence* Sequence, struct FString Name); // Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7405a30
	struct FMovieSceneBindingProxy FindBindingById(struct UMovieSceneSequence* Sequence, struct FGuid BindingID); // Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingById // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x74057d0
	void DeleteMarkedFrames(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x74032c0
	void DeleteMarkedFrame(struct UMovieSceneSequence* Sequence, int32_t DeleteIndex); // Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x74033d0
	bool AreMarkedFramesLocked(struct UMovieSceneSequence* Sequence); // Function SequencerScripting.MovieSceneSequenceExtensions.AreMarkedFramesLocked // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7402290
	struct UMovieSceneTrack* AddTrack(struct UMovieSceneSequence* Sequence, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneSequenceExtensions.AddTrack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7409640
	struct FMovieSceneBindingProxy AddSpawnableFromInstance(struct UMovieSceneSequence* Sequence, struct UObject* ObjectToSpawn); // Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7404f50
	struct FMovieSceneBindingProxy AddSpawnableFromClass(struct UMovieSceneSequence* Sequence, struct UObject* ClassToSpawn); // Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7404d40
	struct UMovieSceneFolder* AddRootFolderToSequence(struct UMovieSceneSequence* Sequence, struct FString NewFolderName); // Function SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7404020
	struct FMovieSceneBindingProxy AddPossessable(struct UMovieSceneSequence* Sequence, struct UObject* ObjectToPossess); // Function SequencerScripting.MovieSceneSequenceExtensions.AddPossessable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7405160
	struct UMovieSceneTrack* AddMasterTrack(struct UMovieSceneSequence* Sequence, struct UMovieSceneTrack* TrackType); // Function SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x7409640
	int32_t AddMarkedFrame(struct UMovieSceneSequence* Sequence, struct FMovieSceneMarkedFrame& InMarkedFrame); // Function SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x7403810
};

// Class SequencerScripting.MovieSceneTrackExtensions
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneTrackExtensions : UBlueprintFunctionLibrary {

	void SetTrackRowDisplayName(struct UMovieSceneTrack* Track, struct FText& InName, int32_t RowIndex); // Function SequencerScripting.MovieSceneTrackExtensions.SetTrackRowDisplayName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x740d3b0
	void SetSortingOrder(struct UMovieSceneTrack* Track, int32_t SortingOrder); // Function SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x740ca40
	void SetSectionToKey(struct UMovieSceneTrack* Track, struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x740c4d0
	void SetDisplayName(struct UMovieSceneTrack* Track, struct FText& InName); // Function SequencerScripting.MovieSceneTrackExtensions.SetDisplayName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x740d740
	void SetColorTint(struct UMovieSceneTrack* Track, struct FColor& ColorTint); // Function SequencerScripting.MovieSceneTrackExtensions.SetColorTint // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x740c7b0
	void RemoveSection(struct UMovieSceneTrack* Track, struct UMovieSceneSection* Section); // Function SequencerScripting.MovieSceneTrackExtensions.RemoveSection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x740ccf0
	struct FText GetTrackRowDisplayName(struct UMovieSceneTrack* Track, int32_t RowIndex); // Function SequencerScripting.MovieSceneTrackExtensions.GetTrackRowDisplayName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x740d1c0
	int32_t GetSortingOrder(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x740cbe0
	struct UMovieSceneSection* GetSectionToKey(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x740c690
	struct TArray<struct UMovieSceneSection*> GetSections(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.GetSections // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x740ceb0
	struct FText GetDisplayName(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.GetDisplayName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x740d600
	struct FColor GetColorTint(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.GetColorTint // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x740c940
	struct UMovieSceneSection* AddSection(struct UMovieSceneTrack* Track); // Function SequencerScripting.MovieSceneTrackExtensions.AddSection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x740d080
};

// Class SequencerScripting.MovieSceneFloatVectorTrackExtensions
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneFloatVectorTrackExtensions : UBlueprintFunctionLibrary {

	void SetNumChannelsUsed(struct UMovieSceneFloatVectorTrack* Track, int32_t InNumChannelsUsed); // Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.SetNumChannelsUsed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x740df80
	int32_t GetNumChannelsUsed(struct UMovieSceneFloatVectorTrack* Track); // Function SequencerScripting.MovieSceneFloatVectorTrackExtensions.GetNumChannelsUsed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x740de70
};

// Class SequencerScripting.MovieSceneDoubleVectorTrackExtensions
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneDoubleVectorTrackExtensions : UBlueprintFunctionLibrary {

	void SetNumChannelsUsed(struct UMovieSceneDoubleVectorTrack* Track, int32_t InNumChannelsUsed); // Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.SetNumChannelsUsed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x740df80
	int32_t GetNumChannelsUsed(struct UMovieSceneDoubleVectorTrack* Track); // Function SequencerScripting.MovieSceneDoubleVectorTrackExtensions.GetNumChannelsUsed // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x740de70
};

// Class SequencerScripting.SequencerScriptingRangeExtensions
// Size: 0x30 (Inherited: 0x30)
struct USequencerScriptingRangeExtensions : UBlueprintFunctionLibrary {

	void SetStartSeconds(struct FSequencerScriptingRange& Range, float Start); // Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x740ead0
	void SetStartFrame(struct FSequencerScriptingRange& Range, int32_t Start); // Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x740e500
	void SetEndSeconds(struct FSequencerScriptingRange& Range, float End); // Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x740e8a0
	void SetEndFrame(struct FSequencerScriptingRange& Range, int32_t End); // Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x740e360
	void RemoveStart(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x740f080
	void RemoveEnd(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x740ef80
	bool HasStart(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.HasStart // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x740f280
	bool HasEnd(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.HasEnd // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x740f180
	float GetStartSeconds(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x740ee20
	int32_t GetStartFrame(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x740e7a0
	float GetEndSeconds(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x740ecc0
	int32_t GetEndFrame(struct FSequencerScriptingRange& Range); // Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x740e6a0
};

