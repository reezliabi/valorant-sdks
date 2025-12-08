// BlueprintGeneratedClass Comp_SkillTest_Base.Comp_SkillTest_Base_C
// Size: 0x270 (Inherited: 0xd8)
struct UComp_SkillTest_Base_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct FName PromptActorTag; // 0xe0(0x0c)
	char pad_EC[0x4]; // 0xec(0x04)
	struct AActor_SkillTest_Prompt_C* PromptActor; // 0xf0(0x08)
	struct FTimerHandle ChallengeTimerHandle; // 0xf8(0x08)
	int32_t CountdownRemaining; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	double CountdownTickRate; // 0x108(0x08)
	struct FMulticastInlineDelegate OnSkillTestEnded; // 0x110(0x10)
	struct FText SkillTestTitle; // 0x120(0x18)
	struct FText SkillTestDescription; // 0x138(0x18)
	struct FName BarrierTag; // 0x150(0x0c)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct ASpawnBarrierDeprecated_C* BarrierActor; // 0x160(0x08)
	struct TMap<enum class Enum_SkillTest_StatType, int32_t> StatTotals; // 0x168(0x50)
	struct TMap<enum class Enum_SkillTest_StatType, int32_t> StatCounts; // 0x1b8(0x50)
	struct TArray<enum class Enum_SkillTest_StatType> AverageStatKeys; // 0x208(0x10)
	double TestStartTime; // 0x218(0x08)
	bool ShouldRecordDuration; // 0x220(0x01)
	char pad_221[0x3]; // 0x221(0x03)
	int32_t TotalShotsFired; // 0x224(0x04)
	struct FString SpawnTargetName; // 0x228(0x10)
	struct FString SkillTestStatKey; // 0x238(0x10)
	struct FText SkillTestIndexString; // 0x248(0x18)
	bool Initialized; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
	struct UComp_SkillTest_StatTracker_C* StatTrackerComponent; // 0x268(0x08)

	void GetAverageValueForStat(enum class Enum_SkillTest_StatType StatType, int32_t& Value); // Function Comp_SkillTest_Base.Comp_SkillTest_Base_C.GetAverageValueForStat // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void InitializeSkillTest(struct FText SkillTestIndexString, struct UComp_SkillTest_StatTracker_C* StatTrackerComponent, struct FString& PlayerSpawnPointString); // Function Comp_SkillTest_Base.Comp_SkillTest_Base_C.InitializeSkillTest // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReportFinishedStats(); // Function Comp_SkillTest_Base.Comp_SkillTest_Base_C.ReportFinishedStats // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateColorForTag(struct FName Tag, struct FLinearColor Color); // Function Comp_SkillTest_Base.Comp_SkillTest_Base_C.UpdateColorForTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SpawnBarrier(); // Function Comp_SkillTest_Base.Comp_SkillTest_Base_C.SpawnBarrier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SpawnTestPrompt(struct FText SkillTestIndexString); // Function Comp_SkillTest_Base.Comp_SkillTest_Base_C.SpawnTestPrompt // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void UpdateNumberForTag(struct FName Tag, int32_t Value, int32_t NumDigits); // Function Comp_SkillTest_Base.Comp_SkillTest_Base_C.UpdateNumberForTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Start Test(); // Function Comp_SkillTest_Base.Comp_SkillTest_Base_C.Event Start Test // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveBeginPlay(); // Function Comp_SkillTest_Base.Comp_SkillTest_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Event Countdown(); // Function Comp_SkillTest_Base.Comp_SkillTest_Base_C.Event Countdown // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Multicast Countdown Ping(); // Function Comp_SkillTest_Base.Comp_SkillTest_Base_C.Multicast Countdown Ping // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Multicast Countdown Finish(); // Function Comp_SkillTest_Base.Comp_SkillTest_Base_C.Multicast Countdown Finish // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Start Countdown(double CountdownTickRate); // Function Comp_SkillTest_Base.Comp_SkillTest_Base_C.Event Start Countdown // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Countdown Finished(); // Function Comp_SkillTest_Base.Comp_SkillTest_Base_C.Event Countdown Finished // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Finish Test(); // Function Comp_SkillTest_Base.Comp_SkillTest_Base_C.Event Finish Test // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Track Skill Test Stat(struct FString BotSubKey, enum class Enum_SkillTest_StatType StatType, int32_t Value); // Function Comp_SkillTest_Base.Comp_SkillTest_Base_C.Event Track Skill Test Stat // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Flush Average Stats(); // Function Comp_SkillTest_Base.Comp_SkillTest_Base_C.Event Flush Average Stats // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Event Initialize Accuracy Tracking(); // Function Comp_SkillTest_Base.Comp_SkillTest_Base_C.Event Initialize Accuracy Tracking // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnAuthUsedEquippable_Event_1(struct AAresEquippable* Equippable); // Function Comp_SkillTest_Base.Comp_SkillTest_Base_C.OnAuthUsedEquippable_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Comp_SkillTest_Base.Comp_SkillTest_Base_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_Comp_SkillTest_Base(int32_t EntryPoint); // Function Comp_SkillTest_Base.Comp_SkillTest_Base_C.ExecuteUbergraph_Comp_SkillTest_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x19be2f0
	void OnSkillTestEnded__DelegateSignature(); // Function Comp_SkillTest_Base.Comp_SkillTest_Base_C.OnSkillTestEnded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

