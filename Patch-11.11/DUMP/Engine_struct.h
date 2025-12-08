// Enum Engine.ETextGender
enum class ETextGender : uint8 {
	Masculine = 0,
	Feminine = 1,
	Neuter = 2,
	ETextGender_MAX = 3
};

// Enum Engine.EFormatArgumentType
enum class EFormatArgumentType : uint8 {
	Int = 0,
	UInt = 1,
	Float = 2,
	Double = 3,
	Text = 4,
	Gender = 5,
	EFormatArgumentType_MAX = 6
};

// Enum Engine.ENetRole
enum class ENetRole : uint8 {
	ROLE_None = 0,
	ROLE_SimulatedProxy = 1,
	ROLE_AutonomousProxy = 2,
	ROLE_Authority = 3,
	ROLE_MAX = 4
};

// Enum Engine.EAnimDataModelNotifyType
enum class EAnimDataModelNotifyType : uint8 {
	BracketOpened = 0,
	BracketClosed = 1,
	TrackAdded = 2,
	TrackChanged = 3,
	TrackRemoved = 4,
	SequenceLengthChanged = 5,
	FrameRateChanged = 6,
	CurveAdded = 7,
	CurveChanged = 8,
	CurveRemoved = 9,
	CurveFlagsChanged = 10,
	CurveRenamed = 11,
	CurveScaled = 12,
	CurveColorChanged = 13,
	AttributeAdded = 14,
	AttributeRemoved = 15,
	AttributeChanged = 16,
	Populated = 17,
	Reset = 18,
	Invalid = 19,
	EAnimDataModelNotifyType_MAX = 20
};

// Enum Engine.EMovementMode
enum class EMovementMode : uint8 {
	MOVE_None = 0,
	MOVE_Walking = 1,
	MOVE_NavWalking = 2,
	MOVE_Falling = 3,
	MOVE_Swimming = 4,
	MOVE_Flying = 5,
	MOVE_Custom = 6,
	MOVE_MAX = 7
};

// Enum Engine.EAudioComponentPlayState
enum class EAudioComponentPlayState : uint8 {
	Playing = 0,
	Stopped = 1,
	Paused = 2,
	FadingIn = 3,
	FadingOut = 4,
	Count = 5,
	EAudioComponentPlayState_MAX = 6
};

// Enum Engine.EDataLayerRuntimeState
enum class EDataLayerRuntimeState : uint8 {
	Unloaded = 0,
	Loaded = 1,
	Activated = 2,
	EDataLayerRuntimeState_MAX = 3
};

// Enum Engine.EQuartzCommandDelegateSubType
enum class EQuartzCommandDelegateSubType : uint8 {
	CommandOnFailedToQueue = 0,
	CommandOnQueued = 1,
	CommandOnCanceled = 2,
	CommandOnAboutToStart = 3,
	CommandOnStarted = 4,
	Count = 5,
	EQuartzCommandDelegateSubType_MAX = 6
};

// Enum Engine.EQuartzCommandQuantization
enum class EQuartzCommandQuantization : uint8 {
	Bar = 0,
	Beat = 1,
	ThirtySecondNote = 2,
	SixteenthNote = 3,
	EighthNote = 4,
	QuarterNote = 5,
	HalfNote = 6,
	WholeNote = 7,
	DottedSixteenthNote = 8,
	DottedEighthNote = 9,
	DottedQuarterNote = 10,
	DottedHalfNote = 11,
	DottedWholeNote = 12,
	SixteenthNoteTriplet = 13,
	EighthNoteTriplet = 14,
	QuarterNoteTriplet = 15,
	HalfNoteTriplet = 16,
	Tick = 17,
	Count = 18,
	None = 19,
	EQuartzCommandQuantization_MAX = 20
};

// Enum Engine.EPlatformInterfaceDataType
enum class EPlatformInterfaceDataType : uint8 {
	PIDT_None = 0,
	PIDT_Int = 1,
	PIDT_Float = 2,
	PIDT_String = 3,
	PIDT_Object = 4,
	PIDT_Custom = 5,
	PIDT_MAX = 6
};

// Enum Engine.EEndPlayReason
enum class EEndPlayReason : uint8 {
	Destroyed = 0,
	LevelTransition = 1,
	EndPlayInEditor = 2,
	RemovedFromWorld = 3,
	Quit = 4,
	EEndPlayReason_MAX = 5
};

// Enum Engine.ETickingGroup
enum class ETickingGroup : uint8 {
	TG_FirstActorTick = 0,
	TG_PrePhysics = 1,
	TG_StartPhysics = 2,
	TG_DuringPhysics = 3,
	TG_EndPhysics = 4,
	TG_PostPhysics = 5,
	TG_PostUpdateWork = 6,
	TG_LastDemotable = 7,
	TG_NewlySpawned = 8,
	TG_MAX = 9
};

// Enum Engine.EComponentCreationMethod
enum class EComponentCreationMethod : uint8 {
	Native = 0,
	SimpleConstructionScript = 1,
	UserConstructionScript = 2,
	Instance = 3,
	EComponentCreationMethod_MAX = 4
};

// Enum Engine.ETemperatureSeverityType
enum class ETemperatureSeverityType : uint8 {
	Unknown = 0,
	Good = 1,
	Bad = 2,
	Serious = 3,
	Critical = 4,
	NumSeverities = 5,
	ETemperatureSeverityType_MAX = 6
};

// Enum Engine.EPlaneConstraintAxisSetting
enum class EPlaneConstraintAxisSetting : uint8 {
	Custom = 0,
	X = 1,
	Y = 2,
	Z = 3,
	UseGlobalPhysicsSetting = 4,
	EPlaneConstraintAxisSetting_MAX = 5
};

// Enum Engine.EInterpToBehaviourType
enum class EInterpToBehaviourType : uint8 {
	OneShot = 0,
	OneShot_Reverse = 1,
	Loop_Reset = 2,
	PingPong = 3,
	EInterpToBehaviourType_MAX = 4
};

// Enum Engine.ETeleportType
enum class ETeleportType : uint8 {
	None = 0,
	TeleportPhysics = 1,
	ResetPhysics = 2,
	ETeleportType_MAX = 3
};

// Enum Engine.EObjectTypeQuery
enum class EObjectTypeQuery : uint8 {
	ObjectTypeQuery1 = 0,
	ObjectTypeQuery2 = 1,
	ObjectTypeQuery3 = 2,
	ObjectTypeQuery4 = 3,
	ObjectTypeQuery5 = 4,
	ObjectTypeQuery6 = 5,
	ObjectTypeQuery7 = 6,
	ObjectTypeQuery8 = 7,
	ObjectTypeQuery9 = 8,
	ObjectTypeQuery10 = 9,
	ObjectTypeQuery11 = 10,
	ObjectTypeQuery12 = 11,
	ObjectTypeQuery13 = 12,
	ObjectTypeQuery14 = 13,
	ObjectTypeQuery15 = 14,
	ObjectTypeQuery16 = 15,
	ObjectTypeQuery17 = 16,
	ObjectTypeQuery18 = 17,
	ObjectTypeQuery19 = 18,
	ObjectTypeQuery20 = 19,
	ObjectTypeQuery21 = 20,
	ObjectTypeQuery22 = 21,
	ObjectTypeQuery23 = 22,
	ObjectTypeQuery24 = 23,
	ObjectTypeQuery25 = 24,
	ObjectTypeQuery26 = 25,
	ObjectTypeQuery27 = 26,
	ObjectTypeQuery28 = 27,
	ObjectTypeQuery29 = 28,
	ObjectTypeQuery30 = 29,
	ObjectTypeQuery31 = 30,
	ObjectTypeQuery32 = 31,
	ObjectTypeQuery_MAX = 32,
	EObjectTypeQuery_MAX = 33
};

// Enum Engine.EDrawDebugTrace
enum class EDrawDebugTrace : uint8 {
	None = 0,
	ForOneFrame = 1,
	ForDuration = 2,
	Persistent = 3,
	EDrawDebugTrace_MAX = 4
};

// Enum Engine.ETraceTypeQuery
enum class ETraceTypeQuery : uint8 {
	TraceTypeQuery1 = 0,
	TraceTypeQuery2 = 1,
	TraceTypeQuery3 = 2,
	TraceTypeQuery4 = 3,
	TraceTypeQuery5 = 4,
	TraceTypeQuery6 = 5,
	TraceTypeQuery7 = 6,
	TraceTypeQuery8 = 7,
	TraceTypeQuery9 = 8,
	TraceTypeQuery10 = 9,
	TraceTypeQuery11 = 10,
	TraceTypeQuery12 = 11,
	TraceTypeQuery13 = 12,
	TraceTypeQuery14 = 13,
	TraceTypeQuery15 = 14,
	TraceTypeQuery16 = 15,
	TraceTypeQuery17 = 16,
	TraceTypeQuery18 = 17,
	TraceTypeQuery19 = 18,
	TraceTypeQuery20 = 19,
	TraceTypeQuery21 = 20,
	TraceTypeQuery22 = 21,
	TraceTypeQuery23 = 22,
	TraceTypeQuery24 = 23,
	TraceTypeQuery25 = 24,
	TraceTypeQuery26 = 25,
	TraceTypeQuery27 = 26,
	TraceTypeQuery28 = 27,
	TraceTypeQuery29 = 28,
	TraceTypeQuery30 = 29,
	TraceTypeQuery31 = 30,
	TraceTypeQuery32 = 31,
	TraceTypeQuery_MAX = 32,
	ETraceTypeQuery_MAX = 33
};

// Enum Engine.EMoveComponentAction
enum class EMoveComponentAction : uint8 {
	Move = 0,
	Stop = 1,
	Return = 2,
	EMoveComponentAction_MAX = 3
};

// Enum Engine.EQuitPreference
enum class EQuitPreference : uint8 {
	Quit = 0,
	Background = 1,
	EQuitPreference_MAX = 2
};

// Enum Engine.ETravelFailure
enum class ETravelFailure : uint8 {
	NoLevel = 0,
	LoadMapFailure = 1,
	InvalidURL = 2,
	PackageMissing = 3,
	PackageVersion = 4,
	NoDownload = 5,
	TravelFailure = 6,
	CheatCommands = 7,
	PendingNetGameCreateFailure = 8,
	CloudSaveFailure = 9,
	ServerTravelFailure = 10,
	ClientTravelFailure = 11,
	ETravelFailure_MAX = 12
};

// Enum Engine.EScreenOrientation
enum class EScreenOrientation : uint8 {
	Unknown = 0,
	Portrait = 1,
	PortraitUpsideDown = 2,
	LandscapeLeft = 3,
	LandscapeRight = 4,
	FaceUp = 5,
	FaceDown = 6,
	PortraitSensor = 7,
	LandscapeSensor = 8,
	FullSensor = 9,
	EScreenOrientation_MAX = 10
};

// Enum Engine.EApplicationState
enum class EApplicationState : uint8 {
	Unknown = 0,
	Inactive = 1,
	Background = 2,
	Active = 3,
	EApplicationState_MAX = 4
};

// Enum Engine.EComponentPhysicsStateChange
enum class EComponentPhysicsStateChange : uint8 {
	Created = 0,
	Destroyed = 1,
	EComponentPhysicsStateChange_MAX = 2
};

// Enum Engine.ERelativeTransformSpace
enum class ERelativeTransformSpace : uint8 {
	RTS_World = 0,
	RTS_Actor = 1,
	RTS_Component = 2,
	RTS_ParentBoneSpace = 3,
	RTS_MAX = 4
};

// Enum Engine.EAttachLocation
enum class EAttachLocation : uint8 {
	KeepRelativeOffset = 0,
	KeepWorldPosition = 1,
	SnapToTarget = 2,
	SnapToTargetIncludingScale = 3,
	EAttachLocation_MAX = 4
};

// Enum Engine.EAttachmentRule
enum class EAttachmentRule : uint8 {
	KeepRelative = 0,
	KeepWorld = 1,
	SnapToTarget = 2,
	EAttachmentRule_MAX = 3
};

// Enum Engine.EDetachmentRule
enum class EDetachmentRule : uint8 {
	KeepRelative = 0,
	KeepWorld = 1,
	EDetachmentRule_MAX = 2
};

// Enum Engine.EComponentMobility
enum class EComponentMobility : uint8 {
	Static = 0,
	Stationary = 1,
	Movable = 2,
	EComponentMobility_MAX = 3
};

// Enum Engine.EDetailMode
enum class EDetailMode : uint8 {
	DM_Low = 0,
	DM_Medium = 1,
	DM_High = 2,
	DM_Epic = 3,
	DM_MAX = 4
};

// Enum Engine.EAresOutlineMode
enum class EAresOutlineMode : uint8 {
	None = 0,
	Outline = 1,
	Block = 2,
	Enemy = 3,
	AlwaysOutline = 4,
	AlwaysEnemy = 5,
	EAresOutlineMode_MAX = 6
};

// Enum Engine.ECollisionEnabled
enum class ECollisionEnabled : uint8 {
	NoCollision = 0,
	QueryOnly = 1,
	PhysicsOnly = 2,
	QueryAndPhysics = 3,
	ProbeOnly = 4,
	QueryAndProbe = 5,
	ECollisionEnabled_MAX = 6
};

// Enum Engine.ECollisionChannel
enum class ECollisionChannel : uint8 {
	ECC_WorldStatic = 0,
	ECC_WorldDynamic = 1,
	ECC_Pawn = 2,
	ECC_Visibility = 3,
	ECC_Camera = 4,
	ECC_PhysicsBody = 5,
	ECC_Vehicle = 6,
	ECC_Destructible = 7,
	ECC_EngineTraceChannel1 = 8,
	ECC_EngineTraceChannel2 = 9,
	ECC_EngineTraceChannel3 = 10,
	ECC_EngineTraceChannel4 = 11,
	ECC_EngineTraceChannel5 = 12,
	ECC_EngineTraceChannel6 = 13,
	ECC_GameTraceChannel1 = 14,
	ECC_GameTraceChannel2 = 15,
	ECC_GameTraceChannel3 = 16,
	ECC_GameTraceChannel4 = 17,
	ECC_GameTraceChannel5 = 18,
	ECC_GameTraceChannel6 = 19,
	ECC_GameTraceChannel7 = 20,
	ECC_GameTraceChannel8 = 21,
	ECC_GameTraceChannel9 = 22,
	ECC_GameTraceChannel10 = 23,
	ECC_GameTraceChannel11 = 24,
	ECC_GameTraceChannel12 = 25,
	ECC_GameTraceChannel13 = 26,
	ECC_GameTraceChannel14 = 27,
	ECC_GameTraceChannel15 = 28,
	ECC_GameTraceChannel16 = 29,
	ECC_GameTraceChannel17 = 30,
	ECC_GameTraceChannel18 = 31,
	ECC_OverlapAll_Deprecated = 32,
	ECC_MAX = 33
};

// Enum Engine.ECollisionResponse
enum class ECollisionResponse : uint8 {
	ECR_Ignore = 0,
	ECR_Overlap = 1,
	ECR_Block = 2,
	ECR_MAX = 3
};

// Enum Engine.EWalkableSlopeBehavior
enum class EWalkableSlopeBehavior : uint8 {
	WalkableSlope_Default = 0,
	WalkableSlope_Increase = 1,
	WalkableSlope_Decrease = 2,
	WalkableSlope_Unwalkable = 3,
	WalkableSlope_Max = 4,
	WalkableSlope_Max = 5
};

// Enum Engine.EHLODLevelExclusion
enum class EHLODLevelExclusion : uint8 {
	HLOD0 = 1,
	HLOD1 = 2,
	HLOD2 = 4,
	HLOD3 = 8,
	HLOD4 = 16,
	HLOD5 = 32,
	HLOD6 = 64,
	HLOD7 = 128,
	EHLODLevelExclusion_MAX = 129
};

// Enum Engine.EDOFMode
enum class EDOFMode : uint8 {
	Default = 0,
	SixDOF = 1,
	YZPlane = 2,
	XZPlane = 3,
	XYPlane = 4,
	CustomPlane = 5,
	None = 6,
	EDOFMode_MAX = 7
};

// Enum Engine.ERendererStencilMask
enum class ERendererStencilMask : uint8 {
	ERSM_Default = 0,
	ERSM_256 = 1,
	ERSM_2 = 2,
	ERSM_3 = 3,
	ERSM_5 = 4,
	ERSM_9 = 5,
	ERSM_17 = 6,
	ERSM_33 = 7,
	ERSM_65 = 8,
	ERSM_129 = 9,
	ERSM_MAX = 10
};

// Enum Engine.ERayTracingGroupCullingPriority
enum class ERayTracingGroupCullingPriority : uint8 {
	CP_0_NEVER_CULL = 0,
	CP_2 = 1,
	CP_3 = 2,
	CP_4 = 3,
	CP_4_DEFAULT = 4,
	CP_6 = 5,
	CP_7 = 6,
	CP_8 = 7,
	CP_8_QUICKLY_CULL = 8,
	CP_MAX = 9
};

// Enum Engine.ERuntimeVirtualTextureMainPassType
enum class ERuntimeVirtualTextureMainPassType : uint8 {
	Never = 0,
	Exclusive = 1,
	Always = 2,
	ERuntimeVirtualTextureMainPassType_MAX = 3
};

// Enum Engine.ECanBeCharacterBase
enum class ECanBeCharacterBase : uint8 {
	ECB_No = 0,
	ECB_Yes = 1,
	ECB_Owner = 2,
	ECB_MAX = 3
};

// Enum Engine.EHasCustomNavigableGeometry
enum class EHasCustomNavigableGeometry : uint8 {
	No = 0,
	Yes = 1,
	EvenIfNotCollidable = 2,
	DontExport = 3,
	EHasCustomNavigableGeometry_MAX = 4
};

// Enum Engine.ELHMMirroringIgnoreType
enum class ELHMMirroringIgnoreType : uint8 {
	None = 0,
	YAxis = 1,
	YAxisAndTransform = 2,
	XAxis = 3,
	XAxisAndTransform = 4,
	ELHMMirroringIgnoreType_MAX = 5
};

// Enum Engine.EMaterialCubemapSource
enum class EMaterialCubemapSource : uint8 {
	MCSRC_Nearest = 0,
	MCSRC_Ambient = 1,
	MCSRC_AmbientEnvironment = 2,
	MCSRC_AmbientEnvironmentAlternative = 3,
	MCSRC_MAX = 4
};

// Enum Engine.EShadowCacheInvalidationBehavior
enum class EShadowCacheInvalidationBehavior : uint8 {
	Auto = 0,
	Always = 1,
	Rigid = 2,
	Static = 3,
	EShadowCacheInvalidationBehavior_MAX = 4
};

// Enum Engine.EHLODBatchingPolicy
enum class EHLODBatchingPolicy : uint8 {
	None = 0,
	MeshSection = 1,
	Instancing = 2,
	EHLODBatchingPolicy_MAX = 3
};

// Enum Engine.ELightmapType
enum class ELightmapType : uint8 {
	Default = 0,
	ForceSurface = 1,
	ForceVolumetric = 2,
	ELightmapType_MAX = 3
};

// Enum Engine.EIndirectLightingCacheQuality
enum class EIndirectLightingCacheQuality : uint8 {
	ILCQ_Off = 0,
	ILCQ_Point = 1,
	ILCQ_Volume = 2,
	ILCQ_MAX = 3
};

// Enum Engine.ESceneDepthPriorityGroup
enum class ESceneDepthPriorityGroup : uint8 {
	SDPG_World = 0,
	SDPG_Foreground = 1,
	SDPG_MAX = 2
};

// Enum Engine.EPrepassCullMode
enum class EPrepassCullMode : uint8 {
	PCM_Auto = 0,
	PCM_Include = 1,
	PCM_Exclude = 2,
	PCM_MAX = 3
};

// Enum Engine.EUmbraComponentMode
enum class EUmbraComponentMode : uint8 {
	UCM_Auto = 0,
	UCM_NonOccluder = 1,
	UCM_Occluder = 2,
	UCM_MAX = 3
};

// Enum Engine.EMouseLockMode
enum class EMouseLockMode : uint8 {
	DoNotLock = 0,
	LockOnCapture = 1,
	LockAlways = 2,
	LockInFullscreen = 3,
	EMouseLockMode_MAX = 4
};

// Enum Engine.EWindowTitleBarMode
enum class EWindowTitleBarMode : uint8 {
	Overlay = 0,
	VerticalBox = 1,
	EWindowTitleBarMode_MAX = 2
};

// Enum Engine.AnimationKeyFormat
enum class AnimationKeyFormat : uint8 {
	AKF_ConstantKeyLerp = 0,
	AKF_VariableKeyLerp = 1,
	AKF_PerTrackCompression = 2,
	AKF_MAX = 3
};

// Enum Engine.EAnimCurveType
enum class EAnimCurveType : uint8 {
	AttributeCurve = 0,
	MaterialCurve = 1,
	MorphTargetCurve = 2,
	MaxAnimCurveType = 3,
	EAnimCurveType_MAX = 4
};

// Enum Engine.EAnimAssetCurveFlags
enum class EAnimAssetCurveFlags : uint8 {
	AACF_NONE = 0,
	AACF_DriveMorphTarget_DEPRECATED = 1,
	AACF_DriveAttribute_DEPRECATED = 2,
	AACF_Editable = 4,
	AACF_DriveMaterial_DEPRECATED = 8,
	AACF_Metadata = 16,
	AACF_DriveTrack = 32,
	AACF_Disabled = 64,
	AACF_MAX = 65
};

// Enum Engine.ERawCurveTrackTypes
enum class ERawCurveTrackTypes : uint8 {
	RCT_Float = 0,
	RCT_Vector = 1,
	RCT_Transform = 2,
	RCT_MAX = 3
};

// Enum Engine.ERootMotionRootLock
enum class ERootMotionRootLock : uint8 {
	RefPose = 0,
	AnimFirstFrame = 1,
	Zero = 2,
	ERootMotionRootLock_MAX = 3
};

// Enum Engine.ERootMotionMode
enum class ERootMotionMode : uint8 {
	NoRootMotionExtraction = 0,
	IgnoreRootMotion = 1,
	RootMotionFromEverything = 2,
	RootMotionFromMontagesOnly = 3,
	ERootMotionMode_MAX = 4
};

// Enum Engine.EAdditiveBasePoseType
enum class EAdditiveBasePoseType : uint8 {
	ABPT_None = 0,
	ABPT_RefPose = 1,
	ABPT_AnimScaled = 2,
	ABPT_AnimFrame = 3,
	ABPT_LocalAnimFrame = 4,
	ABPT_MAX = 5
};

// Enum Engine.AnimationCompressionFormat
enum class AnimationCompressionFormat : uint8 {
	ACF_None = 0,
	ACF_Float96NoW = 1,
	ACF_Fixed48NoW = 2,
	ACF_IntervalFixed32NoW = 3,
	ACF_Fixed32NoW = 4,
	ACF_Float32NoW = 5,
	ACF_Identity = 6,
	ACF_MAX = 7
};

// Enum Engine.AnimPhysTwistAxis
enum class AnimPhysTwistAxis : uint8 {
	AxisX = 0,
	AxisY = 1,
	AxisZ = 2,
	AnimPhysTwistAxis_MAX = 3
};

// Enum Engine.AnimPhysCollisionType
enum class AnimPhysCollisionType : uint8 {
	CoM = 0,
	CustomSphere = 1,
	InnerSphere = 2,
	OuterSphere = 3,
	AnimPhysCollisionType_MAX = 4
};

// Enum Engine.ETypeAdvanceAnim
enum class ETypeAdvanceAnim : uint8 {
	ETAA_Default = 0,
	ETAA_Finished = 1,
	ETAA_Looped = 2,
	ETAA_MAX = 3
};

// Enum Engine.EBoneAxis
enum class EBoneAxis : uint8 {
	BA_X = 0,
	BA_Y = 1,
	BA_Z = 2,
	BA_MAX = 3
};

// Enum Engine.EBoneControlSpace
enum class EBoneControlSpace : uint8 {
	BCS_WorldSpace = 0,
	BCS_ComponentSpace = 1,
	BCS_ParentBoneSpace = 2,
	BCS_BoneSpace = 3,
	BCS_MAX = 4
};

// Enum Engine.EBoneRotationSource
enum class EBoneRotationSource : uint8 {
	BRS_KeepComponentSpaceRotation = 0,
	BRS_KeepLocalSpaceRotation = 1,
	BRS_CopyFromTarget = 2,
	BRS_MAX = 3
};

// Enum Engine.EMontageNotifyTickType
enum class EMontageNotifyTickType : uint8 {
	Queued = 0,
	BranchingPoint = 1,
	EMontageNotifyTickType_MAX = 2
};

// Enum Engine.ENotifyFilterType
enum class ENotifyFilterType : uint8 {
	NoFiltering = 0,
	LOD = 1,
	ENotifyFilterType_MAX = 2
};

// Enum Engine.EAdditiveAnimationType
enum class EAdditiveAnimationType : uint8 {
	AAT_None = 0,
	AAT_LocalSpaceBase = 1,
	AAT_RotationOffsetMeshSpace = 2,
	AAT_MAX = 3
};

// Enum Engine.ECurveBlendOption
enum class ECurveBlendOption : uint8 {
	Override = 0,
	DoNotOverride = 1,
	NormalizeByWeight = 2,
	BlendByWeight = 3,
	UseBasePose = 4,
	UseMaxValue = 5,
	UseMinValue = 6,
	ECurveBlendOption_MAX = 7
};

// Enum Engine.EAnimInterpolationType
enum class EAnimInterpolationType : uint8 {
	Linear = 0,
	Step = 1,
	EAnimInterpolationType_MAX = 2
};

// Enum Engine.EAxisOption
enum class EAxisOption : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	X_Neg = 3,
	Y_Neg = 4,
	Z_Neg = 5,
	Custom = 6,
	EAxisOption_MAX = 7
};

// Enum Engine.EComponentType
enum class EComponentType : uint8 {
	None = 0,
	TranslationX = 1,
	TranslationY = 2,
	TranslationZ = 3,
	RotationX = 4,
	RotationY = 5,
	RotationZ = 6,
	Scale = 7,
	ScaleX = 8,
	ScaleY = 9,
	ScaleZ = 10,
	EComponentType_MAX = 11
};

// Enum Engine.EAudioOutputTarget
enum class EAudioOutputTarget : uint8 {
	Speaker = 0,
	Controller = 1,
	ControllerFallbackToSpeaker = 2,
	EAudioOutputTarget_MAX = 3
};

// Enum Engine.EBlendableLocation
enum class EBlendableLocation : uint8 {
	BL_AfterTonemapping = 0,
	BL_BeforeTonemapping = 1,
	BL_BeforeTranslucency = 2,
	BL_ReplacingTonemapper = 3,
	BL_SSRInput = 4,
	BL_MAX = 5
};

// Enum Engine.EBlendSpaceAxis
enum class EBlendSpaceAxis : uint8 {
	BSA_None = 0,
	BSA_X = 1,
	BSA_Y = 2,
	BSA_MAX = 3
};

// Enum Engine.EPreferredTriangulationDirection
enum class EPreferredTriangulationDirection : uint8 {
	None = 0,
	Tangential = 1,
	Radial = 2,
	EPreferredTriangulationDirection_MAX = 3
};

// Enum Engine.EBlendSpacePerBoneBlendMode
enum class EBlendSpacePerBoneBlendMode : uint8 {
	ManualPerBoneOverride = 0,
	BlendProfile = 1,
	EBlendSpacePerBoneBlendMode_MAX = 2
};

// Enum Engine.ENotifyTriggerMode
enum class ENotifyTriggerMode : uint8 {
	AllAnimations = 0,
	HighestWeightedAnimation = 1,
	None = 2,
	ENotifyTriggerMode_MAX = 3
};

// Enum Engine.EBlueprintStatus
enum class EBlueprintStatus : uint8 {
	BS_Unknown = 0,
	BS_Dirty = 1,
	BS_Error = 2,
	BS_UpToDate = 3,
	BS_BeingCreated = 4,
	BS_UpToDateWithWarnings = 5,
	BS_MAX = 6
};

// Enum Engine.EBlueprintType
enum class EBlueprintType : uint8 {
	BPTYPE_Normal = 0,
	BPTYPE_Const = 1,
	BPTYPE_MacroLibrary = 2,
	BPTYPE_Interface = 3,
	BPTYPE_LevelScript = 4,
	BPTYPE_FunctionLibrary = 5,
	BPTYPE_MAX = 6
};

// Enum Engine.EBlueprintCompileMode
enum class EBlueprintCompileMode : uint8 {
	Default = 0,
	Development = 1,
	FinalRelease = 2,
	EBlueprintCompileMode_MAX = 3
};

// Enum Engine.EBlueprintNativizationFlag
enum class EBlueprintNativizationFlag : uint8 {
	Disabled = 0,
	Dependency = 1,
	ExplicitlyEnabled = 2,
	EBlueprintNativizationFlag_MAX = 3
};

// Enum Engine.EShouldCookBlueprintPropertyGuids
enum class EShouldCookBlueprintPropertyGuids : uint8 {
	No = 0,
	Yes = 1,
	Inherit = 2,
	EShouldCookBlueprintPropertyGuids_MAX = 3
};

// Enum Engine.ECsgOper
enum class ECsgOper : uint8 {
	CSG_Active = 0,
	CSG_Add = 1,
	CSG_Subtract = 2,
	CSG_Intersect = 3,
	CSG_Deintersect = 4,
	CSG_None = 5,
	CSG_MAX = 6
};

// Enum Engine.EBrushType
enum class EBrushType : uint8 {
	Brush_Default = 0,
	Brush_Add = 1,
	Brush_Subtract = 2,
	Brush_MAX = 3
};

// Enum Engine.ECameraProjectionMode
enum class ECameraProjectionMode : uint8 {
	Perspective = 0,
	Orthographic = 1,
	ECameraProjectionMode_MAX = 2
};

// Enum Engine.ECameraShakePlaySpace
enum class ECameraShakePlaySpace : uint8 {
	CameraLocal = 0,
	World = 1,
	UserDefined = 2,
	ECameraShakePlaySpace_MAX = 3
};

// Enum Engine.ECorrectionReason
enum class ECorrectionReason : uint8 {
	None = 0,
	Crouch = 1,
	Position = 2,
	Count = 3,
	ECorrectionReason_MAX = 4
};

// Enum Engine.ECloudStorageDelegate
enum class ECloudStorageDelegate : uint8 {
	CSD_KeyValueReadComplete = 0,
	CSD_KeyValueWriteComplete = 1,
	CSD_ValueChanged = 2,
	CSD_DocumentQueryComplete = 3,
	CSD_DocumentReadComplete = 4,
	CSD_DocumentWriteComplete = 5,
	CSD_DocumentConflictDetected = 6,
	CSD_MAX = 7
};

// Enum Engine.EContentBundleClientState
enum class EContentBundleClientState : uint8 {
	Unregistered = 0,
	Registered = 1,
	ContentInjectionRequested = 2,
	ContentRemovalRequested = 3,
	RegistrationFailed = 4,
	EContentBundleClientState_MAX = 5
};

// Enum Engine.EWorldContentState
enum class EWorldContentState : uint8 {
	NoContent = 0,
	ContentBundleInjected = 1,
	EWorldContentState_MAX = 2
};

// Enum Engine.EContentBundleStatus
enum class EContentBundleStatus : int32 {
	Registered = 0,
	ReadyToInject = 1,
	FailedToInject = 2,
	ContentInjected = 3,
	Unknown = -1,
	EContentBundleStatus_MAX = 4
};

// Enum Engine.ECustomAttributeBlendType
enum class ECustomAttributeBlendType : uint8 {
	Override = 0,
	Blend = 1,
	ECustomAttributeBlendType_MAX = 2
};

// Enum Engine.EDataLayerType
enum class EDataLayerType : uint8 {
	Runtime = 0,
	Editor = 1,
	Unknown = 2,
	Size = 3,
	EDataLayerType_MAX = 4
};

// Enum Engine.EMaterialDebugViewMode
enum class EMaterialDebugViewMode : uint8 {
	MDM_None = 0,
	MDM_WorldNormal = 1,
	MDM_Roughness = 2,
	MDM_Metallic = 3,
	MDM_Specular = 4,
	MDM_Grayscale = 5,
	MDM_BaseColor = 6,
	MDM_FrontLit = 7,
	MDM_MAX = 8
};

// Enum Engine.DistributionParamMode
enum class DistributionParamMode : uint8 {
	DPM_Normal = 0,
	DPM_Abs = 1,
	DPM_Direct = 2,
	DPM_MAX = 3
};

// Enum Engine.EDistributionVectorLockFlags
enum class EDistributionVectorLockFlags : uint8 {
	EDVLF_None = 0,
	EDVLF_XY = 1,
	EDVLF_XZ = 2,
	EDVLF_YZ = 3,
	EDVLF_XYZ = 4,
	EDVLF_MAX = 5
};

// Enum Engine.EDistributionVectorMirrorFlags
enum class EDistributionVectorMirrorFlags : uint8 {
	EDVMF_Same = 0,
	EDVMF_Different = 1,
	EDVMF_Mirror = 2,
	EDVMF_MAX = 3
};

// Enum Engine.EEdGraphPinDirection
enum class EEdGraphPinDirection : uint8 {
	EGPD_Input = 0,
	EGPD_Output = 1,
	EGPD_MAX = 2
};

// Enum Engine.EPinContainerType
enum class EPinContainerType : uint8 {
	None = 0,
	Array = 1,
	Set = 2,
	Map = 3,
	EPinContainerType_MAX = 4
};

// Enum Engine.ENodeTitleType
enum class ENodeTitleType : uint8 {
	FullTitle = 0,
	ListView = 1,
	EditableTitle = 2,
	MenuTitle = 3,
	MAX_TitleTypes = 4,
	ENodeTitleType_MAX = 5
};

// Enum Engine.ENodeAdvancedPins
enum class ENodeAdvancedPins : uint8 {
	NoPins = 0,
	Shown = 1,
	Hidden = 2,
	ENodeAdvancedPins_MAX = 3
};

// Enum Engine.ENodeEnabledState
enum class ENodeEnabledState : uint8 {
	Enabled = 0,
	Disabled = 1,
	DevelopmentOnly = 2,
	AutomationOnly = 3,
	ENodeEnabledState_MAX = 4
};

// Enum Engine.EBlueprintPinStyleType
enum class EBlueprintPinStyleType : uint8 {
	BPST_Original = 0,
	BPST_VariantA = 1,
	BPST_MAX = 2
};

// Enum Engine.EGraphType
enum class EGraphType : uint8 {
	GT_Function = 0,
	GT_Ubergraph = 1,
	GT_Macro = 2,
	GT_Animation = 3,
	GT_StateMachine = 4,
	GT_MAX = 5
};

// Enum Engine.ECanCreateConnectionResponse
enum class ECanCreateConnectionResponse : uint8 {
	CONNECT_RESPONSE_MAKE = 0,
	CONNECT_RESPONSE_DISALLOW = 1,
	CONNECT_RESPONSE_BREAK_OTHERS_A = 2,
	CONNECT_RESPONSE_BREAK_OTHERS_B = 3,
	CONNECT_RESPONSE_BREAK_OTHERS_AB = 4,
	CONNECT_RESPONSE_MAKE_WITH_CONVERSION_NODE = 5,
	CONNECT_RESPONSE_MAKE_WITH_PROMOTION = 6,
	CONNECT_RESPONSE_MAX = 7
};

// Enum Engine.EFullyLoadPackageType
enum class EFullyLoadPackageType : uint8 {
	FULLYLOAD_Map = 0,
	FULLYLOAD_Game_PreLoadClass = 1,
	FULLYLOAD_Game_PostLoadClass = 2,
	FULLYLOAD_Always = 3,
	FULLYLOAD_Mutator = 4,
	FULLYLOAD_MAX = 5
};

// Enum Engine.ETransitionType
enum class ETransitionType : uint8 {
	None = 0,
	Paused = 1,
	Loading = 2,
	Saving = 3,
	Connecting = 4,
	Precaching = 5,
	WaitingToConnect = 6,
	MAX = 7
};

// Enum Engine.EInputEvent
enum class EInputEvent : uint8 {
	IE_Pressed = 0,
	IE_Released = 1,
	IE_Repeat = 2,
	IE_DoubleClick = 3,
	IE_Axis = 4,
	IE_Hold = 5,
	IE_MAX = 6
};

// Enum Engine.EMouseCaptureMode
enum class EMouseCaptureMode : uint8 {
	NoCapture = 0,
	CapturePermanently = 1,
	CapturePermanently_IncludingInitialMouseDown = 2,
	CaptureDuringMouseDown = 3,
	CaptureDuringRightMouseDown = 4,
	EMouseCaptureMode_MAX = 5
};

// Enum Engine.ENetworkLagState
enum class ENetworkLagState : uint8 {
	NotLagging = 0,
	Lagging = 1,
	ENetworkLagState_MAX = 2
};

// Enum Engine.ETravelType
enum class ETravelType : uint8 {
	TRAVEL_Absolute = 0,
	TRAVEL_Partial = 1,
	TRAVEL_Relative = 2,
	TRAVEL_MAX = 3
};

// Enum Engine.EDemoPlayFailure
enum class EDemoPlayFailure : uint8 {
	Generic = 0,
	DemoNotFound = 1,
	Corrupt = 2,
	InvalidVersion = 3,
	InitBase = 4,
	GameSpecificHeader = 5,
	ReplayStreamerInternal = 6,
	LoadMap = 7,
	Serialization = 8,
	EDemoPlayFailure_MAX = 9
};

// Enum Engine.EViewModeIndex
enum class EViewModeIndex : uint8 {
	VMI_BrushWireframe = 0,
	VMI_Wireframe = 1,
	VMI_Unlit = 2,
	VMI_Lit = 3,
	VMI_Lit_DetailLighting = 4,
	VMI_LightingOnly = 5,
	VMI_LightComplexity = 6,
	VMI_ShaderComplexity = 8,
	VMI_LightmapDensity = 9,
	VMI_LitLightmapDensity = 10,
	VMI_ReflectionOverride = 11,
	VMI_VisualizeBuffer = 12,
	VMI_StationaryLightOverlap = 14,
	VMI_CollisionPawn = 15,
	VMI_CollisionVisibility = 16,
	VMI_LODColoration = 18,
	VMI_QuadOverdraw = 19,
	VMI_PrimitiveDistanceAccuracy = 20,
	VMI_MeshUVDensityAccuracy = 21,
	VMI_ShaderComplexityWithQuadOverdraw = 22,
	VMI_HLODColoration = 23,
	VMI_GroupLODColoration = 24,
	VMI_MaterialTextureScaleAccuracy = 25,
	VMI_RequiredTextureResolution = 26,
	VMI_PathTracing = 27,
	VMI_RayTracingDebug = 28,
	VMI_DebugViewMode = 31,
	VMI_DrawCallComplexity = 32,
	VMI_VertexShaderComplexity = 33,
	VMI_PixelShaderComplexity = 34,
	VMI_TextureComplexity = 35,
	VMI_CollisionProjectile = 36,
	VMI_CollisionWeapon = 37,
	VMI_CollisionPickup = 38,
	VMI_CollisionTargeting = 39,
	VMI_CollisionSound = 40,
	VMI_CollisionKeyLocation = 41,
	VMI_CollisionLevel = 42,
	VMI_CollisionDeathReaction = 43,
	VMI_CollisionEtherealProjectile = 44,
	VMI_CollisionFluid = 45,
	VMI_CollisionCalloutRegion = 46,
	VMI_CollisionTrigger = 47,
	VMI_MobileLODColoration = 48,
	VMI_VisualizeNanite = 49,
	VMI_VirtualTexturePendingMips = 50,
	VMI_VisualizeLumen = 51,
	VMI_VisualizeVirtualShadowMap = 52,
	VMI_VisualizeGPUSkinCache = 53,
	VMI_VisualizeSubstrate = 54,
	VMI_VisualizeGroom = 55,
	VMI_Max = 56,
	VMI_Unknown = 255,
	VMI_Max = 256
};

// Enum Engine.EAspectRatioAxisConstraint
enum class EAspectRatioAxisConstraint : uint8 {
	AspectRatio_MaintainYFOV = 0,
	AspectRatio_MaintainXFOV = 1,
	AspectRatio_MajorAxisFOV = 2,
	AspectRatio_MAX = 3
};

// Enum Engine.EOcclusionCombineMode
enum class EOcclusionCombineMode : uint8 {
	OCM_Minimum = 0,
	OCM_Multiply = 1,
	OCM_MAX = 2
};

// Enum Engine.EBlendMode
enum class EBlendMode : uint8 {
	BLEND_Opaque = 0,
	BLEND_Masked = 1,
	BLEND_Translucent = 2,
	BLEND_Additive = 3,
	BLEND_Modulate = 4,
	BLEND_AlphaComposite = 5,
	BLEND_AlphaHoldout = 6,
	BLEND_TranslucentColoredTransmittance = 7,
	BLEND_Modulate2x = 8,
	BLEND_Unlit = 9,
	BLEND_Emissive = 10,
	BLEND_MAX = 11,
	BLEND_TranslucentGreyTransmittance = 2,
	BLEND_ColoredTransmittanceOnly = 4
};

// Enum Engine.EMaterialFloatPrecisionMode
enum class EMaterialFloatPrecisionMode : uint8 {
	MFPM_Default = 0,
	MFPM_Full_MaterialExpressionOnly = 1,
	MFPM_Full = 2,
	MFPM_Half = 3,
	MFPM_MAX = 4
};

// Enum Engine.ESamplerSourceMode
enum class ESamplerSourceMode : uint8 {
	SSM_FromTextureAsset = 0,
	SSM_Wrap_WorldGroupSettings = 1,
	SSM_Clamp_WorldGroupSettings = 2,
	SSM_TerrainWeightmapGroupSettings = 3,
	SSM_MAX = 4
};

// Enum Engine.ETextureMipValueMode
enum class ETextureMipValueMode : uint8 {
	TMVM_None = 0,
	TMVM_MipLevel = 1,
	TMVM_MipBias = 2,
	TMVM_Derivative = 3,
	TMVM_MAX = 4
};

// Enum Engine.ETranslucencyLightingMode
enum class ETranslucencyLightingMode : uint8 {
	TLM_VolumetricNonDirectional = 0,
	TLM_VolumetricDirectional = 1,
	TLM_VolumetricPerVertexNonDirectional = 2,
	TLM_VolumetricPerVertexDirectional = 3,
	TLM_Surface = 4,
	TLM_SurfacePerPixelLighting = 5,
	TLM_MAX = 6
};

// Enum Engine.ERefractionMode
enum class ERefractionMode : uint8 {
	RM_IndexOfRefraction = 0,
	RM_PixelNormalOffset = 1,
	RM_2DOffset = 2,
	RM_None = 3,
	RM_MAX = 4
};

// Enum Engine.ERefractionCoverageMode
enum class ERefractionCoverageMode : uint8 {
	RCM_CoverageIgnored = 0,
	RCM_CoverageAccountedFor = 1,
	RCM_MAX = 2
};

// Enum Engine.ETranslucentSortPolicy
enum class ETranslucentSortPolicy : uint8 {
	SortByDistance = 0,
	SortByProjectedZ = 1,
	SortAlongAxis = 2,
	ETranslucentSortPolicy_MAX = 3
};

// Enum Engine.EDynamicGlobalIlluminationMethod
enum class EDynamicGlobalIlluminationMethod : uint8 {
	None = 0,
	Lumen = 1,
	ScreenSpace = 2,
	RayTraced = 3,
	Plugin = 4,
	EDynamicGlobalIlluminationMethod_MAX = 5
};

// Enum Engine.EReflectionMethod
enum class EReflectionMethod : uint8 {
	None = 0,
	Lumen = 1,
	ScreenSpace = 2,
	RayTraced = 3,
	EReflectionMethod_MAX = 4
};

// Enum Engine.EShadowMapMethod
enum class EShadowMapMethod : uint8 {
	ShadowMaps = 0,
	VirtualShadowMaps = 1,
	EShadowMapMethod_MAX = 2
};

// Enum Engine.ECastRayTracedShadow
enum class ECastRayTracedShadow : uint8 {
	Disabled = 0,
	UseProjectSetting = 1,
	Enabled = 2,
	ECastRayTracedShadow_MAX = 3
};

// Enum Engine.ESceneCaptureSource
enum class ESceneCaptureSource : uint8 {
	SCS_SceneColorHDR = 0,
	SCS_SceneColorHDRNoAlpha = 1,
	SCS_FinalColorLDR = 2,
	SCS_SceneColorSceneDepth = 3,
	SCS_SceneDepth = 4,
	SCS_DeviceDepth = 5,
	SCS_Normal = 6,
	SCS_BaseColor = 7,
	SCS_FinalColorHDR = 8,
	SCS_FinalToneCurveHDR = 9,
	SCS_FinalColorHDRAlpha = 10,
	SCS_SceneColorHDRSceneAlpha = 11,
	SCS_MAX = 12
};

// Enum Engine.ESceneCaptureCompositeMode
enum class ESceneCaptureCompositeMode : uint8 {
	SCCM_Overwrite = 0,
	SCCM_Additive = 1,
	SCCM_Composite = 2,
	SCCM_MAX = 3
};

// Enum Engine.EGBufferFormat
enum class EGBufferFormat : uint8 {
	Force8BitsPerChannel = 0,
	Default = 1,
	HighPrecisionNormals = 3,
	Force16BitsPerChannel = 5,
	EGBufferFormat_MAX = 6
};

// Enum Engine.ETrailWidthMode
enum class ETrailWidthMode : uint8 {
	ETrailWidthMode_FromCentre = 0,
	ETrailWidthMode_FromFirst = 1,
	ETrailWidthMode_FromSecond = 2,
	ETrailWidthMode_MAX = 3
};

// Enum Engine.EParticleCollisionMode
enum class EParticleCollisionMode : uint8 {
	SceneDepth = 0,
	DistanceField = 1,
	EParticleCollisionMode_MAX = 2
};

// Enum Engine.EMaterialShadingModel
enum class EMaterialShadingModel : uint8 {
	MSM_Unlit = 0,
	MSM_DefaultLit = 1,
	MSM_Subsurface = 2,
	MSM_PreintegratedSkin = 3,
	MSM_ClearCoat = 4,
	MSM_SubsurfaceProfile = 5,
	MSM_TwoSidedFoliage = 6,
	MSM_Hair = 7,
	MSM_Cloth = 8,
	MSM_Eye = 9,
	MSM_SingleLayerWater = 10,
	MSM_ThinTranslucent = 11,
	MSM_AresEnvironment = 12,
	MSM_AresCharacter = 13,
	MSM_AresFirstPerson = 14,
	MSM_Strata = 15,
	MSM_NUM = 16,
	MSM_FromMaterialExpression = 17,
	MSM_MAX = 18
};

// Enum Engine.EMaterialLightingSourceColor
enum class EMaterialLightingSourceColor : uint8 {
	MLSC_None = 0,
	MLSC_Lightmap = 1,
	MLSC_LightProbes = 2,
	MLSC_Directional = 3,
	MLSC_ReflectionCubemap = 4,
	MLSC_LightProbesHue = 5,
	MLSC_MAX = 6
};

// Enum Engine.EMaterialLightingSourceDirectionality
enum class EMaterialLightingSourceDirectionality : uint8 {
	MLSD_None = 0,
	MLSD_Lightmap = 1,
	MLSD_LightProbes = 2,
	MLSD_Directional = 3,
	MLSD_DirectionalHalfLambert = 4,
	MLSD_ReflectionCubemap = 5,
	MLSD_MAX = 6
};

// Enum Engine.EAresTranslucencyDepthMode
enum class EAresTranslucencyDepthMode : uint8 {
	ATDM_None = 0,
	ATDM_ObjectTranslucency = 1,
	ATDM_DisableStencilTest = 2,
	ATDM_MAX = 3
};

// Enum Engine.EMaterialSpecularModel
enum class EMaterialSpecularModel : uint8 {
	MSPC_None = 0,
	MSPC_Phong = 1,
	MSPC_GGX = 2,
	MSPC_MAX = 3
};

// Enum Engine.EMaterialCubemapMode
enum class EMaterialCubemapMode : uint8 {
	MCM_None = 0,
	MCM_Standard = 1,
	MCM_MAX = 2
};

// Enum Engine.EMaterialAresEnvironmentType
enum class EMaterialAresEnvironmentType : uint8 {
	MAET_None = 0,
	MAET_MetallicDetail = 1,
	MAET_MetallicWall = 2,
	MAET_NonmetalDetail = 3,
	MAET_NonmetalWall = 4,
	MAET_MAX = 5
};

// Enum Engine.EStrataShadingModel
enum class EStrataShadingModel : uint8 {
	SSM_Unlit = 0,
	SSM_DefaultLit = 1,
	SSM_SubsurfaceLit = 2,
	SSM_VolumetricFogCloud = 3,
	SSM_Hair = 4,
	SSM_Eye = 5,
	SSM_Cloth = 6,
	SSM_ClearCoat = 7,
	SSM_SingleLayerWater = 8,
	SSM_LightFunction = 9,
	SSM_PostProcess = 10,
	SSM_Decal = 11,
	SSM_UI = 12,
	SSM_NUM = 13
};

// Enum Engine.EMaterialSamplerType
enum class EMaterialSamplerType : uint8 {
	SAMPLERTYPE_Color = 0,
	SAMPLERTYPE_Grayscale = 1,
	SAMPLERTYPE_Alpha = 2,
	SAMPLERTYPE_Normal = 3,
	SAMPLERTYPE_Masks = 4,
	SAMPLERTYPE_DistanceFieldFont = 5,
	SAMPLERTYPE_LinearColor = 6,
	SAMPLERTYPE_LinearGrayscale = 7,
	SAMPLERTYPE_Data = 8,
	SAMPLERTYPE_External = 9,
	SAMPLERTYPE_VirtualColor = 10,
	SAMPLERTYPE_VirtualGrayscale = 11,
	SAMPLERTYPE_VirtualAlpha = 12,
	SAMPLERTYPE_VirtualNormal = 13,
	SAMPLERTYPE_VirtualMasks = 14,
	SAMPLERTYPE_VirtualLinearColor = 15,
	SAMPLERTYPE_VirtualLinearGrayscale = 16,
	SAMPLERTYPE_MAX = 17
};

// Enum Engine.EMaterialStencilCompare
enum class EMaterialStencilCompare : uint8 {
	MSC_Less = 0,
	MSC_LessEqual = 1,
	MSC_Greater = 2,
	MSC_GreaterEqual = 3,
	MSC_Equal = 4,
	MSC_NotEqual = 5,
	MSC_Never = 6,
	MSC_Always = 7,
	MSC_Count = 8,
	MSC_MAX = 9
};

// Enum Engine.EMaterialShadingRate
enum class EMaterialShadingRate : uint8 {
	MSR_1x1 = 0,
	MSR_2x1 = 1,
	MSR_1x2 = 2,
	MSR_2x2 = 3,
	MSR_4x2 = 4,
	MSR_2x4 = 5,
	MSR_4x4 = 6,
	MSR_Count = 7,
	MSR_MAX = 8
};

// Enum Engine.ELightingBuildQuality
enum class ELightingBuildQuality : uint8 {
	Quality_Preview = 0,
	Quality_Medium = 1,
	Quality_High = 2,
	Quality_Production = 3,
	Quality_MAX = 4
};

// Enum Engine.ENetworkSmoothingMode
enum class ENetworkSmoothingMode : uint8 {
	Disabled = 0,
	Linear = 1,
	Exponential = 2,
	ENetworkSmoothingMode_MAX = 3
};

// Enum Engine.EOverlapFilterOption
enum class EOverlapFilterOption : uint8 {
	OverlapFilter_All = 0,
	OverlapFilter_DynamicOnly = 1,
	OverlapFilter_StaticOnly = 2,
	OverlapFilter_MAX = 3
};

// Enum Engine.EFilterInterpolationType
enum class EFilterInterpolationType : uint8 {
	BSIT_Average = 0,
	BSIT_Linear = 1,
	BSIT_Cubic = 2,
	BSIT_EaseInOut = 3,
	BSIT_ExponentialDecay = 4,
	BSIT_SpringDamper = 5,
	BSIT_MAX = 6
};

// Enum Engine.ETimelineSigType
enum class ETimelineSigType : uint8 {
	ETS_EventSignature = 0,
	ETS_FloatSignature = 1,
	ETS_VectorSignature = 2,
	ETS_LinearColorSignature = 3,
	ETS_InvalidSignature = 4,
	ETS_MAX = 5
};

// Enum Engine.ELightMapPaddingType
enum class ELightMapPaddingType : uint8 {
	LMPT_NormalPadding = 0,
	LMPT_PrePadding = 1,
	LMPT_NoPadding = 2,
	LMPT_MAX = 3
};

// Enum Engine.EShadowMapFlags
enum class EShadowMapFlags : uint8 {
	SMF_None = 0,
	SMF_Streamed = 1,
	SMF_MAX = 2
};

// Enum Engine.EUpdateRateShiftBucket
enum class EUpdateRateShiftBucket : uint8 {
	ShiftBucket0 = 0,
	ShiftBucket1 = 1,
	ShiftBucket2 = 2,
	ShiftBucket3 = 3,
	ShiftBucket4 = 4,
	ShiftBucket5 = 5,
	ShiftBucketMax = 6,
	EUpdateRateShiftBucket_MAX = 7
};

// Enum Engine.ENaniteFallbackTarget
enum class ENaniteFallbackTarget : uint8 {
	Auto = 0,
	PercentTriangles = 1,
	RelativeError = 2,
	ENaniteFallbackTarget_MAX = 3
};

// Enum Engine.ENetDormancy
enum class ENetDormancy : uint8 {
	DORM_Never = 0,
	DORM_Awake = 1,
	DORM_DormantAll = 2,
	DORM_DormantPartial = 3,
	DORM_Initial = 4,
	DORM_MAX = 5
};

// Enum Engine.EPhysicsReplicationMode
enum class EPhysicsReplicationMode : uint8 {
	Default = 0,
	PredictiveInterpolation = 1,
	Resimulation = 2,
	EPhysicsReplicationMode_MAX = 3
};

// Enum Engine.EAutoReceiveInput
enum class EAutoReceiveInput : uint8 {
	Disabled = 0,
	Player0 = 1,
	Player1 = 2,
	Player2 = 3,
	Player3 = 4,
	Player4 = 5,
	Player5 = 6,
	Player6 = 7,
	Player7 = 8,
	EAutoReceiveInput_MAX = 9
};

// Enum Engine.EAutoPossessAI
enum class EAutoPossessAI : uint8 {
	Disabled = 0,
	PlacedInWorld = 1,
	Spawned = 2,
	PlacedInWorldOrSpawned = 3,
	EAutoPossessAI_MAX = 4
};

// Enum Engine.EPhysicalMaterialMaskColor
enum class EPhysicalMaterialMaskColor : uint8 {
	Red = 0,
	Green = 1,
	Blue = 2,
	Cyan = 3,
	Magenta = 4,
	Yellow = 5,
	White = 6,
	Black = 7,
	MAX = 8
};

// Enum Engine.EComponentSocketType
enum class EComponentSocketType : uint8 {
	Invalid = 0,
	Bone = 1,
	Socket = 2,
	EComponentSocketType_MAX = 3
};

// Enum Engine.ESpawnActorCollisionHandlingMethod
enum class ESpawnActorCollisionHandlingMethod : uint8 {
	Undefined = 0,
	AlwaysSpawn = 1,
	AdjustIfPossibleButAlwaysSpawn = 2,
	AdjustIfPossibleButDontSpawnIfColliding = 3,
	DontSpawnIfColliding = 4,
	ESpawnActorCollisionHandlingMethod_MAX = 5
};

// Enum Engine.EMeshBufferAccess
enum class EMeshBufferAccess : uint8 {
	Default = 0,
	ForceCPUAndGPU = 1,
	EMeshBufferAccess_MAX = 2
};

// Enum Engine.EAresInputType
enum class EAresInputType : uint8 {
	MouseAndKeyboard = 0,
	Gamepad = 1,
	Touch = 2,
	Count = 3,
	EAresInputType_MAX = 4
};

// Enum Engine.EFontImportCharacterSet
enum class EFontImportCharacterSet : uint8 {
	FontICS_Default = 0,
	FontICS_Ansi = 1,
	FontICS_Symbol = 2,
	FontICS_MAX = 3
};

// Enum Engine.EStandbyType
enum class EStandbyType : uint8 {
	STDBY_Rx = 0,
	STDBY_Tx = 1,
	STDBY_BadPing = 2,
	STDBY_MAX = 3
};

// Enum Engine.ESuggestProjVelocityTraceOption
enum class ESuggestProjVelocityTraceOption : uint8 {
	DoNotTrace = 0,
	TraceFullPath = 1,
	OnlyTraceWhileAscending = 2,
	ESuggestProjVelocityTraceOption_MAX = 3
};

// Enum Engine.EHISMViewRelevanceType
enum class EHISMViewRelevanceType : uint8 {
	Grass = 0,
	Foliage = 1,
	HISM = 2,
	EHISMViewRelevanceType_MAX = 3
};

// Enum Engine.EHitProxyPriority
enum class EHitProxyPriority : uint8 {
	HPP_World = 0,
	HPP_Wireframe = 1,
	HPP_Foreground = 2,
	HPP_UI = 3,
	HPP_MAX = 4
};

// Enum Engine.EAdManagerDelegate
enum class EAdManagerDelegate : uint8 {
	AMD_ClickedBanner = 0,
	AMD_UserClosedAd = 1,
	AMD_MAX = 2
};

// Enum Engine.ERoundingMode
enum class ERoundingMode : uint8 {
	HalfToEven = 0,
	HalfFromZero = 1,
	HalfToZero = 2,
	FromZero = 3,
	ToZero = 4,
	ToNegativeInfinity = 5,
	ToPositiveInfinity = 6,
	ERoundingMode_MAX = 7
};

// Enum Engine.EViewStatusForScreenPercentage
enum class EViewStatusForScreenPercentage : uint8 {
	NonRealtime = 0,
	Desktop = 1,
	Mobile = 2,
	VR = 3,
	PathTracer = 4,
	EViewStatusForScreenPercentage_MAX = 5
};

// Enum Engine.EScreenPercentageMode
enum class EScreenPercentageMode : uint8 {
	Manual = 0,
	BasedOnDisplayResolution = 1,
	BasedOnDPIScale = 2,
	EScreenPercentageMode_MAX = 3
};

// Enum Engine.ELevelInstanceRuntimeBehavior
enum class ELevelInstanceRuntimeBehavior : uint8 {
	None = 0,
	Embedded_Deprecated = 1,
	Partitioned = 2,
	LevelStreaming = 3,
	ELevelInstanceRuntimeBehavior_MAX = 4
};

// Enum Engine.ELevelInstanceCreationType
enum class ELevelInstanceCreationType : uint8 {
	LevelInstance = 0,
	PackedLevelActor = 1,
	ELevelInstanceCreationType_MAX = 2
};

// Enum Engine.ELevelInstancePivotType
enum class ELevelInstancePivotType : uint8 {
	CenterMinZ = 0,
	Center = 1,
	Actor = 2,
	WorldOrigin = 3,
	ELevelInstancePivotType_MAX = 4
};

// Enum Engine.EStreamingVolumeUsage
enum class EStreamingVolumeUsage : uint8 {
	SVB_Loading = 0,
	SVB_LoadingAndVisibility = 1,
	SVB_VisibilityBlockingOnLoad = 2,
	SVB_BlockingOnLoad = 3,
	SVB_LoadingNotVisible = 4,
	SVB_MAX = 5
};

// Enum Engine.EMaterialDomain
enum class EMaterialDomain : uint8 {
	MD_Surface = 0,
	MD_DeferredDecal = 1,
	MD_LightFunction = 2,
	MD_Volume = 3,
	MD_PostProcess = 4,
	MD_UI = 5,
	MD_RuntimeVirtualTexture = 6,
	MD_MAX = 7
};

// Enum Engine.EPositionOrigin
enum class EPositionOrigin : uint8 {
	Absolute = 0,
	CameraRelative = 1,
	EPositionOrigin_MAX = 2
};

// Enum Engine.ETextureColorChannel
enum class ETextureColorChannel : uint8 {
	TCC_Red = 0,
	TCC_Green = 1,
	TCC_Blue = 2,
	TCC_Alpha = 3,
	TCC_MAX = 4
};

// Enum Engine.EAresStencilMode
enum class EAresStencilMode : uint8 {
	ASM_FULL = 0,
	ASM_ALLY = 1,
	ASM_ENEMY = 2,
	ASM_OCCLUDED = 3,
	ASM_BLOCKED = 4,
	ASM_OCCLUDEDALLY = 5,
	ASM_OCCLUDEDENEMY = 6,
	ASM_UNOCCLUDEDALLY = 7,
	ASM_UNOCCLUDEDENEMY = 8,
	ASM_UNOCCLUDEDNOTALLY = 9,
	ASM_UNOCCLUDEDNOTENEMY = 10,
	ASM_MAX = 11
};

// Enum Engine.EMaterialAttributeBlend
enum class EMaterialAttributeBlend : uint8 {
	Blend = 0,
	UseA = 1,
	UseB = 2,
	EMaterialAttributeBlend_MAX = 3
};

// Enum Engine.EChannelMaskParameterColor
enum class EChannelMaskParameterColor : uint8 {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	EChannelMaskParameterColor_MAX = 4
};

// Enum Engine.EClampMode
enum class EClampMode : uint8 {
	CMODE_Clamp = 0,
	CMODE_ClampMin = 1,
	CMODE_ClampMax = 2,
	CMODE_MAX = 3
};

// Enum Engine.ECustomMaterialOutputType
enum class ECustomMaterialOutputType : uint8 {
	CMOT_Float1 = 0,
	CMOT_Float2 = 1,
	CMOT_Float3 = 2,
	CMOT_Float4 = 3,
	CMOT_MaterialAttributes = 4,
	CMOT_MAX = 5
};

// Enum Engine.EDataDrivenShaderPlatformInfoCondition
enum class EDataDrivenShaderPlatformInfoCondition : uint8 {
	COND_True = 0,
	COND_False = 1,
	COND_Max = 2
};

// Enum Engine.EDBufferTextureId
enum class EDBufferTextureId : uint8 {
	DBT_A = 0,
	DBT_B = 1,
	DBT_C = 2,
	DBT_MAX = 3
};

// Enum Engine.EDepthOfFieldFunctionValue
enum class EDepthOfFieldFunctionValue : uint8 {
	TDOF_NearAndFarMask = 0,
	TDOF_NearMask = 1,
	TDOF_FarMask = 2,
	TDOF_CircleOfConfusionRadius = 3,
	TDOF_MAX = 4
};

// Enum Engine.EFunctionInputType
enum class EFunctionInputType : uint8 {
	FunctionInput_Scalar = 0,
	FunctionInput_Vector2 = 1,
	FunctionInput_Vector3 = 2,
	FunctionInput_Vector4 = 3,
	FunctionInput_Texture2D = 4,
	FunctionInput_TextureCube = 5,
	FunctionInput_Texture2DArray = 6,
	FunctionInput_VolumeTexture = 7,
	FunctionInput_StaticBool = 8,
	FunctionInput_MaterialAttributes = 9,
	FunctionInput_TextureExternal = 10,
	FunctionInput_Bool = 11,
	FunctionInput_Substrate = 12,
	FunctionInput_MAX = 13
};

// Enum Engine.ENoiseFunction
enum class ENoiseFunction : uint8 {
	NOISEFUNCTION_SimplexTex = 0,
	NOISEFUNCTION_GradientTex = 1,
	NOISEFUNCTION_GradientTex3D = 2,
	NOISEFUNCTION_GradientALU = 3,
	NOISEFUNCTION_ValueALU = 4,
	NOISEFUNCTION_VoronoiALU = 5,
	NOISEFUNCTION_MAX = 6
};

// Enum Engine.EPathTracingBufferTextureId
enum class EPathTracingBufferTextureId : uint8 {
	PTBT_Radiance = 0,
	PTBT_DenoisedRadiance = 1,
	PTBT_Albedo = 2,
	PTBT_Normal = 3,
	PTBT_Variance = 4,
	PTBT_MAX = 5
};

// Enum Engine.ERuntimeVirtualTextureMipValueMode
enum class ERuntimeVirtualTextureMipValueMode : uint8 {
	RVTMVM_None = 0,
	RVTMVM_MipLevel = 1,
	RVTMVM_MipBias = 2,
	RVTMVM_RecalculateDerivatives = 3,
	RVTMVM_MAX = 4
};

// Enum Engine.ERuntimeVirtualTextureTextureAddressMode
enum class ERuntimeVirtualTextureTextureAddressMode : uint8 {
	RVTTA_Clamp = 0,
	RVTTA_Wrap = 1,
	RVTTA_MAX = 2
};

// Enum Engine.EMaterialSceneAttributeInputMode
enum class EMaterialSceneAttributeInputMode : uint8 {
	Coordinates = 0,
	OffsetFraction = 1,
	EMaterialSceneAttributeInputMode_MAX = 2
};

// Enum Engine.ESpeedTreeGeometryType
enum class ESpeedTreeGeometryType : uint8 {
	STG_Branch = 0,
	STG_Frond = 1,
	STG_Leaf = 2,
	STG_FacingLeaf = 3,
	STG_Billboard = 4,
	STG_MAX = 5
};

// Enum Engine.ESpeedTreeWindType
enum class ESpeedTreeWindType : uint8 {
	STW_None = 0,
	STW_Fastest = 1,
	STW_Fast = 2,
	STW_Better = 3,
	STW_Best = 4,
	STW_Palm = 5,
	STW_BestPlus = 6,
	STW_MAX = 7
};

// Enum Engine.ESpeedTreeLODType
enum class ESpeedTreeLODType : uint8 {
	STLOD_Pop = 0,
	STLOD_Smooth = 1,
	STLOD_MAX = 2
};

// Enum Engine.ESwitchMaterialOutputType
enum class ESwitchMaterialOutputType : uint8 {
	TMMOT_Float1 = 0,
	TMMOT_Float2 = 1,
	TMMOT_Float3 = 2,
	TMMOT_Float4 = 3,
	TMMOT_MAX = 4
};

// Enum Engine.EMaterialExposedTextureProperty
enum class EMaterialExposedTextureProperty : uint8 {
	TMTM_TextureSize = 0,
	TMTM_TexelSize = 1,
	TMTM_MAX = 2
};

// Enum Engine.EMaterialVectorCoordTransformSource
enum class EMaterialVectorCoordTransformSource : uint8 {
	TRANSFORMSOURCE_Tangent = 0,
	TRANSFORMSOURCE_Local = 1,
	TRANSFORMSOURCE_World = 2,
	TRANSFORMSOURCE_View = 3,
	TRANSFORMSOURCE_Camera = 4,
	TRANSFORMSOURCE_ParticleWorld = 5,
	TRANSFORMSOURCE_Instance = 6,
	TRANSFORMSOURCE_MAX = 7
};

// Enum Engine.EMaterialVectorCoordTransform
enum class EMaterialVectorCoordTransform : uint8 {
	TRANSFORM_Tangent = 0,
	TRANSFORM_Local = 1,
	TRANSFORM_World = 2,
	TRANSFORM_View = 3,
	TRANSFORM_Camera = 4,
	TRANSFORM_ParticleWorld = 5,
	TRANSFORM_Instance = 6,
	TRANSFORM_MAX = 7
};

// Enum Engine.EMaterialPositionTransformSource
enum class EMaterialPositionTransformSource : uint8 {
	TRANSFORMPOSSOURCE_Local = 0,
	TRANSFORMPOSSOURCE_World = 1,
	TRANSFORMPOSSOURCE_TranslatedWorld = 2,
	TRANSFORMPOSSOURCE_View = 3,
	TRANSFORMPOSSOURCE_Camera = 4,
	TRANSFORMPOSSOURCE_Particle = 5,
	TRANSFORMPOSSOURCE_Instance = 6,
	TRANSFORMPOSSOURCE_MAX = 7
};

// Enum Engine.EVectorNoiseFunction
enum class EVectorNoiseFunction : uint8 {
	VNF_CellnoiseALU = 0,
	VNF_VectorALU = 1,
	VNF_GradientALU = 2,
	VNF_CurlALU = 3,
	VNF_VoronoiALU = 4,
	VNF_MAX = 5
};

// Enum Engine.EMaterialExposedViewProperty
enum class EMaterialExposedViewProperty : uint8 {
	MEVP_BufferSize = 0,
	MEVP_FieldOfView = 1,
	MEVP_TanHalfFieldOfView = 2,
	MEVP_ViewSize = 3,
	MEVP_WorldSpaceViewPosition = 4,
	MEVP_WorldSpaceCameraPosition = 5,
	MEVP_ViewportOffset = 6,
	MEVP_TemporalSampleCount = 7,
	MEVP_TemporalSampleIndex = 8,
	MEVP_TemporalSampleOffset = 9,
	MEVP_RuntimeVirtualTextureOutputLevel = 10,
	MEVP_RuntimeVirtualTextureOutputDerivative = 11,
	MEVP_PreExposure = 12,
	MEVP_RuntimeVirtualTextureMaxLevel = 13,
	MEVP_ResolutionFraction = 14,
	MEVP_MAX = 15
};

// Enum Engine.EWorldPositionIncludedOffsets
enum class EWorldPositionIncludedOffsets : uint8 {
	WPT_Default = 0,
	WPT_ExcludeAllShaderOffsets = 1,
	WPT_CameraRelative = 2,
	WPT_CameraRelativeNoOffsets = 3,
	WPT_MAX = 4
};

// Enum Engine.EMaterialFunctionUsage
enum class EMaterialFunctionUsage : uint8 {
	Default = 0,
	MaterialLayer = 1,
	MaterialLayerBlend = 2,
	EMaterialFunctionUsage_MAX = 3
};

// Enum Engine.EMaterialUsage
enum class EMaterialUsage : uint8 {
	MATUSAGE_SkeletalMesh = 0,
	MATUSAGE_ParticleSprites = 1,
	MATUSAGE_BeamTrails = 2,
	MATUSAGE_MeshParticles = 3,
	MATUSAGE_StaticLighting = 4,
	MATUSAGE_MorphTargets = 5,
	MATUSAGE_SplineMesh = 6,
	MATUSAGE_InstancedStaticMeshes = 7,
	MATUSAGE_GeometryCollections = 8,
	MATUSAGE_Clothing = 9,
	MATUSAGE_NiagaraSprites = 10,
	MATUSAGE_NiagaraRibbons = 11,
	MATUSAGE_NiagaraMeshParticles = 12,
	MATUSAGE_GeometryCache = 13,
	MATUSAGE_Water = 14,
	MATUSAGE_HairStrands = 15,
	MATUSAGE_LidarPointCloud = 16,
	MATUSAGE_VirtualHeightfieldMesh = 17,
	MATUSAGE_Nanite = 18,
	MATUSAGE_VolumetricCloud = 19,
	MATUSAGE_HeterogeneousVolumes = 20,
	MATUSAGE_MAX = 21
};

// Enum Engine.EMaterialLayerLinkState
enum class EMaterialLayerLinkState : uint8 {
	Uninitialized = 0,
	LinkedToParent = 1,
	UnlinkedFromParent = 2,
	NotFromParent = 3,
	EMaterialLayerLinkState_MAX = 4
};

// Enum Engine.ETextureSizingType
enum class ETextureSizingType : uint8 {
	TextureSizingType_UseSingleTextureSize = 0,
	TextureSizingType_UseAutomaticBiasedSizes = 1,
	TextureSizingType_UseManualOverrideTextureSize = 2,
	TextureSizingType_UseSimplygonAutomaticSizing = 3,
	TextureSizingType_AutomaticFromTexelDensity = 4,
	TextureSizingType_AutomaticFromMeshScreenSize = 5,
	TextureSizingType_AutomaticFromMeshDrawDistance = 6,
	TextureSizingType_MAX = 7
};

// Enum Engine.EMaterialMergeType
enum class EMaterialMergeType : uint8 {
	MaterialMergeType_Default = 0,
	MaterialMergeType_Simplygon = 1,
	MaterialMergeType_MAX = 2
};

// Enum Engine.ESceneTextureId
enum class ESceneTextureId : uint8 {
	PPI_SceneColor = 0,
	PPI_SceneDepth = 1,
	PPI_DiffuseColor = 2,
	PPI_SpecularColor = 3,
	PPI_SubsurfaceColor = 4,
	PPI_BaseColor = 5,
	PPI_Specular = 6,
	PPI_Metallic = 7,
	PPI_WorldNormal = 8,
	PPI_SeparateTranslucency = 9,
	PPI_Opacity = 10,
	PPI_Roughness = 11,
	PPI_MaterialAO = 12,
	PPI_CustomDepth = 13,
	PPI_PostProcessInput0 = 14,
	PPI_PostProcessInput1 = 15,
	PPI_PostProcessInput2 = 16,
	PPI_PostProcessInput3 = 17,
	PPI_PostProcessInput4 = 18,
	PPI_PostProcessInput5 = 19,
	PPI_PostProcessInput6 = 20,
	PPI_DecalMask = 21,
	PPI_ShadingModelColor = 22,
	PPI_ShadingModelID = 23,
	PPI_AmbientOcclusion = 24,
	PPI_CustomStencil = 25,
	PPI_StoredBaseColor = 26,
	PPI_StoredSpecular = 27,
	PPI_Velocity = 28,
	PPI_WorldTangent = 29,
	PPI_Anisotropy = 30,
	PPI_AresStencil = 31,
	PPI_MAX = 32
};

// Enum Engine.ELWCFunctionKind
enum class ELWCFunctionKind : uint8 {
	Constructor = 0,
	Promote = 1,
	Demote = 2,
	Add = 3,
	Subtract = 4,
	Divide = 5,
	MultiplyVectorVector = 6,
	MultiplyVectorMatrix = 7,
	MultiplyMatrixMatrix = 8,
	Other = 9,
	Max = 10,
	ELWCFunctionKind_MAX = 11
};

// Enum Engine.EMaterialParameterAssociation
enum class EMaterialParameterAssociation : uint8 {
	LayerParameter = 0,
	BlendParameter = 1,
	GlobalParameter = 2,
	EMaterialParameterAssociation_MAX = 3
};

// Enum Engine.EMicroTransactionDelegate
enum class EMicroTransactionDelegate : uint8 {
	MTD_PurchaseQueryComplete = 0,
	MTD_PurchaseComplete = 1,
	MTD_MAX = 2
};

// Enum Engine.EMicroTransactionResult
enum class EMicroTransactionResult : uint8 {
	MTR_Succeeded = 0,
	MTR_Failed = 1,
	MTR_Canceled = 2,
	MTR_RestoredFromServer = 3,
	MTR_MAX = 4
};

// Enum Engine.ENavigationDataResolution
enum class ENavigationDataResolution : uint8 {
	Low = 0,
	Default = 1,
	High = 2,
	Invalid = 3,
	MAX = 3
};

// Enum Engine.ENavigationInvokerPriority
enum class ENavigationInvokerPriority : uint8 {
	VeryLow = 1,
	Low = 2,
	Default = 3,
	High = 4,
	VeryHigh = 5,
	MAX = 6
};

// Enum Engine.ENavLinkDirection
enum class ENavLinkDirection : uint8 {
	BothWays = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	ENavLinkDirection_MAX = 3
};

// Enum Engine.EPingType
enum class EPingType : uint8 {
	None = 0,
	RoundTrip = 1,
	RoundTripExclFrame = 2,
	ICMP = 4,
	UDPQoS = 8,
	Max = 8,
	Count = 4,
	EPingType_MAX = 9
};

// Enum Engine.EPingAverageType
enum class EPingAverageType : uint8 {
	None = 0,
	MovingAverage = 1,
	PlayerStateAvg = 2,
	EPingAverageType_MAX = 3
};

// Enum Engine.EParticleBurstMethod
enum class EParticleBurstMethod : uint8 {
	EPBM_Instant = 0,
	EPBM_Interpolated = 1,
	EPBM_MAX = 2
};

// Enum Engine.EParticleSubUVInterpMethod
enum class EParticleSubUVInterpMethod : uint8 {
	PSUVIM_None = 0,
	PSUVIM_Linear = 1,
	PSUVIM_Linear_Blend = 2,
	PSUVIM_Random = 3,
	PSUVIM_Random_Blend = 4,
	PSUVIM_MAX = 5
};

// Enum Engine.EEmitterRenderMode
enum class EEmitterRenderMode : uint8 {
	ERM_Normal = 0,
	ERM_Point = 1,
	ERM_Cross = 2,
	ERM_LightsOnly = 3,
	ERM_None = 4,
	ERM_MAX = 5
};

// Enum Engine.EParticleDetailMode
enum class EParticleDetailMode : uint8 {
	PDM_Low = 0,
	PDM_Medium = 1,
	PDM_High = 2,
	PDM_Epic = 3,
	PDM_MAX = 4
};

// Enum Engine.EParticleSignificanceLevel
enum class EParticleSignificanceLevel : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Critical = 3,
	Num = 4,
	EParticleSignificanceLevel_MAX = 5
};

// Enum Engine.EParticleSystemInsignificanceReaction
enum class EParticleSystemInsignificanceReaction : uint8 {
	Auto = 0,
	Complete = 1,
	DisableTick = 2,
	DisableTickAndKill = 3,
	Num = 4,
	EParticleSystemInsignificanceReaction_MAX = 5
};

// Enum Engine.EModuleType
enum class EModuleType : uint8 {
	EPMT_General = 0,
	EPMT_TypeData = 1,
	EPMT_Beam = 2,
	EPMT_Trail = 3,
	EPMT_Spawn = 4,
	EPMT_Required = 5,
	EPMT_Event = 6,
	EPMT_Light = 7,
	EPMT_SubUV = 8,
	EPMT_MAX = 9
};

// Enum Engine.EParticleSourceSelectionMethod
enum class EParticleSourceSelectionMethod : uint8 {
	EPSSM_Random = 0,
	EPSSM_Sequential = 1,
	EPSSM_MAX = 2
};

// Enum Engine.EAttractorParticleSelectionMethod
enum class EAttractorParticleSelectionMethod : uint8 {
	EAPSM_Random = 0,
	EAPSM_Sequential = 1,
	EAPSM_MAX = 2
};

// Enum Engine.Beam2SourceTargetMethod
enum class Beam2SourceTargetMethod : uint8 {
	PEB2STM_Default = 0,
	PEB2STM_UserSet = 1,
	PEB2STM_Emitter = 2,
	PEB2STM_Particle = 3,
	PEB2STM_Actor = 4,
	PEB2STM_Socket = 5,
	PEB2STM_MAX = 6
};

// Enum Engine.Beam2SourceTargetTangentMethod
enum class Beam2SourceTargetTangentMethod : uint8 {
	PEB2STTM_Direct = 0,
	PEB2STTM_UserSet = 1,
	PEB2STTM_Distribution = 2,
	PEB2STTM_Emitter = 3,
	PEB2STTM_MAX = 4
};

// Enum Engine.BeamModifierType
enum class BeamModifierType : uint8 {
	PEB2MT_Source = 0,
	PEB2MT_Target = 1,
	PEB2MT_MAX = 2
};

// Enum Engine.EParticleCameraOffsetUpdateMethod
enum class EParticleCameraOffsetUpdateMethod : uint8 {
	EPCOUM_DirectSet = 0,
	EPCOUM_Additive = 1,
	EPCOUM_Scalar = 2,
	EPCOUM_MAX = 3
};

// Enum Engine.EParticleCollisionComplete
enum class EParticleCollisionComplete : uint8 {
	EPCC_Kill = 0,
	EPCC_Freeze = 1,
	EPCC_HaltCollisions = 2,
	EPCC_FreezeTranslation = 3,
	EPCC_FreezeRotation = 4,
	EPCC_FreezeMovement = 5,
	EPCC_MAX = 6
};

// Enum Engine.EParticleCollisionResponse
enum class EParticleCollisionResponse : uint8 {
	Bounce = 0,
	Stop = 1,
	Kill = 2,
	EParticleCollisionResponse_MAX = 3
};

// Enum Engine.EAresParticleVariantColor
enum class EAresParticleVariantColor : uint8 {
	AresVariantBaseColor = 0,
	AresVariant1Color = 1,
	AresVariant2Color = 2,
	AresVariant3Color = 3,
	AresVariantRadiantColor = 4,
	EAresParticleVariantColor_MAX = 5
};

// Enum Engine.ELocationBoneSocketSource
enum class ELocationBoneSocketSource : uint8 {
	BONESOCKETSOURCE_Bones = 0,
	BONESOCKETSOURCE_Sockets = 1,
	BONESOCKETSOURCE_MAX = 2
};

// Enum Engine.ELocationBoneSocketSelectionMethod
enum class ELocationBoneSocketSelectionMethod : uint8 {
	BONESOCKETSEL_Sequential = 0,
	BONESOCKETSEL_Random = 1,
	BONESOCKETSEL_MAX = 2
};

// Enum Engine.ELocationEmitterSelectionMethod
enum class ELocationEmitterSelectionMethod : uint8 {
	ELESM_Random = 0,
	ELESM_Sequential = 1,
	ELESM_MAX = 2
};

// Enum Engine.CylinderHeightAxis
enum class CylinderHeightAxis : uint8 {
	PMLPC_HEIGHTAXIS_X = 0,
	PMLPC_HEIGHTAXIS_Y = 1,
	PMLPC_HEIGHTAXIS_Z = 2,
	PMLPC_HEIGHTAXIS_MAX = 3
};

// Enum Engine.ELocationSkelVertSurfaceSource
enum class ELocationSkelVertSurfaceSource : uint8 {
	VERTSURFACESOURCE_Vert = 0,
	VERTSURFACESOURCE_Surface = 1,
	VERTSURFACESOURCE_MAX = 2
};

// Enum Engine.EOrbitChainMode
enum class EOrbitChainMode : uint8 {
	EOChainMode_Add = 0,
	EOChainMode_Scale = 1,
	EOChainMode_Link = 2,
	EOChainMode_MAX = 3
};

// Enum Engine.EParticleAxisLock
enum class EParticleAxisLock : uint8 {
	EPAL_NONE = 0,
	EPAL_X = 1,
	EPAL_Y = 2,
	EPAL_Z = 3,
	EPAL_NEGATIVE_X = 4,
	EPAL_NEGATIVE_Y = 5,
	EPAL_NEGATIVE_Z = 6,
	EPAL_ROTATE_X = 7,
	EPAL_ROTATE_Y = 8,
	EPAL_ROTATE_Z = 9,
	EPAL_MAX = 10
};

// Enum Engine.EEmitterDynamicParameterValue
enum class EEmitterDynamicParameterValue : uint8 {
	EDPV_UserSet = 0,
	EDPV_AutoSet = 1,
	EDPV_VelocityX = 2,
	EDPV_VelocityY = 3,
	EDPV_VelocityZ = 4,
	EDPV_VelocityMag = 5,
	EDPV_MAX = 6
};

// Enum Engine.EParticleUVFlipMode
enum class EParticleUVFlipMode : uint8 {
	None = 0,
	FlipUV = 1,
	FlipUOnly = 2,
	FlipVOnly = 3,
	RandomFlipUV = 4,
	RandomFlipUOnly = 5,
	RandomFlipVOnly = 6,
	RandomFlipUVIndependent = 7,
	EParticleUVFlipMode_MAX = 8
};

// Enum Engine.EParticleSortMode
enum class EParticleSortMode : uint8 {
	PSORTMODE_None = 0,
	PSORTMODE_ViewProjDepth = 1,
	PSORTMODE_DistanceToView = 2,
	PSORTMODE_Age_OldestFirst = 3,
	PSORTMODE_Age_NewestFirst = 4,
	PSORTMODE_MAX = 5
};

// Enum Engine.EEmitterNormalsMode
enum class EEmitterNormalsMode : uint8 {
	ENM_CameraFacing = 0,
	ENM_Spherical = 1,
	ENM_Cylindrical = 2,
	ENM_MAX = 3
};

// Enum Engine.ETrail2SourceMethod
enum class ETrail2SourceMethod : uint8 {
	PET2SRCM_Default = 0,
	PET2SRCM_Particle = 1,
	PET2SRCM_Actor = 2,
	PET2SRCM_MAX = 3
};

// Enum Engine.EBeam2Method
enum class EBeam2Method : uint8 {
	PEB2M_Distance = 0,
	PEB2M_Target = 1,
	PEB2M_Branch = 2,
	PEB2M_MAX = 3
};

// Enum Engine.EBeamTaperMethod
enum class EBeamTaperMethod : uint8 {
	PEBTM_None = 0,
	PEBTM_Full = 1,
	PEBTM_Partial = 2,
	PEBTM_MAX = 3
};

// Enum Engine.EMeshScreenAlignment
enum class EMeshScreenAlignment : uint8 {
	PSMA_MeshFaceCameraWithRoll = 0,
	PSMA_MeshFaceCameraWithSpin = 1,
	PSMA_MeshFaceCameraWithLockedAxis = 2,
	PSMA_MAX = 3
};

// Enum Engine.EMeshCameraFacingUpAxis
enum class EMeshCameraFacingUpAxis : uint8 {
	CameraFacing_NoneUP = 0,
	CameraFacing_ZUp = 1,
	CameraFacing_NegativeZUp = 2,
	CameraFacing_YUp = 3,
	CameraFacing_NegativeYUp = 4,
	CameraFacing_MAX = 5
};

// Enum Engine.EMeshCameraFacingOptions
enum class EMeshCameraFacingOptions : uint8 {
	XAxisFacing_NoUp = 0,
	XAxisFacing_ZUp = 1,
	XAxisFacing_NegativeZUp = 2,
	XAxisFacing_YUp = 3,
	XAxisFacing_NegativeYUp = 4,
	LockedAxis_ZAxisFacing = 5,
	LockedAxis_NegativeZAxisFacing = 6,
	LockedAxis_YAxisFacing = 7,
	LockedAxis_NegativeYAxisFacing = 8,
	VelocityAligned_ZAxisFacing = 9,
	VelocityAligned_NegativeZAxisFacing = 10,
	VelocityAligned_YAxisFacing = 11,
	VelocityAligned_NegativeYAxisFacing = 12,
	EMeshCameraFacingOptions_MAX = 13
};

// Enum Engine.ETrailsRenderAxisOption
enum class ETrailsRenderAxisOption : uint8 {
	Trails_CameraUp = 0,
	Trails_SourceUp = 1,
	Trails_WorldUp = 2,
	Trails_MAX = 3
};

// Enum Engine.EParticleScreenAlignment
enum class EParticleScreenAlignment : uint8 {
	PSA_FacingCameraPosition = 0,
	PSA_Square = 1,
	PSA_Rectangle = 2,
	PSA_Velocity = 3,
	PSA_AwayFromCenter = 4,
	PSA_TypeSpecific = 5,
	PSA_FacingCameraDistanceBlend = 6,
	PSA_MAX = 7
};

// Enum Engine.EParticlePreviewTeamColor
enum class EParticlePreviewTeamColor : uint8 {
	base = 0,
	DefaultEnemy = 1,
	TritanopiaEnemy = 2,
	DeuteranopiaEnemy = 3,
	ProtanopiaEnemy = 4,
	Defender = 5,
	CustomColor = 6,
	EParticlePreviewTeamColor_MAX = 7
};

// Enum Engine.EParticleSystemUpdateMode
enum class EParticleSystemUpdateMode : uint8 {
	EPSUM_RealTime = 0,
	EPSUM_FixedTime = 1,
	EPSUM_MAX = 2
};

// Enum Engine.ParticleSystemLODMethod
enum class ParticleSystemLODMethod : uint8 {
	PARTICLESYSTEMLODMETHOD_Automatic = 0,
	PARTICLESYSTEMLODMETHOD_DirectSet = 1,
	PARTICLESYSTEMLODMETHOD_ActivateAutomatic = 2,
	PARTICLESYSTEMLODMETHOD_MAX = 3
};

// Enum Engine.EParticleSystemOcclusionBoundsMethod
enum class EParticleSystemOcclusionBoundsMethod : uint8 {
	EPSOBM_None = 0,
	EPSOBM_ParticleBounds = 1,
	EPSOBM_CustomBounds = 2,
	EPSOBM_MAX = 3
};

// Enum Engine.EParticleSysParamType
enum class EParticleSysParamType : uint8 {
	PSPT_None = 0,
	PSPT_Scalar = 1,
	PSPT_ScalarRand = 2,
	PSPT_Vector = 3,
	PSPT_VectorRand = 4,
	PSPT_Color = 5,
	PSPT_Actor = 6,
	PSPT_Material = 7,
	PSPT_VectorUnitRand = 8,
	PSPT_MAX = 9
};

// Enum Engine.ParticleReplayState
enum class ParticleReplayState : uint8 {
	PRS_Disabled = 0,
	PRS_Capturing = 1,
	PRS_Replaying = 2,
	PRS_MAX = 3
};

// Enum Engine.EParticleEventType
enum class EParticleEventType : uint8 {
	EPET_Any = 0,
	EPET_Spawn = 1,
	EPET_Death = 2,
	EPET_Collision = 3,
	EPET_Burst = 4,
	EPET_Blueprint = 5,
	EPET_MAX = 6
};

// Enum Engine.EViewTargetBlendFunction
enum class EViewTargetBlendFunction : uint8 {
	VTBlend_Linear = 0,
	VTBlend_Cubic = 1,
	VTBlend_EaseIn = 2,
	VTBlend_EaseOut = 3,
	VTBlend_EaseInOut = 4,
	VTBlend_PreBlended = 5,
	VTBlend_MAX = 6
};

// Enum Engine.EViewTargetBlendOrder
enum class EViewTargetBlendOrder : uint8 {
	VTBlendOrder_Base = 0,
	VTBlendOrder_Override = 1,
	VTBlendOrder_MAX = 2
};

// Enum Engine.ERichCurveInterpMode
enum class ERichCurveInterpMode : uint8 {
	RCIM_Linear = 0,
	RCIM_Constant = 1,
	RCIM_Cubic = 2,
	RCIM_None = 3,
	RCIM_MAX = 4
};

// Enum Engine.ERichCurveExtrapolation
enum class ERichCurveExtrapolation : uint8 {
	RCCE_Cycle = 0,
	RCCE_CycleWithOffset = 1,
	RCCE_Oscillate = 2,
	RCCE_Linear = 3,
	RCCE_Constant = 4,
	RCCE_None = 5,
	RCCE_MAX = 6
};

// Enum Engine.ReverbPreset
enum class ReverbPreset : uint8 {
	REVERB_Default = 0,
	REVERB_Bathroom = 1,
	REVERB_StoneRoom = 2,
	REVERB_Auditorium = 3,
	REVERB_ConcertHall = 4,
	REVERB_Cave = 5,
	REVERB_Hallway = 6,
	REVERB_StoneCorridor = 7,
	REVERB_Alley = 8,
	REVERB_Forest = 9,
	REVERB_City = 10,
	REVERB_Mountains = 11,
	REVERB_Quarry = 12,
	REVERB_Plain = 13,
	REVERB_ParkingLot = 14,
	REVERB_SewerPipe = 15,
	REVERB_Underwater = 16,
	REVERB_SmallRoom = 17,
	REVERB_MediumRoom = 18,
	REVERB_LargeRoom = 19,
	REVERB_MediumHall = 20,
	REVERB_LargeHall = 21,
	REVERB_Plate = 22,
	REVERB_MAX = 23
};

// Enum Engine.ERichCurveTangentMode
enum class ERichCurveTangentMode : uint8 {
	RCTM_Auto = 0,
	RCTM_User = 1,
	RCTM_Break = 2,
	RCTM_None = 3,
	RCTM_SmartAuto = 4,
	RCTM_MAX = 5
};

// Enum Engine.ERichCurveTangentWeightMode
enum class ERichCurveTangentWeightMode : uint8 {
	RCTWM_WeightedNone = 0,
	RCTWM_WeightedArrive = 1,
	RCTWM_WeightedLeave = 2,
	RCTWM_WeightedBoth = 3,
	RCTWM_MAX = 4
};

// Enum Engine.ERichCurveCompressionFormat
enum class ERichCurveCompressionFormat : uint8 {
	RCCF_Empty = 0,
	RCCF_Constant = 1,
	RCCF_Linear = 2,
	RCCF_Cubic = 3,
	RCCF_Mixed = 4,
	RCCF_Weighted = 5,
	RCCF_MAX = 6
};

// Enum Engine.ERichCurveKeyTimeCompressionFormat
enum class ERichCurveKeyTimeCompressionFormat : uint8 {
	RCKTCF_uint16 = 0,
	RCKTCF_float32 = 1,
	RCKTCF_MAX = 2
};

// Enum Engine.ERuntimeVirtualTextureMaterialType
enum class ERuntimeVirtualTextureMaterialType : uint8 {
	BaseColor = 0,
	BaseColor_Normal_DEPRECATED = 1,
	BaseColor_Normal_Roughness = 2,
	BaseColor_Normal_Specular = 3,
	BaseColor_Normal_Specular_YCoCg = 4,
	BaseColor_Normal_Specular_Mask_YCoCg = 5,
	WorldHeight = 6,
	Count = 7,
	ERuntimeVirtualTextureMaterialType_MAX = 8
};

// Enum Engine.EDepthOfFieldMethod
enum class EDepthOfFieldMethod : uint8 {
	DOFM_BokehDOF = 0,
	DOFM_Gaussian = 1,
	DOFM_CircleDOF = 2,
	DOFM_MAX = 3
};

// Enum Engine.EAutoExposureMethod
enum class EAutoExposureMethod : uint8 {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3
};

// Enum Engine.EBloomMethod
enum class EBloomMethod : uint8 {
	BM_SOG = 0,
	BM_FFT = 1,
	BM_MAX = 2
};

// Enum Engine.ETemperatureMethod
enum class ETemperatureMethod : uint8 {
	TEMP_WhiteBalance = 0,
	TEMP_ColorTemperature = 1,
	TEMP_MAX = 2
};

// Enum Engine.ELightUnits
enum class ELightUnits : uint8 {
	Unitless = 0,
	Candelas = 1,
	Lumens = 2,
	EV = 3,
	ELightUnits_MAX = 4
};

// Enum Engine.EReflectionsType
enum class EReflectionsType : uint8 {
	ScreenSpace = 0,
	RayTracing = 1,
	EReflectionsType_MAX = 2
};

// Enum Engine.ELumenRayLightingModeOverride
enum class ELumenRayLightingModeOverride : uint8 {
	Default = 0,
	SurfaceCache = 1,
	HitLighting = 2,
	ELumenRayLightingModeOverride_MAX = 3
};

// Enum Engine.ETranslucencyType
enum class ETranslucencyType : uint8 {
	Raster = 0,
	RayTracing = 1,
	ETranslucencyType_MAX = 2
};

// Enum Engine.ERayTracingGlobalIlluminationType
enum class ERayTracingGlobalIlluminationType : uint8 {
	Disabled = 0,
	BruteForce = 1,
	FinalGather = 2,
	ERayTracingGlobalIlluminationType_MAX = 3
};

// Enum Engine.EReflectedAndRefractedRayTracedShadows
enum class EReflectedAndRefractedRayTracedShadows : uint8 {
	Disabled = 0,
	Hard_shadows = 1,
	Area_shadows = 2,
	EReflectedAndRefractedRayTracedShadows_MAX = 3
};

// Enum Engine.EAresClarityBlendMode
enum class EAresClarityBlendMode : uint8 {
	SoftLight = 0,
	Overlay = 1,
	HardLight = 2,
	Multiply = 3,
	VividLight = 4,
	LinearLight = 5,
	Addition = 6,
	EAresClarityBlendMode_MAX = 7
};

// Enum Engine.EMobilePlanarReflectionMode
enum class EMobilePlanarReflectionMode : uint8 {
	Usual = 0,
	MobilePPRExclusive = 1,
	MobilePPR = 2,
	EMobilePlanarReflectionMode_MAX = 3
};

// Enum Engine.EMobilePixelProjectedReflectionQuality
enum class EMobilePixelProjectedReflectionQuality : uint8 {
	Disabled = 0,
	BestPerformance = 1,
	BetterQuality = 2,
	BestQuality = 3,
	EMobilePixelProjectedReflectionQuality_MAX = 4
};

// Enum Engine.EMaterialQualityLevel
enum class EMaterialQualityLevel : uint8 {
	Low = 0,
	High = 1,
	Medium = 2,
	Epic = 3,
	Num = 4,
	EMaterialQualityLevel_MAX = 5
};

// Enum Engine.EMaterialProperty
enum class EMaterialProperty : uint8 {
	MP_EmissiveColor = 0,
	MP_Opacity = 1,
	MP_OpacityMask = 2,
	MP_DiffuseColor = 3,
	MP_SpecularColor = 4,
	MP_BaseColor = 5,
	MP_Metallic = 6,
	MP_Specular = 7,
	MP_Roughness = 8,
	MP_Anisotropy = 9,
	MP_Normal = 10,
	MP_Tangent = 11,
	MP_WorldPositionOffset = 12,
	MP_WorldDisplacement_DEPRECATED = 13,
	MP_TessellationMultiplier_DEPRECATED = 14,
	MP_SubsurfaceColor = 15,
	MP_CustomData0 = 16,
	MP_CustomData1 = 17,
	MP_AmbientOcclusion = 18,
	MP_Refraction = 19,
	MP_CustomizedUVs0 = 20,
	MP_CustomizedUVs1 = 21,
	MP_CustomizedUVs2 = 22,
	MP_CustomizedUVs3 = 23,
	MP_CustomizedUVs4 = 24,
	MP_CustomizedUVs5 = 25,
	MP_CustomizedUVs6 = 26,
	MP_CustomizedUVs7 = 27,
	MP_PixelDepthOffset = 28,
	MP_ShadingModel = 29,
	MP_AresDirectionality = 30,
	MP_AresDirectionalityTint = 31,
	MP_AresDynamicShadowIntensity = 32,
	MP_AresCustomDataColor0 = 33,
	MP_AresCustomDataColor1 = 34,
	MP_AresVertexFogIntensity = 35,
	MP_FrontMaterial = 36,
	MP_SurfaceThickness = 37,
	MP_Displacement = 38,
	MP_MaterialAttributes = 39,
	MP_CustomOutput = 40,
	MP_MAX = 41
};

// Enum Engine.EAntiAliasingMethod
enum class EAntiAliasingMethod : uint8 {
	AAM_None = 0,
	AAM_FXAA = 1,
	AAM_TemporalAA = 2,
	AAM_MSAA = 3,
	AAM_TSR = 4,
	AAM_MAX = 5
};

// Enum Engine.SkeletalMeshTerminationCriterion
enum class SkeletalMeshTerminationCriterion : uint8 {
	SMTC_NumOfTriangles = 0,
	SMTC_NumOfVerts = 1,
	SMTC_TriangleOrVert = 2,
	SMTC_AbsNumOfTriangles = 3,
	SMTC_AbsNumOfVerts = 4,
	SMTC_AbsTriangleOrVert = 5,
	SMTC_MAX = 6
};

// Enum Engine.SkeletalMeshOptimizationType
enum class SkeletalMeshOptimizationType : uint8 {
	SMOT_NumOfTriangles = 0,
	SMOT_MaxDeviation = 1,
	SMOT_TriangleOrDeviation = 2,
	SMOT_MAX = 3
};

// Enum Engine.SkeletalMeshOptimizationImportance
enum class SkeletalMeshOptimizationImportance : uint8 {
	SMOI_Off = 0,
	SMOI_Lowest = 1,
	SMOI_Low = 2,
	SMOI_Normal = 3,
	SMOI_High = 4,
	SMOI_Highest = 5,
	SMOI_MAX = 6
};

// Enum Engine.EBoneVisibilityStatus
enum class EBoneVisibilityStatus : uint8 {
	BVS_HiddenByParent = 0,
	BVS_Visible = 1,
	BVS_ExplicitlyHidden = 2,
	BVS_MAX = 3
};

// Enum Engine.EPhysBodyOp
enum class EPhysBodyOp : uint8 {
	PBO_None = 0,
	PBO_Term = 1,
	PBO_MAX = 2
};

// Enum Engine.EVisibilityBasedAnimTickOption
enum class EVisibilityBasedAnimTickOption : uint8 {
	AlwaysTickPoseAndRefreshBones = 0,
	AlwaysTickPose = 1,
	OnlyTickMontagesWhenNotRendered = 2,
	OnlyTickPoseWhenRendered = 3,
	EVisibilityBasedAnimTickOption_MAX = 4
};

// Enum Engine.EBoneSpaces
enum class EBoneSpaces : uint8 {
	WorldSpace = 0,
	ComponentSpace = 1,
	EBoneSpaces_MAX = 2
};

// Enum Engine.EDedicatedServerAnimationStatus
enum class EDedicatedServerAnimationStatus : uint8 {
	Automatic = 0,
	AnimateOnServer = 1,
	DoNotAnimateOnServer = 2,
	EDedicatedServerAnimationStatus_MAX = 3
};

// Enum Engine.ESkyLightSourceType
enum class ESkyLightSourceType : uint8 {
	SLS_CapturedScene = 0,
	SLS_SpecifiedCubemap = 1,
	SLS_MAX = 2
};

// Enum Engine.ESoundDistanceCalc
enum class ESoundDistanceCalc : uint8 {
	SOUNDDISTANCE_Normal = 0,
	SOUNDDISTANCE_InfiniteXYPlane = 1,
	SOUNDDISTANCE_InfiniteXZPlane = 2,
	SOUNDDISTANCE_InfiniteYZPlane = 3,
	SOUNDDISTANCE_MAX = 4
};

// Enum Engine.ESoundSpatializationAlgorithm
enum class ESoundSpatializationAlgorithm : uint8 {
	SPATIALIZATION_Default = 0,
	SPATIALIZATION_HRTF = 1,
	SPATIALIZATION_MAX = 2
};

// Enum Engine.EAirAbsorptionMethod
enum class EAirAbsorptionMethod : uint8 {
	Linear = 0,
	CustomCurve = 1,
	EAirAbsorptionMethod_MAX = 2
};

// Enum Engine.EReverbSendMethod
enum class EReverbSendMethod : uint8 {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	EReverbSendMethod_MAX = 3
};

// Enum Engine.ESubmixSendMethod
enum class ESubmixSendMethod : uint8 {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESubmixSendMethod_MAX = 3
};

// Enum Engine.EPriorityAttenuationMethod
enum class EPriorityAttenuationMethod : uint8 {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	EPriorityAttenuationMethod_MAX = 3
};

// Enum Engine.ENonSpatializedRadiusSpeakerMapMode
enum class ENonSpatializedRadiusSpeakerMapMode : uint8 {
	OmniDirectional = 0,
	Direct2D = 1,
	Surround2D = 2,
	ENonSpatializedRadiusSpeakerMapMode_MAX = 3
};

// Enum Engine.ESoundGroup
enum class ESoundGroup : uint8 {
	SOUNDGROUP_Default = 0,
	SOUNDGROUP_Effects = 1,
	SOUNDGROUP_UI = 2,
	SOUNDGROUP_Music = 3,
	SOUNDGROUP_Voice = 4,
	SOUNDGROUP_GameSoundGroup1 = 5,
	SOUNDGROUP_GameSoundGroup2 = 6,
	SOUNDGROUP_GameSoundGroup3 = 7,
	SOUNDGROUP_GameSoundGroup4 = 8,
	SOUNDGROUP_GameSoundGroup5 = 9,
	SOUNDGROUP_GameSoundGroup6 = 10,
	SOUNDGROUP_GameSoundGroup7 = 11,
	SOUNDGROUP_GameSoundGroup8 = 12,
	SOUNDGROUP_GameSoundGroup9 = 13,
	SOUNDGROUP_GameSoundGroup10 = 14,
	SOUNDGROUP_GameSoundGroup11 = 15,
	SOUNDGROUP_GameSoundGroup12 = 16,
	SOUNDGROUP_GameSoundGroup13 = 17,
	SOUNDGROUP_GameSoundGroup14 = 18,
	SOUNDGROUP_GameSoundGroup15 = 19,
	SOUNDGROUP_GameSoundGroup16 = 20,
	SOUNDGROUP_GameSoundGroup17 = 21,
	SOUNDGROUP_GameSoundGroup18 = 22,
	SOUNDGROUP_GameSoundGroup19 = 23,
	SOUNDGROUP_GameSoundGroup20 = 24,
	SOUNDGROUP_MAX = 25
};

// Enum Engine.ModulationParamMode
enum class ModulationParamMode : uint8 {
	MPM_Normal = 0,
	MPM_Abs = 1,
	MPM_Direct = 2,
	MPM_MAX = 3
};

// Enum Engine.ESourceBusSendLevelControlMethod
enum class ESourceBusSendLevelControlMethod : uint8 {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESourceBusSendLevelControlMethod_MAX = 3
};

// Enum Engine.EDecompressionType
enum class EDecompressionType : uint8 {
	DTYPE_Setup = 0,
	DTYPE_Invalid = 1,
	DTYPE_Preview = 2,
	DTYPE_Native = 3,
	DTYPE_RealTime = 4,
	DTYPE_Procedural = 5,
	DTYPE_Xenon = 6,
	DTYPE_Streaming = 7,
	DTYPE_MAX = 8
};

// Enum Engine.ESoundWaveFFTSize
enum class ESoundWaveFFTSize : uint8 {
	VerySmall_65 = 0,
	Small_257 = 1,
	Medium_513 = 2,
	Large_1025 = 3,
	VeryLarge_2049 = 4,
	ESoundWaveFFTSize_MAX = 5
};

// Enum Engine.ESoundAssetCompressionType
enum class ESoundAssetCompressionType : uint8 {
	BinkAudio = 0,
	ADPCM = 1,
	PCM = 2,
	PlatformSpecific = 3,
	ProjectDefined = 4,
	ESoundAssetCompressionType_MAX = 5
};

// Enum Engine.ESoundWaveLoadingBehavior
enum class ESoundWaveLoadingBehavior : uint8 {
	Inherited = 0,
	RetainOnLoad = 1,
	PrimeOnLoad = 2,
	LoadOnDemand = 3,
	ForceInline = 4,
	Uninitialized = 255,
	ESoundWaveLoadingBehavior_MAX = 256
};

// Enum Engine.EStereoLayerType
enum class EStereoLayerType : uint8 {
	SLT_WorldLocked = 0,
	SLT_TrackerLocked = 1,
	SLT_FaceLocked = 2,
	SLT_MAX = 3
};

// Enum Engine.EStereoLayerShape
enum class EStereoLayerShape : uint8 {
	SLSH_QuadLayer = 0,
	SLSH_CylinderLayer = 1,
	SLSH_CubemapLayer = 2,
	SLSH_EquirectLayer = 3,
	SLSH_MAX = 4
};

// Enum Engine.EChunkSeekTableMode
enum class EChunkSeekTableMode : uint8 {
	ConstantSamplesPerEntry = 0,
	VariableSamplesPerEntry = 1,
	EChunkSeekTableMode_MAX = 2
};

// Enum Engine.ESubUVBoundingVertexCount
enum class ESubUVBoundingVertexCount : uint8 {
	BVC_FourVertices = 0,
	BVC_EightVertices = 1,
	BVC_MAX = 2
};

// Enum Engine.EOpacitySourceMode
enum class EOpacitySourceMode : uint8 {
	OSM_Alpha = 0,
	OSM_ColorBrightness = 1,
	OSM_RedChannel = 2,
	OSM_GreenChannel = 3,
	OSM_BlueChannel = 4,
	OSM_MAX = 5
};

// Enum Engine.EHorizTextAligment
enum class EHorizTextAligment : uint8 {
	EHTA_Left = 0,
	EHTA_Center = 1,
	EHTA_Right = 2,
	EHTA_MAX = 3
};

// Enum Engine.EVerticalTextAligment
enum class EVerticalTextAligment : uint8 {
	EVRTA_TextTop = 0,
	EVRTA_TextCenter = 1,
	EVRTA_TextBottom = 2,
	EVRTA_QuadTop = 3,
	EVRTA_MAX = 4
};

// Enum Engine.TextureGroup
enum class TextureGroup : uint8 {
	TEXTUREGROUP_World = 0,
	TEXTUREGROUP_WorldNormalMap = 1,
	TEXTUREGROUP_WorldSpecular = 2,
	TEXTUREGROUP_Character = 3,
	TEXTUREGROUP_CharacterNormalMap = 4,
	TEXTUREGROUP_CharacterSpecular = 5,
	TEXTUREGROUP_Weapon = 6,
	TEXTUREGROUP_WeaponNormalMap = 7,
	TEXTUREGROUP_WeaponSpecular = 8,
	TEXTUREGROUP_Vehicle = 9,
	TEXTUREGROUP_VehicleNormalMap = 10,
	TEXTUREGROUP_VehicleSpecular = 11,
	TEXTUREGROUP_Cinematic = 12,
	TEXTUREGROUP_Effects = 13,
	TEXTUREGROUP_EffectsNotFiltered = 14,
	TEXTUREGROUP_Skybox = 15,
	TEXTUREGROUP_UI = 16,
	TEXTUREGROUP_Lightmap = 17,
	TEXTUREGROUP_RenderTarget = 18,
	TEXTUREGROUP_MobileFlattened = 19,
	TEXTUREGROUP_ProcBuilding_Face = 20,
	TEXTUREGROUP_ProcBuilding_LightMap = 21,
	TEXTUREGROUP_Shadowmap = 22,
	TEXTUREGROUP_ColorLookupTable = 23,
	TEXTUREGROUP_Terrain_Heightmap = 24,
	TEXTUREGROUP_Terrain_Weightmap = 25,
	TEXTUREGROUP_Bokeh = 26,
	TEXTUREGROUP_IESLightProfile = 27,
	TEXTUREGROUP_Pixels2D = 28,
	TEXTUREGROUP_HierarchicalLOD = 29,
	TEXTUREGROUP_Impostor = 30,
	TEXTUREGROUP_ImpostorNormalDepth = 31,
	TEXTUREGROUP_8BitData = 32,
	TEXTUREGROUP_16BitData = 33,
	TEXTUREGROUP_Project01 = 34,
	TEXTUREGROUP_Project02 = 35,
	TEXTUREGROUP_Project03 = 36,
	TEXTUREGROUP_Project04 = 37,
	TEXTUREGROUP_Project05 = 38,
	TEXTUREGROUP_Project06 = 39,
	TEXTUREGROUP_Project07 = 40,
	TEXTUREGROUP_Project08 = 41,
	TEXTUREGROUP_Project09 = 42,
	TEXTUREGROUP_Project10 = 43,
	TEXTUREGROUP_Project11 = 44,
	TEXTUREGROUP_Project12 = 45,
	TEXTUREGROUP_Project13 = 46,
	TEXTUREGROUP_Project14 = 47,
	TEXTUREGROUP_Project15 = 48,
	TEXTUREGROUP_Project16 = 49,
	TEXTUREGROUP_Project17 = 50,
	TEXTUREGROUP_Project18 = 51,
	TEXTUREGROUP_Project19 = 52,
	TEXTUREGROUP_Project20 = 53,
	TEXTUREGROUP_Project21 = 54,
	TEXTUREGROUP_Project22 = 55,
	TEXTUREGROUP_Project23 = 56,
	TEXTUREGROUP_Project24 = 57,
	TEXTUREGROUP_Project25 = 58,
	TEXTUREGROUP_Project26 = 59,
	TEXTUREGROUP_Project27 = 60,
	TEXTUREGROUP_Project28 = 61,
	TEXTUREGROUP_Project29 = 62,
	TEXTUREGROUP_Project30 = 63,
	TEXTUREGROUP_Project31 = 64,
	TEXTUREGROUP_Project32 = 65,
	TEXTUREGROUP_MAX = 66
};

// Enum Engine.TextureMipGenSettings
enum class TextureMipGenSettings : uint8 {
	TMGS_FromTextureGroup = 0,
	TMGS_SimpleAverage = 1,
	TMGS_Sharpen0 = 2,
	TMGS_Sharpen1 = 3,
	TMGS_Sharpen2 = 4,
	TMGS_Sharpen3 = 5,
	TMGS_Sharpen4 = 6,
	TMGS_Sharpen5 = 7,
	TMGS_Sharpen6 = 8,
	TMGS_Sharpen7 = 9,
	TMGS_Sharpen8 = 10,
	TMGS_Sharpen9 = 11,
	TMGS_Sharpen10 = 12,
	TMGS_NoMipmaps = 13,
	TMGS_LeaveExistingMips = 14,
	TMGS_Blur1 = 15,
	TMGS_Blur2 = 16,
	TMGS_Blur3 = 17,
	TMGS_Blur4 = 18,
	TMGS_Blur5 = 19,
	TMGS_Unfiltered = 20,
	TMGS_Angular = 21,
	TMGS_MAX = 22
};

// Enum Engine.ETexturePowerOfTwoSetting
enum class ETexturePowerOfTwoSetting : uint8 {
	None = 0,
	PadToPowerOfTwo = 1,
	PadToSquarePowerOfTwo = 2,
	ETexturePowerOfTwoSetting_MAX = 3
};

// Enum Engine.ETextureSamplerFilter
enum class ETextureSamplerFilter : uint8 {
	Point = 0,
	Bilinear = 1,
	Trilinear = 2,
	AnisotropicPoint = 3,
	AnisotropicLinear = 4,
	ETextureSamplerFilter_MAX = 5
};

// Enum Engine.ETextureMipLoadOptions
enum class ETextureMipLoadOptions : uint8 {
	Default = 0,
	AllMips = 1,
	OnlyFirstMip = 2,
	ETextureMipLoadOptions_MAX = 3
};

// Enum Engine.ETextureDownscaleOptions
enum class ETextureDownscaleOptions : uint8 {
	Default = 0,
	Unfiltered = 1,
	SimpleAverage = 2,
	Sharpen0 = 3,
	Sharpen1 = 4,
	Sharpen2 = 5,
	Sharpen3 = 6,
	Sharpen4 = 7,
	Sharpen5 = 8,
	Sharpen6 = 9,
	Sharpen7 = 10,
	Sharpen8 = 11,
	Sharpen9 = 12,
	Sharpen10 = 13,
	ETextureDownscaleOptions_MAX = 14
};

// Enum Engine.ETextureLossyCompressionAmount
enum class ETextureLossyCompressionAmount : uint8 {
	TLCA_Default = 0,
	TLCA_None = 1,
	TLCA_Lowest = 2,
	TLCA_Low = 3,
	TLCA_Medium = 4,
	TLCA_High = 5,
	TLCA_Highest = 6,
	TLCA_MAX = 7
};

// Enum Engine.ETextureEncodeSpeed
enum class ETextureEncodeSpeed : uint8 {
	Final = 0,
	FinalIfAvailable = 1,
	Fast = 2,
	ETextureEncodeSpeed_MAX = 3
};

// Enum Engine.ETextureClass
enum class ETextureClass : uint8 {
	Invalid = 0,
	TwoD = 1,
	Cube = 2,
	Array = 3,
	CubeArray = 4,
	Volume = 5,
	TwoDDynamic = 6,
	RenderTarget = 7,
	Other2DNoSource = 8,
	OtherUnknown = 9,
	ETextureClass_MAX = 10
};

// Enum Engine.ECompositeTextureMode
enum class ECompositeTextureMode : uint8 {
	CTM_Disabled = 0,
	CTM_NormalRoughnessToRed = 1,
	CTM_NormalRoughnessToGreen = 2,
	CTM_NormalRoughnessToBlue = 3,
	CTM_NormalRoughnessToAlpha = 4,
	CTM_MAX = 5
};

// Enum Engine.ETextureSourceCompressionFormat
enum class ETextureSourceCompressionFormat : uint8 {
	TSCF_None = 0,
	TSCF_PNG = 1,
	TSCF_JPEG = 2,
	TSCF_MAX = 3
};

// Enum Engine.ETextureSourceFormat
enum class ETextureSourceFormat : uint8 {
	TSF_Invalid = 0,
	TSF_G8 = 1,
	TSF_BGRA8 = 2,
	TSF_BGRE8 = 3,
	TSF_RGBA16 = 4,
	TSF_RGBA16F = 5,
	TSF_RGBA8_DEPRECATED = 6,
	TSF_RGBE8_DEPRECATED = 7,
	TSF_G16 = 8,
	TSF_RGBA32F = 9,
	TSF_R16F = 10,
	TSF_R32F = 11,
	TSF_MAX = 12,
	TSF_RGBA8 = 6,
	TSF_RGBE8 = 7
};

// Enum Engine.TextureCompressionSettings
enum class TextureCompressionSettings : uint8 {
	TC_Default = 0,
	TC_Normalmap = 1,
	TC_Masks = 2,
	TC_Grayscale = 3,
	TC_Displacementmap = 4,
	TC_VectorDisplacementmap = 5,
	TC_HDR = 6,
	TC_EditorIcon = 7,
	TC_Alpha = 8,
	TC_DistanceFieldFont = 9,
	TC_HDR_Compressed = 10,
	TC_BC7 = 11,
	TC_HalfFloat = 12,
	TC_LQ = 13,
	TC_EncodedReflectionCapture = 14,
	TC_SingleFloat = 15,
	TC_HDR_F32 = 16,
	TC_MAX = 17
};

// Enum Engine.ETextureSourceEncoding
enum class ETextureSourceEncoding : uint8 {
	TSE_None = 0,
	TSE_Linear = 1,
	TSE_sRGB = 2,
	TSE_ST2084 = 3,
	TSE_Gamma22 = 4,
	TSE_BT1886 = 5,
	TSE_Gamma26 = 6,
	TSE_Cineon = 7,
	TSE_REDLog = 8,
	TSE_REDLog3G10 = 9,
	TSE_SLog1 = 10,
	TSE_SLog2 = 11,
	TSE_SLog3 = 12,
	TSE_AlexaV3LogC = 13,
	TSE_CanonLog = 14,
	TSE_ProTune = 15,
	TSE_VLog = 16,
	TSE_MAX = 17
};

// Enum Engine.ETextureColorSpace
enum class ETextureColorSpace : uint8 {
	TCS_None = 0,
	TCS_sRGB = 1,
	TCS_Rec2020 = 2,
	TCS_ACESAP0 = 3,
	TCS_ACESAP1 = 4,
	TCS_P3DCI = 5,
	TCS_P3D65 = 6,
	TCS_REDWideGamut = 7,
	TCS_SonySGamut3 = 8,
	TCS_SonySGamut3Cine = 9,
	TCS_AlexaWideGamut = 10,
	TCS_CanonCinemaGamut = 11,
	TCS_GoProProtuneNative = 12,
	TCS_PanasonicVGamut = 13,
	TCS_Custom = 99,
	TCS_MAX = 100
};

// Enum Engine.TextureCookPlatformTilingSettings
enum class TextureCookPlatformTilingSettings : uint8 {
	TCPTS_FromTextureGroup = 0,
	TCPTS_Tile = 1,
	TCPTS_DoNotTile = 2,
	TCPTS_MAX = 3
};

// Enum Engine.ETextureChromaticAdaptationMethod
enum class ETextureChromaticAdaptationMethod : uint8 {
	TCAM_None = 0,
	TCAM_Bradford = 1,
	TCAM_CAT02 = 2,
	TCAM_MAX = 3
};

// Enum Engine.TextureFilter
enum class TextureFilter : uint8 {
	TF_Nearest = 0,
	TF_Bilinear = 1,
	TF_Trilinear = 2,
	TF_Default = 3,
	TF_MAX = 4
};

// Enum Engine.TextureAddress
enum class TextureAddress : uint8 {
	TA_Wrap = 0,
	TA_Clamp = 1,
	TA_Mirror = 2,
	TA_MAX = 3
};

// Enum Engine.ETextureMipCount
enum class ETextureMipCount : uint8 {
	TMC_ResidentMips = 0,
	TMC_AllMips = 1,
	TMC_AllMipsBiased = 2,
	TMC_MAX = 3
};

// Enum Engine.ETextureCompressionQuality
enum class ETextureCompressionQuality : uint8 {
	TCQ_Default = 0,
	TCQ_Lowest = 1,
	TCQ_Low = 2,
	TCQ_Medium = 3,
	TCQ_High = 4,
	TCQ_Highest = 5,
	TCQ_MAX = 6
};

// Enum Engine.ETimelineLengthMode
enum class ETimelineLengthMode : uint8 {
	TL_TimelineLength = 0,
	TL_LastKeyFrame = 1,
	TL_MAX = 2
};

// Enum Engine.ETimelineDirection
enum class ETimelineDirection : uint8 {
	Forward = 0,
	Backward = 1,
	ETimelineDirection_MAX = 2
};

// Enum Engine.ETwitterRequestMethod
enum class ETwitterRequestMethod : uint8 {
	TRM_Get = 0,
	TRM_Post = 1,
	TRM_Delete = 2,
	TRM_MAX = 3
};

// Enum Engine.ETwitterIntegrationDelegate
enum class ETwitterIntegrationDelegate : uint8 {
	TID_AuthorizeComplete = 0,
	TID_TweetUIComplete = 1,
	TID_RequestComplete = 2,
	TID_MAX = 3
};

// Enum Engine.EUserDefinedStructureStatus
enum class EUserDefinedStructureStatus : uint8 {
	UDSS_UpToDate = 0,
	UDSS_Dirty = 1,
	UDSS_Error = 2,
	UDSS_Duplicate = 3,
	UDSS_MAX = 4
};

// Enum Engine.EVectorFieldConstructionOp
enum class EVectorFieldConstructionOp : uint8 {
	VFCO_Extrude = 0,
	VFCO_Revolve = 1,
	VFCO_MAX = 2
};

// Enum Engine.ESplitScreenType
enum class ESplitScreenType : uint8 {
	None = 0,
	TwoPlayer_Horizontal = 1,
	TwoPlayer_Vertical = 2,
	ThreePlayer_FavorTop = 3,
	ThreePlayer_FavorBottom = 4,
	ThreePlayer_Vertical = 5,
	ThreePlayer_Horizontal = 6,
	FourPlayer_Grid = 7,
	FourPlayer_Vertical = 8,
	FourPlayer_Horizontal = 9,
	SplitTypeCount = 10,
	ESplitScreenType_MAX = 11
};

// Enum Engine.EWindSourceType
enum class EWindSourceType : uint8 {
	Directional = 0,
	Point = 1,
	EWindSourceType_MAX = 2
};

// Enum Engine.EVisibilityAggressiveness
enum class EVisibilityAggressiveness : uint8 {
	VIS_LeastAggressive = 0,
	VIS_ModeratelyAggressive = 1,
	VIS_MostAggressive = 2,
	VIS_Max = 3,
	VIS_Max = 4
};

// Enum Engine.EVolumeLightingMethod
enum class EVolumeLightingMethod : uint8 {
	VLM_VolumetricLightmap = 0,
	VLM_SparseVolumeLightingSamples = 1,
	VLM_MAX = 2
};

// Enum Engine.EHierarchicalSimplificationMethod
enum class EHierarchicalSimplificationMethod : uint8 {
	None = 0,
	Merge = 1,
	Simplify = 2,
	Approximate = 3,
	EHierarchicalSimplificationMethod_MAX = 4
};

// Enum Engine.EQuartzTimeSignatureQuantization
enum class EQuartzTimeSignatureQuantization : uint8 {
	HalfNote = 0,
	QuarterNote = 1,
	EighthNote = 2,
	SixteenthNote = 3,
	ThirtySecondNote = 4,
	Count = 5,
	EQuartzTimeSignatureQuantization_MAX = 6
};

// Enum Engine.EQuartzDelegateType
enum class EQuartzDelegateType : uint8 {
	MetronomeTick = 0,
	CommandEvent = 1,
	Count = 2,
	EQuartzDelegateType_MAX = 3
};

// Enum Engine.EQuarztQuantizationReference
enum class EQuarztQuantizationReference : uint8 {
	BarRelative = 0,
	TransportRelative = 1,
	CurrentTimeRelative = 2,
	Count = 3,
	EQuarztQuantizationReference_MAX = 4
};

// Enum Engine.EQuartzCommandType
enum class EQuartzCommandType : uint8 {
	PlaySound = 0,
	QueueSoundToPlay = 1,
	RetriggerSound = 2,
	TickRateChange = 3,
	TransportReset = 4,
	StartOtherClock = 5,
	Notify = 6,
	Custom = 7,
	EQuartzCommandType_MAX = 8
};

// Enum Engine.EActorUpdateOverlapsMethod
enum class EActorUpdateOverlapsMethod : uint8 {
	UseConfigDefault = 0,
	AlwaysUpdate = 1,
	OnlyUpdateMovable = 2,
	NeverUpdate = 3,
	EActorUpdateOverlapsMethod_MAX = 4
};

// Enum Engine.ESpawnActorScaleMethod
enum class ESpawnActorScaleMethod : uint8 {
	OverrideRootScale = 0,
	MultiplyWithRoot = 1,
	SelectDefaultAtRuntime = 2,
	ESpawnActorScaleMethod_MAX = 3
};

// Enum Engine.FNavigationSystemRunMode
enum class FNavigationSystemRunMode : uint8 {
	InvalidMode = 0,
	GameMode = 1,
	EditorMode = 2,
	SimulationMode = 3,
	PIEMode = 4,
	InferFromWorldMode = 5,
	EditorWorldPartitionBuildMode = 6,
	FNavigationSystemRunMode_MAX = 7
};

// Enum Engine.ENavigationOptionFlag
enum class ENavigationOptionFlag : uint8 {
	Default = 0,
	Enable = 1,
	Disable = 2,
	MAX = 3
};

// Enum Engine.ENavDataGatheringMode
enum class ENavDataGatheringMode : uint8 {
	Default = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringMode_MAX = 3
};

// Enum Engine.ENavDataGatheringModeConfig
enum class ENavDataGatheringModeConfig : uint8 {
	Invalid = 0,
	Instant = 1,
	Lazy = 2,
	ENavDataGatheringModeConfig_MAX = 3
};

// Enum Engine.ENavigationSortPendingTilesMethod
enum class ENavigationSortPendingTilesMethod : uint8 {
	SortWithSeedLocations = 0,
	SortByPriority = 1,
	None = 2,
	ENavigationSortPendingTilesMethod_MAX = 3
};

// Enum Engine.ENavPathEvent
enum class ENavPathEvent : uint8 {
	Cleared = 0,
	NewPath = 1,
	UpdatedDueToGoalMoved = 2,
	UpdatedDueToNavigationChanged = 3,
	Invalidated = 4,
	RePathFailed = 5,
	MetaPathUpdate = 6,
	Custom = 7,
	ENavPathEvent_MAX = 8
};

// Enum Engine.ENavigationQueryResult
enum class ENavigationQueryResult : uint8 {
	Invalid = 0,
	Error = 1,
	Fail = 2,
	Success = 3,
	ENavigationQueryResult_MAX = 4
};

// Enum Engine.EAlphaBlendOption
enum class EAlphaBlendOption : uint8 {
	Linear = 0,
	Cubic = 1,
	HermiteCubic = 2,
	Sinusoidal = 3,
	QuadraticInOut = 4,
	CubicInOut = 5,
	QuarticInOut = 6,
	QuinticInOut = 7,
	CircularIn = 8,
	CircularOut = 9,
	CircularInOut = 10,
	ExpIn = 11,
	ExpOut = 12,
	ExpInOut = 13,
	Custom = 14,
	EAlphaBlendOption_MAX = 15
};

// Enum Engine.EAnimGroupRole
enum class EAnimGroupRole : uint8 {
	CanBeLeader = 0,
	AlwaysFollower = 1,
	AlwaysLeader = 2,
	TransitionLeader = 3,
	TransitionFollower = 4,
	EAnimGroupRole_MAX = 5
};

// Enum Engine.EAnimSyncGroupScope
enum class EAnimSyncGroupScope : uint8 {
	Local = 0,
	Component = 1,
	EAnimSyncGroupScope_MAX = 2
};

// Enum Engine.EAnimSyncMethod
enum class EAnimSyncMethod : uint8 {
	DoNotSync = 0,
	SyncGroup = 1,
	Graph = 2,
	EAnimSyncMethod_MAX = 3
};

// Enum Engine.EAnimExecutionContextConversionResult
enum class EAnimExecutionContextConversionResult : uint8 {
	Succeeded = 1,
	Failed = 0,
	EAnimExecutionContextConversionResult_MAX = 2
};

// Enum Engine.EMontagePlayReturnType
enum class EMontagePlayReturnType : uint8 {
	MontageLength = 0,
	Duration = 1,
	EMontagePlayReturnType_MAX = 2
};

// Enum Engine.EDrawDebugItemType
enum class EDrawDebugItemType : uint8 {
	DirectionalArrow = 0,
	Sphere = 1,
	Line = 2,
	OnScreenMessage = 3,
	CoordinateSystem = 4,
	Point = 5,
	Circle = 6,
	Cone = 7,
	InWorldMessage = 8,
	EDrawDebugItemType_MAX = 9
};

// Enum Engine.EAnimLinkMethod
enum class EAnimLinkMethod : uint8 {
	Absolute = 0,
	Relative = 1,
	Proportional = 2,
	EAnimLinkMethod_MAX = 3
};

// Enum Engine.EAnimNotifyEventType
enum class EAnimNotifyEventType : uint8 {
	Begin = 0,
	End = 1,
	EAnimNotifyEventType_MAX = 2
};

// Enum Engine.EMontageBlendMode
enum class EMontageBlendMode : uint8 {
	Standard = 0,
	Inertialization = 1,
	EMontageBlendMode_MAX = 2
};

// Enum Engine.EMontageSubStepResult
enum class EMontageSubStepResult : uint8 {
	Moved = 0,
	NotMoved = 1,
	InvalidSection = 2,
	InvalidMontage = 3,
	EMontageSubStepResult_MAX = 4
};

// Enum Engine.EPinHidingMode
enum class EPinHidingMode : uint8 {
	NeverAsPin = 0,
	PinHiddenByDefault = 1,
	PinShownByDefault = 2,
	AlwaysAsPin = 3,
	EPinHidingMode_MAX = 4
};

// Enum Engine.EAnimNodeDataFlags
enum class EAnimNodeDataFlags : uint8 {
	None = 0,
	HasInitialUpdateFunction = 1,
	HasBecomeRelevantFunction = 2,
	HasUpdateFunction = 4,
	EAnimNodeDataFlags_MAX = 5
};

// Enum Engine.EAnimNodeReferenceConversionResult
enum class EAnimNodeReferenceConversionResult : uint8 {
	Succeeded = 1,
	Failed = 0,
	EAnimNodeReferenceConversionResult_MAX = 2
};

// Enum Engine.EInertializationState
enum class EInertializationState : uint8 {
	Inactive = 0,
	Pending = 1,
	Active = 2,
	EInertializationState_MAX = 3
};

// Enum Engine.EInertializationBoneState
enum class EInertializationBoneState : uint8 {
	Invalid = 0,
	Valid = 1,
	Excluded = 2,
	EInertializationBoneState_MAX = 3
};

// Enum Engine.EInertializationSpace
enum class EInertializationSpace : uint8 {
	Default = 0,
	WorldSpace = 1,
	WorldRotation = 2,
	EInertializationSpace_MAX = 3
};

// Enum Engine.EEvaluatorDataSource
enum class EEvaluatorDataSource : uint8 {
	EDS_SourcePose = 0,
	EDS_DestinationPose = 1,
	EDS_MAX = 2
};

// Enum Engine.EEvaluatorMode
enum class EEvaluatorMode : uint8 {
	EM_Standard = 0,
	EM_Freeze = 1,
	EM_DelayedFreeze = 2,
	EM_MAX = 3
};

// Enum Engine.ETransitionRequestQueueMode
enum class ETransitionRequestQueueMode : uint8 {
	Shared = 0,
	Unique = 1,
	ETransitionRequestQueueMode_MAX = 2
};

// Enum Engine.ETransitionRequestOverwriteMode
enum class ETransitionRequestOverwriteMode : uint8 {
	Append = 0,
	Ignore = 1,
	Overwrite = 2,
	ETransitionRequestOverwriteMode_MAX = 3
};

// Enum Engine.ETransitionBlendMode
enum class ETransitionBlendMode : uint8 {
	TBM_Linear = 0,
	TBM_Cubic = 1,
	TBM_MAX = 2
};

// Enum Engine.ETransitionLogicType
enum class ETransitionLogicType : uint8 {
	TLT_StandardBlend = 0,
	TLT_Inertialization = 1,
	TLT_Custom = 2,
	TLT_MAX = 3
};

// Enum Engine.EAnimPropertyAccessCallSite
enum class EAnimPropertyAccessCallSite : uint8 {
	WorkerThread_Unbatched = 0,
	WorkerThread_Batched_PreEventGraph = 1,
	WorkerThread_Batched_PostEventGraph = 2,
	GameThread_Batched_PreEventGraph = 3,
	GameThread_Batched_PostEventGraph = 4,
	EAnimPropertyAccessCallSite_MAX = 5
};

// Enum Engine.EBlendProfileMode
enum class EBlendProfileMode : uint8 {
	TimeFactor = 0,
	WeightFactor = 1,
	BlendMask = 2,
	EBlendProfileMode_MAX = 3
};

// Enum Engine.ETransformCurveChannel
enum class ETransformCurveChannel : uint8 {
	Position = 0,
	Rotation = 1,
	Scale = 2,
	Invalid = 3,
	ETransformCurveChannel_MAX = 4
};

// Enum Engine.EVectorCurveChannel
enum class EVectorCurveChannel : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	Invalid = 3,
	EVectorCurveChannel_MAX = 4
};

// Enum Engine.EPostCopyOperation
enum class EPostCopyOperation : uint8 {
	None = 0,
	LogicalNegateBool = 1,
	EPostCopyOperation_MAX = 2
};

// Enum Engine.EAnimAlphaInputType
enum class EAnimAlphaInputType : uint8 {
	Float = 0,
	Bool = 1,
	Curve = 2,
	EAnimAlphaInputType_MAX = 3
};

// Enum Engine.EMirrorRowType
enum class EMirrorRowType : uint8 {
	Bone = 0,
	AnimationNotify = 1,
	Curve = 2,
	SyncMarker = 3,
	Custom = 4,
	EMirrorRowType_MAX = 5
};

// Enum Engine.EMirrorFindReplaceMethod
enum class EMirrorFindReplaceMethod : uint8 {
	Prefix = 0,
	Suffix = 1,
	RegularExpression = 2,
	EMirrorFindReplaceMethod_MAX = 3
};

// Enum Engine.EControlConstraint
enum class EControlConstraint : uint8 {
	Orientation = 0,
	Translation = 1,
	MAX = 2
};

// Enum Engine.EConstraintTransform
enum class EConstraintTransform : uint8 {
	Absolute = 0,
	Relative = 1,
	EConstraintTransform_MAX = 2
};

// Enum Engine.ESkeletalMeshVertexAttributeDataType
enum class ESkeletalMeshVertexAttributeDataType : uint8 {
	Float = 0,
	HalfFloat = 1,
	NUInt8 = 2,
	ESkeletalMeshVertexAttributeDataType_MAX = 3
};

// Enum Engine.EBoneTranslationRetargetingMode
enum class EBoneTranslationRetargetingMode : uint8 {
	Animation = 0,
	Skeleton = 1,
	AnimationScaled = 2,
	AnimationRelative = 3,
	OrientAndScale = 4,
	EBoneTranslationRetargetingMode_MAX = 5
};

// Enum Engine.ETimeStretchCurveMapping
enum class ETimeStretchCurveMapping : uint8 {
	T_Original = 0,
	T_TargetMin = 1,
	T_TargetMax = 2,
	MAX = 3
};

// Enum Engine.EPreviewAnimationBlueprintApplicationMethod
enum class EPreviewAnimationBlueprintApplicationMethod : uint8 {
	LinkedLayers = 0,
	LinkedAnimGraph = 1,
	EPreviewAnimationBlueprintApplicationMethod_MAX = 2
};

// Enum Engine.EPrimaryAssetCookRule
enum class EPrimaryAssetCookRule : uint8 {
	Unknown = 0,
	NeverCook = 1,
	ProductionNeverCook = 2,
	DevelopmentCook = 2,
	DevelopmentAlwaysProductionNeverCook = 3,
	DevelopmentAlwaysCook = 3,
	DevelopmentAlwaysProductionUnknownCook = 4,
	AlwaysCook = 5,
	EPrimaryAssetCookRule_MAX = 6
};

// Enum Engine.EPrimaryAssetCookPlatform
enum class EPrimaryAssetCookPlatform : uint8 {
	Unspecified = 0,
	Desktop = 1,
	Mobile = 2,
	Console = 4,
	First = 1,
	Last = 4,
	All = 7,
	EPrimaryAssetCookPlatform_MAX = 8
};

// Enum Engine.EPrimaryAssetCookCategory
enum class EPrimaryAssetCookCategory : uint8 {
	Unknown = 0,
	Core = 1,
	Character = 2,
	PrototypeCharacter = 3,
	Charms = 4,
	Skins = 5,
	Milestones = 6,
	Sprays = 7,
	Console = 8,
	TestMap = 9,
	InDevelopmentMap = 10,
	NPE_Map = 11,
	HURM_Map = 12,
	AscentMap = 13,
	BonsaiMap = 14,
	DualityMap = 15,
	PortMap = 16,
	PovegliaMap = 17,
	TriadMap = 18,
	FoxtrotMap = 19,
	CanyonMap = 20,
	PittMap = 21,
	JamMap = 22,
	JuliettMap = 23,
	InfinityMap = 24,
	RookMap = 25,
	EPrimaryAssetCookCategory_MAX = 26
};

// Enum Engine.EAttenuationDistanceModel
enum class EAttenuationDistanceModel : uint8 {
	Linear = 0,
	Logarithmic = 1,
	Inverse = 2,
	LogReverse = 3,
	NaturalSound = 4,
	Custom = 5,
	EAttenuationDistanceModel_MAX = 6
};

// Enum Engine.EAttenuationShape
enum class EAttenuationShape : uint8 {
	Sphere = 0,
	Capsule = 1,
	Box = 2,
	Cone = 3,
	EAttenuationShape_MAX = 4
};

// Enum Engine.ENaturalSoundFalloffMode
enum class ENaturalSoundFalloffMode : uint8 {
	Continues = 0,
	Silent = 1,
	Hold = 2,
	ENaturalSoundFalloffMode_MAX = 3
};

// Enum Engine.EAudioBusChannels
enum class EAudioBusChannels : uint8 {
	Mono = 0,
	Stereo = 1,
	Quad = 3,
	FivePointOne = 5,
	SevenPointOne = 7,
	EAudioBusChannels_MAX = 8
};

// Enum Engine.EVoiceSampleRate
enum class EVoiceSampleRate : int32 {
	Low16000Hz = 16000,
	Normal24000Hz = 24000,
	EVoiceSampleRate_MAX = 24001
};

// Enum Engine.EPanningMethod
enum class EPanningMethod : uint8 {
	Linear = 0,
	EqualPower = 1,
	EPanningMethod_MAX = 2
};

// Enum Engine.EMonoChannelUpmixMethod
enum class EMonoChannelUpmixMethod : uint8 {
	Linear = 0,
	EqualPower = 1,
	FullVolume = 2,
	EMonoChannelUpmixMethod_MAX = 3
};

// Enum Engine.EDefaultAudioCompressionType
enum class EDefaultAudioCompressionType : uint8 {
	BinkAudio = 0,
	ADPCM = 1,
	PCM = 2,
	PlatformSpecific = 3,
	EDefaultAudioCompressionType_MAX = 4
};

// Enum Engine.EAudioVolumeLocationState
enum class EAudioVolumeLocationState : uint8 {
	InsideTheVolume = 0,
	OutsideTheVolume = 1,
	EAudioVolumeLocationState_MAX = 2
};

// Enum Engine.EInterfaceValidResult
enum class EInterfaceValidResult : uint8 {
	Valid = 0,
	Invalid = 1,
	EInterfaceValidResult_MAX = 2
};

// Enum Engine.ECameraShakeUpdateResultFlags
enum class ECameraShakeUpdateResultFlags : uint8 {
	ApplyAsAbsolute = 1,
	SkipAutoScale = 2,
	SkipAutoPlaySpace = 4,
	Default = 0,
	ECameraShakeUpdateResultFlags_MAX = 5
};

// Enum Engine.ECameraShakeDurationType
enum class ECameraShakeDurationType : uint8 {
	Fixed = 0,
	Infinite = 1,
	Custom = 2,
	ECameraShakeDurationType_MAX = 3
};

// Enum Engine.ECameraShakeAttenuation
enum class ECameraShakeAttenuation : uint8 {
	Linear = 0,
	Quadratic = 1,
	ECameraShakeAttenuation_MAX = 2
};

// Enum Engine.ECameraAlphaBlendMode
enum class ECameraAlphaBlendMode : uint8 {
	CABM_Linear = 0,
	CABM_Cubic = 1,
	CABM_MAX = 2
};

// Enum Engine.EUpdateTransformFlags
enum class EUpdateTransformFlags : uint8 {
	None = 0,
	SkipPhysicsUpdate = 1,
	PropagateFromParent = 2,
	OnlyUpdateIfUsingSocket = 4,
	EUpdateTransformFlags_MAX = 5
};

// Enum Engine.EAudioFaderCurve
enum class EAudioFaderCurve : uint8 {
	Linear = 0,
	Logarithmic = 1,
	SCurve = 2,
	Sin = 3,
	Count = 4,
	EAudioFaderCurve_MAX = 5
};

// Enum Engine.EModulationDestination
enum class EModulationDestination : uint8 {
	Volume = 0,
	Pitch = 1,
	Lowpass = 2,
	Highpass = 3,
	Count = 4,
	EModulationDestination_MAX = 5
};

// Enum Engine.EDecalLightColorType
enum class EDecalLightColorType : uint8 {
	FullIntegral = 0,
	Average = 1,
	EDecalLightColorType_MAX = 2
};

// Enum Engine.EControllerAnalogStick
enum class EControllerAnalogStick : uint8 {
	CAS_LeftStick = 0,
	CAS_RightStick = 1,
	CAS_MAX = 2
};

// Enum Engine.ELocalFogMode
enum class ELocalFogMode : uint8 {
	LocalHeightFog = 0,
	LocalSphereFog = 1,
	ELocalFogMode_MAX = 2
};

// Enum Engine.ESyncOption
enum class ESyncOption : uint8 {
	Drive = 0,
	Passive = 1,
	Disabled = 2,
	ESyncOption_MAX = 3
};

// Enum Engine.EPhysicsStateAction
enum class EPhysicsStateAction : uint8 {
	AddForce = 0,
	AddTorque = 1,
	AddForceAtPosition = 2,
	AddLinearVelocity = 3,
	AddAngularVelocity = 4,
	AddVelocityAtPosition = 5,
	AddLinearImpulse = 6,
	AddAngularImpulse = 7,
	AddImpulseAtPosition = 8,
	AddAcceleration = 9,
	NumActions = 10,
	EPhysicsStateAction_MAX = 11
};

// Enum Engine.EReflectionSourceType
enum class EReflectionSourceType : uint8 {
	CapturedScene = 0,
	SpecifiedCubemap = 1,
	EReflectionSourceType_MAX = 2
};

// Enum Engine.ESceneCapturePrimitiveRenderMode
enum class ESceneCapturePrimitiveRenderMode : uint8 {
	PRM_LegacySceneCapture = 0,
	PRM_RenderScenePrimitives = 1,
	PRM_UseShowOnlyList = 2,
	PRM_MAX = 3
};

// Enum Engine.ECustomBoneAttributeLookup
enum class ECustomBoneAttributeLookup : uint8 {
	BoneOnly = 0,
	ImmediateParent = 1,
	ParentHierarchy = 2,
	ECustomBoneAttributeLookup_MAX = 3
};

// Enum Engine.EKinematicBonesUpdateToPhysics
enum class EKinematicBonesUpdateToPhysics : uint8 {
	SkipSimulatingBones = 0,
	SkipAllBones = 1,
	EKinematicBonesUpdateToPhysics_MAX = 2
};

// Enum Engine.EAnimationMode
enum class EAnimationMode : uint8 {
	AnimationBlueprint = 0,
	AnimationSingleNode = 1,
	AnimationCustomMode = 2,
	EAnimationMode_MAX = 3
};

// Enum Engine.EPhysicsTransformUpdateMode
enum class EPhysicsTransformUpdateMode : uint8 {
	SimulationUpatesComponentTransform = 0,
	ComponentTransformIsKinematic = 1,
	EPhysicsTransformUpdateMode_MAX = 2
};

// Enum Engine.ESkyAtmosphereTransformMode
enum class ESkyAtmosphereTransformMode : uint8 {
	PlanetTopAtAbsoluteWorldOrigin = 0,
	PlanetTopAtComponentTransform = 1,
	PlanetCenterAtComponentTransform = 2,
	ESkyAtmosphereTransformMode_MAX = 3
};

// Enum Engine.ESplinePointType
enum class ESplinePointType : uint8 {
	Linear = 0,
	Curve = 1,
	Constant = 2,
	CurveClamped = 3,
	CurveCustomTangent = 4,
	ESplinePointType_MAX = 5
};

// Enum Engine.ESplineCoordinateSpace
enum class ESplineCoordinateSpace : uint8 {
	Local = 0,
	World = 1,
	ESplineCoordinateSpace_MAX = 2
};

// Enum Engine.ESplineMeshAxis
enum class ESplineMeshAxis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	ESplineMeshAxis_MAX = 3
};

// Enum Engine.EVolumetricCloudTracingMaxDistanceMode
enum class EVolumetricCloudTracingMaxDistanceMode : uint8 {
	DistanceFromCloudLayerEntryPoint = 0,
	DistanceFromPointOfView = 1,
	EVolumetricCloudTracingMaxDistanceMode_MAX = 2
};

// Enum Engine.ECurveTableMode
enum class ECurveTableMode : uint8 {
	Empty = 0,
	SimpleCurves = 1,
	RichCurves = 2,
	ECurveTableMode_MAX = 3
};

// Enum Engine.FDataDrivenCVarType
enum class FDataDrivenCVarType : uint8 {
	CVarFloat = 0,
	CVarInt = 1,
	CVarBool = 2,
	FDataDrivenCVarType_MAX = 3
};

// Enum Engine.EEvaluateCurveTableResult
enum class EEvaluateCurveTableResult : uint8 {
	RowFound = 0,
	RowNotFound = 1,
	EEvaluateCurveTableResult_MAX = 2
};

// Enum Engine.EReporterLineStyle
enum class EReporterLineStyle : uint8 {
	Line = 0,
	Dash = 1,
	EReporterLineStyle_MAX = 2
};

// Enum Engine.EGraphAxisStyle
enum class EGraphAxisStyle : uint8 {
	Lines = 0,
	Notches = 1,
	Grid = 2,
	EGraphAxisStyle_MAX = 3
};

// Enum Engine.EGraphDataStyle
enum class EGraphDataStyle : uint8 {
	Lines = 0,
	Filled = 1,
	EGraphDataStyle_MAX = 2
};

// Enum Engine.ELegendPosition
enum class ELegendPosition : uint8 {
	Outside = 0,
	Inside = 1,
	ELegendPosition_MAX = 2
};

// Enum Engine.EGrammaticalGender
enum class EGrammaticalGender : uint8 {
	Neuter = 0,
	Masculine = 1,
	Feminine = 2,
	Mixed = 3,
	EGrammaticalGender_MAX = 4
};

// Enum Engine.EGrammaticalNumber
enum class EGrammaticalNumber : uint8 {
	Singular = 0,
	Plural = 1,
	EGrammaticalNumber_MAX = 2
};

// Enum Engine.ETypedElementWorldType
enum class ETypedElementWorldType : uint8 {
	Game = 0,
	Editor = 1,
	ETypedElementWorldType_MAX = 2
};

// Enum Engine.ECustomTimeStepSynchronizationState
enum class ECustomTimeStepSynchronizationState : uint8 {
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ECustomTimeStepSynchronizationState_MAX = 4
};

// Enum Engine.EVectorQuantization
enum class EVectorQuantization : uint8 {
	RoundWholeNumber = 0,
	RoundOneDecimal = 1,
	RoundTwoDecimals = 2,
	EVectorQuantization_MAX = 3
};

// Enum Engine.ERotatorQuantization
enum class ERotatorQuantization : uint8 {
	ByteComponents = 0,
	ShortComponents = 1,
	ERotatorQuantization_MAX = 2
};

// Enum Engine.ETimecodeProviderSynchronizationState
enum class ETimecodeProviderSynchronizationState : uint8 {
	Closed = 0,
	Error = 1,
	Synchronized = 2,
	Synchronizing = 3,
	ETimecodeProviderSynchronizationState_MAX = 4
};

// Enum Engine.EFontCacheType
enum class EFontCacheType : uint8 {
	Offline = 0,
	Runtime = 1,
	EFontCacheType_MAX = 2
};

// Enum Engine.ERootMotionAccumulateMode
enum class ERootMotionAccumulateMode : uint8 {
	Override = 0,
	Additive = 1,
	ERootMotionAccumulateMode_MAX = 2
};

// Enum Engine.ERootMotionSourceStatusFlags
enum class ERootMotionSourceStatusFlags : uint8 {
	Prepared = 1,
	Finished = 2,
	MarkedForRemoval = 4,
	ERootMotionSourceStatusFlags_MAX = 5
};

// Enum Engine.ERootMotionSourceSettingsFlags
enum class ERootMotionSourceSettingsFlags : uint8 {
	UseSensitiveLiftoffCheck = 1,
	DisablePartialEndTick = 2,
	IgnoreZAccumulate = 4,
	ERootMotionSourceSettingsFlags_MAX = 5
};

// Enum Engine.ERootMotionFinishVelocityMode
enum class ERootMotionFinishVelocityMode : uint8 {
	MaintainLastRootMotionVelocity = 0,
	SetVelocity = 1,
	ClampVelocity = 2,
	ERootMotionFinishVelocityMode_MAX = 3
};

// Enum Engine.EWindowMode
enum class EWindowMode : uint8 {
	Fullscreen = 0,
	WindowedFullscreen = 1,
	Windowed = 2,
	EWindowMode_MAX = 3
};

// Enum Engine.ESlateGesture
enum class ESlateGesture : uint8 {
	None = 0,
	Scroll = 1,
	Magnify = 2,
	Swipe = 3,
	Rotate = 4,
	LongPress = 5,
	ESlateGesture_MAX = 6
};

// Enum Engine.EMIDCreationFlags
enum class EMIDCreationFlags : uint8 {
	None = 0,
	Transient = 1,
	EMIDCreationFlags_MAX = 2
};

// Enum Engine.EEasingFunc
enum class EEasingFunc : uint8 {
	Linear = 0,
	Step = 1,
	SinusoidalIn = 2,
	SinusoidalOut = 3,
	SinusoidalInOut = 4,
	EaseIn = 5,
	EaseOut = 6,
	EaseInOut = 7,
	ExpoIn = 8,
	ExpoOut = 9,
	ExpoInOut = 10,
	CircularIn = 11,
	CircularOut = 12,
	CircularInOut = 13,
	EEasingFunc_MAX = 14
};

// Enum Engine.ELerpInterpolationMode
enum class ELerpInterpolationMode : uint8 {
	QuatInterp = 0,
	EulerInterp = 1,
	DualQuatInterp = 2,
	ELerpInterpolationMode_MAX = 3
};

// Enum Engine.EMatrixColumns
enum class EMatrixColumns : uint8 {
	First = 0,
	Second = 1,
	Third = 2,
	Fourth = 3,
	EMatrixColumns_MAX = 4
};

// Enum Engine.EImportanceWeight
enum class EImportanceWeight : uint8 {
	Luminance = 0,
	Red = 1,
	Green = 2,
	Blue = 3,
	Alpha = 4,
	EImportanceWeight_MAX = 5
};

// Enum Engine.EDecalBlendMode
enum class EDecalBlendMode : uint8 {
	DBM_Translucent = 0,
	DBM_Stain = 1,
	DBM_Normal = 2,
	DBM_Emissive = 3,
	DBM_DBuffer_ColorNormalRoughness = 4,
	DBM_DBuffer_Color = 5,
	DBM_DBuffer_ColorNormal = 6,
	DBM_DBuffer_ColorRoughness = 7,
	DBM_DBuffer_Normal = 8,
	DBM_DBuffer_NormalRoughness = 9,
	DBM_DBuffer_Roughness = 10,
	DBM_DBuffer_Emissive = 11,
	DBM_DBuffer_AlphaComposite = 12,
	DBM_DBuffer_EmissiveAlphaComposite = 13,
	DBM_Volumetric_DistanceFunction = 14,
	DBM_AlphaComposite = 15,
	DBM_AmbientOcclusion = 16,
	DBM_Modulate2x = 17,
	DBM_Unlit = 18,
	DBM_MAX = 19
};

// Enum Engine.EMaterialDecalResponse
enum class EMaterialDecalResponse : uint8 {
	MDR_None = 0,
	MDR_ColorNormalRoughness = 1,
	MDR_Color = 2,
	MDR_ColorNormal = 3,
	MDR_ColorRoughness = 4,
	MDR_Normal = 5,
	MDR_NormalRoughness = 6,
	MDR_Roughness = 7,
	MDR_MAX = 8
};

// Enum Engine.EMaterialTranslucencyPass
enum class EMaterialTranslucencyPass : uint8 {
	MTP_BeforeDOF = 0,
	MTP_AfterDOF = 1,
	MTP_AfterMotionBlur = 2,
	MTP_MAX = 3
};

// Enum Engine.EMeshFeatureImportance
enum class EMeshFeatureImportance : uint8 {
	Off = 0,
	Lowest = 1,
	Low = 2,
	Normal = 3,
	High = 4,
	Highest = 5,
	EMeshFeatureImportance_MAX = 6
};

// Enum Engine.EStaticMeshReductionTerimationCriterion
enum class EStaticMeshReductionTerimationCriterion : uint8 {
	Triangles = 0,
	Vertices = 1,
	Any = 2,
	EStaticMeshReductionTerimationCriterion_MAX = 3
};

// Enum Engine.ELandscapeCullingPrecision
enum class ELandscapeCullingPrecision : uint8 {
	High = 0,
	Medium = 1,
	Low = 2,
	ELandscapeCullingPrecision_MAX = 3
};

// Enum Engine.EProxyNormalComputationMethod
enum class EProxyNormalComputationMethod : uint8 {
	AngleWeighted = 0,
	AreaWeighted = 1,
	EqualWeighted = 2,
	EProxyNormalComputationMethod_MAX = 3
};

// Enum Engine.EMeshLODSelectionType
enum class EMeshLODSelectionType : uint8 {
	AllLODs = 0,
	SpecificLOD = 1,
	CalculateLOD = 2,
	LowestDetailLOD = 3,
	EMeshLODSelectionType_MAX = 4
};

// Enum Engine.EMeshMergeType
enum class EMeshMergeType : uint8 {
	MeshMergeType_Default = 0,
	MeshMergeType_MergeActor = 1,
	MeshMergeType_MAX = 2
};

// Enum Engine.EUVOutput
enum class EUVOutput : uint8 {
	DoNotOutputChannel = 0,
	OutputChannel = 1,
	EUVOutput_MAX = 2
};

// Enum Engine.EMeshApproximationType
enum class EMeshApproximationType : uint8 {
	MeshAndMaterials = 0,
	MeshShapeOnly = 1,
	EMeshApproximationType_MAX = 2
};

// Enum Engine.EMeshApproximationBaseCappingType
enum class EMeshApproximationBaseCappingType : uint8 {
	NoBaseCapping = 0,
	ConvexPolygon = 1,
	ConvexSolid = 2,
	EMeshApproximationBaseCappingType_MAX = 3
};

// Enum Engine.EOccludedGeometryFilteringPolicy
enum class EOccludedGeometryFilteringPolicy : uint8 {
	NoOcclusionFiltering = 0,
	VisibilityBasedFiltering = 1,
	EOccludedGeometryFilteringPolicy_MAX = 2
};

// Enum Engine.EMeshApproximationSimplificationPolicy
enum class EMeshApproximationSimplificationPolicy : uint8 {
	FixedTriangleCount = 0,
	TrianglesPerArea = 1,
	GeometricTolerance = 2,
	EMeshApproximationSimplificationPolicy_MAX = 3
};

// Enum Engine.EMeshApproximationGroundPlaneClippingPolicy
enum class EMeshApproximationGroundPlaneClippingPolicy : uint8 {
	NoGroundClipping = 0,
	DiscardWithZPlane = 1,
	CutWithZPlane = 2,
	CutAndFillWithZPlane = 3,
	EMeshApproximationGroundPlaneClippingPolicy_MAX = 4
};

// Enum Engine.EMeshApproximationUVGenerationPolicy
enum class EMeshApproximationUVGenerationPolicy : uint8 {
	PreferUVAtlas = 0,
	PreferXAtlas = 1,
	PreferPatchBuilder = 2,
	EMeshApproximationUVGenerationPolicy_MAX = 3
};

// Enum Engine.EVertexPaintAxis
enum class EVertexPaintAxis : uint8 {
	X = 0,
	Y = 1,
	Z = 2,
	EVertexPaintAxis_MAX = 3
};

// Enum Engine.EReplayResult
enum class EReplayResult : uint8 {
	Success = 0,
	ReplayNotFound = 1,
	Corrupt = 2,
	UnsupportedCheckpoint = 3,
	GameSpecific = 4,
	InitConnect = 5,
	LoadMap = 6,
	Serialization = 7,
	StreamerError = 8,
	ConnectionClosed = 9,
	MissingArchive = 10,
	Unknown = 11,
	EReplayResult_MAX = 12
};

// Enum Engine.EPSCPoolMethod
enum class EPSCPoolMethod : uint8 {
	None = 0,
	AutoRelease = 1,
	ManualRelease = 2,
	ManualRelease_OnComplete = 3,
	FreeInPool = 4,
	EPSCPoolMethod_MAX = 5
};

// Enum Engine.EPerQualityLevels
enum class EPerQualityLevels : uint8 {
	Low = 0,
	Medium = 1,
	High = 2,
	Epic = 3,
	Cinematic = 4,
	Num = 5,
	EPerQualityLevels_MAX = 6
};

// Enum Engine.EAngularDriveMode
enum class EAngularDriveMode : uint8 {
	SLERP = 0,
	TwistAndSwing = 1,
	EAngularDriveMode_MAX = 2
};

// Enum Engine.EConstraintTransformComponentFlags
enum class EConstraintTransformComponentFlags : uint8 {
	None = 0,
	ChildPosition = 1,
	ChildRotation = 2,
	ParentPosition = 4,
	ParentRotation = 8,
	AllChild = 3,
	AllParent = 12,
	AllPosition = 5,
	AllRotation = 10,
	All = 15,
	EConstraintTransformComponentFlags_MAX = 16
};

// Enum Engine.EPhysicsAssetSolverType
enum class EPhysicsAssetSolverType : uint8 {
	RBAN = 0,
	World = 1,
	EPhysicsAssetSolverType_MAX = 2
};

// Enum Engine.ESettingsDOF
enum class ESettingsDOF : uint8 {
	Full3D = 0,
	YZPlane = 1,
	XZPlane = 2,
	XYPlane = 3,
	ESettingsDOF_MAX = 4
};

// Enum Engine.ESettingsLockedAxis
enum class ESettingsLockedAxis : uint8 {
	None = 0,
	X = 1,
	Y = 2,
	Z = 3,
	Invalid = 4,
	ESettingsLockedAxis_MAX = 5
};

// Enum Engine.EDynamicForceFeedbackAction
enum class EDynamicForceFeedbackAction : uint8 {
	Start = 0,
	Update = 1,
	Stop = 2,
	EDynamicForceFeedbackAction_MAX = 3
};

// Enum Engine.EVoiceBlockReasons
enum class EVoiceBlockReasons : uint8 {
	None = 0,
	Muted = 1,
	Gameplay = 2,
	Blocked = 4,
	BlockedBy = 8,
	EVoiceBlockReasons_MAX = 9
};

// Enum Engine.EPropertyAccessCopyBatch
enum class EPropertyAccessCopyBatch : uint8 {
	InternalUnbatched = 0,
	ExternalUnbatched = 1,
	InternalBatched = 2,
	ExternalBatched = 3,
	Count = 4,
	EPropertyAccessCopyBatch_MAX = 5
};

// Enum Engine.EPropertyAccessIndirectionType
enum class EPropertyAccessIndirectionType : uint8 {
	Offset = 0,
	Object = 1,
	Array = 2,
	ScriptFunction = 3,
	NativeFunction = 4,
	EPropertyAccessIndirectionType_MAX = 5
};

// Enum Engine.EPropertyAccessObjectType
enum class EPropertyAccessObjectType : uint8 {
	None = 0,
	Object = 1,
	WeakObject = 2,
	SoftObject = 3,
	EPropertyAccessObjectType_MAX = 4
};

// Enum Engine.EPropertyAccessCopyType
enum class EPropertyAccessCopyType : uint8 {
	None = 0,
	Plain = 1,
	Complex = 2,
	Bool = 3,
	Struct = 4,
	Object = 5,
	Name = 6,
	Array = 7,
	PromoteBoolToByte = 8,
	PromoteBoolToInt32 = 9,
	PromoteBoolToInt64 = 10,
	PromoteBoolToFloat = 11,
	PromoteBoolToDouble = 12,
	PromoteByteToInt32 = 13,
	PromoteByteToInt64 = 14,
	PromoteByteToFloat = 15,
	PromoteByteToDouble = 16,
	PromoteInt32ToInt64 = 17,
	PromoteInt32ToFloat = 18,
	PromoteInt32ToDouble = 19,
	PromoteFloatToDouble = 20,
	DemoteDoubleToFloat = 21,
	PromoteArrayFloatToDouble = 22,
	DemoteArrayDoubleToFloat = 23,
	PromoteMapValueFloatToDouble = 24,
	DemoteMapValueDoubleToFloat = 25,
	EPropertyAccessCopyType_MAX = 26
};

// Enum Engine.EClearSceneOptions
enum class EClearSceneOptions : uint8 {
	NoClear = 0,
	HardwareClear = 1,
	QuadAtMaxZ = 2,
	EClearSceneOptions_MAX = 3
};

// Enum Engine.ECompositingSampleCount
enum class ECompositingSampleCount : uint8 {
	One = 1,
	Two = 2,
	Four = 4,
	Eight = 8,
	ECompositingSampleCount_MAX = 9
};

// Enum Engine.ECustomDepthStencil
enum class ECustomDepthStencil : uint8 {
	Disabled = 0,
	Enabled = 1,
	EnabledOnDemand = 2,
	EnabledWithStencil = 3,
	ECustomDepthStencil_MAX = 4
};

// Enum Engine.EEarlyZPass
enum class EEarlyZPass : uint8 {
	None = 0,
	OpaqueOnly = 1,
	OpaqueAndMasked = 2,
	Auto = 3,
	EEarlyZPass_MAX = 4
};

// Enum Engine.EVelocityOutputPass
enum class EVelocityOutputPass : uint8 {
	DepthPass = 0,
	BasePass = 1,
	AfterBasePass = 2,
	EVelocityOutputPass_MAX = 3
};

// Enum Engine.EVertexDeformationOutputsVelocity
enum class EVertexDeformationOutputsVelocity : uint8 {
	Off = 0,
	On = 1,
	Auto = 2,
	EVertexDeformationOutputsVelocity_MAX = 3
};

// Enum Engine.EAlphaChannelMode
enum class EAlphaChannelMode : uint8 {
	Disabled = 0,
	LinearColorSpaceOnly = 1,
	AllowThroughTonemapper = 2,
	EAlphaChannelMode_MAX = 3
};

// Enum Engine.EAutoExposureMethodUI
enum class EAutoExposureMethodUI : uint8 {
	AEM_Histogram = 0,
	AEM_Basic = 1,
	AEM_Manual = 2,
	AEM_MAX = 3
};

// Enum Engine.EDefaultBackBufferPixelFormat
enum class EDefaultBackBufferPixelFormat : uint8 {
	DBBPF_B8G8R8A8 = 0,
	DBBPF_A16B16G16R16_DEPRECATED = 1,
	DBBPF_FloatRGB_DEPRECATED = 2,
	DBBPF_FloatRGBA = 3,
	DBBPF_A2B10G10R10 = 4,
	DBBPF_MAX = 5
};

// Enum Engine.EFixedFoveationLevels
enum class EFixedFoveationLevels : uint8 {
	Disabled = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	HighTop = 4,
	EFixedFoveationLevels_MAX = 5
};

// Enum Engine.EMobileAntiAliasingMethod
enum class EMobileAntiAliasingMethod : uint8 {
	None = 0,
	FXAA = 1,
	TemporalAA = 2,
	MSAA = 3,
	EMobileAntiAliasingMethod_MAX = 4
};

// Enum Engine.EMobileFloatPrecisionMode
enum class EMobileFloatPrecisionMode : uint8 {
	Half = 0,
	Full_MaterialExpressionOnly = 1,
	Full = 2,
	EMobileFloatPrecisionMode_MAX = 3
};

// Enum Engine.EMobileShadingPath
enum class EMobileShadingPath : uint8 {
	Forward = 0,
	Deferred = 1,
	EMobileShadingPath_MAX = 2
};

// Enum Engine.EShaderCompressionFormat
enum class EShaderCompressionFormat : uint8 {
	None = 0,
	LZ4 = 1,
	Oodle = 2,
	Zlib = 3,
	EShaderCompressionFormat_MAX = 4
};

// Enum Engine.ELumenSoftwareTracingMode
enum class ELumenSoftwareTracingMode : uint8 {
	DetailTracing = 1,
	GlobalTracing = 0,
	ELumenSoftwareTracingMode_MAX = 2
};

// Enum Engine.ELumenRayLightingMode
enum class ELumenRayLightingMode : uint8 {
	SurfaceCache = 0,
	HitLighting = 2,
	ELumenRayLightingMode_MAX = 3
};

// Enum Engine.EWorkingColorSpace
enum class EWorkingColorSpace : uint8 {
	sRGB = 1,
	Rec2020 = 2,
	ACESAP0 = 3,
	ACESAP1 = 4,
	P3DCI = 5,
	P3D65 = 6,
	Custom = 7,
	EWorkingColorSpace_MAX = 8
};

// Enum Engine.ESpecularProfileFormat
enum class ESpecularProfileFormat : uint8 {
	ViewLightVector = 0,
	HalfVector = 1,
	ESpecularProfileFormat_MAX = 2
};

// Enum Engine.ESkeletalMeshAsyncProperties
enum class ESkeletalMeshAsyncProperties : int32 {
	None = 0,
	Materials = 1,
	Skeleton = 2,
	RefSkeleton = 4,
	RetargetBasePose = 8,
	RefBasesInvMatrix = 16,
	MeshClothingAssets = 32,
	UseLegacyMeshDerivedDataKey = 64,
	HasActiveClothingAssets = 128,
	LODSettings = 256,
	HasVertexColors = 512,
	VertexColorGuid = 1024,
	MorphTargets = 2048,
	SkeletalMeshRenderData = 4096,
	MeshEditorDataObject = 8192,
	NeverStream = 16384,
	OverrideLODStreamingSettings = 32768,
	SupportLODStreaming = 65536,
	MaxNumStreamedLODs = 131072,
	MaxNumOptionalLODs = 262144,
	ImportedModel = 524288,
	LODInfo = 1048576,
	SkinWeightProfiles = 2097152,
	CachedComposedRefPoseMatrices = 4194304,
	SamplingInfo = 8388608,
	NodeMappingData = 16777216,
	ShadowPhysicsAsset = 33554432,
	SkelMirrorTable = 67108864,
	MinLod = 134217728,
	DisableBelowMinLodStripping = 268435456,
	SkelMirrorAxis = 536870912,
	SkelMirrorFlipAxis = 1073741824,
	DefaultAnimationRig = 2147483648,
	NegativeBoundsExtension = 4294967296,
	PositiveBoundsExtension = 8589934592,
	ExtendedBounds = 17179869184,
	HasBeenSimplified = 34359738368,
	EnablePerPolyCollision = 68719476736,
	BodySetup = 137438953472,
	MorphTargetIndexMap = 274877906944,
	FloorOffset = 549755813888,
	ImportedBounds = 1099511627776,
	PhysicsAsset = 2199023255552,
	AssetImportData = 4398046511104,
	ThumbnailInfo = 8796093022208,
	HasCustomDefaultEditorCamera = 17592186044416,
	DefaultEditorCameraLocation = 35184372088832,
	DefaultEditorCameraRotation = 70368744177664,
	RequiresLODScreenSizeConversion = 140737488355328,
	PostProcessAnimBlueprint = 281474976710656,
	DefaultEditorCameraLookAt = 562949953421312,
	PreviewAttachedAssetContainer = 1125899906842624,
	DefaultEditorCameraOrthoZoom = 2251799813685248,
	RequiresLODHysteresisConversion = 4503599627370496,
	bSupportRayTracing = 9007199254740992,
	RayTracingMinLOD = 18014398509481984,
	ClothLODBiasMode = 36028797018963968,
	DefaultMeshDeformer = 72057594037927936,
	OverlayMaterial = 144115188075855872,
	OverlayMaterialMaxDrawDistance = 288230376151711744,
	All = -1,
	ESkeletalMeshAsyncProperties_MAX = 288230376151711745
};

// Enum Engine.EClothLODBiasMode
enum class EClothLODBiasMode : uint8 {
	MappingsToSameLOD = 0,
	MappingsToMinLOD = 1,
	MappingsToAnyLOD = 2,
	EClothLODBiasMode_MAX = 3
};

// Enum Engine.EBoneFilterActionOption
enum class EBoneFilterActionOption : uint8 {
	Remove = 0,
	Keep = 1,
	Invalid = 2,
	EBoneFilterActionOption_MAX = 3
};

// Enum Engine.ESkinCacheUsage
enum class ESkinCacheUsage : uint8 {
	Auto = 0,
	Disabled = 255,
	Enabled = 1,
	ESkinCacheUsage_MAX = 256
};

// Enum Engine.ESkinCacheDefaultBehavior
enum class ESkinCacheDefaultBehavior : uint8 {
	Exclusive = 0,
	Inclusive = 1,
	ESkinCacheDefaultBehavior_MAX = 2
};

// Enum Engine.EVirtualizationMode
enum class EVirtualizationMode : uint8 {
	Disabled = 0,
	PlayWhenSilent = 1,
	Restart = 2,
	EVirtualizationMode_MAX = 3
};

// Enum Engine.EMaxConcurrentResolutionRule
enum class EMaxConcurrentResolutionRule : uint8 {
	PreventNew = 0,
	StopOldest = 1,
	StopFarthestThenPreventNew = 2,
	StopFarthestThenOldest = 3,
	StopLowestPriority = 4,
	StopQuietest = 5,
	StopLowestPriorityThenPreventNew = 6,
	Count = 7,
	EMaxConcurrentResolutionRule_MAX = 8
};

// Enum Engine.EConcurrencyVolumeScaleMode
enum class EConcurrencyVolumeScaleMode : uint8 {
	Default = 0,
	Distance = 1,
	Priority = 2,
	EConcurrencyVolumeScaleMode_MAX = 3
};

// Enum Engine.EModulationRouting
enum class EModulationRouting : uint8 {
	Disable = 0,
	Inherit = 1,
	Override = 2,
	Union = 3,
	EModulationRouting_MAX = 4
};

// Enum Engine.ESourceBusChannels
enum class ESourceBusChannels : uint8 {
	Mono = 0,
	Stereo = 1,
	ESourceBusChannels_MAX = 2
};

// Enum Engine.EFFTSize
enum class EFFTSize : uint8 {
	DefaultSize = 0,
	Min = 1,
	Small = 2,
	Medium = 3,
	Large = 4,
	VeryLarge = 5,
	Max = 6,
	EFFTSize_MAX = 7
};

// Enum Engine.EFFTPeakInterpolationMethod
enum class EFFTPeakInterpolationMethod : uint8 {
	NearestNeighbor = 0,
	Linear = 1,
	Quadratic = 2,
	ConstantQ = 3,
	EFFTPeakInterpolationMethod_MAX = 4
};

// Enum Engine.EFFTWindowType
enum class EFFTWindowType : uint8 {
	None = 0,
	Hamming = 1,
	Hann = 2,
	Blackman = 3,
	EFFTWindowType_MAX = 4
};

// Enum Engine.EAudioSpectrumType
enum class EAudioSpectrumType : uint8 {
	MagnitudeSpectrum = 0,
	PowerSpectrum = 1,
	Decibel = 2,
	EAudioSpectrumType_MAX = 3
};

// Enum Engine.EGainParamMode
enum class EGainParamMode : uint8 {
	Linear = 0,
	Decibels = 1,
	EGainParamMode_MAX = 2
};

// Enum Engine.EAudioSpectrumBandPresetType
enum class EAudioSpectrumBandPresetType : uint8 {
	KickDrum = 0,
	SnareDrum = 1,
	Voice = 2,
	Cymbals = 3,
	EAudioSpectrumBandPresetType_MAX = 4
};

// Enum Engine.EAudioRecordingExportType
enum class EAudioRecordingExportType : uint8 {
	SoundWave = 0,
	WavFile = 1,
	EAudioRecordingExportType_MAX = 2
};

// Enum Engine.ESendLevelControlMethod
enum class ESendLevelControlMethod : uint8 {
	Linear = 0,
	CustomCurve = 1,
	Manual = 2,
	ESendLevelControlMethod_MAX = 3
};

// Enum Engine.ESubmixSendStage
enum class ESubmixSendStage : uint8 {
	PostDistanceAttenuation = 0,
	PreDistanceAttenuation = 1,
	ESubmixSendStage_MAX = 2
};

// Enum Engine.ENormalMode
enum class ENormalMode : uint8 {
	NM_PreserveSmoothingGroups = 0,
	NM_RecalculateNormals = 1,
	NM_RecalculateNormalsSmooth = 2,
	NM_RecalculateNormalsHard = 3,
	TEMP_BROKEN = 4,
	ENormalMode_MAX = 5
};

// Enum Engine.EImportanceLevel
enum class EImportanceLevel : uint8 {
	IL_Off = 0,
	IL_Lowest = 1,
	IL_Low = 2,
	IL_Normal = 3,
	IL_High = 4,
	IL_Highest = 5,
	TEMP_BROKEN2 = 6,
	EImportanceLevel_MAX = 7
};

// Enum Engine.EOptimizationType
enum class EOptimizationType : uint8 {
	OT_NumOfTriangles = 0,
	OT_MaxDeviation = 1,
	OT_MAX = 2
};

// Enum Engine.ETextureStreamingImportance
enum class ETextureStreamingImportance : uint8 {
	TSI_Default = 0,
	TSI_Lowest = 1,
	TSI_Low = 2,
	TSI_Medium = 3,
	TSI_High = 4,
	TSI_Highest = 5,
	TSI_MAX = 6
};

// Enum Engine.ETextureEncodeEffort
enum class ETextureEncodeEffort : uint8 {
	Default = 0,
	Low = 10,
	Normal = 20,
	High = 30,
	ETextureEncodeEffort_MAX = 31
};

// Enum Engine.ETextureUniversalTiling
enum class ETextureUniversalTiling : uint8 {
	Disabled = 0,
	Enabled_256KB = 1,
	Enabled_64KB = 2,
	ETextureUniversalTiling_MAX = 3
};

// Enum Engine.ETextureEncodeSpeedOverride
enum class ETextureEncodeSpeedOverride : uint8 {
	Disabled = 255,
	Final = 0,
	FinalIfAvailable = 1,
	Fast = 2,
	ETextureEncodeSpeedOverride_MAX = 256
};

// Enum Engine.ETextureRenderTargetFormat
enum class ETextureRenderTargetFormat : uint8 {
	RTF_R8 = 0,
	RTF_RG8 = 1,
	RTF_RGBA8 = 2,
	RTF_RGBA8_SRGB = 3,
	RTF_R16f = 4,
	RTF_RG16f = 5,
	RTF_RGBA16f = 6,
	RTF_R32f = 7,
	RTF_RG32f = 8,
	RTF_RGBA32f = 9,
	RTF_RGB10A2 = 10,
	RTF_MAX = 11
};

// Enum Engine.ERenderFocusRule
enum class ERenderFocusRule : uint8 {
	Always = 0,
	NonPointer = 1,
	NavigationOnly = 2,
	Never = 3,
	ERenderFocusRule_MAX = 4
};

// Enum Engine.EUIScalingRule
enum class EUIScalingRule : uint8 {
	ShortestSide = 0,
	LongestSide = 1,
	Horizontal = 2,
	Vertical = 3,
	ScaleToFit = 4,
	Custom = 5,
	EUIScalingRule_MAX = 6
};

// Enum Engine.EFontDPI
enum class EFontDPI : uint8 {
	Standard = 0,
	Unreal = 1,
	Custom = 2,
	EFontDPI_MAX = 3
};

// Enum Engine.EHardwareDeviceSupportedFeatures
enum class EHardwareDeviceSupportedFeatures : int32 {
	Unspecified = 0,
	Keypress = 1,
	Pointer = 2,
	Gamepad = 4,
	Touch = 8,
	Camera = 16,
	MotionTracking = 32,
	Lights = 64,
	TriggerHaptics = 128,
	ForceFeedback = 256,
	AudioBasedVibrations = 512,
	Acceleration = 1024,
	Virtual = 2048,
	Microphone = 4096,
	Orientation = 8192,
	CustomA = 16777216,
	CustomB = 33554432,
	CustomC = 67108864,
	CustomD = 134217728,
	All = 2147483647,
	EHardwareDeviceSupportedFeatures_MAX = 2147483648
};

// Enum Engine.EHardwareDevicePrimaryType
enum class EHardwareDevicePrimaryType : uint8 {
	Unspecified = 0,
	KeyboardAndMouse = 1,
	Gamepad = 2,
	Touch = 3,
	MotionTracking = 4,
	RacingWheel = 5,
	FlightStick = 6,
	Camera = 7,
	Instrument = 8,
	CustomTypeA = 9,
	CustomTypeB = 10,
	CustomTypeC = 11,
	CustomTypeD = 12,
	EHardwareDevicePrimaryType_MAX = 13
};

// Enum Engine.EDataLayerState
enum class EDataLayerState : uint8 {
	Unloaded = 0,
	Loaded = 1,
	Activated = 2,
	EDataLayerState_MAX = 3
};

// Enum Engine.EHLODLayerType
enum class EHLODLayerType : uint8 {
	Instancing = 0,
	MeshMerge = 1,
	MeshSimplify = 2,
	MeshApproximate = 3,
	Custom = 4,
	EHLODLayerType_MAX = 5
};

// Enum Engine.EWorldPartitionServerStreamingMode
enum class EWorldPartitionServerStreamingMode : uint8 {
	ProjectDefault = 0,
	Disabled = 1,
	Enabled = 2,
	EnabledInPIE = 3,
	EWorldPartitionServerStreamingMode_MAX = 4
};

// Enum Engine.EWorldPartitionServerStreamingOutMode
enum class EWorldPartitionServerStreamingOutMode : uint8 {
	ProjectDefault = 0,
	Disabled = 1,
	Enabled = 2,
	EWorldPartitionServerStreamingOutMode_MAX = 3
};

// Enum Engine.EWorldPartitionRuntimeCellState
enum class EWorldPartitionRuntimeCellState : uint8 {
	Unloaded = 0,
	Loaded = 1,
	Activated = 2,
	EWorldPartitionRuntimeCellState_MAX = 3
};

// Enum Engine.EWorldPartitionStreamingPerformance
enum class EWorldPartitionStreamingPerformance : uint8 {
	Good = 0,
	Slow = 1,
	Critical = 2,
	EWorldPartitionStreamingPerformance_MAX = 3
};

// Enum Engine.EWorldPartitionCVarProjectDefaultOverride
enum class EWorldPartitionCVarProjectDefaultOverride : uint8 {
	ProjectDefault = 0,
	Disabled = 1,
	Enabled = 2,
	EWorldPartitionCVarProjectDefaultOverride_MAX = 3
};

// Enum Engine.EStreamingSourceTargetBehavior
enum class EStreamingSourceTargetBehavior : uint8 {
	Include = 0,
	Exclude = 1,
	EStreamingSourceTargetBehavior_MAX = 2
};

// Enum Engine.EStreamingSourceTargetState
enum class EStreamingSourceTargetState : uint8 {
	Loaded = 0,
	Activated = 1,
	EStreamingSourceTargetState_MAX = 2
};

// Enum Engine.EStreamingSourcePriority
enum class EStreamingSourcePriority : uint8 {
	Highest = 0,
	High = 64,
	Normal = 128,
	Low = 192,
	Lowest = 255,
	Default = 128,
	EStreamingSourcePriority_MAX = 256
};

// ScriptStruct Engine.MaterialInput
// Size: 0x30 (Inherited: 0x00)
struct FMaterialInput {
	struct UMaterialExpression* Expression; // 0x00(0x08)
	int32_t OutputIndex; // 0x08(0x04)
	struct FName InputName; // 0x0c(0x0c)
	int32_t Mask; // 0x18(0x04)
	int32_t MaskR; // 0x1c(0x04)
	int32_t MaskG; // 0x20(0x04)
	int32_t MaskB; // 0x24(0x04)
	int32_t MaskA; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.ColorMaterialInput
// Size: 0x38 (Inherited: 0x30)
struct FColorMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FColor Constant; // 0x34(0x04)
};

// ScriptStruct Engine.DistributionLookupTable
// Size: 0x20 (Inherited: 0x00)
struct FDistributionLookupTable {
	float TimeScale; // 0x00(0x04)
	float TimeBias; // 0x04(0x04)
	struct TArray<float> Values; // 0x08(0x10)
	char Op; // 0x18(0x01)
	char EntryCount; // 0x19(0x01)
	char EntryStride; // 0x1a(0x01)
	char SubEntryStride; // 0x1b(0x01)
	char LockFlag; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.ExpressionInput
// Size: 0x30 (Inherited: 0x00)
struct FExpressionInput {
	struct UMaterialExpression* Expression; // 0x00(0x08)
	int32_t OutputIndex; // 0x08(0x04)
	struct FName InputName; // 0x0c(0x0c)
	int32_t Mask; // 0x18(0x04)
	int32_t MaskR; // 0x1c(0x04)
	int32_t MaskG; // 0x20(0x04)
	int32_t MaskB; // 0x24(0x04)
	int32_t MaskA; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.ExpressionOutput
// Size: 0x20 (Inherited: 0x00)
struct FExpressionOutput {
	struct FName OutputName; // 0x00(0x0c)
	int32_t Mask; // 0x0c(0x04)
	int32_t MaskR; // 0x10(0x04)
	int32_t MaskG; // 0x14(0x04)
	int32_t MaskB; // 0x18(0x04)
	int32_t MaskA; // 0x1c(0x04)
};

// ScriptStruct Engine.FloatDistribution
// Size: 0x20 (Inherited: 0x00)
struct FFloatDistribution {
	struct FDistributionLookupTable Table; // 0x00(0x20)
};

// ScriptStruct Engine.FloatRK4SpringInterpolator
// Size: 0x08 (Inherited: 0x00)
struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x00(0x04)
	float DampeningRatio; // 0x04(0x04)
};

// ScriptStruct Engine.FormatArgumentData
// Size: 0x50 (Inherited: 0x00)
struct FFormatArgumentData {
	struct FString ArgumentName; // 0x00(0x10)
	enum class EFormatArgumentType ArgumentValueType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FText ArgumentValue; // 0x18(0x18)
	int64_t ArgumentValueInt; // 0x30(0x08)
	float ArgumentValueFloat; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	double ArgumentValueDouble; // 0x40(0x08)
	enum class ETextGender ArgumentValueGender; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Engine.MaterialAttributesInput
// Size: 0x38 (Inherited: 0x30)
struct FMaterialAttributesInput : FExpressionInput {
	int64_t PropertyConnectedMask; // 0x30(0x08)
};

// ScriptStruct Engine.RawDistribution
// Size: 0x20 (Inherited: 0x00)
struct FRawDistribution {
	struct FDistributionLookupTable Table; // 0x00(0x20)
};

// ScriptStruct Engine.ScalarMaterialInput
// Size: 0x38 (Inherited: 0x30)
struct FScalarMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Constant; // 0x34(0x04)
};

// ScriptStruct Engine.ShadingModelMaterialInput
// Size: 0x30 (Inherited: 0x30)
struct FShadingModelMaterialInput : FMaterialInput {
};

// ScriptStruct Engine.StrataMaterialInput
// Size: 0x30 (Inherited: 0x30)
struct FStrataMaterialInput : FMaterialInput {
};

// ScriptStruct Engine.Vector2MaterialInput
// Size: 0x40 (Inherited: 0x30)
struct FVector2MaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float ConstantX; // 0x34(0x04)
	float ConstantY; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Engine.Vector4Distribution
// Size: 0x20 (Inherited: 0x00)
struct FVector4Distribution {
	struct FDistributionLookupTable Table; // 0x00(0x20)
};

// ScriptStruct Engine.VectorDistribution
// Size: 0x20 (Inherited: 0x00)
struct FVectorDistribution {
	struct FDistributionLookupTable Table; // 0x00(0x20)
};

// ScriptStruct Engine.VectorMaterialInput
// Size: 0x40 (Inherited: 0x30)
struct FVectorMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FVector3f Constant; // 0x34(0x0c)
};

// ScriptStruct Engine.VectorRK4SpringInterpolator
// Size: 0x08 (Inherited: 0x00)
struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x00(0x04)
	float DampeningRatio; // 0x04(0x04)
};

// ScriptStruct Engine.AnimDataModelNotifPayload
// Size: 0x10 (Inherited: 0x00)
struct FAnimDataModelNotifPayload {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.ChaosBreakEvent
// Size: 0x78 (Inherited: 0x00)
struct FChaosBreakEvent {
	struct UPrimitiveComponent* Component; // 0x00(0x08)
	struct FVector Location; // 0x08(0x18)
	struct FVector Velocity; // 0x20(0x18)
	struct FVector AngularVelocity; // 0x38(0x18)
	struct FVector Extents; // 0x50(0x18)
	float Mass; // 0x68(0x04)
	int32_t Index; // 0x6c(0x04)
	bool bFromCrumble; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct Engine.CollisionChaosEvent
// Size: 0x130 (Inherited: 0x00)
struct FCollisionChaosEvent {
	struct FVector Location; // 0x00(0x18)
	struct FVector AccumulatedImpulse; // 0x18(0x18)
	struct FVector Normal; // 0x30(0x18)
	float PenetrationDepth; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FCollisionChaosEventBodyInfo Body1; // 0x50(0x70)
	struct FCollisionChaosEventBodyInfo Body2; // 0xc0(0x70)
};

// ScriptStruct Engine.CollisionChaosEventBodyInfo
// Size: 0x70 (Inherited: 0x00)
struct FCollisionChaosEventBodyInfo {
	struct FVector Velocity; // 0x00(0x18)
	struct FVector DeltaVelocity; // 0x18(0x18)
	struct FVector AngularVelocity; // 0x30(0x18)
	float Mass; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UPhysicalMaterial* PhysMaterial; // 0x50(0x08)
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // 0x58(0x08)
	int32_t BodyIndex; // 0x60(0x04)
	struct FName BoneName; // 0x64(0x0c)
};

// ScriptStruct Engine.ChaosCrumblingEvent
// Size: 0xc0 (Inherited: 0x00)
struct FChaosCrumblingEvent {
	struct UPrimitiveComponent* Component; // 0x00(0x08)
	struct FVector Location; // 0x08(0x18)
	struct FQuat Orientation; // 0x20(0x20)
	struct FVector LinearVelocity; // 0x40(0x18)
	struct FVector AngularVelocity; // 0x58(0x18)
	float Mass; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FBox LocalBounds; // 0x78(0x38)
	struct TArray<int32_t> Children; // 0xb0(0x10)
};

// ScriptStruct Engine.HitResult
// Size: 0xf0 (Inherited: 0x00)
struct FHitResult {
	int32_t FaceIndex; // 0x00(0x04)
	float Time; // 0x04(0x04)
	float Distance; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector_NetQuantize Location; // 0x10(0x18)
	struct FVector_NetQuantize ImpactPoint; // 0x28(0x18)
	struct FVector_NetQuantizeNormal Normal; // 0x40(0x18)
	struct FVector_NetQuantizeNormal ImpactNormal; // 0x58(0x18)
	struct FVector_NetQuantize TraceStart; // 0x70(0x18)
	struct FVector_NetQuantize TraceEnd; // 0x88(0x18)
	float PenetrationDepth; // 0xa0(0x04)
	int32_t MyItem; // 0xa4(0x04)
	int32_t Item; // 0xa8(0x04)
	char ElementIndex; // 0xac(0x01)
	char bBlockingHit : 1; // 0xad(0x01)
	char bStartPenetrating : 1; // 0xad(0x01)
	char pad_AD_2 : 6; // 0xad(0x01)
	char pad_AE[0x2]; // 0xae(0x02)
	struct TWeakObjectPtr<struct UPhysicalMaterial> PhysMaterial; // 0xb0(0x08)
	struct FActorInstanceHandle HitObjectHandle; // 0xb8(0x18)
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // 0xd0(0x08)
	struct FName BoneName; // 0xd8(0x0c)
	struct FName MyBoneName; // 0xe4(0x0c)
};

// ScriptStruct Engine.ActorInstanceHandle
// Size: 0x18 (Inherited: 0x00)
struct FActorInstanceHandle {
	struct TWeakObjectPtr<struct AActor> Actor; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct Engine.Vector_NetQuantize
// Size: 0x18 (Inherited: 0x18)
struct FVector_NetQuantize : FVector {
};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// Size: 0x18 (Inherited: 0x18)
struct FVector_NetQuantizeNormal : FVector {
};

// ScriptStruct Engine.SubtitleCue
// Size: 0x20 (Inherited: 0x00)
struct FSubtitleCue {
	struct FText Text; // 0x00(0x18)
	float Time; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.PlatformInterfaceDelegateResult
// Size: 0x38 (Inherited: 0x00)
struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FPlatformInterfaceData Data; // 0x08(0x30)
};

// ScriptStruct Engine.PlatformInterfaceData
// Size: 0x30 (Inherited: 0x00)
struct FPlatformInterfaceData {
	struct FName DataName; // 0x00(0x0c)
	enum class EPlatformInterfaceDataType Type; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t IntValue; // 0x10(0x04)
	float FloatValue; // 0x14(0x04)
	struct FString StringValue; // 0x18(0x10)
	struct UObject* ObjectValue; // 0x28(0x08)
};

// ScriptStruct Engine.BranchingPointNotifyPayload
// Size: 0x20 (Inherited: 0x00)
struct FBranchingPointNotifyPayload {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.ChaosRemovalEvent
// Size: 0x28 (Inherited: 0x00)
struct FChaosRemovalEvent {
	struct UPrimitiveComponent* Component; // 0x00(0x08)
	struct FVector Location; // 0x08(0x18)
	float Mass; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.TickFunction
// Size: 0x28 (Inherited: 0x00)
struct FTickFunction {
	char pad_0[0x8]; // 0x00(0x08)
	enum class ETickingGroup TickGroup; // 0x08(0x01)
	enum class ETickingGroup EndTickGroup; // 0x09(0x01)
	char bTickEvenWhenPaused : 1; // 0x0a(0x01)
	char bCanEverTick : 1; // 0x0a(0x01)
	char bStartWithTickEnabled : 1; // 0x0a(0x01)
	char bAllowTickOnDedicatedServer : 1; // 0x0a(0x01)
	char pad_A_4 : 4; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	float TickInterval; // 0x0c(0x04)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct Engine.ActorComponentTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FActorComponentTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.InterpControlPoint
// Size: 0x28 (Inherited: 0x00)
struct FInterpControlPoint {
	struct FVector PositionControlPoint; // 0x00(0x18)
	bool bPositionIsRelative; // 0x18(0x01)
	char pad_19[0xf]; // 0x19(0x0f)
};

// ScriptStruct Engine.DebugFloatHistory
// Size: 0x20 (Inherited: 0x00)
struct FDebugFloatHistory {
	struct TArray<float> Samples; // 0x00(0x10)
	int32_t MaxSamples; // 0x10(0x04)
	float MinValue; // 0x14(0x04)
	float MaxValue; // 0x18(0x04)
	bool bAutoAdjustMinMax; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.BaseComponentReference
// Size: 0x28 (Inherited: 0x00)
struct FBaseComponentReference {
	struct FName ComponentProperty; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString PathToComponent; // 0x10(0x10)
	char pad_20[0x8]; // 0x20(0x08)
};

// ScriptStruct Engine.SoftComponentReference
// Size: 0x58 (Inherited: 0x28)
struct FSoftComponentReference : FBaseComponentReference {
	struct TSoftObjectPtr<AActor> OtherActor; // 0x28(0x30)
};

// ScriptStruct Engine.ComponentReference
// Size: 0x30 (Inherited: 0x28)
struct FComponentReference : FBaseComponentReference {
	struct TWeakObjectPtr<struct AActor> OtherActor; // 0x28(0x08)
};

// ScriptStruct Engine.LatentActionInfo
// Size: 0x20 (Inherited: 0x00)
struct FLatentActionInfo {
	int32_t Linkage; // 0x00(0x04)
	int32_t UUID; // 0x04(0x04)
	struct FName ExecutionFunction; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct UObject* CallbackTarget; // 0x18(0x08)
};

// ScriptStruct Engine.TimerHandle
// Size: 0x08 (Inherited: 0x00)
struct FTimerHandle {
	uint64_t Handle; // 0x00(0x08)
};

// ScriptStruct Engine.CollisionProfileName
// Size: 0x0c (Inherited: 0x00)
struct FCollisionProfileName {
	struct FName Name; // 0x00(0x0c)
};

// ScriptStruct Engine.GenericStruct
// Size: 0x04 (Inherited: 0x00)
struct FGenericStruct {
	int32_t Data; // 0x00(0x04)
};

// ScriptStruct Engine.UserActivity
// Size: 0x18 (Inherited: 0x00)
struct FUserActivity {
	struct FString ActionName; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Engine.BodyInstanceAsyncPhysicsTickHandle
// Size: 0x08 (Inherited: 0x00)
struct FBodyInstanceAsyncPhysicsTickHandle {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.WalkableSlopeOverride
// Size: 0x10 (Inherited: 0x00)
struct FWalkableSlopeOverride {
	enum class EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float WalkableSlopeAngle; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.BodyInstance
// Size: 0x190 (Inherited: 0x18)
struct FBodyInstance : FBodyInstanceCore {
	char pad_18[0x6]; // 0x18(0x06)
	enum class ECollisionChannel ObjectType; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	enum class ECollisionEnabled CollisionEnabled; // 0x20(0x01)
	char pad_21[0x38]; // 0x21(0x38)
	enum class ESleepFamily SleepFamily; // 0x59(0x01)
	enum class EDOFMode DOFMode; // 0x5a(0x01)
	char bUseCCD : 1; // 0x5b(0x01)
	char bIgnoreAnalyticCollisions : 1; // 0x5b(0x01)
	char bNotifyRigidBodyCollision : 1; // 0x5b(0x01)
	char pad_5B_3 : 1; // 0x5b(0x01)
	char bSmoothEdgeCollisions : 1; // 0x5b(0x01)
	char bLockTranslation : 1; // 0x5b(0x01)
	char bLockRotation : 1; // 0x5b(0x01)
	char bLockXTranslation : 1; // 0x5b(0x01)
	char bLockYTranslation : 1; // 0x5c(0x01)
	char bLockZTranslation : 1; // 0x5c(0x01)
	char bLockXRotation : 1; // 0x5c(0x01)
	char bLockYRotation : 1; // 0x5c(0x01)
	char bLockZRotation : 1; // 0x5c(0x01)
	char bOverrideMaxAngularVelocity : 1; // 0x5c(0x01)
	char pad_5C_6 : 2; // 0x5c(0x01)
	char bOverrideMaxDepenetrationVelocity : 1; // 0x5d(0x01)
	char bOverrideWalkableSlopeOnInstance : 1; // 0x5d(0x01)
	char bInterpolateWhenSubStepping : 1; // 0x5d(0x01)
	char pad_5D_3 : 1; // 0x5d(0x01)
	char bInertiaConditioning : 1; // 0x5d(0x01)
	char pad_5D_5 : 3; // 0x5d(0x01)
	char pad_5E[0x1a]; // 0x5e(0x1a)
	struct FName CollisionProfileName; // 0x78(0x0c)
	char PositionSolverIterationCount; // 0x84(0x01)
	char VelocitySolverIterationCount; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
	struct FCollisionResponse CollisionResponses; // 0x88(0x30)
	float MaxDepenetrationVelocity; // 0xb8(0x04)
	float MassInKgOverride; // 0xbc(0x04)
	char pad_C0[0x8]; // 0xc0(0x08)
	float LinearDamping; // 0xc8(0x04)
	float AngularDamping; // 0xcc(0x04)
	struct FVector CustomDOFPlaneNormal; // 0xd0(0x18)
	struct FVector COMNudge; // 0xe8(0x18)
	float MassScale; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct FVector InertiaTensorScale; // 0x108(0x18)
	char pad_120[0x10]; // 0x120(0x10)
	struct FWalkableSlopeOverride WalkableSlopeOverride; // 0x130(0x10)
	struct UPhysicalMaterial* PhysMaterialOverride; // 0x140(0x08)
	float MaxAngularVelocity; // 0x148(0x04)
	float CustomSleepThresholdMultiplier; // 0x14c(0x04)
	float StabilizationThresholdMultiplier; // 0x150(0x04)
	float PhysicsBlendWeight; // 0x154(0x04)
	char pad_158[0x38]; // 0x158(0x38)
};

// ScriptStruct Engine.CollisionResponse
// Size: 0x30 (Inherited: 0x00)
struct FCollisionResponse {
	struct FCollisionResponseContainer ResponseToChannels; // 0x00(0x20)
	struct TArray<struct FResponseChannel> ResponseArray; // 0x20(0x10)
};

// ScriptStruct Engine.ResponseChannel
// Size: 0x10 (Inherited: 0x00)
struct FResponseChannel {
	struct FName Channel; // 0x00(0x0c)
	enum class ECollisionResponse Response; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.CollisionResponseContainer
// Size: 0x20 (Inherited: 0x00)
struct FCollisionResponseContainer {
	enum class ECollisionResponse WorldStatic; // 0x00(0x01)
	enum class ECollisionResponse WorldDynamic; // 0x01(0x01)
	enum class ECollisionResponse Pawn; // 0x02(0x01)
	enum class ECollisionResponse Visibility; // 0x03(0x01)
	enum class ECollisionResponse Camera; // 0x04(0x01)
	enum class ECollisionResponse PhysicsBody; // 0x05(0x01)
	enum class ECollisionResponse Vehicle; // 0x06(0x01)
	enum class ECollisionResponse Destructible; // 0x07(0x01)
	enum class ECollisionResponse EngineTraceChannel1; // 0x08(0x01)
	enum class ECollisionResponse EngineTraceChannel2; // 0x09(0x01)
	enum class ECollisionResponse EngineTraceChannel3; // 0x0a(0x01)
	enum class ECollisionResponse EngineTraceChannel4; // 0x0b(0x01)
	enum class ECollisionResponse EngineTraceChannel5; // 0x0c(0x01)
	enum class ECollisionResponse EngineTraceChannel6; // 0x0d(0x01)
	enum class ECollisionResponse GameTraceChannel1; // 0x0e(0x01)
	enum class ECollisionResponse GameTraceChannel2; // 0x0f(0x01)
	enum class ECollisionResponse GameTraceChannel3; // 0x10(0x01)
	enum class ECollisionResponse GameTraceChannel4; // 0x11(0x01)
	enum class ECollisionResponse GameTraceChannel5; // 0x12(0x01)
	enum class ECollisionResponse GameTraceChannel6; // 0x13(0x01)
	enum class ECollisionResponse GameTraceChannel7; // 0x14(0x01)
	enum class ECollisionResponse GameTraceChannel8; // 0x15(0x01)
	enum class ECollisionResponse GameTraceChannel9; // 0x16(0x01)
	enum class ECollisionResponse GameTraceChannel10; // 0x17(0x01)
	enum class ECollisionResponse GameTraceChannel11; // 0x18(0x01)
	enum class ECollisionResponse GameTraceChannel12; // 0x19(0x01)
	enum class ECollisionResponse GameTraceChannel13; // 0x1a(0x01)
	enum class ECollisionResponse GameTraceChannel14; // 0x1b(0x01)
	enum class ECollisionResponse GameTraceChannel15; // 0x1c(0x01)
	enum class ECollisionResponse GameTraceChannel16; // 0x1d(0x01)
	enum class ECollisionResponse GameTraceChannel17; // 0x1e(0x01)
	enum class ECollisionResponse GameTraceChannel18; // 0x1f(0x01)
};

// ScriptStruct Engine.CustomPrimitiveData
// Size: 0x10 (Inherited: 0x00)
struct FCustomPrimitiveData {
	struct TArray<float> Data; // 0x00(0x10)
};

// ScriptStruct Engine.LightingChannels
// Size: 0x01 (Inherited: 0x00)
struct FLightingChannels {
	char bChannel0 : 1; // 0x00(0x01)
	char bChannel1 : 1; // 0x00(0x01)
	char bChannel2 : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
};

// ScriptStruct Engine.CurveTableRowHandle
// Size: 0x18 (Inherited: 0x00)
struct FCurveTableRowHandle {
	struct UCurveTable* CurveTable; // 0x00(0x08)
	struct FName RowName; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.Vector_NetQuantize10
// Size: 0x18 (Inherited: 0x18)
struct FVector_NetQuantize10 : FVector {
};

// ScriptStruct Engine.Vector_NetQuantize100
// Size: 0x18 (Inherited: 0x18)
struct FVector_NetQuantize100 : FVector {
};

// ScriptStruct Engine.HardwareDeviceIdentifier
// Size: 0x20 (Inherited: 0x00)
struct FHardwareDeviceIdentifier {
	struct FName InputClassName; // 0x00(0x0c)
	struct FName HardwareDeviceIdentifier; // 0x0c(0x0c)
	enum class EHardwareDevicePrimaryType PrimaryDeviceType; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	int32_t SupportedFeaturesMask; // 0x1c(0x04)
};

// ScriptStruct Engine.DataTableRowHandle
// Size: 0x18 (Inherited: 0x00)
struct FDataTableRowHandle {
	struct UDataTable* DataTable; // 0x00(0x08)
	struct FName RowName; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.DamageEvent
// Size: 0x10 (Inherited: 0x00)
struct FDamageEvent {
	char pad_0[0x8]; // 0x00(0x08)
	struct UDamageType* DamageTypeClass; // 0x08(0x08)
};

// ScriptStruct Engine.ViewTargetTransitionParams
// Size: 0x10 (Inherited: 0x00)
struct FViewTargetTransitionParams {
	float BlendTime; // 0x00(0x04)
	enum class EViewTargetBlendFunction BlendFunction; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float BlendExp; // 0x08(0x04)
	char bLockOutgoing : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.RuntimeFloatCurve
// Size: 0x88 (Inherited: 0x00)
struct FRuntimeFloatCurve {
	struct FRichCurve EditorCurveData; // 0x00(0x80)
	struct UCurveFloat* ExternalCurve; // 0x80(0x08)
};

// ScriptStruct Engine.IndexedCurve
// Size: 0x68 (Inherited: 0x00)
struct FIndexedCurve {
	char pad_0[0x8]; // 0x00(0x08)
	struct FKeyHandleMap KeyHandlesToIndices; // 0x08(0x60)
};

// ScriptStruct Engine.KeyHandleMap
// Size: 0x60 (Inherited: 0x00)
struct FKeyHandleMap {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct Engine.RealCurve
// Size: 0x70 (Inherited: 0x68)
struct FRealCurve : FIndexedCurve {
	float DefaultValue; // 0x68(0x04)
	enum class ERichCurveExtrapolation PreInfinityExtrap; // 0x6c(0x01)
	enum class ERichCurveExtrapolation PostInfinityExtrap; // 0x6d(0x01)
	char pad_6E[0x2]; // 0x6e(0x02)
};

// ScriptStruct Engine.RichCurve
// Size: 0x80 (Inherited: 0x70)
struct FRichCurve : FRealCurve {
	struct TArray<struct FRichCurveKey> Keys; // 0x70(0x10)
};

// ScriptStruct Engine.RichCurveKey
// Size: 0x1c (Inherited: 0x00)
struct FRichCurveKey {
	enum class ERichCurveInterpMode InterpMode; // 0x00(0x01)
	enum class ERichCurveTangentMode TangentMode; // 0x01(0x01)
	enum class ERichCurveTangentWeightMode TangentWeightMode; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float Time; // 0x04(0x04)
	float Value; // 0x08(0x04)
	float ArriveTangent; // 0x0c(0x04)
	float ArriveTangentWeight; // 0x10(0x04)
	float LeaveTangent; // 0x14(0x04)
	float LeaveTangentWeight; // 0x18(0x04)
};

// ScriptStruct Engine.PerPlatformInt
// Size: 0x04 (Inherited: 0x00)
struct FPerPlatformInt {
	int32_t Default; // 0x00(0x04)
};

// ScriptStruct Engine.PerQualityLevelInt
// Size: 0x68 (Inherited: 0x00)
struct FPerQualityLevelInt {
	char pad_0[0x10]; // 0x00(0x10)
	int32_t Default; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<int32_t, int32_t> PerQuality; // 0x18(0x50)
};

// ScriptStruct Engine.PerQualityLevelFloat
// Size: 0x68 (Inherited: 0x00)
struct FPerQualityLevelFloat {
	char pad_0[0x10]; // 0x00(0x10)
	float Default; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<int32_t, float> PerQuality; // 0x18(0x50)
};

// ScriptStruct Engine.PerPlatformFloat
// Size: 0x04 (Inherited: 0x00)
struct FPerPlatformFloat {
	float Default; // 0x00(0x04)
};

// ScriptStruct Engine.KeyHandleLookupTable
// Size: 0x88 (Inherited: 0x00)
struct FKeyHandleLookupTable {
	char pad_0[0x88]; // 0x00(0x88)
};

// ScriptStruct Engine.AnimNode_Base
// Size: 0x10 (Inherited: 0x00)
struct FAnimNode_Base {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.PoseLinkBase
// Size: 0x10 (Inherited: 0x00)
struct FPoseLinkBase {
	char pad_0[0x8]; // 0x00(0x08)
	int32_t LinkID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.PoseLink
// Size: 0x10 (Inherited: 0x10)
struct FPoseLink : FPoseLinkBase {
};

// ScriptStruct Engine.AnimNode_Root
// Size: 0x20 (Inherited: 0x10)
struct FAnimNode_Root : FAnimNode_Base {
	struct FPoseLink Result; // 0x10(0x10)
};

// ScriptStruct Engine.InputScaleBiasClamp
// Size: 0x30 (Inherited: 0x00)
struct FInputScaleBiasClamp {
	bool bMapRange; // 0x00(0x01)
	bool bClampResult; // 0x01(0x01)
	bool bInterpResult; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FInputRange InRange; // 0x04(0x08)
	struct FInputRange OutRange; // 0x0c(0x08)
	float Scale; // 0x14(0x04)
	float Bias; // 0x18(0x04)
	float ClampMin; // 0x1c(0x04)
	float ClampMax; // 0x20(0x04)
	float InterpSpeedIncreasing; // 0x24(0x04)
	float InterpSpeedDecreasing; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.InputRange
// Size: 0x08 (Inherited: 0x00)
struct FInputRange {
	float Min; // 0x00(0x04)
	float Max; // 0x04(0x04)
};

// ScriptStruct Engine.InputAlphaBoolBlend
// Size: 0x48 (Inherited: 0x00)
struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x00(0x04)
	float BlendOutTime; // 0x04(0x04)
	enum class EAlphaBlendOption BlendOption; // 0x08(0x01)
	bool bInitialized; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct UCurveFloat* CustomCurve; // 0x10(0x08)
	struct FAlphaBlend AlphaBlend; // 0x18(0x30)
};

// ScriptStruct Engine.AlphaBlend
// Size: 0x30 (Inherited: 0x00)
struct FAlphaBlend {
	struct UCurveFloat* CustomCurve; // 0x00(0x08)
	float BlendTime; // 0x08(0x04)
	char pad_C[0x18]; // 0x0c(0x18)
	enum class EAlphaBlendOption BlendOption; // 0x24(0x01)
	char pad_25[0xb]; // 0x25(0x0b)
};

// ScriptStruct Engine.InputScaleBias
// Size: 0x08 (Inherited: 0x00)
struct FInputScaleBias {
	float Scale; // 0x00(0x04)
	float Bias; // 0x04(0x04)
};

// ScriptStruct Engine.ComponentSpacePoseLink
// Size: 0x10 (Inherited: 0x10)
struct FComponentSpacePoseLink : FPoseLinkBase {
};

// ScriptStruct Engine.BoneReference
// Size: 0x14 (Inherited: 0x00)
struct FBoneReference {
	struct FName BoneName; // 0x00(0x0c)
	char pad_C[0x8]; // 0x0c(0x08)
};

// ScriptStruct Engine.AnimNodeReference
// Size: 0x10 (Inherited: 0x00)
struct FAnimNodeReference {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.AnimNode_AssetPlayerRelevancyBase
// Size: 0x10 (Inherited: 0x10)
struct FAnimNode_AssetPlayerRelevancyBase : FAnimNode_Base {
};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
// Size: 0x38 (Inherited: 0x10)
struct FAnimNode_AssetPlayerBase : FAnimNode_AssetPlayerRelevancyBase {
	char pad_10[0x10]; // 0x10(0x10)
	float BlendWeight; // 0x20(0x04)
	float InternalTimeAccumulator; // 0x24(0x04)
	char pad_28[0x10]; // 0x28(0x10)
};

// ScriptStruct Engine.PerBoneBlendWeight
// Size: 0x08 (Inherited: 0x00)
struct FPerBoneBlendWeight {
	int32_t SourceIndex; // 0x00(0x04)
	float BlendWeight; // 0x04(0x04)
};

// ScriptStruct Engine.InputBlendPose
// Size: 0x10 (Inherited: 0x00)
struct FInputBlendPose {
	struct TArray<struct FBranchFilter> BranchFilters; // 0x00(0x10)
};

// ScriptStruct Engine.BranchFilter
// Size: 0x10 (Inherited: 0x00)
struct FBranchFilter {
	struct FName BoneName; // 0x00(0x0c)
	int32_t BlendDepth; // 0x0c(0x04)
};

// ScriptStruct Engine.PoseSnapshot
// Size: 0x40 (Inherited: 0x00)
struct FPoseSnapshot {
	struct TArray<struct FTransform> LocalTransforms; // 0x00(0x10)
	struct TArray<struct FName> BoneNames; // 0x10(0x10)
	struct FName SkeletalMeshName; // 0x20(0x0c)
	struct FName SnapshotName; // 0x2c(0x0c)
	bool bIsValid; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct Engine.AnimInstanceProxy
// Size: 0x730 (Inherited: 0x00)
struct FAnimInstanceProxy {
	char pad_0[0x730]; // 0x00(0x730)
};

// ScriptStruct Engine.BoneSocketTarget
// Size: 0xa0 (Inherited: 0x00)
struct FBoneSocketTarget {
	bool bUseSocket; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FBoneReference BoneReference; // 0x04(0x14)
	char pad_18[0x8]; // 0x18(0x08)
	struct FSocketReference SocketReference; // 0x20(0x80)
};

// ScriptStruct Engine.SocketReference
// Size: 0x80 (Inherited: 0x00)
struct FSocketReference {
	char pad_0[0x60]; // 0x00(0x60)
	struct FName SocketName; // 0x60(0x0c)
	char pad_6C[0x14]; // 0x6c(0x14)
};

// ScriptStruct Engine.TableRowBase
// Size: 0x08 (Inherited: 0x00)
struct FTableRowBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.InstanceCacheDataBase
// Size: 0x58 (Inherited: 0x00)
struct FInstanceCacheDataBase {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<char> SavedProperties; // 0x08(0x10)
	struct FDataCacheDuplicatedObjectData UniqueTransientPackage; // 0x18(0x10)
	struct TArray<struct FDataCacheDuplicatedObjectData> DuplicatedObjects; // 0x28(0x10)
	struct TArray<struct UObject*> ReferencedObjects; // 0x38(0x10)
	struct TArray<struct FName> ReferencedNames; // 0x48(0x10)
};

// ScriptStruct Engine.DataCacheDuplicatedObjectData
// Size: 0x10 (Inherited: 0x00)
struct FDataCacheDuplicatedObjectData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.ActorComponentInstanceData
// Size: 0x68 (Inherited: 0x58)
struct FActorComponentInstanceData : FInstanceCacheDataBase {
	struct UObject* SourceComponentTemplate; // 0x58(0x08)
	enum class EComponentCreationMethod SourceComponentCreationMethod; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t SourceComponentTypeSerializedIndex; // 0x64(0x04)
};

// ScriptStruct Engine.SceneComponentInstanceData
// Size: 0xb8 (Inherited: 0x68)
struct FSceneComponentInstanceData : FActorComponentInstanceData {
	struct TMap<struct USceneComponent*, struct FTransform> AttachedInstanceComponents; // 0x68(0x50)
};

// ScriptStruct Engine.RepMovement
// Size: 0x70 (Inherited: 0x00)
struct FRepMovement {
	struct FVector LinearVelocity; // 0x00(0x18)
	struct FVector AngularVelocity; // 0x18(0x18)
	struct FVector Location; // 0x30(0x18)
	struct FRotator Rotation; // 0x48(0x18)
	char bSimulatedPhysicSleep : 1; // 0x60(0x01)
	char bRepPhysics : 1; // 0x60(0x01)
	char pad_60_2 : 6; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t ServerFrame; // 0x64(0x04)
	int32_t ServerPhysicsHandle; // 0x68(0x04)
	enum class EVectorQuantization LocationQuantizationLevel; // 0x6c(0x01)
	enum class EVectorQuantization VelocityQuantizationLevel; // 0x6d(0x01)
	enum class ERotatorQuantization RotationQuantizationLevel; // 0x6e(0x01)
	char pad_6F[0x1]; // 0x6f(0x01)
};

// ScriptStruct Engine.RepAttachment
// Size: 0x68 (Inherited: 0x00)
struct FRepAttachment {
	struct AActor* AttachParent; // 0x00(0x08)
	struct FVector_NetQuantize100 LocationOffset; // 0x08(0x18)
	struct FVector_NetQuantize100 RelativeScale3D; // 0x20(0x18)
	struct FRotator RotationOffset; // 0x38(0x18)
	struct FName AttachSocket; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct USceneComponent* AttachComponent; // 0x60(0x08)
};

// ScriptStruct Engine.ActorTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FActorTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.WorldPartitionResolveData
// Size: 0x20 (Inherited: 0x00)
struct FWorldPartitionResolveData {
	struct FActorContainerID ContainerID; // 0x00(0x10)
	struct FString SourceWorldAssetPath; // 0x10(0x10)
};

// ScriptStruct Engine.ActorContainerID
// Size: 0x10 (Inherited: 0x00)
struct FActorContainerID {
	struct FGuid Guid; // 0x00(0x10)
};

// ScriptStruct Engine.ActorDataLayer
// Size: 0x0c (Inherited: 0x00)
struct FActorDataLayer {
	struct FName Name; // 0x00(0x0c)
};

// ScriptStruct Engine.KAggregateGeom
// Size: 0x78 (Inherited: 0x00)
struct FKAggregateGeom {
	struct TArray<struct FKSphereElem> SphereElems; // 0x00(0x10)
	struct TArray<struct FKBoxElem> BoxElems; // 0x10(0x10)
	struct TArray<struct FKSphylElem> SphylElems; // 0x20(0x10)
	struct TArray<struct FKConvexElem> ConvexElems; // 0x30(0x10)
	struct TArray<struct FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40(0x10)
	struct TArray<struct FKLevelSetElem> LevelSetElems; // 0x50(0x10)
	struct TArray<struct FKSkinnedLevelSetElem> SkinnedLevelSetElems; // 0x60(0x10)
	char pad_70[0x8]; // 0x70(0x08)
};

// ScriptStruct Engine.KShapeElem
// Size: 0x30 (Inherited: 0x00)
struct FKShapeElem {
	char pad_0[0x8]; // 0x00(0x08)
	float RestOffset; // 0x08(0x04)
	struct FName Name; // 0x0c(0x0c)
	char pad_18[0x4]; // 0x18(0x04)
	char bContributeToMass : 1; // 0x1c(0x01)
	char pad_1C_1 : 7; // 0x1c(0x01)
	enum class ECollisionEnabled CollisionEnabled; // 0x1d(0x01)
	char pad_1E[0x12]; // 0x1e(0x12)
};

// ScriptStruct Engine.KSkinnedLevelSetElem
// Size: 0x40 (Inherited: 0x30)
struct FKSkinnedLevelSetElem : FKShapeElem {
	char pad_30[0x10]; // 0x30(0x10)
};

// ScriptStruct Engine.KLevelSetElem
// Size: 0xa0 (Inherited: 0x30)
struct FKLevelSetElem : FKShapeElem {
	struct FTransform Transform; // 0x30(0x60)
	char pad_90[0x10]; // 0x90(0x10)
};

// ScriptStruct Engine.KTaperedCapsuleElem
// Size: 0x70 (Inherited: 0x30)
struct FKTaperedCapsuleElem : FKShapeElem {
	struct FVector Center; // 0x30(0x18)
	struct FRotator Rotation; // 0x48(0x18)
	float Radius0; // 0x60(0x04)
	float Radius1; // 0x64(0x04)
	float Length; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Engine.KConvexElem
// Size: 0x100 (Inherited: 0x30)
struct FKConvexElem : FKShapeElem {
	struct TArray<struct FVector> VertexData; // 0x30(0x10)
	struct TArray<int32_t> IndexData; // 0x40(0x10)
	struct FBox ElemBox; // 0x50(0x38)
	char pad_88[0x8]; // 0x88(0x08)
	struct FTransform Transform; // 0x90(0x60)
	char pad_F0[0x10]; // 0xf0(0x10)
};

// ScriptStruct Engine.KSphylElem
// Size: 0x68 (Inherited: 0x30)
struct FKSphylElem : FKShapeElem {
	struct FVector Center; // 0x30(0x18)
	struct FRotator Rotation; // 0x48(0x18)
	float Radius; // 0x60(0x04)
	float Length; // 0x64(0x04)
};

// ScriptStruct Engine.KBoxElem
// Size: 0x70 (Inherited: 0x30)
struct FKBoxElem : FKShapeElem {
	struct FVector Center; // 0x30(0x18)
	struct FRotator Rotation; // 0x48(0x18)
	float X; // 0x60(0x04)
	float Y; // 0x64(0x04)
	float Z; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Engine.KSphereElem
// Size: 0x50 (Inherited: 0x30)
struct FKSphereElem : FKShapeElem {
	struct FVector Center; // 0x30(0x18)
	float Radius; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct Engine.NamedFloat
// Size: 0x10 (Inherited: 0x00)
struct FNamedFloat {
	float Value; // 0x00(0x04)
	struct FName Name; // 0x04(0x0c)
};

// ScriptStruct Engine.NamedVector
// Size: 0x28 (Inherited: 0x00)
struct FNamedVector {
	struct FVector Value; // 0x00(0x18)
	struct FName Name; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.NamedColor
// Size: 0x10 (Inherited: 0x00)
struct FNamedColor {
	struct FColor Value; // 0x00(0x04)
	struct FName Name; // 0x04(0x0c)
};

// ScriptStruct Engine.NamedTransform
// Size: 0x70 (Inherited: 0x00)
struct FNamedTransform {
	struct FTransform Value; // 0x00(0x60)
	struct FName Name; // 0x60(0x0c)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Engine.LocalSpacePose
// Size: 0x20 (Inherited: 0x00)
struct FLocalSpacePose {
	struct TArray<struct FTransform> Transforms; // 0x00(0x10)
	struct TArray<struct FName> Names; // 0x10(0x10)
};

// ScriptStruct Engine.ComponentSpacePose
// Size: 0x20 (Inherited: 0x00)
struct FComponentSpacePose {
	struct TArray<struct FTransform> Transforms; // 0x00(0x10)
	struct TArray<struct FName> Names; // 0x10(0x10)
};

// ScriptStruct Engine.AnimationErrorStats
// Size: 0x10 (Inherited: 0x00)
struct FAnimationErrorStats {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.AnimCompressedCurveIndexedName
// Size: 0x10 (Inherited: 0x00)
struct FAnimCompressedCurveIndexedName {
	struct FName CurveName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.AnimCurveType
// Size: 0x02 (Inherited: 0x00)
struct FAnimCurveType {
	bool bMaterial; // 0x00(0x01)
	bool bMorphtarget; // 0x01(0x01)
};

// ScriptStruct Engine.CurveMetaData
// Size: 0x18 (Inherited: 0x00)
struct FCurveMetaData {
	struct TArray<struct FBoneReference> LinkedBones; // 0x00(0x10)
	char MaxLOD; // 0x10(0x01)
	struct FAnimCurveType Type; // 0x11(0x02)
	char pad_13[0x5]; // 0x13(0x05)
};

// ScriptStruct Engine.AnimCurveParam
// Size: 0x10 (Inherited: 0x00)
struct FAnimCurveParam {
	struct FName Name; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.AnimCurveBase
// Size: 0x10 (Inherited: 0x00)
struct FAnimCurveBase {
	struct FName CurveName; // 0x00(0x0c)
	int32_t CurveTypeFlags; // 0x0c(0x04)
};

// ScriptStruct Engine.FloatCurve
// Size: 0x90 (Inherited: 0x10)
struct FFloatCurve : FAnimCurveBase {
	struct FRichCurve FloatCurve; // 0x10(0x80)
};

// ScriptStruct Engine.VectorCurve
// Size: 0x190 (Inherited: 0x10)
struct FVectorCurve : FAnimCurveBase {
	struct FRichCurve FloatCurves[0x3]; // 0x10(0x180)
};

// ScriptStruct Engine.TransformCurve
// Size: 0x4c0 (Inherited: 0x10)
struct FTransformCurve : FAnimCurveBase {
	struct FVectorCurve TranslationCurve; // 0x10(0x190)
	struct FVectorCurve RotationCurve; // 0x1a0(0x190)
	struct FVectorCurve ScaleCurve; // 0x330(0x190)
};

// ScriptStruct Engine.CachedFloatCurve
// Size: 0x0c (Inherited: 0x00)
struct FCachedFloatCurve {
	struct FName CurveName; // 0x00(0x0c)
};

// ScriptStruct Engine.RawCurveTracks
// Size: 0x10 (Inherited: 0x00)
struct FRawCurveTracks {
	struct TArray<struct FFloatCurve> FloatCurves; // 0x00(0x10)
};

// ScriptStruct Engine.EmptyPayload
// Size: 0x01 (Inherited: 0x00)
struct FEmptyPayload {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.BracketPayload
// Size: 0x10 (Inherited: 0x01)
struct FBracketPayload : FEmptyPayload {
	struct FString Description; // 0x00(0x10)
};

// ScriptStruct Engine.AnimationTrackPayload
// Size: 0x0c (Inherited: 0x01)
struct FAnimationTrackPayload : FEmptyPayload {
	struct FName Name; // 0x00(0x0c)
};

// ScriptStruct Engine.AnimationTrackAddedPayload
// Size: 0x10 (Inherited: 0x0c)
struct FAnimationTrackAddedPayload : FAnimationTrackPayload {
	int32_t TrackIndex; // 0x0c(0x04)
};

// ScriptStruct Engine.SequenceLengthChangedPayload
// Size: 0x18 (Inherited: 0x01)
struct FSequenceLengthChangedPayload : FEmptyPayload {
	float PreviousLength; // 0x00(0x04)
	float T0; // 0x04(0x04)
	float T1; // 0x08(0x04)
	struct FFrameNumber PreviousNumberOfFrames; // 0x0c(0x04)
	struct FFrameNumber Frame0; // 0x10(0x04)
	struct FFrameNumber Frame1; // 0x14(0x04)
};

// ScriptStruct Engine.FrameRateChangedPayload
// Size: 0x08 (Inherited: 0x01)
struct FFrameRateChangedPayload : FEmptyPayload {
	struct FFrameRate PreviousFrameRate; // 0x00(0x08)
};

// ScriptStruct Engine.CurvePayload
// Size: 0x10 (Inherited: 0x01)
struct FCurvePayload : FEmptyPayload {
	struct FAnimationCurveIdentifier Identifier; // 0x00(0x10)
};

// ScriptStruct Engine.AnimationCurveIdentifier
// Size: 0x10 (Inherited: 0x00)
struct FAnimationCurveIdentifier {
	struct FName CurveName; // 0x00(0x0c)
	enum class ERawCurveTrackTypes CurveType; // 0x0c(0x01)
	enum class ETransformCurveChannel Channel; // 0x0d(0x01)
	enum class EVectorCurveChannel Axis; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
};

// ScriptStruct Engine.CurveScaledPayload
// Size: 0x18 (Inherited: 0x10)
struct FCurveScaledPayload : FCurvePayload {
	float Factor; // 0x10(0x04)
	float Origin; // 0x14(0x04)
};

// ScriptStruct Engine.CurveRenamedPayload
// Size: 0x20 (Inherited: 0x10)
struct FCurveRenamedPayload : FCurvePayload {
	struct FAnimationCurveIdentifier NewIdentifier; // 0x10(0x10)
};

// ScriptStruct Engine.CurveFlagsChangedPayload
// Size: 0x14 (Inherited: 0x10)
struct FCurveFlagsChangedPayload : FCurvePayload {
	int32_t OldFlags; // 0x10(0x04)
};

// ScriptStruct Engine.AttributePayload
// Size: 0x50 (Inherited: 0x01)
struct FAttributePayload : FEmptyPayload {
	struct FAnimationAttributeIdentifier Identifier; // 0x00(0x50)
};

// ScriptStruct Engine.AnimationAttributeIdentifier
// Size: 0x50 (Inherited: 0x00)
struct FAnimationAttributeIdentifier {
	struct FName Name; // 0x00(0x0c)
	struct FName BoneName; // 0x0c(0x0c)
	int32_t BoneIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UScriptStruct* ScriptStruct; // 0x20(0x08)
	struct FSoftObjectPath ScriptStructPath; // 0x28(0x28)
};

// ScriptStruct Engine.AnimStateMachineInfo
// Size: 0x30 (Inherited: 0x00)
struct FAnimStateMachineInfo {
	uint32_t MachineIndex; // 0x00(0x04)
	int32_t CurrentState; // 0x04(0x04)
	struct TArray<float> TimeSinceEnteringStates; // 0x08(0x10)
	struct TArray<float> TimeSinceLeavingStates; // 0x18(0x10)
	float LastUpdateTime; // 0x28(0x04)
	float TimeAdjustment; // 0x2c(0x04)
};

// ScriptStruct Engine.AnimInstanceStateMachines
// Size: 0x18 (Inherited: 0x00)
struct FAnimInstanceStateMachines {
	int32_t AnimInstanceNameHash; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FAnimStateMachineInfo> StateMachines; // 0x08(0x10)
};

// ScriptStruct Engine.AnimBlendSpaceInfo
// Size: 0x40 (Inherited: 0x00)
struct FAnimBlendSpaceInfo {
	int32_t BlendSpaceID; // 0x00(0x04)
	float TimeAccumulator; // 0x04(0x04)
	struct FVector BlendInput; // 0x08(0x18)
	float LastUpdateTime; // 0x20(0x04)
	int32_t LastUpdateFrame; // 0x24(0x04)
	float CurrentAssetLength; // 0x28(0x04)
	float TimeAdjustment; // 0x2c(0x04)
	char pad_30[0x10]; // 0x30(0x10)
};

// ScriptStruct Engine.AnimInstanceBlendSpaces
// Size: 0x58 (Inherited: 0x00)
struct FAnimInstanceBlendSpaces {
	int32_t AnimInstanceNameHash; // 0x00(0x04)
	int32_t LastUpdateFrame; // 0x04(0x04)
	struct TMap<int32_t, struct FAnimBlendSpaceInfo> BlendSpaces; // 0x08(0x50)
};

// ScriptStruct Engine.AnimNodeConstantData
// Size: 0x18 (Inherited: 0x00)
struct FAnimNodeConstantData {
	struct TScriptInterface<IAnimClassInterface> AnimClassInterface; // 0x00(0x10)
	int32_t NodeIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.SlotEvaluationPose
// Size: 0x80 (Inherited: 0x00)
struct FSlotEvaluationPose {
	enum class EAdditiveAnimationType AdditiveType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Weight; // 0x04(0x04)
	char pad_8[0x78]; // 0x08(0x78)
};

// ScriptStruct Engine.AnimSubsystem
// Size: 0x08 (Inherited: 0x00)
struct FAnimSubsystem {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.AnimSubsystemInstance
// Size: 0x08 (Inherited: 0x00)
struct FAnimSubsystemInstance {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.AnimSubsystem_BlendSpaceGraph
// Size: 0x18 (Inherited: 0x08)
struct FAnimSubsystem_BlendSpaceGraph : FAnimSubsystem {
	struct TArray<struct UBlendSpace*> BlendSpaces; // 0x08(0x10)
};

// ScriptStruct Engine.PerBoneBlendWeights
// Size: 0x10 (Inherited: 0x00)
struct FPerBoneBlendWeights {
	struct TArray<struct FPerBoneBlendWeight> BoneBlendWeights; // 0x00(0x10)
};

// ScriptStruct Engine.AnimLinkableElement
// Size: 0x30 (Inherited: 0x00)
struct FAnimLinkableElement {
	char pad_0[0x8]; // 0x00(0x08)
	struct UAnimMontage* LinkedMontage; // 0x08(0x08)
	int32_t SlotIndex; // 0x10(0x04)
	int32_t SegmentIndex; // 0x14(0x04)
	enum class EAnimLinkMethod LinkMethod; // 0x18(0x01)
	enum class EAnimLinkMethod CachedLinkMethod; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	float SegmentBeginTime; // 0x1c(0x04)
	float SegmentLength; // 0x20(0x04)
	float LinkValue; // 0x24(0x04)
	struct UAnimSequenceBase* LinkedSequence; // 0x28(0x08)
};

// ScriptStruct Engine.AnimNotifyEvent
// Size: 0xc0 (Inherited: 0x30)
struct FAnimNotifyEvent : FAnimLinkableElement {
	float TriggerTimeOffset; // 0x30(0x04)
	float EndTriggerTimeOffset; // 0x34(0x04)
	float TriggerWeightThreshold; // 0x38(0x04)
	struct FName NotifyName; // 0x3c(0x0c)
	struct UAnimNotify* Notify; // 0x48(0x08)
	struct UAnimNotifyState* NotifyStateClass; // 0x50(0x08)
	float Duration; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FAnimLinkableElement EndLink; // 0x60(0x30)
	bool bConvertedFromBranchingPoint; // 0x90(0x01)
	enum class EMontageNotifyTickType MontageTickType; // 0x91(0x01)
	char pad_92[0x2]; // 0x92(0x02)
	float NotifyTriggerChance; // 0x94(0x04)
	enum class ENotifyFilterType NotifyFilterType; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32_t NotifyFilterLOD; // 0x9c(0x04)
	bool bTriggerOnDedicatedServer; // 0xa0(0x01)
	bool bTriggerOnFollower; // 0xa1(0x01)
	char pad_A2[0x2]; // 0xa2(0x02)
	int32_t TrackIndex; // 0xa4(0x04)
	char pad_A8[0x18]; // 0xa8(0x18)
};

// ScriptStruct Engine.AnimSyncMarker
// Size: 0x10 (Inherited: 0x00)
struct FAnimSyncMarker {
	struct FName MarkerName; // 0x00(0x0c)
	float Time; // 0x0c(0x04)
};

// ScriptStruct Engine.AnimNotifyTrack
// Size: 0x40 (Inherited: 0x00)
struct FAnimNotifyTrack {
	struct FName TrackName; // 0x00(0x0c)
	struct FLinearColor TrackColor; // 0x0c(0x10)
	char pad_1C[0x24]; // 0x1c(0x24)
};

// ScriptStruct Engine.MarkerSyncData
// Size: 0x20 (Inherited: 0x00)
struct FMarkerSyncData {
	struct TArray<struct FAnimSyncMarker> AuthoredSyncMarkers; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Engine.TrackToSkeletonMap
// Size: 0x04 (Inherited: 0x00)
struct FTrackToSkeletonMap {
	int32_t BoneTreeIndex; // 0x00(0x04)
};

// ScriptStruct Engine.RawAnimSequenceTrack
// Size: 0x30 (Inherited: 0x00)
struct FRawAnimSequenceTrack {
	struct TArray<struct FVector3f> PosKeys; // 0x00(0x10)
	struct TArray<struct FQuat4f> RotKeys; // 0x10(0x10)
	struct TArray<struct FVector3f> ScaleKeys; // 0x20(0x10)
};

// ScriptStruct Engine.AssetManagerRedirect
// Size: 0x20 (Inherited: 0x00)
struct FAssetManagerRedirect {
	struct FString Old; // 0x00(0x10)
	struct FString New; // 0x10(0x10)
};

// ScriptStruct Engine.PrimaryAssetRulesOverride
// Size: 0x2c (Inherited: 0x00)
struct FPrimaryAssetRulesOverride {
	struct FPrimaryAssetId PrimaryAssetId; // 0x00(0x18)
	struct FPrimaryAssetRules Rules; // 0x18(0x14)
};

// ScriptStruct Engine.PrimaryAssetRules
// Size: 0x14 (Inherited: 0x00)
struct FPrimaryAssetRules {
	int32_t Priority; // 0x00(0x04)
	int32_t ChunkId; // 0x04(0x04)
	bool bApplyRecursively; // 0x08(0x01)
	enum class EPrimaryAssetCookRule CookRule; // 0x09(0x01)
	bool bCookForMobile; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	uint32_t CookPlatforms; // 0x0c(0x04)
	enum class EPrimaryAssetCookCategory CookCategory; // 0x10(0x02)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct Engine.PrimaryAssetRulesCustomOverride
// Size: 0x48 (Inherited: 0x00)
struct FPrimaryAssetRulesCustomOverride {
	struct FPrimaryAssetType PrimaryAssetType; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FDirectoryPath FilterDirectory; // 0x10(0x10)
	struct FString FilterString; // 0x20(0x10)
	struct FPrimaryAssetRules Rules; // 0x30(0x14)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Engine.AddActiveSoundRecord
// Size: 0x10 (Inherited: 0x00)
struct FAddActiveSoundRecord {
	struct FString SoundFile_str; // 0x00(0x10)
};

// ScriptStruct Engine.BlendSpaceBlendProfile
// Size: 0x10 (Inherited: 0x00)
struct FBlendSpaceBlendProfile {
	struct UBlendProfile* BlendProfile; // 0x00(0x08)
	float TargetWeightInterpolationSpeedPerSec; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.InterpolationParameter
// Size: 0x10 (Inherited: 0x00)
struct FInterpolationParameter {
	float InterpolationTime; // 0x00(0x04)
	float DampingRatio; // 0x04(0x04)
	float MaxSpeed; // 0x08(0x04)
	enum class EFilterInterpolationType InterpolationType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.BlendParameter
// Size: 0x20 (Inherited: 0x00)
struct FBlendParameter {
	struct FString DisplayName; // 0x00(0x10)
	float Min; // 0x10(0x04)
	float Max; // 0x14(0x04)
	int32_t GridNum; // 0x18(0x04)
	bool bSnapToGrid; // 0x1c(0x01)
	bool bWrapInput; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct Engine.BlendSample
// Size: 0x28 (Inherited: 0x00)
struct FBlendSample {
	struct UAnimSequence* Animation; // 0x00(0x08)
	struct FVector SampleValue; // 0x08(0x18)
	float RateScale; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.BlendSpaceSegment
// Size: 0x10 (Inherited: 0x00)
struct FBlendSpaceSegment {
	int32_t SampleIndices[0x2]; // 0x00(0x08)
	float Vertices[0x2]; // 0x08(0x08)
};

// ScriptStruct Engine.BlendSpaceTriangleEdgeInfo
// Size: 0x28 (Inherited: 0x00)
struct FBlendSpaceTriangleEdgeInfo {
	struct FVector2D Normal; // 0x00(0x10)
	int32_t NeighbourTriangleIndex; // 0x10(0x04)
	int32_t AdjacentPerimeterTriangleIndices[0x2]; // 0x14(0x08)
	int32_t AdjacentPerimeterVertexIndices[0x2]; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.BlendSpaceTriangle
// Size: 0xb8 (Inherited: 0x00)
struct FBlendSpaceTriangle {
	int32_t SampleIndices[0x3]; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector2D Vertices[0x3]; // 0x10(0x30)
	struct FBlendSpaceTriangleEdgeInfo EdgeInfo[0x3]; // 0x40(0x78)
};

// ScriptStruct Engine.WeightedBlendSample
// Size: 0x08 (Inherited: 0x00)
struct FWeightedBlendSample {
	int32_t SampleIndex; // 0x00(0x04)
	float SampleWeight; // 0x04(0x04)
};

// ScriptStruct Engine.BlendSpaceData
// Size: 0x20 (Inherited: 0x00)
struct FBlendSpaceData {
	struct TArray<struct FBlendSpaceSegment> Segments; // 0x00(0x10)
	struct TArray<struct FBlendSpaceTriangle> Triangles; // 0x10(0x10)
};

// ScriptStruct Engine.EditorElement
// Size: 0x18 (Inherited: 0x00)
struct FEditorElement {
	int32_t Indices[0x3]; // 0x00(0x0c)
	float Weights[0x3]; // 0x0c(0x0c)
};

// ScriptStruct Engine.GridBlendSample
// Size: 0x1c (Inherited: 0x00)
struct FGridBlendSample {
	struct FEditorElement GridElement; // 0x00(0x18)
	float BlendWeight; // 0x18(0x04)
};

// ScriptStruct Engine.PerBoneInterpolation
// Size: 0x18 (Inherited: 0x00)
struct FPerBoneInterpolation {
	struct FBoneReference BoneReference; // 0x00(0x14)
	float InterpolationSpeedPerSec; // 0x14(0x04)
};

// ScriptStruct Engine.CompilerNativizationOptions
// Size: 0x80 (Inherited: 0x00)
struct FCompilerNativizationOptions {
	struct FName PlatformName; // 0x00(0x0c)
	bool ServerOnlyPlatform; // 0x0c(0x01)
	bool ClientOnlyPlatform; // 0x0d(0x01)
	bool bExcludeMonolithicHeaders; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
	struct TArray<struct FName> ExcludedModules; // 0x10(0x10)
	struct TSet<struct FSoftObjectPath> ExcludedAssets; // 0x20(0x50)
	struct TArray<struct FString> ExcludedFolderPaths; // 0x70(0x10)
};

// ScriptStruct Engine.BlueprintMacroCosmeticInfo
// Size: 0x01 (Inherited: 0x00)
struct FBlueprintMacroCosmeticInfo {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.BPVariableMetaDataEntry
// Size: 0x20 (Inherited: 0x00)
struct FBPVariableMetaDataEntry {
	struct FName DataKey; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString DataValue; // 0x10(0x10)
};

// ScriptStruct Engine.BPVariableDescription
// Size: 0xf0 (Inherited: 0x00)
struct FBPVariableDescription {
	struct FName VarName; // 0x00(0x0c)
	struct FGuid VarGuid; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FEdGraphPinType VarType; // 0x20(0x70)
	struct FString FriendlyName; // 0x90(0x10)
	struct FText Category; // 0xa0(0x18)
	uint64_t PropertyFlags; // 0xb8(0x08)
	struct FName RepNotifyFunc; // 0xc0(0x0c)
	enum class ELifetimeCondition ReplicationCondition; // 0xcc(0x01)
	char pad_CD[0x3]; // 0xcd(0x03)
	struct TArray<struct FBPVariableMetaDataEntry> MetaDataArray; // 0xd0(0x10)
	struct FString DefaultValue; // 0xe0(0x10)
};

// ScriptStruct Engine.EdGraphPinType
// Size: 0x70 (Inherited: 0x00)
struct FEdGraphPinType {
	struct FName PinCategory; // 0x00(0x0c)
	struct FName PinSubCategory; // 0x0c(0x0c)
	struct TWeakObjectPtr<struct UObject> PinSubCategoryObject; // 0x18(0x08)
	struct FSimpleMemberReference PinSubCategoryMemberReference; // 0x20(0x28)
	struct FEdGraphTerminalType PinValueType; // 0x48(0x24)
	enum class EPinContainerType ContainerType; // 0x6c(0x01)
	char bIsArray : 1; // 0x6d(0x01)
	char bIsReference : 1; // 0x6d(0x01)
	char bIsConst : 1; // 0x6d(0x01)
	char bIsWeakPointer : 1; // 0x6d(0x01)
	char bIsUObjectWrapper : 1; // 0x6d(0x01)
	char bSerializeAsSinglePrecisionFloat : 1; // 0x6d(0x01)
	char pad_6D_6 : 2; // 0x6d(0x01)
	char pad_6E[0x2]; // 0x6e(0x02)
};

// ScriptStruct Engine.EdGraphTerminalType
// Size: 0x24 (Inherited: 0x00)
struct FEdGraphTerminalType {
	struct FName TerminalCategory; // 0x00(0x0c)
	struct FName TerminalSubCategory; // 0x0c(0x0c)
	struct TWeakObjectPtr<struct UObject> TerminalSubCategoryObject; // 0x18(0x08)
	bool bTerminalIsConst; // 0x20(0x01)
	bool bTerminalIsWeakPointer; // 0x21(0x01)
	bool bTerminalIsUObjectWrapper; // 0x22(0x01)
	char pad_23[0x1]; // 0x23(0x01)
};

// ScriptStruct Engine.SimpleMemberReference
// Size: 0x28 (Inherited: 0x00)
struct FSimpleMemberReference {
	struct UObject* MemberParent; // 0x00(0x08)
	struct FName MemberName; // 0x08(0x0c)
	struct FGuid MemberGuid; // 0x14(0x10)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.BPInterfaceDescription
// Size: 0x18 (Inherited: 0x00)
struct FBPInterfaceDescription {
	struct UInterface* Interface; // 0x00(0x08)
	struct TArray<struct UEdGraph*> Graphs; // 0x08(0x10)
};

// ScriptStruct Engine.EditedDocumentInfo
// Size: 0x48 (Inherited: 0x00)
struct FEditedDocumentInfo {
	struct FSoftObjectPath EditedObjectPath; // 0x00(0x28)
	struct FVector2D SavedViewOffset; // 0x28(0x10)
	float SavedZoomAmount; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UObject* EditedObject; // 0x40(0x08)
};

// ScriptStruct Engine.BPEditorBookmarkNode
// Size: 0x38 (Inherited: 0x00)
struct FBPEditorBookmarkNode {
	struct FGuid NodeGuid; // 0x00(0x10)
	struct FGuid ParentGuid; // 0x10(0x10)
	struct FText DisplayName; // 0x20(0x18)
};

// ScriptStruct Engine.Bookmark2DJumpToSettings
// Size: 0x01 (Inherited: 0x00)
struct FBookmark2DJumpToSettings {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.BookmarkBaseJumpToSettings
// Size: 0x01 (Inherited: 0x00)
struct FBookmarkBaseJumpToSettings {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.GeomSelection
// Size: 0x0c (Inherited: 0x00)
struct FGeomSelection {
	int32_t Type; // 0x00(0x04)
	int32_t Index; // 0x04(0x04)
	int32_t SelectionIndex; // 0x08(0x04)
};

// ScriptStruct Engine.FloatAnimationAttribute
// Size: 0x04 (Inherited: 0x00)
struct FFloatAnimationAttribute {
	float Value; // 0x00(0x04)
};

// ScriptStruct Engine.IntegerAnimationAttribute
// Size: 0x04 (Inherited: 0x00)
struct FIntegerAnimationAttribute {
	int32_t Value; // 0x00(0x04)
};

// ScriptStruct Engine.StringAnimationAttribute
// Size: 0x10 (Inherited: 0x00)
struct FStringAnimationAttribute {
	struct FString Value; // 0x00(0x10)
};

// ScriptStruct Engine.TransformAnimationAttribute
// Size: 0x60 (Inherited: 0x00)
struct FTransformAnimationAttribute {
	struct FTransform Value; // 0x00(0x60)
};

// ScriptStruct Engine.VectorAnimationAttribute
// Size: 0x18 (Inherited: 0x00)
struct FVectorAnimationAttribute {
	struct FVector Value; // 0x00(0x18)
};

// ScriptStruct Engine.QuaternionAnimationAttribute
// Size: 0x20 (Inherited: 0x00)
struct FQuaternionAnimationAttribute {
	struct FQuat Value; // 0x00(0x20)
};

// ScriptStruct Engine.NonBlendableQuaternionAnimationAttribute
// Size: 0x20 (Inherited: 0x20)
struct FNonBlendableQuaternionAnimationAttribute : FQuaternionAnimationAttribute {
};

// ScriptStruct Engine.NonBlendableVectorAnimationAttribute
// Size: 0x18 (Inherited: 0x18)
struct FNonBlendableVectorAnimationAttribute : FVectorAnimationAttribute {
};

// ScriptStruct Engine.NonBlendableTransformAnimationAttribute
// Size: 0x60 (Inherited: 0x60)
struct FNonBlendableTransformAnimationAttribute : FTransformAnimationAttribute {
};

// ScriptStruct Engine.NonBlendableFloatAnimationAttribute
// Size: 0x04 (Inherited: 0x04)
struct FNonBlendableFloatAnimationAttribute : FFloatAnimationAttribute {
};

// ScriptStruct Engine.NonBlendableIntegerAnimationAttribute
// Size: 0x04 (Inherited: 0x04)
struct FNonBlendableIntegerAnimationAttribute : FIntegerAnimationAttribute {
};

// ScriptStruct Engine.MinimalViewInfo
// Size: 0x8e0 (Inherited: 0x00)
struct FMinimalViewInfo {
	struct FVector Location; // 0x00(0x18)
	struct FRotator Rotation; // 0x18(0x18)
	float FOV; // 0x30(0x04)
	float DesiredFOV; // 0x34(0x04)
	float OrthoWidth; // 0x38(0x04)
	float OrthoNearClipPlane; // 0x3c(0x04)
	float OrthoFarClipPlane; // 0x40(0x04)
	float PerspectiveNearClipPlane; // 0x44(0x04)
	float AspectRatio; // 0x48(0x04)
	char pad_4C[0x8]; // 0x4c(0x08)
	char bConstrainAspectRatio : 1; // 0x54(0x01)
	char bUseFieldOfViewForLOD : 1; // 0x54(0x01)
	char pad_54_2 : 6; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	enum class ECameraProjectionMode ProjectionMode; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float PostProcessBlendWeight; // 0x5c(0x04)
	struct FPostProcessSettings PostProcessSettings; // 0x60(0x800)
	struct FVector2D OffCenterProjectionOffset; // 0x860(0x10)
	char pad_870[0x70]; // 0x870(0x70)
};

// ScriptStruct Engine.PostProcessSettings
// Size: 0x800 (Inherited: 0x00)
struct FPostProcessSettings {
	char bOverride_TemperatureType : 1; // 0x00(0x01)
	char bOverride_WhiteTemp : 1; // 0x00(0x01)
	char bOverride_WhiteTint : 1; // 0x00(0x01)
	char bOverride_ColorSaturation : 1; // 0x00(0x01)
	char bOverride_ColorContrast : 1; // 0x00(0x01)
	char bOverride_ColorGamma : 1; // 0x00(0x01)
	char bOverride_ColorGain : 1; // 0x00(0x01)
	char bOverride_ColorOffset : 1; // 0x00(0x01)
	char bOverride_ColorSaturationShadows : 1; // 0x01(0x01)
	char bOverride_ColorContrastShadows : 1; // 0x01(0x01)
	char bOverride_ColorGammaShadows : 1; // 0x01(0x01)
	char bOverride_ColorGainShadows : 1; // 0x01(0x01)
	char bOverride_ColorOffsetShadows : 1; // 0x01(0x01)
	char bOverride_ColorSaturationMidtones : 1; // 0x01(0x01)
	char bOverride_ColorContrastMidtones : 1; // 0x01(0x01)
	char bOverride_ColorGammaMidtones : 1; // 0x01(0x01)
	char bOverride_ColorGainMidtones : 1; // 0x02(0x01)
	char bOverride_ColorOffsetMidtones : 1; // 0x02(0x01)
	char bOverride_ColorSaturationHighlights : 1; // 0x02(0x01)
	char bOverride_ColorContrastHighlights : 1; // 0x02(0x01)
	char bOverride_ColorGammaHighlights : 1; // 0x02(0x01)
	char bOverride_ColorGainHighlights : 1; // 0x02(0x01)
	char bOverride_ColorOffsetHighlights : 1; // 0x02(0x01)
	char bOverride_ColorCorrectionShadowsMax : 1; // 0x02(0x01)
	char bOverride_ColorCorrectionHighlightsMin : 1; // 0x03(0x01)
	char bOverride_ColorCorrectionHighlightsMax : 1; // 0x03(0x01)
	char bOverride_BlueCorrection : 1; // 0x03(0x01)
	char bOverride_ExpandGamut : 1; // 0x03(0x01)
	char bOverride_ToneCurveAmount : 1; // 0x03(0x01)
	char bOverride_FilmSlope : 1; // 0x03(0x01)
	char bOverride_FilmToe : 1; // 0x03(0x01)
	char bOverride_FilmShoulder : 1; // 0x03(0x01)
	char bOverride_FilmBlackClip : 1; // 0x04(0x01)
	char bOverride_FilmWhiteClip : 1; // 0x04(0x01)
	char bOverride_SceneColorTint : 1; // 0x04(0x01)
	char bOverride_SceneFringeIntensity : 1; // 0x04(0x01)
	char bOverride_ChromaticAberrationStartOffset : 1; // 0x04(0x01)
	char bOverride_AmbientCubemapTint : 1; // 0x04(0x01)
	char bOverride_AmbientCubemapIntensity : 1; // 0x04(0x01)
	char bOverride_BloomMethod : 1; // 0x04(0x01)
	char bOverride_BloomIntensity : 1; // 0x05(0x01)
	char bOverride_BloomThreshold : 1; // 0x05(0x01)
	char bOverride_Bloom1Tint : 1; // 0x05(0x01)
	char bOverride_Bloom1Size : 1; // 0x05(0x01)
	char bOverride_Bloom2Size : 1; // 0x05(0x01)
	char bOverride_Bloom2Tint : 1; // 0x05(0x01)
	char bOverride_Bloom3Tint : 1; // 0x05(0x01)
	char bOverride_Bloom3Size : 1; // 0x05(0x01)
	char bOverride_Bloom4Tint : 1; // 0x06(0x01)
	char bOverride_Bloom4Size : 1; // 0x06(0x01)
	char bOverride_Bloom5Tint : 1; // 0x06(0x01)
	char bOverride_Bloom5Size : 1; // 0x06(0x01)
	char bOverride_Bloom6Tint : 1; // 0x06(0x01)
	char bOverride_Bloom6Size : 1; // 0x06(0x01)
	char bOverride_BloomSizeScale : 1; // 0x06(0x01)
	char bOverride_BloomConvolutionTexture : 1; // 0x06(0x01)
	char bOverride_BloomConvolutionScatterDispersion : 1; // 0x07(0x01)
	char bOverride_BloomConvolutionSize : 1; // 0x07(0x01)
	char bOverride_BloomConvolutionCenterUV : 1; // 0x07(0x01)
	char bOverride_BloomConvolutionPreFilter : 1; // 0x07(0x01)
	char bOverride_BloomConvolutionPreFilterMin : 1; // 0x07(0x01)
	char bOverride_BloomConvolutionPreFilterMax : 1; // 0x07(0x01)
	char bOverride_BloomConvolutionPreFilterMult : 1; // 0x07(0x01)
	char bOverride_BloomConvolutionBufferScale : 1; // 0x07(0x01)
	char bOverride_BloomDirtMaskIntensity : 1; // 0x08(0x01)
	char bOverride_BloomDirtMaskTint : 1; // 0x08(0x01)
	char bOverride_BloomDirtMask : 1; // 0x08(0x01)
	char bOverride_CameraShutterSpeed : 1; // 0x08(0x01)
	char bOverride_CameraISO : 1; // 0x08(0x01)
	char bOverride_AutoExposureMethod : 1; // 0x08(0x01)
	char bOverride_AutoExposureLowPercent : 1; // 0x08(0x01)
	char bOverride_AutoExposureHighPercent : 1; // 0x08(0x01)
	char bOverride_AutoExposureMinBrightness : 1; // 0x09(0x01)
	char bOverride_AutoExposureMaxBrightness : 1; // 0x09(0x01)
	char bOverride_AutoExposureCalibrationConstant : 1; // 0x09(0x01)
	char bOverride_AutoExposureSpeedUp : 1; // 0x09(0x01)
	char bOverride_AutoExposureSpeedDown : 1; // 0x09(0x01)
	char bOverride_AutoExposureBias : 1; // 0x09(0x01)
	char bOverride_AutoExposureBiasCurve : 1; // 0x09(0x01)
	char bOverride_AutoExposureMeterMask : 1; // 0x09(0x01)
	char bOverride_AutoExposureApplyPhysicalCameraExposure : 1; // 0x0a(0x01)
	char bOverride_HistogramLogMin : 1; // 0x0a(0x01)
	char bOverride_HistogramLogMax : 1; // 0x0a(0x01)
	char bOverride_LocalExposureContrastScale : 1; // 0x0a(0x01)
	char bOverride_LocalExposureHighlightContrastScale : 1; // 0x0a(0x01)
	char bOverride_LocalExposureShadowContrastScale : 1; // 0x0a(0x01)
	char bOverride_LocalExposureDetailStrength : 1; // 0x0a(0x01)
	char bOverride_LocalExposureBlurredLuminanceBlend : 1; // 0x0a(0x01)
	char bOverride_LocalExposureBlurredLuminanceKernelSizePercent : 1; // 0x0b(0x01)
	char bOverride_LocalExposureMiddleGreyBias : 1; // 0x0b(0x01)
	char bOverride_LensFlareIntensity : 1; // 0x0b(0x01)
	char bOverride_LensFlareTint : 1; // 0x0b(0x01)
	char bOverride_LensFlareTints : 1; // 0x0b(0x01)
	char bOverride_LensFlareBokehSize : 1; // 0x0b(0x01)
	char bOverride_LensFlareBokehShape : 1; // 0x0b(0x01)
	char bOverride_LensFlareThreshold : 1; // 0x0b(0x01)
	char bOverride_VignetteIntensity : 1; // 0x0c(0x01)
	char bOverride_Sharpen : 1; // 0x0c(0x01)
	char bOverride_AresVignetteIntensity : 1; // 0x0c(0x01)
	char bOverride_AresVignetteSize : 1; // 0x0c(0x01)
	char bOverride_AresVignetteCurve : 1; // 0x0c(0x01)
	char bOverride_GrainIntensity : 1; // 0x0c(0x01)
	char bOverride_GrainJitter : 1; // 0x0c(0x01)
	char bOverride_FilmGrainIntensity : 1; // 0x0c(0x01)
	char bOverride_FilmGrainIntensityShadows : 1; // 0x0d(0x01)
	char bOverride_FilmGrainIntensityMidtones : 1; // 0x0d(0x01)
	char bOverride_FilmGrainIntensityHighlights : 1; // 0x0d(0x01)
	char bOverride_FilmGrainShadowsMax : 1; // 0x0d(0x01)
	char bOverride_FilmGrainHighlightsMin : 1; // 0x0d(0x01)
	char bOverride_FilmGrainHighlightsMax : 1; // 0x0d(0x01)
	char bOverride_FilmGrainTexelSize : 1; // 0x0d(0x01)
	char bOverride_FilmGrainTexture : 1; // 0x0d(0x01)
	char bOverride_AmbientOcclusionIntensity : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionStaticFraction : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionRadius : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionFadeDistance : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionFadeRadius : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionDistance : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionRadiusInWS : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionPower : 1; // 0x0e(0x01)
	char bOverride_AmbientOcclusionBias : 1; // 0x0f(0x01)
	char bOverride_AmbientOcclusionQuality : 1; // 0x0f(0x01)
	char bOverride_AmbientOcclusionMipBlend : 1; // 0x0f(0x01)
	char bOverride_AmbientOcclusionMipScale : 1; // 0x0f(0x01)
	char bOverride_AmbientOcclusionMipThreshold : 1; // 0x0f(0x01)
	char bOverride_AmbientOcclusionTemporalBlendWeight : 1; // 0x0f(0x01)
	char pad_F_6 : 2; // 0x0f(0x01)
	char bOverride_RayTracingAO : 1; // 0x10(0x01)
	char bOverride_RayTracingAOSamplesPerPixel : 1; // 0x10(0x01)
	char bOverride_RayTracingAOIntensity : 1; // 0x10(0x01)
	char bOverride_RayTracingAORadius : 1; // 0x10(0x01)
	char pad_10_4 : 4; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	char bOverride_LPVIntensity : 1; // 0x14(0x01)
	char bOverride_LPVDirectionalOcclusionIntensity : 1; // 0x14(0x01)
	char bOverride_LPVDirectionalOcclusionRadius : 1; // 0x14(0x01)
	char bOverride_LPVDiffuseOcclusionExponent : 1; // 0x14(0x01)
	char bOverride_LPVSpecularOcclusionExponent : 1; // 0x14(0x01)
	char bOverride_LPVDiffuseOcclusionIntensity : 1; // 0x14(0x01)
	char bOverride_LPVSpecularOcclusionIntensity : 1; // 0x14(0x01)
	char bOverride_LPVSize : 1; // 0x14(0x01)
	char bOverride_LPVSecondaryOcclusionIntensity : 1; // 0x15(0x01)
	char bOverride_LPVSecondaryBounceIntensity : 1; // 0x15(0x01)
	char bOverride_LPVGeometryVolumeBias : 1; // 0x15(0x01)
	char bOverride_LPVVplInjectionBias : 1; // 0x15(0x01)
	char bOverride_LPVEmissiveInjectionIntensity : 1; // 0x15(0x01)
	char bOverride_LPVFadeRange : 1; // 0x15(0x01)
	char bOverride_LPVDirectionalOcclusionFadeRange : 1; // 0x15(0x01)
	char bOverride_IndirectLightingColor : 1; // 0x15(0x01)
	char bOverride_IndirectLightingIntensity : 1; // 0x16(0x01)
	char bOverride_ColorGradingIntensity : 1; // 0x16(0x01)
	char bOverride_ColorGradingLUT : 1; // 0x16(0x01)
	char bOverride_DepthOfFieldFocalDistance : 1; // 0x16(0x01)
	char bOverride_DepthOfFieldFstop : 1; // 0x16(0x01)
	char bOverride_DepthOfFieldMinFstop : 1; // 0x16(0x01)
	char bOverride_DepthOfFieldBladeCount : 1; // 0x16(0x01)
	char bOverride_DepthOfFieldSensorWidth : 1; // 0x16(0x01)
	char bOverride_DepthOfFieldSqueezeFactor : 1; // 0x17(0x01)
	char bOverride_DepthOfFieldDepthBlurRadius : 1; // 0x17(0x01)
	char bOverride_DepthOfFieldDepthBlurAmount : 1; // 0x17(0x01)
	char bOverride_DepthOfFieldFocalRegion : 1; // 0x17(0x01)
	char bOverride_DepthOfFieldNearTransitionRegion : 1; // 0x17(0x01)
	char bOverride_DepthOfFieldFarTransitionRegion : 1; // 0x17(0x01)
	char bOverride_DepthOfFieldScale : 1; // 0x17(0x01)
	char bOverride_DepthOfFieldNearBlurSize : 1; // 0x17(0x01)
	char bOverride_DepthOfFieldFarBlurSize : 1; // 0x18(0x01)
	char bOverride_MobileHQGaussian : 1; // 0x18(0x01)
	char bOverride_DepthOfFieldOcclusion : 1; // 0x18(0x01)
	char bOverride_DepthOfFieldSkyFocusDistance : 1; // 0x18(0x01)
	char bOverride_DepthOfFieldVignetteSize : 1; // 0x18(0x01)
	char bOverride_MotionBlurAmount : 1; // 0x18(0x01)
	char bOverride_MotionBlurMax : 1; // 0x18(0x01)
	char bOverride_MotionBlurTargetFPS : 1; // 0x18(0x01)
	char bOverride_MotionBlurPerObjectSize : 1; // 0x19(0x01)
	char bOverride_ScreenPercentage : 1; // 0x19(0x01)
	char bOverride_ReflectionMethod : 1; // 0x19(0x01)
	char bOverride_LumenReflectionQuality : 1; // 0x19(0x01)
	char bOverride_ScreenSpaceReflectionIntensity : 1; // 0x19(0x01)
	char bOverride_ScreenSpaceReflectionQuality : 1; // 0x19(0x01)
	char bOverride_ScreenSpaceReflectionMaxRoughness : 1; // 0x19(0x01)
	char bOverride_ScreenSpaceReflectionRoughnessScale : 1; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	char bOverride_ReflectionsType : 1; // 0x1c(0x01)
	char bOverride_RayTracingReflectionsMaxRoughness : 1; // 0x1c(0x01)
	char bOverride_RayTracingReflectionsMaxBounces : 1; // 0x1c(0x01)
	char bOverride_RayTracingReflectionsSamplesPerPixel : 1; // 0x1c(0x01)
	char bOverride_RayTracingReflectionsShadows : 1; // 0x1c(0x01)
	char bOverride_RayTracingReflectionsTranslucency : 1; // 0x1c(0x01)
	char bOverride_TranslucencyType : 1; // 0x1c(0x01)
	char bOverride_RayTracingTranslucencyMaxRoughness : 1; // 0x1c(0x01)
	char bOverride_RayTracingTranslucencyRefractionRays : 1; // 0x1d(0x01)
	char bOverride_RayTracingTranslucencySamplesPerPixel : 1; // 0x1d(0x01)
	char bOverride_RayTracingTranslucencyShadows : 1; // 0x1d(0x01)
	char bOverride_RayTracingTranslucencyRefraction : 1; // 0x1d(0x01)
	char bOverride_DynamicGlobalIlluminationMethod : 1; // 0x1d(0x01)
	char bOverride_LumenSceneLightingQuality : 1; // 0x1d(0x01)
	char bOverride_LumenSceneDetail : 1; // 0x1d(0x01)
	char bOverride_LumenSceneViewDistance : 1; // 0x1d(0x01)
	char bOverride_LumenSceneLightingUpdateSpeed : 1; // 0x1e(0x01)
	char bOverride_LumenFinalGatherQuality : 1; // 0x1e(0x01)
	char bOverride_LumenFinalGatherLightingUpdateSpeed : 1; // 0x1e(0x01)
	char bOverride_LumenMaxTraceDistance : 1; // 0x1e(0x01)
	char bOverride_LumenDiffuseColorBoost : 1; // 0x1e(0x01)
	char bOverride_LumenSkylightLeaking : 1; // 0x1e(0x01)
	char bOverride_LumenFullSkylightLeakingDistance : 1; // 0x1e(0x01)
	char pad_1E_7 : 1; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	char bOverride_LumenRayLightingMode : 1; // 0x20(0x01)
	char bOverride_LumenFrontLayerTranslucencyReflections : 1; // 0x20(0x01)
	char pad_20_2 : 6; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	char bOverride_LumenMaxReflectionBounces : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	char bOverride_LumenSurfaceCacheResolution : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	char bOverride_RayTracingGI : 1; // 0x2c(0x01)
	char bOverride_RayTracingGIMaxBounces : 1; // 0x2c(0x01)
	char bOverride_RayTracingGISamplesPerPixel : 1; // 0x2c(0x01)
	char bOverride_PathTracingMaxBounces : 1; // 0x2c(0x01)
	char bOverride_PathTracingSamplesPerPixel : 1; // 0x2c(0x01)
	char bOverride_PathTracingMaxPathExposure : 1; // 0x2c(0x01)
	char bOverride_PathTracingEnableReferenceDOF : 1; // 0x2c(0x01)
	char bOverride_PathTracingEnableReferenceAtmosphere : 1; // 0x2c(0x01)
	char bOverride_PathTracingEnableDenoiser : 1; // 0x2d(0x01)
	char bOverride_PathTracingIncludeEmissive : 1; // 0x2d(0x01)
	char bOverride_PathTracingIncludeIndirectEmissive : 1; // 0x2d(0x01)
	char bOverride_PathTracingIncludeDiffuse : 1; // 0x2d(0x01)
	char bOverride_PathTracingIncludeIndirectDiffuse : 1; // 0x2d(0x01)
	char bOverride_PathTracingIncludeSpecular : 1; // 0x2d(0x01)
	char bOverride_PathTracingIncludeIndirectSpecular : 1; // 0x2d(0x01)
	char bOverride_PathTracingIncludeVolume : 1; // 0x2d(0x01)
	char bOverride_PathTracingIncludeIndirectVolume : 1; // 0x2e(0x01)
	char pad_2E_1 : 7; // 0x2e(0x01)
	char pad_2F[0x1]; // 0x2f(0x01)
	char bMobileHQGaussian : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	char bOverride_AresAdaptiveSharpenCurveSlope : 1; // 0x34(0x01)
	char bOverride_AresAdaptiveSharpenDarkCompressionLow : 1; // 0x34(0x01)
	char bOverride_AresAdaptiveSharpenDarkCompressionHigh : 1; // 0x34(0x01)
	char bOverride_AresAdaptiveSharpenDarkOvershoot : 1; // 0x34(0x01)
	char bOverride_AresAdaptiveSharpenEnable : 1; // 0x34(0x01)
	char bOverride_AresAdaptiveSharpenLightCompressionLow : 1; // 0x34(0x01)
	char bOverride_AresAdaptiveSharpenLightCompressionHigh : 1; // 0x34(0x01)
	char bOverride_AresAdaptiveSharpenLightOvershoot : 1; // 0x34(0x01)
	char bOverride_AresAdaptiveSharpenPowerMeanPValue : 1; // 0x35(0x01)
	char bOverride_AresAdaptiveSharpenScaleCompressionSlope : 1; // 0x35(0x01)
	char bOverride_AresAdaptiveSharpenScaleLim : 1; // 0x35(0x01)
	char bOverride_AresAdaptiveSharpenStrength : 1; // 0x35(0x01)
	char bOverride_AresCharacterOutlinesBlurDistance : 1; // 0x35(0x01)
	char bOverride_AresCharacterOutlinesColor : 1; // 0x35(0x01)
	char bOverride_AresCharacterOutlinesOverlayColor : 1; // 0x35(0x01)
	char bOverride_AresCharacterOutlinesPixelOffset : 1; // 0x35(0x01)
	char bOverride_AresClarityBlendIfDark : 1; // 0x36(0x01)
	char bOverride_AresClarityBlendIfLight : 1; // 0x36(0x01)
	char bOverride_AresClarityBlendMode : 1; // 0x36(0x01)
	char bOverride_AresClarityDarkIntensity : 1; // 0x36(0x01)
	char bOverride_AresClarityEnable : 1; // 0x36(0x01)
	char bOverride_AresClarityLightIntensity : 1; // 0x36(0x01)
	char bOverride_AresClarityOffset : 1; // 0x36(0x01)
	char bOverride_AresClarityRadius : 1; // 0x36(0x01)
	char bOverride_AresClarityStrength : 1; // 0x37(0x01)
	char bOverride_AresClarityViewBlendIfMask : 1; // 0x37(0x01)
	char bOverride_AresClarityViewMask : 1; // 0x37(0x01)
	char pad_37_3 : 5; // 0x37(0x01)
	char bOverride_IndirectLightingScaleCurve : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	char bOverride_AmbientOcclusionTintColor : 1; // 0x3c(0x01)
	char bAresAdaptiveSharpenEnable : 1; // 0x3c(0x01)
	char bAresClarityEnable : 1; // 0x3c(0x01)
	char bAresClarityViewBlendIfMask : 1; // 0x3c(0x01)
	char bAresClarityViewMask : 1; // 0x3c(0x01)
	char pad_3C_5 : 3; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	enum class EBloomMethod BloomMethod; // 0x40(0x01)
	enum class EAutoExposureMethod AutoExposureMethod; // 0x41(0x01)
	enum class ETemperatureMethod TemperatureType; // 0x42(0x01)
	char pad_43[0x1]; // 0x43(0x01)
	float WhiteTemp; // 0x44(0x04)
	float WhiteTint; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FVector4 ColorSaturation; // 0x50(0x20)
	struct FVector4 ColorContrast; // 0x70(0x20)
	struct FVector4 ColorGamma; // 0x90(0x20)
	struct FVector4 ColorGain; // 0xb0(0x20)
	struct FVector4 ColorOffset; // 0xd0(0x20)
	struct FVector4 ColorSaturationShadows; // 0xf0(0x20)
	struct FVector4 ColorContrastShadows; // 0x110(0x20)
	struct FVector4 ColorGammaShadows; // 0x130(0x20)
	struct FVector4 ColorGainShadows; // 0x150(0x20)
	struct FVector4 ColorOffsetShadows; // 0x170(0x20)
	struct FVector4 ColorSaturationMidtones; // 0x190(0x20)
	struct FVector4 ColorContrastMidtones; // 0x1b0(0x20)
	struct FVector4 ColorGammaMidtones; // 0x1d0(0x20)
	struct FVector4 ColorGainMidtones; // 0x1f0(0x20)
	struct FVector4 ColorOffsetMidtones; // 0x210(0x20)
	struct FVector4 ColorSaturationHighlights; // 0x230(0x20)
	struct FVector4 ColorContrastHighlights; // 0x250(0x20)
	struct FVector4 ColorGammaHighlights; // 0x270(0x20)
	struct FVector4 ColorGainHighlights; // 0x290(0x20)
	struct FVector4 ColorOffsetHighlights; // 0x2b0(0x20)
	float ColorCorrectionHighlightsMin; // 0x2d0(0x04)
	float ColorCorrectionHighlightsMax; // 0x2d4(0x04)
	float ColorCorrectionShadowsMax; // 0x2d8(0x04)
	float BlueCorrection; // 0x2dc(0x04)
	float ExpandGamut; // 0x2e0(0x04)
	float ToneCurveAmount; // 0x2e4(0x04)
	float FilmSlope; // 0x2e8(0x04)
	float FilmToe; // 0x2ec(0x04)
	float FilmShoulder; // 0x2f0(0x04)
	float FilmBlackClip; // 0x2f4(0x04)
	float FilmWhiteClip; // 0x2f8(0x04)
	struct FLinearColor SceneColorTint; // 0x2fc(0x10)
	float SceneFringeIntensity; // 0x30c(0x04)
	float ChromaticAberrationStartOffset; // 0x310(0x04)
	float BloomIntensity; // 0x314(0x04)
	float BloomThreshold; // 0x318(0x04)
	float BloomSizeScale; // 0x31c(0x04)
	float Bloom1Size; // 0x320(0x04)
	float Bloom2Size; // 0x324(0x04)
	float Bloom3Size; // 0x328(0x04)
	float Bloom4Size; // 0x32c(0x04)
	float Bloom5Size; // 0x330(0x04)
	float Bloom6Size; // 0x334(0x04)
	struct FLinearColor Bloom1Tint; // 0x338(0x10)
	struct FLinearColor Bloom2Tint; // 0x348(0x10)
	struct FLinearColor Bloom3Tint; // 0x358(0x10)
	struct FLinearColor Bloom4Tint; // 0x368(0x10)
	struct FLinearColor Bloom5Tint; // 0x378(0x10)
	struct FLinearColor Bloom6Tint; // 0x388(0x10)
	float BloomConvolutionScatterDispersion; // 0x398(0x04)
	float BloomConvolutionSize; // 0x39c(0x04)
	struct UTexture2D* BloomConvolutionTexture; // 0x3a0(0x08)
	struct FVector2D BloomConvolutionCenterUV; // 0x3a8(0x10)
	float BloomConvolutionPreFilterMin; // 0x3b8(0x04)
	float BloomConvolutionPreFilterMax; // 0x3bc(0x04)
	float BloomConvolutionPreFilterMult; // 0x3c0(0x04)
	float BloomConvolutionBufferScale; // 0x3c4(0x04)
	struct UTexture* BloomDirtMask; // 0x3c8(0x08)
	float BloomDirtMaskIntensity; // 0x3d0(0x04)
	struct FLinearColor BloomDirtMaskTint; // 0x3d4(0x10)
	enum class EDynamicGlobalIlluminationMethod DynamicGlobalIlluminationMethod; // 0x3e4(0x01)
	char pad_3E5[0x3]; // 0x3e5(0x03)
	struct FLinearColor IndirectLightingColor; // 0x3e8(0x10)
	float IndirectLightingIntensity; // 0x3f8(0x04)
	float LumenSceneLightingQuality; // 0x3fc(0x04)
	float LumenSceneDetail; // 0x400(0x04)
	float LumenSceneViewDistance; // 0x404(0x04)
	float LumenSceneLightingUpdateSpeed; // 0x408(0x04)
	float LumenFinalGatherQuality; // 0x40c(0x04)
	float LumenFinalGatherLightingUpdateSpeed; // 0x410(0x04)
	float LumenMaxTraceDistance; // 0x414(0x04)
	float LumenDiffuseColorBoost; // 0x418(0x04)
	float LumenSkylightLeaking; // 0x41c(0x04)
	float LumenFullSkylightLeakingDistance; // 0x420(0x04)
	float LumenSurfaceCacheResolution; // 0x424(0x04)
	enum class ERayTracingGlobalIlluminationType RayTracingGIType; // 0x428(0x01)
	char pad_429[0x3]; // 0x429(0x03)
	int32_t RayTracingGIMaxBounces; // 0x42c(0x04)
	int32_t RayTracingGISamplesPerPixel; // 0x430(0x04)
	enum class EReflectionMethod ReflectionMethod; // 0x434(0x01)
	enum class EReflectionsType ReflectionsType; // 0x435(0x01)
	char pad_436[0x2]; // 0x436(0x02)
	float LumenReflectionQuality; // 0x438(0x04)
	enum class ELumenRayLightingModeOverride LumenRayLightingMode; // 0x43c(0x01)
	char LumenFrontLayerTranslucencyReflections : 1; // 0x43d(0x01)
	char pad_43D_1 : 7; // 0x43d(0x01)
	char pad_43E[0x2]; // 0x43e(0x02)
	int32_t LumenMaxReflectionBounces; // 0x440(0x04)
	float ScreenSpaceReflectionIntensity; // 0x444(0x04)
	float ScreenSpaceReflectionQuality; // 0x448(0x04)
	float ScreenSpaceReflectionMaxRoughness; // 0x44c(0x04)
	float RayTracingReflectionsMaxRoughness; // 0x450(0x04)
	int32_t RayTracingReflectionsMaxBounces; // 0x454(0x04)
	int32_t RayTracingReflectionsSamplesPerPixel; // 0x458(0x04)
	enum class EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows; // 0x45c(0x01)
	char RayTracingReflectionsTranslucency : 1; // 0x45d(0x01)
	char pad_45D_1 : 7; // 0x45d(0x01)
	char pad_45E[0x2]; // 0x45e(0x02)
	struct FLinearColor AmbientCubemapTint; // 0x460(0x10)
	float AmbientCubemapIntensity; // 0x470(0x04)
	char pad_474[0x4]; // 0x474(0x04)
	struct UTextureCube* AmbientCubemap; // 0x478(0x08)
	float CameraShutterSpeed; // 0x480(0x04)
	float CameraISO; // 0x484(0x04)
	float DepthOfFieldFstop; // 0x488(0x04)
	float DepthOfFieldMinFstop; // 0x48c(0x04)
	int32_t DepthOfFieldBladeCount; // 0x490(0x04)
	float AutoExposureBias; // 0x494(0x04)
	float AutoExposureBiasBackup; // 0x498(0x04)
	char bOverride_AutoExposureBiasBackup : 1; // 0x49c(0x01)
	char pad_49C_1 : 7; // 0x49c(0x01)
	char pad_49D[0x3]; // 0x49d(0x03)
	char AutoExposureApplyPhysicalCameraExposure : 1; // 0x4a0(0x01)
	char pad_4A0_1 : 7; // 0x4a0(0x01)
	char pad_4A1[0x7]; // 0x4a1(0x07)
	struct UCurveFloat* AutoExposureBiasCurve; // 0x4a8(0x08)
	struct UTexture* AutoExposureMeterMask; // 0x4b0(0x08)
	float AutoExposureLowPercent; // 0x4b8(0x04)
	float AutoExposureHighPercent; // 0x4bc(0x04)
	float AutoExposureMinBrightness; // 0x4c0(0x04)
	float AutoExposureMaxBrightness; // 0x4c4(0x04)
	float AutoExposureSpeedUp; // 0x4c8(0x04)
	float AutoExposureSpeedDown; // 0x4cc(0x04)
	float HistogramLogMin; // 0x4d0(0x04)
	float HistogramLogMax; // 0x4d4(0x04)
	float AutoExposureCalibrationConstant; // 0x4d8(0x04)
	float LocalExposureContrastScale; // 0x4dc(0x04)
	float LocalExposureHighlightContrastScale; // 0x4e0(0x04)
	float LocalExposureShadowContrastScale; // 0x4e4(0x04)
	float LocalExposureDetailStrength; // 0x4e8(0x04)
	float LocalExposureBlurredLuminanceBlend; // 0x4ec(0x04)
	float LocalExposureBlurredLuminanceKernelSizePercent; // 0x4f0(0x04)
	float LocalExposureMiddleGreyBias; // 0x4f4(0x04)
	float LensFlareIntensity; // 0x4f8(0x04)
	struct FLinearColor LensFlareTint; // 0x4fc(0x10)
	float LensFlareBokehSize; // 0x50c(0x04)
	float LensFlareThreshold; // 0x510(0x04)
	char pad_514[0x4]; // 0x514(0x04)
	struct UTexture* LensFlareBokehShape; // 0x518(0x08)
	struct FLinearColor LensFlareTints[0x8]; // 0x520(0x80)
	float VignetteIntensity; // 0x5a0(0x04)
	float Sharpen; // 0x5a4(0x04)
	float AresVignetteIntensity; // 0x5a8(0x04)
	float AresVignetteSize; // 0x5ac(0x04)
	float AresVignetteCurve; // 0x5b0(0x04)
	char bOverride_FilmWhitePoint : 1; // 0x5b4(0x01)
	char bOverride_FilmSaturation : 1; // 0x5b4(0x01)
	char bOverride_FilmChannelMixerRed : 1; // 0x5b4(0x01)
	char bOverride_FilmChannelMixerGreen : 1; // 0x5b4(0x01)
	char bOverride_FilmChannelMixerBlue : 1; // 0x5b4(0x01)
	char bOverride_FilmContrast : 1; // 0x5b4(0x01)
	char bOverride_FilmDynamicRange : 1; // 0x5b4(0x01)
	char bOverride_FilmHealAmount : 1; // 0x5b4(0x01)
	char bOverride_FilmToeAmount : 1; // 0x5b5(0x01)
	char bOverride_FilmShadowTint : 1; // 0x5b5(0x01)
	char bOverride_FilmShadowTintBlend : 1; // 0x5b5(0x01)
	char bOverride_FilmShadowTintAmount : 1; // 0x5b5(0x01)
	char pad_5B5_4 : 4; // 0x5b5(0x01)
	char pad_5B6[0x2]; // 0x5b6(0x02)
	struct FLinearColor FilmWhitePoint; // 0x5b8(0x10)
	struct FLinearColor FilmShadowTint; // 0x5c8(0x10)
	float FilmShadowTintBlend; // 0x5d8(0x04)
	float FilmShadowTintAmount; // 0x5dc(0x04)
	float FilmSaturation; // 0x5e0(0x04)
	struct FLinearColor FilmChannelMixerRed; // 0x5e4(0x10)
	struct FLinearColor FilmChannelMixerGreen; // 0x5f4(0x10)
	struct FLinearColor FilmChannelMixerBlue; // 0x604(0x10)
	float FilmContrast; // 0x614(0x04)
	float FilmToeAmount; // 0x618(0x04)
	float FilmHealAmount; // 0x61c(0x04)
	float FilmDynamicRange; // 0x620(0x04)
	float GrainJitter; // 0x624(0x04)
	float GrainIntensity; // 0x628(0x04)
	float FilmGrainIntensity; // 0x62c(0x04)
	float FilmGrainIntensityShadows; // 0x630(0x04)
	float FilmGrainIntensityMidtones; // 0x634(0x04)
	float FilmGrainIntensityHighlights; // 0x638(0x04)
	float FilmGrainShadowsMax; // 0x63c(0x04)
	float FilmGrainHighlightsMin; // 0x640(0x04)
	float FilmGrainHighlightsMax; // 0x644(0x04)
	float FilmGrainTexelSize; // 0x648(0x04)
	char pad_64C[0x4]; // 0x64c(0x04)
	struct UTexture2D* FilmGrainTexture; // 0x650(0x08)
	float AmbientOcclusionIntensity; // 0x658(0x04)
	float AmbientOcclusionStaticFraction; // 0x65c(0x04)
	float AmbientOcclusionRadius; // 0x660(0x04)
	char AmbientOcclusionRadiusInWS : 1; // 0x664(0x01)
	char pad_664_1 : 7; // 0x664(0x01)
	char pad_665[0x3]; // 0x665(0x03)
	float AmbientOcclusionFadeDistance; // 0x668(0x04)
	float AmbientOcclusionFadeRadius; // 0x66c(0x04)
	float AmbientOcclusionDistance; // 0x670(0x04)
	float AmbientOcclusionPower; // 0x674(0x04)
	float AmbientOcclusionBias; // 0x678(0x04)
	float AmbientOcclusionQuality; // 0x67c(0x04)
	float AmbientOcclusionMipBlend; // 0x680(0x04)
	float AmbientOcclusionMipScale; // 0x684(0x04)
	float AmbientOcclusionMipThreshold; // 0x688(0x04)
	float AmbientOcclusionTemporalBlendWeight; // 0x68c(0x04)
	char RayTracingAO : 1; // 0x690(0x01)
	char pad_690_1 : 7; // 0x690(0x01)
	char pad_691[0x3]; // 0x691(0x03)
	int32_t RayTracingAOSamplesPerPixel; // 0x694(0x04)
	float RayTracingAOIntensity; // 0x698(0x04)
	float RayTracingAORadius; // 0x69c(0x04)
	float ColorGradingIntensity; // 0x6a0(0x04)
	char pad_6A4[0x4]; // 0x6a4(0x04)
	struct UTexture* ColorGradingLUT; // 0x6a8(0x08)
	float DepthOfFieldSensorWidth; // 0x6b0(0x04)
	float DepthOfFieldSqueezeFactor; // 0x6b4(0x04)
	float DepthOfFieldFocalDistance; // 0x6b8(0x04)
	float DepthOfFieldDepthBlurAmount; // 0x6bc(0x04)
	float DepthOfFieldDepthBlurRadius; // 0x6c0(0x04)
	float DepthOfFieldFocalRegion; // 0x6c4(0x04)
	float DepthOfFieldNearTransitionRegion; // 0x6c8(0x04)
	float DepthOfFieldFarTransitionRegion; // 0x6cc(0x04)
	float DepthOfFieldScale; // 0x6d0(0x04)
	float DepthOfFieldNearBlurSize; // 0x6d4(0x04)
	float DepthOfFieldFarBlurSize; // 0x6d8(0x04)
	float DepthOfFieldOcclusion; // 0x6dc(0x04)
	float DepthOfFieldSkyFocusDistance; // 0x6e0(0x04)
	float DepthOfFieldVignetteSize; // 0x6e4(0x04)
	float MotionBlurAmount; // 0x6e8(0x04)
	float MotionBlurMax; // 0x6ec(0x04)
	int32_t MotionBlurTargetFPS; // 0x6f0(0x04)
	float MotionBlurPerObjectSize; // 0x6f4(0x04)
	float LPVIntensity; // 0x6f8(0x04)
	float LPVVplInjectionBias; // 0x6fc(0x04)
	float LPVSize; // 0x700(0x04)
	float LPVSecondaryOcclusionIntensity; // 0x704(0x04)
	float LPVSecondaryBounceIntensity; // 0x708(0x04)
	float LPVGeometryVolumeBias; // 0x70c(0x04)
	float LPVEmissiveInjectionIntensity; // 0x710(0x04)
	float LPVDirectionalOcclusionIntensity; // 0x714(0x04)
	float LPVDirectionalOcclusionRadius; // 0x718(0x04)
	float LPVDiffuseOcclusionExponent; // 0x71c(0x04)
	float LPVSpecularOcclusionExponent; // 0x720(0x04)
	float LPVDiffuseOcclusionIntensity; // 0x724(0x04)
	float LPVSpecularOcclusionIntensity; // 0x728(0x04)
	enum class ETranslucencyType TranslucencyType; // 0x72c(0x01)
	char pad_72D[0x3]; // 0x72d(0x03)
	float RayTracingTranslucencyMaxRoughness; // 0x730(0x04)
	int32_t RayTracingTranslucencyRefractionRays; // 0x734(0x04)
	int32_t RayTracingTranslucencySamplesPerPixel; // 0x738(0x04)
	enum class EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows; // 0x73c(0x01)
	char RayTracingTranslucencyRefraction : 1; // 0x73d(0x01)
	char pad_73D_1 : 7; // 0x73d(0x01)
	char pad_73E[0x2]; // 0x73e(0x02)
	int32_t PathTracingMaxBounces; // 0x740(0x04)
	int32_t PathTracingSamplesPerPixel; // 0x744(0x04)
	float PathTracingMaxPathExposure; // 0x748(0x04)
	char PathTracingEnableReferenceDOF : 1; // 0x74c(0x01)
	char PathTracingEnableReferenceAtmosphere : 1; // 0x74c(0x01)
	char PathTracingEnableDenoiser : 1; // 0x74c(0x01)
	char PathTracingIncludeEmissive : 1; // 0x74c(0x01)
	char PathTracingIncludeIndirectEmissive : 1; // 0x74c(0x01)
	char PathTracingIncludeDiffuse : 1; // 0x74c(0x01)
	char PathTracingIncludeIndirectDiffuse : 1; // 0x74c(0x01)
	char PathTracingIncludeSpecular : 1; // 0x74c(0x01)
	char PathTracingIncludeIndirectSpecular : 1; // 0x74d(0x01)
	char PathTracingIncludeVolume : 1; // 0x74d(0x01)
	char PathTracingIncludeIndirectVolume : 1; // 0x74d(0x01)
	char pad_74D_3 : 5; // 0x74d(0x01)
	char pad_74E[0x2]; // 0x74e(0x02)
	float LPVFadeRange; // 0x750(0x04)
	float LPVDirectionalOcclusionFadeRange; // 0x754(0x04)
	float ScreenPercentage; // 0x758(0x04)
	char pad_75C[0x4]; // 0x75c(0x04)
	struct FWeightedBlendables WeightedBlendables; // 0x760(0x10)
	struct FLinearColor AmbientOcclusionTintColor; // 0x770(0x10)
	float AresAdaptiveSharpenCurveSlope; // 0x780(0x04)
	float AresAdaptiveSharpenDarkCompressionHigh; // 0x784(0x04)
	float AresAdaptiveSharpenDarkCompressionLow; // 0x788(0x04)
	float AresAdaptiveSharpenDarkOvershoot; // 0x78c(0x04)
	float AresAdaptiveSharpenLightCompressionHigh; // 0x790(0x04)
	float AresAdaptiveSharpenLightCompressionLow; // 0x794(0x04)
	float AresAdaptiveSharpenLightOvershoot; // 0x798(0x04)
	float AresAdaptiveSharpenPowerMeanPValue; // 0x79c(0x04)
	float AresAdaptiveSharpenScaleCompressionSlope; // 0x7a0(0x04)
	float AresAdaptiveSharpenScaleLim; // 0x7a4(0x04)
	float AresAdaptiveSharpenStrength; // 0x7a8(0x04)
	float AresCharacterOutlinesBlurDistance; // 0x7ac(0x04)
	struct FLinearColor AresCharacterOutlinesColor; // 0x7b0(0x10)
	struct FLinearColor AresCharacterOutlinesOverlayColor; // 0x7c0(0x10)
	int32_t AresCharacterOutlinesPixelOffset; // 0x7d0(0x04)
	int32_t AresClarityBlendIfDark; // 0x7d4(0x04)
	int32_t AresClarityBlendIfLight; // 0x7d8(0x04)
	enum class EAresClarityBlendMode AresClarityBlendMode; // 0x7dc(0x01)
	char pad_7DD[0x3]; // 0x7dd(0x03)
	float AresClarityDarkIntensity; // 0x7e0(0x04)
	float AresClarityLightIntensity; // 0x7e4(0x04)
	float AresClarityOffset; // 0x7e8(0x04)
	int32_t AresClarityRadius; // 0x7ec(0x04)
	float AresClarityStrength; // 0x7f0(0x04)
	char pad_7F4[0x4]; // 0x7f4(0x04)
	struct UCurveFloat* IndirectLightingScaleCurve; // 0x7f8(0x08)
};

// ScriptStruct Engine.WeightedBlendables
// Size: 0x10 (Inherited: 0x00)
struct FWeightedBlendables {
	struct TArray<struct FWeightedBlendable> Array; // 0x00(0x10)
};

// ScriptStruct Engine.WeightedBlendable
// Size: 0x10 (Inherited: 0x00)
struct FWeightedBlendable {
	float Weight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UObject* Object; // 0x08(0x08)
};

// ScriptStruct Engine.TextSizingParameters
// Size: 0x38 (Inherited: 0x00)
struct FTextSizingParameters {
	float DrawX; // 0x00(0x04)
	float DrawY; // 0x04(0x04)
	float DrawXL; // 0x08(0x04)
	float DrawYL; // 0x0c(0x04)
	struct FVector2D Scaling; // 0x10(0x10)
	struct UFont* DrawFont; // 0x20(0x08)
	struct FVector2D SpacingAdjust; // 0x28(0x10)
};

// ScriptStruct Engine.WrappedStringElement
// Size: 0x20 (Inherited: 0x00)
struct FWrappedStringElement {
	struct FString Value; // 0x00(0x10)
	struct FVector2D LineExtent; // 0x10(0x10)
};

// ScriptStruct Engine.JumpTimeInfo
// Size: 0x08 (Inherited: 0x00)
struct FJumpTimeInfo {
	float StartNetTime; // 0x00(0x04)
	float LandNetTime; // 0x04(0x04)
};

// ScriptStruct Engine.JumpVariables
// Size: 0x34 (Inherited: 0x00)
struct FJumpVariables {
	int32_t MostRecentJump; // 0x00(0x04)
	struct FJumpTimeInfo JumpTimeHistory[0x3]; // 0x04(0x18)
	float JumpLandFallDistance; // 0x1c(0x04)
	float JumpLandRiseDistance; // 0x20(0x04)
	float JumpStartHeight; // 0x24(0x04)
	float JumpHighestHeight; // 0x28(0x04)
	float JumpLandHeight; // 0x2c(0x04)
	float JumpLandSpeed; // 0x30(0x04)
};

// ScriptStruct Engine.CharacterNetworkSerializationPackedBits
// Size: 0xc8 (Inherited: 0x00)
struct FCharacterNetworkSerializationPackedBits {
	char pad_0[0xc8]; // 0x00(0xc8)
};

// ScriptStruct Engine.ClientAdjustmentDebugInfo
// Size: 0x08 (Inherited: 0x00)
struct FClientAdjustmentDebugInfo {
	enum class ECorrectionReason CorrectionReason; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t CorrectionId; // 0x04(0x04)
};

// ScriptStruct Engine.CharacterMoveResponsePackedBits
// Size: 0xc8 (Inherited: 0xc8)
struct FCharacterMoveResponsePackedBits : FCharacterNetworkSerializationPackedBits {
};

// ScriptStruct Engine.CustomAttributeSetting
// Size: 0x20 (Inherited: 0x00)
struct FCustomAttributeSetting {
	struct FString Name; // 0x00(0x10)
	struct FString Meaning; // 0x10(0x10)
};

// ScriptStruct Engine.TimecodeCustomAttributeNameSettings
// Size: 0x54 (Inherited: 0x00)
struct FTimecodeCustomAttributeNameSettings {
	struct FName HourAttributeName; // 0x00(0x0c)
	struct FName MinuteAttributeName; // 0x0c(0x0c)
	struct FName SecondAttributeName; // 0x18(0x0c)
	struct FName FrameAttributeName; // 0x24(0x0c)
	struct FName SubframeAttributeName; // 0x30(0x0c)
	struct FName RateAttributeName; // 0x3c(0x0c)
	struct FName TakenameAttributeName; // 0x48(0x0c)
};

// ScriptStruct Engine.CustomAttribute
// Size: 0x01 (Inherited: 0x00)
struct FCustomAttribute {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.CustomAttributePerBoneData
// Size: 0x01 (Inherited: 0x00)
struct FCustomAttributePerBoneData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.BakedStringCustomAttribute
// Size: 0x01 (Inherited: 0x00)
struct FBakedStringCustomAttribute {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.BakedIntegerCustomAttribute
// Size: 0x01 (Inherited: 0x00)
struct FBakedIntegerCustomAttribute {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.BakedFloatCustomAttribute
// Size: 0x01 (Inherited: 0x00)
struct FBakedFloatCustomAttribute {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.BakedCustomAttributePerBoneData
// Size: 0x01 (Inherited: 0x00)
struct FBakedCustomAttributePerBoneData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.DebugDisplayProperty
// Size: 0x20 (Inherited: 0x00)
struct FDebugDisplayProperty {
	struct UObject* Obj; // 0x00(0x08)
	struct UObject* WithinClass; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Engine.DebugTextInfo
// Size: 0x80 (Inherited: 0x00)
struct FDebugTextInfo {
	struct AActor* SrcActor; // 0x00(0x08)
	struct FVector SrcActorOffset; // 0x08(0x18)
	struct FVector SrcActorDesiredOffset; // 0x20(0x18)
	struct FString DebugText; // 0x38(0x10)
	float TimeRemaining; // 0x48(0x04)
	float Duration; // 0x4c(0x04)
	struct FColor TextColor; // 0x50(0x04)
	char bAbsoluteLocation : 1; // 0x54(0x01)
	char bKeepAttachedToActor : 1; // 0x54(0x01)
	char bDrawShadow : 1; // 0x54(0x01)
	char pad_54_3 : 5; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FVector OrigActorLocation; // 0x58(0x18)
	struct UFont* Font; // 0x70(0x08)
	float FontScale; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct Engine.RawDistributionFloat
// Size: 0x30 (Inherited: 0x20)
struct FRawDistributionFloat : FRawDistribution {
	float MinValue; // 0x20(0x04)
	float MaxValue; // 0x24(0x04)
	struct UDistributionFloat* Distribution; // 0x28(0x08)
};

// ScriptStruct Engine.RawDistributionVector
// Size: 0x60 (Inherited: 0x20)
struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x20(0x04)
	float MaxValue; // 0x24(0x04)
	struct FVector MinValueVec; // 0x28(0x18)
	struct FVector MaxValueVec; // 0x40(0x18)
	struct UDistributionVector* Distribution; // 0x58(0x08)
};

// ScriptStruct Engine.EdGraphPinReference
// Size: 0x18 (Inherited: 0x00)
struct FEdGraphPinReference {
	struct TWeakObjectPtr<struct UEdGraphNode> OwningNode; // 0x00(0x08)
	struct FGuid PinId; // 0x08(0x10)
};

// ScriptStruct Engine.EdGraphSchemaAction
// Size: 0x100 (Inherited: 0x00)
struct FEdGraphSchemaAction {
	char pad_0[0x8]; // 0x00(0x08)
	struct FText MenuDescription; // 0x08(0x18)
	struct FText TooltipDescription; // 0x20(0x18)
	struct FText Category; // 0x38(0x18)
	struct FText Keywords; // 0x50(0x18)
	int32_t Grouping; // 0x68(0x04)
	int32_t SectionID; // 0x6c(0x04)
	struct TArray<struct FString> MenuDescriptionArray; // 0x70(0x10)
	struct TArray<struct FString> FullSearchTitlesArray; // 0x80(0x10)
	struct TArray<struct FString> FullSearchKeywordsArray; // 0x90(0x10)
	struct TArray<struct FString> FullSearchCategoryArray; // 0xa0(0x10)
	struct TArray<struct FString> LocalizedMenuDescriptionArray; // 0xb0(0x10)
	struct TArray<struct FString> LocalizedFullSearchTitlesArray; // 0xc0(0x10)
	struct TArray<struct FString> LocalizedFullSearchKeywordsArray; // 0xd0(0x10)
	struct TArray<struct FString> LocalizedFullSearchCategoryArray; // 0xe0(0x10)
	struct FString SearchText; // 0xf0(0x10)
};

// ScriptStruct Engine.EdGraphSchemaAction_NewNode
// Size: 0x108 (Inherited: 0x100)
struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction {
	struct UEdGraphNode* NodeTemplate; // 0x100(0x08)
};

// ScriptStruct Engine.FullyLoadedPackagesInfo
// Size: 0x38 (Inherited: 0x00)
struct FFullyLoadedPackagesInfo {
	enum class EFullyLoadPackageType FullyLoadType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Tag; // 0x08(0x10)
	struct TArray<struct FName> PackagesToLoad; // 0x18(0x10)
	struct TArray<struct UObject*> LoadedObjects; // 0x28(0x10)
};

// ScriptStruct Engine.LevelStreamingStatus
// Size: 0x14 (Inherited: 0x00)
struct FLevelStreamingStatus {
	struct FName PackageName; // 0x00(0x0c)
	char bShouldBeLoaded : 1; // 0x0c(0x01)
	char bShouldBeVisible : 1; // 0x0c(0x01)
	char pad_C_2 : 6; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	uint32_t LODIndex; // 0x10(0x04)
};

// ScriptStruct Engine.NetDriverDefinition
// Size: 0x28 (Inherited: 0x00)
struct FNetDriverDefinition {
	struct FName DefName; // 0x00(0x0c)
	struct FName DriverClassName; // 0x0c(0x0c)
	struct FName DriverClassNameFallback; // 0x18(0x0c)
	int32_t MaxChannelsOverride; // 0x24(0x04)
};

// ScriptStruct Engine.IrisNetDriverConfig
// Size: 0x30 (Inherited: 0x00)
struct FIrisNetDriverConfig {
	struct FName NetDriverDefinition; // 0x00(0x0c)
	struct FName NetDriverName; // 0x0c(0x0c)
	struct FString NetDriverWildcardName; // 0x18(0x10)
	bool bCanUseIris; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct Engine.NamedNetDriver
// Size: 0x10 (Inherited: 0x00)
struct FNamedNetDriver {
	struct UNetDriver* NetDriver; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.WorldContext
// Size: 0x2d0 (Inherited: 0x00)
struct FWorldContext {
	char pad_0[0xc8]; // 0x00(0xc8)
	struct FURL LastURL; // 0xc8(0x68)
	struct FURL LastRemoteURL; // 0x130(0x68)
	struct UPendingNetGame* PendingNetGame; // 0x198(0x08)
	struct TArray<struct FFullyLoadedPackagesInfo> PackagesToFullyLoad; // 0x1a0(0x10)
	char pad_1B0[0x10]; // 0x1b0(0x10)
	struct TArray<struct ULevel*> LoadedLevelsForPendingMapChange; // 0x1c0(0x10)
	char pad_1D0[0x18]; // 0x1d0(0x18)
	struct TArray<struct UObjectReferencer*> ObjectReferencers; // 0x1e8(0x10)
	struct TArray<struct FLevelStreamingStatus> PendingLevelStreamingStatusUpdates; // 0x1f8(0x10)
	struct UGameViewportClient* GameViewport; // 0x208(0x08)
	struct UGameInstance* OwningGameInstance; // 0x210(0x08)
	struct TArray<struct FNamedNetDriver> ActiveNetDrivers; // 0x218(0x10)
	char pad_228[0xa8]; // 0x228(0xa8)
};

// ScriptStruct Engine.URL
// Size: 0x68 (Inherited: 0x00)
struct FURL {
	struct FString Protocol; // 0x00(0x10)
	struct FString Host; // 0x10(0x10)
	int32_t Port; // 0x20(0x04)
	int32_t Valid; // 0x24(0x04)
	struct FString Map; // 0x28(0x10)
	struct FString RedirectURL; // 0x38(0x10)
	struct TArray<struct FString> Op; // 0x48(0x10)
	struct FString Portal; // 0x58(0x10)
};

// ScriptStruct Engine.StatColorMapEntry
// Size: 0x08 (Inherited: 0x00)
struct FStatColorMapEntry {
	float In; // 0x00(0x04)
	struct FColor Out; // 0x04(0x04)
};

// ScriptStruct Engine.StatColorMapping
// Size: 0x28 (Inherited: 0x00)
struct FStatColorMapping {
	struct FString StatName; // 0x00(0x10)
	struct TArray<struct FStatColorMapEntry> ColorMap; // 0x10(0x10)
	char DisableBlend : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.DropNoteInfo
// Size: 0x40 (Inherited: 0x00)
struct FDropNoteInfo {
	struct FVector Location; // 0x00(0x18)
	struct FRotator Rotation; // 0x18(0x18)
	struct FString Comment; // 0x30(0x10)
};

// ScriptStruct Engine.ScreenMessageString
// Size: 0x38 (Inherited: 0x00)
struct FScreenMessageString {
	uint64_t Key; // 0x00(0x08)
	struct FString ScreenMessage; // 0x08(0x10)
	struct FColor DisplayColor; // 0x18(0x04)
	float TimeToDisplay; // 0x1c(0x04)
	float CurrentTimeDisplayed; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FVector2D TextScale; // 0x28(0x10)
};

// ScriptStruct Engine.GameNameRedirect
// Size: 0x18 (Inherited: 0x00)
struct FGameNameRedirect {
	struct FName OldGameName; // 0x00(0x0c)
	struct FName NewGameName; // 0x0c(0x0c)
};

// ScriptStruct Engine.ClassRedirect
// Size: 0x58 (Inherited: 0x00)
struct FClassRedirect {
	struct FName ObjectName; // 0x00(0x0c)
	struct FName OldClassName; // 0x0c(0x0c)
	struct FName NewClassName; // 0x18(0x0c)
	struct FName OldSubobjName; // 0x24(0x0c)
	struct FName NewSubobjName; // 0x30(0x0c)
	struct FName NewClassClass; // 0x3c(0x0c)
	struct FName NewClassPackage; // 0x48(0x0c)
	bool InstanceOnly; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// ScriptStruct Engine.StructRedirect
// Size: 0x18 (Inherited: 0x00)
struct FStructRedirect {
	struct FName OldStructName; // 0x00(0x0c)
	struct FName NewStructName; // 0x0c(0x0c)
};

// ScriptStruct Engine.PluginRedirect
// Size: 0x20 (Inherited: 0x00)
struct FPluginRedirect {
	struct FString OldPluginName; // 0x00(0x10)
	struct FString NewPluginName; // 0x10(0x10)
};

// ScriptStruct Engine.TickPrerequisite
// Size: 0x10 (Inherited: 0x00)
struct FTickPrerequisite {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.ExposureSettings
// Size: 0x08 (Inherited: 0x00)
struct FExposureSettings {
	float FixedEV100; // 0x00(0x04)
	bool bFixed; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.MaterialShadingModelField
// Size: 0x02 (Inherited: 0x00)
struct FMaterialShadingModelField {
	uint16_t ShadingModelField; // 0x00(0x02)
};

// ScriptStruct Engine.StrataMaterialInfo
// Size: 0x30 (Inherited: 0x00)
struct FStrataMaterialInfo {
	uint16_t ShadingModelField; // 0x00(0x02)
	char bHasShadingModelFromExpression; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	uint32_t ConnectedProperties; // 0x04(0x04)
	uint64_t ConnectedPropertyMask; // 0x08(0x08)
	struct TArray<struct USubsurfaceProfile*> SubsurfaceProfiles; // 0x10(0x10)
	struct TArray<struct USpecularProfile*> SpecularProfiles; // 0x20(0x10)
};

// ScriptStruct Engine.RigidBodyErrorCorrection
// Size: 0x34 (Inherited: 0x00)
struct FRigidBodyErrorCorrection {
	float PingExtrapolation; // 0x00(0x04)
	float PingLimit; // 0x04(0x04)
	float ErrorPerLinearDifference; // 0x08(0x04)
	float ErrorPerAngularDifference; // 0x0c(0x04)
	float MaxRestoredStateError; // 0x10(0x04)
	float MaxLinearHardSnapDistance; // 0x14(0x04)
	float PositionLerp; // 0x18(0x04)
	float AngleLerp; // 0x1c(0x04)
	float LinearVelocityCoefficient; // 0x20(0x04)
	float AngularVelocityCoefficient; // 0x24(0x04)
	float ErrorAccumulationSeconds; // 0x28(0x04)
	float ErrorAccumulationDistanceSq; // 0x2c(0x04)
	float ErrorAccumulationSimilarity; // 0x30(0x04)
};

// ScriptStruct Engine.RigidBodyContactInfo
// Size: 0x48 (Inherited: 0x00)
struct FRigidBodyContactInfo {
	struct FVector ContactPosition; // 0x00(0x18)
	struct FVector ContactNormal; // 0x18(0x18)
	float ContactPenetration; // 0x30(0x04)
	bool bContactProbe; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct UPhysicalMaterial* PhysMaterial[0x2]; // 0x38(0x10)
};

// ScriptStruct Engine.CollisionImpactData
// Size: 0x48 (Inherited: 0x00)
struct FCollisionImpactData {
	struct TArray<struct FRigidBodyContactInfo> ContactInfos; // 0x00(0x10)
	struct FVector TotalNormalImpulse; // 0x10(0x18)
	struct FVector TotalFrictionImpulse; // 0x28(0x18)
	bool bIsVelocityDeltaUnderThreshold; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct Engine.FractureEffect
// Size: 0x10 (Inherited: 0x00)
struct FFractureEffect {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	struct USoundBase* Sound; // 0x08(0x08)
};

// ScriptStruct Engine.BasedPosition
// Size: 0x68 (Inherited: 0x00)
struct FBasedPosition {
	struct AActor* base; // 0x00(0x08)
	struct FVector Position; // 0x08(0x18)
	struct FVector CachedBaseLocation; // 0x20(0x18)
	struct FRotator CachedBaseRotation; // 0x38(0x18)
	struct FVector CachedTransPosition; // 0x50(0x18)
};

// ScriptStruct Engine.LightmassLightSettings
// Size: 0x0c (Inherited: 0x00)
struct FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x00(0x04)
	float ShadowExponent; // 0x04(0x04)
	bool bUseAreaShadowsForStationaryLight; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.LightmassPointLightSettings
// Size: 0x0c (Inherited: 0x0c)
struct FLightmassPointLightSettings : FLightmassLightSettings {
};

// ScriptStruct Engine.LightmassDirectionalLightSettings
// Size: 0x10 (Inherited: 0x0c)
struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; // 0x0c(0x04)
};

// ScriptStruct Engine.LightmassPrimitiveSettings
// Size: 0x1c (Inherited: 0x00)
struct FLightmassPrimitiveSettings {
	char bUseTwoSidedLighting : 1; // 0x00(0x01)
	char bShadowIndirectOnly : 1; // 0x00(0x01)
	char bUseEmissiveForStaticLighting : 1; // 0x00(0x01)
	char bUseVertexNormalForHemisphereGather : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float EmissiveLightFalloffExponent; // 0x04(0x04)
	float EmissiveLightExplicitInfluenceRadius; // 0x08(0x04)
	float EmissiveBoost; // 0x0c(0x04)
	float DiffuseBoost; // 0x10(0x04)
	float FullyOccludedSamplesFraction; // 0x14(0x04)
	char bLightAsBackFace : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct Engine.LightmassDebugOptions
// Size: 0x10 (Inherited: 0x00)
struct FLightmassDebugOptions {
	char bDebugMode : 1; // 0x00(0x01)
	char bStatsEnabled : 1; // 0x00(0x01)
	char bGatherBSPSurfacesAcrossComponents : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float CoplanarTolerance; // 0x04(0x04)
	char bUseImmediateImport : 1; // 0x08(0x01)
	char bImmediateProcessMappings : 1; // 0x08(0x01)
	char bSortMappings : 1; // 0x08(0x01)
	char bDumpBinaryFiles : 1; // 0x08(0x01)
	char bDebugMaterials : 1; // 0x08(0x01)
	char bPadMappings : 1; // 0x08(0x01)
	char bDebugPaddings : 1; // 0x08(0x01)
	char bOnlyCalcDebugTexelMappings : 1; // 0x08(0x01)
	char bUseRandomColors : 1; // 0x09(0x01)
	char bColorBordersGreen : 1; // 0x09(0x01)
	char bColorByExecutionTime : 1; // 0x09(0x01)
	char pad_9_3 : 5; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float ExecutionTimeDivisor; // 0x0c(0x04)
};

// ScriptStruct Engine.SwarmDebugOptions
// Size: 0x04 (Inherited: 0x00)
struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x00(0x01)
	char bForceContentExport : 1; // 0x00(0x01)
	char bInitialized : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.MTDResult
// Size: 0x20 (Inherited: 0x00)
struct FMTDResult {
	struct FVector Direction; // 0x00(0x18)
	float Distance; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.AnimSlotDesc
// Size: 0x10 (Inherited: 0x00)
struct FAnimSlotDesc {
	struct FName SlotName; // 0x00(0x0c)
	int32_t NumChannels; // 0x0c(0x04)
};

// ScriptStruct Engine.AnimUpdateRateParameters
// Size: 0xb0 (Inherited: 0x00)
struct FAnimUpdateRateParameters {
	char pad_0[0x1]; // 0x00(0x01)
	enum class EUpdateRateShiftBucket ShiftBucket; // 0x01(0x01)
	char bInterpolateSkippedFrames : 1; // 0x02(0x01)
	char bShouldUseLodMap : 1; // 0x02(0x01)
	char bShouldUseMinLod : 1; // 0x02(0x01)
	char bSkipUpdate : 1; // 0x02(0x01)
	char bSkipEvaluation : 1; // 0x02(0x01)
	char pad_2_5 : 3; // 0x02(0x01)
	char UpdateRateFrameShift; // 0x03(0x01)
	int32_t UpdateRate; // 0x04(0x04)
	int32_t EvaluationRate; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<float> TickedPoseOffsetTimes; // 0x10(0x10)
	int32_t CurrentMeshIndex; // 0x20(0x04)
	float AdditionalTime; // 0x24(0x04)
	char pad_28[0x4]; // 0x28(0x04)
	int32_t BaseNonRenderedUpdateRate; // 0x2c(0x04)
	int32_t BaseServerAnimUpdateRate; // 0x30(0x04)
	int32_t MaxEvalRateForInterpolation; // 0x34(0x04)
	struct TArray<float> BaseVisibleDistanceFactorThesholds; // 0x38(0x10)
	struct TArray<float> BaseVisibleAngleFromScreenCenterThresholds; // 0x48(0x10)
	struct TMap<int32_t, int32_t> LODToFrameSkipMap; // 0x58(0x50)
	int32_t SkippedUpdateFrames; // 0xa8(0x04)
	int32_t SkippedEvalFrames; // 0xac(0x04)
};

// ScriptStruct Engine.POV
// Size: 0x38 (Inherited: 0x00)
struct FPOV {
	struct FVector Location; // 0x00(0x18)
	struct FRotator Rotation; // 0x18(0x18)
	float FOV; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Engine.MeshBuildSettings
// Size: 0x48 (Inherited: 0x00)
struct FMeshBuildSettings {
	char bUseMikkTSpace : 1; // 0x00(0x01)
	char bRecomputeNormals : 1; // 0x00(0x01)
	char bRecomputeTangents : 1; // 0x00(0x01)
	char bComputeWeightedNormals : 1; // 0x00(0x01)
	char bRemoveDegenerates : 1; // 0x00(0x01)
	char bBuildReversedIndexBuffer : 1; // 0x00(0x01)
	char bUseHighPrecisionTangentBasis : 1; // 0x00(0x01)
	char bUseFullPrecisionUVs : 1; // 0x00(0x01)
	char bUseBackwardsCompatibleF16TruncUVs : 1; // 0x01(0x01)
	char bGenerateLightmapUVs : 1; // 0x01(0x01)
	char bGenerateDistanceFieldAsIfTwoSided : 1; // 0x01(0x01)
	char bSupportFaceRemap : 1; // 0x01(0x01)
	char pad_1_4 : 4; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t MinLightmapResolution; // 0x04(0x04)
	int32_t SrcLightmapIndex; // 0x08(0x04)
	int32_t DstLightmapIndex; // 0x0c(0x04)
	float BuildScale; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FVector BuildScale3D; // 0x18(0x18)
	float DistanceFieldResolutionScale; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UStaticMesh* DistanceFieldReplacementMesh; // 0x38(0x08)
	int32_t MaxLumenMeshCards; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Engine.SkeletalMeshBuildSettings
// Size: 0x18 (Inherited: 0x00)
struct FSkeletalMeshBuildSettings {
	char bRecomputeNormals : 1; // 0x00(0x01)
	char bRecomputeTangents : 1; // 0x00(0x01)
	char bUseMikkTSpace : 1; // 0x00(0x01)
	char bComputeWeightedNormals : 1; // 0x00(0x01)
	char bRemoveDegenerates : 1; // 0x00(0x01)
	char bUseHighPrecisionTangentBasis : 1; // 0x00(0x01)
	char bUseHighPrecisionSkinWeights : 1; // 0x00(0x01)
	char bUseFullPrecisionUVs : 1; // 0x00(0x01)
	char bUseBackwardsCompatibleF16TruncUVs : 1; // 0x01(0x01)
	char pad_1_1 : 7; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float ThresholdPosition; // 0x04(0x04)
	float ThresholdTangentNormal; // 0x08(0x04)
	float ThresholdUV; // 0x0c(0x04)
	float MorphThresholdPosition; // 0x10(0x04)
	int32_t BoneInfluenceLimit; // 0x14(0x04)
};

// ScriptStruct Engine.MeshDisplacementMap
// Size: 0x10 (Inherited: 0x00)
struct FMeshDisplacementMap {
	struct UTexture2D* Texture; // 0x00(0x08)
	float Magnitude; // 0x08(0x04)
	float Center; // 0x0c(0x04)
};

// ScriptStruct Engine.MeshNaniteSettings
// Size: 0x40 (Inherited: 0x00)
struct FMeshNaniteSettings {
	char bEnabled : 1; // 0x00(0x01)
	char bPreserveArea : 1; // 0x00(0x01)
	char bExplicitTangents : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t PositionPrecision; // 0x04(0x04)
	int32_t NormalPrecision; // 0x08(0x04)
	int32_t TangentPrecision; // 0x0c(0x04)
	uint32_t TargetMinimumResidencyInKB; // 0x10(0x04)
	float KeepPercentTriangles; // 0x14(0x04)
	float TrimRelativeError; // 0x18(0x04)
	enum class ENaniteFallbackTarget FallbackTarget; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float FallbackPercentTriangles; // 0x20(0x04)
	float FallbackRelativeError; // 0x24(0x04)
	int32_t DisplacementUVChannel; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FMeshDisplacementMap> DisplacementMaps; // 0x30(0x10)
};

// ScriptStruct Engine.DisplacementScaling
// Size: 0x08 (Inherited: 0x00)
struct FDisplacementScaling {
	float Magnitude; // 0x00(0x04)
	float Center; // 0x04(0x04)
};

// ScriptStruct Engine.ConstrainComponentPropName
// Size: 0x0c (Inherited: 0x00)
struct FConstrainComponentPropName {
	struct FName ComponentName; // 0x00(0x0c)
};

// ScriptStruct Engine.CollectionReference
// Size: 0x0c (Inherited: 0x00)
struct FCollectionReference {
	struct FName CollectionName; // 0x00(0x0c)
};

// ScriptStruct Engine.Redirector
// Size: 0x18 (Inherited: 0x00)
struct FRedirector {
	struct FName OldName; // 0x00(0x0c)
	struct FName NewName; // 0x0c(0x0c)
};

// ScriptStruct Engine.DepthFieldGlowInfo
// Size: 0x38 (Inherited: 0x00)
struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor GlowColor; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct FVector2D GlowOuterRadius; // 0x18(0x10)
	struct FVector2D GlowInnerRadius; // 0x28(0x10)
};

// ScriptStruct Engine.FontRenderInfo
// Size: 0x40 (Inherited: 0x00)
struct FFontRenderInfo {
	char bClipText : 1; // 0x00(0x01)
	char bEnableShadow : 1; // 0x00(0x01)
	char pad_0_2 : 6; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDepthFieldGlowInfo GlowInfo; // 0x08(0x38)
};

// ScriptStruct Engine.CanvasUVTri
// Size: 0x90 (Inherited: 0x00)
struct FCanvasUVTri {
	struct FVector2D V0_Pos; // 0x00(0x10)
	struct FVector2D V0_UV; // 0x10(0x10)
	struct FLinearColor V0_Color; // 0x20(0x10)
	struct FVector2D V1_Pos; // 0x30(0x10)
	struct FVector2D V1_UV; // 0x40(0x10)
	struct FLinearColor V1_Color; // 0x50(0x10)
	struct FVector2D V2_Pos; // 0x60(0x10)
	struct FVector2D V2_UV; // 0x70(0x10)
	struct FLinearColor V2_Color; // 0x80(0x10)
};

// ScriptStruct Engine.RiotPlatformClientSettings
// Size: 0x50 (Inherited: 0x00)
struct FRiotPlatformClientSettings {
	struct FString Region; // 0x00(0x10)
	struct FString User; // 0x10(0x10)
	struct FString Password; // 0x20(0x10)
	bool bGeneratedTestAccount; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t RNetPort; // 0x34(0x04)
	struct FString RNetAuthToken; // 0x38(0x10)
	bool bInitialized; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Engine.RiotPlatformInitSettings
// Size: 0x48 (Inherited: 0x00)
struct FRiotPlatformInitSettings {
	bool bInitialized; // 0x00(0x01)
	bool bLaunchClient; // 0x01(0x01)
	bool bHeadless; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FString RiotClientInstallPath; // 0x08(0x10)
	struct FString RiotClientLogPath; // 0x18(0x10)
	struct FString ServerVersion; // 0x28(0x10)
	struct TArray<struct FRiotPlatformClientSettings> ClientSettings; // 0x38(0x10)
};

// ScriptStruct Engine.DefaultTextureSettings
// Size: 0x08 (Inherited: 0x00)
struct FDefaultTextureSettings {
	int32_t MaxTextureSize; // 0x00(0x04)
	int32_t MaxMobileTextureSize; // 0x04(0x04)
};

// ScriptStruct Engine.ExponentialHeightFogData
// Size: 0x0c (Inherited: 0x00)
struct FExponentialHeightFogData {
	float FogDensity; // 0x00(0x04)
	float FogHeightFalloff; // 0x04(0x04)
	float FogHeightOffset; // 0x08(0x04)
};

// ScriptStruct Engine.ExternalSpatialAccelerationPayload
// Size: 0x10 (Inherited: 0x00)
struct FExternalSpatialAccelerationPayload {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.FontImportOptionsData
// Size: 0xb0 (Inherited: 0x00)
struct FFontImportOptionsData {
	struct FString FontName; // 0x00(0x10)
	float Height; // 0x10(0x04)
	char bEnableAntialiasing : 1; // 0x14(0x01)
	char bEnableBold : 1; // 0x14(0x01)
	char bEnableItalic : 1; // 0x14(0x01)
	char bEnableUnderline : 1; // 0x14(0x01)
	char bAlphaOnly : 1; // 0x14(0x01)
	char pad_14_5 : 3; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	enum class EFontImportCharacterSet CharacterSet; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString Chars; // 0x20(0x10)
	struct FString UnicodeRange; // 0x30(0x10)
	struct FString CharsFilePath; // 0x40(0x10)
	struct FString CharsFileWildcard; // 0x50(0x10)
	char bCreatePrintableOnly : 1; // 0x60(0x01)
	char bIncludeASCIIRange : 1; // 0x60(0x01)
	char pad_60_2 : 6; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	struct FLinearColor ForegroundColor; // 0x64(0x10)
	char bEnableDropShadow : 1; // 0x74(0x01)
	char pad_74_1 : 7; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
	int32_t TexturePageWidth; // 0x78(0x04)
	int32_t TexturePageMaxHeight; // 0x7c(0x04)
	int32_t XPadding; // 0x80(0x04)
	int32_t YPadding; // 0x84(0x04)
	int32_t ExtendBoxTop; // 0x88(0x04)
	int32_t ExtendBoxBottom; // 0x8c(0x04)
	int32_t ExtendBoxRight; // 0x90(0x04)
	int32_t ExtendBoxLeft; // 0x94(0x04)
	char bEnableLegacyMode : 1; // 0x98(0x01)
	char pad_98_1 : 7; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32_t Kerning; // 0x9c(0x04)
	char bUseDistanceFieldAlpha : 1; // 0xa0(0x01)
	char pad_A0_1 : 7; // 0xa0(0x01)
	char pad_A1[0x3]; // 0xa1(0x03)
	int32_t DistanceFieldScaleFactor; // 0xa4(0x04)
	float DistanceFieldScanRadiusScale; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct Engine.BaseAttenuationSettings
// Size: 0xc0 (Inherited: 0x00)
struct FBaseAttenuationSettings {
	char pad_0[0x8]; // 0x00(0x08)
	enum class EAttenuationDistanceModel DistanceAlgorithm; // 0x08(0x01)
	enum class EAttenuationShape AttenuationShape; // 0x09(0x01)
	enum class ENaturalSoundFalloffMode FalloffMode; // 0x0a(0x01)
	char pad_B[0x1]; // 0x0b(0x01)
	float dBAttenuationAtMax; // 0x0c(0x04)
	struct FVector AttenuationShapeExtents; // 0x10(0x18)
	float ConeOffset; // 0x28(0x04)
	float FalloffDistance; // 0x2c(0x04)
	float ConeSphereRadius; // 0x30(0x04)
	float ConeSphereFalloffDistance; // 0x34(0x04)
	struct FRuntimeFloatCurve CustomAttenuationCurve; // 0x38(0x88)
};

// ScriptStruct Engine.ForceFeedbackAttenuationSettings
// Size: 0xc0 (Inherited: 0xc0)
struct FForceFeedbackAttenuationSettings : FBaseAttenuationSettings {
};

// ScriptStruct Engine.ForceFeedbackParameters
// Size: 0x10 (Inherited: 0x00)
struct FForceFeedbackParameters {
	struct FName Tag; // 0x00(0x0c)
	bool bLooping; // 0x0c(0x01)
	bool bIgnoreTimeDilation; // 0x0d(0x01)
	bool bPlayWhilePaused; // 0x0e(0x01)
	char pad_F[0x1]; // 0x0f(0x01)
};

// ScriptStruct Engine.GameCycleTime
// Size: 0x10 (Inherited: 0x00)
struct FGameCycleTime {
	uint64_t Elapsed; // 0x00(0x08)
	uint64_t Timestamp; // 0x08(0x08)
};

// ScriptStruct Engine.GameCycleTimer
// Size: 0x20 (Inherited: 0x00)
struct FGameCycleTimer {
	uint32_t TimingsNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FGameCycleTime> Timings; // 0x08(0x10)
	int32_t NextWriteIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.PredictProjectilePathParams
// Size: 0x78 (Inherited: 0x00)
struct FPredictProjectilePathParams {
	struct FVector StartLocation; // 0x00(0x18)
	struct FVector LaunchVelocity; // 0x18(0x18)
	bool bTraceWithCollision; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float ProjectileRadius; // 0x34(0x04)
	float MaxSimTime; // 0x38(0x04)
	bool bTraceWithChannel; // 0x3c(0x01)
	enum class ECollisionChannel TraceChannel; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
	struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x40(0x10)
	struct TArray<struct AActor*> ActorsToIgnore; // 0x50(0x10)
	float SimFrequency; // 0x60(0x04)
	float OverrideGravityZ; // 0x64(0x04)
	enum class EDrawDebugTrace DrawDebugType; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float DrawDebugTime; // 0x6c(0x04)
	bool bTraceComplex; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct Engine.PredictProjectilePathPointData
// Size: 0x38 (Inherited: 0x00)
struct FPredictProjectilePathPointData {
	struct FVector Location; // 0x00(0x18)
	struct FVector Velocity; // 0x18(0x18)
	float Time; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Engine.PredictProjectilePathResult
// Size: 0x138 (Inherited: 0x00)
struct FPredictProjectilePathResult {
	struct TArray<struct FPredictProjectilePathPointData> PathData; // 0x00(0x10)
	struct FPredictProjectilePathPointData LastTraceDestination; // 0x10(0x38)
	struct FHitResult HitResult; // 0x48(0xf0)
};

// ScriptStruct Engine.ActiveHapticFeedbackEffect
// Size: 0x48 (Inherited: 0x00)
struct FActiveHapticFeedbackEffect {
	struct UHapticFeedbackEffect_Base* HapticEffect; // 0x00(0x08)
	char pad_8[0x40]; // 0x08(0x40)
};

// ScriptStruct Engine.HapticFeedbackDetails_Curve
// Size: 0x110 (Inherited: 0x00)
struct FHapticFeedbackDetails_Curve {
	struct FRuntimeFloatCurve Frequency; // 0x00(0x88)
	struct FRuntimeFloatCurve Amplitude; // 0x88(0x88)
};

// ScriptStruct Engine.ClusterNode_DEPRECATED
// Size: 0x28 (Inherited: 0x00)
struct FClusterNode_DEPRECATED {
	struct FVector3f BoundMin; // 0x00(0x0c)
	int32_t FirstChild; // 0x0c(0x04)
	struct FVector3f BoundMax; // 0x10(0x0c)
	int32_t LastChild; // 0x1c(0x04)
	int32_t FirstInstance; // 0x20(0x04)
	int32_t LastInstance; // 0x24(0x04)
};

// ScriptStruct Engine.ClusterNode
// Size: 0x40 (Inherited: 0x00)
struct FClusterNode {
	struct FVector3f BoundMin; // 0x00(0x0c)
	int32_t FirstChild; // 0x0c(0x04)
	struct FVector3f BoundMax; // 0x10(0x0c)
	int32_t LastChild; // 0x1c(0x04)
	int32_t FirstInstance; // 0x20(0x04)
	int32_t LastInstance; // 0x24(0x04)
	struct FVector3f MinInstanceScale; // 0x28(0x0c)
	struct FVector3f MaxInstanceScale; // 0x34(0x0c)
};

// ScriptStruct Engine.HLODSubActor
// Size: 0x01 (Inherited: 0x00)
struct FHLODSubActor {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.BoneAnimationTrack
// Size: 0x40 (Inherited: 0x00)
struct FBoneAnimationTrack {
	struct FRawAnimSequenceTrack InternalTrackData; // 0x00(0x30)
	int32_t BoneTreeIndex; // 0x30(0x04)
	struct FName Name; // 0x34(0x0c)
};

// ScriptStruct Engine.AnimationCurveData
// Size: 0x20 (Inherited: 0x00)
struct FAnimationCurveData {
	struct TArray<struct FFloatCurve> FloatCurves; // 0x00(0x10)
	struct TArray<struct FTransformCurve> TransformCurves; // 0x10(0x10)
};

// ScriptStruct Engine.AnimatedBoneAttribute
// Size: 0x108 (Inherited: 0x00)
struct FAnimatedBoneAttribute {
	struct FAnimationAttributeIdentifier Identifier; // 0x00(0x50)
	struct FAttributeCurve Curve; // 0x50(0xb8)
};

// ScriptStruct Engine.AttributeCurve
// Size: 0xb8 (Inherited: 0x68)
struct FAttributeCurve : FIndexedCurve {
	struct TArray<struct FAttributeKey> Keys; // 0x68(0x10)
	struct FSoftObjectPath ScriptStructPath; // 0x78(0x28)
	struct UScriptStruct* ScriptStruct; // 0xa0(0x08)
	bool bShouldInterpolate; // 0xa8(0x01)
	char pad_A9[0xf]; // 0xa9(0x0f)
};

// ScriptStruct Engine.AttributeKey
// Size: 0x18 (Inherited: 0x00)
struct FAttributeKey {
	float Time; // 0x00(0x04)
	char pad_4[0x14]; // 0x04(0x14)
};

// ScriptStruct Engine.InputDevicePropertyHandle
// Size: 0x04 (Inherited: 0x00)
struct FInputDevicePropertyHandle {
	uint32_t InternalId; // 0x00(0x04)
};

// ScriptStruct Engine.InstancedStaticMeshInstanceData
// Size: 0x80 (Inherited: 0x00)
struct FInstancedStaticMeshInstanceData {
	struct FMatrix Transform; // 0x00(0x80)
};

// ScriptStruct Engine.InstancedStaticMeshMappingInfo
// Size: 0x08 (Inherited: 0x00)
struct FInstancedStaticMeshMappingInfo {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.InstancedStaticMeshRandomSeed
// Size: 0x08 (Inherited: 0x00)
struct FInstancedStaticMeshRandomSeed {
	int32_t StartInstanceIndex; // 0x00(0x04)
	int32_t RandomSeed; // 0x04(0x04)
};

// ScriptStruct Engine.InstancedStaticMeshLightMapInstanceData
// Size: 0x70 (Inherited: 0x00)
struct FInstancedStaticMeshLightMapInstanceData {
	struct FTransform Transform; // 0x00(0x60)
	struct TArray<struct FGuid> MapBuildDataIds; // 0x60(0x10)
};

// ScriptStruct Engine.InstancedStaticMeshComponentInstanceData
// Size: 0x190 (Inherited: 0xb8)
struct FInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData {
	struct UStaticMesh* StaticMesh; // 0xb8(0x08)
	struct FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xc0(0x70)
	struct TArray<struct FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x130(0x10)
	struct TArray<float> PerInstanceSMCustomData; // 0x140(0x10)
	char pad_150[0x20]; // 0x150(0x20)
	int32_t InstancingRandomSeed; // 0x170(0x04)
	char pad_174[0x4]; // 0x174(0x04)
	struct TArray<struct FInstancedStaticMeshRandomSeed> AdditionalRandomSeeds; // 0x178(0x10)
	bool bHasPerInstanceHitProxies; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
};

// ScriptStruct Engine.UniqueNetIdReplNetSerializerStringStruct
// Size: 0x10 (Inherited: 0x00)
struct FUniqueNetIdReplNetSerializerStringStruct {
	struct FString String; // 0x00(0x10)
};

// ScriptStruct Engine.UniqueNetIdReplNetSerializerNameStruct
// Size: 0x0c (Inherited: 0x00)
struct FUniqueNetIdReplNetSerializerNameStruct {
	struct FName Name; // 0x00(0x0c)
};

// ScriptStruct Engine.ISMClientHandle
// Size: 0x14 (Inherited: 0x00)
struct FISMClientHandle {
	int32_t Index; // 0x00(0x04)
	struct FGuid Guid; // 0x04(0x10)
};

// ScriptStruct Engine.ISMClientInstanceManagerData
// Size: 0x10 (Inherited: 0x00)
struct FISMClientInstanceManagerData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.NewLevelInstanceParams
// Size: 0x48 (Inherited: 0x00)
struct FNewLevelInstanceParams {
	enum class ELevelInstanceCreationType Type; // 0x00(0x01)
	enum class ELevelInstancePivotType PivotType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct AActor* PivotActor; // 0x08(0x08)
	bool bAlwaysShowDialog; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UWorld* TemplateWorld; // 0x18(0x08)
	struct FString LevelPackageName; // 0x20(0x10)
	bool bPromptForSave; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct AActor* LevelInstanceClass; // 0x38(0x08)
	bool bEnableStreaming; // 0x40(0x01)
	bool bExternalActors; // 0x41(0x01)
	bool bForceExternalActors; // 0x42(0x01)
	bool bHideCreationType; // 0x43(0x01)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct Engine.ExpressionExecOutput
// Size: 0x08 (Inherited: 0x00)
struct FExpressionExecOutput {
	struct UMaterialExpression* Expression; // 0x00(0x08)
};

// ScriptStruct Engine.MaterialExpressionCollection
// Size: 0x30 (Inherited: 0x00)
struct FMaterialExpressionCollection {
	struct TArray<struct UMaterialExpression*> Expressions; // 0x00(0x10)
	struct TArray<struct UMaterialExpressionComment*> EditorComments; // 0x10(0x10)
	struct UMaterialExpressionExecBegin* ExpressionExecBegin; // 0x20(0x08)
	struct UMaterialExpressionExecEnd* ExpressionExecEnd; // 0x28(0x08)
};

// ScriptStruct Engine.CustomInput
// Size: 0x40 (Inherited: 0x00)
struct FCustomInput {
	struct FName InputName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FExpressionInput Input; // 0x10(0x30)
};

// ScriptStruct Engine.CustomOutput
// Size: 0x10 (Inherited: 0x00)
struct FCustomOutput {
	struct FName OutputName; // 0x00(0x0c)
	enum class ECustomMaterialOutputType OutputType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.CustomDefine
// Size: 0x20 (Inherited: 0x00)
struct FCustomDefine {
	struct FString DefineName; // 0x00(0x10)
	struct FString DefineValue; // 0x10(0x10)
};

// ScriptStruct Engine.DataDrivenShaderPlatformInfoInput
// Size: 0x10 (Inherited: 0x00)
struct FDataDrivenShaderPlatformInfoInput {
	struct FName InputName; // 0x00(0x0c)
	enum class EDataDrivenShaderPlatformInfoCondition PropertyCondition; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.FunctionExpressionInput
// Size: 0x48 (Inherited: 0x00)
struct FFunctionExpressionInput {
	struct UMaterialExpressionFunctionInput* ExpressionInput; // 0x00(0x08)
	struct FGuid ExpressionInputId; // 0x08(0x10)
	struct FExpressionInput Input; // 0x18(0x30)
};

// ScriptStruct Engine.FunctionExpressionOutput
// Size: 0x38 (Inherited: 0x00)
struct FFunctionExpressionOutput {
	struct UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x00(0x08)
	struct FGuid ExpressionOutputId; // 0x08(0x10)
	struct FExpressionOutput output; // 0x18(0x20)
};

// ScriptStruct Engine.CompositeReroute
// Size: 0x18 (Inherited: 0x00)
struct FCompositeReroute {
	struct FName Name; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UMaterialExpressionReroute* Expression; // 0x10(0x08)
};

// ScriptStruct Engine.SwitchCustomInput
// Size: 0x40 (Inherited: 0x00)
struct FSwitchCustomInput {
	struct FName InputName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FExpressionInput Input; // 0x10(0x30)
};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// Size: 0x48 (Inherited: 0x00)
struct FMaterialInstanceBasePropertyOverrides {
	char bOverride_OpacityMaskClipValue : 1; // 0x00(0x01)
	char bOverride_BlendMode : 1; // 0x00(0x01)
	char bOverride_ShadingModel : 1; // 0x00(0x01)
	char bOverride_DitheredLODTransition : 1; // 0x00(0x01)
	char bOverride_CastDynamicShadowAsMasked : 1; // 0x00(0x01)
	char bOverride_TwoSided : 1; // 0x00(0x01)
	char bOverride_bIsThinSurface : 1; // 0x00(0x01)
	char bOverride_OutputTranslucentVelocity : 1; // 0x00(0x01)
	char bOverride_DisplacementScaling : 1; // 0x01(0x01)
	char bOverride_MaxWorldPositionOffsetDisplacement : 1; // 0x01(0x01)
	char pad_1_2 : 6; // 0x01(0x01)
	bool bOverride_IndirectLightingContributionValue; // 0x02(0x01)
	bool bOverride_LightingSource; // 0x03(0x01)
	bool bOverride_LightingSourceColor; // 0x04(0x01)
	bool bOverride_LightingSourceDirectionality; // 0x05(0x01)
	bool bOverride_SpecularModel; // 0x06(0x01)
	bool bOverride_CubemapMode; // 0x07(0x01)
	bool bOverride_CubemapSource; // 0x08(0x01)
	bool bOverride_ForceDepthPrepass; // 0x09(0x01)
	bool bOverride_FloorOnlyDecal; // 0x0a(0x01)
	bool bOverride_WorldDecal; // 0x0b(0x01)
	bool bOverride_Fresnel; // 0x0c(0x01)
	bool bOverride_DecalDiffuseLighting; // 0x0d(0x01)
	bool bOverride_VertexFog; // 0x0e(0x01)
	bool bOverride_SortPriorityOffset; // 0x0f(0x01)
	bool bOverride_TranslucencyWritingDepth; // 0x10(0x01)
	bool bOverride_TranslucencyDepthMode; // 0x11(0x01)
	bool bOverride_DitherOpacityMask; // 0x12(0x01)
	bool bOverride_AresEnvironmentType; // 0x13(0x01)
	bool bOverride_UseAres3PClipping; // 0x14(0x01)
	bool bOverride_UseAresProjectionMatrixIndex; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float IndirectLightingContributionValue; // 0x18(0x04)
	enum class EMaterialLightingSourceColor LightingSourceColor; // 0x1c(0x01)
	enum class EMaterialLightingSourceDirectionality LightingSourceDirectionality; // 0x1d(0x01)
	enum class EMaterialSpecularModel SpecularModel; // 0x1e(0x01)
	enum class EMaterialCubemapMode CubemapMode; // 0x1f(0x01)
	enum class EMaterialCubemapSource CubemapSource; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t SortPriorityOffset; // 0x24(0x04)
	bool bTranslucencyWritingDepth; // 0x28(0x01)
	enum class EAresTranslucencyDepthMode TranslucencyDepthMode; // 0x29(0x01)
	bool bForceDepthPrepass; // 0x2a(0x01)
	bool bFloorOnlyDecal; // 0x2b(0x01)
	bool bWorldDecal; // 0x2c(0x01)
	bool bFresnel; // 0x2d(0x01)
	bool bDecalDiffuseLighting; // 0x2e(0x01)
	bool bVertexFog; // 0x2f(0x01)
	bool bDitherOpacityMask; // 0x30(0x01)
	enum class EMaterialAresEnvironmentType AresEnvironmentType; // 0x31(0x01)
	bool bUseAres3PClipping; // 0x32(0x01)
	bool bUseAresProjectionMatrixIndex; // 0x33(0x01)
	char TwoSided : 1; // 0x34(0x01)
	char bIsThinSurface : 1; // 0x34(0x01)
	char DitheredLODTransition : 1; // 0x34(0x01)
	char bCastDynamicShadowAsMasked : 1; // 0x34(0x01)
	char bOutputTranslucentVelocity : 1; // 0x34(0x01)
	char pad_34_5 : 3; // 0x34(0x01)
	enum class EBlendMode BlendMode; // 0x35(0x01)
	enum class EMaterialShadingModel ShadingModel; // 0x36(0x01)
	char pad_37[0x1]; // 0x37(0x01)
	float OpacityMaskClipValue; // 0x38(0x04)
	struct FDisplacementScaling DisplacementScaling; // 0x3c(0x08)
	float MaxWorldPositionOffsetDisplacement; // 0x44(0x04)
};

// ScriptStruct Engine.LightmassMaterialInterfaceSettings
// Size: 0x24 (Inherited: 0x00)
struct FLightmassMaterialInterfaceSettings {
	float EmissiveBoost; // 0x00(0x04)
	float DiffuseBoost; // 0x04(0x04)
	float ExportResolutionScale; // 0x08(0x04)
	char bCastShadowAsMasked : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	char bCastShadowAsTranslucent : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float MaskedTranslucentOpacity; // 0x14(0x04)
	char bOverrideCastShadowAsMasked : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	char bOverrideCastShadowAsTranslucent : 1; // 0x1c(0x01)
	char bOverrideMaskedTranslucentOpacity : 1; // 0x1c(0x01)
	char pad_1C_2 : 6; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	char bOverrideEmissiveBoost : 1; // 0x20(0x01)
	char bOverrideDiffuseBoost : 1; // 0x20(0x01)
	char bOverrideExportResolutionScale : 1; // 0x20(0x01)
	char pad_20_3 : 5; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct Engine.MaterialTextureInfo
// Size: 0x14 (Inherited: 0x00)
struct FMaterialTextureInfo {
	float SamplingScale; // 0x00(0x04)
	int32_t UVChannelIndex; // 0x04(0x04)
	struct FName TextureName; // 0x08(0x0c)
};

// ScriptStruct Engine.MaterialLayersFunctionsEditorOnlyData
// Size: 0x70 (Inherited: 0x00)
struct FMaterialLayersFunctionsEditorOnlyData {
	struct TArray<bool> LayerStates; // 0x00(0x10)
	struct TArray<struct FText> LayerNames; // 0x10(0x10)
	struct TArray<bool> RestrictToLayerRelatives; // 0x20(0x10)
	struct TArray<bool> RestrictToBlendRelatives; // 0x30(0x10)
	struct TArray<struct FGuid> LayerGuids; // 0x40(0x10)
	struct TArray<enum class EMaterialLayerLinkState> LayerLinkStates; // 0x50(0x10)
	struct TArray<struct FGuid> DeletedParentLayerGuids; // 0x60(0x10)
};

// ScriptStruct Engine.MaterialLayersFunctionsRuntimeData
// Size: 0x20 (Inherited: 0x00)
struct FMaterialLayersFunctionsRuntimeData {
	struct TArray<struct UMaterialFunctionInterface*> Layers; // 0x00(0x10)
	struct TArray<struct UMaterialFunctionInterface*> Blends; // 0x10(0x10)
};

// ScriptStruct Engine.MaterialLayersFunctions
// Size: 0x100 (Inherited: 0x20)
struct FMaterialLayersFunctions : FMaterialLayersFunctionsRuntimeData {
	struct FMaterialLayersFunctionsEditorOnlyData EditorOnly; // 0x20(0x70)
	struct TArray<bool> LayerStates; // 0x90(0x10)
	struct TArray<struct FText> LayerNames; // 0xa0(0x10)
	struct TArray<bool> RestrictToLayerRelatives; // 0xb0(0x10)
	struct TArray<bool> RestrictToBlendRelatives; // 0xc0(0x10)
	struct TArray<struct FGuid> LayerGuids; // 0xd0(0x10)
	struct TArray<enum class EMaterialLayerLinkState> LayerLinkStates; // 0xe0(0x10)
	struct TArray<struct FGuid> DeletedParentLayerGuids; // 0xf0(0x10)
};

// ScriptStruct Engine.MaterialProxySettings
// Size: 0xa0 (Inherited: 0x00)
struct FMaterialProxySettings {
	enum class ETextureSizingType TextureSizingType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FIntPoint TextureSize; // 0x04(0x08)
	float TargetTexelDensityPerMeter; // 0x0c(0x04)
	float MeshMaxScreenSizePercent; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	double MeshMinDrawDistance; // 0x18(0x08)
	float GutterSpace; // 0x20(0x04)
	float MetallicConstant; // 0x24(0x04)
	float RoughnessConstant; // 0x28(0x04)
	float AnisotropyConstant; // 0x2c(0x04)
	float SpecularConstant; // 0x30(0x04)
	float OpacityConstant; // 0x34(0x04)
	float OpacityMaskConstant; // 0x38(0x04)
	float AmbientOcclusionConstant; // 0x3c(0x04)
	enum class EMaterialMergeType MaterialMergeType; // 0x40(0x01)
	enum class EBlendMode BlendMode; // 0x41(0x01)
	char bAllowTwoSidedMaterial : 1; // 0x42(0x01)
	char bNormalMap : 1; // 0x42(0x01)
	char bTangentMap : 1; // 0x42(0x01)
	char bMetallicMap : 1; // 0x42(0x01)
	char bRoughnessMap : 1; // 0x42(0x01)
	char bAnisotropyMap : 1; // 0x42(0x01)
	char bSpecularMap : 1; // 0x42(0x01)
	char bEmissiveMap : 1; // 0x42(0x01)
	char bOpacityMap : 1; // 0x43(0x01)
	char bOpacityMaskMap : 1; // 0x43(0x01)
	char bAmbientOcclusionMap : 1; // 0x43(0x01)
	char pad_43_3 : 5; // 0x43(0x01)
	struct FIntPoint DiffuseTextureSize; // 0x44(0x08)
	struct FIntPoint NormalTextureSize; // 0x4c(0x08)
	struct FIntPoint TangentTextureSize; // 0x54(0x08)
	struct FIntPoint MetallicTextureSize; // 0x5c(0x08)
	struct FIntPoint RoughnessTextureSize; // 0x64(0x08)
	struct FIntPoint AnisotropyTextureSize; // 0x6c(0x08)
	struct FIntPoint SpecularTextureSize; // 0x74(0x08)
	struct FIntPoint EmissiveTextureSize; // 0x7c(0x08)
	struct FIntPoint OpacityTextureSize; // 0x84(0x08)
	struct FIntPoint OpacityMaskTextureSize; // 0x8c(0x08)
	struct FIntPoint AmbientOcclusionTextureSize; // 0x94(0x08)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct Engine.MaterialParameterInfo
// Size: 0x14 (Inherited: 0x00)
struct FMaterialParameterInfo {
	struct FName Name; // 0x00(0x0c)
	enum class EMaterialParameterAssociation Association; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t Index; // 0x10(0x04)
};

// ScriptStruct Engine.ParameterChannelNames
// Size: 0x60 (Inherited: 0x00)
struct FParameterChannelNames {
	struct FText R; // 0x00(0x18)
	struct FText G; // 0x18(0x18)
	struct FText B; // 0x30(0x18)
	struct FText A; // 0x48(0x18)
};

// ScriptStruct Engine.StaticComponentMaskValue
// Size: 0x04 (Inherited: 0x00)
struct FStaticComponentMaskValue {
	bool R; // 0x00(0x01)
	bool G; // 0x01(0x01)
	bool B; // 0x02(0x01)
	bool A; // 0x03(0x01)
};

// ScriptStruct Engine.StaticMeshBudgetInfo
// Size: 0x18 (Inherited: 0x00)
struct FStaticMeshBudgetInfo {
	struct FName LodGroupName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	double MinimumExtent; // 0x10(0x08)
};

// ScriptStruct Engine.ParticleDecalComponentPool
// Size: 0x38 (Inherited: 0x00)
struct FParticleDecalComponentPool {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct UMeshParticleDecalComponent*> FreeDecalsArray; // 0x08(0x10)
	struct UMaterialInterface* MaterialTemplate; // 0x18(0x08)
	char pad_20[0x18]; // 0x20(0x18)
};

// ScriptStruct Engine.ParticleDecalManager
// Size: 0x60 (Inherited: 0x00)
struct FParticleDecalManager {
	char pad_0[0x8]; // 0x00(0x08)
	struct TMap<struct UMaterialInterface*, struct FParticleDecalComponentPool> MaterialToDecalPoolMap; // 0x08(0x50)
	struct UWorld* ManagerWorld; // 0x58(0x08)
};

// ScriptStruct Engine.MeshUVChannelInfo
// Size: 0x14 (Inherited: 0x00)
struct FMeshUVChannelInfo {
	bool bInitialized; // 0x00(0x01)
	bool bOverrideDensities; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float LocalUVDensities[0x4]; // 0x04(0x10)
};

// ScriptStruct Engine.PurchaseInfo
// Size: 0x40 (Inherited: 0x00)
struct FPurchaseInfo {
	struct FString Identifier; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	struct FString DisplayDescription; // 0x20(0x10)
	struct FString DisplayPrice; // 0x30(0x10)
};

// ScriptStruct Engine.NavAgentSelector
// Size: 0x04 (Inherited: 0x00)
struct FNavAgentSelector {
	char bSupportsAgent0 : 1; // 0x00(0x01)
	char bSupportsAgent1 : 1; // 0x00(0x01)
	char bSupportsAgent2 : 1; // 0x00(0x01)
	char bSupportsAgent3 : 1; // 0x00(0x01)
	char bSupportsAgent4 : 1; // 0x00(0x01)
	char bSupportsAgent5 : 1; // 0x00(0x01)
	char bSupportsAgent6 : 1; // 0x00(0x01)
	char bSupportsAgent7 : 1; // 0x00(0x01)
	char bSupportsAgent8 : 1; // 0x01(0x01)
	char bSupportsAgent9 : 1; // 0x01(0x01)
	char bSupportsAgent10 : 1; // 0x01(0x01)
	char bSupportsAgent11 : 1; // 0x01(0x01)
	char bSupportsAgent12 : 1; // 0x01(0x01)
	char bSupportsAgent13 : 1; // 0x01(0x01)
	char bSupportsAgent14 : 1; // 0x01(0x01)
	char bSupportsAgent15 : 1; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
};

// ScriptStruct Engine.NavAvoidanceMask
// Size: 0x04 (Inherited: 0x00)
struct FNavAvoidanceMask {
	char bGroup0 : 1; // 0x00(0x01)
	char bGroup1 : 1; // 0x00(0x01)
	char bGroup2 : 1; // 0x00(0x01)
	char bGroup3 : 1; // 0x00(0x01)
	char bGroup4 : 1; // 0x00(0x01)
	char bGroup5 : 1; // 0x00(0x01)
	char bGroup6 : 1; // 0x00(0x01)
	char bGroup7 : 1; // 0x00(0x01)
	char bGroup8 : 1; // 0x01(0x01)
	char bGroup9 : 1; // 0x01(0x01)
	char bGroup10 : 1; // 0x01(0x01)
	char bGroup11 : 1; // 0x01(0x01)
	char bGroup12 : 1; // 0x01(0x01)
	char bGroup13 : 1; // 0x01(0x01)
	char bGroup14 : 1; // 0x01(0x01)
	char bGroup15 : 1; // 0x01(0x01)
	char bGroup16 : 1; // 0x02(0x01)
	char bGroup17 : 1; // 0x02(0x01)
	char bGroup18 : 1; // 0x02(0x01)
	char bGroup19 : 1; // 0x02(0x01)
	char bGroup20 : 1; // 0x02(0x01)
	char bGroup21 : 1; // 0x02(0x01)
	char bGroup22 : 1; // 0x02(0x01)
	char bGroup23 : 1; // 0x02(0x01)
	char bGroup24 : 1; // 0x03(0x01)
	char bGroup25 : 1; // 0x03(0x01)
	char bGroup26 : 1; // 0x03(0x01)
	char bGroup27 : 1; // 0x03(0x01)
	char bGroup28 : 1; // 0x03(0x01)
	char bGroup29 : 1; // 0x03(0x01)
	char bGroup30 : 1; // 0x03(0x01)
	char bGroup31 : 1; // 0x03(0x01)
};

// ScriptStruct Engine.NavigationLinkBase
// Size: 0x40 (Inherited: 0x00)
struct FNavigationLinkBase {
	float LeftProjectHeight; // 0x00(0x04)
	float MaxFallDownLength; // 0x04(0x04)
	char pad_8[0x10]; // 0x08(0x10)
	float SnapRadius; // 0x18(0x04)
	float SnapHeight; // 0x1c(0x04)
	struct FNavAgentSelector SupportedAgents; // 0x20(0x04)
	char bSupportsAgent0 : 1; // 0x24(0x01)
	char bSupportsAgent1 : 1; // 0x24(0x01)
	char bSupportsAgent2 : 1; // 0x24(0x01)
	char bSupportsAgent3 : 1; // 0x24(0x01)
	char bSupportsAgent4 : 1; // 0x24(0x01)
	char bSupportsAgent5 : 1; // 0x24(0x01)
	char bSupportsAgent6 : 1; // 0x24(0x01)
	char bSupportsAgent7 : 1; // 0x24(0x01)
	char bSupportsAgent8 : 1; // 0x25(0x01)
	char bSupportsAgent9 : 1; // 0x25(0x01)
	char bSupportsAgent10 : 1; // 0x25(0x01)
	char bSupportsAgent11 : 1; // 0x25(0x01)
	char bSupportsAgent12 : 1; // 0x25(0x01)
	char bSupportsAgent13 : 1; // 0x25(0x01)
	char bSupportsAgent14 : 1; // 0x25(0x01)
	char bSupportsAgent15 : 1; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	enum class ENavLinkDirection Direction; // 0x28(0x01)
	char bUseSnapHeight : 1; // 0x29(0x01)
	char bSnapToCheapestArea : 1; // 0x29(0x01)
	char bCustomFlag0 : 1; // 0x29(0x01)
	char bCustomFlag1 : 1; // 0x29(0x01)
	char bCustomFlag2 : 1; // 0x29(0x01)
	char bCustomFlag3 : 1; // 0x29(0x01)
	char bCustomFlag4 : 1; // 0x29(0x01)
	char bCustomFlag5 : 1; // 0x29(0x01)
	char bCustomFlag6 : 1; // 0x2a(0x01)
	char bCustomFlag7 : 1; // 0x2a(0x01)
	char pad_2A_2 : 6; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
	struct UNavAreaBase* AreaClass; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct Engine.NavigationLink
// Size: 0x70 (Inherited: 0x40)
struct FNavigationLink : FNavigationLinkBase {
	struct FVector Left; // 0x40(0x18)
	struct FVector Right; // 0x58(0x18)
};

// ScriptStruct Engine.NavigationSegmentLink
// Size: 0xa0 (Inherited: 0x40)
struct FNavigationSegmentLink : FNavigationLinkBase {
	struct FVector LeftStart; // 0x40(0x18)
	struct FVector LeftEnd; // 0x58(0x18)
	struct FVector RightStart; // 0x70(0x18)
	struct FVector RightEnd; // 0x88(0x18)
};

// ScriptStruct Engine.OverlapResult
// Size: 0x28 (Inherited: 0x00)
struct FOverlapResult {
	struct FActorInstanceHandle OverlapObjectHandle; // 0x00(0x18)
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // 0x18(0x08)
	char pad_20[0x4]; // 0x20(0x04)
	char bBlockingHit : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Engine.ParticleBurst
// Size: 0x0c (Inherited: 0x00)
struct FParticleBurst {
	int32_t Count; // 0x00(0x04)
	int32_t CountLow; // 0x04(0x04)
	float Time; // 0x08(0x04)
};

// ScriptStruct Engine.ParticleCurvePair
// Size: 0x18 (Inherited: 0x00)
struct FParticleCurvePair {
	struct FString CurveName; // 0x00(0x10)
	struct UObject* CurveObject; // 0x10(0x08)
};

// ScriptStruct Engine.ParticleRandomSeedInfo
// Size: 0x20 (Inherited: 0x00)
struct FParticleRandomSeedInfo {
	struct FName ParameterName; // 0x00(0x0c)
	char bGetSeedFromInstance : 1; // 0x0c(0x01)
	char bInstanceSeedIsIndex : 1; // 0x0c(0x01)
	char bResetSeedOnEmitterLooping : 1; // 0x0c(0x01)
	char bRandomlySelectSeedArray : 1; // 0x0c(0x01)
	char pad_C_4 : 4; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<int32_t> RandomSeeds; // 0x10(0x10)
};

// ScriptStruct Engine.BeamModifierOptions
// Size: 0x04 (Inherited: 0x00)
struct FBeamModifierOptions {
	char bModify : 1; // 0x00(0x01)
	char bScale : 1; // 0x00(0x01)
	char bLock : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.ParticleEvent_GenerateInfo
// Size: 0x30 (Inherited: 0x00)
struct FParticleEvent_GenerateInfo {
	enum class EParticleEventType Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Frequency; // 0x04(0x04)
	int32_t ParticleFrequency; // 0x08(0x04)
	char FirstTimeOnly : 1; // 0x0c(0x01)
	char LastTimeOnly : 1; // 0x0c(0x01)
	char UseReflectedImpactVector : 1; // 0x0c(0x01)
	char bUseOrbitOffset : 1; // 0x0c(0x01)
	char pad_C_4 : 4; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FName CustomName; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame; // 0x20(0x10)
};

// ScriptStruct Engine.LocationBoneSocketInfo
// Size: 0x28 (Inherited: 0x00)
struct FLocationBoneSocketInfo {
	struct FName BoneSocketName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector Offset; // 0x10(0x18)
};

// ScriptStruct Engine.OrbitOptions
// Size: 0x04 (Inherited: 0x00)
struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x00(0x01)
	char bProcessDuringUpdate : 1; // 0x00(0x01)
	char bUseEmitterTime : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.EmitterDynamicParameter
// Size: 0x48 (Inherited: 0x00)
struct FEmitterDynamicParameter {
	struct FName ParamName; // 0x00(0x0c)
	char bUseEmitterTime : 1; // 0x0c(0x01)
	char bSpawnTimeOnly : 1; // 0x0c(0x01)
	char pad_C_2 : 6; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	enum class EEmitterDynamicParameterValue ValueMethod; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	char bScaleVelocityByParamValue : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FRawDistributionFloat ParamValue; // 0x18(0x30)
};

// ScriptStruct Engine.BeamTargetData
// Size: 0x10 (Inherited: 0x00)
struct FBeamTargetData {
	struct FName TargetName; // 0x00(0x0c)
	float TargetPercentage; // 0x0c(0x04)
};

// ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
// Size: 0xd0 (Inherited: 0x00)
struct FGPUSpriteLocalVectorFieldInfo {
	struct UVectorField* Field; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform Transform; // 0x10(0x60)
	struct FRotator MinInitialRotation; // 0x70(0x18)
	struct FRotator MaxInitialRotation; // 0x88(0x18)
	struct FRotator RotationRate; // 0xa0(0x18)
	float Intensity; // 0xb8(0x04)
	float Tightness; // 0xbc(0x04)
	char bIgnoreComponentTransform : 1; // 0xc0(0x01)
	char bTileX : 1; // 0xc0(0x01)
	char bTileY : 1; // 0xc0(0x01)
	char bTileZ : 1; // 0xc0(0x01)
	char bUseFixDT : 1; // 0xc0(0x01)
	char pad_C0_5 : 3; // 0xc0(0x01)
	char pad_C1[0xf]; // 0xc1(0x0f)
};

// ScriptStruct Engine.GPUSpriteEmitterInfo
// Size: 0x350 (Inherited: 0x00)
struct FGPUSpriteEmitterInfo {
	struct UParticleModuleRequired* RequiredModule; // 0x00(0x08)
	struct UParticleModuleSpawn* SpawnModule; // 0x08(0x08)
	struct UParticleModuleSpawnPerUnit* SpawnPerUnitModule; // 0x10(0x08)
	struct TArray<struct UParticleModule*> SpawnModules; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct FGPUSpriteLocalVectorFieldInfo LocalVectorField; // 0x30(0xd0)
	struct FFloatDistribution VectorFieldScale; // 0x100(0x20)
	struct FFloatDistribution DragCoefficient; // 0x120(0x20)
	struct FFloatDistribution PointAttractorStrength; // 0x140(0x20)
	struct FFloatDistribution Resilience; // 0x160(0x20)
	struct FVector ConstantAcceleration; // 0x180(0x18)
	struct FVector PointAttractorPosition; // 0x198(0x18)
	float PointAttractorRadiusSq; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct FVector OrbitOffsetBase; // 0x1b8(0x18)
	struct FVector OrbitOffsetRange; // 0x1d0(0x18)
	struct FVector2D InvMaxSize; // 0x1e8(0x10)
	float InvRotationRateScale; // 0x1f8(0x04)
	float MaxLifetime; // 0x1fc(0x04)
	int32_t MaxParticleCount; // 0x200(0x04)
	enum class EParticleScreenAlignment ScreenAlignment; // 0x204(0x01)
	enum class EParticleAxisLock LockAxisFlag; // 0x205(0x01)
	char pad_206[0x2]; // 0x206(0x02)
	char bEnableCollision : 1; // 0x208(0x01)
	char pad_208_1 : 7; // 0x208(0x01)
	char pad_209[0x3]; // 0x209(0x03)
	enum class EParticleCollisionMode CollisionMode; // 0x20c(0x01)
	char pad_20D[0x3]; // 0x20d(0x03)
	char bUseVelocityForMotionBlur : 1; // 0x210(0x01)
	char bRemoveHMDRoll : 1; // 0x210(0x01)
	char pad_210_2 : 6; // 0x210(0x01)
	char pad_211[0x3]; // 0x211(0x03)
	float MinFacingCameraBlendDistance; // 0x214(0x04)
	float MaxFacingCameraBlendDistance; // 0x218(0x04)
	char pad_21C[0x4]; // 0x21c(0x04)
	struct FRawDistributionVector DynamicColor; // 0x220(0x60)
	struct FRawDistributionFloat DynamicAlpha; // 0x280(0x30)
	struct FRawDistributionVector DynamicColorScale; // 0x2b0(0x60)
	struct FRawDistributionFloat DynamicAlphaScale; // 0x310(0x30)
	char pad_340[0x10]; // 0x340(0x10)
};

// ScriptStruct Engine.GPUSpriteResourceData
// Size: 0x240 (Inherited: 0x00)
struct FGPUSpriteResourceData {
	struct TArray<struct FColor> QuantizedColorSamples; // 0x00(0x10)
	struct TArray<struct FColor> QuantizedMiscSamples; // 0x10(0x10)
	struct TArray<struct FColor> QuantizedSimulationAttrSamples; // 0x20(0x10)
	struct FVector4 ColorScale; // 0x30(0x20)
	struct FVector4 ColorBias; // 0x50(0x20)
	struct FVector4 MiscScale; // 0x70(0x20)
	struct FVector4 MiscBias; // 0x90(0x20)
	struct FVector4 SimulationAttrCurveScale; // 0xb0(0x20)
	struct FVector4 SimulationAttrCurveBias; // 0xd0(0x20)
	struct FVector4 SubImageSize; // 0xf0(0x20)
	struct FVector4 SizeBySpeed; // 0x110(0x20)
	struct FVector ConstantAcceleration; // 0x130(0x18)
	struct FVector OrbitOffsetBase; // 0x148(0x18)
	struct FVector OrbitOffsetRange; // 0x160(0x18)
	struct FVector OrbitFrequencyBase; // 0x178(0x18)
	struct FVector OrbitFrequencyRange; // 0x190(0x18)
	struct FVector OrbitPhaseBase; // 0x1a8(0x18)
	struct FVector OrbitPhaseRange; // 0x1c0(0x18)
	float GlobalVectorFieldScale; // 0x1d8(0x04)
	float GlobalVectorFieldTightness; // 0x1dc(0x04)
	float PerParticleVectorFieldScale; // 0x1e0(0x04)
	float PerParticleVectorFieldBias; // 0x1e4(0x04)
	float DragCoefficientScale; // 0x1e8(0x04)
	float DragCoefficientBias; // 0x1ec(0x04)
	float ResilienceScale; // 0x1f0(0x04)
	float ResilienceBias; // 0x1f4(0x04)
	float CollisionRadiusScale; // 0x1f8(0x04)
	float CollisionRadiusBias; // 0x1fc(0x04)
	float CollisionTimeBias; // 0x200(0x04)
	float CollisionRandomSpread; // 0x204(0x04)
	float CollisionRandomDistribution; // 0x208(0x04)
	float OneMinusFriction; // 0x20c(0x04)
	float RotationRateScale; // 0x210(0x04)
	float CameraMotionBlurAmount; // 0x214(0x04)
	enum class EParticleScreenAlignment ScreenAlignment; // 0x218(0x01)
	enum class EParticleAxisLock LockAxisFlag; // 0x219(0x01)
	char pad_21A[0x6]; // 0x21a(0x06)
	struct FVector2D PivotOffset; // 0x220(0x10)
	char bUseVelocityForMotionBlur : 1; // 0x230(0x01)
	char bRemoveHMDRoll : 1; // 0x230(0x01)
	char pad_230_2 : 6; // 0x230(0x01)
	char pad_231[0x3]; // 0x231(0x03)
	float MinFacingCameraBlendDistance; // 0x234(0x04)
	float MaxFacingCameraBlendDistance; // 0x238(0x04)
	char pad_23C[0x4]; // 0x23c(0x04)
};

// ScriptStruct Engine.ParticleSystemLOD
// Size: 0x01 (Inherited: 0x00)
struct FParticleSystemLOD {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.LODSoloTrack
// Size: 0x10 (Inherited: 0x00)
struct FLODSoloTrack {
	struct TArray<char> SoloEnableSetting; // 0x00(0x10)
};

// ScriptStruct Engine.NamedEmitterMaterial
// Size: 0x18 (Inherited: 0x00)
struct FNamedEmitterMaterial {
	struct FName Name; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UMaterialInterface* Material; // 0x10(0x08)
};

// ScriptStruct Engine.ParticleSysParam
// Size: 0xe0 (Inherited: 0x00)
struct FParticleSysParam {
	struct FName Name; // 0x00(0x0c)
	enum class EParticleSysParamType ParamType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float Scalar; // 0x10(0x04)
	float Scalar_Low; // 0x14(0x04)
	struct FVector Vector; // 0x18(0x18)
	struct FVector Vector_Low; // 0x30(0x18)
	struct FColor Color; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct AActor* Actor; // 0x50(0x08)
	struct UMaterialInterface* Material; // 0x58(0x08)
	char pad_60[0x80]; // 0x60(0x80)
};

// ScriptStruct Engine.FXSystemSpawnParameters
// Size: 0x78 (Inherited: 0x00)
struct FFXSystemSpawnParameters {
	struct UObject* WorldContextObject; // 0x00(0x08)
	struct UFXSystemAsset* SystemTemplate; // 0x08(0x08)
	struct FVector Location; // 0x10(0x18)
	struct FRotator Rotation; // 0x28(0x18)
	struct FVector Scale; // 0x40(0x18)
	struct USceneComponent* AttachToComponent; // 0x58(0x08)
	struct FName AttachPointName; // 0x60(0x0c)
	enum class EAttachLocation LocationType; // 0x6c(0x01)
	bool bAutoDestroy; // 0x6d(0x01)
	bool bAutoActivate; // 0x6e(0x01)
	enum class EPSCPoolMethod PoolingMethod; // 0x6f(0x01)
	bool bPreCullCheck; // 0x70(0x01)
	bool bIsPlayerEffect; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
};

// ScriptStruct Engine.ParticleEmitterReplayFrame
// Size: 0x10 (Inherited: 0x00)
struct FParticleEmitterReplayFrame {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.ParticleSystemReplayFrame
// Size: 0x10 (Inherited: 0x00)
struct FParticleSystemReplayFrame {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.PieFixupStructWithSoftObjectPath
// Size: 0x58 (Inherited: 0x00)
struct FPieFixupStructWithSoftObjectPath {
	struct FSoftObjectPath Path; // 0x00(0x28)
	struct TSoftObjectPtr<AActor> TypedPtr; // 0x28(0x30)
};

// ScriptStruct Engine.DelegateArray
// Size: 0x10 (Inherited: 0x00)
struct FDelegateArray {
	struct TArray<struct FDelegate> Delegates; // 0x00(0x10)
};

// ScriptStruct Engine.CameraCacheEntry
// Size: 0x8f0 (Inherited: 0x00)
struct FCameraCacheEntry {
	float Timestamp; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FMinimalViewInfo POV; // 0x10(0x8e0)
};

// ScriptStruct Engine.TViewTarget
// Size: 0x900 (Inherited: 0x00)
struct FTViewTarget {
	struct AActor* Target; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FMinimalViewInfo POV; // 0x10(0x8e0)
	struct APlayerState* PlayerState; // 0x8f0(0x08)
	char pad_8F8[0x8]; // 0x8f8(0x08)
};

// ScriptStruct Engine.SpriteCategoryInfo
// Size: 0x40 (Inherited: 0x00)
struct FSpriteCategoryInfo {
	struct FName Category; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
	struct FText Description; // 0x28(0x18)
};

// ScriptStruct Engine.PrimitiveComponentInstanceData
// Size: 0x130 (Inherited: 0xb8)
struct FPrimitiveComponentInstanceData : FSceneComponentInstanceData {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FTransform ComponentTransform; // 0xc0(0x60)
	int32_t VisibilityId; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct UPrimitiveComponent* LODParent; // 0x128(0x08)
};

// ScriptStruct Engine.LevelNameAndTime
// Size: 0x18 (Inherited: 0x00)
struct FLevelNameAndTime {
	struct FString LevelName; // 0x00(0x10)
	uint32_t LevelChangeTimeInMS; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.ReverbSettings
// Size: 0x20 (Inherited: 0x00)
struct FReverbSettings {
	bool bApplyReverb; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UReverbEffect* ReverbEffect; // 0x08(0x08)
	struct USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10(0x08)
	float Volume; // 0x18(0x04)
	float FadeTime; // 0x1c(0x04)
};

// ScriptStruct Engine.CompressedRichCurve
// Size: 0x18 (Inherited: 0x00)
struct FCompressedRichCurve {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.ColorGradePerRangeSettings
// Size: 0xa0 (Inherited: 0x00)
struct FColorGradePerRangeSettings {
	struct FVector4 Saturation; // 0x00(0x20)
	struct FVector4 Contrast; // 0x20(0x20)
	struct FVector4 Gamma; // 0x40(0x20)
	struct FVector4 Gain; // 0x60(0x20)
	struct FVector4 Offset; // 0x80(0x20)
};

// ScriptStruct Engine.ColorGradingSettings
// Size: 0x290 (Inherited: 0x00)
struct FColorGradingSettings {
	struct FColorGradePerRangeSettings Global; // 0x00(0xa0)
	struct FColorGradePerRangeSettings Shadows; // 0xa0(0xa0)
	struct FColorGradePerRangeSettings Midtones; // 0x140(0xa0)
	struct FColorGradePerRangeSettings Highlights; // 0x1e0(0xa0)
	float ShadowsMax; // 0x280(0x04)
	float HighlightsMin; // 0x284(0x04)
	float HighlightsMax; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
};

// ScriptStruct Engine.FilmStockSettings
// Size: 0x14 (Inherited: 0x00)
struct FFilmStockSettings {
	float Slope; // 0x00(0x04)
	float Toe; // 0x04(0x04)
	float Shoulder; // 0x08(0x04)
	float BlackClip; // 0x0c(0x04)
	float WhiteClip; // 0x10(0x04)
};

// ScriptStruct Engine.GaussianSumBloomSettings
// Size: 0x84 (Inherited: 0x00)
struct FGaussianSumBloomSettings {
	float Intensity; // 0x00(0x04)
	float Threshold; // 0x04(0x04)
	float SizeScale; // 0x08(0x04)
	float Filter1Size; // 0x0c(0x04)
	float Filter2Size; // 0x10(0x04)
	float Filter3Size; // 0x14(0x04)
	float Filter4Size; // 0x18(0x04)
	float Filter5Size; // 0x1c(0x04)
	float Filter6Size; // 0x20(0x04)
	struct FLinearColor Filter1Tint; // 0x24(0x10)
	struct FLinearColor Filter2Tint; // 0x34(0x10)
	struct FLinearColor Filter3Tint; // 0x44(0x10)
	struct FLinearColor Filter4Tint; // 0x54(0x10)
	struct FLinearColor Filter5Tint; // 0x64(0x10)
	struct FLinearColor Filter6Tint; // 0x74(0x10)
};

// ScriptStruct Engine.ConvolutionBloomSettings
// Size: 0x30 (Inherited: 0x00)
struct FConvolutionBloomSettings {
	struct UTexture2D* Texture; // 0x00(0x08)
	float ScatterDispersion; // 0x08(0x04)
	float Size; // 0x0c(0x04)
	struct FVector2D CenterUV; // 0x10(0x10)
	float PreFilterMin; // 0x20(0x04)
	float PreFilterMax; // 0x24(0x04)
	float PreFilterMult; // 0x28(0x04)
	float BufferScale; // 0x2c(0x04)
};

// ScriptStruct Engine.LensBloomSettings
// Size: 0xc0 (Inherited: 0x00)
struct FLensBloomSettings {
	struct FGaussianSumBloomSettings GaussianSum; // 0x00(0x84)
	char pad_84[0x4]; // 0x84(0x04)
	struct FConvolutionBloomSettings Convolution; // 0x88(0x30)
	enum class EBloomMethod Method; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
};

// ScriptStruct Engine.LensImperfectionSettings
// Size: 0x20 (Inherited: 0x00)
struct FLensImperfectionSettings {
	struct UTexture* DirtMask; // 0x00(0x08)
	float DirtMaskIntensity; // 0x08(0x04)
	struct FLinearColor DirtMaskTint; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.LensSettings
// Size: 0xe8 (Inherited: 0x00)
struct FLensSettings {
	struct FLensBloomSettings Bloom; // 0x00(0xc0)
	struct FLensImperfectionSettings Imperfections; // 0xc0(0x20)
	float ChromaticAberration; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
};

// ScriptStruct Engine.CameraExposureSettings
// Size: 0x40 (Inherited: 0x00)
struct FCameraExposureSettings {
	enum class EAutoExposureMethod Method; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LowPercent; // 0x04(0x04)
	float HighPercent; // 0x08(0x04)
	float MinBrightness; // 0x0c(0x04)
	float MaxBrightness; // 0x10(0x04)
	float SpeedUp; // 0x14(0x04)
	float SpeedDown; // 0x18(0x04)
	float Bias; // 0x1c(0x04)
	struct UCurveFloat* BiasCurve; // 0x20(0x08)
	struct UTexture* MeterMask; // 0x28(0x08)
	float HistogramLogMin; // 0x30(0x04)
	float HistogramLogMax; // 0x34(0x04)
	float CalibrationConstant; // 0x38(0x04)
	char ApplyPhysicalCameraExposure : 1; // 0x3c(0x01)
	char pad_3C_1 : 7; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct Engine.SceneViewExtensionIsActiveFunctor
// Size: 0x50 (Inherited: 0x00)
struct FSceneViewExtensionIsActiveFunctor {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// Size: 0x3c (Inherited: 0x00)
struct FSkeletalMeshOptimizationSettings {
	enum class SkeletalMeshTerminationCriterion TerminationCriterion; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float NumOfTrianglesPercentage; // 0x04(0x04)
	float NumOfVertPercentage; // 0x08(0x04)
	uint32_t MaxNumOfTriangles; // 0x0c(0x04)
	uint32_t MaxNumOfVerts; // 0x10(0x04)
	float MaxDeviationPercentage; // 0x14(0x04)
	enum class SkeletalMeshOptimizationType ReductionMethod; // 0x18(0x01)
	enum class SkeletalMeshOptimizationImportance SilhouetteImportance; // 0x19(0x01)
	enum class SkeletalMeshOptimizationImportance TextureImportance; // 0x1a(0x01)
	enum class SkeletalMeshOptimizationImportance ShadingImportance; // 0x1b(0x01)
	enum class SkeletalMeshOptimizationImportance SkinningImportance; // 0x1c(0x01)
	char bRemapMorphTargets : 1; // 0x1d(0x01)
	char bRecalcNormals : 1; // 0x1d(0x01)
	char pad_1D_2 : 6; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	float WeldingThreshold; // 0x20(0x04)
	float NormalsThreshold; // 0x24(0x04)
	int32_t MaxBonesPerVertex; // 0x28(0x04)
	char bEnforceBoneBoundaries : 1; // 0x2c(0x01)
	char bMergeCoincidentVertBones : 1; // 0x2c(0x01)
	char pad_2C_2 : 6; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float VolumeImportance; // 0x30(0x04)
	char bLockEdges : 1; // 0x34(0x01)
	char bLockColorBounaries : 1; // 0x34(0x01)
	char pad_34_2 : 6; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	int32_t BaseLOD; // 0x38(0x04)
};

// ScriptStruct Engine.SkelMeshSkinWeightInfo
// Size: 0x3c (Inherited: 0x00)
struct FSkelMeshSkinWeightInfo {
	int32_t Bones[0xc]; // 0x00(0x30)
	char Weights[0xc]; // 0x30(0x0c)
};

// ScriptStruct Engine.SkelMeshComponentLODInfo
// Size: 0x28 (Inherited: 0x00)
struct FSkelMeshComponentLODInfo {
	struct TArray<bool> HiddenMaterials; // 0x00(0x10)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct Engine.VertexOffsetUsage
// Size: 0x04 (Inherited: 0x00)
struct FVertexOffsetUsage {
	int32_t Usage; // 0x00(0x04)
};

// ScriptStruct Engine.PrecomputedSkyLightInstanceData
// Size: 0x170 (Inherited: 0xb8)
struct FPrecomputedSkyLightInstanceData : FSceneComponentInstanceData {
	struct FGuid LightGuid; // 0xb8(0x10)
	float AverageBrightness; // 0xc8(0x04)
	char pad_CC[0xa4]; // 0xcc(0xa4)
};

// ScriptStruct Engine.SoftWorldReference
// Size: 0x30 (Inherited: 0x00)
struct FSoftWorldReference {
	struct TSoftObjectPtr<UWorld> WorldAsset; // 0x00(0x30)
};

// ScriptStruct Engine.SoundAttenuationPluginSettings
// Size: 0x40 (Inherited: 0x00)
struct FSoundAttenuationPluginSettings {
	struct TArray<struct USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x00(0x10)
	struct TArray<struct UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10(0x10)
	struct TArray<struct UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20(0x10)
	struct TArray<struct USourceDataOverridePluginSourceSettingsBase*> SourceDataOverridePluginSettingsArray; // 0x30(0x10)
};

// ScriptStruct Engine.AttenuationSubmixSendSettings
// Size: 0xa8 (Inherited: 0x00)
struct FAttenuationSubmixSendSettings {
	struct USoundSubmixBase* Submix; // 0x00(0x08)
	enum class ESubmixSendMethod SubmixSendMethod; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float SubmixSendLevelMin; // 0x0c(0x04)
	float SubmixSendLevelMax; // 0x10(0x04)
	float SubmixSendDistanceMin; // 0x14(0x04)
	float SubmixSendDistanceMax; // 0x18(0x04)
	float ManualSubmixSendLevel; // 0x1c(0x04)
	struct FRuntimeFloatCurve CustomSubmixSendCurve; // 0x20(0x88)
};

// ScriptStruct Engine.SoundAttenuationSettings
// Size: 0x3d8 (Inherited: 0xc0)
struct FSoundAttenuationSettings : FBaseAttenuationSettings {
	char bAttenuate : 1; // 0xc0(0x01)
	char bSpatialize : 1; // 0xc0(0x01)
	char bAttenuateWithLPF : 1; // 0xc0(0x01)
	char bEnableListenerFocus : 1; // 0xc0(0x01)
	char bEnableFocusInterpolation : 1; // 0xc0(0x01)
	char bEnableOcclusion : 1; // 0xc0(0x01)
	char bUseComplexCollisionForOcclusion : 1; // 0xc0(0x01)
	char bEnableReverbSend : 1; // 0xc0(0x01)
	char bEnablePriorityAttenuation : 1; // 0xc1(0x01)
	char bApplyNormalizationToStereoSounds : 1; // 0xc1(0x01)
	char bEnableLogFrequencyScaling : 1; // 0xc1(0x01)
	char bEnableSubmixSends : 1; // 0xc1(0x01)
	char bEnableSourceDataOverride : 1; // 0xc1(0x01)
	char bEnableSendToAudioLink : 1; // 0xc1(0x01)
	char pad_C1_6 : 2; // 0xc1(0x01)
	enum class ESoundSpatializationAlgorithm SpatializationAlgorithm; // 0xc2(0x01)
	char pad_C3[0x5]; // 0xc3(0x05)
	struct UAudioLinkSettingsAbstract* AudioLinkSettingsOverride; // 0xc8(0x08)
	float BinauralRadius; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FRuntimeFloatCurve CustomLowpassAirAbsorptionCurve; // 0xd8(0x88)
	struct FRuntimeFloatCurve CustomHighpassAirAbsorptionCurve; // 0x160(0x88)
	enum class EAirAbsorptionMethod AbsorptionMethod; // 0x1e8(0x01)
	enum class ECollisionChannel OcclusionTraceChannel; // 0x1e9(0x01)
	enum class EReverbSendMethod ReverbSendMethod; // 0x1ea(0x01)
	enum class EPriorityAttenuationMethod PriorityAttenuationMethod; // 0x1eb(0x01)
	float NonSpatializedRadiusStart; // 0x1ec(0x04)
	float NonSpatializedRadiusEnd; // 0x1f0(0x04)
	enum class ENonSpatializedRadiusSpeakerMapMode NonSpatializedRadiusMode; // 0x1f4(0x01)
	char pad_1F5[0x3]; // 0x1f5(0x03)
	float StereoSpread; // 0x1f8(0x04)
	float LPFRadiusMin; // 0x1fc(0x04)
	float LPFRadiusMax; // 0x200(0x04)
	float LPFFrequencyAtMin; // 0x204(0x04)
	float LPFFrequencyAtMax; // 0x208(0x04)
	float HPFFrequencyAtMin; // 0x20c(0x04)
	float HPFFrequencyAtMax; // 0x210(0x04)
	float FocusAzimuth; // 0x214(0x04)
	float NonFocusAzimuth; // 0x218(0x04)
	float FocusDistanceScale; // 0x21c(0x04)
	float NonFocusDistanceScale; // 0x220(0x04)
	float FocusPriorityScale; // 0x224(0x04)
	float NonFocusPriorityScale; // 0x228(0x04)
	float FocusVolumeAttenuation; // 0x22c(0x04)
	float NonFocusVolumeAttenuation; // 0x230(0x04)
	float FocusAttackInterpSpeed; // 0x234(0x04)
	float FocusReleaseInterpSpeed; // 0x238(0x04)
	float OcclusionLowPassFilterFrequency; // 0x23c(0x04)
	float OcclusionVolumeAttenuation; // 0x240(0x04)
	float OcclusionInterpolationTime; // 0x244(0x04)
	float ReverbWetLevelMin; // 0x248(0x04)
	float ReverbWetLevelMax; // 0x24c(0x04)
	float ReverbDistanceMin; // 0x250(0x04)
	float ReverbDistanceMax; // 0x254(0x04)
	float ManualReverbSendLevel; // 0x258(0x04)
	float PriorityAttenuationMin; // 0x25c(0x04)
	float PriorityAttenuationMax; // 0x260(0x04)
	float PriorityAttenuationDistanceMin; // 0x264(0x04)
	float PriorityAttenuationDistanceMax; // 0x268(0x04)
	float ManualPriorityAttenuation; // 0x26c(0x04)
	struct FRuntimeFloatCurve CustomReverbSendCurve; // 0x270(0x88)
	struct TArray<struct FAttenuationSubmixSendSettings> SubmixSendSettings; // 0x2f8(0x10)
	struct FRuntimeFloatCurve CustomPriorityAttenuationCurve; // 0x308(0x88)
	struct FSoundAttenuationPluginSettings PluginSettings; // 0x390(0x40)
	float LPFMinPercent; // 0x3d0(0x04)
	float LPFMaxPercent; // 0x3d4(0x04)
};

// ScriptStruct Engine.SourceEffectChainEntry
// Size: 0x10 (Inherited: 0x00)
struct FSourceEffectChainEntry {
	struct USoundEffectSourcePreset* Preset; // 0x00(0x08)
	char bBypass : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.SoundGroup
// Size: 0x20 (Inherited: 0x00)
struct FSoundGroup {
	enum class ESoundGroup SoundGroup; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString DisplayName; // 0x08(0x10)
	char bAlwaysDecompressOnLoad : 1; // 0x18(0x01)
	char pad_18_1 : 7; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float DecompressedDuration; // 0x1c(0x04)
};

// ScriptStruct Engine.ModulatorContinuousParams
// Size: 0x24 (Inherited: 0x00)
struct FModulatorContinuousParams {
	struct FName ParameterName; // 0x00(0x0c)
	float Default; // 0x0c(0x04)
	float MinInput; // 0x10(0x04)
	float MaxInput; // 0x14(0x04)
	float MinOutput; // 0x18(0x04)
	float MaxOutput; // 0x1c(0x04)
	enum class ModulationParamMode ParamMode; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct Engine.SoundSourceBusSendInfo
// Size: 0xb8 (Inherited: 0x00)
struct FSoundSourceBusSendInfo {
	enum class ESourceBusSendLevelControlMethod SourceBusSendLevelControlMethod; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct USoundSourceBus* SoundSourceBus; // 0x08(0x08)
	struct UAudioBus* AudioBus; // 0x10(0x08)
	float SendLevel; // 0x18(0x04)
	float MinSendLevel; // 0x1c(0x04)
	float MaxSendLevel; // 0x20(0x04)
	float MinSendDistance; // 0x24(0x04)
	float MaxSendDistance; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FRuntimeFloatCurve CustomSendLevelCurve; // 0x30(0x88)
};

// ScriptStruct Engine.SoundTimecodeOffset
// Size: 0x08 (Inherited: 0x00)
struct FSoundTimecodeOffset {
	double NumOfSecondsSinceMidnight; // 0x00(0x08)
};

// ScriptStruct Engine.StreamedAudioPlatformData
// Size: 0x20 (Inherited: 0x00)
struct FStreamedAudioPlatformData {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct Engine.SoundWaveSpectralData
// Size: 0x0c (Inherited: 0x00)
struct FSoundWaveSpectralData {
	float FrequencyHz; // 0x00(0x04)
	float Magnitude; // 0x04(0x04)
	float NormalizedMagnitude; // 0x08(0x04)
};

// ScriptStruct Engine.SoundWaveSpectralDataPerSound
// Size: 0x20 (Inherited: 0x00)
struct FSoundWaveSpectralDataPerSound {
	struct TArray<struct FSoundWaveSpectralData> SpectralData; // 0x00(0x10)
	float PlaybackTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct USoundWave* SoundWave; // 0x18(0x08)
};

// ScriptStruct Engine.SoundWaveEnvelopeDataPerSound
// Size: 0x10 (Inherited: 0x00)
struct FSoundWaveEnvelopeDataPerSound {
	float Envelope; // 0x00(0x04)
	float PlaybackTime; // 0x04(0x04)
	struct USoundWave* SoundWave; // 0x08(0x08)
};

// ScriptStruct Engine.SoundWaveSpectralDataEntry
// Size: 0x08 (Inherited: 0x00)
struct FSoundWaveSpectralDataEntry {
	float Magnitude; // 0x00(0x04)
	float NormalizedMagnitude; // 0x04(0x04)
};

// ScriptStruct Engine.SoundWaveSpectralTimeData
// Size: 0x18 (Inherited: 0x00)
struct FSoundWaveSpectralTimeData {
	struct TArray<struct FSoundWaveSpectralDataEntry> Data; // 0x00(0x10)
	float TimeSec; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.SoundWaveEnvelopeTimeData
// Size: 0x08 (Inherited: 0x00)
struct FSoundWaveEnvelopeTimeData {
	float Amplitude; // 0x00(0x04)
	float TimeSec; // 0x04(0x04)
};

// ScriptStruct Engine.SoundWaveCuePoint
// Size: 0x28 (Inherited: 0x00)
struct FSoundWaveCuePoint {
	int32_t CuePointID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Label; // 0x08(0x10)
	int32_t FramePosition; // 0x18(0x04)
	int32_t FrameLength; // 0x1c(0x04)
	bool bIsLoopRegion; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.SoundWaveTimecodeInfo
// Size: 0x70 (Inherited: 0x00)
struct FSoundWaveTimecodeInfo {
	uint64_t NumSamplesSinceMidnight; // 0x00(0x08)
	uint32_t NumSamplesPerSecond; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Description; // 0x10(0x10)
	struct FString OriginatorTime; // 0x20(0x10)
	struct FString OriginatorDate; // 0x30(0x10)
	struct FString OriginatorDescription; // 0x40(0x10)
	struct FString OriginatorReference; // 0x50(0x10)
	struct FFrameRate TimecodeRate; // 0x60(0x08)
	bool bTimecodeIsDropFrame; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct Engine.StaticMeshComponentLODInfo
// Size: 0x90 (Inherited: 0x00)
struct FStaticMeshComponentLODInfo {
	char pad_0[0x90]; // 0x00(0x90)
};

// ScriptStruct Engine.StaticParameterBase
// Size: 0x28 (Inherited: 0x00)
struct FStaticParameterBase {
	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x14)
	bool bOverride; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FGuid ExpressionGUID; // 0x18(0x10)
};

// ScriptStruct Engine.StaticSwitchParameter
// Size: 0x2c (Inherited: 0x28)
struct FStaticSwitchParameter : FStaticParameterBase {
	bool Value; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
};

// ScriptStruct Engine.StaticComponentMaskParameter
// Size: 0x2c (Inherited: 0x28)
struct FStaticComponentMaskParameter : FStaticParameterBase {
	bool R; // 0x28(0x01)
	bool G; // 0x29(0x01)
	bool B; // 0x2a(0x01)
	bool A; // 0x2b(0x01)
};

// ScriptStruct Engine.StaticTerrainLayerWeightParameter
// Size: 0x3c (Inherited: 0x00)
struct FStaticTerrainLayerWeightParameter {
	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x14)
	struct FGuid ExpressionGUID; // 0x14(0x10)
	bool bOverride; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FName LayerName; // 0x28(0x0c)
	int32_t WeightmapIndex; // 0x34(0x04)
	bool bWeightBasedBlend; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
};

// ScriptStruct Engine.StaticMaterialLayersParameter
// Size: 0x128 (Inherited: 0x28)
struct FStaticMaterialLayersParameter : FStaticParameterBase {
	struct FMaterialLayersFunctions Value; // 0x28(0x100)
};

// ScriptStruct Engine.StaticParameterSetRuntimeData
// Size: 0x38 (Inherited: 0x00)
struct FStaticParameterSetRuntimeData {
	struct TArray<struct FStaticSwitchParameter> StaticSwitchParameters; // 0x00(0x10)
	struct FMaterialLayersFunctionsRuntimeData MaterialLayers; // 0x10(0x20)
	char bHasMaterialLayers : 1; // 0x30(0x01)
	char pad_30_1 : 7; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct Engine.StaticParameterSetEditorOnlyData
// Size: 0xa0 (Inherited: 0x00)
struct FStaticParameterSetEditorOnlyData {
	struct TArray<struct FStaticSwitchParameter> StaticSwitchParameters; // 0x00(0x10)
	struct TArray<struct FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10(0x10)
	struct TArray<struct FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20(0x10)
	struct FMaterialLayersFunctionsEditorOnlyData MaterialLayers; // 0x30(0x70)
};

// ScriptStruct Engine.StaticParameterSet
// Size: 0x38 (Inherited: 0x38)
struct FStaticParameterSet : FStaticParameterSetRuntimeData {
};

// ScriptStruct Engine.EquirectProps
// Size: 0x98 (Inherited: 0x00)
struct FEquirectProps {
	struct FBox2D LeftUVRect; // 0x00(0x28)
	struct FBox2D RightUVRect; // 0x28(0x28)
	struct FVector2D LeftScale; // 0x50(0x10)
	struct FVector2D RightScale; // 0x60(0x10)
	struct FVector2D LeftBias; // 0x70(0x10)
	struct FVector2D RightBias; // 0x80(0x10)
	float Radius; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// ScriptStruct Engine.StreamingRenderAssetPrimitiveInfo
// Size: 0x50 (Inherited: 0x00)
struct FStreamingRenderAssetPrimitiveInfo {
	struct UStreamableRenderAsset* RenderAsset; // 0x00(0x08)
	struct FBoxSphereBounds Bounds; // 0x08(0x38)
	float TexelFactor; // 0x40(0x04)
	uint32_t PackedRelativeBox; // 0x44(0x04)
	char bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x48(0x01)
	char bAffectedByComponentScale : 1; // 0x48(0x01)
	char pad_48_2 : 6; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Engine.StreamingTextureBuildInfo
// Size: 0x0c (Inherited: 0x00)
struct FStreamingTextureBuildInfo {
	uint32_t PackedRelativeBox; // 0x00(0x04)
	int32_t TextureLevelIndex; // 0x04(0x04)
	float TexelFactor; // 0x08(0x04)
};

// ScriptStruct Engine.TimelineEventEntry
// Size: 0x18 (Inherited: 0x00)
struct FTimelineEventEntry {
	float Time; // 0x00(0x04)
	struct FDelegate EventFunc; // 0x04(0x14)
};

// ScriptStruct Engine.TimelineVectorTrack
// Size: 0x50 (Inherited: 0x00)
struct FTimelineVectorTrack {
	struct UCurveVector* VectorCurve; // 0x00(0x08)
	struct FDelegate InterpFunc; // 0x08(0x14)
	struct FName TrackName; // 0x1c(0x0c)
	struct FName VectorPropertyName; // 0x28(0x0c)
	char pad_34[0x1c]; // 0x34(0x1c)
};

// ScriptStruct Engine.TimelineFloatTrack
// Size: 0x50 (Inherited: 0x00)
struct FTimelineFloatTrack {
	struct UCurveFloat* FloatCurve; // 0x00(0x08)
	struct FDelegate InterpFunc; // 0x08(0x14)
	struct FName TrackName; // 0x1c(0x0c)
	struct FName FloatPropertyName; // 0x28(0x0c)
	char pad_34[0x1c]; // 0x34(0x1c)
};

// ScriptStruct Engine.TimelineLinearColorTrack
// Size: 0x50 (Inherited: 0x00)
struct FTimelineLinearColorTrack {
	struct UCurveLinearColor* LinearColorCurve; // 0x00(0x08)
	struct FDelegate InterpFunc; // 0x08(0x14)
	struct FName TrackName; // 0x1c(0x0c)
	struct FName LinearColorPropertyName; // 0x28(0x0c)
	char pad_34[0x1c]; // 0x34(0x1c)
};

// ScriptStruct Engine.Timeline
// Size: 0xb0 (Inherited: 0x00)
struct FTimeline {
	enum class ETimelineLengthMode LengthMode; // 0x00(0x01)
	char bLooping : 1; // 0x01(0x01)
	char bReversePlayback : 1; // 0x01(0x01)
	char bPlaying : 1; // 0x01(0x01)
	char pad_1_3 : 5; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float Length; // 0x04(0x04)
	float PlayRate; // 0x08(0x04)
	float TickInterval; // 0x0c(0x04)
	float Position; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FTimelineEventEntry> Events; // 0x18(0x10)
	struct TArray<struct FTimelineVectorTrack> InterpVectors; // 0x28(0x10)
	struct TArray<struct FTimelineFloatTrack> InterpFloats; // 0x38(0x10)
	struct TArray<struct FTimelineLinearColorTrack> InterpLinearColors; // 0x48(0x10)
	struct FDelegate TimelinePostUpdateFunc; // 0x58(0x14)
	struct FDelegate TimelineFinishedFunc; // 0x6c(0x14)
	struct TWeakObjectPtr<struct UObject> PropertySetObject; // 0x80(0x08)
	struct FName DirectionPropertyName; // 0x88(0x0c)
	char pad_94[0x1c]; // 0x94(0x1c)
};

// ScriptStruct Engine.TimeStampIndex
// Size: 0x04 (Inherited: 0x00)
struct FTimeStampIndex {
	uint32_t Value; // 0x00(0x04)
};

// ScriptStruct Engine.WorldPartitionActorFilter
// Size: 0x01 (Inherited: 0x00)
struct FWorldPartitionActorFilter {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.RuntimePartitionHLODSetup
// Size: 0x10 (Inherited: 0x00)
struct FRuntimePartitionHLODSetup {
	struct UHLODLayer* HLODLayer; // 0x00(0x08)
	struct URuntimePartition* PartitionLayer; // 0x08(0x08)
};

// ScriptStruct Engine.RuntimePartitionDesc
// Size: 0x01 (Inherited: 0x00)
struct FRuntimePartitionDesc {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.LightmassWorldInfoSettings
// Size: 0x4c (Inherited: 0x00)
struct FLightmassWorldInfoSettings {
	float StaticLightingLevelScale; // 0x00(0x04)
	int32_t NumIndirectLightingBounces; // 0x04(0x04)
	int32_t NumSkyLightingBounces; // 0x08(0x04)
	float IndirectLightingQuality; // 0x0c(0x04)
	float IndirectLightingSmoothness; // 0x10(0x04)
	struct FColor EnvironmentColor; // 0x14(0x04)
	float EnvironmentIntensity; // 0x18(0x04)
	float EmissiveBoost; // 0x1c(0x04)
	float DiffuseBoost; // 0x20(0x04)
	enum class EVolumeLightingMethod VolumeLightingMethod; // 0x24(0x01)
	char bUseAmbientOcclusion : 1; // 0x25(0x01)
	char bGenerateAmbientOcclusionMaterialMask : 1; // 0x25(0x01)
	char bVisualizeMaterialDiffuse : 1; // 0x25(0x01)
	char bVisualizeAmbientOcclusion : 1; // 0x25(0x01)
	char bCompressLightmaps : 1; // 0x25(0x01)
	char pad_25_5 : 3; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	float VolumetricLightmapDetailCellSize; // 0x28(0x04)
	float VolumetricLightmapMaximumBrickMemoryMb; // 0x2c(0x04)
	float VolumetricLightmapSphericalHarmonicSmoothing; // 0x30(0x04)
	float VolumeLightSamplePlacementScale; // 0x34(0x04)
	float DirectIlluminationOcclusionFraction; // 0x38(0x04)
	float IndirectIlluminationOcclusionFraction; // 0x3c(0x04)
	float OcclusionExponent; // 0x40(0x04)
	float FullyOccludedSamplesFraction; // 0x44(0x04)
	float MaxOcclusionDistance; // 0x48(0x04)
};

// ScriptStruct Engine.NetViewer
// Size: 0x48 (Inherited: 0x00)
struct FNetViewer {
	struct UNetConnection* Connection; // 0x00(0x08)
	struct AActor* InViewer; // 0x08(0x08)
	struct AActor* ViewTarget; // 0x10(0x08)
	struct FVector ViewLocation; // 0x18(0x18)
	struct FVector ViewDir; // 0x30(0x18)
};

// ScriptStruct Engine.HierarchicalSimplification
// Size: 0x350 (Inherited: 0x00)
struct FHierarchicalSimplification {
	float TransitionScreenSize; // 0x00(0x04)
	float OverrideDrawDistance; // 0x04(0x04)
	char bUseOverrideDrawDistance : 1; // 0x08(0x01)
	char bAllowSpecificExclusion : 1; // 0x08(0x01)
	char bOnlyGenerateClustersForVolumes : 1; // 0x08(0x01)
	char bReusePreviousLevelClusters : 1; // 0x08(0x01)
	char pad_8_4 : 4; // 0x08(0x01)
	enum class EHierarchicalSimplificationMethod SimplificationMethod; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct FMeshProxySettings ProxySetting; // 0x10(0x100)
	struct FMeshMergingSettings MergeSetting; // 0x110(0x108)
	struct FMeshApproximationSettings ApproximateSettings; // 0x218(0x128)
	float DesiredBoundRadius; // 0x340(0x04)
	float DesiredFillingPercentage; // 0x344(0x04)
	int32_t MinNumberOfActorsToBuild; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
};

// ScriptStruct Engine.MeshApproximationSettings
// Size: 0x128 (Inherited: 0x00)
struct FMeshApproximationSettings {
	enum class EMeshApproximationType OutputType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ApproximationAccuracy; // 0x04(0x04)
	int32_t ClampVoxelDimension; // 0x08(0x04)
	bool bAttemptAutoThickening; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float TargetMinThicknessMultiplier; // 0x10(0x04)
	bool bIgnoreTinyParts; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float TinyPartSizeMultiplier; // 0x18(0x04)
	enum class EMeshApproximationBaseCappingType BaseCapping; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float WindingThreshold; // 0x20(0x04)
	bool bFillGaps; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float GapDistance; // 0x28(0x04)
	enum class EOccludedGeometryFilteringPolicy OcclusionMethod; // 0x2c(0x01)
	bool bOccludeFromBottom; // 0x2d(0x01)
	enum class EMeshApproximationSimplificationPolicy SimplifyMethod; // 0x2e(0x01)
	char pad_2F[0x1]; // 0x2f(0x01)
	int32_t TargetTriCount; // 0x30(0x04)
	float TrianglesPerM; // 0x34(0x04)
	float GeometricDeviation; // 0x38(0x04)
	enum class EMeshApproximationGroundPlaneClippingPolicy GroundClipping; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float GroundClippingZHeight; // 0x40(0x04)
	bool bEstimateHardNormals; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float HardNormalAngle; // 0x48(0x04)
	enum class EMeshApproximationUVGenerationPolicy UVGenerationMethod; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	int32_t InitialPatchCount; // 0x50(0x04)
	float CurvatureAlignment; // 0x54(0x04)
	float MergingThreshold; // 0x58(0x04)
	float MaxAngleDeviation; // 0x5c(0x04)
	bool bGenerateNaniteEnabledMesh; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	float NaniteProxyTrianglePercent; // 0x64(0x04)
	bool bSupportRayTracing; // 0x68(0x01)
	bool bAllowDistanceField; // 0x69(0x01)
	char pad_6A[0x2]; // 0x6a(0x02)
	int32_t MultiSamplingAA; // 0x6c(0x04)
	int32_t RenderCaptureResolution; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct FMaterialProxySettings MaterialSettings; // 0x78(0xa0)
	float CaptureFieldOfView; // 0x118(0x04)
	float NearPlaneDist; // 0x11c(0x04)
	bool bUseRenderLODMeshes; // 0x120(0x01)
	bool bEnableSimplifyPrePass; // 0x121(0x01)
	bool bEnableParallelBaking; // 0x122(0x01)
	bool bPrintDebugMessages; // 0x123(0x01)
	bool bEmitFullDebugMesh; // 0x124(0x01)
	char pad_125[0x3]; // 0x125(0x03)
};

// ScriptStruct Engine.MeshMergingSettings
// Size: 0x108 (Inherited: 0x00)
struct FMeshMergingSettings {
	int32_t TargetLightMapResolution; // 0x00(0x04)
	enum class EUVOutput OutputUVs[0x8]; // 0x04(0x08)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMaterialProxySettings MaterialSettings; // 0x10(0xa0)
	int32_t GutterSize; // 0xb0(0x04)
	enum class EMeshLODSelectionType LODSelectionType; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	int32_t SpecificLOD; // 0xb8(0x04)
	char bGenerateLightMapUV : 1; // 0xbc(0x01)
	char bComputedLightMapResolution : 1; // 0xbc(0x01)
	char bPivotPointAtZero : 1; // 0xbc(0x01)
	char bMergePhysicsData : 1; // 0xbc(0x01)
	char bMergeMeshSockets : 1; // 0xbc(0x01)
	char bMergeMaterials : 1; // 0xbc(0x01)
	char bBakeVertexDataToMesh : 1; // 0xbc(0x01)
	char bUseVertexDataForBakingMaterial : 1; // 0xbc(0x01)
	char bUseTextureBinning : 1; // 0xbd(0x01)
	char bReuseMeshLightmapUVs : 1; // 0xbd(0x01)
	char bMergeEquivalentMaterials : 1; // 0xbd(0x01)
	char bUseLandscapeCulling : 1; // 0xbd(0x01)
	char bIncludeImposters : 1; // 0xbd(0x01)
	char bSupportRayTracing : 1; // 0xbd(0x01)
	char bAllowDistanceField : 1; // 0xbd(0x01)
	char pad_BD_7 : 1; // 0xbd(0x01)
	char pad_BE[0x2]; // 0xbe(0x02)
	struct FMeshNaniteSettings NaniteSettings; // 0xc0(0x40)
	char pad_100[0x8]; // 0x100(0x08)
};

// ScriptStruct Engine.MeshProxySettings
// Size: 0x100 (Inherited: 0x00)
struct FMeshProxySettings {
	int32_t ScreenSize; // 0x00(0x04)
	float VoxelSize; // 0x04(0x04)
	struct FMaterialProxySettings MaterialSettings; // 0x08(0xa0)
	float MergeDistance; // 0xa8(0x04)
	struct FColor UnresolvedGeometryColor; // 0xac(0x04)
	float MaxRayCastDist; // 0xb0(0x04)
	float HardAngleThreshold; // 0xb4(0x04)
	int32_t LightMapResolution; // 0xb8(0x04)
	enum class EProxyNormalComputationMethod NormalCalculationMethod; // 0xbc(0x01)
	enum class ELandscapeCullingPrecision LandscapeCullingPrecision; // 0xbd(0x01)
	char bCalculateCorrectLODModel : 1; // 0xbe(0x01)
	char bOverrideVoxelSize : 1; // 0xbe(0x01)
	char bOverrideTransferDistance : 1; // 0xbe(0x01)
	char bUseHardAngleThreshold : 1; // 0xbe(0x01)
	char bComputeLightMapResolution : 1; // 0xbe(0x01)
	char bRecalculateNormals : 1; // 0xbe(0x01)
	char bUseLandscapeCulling : 1; // 0xbe(0x01)
	char bSupportRayTracing : 1; // 0xbe(0x01)
	char bAllowDistanceField : 1; // 0xbf(0x01)
	char bReuseMeshLightmapUVs : 1; // 0xbf(0x01)
	char bGroupIdenticalMeshesForBaking : 1; // 0xbf(0x01)
	char bCreateCollision : 1; // 0xbf(0x01)
	char bAllowVertexColors : 1; // 0xbf(0x01)
	char bGenerateLightmapUVs : 1; // 0xbf(0x01)
	char pad_BF_6 : 2; // 0xbf(0x01)
	struct FMeshNaniteSettings NaniteSettings; // 0xc0(0x40)
};

// ScriptStruct Engine.NaniteSettings
// Size: 0x01 (Inherited: 0x00)
struct FNaniteSettings {
	bool bAllowMaskedMaterials; // 0x00(0x01)
};

// ScriptStruct Engine.BroadphaseSettings
// Size: 0x80 (Inherited: 0x00)
struct FBroadphaseSettings {
	bool bUseMBPOnClient; // 0x00(0x01)
	bool bUseMBPOnServer; // 0x01(0x01)
	bool bUseMBPOuterBounds; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FBox MBPBounds; // 0x08(0x38)
	struct FBox MBPOuterBounds; // 0x40(0x38)
	uint32_t MBPNumSubdivs; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct Engine.QuartzPulseOverrideStep
// Size: 0x08 (Inherited: 0x00)
struct FQuartzPulseOverrideStep {
	int32_t NumberOfPulses; // 0x00(0x04)
	enum class EQuartzCommandQuantization PulseDuration; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.QuartzTimeSignature
// Size: 0x18 (Inherited: 0x00)
struct FQuartzTimeSignature {
	int32_t NumBeats; // 0x00(0x04)
	enum class EQuartzTimeSignatureQuantization BeatType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<struct FQuartzPulseOverrideStep> OptionalPulseOverride; // 0x08(0x10)
};

// ScriptStruct Engine.QuartzTransportTimeStamp
// Size: 0x10 (Inherited: 0x00)
struct FQuartzTransportTimeStamp {
	int32_t Bars; // 0x00(0x04)
	int32_t Beat; // 0x04(0x04)
	float BeatFraction; // 0x08(0x04)
	float Seconds; // 0x0c(0x04)
};

// ScriptStruct Engine.QuartzClockSettings
// Size: 0x20 (Inherited: 0x00)
struct FQuartzClockSettings {
	struct FQuartzTimeSignature TimeSignature; // 0x00(0x18)
	bool bIgnoreLevelChange; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Engine.QuartzQuantizationBoundary
// Size: 0x20 (Inherited: 0x00)
struct FQuartzQuantizationBoundary {
	enum class EQuartzCommandQuantization Quantization; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Multiplier; // 0x04(0x04)
	enum class EQuarztQuantizationReference CountingReferencePoint; // 0x08(0x01)
	bool bFireOnClockStart; // 0x09(0x01)
	bool bCancelCommandIfClockIsNotRunning; // 0x0a(0x01)
	bool bResetClockOnQueued; // 0x0b(0x01)
	bool bResumeClockOnQueued; // 0x0c(0x01)
	char pad_D[0x13]; // 0x0d(0x13)
};

// ScriptStruct Engine.NavAvoidanceData
// Size: 0x58 (Inherited: 0x00)
struct FNavAvoidanceData {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct Engine.NavLinkAuxiliaryId
// Size: 0x08 (Inherited: 0x00)
struct FNavLinkAuxiliaryId {
	uint64_t ID; // 0x00(0x08)
};

// ScriptStruct Engine.NavLinkId
// Size: 0x08 (Inherited: 0x00)
struct FNavLinkId {
	uint64_t ID; // 0x00(0x08)
};

// ScriptStruct Engine.MovementProperties
// Size: 0x01 (Inherited: 0x00)
struct FMovementProperties {
	char bCanCrouch : 1; // 0x00(0x01)
	char bCanJump : 1; // 0x00(0x01)
	char bCanWalk : 1; // 0x00(0x01)
	char bCanSwim : 1; // 0x00(0x01)
	char bCanFly : 1; // 0x00(0x01)
	char pad_0_5 : 3; // 0x00(0x01)
};

// ScriptStruct Engine.NavAgentProperties
// Size: 0x40 (Inherited: 0x01)
struct FNavAgentProperties : FMovementProperties {
	char pad_1[0x3]; // 0x01(0x03)
	float AgentRadius; // 0x04(0x04)
	float AgentHeight; // 0x08(0x04)
	float AgentStepHeight; // 0x0c(0x04)
	float NavWalkingSearchHeightScale; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FSoftClassPath PreferredNavData; // 0x18(0x28)
};

// ScriptStruct Engine.NavDataConfig
// Size: 0x98 (Inherited: 0x40)
struct FNavDataConfig : FNavAgentProperties {
	struct FName Name; // 0x40(0x0c)
	struct FColor Color; // 0x4c(0x04)
	struct FVector DefaultQueryExtent; // 0x50(0x18)
	struct TSoftClassPtr<UObject> NavDataClass; // 0x68(0x30)
};

// ScriptStruct Engine.AlphaBlendArgs
// Size: 0x10 (Inherited: 0x00)
struct FAlphaBlendArgs {
	struct UCurveFloat* CustomCurve; // 0x00(0x08)
	float BlendTime; // 0x08(0x04)
	enum class EAlphaBlendOption BlendOption; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.BlendSampleData
// Size: 0x60 (Inherited: 0x00)
struct FBlendSampleData {
	int32_t SampleDataIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UAnimSequence* Animation; // 0x08(0x08)
	float TotalWeight; // 0x10(0x04)
	float WeightRate; // 0x14(0x04)
	float Time; // 0x18(0x04)
	float PreviousTime; // 0x1c(0x04)
	float SamplePlayRate; // 0x20(0x04)
	char pad_24[0x3c]; // 0x24(0x3c)
};

// ScriptStruct Engine.BlendFilter
// Size: 0x10 (Inherited: 0x00)
struct FBlendFilter {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.MarkerSyncAnimPosition
// Size: 0x1c (Inherited: 0x00)
struct FMarkerSyncAnimPosition {
	struct FName PreviousMarkerName; // 0x00(0x0c)
	struct FName NextMarkerName; // 0x0c(0x0c)
	float PositionBetweenMarkers; // 0x18(0x04)
};

// ScriptStruct Engine.AnimTickRecord
// Size: 0x88 (Inherited: 0x00)
struct FAnimTickRecord {
	struct UAnimationAsset* SourceAsset; // 0x00(0x08)
	char pad_8[0x80]; // 0x08(0x80)
};

// ScriptStruct Engine.AnimGroupInstance
// Size: 0x88 (Inherited: 0x00)
struct FAnimGroupInstance {
	char pad_0[0x88]; // 0x00(0x88)
};

// ScriptStruct Engine.RootMotionMovementParams
// Size: 0x70 (Inherited: 0x00)
struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BlendWeight; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform RootMotionTransform; // 0x10(0x60)
};

// ScriptStruct Engine.AnimationGroupReference
// Size: 0x14 (Inherited: 0x00)
struct FAnimationGroupReference {
	enum class EAnimSyncMethod Method; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName GroupName; // 0x04(0x0c)
	enum class EAnimGroupRole GroupRole; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Engine.EncounteredStateMachineStack
// Size: 0x30 (Inherited: 0x00)
struct FEncounteredStateMachineStack {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Engine.AnimationRecordingSettings
// Size: 0x40 (Inherited: 0x00)
struct FAnimationRecordingSettings {
	bool bRecordInWorldSpace; // 0x00(0x01)
	bool bRemoveRootAnimation; // 0x01(0x01)
	bool bAutoSaveAsset; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FFrameRate SampleFrameRate; // 0x04(0x08)
	float Length; // 0x0c(0x04)
	enum class EAnimInterpolationType Interpolation; // 0x10(0x01)
	enum class ERichCurveInterpMode InterpMode; // 0x11(0x01)
	enum class ERichCurveTangentMode TangentMode; // 0x12(0x01)
	char pad_13[0x1]; // 0x13(0x01)
	bool bRecordTransforms; // 0x14(0x01)
	bool bRecordMorphTargets; // 0x15(0x01)
	bool bRecordAttributeCurves; // 0x16(0x01)
	bool bRecordMaterialCurves; // 0x17(0x01)
	bool bTransactRecording; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct FString> IncludeAnimationNames; // 0x20(0x10)
	struct TArray<struct FString> ExcludeAnimationNames; // 0x30(0x10)
};

// ScriptStruct Engine.StateMachineStateDebugData
// Size: 0x10 (Inherited: 0x00)
struct FStateMachineStateDebugData {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.StateMachineDebugData
// Size: 0x150 (Inherited: 0x00)
struct FStateMachineDebugData {
	char pad_0[0x150]; // 0x00(0x150)
};

// ScriptStruct Engine.AnimationFrameSnapshot
// Size: 0x01 (Inherited: 0x00)
struct FAnimationFrameSnapshot {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.AnimBlueprintDebugData
// Size: 0x01 (Inherited: 0x00)
struct FAnimBlueprintDebugData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.AnimBlueprintMutableData
// Size: 0x01 (Inherited: 0x00)
struct FAnimBlueprintMutableData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.AnimBlueprintConstantData
// Size: 0x01 (Inherited: 0x00)
struct FAnimBlueprintConstantData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.AnimBlueprintFunctionData
// Size: 0x40 (Inherited: 0x00)
struct FAnimBlueprintFunctionData {
	struct TFieldPath<FStructProperty> OutputPoseNodeProperty; // 0x00(0x20)
	struct TArray<struct TFieldPath<FStructProperty>> InputPoseNodeProperties; // 0x20(0x10)
	struct TArray<struct TFieldPath<FProperty>> InputProperties; // 0x30(0x10)
};

// ScriptStruct Engine.AnimBlueprintFunction
// Size: 0x80 (Inherited: 0x00)
struct FAnimBlueprintFunction {
	struct FName Name; // 0x00(0x0c)
	struct FName Group; // 0x0c(0x0c)
	int32_t OutputPoseNodeIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FName> InputPoseNames; // 0x20(0x10)
	struct TArray<int32_t> InputPoseNodeIndices; // 0x30(0x10)
	char pad_40[0x38]; // 0x40(0x38)
	bool bImplemented; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
};

// ScriptStruct Engine.CachedPoseIndices
// Size: 0x10 (Inherited: 0x00)
struct FCachedPoseIndices {
	struct TArray<int32_t> OrderedSavedPoseNodeIndices; // 0x00(0x10)
};

// ScriptStruct Engine.GraphAssetPlayerInformation
// Size: 0x10 (Inherited: 0x00)
struct FGraphAssetPlayerInformation {
	struct TArray<int32_t> PlayerNodeIndices; // 0x00(0x10)
};

// ScriptStruct Engine.AnimGraphBlendOptions
// Size: 0x20 (Inherited: 0x00)
struct FAnimGraphBlendOptions {
	float BlendInTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UBlendProfile* BlendInProfile; // 0x08(0x08)
	float BlendOutTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct UBlendProfile* BlendOutProfile; // 0x18(0x08)
};

// ScriptStruct Engine.RootMotionExtractionStep
// Size: 0x10 (Inherited: 0x00)
struct FRootMotionExtractionStep {
	struct UAnimSequence* AnimSequence; // 0x00(0x08)
	float StartPosition; // 0x08(0x04)
	float EndPosition; // 0x0c(0x04)
};

// ScriptStruct Engine.AnimSegment
// Size: 0x20 (Inherited: 0x00)
struct FAnimSegment {
	struct UAnimSequenceBase* AnimReference; // 0x00(0x08)
	float StartPos; // 0x08(0x04)
	float AnimStartTime; // 0x0c(0x04)
	float AnimEndTime; // 0x10(0x04)
	float AnimPlayRate; // 0x14(0x04)
	int32_t LoopingCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.AnimTrack
// Size: 0x10 (Inherited: 0x00)
struct FAnimTrack {
	struct TArray<struct FAnimSegment> AnimSegments; // 0x00(0x10)
};

// ScriptStruct Engine.AnimExecutionContext
// Size: 0x10 (Inherited: 0x00)
struct FAnimExecutionContext {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct Engine.AnimInitializationContext
// Size: 0x10 (Inherited: 0x10)
struct FAnimInitializationContext : FAnimExecutionContext {
};

// ScriptStruct Engine.AnimUpdateContext
// Size: 0x10 (Inherited: 0x10)
struct FAnimUpdateContext : FAnimExecutionContext {
};

// ScriptStruct Engine.AnimPoseContext
// Size: 0x10 (Inherited: 0x10)
struct FAnimPoseContext : FAnimExecutionContext {
};

// ScriptStruct Engine.AnimComponentSpacePoseContext
// Size: 0x10 (Inherited: 0x10)
struct FAnimComponentSpacePoseContext : FAnimExecutionContext {
};

// ScriptStruct Engine.A2Pose
// Size: 0x10 (Inherited: 0x00)
struct FA2Pose {
	struct TArray<struct FTransform> Bones; // 0x00(0x10)
};

// ScriptStruct Engine.A2CSPose
// Size: 0x28 (Inherited: 0x10)
struct FA2CSPose : FA2Pose {
	char pad_10[0x8]; // 0x10(0x08)
	struct TArray<char> ComponentSpaceFlags; // 0x18(0x10)
};

// ScriptStruct Engine.CompositeSection
// Size: 0x58 (Inherited: 0x30)
struct FCompositeSection : FAnimLinkableElement {
	struct FName SectionName; // 0x30(0x0c)
	struct FName NextSectionName; // 0x3c(0x0c)
	struct TArray<struct UAnimMetaData*> MetaData; // 0x48(0x10)
};

// ScriptStruct Engine.SlotAnimationTrack
// Size: 0x20 (Inherited: 0x00)
struct FSlotAnimationTrack {
	struct FName SlotName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FAnimTrack AnimTrack; // 0x10(0x10)
};

// ScriptStruct Engine.BranchingPoint
// Size: 0x40 (Inherited: 0x30)
struct FBranchingPoint : FAnimLinkableElement {
	struct FName EventName; // 0x30(0x0c)
	float TriggerTimeOffset; // 0x3c(0x04)
};

// ScriptStruct Engine.BranchingPointMarker
// Size: 0x0c (Inherited: 0x00)
struct FBranchingPointMarker {
	int32_t NotifyIndex; // 0x00(0x04)
	float TriggerTime; // 0x04(0x04)
	enum class EAnimNotifyEventType NotifyEventType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.MontageBlendSettings
// Size: 0x20 (Inherited: 0x00)
struct FMontageBlendSettings {
	struct UBlendProfile* BlendProfile; // 0x00(0x08)
	struct FAlphaBlendArgs Blend; // 0x08(0x10)
	enum class EMontageBlendMode BlendMode; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct Engine.AnimMontageInstance
// Size: 0x1d0 (Inherited: 0x00)
struct FAnimMontageInstance {
	struct UAnimMontage* Montage; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
	bool bPlaying; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float DefaultBlendTimeMultiplier; // 0x2c(0x04)
	char pad_30[0xc8]; // 0x30(0xc8)
	struct TArray<int32_t> NextSections; // 0xf8(0x10)
	struct TArray<int32_t> PrevSections; // 0x108(0x10)
	char pad_118[0x10]; // 0x118(0x10)
	struct TArray<struct FAnimNotifyEvent> ActiveStateBranchingPoints; // 0x128(0x10)
	float Position; // 0x138(0x04)
	float PlayRate; // 0x13c(0x04)
	struct FAlphaBlend Blend; // 0x140(0x30)
	char pad_170[0x3c]; // 0x170(0x3c)
	int32_t DisableRootMotionCount; // 0x1ac(0x04)
	char pad_1B0[0x20]; // 0x1b0(0x20)
};

// ScriptStruct Engine.AnimNodeData
// Size: 0x28 (Inherited: 0x00)
struct FAnimNodeData {
	struct TScriptInterface<IAnimClassInterface> AnimClassInterface; // 0x00(0x10)
	struct TArray<uint32_t> Entries; // 0x10(0x10)
	int32_t NodeIndex; // 0x20(0x04)
	uint32_t Flags; // 0x24(0x04)
};

// ScriptStruct Engine.AnimNodeStructData
// Size: 0x58 (Inherited: 0x00)
struct FAnimNodeStructData {
	struct TMap<struct FName, int32_t> NameToIndexMap; // 0x00(0x50)
	int32_t NumProperties; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct Engine.AnimNodeFunctionRef
// Size: 0x28 (Inherited: 0x00)
struct FAnimNodeFunctionRef {
	struct FName ClassName; // 0x00(0x0c)
	struct FName FunctionName; // 0x0c(0x0c)
	ClassPtrProperty Class; // 0x18(0x08)
	struct UFunction* Function; // 0x20(0x08)
};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// Size: 0x20 (Inherited: 0x10)
struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	struct FComponentSpacePoseLink ComponentPose; // 0x10(0x10)
};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// Size: 0x20 (Inherited: 0x10)
struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	struct FPoseLink LocalPose; // 0x10(0x10)
};

// ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
// Size: 0xd8 (Inherited: 0x10)
struct FAnimNode_ApplyMeshSpaceAdditive : FAnimNode_Base {
	struct FPoseLink base; // 0x10(0x10)
	struct FPoseLink Additive; // 0x20(0x10)
	enum class EAnimAlphaInputType AlphaInputType; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float Alpha; // 0x34(0x04)
	char bAlphaBoolEnabled : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40(0x48)
	struct FName AlphaCurveName; // 0x88(0x0c)
	struct FInputScaleBias AlphaScaleBias; // 0x94(0x08)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x9c(0x30)
	int32_t LODThreshold; // 0xcc(0x04)
	char pad_D0[0x8]; // 0xd0(0x08)
};

// ScriptStruct Engine.AnimNode_CustomProperty
// Size: 0x58 (Inherited: 0x10)
struct FAnimNode_CustomProperty : FAnimNode_Base {
	struct TArray<struct FName> SourcePropertyNames; // 0x10(0x10)
	struct TArray<struct FName> DestPropertyNames; // 0x20(0x10)
	struct UObject* TargetInstance; // 0x30(0x08)
	char pad_38[0x20]; // 0x38(0x20)
};

// ScriptStruct Engine.AnimNode_DeadBlending
// Size: 0x4e0 (Inherited: 0x10)
struct FAnimNode_DeadBlending : FAnimNode_Base {
	char pad_10[0x8]; // 0x10(0x08)
	struct FPoseLink Source; // 0x18(0x10)
	bool bAlwaysUseDefaultBlendSettings; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float DefaultBlendDuration; // 0x2c(0x04)
	struct UBlendProfile* DefaultBlendProfile; // 0x30(0x08)
	enum class EAlphaBlendOption DefaultBlendMode; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UCurveFloat* DefaultCustomBlendCurve; // 0x40(0x08)
	float BlendTimeMultiplier; // 0x48(0x04)
	bool bLinearlyInterpolateScales; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct TArray<struct FName> FilteredCurves; // 0x50(0x10)
	struct TArray<struct FBoneReference> FilteredBones; // 0x60(0x10)
	float ExtrapolationHalfLife; // 0x70(0x04)
	float ExtrapolationHalfLifeMin; // 0x74(0x04)
	float ExtrapolationHalfLifeMax; // 0x78(0x04)
	float MaximumTranslationVelocity; // 0x7c(0x04)
	float MaximumRotationVelocity; // 0x80(0x04)
	float MaximumScaleVelocity; // 0x84(0x04)
	float MaximumCurveVelocity; // 0x88(0x04)
	bool bPreallocateMemory; // 0x8c(0x01)
	char pad_8D[0x1f3]; // 0x8d(0x1f3)
	struct TArray<struct FInertializationRequest> RequestQueue; // 0x280(0x10)
	char pad_290[0x220]; // 0x290(0x220)
	struct UObject* InertializationRequestAnimInstance; // 0x4b0(0x08)
	char pad_4B8[0x18]; // 0x4b8(0x18)
	struct UCurveFloat* InertializationCustomBlendCurve; // 0x4d0(0x08)
	char pad_4D8[0x8]; // 0x4d8(0x08)
};

// ScriptStruct Engine.InertializationRequest
// Size: 0x48 (Inherited: 0x00)
struct FInertializationRequest {
	float Duration; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UBlendProfile* BlendProfile; // 0x08(0x08)
	bool bUseBlendMode; // 0x10(0x01)
	enum class EAlphaBlendOption BlendMode; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct UCurveFloat* CustomBlendCurve; // 0x18(0x08)
	struct FText Description; // 0x20(0x18)
	int32_t NodeId; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UObject* AnimInstance; // 0x40(0x08)
};

// ScriptStruct Engine.InertializationPose
// Size: 0xc0 (Inherited: 0x00)
struct FInertializationPose {
	char pad_0[0xc0]; // 0x00(0xc0)
};

// ScriptStruct Engine.InertializationBoneDiff
// Size: 0x60 (Inherited: 0x00)
struct FInertializationBoneDiff {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct Engine.InertializationPoseDiff
// Size: 0x38 (Inherited: 0x00)
struct FInertializationPoseDiff {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct Engine.AnimNode_Inertialization
// Size: 0x110 (Inherited: 0x10)
struct FAnimNode_Inertialization : FAnimNode_Base {
	struct FPoseLink Source; // 0x10(0x10)
	struct UBlendProfile* DefaultBlendProfile; // 0x20(0x08)
	struct TArray<struct FName> FilteredCurves; // 0x28(0x10)
	bool bPreallocateMemory; // 0x38(0x01)
	char pad_39[0x1f]; // 0x39(0x1f)
	struct TArray<struct FInertializationRequest> RequestQueue; // 0x58(0x10)
	char pad_68[0x30]; // 0x68(0x30)
	struct UObject* InertializationRequestAnimInstance; // 0x98(0x08)
	char pad_A0[0x70]; // 0xa0(0x70)
};

// ScriptStruct Engine.AnimNode_LinkedAnimGraph
// Size: 0xb8 (Inherited: 0x58)
struct FAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty {
	struct TArray<struct FPoseLink> InputPoses; // 0x58(0x10)
	struct TArray<struct FName> InputPoseNames; // 0x68(0x10)
	struct UAnimInstance* InstanceClass; // 0x78(0x08)
	char pad_80[0x18]; // 0x80(0x18)
	struct UBlendProfile* PendingBlendOutProfile; // 0x98(0x08)
	char pad_A0[0x8]; // 0xa0(0x08)
	struct UBlendProfile* PendingBlendInProfile; // 0xa8(0x08)
	char bReceiveNotifiesFromLinkedInstances : 1; // 0xb0(0x01)
	char bPropagateNotifiesToLinkedInstances : 1; // 0xb0(0x01)
	char pad_B0_2 : 6; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// ScriptStruct Engine.AnimNode_LinkedAnimLayer
// Size: 0xd0 (Inherited: 0xb8)
struct FAnimNode_LinkedAnimLayer : FAnimNode_LinkedAnimGraph {
	struct UAnimLayerInterface* Interface; // 0xb8(0x08)
	struct FName Layer; // 0xc0(0x0c)
	char pad_CC[0x4]; // 0xcc(0x04)
};

// ScriptStruct Engine.AnimNode_LinkedInputPose
// Size: 0xc0 (Inherited: 0x10)
struct FAnimNode_LinkedInputPose : FAnimNode_Base {
	struct FName Name; // 0x10(0x0c)
	struct FName Graph; // 0x1c(0x0c)
	struct FPoseLink InputPose; // 0x28(0x10)
	char pad_38[0x88]; // 0x38(0x88)
};

// ScriptStruct Engine.AnimNode_SaveCachedPose
// Size: 0x80 (Inherited: 0x10)
struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	struct FPoseLink Pose; // 0x10(0x10)
	struct FName CachePoseName; // 0x20(0x0c)
	char pad_2C[0x54]; // 0x2c(0x54)
};

// ScriptStruct Engine.AnimNode_SequencePlayerBase
// Size: 0x40 (Inherited: 0x38)
struct FAnimNode_SequencePlayerBase : FAnimNode_AssetPlayerBase {
	struct FInputScaleBiasClampState PlayRateScaleBiasClampState; // 0x38(0x08)
};

// ScriptStruct Engine.InputScaleBiasClampState
// Size: 0x08 (Inherited: 0x00)
struct FInputScaleBiasClampState {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.AnimNode_SequencePlayer
// Size: 0x48 (Inherited: 0x40)
struct FAnimNode_SequencePlayer : FAnimNode_SequencePlayerBase {
	struct UAnimSequenceBase* Sequence; // 0x40(0x08)
};

// ScriptStruct Engine.AnimNode_SequencePlayer_Standalone
// Size: 0x98 (Inherited: 0x40)
struct FAnimNode_SequencePlayer_Standalone : FAnimNode_SequencePlayerBase {
	struct FName GroupName; // 0x40(0x0c)
	enum class EAnimGroupRole GroupRole; // 0x4c(0x01)
	enum class EAnimSyncMethod Method; // 0x4d(0x01)
	bool bIgnoreForRelevancyTest; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
	struct UAnimSequenceBase* Sequence; // 0x50(0x08)
	float PlayRateBasis; // 0x58(0x04)
	float PlayRate; // 0x5c(0x04)
	struct FInputScaleBiasClampConstants PlayRateScaleBiasClampConstants; // 0x60(0x2c)
	float StartPosition; // 0x8c(0x04)
	bool bLoopAnimation; // 0x90(0x01)
	bool bStartFromMatchingPose; // 0x91(0x01)
	char pad_92[0x6]; // 0x92(0x06)
};

// ScriptStruct Engine.InputScaleBiasClampConstants
// Size: 0x2c (Inherited: 0x00)
struct FInputScaleBiasClampConstants {
	bool bMapRange; // 0x00(0x01)
	bool bClampResult; // 0x01(0x01)
	bool bInterpResult; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FInputRange InRange; // 0x04(0x08)
	struct FInputRange OutRange; // 0x0c(0x08)
	float Scale; // 0x14(0x04)
	float Bias; // 0x18(0x04)
	float ClampMin; // 0x1c(0x04)
	float ClampMax; // 0x20(0x04)
	float InterpSpeedIncreasing; // 0x24(0x04)
	float InterpSpeedDecreasing; // 0x28(0x04)
};

// ScriptStruct Engine.AnimationActiveTransitionEntry
// Size: 0xc8 (Inherited: 0x00)
struct FAnimationActiveTransitionEntry {
	char pad_0[0xb8]; // 0x00(0xb8)
	struct UBlendProfile* BlendProfile; // 0xb8(0x08)
	char pad_C0[0x8]; // 0xc0(0x08)
};

// ScriptStruct Engine.AnimationPotentialTransition
// Size: 0x30 (Inherited: 0x00)
struct FAnimationPotentialTransition {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Engine.AnimNode_StateMachine
// Size: 0x100 (Inherited: 0x10)
struct FAnimNode_StateMachine : FAnimNode_Base {
	int32_t StateMachineIndexInClass; // 0x10(0x04)
	int32_t MaxTransitionsPerFrame; // 0x14(0x04)
	int32_t MaxTransitionsRequests; // 0x18(0x04)
	bool bSkipFirstUpdateTransition; // 0x1c(0x01)
	bool bReinitializeOnBecomingRelevant; // 0x1d(0x01)
	bool bCreateNotifyMetaData; // 0x1e(0x01)
	bool bAllowConduitEntryStates; // 0x1f(0x01)
	char pad_20[0xe0]; // 0x20(0xe0)
};

// ScriptStruct Engine.AnimNode_StateResult
// Size: 0x20 (Inherited: 0x20)
struct FAnimNode_StateResult : FAnimNode_Root {
};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// Size: 0xa8 (Inherited: 0x10)
struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	char pad_10[0x78]; // 0x10(0x78)
	int32_t FramesToCachePose; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	enum class EEvaluatorDataSource DataSource; // 0x90(0x01)
	enum class EEvaluatorMode EvaluatorMode; // 0x91(0x01)
	char pad_92[0x16]; // 0x92(0x16)
};

// ScriptStruct Engine.AnimNode_TransitionResult
// Size: 0x28 (Inherited: 0x10)
struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x10(0x01)
	char pad_11[0x17]; // 0x11(0x17)
};

// ScriptStruct Engine.AnimNode_UseCachedPose
// Size: 0x30 (Inherited: 0x10)
struct FAnimNode_UseCachedPose : FAnimNode_Base {
	struct FPoseLink LinkToCachingNode; // 0x10(0x10)
	struct FName CachePoseName; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.AnimNotifyEventReference
// Size: 0x30 (Inherited: 0x00)
struct FAnimNotifyEventReference {
	char pad_0[0x18]; // 0x00(0x18)
	struct UMirrorDataTable* MirrorTable; // 0x18(0x08)
	struct UObject* NotifySource; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.AnimNotifyArray
// Size: 0x10 (Inherited: 0x00)
struct FAnimNotifyArray {
	struct TArray<struct FAnimNotifyEventReference> Notifies; // 0x00(0x10)
};

// ScriptStruct Engine.AnimNotifyContext
// Size: 0x18 (Inherited: 0x00)
struct FAnimNotifyContext {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct Engine.AnimNotifyQueue
// Size: 0x80 (Inherited: 0x00)
struct FAnimNotifyQueue {
	char pad_0[0x20]; // 0x00(0x20)
	struct TArray<struct FAnimNotifyEventReference> AnimNotifies; // 0x20(0x10)
	struct TMap<struct FName, struct FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x30(0x50)
};

// ScriptStruct Engine.AnimSequenceTrackContainer
// Size: 0x20 (Inherited: 0x00)
struct FAnimSequenceTrackContainer {
	struct TArray<struct FRawAnimSequenceTrack> AnimationTracks; // 0x00(0x10)
	struct TArray<struct FName> TrackNames; // 0x10(0x10)
};

// ScriptStruct Engine.TranslationTrack
// Size: 0x20 (Inherited: 0x00)
struct FTranslationTrack {
	struct TArray<struct FVector3f> PosKeys; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.RotationTrack
// Size: 0x20 (Inherited: 0x00)
struct FRotationTrack {
	struct TArray<struct FQuat4f> RotKeys; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.ScaleTrack
// Size: 0x20 (Inherited: 0x00)
struct FScaleTrack {
	struct TArray<struct FVector3f> ScaleKeys; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.CurveTrack
// Size: 0x20 (Inherited: 0x00)
struct FCurveTrack {
	struct FName CurveName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<float> CurveWeights; // 0x10(0x10)
};

// ScriptStruct Engine.CompressedTrack
// Size: 0x38 (Inherited: 0x00)
struct FCompressedTrack {
	struct TArray<char> ByteStream; // 0x00(0x10)
	struct TArray<float> Times; // 0x10(0x10)
	float Mins[0x3]; // 0x20(0x0c)
	float Ranges[0x3]; // 0x2c(0x0c)
};

// ScriptStruct Engine.AnimSetMeshLinkup
// Size: 0x10 (Inherited: 0x00)
struct FAnimSetMeshLinkup {
	struct TArray<int32_t> BoneToTrackTable; // 0x00(0x10)
};

// ScriptStruct Engine.AnimNode_SingleNode
// Size: 0x38 (Inherited: 0x10)
struct FAnimNode_SingleNode : FAnimNode_Base {
	struct FPoseLink SourcePose; // 0x10(0x10)
	char pad_20[0x18]; // 0x20(0x18)
};

// ScriptStruct Engine.AnimSingleNodeInstanceProxy
// Size: 0x830 (Inherited: 0x730)
struct FAnimSingleNodeInstanceProxy : FAnimInstanceProxy {
	char pad_730[0x100]; // 0x730(0x100)
};

// ScriptStruct Engine.AnimationTransitionRule
// Size: 0x14 (Inherited: 0x00)
struct FAnimationTransitionRule {
	struct FName RuleToExecute; // 0x00(0x0c)
	bool TransitionReturnVal; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t TransitionIndex; // 0x10(0x04)
};

// ScriptStruct Engine.AnimationStateBase
// Size: 0x0c (Inherited: 0x00)
struct FAnimationStateBase {
	struct FName StateName; // 0x00(0x0c)
};

// ScriptStruct Engine.AnimationState
// Size: 0x38 (Inherited: 0x0c)
struct FAnimationState : FAnimationStateBase {
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FAnimationTransitionRule> Transitions; // 0x10(0x10)
	int32_t StateRootNodeIndex; // 0x20(0x04)
	int32_t StartNotify; // 0x24(0x04)
	int32_t EndNotify; // 0x28(0x04)
	int32_t FullyBlendedNotify; // 0x2c(0x04)
	int32_t FullyLeftNotify; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Engine.AnimationTransitionBetweenStates
// Size: 0x40 (Inherited: 0x0c)
struct FAnimationTransitionBetweenStates : FAnimationStateBase {
	int32_t PreviousState; // 0x0c(0x04)
	int32_t NextState; // 0x10(0x04)
	float CrossfadeDuration; // 0x14(0x04)
	int32_t StartNotify; // 0x18(0x04)
	int32_t EndNotify; // 0x1c(0x04)
	int32_t InterruptNotify; // 0x20(0x04)
	enum class EAlphaBlendOption BlendMode; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct UCurveFloat* CustomCurve; // 0x28(0x08)
	struct UBlendProfile* BlendProfile; // 0x30(0x08)
	enum class ETransitionLogicType LogicType; // 0x38(0x01)
	bool bTransitionDisabled; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct Engine.BakedStateExitTransition
// Size: 0x30 (Inherited: 0x00)
struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; // 0x00(0x04)
	int32_t CustomResultNodeIndex; // 0x04(0x04)
	int32_t TransitionIndex; // 0x08(0x04)
	bool bDesiredTransitionReturnValue; // 0x0c(0x01)
	bool bAutomaticRemainingTimeRule; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	float AutomaticRuleTriggerTime; // 0x10(0x04)
	struct FName SyncGroupNameToRequireValidMarkersRule; // 0x14(0x0c)
	struct TArray<int32_t> PoseEvaluatorLinks; // 0x20(0x10)
};

// ScriptStruct Engine.BakedAnimationState
// Size: 0x68 (Inherited: 0x00)
struct FBakedAnimationState {
	struct FName StateName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FBakedStateExitTransition> Transitions; // 0x10(0x10)
	int32_t StateRootNodeIndex; // 0x20(0x04)
	int32_t StartNotify; // 0x24(0x04)
	int32_t EndNotify; // 0x28(0x04)
	int32_t FullyBlendedNotify; // 0x2c(0x04)
	int32_t FullyLeftNotify; // 0x30(0x04)
	bool bResetStateOnEnter; // 0x34(0x01)
	bool bIsAConduit; // 0x35(0x01)
	bool bAnimStateDisabled; // 0x36(0x01)
	char pad_37[0x1]; // 0x37(0x01)
	int32_t EntryRuleNodeIndex; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<int32_t> PlayerNodeIndices; // 0x40(0x10)
	struct TArray<int32_t> LayerNodeIndices; // 0x50(0x10)
	bool bAlwaysResetOnEntry; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct Engine.BakedAnimationStateMachine
// Size: 0x30 (Inherited: 0x00)
struct FBakedAnimationStateMachine {
	struct FName MachineName; // 0x00(0x0c)
	int32_t InitialState; // 0x0c(0x04)
	struct TArray<struct FBakedAnimationState> States; // 0x10(0x10)
	struct TArray<struct FAnimationTransitionBetweenStates> Transitions; // 0x20(0x10)
};

// ScriptStruct Engine.AnimSubsystem_Base
// Size: 0x18 (Inherited: 0x08)
struct FAnimSubsystem_Base : FAnimSubsystem {
	struct TArray<struct FExposedValueHandler> ExposedValueHandlers; // 0x08(0x10)
};

// ScriptStruct Engine.ExposedValueHandler
// Size: 0x30 (Inherited: 0x00)
struct FExposedValueHandler {
	struct TArray<struct FExposedValueCopyRecord> CopyRecords; // 0x00(0x10)
	struct UFunction* Function; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
	struct FName BoundFunction; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.ExposedValueCopyRecord
// Size: 0x08 (Inherited: 0x00)
struct FExposedValueCopyRecord {
	int32_t CopyIndex; // 0x00(0x04)
	enum class EPostCopyOperation PostCopyOperation; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.AnimSubsystemInstance_NodeRelevancy
// Size: 0xa8 (Inherited: 0x08)
struct FAnimSubsystemInstance_NodeRelevancy : FAnimSubsystemInstance {
	char pad_8[0xa0]; // 0x08(0xa0)
};

// ScriptStruct Engine.AnimSubsystem_PropertyAccess
// Size: 0x80 (Inherited: 0x08)
struct FAnimSubsystem_PropertyAccess : FAnimSubsystem {
	struct FPropertyAccessLibrary Library; // 0x08(0x78)
};

// ScriptStruct Engine.PropertyAccessLibrary
// Size: 0x78 (Inherited: 0x00)
struct FPropertyAccessLibrary {
	struct TArray<struct FPropertyAccessSegment> PathSegments; // 0x00(0x10)
	struct TArray<struct FPropertyAccessPath> SrcPaths; // 0x10(0x10)
	struct TArray<struct FPropertyAccessPath> DestPaths; // 0x20(0x10)
	struct TArray<struct FPropertyAccessCopyBatch> CopyBatchArray; // 0x30(0x10)
	char pad_40[0x38]; // 0x40(0x38)
};

// ScriptStruct Engine.PropertyAccessCopyBatch
// Size: 0x10 (Inherited: 0x00)
struct FPropertyAccessCopyBatch {
	struct TArray<struct FPropertyAccessCopy> Copies; // 0x00(0x10)
};

// ScriptStruct Engine.PropertyAccessCopy
// Size: 0x10 (Inherited: 0x00)
struct FPropertyAccessCopy {
	int32_t AccessIndex; // 0x00(0x04)
	int32_t DestAccessStartIndex; // 0x04(0x04)
	int32_t DestAccessEndIndex; // 0x08(0x04)
	enum class EPropertyAccessCopyType Type; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.PropertyAccessPath
// Size: 0x08 (Inherited: 0x00)
struct FPropertyAccessPath {
	int32_t PathSegmentStartIndex; // 0x00(0x04)
	int32_t PathSegmentCount; // 0x04(0x04)
};

// ScriptStruct Engine.PropertyAccessSegment
// Size: 0x48 (Inherited: 0x00)
struct FPropertyAccessSegment {
	struct FName Name; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UStruct* Struct; // 0x10(0x08)
	struct TFieldPath<FProperty> Property; // 0x18(0x20)
	struct UFunction* Function; // 0x38(0x08)
	int32_t ArrayIndex; // 0x40(0x04)
	uint16_t Flags; // 0x44(0x02)
	char pad_46[0x2]; // 0x46(0x02)
};

// ScriptStruct Engine.LinkedAnimLayerInstanceData
// Size: 0x60 (Inherited: 0x00)
struct FLinkedAnimLayerInstanceData {
	struct UAnimInstance* Instance; // 0x00(0x08)
	struct TMap<struct FName, struct TWeakObjectPtr<struct UAnimInstance>> LinkedFunctions; // 0x08(0x50)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct Engine.LinkedAnimLayerClassData
// Size: 0x20 (Inherited: 0x00)
struct FLinkedAnimLayerClassData {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FLinkedAnimLayerInstanceData> InstancesData; // 0x08(0x10)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct Engine.AnimSubsystem_SharedLinkedAnimLayers
// Size: 0x28 (Inherited: 0x08)
struct FAnimSubsystem_SharedLinkedAnimLayers : FAnimSubsystemInstance {
	struct TArray<struct FLinkedAnimLayerClassData> ClassesData; // 0x08(0x10)
	struct TArray<struct UAnimInstance*> PersistentClasses; // 0x18(0x10)
};

// ScriptStruct Engine.AnimSubsystem_Tag
// Size: 0x60 (Inherited: 0x08)
struct FAnimSubsystem_Tag : FAnimSubsystem {
	struct TMap<struct FName, int32_t> NodeIndices; // 0x08(0x50)
	char pad_58[0x8]; // 0x58(0x08)
};

// ScriptStruct Engine.AssetMapping
// Size: 0x10 (Inherited: 0x00)
struct FAssetMapping {
	struct UAnimationAsset* SourceAsset; // 0x00(0x08)
	struct UAnimationAsset* TargetAsset; // 0x08(0x08)
};

// ScriptStruct Engine.BlendProfileBoneEntry
// Size: 0x18 (Inherited: 0x00)
struct FBlendProfileBoneEntry {
	struct FBoneReference BoneReference; // 0x00(0x14)
	float BlendScale; // 0x14(0x04)
};

// ScriptStruct Engine.CachedAnimStateData
// Size: 0x24 (Inherited: 0x00)
struct FCachedAnimStateData {
	struct FName StateMachineName; // 0x00(0x0c)
	struct FName StateName; // 0x0c(0x0c)
	char pad_18[0xc]; // 0x18(0x0c)
};

// ScriptStruct Engine.CachedAnimStateArray
// Size: 0x18 (Inherited: 0x00)
struct FCachedAnimStateArray {
	struct TArray<struct FCachedAnimStateData> States; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct Engine.CachedAnimAssetPlayerData
// Size: 0x20 (Inherited: 0x00)
struct FCachedAnimAssetPlayerData {
	struct FName StateMachineName; // 0x00(0x0c)
	struct FName StateName; // 0x0c(0x0c)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct Engine.CachedAnimRelevancyData
// Size: 0x24 (Inherited: 0x00)
struct FCachedAnimRelevancyData {
	struct FName StateMachineName; // 0x00(0x0c)
	struct FName StateName; // 0x0c(0x0c)
	char pad_18[0xc]; // 0x18(0x0c)
};

// ScriptStruct Engine.CachedAnimTransitionData
// Size: 0x30 (Inherited: 0x00)
struct FCachedAnimTransitionData {
	struct FName StateMachineName; // 0x00(0x0c)
	struct FName FromStateName; // 0x0c(0x0c)
	struct FName ToStateName; // 0x18(0x0c)
	char pad_24[0xc]; // 0x24(0x0c)
};

// ScriptStruct Engine.NamedCurveValue
// Size: 0x10 (Inherited: 0x00)
struct FNamedCurveValue {
	struct FName Name; // 0x00(0x0c)
	float Value; // 0x0c(0x04)
};

// ScriptStruct Engine.InputClampConstants
// Size: 0x14 (Inherited: 0x00)
struct FInputClampConstants {
	bool bClampResult; // 0x00(0x01)
	bool bInterpResult; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float ClampMin; // 0x04(0x04)
	float ClampMax; // 0x08(0x04)
	float InterpSpeedIncreasing; // 0x0c(0x04)
	float InterpSpeedDecreasing; // 0x10(0x04)
};

// ScriptStruct Engine.InputClampState
// Size: 0x08 (Inherited: 0x00)
struct FInputClampState {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.MirrorTableRow
// Size: 0x28 (Inherited: 0x08)
struct FMirrorTableRow : FTableRowBase {
	struct FName Name; // 0x08(0x0c)
	struct FName MirroredName; // 0x14(0x0c)
	enum class EMirrorRowType MirrorEntryType; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.MirrorFindReplaceExpression
// Size: 0x1c (Inherited: 0x00)
struct FMirrorFindReplaceExpression {
	struct FName FindExpression; // 0x00(0x0c)
	struct FName ReplaceExpression; // 0x0c(0x0c)
	enum class EMirrorFindReplaceMethod FindReplaceMethod; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct Engine.TrajectorySample
// Size: 0x90 (Inherited: 0x00)
struct FTrajectorySample {
	float AccumulatedSeconds; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FTransform Transform; // 0x10(0x60)
	struct FVector LinearVelocity; // 0x70(0x18)
	char pad_88[0x8]; // 0x88(0x08)
};

// ScriptStruct Engine.TrajectorySampleRange
// Size: 0x10 (Inherited: 0x00)
struct FTrajectorySampleRange {
	struct TArray<struct FTrajectorySample> Samples; // 0x00(0x10)
};

// ScriptStruct Engine.NodeItem
// Size: 0x70 (Inherited: 0x00)
struct FNodeItem {
	struct FName ParentName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FTransform Transform; // 0x10(0x60)
};

// ScriptStruct Engine.PoseData
// Size: 0x20 (Inherited: 0x00)
struct FPoseData {
	struct TArray<struct FTransform> LocalSpacePose; // 0x00(0x10)
	struct TArray<float> CurveData; // 0x10(0x10)
};

// ScriptStruct Engine.PoseAssetInfluence
// Size: 0x08 (Inherited: 0x00)
struct FPoseAssetInfluence {
	int32_t PoseIndex; // 0x00(0x04)
	int32_t BoneTransformIndex; // 0x04(0x04)
};

// ScriptStruct Engine.PoseAssetInfluences
// Size: 0x10 (Inherited: 0x00)
struct FPoseAssetInfluences {
	struct TArray<struct FPoseAssetInfluence> Influences; // 0x00(0x10)
};

// ScriptStruct Engine.PoseDataContainer
// Size: 0x70 (Inherited: 0x00)
struct FPoseDataContainer {
	struct TArray<struct FName> PoseFNames; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
	struct TArray<struct FName> Tracks; // 0x20(0x10)
	struct TArray<int32_t> TrackBoneIndices; // 0x30(0x10)
	struct TArray<struct FPoseAssetInfluences> TrackPoseInfluenceIndices; // 0x40(0x10)
	struct TArray<struct FPoseData> Poses; // 0x50(0x10)
	struct TArray<struct FAnimCurveBase> Curves; // 0x60(0x10)
};

// ScriptStruct Engine.PreviewAttachedObjectPair
// Size: 0x40 (Inherited: 0x00)
struct FPreviewAttachedObjectPair {
	struct TSoftObjectPtr<UObject> AttachedObject; // 0x00(0x30)
	struct FName AttachedTo; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct Engine.PreviewAssetAttachContainer
// Size: 0x10 (Inherited: 0x00)
struct FPreviewAssetAttachContainer {
	struct TArray<struct FPreviewAttachedObjectPair> AttachedObjects; // 0x00(0x10)
};

// ScriptStruct Engine.PreviewMeshCollectionEntry
// Size: 0x60 (Inherited: 0x00)
struct FPreviewMeshCollectionEntry {
	struct TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x00(0x30)
	struct TSoftObjectPtr<UAnimBlueprint> AnimBlueprint; // 0x30(0x30)
};

// ScriptStruct Engine.Node
// Size: 0xa0 (Inherited: 0x00)
struct FNode {
	struct FName Name; // 0x00(0x0c)
	struct FName ParentName; // 0x0c(0x0c)
	char pad_18[0x8]; // 0x18(0x08)
	struct FTransform Transform; // 0x20(0x60)
	struct FString DisplayName; // 0x80(0x10)
	bool bAdvanced; // 0x90(0x01)
	char pad_91[0xf]; // 0x91(0x0f)
};

// ScriptStruct Engine.RigTransformConstraint
// Size: 0x14 (Inherited: 0x00)
struct FRigTransformConstraint {
	enum class EConstraintTransform TranformType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName ParentSpace; // 0x04(0x0c)
	float Weight; // 0x10(0x04)
};

// ScriptStruct Engine.TransformBaseConstraint
// Size: 0x10 (Inherited: 0x00)
struct FTransformBaseConstraint {
	struct TArray<struct FRigTransformConstraint> TransformConstraints; // 0x00(0x10)
};

// ScriptStruct Engine.TransformBase
// Size: 0x30 (Inherited: 0x00)
struct FTransformBase {
	struct FName Node; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FTransformBaseConstraint Constraints[0x2]; // 0x10(0x20)
};

// ScriptStruct Engine.SkeletalMeshVertexAttributeInfo
// Size: 0x14 (Inherited: 0x00)
struct FSkeletalMeshVertexAttributeInfo {
	struct FPerPlatformBool EnabledForRender; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x0c)
	enum class ESkeletalMeshVertexAttributeDataType DataType; // 0x10(0x04)
};

// ScriptStruct Engine.PerPlatformBool
// Size: 0x01 (Inherited: 0x00)
struct FPerPlatformBool {
	bool Default; // 0x00(0x01)
};

// ScriptStruct Engine.SkeletonToMeshLinkup
// Size: 0x20 (Inherited: 0x00)
struct FSkeletonToMeshLinkup {
	struct TArray<int32_t> SkeletonToMeshTable; // 0x00(0x10)
	struct TArray<int32_t> MeshToSkeletonTable; // 0x10(0x10)
};

// ScriptStruct Engine.BoneNode
// Size: 0x01 (Inherited: 0x00)
struct FBoneNode {
	enum class EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0x00(0x01)
};

// ScriptStruct Engine.ReferencePose
// Size: 0x20 (Inherited: 0x00)
struct FReferencePose {
	struct FName PoseName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FTransform> ReferencePose; // 0x10(0x10)
};

// ScriptStruct Engine.BoneReductionSetting
// Size: 0x10 (Inherited: 0x00)
struct FBoneReductionSetting {
	struct TArray<struct FName> BonesToRemove; // 0x00(0x10)
};

// ScriptStruct Engine.NameMapping
// Size: 0x18 (Inherited: 0x00)
struct FNameMapping {
	struct FName NodeName; // 0x00(0x0c)
	struct FName BoneName; // 0x0c(0x0c)
};

// ScriptStruct Engine.RigConfiguration
// Size: 0x18 (Inherited: 0x00)
struct FRigConfiguration {
	struct URig* Rig; // 0x00(0x08)
	struct TArray<struct FNameMapping> BoneMappingTable; // 0x08(0x10)
};

// ScriptStruct Engine.AnimSlotGroup
// Size: 0x20 (Inherited: 0x00)
struct FAnimSlotGroup {
	struct FName GroupName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FName> SlotNames; // 0x10(0x10)
};

// ScriptStruct Engine.VirtualBone
// Size: 0x24 (Inherited: 0x00)
struct FVirtualBone {
	struct FName SourceBoneName; // 0x00(0x0c)
	struct FName TargetBoneName; // 0x0c(0x0c)
	struct FName VirtualBoneName; // 0x18(0x0c)
};

// ScriptStruct Engine.SkinWeightProfileInfo
// Size: 0x14 (Inherited: 0x00)
struct FSkinWeightProfileInfo {
	struct FName Name; // 0x00(0x0c)
	struct FPerPlatformBool DefaultProfile; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FPerPlatformInt DefaultProfileFromLODIndex; // 0x10(0x04)
};

// ScriptStruct Engine.SkinWeightProfileManagerTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FSkinWeightProfileManagerTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.SmartNameMapping
// Size: 0x70 (Inherited: 0x00)
struct FSmartNameMapping {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct Engine.SmartNameContainer
// Size: 0x50 (Inherited: 0x00)
struct FSmartNameContainer {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Engine.SmartName
// Size: 0x10 (Inherited: 0x00)
struct FSmartName {
	struct FName DisplayName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.TimeStretchCurveMarker
// Size: 0x10 (Inherited: 0x00)
struct FTimeStretchCurveMarker {
	float Time[0x3]; // 0x00(0x0c)
	float Alpha; // 0x0c(0x04)
};

// ScriptStruct Engine.TimeStretchCurve
// Size: 0x28 (Inherited: 0x00)
struct FTimeStretchCurve {
	float SamplingRate; // 0x00(0x04)
	float CurveValueMinPrecision; // 0x04(0x04)
	struct TArray<struct FTimeStretchCurveMarker> Markers; // 0x08(0x10)
	float Sum_dT_i_by_C_i[0x3]; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.TimeStretchCurveInstance
// Size: 0x30 (Inherited: 0x00)
struct FTimeStretchCurveInstance {
	bool bHasValidData; // 0x00(0x01)
	char pad_1[0x2f]; // 0x01(0x2f)
};

// ScriptStruct Engine.AnimGroupInfo
// Size: 0x1c (Inherited: 0x00)
struct FAnimGroupInfo {
	struct FName Name; // 0x00(0x0c)
	struct FLinearColor Color; // 0x0c(0x10)
};

// ScriptStruct Engine.AnimParentNodeAssetOverride
// Size: 0x18 (Inherited: 0x00)
struct FAnimParentNodeAssetOverride {
	struct UAnimationAsset* NewAsset; // 0x00(0x08)
	struct FGuid ParentNodeGuid; // 0x08(0x10)
};

// ScriptStruct Engine.AnimTransitionGroup
// Size: 0x10 (Inherited: 0x00)
struct FAnimTransitionGroup {
	struct FName GroupName; // 0x00(0x0c)
	bool bEnabled; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.AssetCompileData
// Size: 0x08 (Inherited: 0x00)
struct FAssetCompileData {
	struct TWeakObjectPtr<struct UObject> Asset; // 0x00(0x08)
};

// ScriptStruct Engine.PrimaryAssetTypeInfo
// Size: 0x88 (Inherited: 0x00)
struct FPrimaryAssetTypeInfo {
	struct FName PrimaryAssetType; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TSoftClassPtr<UObject> AssetBaseClass; // 0x10(0x30)
	ClassPtrProperty AssetBaseClassLoaded; // 0x40(0x08)
	bool bHasBlueprintClasses; // 0x48(0x01)
	bool bIsEditorOnly; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct TArray<struct FDirectoryPath> Directories; // 0x50(0x10)
	struct TArray<struct FSoftObjectPath> SpecificAssets; // 0x60(0x10)
	struct TArray<struct FString> AssetScanPaths; // 0x70(0x10)
	bool bIsDynamicAsset; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	int32_t NumberOfAssets; // 0x84(0x04)
};

// ScriptStruct Engine.AssetManagerSearchRules
// Size: 0x50 (Inherited: 0x00)
struct FAssetManagerSearchRules {
	struct TArray<struct FString> AssetScanPaths; // 0x00(0x10)
	struct TArray<struct FString> IncludePatterns; // 0x10(0x10)
	struct TArray<struct FString> ExcludePatterns; // 0x20(0x10)
	ClassPtrProperty AssetBaseClass; // 0x30(0x08)
	bool bHasBlueprintClasses; // 0x38(0x01)
	bool bForceSynchronousScan; // 0x39(0x01)
	bool bSkipVirtualPathExpansion; // 0x3a(0x01)
	bool bSkipManagerIncludeCheck; // 0x3b(0x01)
	char pad_3C[0x14]; // 0x3c(0x14)
};

// ScriptStruct Engine.AudioEffectParameters
// Size: 0x08 (Inherited: 0x00)
struct FAudioEffectParameters {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.AudioReverbEffect
// Size: 0x48 (Inherited: 0x08)
struct FAudioReverbEffect : FAudioEffectParameters {
	char pad_8[0x40]; // 0x08(0x40)
};

// ScriptStruct Engine.AudioQualitySettings
// Size: 0x20 (Inherited: 0x00)
struct FAudioQualitySettings {
	struct FText DisplayName; // 0x00(0x18)
	int32_t MaxChannels; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.SoundDebugEntry
// Size: 0x38 (Inherited: 0x00)
struct FSoundDebugEntry {
	struct FName DebugName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FSoftObjectPath Sound; // 0x10(0x28)
};

// ScriptStruct Engine.DefaultAudioBusSettings
// Size: 0x28 (Inherited: 0x00)
struct FDefaultAudioBusSettings {
	struct FSoftObjectPath AudioBus; // 0x00(0x28)
};

// ScriptStruct Engine.AudioVolumeSubmixSendSettings
// Size: 0x18 (Inherited: 0x00)
struct FAudioVolumeSubmixSendSettings {
	enum class EAudioVolumeLocationState ListenerLocationState; // 0x00(0x01)
	enum class EAudioVolumeLocationState SourceLocationState; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FSoundSubmixSendInfo> SubmixSends; // 0x08(0x10)
};

// ScriptStruct Engine.SoundSubmixSendInfo
// Size: 0xb0 (Inherited: 0x00)
struct FSoundSubmixSendInfo {
	enum class ESendLevelControlMethod SendLevelControlMethod; // 0x00(0x01)
	enum class ESubmixSendStage SendStage; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct USoundSubmixBase* SoundSubmix; // 0x08(0x08)
	float SendLevel; // 0x10(0x04)
	bool DisableManualSendClamp; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float MinSendLevel; // 0x18(0x04)
	float MaxSendLevel; // 0x1c(0x04)
	float MinSendDistance; // 0x20(0x04)
	float MaxSendDistance; // 0x24(0x04)
	struct FRuntimeFloatCurve CustomSendLevelCurve; // 0x28(0x88)
};

// ScriptStruct Engine.AudioVolumeSubmixOverrideSettings
// Size: 0x20 (Inherited: 0x00)
struct FAudioVolumeSubmixOverrideSettings {
	struct USoundSubmix* Submix; // 0x00(0x08)
	struct TArray<struct USoundEffectSubmixPreset*> SubmixEffectChain; // 0x08(0x10)
	float CrossfadeTime; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.InteriorSettings
// Size: 0x24 (Inherited: 0x00)
struct FInteriorSettings {
	bool bIsWorldSettings; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ExteriorVolume; // 0x04(0x04)
	float ExteriorTime; // 0x08(0x04)
	float ExteriorLPF; // 0x0c(0x04)
	float ExteriorLPFTime; // 0x10(0x04)
	float InteriorVolume; // 0x14(0x04)
	float InteriorTime; // 0x18(0x04)
	float InteriorLPF; // 0x1c(0x04)
	float InteriorLPFTime; // 0x20(0x04)
};

// ScriptStruct Engine.NodeToCodeAssociation
// Size: 0x14 (Inherited: 0x00)
struct FNodeToCodeAssociation {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct Engine.DebuggingInfoForSingleFunction
// Size: 0x190 (Inherited: 0x00)
struct FDebuggingInfoForSingleFunction {
	char pad_0[0x190]; // 0x00(0x190)
};

// ScriptStruct Engine.PointerToUberGraphFrame
// Size: 0x08 (Inherited: 0x00)
struct FPointerToUberGraphFrame {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.BlueprintDebugData
// Size: 0x01 (Inherited: 0x00)
struct FBlueprintDebugData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.EventGraphFastCallPair
// Size: 0x10 (Inherited: 0x00)
struct FEventGraphFastCallPair {
	struct UFunction* FunctionToPatch; // 0x00(0x08)
	int32_t EventGraphCallOffset; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.BlueprintComponentChangedPropertyInfo
// Size: 0x18 (Inherited: 0x00)
struct FBlueprintComponentChangedPropertyInfo {
	struct FName PropertyName; // 0x00(0x0c)
	int32_t ArrayIndex; // 0x0c(0x04)
	struct UStruct* PropertyScope; // 0x10(0x08)
};

// ScriptStruct Engine.BlueprintCookedComponentInstancingData
// Size: 0x50 (Inherited: 0x00)
struct FBlueprintCookedComponentInstancingData {
	struct TArray<struct FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x00(0x10)
	char pad_10[0x19]; // 0x10(0x19)
	bool bHasValidCookedData; // 0x29(0x01)
	char pad_2A[0x26]; // 0x2a(0x26)
};

// ScriptStruct Engine.BPComponentClassOverride
// Size: 0x18 (Inherited: 0x00)
struct FBPComponentClassOverride {
	struct FName ComponentName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	ClassPtrProperty ComponentClass; // 0x10(0x08)
};

// ScriptStruct Engine.BookmarkJumpToSettings
// Size: 0x01 (Inherited: 0x01)
struct FBookmarkJumpToSettings : FBookmarkBaseJumpToSettings {
};

// ScriptStruct Engine.BuilderPoly
// Size: 0x28 (Inherited: 0x00)
struct FBuilderPoly {
	struct TArray<int32_t> VertexIndices; // 0x00(0x10)
	int32_t Direction; // 0x10(0x04)
	struct FName ItemName; // 0x14(0x0c)
	int32_t PolyFlags; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.CameraLensInterfaceClassSupport
// Size: 0x08 (Inherited: 0x00)
struct FCameraLensInterfaceClassSupport {
	struct AActor* Class; // 0x00(0x08)
};

// ScriptStruct Engine.PooledCameraShakes
// Size: 0x10 (Inherited: 0x00)
struct FPooledCameraShakes {
	struct TArray<struct UCameraShakeBase*> PooledShakes; // 0x00(0x10)
};

// ScriptStruct Engine.ActiveCameraShakeInfo
// Size: 0x18 (Inherited: 0x00)
struct FActiveCameraShakeInfo {
	struct UCameraShakeBase* ShakeInstance; // 0x00(0x08)
	struct TWeakObjectPtr<struct UCameraShakeSourceComponent> ShakeSource; // 0x08(0x08)
	bool bIsCustomInitialized; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Engine.CameraShakeStartParams
// Size: 0x01 (Inherited: 0x00)
struct FCameraShakeStartParams {
	bool bIsRestarting; // 0x00(0x01)
};

// ScriptStruct Engine.CameraShakeUpdateParams
// Size: 0x8f0 (Inherited: 0x00)
struct FCameraShakeUpdateParams {
	float DeltaTime; // 0x00(0x04)
	float ShakeScale; // 0x04(0x04)
	float DynamicScale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMinimalViewInfo POV; // 0x10(0x8e0)
};

// ScriptStruct Engine.CameraShakeScrubParams
// Size: 0x8f0 (Inherited: 0x00)
struct FCameraShakeScrubParams {
	float AbsoluteTime; // 0x00(0x04)
	float ShakeScale; // 0x04(0x04)
	float DynamicScale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMinimalViewInfo POV; // 0x10(0x8e0)
};

// ScriptStruct Engine.CameraShakeUpdateResult
// Size: 0x850 (Inherited: 0x00)
struct FCameraShakeUpdateResult {
	char pad_0[0x850]; // 0x00(0x850)
};

// ScriptStruct Engine.CameraShakeStopParams
// Size: 0x01 (Inherited: 0x00)
struct FCameraShakeStopParams {
	bool bImmediately; // 0x00(0x01)
};

// ScriptStruct Engine.CameraShakeDuration
// Size: 0x08 (Inherited: 0x00)
struct FCameraShakeDuration {
	float Duration; // 0x00(0x04)
	enum class ECameraShakeDurationType Type; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.CameraShakeInfo
// Size: 0x10 (Inherited: 0x00)
struct FCameraShakeInfo {
	struct FCameraShakeDuration Duration; // 0x00(0x08)
	float BlendIn; // 0x08(0x04)
	float BlendOut; // 0x0c(0x04)
};

// ScriptStruct Engine.DummySpacerCameraTypes
// Size: 0x01 (Inherited: 0x00)
struct FDummySpacerCameraTypes {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.RepRootMotionMontage
// Size: 0xd8 (Inherited: 0x00)
struct FRepRootMotionMontage {
	bool bIsActive; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UAnimMontage* AnimMontage; // 0x08(0x08)
	float Position; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FVector_NetQuantize100 Location; // 0x18(0x18)
	struct FRotator Rotation; // 0x30(0x18)
	struct UPrimitiveComponent* MovementBase; // 0x48(0x08)
	struct FName MovementBaseBoneName; // 0x50(0x0c)
	bool bRelativePosition; // 0x5c(0x01)
	bool bRelativeRotation; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
	struct FRootMotionSourceGroup AuthoritativeRootMotion; // 0x60(0x48)
	struct FVector_NetQuantize10 Acceleration; // 0xa8(0x18)
	struct FVector_NetQuantize10 LinearVelocity; // 0xc0(0x18)
};

// ScriptStruct Engine.RootMotionSourceGroup
// Size: 0x48 (Inherited: 0x00)
struct FRootMotionSourceGroup {
	char pad_0[0x28]; // 0x00(0x28)
	char bHasAdditiveSources : 1; // 0x28(0x01)
	char bHasOverrideSources : 1; // 0x28(0x01)
	char bHasOverrideSourcesWithIgnoreZAccumulate : 1; // 0x28(0x01)
	char bIsAdditiveVelocityApplied : 1; // 0x28(0x01)
	char pad_28_4 : 4; // 0x28(0x01)
	struct FRootMotionSourceSettings LastAccumulatedSettings; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FVector_NetQuantize10 LastPreAdditiveVelocity; // 0x30(0x18)
};

// ScriptStruct Engine.RootMotionSourceSettings
// Size: 0x01 (Inherited: 0x00)
struct FRootMotionSourceSettings {
	char Flags; // 0x00(0x01)
};

// ScriptStruct Engine.SimulatedRootMotionReplicatedMove
// Size: 0xe0 (Inherited: 0x00)
struct FSimulatedRootMotionReplicatedMove {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FRepRootMotionMontage RootMotion; // 0x08(0xd8)
};

// ScriptStruct Engine.BasedMovementInfo
// Size: 0x58 (Inherited: 0x00)
struct FBasedMovementInfo {
	uint16_t BaseID; // 0x00(0x02)
	char pad_2[0x6]; // 0x02(0x06)
	struct UPrimitiveComponent* MovementBase; // 0x08(0x08)
	struct FName BoneName; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FVector_NetQuantize100 Location; // 0x20(0x18)
	struct FRotator Rotation; // 0x38(0x18)
	bool bServerHasBaseComponent; // 0x50(0x01)
	bool bRelativeRotation; // 0x51(0x01)
	bool bServerHasVelocity; // 0x52(0x01)
	char pad_53[0x5]; // 0x53(0x05)
};

// ScriptStruct Engine.FindFloorResult
// Size: 0x100 (Inherited: 0x00)
struct FFindFloorResult {
	char bBlockingHit : 1; // 0x00(0x01)
	char bWalkableFloor : 1; // 0x00(0x01)
	char bLineTrace : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FloorDist; // 0x04(0x04)
	float LineDist; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FHitResult HitResult; // 0x10(0xf0)
};

// ScriptStruct Engine.CollisionResponseTemplate
// Size: 0x50 (Inherited: 0x00)
struct FCollisionResponseTemplate {
	struct FName Name; // 0x00(0x0c)
	enum class ECollisionEnabled CollisionEnabled; // 0x0c(0x01)
	char pad_D[0x1]; // 0x0d(0x01)
	bool bCanModify; // 0x0e(0x01)
	char pad_F[0x21]; // 0x0f(0x21)
	struct FName ObjectTypeName; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FResponseChannel> CustomResponses; // 0x40(0x10)
};

// ScriptStruct Engine.CustomChannelSetup
// Size: 0x10 (Inherited: 0x00)
struct FCustomChannelSetup {
	enum class ECollisionChannel Channel; // 0x00(0x01)
	enum class ECollisionResponse DefaultResponse; // 0x01(0x01)
	bool bTraceType; // 0x02(0x01)
	bool bStaticObject; // 0x03(0x01)
	struct FName Name; // 0x04(0x0c)
};

// ScriptStruct Engine.CustomProfile
// Size: 0x20 (Inherited: 0x00)
struct FCustomProfile {
	struct FName Name; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct FResponseChannel> CustomResponses; // 0x10(0x10)
};

// ScriptStruct Engine.BlueprintComponentDelegateBinding
// Size: 0x24 (Inherited: 0x00)
struct FBlueprintComponentDelegateBinding {
	struct FName ComponentPropertyName; // 0x00(0x0c)
	struct FName DelegatePropertyName; // 0x0c(0x0c)
	struct FName FunctionNameToBind; // 0x18(0x0c)
};

// ScriptStruct Engine.ActorComponentInstanceSourceInfo
// Size: 0x10 (Inherited: 0x00)
struct FActorComponentInstanceSourceInfo {
	struct UObject* SourceComponentTemplate; // 0x00(0x08)
	enum class EComponentCreationMethod SourceComponentCreationMethod; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t SourceComponentTypeSerializedIndex; // 0x0c(0x04)
};

// ScriptStruct Engine.ActorInstanceData
// Size: 0x60 (Inherited: 0x58)
struct FActorInstanceData : FInstanceCacheDataBase {
	struct AActor* ActorClass; // 0x58(0x08)
};

// ScriptStruct Engine.AudioComponentParam
// Size: 0xa8 (Inherited: 0xa0)
struct FAudioComponentParam : FAudioParameter {
	struct USoundWave* SoundWaveParam; // 0xa0(0x08)
};

// ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FCharacterMovementComponentPostPhysicsTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.CharacterMovementComponentPrePhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FCharacterMovementComponentPrePhysicsTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.ChildActorAttachedActorInfo
// Size: 0x80 (Inherited: 0x00)
struct FChildActorAttachedActorInfo {
	struct TWeakObjectPtr<struct AActor> Actor; // 0x00(0x08)
	struct FName SocketName; // 0x08(0x0c)
	char pad_14[0xc]; // 0x14(0x0c)
	struct FTransform RelativeTransform; // 0x20(0x60)
};

// ScriptStruct Engine.ChildActorComponentInstanceData
// Size: 0x100 (Inherited: 0xb8)
struct FChildActorComponentInstanceData : FSceneComponentInstanceData {
	struct AActor* ChildActorClass; // 0xb8(0x08)
	struct FName ChildActorName; // 0xc0(0x0c)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct TArray<struct FChildActorAttachedActorInfo> AttachedActors; // 0xd0(0x10)
	char pad_E0[0x20]; // 0xe0(0x20)
};

// ScriptStruct Engine.CachedKeyToActionInfo
// Size: 0xc0 (Inherited: 0x00)
struct FCachedKeyToActionInfo {
	struct TWeakObjectPtr<struct UPlayerInput> PlayerInput; // 0x00(0x08)
	char pad_8[0xb8]; // 0x08(0xb8)
};

// ScriptStruct Engine.ManualActionInvocation
// Size: 0x50 (Inherited: 0x00)
struct FManualActionInvocation {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct Engine.PrecomputedLightInstanceData
// Size: 0x140 (Inherited: 0xb8)
struct FPrecomputedLightInstanceData : FSceneComponentInstanceData {
	char pad_B8[0x8]; // 0xb8(0x08)
	struct FTransform Transform; // 0xc0(0x60)
	struct FGuid LightGuid; // 0x120(0x10)
	int32_t PreviewShadowMapChannel; // 0x130(0x04)
	char pad_134[0xc]; // 0x134(0x0c)
};

// ScriptStruct Engine.BatchedLine
// Size: 0x50 (Inherited: 0x00)
struct FBatchedLine {
	struct FVector Start; // 0x00(0x18)
	struct FVector End; // 0x18(0x18)
	struct FLinearColor Color; // 0x30(0x10)
	float Thickness; // 0x40(0x04)
	float RemainingLifeTime; // 0x44(0x04)
	char DepthPriority; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	uint32_t BatchID; // 0x4c(0x04)
};

// ScriptStruct Engine.BatchedPoint
// Size: 0x38 (Inherited: 0x00)
struct FBatchedPoint {
	struct FVector Position; // 0x00(0x18)
	struct FLinearColor Color; // 0x18(0x10)
	float PointSize; // 0x28(0x04)
	float RemainingLifeTime; // 0x2c(0x04)
	char DepthPriority; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	uint32_t BatchID; // 0x34(0x04)
};

// ScriptStruct Engine.LODMappingData
// Size: 0x20 (Inherited: 0x00)
struct FLODMappingData {
	struct TArray<int32_t> Mapping; // 0x00(0x10)
	struct TArray<int32_t> InverseMapping; // 0x10(0x10)
};

// ScriptStruct Engine.ComponentSync
// Size: 0x10 (Inherited: 0x00)
struct FComponentSync {
	struct FName Name; // 0x00(0x0c)
	enum class ESyncOption SyncOption; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.MaterialSpriteElement
// Size: 0x28 (Inherited: 0x00)
struct FMaterialSpriteElement {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct UCurveFloat* DistanceToOpacityCurve; // 0x08(0x08)
	char bSizeIsInScreenSpace : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float BaseSizeX; // 0x14(0x04)
	float BaseSizeY; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UCurveFloat* DistanceToSizeCurve; // 0x20(0x08)
};

// ScriptStruct Engine.EngineShowFlagsSetting
// Size: 0x18 (Inherited: 0x00)
struct FEngineShowFlagsSetting {
	struct FString ShowFlagName; // 0x00(0x10)
	bool Enabled; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct Engine.SkeletalMeshComponentEndPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FSkeletalMeshComponentEndPhysicsTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FSkeletalMeshComponentClothTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.TentDistribution
// Size: 0x0c (Inherited: 0x00)
struct FTentDistribution {
	float TipAltitude; // 0x00(0x04)
	float TipValue; // 0x04(0x04)
	float Width; // 0x08(0x04)
};

// ScriptStruct Engine.SplineCurves
// Size: 0x70 (Inherited: 0x00)
struct FSplineCurves {
	struct FInterpCurveVector Position; // 0x00(0x18)
	struct FInterpCurveQuat Rotation; // 0x18(0x18)
	struct FInterpCurveVector Scale; // 0x30(0x18)
	struct FInterpCurveFloat ReparamTable; // 0x48(0x18)
	struct USplineMetadata* MetaData; // 0x60(0x08)
	uint32_t Version; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct Engine.SplinePoint
// Size: 0x88 (Inherited: 0x00)
struct FSplinePoint {
	float InputKey; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector Position; // 0x08(0x18)
	struct FVector ArriveTangent; // 0x20(0x18)
	struct FVector LeaveTangent; // 0x38(0x18)
	struct FRotator Rotation; // 0x50(0x18)
	struct FVector Scale; // 0x68(0x18)
	enum class ESplinePointType Type; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// ScriptStruct Engine.SplineInstanceData
// Size: 0x1a0 (Inherited: 0xb8)
struct FSplineInstanceData : FSceneComponentInstanceData {
	bool bSplineHasBeenEdited; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FSplineCurves SplineCurves; // 0xc0(0x70)
	struct FSplineCurves SplineCurvesPreUCS; // 0x130(0x70)
};

// ScriptStruct Engine.SplineMeshParams
// Size: 0xb0 (Inherited: 0x00)
struct FSplineMeshParams {
	struct FVector StartPos; // 0x00(0x18)
	struct FVector StartTangent; // 0x18(0x18)
	struct FVector2D StartScale; // 0x30(0x10)
	float StartRoll; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FVector2D StartOffset; // 0x48(0x10)
	struct FVector EndPos; // 0x58(0x18)
	struct FVector2D EndScale; // 0x70(0x10)
	struct FVector EndTangent; // 0x80(0x18)
	float EndRoll; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FVector2D EndOffset; // 0xa0(0x10)
};

// ScriptStruct Engine.StaticMeshComponentInstanceData
// Size: 0x170 (Inherited: 0x130)
struct FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData {
	struct UStaticMesh* StaticMesh; // 0x130(0x08)
	struct TArray<struct FStaticMeshVertexColorLODData> VertexColorLODs; // 0x138(0x10)
	struct TArray<struct FGuid> CachedStaticLighting; // 0x148(0x10)
	struct TArray<struct FStreamingTextureBuildInfo> StreamingTextureData; // 0x158(0x10)
	char pad_168[0x8]; // 0x168(0x08)
};

// ScriptStruct Engine.StaticMeshVertexColorLODData
// Size: 0x28 (Inherited: 0x00)
struct FStaticMeshVertexColorLODData {
	struct TArray<struct FPaintedVertex> PaintedVertices; // 0x00(0x10)
	struct TArray<struct FColor> VertexBufferColors; // 0x10(0x10)
	uint32_t LODIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.PaintedVertex
// Size: 0x40 (Inherited: 0x00)
struct FPaintedVertex {
	struct FVector Position; // 0x00(0x18)
	struct FColor Color; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FVector4 Normal; // 0x20(0x20)
};

// ScriptStruct Engine.SplineMeshInstanceData
// Size: 0x1d0 (Inherited: 0x170)
struct FSplineMeshInstanceData : FStaticMeshComponentInstanceData {
	struct FVector StartPos; // 0x168(0x18)
	struct FVector EndPos; // 0x180(0x18)
	struct FVector StartTangent; // 0x198(0x18)
	struct FVector EndTangent; // 0x1b0(0x18)
};

// ScriptStruct Engine.ObjectCookedMetaDataStore
// Size: 0x50 (Inherited: 0x00)
struct FObjectCookedMetaDataStore {
	struct TMap<struct FName, struct FString> ObjectMetaData; // 0x00(0x50)
};

// ScriptStruct Engine.FieldCookedMetaDataStore
// Size: 0x50 (Inherited: 0x00)
struct FFieldCookedMetaDataStore {
	struct TMap<struct FName, struct FString> FieldMetaData; // 0x00(0x50)
};

// ScriptStruct Engine.StructCookedMetaDataStore
// Size: 0xa0 (Inherited: 0x00)
struct FStructCookedMetaDataStore {
	struct FObjectCookedMetaDataStore ObjectMetaData; // 0x00(0x50)
	struct TMap<struct FName, struct FFieldCookedMetaDataStore> PropertiesMetaData; // 0x50(0x50)
};

// ScriptStruct Engine.CullDistanceSizePair
// Size: 0x08 (Inherited: 0x00)
struct FCullDistanceSizePair {
	float Size; // 0x00(0x04)
	float CullDistance; // 0x04(0x04)
};

// ScriptStruct Engine.RuntimeCurveLinearColor
// Size: 0x210 (Inherited: 0x00)
struct FRuntimeCurveLinearColor {
	struct FRichCurve ColorCurves[0x4]; // 0x00(0x200)
	struct UCurveLinearColor* ExternalCurve; // 0x200(0x08)
	bool bDisplayAsLinear; // 0x208(0x01)
	char pad_209[0x7]; // 0x209(0x07)
};

// ScriptStruct Engine.CurveAtlasColorAdjustments
// Size: 0x24 (Inherited: 0x00)
struct FCurveAtlasColorAdjustments {
	char bChromaKeyTexture : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float AdjustBrightness; // 0x04(0x04)
	float AdjustBrightnessCurve; // 0x08(0x04)
	float AdjustVibrance; // 0x0c(0x04)
	float AdjustSaturation; // 0x10(0x04)
	float AdjustRGBCurve; // 0x14(0x04)
	float AdjustHue; // 0x18(0x04)
	float AdjustMinAlpha; // 0x1c(0x04)
	float AdjustMaxAlpha; // 0x20(0x04)
};

// ScriptStruct Engine.RuntimeVectorCurve
// Size: 0x188 (Inherited: 0x00)
struct FRuntimeVectorCurve {
	struct FRichCurve VectorCurves[0x3]; // 0x00(0x180)
	struct UCurveVector* ExternalCurve; // 0x180(0x08)
};

// ScriptStruct Engine.IntegralKey
// Size: 0x08 (Inherited: 0x00)
struct FIntegralKey {
	float Time; // 0x00(0x04)
	int32_t Value; // 0x04(0x04)
};

// ScriptStruct Engine.IntegralCurve
// Size: 0x80 (Inherited: 0x68)
struct FIntegralCurve : FIndexedCurve {
	struct TArray<struct FIntegralKey> Keys; // 0x68(0x10)
	int32_t DefaultValue; // 0x78(0x04)
	bool bUseDefaultValueBeforeFirstKey; // 0x7c(0x01)
	char pad_7D[0x3]; // 0x7d(0x03)
};

// ScriptStruct Engine.NameCurveKey
// Size: 0x10 (Inherited: 0x00)
struct FNameCurveKey {
	float Time; // 0x00(0x04)
	struct FName Value; // 0x04(0x0c)
};

// ScriptStruct Engine.NameCurve
// Size: 0x78 (Inherited: 0x68)
struct FNameCurve : FIndexedCurve {
	struct TArray<struct FNameCurveKey> Keys; // 0x68(0x10)
};

// ScriptStruct Engine.SimpleCurveKey
// Size: 0x08 (Inherited: 0x00)
struct FSimpleCurveKey {
	float Time; // 0x00(0x04)
	float Value; // 0x04(0x04)
};

// ScriptStruct Engine.SimpleCurve
// Size: 0x88 (Inherited: 0x70)
struct FSimpleCurve : FRealCurve {
	enum class ERichCurveInterpMode InterpMode; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<struct FSimpleCurveKey> Keys; // 0x78(0x10)
};

// ScriptStruct Engine.StringCurveKey
// Size: 0x18 (Inherited: 0x00)
struct FStringCurveKey {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Value; // 0x08(0x10)
};

// ScriptStruct Engine.StringCurve
// Size: 0x88 (Inherited: 0x68)
struct FStringCurve : FIndexedCurve {
	struct FString DefaultValue; // 0x68(0x10)
	struct TArray<struct FStringCurveKey> Keys; // 0x78(0x10)
};

// ScriptStruct Engine.DataDrivenConsoleVariable
// Size: 0x50 (Inherited: 0x00)
struct FDataDrivenConsoleVariable {
	enum class FDataDrivenCVarType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Name; // 0x08(0x10)
	struct FString ToolTip; // 0x18(0x10)
	float DefaultValueFloat; // 0x28(0x04)
	int32_t DefaultValueInt; // 0x2c(0x04)
	bool DefaultValueBool; // 0x30(0x01)
	char pad_31[0x1f]; // 0x31(0x1f)
};

// ScriptStruct Engine.DataTableCategoryHandle
// Size: 0x20 (Inherited: 0x00)
struct FDataTableCategoryHandle {
	struct UDataTable* DataTable; // 0x00(0x08)
	struct FName ColumnName; // 0x08(0x0c)
	struct FName RowContents; // 0x14(0x0c)
};

// ScriptStruct Engine.DebugCameraControllerSettingsViewModeIndex
// Size: 0x10 (Inherited: 0x00)
struct FDebugCameraControllerSettingsViewModeIndex {
	char pad_0[0x8]; // 0x00(0x08)
	enum class EViewModeIndex ViewModeIndex; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct Engine.RollbackNetStartupActorInfo
// Size: 0xe0 (Inherited: 0x00)
struct FRollbackNetStartupActorInfo {
	char pad_0[0x10]; // 0x00(0x10)
	struct UObject* Archetype; // 0x10(0x08)
	char pad_18[0xb8]; // 0x18(0xb8)
	struct TArray<struct UObject*> ObjReferences; // 0xd0(0x10)
};

// ScriptStruct Engine.MulticastRecordOptions
// Size: 0x18 (Inherited: 0x00)
struct FMulticastRecordOptions {
	struct FString FuncPathName; // 0x00(0x10)
	bool bServerSkip; // 0x10(0x01)
	bool bClientSkip; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct Engine.SelectedFragmentProperties
// Size: 0x28 (Inherited: 0x00)
struct FSelectedFragmentProperties {
	struct FName Tag; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Fragment; // 0x10(0x10)
	bool bEnabled; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct Engine.DPMatchingIfCondition
// Size: 0x30 (Inherited: 0x00)
struct FDPMatchingIfCondition {
	struct FName Operator; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Arg1; // 0x10(0x10)
	struct FString Arg2; // 0x20(0x10)
};

// ScriptStruct Engine.DPMatchingRulestructBase
// Size: 0x48 (Inherited: 0x00)
struct FDPMatchingRulestructBase {
	char pad_0[0x8]; // 0x00(0x08)
	struct FString RuleName; // 0x08(0x10)
	struct TArray<struct FDPMatchingIfCondition> IfConditions; // 0x18(0x10)
	struct FString AppendFragments; // 0x28(0x10)
	struct FString SetUserVar; // 0x38(0x10)
};

// ScriptStruct Engine.DPMatchingRulestructA
// Size: 0x68 (Inherited: 0x48)
struct FDPMatchingRulestructA : FDPMatchingRulestructBase {
	struct TArray<struct FDPMatchingRulestructBase> OnTrue; // 0x48(0x10)
	struct TArray<struct FDPMatchingRulestructBase> OnFalse; // 0x58(0x10)
};

// ScriptStruct Engine.DPMatchingRulestructB
// Size: 0x68 (Inherited: 0x48)
struct FDPMatchingRulestructB : FDPMatchingRulestructBase {
	struct TArray<struct FDPMatchingRulestructA> OnTrue; // 0x48(0x10)
	struct TArray<struct FDPMatchingRulestructA> OnFalse; // 0x58(0x10)
};

// ScriptStruct Engine.DPMatchingRulestructC
// Size: 0x68 (Inherited: 0x48)
struct FDPMatchingRulestructC : FDPMatchingRulestructBase {
	struct TArray<struct FDPMatchingRulestructB> OnTrue; // 0x48(0x10)
	struct TArray<struct FDPMatchingRulestructB> OnFalse; // 0x58(0x10)
};

// ScriptStruct Engine.DPMatchingRulestructD
// Size: 0x68 (Inherited: 0x48)
struct FDPMatchingRulestructD : FDPMatchingRulestructBase {
	struct TArray<struct FDPMatchingRulestructC> OnTrue; // 0x48(0x10)
	struct TArray<struct FDPMatchingRulestructC> OnFalse; // 0x58(0x10)
};

// ScriptStruct Engine.DPMatchingRulestructE
// Size: 0x68 (Inherited: 0x48)
struct FDPMatchingRulestructE : FDPMatchingRulestructBase {
	struct TArray<struct FDPMatchingRulestructD> OnTrue; // 0x48(0x10)
	struct TArray<struct FDPMatchingRulestructD> OnFalse; // 0x58(0x10)
};

// ScriptStruct Engine.DPMatchingRulestruct
// Size: 0x68 (Inherited: 0x48)
struct FDPMatchingRulestruct : FDPMatchingRulestructBase {
	struct TArray<struct FDPMatchingRulestructE> OnTrue; // 0x48(0x10)
	struct TArray<struct FDPMatchingRulestructE> OnFalse; // 0x58(0x10)
};

// ScriptStruct Engine.DialogueContext
// Size: 0x18 (Inherited: 0x00)
struct FDialogueContext {
	struct UDialogueVoice* Speaker; // 0x00(0x08)
	struct TArray<struct UDialogueVoice*> Targets; // 0x08(0x10)
};

// ScriptStruct Engine.DialogueWaveParameter
// Size: 0x20 (Inherited: 0x00)
struct FDialogueWaveParameter {
	struct UDialogueWave* DialogueWave; // 0x00(0x08)
	struct FDialogueContext Context; // 0x08(0x18)
};

// ScriptStruct Engine.DialogueContextMapping
// Size: 0x38 (Inherited: 0x00)
struct FDialogueContextMapping {
	struct FDialogueContext Context; // 0x00(0x18)
	struct USoundWave* SoundWave; // 0x18(0x08)
	struct FString LocalizationKeyFormat; // 0x20(0x10)
	struct UDialogueSoundWaveProxy* Proxy; // 0x30(0x08)
};

// ScriptStruct Engine.GraphReference
// Size: 0x20 (Inherited: 0x00)
struct FGraphReference {
	struct UEdGraph* MacroGraph; // 0x00(0x08)
	struct UBlueprint* GraphBlueprint; // 0x08(0x08)
	struct FGuid GraphGuid; // 0x10(0x10)
};

// ScriptStruct Engine.AssetImportInfo
// Size: 0x01 (Inherited: 0x00)
struct FAssetImportInfo {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.TypedElementPasteOptions
// Size: 0x78 (Inherited: 0x00)
struct FTypedElementPasteOptions {
	struct UTypedElementSelectionSet* SelectionSetToModify; // 0x00(0x08)
	bool bPasteAtLocation; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FVector PasteLocation; // 0x10(0x18)
	char pad_28[0x50]; // 0x28(0x50)
};

// ScriptStruct Engine.TypedElementDeletionOptions
// Size: 0x03 (Inherited: 0x00)
struct FTypedElementDeletionOptions {
	bool bVerifyDeletionCanHappen; // 0x00(0x01)
	bool bWarnAboutReferences; // 0x01(0x01)
	bool bWarnAboutSoftReferences; // 0x02(0x01)
};

// ScriptStruct Engine.PointDamageEvent
// Size: 0x120 (Inherited: 0x10)
struct FPointDamageEvent : FDamageEvent {
	float Damage; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FVector_NetQuantizeNormal ShotDirection; // 0x18(0x18)
	struct FHitResult HitInfo; // 0x30(0xf0)
};

// ScriptStruct Engine.RadialDamageParams
// Size: 0x14 (Inherited: 0x00)
struct FRadialDamageParams {
	float BaseDamage; // 0x00(0x04)
	float MinimumDamage; // 0x04(0x04)
	float InnerRadius; // 0x08(0x04)
	float OuterRadius; // 0x0c(0x04)
	float DamageFalloff; // 0x10(0x04)
};

// ScriptStruct Engine.RadialDamageEvent
// Size: 0x50 (Inherited: 0x10)
struct FRadialDamageEvent : FDamageEvent {
	struct FRadialDamageParams Params; // 0x10(0x14)
	char pad_24[0x4]; // 0x24(0x04)
	struct FVector Origin; // 0x28(0x18)
	struct TArray<struct FHitResult> ComponentHits; // 0x40(0x10)
};

// ScriptStruct Engine.HitResultNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FHitResultNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct Engine.RigidBodyState
// Size: 0x80 (Inherited: 0x00)
struct FRigidBodyState {
	struct FVector_NetQuantize100 Position; // 0x00(0x18)
	char pad_18[0x8]; // 0x18(0x08)
	struct FQuat Quaternion; // 0x20(0x20)
	struct FVector_NetQuantize100 LinVel; // 0x40(0x18)
	struct FVector_NetQuantize100 AngVel; // 0x58(0x18)
	char Flags; // 0x70(0x01)
	char pad_71[0xf]; // 0x71(0x0f)
};

// ScriptStruct Engine.FontCharacter
// Size: 0x18 (Inherited: 0x00)
struct FFontCharacter {
	int32_t StartU; // 0x00(0x04)
	int32_t StartV; // 0x04(0x04)
	int32_t USize; // 0x08(0x04)
	int32_t VSize; // 0x0c(0x04)
	char TextureIndex; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t VerticalOffset; // 0x14(0x04)
};

// ScriptStruct Engine.CharacterNetworkSerializationPackedBitsNetSerializerConfig
// Size: 0x18 (Inherited: 0x10)
struct FCharacterNetworkSerializationPackedBitsNetSerializerConfig : FNetSerializerConfig {
	uint32_t MaxAllowedDataBits; // 0x10(0x04)
	uint32_t MaxAllowedObjectReferences; // 0x14(0x04)
};

// ScriptStruct Engine.ForceFeedbackChannelDetails
// Size: 0x90 (Inherited: 0x00)
struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; // 0x00(0x01)
	char bAffectsLeftSmall : 1; // 0x00(0x01)
	char bAffectsRightLarge : 1; // 0x00(0x01)
	char bAffectsRightSmall : 1; // 0x00(0x01)
	char pad_0_4 : 4; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FRuntimeFloatCurve Curve; // 0x08(0x88)
};

// ScriptStruct Engine.ActiveForceFeedbackEffect
// Size: 0x78 (Inherited: 0x00)
struct FActiveForceFeedbackEffect {
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
	struct TSet<struct FInputDevicePropertyHandle> ActiveDeviceProperties; // 0x28(0x50)
};

// ScriptStruct Engine.ForceFeedbackEffectOverridenChannelDetails
// Size: 0x10 (Inherited: 0x00)
struct FForceFeedbackEffectOverridenChannelDetails {
	struct TArray<struct FForceFeedbackChannelDetails> ChannelDetails; // 0x00(0x10)
};

// ScriptStruct Engine.DeviceColorData
// Size: 0x08 (Inherited: 0x00)
struct FDeviceColorData {
	bool bEnable; // 0x00(0x01)
	bool bResetAfterCompletion; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	struct FColor LightColor; // 0x04(0x04)
};

// ScriptStruct Engine.DeviceColorCurveData
// Size: 0x10 (Inherited: 0x00)
struct FDeviceColorCurveData {
	bool bEnable; // 0x00(0x01)
	bool bResetAfterCompletion; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct UCurveLinearColor* DeviceColorCurve; // 0x08(0x08)
};

// ScriptStruct Engine.DeviceTriggerBaseData
// Size: 0x02 (Inherited: 0x00)
struct FDeviceTriggerBaseData {
	enum class EInputDeviceTriggerMask AffectedTriggers; // 0x00(0x01)
	bool bResetUponCompletion; // 0x01(0x01)
};

// ScriptStruct Engine.DeviceTriggerFeedbackData
// Size: 0x10 (Inherited: 0x00)
struct FDeviceTriggerFeedbackData {
	struct UCurveFloat* FeedbackPositionCurve; // 0x00(0x08)
	struct UCurveFloat* FeedbackStrenghCurve; // 0x08(0x08)
};

// ScriptStruct Engine.DeviceTriggerTriggerResistanceData
// Size: 0x10 (Inherited: 0x00)
struct FDeviceTriggerTriggerResistanceData {
	int32_t StartPosition; // 0x00(0x04)
	int32_t StartStrengh; // 0x04(0x04)
	int32_t EndPosition; // 0x08(0x04)
	int32_t EndStrengh; // 0x0c(0x04)
};

// ScriptStruct Engine.DeviceTriggerTriggerVibrationData
// Size: 0x18 (Inherited: 0x00)
struct FDeviceTriggerTriggerVibrationData {
	struct UCurveFloat* TriggerPositionCurve; // 0x00(0x08)
	struct UCurveFloat* VibrationFrequencyCurve; // 0x08(0x08)
	struct UCurveFloat* VibrationAmplitudeCurve; // 0x10(0x08)
};

// ScriptStruct Engine.AudioBasedVibrationData
// Size: 0x08 (Inherited: 0x00)
struct FAudioBasedVibrationData {
	struct USoundBase* Sound; // 0x00(0x08)
};

// ScriptStruct Engine.ActivateDevicePropertyParams
// Size: 0x0c (Inherited: 0x00)
struct FActivateDevicePropertyParams {
	struct FPlatformUserId UserId; // 0x00(0x04)
	struct FInputDeviceId DeviceID; // 0x04(0x04)
	char bLooping : 1; // 0x08(0x01)
	char bIgnoreTimeDilation : 1; // 0x08(0x01)
	char bPlayWhilePaused : 1; // 0x08(0x01)
	char pad_8_3 : 5; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.ActiveDeviceProperty
// Size: 0x20 (Inherited: 0x00)
struct FActiveDeviceProperty {
	struct TWeakObjectPtr<struct UInputDeviceProperty> Property; // 0x00(0x08)
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct Engine.RootMotionSourceStatus
// Size: 0x01 (Inherited: 0x00)
struct FRootMotionSourceStatus {
	char Flags; // 0x00(0x01)
};

// ScriptStruct Engine.RootMotionFinishVelocitySettings
// Size: 0x28 (Inherited: 0x00)
struct FRootMotionFinishVelocitySettings {
	enum class ERootMotionFinishVelocityMode Mode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVector SetVelocity; // 0x08(0x18)
	float ClampVelocity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.RootMotionSource
// Size: 0xe0 (Inherited: 0x00)
struct FRootMotionSource {
	char pad_0[0x10]; // 0x00(0x10)
	uint16_t Priority; // 0x10(0x02)
	uint16_t LocalID; // 0x12(0x02)
	enum class ERootMotionAccumulateMode AccumulateMode; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct FName InstanceName; // 0x18(0x0c)
	float StartTime; // 0x24(0x04)
	float CurrentTime; // 0x28(0x04)
	float PreviousTime; // 0x2c(0x04)
	float Duration; // 0x30(0x04)
	struct FRootMotionSourceStatus Status; // 0x34(0x01)
	struct FRootMotionSourceSettings Settings; // 0x35(0x01)
	bool bInLocalSpace; // 0x36(0x01)
	char pad_37[0x9]; // 0x37(0x09)
	struct FRootMotionMovementParams RootMotionParams; // 0x40(0x70)
	struct FRootMotionFinishVelocitySettings FinishVelocityParams; // 0xb0(0x28)
	char pad_D8[0x8]; // 0xd8(0x08)
};

// ScriptStruct Engine.RootMotionSource_ConstantForce
// Size: 0x100 (Inherited: 0xe0)
struct FRootMotionSource_ConstantForce : FRootMotionSource {
	struct FVector Force; // 0xd8(0x18)
	struct UCurveFloat* StrengthOverTime; // 0xf0(0x08)
};

// ScriptStruct Engine.RootMotionSource_RadialForce
// Size: 0x140 (Inherited: 0xe0)
struct FRootMotionSource_RadialForce : FRootMotionSource {
	struct FVector Location; // 0xd8(0x18)
	struct AActor* LocationActor; // 0xf0(0x08)
	float Radius; // 0xf8(0x04)
	float Strength; // 0xfc(0x04)
	bool bIsPush; // 0x100(0x01)
	bool bNoZForce; // 0x101(0x01)
	struct UCurveFloat* StrengthDistanceFalloff; // 0x108(0x08)
	struct UCurveFloat* StrengthOverTime; // 0x110(0x08)
	bool bUseFixedWorldDirection; // 0x118(0x01)
	char pad_11B[0x5]; // 0x11b(0x05)
	struct FRotator FixedWorldDirection; // 0x120(0x18)
	char pad_138[0x8]; // 0x138(0x08)
};

// ScriptStruct Engine.RootMotionSource_MoveToForce
// Size: 0x120 (Inherited: 0xe0)
struct FRootMotionSource_MoveToForce : FRootMotionSource {
	struct FVector StartLocation; // 0xd8(0x18)
	struct FVector TargetLocation; // 0xf0(0x18)
	bool bRestrictSpeedToExpected; // 0x108(0x01)
	struct UCurveVector* PathOffsetCurve; // 0x110(0x08)
	char pad_119[0x7]; // 0x119(0x07)
};

// ScriptStruct Engine.RootMotionSource_MoveToDynamicForce
// Size: 0x140 (Inherited: 0xe0)
struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource {
	struct FVector StartLocation; // 0xd8(0x18)
	struct FVector InitialTargetLocation; // 0xf0(0x18)
	struct FVector TargetLocation; // 0x108(0x18)
	bool bRestrictSpeedToExpected; // 0x120(0x01)
	struct UCurveVector* PathOffsetCurve; // 0x128(0x08)
	struct UCurveFloat* TimeMappingCurve; // 0x130(0x08)
	char pad_139[0x7]; // 0x139(0x07)
};

// ScriptStruct Engine.RootMotionSource_JumpForce
// Size: 0x130 (Inherited: 0xe0)
struct FRootMotionSource_JumpForce : FRootMotionSource {
	struct FRotator Rotation; // 0xd8(0x18)
	float Distance; // 0xf0(0x04)
	float Height; // 0xf4(0x04)
	bool bDisableTimeout; // 0xf8(0x01)
	struct UCurveVector* PathOffsetCurve; // 0x100(0x08)
	struct UCurveFloat* TimeMappingCurve; // 0x108(0x08)
	char pad_111[0x1f]; // 0x111(0x1f)
};

// ScriptStruct Engine.RootMotionSourceGroupNetSerializerConfig
// Size: 0x28 (Inherited: 0x28)
struct FRootMotionSourceGroupNetSerializerConfig : FPolymorphicArrayStructNetSerializerConfig {
};

// ScriptStruct Engine.TouchInputControl
// Size: 0xa8 (Inherited: 0x00)
struct FTouchInputControl {
	bool bTreatAsButton; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UTexture2D* Image1; // 0x08(0x08)
	struct UTexture2D* Image2; // 0x10(0x08)
	struct FVector2D Center; // 0x18(0x10)
	struct FVector2D VisualSize; // 0x28(0x10)
	struct FVector2D ThumbSize; // 0x38(0x10)
	struct FVector2D InteractionSize; // 0x48(0x10)
	struct FVector2D InputScale; // 0x58(0x10)
	struct FKey MainInputKey; // 0x68(0x20)
	struct FKey AltInputKey; // 0x88(0x20)
};

// ScriptStruct Engine.UniqueNetIdReplNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FUniqueNetIdReplNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct Engine.NetLevelVisibilityTransactionId
// Size: 0x04 (Inherited: 0x00)
struct FNetLevelVisibilityTransactionId {
	uint32_t Data; // 0x00(0x04)
};

// ScriptStruct Engine.UpdateLevelVisibilityLevelInfo
// Size: 0x20 (Inherited: 0x00)
struct FUpdateLevelVisibilityLevelInfo {
	struct FName PackageName; // 0x00(0x0c)
	struct FName Filename; // 0x0c(0x0c)
	struct FNetLevelVisibilityTransactionId VisibilityRequestId; // 0x18(0x04)
	char bIsVisible : 1; // 0x1c(0x01)
	char bTryMakeVisible : 1; // 0x1c(0x01)
	char bSkipCloseOnError : 1; // 0x1c(0x01)
	char pad_1C_3 : 5; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct Engine.HLODISMComponentDesc
// Size: 0x30 (Inherited: 0x00)
struct FHLODISMComponentDesc {
	struct UStaticMesh* StaticMesh; // 0x00(0x08)
	struct UMaterialInterface* Material; // 0x08(0x08)
	struct TArray<struct FTransform> Instances; // 0x10(0x10)
	struct TArray<struct FCustomPrimitiveData> InstancesCustomPrimitiveData; // 0x20(0x10)
};

// ScriptStruct Engine.HLODProxyMesh
// Size: 0x30 (Inherited: 0x00)
struct FHLODProxyMesh {
	LazyObjectProperty LODActor; // 0x00(0x18)
	struct UStaticMesh* StaticMesh; // 0x18(0x08)
	struct FName Key; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.ComponentKey
// Size: 0x28 (Inherited: 0x00)
struct FComponentKey {
	ClassPtrProperty OwnerClass; // 0x00(0x08)
	struct FName SCSVariableName; // 0x08(0x0c)
	struct FGuid AssociatedGuid; // 0x14(0x10)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.ComponentOverrideRecord
// Size: 0x88 (Inherited: 0x00)
struct FComponentOverrideRecord {
	ClassPtrProperty ComponentClass; // 0x00(0x08)
	struct UActorComponent* ComponentTemplate; // 0x08(0x08)
	struct FComponentKey ComponentKey; // 0x10(0x28)
	struct FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x38(0x50)
};

// ScriptStruct Engine.BlueprintInputDelegateBinding
// Size: 0x04 (Inherited: 0x00)
struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x00(0x01)
	char bExecuteWhenPaused : 1; // 0x00(0x01)
	char bOverrideParentBinding : 1; // 0x00(0x01)
	char pad_0_3 : 5; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
};

// ScriptStruct Engine.BlueprintInputActionDelegateBinding
// Size: 0x20 (Inherited: 0x04)
struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding {
	struct FName InputActionName; // 0x04(0x0c)
	enum class EInputEvent InputKeyEvent; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FName FunctionNameToBind; // 0x14(0x0c)
};

// ScriptStruct Engine.BlueprintInputAxisDelegateBinding
// Size: 0x1c (Inherited: 0x04)
struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding {
	struct FName InputAxisName; // 0x04(0x0c)
	struct FName FunctionNameToBind; // 0x10(0x0c)
};

// ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
// Size: 0x38 (Inherited: 0x04)
struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding {
	char pad_4[0x4]; // 0x04(0x04)
	struct FKey AxisKey; // 0x08(0x20)
	struct FName FunctionNameToBind; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Engine.BlueprintInputKeyDelegateBinding
// Size: 0x40 (Inherited: 0x04)
struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding {
	char pad_4[0x4]; // 0x04(0x04)
	struct FInputChord InputChord; // 0x08(0x28)
	enum class EInputEvent InputKeyEvent; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FName FunctionNameToBind; // 0x34(0x0c)
};

// ScriptStruct Engine.BlueprintInputTouchDelegateBinding
// Size: 0x14 (Inherited: 0x04)
struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding {
	enum class EInputEvent InputKeyEvent; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FName FunctionNameToBind; // 0x08(0x0c)
};

// ScriptStruct Engine.CurveEdEntry
// Size: 0x38 (Inherited: 0x00)
struct FCurveEdEntry {
	struct UObject* CurveObject; // 0x00(0x08)
	struct FColor CurveColor; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString CurveName; // 0x10(0x10)
	int32_t bHideCurve; // 0x20(0x04)
	int32_t bColorCurve; // 0x24(0x04)
	int32_t bFloatingPointColorCurve; // 0x28(0x04)
	int32_t bClamp; // 0x2c(0x04)
	float ClampLow; // 0x30(0x04)
	float ClampHigh; // 0x34(0x04)
};

// ScriptStruct Engine.CurveEdTab
// Size: 0x30 (Inherited: 0x00)
struct FCurveEdTab {
	struct FString TabName; // 0x00(0x10)
	struct TArray<struct FCurveEdEntry> Curves; // 0x10(0x10)
	float ViewStartInput; // 0x20(0x04)
	float ViewEndInput; // 0x24(0x04)
	float ViewStartOutput; // 0x28(0x04)
	float ViewEndOutput; // 0x2c(0x04)
};

// ScriptStruct Engine.ISMComponentInstance
// Size: 0x0c (Inherited: 0x00)
struct FISMComponentInstance {
	int32_t ClientIndex; // 0x00(0x04)
	int32_t InstanceIndex; // 0x04(0x04)
	int32_t InstanceSubIndex; // 0x08(0x04)
};

// ScriptStruct Engine.ISMClientInstance
// Size: 0x10 (Inherited: 0x00)
struct FISMClientInstance {
	struct TArray<int32_t> ComponentIndices; // 0x00(0x10)
};

// ScriptStruct Engine.ISMClientData
// Size: 0x10 (Inherited: 0x00)
struct FISMClientData {
	struct TArray<struct FISMClientInstance> Instances; // 0x00(0x10)
};

// ScriptStruct Engine.ISMComponentData
// Size: 0x01 (Inherited: 0x00)
struct FISMComponentData {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.ISMComponentDescriptorBase
// Size: 0x1d8 (Inherited: 0x00)
struct FISMComponentDescriptorBase {
	uint32_t Hash; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UInstancedStaticMeshComponent* ComponentClass; // 0x08(0x08)
	enum class EComponentMobility Mobility; // 0x10(0x01)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x11(0x01)
	enum class ELightmapType LightmapType; // 0x12(0x01)
	struct FLightingChannels LightingChannels; // 0x13(0x01)
	int32_t RayTracingGroupId; // 0x14(0x04)
	enum class ERayTracingGroupCullingPriority RayTracingGroupCullingPriority; // 0x18(0x01)
	enum class EHasCustomNavigableGeometry bHasCustomNavigableGeometry; // 0x19(0x01)
	enum class ERendererStencilMask CustomDepthStencilWriteMask; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
	struct FBodyInstance BodyInstance; // 0x20(0x190)
	int32_t InstanceStartCullDistance; // 0x1b0(0x04)
	int32_t InstanceEndCullDistance; // 0x1b4(0x04)
	float InstanceLODDistanceScale; // 0x1b8(0x04)
	int32_t VirtualTextureCullMips; // 0x1bc(0x04)
	int32_t TranslucencySortPriority; // 0x1c0(0x04)
	int32_t OverriddenLightMapRes; // 0x1c4(0x04)
	int32_t CustomDepthStencilValue; // 0x1c8(0x04)
	char bCastShadow : 1; // 0x1cc(0x01)
	char bCastDynamicShadow : 1; // 0x1cc(0x01)
	char bCastStaticShadow : 1; // 0x1cc(0x01)
	char bCastContactShadow : 1; // 0x1cc(0x01)
	char bCastShadowAsTwoSided : 1; // 0x1cc(0x01)
	char bAffectDynamicIndirectLighting : 1; // 0x1cc(0x01)
	char bAffectDistanceFieldLighting : 1; // 0x1cc(0x01)
	char bReceivesDecals : 1; // 0x1cc(0x01)
	char bOverrideLightMapRes : 1; // 0x1cd(0x01)
	char bUseAsOccluder : 1; // 0x1cd(0x01)
	char bEnableDensityScaling : 1; // 0x1cd(0x01)
	char bEnableDiscardOnLoad : 1; // 0x1cd(0x01)
	char bRenderCustomDepth : 1; // 0x1cd(0x01)
	char bVisibleInRayTracing : 1; // 0x1cd(0x01)
	char bHiddenInGame : 1; // 0x1cd(0x01)
	char bIsEditorOnly : 1; // 0x1cd(0x01)
	char bVisible : 1; // 0x1ce(0x01)
	char bEvaluateWorldPositionOffset : 1; // 0x1ce(0x01)
	char bReverseCulling : 1; // 0x1ce(0x01)
	char bUseDefaultCollision : 1; // 0x1ce(0x01)
	char bGenerateOverlapEvents : 1; // 0x1ce(0x01)
	char pad_1CE_5 : 3; // 0x1ce(0x01)
	char pad_1CF[0x1]; // 0x1cf(0x01)
	int32_t WorldPositionOffsetDisableDistance; // 0x1d0(0x04)
	enum class EShadowCacheInvalidationBehavior ShadowCacheInvalidationBehavior; // 0x1d4(0x01)
	enum class EDetailMode DetailMode; // 0x1d5(0x01)
	char pad_1D6[0x2]; // 0x1d6(0x02)
};

// ScriptStruct Engine.ISMComponentDescriptor
// Size: 0x208 (Inherited: 0x1d8)
struct FISMComponentDescriptor : FISMComponentDescriptorBase {
	struct UStaticMesh* StaticMesh; // 0x1d8(0x08)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x1e0(0x10)
	struct UMaterialInterface* OverlayMaterial; // 0x1f0(0x08)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x1f8(0x10)
};

// ScriptStruct Engine.SoftISMComponentDescriptor
// Size: 0x258 (Inherited: 0x1d8)
struct FSoftISMComponentDescriptor : FISMComponentDescriptorBase {
	struct TSoftObjectPtr<UStaticMesh> StaticMesh; // 0x1d8(0x30)
	struct TArray<struct TSoftObjectPtr<UMaterialInterface>> OverrideMaterials; // 0x208(0x10)
	struct TSoftObjectPtr<UMaterialInterface> OverlayMaterial; // 0x218(0x30)
	struct TArray<struct TSoftObjectPtr<URuntimeVirtualTexture>> RuntimeVirtualTextures; // 0x248(0x10)
};

// ScriptStruct Engine.SlateModifierKeysState
// Size: 0x01 (Inherited: 0x00)
struct FSlateModifierKeysState {
	char ModifierKeysStateMask; // 0x00(0x01)
};

// ScriptStruct Engine.FloatSpringState
// Size: 0x0c (Inherited: 0x00)
struct FFloatSpringState {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct Engine.VectorSpringState
// Size: 0x38 (Inherited: 0x00)
struct FVectorSpringState {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct Engine.QuaternionSpringState
// Size: 0x40 (Inherited: 0x00)
struct FQuaternionSpringState {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct Engine.DrawToRenderTargetContext
// Size: 0x08 (Inherited: 0x00)
struct FDrawToRenderTargetContext {
	struct UTextureRenderTarget2D* RenderTarget; // 0x00(0x08)
};

// ScriptStruct Engine.ImportanceTexture
// Size: 0x50 (Inherited: 0x00)
struct FImportanceTexture {
	struct FIntPoint Size; // 0x00(0x08)
	int32_t NumMips; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<float> MarginalCDF; // 0x10(0x10)
	struct TArray<float> ConditionalCDF; // 0x20(0x10)
	struct TArray<struct FColor> TextureData; // 0x30(0x10)
	struct TWeakObjectPtr<struct UTexture2D> Texture; // 0x40(0x08)
	enum class EImportanceWeight Weighting; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Engine.LatentActionManager
// Size: 0x60 (Inherited: 0x00)
struct FLatentActionManager {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct Engine.LayerActorStats
// Size: 0x10 (Inherited: 0x00)
struct FLayerActorStats {
	ClassPtrProperty Type; // 0x00(0x08)
	int32_t Total; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.ActorFolderSet
// Size: 0x50 (Inherited: 0x00)
struct FActorFolderSet {
	struct TSet<struct UActorFolder*> ActorFolders; // 0x00(0x50)
};

// ScriptStruct Engine.StreamableTextureInstance
// Size: 0x48 (Inherited: 0x00)
struct FStreamableTextureInstance {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct Engine.DynamicTextureInstance
// Size: 0x58 (Inherited: 0x48)
struct FDynamicTextureInstance : FStreamableTextureInstance {
	struct UTexture2D* Texture; // 0x48(0x08)
	bool bAttached; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	float OriginalRadius; // 0x54(0x04)
};

// ScriptStruct Engine.LevelSimplificationDetails
// Size: 0x158 (Inherited: 0x00)
struct FLevelSimplificationDetails {
	bool bCreatePackagePerAsset; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DetailsPercentage; // 0x04(0x04)
	struct FMaterialProxySettings StaticMeshMaterialSettings; // 0x08(0xa0)
	bool bOverrideLandscapeExportLOD; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	int32_t LandscapeExportLOD; // 0xac(0x04)
	struct FMaterialProxySettings LandscapeMaterialSettings; // 0xb0(0xa0)
	bool bBakeFoliageToLandscape; // 0x150(0x01)
	bool bBakeGrassToLandscape; // 0x151(0x01)
	char pad_152[0x6]; // 0x152(0x06)
};

// ScriptStruct Engine.ReplicatedStaticActorDestructionInfo
// Size: 0x48 (Inherited: 0x00)
struct FReplicatedStaticActorDestructionInfo {
	char pad_0[0x40]; // 0x00(0x40)
	ClassPtrProperty ObjClass; // 0x40(0x08)
};

// ScriptStruct Engine.ClientReceiveData
// Size: 0x40 (Inherited: 0x00)
struct FClientReceiveData {
	struct APlayerController* LocalPC; // 0x00(0x08)
	struct FName MessageType; // 0x08(0x0c)
	int32_t MessageIndex; // 0x14(0x04)
	struct FString MessageString; // 0x18(0x10)
	struct APlayerState* RelatedPlayerState_2; // 0x28(0x08)
	struct APlayerState* RelatedPlayerState_3; // 0x30(0x08)
	struct UObject* OptionalObject; // 0x38(0x08)
};

// ScriptStruct Engine.HLODInstancingKey
// Size: 0x10 (Inherited: 0x00)
struct FHLODInstancingKey {
	struct UStaticMesh* StaticMesh; // 0x00(0x08)
	struct UMaterialInterface* Material; // 0x08(0x08)
};

// ScriptStruct Engine.ParameterGroupData
// Size: 0x18 (Inherited: 0x00)
struct FParameterGroupData {
	struct FString GroupName; // 0x00(0x10)
	int32_t GroupSortPriority; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.MaterialFunctionInfo
// Size: 0x18 (Inherited: 0x00)
struct FMaterialFunctionInfo {
	struct FGuid StateId; // 0x00(0x10)
	struct UMaterialFunctionInterface* Function; // 0x10(0x08)
};

// ScriptStruct Engine.MaterialParameterCollectionInfo
// Size: 0x18 (Inherited: 0x00)
struct FMaterialParameterCollectionInfo {
	struct FGuid StateId; // 0x00(0x10)
	struct UMaterialParameterCollection* ParameterCollection; // 0x10(0x08)
};

// ScriptStruct Engine.MaterialCachedParameterEditorInfo
// Size: 0x38 (Inherited: 0x00)
struct FMaterialCachedParameterEditorInfo {
	struct FString Description; // 0x00(0x10)
	struct FName Group; // 0x10(0x0c)
	int32_t SortPriority; // 0x1c(0x04)
	int32_t AssetIndex; // 0x20(0x04)
	struct FGuid ExpressionGUID; // 0x24(0x10)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Engine.MaterialCachedParameterEntry
// Size: 0x50 (Inherited: 0x00)
struct FMaterialCachedParameterEntry {
	struct TSet<struct FMaterialParameterInfo> ParameterInfoSet; // 0x00(0x50)
};

// ScriptStruct Engine.MaterialCachedParameterEditorEntry
// Size: 0x10 (Inherited: 0x00)
struct FMaterialCachedParameterEditorEntry {
	struct TArray<struct FMaterialCachedParameterEditorInfo> EditorInfo; // 0x00(0x10)
};

// ScriptStruct Engine.MaterialCachedExpressionEditorOnlyData
// Size: 0x1f0 (Inherited: 0x00)
struct FMaterialCachedExpressionEditorOnlyData {
	struct FMaterialCachedParameterEntry EditorOnlyEntries; // 0x00(0x50)
	struct FMaterialCachedParameterEditorEntry EditorEntries[0x9]; // 0x50(0x90)
	struct TArray<bool> StaticSwitchValues; // 0xe0(0x10)
	struct TArray<struct FStaticComponentMaskValue> StaticComponentMaskValues; // 0xf0(0x10)
	struct TArray<struct FVector2D> ScalarMinMaxValues; // 0x100(0x10)
	struct TArray<struct TSoftObjectPtr<UCurveLinearColor>> ScalarCurveValues; // 0x110(0x10)
	struct TArray<struct TSoftObjectPtr<UCurveLinearColorAtlas>> ScalarCurveAtlasValues; // 0x120(0x10)
	struct TArray<struct FParameterChannelNames> VectorChannelNameValues; // 0x130(0x10)
	struct TArray<bool> VectorUsedAsChannelMaskValues; // 0x140(0x10)
	struct TArray<struct FParameterChannelNames> TextureChannelNameValues; // 0x150(0x10)
	struct FMaterialLayersFunctionsEditorOnlyData MaterialLayers; // 0x160(0x70)
	struct TArray<struct FString> AssetPaths; // 0x1d0(0x10)
	struct TArray<struct FName> LandscapeLayerNames; // 0x1e0(0x10)
};

// ScriptStruct Engine.MaterialCachedExpressionData
// Size: 0x3d8 (Inherited: 0x00)
struct FMaterialCachedExpressionData {
	struct FMaterialCachedParameterEntry RuntimeEntries[0x8]; // 0x00(0x280)
	struct TArray<int32_t> ScalarPrimitiveDataIndexValues; // 0x280(0x10)
	struct TArray<int32_t> VectorPrimitiveDataIndexValues; // 0x290(0x10)
	struct TArray<float> ScalarValues; // 0x2a0(0x10)
	struct TArray<bool> StaticSwitchValues; // 0x2b0(0x10)
	struct TArray<bool> DynamicSwitchValues; // 0x2c0(0x10)
	struct TArray<struct FLinearColor> VectorValues; // 0x2d0(0x10)
	struct TArray<struct FVector4d> DoubleVectorValues; // 0x2e0(0x10)
	struct TArray<struct TSoftObjectPtr<UTexture>> TextureValues; // 0x2f0(0x10)
	struct TArray<struct TSoftObjectPtr<UFont>> FontValues; // 0x300(0x10)
	struct TArray<int32_t> FontPageValues; // 0x310(0x10)
	struct TArray<struct TSoftObjectPtr<URuntimeVirtualTexture>> RuntimeVirtualTextureValues; // 0x320(0x10)
	struct TArray<struct TSoftObjectPtr<USparseVolumeTexture>> SparseVolumeTextureValues; // 0x330(0x10)
	struct TArray<struct UObject*> ReferencedTextures; // 0x340(0x10)
	struct TArray<struct FMaterialFunctionInfo> FunctionInfos; // 0x350(0x10)
	uint32_t FunctionInfosStateCRC; // 0x360(0x04)
	char pad_364[0x4]; // 0x364(0x04)
	struct TArray<struct FMaterialParameterCollectionInfo> ParameterCollectionInfos; // 0x368(0x10)
	struct TArray<struct ULandscapeGrassType*> GrassTypes; // 0x378(0x10)
	struct FMaterialLayersFunctionsRuntimeData MaterialLayers; // 0x388(0x20)
	struct TArray<struct FName> DynamicParameterNames; // 0x3a8(0x10)
	struct TArray<bool> QualityLevelsUsed; // 0x3b8(0x10)
	char bHasMaterialLayers : 1; // 0x3c8(0x01)
	char bHasRuntimeVirtualTextureOutput : 1; // 0x3c8(0x01)
	char bHasSceneColor : 1; // 0x3c8(0x01)
	char bHasPerInstanceCustomData : 1; // 0x3c8(0x01)
	char bHasPerInstanceRandom : 1; // 0x3c8(0x01)
	char bHasVertexInterpolator : 1; // 0x3c8(0x01)
	char pad_3C8_6 : 2; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	uint32_t PropertyConnectedBitmask; // 0x3cc(0x04)
	uint64_t PropertyConnectedMask; // 0x3d0(0x08)
};

// ScriptStruct Engine.ScalarParameterAtlasInstanceData
// Size: 0x68 (Inherited: 0x00)
struct FScalarParameterAtlasInstanceData {
	bool bIsUsedAsAtlasPosition; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSoftObjectPtr<UCurveLinearColor> Curve; // 0x08(0x30)
	struct TSoftObjectPtr<UCurveLinearColorAtlas> Atlas; // 0x38(0x30)
};

// ScriptStruct Engine.ScalarParameterValue
// Size: 0x28 (Inherited: 0x00)
struct FScalarParameterValue {
	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x14)
	float ParameterValue; // 0x14(0x04)
	struct FGuid ExpressionGUID; // 0x18(0x10)
};

// ScriptStruct Engine.VectorParameterValue
// Size: 0x34 (Inherited: 0x00)
struct FVectorParameterValue {
	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x14)
	struct FLinearColor ParameterValue; // 0x14(0x10)
	struct FGuid ExpressionGUID; // 0x24(0x10)
};

// ScriptStruct Engine.DoubleVectorParameterValue
// Size: 0x50 (Inherited: 0x00)
struct FDoubleVectorParameterValue {
	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x14)
	char pad_14[0xc]; // 0x14(0x0c)
	struct FVector4d ParameterValue; // 0x20(0x20)
	struct FGuid ExpressionGUID; // 0x40(0x10)
};

// ScriptStruct Engine.TextureParameterValue
// Size: 0x30 (Inherited: 0x00)
struct FTextureParameterValue {
	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x14)
	char pad_14[0x4]; // 0x14(0x04)
	struct UTexture* ParameterValue; // 0x18(0x08)
	struct FGuid ExpressionGUID; // 0x20(0x10)
};

// ScriptStruct Engine.RuntimeVirtualTextureParameterValue
// Size: 0x30 (Inherited: 0x00)
struct FRuntimeVirtualTextureParameterValue {
	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x14)
	char pad_14[0x4]; // 0x14(0x04)
	struct URuntimeVirtualTexture* ParameterValue; // 0x18(0x08)
	struct FGuid ExpressionGUID; // 0x20(0x10)
};

// ScriptStruct Engine.SparseVolumeTextureParameterValue
// Size: 0x30 (Inherited: 0x00)
struct FSparseVolumeTextureParameterValue {
	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x14)
	char pad_14[0x4]; // 0x14(0x04)
	struct USparseVolumeTexture* ParameterValue; // 0x18(0x08)
	struct FGuid ExpressionGUID; // 0x20(0x10)
};

// ScriptStruct Engine.FontParameterValue
// Size: 0x38 (Inherited: 0x00)
struct FFontParameterValue {
	struct FMaterialParameterInfo ParameterInfo; // 0x00(0x14)
	char pad_14[0x4]; // 0x14(0x04)
	struct UFont* FontValue; // 0x18(0x08)
	int32_t FontPage; // 0x20(0x04)
	struct FGuid ExpressionGUID; // 0x24(0x10)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Engine.MaterialInstanceCachedData
// Size: 0x10 (Inherited: 0x00)
struct FMaterialInstanceCachedData {
	struct TArray<int32_t> ParentLayerIndexRemap; // 0x00(0x10)
};

// ScriptStruct Engine.MaterialOverrideNanite
// Size: 0x40 (Inherited: 0x00)
struct FMaterialOverrideNanite {
	bool bEnableOverride; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UMaterialInterface* OverrideMaterial; // 0x08(0x08)
	struct TSoftObjectPtr<UMaterialInterface> OverrideMaterialRef; // 0x10(0x30)
};

// ScriptStruct Engine.CollectionParameterBase
// Size: 0x1c (Inherited: 0x00)
struct FCollectionParameterBase {
	struct FName ParameterName; // 0x00(0x0c)
	struct FGuid ID; // 0x0c(0x10)
};

// ScriptStruct Engine.CollectionScalarParameter
// Size: 0x20 (Inherited: 0x1c)
struct FCollectionScalarParameter : FCollectionParameterBase {
	float DefaultValue; // 0x1c(0x04)
};

// ScriptStruct Engine.CollectionVectorParameter
// Size: 0x2c (Inherited: 0x1c)
struct FCollectionVectorParameter : FCollectionParameterBase {
	struct FLinearColor DefaultValue; // 0x1c(0x10)
};

// ScriptStruct Engine.MemberReference
// Size: 0x38 (Inherited: 0x00)
struct FMemberReference {
	struct UObject* MemberParent; // 0x00(0x08)
	struct FString MemberScope; // 0x08(0x10)
	struct FName MemberName; // 0x18(0x0c)
	struct FGuid MemberGuid; // 0x24(0x10)
	bool bSelfContext; // 0x34(0x01)
	bool bWasDeprecated; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
};

// ScriptStruct Engine.MeshReductionSettings
// Size: 0x2c (Inherited: 0x00)
struct FMeshReductionSettings {
	float PercentTriangles; // 0x00(0x04)
	uint32_t MaxNumOfTriangles; // 0x04(0x04)
	float PercentVertices; // 0x08(0x04)
	uint32_t MaxNumOfVerts; // 0x0c(0x04)
	float MaxDeviation; // 0x10(0x04)
	float PixelError; // 0x14(0x04)
	float WeldingThreshold; // 0x18(0x04)
	float HardAngleThreshold; // 0x1c(0x04)
	int32_t BaseLODModel; // 0x20(0x04)
	enum class EMeshFeatureImportance SilhouetteImportance; // 0x24(0x01)
	enum class EMeshFeatureImportance TextureImportance; // 0x25(0x01)
	enum class EMeshFeatureImportance ShadingImportance; // 0x26(0x01)
	char bRecalculateNormals : 1; // 0x27(0x01)
	char bGenerateUniqueLightmapUVs : 1; // 0x27(0x01)
	char bKeepSymmetry : 1; // 0x27(0x01)
	char bVisibilityAided : 1; // 0x27(0x01)
	char bCullOccluded : 1; // 0x27(0x01)
	char pad_27_5 : 3; // 0x27(0x01)
	enum class EStaticMeshReductionTerimationCriterion TerminationCriterion; // 0x28(0x01)
	enum class EMeshFeatureImportance VisibilityAggressiveness; // 0x29(0x01)
	enum class EMeshFeatureImportance VertexColorImportance; // 0x2a(0x01)
	char pad_2B[0x1]; // 0x2b(0x01)
};

// ScriptStruct Engine.MeshInstancingSettings
// Size: 0x18 (Inherited: 0x00)
struct FMeshInstancingSettings {
	struct AActor* ActorClassToUse; // 0x00(0x08)
	int32_t InstanceReplacementThreshold; // 0x08(0x04)
	bool bSkipMeshesWithVertexColors; // 0x0c(0x01)
	bool bUseHLODVolumes; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct UInstancedStaticMeshComponent* ISMComponentToUse; // 0x10(0x08)
};

// ScriptStruct Engine.PacketSimulationSettings
// Size: 0x34 (Inherited: 0x00)
struct FPacketSimulationSettings {
	int32_t PktLoss; // 0x00(0x04)
	int32_t PktLossMaxSize; // 0x04(0x04)
	int32_t PktLossMinSize; // 0x08(0x04)
	int32_t PktOrder; // 0x0c(0x04)
	int32_t PktDup; // 0x10(0x04)
	int32_t PktLag; // 0x14(0x04)
	int32_t PktLagVariance; // 0x18(0x04)
	int32_t PktLagMin; // 0x1c(0x04)
	int32_t PktLagMax; // 0x20(0x04)
	int32_t PktIncomingLagMin; // 0x24(0x04)
	int32_t PktIncomingLagMax; // 0x28(0x04)
	int32_t PktIncomingLoss; // 0x2c(0x04)
	int32_t PktJitter; // 0x30(0x04)
};

// ScriptStruct Engine.NetDriverReplicationSystemConfig
// Size: 0x0c (Inherited: 0x00)
struct FNetDriverReplicationSystemConfig {
	uint32_t MaxReplicatedObjectCount; // 0x00(0x04)
	uint32_t MaxDeltaCompressedObjectCount; // 0x04(0x04)
	uint32_t MaxNetObjectGroupCount; // 0x08(0x04)
};

// ScriptStruct Engine.ChannelDefinition
// Size: 0x28 (Inherited: 0x00)
struct FChannelDefinition {
	struct FName ChannelName; // 0x00(0x0c)
	struct FName ClassName; // 0x0c(0x0c)
	ClassPtrProperty ChannelClass; // 0x18(0x08)
	int32_t StaticChannelIndex; // 0x20(0x04)
	char bTickOnCreate : 1; // 0x24(0x01)
	char bServerOpen : 1; // 0x24(0x01)
	char bClientOpen : 1; // 0x24(0x01)
	char bInitialServer : 1; // 0x24(0x01)
	char bInitialClient : 1; // 0x24(0x01)
	char pad_24_5 : 3; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Engine.NetworkEmulationProfileDescription
// Size: 0x20 (Inherited: 0x00)
struct FNetworkEmulationProfileDescription {
	struct FString ProfileName; // 0x00(0x10)
	struct FString ToolTip; // 0x10(0x10)
};

// ScriptStruct Engine.BandwidthTestItem
// Size: 0x10 (Inherited: 0x00)
struct FBandwidthTestItem {
	struct TArray<char> Kilobyte; // 0x00(0x10)
};

// ScriptStruct Engine.BandwidthTestGenerator
// Size: 0x20 (Inherited: 0x00)
struct FBandwidthTestGenerator {
	struct TArray<struct FBandwidthTestItem> ReplicatedBuffers; // 0x00(0x10)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct Engine.RPCDoSState
// Size: 0x48 (Inherited: 0x00)
struct FRPCDoSState {
	char pad_0[0x8]; // 0x00(0x08)
	bool bLogEscalate; // 0x08(0x01)
	bool bSendEscalateAnalytics; // 0x09(0x01)
	bool bKickPlayer; // 0x0a(0x01)
	bool bTrackRecentRPCs; // 0x0b(0x01)
	int16_t EscalateQuotaRPCsPerFrame; // 0x0c(0x02)
	int16_t EscalateTimeQuotaMSPerFrame; // 0x0e(0x02)
	int16_t EscalateQuotaRPCsPerPeriod; // 0x10(0x02)
	int16_t EscalateTimeQuotaMSPerPeriod; // 0x12(0x02)
	int8_t EscalateQuotaTimePeriod; // 0x14(0x01)
	int8_t EscalationCountTolerance; // 0x15(0x01)
	int16_t EscalationTimeToleranceMS; // 0x16(0x02)
	int16_t RPCRepeatLimitPerPeriod; // 0x18(0x02)
	int16_t RPCRepeatLimitMSPerPeriod; // 0x1a(0x02)
	int8_t RPCRepeatLimitTimePeriod; // 0x1c(0x01)
	char pad_1D[0x1]; // 0x1d(0x01)
	int16_t CooloffTime; // 0x1e(0x02)
	int16_t AutoEscalateTime; // 0x20(0x02)
	char pad_22[0x26]; // 0x22(0x26)
};

// ScriptStruct Engine.RPCDoSStateConfig
// Size: 0x78 (Inherited: 0x48)
struct FRPCDoSStateConfig : FRPCDoSState {
	char pad_48[0x30]; // 0x48(0x30)
};

// ScriptStruct Engine.RPCAnalyticsThreshold
// Size: 0x18 (Inherited: 0x00)
struct FRPCAnalyticsThreshold {
	struct FName RPC; // 0x00(0x0c)
	int32_t CountPerSec; // 0x0c(0x04)
	double TimePerSec; // 0x10(0x08)
};

// ScriptStruct Engine.UniqueNetIdRepl
// Size: 0x30 (Inherited: 0x01)
struct FUniqueNetIdRepl : FUniqueNetIdWrapper {
	char pad_1[0x1f]; // 0x01(0x1f)
	struct TArray<char> ReplicationBytes; // 0x20(0x10)
};

// ScriptStruct Engine.ParticleSystemWorldManagerTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FParticleSystemWorldManagerTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.PSCPoolElem
// Size: 0x10 (Inherited: 0x00)
struct FPSCPoolElem {
	struct UParticleSystemComponent* PSC; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct Engine.PSCPool
// Size: 0x10 (Inherited: 0x00)
struct FPSCPool {
	struct TArray<struct FPSCPoolElem> FreeElements; // 0x00(0x10)
};

// ScriptStruct Engine.WorldPSCPool
// Size: 0x58 (Inherited: 0x00)
struct FWorldPSCPool {
	struct TMap<struct UParticleSystem*, struct FPSCPool> WorldParticleSystemPools; // 0x00(0x50)
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct Engine.FreezablePerPlatformInt
// Size: 0x04 (Inherited: 0x00)
struct FFreezablePerPlatformInt {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct Engine.PerPlatformFrameRate
// Size: 0x08 (Inherited: 0x00)
struct FPerPlatformFrameRate {
	struct FFrameRate Default; // 0x00(0x08)
};

// ScriptStruct Engine.ClusteredComponentData
// Size: 0x110 (Inherited: 0x00)
struct FClusteredComponentData {
	char pad_0[0x100]; // 0x00(0x100)
	struct TWeakObjectPtr<struct UClusterUnionReplicatedProxyComponent> ReplicatedProxyComponent; // 0x100(0x08)
	bool bWasReplicating; // 0x108(0x01)
	bool bPendingDeletion; // 0x109(0x01)
	char pad_10A[0x6]; // 0x10a(0x06)
};

// ScriptStruct Engine.ClusteredActorData
// Size: 0x58 (Inherited: 0x00)
struct FClusteredActorData {
	struct TSet<struct TWeakObjectPtr<struct UPrimitiveComponent>> Components; // 0x00(0x50)
	bool bWasReplicatingMovement; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct Engine.ClusterUnionReplicatedData
// Size: 0x02 (Inherited: 0x00)
struct FClusterUnionReplicatedData {
	char ObjectState; // 0x00(0x01)
	bool bIsAnchored; // 0x01(0x01)
};

// ScriptStruct Engine.ClusterUnionPendingAddData
// Size: 0x20 (Inherited: 0x00)
struct FClusterUnionPendingAddData {
	struct TArray<int32_t> BoneIds; // 0x00(0x10)
	struct TArray<struct FExternalSpatialAccelerationPayload> AccelerationPayloads; // 0x10(0x10)
};

// ScriptStruct Engine.ClusterUnionParticleCandidateData
// Size: 0x0c (Inherited: 0x00)
struct FClusterUnionParticleCandidateData {
	struct TWeakObjectPtr<struct UPrimitiveComponent> Component; // 0x00(0x08)
	int32_t BoneID; // 0x08(0x04)
};

// ScriptStruct Engine.ConstraintDrive
// Size: 0x10 (Inherited: 0x00)
struct FConstraintDrive {
	float Stiffness; // 0x00(0x04)
	float Damping; // 0x04(0x04)
	float MaxForce; // 0x08(0x04)
	char bEnablePositionDrive : 1; // 0x0c(0x01)
	char bEnableVelocityDrive : 1; // 0x0c(0x01)
	char pad_C_2 : 6; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.LinearDriveConstraint
// Size: 0x68 (Inherited: 0x00)
struct FLinearDriveConstraint {
	struct FVector PositionTarget; // 0x00(0x18)
	struct FVector VelocityTarget; // 0x18(0x18)
	struct FConstraintDrive XDrive; // 0x30(0x10)
	struct FConstraintDrive YDrive; // 0x40(0x10)
	struct FConstraintDrive ZDrive; // 0x50(0x10)
	char bEnablePositionDrive : 1; // 0x60(0x01)
	char pad_60_1 : 7; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct Engine.AngularDriveConstraint
// Size: 0x68 (Inherited: 0x00)
struct FAngularDriveConstraint {
	struct FConstraintDrive TwistDrive; // 0x00(0x10)
	struct FConstraintDrive SwingDrive; // 0x10(0x10)
	struct FConstraintDrive SlerpDrive; // 0x20(0x10)
	struct FRotator OrientationTarget; // 0x30(0x18)
	struct FVector AngularVelocityTarget; // 0x48(0x18)
	enum class EAngularDriveMode AngularDriveMode; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct Engine.ConstraintProfileProperties
// Size: 0x160 (Inherited: 0x00)
struct FConstraintProfileProperties {
	float ProjectionLinearTolerance; // 0x00(0x04)
	float ProjectionAngularTolerance; // 0x04(0x04)
	float ProjectionLinearAlpha; // 0x08(0x04)
	float ProjectionAngularAlpha; // 0x0c(0x04)
	float ShockPropagationAlpha; // 0x10(0x04)
	float LinearBreakThreshold; // 0x14(0x04)
	float LinearPlasticityThreshold; // 0x18(0x04)
	float AngularBreakThreshold; // 0x1c(0x04)
	float AngularPlasticityThreshold; // 0x20(0x04)
	float ContactTransferScale; // 0x24(0x04)
	struct FLinearConstraint LinearLimit; // 0x28(0x1c)
	struct FConeConstraint ConeLimit; // 0x44(0x20)
	struct FTwistConstraint TwistLimit; // 0x64(0x1c)
	char bDisableCollision : 1; // 0x80(0x01)
	char bParentDominates : 1; // 0x80(0x01)
	char bEnableShockPropagation : 1; // 0x80(0x01)
	char bEnableProjection : 1; // 0x80(0x01)
	char bEnableMassConditioning : 1; // 0x80(0x01)
	char bAngularBreakable : 1; // 0x80(0x01)
	char bAngularPlasticity : 1; // 0x80(0x01)
	char bLinearBreakable : 1; // 0x80(0x01)
	char bLinearPlasticity : 1; // 0x81(0x01)
	char pad_81_1 : 7; // 0x81(0x01)
	char pad_82[0x6]; // 0x82(0x06)
	struct FLinearDriveConstraint LinearDrive; // 0x88(0x68)
	struct FAngularDriveConstraint AngularDrive; // 0xf0(0x68)
	enum class EConstraintPlasticityType LinearPlasticityType; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
};

// ScriptStruct Engine.ConstraintBaseParams
// Size: 0x14 (Inherited: 0x00)
struct FConstraintBaseParams {
	float Stiffness; // 0x00(0x04)
	float Damping; // 0x04(0x04)
	float Restitution; // 0x08(0x04)
	float ContactDistance; // 0x0c(0x04)
	char bSoftConstraint : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Engine.TwistConstraint
// Size: 0x1c (Inherited: 0x14)
struct FTwistConstraint : FConstraintBaseParams {
	float TwistLimitDegrees; // 0x14(0x04)
	enum class EAngularConstraintMotion TwistMotion; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct Engine.ConeConstraint
// Size: 0x20 (Inherited: 0x14)
struct FConeConstraint : FConstraintBaseParams {
	float Swing1LimitDegrees; // 0x14(0x04)
	float Swing2LimitDegrees; // 0x18(0x04)
	enum class EAngularConstraintMotion Swing1Motion; // 0x1c(0x01)
	enum class EAngularConstraintMotion Swing2Motion; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
};

// ScriptStruct Engine.LinearConstraint
// Size: 0x1c (Inherited: 0x14)
struct FLinearConstraint : FConstraintBaseParams {
	float Limit; // 0x14(0x04)
	enum class ELinearConstraintMotion XMotion; // 0x18(0x01)
	enum class ELinearConstraintMotion YMotion; // 0x19(0x01)
	enum class ELinearConstraintMotion ZMotion; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Engine.ConstraintInstanceBase
// Size: 0x38 (Inherited: 0x00)
struct FConstraintInstanceBase {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct Engine.ConstraintInstance
// Size: 0x280 (Inherited: 0x38)
struct FConstraintInstance : FConstraintInstanceBase {
	struct FName JointName; // 0x38(0x0c)
	struct FName ConstraintBone1; // 0x44(0x0c)
	struct FName ConstraintBone2; // 0x50(0x0c)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FVector Pos1; // 0x60(0x18)
	struct FVector PriAxis1; // 0x78(0x18)
	struct FVector SecAxis1; // 0x90(0x18)
	struct FVector Pos2; // 0xa8(0x18)
	struct FVector PriAxis2; // 0xc0(0x18)
	struct FVector SecAxis2; // 0xd8(0x18)
	struct FRotator AngularRotationOffset; // 0xf0(0x18)
	char bScaleLinearLimits : 1; // 0x108(0x01)
	char pad_108_1 : 7; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct FConstraintProfileProperties ProfileInstance; // 0x110(0x160)
	char pad_270[0x10]; // 0x270(0x10)
};

// ScriptStruct Engine.ConstraintInstanceAccessor
// Size: 0x0c (Inherited: 0x00)
struct FConstraintInstanceAccessor {
	struct TWeakObjectPtr<struct UObject> Owner; // 0x00(0x08)
	uint32_t Index; // 0x08(0x04)
};

// ScriptStruct Engine.NetworkPhysicsDatas
// Size: 0x18 (Inherited: 0x00)
struct FNetworkPhysicsDatas {
	char pad_0[0x8]; // 0x00(0x08)
	int32_t ServerFrame; // 0x08(0x04)
	int32_t LocalFrame; // 0x0c(0x04)
	int32_t InputFrame; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.PhysicalAnimationData
// Size: 0x28 (Inherited: 0x00)
struct FPhysicalAnimationData {
	struct FName BodyName; // 0x00(0x0c)
	char bIsLocalSimulation : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float OrientationStrength; // 0x10(0x04)
	float AngularVelocityStrength; // 0x14(0x04)
	float PositionStrength; // 0x18(0x04)
	float VelocityStrength; // 0x1c(0x04)
	float MaxLinearForce; // 0x20(0x04)
	float MaxAngularForce; // 0x24(0x04)
};

// ScriptStruct Engine.PhysicsAssetSolverSettings
// Size: 0x1c (Inherited: 0x00)
struct FPhysicsAssetSolverSettings {
	int32_t PositionIterations; // 0x00(0x04)
	int32_t VelocityIterations; // 0x04(0x04)
	int32_t ProjectionIterations; // 0x08(0x04)
	float CullDistance; // 0x0c(0x04)
	float MaxDepenetrationVelocity; // 0x10(0x04)
	float FixedTimeStep; // 0x14(0x04)
	bool bUseLinearJointSolver; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct Engine.SolverIterations
// Size: 0x18 (Inherited: 0x00)
struct FSolverIterations {
	int32_t SolverIterations; // 0x00(0x04)
	int32_t JointIterations; // 0x04(0x04)
	int32_t CollisionIterations; // 0x08(0x04)
	int32_t SolverPushOutIterations; // 0x0c(0x04)
	int32_t JointPushOutIterations; // 0x10(0x04)
	int32_t CollisionPushOutIterations; // 0x14(0x04)
};

// ScriptStruct Engine.PhysicalAnimationProfile
// Size: 0x34 (Inherited: 0x00)
struct FPhysicalAnimationProfile {
	struct FName ProfileName; // 0x00(0x0c)
	struct FPhysicalAnimationData PhysicalAnimationData; // 0x0c(0x28)
};

// ScriptStruct Engine.PhysicsConstraintProfileHandle
// Size: 0x170 (Inherited: 0x00)
struct FPhysicsConstraintProfileHandle {
	struct FConstraintProfileProperties ProfileProperties; // 0x00(0x160)
	struct FName ProfileName; // 0x160(0x0c)
	char pad_16C[0x4]; // 0x16c(0x04)
};

// ScriptStruct Engine.PhysicalSurfaceName
// Size: 0x10 (Inherited: 0x00)
struct FPhysicalSurfaceName {
	enum class EPhysicalSurface Type; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName Name; // 0x04(0x0c)
};

// ScriptStruct Engine.ChaosPhysicsSettings
// Size: 0x03 (Inherited: 0x00)
struct FChaosPhysicsSettings {
	enum class EChaosThreadingMode DefaultThreadingModel; // 0x00(0x01)
	enum class EChaosSolverTickMode DedicatedThreadTickMode; // 0x01(0x01)
	enum class EChaosBufferMode DedicatedThreadBufferMode; // 0x02(0x01)
};

// ScriptStruct Engine.PhysicsPredictionSettings
// Size: 0x0c (Inherited: 0x00)
struct FPhysicsPredictionSettings {
	bool bEnablePhysicsPrediction; // 0x00(0x01)
	bool bEnablePhysicsResimulation; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	float ResimulationErrorThreshold; // 0x04(0x04)
	float MaxSupportedLatencyPrediction; // 0x08(0x04)
};

// ScriptStruct Engine.UpdateLevelStreamingLevelStatus
// Size: 0x14 (Inherited: 0x00)
struct FUpdateLevelStreamingLevelStatus {
	struct FName PackageName; // 0x00(0x0c)
	int32_t LODIndex; // 0x0c(0x04)
	bool bNewShouldBeLoaded; // 0x10(0x01)
	bool bNewShouldBeVisible; // 0x11(0x01)
	bool bNewShouldBlockOnLoad; // 0x12(0x01)
	bool bNewShouldBlockOnUnload; // 0x13(0x01)
};

// ScriptStruct Engine.AsyncPhysicsTimestamp
// Size: 0x08 (Inherited: 0x00)
struct FAsyncPhysicsTimestamp {
	int32_t ServerFrame; // 0x00(0x04)
	int32_t LocalFrame; // 0x04(0x04)
};

// ScriptStruct Engine.PlayerMuteList
// Size: 0x58 (Inherited: 0x00)
struct FPlayerMuteList {
	char pad_0[0x50]; // 0x00(0x50)
	bool bHasVoiceHandshakeCompleted; // 0x50(0x01)
	char pad_51[0x3]; // 0x51(0x03)
	int32_t VoiceChannelIdx; // 0x54(0x04)
};

// ScriptStruct Engine.PropertyAccessIndirection
// Size: 0x40 (Inherited: 0x00)
struct FPropertyAccessIndirection {
	struct TFieldPath<FProperty> Property; // 0x00(0x20)
	struct UFunction* Function; // 0x20(0x08)
	int32_t ReturnBufferSize; // 0x28(0x04)
	int32_t ReturnBufferAlignment; // 0x2c(0x04)
	int32_t ArrayIndex; // 0x30(0x04)
	uint32_t Offset; // 0x34(0x04)
	enum class EPropertyAccessObjectType ObjectType; // 0x38(0x01)
	enum class EPropertyAccessIndirectionType Type; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct Engine.PropertyAccessIndirectionChain
// Size: 0x28 (Inherited: 0x00)
struct FPropertyAccessIndirectionChain {
	struct TFieldPath<FProperty> Property; // 0x00(0x20)
	int32_t IndirectionStartIndex; // 0x20(0x04)
	int32_t IndirectionEndIndex; // 0x24(0x04)
};

// ScriptStruct Engine.SpecularProfileStruct
// Size: 0x430 (Inherited: 0x00)
struct FSpecularProfileStruct {
	enum class ESpecularProfileFormat Format; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FRuntimeCurveLinearColor ViewColor; // 0x08(0x210)
	struct FRuntimeCurveLinearColor LightColor; // 0x218(0x210)
	struct UTexture2D* Texture; // 0x428(0x08)
};

// ScriptStruct Engine.SubsurfaceProfileStruct
// Size: 0x9c (Inherited: 0x00)
struct FSubsurfaceProfileStruct {
	struct FLinearColor SurfaceAlbedo; // 0x00(0x10)
	struct FLinearColor MeanFreePathColor; // 0x10(0x10)
	float MeanFreePathDistance; // 0x20(0x04)
	float WorldUnitScale; // 0x24(0x04)
	bool bEnableBurley; // 0x28(0x01)
	bool bEnableMeanFreePath; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	struct FLinearColor Tint; // 0x2c(0x10)
	float ScatterRadius; // 0x3c(0x04)
	struct FLinearColor SubsurfaceColor; // 0x40(0x10)
	struct FLinearColor FalloffColor; // 0x50(0x10)
	struct FLinearColor BoundaryColorBleed; // 0x60(0x10)
	float ExtinctionScale; // 0x70(0x04)
	float NormalScale; // 0x74(0x04)
	float ScatteringDistribution; // 0x78(0x04)
	float IOR; // 0x7c(0x04)
	float Roughness0; // 0x80(0x04)
	float Roughness1; // 0x84(0x04)
	float LobeMix; // 0x88(0x04)
	struct FLinearColor TransmissionTintColor; // 0x8c(0x10)
};

// ScriptStruct Engine.RepMovementNetSerializerConfig
// Size: 0x10 (Inherited: 0x10)
struct FRepMovementNetSerializerConfig : FNetSerializerConfig {
};

// ScriptStruct Engine.SingleAnimationPlayData
// Size: 0x18 (Inherited: 0x00)
struct FSingleAnimationPlayData {
	struct UAnimationAsset* AnimToPlay; // 0x00(0x08)
	char bSavedLooping : 1; // 0x08(0x01)
	char bSavedPlaying : 1; // 0x08(0x01)
	char pad_8_2 : 6; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float SavedPosition; // 0x0c(0x04)
	float SavedPlayRate; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.BoneMirrorInfo
// Size: 0x08 (Inherited: 0x00)
struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x00(0x04)
	enum class EAxis BoneFlipAxis; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct Engine.BoneMirrorExport
// Size: 0x1c (Inherited: 0x00)
struct FBoneMirrorExport {
	struct FName BoneName; // 0x00(0x0c)
	struct FName SourceBoneName; // 0x0c(0x0c)
	enum class EAxis BoneFlipAxis; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct Engine.SkeletalMeshClothBuildParams
// Size: 0x60 (Inherited: 0x00)
struct FSkeletalMeshClothBuildParams {
	struct TWeakObjectPtr<struct UClothingAssetBase> TargetAsset; // 0x00(0x08)
	int32_t TargetLod; // 0x08(0x04)
	bool bRemapParameters; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FString AssetName; // 0x10(0x10)
	int32_t LODIndex; // 0x20(0x04)
	int32_t SourceSection; // 0x24(0x04)
	bool bRemoveFromMesh; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct TSoftObjectPtr<UPhysicsAsset> PhysicsAsset; // 0x30(0x30)
};

// ScriptStruct Engine.ClothPhysicsProperties_Legacy
// Size: 0x50 (Inherited: 0x00)
struct FClothPhysicsProperties_Legacy {
	float VerticalResistance; // 0x00(0x04)
	float HorizontalResistance; // 0x04(0x04)
	float BendResistance; // 0x08(0x04)
	float ShearResistance; // 0x0c(0x04)
	float Friction; // 0x10(0x04)
	float Damping; // 0x14(0x04)
	float TetherStiffness; // 0x18(0x04)
	float TetherLimit; // 0x1c(0x04)
	float Drag; // 0x20(0x04)
	float StiffnessFrequency; // 0x24(0x04)
	float GravityScale; // 0x28(0x04)
	float MassScale; // 0x2c(0x04)
	float InertiaBlend; // 0x30(0x04)
	float SelfCollisionThickness; // 0x34(0x04)
	float SelfCollisionSquashScale; // 0x38(0x04)
	float SelfCollisionStiffness; // 0x3c(0x04)
	float SolverFrequency; // 0x40(0x04)
	float FiberCompression; // 0x44(0x04)
	float FiberExpansion; // 0x48(0x04)
	float FiberResistance; // 0x4c(0x04)
};

// ScriptStruct Engine.ClothingAssetData_Legacy
// Size: 0x78 (Inherited: 0x00)
struct FClothingAssetData_Legacy {
	struct FName AssetName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString ApexFileName; // 0x10(0x10)
	bool bClothPropertiesChanged; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	struct FClothPhysicsProperties_Legacy PhysicsProperties; // 0x24(0x50)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct Engine.BoneFilter
// Size: 0x10 (Inherited: 0x00)
struct FBoneFilter {
	bool bExcludeSelf; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FName BoneName; // 0x04(0x0c)
};

// ScriptStruct Engine.SkeletalMeshLODGroupSettings
// Size: 0x90 (Inherited: 0x00)
struct FSkeletalMeshLODGroupSettings {
	struct FPerPlatformFloat ScreenSize; // 0x00(0x04)
	float LODHysteresis; // 0x04(0x04)
	enum class EBoneFilterActionOption BoneFilterActionOption; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct TArray<struct FBoneFilter> BoneList; // 0x10(0x10)
	struct TArray<struct FName> BonesToPrioritize; // 0x20(0x10)
	struct TArray<int32_t> SectionsToPrioritize; // 0x30(0x10)
	float WeightOfPrioritization; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct UAnimSequence* BakePose; // 0x48(0x08)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x50(0x3c)
	int8_t MaterialQualityLevel; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
};

// ScriptStruct Engine.SkelMeshMergeSectionMapping
// Size: 0x10 (Inherited: 0x00)
struct FSkelMeshMergeSectionMapping {
	struct TArray<int32_t> SectionIDs; // 0x00(0x10)
};

// ScriptStruct Engine.SkelMeshMergeMeshUVTransforms
// Size: 0x10 (Inherited: 0x00)
struct FSkelMeshMergeMeshUVTransforms {
	struct TArray<struct FTransform> UVTransforms; // 0x00(0x10)
};

// ScriptStruct Engine.SkelMeshMergeUVTransformMapping
// Size: 0x10 (Inherited: 0x00)
struct FSkelMeshMergeUVTransformMapping {
	struct TArray<struct FSkelMeshMergeMeshUVTransforms> UVTransformsPerMesh; // 0x00(0x10)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBuiltData
// Size: 0x78 (Inherited: 0x00)
struct FSkeletalMeshSamplingRegionBuiltData {
	char pad_0[0x78]; // 0x00(0x78)
};

// ScriptStruct Engine.SkeletalMeshSamplingLODBuiltData
// Size: 0x48 (Inherited: 0x00)
struct FSkeletalMeshSamplingLODBuiltData {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct Engine.SkeletalMeshSamplingBuiltData
// Size: 0x20 (Inherited: 0x00)
struct FSkeletalMeshSamplingBuiltData {
	struct TArray<struct FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x00(0x10)
	struct TArray<struct FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10(0x10)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBoneFilter
// Size: 0x10 (Inherited: 0x00)
struct FSkeletalMeshSamplingRegionBoneFilter {
	struct FName BoneName; // 0x00(0x0c)
	char bIncludeOrExclude : 1; // 0x0c(0x01)
	char bApplyToChildren : 1; // 0x0c(0x01)
	char pad_C_2 : 6; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionMaterialFilter
// Size: 0x0c (Inherited: 0x00)
struct FSkeletalMeshSamplingRegionMaterialFilter {
	struct FName MaterialName; // 0x00(0x0c)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegion
// Size: 0x38 (Inherited: 0x00)
struct FSkeletalMeshSamplingRegion {
	struct FName Name; // 0x00(0x0c)
	int32_t LODIndex; // 0x0c(0x04)
	char bSupportUniformlyDistributedSampling : 1; // 0x10(0x01)
	char pad_10_1 : 7; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x18(0x10)
	struct TArray<struct FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x28(0x10)
};

// ScriptStruct Engine.SkeletalMeshSamplingInfo
// Size: 0x30 (Inherited: 0x00)
struct FSkeletalMeshSamplingInfo {
	struct TArray<struct FSkeletalMeshSamplingRegion> Regions; // 0x00(0x10)
	struct FSkeletalMeshSamplingBuiltData BuiltData; // 0x10(0x20)
};

// ScriptStruct Engine.SectionReference
// Size: 0x04 (Inherited: 0x00)
struct FSectionReference {
	int32_t SectionIndex; // 0x00(0x04)
};

// ScriptStruct Engine.SkeletalMeshLODInfo
// Size: 0xf0 (Inherited: 0x00)
struct FSkeletalMeshLODInfo {
	struct FPerPlatformFloat ScreenSize; // 0x00(0x04)
	float LODHysteresis; // 0x04(0x04)
	struct TArray<int32_t> LODMaterialMap; // 0x08(0x10)
	struct FSkeletalMeshBuildSettings BuildSettings; // 0x18(0x18)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x30(0x3c)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct FBoneReference> BonesToRemove; // 0x70(0x10)
	struct TArray<struct FBoneReference> BonesToPrioritize; // 0x80(0x10)
	struct TArray<struct FSectionReference> SectionsToPrioritize; // 0x90(0x10)
	float WeightOfPrioritization; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct UAnimSequence* BakePose; // 0xa8(0x08)
	struct UAnimSequence* BakePoseOverride; // 0xb0(0x08)
	struct FString SourceImportFilename; // 0xb8(0x10)
	enum class ESkinCacheUsage SkinCacheUsage; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float MorphTargetPositionErrorTolerance; // 0xcc(0x04)
	char bHasBeenSimplified : 1; // 0xd0(0x01)
	char bHasPerLODVertexColors : 1; // 0xd0(0x01)
	char bAllowCPUAccess : 1; // 0xd0(0x01)
	char pad_D0_3 : 5; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
	struct TArray<struct FSkeletalMeshVertexAttributeInfo> VertexAttributes; // 0xd8(0x10)
	char bSupportUniformlyDistributedSampling : 1; // 0xe8(0x01)
	char pad_E8_1 : 7; // 0xe8(0x01)
	enum class EMaterialQualityLevel MaterialQualityLevel; // 0xe9(0x01)
	char pad_EA[0x6]; // 0xea(0x06)
};

// ScriptStruct Engine.SkeletalMaterial
// Size: 0x28 (Inherited: 0x00)
struct FSkeletalMaterial {
	struct UMaterialInterface* MaterialInterface; // 0x00(0x08)
	struct FName MaterialSlotName; // 0x08(0x0c)
	struct FMeshUVChannelInfo UVChannelData; // 0x14(0x14)
};

// ScriptStruct Engine.SoundClassEditorData
// Size: 0x08 (Inherited: 0x00)
struct FSoundClassEditorData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.SoundClassProperties
// Size: 0x198 (Inherited: 0x00)
struct FSoundClassProperties {
	float Volume; // 0x00(0x04)
	float Pitch; // 0x04(0x04)
	float LowPassFilterFrequency; // 0x08(0x04)
	float AttenuationDistanceScale; // 0x0c(0x04)
	float LFEBleed; // 0x10(0x04)
	float VoiceCenterChannelVolume; // 0x14(0x04)
	float RadioFilterVolume; // 0x18(0x04)
	float RadioFilterVolumeThreshold; // 0x1c(0x04)
	char bApplyEffects : 1; // 0x20(0x01)
	char bAlwaysPlay : 1; // 0x20(0x01)
	char bIsUISound : 1; // 0x20(0x01)
	char bIsMusic : 1; // 0x20(0x01)
	char bCenterChannelOnly : 1; // 0x20(0x01)
	char bApplyAmbientVolumes : 1; // 0x20(0x01)
	char bReverb : 1; // 0x20(0x01)
	char pad_20_7 : 1; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float Default2DReverbSendAmount; // 0x24(0x04)
	struct FSoundModulationDefaultSettings ModulationSettings; // 0x28(0x160)
	enum class EAudioOutputTarget OutputTarget; // 0x188(0x01)
	enum class ESoundWaveLoadingBehavior LoadingBehavior; // 0x189(0x01)
	char pad_18A[0x6]; // 0x18a(0x06)
	struct USoundSubmix* DefaultSubmix; // 0x190(0x08)
};

// ScriptStruct Engine.SoundModulationDefaultSettings
// Size: 0x160 (Inherited: 0x00)
struct FSoundModulationDefaultSettings {
	struct FSoundModulationDestinationSettings VolumeModulationDestination; // 0x00(0x58)
	struct FSoundModulationDestinationSettings PitchModulationDestination; // 0x58(0x58)
	struct FSoundModulationDestinationSettings HighpassModulationDestination; // 0xb0(0x58)
	struct FSoundModulationDestinationSettings LowpassModulationDestination; // 0x108(0x58)
};

// ScriptStruct Engine.SoundModulationDestinationSettings
// Size: 0x58 (Inherited: 0x00)
struct FSoundModulationDestinationSettings {
	float Value; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TSet<struct USoundModulatorBase*> Modulators; // 0x08(0x50)
};

// ScriptStruct Engine.PassiveSoundMixModifier
// Size: 0x10 (Inherited: 0x00)
struct FPassiveSoundMixModifier {
	struct USoundMix* SoundMix; // 0x00(0x08)
	float MinVolumeThreshold; // 0x08(0x04)
	float MaxVolumeThreshold; // 0x0c(0x04)
};

// ScriptStruct Engine.SoundConcurrencySettings
// Size: 0x20 (Inherited: 0x00)
struct FSoundConcurrencySettings {
	int32_t MaxCount; // 0x00(0x04)
	char bLimitToOwner : 1; // 0x04(0x01)
	char bVolumeScaleCanRelease : 1; // 0x04(0x01)
	char pad_4_2 : 6; // 0x04(0x01)
	enum class EMaxConcurrentResolutionRule ResolutionRule; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	float RetriggerTime; // 0x08(0x04)
	float VolumeScale; // 0x0c(0x04)
	enum class EConcurrencyVolumeScaleMode VolumeScaleMode; // 0x10(0x04)
	float VolumeScaleAttackTime; // 0x14(0x04)
	float VolumeScaleReleaseTime; // 0x18(0x04)
	float VoiceStealReleaseTime; // 0x1c(0x04)
};

// ScriptStruct Engine.SoundNodeEditorData
// Size: 0x08 (Inherited: 0x00)
struct FSoundNodeEditorData {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct Engine.AudioEQEffect
// Size: 0x40 (Inherited: 0x08)
struct FAudioEQEffect : FAudioEffectParameters {
	char pad_8[0x8]; // 0x08(0x08)
	float FrequencyCenter0; // 0x10(0x04)
	float Gain0; // 0x14(0x04)
	float Bandwidth0; // 0x18(0x04)
	float FrequencyCenter1; // 0x1c(0x04)
	float Gain1; // 0x20(0x04)
	float Bandwidth1; // 0x24(0x04)
	float FrequencyCenter2; // 0x28(0x04)
	float Gain2; // 0x2c(0x04)
	float Bandwidth2; // 0x30(0x04)
	float FrequencyCenter3; // 0x34(0x04)
	float Gain3; // 0x38(0x04)
	float Bandwidth3; // 0x3c(0x04)
};

// ScriptStruct Engine.SoundClassAdjuster
// Size: 0x20 (Inherited: 0x00)
struct FSoundClassAdjuster {
	struct USoundClass* SoundClassObject; // 0x00(0x08)
	float VolumeAdjuster; // 0x08(0x04)
	float PitchAdjuster; // 0x0c(0x04)
	float LowPassFilterFrequency; // 0x10(0x04)
	char bApplyToChildren : 1; // 0x14(0x01)
	char pad_14_1 : 7; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float VoiceCenterChannelVolumeAdjuster; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct Engine.SoundModulationDefaultRoutingSettings
// Size: 0x168 (Inherited: 0x160)
struct FSoundModulationDefaultRoutingSettings : FSoundModulationDefaultSettings {
	enum class EModulationRouting VolumeRouting; // 0x160(0x01)
	enum class EModulationRouting PitchRouting; // 0x161(0x01)
	enum class EModulationRouting HighpassRouting; // 0x162(0x01)
	enum class EModulationRouting LowpassRouting; // 0x163(0x01)
	char pad_164[0x4]; // 0x164(0x04)
};

// ScriptStruct Engine.DistanceDatum
// Size: 0x14 (Inherited: 0x00)
struct FDistanceDatum {
	float FadeInDistanceStart; // 0x00(0x04)
	float FadeInDistanceEnd; // 0x04(0x04)
	float FadeOutDistanceStart; // 0x08(0x04)
	float FadeOutDistanceEnd; // 0x0c(0x04)
	float Volume; // 0x10(0x04)
};

// ScriptStruct Engine.SoundSubmixSpectralAnalysisBandSettings
// Size: 0x10 (Inherited: 0x00)
struct FSoundSubmixSpectralAnalysisBandSettings {
	float BandFrequency; // 0x00(0x04)
	int32_t AttackTimeMsec; // 0x04(0x04)
	int32_t ReleaseTimeMsec; // 0x08(0x04)
	float QFactor; // 0x0c(0x04)
};

// ScriptStruct Engine.StaticMeshOptimizationSettings
// Size: 0x1c (Inherited: 0x00)
struct FStaticMeshOptimizationSettings {
	enum class EOptimizationType ReductionMethod; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float NumOfTrianglesPercentage; // 0x04(0x04)
	float MaxDeviationPercentage; // 0x08(0x04)
	float WeldingThreshold; // 0x0c(0x04)
	bool bRecalcNormals; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float NormalsThreshold; // 0x14(0x04)
	char SilhouetteImportance; // 0x18(0x01)
	char TextureImportance; // 0x19(0x01)
	char ShadingImportance; // 0x1a(0x01)
	char pad_1B[0x1]; // 0x1b(0x01)
};

// ScriptStruct Engine.MeshSectionInfo
// Size: 0x0c (Inherited: 0x00)
struct FMeshSectionInfo {
	int32_t MaterialIndex; // 0x00(0x04)
	bool bEnableCollision; // 0x04(0x01)
	bool bCastShadow; // 0x05(0x01)
	bool bVisibleInRayTracing; // 0x06(0x01)
	bool bAffectDistanceFieldLighting; // 0x07(0x01)
	bool bForceOpaque; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct Engine.MeshSectionInfoMap
// Size: 0x50 (Inherited: 0x00)
struct FMeshSectionInfoMap {
	struct TMap<uint32_t, struct FMeshSectionInfo> Map; // 0x00(0x50)
};

// ScriptStruct Engine.AssetEditorOrbitCameraPosition
// Size: 0x50 (Inherited: 0x00)
struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVector CamOrbitPoint; // 0x08(0x18)
	struct FVector CamOrbitZoom; // 0x20(0x18)
	struct FRotator CamOrbitRotation; // 0x38(0x18)
};

// ScriptStruct Engine.StaticMaterial
// Size: 0x38 (Inherited: 0x00)
struct FStaticMaterial {
	struct UMaterialInterface* MaterialInterface; // 0x00(0x08)
	struct FName MaterialSlotName; // 0x08(0x0c)
	struct FName ImportedMaterialSlotName; // 0x14(0x0c)
	struct FMeshUVChannelInfo UVChannelData; // 0x20(0x14)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct Engine.MaterialRemapIndex
// Size: 0x18 (Inherited: 0x00)
struct FMaterialRemapIndex {
	uint32_t ImportVersionKey; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> MaterialRemap; // 0x08(0x10)
};

// ScriptStruct Engine.StaticMeshSourceModel
// Size: 0x98 (Inherited: 0x00)
struct FStaticMeshSourceModel {
	struct FMeshBuildSettings BuildSettings; // 0x00(0x48)
	struct FMeshReductionSettings ReductionSettings; // 0x48(0x2c)
	uint32_t CacheMeshDescriptionTrianglesCount; // 0x74(0x04)
	uint32_t CacheMeshDescriptionVerticesCount; // 0x78(0x04)
	float LODDistance; // 0x7c(0x04)
	struct FPerPlatformFloat ScreenSize; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct FString SourceImportFilename; // 0x88(0x10)
};

// ScriptStruct Engine.StreamableTexture
// Size: 0x01 (Inherited: 0x00)
struct FStreamableTexture {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.ExternalToolDefinition
// Size: 0x60 (Inherited: 0x00)
struct FExternalToolDefinition {
	struct FString ToolName; // 0x00(0x10)
	struct FFilePath ExecutablePath; // 0x10(0x10)
	struct FString CommandLineOptions; // 0x20(0x10)
	struct FDirectoryPath WorkingDirectory; // 0x30(0x10)
	struct FString ScriptExtension; // 0x40(0x10)
	struct FDirectoryPath ScriptDirectory; // 0x50(0x10)
};

// ScriptStruct Engine.ImportFactorySettingValues
// Size: 0x20 (Inherited: 0x00)
struct FImportFactorySettingValues {
	struct FString SettingName; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct Engine.EditorImportExportTestDefinition
// Size: 0x38 (Inherited: 0x00)
struct FEditorImportExportTestDefinition {
	struct FFilePath ImportFilePath; // 0x00(0x10)
	struct FString ExportFileExtension; // 0x10(0x10)
	bool bSkipExport; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FImportFactorySettingValues> FactorySettings; // 0x28(0x10)
};

// ScriptStruct Engine.EditorImportWorkflowDefinition
// Size: 0x20 (Inherited: 0x00)
struct FEditorImportWorkflowDefinition {
	struct FFilePath ImportFilePath; // 0x00(0x10)
	struct TArray<struct FImportFactorySettingValues> FactorySettings; // 0x10(0x10)
};

// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
// Size: 0x150 (Inherited: 0x00)
struct FBuildPromotionImportWorkflowSettings {
	struct FEditorImportWorkflowDefinition Diffuse; // 0x00(0x20)
	struct FEditorImportWorkflowDefinition Normal; // 0x20(0x20)
	struct FEditorImportWorkflowDefinition StaticMesh; // 0x40(0x20)
	struct FEditorImportWorkflowDefinition ReimportStaticMesh; // 0x60(0x20)
	struct FEditorImportWorkflowDefinition BlendShapeMesh; // 0x80(0x20)
	struct FEditorImportWorkflowDefinition MorphMesh; // 0xa0(0x20)
	struct FEditorImportWorkflowDefinition SkeletalMesh; // 0xc0(0x20)
	struct FEditorImportWorkflowDefinition Animation; // 0xe0(0x20)
	struct FEditorImportWorkflowDefinition Sound; // 0x100(0x20)
	struct FEditorImportWorkflowDefinition SurroundSound; // 0x120(0x20)
	struct TArray<struct FEditorImportWorkflowDefinition> OtherAssetsToImport; // 0x140(0x10)
};

// ScriptStruct Engine.BuildPromotionOpenAssetSettings
// Size: 0x60 (Inherited: 0x00)
struct FBuildPromotionOpenAssetSettings {
	struct FFilePath BlueprintAsset; // 0x00(0x10)
	struct FFilePath MaterialAsset; // 0x10(0x10)
	struct FFilePath ParticleSystemAsset; // 0x20(0x10)
	struct FFilePath SkeletalMeshAsset; // 0x30(0x10)
	struct FFilePath StaticMeshAsset; // 0x40(0x10)
	struct FFilePath TextureAsset; // 0x50(0x10)
};

// ScriptStruct Engine.BuildPromotionNewProjectSettings
// Size: 0x20 (Inherited: 0x00)
struct FBuildPromotionNewProjectSettings {
	struct FDirectoryPath NewProjectFolderOverride; // 0x00(0x10)
	struct FString NewProjectNameOverride; // 0x10(0x10)
};

// ScriptStruct Engine.MaterialEditorPromotionSettings
// Size: 0x30 (Inherited: 0x00)
struct FMaterialEditorPromotionSettings {
	struct FFilePath DefaultMaterialAsset; // 0x00(0x10)
	struct FFilePath DefaultDiffuseTexture; // 0x10(0x10)
	struct FFilePath DefaultNormalTexture; // 0x20(0x10)
};

// ScriptStruct Engine.ParticleEditorPromotionSettings
// Size: 0x10 (Inherited: 0x00)
struct FParticleEditorPromotionSettings {
	struct FFilePath DefaultParticleAsset; // 0x00(0x10)
};

// ScriptStruct Engine.BlueprintEditorPromotionSettings
// Size: 0x30 (Inherited: 0x00)
struct FBlueprintEditorPromotionSettings {
	struct FFilePath FirstMeshPath; // 0x00(0x10)
	struct FFilePath SecondMeshPath; // 0x10(0x10)
	struct FFilePath DefaultParticleAsset; // 0x20(0x10)
};

// ScriptStruct Engine.BuildPromotionTestSettings
// Size: 0x1f0 (Inherited: 0x00)
struct FBuildPromotionTestSettings {
	struct FFilePath DefaultStaticMeshAsset; // 0x00(0x10)
	struct FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10(0x150)
	struct FBuildPromotionOpenAssetSettings OpenAssets; // 0x160(0x60)
	struct FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0(0x20)
	struct FFilePath SourceControlMaterial; // 0x1e0(0x10)
};

// ScriptStruct Engine.EditorMapPerformanceTestDefinition
// Size: 0x30 (Inherited: 0x00)
struct FEditorMapPerformanceTestDefinition {
	struct FSoftObjectPath PerformanceTestmap; // 0x00(0x28)
	int32_t TestTimer; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.LaunchOnTestSettings
// Size: 0x20 (Inherited: 0x00)
struct FLaunchOnTestSettings {
	struct FFilePath LaunchOnTestmap; // 0x00(0x10)
	struct FString DeviceID; // 0x10(0x10)
};

// ScriptStruct Engine.TextureSourceBlock
// Size: 0x18 (Inherited: 0x00)
struct FTextureSourceBlock {
	int32_t BlockX; // 0x00(0x04)
	int32_t BlockY; // 0x04(0x04)
	int32_t SizeX; // 0x08(0x04)
	int32_t SizeY; // 0x0c(0x04)
	int32_t NumSlices; // 0x10(0x04)
	int32_t NumMips; // 0x14(0x04)
};

// ScriptStruct Engine.TextureSource
// Size: 0x70 (Inherited: 0x00)
struct FTextureSource {
	char pad_0[0x70]; // 0x00(0x70)
};

// ScriptStruct Engine.TexturePlatformData
// Size: 0x30 (Inherited: 0x00)
struct FTexturePlatformData {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct Engine.TextureFormatSettings
// Size: 0x02 (Inherited: 0x00)
struct FTextureFormatSettings {
	enum class TextureCompressionSettings CompressionSettings; // 0x00(0x01)
	char CompressionNoAlpha : 1; // 0x01(0x01)
	char CompressionForceAlpha : 1; // 0x01(0x01)
	char CompressionNone : 1; // 0x01(0x01)
	char CompressionYCoCg : 1; // 0x01(0x01)
	char SRGB : 1; // 0x01(0x01)
	char pad_1_5 : 3; // 0x01(0x01)
};

// ScriptStruct Engine.TextureSourceColorSettings
// Size: 0x50 (Inherited: 0x00)
struct FTextureSourceColorSettings {
	enum class ETextureSourceEncoding EncodingOverride; // 0x00(0x01)
	enum class ETextureColorSpace ColorSpace; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FVector2D RedChromaticityCoordinate; // 0x08(0x10)
	struct FVector2D GreenChromaticityCoordinate; // 0x18(0x10)
	struct FVector2D BlueChromaticityCoordinate; // 0x28(0x10)
	struct FVector2D WhiteChromaticityCoordinate; // 0x38(0x10)
	enum class ETextureChromaticAdaptationMethod ChromaticAdaptationMethod; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct Engine.TextureLODGroup
// Size: 0x7c (Inherited: 0x00)
struct FTextureLODGroup {
	enum class TextureGroup Group; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	int32_t LODBias; // 0x08(0x04)
	int32_t LODBias_Smaller; // 0x0c(0x04)
	int32_t LODBias_Smallest; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	int32_t NumStreamedMips; // 0x18(0x04)
	enum class TextureMipGenSettings MipGenSettings; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	int32_t MinLODSize; // 0x20(0x04)
	int32_t MaxLODSize; // 0x24(0x04)
	int32_t MaxLODSize_Smaller; // 0x28(0x04)
	int32_t MaxLODSize_Smallest; // 0x2c(0x04)
	int32_t MaxLODSize_VT; // 0x30(0x04)
	int32_t OptionalLODBias; // 0x34(0x04)
	int32_t OptionalMaxLODSize; // 0x38(0x04)
	struct FName MinMagFilter; // 0x3c(0x0c)
	struct FName MipFilter; // 0x48(0x0c)
	enum class ETextureMipLoadOptions MipLoadOptions; // 0x54(0x01)
	bool HighPriorityLoad; // 0x55(0x01)
	bool DuplicateNonOptionalMips; // 0x56(0x01)
	char pad_57[0x1]; // 0x57(0x01)
	float Downscale; // 0x58(0x04)
	enum class ETextureDownscaleOptions DownscaleOptions; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	int32_t VirtualTextureTileCountBias; // 0x60(0x04)
	int32_t VirtualTextureTileSizeBias; // 0x64(0x04)
	enum class ETextureLossyCompressionAmount LossyCompressionAmount; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	uint32_t MaxTextureDimension; // 0x6c(0x04)
	uint32_t AdditionalAnisotropy; // 0x70(0x04)
	bool IsUI; // 0x74(0x01)
	bool CookPlatformTilingDisabled; // 0x75(0x01)
	char pad_76[0x2]; // 0x76(0x02)
	int32_t MaxAniso; // 0x78(0x04)
};

// ScriptStruct Engine.TTTrackBase
// Size: 0x18 (Inherited: 0x00)
struct FTTTrackBase {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName TrackName; // 0x08(0x0c)
	bool bIsExternalCurve; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct Engine.TTTrackId
// Size: 0x08 (Inherited: 0x00)
struct FTTTrackId {
	int32_t TrackType; // 0x00(0x04)
	int32_t TrackIndex; // 0x04(0x04)
};

// ScriptStruct Engine.TTEventTrack
// Size: 0x30 (Inherited: 0x18)
struct FTTEventTrack : FTTTrackBase {
	struct FName FunctionName; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct UCurveFloat* CurveKeys; // 0x28(0x08)
};

// ScriptStruct Engine.TTPropertyTrack
// Size: 0x28 (Inherited: 0x18)
struct FTTPropertyTrack : FTTTrackBase {
	struct FName PropertyName; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct Engine.TTFloatTrack
// Size: 0x30 (Inherited: 0x28)
struct FTTFloatTrack : FTTPropertyTrack {
	struct UCurveFloat* CurveFloat; // 0x28(0x08)
};

// ScriptStruct Engine.TTVectorTrack
// Size: 0x30 (Inherited: 0x28)
struct FTTVectorTrack : FTTPropertyTrack {
	struct UCurveVector* CurveVector; // 0x28(0x08)
};

// ScriptStruct Engine.TTLinearColorTrack
// Size: 0x30 (Inherited: 0x28)
struct FTTLinearColorTrack : FTTPropertyTrack {
	struct UCurveLinearColor* CurveLinearColor; // 0x28(0x08)
};

// ScriptStruct Engine.HardwareCursorReference
// Size: 0x20 (Inherited: 0x00)
struct FHardwareCursorReference {
	struct FName CursorPath; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector2D HotSpot; // 0x10(0x10)
};

// ScriptStruct Engine.CanvasIcon
// Size: 0x18 (Inherited: 0x00)
struct FCanvasIcon {
	struct UTexture* Texture; // 0x00(0x08)
	float U; // 0x08(0x04)
	float V; // 0x0c(0x04)
	float UL; // 0x10(0x04)
	float VL; // 0x14(0x04)
};

// ScriptStruct Engine.AutoCompleteNode
// Size: 0x28 (Inherited: 0x00)
struct FAutoCompleteNode {
	int32_t IndexChar; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> AutoCompleteListIndices; // 0x08(0x10)
	char pad_18[0x10]; // 0x18(0x10)
};

// ScriptStruct Engine.KeyBind
// Size: 0x38 (Inherited: 0x00)
struct FKeyBind {
	struct FKey Key; // 0x00(0x20)
	struct FString Command; // 0x20(0x10)
	char Control : 1; // 0x30(0x01)
	char Shift : 1; // 0x30(0x01)
	char Alt : 1; // 0x30(0x01)
	char Cmd : 1; // 0x30(0x01)
	char bIgnoreCtrl : 1; // 0x30(0x01)
	char bIgnoreShift : 1; // 0x30(0x01)
	char bIgnoreAlt : 1; // 0x30(0x01)
	char bIgnoreCmd : 1; // 0x30(0x01)
	char bDisabled : 1; // 0x31(0x01)
	char pad_31_1 : 7; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct Engine.InputAxisProperties
// Size: 0x10 (Inherited: 0x00)
struct FInputAxisProperties {
	float DeadZone; // 0x00(0x04)
	float Sensitivity; // 0x04(0x04)
	float Exponent; // 0x08(0x04)
	char bInvert : 1; // 0x0c(0x01)
	char pad_C_1 : 7; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct Engine.InputAxisConfigEntry
// Size: 0x1c (Inherited: 0x00)
struct FInputAxisConfigEntry {
	struct FName AxisKeyName; // 0x00(0x0c)
	struct FInputAxisProperties AxisProperties; // 0x0c(0x10)
};

// ScriptStruct Engine.InputActionKeyMapping
// Size: 0x30 (Inherited: 0x00)
struct FInputActionKeyMapping {
	struct FName ActionName; // 0x00(0x0c)
	char bShift : 1; // 0x0c(0x01)
	char bCtrl : 1; // 0x0c(0x01)
	char bAlt : 1; // 0x0c(0x01)
	char bCmd : 1; // 0x0c(0x01)
	char bGamepadShift : 1; // 0x0c(0x01)
	char pad_C_5 : 3; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FKey Key; // 0x10(0x20)
};

// ScriptStruct Engine.InputAxisKeyMapping
// Size: 0x30 (Inherited: 0x00)
struct FInputAxisKeyMapping {
	struct FName AxisName; // 0x00(0x0c)
	float Scale; // 0x0c(0x04)
	struct FKey Key; // 0x10(0x20)
};

// ScriptStruct Engine.InputActionSpeechMapping
// Size: 0x18 (Inherited: 0x00)
struct FInputActionSpeechMapping {
	struct FName ActionName; // 0x00(0x0c)
	struct FName SpeechKeyword; // 0x0c(0x0c)
};

// ScriptStruct Engine.VoiceSettings
// Size: 0x18 (Inherited: 0x00)
struct FVoiceSettings {
	struct USceneComponent* ComponentToAttachTo; // 0x00(0x08)
	struct USoundAttenuation* AttenuationSettings; // 0x08(0x08)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x10(0x08)
};

// ScriptStruct Engine.VirtualTextureBuildSettings
// Size: 0x08 (Inherited: 0x00)
struct FVirtualTextureBuildSettings {
	int32_t TileSize; // 0x00(0x04)
	int32_t TileBorderSize; // 0x04(0x04)
};

// ScriptStruct Engine.VirtualTextureSpacePoolConfig
// Size: 0x30 (Inherited: 0x00)
struct FVirtualTextureSpacePoolConfig {
	int32_t MinTileSize; // 0x00(0x04)
	int32_t MaxTileSize; // 0x04(0x04)
	struct TArray<enum class EPixelFormat> Formats; // 0x08(0x10)
	int32_t SizeInMegabyte; // 0x18(0x04)
	bool bEnableResidencyMipMapBias; // 0x1c(0x01)
	bool bAllowSizeScale; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	uint32_t ScalabilityGroup; // 0x20(0x04)
	int32_t MinScaledSizeInMegabyte; // 0x24(0x04)
	int32_t MaxScaledSizeInMegabyte; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct Engine.LevelViewportInfo
// Size: 0x38 (Inherited: 0x00)
struct FLevelViewportInfo {
	struct FVector CamPosition; // 0x00(0x18)
	struct FRotator CamRotation; // 0x18(0x18)
	float CamOrthoZoom; // 0x30(0x04)
	bool CamUpdated; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct Engine.StartPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FStartPhysicsTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.EndPhysicsTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FEndPhysicsTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct Engine.LevelCollection
// Size: 0x78 (Inherited: 0x00)
struct FLevelCollection {
	char pad_0[0x8]; // 0x00(0x08)
	struct AGameStateBase* GameState; // 0x08(0x08)
	struct UNetDriver* NetDriver; // 0x10(0x08)
	struct UDemoNetDriver* DemoNetDriver; // 0x18(0x08)
	struct ULevel* PersistentLevel; // 0x20(0x08)
	struct TSet<struct ULevel*> Levels; // 0x28(0x50)
};

// ScriptStruct Engine.StreamingLevelsToConsider
// Size: 0x28 (Inherited: 0x00)
struct FStreamingLevelsToConsider {
	struct TArray<struct ULevelStreaming*> StreamingLevels; // 0x00(0x10)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct Engine.ActorDesc
// Size: 0xc8 (Inherited: 0x00)
struct FActorDesc {
	struct FGuid Guid; // 0x00(0x10)
	ClassPtrProperty NativeClass; // 0x10(0x08)
	struct FSoftObjectPath Class; // 0x18(0x28)
	struct FName Name; // 0x40(0x0c)
	struct FName Label; // 0x4c(0x0c)
	struct FBox Bounds; // 0x58(0x38)
	struct FName RuntimeGrid; // 0x90(0x0c)
	bool bIsSpatiallyLoaded; // 0x9c(0x01)
	bool bActorIsEditorOnly; // 0x9d(0x01)
	char pad_9E[0x2]; // 0x9e(0x02)
	struct FName ActorPackage; // 0xa0(0x0c)
	struct FName ActorPath; // 0xac(0x0c)
	struct TArray<struct FSoftObjectPath> DataLayerAssets; // 0xb8(0x10)
};

// ScriptStruct Engine.ActorPlacementDataLayers
// Size: 0x18 (Inherited: 0x00)
struct FActorPlacementDataLayers {
	struct TArray<struct FName> DataLayerInstanceNames; // 0x00(0x10)
	int32_t ContextID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct Engine.WorldPartitionDestructibleHLODDamagedActorState
// Size: 0x14 (Inherited: 0x0c)
struct FWorldPartitionDestructibleHLODDamagedActorState : FFastArraySerializerItem {
	int32_t ActorIndex; // 0x0c(0x04)
	char ActorHealth; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct Engine.WorldPartitionDestructibleHLODState
// Size: 0x148 (Inherited: 0x108)
struct FWorldPartitionDestructibleHLODState : FFastArraySerializer {
	struct TArray<struct FWorldPartitionDestructibleHLODDamagedActorState> DamagedActors; // 0x108(0x10)
	struct UWorldPartitionDestructibleHLODComponent* OwnerComponent; // 0x118(0x08)
	char pad_120[0x28]; // 0x120(0x28)
};

// ScriptStruct Engine.WorldPartitionHLODDestructionTag
// Size: 0x10 (Inherited: 0x00)
struct FWorldPartitionHLODDestructionTag {
	struct UWorldPartitionDestructibleHLODComponent* HLODDestructionComponent; // 0x00(0x08)
	int32_t ActorIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct Engine.WorldPartitionPerWorldSettings
// Size: 0x01 (Inherited: 0x00)
struct FWorldPartitionPerWorldSettings {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.WorldPartitionRuntimeCellObjectMapping
// Size: 0x01 (Inherited: 0x00)
struct FWorldPartitionRuntimeCellObjectMapping {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.WorldPartitionRuntimeCellDebugInfo
// Size: 0x38 (Inherited: 0x00)
struct FWorldPartitionRuntimeCellDebugInfo {
	struct FString Name; // 0x00(0x10)
	struct FName GridName; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	int64_t CoordX; // 0x20(0x08)
	int64_t CoordY; // 0x28(0x08)
	int64_t CoordZ; // 0x30(0x08)
};

// ScriptStruct Engine.SpatialHashStreamingGridLayerCell
// Size: 0x10 (Inherited: 0x00)
struct FSpatialHashStreamingGridLayerCell {
	struct TArray<struct UWorldPartitionRuntimeCell*> GridCells; // 0x00(0x10)
};

// ScriptStruct Engine.SpatialHashStreamingGridLevel
// Size: 0x60 (Inherited: 0x00)
struct FSpatialHashStreamingGridLevel {
	struct TArray<struct FSpatialHashStreamingGridLayerCell> LayerCells; // 0x00(0x10)
	struct TMap<int64_t, int32_t> LayerCellsMapping; // 0x10(0x50)
};

// ScriptStruct Engine.SpatialHashStreamingGrid
// Size: 0xc0 (Inherited: 0x00)
struct FSpatialHashStreamingGrid {
	struct FName GridName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector Origin; // 0x10(0x18)
	int32_t CellSize; // 0x28(0x04)
	float LoadingRange; // 0x2c(0x04)
	bool bBlockOnSlowStreaming; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FLinearColor DebugColor; // 0x34(0x10)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FSpatialHashStreamingGridLevel> GridLevels; // 0x48(0x10)
	struct FBox WorldBounds; // 0x58(0x38)
	bool bClientOnlyVisible; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct UHLODLayer* HLODLayer; // 0x98(0x08)
	char pad_A0[0x20]; // 0xa0(0x20)
};

// ScriptStruct Engine.SpatialHashRuntimeGrid
// Size: 0x01 (Inherited: 0x00)
struct FSpatialHashRuntimeGrid {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.WorldPartitionRuntimeSpatialHashGridPreviewer
// Size: 0x01 (Inherited: 0x00)
struct FWorldPartitionRuntimeSpatialHashGridPreviewer {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct Engine.StreamingSourceShape
// Size: 0x48 (Inherited: 0x00)
struct FStreamingSourceShape {
	bool bUseGridLoadingRange; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LoadingRangeScale; // 0x04(0x04)
	float Radius; // 0x08(0x04)
	bool bIsSector; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float SectorAngle; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FVector Location; // 0x18(0x18)
	struct FRotator Rotation; // 0x30(0x18)
};

// ScriptStruct Engine.WorldPartitionStreamingQuerySource
// Size: 0x138 (Inherited: 0x00)
struct FWorldPartitionStreamingQuerySource {
	struct FVector Location; // 0x00(0x18)
	float Radius; // 0x18(0x04)
	bool bUseGridLoadingRange; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct TArray<struct FName> DataLayers; // 0x20(0x10)
	bool bDataLayersOnly; // 0x30(0x01)
	bool bSpatialQuery; // 0x31(0x01)
	char pad_32[0x106]; // 0x32(0x106)
};

