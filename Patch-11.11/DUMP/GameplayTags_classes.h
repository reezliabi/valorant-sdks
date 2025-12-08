// Class GameplayTags.BlueprintGameplayTagLibrary
// Size: 0x30 (Inherited: 0x30)
struct UBlueprintGameplayTagLibrary : UBlueprintFunctionLibrary {

	bool RemoveGameplayTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag); // Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x39d67c0
	bool NotEqual_TagTag(struct FGameplayTag A, struct FString B); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x39d4670
	bool NotEqual_TagContainerTagContainer(struct FGameplayTagContainer A, struct FString B); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x39d42d0
	bool NotEqual_GameplayTagContainer(struct FGameplayTagContainer& A, struct FGameplayTagContainer& B); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x39d5fc0
	bool NotEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x39d8540
	bool MatchesTag(struct FGameplayTag TagOne, struct FGameplayTag TagTwo, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x39d8b80
	bool MatchesAnyTags(struct FGameplayTag TagOne, struct FGameplayTagContainer& OtherContainer, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x39d8880
	struct FGameplayTagContainer MakeLiteralGameplayTagContainer(struct FGameplayTagContainer Value); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x39d5ca0
	struct FGameplayTag MakeLiteralGameplayTag(struct FGameplayTag Value); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x39d8240
	struct FGameplayTagQuery MakeGameplayTagQuery_MatchNoTags(struct FGameplayTagContainer& InTags); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery_MatchNoTags // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x39d4cc0
	struct FGameplayTagQuery MakeGameplayTagQuery_MatchAnyTags(struct FGameplayTagContainer& InTags); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery_MatchAnyTags // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x39d50c0
	struct FGameplayTagQuery MakeGameplayTagQuery_MatchAllTags(struct FGameplayTagContainer& InTags); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery_MatchAllTags // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x39d4f30
	struct FGameplayTagQuery MakeGameplayTagQuery(struct FGameplayTagQuery TagQuery); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x39d5250
	struct FGameplayTagContainer MakeGameplayTagContainerFromTag(struct FGameplayTag SingleTag); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x39d58e0
	struct FGameplayTagContainer MakeGameplayTagContainerFromArray(struct TArray<struct FGameplayTag>& GameplayTags); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x39d5a80
	bool IsTagQueryEmpty(struct FGameplayTagQuery& TagQuery); // Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x39d73e0
	bool IsGameplayTagValid(struct FGameplayTag GameplayTag); // Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x39d8440
	bool HasTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.HasTag // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x39d7d60
	bool HasAnyTags(struct FGameplayTagContainer& TagContainer, struct FGameplayTagContainer& OtherContainer, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x39d7910
	bool HasAllTags(struct FGameplayTagContainer& TagContainer, struct FGameplayTagContainer& OtherContainer, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x39d75e0
	bool HasAllMatchingGameplayTags(struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, struct FGameplayTagContainer& OtherContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x39d4a70
	struct FName GetTagName(struct FGameplayTag& GameplayTag); // Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x39d8340
	int32_t GetNumGameplayTagsInContainer(struct FGameplayTagContainer& TagContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x39d80c0
	struct FString GetDebugStringFromGameplayTagContainer(struct FGameplayTagContainer& TagContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x39d40f0
	struct FString GetDebugStringFromGameplayTag(struct FGameplayTag GameplayTag); // Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x39d3f70
	void GetAllActorsOfClassMatchingTagQuery(struct UObject* WorldContextObject, struct AActor* ActorClass, struct FGameplayTagQuery& GameplayTagQuery, struct TArray<struct AActor*>& OutActors); // Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x39d6ca0
	bool EqualEqual_GameplayTagContainer(struct FGameplayTagContainer& A, struct FGameplayTagContainer& B); // Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x39d6280
	bool EqualEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B); // Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x39d86e0
	bool DoesTagAssetInterfaceHaveTag(struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, struct FGameplayTag Tag); // Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x39d48a0
	bool DoesContainerMatchTagQuery(struct FGameplayTagContainer& TagContainer, struct FGameplayTagQuery& TagQuery); // Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x39d7080
	void BreakGameplayTagContainer(struct FGameplayTagContainer& GameplayTagContainer, struct TArray<struct FGameplayTag>& GameplayTags); // Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x39d5680
	void AppendGameplayTagContainers(struct FGameplayTagContainer& InOutTagContainer, struct FGameplayTagContainer& InTagContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x39d6530
	void AddGameplayTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag); // Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x39d6a70
};

// Class GameplayTags.GameplayTagAssetInterface
// Size: 0x30 (Inherited: 0x30)
struct UGameplayTagAssetInterface : UInterface {

	bool HasMatchingGameplayTag(struct FGameplayTag TagToCheck); // Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag // (RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x39db5d0
	bool HasAnyMatchingGameplayTags(struct FGameplayTagContainer& TagContainer); // Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x39db2d0
	bool HasAllMatchingGameplayTags(struct FGameplayTagContainer& TagContainer); // Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x39db450
	void GetOwnedGameplayTags(struct FGameplayTagContainer& TagContainer); // Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x39db6f0
};

// Class GameplayTags.EditableGameplayTagQuery
// Size: 0xa0 (Inherited: 0x30)
struct UEditableGameplayTagQuery : UObject {
	struct FString UserDescription; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
	struct UEditableGameplayTagQueryExpression* RootExpression; // 0x50(0x08)
	struct FGameplayTagQuery TagQueryExportText_Helper; // 0x58(0x48)
};

// Class GameplayTags.EditableGameplayTagQueryExpression
// Size: 0x30 (Inherited: 0x30)
struct UEditableGameplayTagQueryExpression : UObject {
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// Size: 0x50 (Inherited: 0x30)
struct UEditableGameplayTagQueryExpression_AnyTagsMatch : UEditableGameplayTagQueryExpression {
	struct FGameplayTagContainer Tags; // 0x30(0x20)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// Size: 0x50 (Inherited: 0x30)
struct UEditableGameplayTagQueryExpression_AllTagsMatch : UEditableGameplayTagQueryExpression {
	struct FGameplayTagContainer Tags; // 0x30(0x20)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// Size: 0x50 (Inherited: 0x30)
struct UEditableGameplayTagQueryExpression_NoTagsMatch : UEditableGameplayTagQueryExpression {
	struct FGameplayTagContainer Tags; // 0x30(0x20)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// Size: 0x40 (Inherited: 0x30)
struct UEditableGameplayTagQueryExpression_AnyExprMatch : UEditableGameplayTagQueryExpression {
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // 0x30(0x10)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// Size: 0x40 (Inherited: 0x30)
struct UEditableGameplayTagQueryExpression_AllExprMatch : UEditableGameplayTagQueryExpression {
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // 0x30(0x10)
};

// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// Size: 0x40 (Inherited: 0x30)
struct UEditableGameplayTagQueryExpression_NoExprMatch : UEditableGameplayTagQueryExpression {
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions; // 0x30(0x10)
};

// Class GameplayTags.GameplayTagsManager
// Size: 0x2a0 (Inherited: 0x30)
struct UGameplayTagsManager : UObject {
	char pad_30[0x160]; // 0x30(0x160)
	struct TMap<struct FName, struct FGameplayTagSource> TagSources; // 0x190(0x50)
	char pad_1E0[0xb0]; // 0x1e0(0xb0)
	struct TArray<struct UDataTable*> GameplayTagTables; // 0x290(0x10)
};

// Class GameplayTags.GameplayTagsList
// Size: 0x50 (Inherited: 0x30)
struct UGameplayTagsList : UObject {
	struct FString ConfigFileName; // 0x30(0x10)
	struct TArray<struct FGameplayTagTableRow> GameplayTagList; // 0x40(0x10)
};

// Class GameplayTags.RestrictedGameplayTagsList
// Size: 0x50 (Inherited: 0x30)
struct URestrictedGameplayTagsList : UObject {
	struct FString ConfigFileName; // 0x30(0x10)
	struct TArray<struct FRestrictedGameplayTagTableRow> RestrictedGameplayTagList; // 0x40(0x10)
};

// Class GameplayTags.GameplayTagsSettings
// Size: 0xd0 (Inherited: 0x50)
struct UGameplayTagsSettings : UGameplayTagsList {
	bool ImportTagsFromConfig; // 0x50(0x01)
	bool WarnOnInvalidTags; // 0x51(0x01)
	bool ClearInvalidTags; // 0x52(0x01)
	bool AllowEditorTagUnloading; // 0x53(0x01)
	bool AllowGameTagUnloading; // 0x54(0x01)
	bool FastReplication; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	struct FString InvalidTagCharacters; // 0x58(0x10)
	struct TArray<struct FGameplayTagCategoryRemap> CategoryRemapping; // 0x68(0x10)
	struct TArray<struct FSoftObjectPath> GameplayTagTableList; // 0x78(0x10)
	struct TArray<struct FSoftObjectPath> DevOnlyGameplayTagTableList; // 0x88(0x10)
	struct TArray<struct FGameplayTagRedirect> GameplayTagRedirects; // 0x98(0x10)
	struct TArray<struct FName> CommonlyReplicatedTags; // 0xa8(0x10)
	int32_t NumBitsForContainerSize; // 0xb8(0x04)
	int32_t NetIndexFirstBitSegment; // 0xbc(0x04)
	struct TArray<struct FRestrictedConfigInfo> RestrictedConfigFiles; // 0xc0(0x10)
};

// Class GameplayTags.GameplayTagsDeveloperSettings
// Size: 0x68 (Inherited: 0x48)
struct UGameplayTagsDeveloperSettings : UDeveloperSettings {
	struct FString DeveloperConfigName; // 0x48(0x10)
	struct FName FavoriteTagSource; // 0x58(0x0c)
	char pad_64[0x4]; // 0x64(0x04)
};

