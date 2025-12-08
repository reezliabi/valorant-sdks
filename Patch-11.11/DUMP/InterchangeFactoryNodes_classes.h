// Class InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode
// Size: 0x178 (Inherited: 0x148)
struct UInterchangeAnimationTrackSetFactoryNode : UInterchangeFactoryBaseNode {
	char pad_148[0x30]; // 0x148(0x30)

	bool SetCustomFrameRate(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.SetCustomFrameRate // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x778fd60
	bool RemoveCustomAnimationTrackUid(struct FString AnimationTrackUid); // Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.RemoveCustomAnimationTrackUid // (Final|Native|Public|BlueprintCallable) // @ game+0x773ff00
	struct UObject* GetObjectClass(); // Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.GetObjectClass // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x778fe60
	bool GetCustomFrameRate(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.GetCustomFrameRate // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x778fbb0
	void GetCustomAnimationTrackUids(struct TArray<struct FString>& OutAnimationTrackUids); // Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.GetCustomAnimationTrackUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7740360
	int32_t GetCustomAnimationTrackUidCount(); // Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.GetCustomAnimationTrackUidCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7740490
	void GetCustomAnimationTrackUid(int32_t Index, struct FString& OutAnimationTrackUid); // Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.GetCustomAnimationTrackUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7740180
	bool AddCustomAnimationTrackUid(struct FString AnimationTrackUid); // Function InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode.AddCustomAnimationTrackUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7740040
};

// Class InterchangeFactoryNodes.InterchangeActorFactoryNode
// Size: 0x178 (Inherited: 0x148)
struct UInterchangeActorFactoryNode : UInterchangeFactoryBaseNode {
	char pad_148[0x30]; // 0x148(0x30)

	bool SetCustomMobility(char& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomMobility // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77bbe70
	bool SetCustomGlobalTransform(struct FTransform& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomGlobalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x77bc3a0
	bool SetCustomActorClassName(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeActorFactoryNode.SetCustomActorClassName // (Final|Native|Public|BlueprintCallable) // @ game+0x77bc120
	bool GetCustomMobility(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomMobility // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77bc020
	bool GetCustomGlobalTransform(struct FTransform& AttributeValue); // Function InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomGlobalTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x77bc5b0
	bool GetCustomActorClassName(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangeActorFactoryNode.GetCustomActorClassName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77bc260
};

// Class InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode
// Size: 0x1b8 (Inherited: 0x178)
struct UInterchangePhysicalCameraFactoryNode : UInterchangeActorFactoryNode {
	char pad_178[0x40]; // 0x178(0x40)

	bool SetCustomSensorWidth(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomSensorWidth // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7796160
	bool SetCustomSensorHeight(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomSensorHeight // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7795e00
	bool SetCustomFocusMethod(enum class ECameraFocusMethod& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomFocusMethod // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7795aa0
	bool SetCustomFocalLength(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.SetCustomFocalLength // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77964c0
	bool GetCustomSensorWidth(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomSensorWidth // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7796310
	bool GetCustomSensorHeight(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomSensorHeight // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7795fb0
	bool GetCustomFocusMethod(enum class ECameraFocusMethod& AttributeValue); // Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomFocusMethod // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7795c50
	bool GetCustomFocalLength(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode.GetCustomFocalLength // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7796670
};

// Class InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode
// Size: 0x1d8 (Inherited: 0x178)
struct UInterchangeStandardCameraFactoryNode : UInterchangeActorFactoryNode {
	char pad_178[0x60]; // 0x178(0x60)

	bool SetCustomWidth(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomWidth // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7797be0
	bool SetCustomProjectionMode(enum class ECameraProjectionMode& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomProjectionMode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7797f40
	bool SetCustomNearClipPlane(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomNearClipPlane // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7797880
	bool SetCustomFieldOfView(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomFieldOfView // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7796e60
	bool SetCustomFarClipPlane(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomFarClipPlane // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x7797520
	bool SetCustomAspectRatio(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.SetCustomAspectRatio // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77971c0
	bool GetCustomWidth(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomWidth // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7797d90
	bool GetCustomProjectionMode(enum class ECameraProjectionMode& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomProjectionMode // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77980f0
	bool GetCustomNearClipPlane(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomNearClipPlane // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7797a30
	bool GetCustomFieldOfView(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomFieldOfView // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7797010
	bool GetCustomFarClipPlane(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomFarClipPlane // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77976d0
	bool GetCustomAspectRatio(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode.GetCustomAspectRatio // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7797370
};

// Class InterchangeFactoryNodes.InterchangeBaseLightFactoryNode
// Size: 0x1b8 (Inherited: 0x178)
struct UInterchangeBaseLightFactoryNode : UInterchangeActorFactoryNode {
	char pad_178[0x40]; // 0x178(0x40)

	bool SetCustomUseTemperature(bool AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomUseTemperature // (Final|Native|Public|BlueprintCallable) // @ game+0x7798f20
	bool SetCustomTemperature(float AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomTemperature // (Final|Native|Public|BlueprintCallable) // @ game+0x7799280
	bool SetCustomLightColor(struct FColor& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomLightColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7799920
	bool SetCustomIntensity(float AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.SetCustomIntensity // (Final|Native|Public|BlueprintCallable) // @ game+0x77995d0
	bool GetCustomUseTemperature(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomUseTemperature // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77990d0
	bool GetCustomTemperature(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomTemperature // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7799420
	bool GetCustomLightColor(struct FColor& AttributeValue); // Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomLightColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x7799ac0
	bool GetCustomIntensity(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeBaseLightFactoryNode.GetCustomIntensity // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7799770
};

// Class InterchangeFactoryNodes.InterchangeDirectionalLightFactoryNode
// Size: 0x1b8 (Inherited: 0x1b8)
struct UInterchangeDirectionalLightFactoryNode : UInterchangeBaseLightFactoryNode {
};

// Class InterchangeFactoryNodes.InterchangeLightFactoryNode
// Size: 0x1e8 (Inherited: 0x1b8)
struct UInterchangeLightFactoryNode : UInterchangeBaseLightFactoryNode {
	char pad_1B8[0x30]; // 0x1b8(0x30)

	bool SetCustomIntensityUnits(enum class ELightUnits AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomIntensityUnits // (Final|Native|Public|BlueprintCallable) // @ game+0x779a920
	bool SetCustomIESTexture(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomIESTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x779a350
	bool SetCustomAttenuationRadius(float AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeLightFactoryNode.SetCustomAttenuationRadius // (Final|Native|Public|BlueprintCallable) // @ game+0x779a5d0
	bool GetCustomIntensityUnits(enum class ELightUnits& AttributeValue); // Function InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomIntensityUnits // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x779aab0
	bool GetCustomIESTexture(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomIESTexture // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x779a490
	bool GetCustomAttenuationRadius(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeLightFactoryNode.GetCustomAttenuationRadius // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x779a770
};

// Class InterchangeFactoryNodes.InterchangeRectLightFactoryNode
// Size: 0x208 (Inherited: 0x1e8)
struct UInterchangeRectLightFactoryNode : UInterchangeLightFactoryNode {
	char pad_1E8[0x20]; // 0x1e8(0x20)

	bool SetCustomSourceWidth(float AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeRectLightFactoryNode.SetCustomSourceWidth // (Final|Native|Public|BlueprintCallable) // @ game+0x779b3e0
	bool SetCustomSourceHeight(float AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeRectLightFactoryNode.SetCustomSourceHeight // (Final|Native|Public|BlueprintCallable) // @ game+0x779b090
	bool GetCustomSourceWidth(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeRectLightFactoryNode.GetCustomSourceWidth // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x779b580
	bool GetCustomSourceHeight(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeRectLightFactoryNode.GetCustomSourceHeight // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x779b230
};

// Class InterchangeFactoryNodes.InterchangePointLightFactoryNode
// Size: 0x208 (Inherited: 0x1e8)
struct UInterchangePointLightFactoryNode : UInterchangeLightFactoryNode {
	char pad_1E8[0x20]; // 0x1e8(0x20)

	bool SetCustomUseInverseSquaredFalloff(bool AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangePointLightFactoryNode.SetCustomUseInverseSquaredFalloff // (Final|Native|Public|BlueprintCallable) // @ game+0x779bca0
	bool SetCustomLightFalloffExponent(float AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangePointLightFactoryNode.SetCustomLightFalloffExponent // (Final|Native|Public|BlueprintCallable) // @ game+0x779b950
	bool GetCustomUseInverseSquaredFalloff(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangePointLightFactoryNode.GetCustomUseInverseSquaredFalloff // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x779be50
	bool GetCustomLightFalloffExponent(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangePointLightFactoryNode.GetCustomLightFalloffExponent // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x779baf0
};

// Class InterchangeFactoryNodes.InterchangeSpotLightFactoryNode
// Size: 0x228 (Inherited: 0x208)
struct UInterchangeSpotLightFactoryNode : UInterchangePointLightFactoryNode {
	char pad_208[0x20]; // 0x208(0x20)

	bool SetCustomOuterConeAngle(float AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.SetCustomOuterConeAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x779c350
	bool SetCustomInnerConeAngle(float AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.SetCustomInnerConeAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x779c6a0
	bool GetCustomOuterConeAngle(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.GetCustomOuterConeAngle // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x779c4f0
	bool GetCustomInnerConeAngle(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSpotLightFactoryNode.GetCustomInnerConeAngle // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x779c840
};

// Class InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode
// Size: 0x178 (Inherited: 0x148)
struct UInterchangePhysicsAssetFactoryNode : UInterchangeFactoryBaseNode {
	char pad_148[0x30]; // 0x148(0x30)

	bool SetCustomSkeletalMeshUid(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.SetCustomSkeletalMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x779d3d0
	void InitializePhysicsAssetNode(struct FString UniqueId, struct FString DisplayLabel, struct FString InAssetClass); // Function InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.InitializePhysicsAssetNode // (Final|Native|Public|BlueprintCallable) // @ game+0x779d650
	struct UObject* GetObjectClass(); // Function InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.GetObjectClass // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x778fe60
	bool GetCustomSkeletalMeshUid(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode.GetCustomSkeletalMeshUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x779d510
};

// Class InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode
// Size: 0x168 (Inherited: 0x148)
struct UInterchangeSceneVariantSetsFactoryNode : UInterchangeFactoryBaseNode {
	char pad_148[0x20]; // 0x148(0x20)

	bool RemoveCustomVariantSetUid(struct FString VariantUid); // Function InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.RemoveCustomVariantSetUid // (Final|Native|Public|BlueprintCallable) // @ game+0x779dcc0
	struct UObject* GetObjectClass(); // Function InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetObjectClass // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x778fe60
	void GetCustomVariantSetUids(struct TArray<struct FString>& OutVariantUids); // Function InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetCustomVariantSetUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x779e120
	int32_t GetCustomVariantSetUidCount(); // Function InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetCustomVariantSetUidCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x779e250
	void GetCustomVariantSetUid(int32_t Index, struct FString& OutVariantUid); // Function InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.GetCustomVariantSetUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x779df40
	bool AddCustomVariantSetUid(struct FString VariantUid); // Function InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode.AddCustomVariantSetUid // (Final|Native|Public|BlueprintCallable) // @ game+0x779de00
};

// Class InterchangeFactoryNodes.InterchangeSkeletonFactoryNode
// Size: 0x198 (Inherited: 0x148)
struct UInterchangeSkeletonFactoryNode : UInterchangeFactoryBaseNode {
	char pad_148[0x50]; // 0x148(0x50)

	bool SetCustomUseTimeZeroForBindPose(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.SetCustomUseTimeZeroForBindPose // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77a15b0
	bool SetCustomSkeletalMeshFactoryNodeUid(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.SetCustomSkeletalMeshFactoryNodeUid // (Final|Native|Public|BlueprintCallable) // @ game+0x77a1330
	bool SetCustomRootJointUid(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.SetCustomRootJointUid // (Final|Native|Public|BlueprintCallable) // @ game+0x77a1860
	void InitializeSkeletonNode(struct FString UniqueId, struct FString DisplayLabel, struct FString InAssetClass); // Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.InitializeSkeletonNode // (Final|Native|Public|BlueprintCallable) // @ game+0x77a1ae0
	struct UObject* GetObjectClass(); // Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetObjectClass // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x778fe60
	bool GetCustomUseTimeZeroForBindPose(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetCustomUseTimeZeroForBindPose // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77a16b0
	bool GetCustomSkeletalMeshFactoryNodeUid(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetCustomSkeletalMeshFactoryNodeUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77a1470
	bool GetCustomRootJointUid(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletonFactoryNode.GetCustomRootJointUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77a19a0
};

// Class InterchangeFactoryNodes.InterchangeTextureFactoryNode
// Size: 0x3d8 (Inherited: 0x148)
struct UInterchangeTextureFactoryNode : UInterchangeFactoryBaseNode {
	char pad_148[0x290]; // 0x148(0x290)

	bool SetCustomVirtualTextureStreaming(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomVirtualTextureStreaming // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77ae6f0
	bool SetCustomTranslatedTextureNodeUid(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomTranslatedTextureNodeUid // (Final|Native|Public|BlueprintCallable) // @ game+0x77b4160
	bool SetCustomSRGB(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomSRGB // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77aedb0
	bool SetCustomPreferCompressedSourceData(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomPreferCompressedSourceData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77ac8a0
	bool SetCustomPowerOfTwoMode(char& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomPowerOfTwoMode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77afb20
	bool SetCustomPaddingColor(struct FColor& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomPaddingColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x77af7d0
	bool SetCustomMipLoadOptions(char& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomMipLoadOptions // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77af110
	bool SetCustomMipGenSettings(char& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomMipGenSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77ae030
	bool SetCustomMaxTextureSize(int32_t& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomMaxTextureSize // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77b0ed0
	bool SetCustomLossyCompressionAmount(char& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomLossyCompressionAmount // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77b1230
	bool SetCustomLODGroup(char& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomLODGroup // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77ad970
	bool SetCustomLODBias(int32_t& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomLODBias // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77adcd0
	bool SetCustomFilter(char& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomFilter // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77af470
	bool SetCustomDownscaleOptions(char& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomDownscaleOptions // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77ad360
	bool SetCustomDownscale(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomDownscale // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77ad6c0
	bool SetCustomDeferCompression(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomDeferCompression // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77b1590
	bool SetCustomCompressionSettings(char& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompressionSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77b0810
	bool SetCustomCompressionQuality(char& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompressionQuality // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77b0b70
	bool SetCustomCompressionNoAlpha(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompressionNoAlpha // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77b18f0
	bool SetCustomCompositeTextureMode(char& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompositeTextureMode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77ad000
	bool SetCustomCompositePower(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomCompositePower // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77acca0
	bool SetCustomChromaKeyThreshold(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomChromaKeyThreshold // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77b1fa0
	bool SetCustomChromaKeyColor(struct FColor& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomChromaKeyColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x77b1c50
	bool SetCustombUseLegacyGamma(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombUseLegacyGamma // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77aea50
	bool SetCustombPreserveBorder(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombPreserveBorder // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77ae390
	bool SetCustombFlipGreenChannel(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombFlipGreenChannel // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77afe80
	bool SetCustombDoScaleMipsForAlphaCoverage(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombDoScaleMipsForAlphaCoverage // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77b0130
	bool SetCustombChromaKeyTexture(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustombChromaKeyTexture // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77b2300
	bool SetCustomAlphaCoverageThresholds(struct FVector4& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAlphaCoverageThresholds // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x77b0490
	bool SetCustomAllowNonPowerOfTwo(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAllowNonPowerOfTwo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77acaa0
	bool SetCustomAdjustVibrance(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustVibrance // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77b3740
	bool SetCustomAdjustSaturation(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustSaturation // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77b33e0
	bool SetCustomAdjustRGBCurve(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustRGBCurve // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77b3080
	bool SetCustomAdjustMinAlpha(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustMinAlpha // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77b29c0
	bool SetCustomAdjustMaxAlpha(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustMaxAlpha // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77b2660
	bool SetCustomAdjustHue(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustHue // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77b2d20
	bool SetCustomAdjustBrightnessCurve(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustBrightnessCurve // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77b3aa0
	bool SetCustomAdjustBrightness(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.SetCustomAdjustBrightness // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77b3e00
	void InitializeTextureNode(struct FString UniqueId, struct FString DisplayLabel, struct FString InAssetName); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.InitializeTextureNode // (Final|Native|Public|BlueprintCallable) // @ game+0x77b43e0
	struct UObject* GetObjectClass(); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetObjectClass // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x778fe60
	bool GetCustomVirtualTextureStreaming(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomVirtualTextureStreaming // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77ae8a0
	bool GetCustomTranslatedTextureNodeUid(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomTranslatedTextureNodeUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77b42a0
	bool GetCustomSRGB(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomSRGB // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77aef60
	bool GetCustomPreferCompressedSourceData(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomPreferCompressedSourceData // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77ac9a0
	bool GetCustomPowerOfTwoMode(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomPowerOfTwoMode // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77afcd0
	bool GetCustomPaddingColor(struct FColor& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomPaddingColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x77af970
	bool GetCustomMipLoadOptions(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomMipLoadOptions // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77af2c0
	bool GetCustomMipGenSettings(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomMipGenSettings // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77ae1e0
	bool GetCustomMaxTextureSize(int32_t& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomMaxTextureSize // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77b1080
	bool GetCustomLossyCompressionAmount(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomLossyCompressionAmount // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77b13e0
	bool GetCustomLODGroup(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomLODGroup // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77adb20
	bool GetCustomLODBias(int32_t& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomLODBias // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77ade80
	bool GetCustomFilter(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomFilter // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77af620
	bool GetCustomDownscaleOptions(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomDownscaleOptions // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77ad510
	bool GetCustomDownscale(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomDownscale // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77ad870
	bool GetCustomDeferCompression(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomDeferCompression // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77b1740
	bool GetCustomCompressionSettings(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompressionSettings // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77b09c0
	bool GetCustomCompressionQuality(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompressionQuality // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77b0d20
	bool GetCustomCompressionNoAlpha(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompressionNoAlpha // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77b1aa0
	bool GetCustomCompositeTextureMode(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompositeTextureMode // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77ad1b0
	bool GetCustomCompositePower(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomCompositePower // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77ace50
	bool GetCustomChromaKeyThreshold(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomChromaKeyThreshold // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77b2150
	bool GetCustomChromaKeyColor(struct FColor& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomChromaKeyColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x77b1df0
	bool GetCustombUseLegacyGamma(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombUseLegacyGamma // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77aec00
	bool GetCustombPreserveBorder(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombPreserveBorder // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77ae540
	bool GetCustombFlipGreenChannel(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombFlipGreenChannel // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77b0030
	bool GetCustombDoScaleMipsForAlphaCoverage(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombDoScaleMipsForAlphaCoverage // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77b02e0
	bool GetCustombChromaKeyTexture(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustombChromaKeyTexture // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77b24b0
	bool GetCustomAlphaCoverageThresholds(struct FVector4& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAlphaCoverageThresholds // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x77b0650
	bool GetCustomAllowNonPowerOfTwo(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAllowNonPowerOfTwo // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77acba0
	bool GetCustomAdjustVibrance(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustVibrance // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77b38f0
	bool GetCustomAdjustSaturation(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustSaturation // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77b3590
	bool GetCustomAdjustRGBCurve(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustRGBCurve // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77b3230
	bool GetCustomAdjustMinAlpha(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustMinAlpha // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77b2b70
	bool GetCustomAdjustMaxAlpha(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustMaxAlpha // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77b2810
	bool GetCustomAdjustHue(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustHue // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77b2ed0
	bool GetCustomAdjustBrightnessCurve(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustBrightnessCurve // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77b3c50
	bool GetCustomAdjustBrightness(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureFactoryNode.GetCustomAdjustBrightness // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77b3fb0
};

// Class InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode
// Size: 0x408 (Inherited: 0x3d8)
struct UInterchangeTexture2DArrayFactoryNode : UInterchangeTextureFactoryNode {
	char pad_3D8[0x30]; // 0x3d8(0x30)

	bool SetCustomAddressZ(char AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.SetCustomAddressZ // (Final|Native|Public|BlueprintCallable) // @ game+0x77a8f20
	bool GetCustomAddressZ(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.GetCustomAddressZ // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77a90b0
	bool GetCustomAddressY(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.GetCustomAddressY // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77a9260
	bool GetCustomAddressX(char& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode.GetCustomAddressX // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77a9410
};

// Class InterchangeFactoryNodes.InterchangeTexture2DFactoryNode
// Size: 0x470 (Inherited: 0x3d8)
struct UInterchangeTexture2DFactoryNode : UInterchangeTextureFactoryNode {
	char pad_3D8[0x98]; // 0x3d8(0x98)

	void SetSourceBlocks(struct TMap<int32_t, struct FString>& InSourceBlocks); // Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetSourceBlocks // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77ab620
	void SetSourceBlockByCoordinates(int32_t X, int32_t Y, struct FString InSourceFile); // Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetSourceBlockByCoordinates // (Final|Native|Public|BlueprintCallable) // @ game+0x77aaf50
	void SetSourceBlock(int32_t BlockIndex, struct FString InSourceFile); // Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetSourceBlock // (Final|Native|Public|BlueprintCallable) // @ game+0x77aad70
	bool SetCustomAddressY(enum class TextureAddress AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetCustomAddressY // (Final|Native|Public|BlueprintCallable) // @ game+0x77ab920
	bool SetCustomAddressX(enum class TextureAddress AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.SetCustomAddressX // (Final|Native|Public|BlueprintCallable) // @ game+0x77abc60
	struct TMap<int32_t, struct FString> GetSourceBlocks(); // Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetSourceBlocks // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x77ab820
	bool GetSourceBlockByCoordinates(int32_t X, int32_t Y, struct FString& OutSourceFile); // Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetSourceBlockByCoordinates // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77ab3a0
	bool GetSourceBlock(int32_t BlockIndex, struct FString& OutSourceFile); // Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetSourceBlock // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77ab1c0
	bool GetCustomAddressY(enum class TextureAddress& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetCustomAddressY // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77abab0
	bool GetCustomAddressX(enum class TextureAddress& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTexture2DFactoryNode.GetCustomAddressX // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77abdf0
};

// Class InterchangeFactoryNodes.InterchangeTextureCubeArrayFactoryNode
// Size: 0x3d8 (Inherited: 0x3d8)
struct UInterchangeTextureCubeArrayFactoryNode : UInterchangeTextureFactoryNode {
};

// Class InterchangeFactoryNodes.InterchangeTextureCubeFactoryNode
// Size: 0x3d8 (Inherited: 0x3d8)
struct UInterchangeTextureCubeFactoryNode : UInterchangeTextureFactoryNode {
};

// Class InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode
// Size: 0x490 (Inherited: 0x470)
struct UInterchangeTextureLightProfileFactoryNode : UInterchangeTexture2DFactoryNode {
	char pad_470[0x20]; // 0x470(0x20)

	bool SetCustomTextureMultiplier(float AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.SetCustomTextureMultiplier // (Final|Native|Public|BlueprintCallable) // @ game+0x77bafa0
	bool SetCustomBrightness(float AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.SetCustomBrightness // (Final|Native|Public|BlueprintCallable) // @ game+0x77bb2f0
	bool GetCustomTextureMultiplier(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.GetCustomTextureMultiplier // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77bb140
	bool GetCustomBrightness(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode.GetCustomBrightness // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77bb490
};

// Class InterchangeFactoryNodes.InterchangeVolumeTextureFactoryNode
// Size: 0x3d8 (Inherited: 0x3d8)
struct UInterchangeVolumeTextureFactoryNode : UInterchangeTextureFactoryNode {
};

// Class InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode
// Size: 0x488 (Inherited: 0x148)
struct UInterchangeAnimSequenceFactoryNode : UInterchangeFactoryBaseNode {
	char pad_148[0x340]; // 0x148(0x340)

	bool SetCustomSkeletonSoftObjectPath(struct FSoftObjectPath& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomSkeletonSoftObjectPath // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x77be3e0
	bool SetCustomSkeletonFactoryNodeUid(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomSkeletonFactoryNodeUid // (Final|Native|Public|BlueprintCallable) // @ game+0x77c1600
	bool SetCustomRemoveCurveRedundantKeys(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomRemoveCurveRedundantKeys // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77c0340
	bool SetCustomMaterialDriveParameterOnCustomAttribute(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomMaterialDriveParameterOnCustomAttribute // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77bf810
	bool SetCustomImportBoneTracksSampleRate(double& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracksSampleRate // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77c1200
	bool SetCustomImportBoneTracksRangeStop(double& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracksRangeStop // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77c0e00
	bool SetCustomImportBoneTracksRangeStart(double& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracksRangeStart // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77c1000
	bool SetCustomImportBoneTracks(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportBoneTracks // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77c1400
	bool SetCustomImportAttributeCurves(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomImportAttributeCurves // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77c0b50
	bool SetCustomDoNotImportCurveWithZero(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDoNotImportCurveWithZero // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77c08a0
	bool SetCustomDeleteExistingNonCurveCustomAttributes(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDeleteExistingNonCurveCustomAttributes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77be710
	bool SetCustomDeleteExistingMorphTargetCurves(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDeleteExistingMorphTargetCurves // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77c0090
	bool SetCustomDeleteExistingCustomAttributeCurves(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomDeleteExistingCustomAttributeCurves // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77be9c0
	bool SetCustomAddCurveMetadataToSkeleton(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetCustomAddCurveMetadataToSkeleton // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77c05f0
	void SetAnimationPayloadKeysForSceneNodeUids(struct TMap<struct FString, struct FString>& SceneNodeAnimationPayloadKeyUids, struct TMap<struct FString, char>& SceneNodeAnimationPayloadKeyTypes); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimationPayloadKeysForSceneNodeUids // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77bdff0
	void SetAnimationPayloadKeysForMorphTargetNodeUids(struct TMap<struct FString, struct FString>& MorphTargetAnimationPayloadKeyUids, struct TMap<struct FString, char>& MorphTargetAnimationPayloadKeyTypes); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimationPayloadKeysForMorphTargetNodeUids // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77bdc00
	bool SetAnimatedMaterialCurveSuffixe(struct FString MaterialCurveSuffixe); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimatedMaterialCurveSuffixe // (Final|Native|Public|BlueprintCallable) // @ game+0x77bf380
	bool SetAnimatedAttributeStepCurveName(struct FString AttributeStepCurveName); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimatedAttributeStepCurveName // (Final|Native|Public|BlueprintCallable) // @ game+0x77bedb0
	bool SetAnimatedAttributeCurveName(struct FString AttributeCurveName); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.SetAnimatedAttributeCurveName // (Final|Native|Public|BlueprintCallable) // @ game+0x77bfc00
	bool RemoveAnimatedMaterialCurveSuffixe(struct FString MaterialCurveSuffixe); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.RemoveAnimatedMaterialCurveSuffixe // (Final|Native|Public|BlueprintCallable) // @ game+0x77bf240
	bool RemoveAnimatedAttributeStepCurveName(struct FString AttributeStepCurveName); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.RemoveAnimatedAttributeStepCurveName // (Final|Native|Public|BlueprintCallable) // @ game+0x77bec70
	bool RemoveAnimatedAttributeCurveName(struct FString AttributeCurveName); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.RemoveAnimatedAttributeCurveName // (Final|Native|Public|BlueprintCallable) // @ game+0x77bfac0
	void InitializeAnimSequenceNode(struct FString UniqueId, struct FString DisplayLabel); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.InitializeAnimSequenceNode // (Final|Native|Public|BlueprintCallable) // @ game+0x77c1930
	void GetSceneNodeAnimationPayloadKeys(struct TMap<struct FString, struct FInterchangeAnimationPayLoadKey>& OutSceneNodeAnimationPayloadKeys); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetSceneNodeAnimationPayloadKeys // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77be260
	struct UObject* GetObjectClass(); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetObjectClass // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x778fe60
	void GetMorphTargetNodeAnimationPayloadKeys(struct TMap<struct FString, struct FInterchangeAnimationPayLoadKey>& OutMorphTargetNodeAnimationPayloads); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetMorphTargetNodeAnimationPayloadKeys // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77bde70
	bool GetCustomSkeletonSoftObjectPath(struct FSoftObjectPath& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomSkeletonSoftObjectPath // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x77be520
	bool GetCustomSkeletonFactoryNodeUid(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomSkeletonFactoryNodeUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77c1740
	bool GetCustomRemoveCurveRedundantKeys(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomRemoveCurveRedundantKeys // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77c0440
	bool GetCustomMaterialDriveParameterOnCustomAttribute(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomMaterialDriveParameterOnCustomAttribute // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77bf910
	bool GetCustomImportBoneTracksSampleRate(double& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracksSampleRate // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77c1300
	bool GetCustomImportBoneTracksRangeStop(double& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracksRangeStop // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77c0f00
	bool GetCustomImportBoneTracksRangeStart(double& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracksRangeStart // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77c1100
	bool GetCustomImportBoneTracks(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportBoneTracks // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77c1500
	bool GetCustomImportAttributeCurves(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomImportAttributeCurves // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77c0c50
	bool GetCustomDoNotImportCurveWithZero(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDoNotImportCurveWithZero // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77c09a0
	bool GetCustomDeleteExistingNonCurveCustomAttributes(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDeleteExistingNonCurveCustomAttributes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77be810
	bool GetCustomDeleteExistingMorphTargetCurves(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDeleteExistingMorphTargetCurves // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77c0190
	bool GetCustomDeleteExistingCustomAttributeCurves(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomDeleteExistingCustomAttributeCurves // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77beac0
	bool GetCustomAddCurveMetadataToSkeleton(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetCustomAddCurveMetadataToSkeleton // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77c06f0
	int32_t GetAnimatedMaterialCurveSuffixesCount(); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedMaterialCurveSuffixesCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x77bf7d0
	void GetAnimatedMaterialCurveSuffixes(struct TArray<struct FString>& OutMaterialCurveSuffixes); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedMaterialCurveSuffixes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77bf6a0
	void GetAnimatedMaterialCurveSuffixe(int32_t Index, struct FString& OutMaterialCurveSuffixe); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedMaterialCurveSuffixe // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77bf4c0
	int32_t GetAnimatedAttributeStepCurveNamesCount(); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeStepCurveNamesCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x77bf200
	void GetAnimatedAttributeStepCurveNames(struct TArray<struct FString>& OutAttributeStepCurveNames); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeStepCurveNames // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77bf0d0
	void GetAnimatedAttributeStepCurveName(int32_t Index, struct FString& OutAttributeStepCurveName); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeStepCurveName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77beef0
	int32_t GetAnimatedAttributeCurveNamesCount(); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeCurveNamesCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x77c0050
	void GetAnimatedAttributeCurveNames(struct TArray<struct FString>& OutAttributeCurveNames); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeCurveNames // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77bff20
	void GetAnimatedAttributeCurveName(int32_t Index, struct FString& OutAttributeCurveName); // Function InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode.GetAnimatedAttributeCurveName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77bfd40
};

// Class InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode
// Size: 0x168 (Inherited: 0x148)
struct UInterchangeCommonPipelineDataFactoryNode : UInterchangeFactoryBaseNode {
	char pad_148[0x20]; // 0x148(0x20)

	bool SetCustomGlobalOffsetTransform(struct UInterchangeBaseNodeContainer* NodeContainer, struct FTransform& AttributeValue); // Function InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.SetCustomGlobalOffsetTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x77c6c80
	bool SetBakeMeshes(struct UInterchangeBaseNodeContainer* NodeContainer, bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.SetBakeMeshes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77c69f0
	bool GetCustomGlobalOffsetTransform(struct FTransform& AttributeValue); // Function InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.GetCustomGlobalOffsetTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x77c6e90
	bool GetBakeMeshes(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode.GetBakeMeshes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77c6b80
};

// Class InterchangeFactoryNodes.InterchangeBaseMaterialFactoryNode
// Size: 0x148 (Inherited: 0x148)
struct UInterchangeBaseMaterialFactoryNode : UInterchangeFactoryBaseNode {
};

// Class InterchangeFactoryNodes.InterchangeMaterialFactoryNode
// Size: 0x1b8 (Inherited: 0x148)
struct UInterchangeMaterialFactoryNode : UInterchangeBaseMaterialFactoryNode {
	char pad_148[0x70]; // 0x148(0x70)

	bool SetCustomTwoSided(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomTwoSided // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77cefc0
	bool SetCustomTranslucencyLightingMode(enum class ETranslucencyLightingMode& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomTranslucencyLightingMode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77cf5d0
	bool SetCustomShadingModel(enum class EMaterialShadingModel& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomShadingModel // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77cf880
	bool SetCustomScreenSpaceReflections(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomScreenSpaceReflections // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77ce700
	bool SetCustomRefractionMethod(enum class ERefractionMode& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomRefractionMethod // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77ce9b0
	bool SetCustomOpacityMaskClipValue(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomOpacityMaskClipValue // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77cec60
	bool SetCustomBlendMode(enum class EBlendMode& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.SetCustomBlendMode // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77cf320
	bool GetTransmissionColorConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetTransmissionColorConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77d1190
	bool GetTangentConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetTangentConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77d5410
	bool GetSubsurfaceConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetSubsurfaceConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77d4bc0
	bool GetSpecularConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetSpecularConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77d7da0
	bool GetRoughnessConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetRoughnessConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77d7550
	bool GetRefractionConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetRefractionConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77d32d0
	bool GetOpacityConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetOpacityConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77d4370
	bool GetOcclusionConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetOcclusionConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77d3b20
	struct UObject* GetObjectClass(); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetObjectClass // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x778fe60
	bool GetNormalConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetNormalConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77d5c60
	bool GetMetallicConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetMetallicConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77d85f0
	bool GetFuzzColorConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetFuzzColorConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77d0940
	bool GetEmissiveColorConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetEmissiveColorConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77d64b0
	bool GetCustomTwoSided(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomTwoSided // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77cf170
	bool GetCustomTranslucencyLightingMode(enum class ETranslucencyLightingMode& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomTranslucencyLightingMode // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77cf780
	bool GetCustomShadingModel(enum class EMaterialShadingModel& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomShadingModel // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77cfa30
	bool GetCustomScreenSpaceReflections(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomScreenSpaceReflections // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77ce800
	bool GetCustomRefractionMethod(enum class ERefractionMode& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomRefractionMethod // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77ceb60
	bool GetCustomOpacityMaskClipValue(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomOpacityMaskClipValue // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77cee10
	bool GetCustomBlendMode(enum class EBlendMode& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetCustomBlendMode // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77cf4d0
	bool GetClothConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClothConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77d00f0
	bool GetClearCoatRoughnessConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClearCoatRoughnessConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77d2230
	bool GetClearCoatNormalConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClearCoatNormalConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77d19e0
	bool GetClearCoatConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetClearCoatConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77d2a80
	bool GetBaseColorConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetBaseColorConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77d8e40
	bool GetAnisotropyConnection(struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.GetAnisotropyConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77d6d00
	bool ConnectToTransmissionColor(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToTransmissionColor // (Final|Native|Public|BlueprintCallable) // @ game+0x77d0fc0
	bool ConnectToTangent(struct FString ExpressionNodeUid); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToTangent // (Final|Native|Public|BlueprintCallable) // @ game+0x77d5240
	bool ConnectToSubsurface(struct FString ExpressionNodeUid); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToSubsurface // (Final|Native|Public|BlueprintCallable) // @ game+0x77d49f0
	bool ConnectToSpecular(struct FString ExpressionNodeUid); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToSpecular // (Final|Native|Public|BlueprintCallable) // @ game+0x77d7bd0
	bool ConnectToRoughness(struct FString ExpressionNodeUid); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToRoughness // (Final|Native|Public|BlueprintCallable) // @ game+0x77d7380
	bool ConnectToRefraction(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToRefraction // (Final|Native|Public|BlueprintCallable) // @ game+0x77d3100
	bool ConnectToOpacity(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x77d41a0
	bool ConnectToOcclusion(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToOcclusion // (Final|Native|Public|BlueprintCallable) // @ game+0x77d3950
	bool ConnectToNormal(struct FString ExpressionNodeUid); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToNormal // (Final|Native|Public|BlueprintCallable) // @ game+0x77d5a90
	bool ConnectToMetallic(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToMetallic // (Final|Native|Public|BlueprintCallable) // @ game+0x77d8420
	bool ConnectToFuzzColor(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToFuzzColor // (Final|Native|Public|BlueprintCallable) // @ game+0x77d0770
	bool ConnectToEmissiveColor(struct FString ExpressionNodeUid); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToEmissiveColor // (Final|Native|Public|BlueprintCallable) // @ game+0x77d62e0
	bool ConnectToCloth(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToCloth // (Final|Native|Public|BlueprintCallable) // @ game+0x77cff20
	bool ConnectToClearCoatRoughness(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToClearCoatRoughness // (Final|Native|Public|BlueprintCallable) // @ game+0x77d2060
	bool ConnectToClearCoatNormal(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToClearCoatNormal // (Final|Native|Public|BlueprintCallable) // @ game+0x77d1810
	bool ConnectToClearCoat(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToClearCoat // (Final|Native|Public|BlueprintCallable) // @ game+0x77d28b0
	bool ConnectToBaseColor(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToBaseColor // (Final|Native|Public|BlueprintCallable) // @ game+0x77d8c70
	bool ConnectToAnisotropy(struct FString ExpressionNodeUid); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectToAnisotropy // (Final|Native|Public|BlueprintCallable) // @ game+0x77d6b30
	bool ConnectOutputToTransmissionColor(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToTransmissionColor // (Final|Native|Public|BlueprintCallable) // @ game+0x77d0bd0
	bool ConnectOutputToTangent(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToTangent // (Final|Native|Public|BlueprintCallable) // @ game+0x77d4e50
	bool ConnectOutputToSubsurface(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToSubsurface // (Final|Native|Public|BlueprintCallable) // @ game+0x77d4600
	bool ConnectOutputToSpecular(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToSpecular // (Final|Native|Public|BlueprintCallable) // @ game+0x77d77e0
	bool ConnectOutputToRoughness(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToRoughness // (Final|Native|Public|BlueprintCallable) // @ game+0x77d6f90
	bool ConnectOutputToRefraction(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToRefraction // (Final|Native|Public|BlueprintCallable) // @ game+0x77d2d10
	bool ConnectOutputToOpacity(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToOpacity // (Final|Native|Public|BlueprintCallable) // @ game+0x77d3db0
	bool ConnectOutputToOcclusion(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToOcclusion // (Final|Native|Public|BlueprintCallable) // @ game+0x77d3560
	bool ConnectOutputToNormal(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToNormal // (Final|Native|Public|BlueprintCallable) // @ game+0x77d56a0
	bool ConnectOutputToMetallic(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToMetallic // (Final|Native|Public|BlueprintCallable) // @ game+0x77d8030
	bool ConnectOutputToFuzzColor(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToFuzzColor // (Final|Native|Public|BlueprintCallable) // @ game+0x77d0380
	bool ConnectOutputToEmissiveColor(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToEmissiveColor // (Final|Native|Public|BlueprintCallable) // @ game+0x77d5ef0
	bool ConnectOutputToCloth(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToCloth // (Final|Native|Public|BlueprintCallable) // @ game+0x77cfb30
	bool ConnectOutputToClearCoatRoughness(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToClearCoatRoughness // (Final|Native|Public|BlueprintCallable) // @ game+0x77d1c70
	bool ConnectOutputToClearCoatNormal(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToClearCoatNormal // (Final|Native|Public|BlueprintCallable) // @ game+0x77d1420
	bool ConnectOutputToClearCoat(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToClearCoat // (Final|Native|Public|BlueprintCallable) // @ game+0x77d24c0
	bool ConnectOutputToBaseColor(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToBaseColor // (Final|Native|Public|BlueprintCallable) // @ game+0x77d8880
	bool ConnectOutputToAnisotropy(struct FString ExpressionNodeUid, struct FString OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFactoryNode.ConnectOutputToAnisotropy // (Final|Native|Public|BlueprintCallable) // @ game+0x77d6740
};

// Class InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode
// Size: 0x158 (Inherited: 0x148)
struct UInterchangeMaterialExpressionFactoryNode : UInterchangeFactoryBaseNode {
	char pad_148[0x10]; // 0x148(0x10)

	bool SetCustomExpressionClassName(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode.SetCustomExpressionClassName // (Final|Native|Public|BlueprintCallable) // @ game+0x77da480
	bool GetCustomExpressionClassName(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode.GetCustomExpressionClassName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77da5c0
};

// Class InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode
// Size: 0x168 (Inherited: 0x148)
struct UInterchangeMaterialInstanceFactoryNode : UInterchangeBaseMaterialFactoryNode {
	char pad_148[0x20]; // 0x148(0x20)

	bool SetCustomParent(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.SetCustomParent // (Final|Native|Public|BlueprintCallable) // @ game+0x77da9e0
	bool SetCustomInstanceClassName(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.SetCustomInstanceClassName // (Final|Native|Public|BlueprintCallable) // @ game+0x77dac60
	bool GetCustomParent(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.GetCustomParent // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77dab20
	bool GetCustomInstanceClassName(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode.GetCustomInstanceClassName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77dada0
};

// Class InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode
// Size: 0x168 (Inherited: 0x158)
struct UInterchangeMaterialFunctionCallExpressionFactoryNode : UInterchangeMaterialExpressionFactoryNode {
	char pad_158[0x10]; // 0x158(0x10)

	bool SetCustomMaterialFunctionDependency(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode.SetCustomMaterialFunctionDependency // (Final|Native|Public|BlueprintCallable) // @ game+0x77db110
	bool GetCustomMaterialFunctionDependency(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode.GetCustomMaterialFunctionDependency // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77db250
};

// Class InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode
// Size: 0x148 (Inherited: 0x148)
struct UInterchangeMaterialFunctionFactoryNode : UInterchangeBaseMaterialFactoryNode {

	struct UObject* GetObjectClass(); // Function InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode.GetObjectClass // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x778fe60
	bool GetInputConnection(struct FString InputName, struct FString& ExpressionNodeUid, struct FString& OutputName); // Function InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode.GetInputConnection // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77db5d0
};

// Class InterchangeFactoryNodes.InterchangeMeshActorFactoryNode
// Size: 0x210 (Inherited: 0x178)
struct UInterchangeMeshActorFactoryNode : UInterchangeActorFactoryNode {
	char pad_178[0x98]; // 0x178(0x98)

	bool SetSlotMaterialDependencyUid(struct FString SlotName, struct FString MaterialDependencyUid); // Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.SetSlotMaterialDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x773f8d0
	bool SetCustomGeometricTransform(struct FTransform& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.SetCustomGeometricTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x77ded80
	bool SetCustomAnimationAssetUidToPlay(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.SetCustomAnimationAssetUidToPlay // (Final|Native|Public|BlueprintCallable) // @ game+0x77df1a0
	bool RemoveSlotMaterialDependencyUid(struct FString SlotName); // Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.RemoveSlotMaterialDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x773f790
	bool GetSlotMaterialDependencyUid(struct FString SlotName, struct FString& OutMaterialDependency); // Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetSlotMaterialDependencyUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x773fb20
	void GetSlotMaterialDependencies(struct TMap<struct FString, struct FString>& OutMaterialDependencies); // Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetSlotMaterialDependencies // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x773fd80
	bool GetCustomGeometricTransform(struct FTransform& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetCustomGeometricTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x77deef0
	bool GetCustomAnimationAssetUidToPlay(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshActorFactoryNode.GetCustomAnimationAssetUidToPlay // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77df060
};

// Class InterchangeFactoryNodes.InterchangeMeshFactoryNode
// Size: 0x2b8 (Inherited: 0x148)
struct UInterchangeMeshFactoryNode : UInterchangeFactoryBaseNode {
	char pad_148[0x170]; // 0x148(0x170)

	bool SetSlotMaterialDependencyUid(struct FString SlotName, struct FString MaterialDependencyUid); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetSlotMaterialDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x77e1ec0
	bool SetCustomVertexColorReplace(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomVertexColorReplace // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77e28f0
	bool SetCustomVertexColorOverride(struct FColor& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomVertexColorOverride // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x77e24f0
	bool SetCustomVertexColorIgnore(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomVertexColorIgnore // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77e26f0
	bool SetCustomUseMikkTSpace(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseMikkTSpace // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77e1090
	bool SetCustomUseHighPrecisionTangentBasis(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseHighPrecisionTangentBasis // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77e09d0
	bool SetCustomUseFullPrecisionUVs(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseFullPrecisionUVs // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77e0670
	bool SetCustomUseBackwardsCompatibleF16TruncUVs(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomUseBackwardsCompatibleF16TruncUVs // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77e0310
	bool SetCustomRemoveDegenerates(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomRemoveDegenerates // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77dffb0
	bool SetCustomRecomputeTangents(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomRecomputeTangents // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77e13f0
	bool SetCustomRecomputeNormals(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomRecomputeNormals // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77e1750
	bool SetCustomLODGroup(struct FName& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomLODGroup // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77e1ab0
	bool SetCustomComputeWeightedNormals(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.SetCustomComputeWeightedNormals // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77e0d30
	bool RemoveSlotMaterialDependencyUid(struct FString SlotName); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.RemoveSlotMaterialDependencyUid // (Final|Native|Public|BlueprintCallable) // @ game+0x77e1d60
	bool RemoveLodDataUniqueId(struct FString LodDataUniqueId); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.RemoveLodDataUniqueId // (Final|Native|Public|BlueprintCallable) // @ game+0x77e2af0
	bool GetSlotMaterialDependencyUid(struct FString SlotName, struct FString& OutMaterialDependency); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetSlotMaterialDependencyUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77e2110
	void GetSlotMaterialDependencies(struct TMap<struct FString, struct FString>& OutMaterialDependencies); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetSlotMaterialDependencies // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77e2370
	void GetLodDataUniqueIds(struct TArray<struct FString>& OutLodDataUniqueIds); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetLodDataUniqueIds // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77e2d70
	int32_t GetLodDataCount(); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetLodDataCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x77e2ea0
	bool GetCustomVertexColorReplace(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomVertexColorReplace // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77e29f0
	bool GetCustomVertexColorOverride(struct FColor& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomVertexColorOverride // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x77e25f0
	bool GetCustomVertexColorIgnore(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomVertexColorIgnore // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77e27f0
	bool GetCustomUseMikkTSpace(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseMikkTSpace // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77e1240
	bool GetCustomUseHighPrecisionTangentBasis(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseHighPrecisionTangentBasis // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77e0b80
	bool GetCustomUseFullPrecisionUVs(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseFullPrecisionUVs // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77e0820
	bool GetCustomUseBackwardsCompatibleF16TruncUVs(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomUseBackwardsCompatibleF16TruncUVs // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77e04c0
	bool GetCustomRemoveDegenerates(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomRemoveDegenerates // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77e0160
	bool GetCustomRecomputeTangents(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomRecomputeTangents // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77e15a0
	bool GetCustomRecomputeNormals(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomRecomputeNormals // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77e1900
	bool GetCustomLODGroup(struct FName& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomLODGroup // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77e1c60
	bool GetCustomComputeWeightedNormals(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.GetCustomComputeWeightedNormals // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77e0ee0
	bool AddLodDataUniqueId(struct FString LodDataUniqueId); // Function InterchangeFactoryNodes.InterchangeMeshFactoryNode.AddLodDataUniqueId // (Final|Native|Public|BlueprintCallable) // @ game+0x77e2c30
};

// Class InterchangeFactoryNodes.InterchangeSceneImportAssetFactoryNode
// Size: 0x148 (Inherited: 0x148)
struct UInterchangeSceneImportAssetFactoryNode : UInterchangeFactoryBaseNode {
};

// Class InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode
// Size: 0x380 (Inherited: 0x2b8)
struct UInterchangeSkeletalMeshFactoryNode : UInterchangeMeshFactoryNode {
	char pad_2B8[0xc8]; // 0x2b8(0xc8)

	bool SetCustomUseHighPrecisionSkinWeights(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomUseHighPrecisionSkinWeights // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77e9f80
	bool SetCustomThresholdUV(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomThresholdUV // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77e9560
	bool SetCustomThresholdTangentNormal(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomThresholdTangentNormal // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77e98c0
	bool SetCustomThresholdPosition(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomThresholdPosition // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77e9c20
	bool SetCustomSkeletonSoftObjectPath(struct FSoftObjectPath& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomSkeletonSoftObjectPath // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x77eae30
	bool SetCustomPhysicAssetSoftObjectPath(struct FSoftObjectPath& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomPhysicAssetSoftObjectPath // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x77ea5a0
	bool SetCustomMorphThresholdPosition(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomMorphThresholdPosition // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77e9200
	bool SetCustomImportMorphTarget(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomImportMorphTarget // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77eab80
	bool SetCustomImportContentType(enum class EInterchangeSkeletalMeshContentType& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomImportContentType // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77ea2e0
	bool SetCustomCreatePhysicsAsset(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomCreatePhysicsAsset // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77ea8d0
	bool SetCustomBoneInfluenceLimit(int32_t& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.SetCustomBoneInfluenceLimit // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77e8ea0
	void InitializeSkeletalMeshNode(struct FString UniqueId, struct FString DisplayLabel, struct FString InAssetClass); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.InitializeSkeletalMeshNode // (Final|Native|Public|BlueprintCallable) // @ game+0x77eb160
	struct UObject* GetObjectClass(); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetObjectClass // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x778fe60
	bool GetCustomUseHighPrecisionSkinWeights(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomUseHighPrecisionSkinWeights // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77ea130
	bool GetCustomThresholdUV(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomThresholdUV // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77e9710
	bool GetCustomThresholdTangentNormal(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomThresholdTangentNormal // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77e9a70
	bool GetCustomThresholdPosition(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomThresholdPosition // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77e9dd0
	bool GetCustomSkeletonSoftObjectPath(struct FSoftObjectPath& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomSkeletonSoftObjectPath // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x77eaf70
	bool GetCustomPhysicAssetSoftObjectPath(struct FSoftObjectPath& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomPhysicAssetSoftObjectPath // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x77ea6e0
	bool GetCustomMorphThresholdPosition(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomMorphThresholdPosition // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77e93b0
	bool GetCustomImportMorphTarget(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomImportMorphTarget // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77eac80
	bool GetCustomImportContentType(enum class EInterchangeSkeletalMeshContentType& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomImportContentType // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77ea3e0
	bool GetCustomCreatePhysicsAsset(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomCreatePhysicsAsset // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77ea9d0
	bool GetCustomBoneInfluenceLimit(int32_t& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode.GetCustomBoneInfluenceLimit // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77e9050
};

// Class InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode
// Size: 0x178 (Inherited: 0x148)
struct UInterchangeSkeletalMeshLodDataNode : UInterchangeFactoryBaseNode {
	char pad_148[0x30]; // 0x148(0x30)

	bool SetCustomSkeletonUid(struct FString AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.SetCustomSkeletonUid // (Final|Native|Public|BlueprintCallable) // @ game+0x77ef4f0
	bool RemoveMeshUid(struct FString MeshName); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.RemoveMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x773ff00
	bool RemoveAllMeshes(); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.RemoveAllMeshes // (Final|Native|Public|BlueprintCallable) // @ game+0x77ef4b0
	int32_t GetMeshUidsCount(); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.GetMeshUidsCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7740490
	void GetMeshUids(struct TArray<struct FString>& OutMeshNames); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.GetMeshUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7740360
	bool GetCustomSkeletonUid(struct FString& AttributeValue); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.GetCustomSkeletonUid // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77ef630
	bool AddMeshUid(struct FString MeshName); // Function InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode.AddMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x7740040
};

// Class InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode
// Size: 0x3a0 (Inherited: 0x2b8)
struct UInterchangeStaticMeshFactoryNode : UInterchangeMeshFactoryNode {
	char pad_2B8[0xe8]; // 0x2b8(0xe8)

	bool SetCustomSupportFaceRemap(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomSupportFaceRemap // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77f2100
	bool SetCustomSrcLightmapIndex(int32_t& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomSrcLightmapIndex // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77f1a40
	bool SetCustomMinLightmapResolution(int32_t& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomMinLightmapResolution // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77f1da0
	bool SetCustomMaxLumenMeshCards(int32_t& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomMaxLumenMeshCards // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77f08d0
	bool SetCustomGenerateLightmapUVs(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomGenerateLightmapUVs // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77f27c0
	bool SetCustomGenerateDistanceFieldAsIfTwoSided(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomGenerateDistanceFieldAsIfTwoSided // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77f2460
	bool SetCustomDstLightmapIndex(int32_t& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomDstLightmapIndex // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77f16e0
	bool SetCustomDistanceFieldResolutionScale(float& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomDistanceFieldResolutionScale // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77f1020
	bool SetCustomDistanceFieldReplacementMesh(struct FSoftObjectPath& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomDistanceFieldReplacementMesh // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x77f0c30
	bool SetCustomBuildScale3D(struct FVector& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomBuildScale3D // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x77f1380
	bool SetCustomBuildReversedIndexBuffer(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomBuildReversedIndexBuffer // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77f2b20
	bool SetCustomBuildNanite(bool& AttributeValue, bool bAddApplyDelegate); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.SetCustomBuildNanite // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77f33b0
	bool RemoveSocketUd(struct FString SocketUid); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.RemoveSocketUd // (Final|Native|Public|BlueprintCallable) // @ game+0x77f2e80
	void InitializeStaticMeshNode(struct FString UniqueId, struct FString DisplayLabel, struct FString InAssetClass); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.InitializeStaticMeshNode // (Final|Native|Public|BlueprintCallable) // @ game+0x77f36e0
	void GetSocketUids(struct TArray<struct FString>& OutSocketUids); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetSocketUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77f3240
	int32_t GetSocketUidCount(); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetSocketUidCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x77f3370
	struct UObject* GetObjectClass(); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetObjectClass // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x778fe60
	bool GetCustomSupportFaceRemap(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomSupportFaceRemap // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77f22b0
	bool GetCustomSrcLightmapIndex(int32_t& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomSrcLightmapIndex // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77f1bf0
	bool GetCustomMinLightmapResolution(int32_t& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomMinLightmapResolution // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77f1f50
	bool GetCustomMaxLumenMeshCards(int32_t& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomMaxLumenMeshCards // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77f0a80
	bool GetCustomGenerateLightmapUVs(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomGenerateLightmapUVs // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77f2970
	bool GetCustomGenerateDistanceFieldAsIfTwoSided(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomGenerateDistanceFieldAsIfTwoSided // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77f2610
	bool GetCustomDstLightmapIndex(int32_t& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomDstLightmapIndex // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77f1890
	bool GetCustomDistanceFieldResolutionScale(float& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomDistanceFieldResolutionScale // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77f11d0
	bool GetCustomDistanceFieldReplacementMesh(struct FSoftObjectPath& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomDistanceFieldReplacementMesh // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x77f0e30
	bool GetCustomBuildScale3D(struct FVector& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomBuildScale3D // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x77f1530
	bool GetCustomBuildReversedIndexBuffer(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomBuildReversedIndexBuffer // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77f2cd0
	bool GetCustomBuildNanite(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.GetCustomBuildNanite // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77f3530
	bool AddSocketUids(struct TArray<struct FString>& InSocketUids); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.AddSocketUids // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x77f2fc0
	bool AddSocketUid(struct FString SocketUid); // Function InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode.AddSocketUid // (Final|Native|Public|BlueprintCallable) // @ game+0x77f3100
};

// Class InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode
// Size: 0x208 (Inherited: 0x148)
struct UInterchangeStaticMeshLodDataNode : UInterchangeFactoryBaseNode {
	char pad_148[0xc0]; // 0x148(0xc0)

	bool SetOneConvexHullPerUCX(bool AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.SetOneConvexHullPerUCX // (Final|Native|Public|BlueprintCallable) // @ game+0x77f8590
	bool SetImportCollision(bool AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.SetImportCollision // (Final|Native|Public|BlueprintCallable) // @ game+0x77f8390
	bool RemoveSphereCollisionMeshUid(struct FString MeshName); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveSphereCollisionMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x77f8c00
	bool RemoveMeshUid(struct FString MeshName); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x779dcc0
	bool RemoveConvexCollisionMeshUid(struct FString MeshName); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveConvexCollisionMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x77f87d0
	bool RemoveCapsuleCollisionMeshUid(struct FString MeshName); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveCapsuleCollisionMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x77f9030
	bool RemoveBoxCollisionMeshUid(struct FString MeshName); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveBoxCollisionMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x77f9460
	bool RemoveAllSphereCollisionMeshes(); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllSphereCollisionMeshes // (Final|Native|Public|BlueprintCallable) // @ game+0x77f8bc0
	bool RemoveAllMeshes(); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllMeshes // (Final|Native|Public|BlueprintCallable) // @ game+0x77f9850
	bool RemoveAllConvexCollisionMeshes(); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllConvexCollisionMeshes // (Final|Native|Public|BlueprintCallable) // @ game+0x77f8790
	bool RemoveAllCapsuleCollisionMeshes(); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllCapsuleCollisionMeshes // (Final|Native|Public|BlueprintCallable) // @ game+0x77f8ff0
	bool RemoveAllBoxCollisionMeshes(); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.RemoveAllBoxCollisionMeshes // (Final|Native|Public|BlueprintCallable) // @ game+0x77f9420
	int32_t GetSphereCollisionMeshUidsCount(); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetSphereCollisionMeshUidsCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x77f8fb0
	void GetSphereCollisionMeshUids(struct TArray<struct FString>& OutMeshNames); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetSphereCollisionMeshUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77f8e80
	bool GetOneConvexHullPerUCX(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetOneConvexHullPerUCX // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77f8690
	int32_t GetMeshUidsCount(); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetMeshUidsCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x779e250
	void GetMeshUids(struct TArray<struct FString>& OutMeshNames); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetMeshUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x779e120
	bool GetImportCollision(bool& AttributeValue); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetImportCollision // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77f8490
	int32_t GetConvexCollisionMeshUidsCount(); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetConvexCollisionMeshUidsCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x77f8b80
	void GetConvexCollisionMeshUids(struct TArray<struct FString>& OutMeshNames); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetConvexCollisionMeshUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77f8a50
	int32_t GetCapsuleCollisionMeshUidsCount(); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetCapsuleCollisionMeshUidsCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x77f93e0
	void GetCapsuleCollisionMeshUids(struct TArray<struct FString>& OutMeshNames); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetCapsuleCollisionMeshUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77f92b0
	int32_t GetBoxCollisionMeshUidsCount(); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetBoxCollisionMeshUidsCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x77f9810
	void GetBoxCollisionMeshUids(struct TArray<struct FString>& OutMeshNames); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.GetBoxCollisionMeshUids // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x77f96e0
	bool AddSphereCollisionMeshUid(struct FString MeshName); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddSphereCollisionMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x77f8d40
	bool AddMeshUid(struct FString MeshName); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x779de00
	bool AddConvexCollisionMeshUid(struct FString MeshName); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddConvexCollisionMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x77f8910
	bool AddCapsuleCollisionMeshUid(struct FString MeshName); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddCapsuleCollisionMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x77f9170
	bool AddBoxCollisionMeshUid(struct FString MeshName); // Function InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode.AddBoxCollisionMeshUid // (Final|Native|Public|BlueprintCallable) // @ game+0x77f95a0
};

