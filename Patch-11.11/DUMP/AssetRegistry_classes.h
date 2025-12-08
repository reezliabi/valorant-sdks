// Class AssetRegistry.AssetRegistryHelpers
// Size: 0x30 (Inherited: 0x30)
struct UAssetRegistryHelpers : UObject {

	struct FSoftObjectPath ToSoftObjectPath(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c8920
	struct FARFilter SetFilterTagsAndValues(struct FARFilter& InFilter, struct TArray<struct FTagAndValue>& InTagsAndValues); // Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c7600
	bool IsValid(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.IsValid // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c98b0
	bool IsUAsset(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.IsUAsset // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c96a0
	bool IsRedirector(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.IsRedirector // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c9490
	bool IsAssetLoaded(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c8280
	bool GetTagValue(struct FAssetData& InAssetData, struct FName& InTagName, struct FString& OutTagValue); // Function AssetRegistry.AssetRegistryHelpers.GetTagValue // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c7b80
	struct FString GetPackagePath(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetPackagePath // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c8bb0
	struct FString GetObjectPath(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetObjectPath // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c8e70
	struct FString GetFullName(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetFullName // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c9100
	struct FString GetExportTextName(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetExportTextName // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c7fb0
	struct UObject* GetClass(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetClass // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c8710
	void GetBlueprintAssets(struct FARFilter& InFilter, struct TArray<struct FAssetData>& OutAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetBlueprintAssets // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c7380
	struct TScriptInterface<IAssetRegistry> GetAssetRegistry(); // Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x25c9dd0
	struct UObject* GetAsset(struct FAssetData& InAssetData); // Function AssetRegistry.AssetRegistryHelpers.GetAsset // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c84d0
	struct UObject* FindAssetNativeClass(struct FAssetData& AssetData); // Function AssetRegistry.AssetRegistryHelpers.FindAssetNativeClass // (Final|RequiredAPI|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c7010
	struct FAssetData CreateAssetData(struct UObject* InAsset, bool bAllowBlueprintClass); // Function AssetRegistry.AssetRegistryHelpers.CreateAssetData // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x25c9ae0
};

// Class AssetRegistry.AssetRegistry
// Size: 0x30 (Inherited: 0x30)
struct UAssetRegistry : UInterface {

	void WaitForPackage(struct FString PackageName); // Function AssetRegistry.AssetRegistry.WaitForPackage // (Native|Public|BlueprintCallable) // @ game+0x25e4200
	void WaitForCompletion(); // Function AssetRegistry.AssetRegistry.WaitForCompletion // (Native|Public|BlueprintCallable) // @ game+0x25e4340
	void UseFilterToExcludeAssets(struct TArray<struct FAssetData>& AssetDataList, struct FARFilter& Filter); // Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const) // @ game+0x25e4970
	void SearchAllAssets(bool bSynchronousSearch); // Function AssetRegistry.AssetRegistry.SearchAllAssets // (Native|Public|BlueprintCallable) // @ game+0x25e43f0
	void ScanPathsSynchronous(struct TArray<struct FString>& InPaths, bool bForceRescan, bool bIgnoreDenyListScanFilters); // Function AssetRegistry.AssetRegistry.ScanPathsSynchronous // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x25e46e0
	void ScanModifiedAssetFiles(struct TArray<struct FString>& InFilePaths); // Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x25e3f80
	void ScanFilesSynchronous(struct TArray<struct FString>& InFilePaths, bool bForceRescan); // Function AssetRegistry.AssetRegistry.ScanFilesSynchronous // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x25e44f0
	void RunAssetsThroughFilter(struct TArray<struct FAssetData>& AssetDataList, struct FARFilter& Filter); // Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const) // @ game+0x25e4bf0
	void PrioritizeSearchPath(struct FString PathToPrioritize); // Function AssetRegistry.AssetRegistry.PrioritizeSearchPath // (Native|Public|BlueprintCallable) // @ game+0x25e40c0
	bool K2_GetReferencers(struct FName PackageName, struct FAssetRegistryDependencyOptions& ReferenceOptions, struct TArray<struct FName>& OutReferencers); // Function AssetRegistry.AssetRegistry.K2_GetReferencers // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x25e59a0
	bool K2_GetDependencies(struct FName PackageName, struct FAssetRegistryDependencyOptions& DependencyOptions, struct TArray<struct FName>& OutDependencies); // Function AssetRegistry.AssetRegistry.K2_GetDependencies // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x25e5c50
	struct FAssetData K2_GetAssetByObjectPath(struct FSoftObjectPath& ObjectPath, bool bIncludeOnlyOnDiskAssets, bool bSkipARFilteredAssets); // Function AssetRegistry.AssetRegistry.K2_GetAssetByObjectPath // (RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const) // @ game+0x25e6150
	bool IsSearchAsync(); // Function AssetRegistry.AssetRegistry.IsSearchAsync // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25e4370
	bool IsSearchAllAssets(); // Function AssetRegistry.AssetRegistry.IsSearchAllAssets // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25e43b0
	bool IsLoadingAssets(); // Function AssetRegistry.AssetRegistry.IsLoadingAssets // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x25e3f40
	bool HasAssets(struct FName PackagePath, bool bRecursive); // Function AssetRegistry.AssetRegistry.HasAssets // (Native|Public|BlueprintCallable|Const) // @ game+0x25e77d0
	void GetSubPaths(struct FString InBasePath, struct TArray<struct FString>& OutPathList, bool bInRecurse); // Function AssetRegistry.AssetRegistry.GetSubPaths // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x25e4e70
	void GetDerivedClassNames(struct TArray<struct FTopLevelAssetPath>& ClassNames, struct TSet<struct FTopLevelAssetPath>& ExcludedClassNames, struct TSet<struct FTopLevelAssetPath>& OutDerivedClassNames); // Function AssetRegistry.AssetRegistry.GetDerivedClassNames // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x25e52c0
	bool GetAssetsByPaths(struct TArray<struct FName> PackagePaths, struct TArray<struct FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.GetAssetsByPaths // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x25e6cb0
	bool GetAssetsByPath(struct FName PackagePath, struct TArray<struct FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.GetAssetsByPath // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x25e70b0
	bool GetAssetsByPackageName(struct FName PackageName, struct TArray<struct FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets, bool bSkipARFilteredAssets); // Function AssetRegistry.AssetRegistry.GetAssetsByPackageName // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x25e7440
	bool GetAssetsByClass(struct FTopLevelAssetPath ClassPathName, struct TArray<struct FAssetData>& OutAssetData, bool bSearchSubClasses); // Function AssetRegistry.AssetRegistry.GetAssetsByClass // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x25e69a0
	bool GetAssets(struct FARFilter& Filter, struct TArray<struct FAssetData>& OutAssetData, bool bSkipARFilteredAssets); // Function AssetRegistry.AssetRegistry.GetAssets // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const) // @ game+0x25e6670
	struct FAssetData GetAssetByObjectPath(struct FName ObjectPath, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.GetAssetByObjectPath // (Native|Public|HasDefaults|BlueprintCallable|Const) // @ game+0x25e6450
	bool GetAncestorClassNames(struct FTopLevelAssetPath ClassPathName, struct TArray<struct FTopLevelAssetPath>& OutAncestorClassNames); // Function AssetRegistry.AssetRegistry.GetAncestorClassNames // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x25e5780
	void GetAllCachedPaths(struct TArray<struct FString>& OutPathList); // Function AssetRegistry.AssetRegistry.GetAllCachedPaths // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x25e5180
	bool GetAllAssets(struct TArray<struct FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets); // Function AssetRegistry.AssetRegistry.GetAllAssets // (Native|Public|HasOutParms|BlueprintCallable|Const) // @ game+0x25e5f00
};

// Class AssetRegistry.AssetRegistryImpl
// Size: 0xd80 (Inherited: 0x30)
struct UAssetRegistryImpl : UObject {
	char pad_30[0xd50]; // 0x30(0xd50)
};

