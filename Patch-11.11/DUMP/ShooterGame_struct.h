// Enum ShooterGame.EActionChordTapHoldType
enum class EActionChordTapHoldType : uint8 {
	None = 0,
	Tap = 1,
	Hold = 2,
	DoubleTap = 3,
	Count = 4,
	EActionChordTapHoldType_MAX = 5
};

// Enum ShooterGame.EActionTraitSettingConsoleWidgetSwitcherIndex
enum class EActionTraitSettingConsoleWidgetSwitcherIndex : uint8 {
	ActionChordWidget = 0,
	TextWidget = 1,
	Count = 2,
	EActionTraitSettingConsoleWidgetSwitcherIndex_MAX = 3
};

// Enum ShooterGame.EActionTraitSettingTexture
enum class EActionTraitSettingTexture : uint8 {
	CustomBindingTexture = 0,
	WarningTexture = 1,
	DangerTexture = 2,
	LockedTexture = 3,
	Count = 4,
	EActionTraitSettingTexture_MAX = 5
};

// Enum ShooterGame.ECharacterPortraitScreenEnum
enum class ECharacterPortraitScreenEnum : uint8 {
	None = 0,
	AgentsScreen = 1,
	AgentAbilities = 2,
	AgentPurchaseConfirmScreen = 3,
	AgentPurchaseCompleteScreen = 4,
	Invalid = 5,
	Count = 5,
	ECharacterPortraitScreenEnum_MAX = 6
};

// Enum ShooterGame.EAresTouchState
enum class EAresTouchState : uint8 {
	Unknown = 0,
	Pressed = 1,
	Active = 2,
	Released = 3,
	Entered = 4,
	Exited = 5,
	EAresTouchState_MAX = 6
};

// Enum ShooterGame.EAresBoolSettingName
enum class EAresBoolSettingName : uint8 {
	MouseInverted = 0,
	MouseWheelWrapsInventory = 1,
	MouseWheelIncludesLevelSlot = 2,
	ClientMuted = 3,
	RawMouseEnabled = 4,
	MinimapRotates = 5,
	MinimapFixedRotation = 6,
	MinimapTranslates = 7,
	EnableMinimapVisionCones = 8,
	EnableInstabilityIndicators = 9,
	ShowBulletTracers = 10,
	ImproveClarity = 11,
	AdaptiveSharpenEnabled = 12,
	DisableDistortion = 13,
	ShadowsEnabled = 14,
	VoiceChatEnabled = 15,
	TeamVoiceChatEnabled = 16,
	CustomPartyVoiceChatEnabled = 17,
	VoiceChat_ChannelToggle_MicEnabled = 18,
	VoiceChat_ChannelToggle_MicTeamEnabled = 19,
	VoiceChat_ChannelToggle_MicPartyEnabled = 20,
	VoiceChat_ChannelToggle_SpeakerEnabled = 21,
	VoiceChat_ChannelToggle_SpeakerTeamEnabled = 22,
	VoiceChat_ChannelToggle_SpeakerPartyEnabled = 23,
	LoopbackTestEnabled = 24,
	PushToTalkEnabled = 25,
	DisableEnhanced3DAudio = 26,
	GameplayVoiceEnabled = 27,
	CharacterVoiceEnabled = 28,
	TacticalCalloutsEnabled = 29,
	AutomatedTacticalCalloutsEnabled = 30,
	AllyAbilityEquipAudioEnabled = 31,
	VocalEmotesEnabled = 32,
	AnnouncerEnabled = 33,
	VignetteEnabled = 34,
	AutoRescopeSniper = 35,
	HoldInputForADS = 36,
	HoldInputForSniperScopes = 37,
	CycleThroughSniperZoomLevels = 38,
	SniperToggleHoldInputCycles = 39,
	LimitFramerateOnBattery = 40,
	LimitFramerateInMenu = 41,
	LimitFramerateInBackground = 42,
	LimitFramerateAlways = 43,
	DisplayFPS = 44,
	ShowSpecatedPlayerCrosshair = 45,
	FadeCrosshairWithFiringError = 46,
	ShowBlood = 47,
	ShowCorpses = 48,
	ToggleCrouch = 49,
	ToggleWalk = 50,
	DefaultToWalk = 51,
	VoipDucksMusicVolume = 52,
	VoipDucksVOFlavor = 53,
	MuteMusicOnAppWindowDeactivate = 54,
	EnableHRTF = 55,
	EnableForceFeedback = 56,
	ShootingRangeBotArmorEnabled = 57,
	ShootingRangeBotStrafeEnabled = 58,
	ShootingRangeBotInfiniteAmmoEnabled = 59,
	ShootingRangePracticeModeEnabled = 60,
	ShootingRangeTargetPracticeBotEnabled = 61,
	SpectatorCountWidgetVisible = 62,
	ToggleReturnToStrongestWeapon = 63,
	AutoEquipPrioritizeStrongest = 64,
	AutoEquipSkipsMelee = 65,
	ToggleLiveDiagnostics = 66,
	AESWheelHoldEnabled = 67,
	CrosshairHasOutline = 68,
	CrosshairDisplayCenterDot = 69,
	CrosshairUseCustomColor = 70,
	CrosshairFixMinErrorAcrossWeapons = 71,
	CrosshairUseAdvancedOptions = 72,
	CrosshairScaleToResolution = 73,
	CrosshairInnerLinesShowMovementError = 74,
	CrosshairInnerLinesShowShootingError = 75,
	CrosshairInnerLinesShowMinError = 76,
	CrosshairInnerLinesShowLines = 77,
	CrosshairInnerLinesAllowVertScaling = 78,
	CrosshairOuterLinesShowMovementError = 79,
	CrosshairOuterLinesShowShootingError = 80,
	CrosshairOuterLinesShowMinError = 81,
	CrosshairOuterLinesShowLines = 82,
	CrosshairOuterLinesAllowVertScaling = 83,
	CrosshairUseCustomCrosshairOnAllPrimary = 84,
	CrosshairUsePrimaryCrosshairForADS = 85,
	CrosshairADSHasOutline = 86,
	CrosshairADSDisplayCenterDot = 87,
	CrosshairADSUseCustomColor = 88,
	CrosshairADSFixMinErrorAcrossWeapons = 89,
	CrosshairADSInnerLinesShowMovementError = 90,
	CrosshairADSInnerLinesShowShootingError = 91,
	CrosshairADSInnerLinesShowMinError = 92,
	CrosshairADSInnerLinesShowLines = 93,
	CrosshairADSInnerLinesAllowVertScaling = 94,
	CrosshairADSOuterLinesShowMovementError = 95,
	CrosshairADSOuterLinesShowShootingError = 96,
	CrosshairADSOuterLinesShowMinError = 97,
	CrosshairADSOuterLinesShowLines = 98,
	CrosshairADSOuterLinesAllowVertScaling = 99,
	CrosshairUsePrimaryCrosshairForFocusMode = 100,
	CrosshairFocusModeHasOutline = 101,
	CrosshairFocusModeDisplayCenterDot = 102,
	CrosshairFocusModeUseCustomColor = 103,
	CrosshairFocusModeFixMinErrorAcrossWeapons = 104,
	CrosshairFocusModeInnerLinesShowMovementError = 105,
	CrosshairFocusModeInnerLinesShowShootingError = 106,
	CrosshairFocusModeInnerLinesShowMinError = 107,
	CrosshairFocusModeInnerLinesShowLines = 108,
	CrosshairFocusModeInnerLinesAllowVertScaling = 109,
	CrosshairFocusModeOuterLinesShowMovementError = 110,
	CrosshairFocusModeOuterLinesShowShootingError = 111,
	CrosshairFocusModeOuterLinesShowMinError = 112,
	CrosshairFocusModeOuterLinesShowLines = 113,
	CrosshairFocusModeOuterLinesAllowVertScaling = 114,
	CrosshairSniperDisplayCenterDot = 115,
	CrosshairSniperUseCustomColor = 116,
	AlwaysShowInventoryWidgets = 117,
	LeftHanded = 118,
	TeamColorCrosshair = 119,
	AllyLoadoutInfoAlwaysVisibile = 120,
	TacticalCalloutsInChat = 121,
	TouchCustomAbilityUI = 122,
	TouchAbilityRestoreLastEquippable = 123,
	TouchUseSprintToggle = 124,
	TouchUseHalfScreenMovementArea = 125,
	TouchMovementUncrouchOnRun = 126,
	TouchAbilityMapRotation = 127,
	TouchEnableAutoRun = 128,
	TouchAutoRunEquipsKnife = 129,
	TouchSprintInputFromBottomOnly = 130,
	TouchRunBuffer = 131,
	TouchMarshalCycleZoomOnHold = 132,
	TouchQuickCastingEnabled = 133,
	GamepadInvertLookStickY = 134,
	GamepadInvertLookStickX = 135,
	GamepadEnablePartialAnalogSquareRemapping = 136,
	GamepadMapControlsInvertLookStickY = 137,
	GamepadMapControlsInvertLookStickX = 138,
	GamepadToggleDropSpikeHold = 139,
	StanceIndicatorEnabled = 140,
	GamepadTapToCycleIncompleteInventory = 141,
	GamepadJettAutomaticGlide = 142,
	GamepadForceWalkWhileFocusedOrZoomed = 143,
	GamepadUseAgentAbilitySensMultipliers = 144,
	GamepadUseAdvancedAimSensitivity = 145,
	GamepadDampenShootingSensitivity = 146,
	GamepadNeonSlideBoundToAbility = 147,
	MultithreadedRenderingEnabled = 148,
	HasEverStartedAMatch = 149,
	HasAcceptedCodeOfConduct = 150,
	HasSeenNewPlayerSettings = 151,
	HasSeenNPEContractTutorial = 152,
	HasSeenUPWTutorial = 153,
	HasSeenSettingsTutorial = 154,
	HasSeenWelcomeScreen = 155,
	HasSeenMenuTutorial = 156,
	HasSeenPhotoSensitivityWarning = 157,
	HasSeenInitSelectPresetScreen = 158,
	HasSeenTournamentsScreen = 159,
	HasSeenXGPActivationModal = 160,
	HasSeenTrainingPrompt = 161,
	HasSeenBTEModal = 162,
	HasAcceptedVoiceRecordingTerms = 163,
	HasSeenMFAPrelaunchScreen = 164,
	CollectionShowOwnedOnly = 165,
	IncognitoHideMatchmadePlayerNames = 166,
	IncognitoRejectFriendRequests = 167,
	IncognitoRejectPartyInvitesByDisplayName = 168,
	IncognitoHideTextChatBox = 169,
	PlayerBehavior_MuteEnemyTextChat = 170,
	PlayerBehavior_MuteObserverTextChat = 171,
	HideUI = 172,
	HideCrosshair = 173,
	Hide1P = 174,
	HideOutlinesAndFresnel = 175,
	ObserversSeeBlinds = 176,
	TeamColorAffectsHUD = 177,
	ShowKeybindsOnMinimap = 178,
	ShowKeybindsOnMegamap = 179,
	FullscreenMegamap = 180,
	HandednessByTeam = 181,
	HideSpectatedAgentPortrait = 182,
	ObserverToggleScoreboard = 183,
	HasEverAppliedRoamingSettings = 184,
	HasEverAppliedRoamingSettingsGamepad = 185,
	ShowColoredMuzzleFlashes = 186,
	MaxbotGameplayVO = 187,
	MaxbotFlavorVO = 188,
	RGIInputLatencyEnabled = 189,
	VoiceSelfMuteEnabled = 190,
	MatureContentFilter = 191,
	ShowBloodVisual = 192,
	ShowCorpsesVisual = 193,
	AllowCrossPlay = 194,
	ShowCrossPlayWarning = 195,
	ShowNewPlayerTips = 196,
	ContextAwareModuleComplete = 197,
	EnableToggleableUsables = 198,
	GamepadRiftCosmicDivideOffset = 199,
	GamepadClayAutomatedBackthrow = 200,
	GamepadHapticsEnabled = 201,
	ShowReplayTimeInMs = 202,
	ShowKeyboardShortcutsOnButtons = 203,
	ShowFinalStatsInScoreboard = 204,
	HasSeenReplayAnnouncementMessaging = 205,
	HasAcknowledgedReplay = 206,
	HasCompletedAGameWithReplaysAvailable = 207,
	ShowDeathMarkersOnTimeline = 208,
	ShowUltimateMarkersOnTimeline = 209,
	NvidiaReflexLatewarpSetting = 210,
	PremierTeamForceRenameNoticeShown = 211,
	AllyLoadoutInfoAlwaysVisibleInReplays = 212,
	Count = 213,
	EAresBoolSettingName_MAX = 214
};

// Enum ShooterGame.EAresCommonButtonVisibleState
enum class EAresCommonButtonVisibleState : uint8 {
	Default = 0,
	Disabled = 1,
	Pressed = 2,
	Hovered = 3,
	Selected = 4,
	SelectedHovered = 5,
	Max = 6,
	EAresCommonButtonVisibleState_MAX = 7
};

// Enum ShooterGame.EAresFriendRequestResponseErrors
enum class EAresFriendRequestResponseErrors : uint8 {
	NoGameNameAndTagLineProvided = 0,
	InvalidNameTagFormatting = 1,
	RequestSentToFriend = 2,
	RequestSentToBlockedPlayer = 3,
	RequestSentToBlockingPlayer = 4,
	RequestSentToSelf = 5,
	RequestedPlayerNotFound = 6,
	FriendListFull = 7,
	MaxOutgoingInvites = 8,
	MaxIncomingInvites = 9,
	InternalError = 10,
	EAresFriendRequestResponseErrors_MAX = 11
};

// Enum ShooterGame.EAresFriendRequestDeclineErrors
enum class EAresFriendRequestDeclineErrors : uint8 {
	RequestNotFound = 0,
	InternalError = 1,
	EAresFriendRequestDeclineErrors_MAX = 2
};

// Enum ShooterGame.EAresFriendRequestResponse
enum class EAresFriendRequestResponse : uint8 {
	None = 0,
	Accept = 1,
	Decline = 2,
	EAresFriendRequestResponse_MAX = 3
};

// Enum ShooterGame.EAresTouchSwipeDirection
enum class EAresTouchSwipeDirection : uint8 {
	Up = 0,
	Down = 1,
	Left = 2,
	Right = 3,
	EAresTouchSwipeDirection_MAX = 4
};

// Enum ShooterGame.EAresTouchSwipeType
enum class EAresTouchSwipeType : uint8 {
	None = 0,
	Up = 1,
	Down = 2,
	Left = 3,
	Right = 4,
	EAresTouchSwipeType_MAX = 5
};

// Enum ShooterGame.EVisualizedSoundTypes
enum class EVisualizedSoundTypes : uint8 {
	None = 0,
	FootSteps = 1,
	JumpLaunch = 2,
	JumpLand = 3,
	BombPlant = 4,
	BombTick = 5,
	BombDefuse = 6,
	BombDrop = 7,
	Orb = 8,
	BasePistolFire = 9,
	SlimPistolFire = 10,
	AutoPistolFire = 11,
	LugerPistolFire = 12,
	RevolverPistolFire = 13,
	VectorSMGFire = 14,
	MP5SMGFire = 15,
	PumpShotgunFire = 16,
	AutoShotgunFire = 17,
	BurstRifleFire = 18,
	DMRRifleFire = 19,
	CarbineRifleFire = 20,
	AKRifleFire = 21,
	LeverSniperFire = 22,
	BoltSniperFire = 23,
	LMGFire = 24,
	HMGFire = 25,
	WeaponDrop = 26,
	Reload = 27,
	EVisualizedSoundTypes_MAX = 28
};

// Enum ShooterGame.EActionBindingsManagerBindingSwapFailure
enum class EActionBindingsManagerBindingSwapFailure : uint8 {
	Locked = 0,
	ChordedDPadInput = 1,
	Count = 2,
	EActionBindingsManagerBindingSwapFailure_MAX = 3
};

// Enum ShooterGame.EUIConfirmationModalType
enum class EUIConfirmationModalType : uint8 {
	None = 0,
	Confirm = 1,
	ConfirmCancel = 2,
	DoubleConfirm = 3,
	DoubleConfirmWithDismiss = 4,
	EUIConfirmationModalType_MAX = 5
};

// Enum ShooterGame.EDerankProtectionStatus
enum class EDerankProtectionStatus : uint8 {
	Empty = 0,
	Partial = 1,
	Full = 2,
	Count = 3,
	Invalid = 4,
	EDerankProtectionStatus_MAX = 5
};

// Enum ShooterGame.EConnectionStatus
enum class EConnectionStatus : uint8 {
	Uninitialized = 0,
	Disconnected = 1,
	Unresponsive = 2,
	Connecting = 3,
	Connected = 4,
	Count = 5,
	EConnectionStatus_MAX = 6
};

// Enum ShooterGame.EEquippableRejectInputReason
enum class EEquippableRejectInputReason : uint8 {
	NoResources = 0,
	OutsideGameplay = 1,
	OnCooldown = 2,
	BlockedByCurrentEquippable = 3,
	EquipSlotDisabled = 4,
	EEquippableRejectInputReason_MAX = 5
};

// Enum ShooterGame.EEsportsSubBracketType
enum class EEsportsSubBracketType : uint8 {
	Upper = 0,
	Lower = 1,
	Final = 2,
	Invalid = 3,
	EEsportsSubBracketType_MAX = 4
};

// Enum ShooterGame.EVCTLeague
enum class EVCTLeague : uint8 {
	None = 0,
	Champions = 1,
	Masters = 2,
	Americas = 3,
	EMEA = 4,
	Pacific = 5,
	China = 6,
	GameChangers = 7,
	Count = 8,
	EVCTLeague_MAX = 9
};

// Enum ShooterGame.EEsportsLiveTickerState
enum class EEsportsLiveTickerState : uint8 {
	PickBlockOpen = 0,
	LiveMatch = 1,
	None = 2,
	EEsportsLiveTickerState_MAX = 3
};

// Enum ShooterGame.EEsportsMatchStatus
enum class EEsportsMatchStatus : uint8 {
	InProgress = 0,
	Complete = 1,
	Unstarted = 2,
	Unneeded = 3,
	Count = 4,
	Invalid = 5,
	EEsportsMatchStatus_MAX = 6
};

// Enum ShooterGame.E2024VCTEvent
enum class E2024VCTEvent : uint8 {
	None = 0,
	LeagueKickoff_ALL = 1,
	LeagueKickoff_NA = 2,
	LeagueKickoff_EMEA = 3,
	LeagueKickoff_APAC = 4,
	LeagueKickoff_CN = 5,
	Masters1 = 6,
	Stage1_ALL = 7,
	Stage1_NA = 8,
	Stage1_EMEA = 9,
	Stage1_APAC = 10,
	Stage1_CN = 11,
	Masters2 = 12,
	Stage2_ALL = 13,
	Stage2_NA = 14,
	Stage2_EMEA = 15,
	Stage2_APAC = 16,
	Stage2_CN = 17,
	Champions = 18,
	GameChangers = 19,
	Count = 20,
	E2024VCTEvent_MAX = 21
};

// Enum ShooterGame.EEsportsMatchTeamOutcome
enum class EEsportsMatchTeamOutcome : uint8 {
	Win = 0,
	Loss = 1,
	Tie = 2,
	Forfeit = 3,
	Count = 4,
	Invalid = 5,
	EEsportsMatchTeamOutcome_MAX = 6
};

// Enum ShooterGame.EEsportsTeamMemberRole
enum class EEsportsTeamMemberRole : uint8 {
	IGL = 0,
	Player = 1,
	Substitute = 2,
	Coach = 3,
	Manager = 4,
	Invalid = 5,
	EEsportsTeamMemberRole_MAX = 6
};

// Enum ShooterGame.EAresFlyoutOpenState
enum class EAresFlyoutOpenState : uint8 {
	Closed = 0,
	Opening = 1,
	Opened = 2,
	Closing = 3,
	EAresFlyoutOpenState_MAX = 4
};

// Enum ShooterGame.EForceModuleType
enum class EForceModuleType : uint8 {
	ServerCreated = 0,
	ClientSimulated = 1,
	ClientSynced = 2,
	ClientPredicted = 3,
	EForceModuleType_MAX = 4
};

// Enum ShooterGame.EAresAssistType
enum class EAresAssistType : uint8 {
	None = 0,
	Damage = 1,
	Resurrection = 2,
	Heal = 3,
	CombatBuff = 4,
	Detain = 5,
	Blind = 6,
	Concussion = 7,
	Vulnerable = 8,
	Decay = 9,
	Reveal = 10,
	Gravity = 11,
	Slow = 12,
	Suppression = 13,
	Smoke = 14,
	Other = 15,
	Count = 16,
	EAresAssistType_MAX = 17
};

// Enum ShooterGame.EAresGamePhase
enum class EAresGamePhase : uint8 {
	NotStarted = 0,
	GameStarted = 1,
	BetweenRounds = 2,
	RoundStarting = 3,
	InRound = 4,
	RoundEnding = 5,
	SwitchingTeams = 6,
	GameEnded = 7,
	Count = 8,
	Invalid = 254,
	EAresGamePhase_MAX = 255
};

// Enum ShooterGame.EAresMatchTimeoutState
enum class EAresMatchTimeoutState : uint8 {
	None = 0,
	TimeoutCountdown = 1,
	Timeout = 2,
	Count = 3,
	EAresMatchTimeoutState_MAX = 4
};

// Enum ShooterGame.EUIConfirmationModalVisualType
enum class EUIConfirmationModalVisualType : uint8 {
	Generic = 0,
	SystemError = 1,
	Warning = 2,
	RestrictionsWarning = 3,
	EUIConfirmationModalVisualType_MAX = 4
};

// Enum ShooterGame.EAresInputState
enum class EAresInputState : uint8 {
	Released = 0,
	Pressed = 1,
	Count = 2,
	Invalid = 254,
	EAresInputState_MAX = 255
};

// Enum ShooterGame.EAresEquippableInput
enum class EAresEquippableInput : uint8 {
	EquippableInput_Primary_Trigger = 0,
	EquippableInput_Secondary_Trigger = 1,
	EquippableInput_Reload = 2,
	EquippableInput_ZoomToggle = 3,
	EquippableInput_Use = 4,
	EquippableInput_UseAgentAbility = 5,
	EquippableInput_Drop = 6,
	EquippableInput_Activate = 7,
	EquippableInput_SwipeUp = 8,
	EquippableInput_SwipeDown = 9,
	EquippableInput_SwipeLeft = 10,
	EquippableInput_SwipeRight = 11,
	EquippableInput_ZoomCancel = 12,
	EquippableInput_ProtoAlternateFire = 13,
	EquippableInput_ToggleZoom_SkipFirstLevel = 14,
	EquippableInput_Crouch = 15,
	EquippableInput_Count = 16,
	EquippableInput_Invalid = 254,
	EquippableInput_MAX = 255
};

// Enum ShooterGame.EAresIntSettingName
enum class EAresIntSettingName : uint8 {
	AntiAliasing = 0,
	GraphicsQuality = 1,
	TextureQuality = 2,
	UIQuality = 3,
	MaterialQuality = 4,
	DetailQuality = 5,
	AnisotropicFiltering = 6,
	BloomQuality = 7,
	VoiceVolume = 8,
	MicVolume = 9,
	MicSensitivityThreshold = 10,
	SpeakerConfiguration = 11,
	ColorBlindMode = 12,
	MegamapCalloutVisibility = 13,
	NvidiaReflexLowLatencySetting = 14,
	PlayerPerf_FirstSetting = 15,
	PlayerPerfShowFrameTime = 16,
	PlayerPerfShowIdleFrameTime = 17,
	PlayerPerfShowCPUFrameTime = 18,
	PlayerPerfShowGPUFrameTime = 19,
	PlayerPerfShowRHIFrameTime = 20,
	PlayerPerfShowFrameRate = 21,
	PlayerPerfShowServerFrameRate = 22,
	PlayerPerfShowAvailablePhysicalMemory = 23,
	PlayerPerfShowUsedPhysicalMemory = 24,
	PlayerPerfShowNetworkRtt = 25,
	PlayerPerfShowPacketsLostTotal = 26,
	PlayerPerfShowPacketLossPercentage = 27,
	PlayerPerfShowIncomingPacketLossPercentage = 28,
	PlayerPerfShowOutgoingPacketLossPercentage = 29,
	PlayerPerfShowPacketsReceived = 30,
	PlayerPerfShowPacketsSent = 31,
	PlayerPerfShowInputLatencyCpuPlusGpu = 32,
	PlayerPerfShowInputLatencyCpu = 33,
	PlayerPerfShowInputLatencyGpu = 34,
	PlayerPerfShowRenderWait = 35,
	PlayerPerfShowGpuRenderFrameTime = 36,
	PlayerPerfShowRHIPresentTime = 37,
	PlayerPerfShowRemoteInterpDelayMs = 38,
	PlayerPerfShowQueuedRemoteMoveCount = 39,
	PlayerPerfShowConsecutiveRemoteForwardPredictions = 40,
	PlayerPerfShowPacketsLostIncoming = 41,
	PlayerPerfShowPacketsLostOutgoing = 42,
	PlayerPerfShowUploadedData = 43,
	PlayerPerfShowDownloadedData = 44,
	PlayerPerfShowTotalTransferredData = 45,
	PlayerPerfShowIncomingPacketSize = 46,
	PlayerPerfShowOutgoingPacketSize = 47,
	PlayerPerfShowMoveCorrectionDistance = 48,
	PlayerPerfShowMoveTimelineShiftMs = 49,
	PlayerPerfShowReceivedEquippableCorrection = 50,
	PlayerPerfShowOutgoingInputQueueLength = 51,
	PlayerPerfShowOutgoingMoveQueueLength = 52,
	PlayerPerfShowClientIncomingMoveProcessingDelay = 53,
	PlayerPerfShowServerIncomingMoveProcessingDelay = 54,
	PlayerPerfShowATB = 55,
	PlayerPerfShowFrameCount = 56,
	PlayerPerfShowNetworkJitter = 57,
	PlayerPerfShowEndToEndLatency = 58,
	PlayerPerfShowFiringErrors = 59,
	PlayerPerfShow_RGILatencyMarkers_TotalLatencyMs = 60,
	PlayerPerfShow_RGILatencyMarkers_TotalWorkMs = 61,
	PlayerPerfShow_RGILatencyMarkers_TotalSlopMs = 62,
	PlayerPerfPresetInfo = 63,
	PlayerPerfPreset = 64,
	PlayerPerf_LastSetting = 65,
	NetworkSmoothing = 66,
	ShootingRangeSkillTestSetting = 67,
	ShootingRangeSkillTestDifficulty = 68,
	ShootingRangePlantModuleDifficultySetting = 69,
	ShootingRangeDefuseModuleDifficultySetting = 70,
	GamepadSavedPreset = 71,
	GamepadSavedAimCurve = 72,
	GamepadSavedAimCurveADS = 73,
	GamepadSavedAimCurveScoped = 74,
	GamepadSavedAimCurveFocusMode = 75,
	GamepadSavedAimCurveAngularDeadzone = 76,
	GamepadWeaponSwapMode = 77,
	GamepadWeaponSwapInputType = 78,
	GamepadJettGlidePressBehavior = 79,
	GamepadDefaultAimMode = 80,
	GamepadGuideToggleHawkAbility = 81,
	GamepadMageToggleWallAbility = 82,
	GamepadPhoenixToggleFireWallAbility = 83,
	GamepadMapCursorCurveBrimstoneSmokes = 84,
	GamepadMapCursorCurveBrimstoneOrbital = 85,
	GamepadMapCursorCurveCloveSmokes = 86,
	GamepadMapCursorCurveOmenUltimate = 87,
	GamepadMapCursorCurveCashewMissiles = 88,
	GamepadMapCursorCurveCashewUltimate = 89,
	GamepadMapCursorCurveMegamap = 90,
	TouchDoubleTapRight = 91,
	TouchHUDPreset = 92,
	TouchDoubleTapLeft = 93,
	TouchJoystickStyle = 94,
	TouchSniperZoomLevelSetting = 95,
	TouchOperatorZoomCycleStyle = 96,
	TouchOperatorZoomCycleStyle_CachedAllLevels = 97,
	TouchOperatorZoomCycleStyle_CachedLevelOne = 98,
	TouchOperatorZoomCycleStyle_CachedLevelTwo = 99,
	TouchAimSensitivityPreset = 100,
	TouchTrackballSensitivityPreset = 101,
	TouchDoubleTapTopLeft = 102,
	TouchDoubleTapTopMiddle = 103,
	TouchDoubleTapTopRight = 104,
	TouchDoubleTapMiddleLeft = 105,
	TouchDoubleTapMiddle = 106,
	TouchDoubleTapMiddleRight = 107,
	TouchDoubleTapBottomLeft = 108,
	TouchDoubleTapBottomMiddle = 109,
	TouchDoubleTapBottomRight = 110,
	TouchNumVerticalRegions = 111,
	TouchNumHorizontalRegions = 112,
	MaxFramerateInBuyPhase = 113,
	MaxFramerateInGamePhase = 114,
	MaxFramerateInSpectatorView = 115,
	ShootingRangeBotMode = 116,
	ShootingRangeBotAmount = 117,
	ShootingRangeTargetPracticeDistance = 118,
	LastSeenRoamingSettingsVersion = 119,
	VoiceSpeakingChannel = 120,
	PreferredVoiceSpeakingChannel = 121,
	Count = 122,
	EAresIntSettingName_MAX = 123
};

// Enum ShooterGame.EContentEditionType
enum class EContentEditionType : uint8 {
	None = 0,
	NotLimitedEdition = 1,
	LimitedEdition = 2,
	Count = 3,
	EContentEditionType_MAX = 4
};

// Enum ShooterGame.ELobbyType
enum class ELobbyType : uint8 {
	None = 0,
	Matchmade = 1,
	Custom = 2,
	Premier = 3,
	ELobbyType_MAX = 4
};

// Enum ShooterGame.EMatchResult
enum class EMatchResult : uint8 {
	Win = 0,
	Loss = 1,
	Draw = 2,
	EMatchResult_MAX = 3
};

// Enum ShooterGame.ESortCriteria
enum class ESortCriteria : uint8 {
	CombatScore = 0,
	KDA = 1,
	EconRating = 2,
	FirstBloods = 3,
	Plants = 4,
	Defuses = 5,
	Placeholder1 = 6,
	Placeholder2 = 7,
	Placeholder3 = 8,
	Placeholder4 = 9,
	ESortCriteria_MAX = 10
};

// Enum ShooterGame.EMeshPlayerView
enum class EMeshPlayerView : uint8 {
	FirstPerson = 0,
	ThirdPerson = 1,
	EMeshPlayerView_MAX = 2
};

// Enum ShooterGame.EPartyErrorEnum
enum class EPartyErrorEnum : uint8 {
	ErrUnparsableState = 0,
	ErrUnparsableTeam = 1,
	ErrJoinTypeNotRecognized = 2,
	ErrJoinPartyWithoutOwnership = 3,
	ErrJoinPartyGotBlocked = 4,
	ErrPartyTooLargeToJoin = 5,
	ErrPlayerDoesNotExist = 6,
	ErrPlayerNoCurrentParty = 7,
	ErrJoinPlayerNilParty = 8,
	ErrPlayerExistsInParty = 9,
	ErrJoiningPlayerNotInMenus = 10,
	ErrPartyMemberNotInMenus = 11,
	ErrPartyStateCantEnterMatchmaking = 12,
	ErrPartyNotInMatchmaking = 13,
	ErrPlayerInGame = 14,
	ErrNilSessionNotification = 15,
	ErrPartyCleaned = 16,
	ErrPartyTooLargeToConvertMM = 17,
	ErrClientVersionMismatchWithSession = 18,
	ErrPartyDoesNotExist = 19,
	ErrNotACustomGame = 20,
	ErrPartyStateCantEnterQuickCustomGame = 21,
	ErrTooManyPlayersForQuickCustomGame = 22,
	ErrInviteNotAllowed = 23,
	ErrCheatsDisabled = 24,
	ErrEmptyName = 25,
	ErrPartyStateCantEnterCustomGame = 26,
	ErrEmptyQueue = 27,
	ErrOldPartyIDMismatch = 28,
	ErrPartyIDInvalid = 29,
	ErrPlayerAlreadyInited = 30,
	ErrPlayerNotInited = 31,
	ErrNewPartyIDIsNotNew = 32,
	ErrInviteNotFound = 33,
	ErrInviteExists = 34,
	ErrPartyNil = 35,
	ErrPartyAlreadyExists = 36,
	ErrPartyIDMismatch = 37,
	ErrCannotModifyPlayerNotInParty = 38,
	ErrAlreadyInParty = 39,
	ErrPartyFull = 40,
	ErrIncorrectPartyState = 41,
	ErrPlayerClientVersionMismatch = 42,
	ErrInvalidPreviousState = 43,
	ErrNotPartyOwner = 44,
	ErrMatchmakingError = 45,
	ErrRequestOnOpenError = 46,
	ErrRequestOnFullParty = 47,
	ErrRequestTooManySubjects = 48,
	ErrQueueNotEnabled = 49,
	ErrQueueRestricted = 50,
	ErrInviteCodeMappingNil = 51,
	ErrInviterCrossPlayIncompatible = 52,
	ErrInviteeCrossPlayIncompatible = 53,
	ErrRequestingPlayerCrossPlayIncompatible = 54,
	ErrRequestToJoinPartyCrossPlayIncompatible = 55,
	ErrJoiningPlayerCrossPlayIncompatible = 56,
	ErrPartyToJoinCrossPlayIncompatible = 57,
	ErrPartyCrossPlayIncompatible = 58,
	ErrNativePlatformInviteError = 59,
	ErrGenericPlatformInviteError = 60,
	ErrPSNCrossPlayGameInvitationsNotAllowed = 61,
	ErrPSNPrivacySettingsNotCompatible = 62,
	ErrPlatformSessionJoin = 63,
	ErrNativePlatformInsufficientPermissions = 64,
	ErrPlayerBlocksRecipient = 65,
	ErrPlayerBlockedByRecipient = 66,
	ErrJoinNotAllowed = 67,
	ErrRequestToJoinNotAllowed = 68,
	ErrPlayerPlatformIsRestricted = 69,
	ErrInvalid = 70,
	EPartyErrorEnum_MAX = 71
};

// Enum ShooterGame.EActionBindChangeSource
enum class EActionBindChangeSource : uint8 {
	UserRebind = 0,
	Init = 1,
	RoamingDownload = 2,
	Reset = 3,
	Apply = 4,
	ResetOne = 5,
	Copy = 6,
	Count = 7,
	EActionBindChangeSource_MAX = 8
};

// Enum ShooterGame.EAresCameraPerspective
enum class EAresCameraPerspective : uint8 {
	FirstPerson = 0,
	ThirdPerson = 1,
	Count = 2,
	EAresCameraPerspective_MAX = 3
};

// Enum ShooterGame.EAresCameraStyle
enum class EAresCameraStyle : uint8 {
	UseViewTargetPerspective = 0,
	ThirdPersonCamera = 1,
	WatchGameStateObject = 2,
	ThirdPersonDebugCamera = 3,
	None = 4,
	Count = 5,
	EAresCameraStyle_MAX = 6
};

// Enum ShooterGame.EAresFloatSettingName
enum class EAresFloatSettingName : uint8 {
	Gamma = 0,
	MouseSensitivity = 1,
	MouseSensitivityZoomed = 2,
	MouseSensitivityADS = 3,
	MinimapSize = 4,
	MinimapZoom = 5,
	OverallVolume = 6,
	SoundEffectsVolume = 7,
	VoiceOverVolume = 8,
	VideoVolume = 9,
	AllMusicOverallVolume = 10,
	MenuAndLobbyMusicVolume = 11,
	CharacterSelectMusicVolume = 12,
	MaxFramerateOnBattery = 13,
	MaxFramerateInMenu = 14,
	MaxFramerateInBackground = 15,
	MaxFramerateAlways = 16,
	PingWheelHoldDelayMS = 17,
	AESWheelHoldDelayMS = 18,
	CrosshairOutlineThickness = 19,
	CrosshairOutlineOpacity = 20,
	CrosshairCenterDotSize = 21,
	CrosshairCenterDotOpacity = 22,
	CrosshairInnerLinesLineThickness = 23,
	CrosshairInnerLinesLineLength = 24,
	CrosshairInnerLinesLineLengthVertical = 25,
	CrosshairInnerLinesLineOffset = 26,
	CrosshairInnerLinesOpacity = 27,
	CrosshairInnerLinesFiringErrorScale = 28,
	CrosshairInnerLinesMovementErrorScale = 29,
	CrosshairOuterLinesLineThickness = 30,
	CrosshairOuterLinesLineLength = 31,
	CrosshairOuterLinesLineLengthVertical = 32,
	CrosshairOuterLinesLineOffset = 33,
	CrosshairOuterLinesOpacity = 34,
	CrosshairOuterLinesFiringErrorScale = 35,
	CrosshairOuterLinesMovementErrorScale = 36,
	CrosshairADSOutlineThickness = 37,
	CrosshairADSOutlineOpacity = 38,
	CrosshairADSCenterDotSize = 39,
	CrosshairADSCenterDotOpacity = 40,
	CrosshairADSInnerLinesLineThickness = 41,
	CrosshairADSInnerLinesLineLength = 42,
	CrosshairADSInnerLinesLineLengthVertical = 43,
	CrosshairADSInnerLinesLineOffset = 44,
	CrosshairADSInnerLinesOpacity = 45,
	CrosshairADSInnerLinesFiringErrorScale = 46,
	CrosshairADSInnerLinesMovementErrorScale = 47,
	CrosshairADSOuterLinesLineThickness = 48,
	CrosshairADSOuterLinesLineLength = 49,
	CrosshairADSOuterLinesLineLengthVertical = 50,
	CrosshairADSOuterLinesLineOffset = 51,
	CrosshairADSOuterLinesOpacity = 52,
	CrosshairADSOuterLinesFiringErrorScale = 53,
	CrosshairADSOuterLinesMovementErrorScale = 54,
	CrosshairFocusModeOutlineThickness = 55,
	CrosshairFocusModeOutlineOpacity = 56,
	CrosshairFocusModeCenterDotSize = 57,
	CrosshairFocusModeCenterDotOpacity = 58,
	CrosshairFocusModeInnerLinesLineThickness = 59,
	CrosshairFocusModeInnerLinesLineLength = 60,
	CrosshairFocusModeInnerLinesLineLengthVertical = 61,
	CrosshairFocusModeInnerLinesLineOffset = 62,
	CrosshairFocusModeInnerLinesOpacity = 63,
	CrosshairFocusModeInnerLinesFiringErrorScale = 64,
	CrosshairFocusModeInnerLinesMovementErrorScale = 65,
	CrosshairFocusModeOuterLinesLineThickness = 66,
	CrosshairFocusModeOuterLinesLineLength = 67,
	CrosshairFocusModeOuterLinesLineLengthVertical = 68,
	CrosshairFocusModeOuterLinesLineOffset = 69,
	CrosshairFocusModeOuterLinesOpacity = 70,
	CrosshairFocusModeOuterLinesFiringErrorScale = 71,
	CrosshairFocusModeOuterLinesMovementErrorScale = 72,
	CrosshairSniperCenterDotSize = 73,
	CrosshairSniperCenterDotOpacity = 74,
	TouchSensitivityZoomed = 75,
	TouchSensitivitySniper = 76,
	TouchTapMaxTime = 77,
	TouchExperimentalAnchoredButtonOffset = 78,
	TouchExperimentalMaxWalkSpeed = 79,
	TouchDoubleTapTime = 80,
	TouchDoubleTapDistance = 81,
	TouchTabletLayoutWidthThreshold = 82,
	TouchJoystickWalkThreshold = 83,
	TouchJoystickRunLockThreshold = 84,
	TouchSniperHoldCyclingSpeed = 85,
	GamepadBaseRotationSpeedX = 86,
	GamepadBaseRotationSpeedY = 87,
	GamepadFocusRotationSpeedX = 88,
	GamepadFocusRotationSpeedY = 89,
	GamepadADSRotationSpeedX = 90,
	GamepadADSRotationSpeedY = 91,
	GamepadScopedRotationSpeedX = 92,
	GamepadScopedRotationSpeedY = 93,
	GamepadLookStickInnerDeadzone = 94,
	GamepadLookStickOuterDeadzone = 95,
	GamepadLookStickAngularInnerDeadzoneDeg = 96,
	GamepadLookStickAngularOuterDeadzoneDeg = 97,
	GamepadWalkStickInnerDeadzone = 98,
	GamepadWalkStickAngularInnerDeadzoneDeg = 99,
	GamepadWalkStickAngularOuterDeadzoneDeg = 100,
	GamepadWalkStickAxialHorizontalDeadzone = 101,
	GamepadWalkStickAxialVerticalDeadzone = 102,
	GamepadTriggerDeadzone = 103,
	GamepadAnalogWalkThreshold = 104,
	GamepadShootingSensitivityScaleX = 105,
	GamepadShootingSensitivityScaleY = 106,
	GamepadShootSensScaleEaseInTime = 107,
	GamepadShootSensScaleEaseOutTime = 108,
	GamepadShootSensScaleEaseOutDelay = 109,
	GamepadMegamapSizeMultiplier = 110,
	GamepadRotationIncreaseAccelFocusModeMultiplier = 111,
	GamepadRotationIncreaseAccelADSMultiplier = 112,
	GamepadRotationIncreaseAccelScopedMultiplier = 113,
	GamepadSimpleAimSensitivity = 114,
	GamepadSimpleMapCursorSensitivity = 115,
	ObserverRunSpeedModifier = 116,
	ObserverWalkSpeedModifier = 117,
	GamepadAggroBotMoshPitSensitivity = 118,
	GamepadAggroBotThrashSensitivity = 119,
	GamepadBountyHunterPrecisionModeSensitivity = 120,
	GamepadBountyHunterProwlerSensitivity = 121,
	GamepadBountyHunterSeizeSensitivity = 122,
	GamepadBreachAftershockSensitivity = 123,
	GamepadBreachFaultLineSensitivity = 124,
	GamepadBreachFlashpointSensitivity = 125,
	GamepadCableAnnihilationSensitivity = 126,
	GamepadCableGravNetSensitivity = 127,
	GamepadClayPaintShellSensitivity = 128,
	GamepadClayShowstopperSensitivity = 129,
	GamepadCloudburstSensitivity = 130,
	GamepadGrenadierFlashDriveSensitivity = 131,
	GamepadGrenadierFragmentSensitivity = 132,
	GamepadGrenadierZeroPointSensitivity = 133,
	GamepadGuideGuidingLightSensitivity = 134,
	GamepadGuideTrailblazerSensitivity = 135,
	GamepadGumshoePrecisionModeSensitivity = 136,
	GamepadGumshoeSpycamSensitivity = 137,
	GamepadHunterHuntersFurySensitivity = 138,
	GamepadHunterReconBoltSensitivity = 139,
	GamepadHunterShockBoltSensitivity = 140,
	GamepadMageHighTideSensitivity = 141,
	GamepadPandemicPoisonCloudSensitivity = 142,
	GamepadPandemicSnakeBiteSensitivity = 143,
	GamepadPhoenixBlazeSensitivity = 144,
	GamepadSargeAbilityTabletSensitivity = 145,
	GamepadSargePrecisionModeSensitivity = 146,
	GamepadSequoiaUndercutSensitivity = 147,
	GamepadSmonkButterflyKnifeSensitivity = 148,
	GamepadStealthBlindsideSensitivity = 149,
	GamepadWraithDarkCoverSensitivity = 150,
	GamepadWraithFromTheShadowsSensitivity = 151,
	GamepadWraithShroudedStepSensitivity = 152,
	GamepadHapticsIntensityModifier = 153,
	SandboxTestFloatSetting = 154,
	Count = 155,
	EAresFloatSettingName_MAX = 156
};

// Enum ShooterGame.EAresStringSettingName
enum class EAresStringSettingName : uint8 {
	VoiceDeviceCaptureHandle = 0,
	VoiceDeviceRenderHandle = 1,
	CrosshairSettings = 2,
	PushToTalkKey = 3,
	TeamPushToTalkKey = 4,
	CrosshairColor = 5,
	CrosshairColorCustom = 6,
	CrosshairOutlineColor = 7,
	CrosshairADSColor = 8,
	CrosshairADSColorCustom = 9,
	CrosshairADSOutlineColor = 10,
	CrosshairFocusModeColor = 11,
	CrosshairFocusModeColorCustom = 12,
	CrosshairFocusModeOutlineColor = 13,
	CrosshairSniperCenterDotColor = 14,
	CrosshairSniperCenterDotColorCustom = 15,
	CrosshairProfileName = 16,
	SavedCrosshairProfileData = 17,
	LastSeenSeasonalPopup = 18,
	LastSeenAdHocPopup = 19,
	PreferredGamePods = 20,
	TouchWidgetLayouts = 21,
	MutedWords = 22,
	CheatEOGMatchID = 23,
	PlayerPerfPresetType = 24,
	NativePlatformSelectedLanguage = 25,
	PremierPromotionNotice = 26,
	PremierPlayoffQualificationNotice = 27,
	Count = 28,
	EAresStringSettingName_MAX = 29
};

// Enum ShooterGame.EAvoidListError
enum class EAvoidListError : uint8 {
	ErrAvoidListFull = 0,
	ErrOther = 1,
	EAvoidListError_MAX = 2
};

// Enum ShooterGame.EAVSErrorType
enum class EAVSErrorType : uint8 {
	PhoneNumberUnavailable = 0,
	AccountAlreadyVerified = 1,
	VerificationPinNotFound = 2,
	InvalidVerificationTransactionType = 3,
	InvalidPhoneType = 4,
	InvalidPhoneNumber = 5,
	PUUIDNotFound = 6,
	AccountNotVerified = 7,
	ValidationError = 8,
	AuthPayloadDeserializationError = 9,
	DataStoreError = 10,
	RateLimitError = 11,
	OTPRateLimitError = 12,
	LongTermOTPRateLimitError = 13,
	SMSServiceError = 14,
	UnknownServerError = 15,
	ConfirmationPinIncorrect = 16,
	Default = 17,
	Count = 18,
	Invalid = 19,
	EAVSErrorType_MAX = 20
};

// Enum ShooterGame.EAVSConfirmationResponseType
enum class EAVSConfirmationResponseType : uint8 {
	ConfirmationPinIncorrect = 0,
	ConfirmationPinValid = 1,
	DeactivationPinSent = 2,
	ActivationPinSent = 3,
	Count = 4,
	Invalid = 5,
	EAVSConfirmationResponseType_MAX = 6
};

// Enum ShooterGame.EEsportsPickemAutosaveState
enum class EEsportsPickemAutosaveState : uint8 {
	HasPendingChanges = 0,
	Saving = 1,
	Saved = 2,
	Error = 3,
	EEsportsPickemAutosaveState_MAX = 4
};

// Enum ShooterGame.EAresBlockPlayerResponseErrors
enum class EAresBlockPlayerResponseErrors : uint8 {
	NoPuuidProvided = 0,
	MissingPuuidOrName = 1,
	AlreadyBlocked = 2,
	TargetingSelf = 3,
	InternalError = 4,
	EAresBlockPlayerResponseErrors_MAX = 5
};

// Enum ShooterGame.EBracketMatchupID
enum class EBracketMatchupID : uint8 {
	None = 0,
	Matchup1 = 1,
	Matchup2 = 2,
	Matchup3 = 3,
	Matchup4 = 4,
	Matchup5 = 5,
	Matchup6 = 6,
	Matchup7 = 7,
	Matchup8 = 8,
	Matchup9 = 9,
	Matchup10 = 10,
	Matchup11 = 11,
	Matchup12 = 12,
	Matchup13 = 13,
	Matchup14 = 14,
	Matchup15 = 15,
	Matchup16 = 16,
	Matchup17 = 17,
	Matchup18 = 18,
	Matchup19 = 19,
	Matchup20 = 20,
	Matchup21 = 21,
	Matchup22 = 22,
	Matchup23 = 23,
	Matchup24 = 24,
	Matchup25 = 25,
	Matchup26 = 26,
	Matchup27 = 27,
	Matchup28 = 28,
	Matchup29 = 29,
	Matchup30 = 30,
	Matchup31 = 31,
	Matchup32 = 32,
	Matchup33 = 33,
	Matchup34 = 34,
	Matchup35 = 35,
	Matchup36 = 36,
	Matchup37 = 37,
	Matchup38 = 38,
	Matchup39 = 39,
	Matchup40 = 40,
	Matchup41 = 41,
	Matchup42 = 42,
	Matchup43 = 43,
	Matchup44 = 44,
	Matchup45 = 45,
	Matchup46 = 46,
	Matchup47 = 47,
	Matchup48 = 48,
	Matchup49 = 49,
	Matchup50 = 50,
	Matchup51 = 51,
	Matchup52 = 52,
	Matchup53 = 53,
	Matchup54 = 54,
	Matchup55 = 55,
	Matchup56 = 56,
	Matchup57 = 57,
	Matchup58 = 58,
	Matchup59 = 59,
	Matchup60 = 60,
	Matchup61 = 61,
	Matchup62 = 62,
	Matchup63 = 63,
	Matchup64 = 64,
	Matchup65 = 65,
	Matchup66 = 66,
	Matchup67 = 67,
	Matchup68 = 68,
	Matchup69 = 69,
	Matchup70 = 70,
	Matchup71 = 71,
	Matchup72 = 72,
	Matchup73 = 73,
	Matchup74 = 74,
	Matchup75 = 75,
	Matchup76 = 76,
	Matchup77 = 77,
	Matchup78 = 78,
	Matchup79 = 79,
	Matchup80 = 80,
	Matchup81 = 81,
	Matchup82 = 82,
	Matchup83 = 83,
	Matchup84 = 84,
	Matchup85 = 85,
	Matchup86 = 86,
	Matchup87 = 87,
	Matchup88 = 88,
	Matchup89 = 89,
	Matchup90 = 90,
	Matchup91 = 91,
	Matchup92 = 92,
	Matchup93 = 93,
	Matchup94 = 94,
	Matchup95 = 95,
	Matchup96 = 96,
	Matchup97 = 97,
	Matchup98 = 98,
	Matchup99 = 99,
	Matchup100 = 100,
	Count = 101,
	EBracketMatchupID_MAX = 102
};

// Enum ShooterGame.EBracketType
enum class EBracketType : uint8 {
	SingleElimination = 0,
	DoubleElimination = 1,
	Swiss = 2,
	EBracketType_MAX = 3
};

// Enum ShooterGame.EAresGunRequestState
enum class EAresGunRequestState : uint8 {
	Empty = 0,
	Open = 1,
	EAresGunRequestState_MAX = 2
};

// Enum ShooterGame.EStepType
enum class EStepType : uint8 {
	MapBan = 0,
	MapPick = 1,
	SidePick = 2,
	EStepType_MAX = 3
};

// Enum ShooterGame.EVoiceSessionType
enum class EVoiceSessionType : uint8 {
	Invalid = 0,
	Party = 1,
	Team = 2,
	Count = 3,
	EVoiceSessionType_MAX = 4
};

// Enum ShooterGame.EAresCharacterPosture
enum class EAresCharacterPosture : uint8 {
	Standing = 0,
	Crouching = 1,
	UnCrouching = 2,
	Crouched = 3,
	EAresCharacterPosture_MAX = 4
};

// Enum ShooterGame.EPregameCharacterState
enum class EPregameCharacterState : uint8 {
	Free = 0,
	SelectedByOther = 1,
	SelectedByMe = 2,
	LockedByMe = 3,
	LockedByOther = 4,
	EPregameCharacterState_MAX = 5
};

// Enum ShooterGame.EAresClientGameInstanceInitStatus
enum class EAresClientGameInstanceInitStatus : uint8 {
	NotStarted = 0,
	Initializing = 1,
	AwaitingFirstTimeUserInfo = 2,
	WaitingForLogin = 3,
	AttemptingLogin = 4,
	PatchPreview = 5,
	WaitingForPatch = 6,
	Initialized = 7,
	InitFailure = 8,
	Count = 9,
	EAresClientGameInstanceInitStatus_MAX = 10
};

// Enum ShooterGame.EActivationPreference
enum class EActivationPreference : uint8 {
	ACTIVE = 0,
	INACTIVE = 1,
	NONE = 2,
	EActivationPreference_MAX = 3
};

// Enum ShooterGame.EAresCommonInputCondition
enum class EAresCommonInputCondition : uint8 {
	Never = 0,
	Hover = 1,
	Always = 2,
	All = 3,
	EAresCommonInputCondition_MAX = 4
};

// Enum ShooterGame.EUIConfirmationModalResponse
enum class EUIConfirmationModalResponse : uint8 {
	None = 0,
	Confirm = 1,
	Confirm2 = 2,
	Cancel = 3,
	Dismiss = 4,
	EUIConfirmationModalResponse_MAX = 5
};

// Enum ShooterGame.ECreateRosterInviteErrorType
enum class ECreateRosterInviteErrorType : uint8 {
	RosterLocked = 0,
	PlayerMaxRosterLimitReached = 1,
	RosterNonProvisional = 2,
	PlayerIneligibleRanked = 3,
	PlayerIneligibleAVS = 4,
	PlayerIneligibleRestrictionIneligible = 5,
	PlayerIneligibleRestrictionDisqualified = 6,
	PlayerIneligibleContenderEligibility = 7,
	InviteeChangesRosterDivisionTier = 8,
	InviteeNotEligibleAVS = 9,
	InviteeNotEligibleRanked = 10,
	InviteeNotEligibleRestrictionIneligible = 11,
	InviteeNotEligibleRestrictionDisqualified = 12,
	Default = 13,
	Count = 14,
	Invalid = 15,
	ECreateRosterInviteErrorType_MAX = 16
};

// Enum ShooterGame.ECreateRosterErrorType
enum class ECreateRosterErrorType : uint8 {
	NameTaken = 0,
	NameLength = 1,
	TagLength = 2,
	InappropriateName = 3,
	RestrictedName = 4,
	Default = 5,
	Count = 6,
	Invalid = 7,
	ECreateRosterErrorType_MAX = 8
};

// Enum ShooterGame.EPremierCrestType
enum class EPremierCrestType : uint8 {
	INVALID = 0,
	NONE = 1,
	COMPETITOR = 2,
	QUALIFIED = 3,
	PLAYOFFS = 4,
	SECOND = 5,
	FIRST = 6,
	FLAWLESS = 7,
	Count = 8,
	EPremierCrestType_MAX = 9
};

// Enum ShooterGame.EVoteState
enum class EVoteState : uint8 {
	Inactive = 0,
	ActivateOnceReplicated = 1,
	Active = 2,
	Concluded = 3,
	Expired = 4,
	EVoteState_MAX = 5
};

// Enum ShooterGame.ECustomGameTeam
enum class ECustomGameTeam : uint8 {
	Defenders = 0,
	Attackers = 1,
	Spectate = 2,
	DefendersCoaches = 3,
	AttackersCoaches = 4,
	Count = 5,
	Invalid = 6,
	ECustomGameTeam_MAX = 7
};

// Enum ShooterGame.EAresEquippableInputAction
enum class EAresEquippableInputAction : uint8 {
	EquippableInputAction_WentDown = 0,
	EquippableInputAction_IsDown = 1,
	EquippableInputAction_WentUp = 2,
	EquippableInputAction_IsUp = 3,
	EquippableInputAction_Count = 4,
	EquippableInputAction_MAX = 5
};

// Enum ShooterGame.EDestructionEffectPlayType
enum class EDestructionEffectPlayType : uint8 {
	PlayAtLocation = 0,
	PlayOnActor = 1,
	EDestructionEffectPlayType_MAX = 2
};

// Enum ShooterGame.EDestructionType
enum class EDestructionType : uint8 {
	AreaDestruct = 0,
	BoxHazard = 1,
	EDestructionType_MAX = 2
};

// Enum ShooterGame.EEarnedStatus
enum class EEarnedStatus : uint8 {
	PremiumRequiredToEarn = 0,
	Unearned = 1,
	Earned = 2,
	EEarnedStatus_MAX = 3
};

// Enum ShooterGame.EEnrollRosterErrorType
enum class EEnrollRosterErrorType : uint8 {
	MinumumRequiredMembers = 0,
	Default = 1,
	Count = 2,
	Invalid = 3,
	EEnrollRosterErrorType_MAX = 4
};

// Enum ShooterGame.EAresEquippableRestrictionType
enum class EAresEquippableRestrictionType : uint8 {
	None = 0,
	CantSwitchEquippables = 1,
	PrimaryWeaponsDisabled = 2,
	HeavyWeaponsDisabled = 3,
	WeaponsDisabled = 4,
	AbilityDisabled = 5,
	Suppressed = 6,
	Count = 7,
	EAresEquippableRestrictionType_MAX = 8
};

// Enum ShooterGame.EAresEquippableState
enum class EAresEquippableState : uint8 {
	Unknown = 0,
	Idle = 1,
	Equipping = 2,
	Inspecting = 3,
	Attacking = 4,
	Firing = 5,
	Reloading = 6,
	ADS_Idle = 7,
	ADS_Firing = 8,
	Count = 9,
	EAresEquippableState_MAX = 10
};

// Enum ShooterGame.EEsportsGameOutcome
enum class EEsportsGameOutcome : uint8 {
	Win = 0,
	Loss = 1,
	Undetermined = 2,
	Invalid = 3,
	EEsportsGameOutcome_MAX = 4
};

// Enum ShooterGame.EVCTRegion
enum class EVCTRegion : uint8 {
	International = 0,
	Americas = 1,
	EMEA = 2,
	Pacific = 3,
	CN = 4,
	None = 5,
	EVCTRegion_MAX = 6
};

// Enum ShooterGame.EGameFeatureFloatConfigName
enum class EGameFeatureFloatConfigName : uint8 {
	InitialConnectTimeout = 0,
	ConnectionTimeout = 1,
	SoftDisconnectTimeout = 2,
	MaxAllowableRewindTime = 3,
	RemoteMoveDelayTimeMillisecondsOptimal = 4,
	RemoteMoveDelayTimeMillisecondsAverage = 5,
	RemoteMoveDelayTimeMillisecondsPoor = 6,
	MaxUnacknowledgedDuration = 7,
	WarmupMaximumDuration = 8,
	MaxScoreLimitOverride = 9,
	MaxOvertimeRounds = 10,
	MinimapVisibilityTickInterval = 11,
	ObserverMovementMinQueueSize = 12,
	JohnsLatteRate = 13,
	PainAuxRaisinsRate = 14,
	UsablesPredictionTimeout = 15,
	ForceModulesPredictionTimeout = 16,
	LogsPerSecondThreshold = 17,
	LogsPerSecondCriticalThreshold = 18,
	LogsPerSecondMeasurementWindow = 19,
	AimToolingTrackerHighRecoilThreshold = 20,
	AimToolingTelemetryEventCadenceSeconds = 21,
	AimToolingTelemetryEventPercentChanceToPost = 22,
	SilentFramesBeforeBurstLoss = 23,
	GamepadMaxFramerateAlways = 24,
	EndToEndLatencyJitter = 25,
	ABFootstepTestControlPercent = 26,
	GameDataWorldSnapshotIntervalSec = 27,
	GameDataWorldConfigurationIntervalSec = 28,
	GameDataTimeseriesIntervalSec = 29,
	ShortTermNPEUpdatesChance = 30,
	MaxSnapshotCountForShortGames = 31,
	DesignerFloatA = 32,
	DesignerFloatB = 33,
	DesignerFloatC = 34,
	DesignerFloatD = 35,
	DesignerFloatE = 36,
	AwakeReplicationFrequency = 37,
	AimToolingDelayedZoomAlphaValue = 38,
	DropInTimeoutSeconds = 39,
	ReplayEventRecordingVerbosity = 40,
	Count = 41,
	Invalid = 254,
	EGameFeatureConfigName_MAX = 255,
	EGameFeatureFloatConfigName_MAX = 256
};

// Enum ShooterGame.EGameFeatureToggleName
enum class EGameFeatureToggleName : uint8 {
	FootIK = 0,
	FootIKUseDownhillTrace = 1,
	FootIKEyeHeightAdjustment = 2,
	FootIKDebug = 3,
	Harvester = 4,
	WeaponThroughWallClipping = 5,
	WallClipping3PDebug = 6,
	AbilityMinimapIndicators = 7,
	StrictRealTimeServerMovementChecks = 8,
	DesignPlaytest = 9,
	ExperimentalTagging = 10,
	SimulateDegradedNetworkConditions = 11,
	ToggleGore = 12,
	CalloutRegionsDebug = 13,
	DesignerToggleA = 14,
	DesignerToggleB = 15,
	DesignerToggleC = 16,
	DowntickPreround = 17,
	LookDirectionKeys = 18,
	DevInstabilityHUD = 19,
	GameplayQualityLogging = 20,
	LogMarkers = 21,
	EnableSlashCommands = 22,
	NiagaraTest = 23,
	ShowDrawVoteInCustom = 24,
	AllowShoppingWhileDead = 25,
	DeathmatchRepeatingUAV = 26,
	DeathmatchEncourageFarSpawning = 27,
	DatadogEventing = 28,
	GameDataExport = 29,
	ReuseCharacterHUDWidgets = 30,
	RegisterEquippableVisibility = 31,
	FixedColorTeams = 32,
	RoundStateLog = 33,
	DisableEquippableAnimationInFXCs = 34,
	EnableHRTFSetting = 35,
	Coaches = 36,
	TaggingAccuracyOverride = 37,
	ForceUpdateProblematicMinimapComponents = 38,
	GameplayNotificationsV2 = 39,
	TencentSecuritySDK = 40,
	PlayerThroughWallClipping = 41,
	PlayerThroughWallBackClipping = 42,
	PlayerMultipleClipping = 43,
	PlayerCorpseClipping = 44,
	GameDataEventPipelineRefactor = 45,
	RoundRestore = 46,
	MatchRecovery = 47,
	Hovercards = 48,
	ModesToggleA = 49,
	ModesToggleB = 50,
	ModesToggleC = 51,
	MobileLimitedSkinLoading = 52,
	EnableCharacterScaling = 53,
	TopHUDV2 = 54,
	MultipleProjectileTuning = 55,
	ReplaySystem = 56,
	ReflexLatencyAnalyzer = 57,
	SpawnAlternateRotationsPathfindToNearestEnemy = 58,
	FoWDebugCheats = 59,
	AgentMastery = 60,
	DeathDistanceScoring = 61,
	ScoreLowVisibilityPointsMoreOften = 62,
	SpawnPointLookAheadDynamicAdjustment = 63,
	UseMegamapTextureOverrides = 64,
	RationalMoveQueueTarget = 65,
	CleanPlayerStateOnDisassociate = 66,
	UseServerAuthoritativeDropOut = 67,
	FireButtonCustomization = 68,
	DevOnlyShop = 69,
	MoveDistributionTargeting = 70,
	SendPerRoundNetworkTelemetryEvents = 71,
	LiveDiagnostics = 72,
	ExpandedGestures = 73,
	EnableCombatReportEventDeferral = 74,
	AudioVisualization = 75,
	AudioVisualizationIconFootstep = 76,
	AudioVisualizationLOS = 77,
	AudioVisualizationMaterialFootstep = 78,
	MultichannelAudioVisualization = 79,
	RevertMobileFiringError = 80,
	BurstFire = 81,
	MobileAllySendRateLimiting = 82,
	PremiumContentToggle0 = 83,
	PremiumContentToggle1 = 84,
	PremiumContentToggle2 = 85,
	PremiumContentToggle3 = 86,
	PremiumContentToggle4 = 87,
	PremiumContentToggle5 = 88,
	PremiumContentToggle6 = 89,
	PremiumContentToggle7 = 90,
	PremiumContentToggle8 = 91,
	PremiumContentToggle9 = 92,
	UseMeshMaterialManager = 93,
	OmenWallToggle = 94,
	AccoladesEnabled = 95,
	PremierGameEvents = 96,
	EquippableCacheRecycling = 97,
	ViperPitIgnoreCrawlspaceToggle = 98,
	EsportsGameEvents = 99,
	ScaledHeadshotFX = 100,
	MinimapFloors = 101,
	ShortTermNPEUpdates = 102,
	FootstepDecayWhileWalking = 103,
	SystemicAbilityUpdates = 104,
	CellularPatchMultipleNodeOverlapCheck = 105,
	DisableFogOfWar = 106,
	EsportsHub = 107,
	UsePlayerloadoutsInWeaponSpawners = 108,
	AllowPatchRunAlongGround = 109,
	SetOrbTickRateLow = 110,
	ReplayTimeScrubbing = 111,
	EnableTapHoldActionBindings = 112,
	BotMovementDowntickingEnabled = 113,
	BotInterleaveMovementDowntickingEnabled = 114,
	RemoveDeletedFXCsFromPool = 115,
	DisassociateAFKPlayers = 116,
	ReplayDataGameServerCompression = 117,
	ShootingRangeBotPoolingRefactor = 118,
	AccoladesTelemetryEnabled = 119,
	DDoSDetection = 120,
	AIToggleA = 121,
	AIToggleB = 122,
	TimeShiftByMoveBundles = 123,
	LockedMapControlType = 124,
	SwapViewTargetModeToWatchSpawnedOnDeath = 125,
	DisableCharacterTickOnRangeBots = 126,
	ContextAwareModuleConsoleEnabled = 127,
	UnifyBaseAndRegionalDamageCalculation = 128,
	AllyMapEdgePortraits = 129,
	UseAIJobCoordinationBehavior = 130,
	VTSPluginEnabled = 131,
	VTSPluginObserverEnabled = 132,
	AIUseDistanceRoomPathfindingCosting = 133,
	AnimationOptimizationBTM = 134,
	AnimationOptimizationBTMAllies = 135,
	UseGrenadierInBTM = 136,
	UseNewInformationScreen = 137,
	AimToolingCloseRangeTuningEnabled = 138,
	DisableNonGamepadKeyBinds = 139,
	EnableGamepadVotingUI = 140,
	MinimapVisionConesWaitForTasks = 141,
	MuzzleFlashCulling = 142,
	RadialDamageV2 = 143,
	EnableCalculateWallPenetrationEnergyWhenDamaged = 144,
	DisableLaunchVelocityOnProjectile = 145,
	UseMeshMaterialManagerAlt = 146,
	UseEnemyAudioLocalViewTarget = 147,
	MouseKeyboardInputsTriggerPopUpWarning = 148,
	HideAbilityInCombatReport = 149,
	BotSpawningModifier = 150,
	EnableVoteRatioUpdate = 151,
	AlwaysUseSharedAudioEmitter = 152,
	ContextAwareModulePCEnabled = 153,
	LiveDesignToggle = 154,
	ApplyGamepadMapCursorInputTooling = 155,
	SpawnPointSelectionUsesEngageDistance = 156,
	PawnOverlapTrigger = 157,
	UnlimitedFuelCheatUpdate = 158,
	MTAbilityFixes = 159,
	MinimapUpdateCycles = 160,
	EnableKDCallouts = 161,
	EnableDeathmatchMedals = 162,
	UpdateNextShotTimeOnFiringRateChange = 163,
	EnableHideMuzzleFlashDuringClipping = 164,
	DisablePingInWorldVisibilityUpdate = 165,
	DisablePingVisibilityBlocking = 166,
	DisablePingTargetViewMegamapPing = 167,
	TeamColorVFXObserverFix = 168,
	EnableFoWQueryCacheImprovements = 169,
	FlankWatchExploration = 170,
	MeleeClipping = 171,
	AlarmbotImprovedTargetAcquisition = 172,
	CashewUltRunThroughFix = 173,
	SpectateDeadPlayersDuringReplayPlayback = 174,
	EnableStopAudioOnProjectileEndPlay = 175,
	FoWSkipCacheOptimization = 176,
	DisarmedEquippablePermissionRespectRestrictions = 177,
	CalculateFoWRelevanceOptimization = 178,
	FoWSupportMaxRelevantDistance = 179,
	FoWSupportMaxRelevantDistanceLongCache = 180,
	FoWMaxRelevantDistanceBeforeOverrides = 181,
	ClearSpotForCharacterOffNavFallback = 182,
	ProjectileThrowRemoveDelay = 183,
	CancelUsableOnEndPlay = 184,
	SkipHiddenUntickedRemoteTransformUpdates = 185,
	CloveStopOverhealOnDamaged = 186,
	AllowTemporaryCharacterOverlaps = 187,
	ReynaOverhealCleanupOnEquippableSetOwner = 188,
	EnableOverhealRefactor = 189,
	ZeroRadiusProjectiles = 190,
	YoruCloneSendsDeathEvent = 191,
	AllowTargetViewLandmarkMaterialSwap = 192,
	AIPerceptionIncreasedTimeSlicePerTick = 193,
	AIPerceptionIncreasedTracesPerTick = 194,
	AlarmbotLOSImprovements = 195,
	EnableSecondCameraTick = 196,
	UseCapsuleForPruneComplexRewind = 197,
	ViperUltPatchTechV2 = 198,
	TargetViewModeIgnoreFirstPerson = 199,
	FoWEnableEnhancedMetrics = 200,
	AudioBypassMaxDurationCheck = 201,
	CameraShakeConcussReapply = 202,
	UseAwakeReplicationFrequencyGFC = 203,
	ClipAfterBoneTransformsUpdated = 204,
	ControllerDrivenSpectateTargets = 205,
	AlwaysUseClipPlaneForHiddenCharacters = 206,
	EnableRGIMetrics = 207,
	ForceSendCorrectionIndexAck = 208,
	AudioEnableDoorOcclusion = 209,
	UsableComponentControlledHighlighting = 210,
	UseNewBestUsableTargetingLogic = 211,
	RemoveAllDebuffsOnCleanse = 212,
	EnableIndicatorPossessableUpdate = 213,
	EnablePlacementFixes = 214,
	AudioEnableStopSoundCleanupChecks = 215,
	PhysXSphereTriangleTraceParity = 216,
	AudioEnableStopSoundEndPlay = 217,
	ShouldMarkMatchesAsRecorded = 218,
	UseRepNotifyAbilityCooldowns = 219,
	ShouldMarkMatchesAsRecordedConsole = 220,
	DynamicContentEnabled = 221,
	UseNewBuffDebuffTagHUD = 222,
	EnableSpikePlacementRestrictions = 223,
	EnableTopHUDHealthbarHealUIChange = 224,
	AudioEnableSoundBlockerChecks = 225,
	AltModeTelemetryEnabled = 226,
	AssistBannersEnabled = 227,
	SharedSerializationReconnectReset = 228,
	PooledFXCDestroyDeactivatesComponents = 229,
	Count = 230,
	Invalid = 254,
	EGameFeatureToggleName_MAX = 255
};

// Enum ShooterGame.EGameRuleBoolName
enum class EGameRuleBoolName : uint8 {
	IsOvertimeWinByTwo = 0,
	IsOvertimeWinByTwoCapped = 1,
	AllowOvertimePriorityVote = 2,
	AllowOvertimeDrawVote = 3,
	AllowLenientSurrender = 4,
	AllowFlexibleTimeoutVote = 5,
	AllowDropOut = 6,
	SkipPregame = 7,
	AssignRandomAgents = 8,
	AllowGameModifiers = 9,
	TournamentMode = 10,
	MajorityVoteAgents = 11,
	PlayOutAllRounds = 12,
	SkipMatchHistory = 13,
	FillWithBots = 14,
	AllowDropIn = 15,
	UseMobileServerTickRate = 16,
	DestroyAbilitiesOnDeath = 17,
	PreventAbilityRecharge = 18,
	ReplayRecordMatch = 19,
	UseMapPicksAndBans = 20,
	AllowMatchTimeouts = 21,
	AllowAutomaticRemakeVote = 22,
	AimToolingModule = 23,
	AimToolingBending = 24,
	AimToolingPullToCenter = 25,
	AimToolingDeceleration = 26,
	AimToolingFrameOfReference = 27,
	AimToolingStrafeAssist = 28,
	AimToolingTargetFriction = 29,
	AimToolingGuardrails = 30,
	MovementToolingModule = 31,
	MovementToolingShotRooting = 32,
	MovementToolingFastStrafing = 33,
	MovementToolingFastRelease = 34,
	PipAbilityCasting = 35,
	CombatReportOnlyShowLastLife = 36,
	UsePrototypePurchasables = 37,
	MobileGunStability = 38,
	MobileDesignPrototype = 39,
	FootstepABTest = 40,
	UseAllAbilityCooldowns = 41,
	DownedCharactersCanGiveUp = 42,
	SpawnTurtleProtection = 43,
	PrototypeStability = 44,
	AccoladesEnabled = 45,
	PremierTournamentMode = 46,
	UseInDevWeapons = 47,
	DisableShopSelling = 48,
	ContextAwareModuleEnabled = 49,
	SkipMatchDetails = 50,
	UseLargePlayerCountServerTickRate = 51,
	AssignPreferredAgents = 52,
	AllowQueueInGame = 53,
	TempChargesAsReclaimed = 54,
	SlidesNoFallDamage = 55,
	SkipUltimateAbilityReadyVO = 56,
	AllowUnownedAgents = 57,
	FillWithClientBots = 58,
	Count = 59,
	Invalid = 254,
	EGameRuleBoolName_MAX = 255
};

// Enum ShooterGame.ECustomGameRuleDisabledReason
enum class ECustomGameRuleDisabledReason : uint8 {
	None = 0,
	TooManyObservers = 1,
	CoachSlotsOccupied = 2,
	ECustomGameRuleDisabledReason_MAX = 3
};

// Enum ShooterGame.EAresNotificationResponseType
enum class EAresNotificationResponseType : uint8 {
	Dismiss = 0,
	ActionA = 1,
	ActionB = 2,
	NoResponse = 3,
	EAresNotificationResponseType_MAX = 4
};

// Enum ShooterGame.ECrosshairsGridMode
enum class ECrosshairsGridMode : uint8 {
	Create = 0,
	Modify = 1,
	None = 2,
	ECrosshairsGridMode_MAX = 3
};

// Enum ShooterGame.EAresDamageImmunityCategory
enum class EAresDamageImmunityCategory : uint8 {
	None = 0,
	Weapon = 1,
	Ability = 2,
	World = 3,
	DamageCategory_Invalid = 254,
	EAresDamageCategory_MAX = 255,
	EAresDamageImmunityCategory_MAX = 256
};

// Enum ShooterGame.ERosterPartyMemberEligibility
enum class ERosterPartyMemberEligibility : uint8 {
	Eligible = 0,
	IneligibleAccountUnverified = 1,
	IneligibleNotOnRoster = 2,
	IneligibleHitMatchLimit = 3,
	Invalid = 4,
	ERosterPartyMemberEligibility_MAX = 5
};

// Enum ShooterGame.EChatMode
enum class EChatMode : uint8 {
	None = 0,
	Team = 1,
	All = 2,
	Ping = 3,
	Count = 4,
	EChatMode_MAX = 5
};

// Enum ShooterGame.EInventoryTransaction
enum class EInventoryTransaction : uint8 {
	Purchase = 0,
	PickUp = 1,
	FulfillRequest = 2,
	RefundRequest = 3,
	Drop = 4,
	Sell = 5,
	Transfer = 6,
	Trash = 7,
	Store = 8,
	Retrieve = 9,
	Default = 10,
	Other = 11,
	OtherGrant = 12,
	OtherRemove = 13,
	GrantDefaultRoundStart = 14,
	Count = 15,
	EInventoryTransaction_MAX = 16
};

// Enum ShooterGame.EGiftingEligibleStatus
enum class EGiftingEligibleStatus : uint8 {
	GIFTING_ELIGIBLE_STATUS_PERMANENTLY_INELIGIBLE = 0,
	GIFTING_ELIGIBLE_STATUS_CONDITIONALLY_INELIGIBLE = 1,
	GIFTING_ELIGIBLE_STATUS_ELIGIBLE = 2,
	COUNT = 3,
	EGiftingEligibleStatus_MAX = 4
};

// Enum ShooterGame.EAresItemSlot
enum class EAresItemSlot : uint8 {
	Primary = 0,
	Secondary = 1,
	Melee = 2,
	GrenadeAbility = 3,
	Ability1 = 4,
	Ability2 = 5,
	Passive = 6,
	Level = 7,
	Invisible = 8,
	Ultimate = 9,
	Unarmed = 10,
	Armor = 11,
	Backpack = 12,
	Totem = 13,
	PrimaryStorage = 14,
	SecondaryStorage = 15,
	Count = 16,
	Any = 253,
	Invalid = 254,
	EAresItemSlot_MAX = 255
};

// Enum ShooterGame.EJuiceBoxAnimation
enum class EJuiceBoxAnimation : uint8 {
	NONE = 0,
	CLOSE = 1,
	CLOSED_IDLE = 2,
	OPEN_START = 3,
	OPEN = 4,
	OPENED_IDLE = 5,
	COUNT = 6,
	EJuiceBoxAnimation_MAX = 7
};

// Enum ShooterGame.EJuiceTrayMessage
enum class EJuiceTrayMessage : uint8 {
	NONE = 0,
	ENERGY_AUTOMATIC = 1,
	MAX_KICKS_OTHERS = 2,
	METER_ALREADY_FULL = 3,
	EXTRANEOUS_ENERGY_IN_METER = 4,
	COUNT = 5,
	EJuiceTrayMessage_MAX = 6
};

// Enum ShooterGame.EAresMovementType
enum class EAresMovementType : uint8 {
	Walking = 0,
	Running = 1,
	Jumping = 2,
	Crouching = 3,
	OnAscender = 4,
	Flying = 5,
	Count = 6,
	Invalid = 254,
	EAresMovementType_MAX = 255
};

// Enum ShooterGame.EPremierTournamentPlacement
enum class EPremierTournamentPlacement : uint8 {
	FIRST = 99,
	SECOND = 98,
	THIRD = 97,
	FOURTH = 96,
	FIFTH = 95,
	SIXTH = 94,
	SEVENTH = 93,
	EIGHTH = 92,
	INPROGRESS = 1,
	NOPLACEMENT = 0,
	Count = 1,
	EPremierTournamentPlacement_MAX = 100
};

// Enum ShooterGame.EAresTempType
enum class EAresTempType : uint8 {
	None = 0,
	Temp_B = 1,
	Temp_X = 2,
	Temp_Y = 4,
	Temp_Z = 8,
	All = 15,
	EAresTempType_MAX = 16
};

// Enum ShooterGame.EProvisioningFlowID
enum class EProvisioningFlowID : uint8 {
	Invalid = 0,
	ShootingRange = 1,
	SkillTest = 2,
	CustomGame = 3,
	Matchmaking = 4,
	NewPlayerExperience = 5,
	ReplayNewPlayerExperience = 6,
	BotTrainingMatch = 7,
	Tournament = 8,
	Count = 9,
	EProvisioningFlowID_MAX = 10
};

// Enum ShooterGame.EMatchCompletionState
enum class EMatchCompletionState : uint8 {
	InProgress = 0,
	Completed = 1,
	All_Disconnected = 2,
	Team_Disconnected = 3,
	Hacking_Terminated = 4,
	Surrendered = 5,
	VoteDraw = 6,
	ForceDraw = 7,
	Remake = 8,
	Unknown = 9,
	Count = 10,
	EMatchCompletionState_MAX = 11
};

// Enum ShooterGame.EMatchupTeamState
enum class EMatchupTeamState : uint8 {
	Unassigned = 0,
	Assigned = 1,
	Winner = 2,
	Loser = 3,
	EMatchupTeamState_MAX = 4
};

// Enum ShooterGame.EMatchupTeamStatus
enum class EMatchupTeamStatus : uint8 {
	Unassigned = 0,
	Assigned = 1,
	Winner = 2,
	Loser = 3,
	EMatchupTeamStatus_MAX = 4
};

// Enum ShooterGame.EChatRoomType
enum class EChatRoomType : uint8 {
	Party = 0,
	Pregame = 1,
	All = 2,
	Team = 3,
	InGameSystem = 4,
	System = 5,
	Whisper = 6,
	Count = 7,
	EChatRoomType_MAX = 8
};

// Enum ShooterGame.EAresAlliance
enum class EAresAlliance : uint8 {
	Alliance_Ally = 0,
	Alliance_Enemy = 1,
	Alliance_Neutral = 2,
	Alliance_Any = 3,
	Alliance_Count = 4,
	Alliance_MAX = 5
};

// Enum ShooterGame.EMessagePartType
enum class EMessagePartType : uint8 {
	Text = 0,
	Notification = 1,
	Emoji = 2,
	AntiAddiction = 3,
	UntrustedText = 4,
	EMessagePartType_MAX = 5
};

// Enum ShooterGame.EMessageContentType
enum class EMessageContentType : uint8 {
	Text = 0,
	MatchDetails = 1,
	EMessageContentType_MAX = 2
};

// Enum ShooterGame.ETextChatRoomType
enum class ETextChatRoomType : uint8 {
	GroupChat = 0,
	FriendChat = 1,
	DirectMessage = 2,
	Invalid = 3,
	System = 4,
	ETextChatRoomType_MAX = 5
};

// Enum ShooterGame.EMessageSendErrorType
enum class EMessageSendErrorType : uint8 {
	PlayerNotFound = 0,
	RoomUnavailable = 1,
	Unknown = 2,
	Invalid = 3,
	Count = 4,
	EMessageSendErrorType_MAX = 5
};

// Enum ShooterGame.EMissionStatus
enum class EMissionStatus : uint8 {
	Inactive = 0,
	Active = 1,
	Completed = 2,
	Failed = 3,
	Count = 4,
	Invalid = 254,
	EMissionStatus_MAX = 255
};

// Enum ShooterGame.EMmrErrorEnum
enum class EMmrErrorEnum : uint8 {
	ErrRateExceeded = 0,
	ErrInvalid = 1,
	EMmrErrorEnum_MAX = 2
};

// Enum ShooterGame.EObjectiveEventType
enum class EObjectiveEventType : uint8 {
	Objective = 0,
	Mission = 1,
	Module = 2,
	EObjectiveEventType_MAX = 3
};

// Enum ShooterGame.EObjectiveStatus
enum class EObjectiveStatus : uint8 {
	Hidden = 0,
	Active = 1,
	Completed = 2,
	Failed = 3,
	Count = 4,
	Invalid = 254,
	EObjectiveStatus_MAX = 255
};

// Enum ShooterGame.EObjectiveType
enum class EObjectiveType : uint8 {
	Required = 0,
	Optional = 1,
	Count = 2,
	Invalid = 254,
	EObjectiveType_MAX = 255
};

// Enum ShooterGame.EOnboardingStatus
enum class EOnboardingStatus : uint8 {
	OnboardingUnknown = 0,
	NPEIncomplete = 1,
	BTMRequired = 2,
	BTMOptional = 3,
	BTMRetriable = 4,
	OnboardingComplete = 5,
	BTMUnavailable = 6,
	BTMEnhanced = 7,
	BTMEnhancedRetriable = 8,
	COUNT = 9,
	INVALID = 10,
	EOnboardingStatus_MAX = 11
};

// Enum ShooterGame.EPurchaseState
enum class EPurchaseState : uint8 {
	Initializing = 0,
	SubmittingOrder = 1,
	ProcessingOrder = 2,
	UpdatingLocalInventory = 3,
	Complete = 4,
	Failed = 5,
	Cancelled = 6,
	Timeout = 7,
	Count = 8,
	EPurchaseState_MAX = 9
};

// Enum ShooterGame.EStealthState
enum class EStealthState : uint8 {
	Inactive = 0,
	Concealed = 1,
	Revealed = 2,
	Count = 3,
	EStealthState_MAX = 4
};

// Enum ShooterGame.EAresPartyAccessibility
enum class EAresPartyAccessibility : uint8 {
	INVALID = 0,
	OPEN = 1,
	CLOSED = 2,
	EAresPartyAccessibility_MAX = 3
};

// Enum ShooterGame.EAresSocialPartyCompatibility
enum class EAresSocialPartyCompatibility : uint8 {
	Compatible = 0,
	CrossplayUnsupported = 1,
	CrossplayDisallowed = 2,
	VersionMismatch = 3,
	MultiplayerDisallowed = 4,
	Error = 5,
	EAresSocialPartyCompatibility_MAX = 6
};

// Enum ShooterGame.EAresSocialStatusTemplate
enum class EAresSocialStatusTemplate : uint8 {
	Available = 0,
	MapName = 1,
	InParty = 2,
	InPartyPremier = 3,
	Matchmaking = 4,
	AgentSelect = 5,
	MatchScore = 6,
	InTournament = 7,
	VersionMismatch = 8,
	Generic = 9,
	Blocked = 10,
	InReplay = 11,
	EAresSocialStatusTemplate_MAX = 12
};

// Enum ShooterGame.EAresSocialPresenceType
enum class EAresSocialPresenceType : uint8 {
	Online = 0,
	Busy = 1,
	Away = 2,
	Offline = 3,
	Error = 4,
	EAresSocialPresenceType_MAX = 5
};

// Enum ShooterGame.EPartyViewState
enum class EPartyViewState : uint8 {
	Default = 0,
	CustomGame = 1,
	Tournament = 2,
	Invalid = 3,
	EPartyViewState_MAX = 4
};

// Enum ShooterGame.ESoftResetReason
enum class ESoftResetReason : uint8 {
	EnvironmentMismatch = 2,
	UserLoginStatusChanged = 3,
	SessionHeartbeatFailure = 4,
	NetworkConnectionRestored = 5,
	HotfixAvailable = 6,
	PlatformFault = 7,
	GameLanguageChanged = 8,
	DebugCommandTriggered = 9,
	ErrorOnInit = 10,
	CrossplayPermissionsChanged = 11,
	None = 12,
	ESoftResetReason_MAX = 13
};

// Enum ShooterGame.EPickemBlockSlug
enum class EPickemBlockSlug : uint8 {
	Groups = 0,
	Playoffs = 1,
	Swiss = 2,
	Invalid = 3,
	EPickemBlockSlug_MAX = 4
};

// Enum ShooterGame.EAresPickemStage
enum class EAresPickemStage : uint8 {
	Upcoming = 0,
	Open = 1,
	Closed = 2,
	EAresPickemStage_MAX = 3
};

// Enum ShooterGame.EEsportsPickemMatchupTeamDisplayMode
enum class EEsportsPickemMatchupTeamDisplayMode : uint8 {
	DisplayScoring = 0,
	PickNonInteractive = 1,
	PickInteractive = 2,
	EEsportsPickemMatchupTeamDisplayMode_MAX = 3
};

// Enum ShooterGame.EPickemBracketResult
enum class EPickemBracketResult : uint8 {
	Unknown = 0,
	Correct = 1,
	Incorrect = 2,
	Count = 3,
	Invalid = 4,
	EPickemBracketResult_MAX = 5
};

// Enum ShooterGame.EPlatformFaultReason
enum class EPlatformFaultReason : uint8 {
	None = 0,
	RNetUnhealthy = 1,
	RNetDisconnected = 2,
	WrongSessionClientID = 3,
	SessionHeartbeatFail = 4,
	SessionRefreshFail = 5,
	VanguardFail = 6,
	VanguardNeedsReboot = 7,
	SessionPlatformDowntime = 8,
	AntiAddictionShutdown = 9,
	CNAntiAddictionShutdown = 10,
	NativePlatformFailure = 11,
	VanguardHardwareBan = 12,
	Count = 13,
	EPlatformFaultReason_MAX = 14
};

// Enum ShooterGame.EPremierPrestigePlating
enum class EPremierPrestigePlating : uint8 {
	NONE = 0,
	BASIC = 1,
	QUALIFIED = 2,
	Count = 3,
	EPremierPrestigePlating_MAX = 4
};

// Enum ShooterGame.EPlayerAliasError
enum class EPlayerAliasError : uint8 {
	NoError = 0,
	NameChangeForbidden = 1,
	NameNotAvailable = 2,
	RateLimited = 3,
	UnknownError = 4,
	EPlayerAliasError_MAX = 5
};

// Enum ShooterGame.EAresRegionalDamage
enum class EAresRegionalDamage : uint8 {
	RegionalDamage_Normal = 0,
	RegionalDamage_Headshot = 1,
	RegionalDamage_Legshot = 2,
	RegionalDamage_RegionCount = 3,
	RegionalDamage_Invalid_Radial = 4,
	RegionalDamage_Invalid = 5,
	RegionalDamage_CountPlusOne = 6,
	EAresRegionalDamage_MAX = 255
};

// Enum ShooterGame.EAresPlayerViewTargetMode
enum class EAresPlayerViewTargetMode : uint8 {
	None = 0,
	WatchPossessed = 1,
	SpectateAllies = 2,
	SpectateEveryone = 4,
	SpectateFreeCam = 8,
	WatchGameStateFocusObject = 16,
	NoValidViewTarget = 32,
	SpectateProjectile = 64,
	WatchSpawned = 128,
	Count = 8,
	All = 255,
	EAresPlayerViewTargetMode_MAX = 256
};

// Enum ShooterGame.EReplayPreDownloadCheckCode
enum class EReplayPreDownloadCheckCode : uint8 {
	Passed = 0,
	FileSizeNull = 1,
	NotEnoughDiskSpace = 2,
	UnexpectedFailed = 3,
	EReplayPreDownloadCheckCode_MAX = 4
};

// Enum ShooterGame.EPregameLockInState
enum class EPregameLockInState : uint8 {
	NotSelected = 0,
	CanLockIn = 1,
	CannotLockIn = 2,
	LockingIn = 3,
	LockedIn = 4,
	EPregameLockInState_MAX = 5
};

// Enum ShooterGame.EPregameMatchState
enum class EPregameMatchState : uint8 {
	MapSelectReady = 0,
	MapSelectActive = 1,
	MapSelectFinished = 2,
	CharacterSelectActive = 3,
	CharacterSelectFinished = 4,
	Provisioned = 5,
	Invalid = 6,
	Count = 7,
	EPregameMatchState_MAX = 8
};

// Enum ShooterGame.EPremierEventMapSelectionStrategy
enum class EPremierEventMapSelectionStrategy : uint8 {
	INVALID = 0,
	RANDOM = 1,
	PICKBAN = 2,
	Count = 3,
	EPremierEventMapSelectionStrategy_MAX = 4
};

// Enum ShooterGame.EPremierEventType
enum class EPremierEventType : uint8 {
	INVALID = 0,
	LEAGUE = 1,
	TOURNAMENT = 2,
	SCRIM = 3,
	Count = 4,
	EPremierEventType_MAX = 5
};

// Enum ShooterGame.EPremierRosterEnrollErrorTypeOld
enum class EPremierRosterEnrollErrorTypeOld : uint8 {
	MinumumRequiredMembers = 0,
	Default = 1,
	Count = 2,
	Invalid = 3,
	EPremierRosterEnrollErrorTypeOld_MAX = 4
};

// Enum ShooterGame.EPremierRosterInviteErrorType
enum class EPremierRosterInviteErrorType : uint8 {
	RosterLocked = 0,
	PlayerMaxRosterLimitReached = 1,
	RosterNonProvisional = 2,
	PlayerIneligibleRanked = 3,
	PlayerIneligibleAVS = 4,
	PlayerIneligibleRestrictionIneligible = 5,
	PlayerIneligibleRestrictionDisqualified = 6,
	PlayerIneligibleContenderEligibility = 7,
	InviteeChangesRosterDivisionTier = 8,
	InviteeNotEligibleAVS = 9,
	InviteeNotEligibleRanked = 10,
	InviteeNotEligibleRestrictionIneligible = 11,
	InviteeNotEligibleRestrictionDisqualified = 12,
	Default = 13,
	Count = 14,
	Invalid = 15,
	EPremierRosterInviteErrorType_MAX = 16
};

// Enum ShooterGame.EPremierRosterChangeRoleErrorType
enum class EPremierRosterChangeRoleErrorType : uint8 {
	MaxCaptainLimitReached = 0,
	Default = 1,
	Count = 2,
	Invalid = 3,
	EPremierRosterChangeRoleErrorType_MAX = 4
};

// Enum ShooterGame.ERosterMemberRole
enum class ERosterMemberRole : uint8 {
	Owner = 0,
	Captain = 1,
	Member = 2,
	Count = 3,
	Invalid = 4,
	ERosterMemberRole_MAX = 5
};

// Enum ShooterGame.EMatchOutcome
enum class EMatchOutcome : uint8 {
	Win = 0,
	Loss = 1,
	Draw = 2,
	EMatchOutcome_MAX = 3
};

// Enum ShooterGame.ETournamentStatus
enum class ETournamentStatus : uint8 {
	CREATED = 0,
	STARTED = 1,
	FINISHED = 2,
	CANCELED = 3,
	Count = 4,
	Invalid = 5,
	ETournamentStatus_MAX = 6
};

// Enum ShooterGame.ETournamentType
enum class ETournamentType : uint8 {
	ELIMINATION = 0,
	CONSOLATION = 1,
	Count = 2,
	Invalid = 3,
	ETournamentType_MAX = 4
};

// Enum ShooterGame.EMatchupStatus
enum class EMatchupStatus : uint8 {
	CREATED = 0,
	READY = 1,
	STARTED = 2,
	FINISHED = 3,
	EXCLUDED = 4,
	CANCELED = 5,
	Count = 6,
	Invalid = 7,
	EMatchupStatus_MAX = 8
};

// Enum ShooterGame.EMatchupParticipantOutcome
enum class EMatchupParticipantOutcome : uint8 {
	WIN = 0,
	LOSS = 1,
	NONE = 2,
	Count = 3,
	Invalid = 4,
	EMatchupParticipantOutcome_MAX = 5
};

// Enum ShooterGame.EMatchupBracketType
enum class EMatchupBracketType : uint8 {
	WINNERS = 0,
	LOSERS = 1,
	Count = 2,
	Invalid = 3,
	EMatchupBracketType_MAX = 4
};

// Enum ShooterGame.EPresenceProduct
enum class EPresenceProduct : uint8 {
	Ares = 0,
	Bacon = 1,
	Keystone = 2,
	LeagueOfLegends = 3,
	Invalid = 4,
	EPresenceProduct_MAX = 5
};

// Enum ShooterGame.ERewardSource
enum class ERewardSource : uint8 {
	Other = 0,
	Kill = 1,
	Death = 2,
	Spike = 3,
	Orb = 4,
	Count = 5,
	ERewardSource_MAX = 6
};

// Enum ShooterGame.EAresRewardGrantStrategy
enum class EAresRewardGrantStrategy : uint8 {
	GrantImmediately = 0,
	DelayUntilRoundEnd = 1,
	Count = 2,
	EAresRewardGrantStrategy_MAX = 3
};

// Enum ShooterGame.EPickemRegistrationStatus
enum class EPickemRegistrationStatus : uint8 {
	Unknown = 0,
	Unregistered = 1,
	Registered = 2,
	EPickemRegistrationStatus_MAX = 3
};

// Enum ShooterGame.EReplayLocalFileMatchEntryUpdateCode
enum class EReplayLocalFileMatchEntryUpdateCode : uint8 {
	General = 0,
	Removed = 1,
	CantFindEntry = 2,
	SummaryUpdateSuccess = 3,
	SummaryUpdateFailure = 4,
	PlatformFileAvailabilityUpdateSuccess = 5,
	PlatformFileAvailabilityUpdateFailure = 6,
	FileRequestDownloadFailed = 7,
	FileRequestDownloadCancelledByUser = 8,
	FileRequestDownloadCancelledBySystem = 9,
	FileRequestDownloadProgressed = 10,
	FileRequestSerializeFailed = 11,
	FileRequestNotEnoughDiskSpace = 12,
	FileRequestDownloadedAndStored = 13,
	FileDeleteAttemptFinished = 14,
	PlaybackStarting = 15,
	PlaybackStarted = 16,
	PlaybackFailed = 17,
	EReplayLocalFileMatchEntryUpdateCode_MAX = 18
};

// Enum ShooterGame.EGameFlowStateType
enum class EGameFlowStateType : uint8 {
	Initialization = 0,
	TransitionToMainMenu = 1,
	MainMenu = 2,
	TransitionToPregame = 3,
	Pregame = 4,
	TransitionToInGame = 5,
	InGame = 6,
	TransitionToWatchingReplay = 7,
	WatchingReplay = 8,
	TransitionToPlatformFaulted = 9,
	PlatformFaulted = 10,
	Invalid = 11,
	Count = 12,
	EGameFlowStateType_MAX = 13
};

// Enum ShooterGame.ERosterCreateErrorType
enum class ERosterCreateErrorType : uint8 {
	NameTaken = 0,
	NameLength = 1,
	TagLength = 2,
	InappropriateName = 3,
	RestrictedName = 4,
	Default = 5,
	Count = 6,
	Invalid = 7,
	ERosterCreateErrorType_MAX = 8
};

// Enum ShooterGame.ERosterInviteErrorType
enum class ERosterInviteErrorType : uint8 {
	RosterLocked = 0,
	PlayerMaxRosterLimitReached = 1,
	RosterNonProvisional = 2,
	PlayerIneligibleRanked = 3,
	PlayerIneligibleAVS = 4,
	PlayerIneligibleRestrictionIneligible = 5,
	PlayerIneligibleRestrictionDisqualified = 6,
	PlayerIneligibleContenderEligibility = 7,
	InviteeChangesRosterDivisionTier = 8,
	InviteeNotEligibleAVS = 9,
	InviteeNotEligibleRanked = 10,
	InviteeNotEligibleRestrictionIneligible = 11,
	InviteeNotEligibleRestrictionDisqualified = 12,
	Default = 13,
	Count = 14,
	Invalid = 15,
	ERosterInviteErrorType_MAX = 16
};

// Enum ShooterGame.ERosterChangeRoleErrorType
enum class ERosterChangeRoleErrorType : uint8 {
	MaxCaptainLimitReached = 0,
	Default = 1,
	Count = 2,
	Invalid = 3,
	ERosterChangeRoleErrorType_MAX = 4
};

// Enum ShooterGame.EAresWidgetDependentState
enum class EAresWidgetDependentState : uint8 {
	Enabled = 0,
	Disabled = 1,
	Locked = 2,
	Collapsed = 3,
	Custom = 4,
	None = 5,
	EAresWidgetDependentState_MAX = 6
};

// Enum ShooterGame.EWidgetVisibilityOption
enum class EWidgetVisibilityOption : uint8 {
	Inherit = 0,
	Visible = 1,
	Hidden = 2,
	COUNT = 3,
	EWidgetVisibilityOption_MAX = 4
};

// Enum ShooterGame.ESocialTriggerState
enum class ESocialTriggerState : uint8 {
	Default = 0,
	FriendRequests = 1,
	PartyMessages = 2,
	ESocialTriggerState_MAX = 3
};

// Enum ShooterGame.ESocialXPState
enum class ESocialXPState : uint8 {
	FeatureInactive = 0,
	PartyNotEligible = 1,
	PartyEligible = 2,
	ModeNotEligible = 3,
	ESocialXPState_MAX = 4
};

// Enum ShooterGame.EAresTeamRole
enum class EAresTeamRole : uint8 {
	None = 0,
	Attacker = 1,
	Defender = 2,
	FreeForAll = 3,
	Any = 4,
	Role_Count = 5,
	EAresTeamRole_MAX = 6
};

// Enum ShooterGame.EGiftingType
enum class EGiftingType : uint8 {
	GIFTABLE = 0,
	NOT_GIFTABLE = 1,
	GIFTABLE_ONLY = 2,
	COUNT = 3,
	EGiftingType_MAX = 4
};

// Enum ShooterGame.EStoreOfferType
enum class EStoreOfferType : uint8 {
	STOREOFFERTYPE_UNKNOWN = 0,
	STOREOFFERTYPE_ROTATING_STORE = 1,
	STOREOFFERTYPE_FEATUREDBUNDLE_INDIVIDUALITEM = 2,
	STOREOFFERTYPE_FEATUREDBUNDLE = 3,
	STOREOFFERTYPE_BONUSSTORE = 4,
	STOREOFFERTYPE_ACCESSORY = 5,
	STOREOFFERTYPE_AGENTSTORE = 6,
	STOREOFFERTYPE_MAX = 7
};

// Enum ShooterGame.EUITelemetryActionType
enum class EUITelemetryActionType : uint8 {
	None = 0,
	Click = 1,
	Hover = 2,
	Count = 3,
	Invalid = 4,
	EUITelemetryActionType_MAX = 5
};

// Enum ShooterGame.EAresTouchMode
enum class EAresTouchMode : uint8 {
	Interaction = 0,
	Edit = 1,
	EAresTouchMode_MAX = 2
};

// Enum ShooterGame.ETransitionScreenState
enum class ETransitionScreenState : uint8 {
	Loading = 0,
	NonInteractive = 1,
	Interactive = 2,
	Invalid = 3,
	Count = 4,
	ETransitionScreenState_MAX = 5
};

// Enum ShooterGame.ETrapState
enum class ETrapState : uint8 {
	Created = 0,
	Deploying = 1,
	Arming = 2,
	Armed = 3,
	Disarmed = 4,
	Triggered = 5,
	Destroyed = 6,
	ETrapState_MAX = 7
};

// Enum ShooterGame.EAresUnblockPlayerResponseErrors
enum class EAresUnblockPlayerResponseErrors : uint8 {
	NoPuuidProvided = 0,
	NotBlocked = 1,
	TargetingSelf = 2,
	InternalError = 3,
	EAresUnblockPlayerResponseErrors_MAX = 4
};

// Enum ShooterGame.EUseKeyType
enum class EUseKeyType : uint8 {
	None = 0,
	Alternate = 1,
	AgentAbility = 2,
	OrbPickup = 4,
	Ascender = 8,
	WeaponPickup = 16,
	GenericMap = 32,
	RemoveCleanse = 64,
	AnotherCharacter = 128,
	All = 255,
	Count = 8,
	EUseKeyType_MAX = 256
};

// Enum ShooterGame.EWalletType
enum class EWalletType : uint8 {
	DEFAULT = 0,
	JUICE_CONTENT = 1,
	ALL_JUICE_CURRENCY = 2,
	COUNT = 3,
	EWalletType_MAX = 4
};

// Enum ShooterGame.EWinningTeam
enum class EWinningTeam : uint8 {
	None = 0,
	TeamOne = 1,
	TeamTwo = 2,
	EWinningTeam_MAX = 3
};

// Enum ShooterGame.EPartyManagerInviteAction
enum class EPartyManagerInviteAction : uint8 {
	Accepted = 0,
	Declined = 1,
	Count = 2,
	EPartyManagerInviteAction_MAX = 3
};

// Enum ShooterGame.EPartyMessageType
enum class EPartyMessageType : uint8 {
	INVALID = 0,
	Invite = 1,
	Request = 2,
	EPartyMessageType_MAX = 3
};

// Enum ShooterGame.EAresPickemResult
enum class EAresPickemResult : uint8 {
	None = 0,
	Incorrect = 1,
	PartiallyCorrect = 2,
	Correct = 3,
	Perfect = 4,
	EAresPickemResult_MAX = 5
};

// Enum ShooterGame.EEsportsMatchOriginType
enum class EEsportsMatchOriginType : uint8 {
	Seeding = 0,
	Match = 1,
	DecisionPoint = 2,
	Count = 3,
	Invalid = 4,
	EEsportsMatchOriginType_MAX = 5
};

// Enum ShooterGame.EJanusStreamerUsed
enum class EJanusStreamerUsed : uint8 {
	None = 0,
	LocalFile = 1,
	RiotHTTP = 2,
	EJanusStreamerUsed_MAX = 3
};

// Enum ShooterGame.EPostAudioEventResult
enum class EPostAudioEventResult : uint8 {
	Success = 0,
	Fail_AudioEvent = 1,
	Fail_AudioEmitter = 2,
	Fail_AudioEventOverride = 3,
	Fail_ShouldPlaySound = 4,
	Fail_ShouldPlaySoundAlliance = 5,
	Fail_ShouldPlaySoundPerspective = 6,
	Fail_ShouldPlaySoundContext = 7,
	EPostAudioEventResult_MAX = 8
};

// Enum ShooterGame.EPremierPrestigesAwardUnlockStatus
enum class EPremierPrestigesAwardUnlockStatus : uint8 {
	NONE = 0,
	ACTIVE = 1,
	PROVISIONAL = 2,
	Count = 3,
	EPremierPrestigesAwardUnlockStatus_MAX = 4
};

// Enum ShooterGame.EPremierPrestigeHighlightedAwardType
enum class EPremierPrestigeHighlightedAwardType : uint8 {
	NONE = 0,
	BASIC = 1,
	QUALIFIED = 2,
	CHAMPSAURA = 3,
	Count = 4,
	EPremierPrestigeHighlightedAwardType_MAX = 5
};

// Enum ShooterGame.EPremierRosterType
enum class EPremierRosterType : uint8 {
	NONE = 0,
	VCT = 1,
	CL = 2,
	Count = 3,
	EPremierRosterType_MAX = 4
};

// Enum ShooterGame.EWidgetLayoutPresetType
enum class EWidgetLayoutPresetType : uint8 {
	Simple = 0,
	Advanced = 1,
	Experimental = 2,
	Custom = 3,
	None = 255,
	EWidgetLayoutPresetType_MAX = 256
};

// Enum ShooterGame.ELobbyContentType
enum class ELobbyContentType : uint8 {
	None = 0,
	MatchmadeQueues = 1,
	CustomModes = 2,
	CustomMaps = 3,
	ELobbyContentType_MAX = 4
};

// Enum ShooterGame.EAresPlayerRestrictionType
enum class EAresPlayerRestrictionType : uint8 {
	TEXT_COMMS = 0,
	VOICE_COMMS = 1,
	COMPETITIVE_QUEUE = 2,
	EAresPlayerRestrictionType_MAX = 3
};

// Enum ShooterGame.EAresDirectionalDamage
enum class EAresDirectionalDamage : uint8 {
	DirectionalDamage_Front = 0,
	DirectionalDamage_Left = 1,
	DirectionalDamage_Right = 2,
	DirectionalDamage_Rear = 3,
	DirectionalDamage_Count = 4,
	DirectionalDamage_Invalid = 254,
	EAresDirectionalDamage_MAX = 255
};

// Enum ShooterGame.EAresSocialTransitionType
enum class EAresSocialTransitionType : uint8 {
	Animate = 0,
	Instant = 1,
	EAresSocialTransitionType_MAX = 2
};

// Enum ShooterGame.EAresSocialFolderExpansionState
enum class EAresSocialFolderExpansionState : uint8 {
	Expanded = 0,
	Collapsed = 1,
	EAresSocialFolderExpansionState_MAX = 2
};

// Enum ShooterGame.EAresSocialFolderVisibilityState
enum class EAresSocialFolderVisibilityState : uint8 {
	Visible = 0,
	Hidden = 1,
	EAresSocialFolderVisibilityState_MAX = 2
};

// Enum ShooterGame.EStopEffectType
enum class EStopEffectType : uint8 {
	Normal = 0,
	ForceKill = 1,
	EStopEffectType_MAX = 2
};

// Enum ShooterGame.EMenuShellGameLoop
enum class EMenuShellGameLoop : uint8 {
	INVALID = 0,
	PreInit = 1,
	Init = 2,
	MainMenu = 4,
	Pregame = 8,
	InGame = 16,
	COUNT = 17,
	EMenuShellGameLoop_MAX = 18
};

// Enum ShooterGame.ETickerSeverity
enum class ETickerSeverity : uint8 {
	Ok = 0,
	Warning = 1,
	Error = 2,
	ETickerSeverity_count = 3,
	ETickerSeverity_MAX = 4
};

// Enum ShooterGame.EUsableCancelReason
enum class EUsableCancelReason : uint8 {
	CharacterDead = 0,
	Unusable = 1,
	Cancelled = 2,
	EUsableCancelReason_MAX = 3
};

// Enum ShooterGame.EAresSocialTabSelectionDirection
enum class EAresSocialTabSelectionDirection : uint8 {
	Forwards = 0,
	Backwards = 1,
	EAresSocialTabSelectionDirection_MAX = 2
};

// Enum ShooterGame.EProgressModelStage
enum class EProgressModelStage : uint8 {
	NotStarted = 0,
	Paused = 1,
	Running = 2,
	Completed = 3,
	Count = 4,
	EProgressModelStage_MAX = 5
};

// Enum ShooterGame.EAnimationConductorNodeResetType
enum class EAnimationConductorNodeResetType : uint8 {
	Normal = 0,
	ForceReset = 1,
	EAnimationConductorNodeResetType_MAX = 2
};

// Enum ShooterGame.EUserActionState
enum class EUserActionState : uint8 {
	Hidden = 0,
	Disabled = 1,
	Enabled = 2,
	EUserActionState_MAX = 3
};

// Enum ShooterGame.EUserActionTriggerResponse
enum class EUserActionTriggerResponse : uint8 {
	Handled = 0,
	Rejected = 1,
	Ignored = 2,
	EUserActionTriggerResponse_MAX = 3
};

// Enum ShooterGame.EListItemDisplayEntryActivationType
enum class EListItemDisplayEntryActivationType : uint8 {
	Highlighted = 0,
	Committed = 1,
	EListItemDisplayEntryActivationType_MAX = 2
};

// Enum ShooterGame.ESimpleSectionHeadersListModelBase_LocationType
enum class ESimpleSectionHeadersListModelBase_LocationType : uint8 {
	Invalid = 0,
	Inner = 1,
	Header = 2,
	ESimpleSectionHeadersListModelBase_MAX = 3
};

// Enum ShooterGame.EUpgradeCostType
enum class EUpgradeCostType : uint8 {
	Money = 0,
	Energy = 1,
	UltimateHighWater = 2,
	Count = 3,
	EUpgradeCostType_MAX = 4
};

// Enum ShooterGame.EAccountXPXPSourceID
enum class EAccountXPXPSourceID : uint8 {
	MatchWin = 0,
	TimePlayed = 1,
	FirstWinOfTheDay = 2,
	EAccountXPXPSourceID_MAX = 3
};

// Enum ShooterGame.EActionBindSetAxisDirection
enum class EActionBindSetAxisDirection : uint8 {
	NoDirection = 0,
	Positive = 1,
	Negative = 2,
	Count = 3,
	EActionBindSetAxisDirection_MAX = 4
};

// Enum ShooterGame.EActionBindPendingMode
enum class EActionBindPendingMode : uint8 {
	Applied = 0,
	Pending = 1,
	EActionBindPendingMode_MAX = 2
};

// Enum ShooterGame.EActionBindResetType
enum class EActionBindResetType : uint8 {
	All = 0,
	PendingOnly = 1,
	Count = 2,
	EActionBindResetType_MAX = 3
};

// Enum ShooterGame.EActionBindSetUserLayer
enum class EActionBindSetUserLayer : uint8 {
	Default = 0,
	CustomBase = 1,
	Character = 2,
	Top = 2,
	Count = 3,
	Invalid = 254,
	EActionBindSetUserLayer_MAX = 255
};

// Enum ShooterGame.EActionChordKeyType
enum class EActionChordKeyType : uint8 {
	KeyboardMouse = 0,
	Gamepad = 1,
	Count = 2,
	EActionChordKeyType_MAX = 3
};

// Enum ShooterGame.EActionSettingsContext
enum class EActionSettingsContext : uint8 {
	None = 0,
	InGame = 1,
	Menus = 2,
	Shop = 3,
	Minimap = 4,
	Spectator = 5,
	Observer = 6,
	CommMenu = 7,
	AlternateMovement = 8,
	AlternateInGame = 9,
	Count = 10,
	EActionSettingsContext_MAX = 11
};

// Enum ShooterGame.EActionBindRestrictions
enum class EActionBindRestrictions : uint8 {
	Free = 0,
	Locked = 1,
	Restricted = 2,
	Count = 3,
	EActionBindRestrictions_MAX = 4
};

// Enum ShooterGame.EAIAimTargetType
enum class EAIAimTargetType : uint8 {
	Invalid = 0,
	MovementDirection = 1,
	DefenseWatchLocation = 2,
	OutOfCombatPreaim = 3,
	PreaimCombatTarget = 4,
	CombatTarget = 5,
	Override = 6,
	ShootablePathBlocker = 7,
	Count = 8,
	EAIAimTargetType_MAX = 9
};

// Enum ShooterGame.EAnimationConductorNodePropagationMode
enum class EAnimationConductorNodePropagationMode : uint8 {
	SingleNode = 0,
	Recursive = 1,
	EAnimationConductorNodePropagationMode_MAX = 2
};

// Enum ShooterGame.EAresShooterAnimMovementDirection
enum class EAresShooterAnimMovementDirection : uint8 {
	None = 0,
	North = 1,
	East = 2,
	South = 3,
	West = 4,
	NorthEast = 5,
	SouthEast = 6,
	SouthWest = 7,
	NorthWest = 8,
	EAresShooterAnimMovementDirection_MAX = 9
};

// Enum ShooterGame.EAresShooterAnimMovementState
enum class EAresShooterAnimMovementState : uint8 {
	Idle = 0,
	Walk = 1,
	Run = 2,
	CrouchIdle = 3,
	CrouchWalk = 4,
	Jump = 5,
	Dead = 6,
	EAresShooterAnimMovementState_MAX = 7
};

// Enum ShooterGame.EAnimArrayDirtyFlags
enum class EAnimArrayDirtyFlags : uint8 {
	None = 0,
	FirstPerson = 1,
	ThirdPerson = 2,
	HitReaction = 4,
	EAnimArrayDirtyFlags_MAX = 5
};

// Enum ShooterGame.EAnimMovementStateMachineState
enum class EAnimMovementStateMachineState : uint8 {
	Idle = 0,
	Walk = 1,
	Run = 2,
	Crouch = 3,
	CrouchIdle = 4,
	CrouchWalk = 5,
	StandUp = 6,
	Jump = 7,
	JumpLand = 8,
	MovementConduit = 9,
	Count = 10,
	EAnimMovementStateMachineState_MAX = 11
};

// Enum ShooterGame.EDisplayType
enum class EDisplayType : uint8 {
	None = 0,
	PassiveDisplay = 1,
	ModalDialog = 2,
	Invalid = 3,
	EDisplayType_MAX = 4
};

// Enum ShooterGame.EPolicyType
enum class EPolicyType : uint8 {
	None = 0,
	Shutdown = 1,
	PlayTime = 2,
	WarningMessage = 3,
	MatchmakingDisable = 4,
	HopeWarning = 5,
	HopeShutdown = 6,
	HopeHeartbeat = 7,
	Invalid = 8,
	EPolicyType_MAX = 9
};

// Enum ShooterGame.EApplyBuffTarget
enum class EApplyBuffTarget : uint8 {
	Self = 0,
	OtherActor = 1,
	EApplyBuffTarget_MAX = 2
};

// Enum ShooterGame.EActionButtonStateTransitionMethod
enum class EActionButtonStateTransitionMethod : uint8 {
	TransitionOnPressAndRelease = 0,
	TransitionOnPressOnly = 1,
	TransitionOnReleaseOnly = 2,
	DoNotTransition = 3,
	EActionButtonStateTransitionMethod_MAX = 4
};

// Enum ShooterGame.EActionButtonActivationMode
enum class EActionButtonActivationMode : uint8 {
	ActivateOnEngage = 0,
	ActivateOnDisengage = 1,
	ActiveWhileEngaged = 2,
	CustomDefinedActivation = 3,
	DoNotActivate = 4,
	EActionButtonActivationMode_MAX = 5
};

// Enum ShooterGame.EAresImpactEffectWithArmor
enum class EAresImpactEffectWithArmor : uint8 {
	WithoutArmor = 0,
	WithArmor = 1,
	WithShield = 2,
	NUM_WITH_ARMOR = 3,
	EAresImpactEffectWithArmor_MAX = 4
};

// Enum ShooterGame.EAresImpactEffectAllies
enum class EAresImpactEffectAllies : uint8 {
	AllyHit = 0,
	EnemyHit = 1,
	NUM_ALLIES = 2,
	EAresImpactEffectAllies_MAX = 3
};

// Enum ShooterGame.EAIAimPlayerCharacterOffset
enum class EAIAimPlayerCharacterOffset : uint8 {
	Body = 0,
	Head = 1,
	Leg = 2,
	Count = 3,
	EAIAimPlayerCharacterOffset_MAX = 4
};

// Enum ShooterGame.ECalloutSuperRegion
enum class ECalloutSuperRegion : uint8 {
	Unspecified = 0,
	AttackerSide = 1,
	DefenderSide = 2,
	Mid = 3,
	A = 4,
	B = 5,
	C = 6,
	ECalloutSuperRegion_Count = 7,
	ECalloutSuperRegion_MAX = 8
};

// Enum ShooterGame.EAresCeremonyTriggerType
enum class EAresCeremonyTriggerType : uint8 {
	Kill = 0,
	Respawn = 1,
	Invalid = 2,
	EAresCeremonyTriggerType_MAX = 3
};

// Enum ShooterGame.ECharacterAbilitySlot
enum class ECharacterAbilitySlot : uint8 {
	Passive = 0,
	Ability1 = 1,
	Ability2 = 2,
	Grenade = 3,
	Ultimate = 4,
	Backpack = 5,
	Invalid = 6,
	Count = 6,
	ECharacterAbilitySlot_MAX = 7
};

// Enum ShooterGame.EOnlineMode
enum class EOnlineMode : uint8 {
	Offline = 0,
	LAN = 1,
	Online = 2,
	EOnlineMode_MAX = 3
};

// Enum ShooterGame.EAresButtonTransitionType
enum class EAresButtonTransitionType : uint8 {
	None = 0,
	Hovered = 1,
	Unhovered = 2,
	Pressed = 3,
	Released = 4,
	Selected = 5,
	Deselected = 6,
	Enabled = 7,
	Disabled = 8,
	Max = 9,
	EAresButtonTransitionType_MAX = 10
};

// Enum ShooterGame.ETileDisplayMode
enum class ETileDisplayMode : uint8 {
	Normal = 0,
	NoScrollBar = 1,
	Restricted = 2,
	ETileDisplayMode_MAX = 3
};

// Enum ShooterGame.EAresContextMenuItemFilterRule
enum class EAresContextMenuItemFilterRule : uint8 {
	Inclusive = 0,
	Exclusive = 1,
	EAresContextMenuItemFilterRule_MAX = 2
};

// Enum ShooterGame.AresDamageEventClassIDs
enum class AresDamageEventClassIDs : uint8 {
	AresDamageEventClassID_Base = 128,
	AresDamageEventClassID_MAX = 129
};

// Enum ShooterGame.EAresDoorState
enum class EAresDoorState : uint8 {
	Open = 0,
	Opening = 1,
	Closing = 2,
	Closed = 3,
	Invalid = 4,
	EAresDoorState_MAX = 5
};

// Enum ShooterGame.EAresInitialDoorState
enum class EAresInitialDoorState : uint8 {
	Open = 0,
	Closed = 1,
	EAresInitialDoorState_MAX = 2
};

// Enum ShooterGame.EAresDoorTransition
enum class EAresDoorTransition : uint8 {
	MoveTo = 0,
	PopTo = 1,
	EAresDoorTransition_MAX = 2
};

// Enum ShooterGame.EEjectableType
enum class EEjectableType : uint8 {
	Unknown = 0,
	ShellCasing = 1,
	Magazine = 2,
	EEjectableType_MAX = 3
};

// Enum ShooterGame.EAutoEquipPriority
enum class EAutoEquipPriority : uint8 {
	NeverAutoEquip = 0,
	Melee = 1,
	Secondary = 2,
	Primary = 3,
	EAutoEquipPriority_MAX = 4
};

// Enum ShooterGame.EEquippableEquipBehavior
enum class EEquippableEquipBehavior : uint8 {
	RequireResources = 0,
	AlwaysEquip = 1,
	NeverEquip = 2,
	Count = 3,
	EEquippableEquipBehavior_MAX = 4
};

// Enum ShooterGame.EEquippableSuppressionBehavior
enum class EEquippableSuppressionBehavior : uint8 {
	Suppressible = 0,
	NonSuppressible = 1,
	Count = 2,
	EEquippableSuppressionBehavior_MAX = 3
};

// Enum ShooterGame.EFirstPersonHideOption
enum class EFirstPersonHideOption : uint8 {
	None = 0,
	ForceVisible = 1,
	ForceInvisible = 2,
	Count = 3,
	EFirstPersonHideOption_MAX = 4
};

// Enum ShooterGame.EZoomInHideOption
enum class EZoomInHideOption : uint8 {
	LeaveVisible = 0,
	OnZoomInStarted = 1,
	WhenFullyZoomedIn = 2,
	Count = 3,
	EZoomInHideOption_MAX = 4
};

// Enum ShooterGame.EZoomOutShowOption
enum class EZoomOutShowOption : uint8 {
	OnUnZoomStarted = 0,
	WhenFullyZoomedOut = 1,
	Count = 2,
	EZoomOutShowOption_MAX = 3
};

// Enum ShooterGame.EAresEquippableCanUseResult
enum class EAresEquippableCanUseResult : uint8 {
	CanUse = 0,
	CantUse = 1,
	NotEnoughCharges = 2,
	Count = 3,
	EAresEquippableCanUseResult_MAX = 4
};

// Enum ShooterGame.EAresDropOnDeath
enum class EAresDropOnDeath : uint8 {
	Never = 0,
	IfNoPrimary = 1,
	Always = 2,
	Count = 3,
	Invalid = 254,
	EAresDropOnDeath_MAX = 255
};

// Enum ShooterGame.EEquippableTickState
enum class EEquippableTickState : uint8 {
	TickFromActorTickGraph = 0,
	TickFromInventory = 1,
	Disabled = 2,
	Count = 3,
	EEquippableTickState_MAX = 4
};

// Enum ShooterGame.EEquippableTickContents
enum class EEquippableTickContents : uint8 {
	TickEntireActor = 0,
	TickStabilityComponentsOnly = 1,
	TickDebugOnly = 2,
	TickDisabled = 3,
	Count = 4,
	EEquippableTickContents_MAX = 5
};

// Enum ShooterGame.EAresActivationInputType
enum class EAresActivationInputType : uint8 {
	StandardInput = 0,
	AlternateInput = 1,
	AlternateInput2 = 2,
	AlternateInput3 = 3,
	AlternateInput4 = 4,
	ActivationInputType_Count = 5,
	EAresActivationInputType_MAX = 6
};

// Enum ShooterGame.EAresEquippableSlotViewType
enum class EAresEquippableSlotViewType : uint8 {
	Show = 0,
	HideIfEmpty = 1,
	Hide = 2,
	EAresEquippableSlotViewType_MAX = 3
};

// Enum ShooterGame.EAresMinimapVisibility
enum class EAresMinimapVisibility : uint8 {
	All = 0,
	Allies = 1,
	Enemies = 2,
	Instigator = 3,
	EAresMinimapVisibility_MAX = 4
};

// Enum ShooterGame.EAresMinimapOverflowBehavior
enum class EAresMinimapOverflowBehavior : uint8 {
	Hide = 0,
	Show = 1,
	EAresMinimapOverflowBehavior_MAX = 2
};

// Enum ShooterGame.EFlushSeverity
enum class EFlushSeverity : uint8 {
	None = 0,
	EnsureWithReporting = 1,
	Check = 2,
	EFlushSeverity_MAX = 3
};

// Enum ShooterGame.ETeleporterEventType
enum class ETeleporterEventType : uint8 {
	Player = 0,
	Item = 1,
	Count = 2,
	ETeleporterEventType_MAX = 3
};

// Enum ShooterGame.EAresGameEventLogSampleState
enum class EAresGameEventLogSampleState : uint8 {
	SamplingDisabled = 0,
	SamplingEnabled = 1,
	EAresGameEventLogSampleState_MAX = 2
};

// Enum ShooterGame.EEconomyTypes
enum class EEconomyTypes : uint8 {
	Standard = 0,
	SwiftPips = 1,
	Other = 2,
	EEconomyTypes_MAX = 3
};

// Enum ShooterGame.EMVPCriteria
enum class EMVPCriteria : uint8 {
	Score = 0,
	Kills = 1,
	EMVPCriteria_MAX = 2
};

// Enum ShooterGame.EBuffEffectContext
enum class EBuffEffectContext : uint8 {
	Instigator = 0,
	Causer = 1,
	BuffEffectContext_Count = 2,
	EBuffEffectContext_MAX = 3
};

// Enum ShooterGame.EGauntletExitCode
enum class EGauntletExitCode : uint8 {
	Success = 0,
	Failure = 1,
	EGauntletExitCode_MAX = 2
};

// Enum ShooterGame.EAresHitConfirmLocality
enum class EAresHitConfirmLocality : uint8 {
	HitConfirm_Shooter = 0,
	HitConfirm_Shootee = 1,
	HitConfirm_Observer = 2,
	HitConfirm_Count = 3,
	HitConfirm_MAX = 4
};

// Enum ShooterGame.EDirectionFilter
enum class EDirectionFilter : uint8 {
	FrontBack = 0,
	FourWay = 1,
	EDirectionFilter_MAX = 255
};

// Enum ShooterGame.EAresHudElementBlendLogic
enum class EAresHudElementBlendLogic : uint8 {
	Automatic = 0,
	Opaque = 1,
	Count = 2,
	EAresHudElementBlendLogic_MAX = 3
};

// Enum ShooterGame.EAresDrawOrigin
enum class EAresDrawOrigin : uint8 {
	UpperLeft = 0,
	Center = 1,
	Top = 2,
	UpperRight = 3,
	CenterLeft = 4,
	CenterRight = 5,
	BottomLeft = 6,
	Bottom = 7,
	BottomRight = 8,
	Count = 9,
	EAresDrawOrigin_MAX = 10
};

// Enum ShooterGame.ELocalPlayerAffinity
enum class ELocalPlayerAffinity : uint8 {
	Self = 0,
	Ally = 1,
	Enemy = 2,
	Neutral = 3,
	Count = 4,
	ELocalPlayerAffinity_MAX = 5
};

// Enum ShooterGame.EAresHudAnchorPoint
enum class EAresHudAnchorPoint : uint8 {
	TopLeft = 0,
	Top = 1,
	TopRight = 2,
	CenterLeft = 3,
	Center = 4,
	CenterRight = 5,
	BottomLeft = 6,
	Bottom = 7,
	BottomRight = 8,
	EAresHudAnchorPoint_MAX = 9
};

// Enum ShooterGame.EAresHudTextExtentsMode
enum class EAresHudTextExtentsMode : uint8 {
	UseMaxHeight = 0,
	UseBaseline = 1,
	Count = 2,
	EAresHudTextExtentsMode_MAX = 3
};

// Enum ShooterGame.EAresIconButtonState
enum class EAresIconButtonState : uint8 {
	Disengaged = 0,
	Engaged = 1,
	EAresIconButtonState_MAX = 2
};

// Enum ShooterGame.EAresIconButtonOverrides
enum class EAresIconButtonOverrides : uint8 {
	IconTexture = 0,
	IconColor = 1,
	IconScale = 2,
	ButtonColor = 3,
	ButtonSize = 4,
	ButtonText = 5,
	MAX = 6
};

// Enum ShooterGame.EAresIconButtonSize
enum class EAresIconButtonSize : uint8 {
	Small = 0,
	Medium = 1,
	Large = 2,
	Custom = 3,
	EAresIconButtonSize_MAX = 4
};

// Enum ShooterGame.EImpactEffectAudioCreationState
enum class EImpactEffectAudioCreationState : uint8 {
	ShouldNotCreate = 0,
	ShouldCreate = 1,
	Creating = 2,
	Done = 3,
	EImpactEffectAudioCreationState_MAX = 4
};

// Enum ShooterGame.EAresImpactOrder
enum class EAresImpactOrder : uint8 {
	FirstImpact = 0,
	FirstTerminating = 1,
	WallEntryImpact = 2,
	WallEntryTerminatingImpact = 3,
	WallExitImpact = 4,
	ImpactOrder_Count = 5,
	EAresImpactOrder_MAX = 6
};

// Enum ShooterGame.EAresMoveInput
enum class EAresMoveInput : uint8 {
	AlternateMovement = 0,
	Crouch = 1,
	Count = 2,
	Invalid = 254,
	EAresMoveInput_MAX = 255
};

// Enum ShooterGame.EAresInputEventDebugStatus
enum class EAresInputEventDebugStatus : uint8 {
	Uninitialized = 0,
	ClientDropped = 1,
	ClientSent = 2,
	ClientDisagreement = 3,
	ServerReceived = 4,
	ServerPending = 5,
	ServerProcessed = 6,
	ServerDisagreement = 7,
	Count = 8,
	EAresInputEventDebugStatus_MAX = 9
};

// Enum ShooterGame.EInputEventType
enum class EInputEventType : uint8 {
	EquippableInput = 0,
	ActivationInput = 1,
	UnequipCurrentEquippable = 2,
	MovementInput = 3,
	EquippableChange = 4,
	AimVector = 5,
	CorrectionIndex = 6,
	FrameBoundary = 7,
	EquippableDrop = 8,
	CorrectionBaseline = 9,
	UseInteractableObject = 10,
	AimToolingTargetChange = 11,
	AimToolingAimPastTarget = 12,
	Count = 13,
	Invalid = 254,
	EInputEventType_MAX = 255
};

// Enum ShooterGame.EInventoryInputStreamResponse
enum class EInventoryInputStreamResponse : uint8 {
	Process = 0,
	Skip = 1,
	EInventoryInputStreamResponse_MAX = 2
};

// Enum ShooterGame.EServerCorrectionState
enum class EServerCorrectionState : uint8 {
	Agreement = 0,
	MonitorDisagreement = 1,
	PendingEquippableReplication = 2,
	CorrectionIssued = 3,
	Count = 4,
	EServerCorrectionState_MAX = 5
};

// Enum ShooterGame.EItemWrap
enum class EItemWrap : uint8 {
	Wrap = 0,
	DoNotWrap = 1,
	EItemWrap_MAX = 2
};

// Enum ShooterGame.EStorageClashBehavior
enum class EStorageClashBehavior : uint8 {
	None = 0,
	DestroyStored = 1,
	DestroyEquipped = 2,
	Count = 3,
	EStorageClashBehavior_MAX = 4
};

// Enum ShooterGame.EEquippableInInventory
enum class EEquippableInInventory : uint8 {
	No = 0,
	Yes = 1,
	EEquippableInInventory_MAX = 2
};

// Enum ShooterGame.EListenerTrackerType
enum class EListenerTrackerType : uint8 {
	Aud_ListerTracker_Spherical = 0,
	Aud_ListerTracker_Spline = 1,
	Aud_ListerTracker_MeshCollision = 2,
	Aud_ListerTracker_MAX = 3
};

// Enum ShooterGame.EListenerTrackerHeightOverride
enum class EListenerTrackerHeightOverride : uint8 {
	Aud_TrackerEmitterHeightOverride_None = 0,
	Aud_TrackerEmitterHeightOverride_Listener = 1,
	Aud_TrackerEmitterHeightOverride_TrackerObject = 2,
	Aud_TrackerEmitterHeightOverride_MAX = 3
};

// Enum ShooterGame.EAresDateTimeStyle
enum class EAresDateTimeStyle : uint8 {
	Default = 0,
	Short = 1,
	Medium = 2,
	Long = 3,
	Full = 4,
	EAresDateTimeStyle_MAX = 5
};

// Enum ShooterGame.DeltaBarToAnimate
enum class DeltaBarToAnimate : uint8 {
	Delta_One = 0,
	Delta_Two = 1,
	Delta_Three = 2,
	Delta_Four = 3,
	Delta_Bar_Count = 4,
	Delta_MAX = 5
};

// Enum ShooterGame.EAresMinimapPositionSource
enum class EAresMinimapPositionSource : uint8 {
	AMPSRC_ComponentPosition = 0,
	AMPSRC_ActorPosition = 1,
	AMPSRC_SpecifiedLocation = 2,
	AMPSRC_Center = 3,
	AMPSRC_Cursor = 4,
	AMPSRC_Custom = 5,
	AMPSRC_None = 6,
	AMPSRC_MAX = 7
};

// Enum ShooterGame.EAresMinimapRotationSource
enum class EAresMinimapRotationSource : uint8 {
	AMRSRC_ComponentAim = 0,
	AMRSRC_ActorAim = 1,
	AMRSRC_Rotation = 2,
	AMRSRC_Upright = 3,
	AMRSRC_Custom = 4,
	AMRSRC_None = 5,
	AMRSRC_MAX = 6
};

// Enum ShooterGame.EAresMapIdentifier
enum class EAresMapIdentifier : uint8 {
	Minimap = 0,
	Megamap = 1,
	AbilityMapTargeting = 2,
	Count = 3,
	EAresMapIdentifier_MAX = 4
};

// Enum ShooterGame.EAresMissionType
enum class EAresMissionType : uint8 {
	None = 0,
	Daily = 1,
	Weekly = 2,
	NPE = 3,
	BTE = 4,
	Tutorial = 5,
	Accord = 6,
	Invalid = 7,
	Count = 8,
	EAresMissionType_MAX = 9
};

// Enum ShooterGame.EAresMissionTag
enum class EAresMissionTag : uint8 {
	Combat = 0,
	Econ = 1,
	Invalid = 2,
	Count = 3,
	EAresMissionTag_MAX = 4
};

// Enum ShooterGame.EAresNetworkErrorType
enum class EAresNetworkErrorType : uint8 {
	MovementQueueOverflow = 0,
	InputQueueOverflow = 1,
	Count = 2,
	EAresNetworkErrorType_MAX = 3
};

// Enum ShooterGame.EPartyMessageListDisplayType
enum class EPartyMessageListDisplayType : uint8 {
	INVALID = 0,
	Invites = 1,
	Requests = 2,
	InvitesAndRequests = 3,
	EPartyMessageListDisplayType_MAX = 4
};

// Enum ShooterGame.EAresPersistBehavior
enum class EAresPersistBehavior : uint8 {
	Destroy = 0,
	Ignore = 1,
	EAresPersistBehavior_MAX = 2
};

// Enum ShooterGame.EAresPlatformWidgetFamily
enum class EAresPlatformWidgetFamily : uint8 {
	INVALID = 0,
	LevelTransitionScreens = 1,
	EndOfGame = 2,
	MainMenuGlobalElements = 3,
	NPEHUDElements = 4,
	Premier = 5,
	DailyRewards = 6,
	Store = 7,
	Social = 8,
	EsportsHub = 9,
	Janus = 10,
	COUNT = 11,
	EAresPlatformWidgetFamily_MAX = 12
};

// Enum ShooterGame.EAresPlatformType
enum class EAresPlatformType : uint8 {
	None = 0,
	Desktop = 1,
	Mobile = 2,
	Console = 4,
	All = 7,
	EAresPlatformType_MAX = 8
};

// Enum ShooterGame.EAresPlatformType_NEW
enum class EAresPlatformType_NEW : uint8 {
	None = 0,
	Playstation = 1,
	Xbox = 2,
	All = 3,
	EAresPlatformType_MAX = 4
};

// Enum ShooterGame.EAresIdentitySource
enum class EAresIdentitySource : uint8 {
	Default = 0,
	Alternative1 = 1,
	Alternative2 = 2,
	Alternative_P = 3,
	EAresIdentitySource_MAX = 4
};

// Enum ShooterGame.EAresFriendshipSource
enum class EAresFriendshipSource : uint8 {
	None = 0,
	RiotPlatform = 1,
	ActiveConsolePlatform = 2,
	TempP = 4,
	All = 7,
	EAresFriendshipSource_MAX = 8
};

// Enum ShooterGame.EAresDeviceQuality
enum class EAresDeviceQuality : uint8 {
	Unknown = 0,
	Low = 1,
	Med = 2,
	High = 3,
	Ultra = 4,
	PC = 5,
	Count = 6,
	EAresDeviceQuality_MAX = 7
};

// Enum ShooterGame.EAresNetworkConnectionType
enum class EAresNetworkConnectionType : uint8 {
	Unknown = 0,
	WiFi = 1,
	Cell = 2,
	None = 3,
	EAresNetworkConnectionType_MAX = 4
};

// Enum ShooterGame.EAresNetworkConnectionQuality
enum class EAresNetworkConnectionQuality : uint8 {
	Unknown = 0,
	Poor = 1,
	Good = 2,
	Excellent = 3,
	EAresNetworkConnectionQuality_MAX = 4
};

// Enum ShooterGame.EAresPlatformFilter
enum class EAresPlatformFilter : uint8 {
	Exact = 0,
	PreferExact = 1,
	Count = 2,
	EAresPlatformFilter_MAX = 3
};

// Enum ShooterGame.EAresAutomationMovement
enum class EAresAutomationMovement : uint8 {
	Forward = 0,
	Back = 1,
	Left = 2,
	Right = 3,
	Jump = 4,
	Crouch = 5,
	Walk = 6,
	Count = 7,
	EAresAutomationMovement_MAX = 8
};

// Enum ShooterGame.ECommsSystemOfOrigin
enum class ECommsSystemOfOrigin : uint8 {
	Undefined = 0,
	ManualTacCallout = 1,
	AutomatedTacCallout = 2,
	ECommsSystemOfOrigin_MAX = 3
};

// Enum ShooterGame.EAresClientDemoPlaybackState
enum class EAresClientDemoPlaybackState : uint8 {
	Inactive = 0,
	Playback = 1,
	InactiveInvalidData = 2,
	EAresClientDemoPlaybackState_MAX = 3
};

// Enum ShooterGame.EAresClientDemoState
enum class EAresClientDemoState : uint8 {
	Inactive = 0,
	Recording = 1,
	Playback = 2,
	EAresClientDemoState_MAX = 3
};

// Enum ShooterGame.EAresCostType
enum class EAresCostType : uint8 {
	Cost_Money = 0,
	Cost_Count = 1,
	Cost_MAX = 2
};

// Enum ShooterGame.EAresPurchasableType
enum class EAresPurchasableType : uint8 {
	Equippable = 0,
	Ammo = 1,
	Upgrade = 2,
	Count = 3,
	EAresPurchasableType_MAX = 4
};

// Enum ShooterGame.EAresPurchasableReplaceType
enum class EAresPurchasableReplaceType : uint8 {
	Sell = 0,
	Drop = 1,
	Destroy = 2,
	CannotReplace = 3,
	Count = 4,
	EAresPurchasableReplaceType_MAX = 5
};

// Enum ShooterGame.RadialMenuSlotDisplayType
enum class RadialMenuSlotDisplayType : uint8 {
	None = 0,
	Icon = 1,
	Text = 2,
	RadialMenuSlotDisplayType_MAX = 3
};

// Enum ShooterGame.ERadialMenuContextIndicator
enum class ERadialMenuContextIndicator : uint8 {
	Default = 0,
	Contextual = 1,
	ERadialMenuContextIndicator_MAX = 2
};

// Enum ShooterGame.EFormatStringPosition
enum class EFormatStringPosition : uint8 {
	None = 0,
	FirstPosition = 1,
	SecondPosition = 2,
	EFormatStringPosition_MAX = 3
};

// Enum ShooterGame.ESettingsPageVisibilityConditions
enum class ESettingsPageVisibilityConditions : uint8 {
	None = 0,
	ReplaysEnabled = 1,
	All = 1,
	Count = 1,
	ESettingsPageVisibilityConditions_MAX = 2
};

// Enum ShooterGame.ESettingStorageType
enum class ESettingStorageType : uint8 {
	Local = 0,
	Roaming = 1,
	External = 2,
	ESettingStorageType_MAX = 3
};

// Enum ShooterGame.EAresVoidSettingName
enum class EAresVoidSettingName : uint8 {
	KeyboardKeyBind = 0,
	TextChatFiltered = 1,
	Incognito = 2,
	CrosshairColor = 3,
	VideoDisplayMode = 4,
	VideoResolution = 5,
	MonitorSelection = 6,
	Letterbox = 7,
	Vsync = 8,
	AntiAliasing = 9,
	LanguageSelection = 10,
	EAresVoidSettingName_MAX = 11
};

// Enum ShooterGame.EAresAntiAliasing
enum class EAresAntiAliasing : uint8 {
	None = 0,
	MSAA2x = 1,
	MSAA4x = 2,
	MSAA8x = 3,
	FXAA = 4,
	Count = 5,
	EAresAntiAliasing_MAX = 6
};

// Enum ShooterGame.EAresPlatformRequirements
enum class EAresPlatformRequirements : uint8 {
	None = 0,
	Mouse = 1,
	Keyboard = 2,
	Touch = 4,
	Controller = 8,
	Gyro = 16,
	EAresPlatformRequirements_MAX = 17
};

// Enum ShooterGame.ESocialPartyCategory
enum class ESocialPartyCategory : uint8 {
	Invalid = 0,
	OnlineConsole = 1,
	OnlinePC = 2,
	OnlineCurrentPlatform = 3,
	OnlineOtherPlatform = 4,
	LocalParty = 5,
	ESocialPartyCategory_MAX = 6
};

// Enum ShooterGame.EAresSocialPartyAccessibility
enum class EAresSocialPartyAccessibility : uint8 {
	OpenParty = 0,
	ClosedParty = 1,
	Error = 2,
	EAresSocialPartyAccessibility_MAX = 3
};

// Enum ShooterGame.EAresSocialCrossplayState
enum class EAresSocialCrossplayState : uint8 {
	Compatible = 0,
	CrossplayDisabledPlayer = 1,
	CrossplayDisabledParty = 2,
	EAresSocialCrossplayState_MAX = 3
};

// Enum ShooterGame.EAresSocialCrossplayMessage
enum class EAresSocialCrossplayMessage : uint8 {
	Compatible = 0,
	ObservedPlayerCrossplayDisabledAndConflictsWithLocalPlayer = 1,
	ObservedPlayerCrossplayDisabledAndConflictsWithLocalParty = 2,
	ObservedPartyCrossplayDisabledAndConflictsWithLocalPlayer = 3,
	LocalPlayerCrossplayDisabledAndConflictsWithObservedPlayer = 4,
	LocalPlayerCrossplayDisabledAndConflictsWithObservedParty = 5,
	LocalPartyCrossplayDisabledAndConflictsWithObservedPlayer = 6,
	LocalPlayerAndObservedPlayerCrossplayDisabledAndConflicting = 7,
	LocalPartyAndObservedPartyCrossplayDisabledAndConflicting = 8,
	EAresSocialCrossplayMessage_MAX = 9
};

// Enum ShooterGame.ESocialCategory
enum class ESocialCategory : uint8 {
	Invalid = 0,
	Online = 1,
	OtherGame = 2,
	Offline = 3,
	PartyCompatible = 4,
	PartyIncompatible = 5,
	Invited = 6,
	Blocked = 7,
	LocalPartyMember = 8,
	ActivePlatformOnline = 9,
	ActivePlatformOnlineNoProduct = 10,
	ActivePlatformOtherGame = 11,
	ActivePlatformOffline = 12,
	ESocialCategory_MAX = 13
};

// Enum ShooterGame.EAresSocialTabBarOrientation
enum class EAresSocialTabBarOrientation : uint8 {
	Horizontal = 0,
	Vertical = 1,
	EAresSocialTabBarOrientation_MAX = 2
};

// Enum ShooterGame.EAddToStringSettingListResult
enum class EAddToStringSettingListResult : uint8 {
	Success = 0,
	NoMatchingFunction = 1,
	StringExceedsMaxCharLimit = 2,
	ListExceedsMaxSizeLimit = 3,
	StringAlreadyExists = 4,
	InvalidString = 5,
	EAddToStringSettingListResult_MAX = 6
};

// Enum ShooterGame.EAresTestAutomationStatus
enum class EAresTestAutomationStatus : uint8 {
	Uninitialized = 0,
	Loaded = 1,
	Running = 2,
	Failed = 3,
	Passed = 4,
	Aborted = 5,
	Count = 6,
	EAresTestAutomationStatus_MAX = 7
};

// Enum ShooterGame.EAresAutomationEventType
enum class EAresAutomationEventType : uint8 {
	GameFlowStateChanged = 0,
	JoinedMatch = 1,
	LeftMatch = 2,
	Count = 3,
	EAresAutomationEventType_MAX = 4
};

// Enum ShooterGame.EAresTouchBoundsShape
enum class EAresTouchBoundsShape : uint8 {
	Rectangle = 0,
	Circle = 1,
	Triangle = 2,
	EAresTouchBoundsShape_MAX = 3
};

// Enum ShooterGame.EAresTouchDoubleTapMode
enum class EAresTouchDoubleTapMode : uint8 {
	None = 0,
	ADS = 1,
	Scope = 2,
	ScopeAndADS = 3,
	Ping = 4,
	Crouch = 5,
	Jump = 6,
	SprintToggle = 7,
	WalkToggle = 8,
	WeaponSwap = 9,
	Cancel = 10,
	Use = 11,
	PrimaryFire = 12,
	AltFire = 13,
	SecondaryFire = 14,
	Reload = 15,
	GrenadeAbility = 16,
	AbilityOne = 17,
	AbilityTwo = 18,
	UltimateAbility = 19,
	EAresTouchDoubleTapMode_MAX = 20
};

// Enum ShooterGame.FAresTouchWidgetInputChannel
enum class FAresTouchWidgetInputChannel : uint8 {
	None = 0,
	Edit = 1,
	Movement = 2,
	Aiming = 4,
	Wheel = 8,
	TestMode = 16,
	FAresTouchWidgetInputChannel_MAX = 17
};

// Enum ShooterGame.FAresTouchWidgetSwipeOptions
enum class FAresTouchWidgetSwipeOptions : uint8 {
	AllowSwipesOnTouchRelease = 1,
	AllowSwipesOnTouchMove = 2,
	AllowMultipleSwipesInSinglePress = 4,
	FAresTouchWidgetSwipeOptions_MAX = 5
};

// Enum ShooterGame.EWidgetEnabledState
enum class EWidgetEnabledState : uint8 {
	Enabled = 0,
	Disabled = 1,
	EWidgetEnabledState_MAX = 2
};

// Enum ShooterGame.EAresTouchWidgetDisabledInputMode
enum class EAresTouchWidgetDisabledInputMode : uint8 {
	Passthrough = 0,
	Blocking = 1,
	EAresTouchWidgetDisabledInputMode_MAX = 2
};

// Enum ShooterGame.EAresTouchTrackingMode
enum class EAresTouchTrackingMode : uint8 {
	Local = 0,
	Global = 1,
	LocalExclusive = 2,
	EAresTouchTrackingMode_MAX = 3
};

// Enum ShooterGame.EAresTouchWidgetMode
enum class EAresTouchWidgetMode : uint8 {
	Interaction = 0,
	Edit = 1,
	Hidden = 2,
	Visible = 3,
	EAresTouchWidgetMode_MAX = 4
};

// Enum ShooterGame.EWidgetCallToActionState
enum class EWidgetCallToActionState : uint8 {
	Active = 0,
	Inactive = 1,
	Pulse = 2,
	EWidgetCallToActionState_MAX = 3
};

// Enum ShooterGame.ETrailDrawRule
enum class ETrailDrawRule : uint8 {
	NeverDraw = 0,
	DrawForFriendlies = 1,
	DrawForEnemies = 2,
	AlwaysDraw = 3,
	ETrailDrawRule_MAX = 4
};

// Enum ShooterGame.EUIMouseMode
enum class EUIMouseMode : uint8 {
	Game = 0,
	InWorldUI = 1,
	UI = 2,
	OverriddenMouseUI = 3,
	EUIMouseMode_MAX = 4
};

// Enum ShooterGame.EUIFocus
enum class EUIFocus : uint8 {
	GiveToGame = 0,
	AllowUI = 1,
	EUIFocus_MAX = 2
};

// Enum ShooterGame.EUINavigationTabListPriority
enum class EUINavigationTabListPriority : uint8 {
	None = 0,
	Persistent = 1,
	Primary = 2,
	Secondary = 3,
	COUNT = 4,
	EUINavigationTabListPriority_MAX = 5
};

// Enum ShooterGame.EHandleUserBackActionOption
enum class EHandleUserBackActionOption : uint8 {
	Enable = 0,
	Inherit = 1,
	Disable = 2,
	EHandleUserBackActionOption_MAX = 3
};

// Enum ShooterGame.EUIBridgeType
enum class EUIBridgeType : uint8 {
	Targeted = 0,
	Mini = 1,
	COUNT = 2,
	EUIBridgeType_MAX = 3
};

// Enum ShooterGame.EAresScreenVibility
enum class EAresScreenVibility : uint8 {
	Hidden = 0,
	Visible = 1,
	EAresScreenVibility_MAX = 2
};

// Enum ShooterGame.EAresButtonInteractionState
enum class EAresButtonInteractionState : uint8 {
	Idle = 0,
	Hovered = 1,
	Pressed = 2,
	Disabled = 3,
	EAresButtonInteractionState_MAX = 4
};

// Enum ShooterGame.EAngleTrackerType
enum class EAngleTrackerType : uint8 {
	Aud_VectorAngleTracker_PitchYawCombined = 0,
	Aud_VectorAngleTracker_PitchYawSeparate = 1,
	Aud_VectorAngleTracker_Pitch = 2,
	Aud_VectorAngleTracker_Yaw = 3,
	Aud_VectorAngleTracker_MAX = 4
};

// Enum ShooterGame.EAresWidgetPlayerVisibility
enum class EAresWidgetPlayerVisibility : uint8 {
	All = 0,
	AlliesAndObserver = 1,
	AlliesOnly = 2,
	LocalPlayerOnly = 3,
	Count = 4,
	EAresWidgetPlayerVisibility_MAX = 5
};

// Enum ShooterGame.EBasicAssistType
enum class EBasicAssistType : uint8 {
	Buff = 0,
	Debuff = 1,
	EBasicAssistType_MAX = 2
};

// Enum ShooterGame.ERemovalType
enum class ERemovalType : uint8 {
	Destroy = 0,
	Detach = 1,
	ERemovalType_MAX = 2
};

// Enum ShooterGame.EAttachmentPerspective
enum class EAttachmentPerspective : uint8 {
	First = 0,
	Third = 1,
	Count = 2,
	EAttachmentPerspective_MAX = 3
};

// Enum ShooterGame.EAttachmentVisibility
enum class EAttachmentVisibility : uint8 {
	Hidden = 0,
	Shown = 1,
	Count = 2,
	EAttachmentVisibility_MAX = 3
};

// Enum ShooterGame.EAttributeDrivenTimeDilationMode
enum class EAttributeDrivenTimeDilationMode : uint8 {
	AttributeValue = 0,
	InverseAttributeValue = 1,
	EAttributeDrivenTimeDilationMode_MAX = 2
};

// Enum ShooterGame.EAudioOcclusionOperation
enum class EAudioOcclusionOperation : uint8 {
	SetMinimum = 0,
	Additive = 1,
	Count = 2,
	EAudioOcclusionOperation_MAX = 3
};

// Enum ShooterGame.EAudioOcclusionType
enum class EAudioOcclusionType : uint8 {
	Fixed = 0,
	DistanceBased = 1,
	Count = 2,
	EAudioOcclusionType_MAX = 3
};

// Enum ShooterGame.EAresHudCrosshairPoints
enum class EAresHudCrosshairPoints : uint8 {
	CrosshairPoint_Left = 0,
	CrosshairPoint_Right = 1,
	CrosshairPoint_Top = 2,
	CrosshairPoint_Bottom = 3,
	CrosshairPoint_Center = 4,
	Count = 5,
	EAresHudCrosshairPoints_MAX = 6
};

// Enum ShooterGame.EVisualInterpolationState
enum class EVisualInterpolationState : uint8 {
	Steady = 0,
	OvershootTarget = 1,
	FallbackToTarget = 2,
	EVisualInterpolationState_MAX = 3
};

// Enum ShooterGame.ECrosshairEnvironment
enum class ECrosshairEnvironment : uint8 {
	Gameplay = 0,
	Preview = 1,
	ECrosshairEnvironment_MAX = 2
};

// Enum ShooterGame.ECrosshairShapeType
enum class ECrosshairShapeType : uint8 {
	LineShape = 0,
	CircleShape = 1,
	Count = 2,
	ECrosshairShapeType_MAX = 3
};

// Enum ShooterGame.EProjectileEventType
enum class EProjectileEventType : uint8 {
	Stop = 0,
	Destroy = 1,
	Hit = 2,
	Manual = 3,
	Count = 4,
	EProjectileEventType_MAX = 5
};

// Enum ShooterGame.EScoreboardModifierStatType
enum class EScoreboardModifierStatType : uint8 {
	Kills = 0,
	Deaths = 1,
	Assists = 2,
	Count = 3,
	Invalid = 4,
	EScoreboardModifierStatType_MAX = 5
};

// Enum ShooterGame.EAresTeam
enum class EAresTeam : uint8 {
	AresTeam_Red = 0,
	AresTeam_Blue = 1,
	AresTeam_Invalid = 254,
	EAresTeam_MAX = 255
};

// Enum ShooterGame.ECustomPathFollowStartBehavior
enum class ECustomPathFollowStartBehavior : uint8 {
	StartPathAtClosestPointOnPath = 0,
	StartPathAtBeginning = 1,
	Count = 2,
	ECustomPathFollowStartBehavior_MAX = 3
};

// Enum ShooterGame.ECustomPathFollowMoveType
enum class ECustomPathFollowMoveType : uint8 {
	Full3D = 0,
	Count = 1,
	ECustomPathFollowMoveType_MAX = 2
};

// Enum ShooterGame.ECapID
enum class ECapID : uint8 {
	AresPointID = 0,
	UpgradeTokenID = 1,
	RecruitmentTokenID = 2,
	JuiceEnergyCurrencyID = 3,
	JuiceMaxEnergyCurrencyID = 4,
	DoughID = 5,
	EquippableContentTypeID = 6,
	EquippableSkinContentTypeID = 7,
	EquippableSkinLevelContentTypeID = 8,
	EquippableSkinChromaContentTypeID = 9,
	EquippableCharmContentTypeID = 10,
	EquippableCharmLevelContentTypeID = 11,
	EquippableAttachmentContentTypeID = 12,
	CharacterContentTypeID = 13,
	SprayContentTypeID = 14,
	SprayLevelContentTypeID = 15,
	PlayerCardContentTypeID = 16,
	MissionContentTypeID = 17,
	PlayerTitleContentTypeID = 18,
	ContractContentTypeID = 19,
	PremiumContractContentTypeID = 20,
	TotemContentTypeID = 21,
	PermanentEntitlementTypeID = 22,
	LoyaltyEntitlementTypeID = 23,
	XGPEntitlementTypeID = 24,
	CurrencyRewardTypeID = 25,
	ContractXPCurrencyID = 26,
	F2PEntitlementTypeID = 27,
	Count = 28,
	ECapID_MAX = 29
};

// Enum ShooterGame.EPatchSpreadStyle
enum class EPatchSpreadStyle : uint8 {
	Air = 0,
	Ground = 1,
	Count = 2,
	EPatchSpreadStyle_MAX = 3
};

// Enum ShooterGame.EPatchType
enum class EPatchType : uint8 {
	Cells = 0,
	Nodes = 1,
	Volumes = 2,
	ForceVolumes = 3,
	Count = 4,
	EPatchType_MAX = 5
};

// Enum ShooterGame.ENodeStatus
enum class ENodeStatus : uint8 {
	Unsearched = 0,
	Pending = 1,
	Blocked = 2,
	Inside = 3,
	Outside = 4,
	Count = 5,
	ENodeStatus_MAX = 6
};

// Enum ShooterGame.ECellStatus
enum class ECellStatus : uint8 {
	AllInside = 0,
	PartiallyOutside = 1,
	PartiallyBlocked = 2,
	Count = 3,
	ECellStatus_MAX = 4
};

// Enum ShooterGame.EEdgeStatus
enum class EEdgeStatus : uint8 {
	OutsidePatch = 0,
	InsidePatch = 1,
	EdgeOfPatch = 2,
	Count = 3,
	EEdgeStatus_MAX = 4
};

// Enum ShooterGame.EPatchPhase
enum class EPatchPhase : uint8 {
	NotBegun = 0,
	Searching = 1,
	PostProcessing = 2,
	MarkingEdges = 3,
	MakingCellVolumes = 4,
	PatchSuccessful = 5,
	PatchFailed = 6,
	Count = 7,
	EPatchPhase_MAX = 8
};

// Enum ShooterGame.EChatMessageFormatType
enum class EChatMessageFormatType : uint8 {
	Author = 0,
	NoAuthor = 1,
	NoChannel = 2,
	NoAuthorNoChannel = 3,
	Count = 4,
	EChatMessageFormatType_MAX = 5
};

// Enum ShooterGame.EClientPerformanceContext
enum class EClientPerformanceContext : uint8 {
	LiveGameplay = 0,
	ReplayPlayback = 1,
	EClientPerformanceContext_MAX = 2
};

// Enum ShooterGame.ECloudSectionPhase
enum class ECloudSectionPhase : uint8 {
	Uninitalized = 0,
	Generating = 1,
	Smoothing = 2,
	Normalizing = 3,
	Finalizing = 4,
	Finished = 5,
	Count = 6,
	ECloudSectionPhase_MAX = 7
};

// Enum ShooterGame.ECNPolicyType
enum class ECNPolicyType : uint8 {
	None = 0,
	Shutdown = 1,
	PlayTime = 2,
	WarningMessage = 3,
	MatchmakingDisable = 4,
	HopeWarning = 5,
	HopeTips = 6,
	HopeShutdown = 7,
	HopeHeartbeat = 8,
	Invalid = 9,
	ECNPolicyType_MAX = 10
};

// Enum ShooterGame.ECoachDebugErrorType
enum class ECoachDebugErrorType : uint8 {
	ViewingEnemy = 0,
	InvalidNullViewTarget = 1,
	IllegalViewTargetMode = 2,
	Count = 3,
	ECoachDebugErrorType_MAX = 4
};

// Enum ShooterGame.ERoundReportEventType
enum class ERoundReportEventType : uint8 {
	DealtDamage = 0,
	ReceivedDamage = 1,
	Respawned = 2,
	ScoredAssist = 3,
	ScoredKill = 4,
	ScoredDeath = 5,
	Count = 6,
	ERoundReportEventType_MAX = 7
};

// Enum ShooterGame.EAresCommsMethod
enum class EAresCommsMethod : uint8 {
	Unknown = 0,
	Voice = 1,
	Ping = 2,
	Text = 3,
	EAresCommsMethod_MAX = 4
};

// Enum ShooterGame.EAresMuteMethod
enum class EAresMuteMethod : uint8 {
	Unknown = 0,
	Toggle = 1,
	Volume = 2,
	ReportModal = 3,
	EAresMuteMethod_MAX = 4
};

// Enum ShooterGame.ECompetitiveTier
enum class ECompetitiveTier : uint8 {
	Iron1 = 3,
	Iron2 = 4,
	Iron3 = 5,
	Bronze1 = 6,
	Bronze2 = 7,
	Bronze3 = 8,
	Silver1 = 9,
	Silver2 = 10,
	Silver3 = 11,
	Gold1 = 12,
	Gold2 = 13,
	Gold3 = 14,
	Platinum1 = 15,
	Platinum2 = 16,
	Platinum3 = 17,
	Diamond1 = 18,
	Diamond2 = 19,
	Diamond3 = 20,
	Immortal1 = 21,
	Immortal2 = 22,
	Immortal3 = 23,
	Radiant = 24,
	ECompetitiveTier_MAX = 25
};

// Enum ShooterGame.ECompetitiveDivision
enum class ECompetitiveDivision : uint8 {
	INVALID = 0,
	UNRANKED = 1,
	IRON = 2,
	BRONZE = 3,
	SILVER = 4,
	GOLD = 5,
	PLATINUM = 6,
	DIAMOND = 7,
	ASCENDANT = 8,
	IMMORTAL = 9,
	RADIANT = 10,
	Count = 11,
	ECompetitiveDivision_MAX = 12
};

// Enum ShooterGame.ECompetitiveTierIconSize
enum class ECompetitiveTierIconSize : uint8 {
	Small = 0,
	Large = 1,
	ECompetitiveTierIconSize_MAX = 2
};

// Enum ShooterGame.ECheatCategory
enum class ECheatCategory : uint8 {
	GeneralCommands = 0,
	GameplayTech = 1,
	PremiumContent = 2,
	ECheatCategory_MAX = 3
};

// Enum ShooterGame.ECheatSubCategory
enum class ECheatSubCategory : uint8 {
	TestingTools = 0,
	PingPacketLossAndJitter = 1,
	InfiniteStuff = 2,
	BombGameModeCheats = 3,
	AutomaticMovingAndShooting = 4,
	SpawningPlayersAndMannequins = 5,
	DisablingStuff = 6,
	MovementSystem = 7,
	VisualizationsAndDebugging = 8,
	HitRegistration = 9,
	HUDAndUI = 10,
	InputsAndEquippables = 11,
	FogOfWar = 12,
	Misc = 13,
	SkinsSpraysAndMore = 14,
	ECheatSubCategory_MAX = 15
};

// Enum ShooterGame.ECheatEntryType
enum class ECheatEntryType : uint8 {
	Simple = 0,
	Toggle = 1,
	Complex = 2,
	ECheatEntryType_MAX = 3
};

// Enum ShooterGame.EActionType
enum class EActionType : uint8 {
	OpenModal = 0,
	CloseModal = 1,
	ApplyFilters = 2,
	Count = 3,
	EActionType_MAX = 4
};

// Enum ShooterGame.EAresContentType
enum class EAresContentType : uint8 {
	EquippableSkin = 0,
	EquippableSkinLevel = 1,
	EquippableSkinChroma = 2,
	EquippableCharm = 3,
	Character = 4,
	CharacterRole = 5,
	Contract = 6,
	EquippableAttachment = 7,
	Equippable = 8,
	Map = 9,
	Socket = 10,
	Spray = 11,
	GameMode = 12,
	Currency = 13,
	EquippableCharmLevel = 14,
	SprayLevel = 15,
	PlayerCard = 16,
	PremiumContract = 17,
	Mission = 18,
	StorefrontItem = 19,
	PlayerTitle = 20,
	Season = 21,
	ActRankBorder = 22,
	ContractChapter = 23,
	ContentTier = 24,
	ContentEdition = 25,
	CompetitiveSeason = 26,
	PremierSeason = 27,
	MatchmakingQueue = 28,
	LevelBorder = 29,
	Event = 30,
	JuiceBox = 31,
	Ceremony = 32,
	TournamentsTeamIcon = 33,
	MassRewardsCeremony = 34,
	Archive = 35,
	Subscription = 36,
	Accolade = 37,
	PremierConference = 38,
	Totem = 39,
	Tip = 40,
	PowderedToast = 41,
	BTE = 42,
	EsportsTeam = 43,
	Invalid = 44,
	Count = 45,
	EAresContentType_MAX = 46
};

// Enum ShooterGame.EEducationArea
enum class EEducationArea : uint8 {
	Economy = 0,
	Abilities = 1,
	AttackDefend = 2,
	Weapon = 3,
	Settings = 4,
	Movement = 5,
	Fights = 6,
	Crosshair = 7,
	Lore = 8,
	ShootingRange = 9,
	Count = 10,
	EEducationArea_MAX = 11
};

// Enum ShooterGame.ETipPossibleDisplayTimes
enum class ETipPossibleDisplayTimes : uint8 {
	BuyPhase = 0,
	TheRange = 1,
	DeathCam = 2,
	BuyPhaseFollowUp = 3,
	ShopClosedFollowUp = 4,
	ETipPossibleDisplayTimes_MAX = 5
};

// Enum ShooterGame.EContractType
enum class EContractType : uint8 {
	Special = 0,
	Story = 1,
	Event = 2,
	Accord = 3,
	Invalid = 4,
	Count = 5,
	EContractType_MAX = 6
};

// Enum ShooterGame.EXPModifier
enum class EXPModifier : uint8 {
	AntiAddiction_Reduced = 0,
	AntiAddiction_Zero = 1,
	Loyalty_Boost = 2,
	XP_Boost = 3,
	Restrictions_XPModifier = 4,
	Social_XP = 5,
	PREMIUM_CONTRACT_XP = 6,
	XGP_SUBSCRIPTION_XP = 7,
	Invalid = 8,
	Count = 9,
	EXPModifier_MAX = 10
};

// Enum ShooterGame.EContractUpgradeState
enum class EContractUpgradeState : uint8 {
	CUS_NOT_UPGRADABLE = 0,
	CUS_UPGRADE_AVAILABLE = 1,
	CUS_UPGRADE_NOT_AFFORDABLE = 2,
	CUS_UPGRADE_OWNED = 3,
	CUS_MAX = 4
};

// Enum ShooterGame.ECoreGameMatchState
enum class ECoreGameMatchState : uint8 {
	PREPROVISION = 0,
	PROVISIONING = 1,
	IN_PROGRESS = 2,
	POST_GAME = 3,
	CLOSED = 4,
	PENDING = 5,
	INVALID = 6,
	COUNT = 6,
	ECoreGameMatchState_MAX = 7
};

// Enum ShooterGame.EInstructionSet
enum class EInstructionSet : uint8 {
	UNKNOWN = 0,
	SSE = 1,
	SSE2 = 2,
	SSE3 = 3,
	SSE41 = 4,
	SSE42 = 5,
	AVX = 6,
	AVX2 = 7,
	EInstructionSet_MAX = 8
};

// Enum ShooterGame.ECrosshairLocation
enum class ECrosshairLocation : uint8 {
	Inner = 0,
	Outer = 1,
	Count = 2,
	ECrosshairLocation_MAX = 3
};

// Enum ShooterGame.EAresCrosshairType
enum class EAresCrosshairType : uint8 {
	None = 0,
	Primary = 1,
	ADS = 2,
	Sniper = 3,
	Focus = 4,
	COUNT = 5,
	EAresCrosshairType_MAX = 6
};

// Enum ShooterGame.ECrosshairPreviewSettingsType
enum class ECrosshairPreviewSettingsType : uint8 {
	Primary = 0,
	ADS = 1,
	FocusMode = 2,
	ECrosshairPreviewSettingsType_MAX = 3
};

// Enum ShooterGame.EAresCustomGameSelectionType
enum class EAresCustomGameSelectionType : uint8 {
	Map = 0,
	Mode = 1,
	Options = 2,
	EAresCustomGameSelectionType_MAX = 3
};

// Enum ShooterGame.EOverhealPhase
enum class EOverhealPhase : uint8 {
	Healing = 0,
	Sustaining = 1,
	Decaying = 2,
	EOverhealPhase_MAX = 3
};

// Enum ShooterGame.ECauserType
enum class ECauserType : uint8 {
	Projectile = 0,
	Equippable = 1,
	Pawn = 2,
	Count = 3,
	ECauserType_MAX = 4
};

// Enum ShooterGame.DamageSectionType
enum class DamageSectionType : uint8 {
	Health = 0,
	Shield = 1,
	Temporary = 2,
	Count = 3,
	DamageSectionType_MAX = 4
};

// Enum ShooterGame.EDebugCharacterMovementTimingFlags
enum class EDebugCharacterMovementTimingFlags : uint8 {
	None = 0,
	Self = 1,
	RemoteClient = 2,
	Count = 3,
	EDebugCharacterMovementTimingFlags_MAX = 4
};

// Enum ShooterGame.EDebugCharacterMovementCurves
enum class EDebugCharacterMovementCurves : uint8 {
	None = 0,
	TotalSpeed = 1,
	AxialSpeed = 2,
	Acceleration = 3,
	JumpHeight = 4,
	RotationDegreesPerSecond = 5,
	Count = 6,
	EDebugCharacterMovementCurves_MAX = 7
};

// Enum ShooterGame.EDebugNetSource
enum class EDebugNetSource : uint8 {
	LocalClient = 0,
	Server = 1,
	Count = 2,
	EDebugNetSource_MAX = 3
};

// Enum ShooterGame.EFiringTimeEntryType
enum class EFiringTimeEntryType : uint8 {
	Normal = 0,
	Refire = 1,
	Burst = 2,
	Future = 3,
	Count = 4,
	EFiringTimeEntryType_MAX = 5
};

// Enum ShooterGame.EDebugWeaponCurves
enum class EDebugWeaponCurves : uint8 {
	None = 0,
	WeaponError = 1,
	WeaponPitchAndYaw = 2,
	Count = 3,
	EDebugWeaponCurves_MAX = 4
};

// Enum ShooterGame.ECreateDecalOptions
enum class ECreateDecalOptions : uint8 {
	DecalOrProxy = 0,
	NeverProxy = 1,
	AlwaysDecal = 2,
	ECreateDecalOptions_MAX = 3
};

// Enum ShooterGame.EDestructionResponse
enum class EDestructionResponse : uint8 {
	DoNothing = 0,
	ActorDestroy = 1,
	TakeDamage = 2,
	DamageOrDestroy = 3,
	Custom = 4,
	Count = 5,
	EDestructionResponse_MAX = 6
};

// Enum ShooterGame.EAudioEventPlaybackType
enum class EAudioEventPlaybackType : uint8 {
	Oneshot = 0,
	Looping = 1,
	EAudioEventPlaybackType_MAX = 2
};

// Enum ShooterGame.EAudioEmitterAttachType
enum class EAudioEmitterAttachType : uint8 {
	AttachToFXC = 0,
	Unattached = 1,
	EAudioEmitterAttachType_MAX = 2
};

// Enum ShooterGame.EPostAssociatedEventsType
enum class EPostAssociatedEventsType : uint8 {
	AudioEvents = 0,
	StopAudioEvents = 1,
	EPostAssociatedEventsType_MAX = 2
};

// Enum ShooterGame.ESpawnEffectType
enum class ESpawnEffectType : uint8 {
	Spawned = 0,
	Pooled = 1,
	Pure = 2,
	ESpawnEffectType_MAX = 3
};

// Enum ShooterGame.ECosmeticEffectType
enum class ECosmeticEffectType : uint8 {
	Undefined = 0,
	Cosmetic = 1,
	Gameplay = 2,
	ECosmeticEffectType_MAX = 3
};

// Enum ShooterGame.EMovementSyncType
enum class EMovementSyncType : uint8 {
	Always = 0,
	Never = 1,
	SpectatorOnly = 2,
	Count = 3,
	EMovementSyncType_MAX = 4
};

// Enum ShooterGame.EEffectPerspective
enum class EEffectPerspective : uint8 {
	FirstPerson = 0,
	ThirdPerson = 1,
	EEffectPerspective_MAX = 2
};

// Enum ShooterGame.EEffectAlliance
enum class EEffectAlliance : uint8 {
	Ally = 0,
	Enemy = 1,
	EEffectAlliance_MAX = 2
};

// Enum ShooterGame.EParticleStopBehavior
enum class EParticleStopBehavior : uint8 {
	KeepPlaying = 0,
	Deactivate = 1,
	Destroy = 2,
	EParticleStopBehavior_MAX = 3
};

// Enum ShooterGame.EParticlesBehavior
enum class EParticlesBehavior : uint8 {
	Active = 0,
	Inactive = 1,
	Hidden = 2,
	Destroy = 3,
	EParticlesBehavior_MAX = 4
};

// Enum ShooterGame.EEffectAttachType
enum class EEffectAttachType : uint8 {
	NotAttached = 0,
	RootComponent = 1,
	Attach1P = 2,
	Attach3P = 3,
	Count = 4,
	EEffectAttachType_MAX = 5
};

// Enum ShooterGame.EEquippableCategory
enum class EEquippableCategory : uint8 {
	Invalid = 0,
	Heavy = 1,
	Rifle = 2,
	Shotgun = 3,
	Sidearm = 4,
	SMG = 5,
	Sniper = 6,
	Melee = 7,
	Hidden = 8,
	Count = 9,
	EEquippableCategory_MAX = 10
};

// Enum ShooterGame.EWeaponFireModeDisplayType
enum class EWeaponFireModeDisplayType : uint8 {
	FullyAutomatic = 0,
	Burst = 1,
	SemiAutomatic = 2,
	Count = 3,
	EWeaponFireModeDisplayType_MAX = 4
};

// Enum ShooterGame.EWallPenetrationDisplayType
enum class EWallPenetrationDisplayType : uint8 {
	None = 0,
	Low = 1,
	Medium = 2,
	High = 3,
	Count = 4,
	EWallPenetrationDisplayType_MAX = 5
};

// Enum ShooterGame.EWeaponStatsFeature
enum class EWeaponStatsFeature : uint8 {
	None = 0,
	Silenced = 1,
	ROFIncrease = 2,
	DualZoom = 3,
	EWeaponStatsFeature_MAX = 4
};

// Enum ShooterGame.EWeaponAltFireDisplayType
enum class EWeaponAltFireDisplayType : uint8 {
	None = 0,
	ADS = 1,
	AirBurst = 2,
	Shotgun = 3,
	EWeaponAltFireDisplayType_MAX = 4
};

// Enum ShooterGame.EEquippableEventHistoryEntryMode
enum class EEquippableEventHistoryEntryMode : uint8 {
	ClientOnly = 0,
	ServerOnly = 1,
	ClientAndServer = 2,
	EEquippableEventHistoryEntryMode_MAX = 3
};

// Enum ShooterGame.EEquippableEventEmitMode
enum class EEquippableEventEmitMode : uint8 {
	ServerAndClient = 0,
	ServerOnly = 1,
	ClientOnly = 2,
	EEquippableEventEmitMode_MAX = 3
};

// Enum ShooterGame.EModificationType
enum class EModificationType : uint8 {
	None = 0,
	Permanent = 1,
	Temporary = 2,
	EModificationType_MAX = 3
};

// Enum ShooterGame.EEquippableRestrictions
enum class EEquippableRestrictions : uint8 {
	Apply = 0,
	SkipForDesired = 1,
	SkipForDesiredAndCurrent = 2,
	Count = 3,
	EEquippableRestrictions_MAX = 4
};

// Enum ShooterGame.EModelCategory
enum class EModelCategory : uint8 {
	Base = 0,
	Light = 1,
	Medium = 2,
	Heavy = 3,
	Count = 4,
	EModelCategory_MAX = 5
};

// Enum ShooterGame.EFXCategory
enum class EFXCategory : uint8 {
	Base = 0,
	Light = 1,
	Medium = 2,
	Heavy = 3,
	Count = 4,
	EFXCategory_MAX = 5
};

// Enum ShooterGame.EAnimationCategory
enum class EAnimationCategory : uint8 {
	None = 0,
	Gun = 1,
	LightHand = 2,
	HeavyHand = 3,
	Count = 4,
	EAnimationCategory_MAX = 5
};

// Enum ShooterGame.EFinisherCategory
enum class EFinisherCategory : uint8 {
	Base = 0,
	Light = 1,
	Medium = 2,
	Heavy = 3,
	Count = 4,
	EFinisherCategory_MAX = 5
};

// Enum ShooterGame.EMeleeCategory
enum class EMeleeCategory : uint8 {
	New = 0,
	ActionsetMod = 1,
	Repeat = 2,
	NonMelee = 3,
	Count = 4,
	EMeleeCategory_MAX = 5
};

// Enum ShooterGame.EMeleeArchetypeCategory
enum class EMeleeArchetypeCategory : uint8 {
	NonMelee = 0,
	Tactical = 1,
	Assassin = 2,
	Assassin2 = 3,
	Aggressive = 4,
	Wand = 5,
	Fury = 6,
	Karambit = 7,
	Karambit2 = 8,
	Uncommon = 9,
	CQC = 10,
	TwoHanded = 11,
	Fan = 12,
	Butterfly = 13,
	Staff = 14,
	Heavy = 15,
	Katana = 16,
	Katana2 = 17,
	DualWield = 18,
	ChainKunai = 19,
	DualFist = 20,
	Count = 21,
	EMeleeArchetypeCategory_MAX = 22
};

// Enum ShooterGame.EEquippableSkinLevelItem
enum class EEquippableSkinLevelItem : uint8 {
	None = 0,
	VFX = 1,
	Animation = 2,
	Finisher = 3,
	KillBanner = 4,
	Buddy = 5,
	Randomizer = 6,
	KillCounter = 7,
	TopFrag = 8,
	InspectAndKill = 9,
	Voiceover = 10,
	KillEffect = 11,
	FishAnimation = 12,
	HeartbeatAndMapSensor = 13,
	SoundEffects = 14,
	KillEffects = 15,
	AttackerDefenderSwap = 16,
	Transformation = 17,
	SongShuffle = 18,
	EEquippableSkinLevelItem_MAX = 19
};

// Enum ShooterGame.EHandleInputResponse
enum class EHandleInputResponse : uint8 {
	Consume = 0,
	Unhandled = 1,
	Count = 2,
	EHandleInputResponse_MAX = 3
};

// Enum ShooterGame.ESourceInputConsumptionOnEnterEquippableState
enum class ESourceInputConsumptionOnEnterEquippableState : uint8 {
	ConsumeSourceInput = 0,
	AllowSourceInputToBeQueued = 1,
	Count = 2,
	ESourceInputConsumptionOnEnterEquippableState_MAX = 3
};

// Enum ShooterGame.EReplacementStateType
enum class EReplacementStateType : uint8 {
	None = 0,
	DisabledFallback = 1,
	Count = 2,
	EReplacementStateType_MAX = 3
};

// Enum ShooterGame.EStateBehaviorOnUnequip
enum class EStateBehaviorOnUnequip : uint8 {
	DoNothing = 0,
	GoToStartState = 1,
	PreventUnequip = 2,
	PreventEquip = 3,
	Count = 4,
	EStateBehaviorOnUnequip_MAX = 5
};

// Enum ShooterGame.EStateBehaviorOnUnpossess
enum class EStateBehaviorOnUnpossess : uint8 {
	DoNothing = 0,
	GoToState = 1,
	Count = 2,
	EStateBehaviorOnUnpossess_MAX = 3
};

// Enum ShooterGame.EStateBehaviorOnDeath
enum class EStateBehaviorOnDeath : uint8 {
	DoNothing = 0,
	GoToState = 1,
	ClearState = 2,
	Count = 3,
	EStateBehaviorOnDeath_MAX = 4
};

// Enum ShooterGame.EEquipSource
enum class EEquipSource : uint8 {
	ActivationInput = 0,
	UnequipEquippable = 1,
	GrantEquippable = 2,
	ServerCorrection = 3,
	RemoveItem = 4,
	UpdateInvalidDesiredEquippable = 5,
	PossessedBy = 6,
	ServerUpdateForServerOwnedActor = 7,
	ServerUpdateForRemotePlayerOwnedActor = 8,
	Script = 9,
	Automation = 10,
	ServerCheat = 11,
	Invalid = 12,
	Count = 13,
	EEquipSource_MAX = 14
};

// Enum ShooterGame.EEquipSpeed
enum class EEquipSpeed : uint8 {
	Normal = 0,
	Fast = 1,
	Instant = 2,
	Count = 3,
	EEquipSpeed_MAX = 4
};

// Enum ShooterGame.EEsportsSectionType
enum class EEsportsSectionType : uint8 {
	Group = 0,
	Bracket = 1,
	CrossGroup = 2,
	Count = 3,
	Invalid = 4,
	EEsportsSectionType_MAX = 5
};

// Enum ShooterGame.EEsportsMatchDestinationType
enum class EEsportsMatchDestinationType : uint8 {
	Standing = 0,
	Match = 1,
	DecisionPoint = 2,
	Count = 3,
	Invalid = 4,
	EEsportsMatchDestinationType_MAX = 5
};

// Enum ShooterGame.EEsportsSectionPickCorrectness
enum class EEsportsSectionPickCorrectness : uint8 {
	Imperfect = 0,
	Perfect = 1,
	Invalid = 2,
	EEsportsSectionPickCorrectness_MAX = 3
};

// Enum ShooterGame.EEsportsEntryPickCorrectness
enum class EEsportsEntryPickCorrectness : uint8 {
	Unknown = 0,
	Incorrect = 1,
	Correct = 2,
	Invalid = 3,
	EEsportsEntryPickCorrectness_MAX = 4
};

// Enum ShooterGame.EStandingsType
enum class EStandingsType : uint8 {
	Group = 0,
	Alpha = 1,
	Omega = 2,
	EStandingsType_MAX = 3
};

// Enum ShooterGame.ETournamentStage
enum class ETournamentStage : uint8 {
	Groups = 0,
	PlayIns = 1,
	Playoffs = 2,
	RegularSeason = 3,
	Swiss = 4,
	Count = 5,
	ETournamentStage_MAX = 6
};

// Enum ShooterGame.EEsportsHubTab
enum class EEsportsHubTab : uint8 {
	Spotlight = 0,
	Schedule = 1,
	GlobalEvents = 2,
	Leagues = 3,
	Teams = 4,
	Pickem = 5,
	VCTEvents = 6,
	Spotlightv2 = 7,
	Count = 8,
	EEsportsHubTab_MAX = 9
};

// Enum ShooterGame.EEsportsMatchRefreshFlags
enum class EEsportsMatchRefreshFlags : uint8 {
	NONE = 0,
	EEsportsMatchRefreshFlags_MAX = 1
};

// Enum ShooterGame.EEsportsMatchStartTimeRefreshFlags
enum class EEsportsMatchStartTimeRefreshFlags : uint8 {
	NONE = 0,
	EEsportsMatchStartTimeRefreshFlags_MAX = 1
};

// Enum ShooterGame.EEsportsModelType
enum class EEsportsModelType : uint8 {
	League = 0,
	Tournament = 1,
	Stage = 2,
	Match = 3,
	Team = 4,
	TeamMember = 5,
	PlayerStats = 6,
	UpcomingMatches = 7,
	FactionPlayerStats = 8,
	FactionLeaderboard = 9,
	Season = 10,
	Split = 11,
	None = 12,
	EEsportsModelType_MAX = 13
};

// Enum ShooterGame.EPickemMatchResultState
enum class EPickemMatchResultState : uint8 {
	UNKOWN = 0,
	TIE = 1,
	KNOWN = 2,
	Count = 3,
	Invalid = 4,
	EPickemMatchResultState_MAX = 5
};

// Enum ShooterGame.EEsportsPlayerStatsRefreshFlags
enum class EEsportsPlayerStatsRefreshFlags : uint8 {
	NONE = 0,
	EEsportsPlayerStatsRefreshFlags_MAX = 1
};

// Enum ShooterGame.EVCTTournament
enum class EVCTTournament : uint8 {
	None = 0,
	Champions = 1,
	MastersOne = 2,
	MastersTwo = 3,
	Americas = 4,
	EMEA = 5,
	Pacific = 6,
	China = 7,
	EVCTTournament_MAX = 8
};

// Enum ShooterGame.EEsportsStageRefreshFlags
enum class EEsportsStageRefreshFlags : uint8 {
	NONE = 0,
	EEsportsStageRefreshFlags_MAX = 1
};

// Enum ShooterGame.EEsportsTeamRefreshFlags
enum class EEsportsTeamRefreshFlags : uint8 {
	NONE = 0,
	FETCHLEAGUE = 1,
	FETCHUPCOMINGMATCHES = 2,
	FETCHTEAMMEMBERS = 4,
	EEsportsTeamRefreshFlags_MAX = 5
};

// Enum ShooterGame.EEULAAcceptanceState
enum class EEULAAcceptanceState : uint8 {
	WAITING_FOR_ALL_SERVICE_DATA = 0,
	ACCEPTANCE_REQUIRED = 1,
	ACCEPTED = 2,
	INVALID = 3,
	COUNT = 3,
	EEULAAcceptanceState_MAX = 4
};

// Enum ShooterGame.EAresExpressionType
enum class EAresExpressionType : uint8 {
	Spray = 0,
	Totem = 1,
	EAresExpressionType_MAX = 2
};

// Enum ShooterGame.EFavoritesActionType
enum class EFavoritesActionType : uint8 {
	AddFavorite = 0,
	RemoveFavorite = 1,
	EFavoritesActionType_MAX = 2
};

// Enum ShooterGame.ECanFireCooldownCheckOption
enum class ECanFireCooldownCheckOption : uint8 {
	CheckCooldown = 0,
	SkipCooldownCheck = 1,
	ECanFireCooldownCheckOption_MAX = 2
};

// Enum ShooterGame.EShellCasingEjectableBehavior
enum class EShellCasingEjectableBehavior : uint8 {
	None = 0,
	EjectOnShoot = 1,
	EShellCasingEjectableBehavior_MAX = 2
};

// Enum ShooterGame.EFiringStateTransitionContext
enum class EFiringStateTransitionContext : uint8 {
	None = 0,
	Refire = 1,
	Burst = 2,
	Count = 3,
	EFiringStateTransitionContext_MAX = 4
};

// Enum ShooterGame.EAresFlyoutCategory
enum class EAresFlyoutCategory : uint8 {
	SocialWindow = 0,
	SocialHovercard = 1,
	ScoreboardHovercard = 2,
	EAresFlyoutCategory_MAX = 3
};

// Enum ShooterGame.EFoWRelevancyResult
enum class EFoWRelevancyResult : uint8 {
	Invalid = 0,
	NotRelevantDistance = 1,
	NotRelevant = 2,
	RelevantVision = 3,
	RelevantAudio = 4,
	RelevantOverride = 5,
	RelevantNoComponent = 6,
	RelevantTeam = 7,
	RelevantDistance = 8,
	Count = 9,
	EFoWRelevancyResult_MAX = 255
};

// Enum ShooterGame.EFoWDebuggableRelevancyResult
enum class EFoWDebuggableRelevancyResult : uint8 {
	Invalid = 0,
	NotRelevantDistance = 1,
	NotRelevant = 2,
	RelevantVision = 3,
	RelevantAudio = 4,
	RelevantOverrideAllActorsRelevant = 5,
	RelevantOverrideNotFinishedSpawning = 6,
	RelevantOverrideForcedRelevant = 7,
	RelevantOverrideHasOverride = 8,
	RelevantNoComponent = 9,
	RelevantTeam = 10,
	RelevantDistance = 11,
	Count = 12,
	EFoWDebuggableRelevancyResult_MAX = 255
};

// Enum ShooterGame.EGroundSoundType
enum class EGroundSoundType : uint8 {
	Step = 0,
	Land = 1,
	Jump = 2,
	EGroundSoundType_MAX = 3
};

// Enum ShooterGame.EForceModuleAttribute
enum class EForceModuleAttribute : uint8 {
	MaxSpeed = 0,
	Friction = 1,
	Braking = 2,
	Acceleration = 3,
	JumpVelocity = 4,
	Gravity = 5,
	JumpTime = 6,
	TurnRate = 7,
	CurrentSpeed = 8,
	AboveMaxSpeedBraking = 9,
	Count = 10,
	EForceModuleAttribute_MAX = 11
};

// Enum ShooterGame.EForceType
enum class EForceType : uint8 {
	Other = 0,
	Traversal = 1,
	Displacement = 2,
	Impairment = 3,
	Dash = 4,
	Depenetration = 5,
	Count = 6,
	EForceType_MAX = 7
};

// Enum ShooterGame.EShooterGameMode
enum class EShooterGameMode : uint8 {
	SpikeMode5v5 = 0,
	Unhandled = 1,
	Count = 2,
	EShooterGameMode_MAX = 3
};

// Enum ShooterGame.EModifierUseConditionsBitMask
enum class EModifierUseConditionsBitMask : uint8 {
	Always = 0,
	Cheats = 1,
	Tournament = 2,
	EModifierUseConditionsBitMask_MAX = 3
};

// Enum ShooterGame.EModifierRoleConditionsBitMask
enum class EModifierRoleConditionsBitMask : uint8 {
	Observer = 0,
	Moderator = 1,
	Player = 2,
	EModifierRoleConditionsBitMask_MAX = 3
};

// Enum ShooterGame.EModifierCategory
enum class EModifierCategory : uint8 {
	None = 0,
	Player = 1,
	Game = 2,
	MatchFlow = 3,
	EModifierCategory_MAX = 4
};

// Enum ShooterGame.EAnalogPlayerState
enum class EAnalogPlayerState : uint8 {
	Default = 0,
	FocusMode = 1,
	ADS = 2,
	Scoped = 3,
	Count = 4,
	EAnalogPlayerState_MAX = 5
};

// Enum ShooterGame.EGameplayFlag
enum class EGameplayFlag : uint8 {
	None = 0,
	InGameUI = 1,
	PlayerIsDead = 2,
	InPreRoundPhase = 4,
	InOptionsScreen = 8,
	GameOutOfFocus = 16,
	All = 255,
	EGameplayFlag_MAX = 256
};

// Enum ShooterGame.EGameUIFlag
enum class EGameUIFlag : uint8 {
	None = 0,
	Scoreboard = 1,
	Map = 2,
	Shop = 4,
	AgentTooltip = 8,
	CombatReport = 16,
	RadialMenu = 32,
	CommMenu = 64,
	EGameUIFlag_MAX = 65
};

// Enum ShooterGame.EGameplayNotificationWidgetSlot
enum class EGameplayNotificationWidgetSlot : uint8 {
	Banner = 0,
	Ring = 1,
	Icon = 2,
	Background = 3,
	Count = 4,
	EGameplayNotificationWidgetSlot_MAX = 5
};

// Enum ShooterGame.EGameplayNotificationDurationType
enum class EGameplayNotificationDurationType : uint8 {
	Timed = 0,
	EventBased = 1,
	EGameplayNotificationDurationType_MAX = 2
};

// Enum ShooterGame.EGameplayNotificationStatus
enum class EGameplayNotificationStatus : uint8 {
	Inactive = 0,
	Queued = 1,
	Active = 2,
	EGameplayNotificationStatus_MAX = 3
};

// Enum ShooterGame.EVoteReplicationState
enum class EVoteReplicationState : uint8 {
	Waiting = 0,
	Complete = 1,
	EVoteReplicationState_MAX = 2
};

// Enum ShooterGame.EVotesNeededType
enum class EVotesNeededType : uint8 {
	UnanimousWithTolerance = 0,
	Majority = 1,
	Custom = 2,
	EVotesNeededType_MAX = 3
};

// Enum ShooterGame.EGapDetectionBoundsConstraint
enum class EGapDetectionBoundsConstraint : uint8 {
	Disabled = 0,
	Lenient = 1,
	Strict = 2,
	EGapDetectionBoundsConstraint_MAX = 3
};

// Enum ShooterGame.EGapDetectionType
enum class EGapDetectionType : uint8 {
	CheckPlanesOnly = 0,
	CheckLinesOnly = 1,
	CheckPlanesAndLines = 2,
	EGapDetectionType_MAX = 3
};

// Enum ShooterGame.EAresNotificationType
enum class EAresNotificationType : uint8 {
	Generic = 0,
	Warning = 1,
	RestrictionsWarning = 2,
	RatingRefund = 3,
	EAresNotificationType_MAX = 4
};

// Enum ShooterGame.EGiftRecipientEligibility
enum class EGiftRecipientEligibility : uint8 {
	UNKNOWN = 0,
	INELIGIBLE = 1,
	ELIGIBLE = 2,
	COUNT = 3,
	EGiftRecipientEligibility_MAX = 4
};

// Enum ShooterGame.EGridAxis2D
enum class EGridAxis2D : uint8 {
	Horizontal = 0,
	Vertical = 1,
	EGridAxis2D_MAX = 2
};

// Enum ShooterGame.EHomingProjectileFacing
enum class EHomingProjectileFacing : uint8 {
	FiringDirection = 0,
	MovementDirection = 1,
	HomingTarget = 2,
	EHomingProjectileFacing_MAX = 3
};

// Enum ShooterGame.EAresListType
enum class EAresListType : uint8 {
	None = 0,
	List = 1,
	Tile = 2,
	Tree = 3,
	COUNT = 4,
	EAresListType_MAX = 5
};

// Enum ShooterGame.EAresListFocusReturnType
enum class EAresListFocusReturnType : uint8 {
	None = 0,
	Selection = 1,
	DirectionalNavigation = 2,
	ZeroIndex = 3,
	PageZeroIndex = 4,
	Count = 5,
	EAresListFocusReturnType_MAX = 6
};

// Enum ShooterGame.EAresListScrollMode
enum class EAresListScrollMode : uint8 {
	Default = 0,
	Restricted = 1,
	Infinite = 2,
	COUNT = 3,
	EAresListScrollMode_MAX = 4
};

// Enum ShooterGame.EButtonTextWidgetComponentType
enum class EButtonTextWidgetComponentType : uint8 {
	Standard = 0,
	Primary = 1,
	Secondary = 2,
	EButtonTextWidgetComponentType_MAX = 3
};

// Enum ShooterGame.EBound
enum class EBound : uint8 {
	UpperBound = 0,
	LowerBound = 1,
	ThesholdType_Count = 2,
	EBound_MAX = 3
};

// Enum ShooterGame.EUseFinishType
enum class EUseFinishType : uint8 {
	InUse = 0,
	Complete = 1,
	Cancel = 2,
	EUseFinishType_MAX = 3
};

// Enum ShooterGame.EAresPreloadableAssetType
enum class EAresPreloadableAssetType : uint8 {
	Invalid = 0,
	FirstPerson = 1,
	ThirdPerson = 2,
	Finisher = 4,
	FirstAndFinisher = 5,
	All = 7,
	EAresPreloadableAssetType_MAX = 8
};

// Enum ShooterGame.ERiotLoginStatusState
enum class ERiotLoginStatusState : uint8 {
	Uninitialized = 0,
	Initialized = 1,
	Authenticating = 2,
	Cancelled = 3,
	Success = 4,
	Error = 5,
	Unknown = 6,
	ERiotLoginStatusState_MAX = 7
};

// Enum ShooterGame.ERiotLoginStrategy
enum class ERiotLoginStrategy : uint8 {
	Riot = 0,
	Google = 1,
	Facebook = 2,
	Apple = 3,
	Tencent = 4,
	None = 5,
	ERiotLoginStrategy_MAX = 6
};

// Enum ShooterGame.EJamSlot
enum class EJamSlot : uint8 {
	NONE = 0,
	Primary = 1,
	Secondary = 2,
	EJamSlot_MAX = 3
};

// Enum ShooterGame.EJuiceFilterViewType
enum class EJuiceFilterViewType : uint8 {
	DEFAULT = 0,
	HAS_JUICE_CONTENT = 1,
	OWNED_ONLY = 2,
	ENERGY = 3,
	COUNT = 4,
	EJuiceFilterViewType_MAX = 5
};

// Enum ShooterGame.EJuiceContentViewModelType
enum class EJuiceContentViewModelType : uint8 {
	NONE = 0,
	CONTENT = 1,
	ENERGY = 2,
	FILL = 3,
	COUNT = 4,
	EJuiceContentViewModelType_MAX = 5
};

// Enum ShooterGame.EJuiceContentViewModelLocation
enum class EJuiceContentViewModelLocation : uint8 {
	NONE = 0,
	COLLECTION = 1,
	TRAY = 2,
	CONFIRM = 3,
	COUNT = 4,
	EJuiceContentViewModelLocation_MAX = 5
};

// Enum ShooterGame.EJuiceRewardType
enum class EJuiceRewardType : uint8 {
	NONE = 0,
	SKIN = 1,
	LEVEL = 2,
	VARIANT = 3,
	COUNT = 4,
	EJuiceRewardType_MAX = 5
};

// Enum ShooterGame.EAresMultiKillLevel
enum class EAresMultiKillLevel : uint8 {
	None = 0,
	DoubleKill = 1,
	TripleKill = 2,
	QuadraKill = 3,
	PentaKill = 4,
	OverKill = 5,
	Count = 6,
	Invalid = 254,
	EAresMultiKillLevel_MAX = 255
};

// Enum ShooterGame.EChildScreenRefreshKickOption
enum class EChildScreenRefreshKickOption : uint8 {
	None = 0,
	NoKick = 1,
	ForceKick = 2,
	OnlyForceKickAtTopLevel = 3,
	EChildScreenRefreshKickOption_MAX = 4
};

// Enum ShooterGame.EAresLevelBorderAppearance
enum class EAresLevelBorderAppearance : uint8 {
	LevelNumber = 0,
	SmallPlayerCard = 1,
	EAresLevelBorderAppearance_MAX = 2
};

// Enum ShooterGame.ELevelLoadingState
enum class ELevelLoadingState : uint8 {
	UNLOADED = 0,
	LOADED = 1,
	LOADING = 2,
	UNLOADING = 3,
	ELevelLoadingState_MAX = 4
};

// Enum ShooterGame.EChordedBindingContext
enum class EChordedBindingContext : uint8 {
	NoContext = 0,
	UltInput = 1,
	Count = 2,
	EChordedBindingContext_MAX = 3
};

// Enum ShooterGame.ESortOrder
enum class ESortOrder : uint8 {
	A = 0,
	B = 1,
	Same = 2,
	ESortOrder_MAX = 3
};

// Enum ShooterGame.EFilterInclude
enum class EFilterInclude : uint8 {
	Exclude = 0,
	Include = 1,
	AlwaysInclude = 2,
	EFilterInclude_MAX = 3
};

// Enum ShooterGame.ELoginQueueTokenType
enum class ELoginQueueTokenType : uint8 {
	Login = 0,
	Queue = 1,
	Invalid = 2,
	ELoginQueueTokenType_MAX = 3
};

// Enum ShooterGame.EStartGameAvailability
enum class EStartGameAvailability : uint8 {
	Unavailable_PatchRequired = 0,
	Unavailable_QueueDisabled = 1,
	Unavailable_NotEligible = 2,
	Unavailable_OversizedParty = 3,
	Unavailable_InvalidPartySize = 4,
	Unavailable_SkillDisparity = 5,
	Unavailable_LocalPlayerUnverified = 6,
	Unavailable_PartyMembersUnverified = 7,
	Unavailable_InactiveGame = 8,
	Unavailable_PartyNotReady_Service = 9,
	Unavailable_PartyNotReady_Chat = 10,
	Unavailable_NoPlayers = 11,
	Unavailable_QueueRestricted = 12,
	Unavailable_QueueDelay = 13,
	Available_NotPartyOwner = 14,
	Available_PartyOwner = 15,
	Count = 16,
	EStartGameAvailability_MAX = 17
};

// Enum ShooterGame.EAresMainMenuTopNavigationState
enum class EAresMainMenuTopNavigationState : uint8 {
	Init = 0,
	Home = 1,
	PlayFlow = 2,
	Arsenal = 3,
	ShootingRange = 4,
	Profile = 5,
	EndOfGame = 6,
	Debug = 7,
	Collections = 8,
	Store = 9,
	BonusStore = 10,
	Progression = 11,
	Battlepass = 12,
	Agents = 13,
	Test3 = 14,
	Social = 15,
	Tournaments = 16,
	CustomGame = 17,
	Rewards = 18,
	EsportsHub = 19,
	BTE = 20,
	Pickem = 21,
	None = 22,
	EAresMainMenuTopNavigationState_MAX = 23
};

// Enum ShooterGame.EMapPingType
enum class EMapPingType : uint8 {
	EMP_MegaMap = 0,
	EMP_FirstPerson = 1,
	EMP_Count = 2,
	EMP_MAX = 3
};

// Enum ShooterGame.ETargettingRotation
enum class ETargettingRotation : uint8 {
	Identity = 0,
	PawnRotation = 1,
	ControllerAim = 2,
	Count = 3,
	ETargettingRotation_MAX = 4
};

// Enum ShooterGame.EMassRewardCeremonyType
enum class EMassRewardCeremonyType : uint8 {
	None = 0,
	Ranked = 1,
	Titled = 2,
	EMassRewardCeremonyType_MAX = 3
};

// Enum ShooterGame.EMatchDetailsInteractionType
enum class EMatchDetailsInteractionType : uint8 {
	Invalid = 0,
	Kill = 1,
	Death = 2,
	Assist = 3,
	EMatchDetailsInteractionType_MAX = 4
};

// Enum ShooterGame.EMatchDetailsEnemyInteractionSort
enum class EMatchDetailsEnemyInteractionSort : uint8 {
	Invalid = 0,
	Rank = 1,
	Kills = 2,
	EMatchDetailsEnemyInteractionSort_MAX = 3
};

// Enum ShooterGame.EAresPlayerRelationship
enum class EAresPlayerRelationship : uint8 {
	Invalid = 0,
	Self = 1,
	Ally = 2,
	Enemy = 3,
	EAresPlayerRelationship_MAX = 4
};

// Enum ShooterGame.ELocalTeamAffinity
enum class ELocalTeamAffinity : uint8 {
	Friendly = 0,
	Enemy = 1,
	Count = 2,
	ELocalTeamAffinity_MAX = 3
};

// Enum ShooterGame.EReplayRecordedStatus
enum class EReplayRecordedStatus : uint8 {
	NotRecorded = 0,
	Recorded = 1,
	RecordedInternalOnly = 2,
	EReplayRecordedStatus_MAX = 3
};

// Enum ShooterGame.EMenuStackEntryFlags
enum class EMenuStackEntryFlags : uint8 {
	None = 0,
	Dismissable = 1,
	Popup = 2,
	Modal = 4,
	Letterbox = 8,
	UnregisterOnClose = 16,
	LastFlagPlusOne = 17,
	EMenuStackEntryFlags_MAX = 18
};

// Enum ShooterGame.EMenuWidgetState
enum class EMenuWidgetState : uint8 {
	Closed = 0,
	Open = 1,
	Count = 2,
	Invalid = 254,
	EMenuWidgetState_MAX = 255
};

// Enum ShooterGame.EMenuStackWidget_RequestCloseMenuResult
enum class EMenuStackWidget_RequestCloseMenuResult : uint8 {
	DefaultHandling = 0,
	Custom = 1,
	EMenuStackWidget_MAX = 2
};

// Enum ShooterGame.EMaterialPriority
enum class EMaterialPriority : uint8 {
	Normal = 0,
	High = 1,
	EMaterialPriority_MAX = 2
};

// Enum ShooterGame.ERatingRefundReason
enum class ERatingRefundReason : uint8 {
	Cheating = 0,
	Count = 1,
	Invalid = 2,
	ERatingRefundReason_MAX = 3
};

// Enum ShooterGame.EMobileOverlayMenuID
enum class EMobileOverlayMenuID : uint8 {
	None = 0,
	SocialPanel = 1,
	TextChat = 2,
	PartyControl = 3,
	SquadBoost = 4,
	PartyUp = 5,
	Count = 6,
	EMobileOverlayMenuID_MAX = 7
};

// Enum ShooterGame.EModalContextType
enum class EModalContextType : uint8 {
	Contains = 0,
	Exact = 1,
	RestrictiveContains = 2,
	RestrictiveExact = 3,
	Block = 4,
	EModalContextType_MAX = 5
};

// Enum ShooterGame.ENetworkSerializeResult
enum class ENetworkSerializeResult : uint8 {
	SuccessWithPayload = 0,
	SuccessEmptyPayload = 1,
	SerializationError = 2,
	ENetworkSerializeResult_MAX = 3
};

// Enum ShooterGame.ENonVerbalCommSystemName
enum class ENonVerbalCommSystemName : uint8 {
	FirstPersonPingWheel = 0,
	FirstPersonCommWheel = 1,
	MegamapPingWheel = 2,
	Megamap = 3,
	RadioCommMenu = 4,
	ENonVerbalCommSystemName_MAX = 5
};

// Enum ShooterGame.ENonVerbalCommSubSystemName
enum class ENonVerbalCommSubSystemName : uint8 {
	None = 0,
	Combat = 1,
	Strategy = 2,
	Tactical = 3,
	Social = 4,
	Map = 5,
	ENonVerbalCommSubSystemName_MAX = 6
};

// Enum ShooterGame.EAresObjectivePlatformVisibility
enum class EAresObjectivePlatformVisibility : uint8 {
	None = 0,
	PC = 1,
	Mobile = 2,
	All = 3,
	EAresObjectivePlatformVisibility_MAX = 4
};

// Enum ShooterGame.EObserverMovementMode
enum class EObserverMovementMode : uint8 {
	ObserverPawn = 0,
	FocusObject = 1,
	Invalid = 2,
	EObserverMovementMode_MAX = 3
};

// Enum ShooterGame.EOrderedListModelChangeEventType
enum class EOrderedListModelChangeEventType : uint8 {
	Reset = 0,
	Inserted = 1,
	Removed = 2,
	Replaced = 3,
	Reordered = 4,
	EOrderedListModelChangeEventType_MAX = 5
};

// Enum ShooterGame.EOutOfGameConfigurationConfigBool
enum class EOutOfGameConfigurationConfigBool : uint8 {
	OUT_OF_GAME_CONFIG_BOOL_INVALID = 0,
	HOME_SCREEN_PROMO_TILE_AGENT = 1,
	EOutOfGameConfigurationConfigBool_MAX = 2
};

// Enum ShooterGame.ERosterEventIneligiblityType
enum class ERosterEventIneligiblityType : uint8 {
	Eligible = 0,
	Ineligible_MatchLimitReached = 1,
	Ineligible_TournamentLimitReached = 2,
	Inelgible_PointRequirementNotAchieved = 3,
	Ineligible_Unenrolled = 4,
	Invalid = 5,
	ERosterEventIneligiblityType_MAX = 6
};

// Enum ShooterGame.EPartyMessageStatus
enum class EPartyMessageStatus : uint8 {
	Unhandled = 0,
	Accepted = 1,
	Declined = 2,
	Count = 3,
	EPartyMessageStatus_MAX = 4
};

// Enum ShooterGame.ESoloExperienceType
enum class ESoloExperienceType : uint8 {
	NewPlayerExperience = 0,
	ShootingRange = 1,
	BotTrainingMatch = 2,
	ReplayNewPlayerExperience = 3,
	WatchReplay = 4,
	ESoloExperienceType_MAX = 5
};

// Enum ShooterGame.ETeam
enum class ETeam : uint8 {
	TEAM_ONE = 0,
	TEAM_TWO = 1,
	TEAM_SPECTATE = 2,
	TEAM_ONE_COACHES = 3,
	TEAM_TWO_COACHES = 4,
	COUNT = 5,
	INVALID = 6,
	ETeam_MAX = 7
};

// Enum ShooterGame.EAresPartyState
enum class EAresPartyState : uint8 {
	DEFAULT = 0,
	CUSTOM_GAME_SETUP = 1,
	CUSTOM_GAME_STARTING = 2,
	MATCHMAKING = 3,
	STARTING_MATCHMAKING = 4,
	LEAVING_MATCHMAKING = 5,
	MATCHMADE_GAME_STARTING = 6,
	SOLO_EXPERIENCE_STARTING = 7,
	TOURNAMENT_SETUP_STARTING = 8,
	TOURNAMENT_SETUP = 9,
	ROSTER_SETUP_STARTING = 10,
	ROSTER_SETUP = 11,
	TOURNAMENT_STARTING = 12,
	TOURNAMENT = 13,
	TOURNAMENT_LEAVING = 14,
	DROP_IN_STARTING = 15,
	INVALID = 16,
	EAresPartyState_MAX = 17
};

// Enum ShooterGame.EStateTransitionReason
enum class EStateTransitionReason : uint8 {
	NONE = 0,
	GAME_STARTING = 1,
	INVALID = 2,
	EStateTransitionReason_MAX = 3
};

// Enum ShooterGame.EAresPartyErrorNotificationType
enum class EAresPartyErrorNotificationType : uint8 {
	INVALID = 0,
	NONE = 1,
	PREGAME_AFK = 2,
	PREGAME_INTENTIONAL_QUIT = 3,
	PREGAME_CHEAT_EXIT = 4,
	PREGAME_AFK_RETURN_TO_QUEUE = 5,
	PREGAME_INTENTIONAL_QUIT_RETURN_TO_QUEUE = 6,
	PREGAME_DODGED_BUT_PARTY_MEMBERSHIP_CHANGED = 7,
	PREGAME_INTERNAL_ERROR = 8,
	QUEUE_RESTRICTED = 9,
	EAresPartyErrorNotificationType_MAX = 10
};

// Enum ShooterGame.EPatchPreviewState
enum class EPatchPreviewState : uint8 {
	Pending = 0,
	Done = 1,
	Unknown = 2,
	EPatchPreviewState_MAX = 3
};

// Enum ShooterGame.EPatchState
enum class EPatchState : uint8 {
	Updating = 0,
	OutOfDate = 1,
	UpToDate = 2,
	NotInstalled = 3,
	PendingVerify = 4,
	Unknown = 5,
	EPatchState_MAX = 6
};

// Enum ShooterGame.EAresPatchNoteType
enum class EAresPatchNoteType : uint8 {
	UNKNOWN = 0,
	H1 = 1,
	H2 = 2,
	H3 = 3,
	H4 = 4,
	OL = 5,
	UL = 6,
	TextElement = 7,
	INVALID = 8,
	EAresPatchNoteType_MAX = 9
};

// Enum ShooterGame.EEndpointType
enum class EEndpointType : uint8 {
	GamePod = 0,
	NetworkEdge = 1,
	Invalid = 2,
	Count = 2,
	EEndpointType_MAX = 255
};

// Enum ShooterGame.EEndpointState
enum class EEndpointState : uint8 {
	Measuring = 0,
	Complete = 1,
	Invalid = 2,
	Count = 2,
	EEndpointState_MAX = 255
};

// Enum ShooterGame.ENavmeshProjection
enum class ENavmeshProjection : uint8 {
	None = 0,
	IfPossible = 1,
	Required = 2,
	ENavmeshProjection_MAX = 3
};

// Enum ShooterGame.EEncroachCheckFailureMode
enum class EEncroachCheckFailureMode : uint8 {
	Reject = 0,
	ProjectToNavmesh = 1,
	ProjectToNavmeshAndRecheck = 2,
	EEncroachCheckFailureMode_MAX = 3
};

// Enum ShooterGame.EPlatformInitErrorReason
enum class EPlatformInitErrorReason : uint8 {
	None = 0,
	RiotClientManagerDisabled = 1,
	NewUserSignupFailed = 2,
	FailedEntitlementGrant = 3,
	InvalidDisplayName = 4,
	AlreadyInitSessionInvalid = 5,
	SessionManagerDeleted = 6,
	SessionConnectFail = 7,
	RMSDependenciesNotInited = 8,
	RSOQueryTokenFail = 9,
	RSOManagerDeleted = 10,
	RSOSubscriptionFailed = 11,
	RSOQueryUserInfoFail = 12,
	RSOQueryEntitlementsFail = 13,
	RSOEntitlementsSubscriptionFailed = 14,
	RMSManagerDeleted = 15,
	RNetClientFailedProcessInfoQuery = 16,
	RNetClientDeleted = 17,
	RNetEventingClientNotReady = 18,
	RNetEventingClientConnectionFail = 19,
	RNetQueryClientDeleted = 20,
	RNetQueryInitFail = 21,
	TestAccountsManagerDeleted = 22,
	UnableToFindUnusedAccount = 23,
	UnexpectedAccountQueryError = 24,
	AtlasAccountCreateFailed = 25,
	UnableToInitializeGameName = 26,
	TestAccountsEntitlementFailed = 27,
	ConfigManagerDeleted = 28,
	ConfigGetFail = 29,
	PlayerAliasManagerDeleted = 30,
	PlayerAliasQueryError = 31,
	WeGameQueryFail = 32,
	RiotClientProcessTerminated = 33,
	RegionLocaleError = 34,
	CouldNotFetchDisplayName = 35,
	MinimumPlatformInit = 36,
	RMSSubscriptionFailed = 37,
	PregamePlayerFetchError = 38,
	CoreGamePlayerFetchError = 39,
	LoadoutFetchError = 40,
	ContractsFetchError = 41,
	ContractDefinitionsFetchError = 42,
	SystemTimedOut = 43,
	VanguardInitFail = 44,
	VanguardNeedsReboot = 45,
	PlatformDowntime = 46,
	AntiAddictionInitFailed = 47,
	PlayerLegalShutdown = 48,
	ChatInitError = 49,
	VoiceInitError = 50,
	PartyInitFailure = 51,
	MMRInitFailure = 52,
	PresenceInitFailure = 53,
	ContentInitFailure = 54,
	ApplicationRepairManagerInitFailure = 55,
	LegalInfoInitFailure = 56,
	PlayerAffinityInitFailure = 57,
	RSOValidationFailure = 58,
	LoginQueueFetchTokenFailure = 59,
	PatchInitFailure = 60,
	LoginQueuePlayerBanned = 61,
	NoGamepodsToPingFailure = 62,
	ManagerDeleted = 63,
	SessionFetchFailure = 64,
	PatchAvailabilityInitFailure = 65,
	ContentIndexInitFailure = 66,
	ChatFriendMetadataInitFailure = 67,
	CapEntitlementsFetchError = 68,
	CapWalletsFetchError = 69,
	StoreOffersFetchError = 70,
	MassRewardsInitFailure = 71,
	AccountXPInitFailure = 72,
	RosterInitFailure = 73,
	RiotClientConfigInitFailure = 74,
	SessionServiceLoginRestricted = 75,
	TournamentInitFailure = 76,
	EULAAcceptanceFailure = 77,
	ClientVersionUnsupported = 78,
	DailyTicketLoginFailure = 79,
	ModifiedClientBan = 80,
	RiotGamesApiInitFailure = 81,
	LaunchRiotClient = 82,
	FavoritesInitFailure = 83,
	DailyRewardsRenewFailure = 84,
	CNAntiAddictionInitFailed = 85,
	RecruitmentProgressFetchFailed = 86,
	RecruitmentEventDataFetchFailed = 87,
	HotfixPatchsieveFailure = 88,
	HotfixFileRetrievalFailure = 89,
	HotfixApplyFailure = 90,
	RiotClientConfigEnvironmentMismatch = 91,
	FRELoginManagerFailure = 92,
	PrivilegedActivityIneligible = 93,
	Count = 94,
	EPlatformInitErrorReason_MAX = 95
};

// Enum ShooterGame.EPlatformErrorComponent
enum class EPlatformErrorComponent : uint8 {
	VoiceLeave = 0,
	VoiceJoin = 1,
	VoicePTTPut = 2,
	VoiceSettingsPut = 3,
	ChatJoin = 4,
	ChatLeave = 5,
	PlatformFault = 6,
	PlatformInitFailure = 7,
	PaymentInitPurchase = 8,
	EPlatformErrorComponent_MAX = 9
};

// Enum ShooterGame.EAresPlatformInitStatus
enum class EAresPlatformInitStatus : uint8 {
	NotStarted = 0,
	Initialized = 1,
	InitFailure = 2,
	Initializing = 3,
	Count = 4,
	EAresPlatformInitStatus_MAX = 5
};

// Enum ShooterGame.EPlatformInitializerSystemImportance
enum class EPlatformInitializerSystemImportance : uint8 {
	Optional = 0,
	Required = 1,
	EPlatformInitializerSystemImportance_MAX = 2
};

// Enum ShooterGame.EPlatformInitializerTimeoutOptions
enum class EPlatformInitializerTimeoutOptions : uint8 {
	Ignore = 0,
	Enforced = 1,
	EPlatformInitializerTimeoutOptions_MAX = 2
};

// Enum ShooterGame.EPlatformInitializerSystemState
enum class EPlatformInitializerSystemState : uint8 {
	Uninitialized = 0,
	Initializing = 1,
	Initialized = 2,
	Failed = 3,
	EPlatformInitializerSystemState_MAX = 4
};

// Enum ShooterGame.ESessionLoopState
enum class ESessionLoopState : uint8 {
	MENUS = 0,
	PREGAME = 1,
	INGAME = 2,
	REPLAY = 3,
	INVALID = 4,
	COUNT = 5,
	ESessionLoopState_MAX = 6
};

// Enum ShooterGame.ESessionCXNState
enum class ESessionCXNState : uint8 {
	CONNECTED = 0,
	EXPIRED = 1,
	CLOSED = 2,
	COUNT = 3,
	ESessionCXNState_MAX = 4
};

// Enum ShooterGame.EPlayerCardImageType
enum class EPlayerCardImageType : uint8 {
	Small = 0,
	Wide = 1,
	Large = 2,
	EPlayerCardImageType_MAX = 3
};

// Enum ShooterGame.EPlayerDebugFlags
enum class EPlayerDebugFlags : uint8 {
	None = 0,
	TrackDroppedShots = 1,
	TrackMoveData = 2,
	TrackInputEvents = 4,
	PreventAwayPenalty = 8,
	EPlayerDebugFlags_Max = 9,
	EPlayerDebugFlags_Max = 10
};

// Enum ShooterGame.EPlayerPerfStatField
enum class EPlayerPerfStatField : uint8 {
	CurrentTickMaximum = 0,
	CurrentTickMinimum = 1,
	CurrentTickAverage = 2,
	CurrentTickSum = 3,
	WorldDurationSum = 4,
	MovingAverage = 5,
	SumPerSecond = 6,
	ExponentialSmooth = 7,
	EnumCount = 8,
	EPlayerPerfStatField_MAX = 9
};

// Enum ShooterGame.EPlayerPerfMetricCategory
enum class EPlayerPerfMetricCategory : uint8 {
	TotalFrameTime = 0,
	GameFrameTime = 1,
	RenderFrameTime = 2,
	FrameRate = 3,
	ServerFrameRate = 4,
	AvailablePhysicalMemory = 5,
	UsedPhysicalMemory = 6,
	NetworkRtt = 7,
	PacketsLostTotal = 8,
	PacketsLostIncoming = 9,
	PacketsLostOutgoing = 10,
	ReceivedPackets = 11,
	SentPackets = 12,
	PacketLossPercentageTotal = 13,
	PacketLossPercentageIncoming = 14,
	PacketLossPercentageOutgoing = 15,
	RHIFrameTime = 16,
	IdleFrameTime = 17,
	InputLatencyCpuPlusGpu = 18,
	InputLatencyCpu = 19,
	InputLatencyGpu = 20,
	RenderWait = 21,
	GpuRenderFrameTime = 22,
	RHIPresentTime = 23,
	RemoteInterpDelayMs = 24,
	QueuedRemoteMoveCount = 25,
	ConsecutiveForwardPredictionTicks = 26,
	UploadedData = 27,
	DownloadedData = 28,
	TotalTransferredData = 29,
	InPacketSize = 30,
	OutPacketSize = 31,
	MoveCorrectionDistance = 32,
	MoveTimelineShiftMs = 33,
	ReceivedEquippableCorrection = 34,
	OutgoingInputQueueLength = 35,
	OutgoingMoveQueueLength = 36,
	ClientIncomingMoveProcessingDelay = 37,
	ServerIncomingMoveProcessingDelay = 38,
	ATB = 39,
	FrameCount = 40,
	NetworkJitter = 41,
	FullEndToEndLatency = 42,
	FiringError = 43,
	RGILatencyMarkers_TotalLatencyMs = 44,
	RGILatencyMarkers_TotalWorkMs = 45,
	RGILatencyMarkers_TotalSlopMs = 46,
	EnumCount = 47,
	EPlayerPerfMetricCategory_MAX = 48
};

// Enum ShooterGame.EPlayerPerfMetricUnitType
enum class EPlayerPerfMetricUnitType : uint8 {
	Bytes = 0,
	Megabytes = 1,
	UnitlessIntegral = 2,
	Milliseconds = 3,
	Percentage = 4,
	Degrees = 5,
	EnumCount = 6,
	EPlayerPerfMetricUnitType_MAX = 7
};

// Enum ShooterGame.EGraphMetricTextPlacement
enum class EGraphMetricTextPlacement : uint8 {
	Top = 0,
	Middle = 1,
	Bottom = 2,
	EnumCount = 3,
	EGraphMetricTextPlacement_MAX = 4
};

// Enum ShooterGame.EGraphDisplayType
enum class EGraphDisplayType : uint8 {
	Line = 0,
	Bar = 1,
	EnumCount = 2,
	EGraphDisplayType_MAX = 3
};

// Enum ShooterGame.EPlayerFeedbackSurveySource
enum class EPlayerFeedbackSurveySource : uint8 {
	UNKNOWN = 0,
	END_OF_GAME = 1,
	STORE_PURCHASE = 2,
	LOGIN = 3,
	TUTORIAL_COMPLETE = 4,
	COUNT = 5,
	EPlayerFeedbackSurveySource_MAX = 6
};

// Enum ShooterGame.EPlayerFeedbackToolSurveyType
enum class EPlayerFeedbackToolSurveyType : uint8 {
	ExternalLink = 0,
	HostedBrowser = 1,
	EPlayerFeedbackToolSurveyType_MAX = 2
};

// Enum ShooterGame.EFeedbackMessageType
enum class EFeedbackMessageType : uint8 {
	Invalid = 0,
	System = 1,
	Model = 2,
	EFeedbackMessageType_MAX = 3
};

// Enum ShooterGame.EPlayerReportReason
enum class EPlayerReportReason : uint8 {
	COMMS_ABUSE_TEXT = 0,
	COMMS_ABUSE_VOICE = 1,
	CHEATING = 2,
	AFK = 3,
	OFFENSIVE_NAME = 4,
	SABOTAGING_TEAM = 5,
	DISRESPECTFUL_BEHAVIOR = 6,
	THREATS = 7,
	BOTTING = 8,
	ABUSING_GLITCHES = 9,
	RANK_MANIPULATION = 10,
	Invalid = 11,
	Count = 12,
	EPlayerReportReason_MAX = 13
};

// Enum ShooterGame.EPremierTeamReportReason
enum class EPremierTeamReportReason : uint8 {
	INAPPROPRIATE_TEAM_NAME = 0,
	Invalid = 1,
	Count = 2,
	EPremierTeamReportReason_MAX = 3
};

// Enum ShooterGame.EPregameTeamID
enum class EPregameTeamID : uint8 {
	Blue = 0,
	Red = 1,
	Neutral = 2,
	Invalid = 3,
	EPregameTeamID_MAX = 4
};

// Enum ShooterGame.EDivisionGroup
enum class EDivisionGroup : uint8 {
	INVALID = 0,
	UNSEEDED = 1,
	OPEN = 2,
	INTERMEDIATE = 3,
	ADVANCED = 4,
	ELITE = 5,
	CONTENDER = 6,
	INVITE = 7,
	Count = 8,
	EDivisionGroup_MAX = 9
};

// Enum ShooterGame.EPremierMatchmakingStrategy
enum class EPremierMatchmakingStrategy : uint8 {
	INVALID = 0,
	PATIENT = 1,
	EAGER = 2,
	Count = 3,
	EPremierMatchmakingStrategy_MAX = 4
};

// Enum ShooterGame.EDivisionPlayoffThreshold
enum class EDivisionPlayoffThreshold : uint8 {
	INVALID = 0,
	POINTS = 1,
	LEADERBOARD_RANK = 2,
	Count = 3,
	EDivisionPlayoffThreshold_MAX = 4
};

// Enum ShooterGame.EDivisionPromotionThreshold
enum class EDivisionPromotionThreshold : uint8 {
	INVALID = 0,
	LEADERBOARD_RANK = 1,
	PLAYOFF_PLACEMENT = 2,
	NONE = 3,
	Count = 4,
	EDivisionPromotionThreshold_MAX = 5
};

// Enum ShooterGame.EDivisionSkipReseedCriteria
enum class EDivisionSkipReseedCriteria : uint8 {
	NONE = 0,
	ALL = 1,
	LEADERBOARD_RANK = 2,
	Count = 3,
	EDivisionSkipReseedCriteria_MAX = 4
};

// Enum ShooterGame.ETournamentRound
enum class ETournamentRound : uint8 {
	Groups = 0,
	Semifinals = 1,
	Finals = 2,
	Count = 3,
	Invalid = 254,
	ETournamentRound_MAX = 255
};

// Enum ShooterGame.EPremierEligibilityStateOld
enum class EPremierEligibilityStateOld : uint8 {
	Eligible = 0,
	IneligibleRestrictions = 1,
	IneligibleAVS = 2,
	IneligibleRanked = 3,
	Count = 4,
	Invalid = 5,
	EPremierEligibilityStateOld_MAX = 6
};

// Enum ShooterGame.EPremierRestrictionsStateOld
enum class EPremierRestrictionsStateOld : uint8 {
	Eligible = 0,
	Ineligible = 1,
	Disqualified = 2,
	Count = 3,
	Invalid = 4,
	EPremierRestrictionsStateOld_MAX = 5
};

// Enum ShooterGame.EPremierRosterMatchHistoryEntryType
enum class EPremierRosterMatchHistoryEntryType : uint8 {
	INVALID = 0,
	LEAGUE = 1,
	TOURNAMENT = 2,
	SCRIM = 3,
	BYE = 4,
	Count = 5,
	EPremierRosterMatchHistoryEntryType_MAX = 6
};

// Enum ShooterGame.ERosterMemberChangeRoleErrorType
enum class ERosterMemberChangeRoleErrorType : uint8 {
	MaxCaptainLimitReached = 0,
	Default = 1,
	Count = 2,
	Invalid = 3,
	ERosterMemberChangeRoleErrorType_MAX = 4
};

// Enum ShooterGame.EPremierRosterMatchHistoryEntryTypeOld
enum class EPremierRosterMatchHistoryEntryTypeOld : uint8 {
	INVALID = 0,
	LEAGUE = 1,
	TOURNAMENT = 2,
	SCRIM = 3,
	BYE = 4,
	Count = 5,
	EPremierRosterMatchHistoryEntryTypeOld_MAX = 6
};

// Enum ShooterGame.EPremierRosterTextChatHandleState
enum class EPremierRosterTextChatHandleState : uint8 {
	Initial = 0,
	Registering = 1,
	RegisteringCancelling = 2,
	Registered = 3,
	Unregistered = 4,
	Count = 5,
	Invalid = 6,
	EPremierRosterTextChatHandleState_MAX = 7
};

// Enum ShooterGame.EAresPartyTournamentStartAvailability
enum class EAresPartyTournamentStartAvailability : uint8 {
	Unavailable_InQueue = 0,
	Unavailable_QueueDisabled = 1,
	Unavailable_EventNotLive = 2,
	Unavailable_LockInToPlay = 3,
	Unavailable_AwaitingLockIn = 4,
	Unavailable_LockInPhaseEnded = 5,
	Unavailable_Unqualified = 6,
	Unavailable_LeagueMatchLimitReached = 7,
	Unavailable_TournamentLimitReached = 8,
	Unavailable_NotEnoughPoints = 9,
	Unavailable_Unenrolled = 10,
	Available_PartyLeader = 11,
	Available_NotPartyLeader = 12,
	TournamentStarted = 13,
	EAresPartyTournamentStartAvailability_MAX = 14
};

// Enum ShooterGame.EPremierDivisionGroup
enum class EPremierDivisionGroup : uint8 {
	INVALID = 0,
	UNSEEDED = 1,
	OPEN = 2,
	INTERMEDIATE = 3,
	ADVANCED = 4,
	ELITE = 5,
	CONTENDER = 6,
	INVITE = 7,
	Count = 8,
	EPremierDivisionGroup_MAX = 9
};

// Enum ShooterGame.EPremierDivisionIcon
enum class EPremierDivisionIcon : uint8 {
	INVALID = 0,
	SMALL = 1,
	LARGE = 2,
	Count = 3,
	EPremierDivisionIcon_MAX = 4
};

// Enum ShooterGame.EPremierEventDayOfWeek
enum class EPremierEventDayOfWeek : uint8 {
	INVALID = 0,
	MONDAY = 1,
	TUESDAY = 2,
	WEDNESDAY = 3,
	THURSDAY = 4,
	FRIDAY = 5,
	SATURDAY = 6,
	SUNDAY = 7,
	Count = 8,
	EPremierEventDayOfWeek_MAX = 9
};

// Enum ShooterGame.EPremierRosterEnrollErrorType
enum class EPremierRosterEnrollErrorType : uint8 {
	MinumumRequiredMembers = 0,
	Default = 1,
	Count = 2,
	Invalid = 3,
	EPremierRosterEnrollErrorType_MAX = 4
};

// Enum ShooterGame.EPremierEligibilityState
enum class EPremierEligibilityState : uint8 {
	Eligible = 0,
	IneligibleRestrictions = 1,
	IneligibleAVS = 2,
	IneligibleRanked = 3,
	Count = 4,
	Invalid = 5,
	EPremierEligibilityState_MAX = 6
};

// Enum ShooterGame.EPremierRestrictionsState
enum class EPremierRestrictionsState : uint8 {
	Eligible = 0,
	Ineligible = 1,
	Disqualified = 2,
	Count = 3,
	Invalid = 4,
	EPremierRestrictionsState_MAX = 5
};

// Enum ShooterGame.EChatPresenceState
enum class EChatPresenceState : uint8 {
	CHAT = 0,
	AWAY = 1,
	DND = 2,
	OFFLINE = 3,
	UNKNOWN = 4,
	EChatPresenceState_MAX = 5
};

// Enum ShooterGame.EChatPresenceProduct
enum class EChatPresenceProduct : uint8 {
	ARES = 0,
	LEAGUE = 1,
	BACON = 2,
	KEYSTONE = 3,
	WILDRIFT = 4,
	TFT = 5,
	LION = 6,
	RIOT_MOBILE = 7,
	UNKNOWN = 8,
	NONE = 9,
	EChatPresenceProduct_MAX = 10
};

// Enum ShooterGame.ENumericProgressCalculationMode
enum class ENumericProgressCalculationMode : uint8 {
	CompletedCount = 0,
	SumProgress = 1,
	SumProgressValidOnly = 2,
	ENumericProgressCalculationMode_MAX = 3
};

// Enum ShooterGame.EProjectileSimulation
enum class EProjectileSimulation : uint8 {
	Owner = 0,
	Server = 1,
	OwnerAndServer = 2,
	AllMachines = 3,
	Count = 4,
	EProjectileSimulation_MAX = 5
};

// Enum ShooterGame.EProjectileStopAction
enum class EProjectileStopAction : uint8 {
	Destroy = 0,
	Idle = 1,
	DelayedDestroy = 2,
	Count = 3,
	EProjectileStopAction_MAX = 4
};

// Enum ShooterGame.ETracerOption
enum class ETracerOption : uint8 {
	EnableTracers = 0,
	DisableTracers = 1,
	ETracerOption_MAX = 2
};

// Enum ShooterGame.EImpactEffectsOption
enum class EImpactEffectsOption : uint8 {
	EnableImpactEffects = 0,
	DisableImpactEffects = 1,
	EImpactEffectsOption_MAX = 2
};

// Enum ShooterGame.EChildActorIgnoreSetting
enum class EChildActorIgnoreSetting : uint8 {
	AutoAddIgnoredActorsChildren = 0,
	DoNothingAutomatically = 1,
	EChildActorIgnoreSetting_MAX = 2
};

// Enum ShooterGame.EProjectileCollisionProcessInstruction
enum class EProjectileCollisionProcessInstruction : uint8 {
	ContinueToNextComponent = 0,
	StopProcessingCollision = 1,
	StopProjectile = 2,
	EProjectileCollisionProcessInstruction_MAX = 3
};

// Enum ShooterGame.EProjectilePerspective
enum class EProjectilePerspective : uint8 {
	FirstPerson = 0,
	ThirdPerson = 1,
	Count = 2,
	EProjectilePerspective_MAX = 3
};

// Enum ShooterGame.EPurchaseType
enum class EPurchaseType : uint8 {
	PurchaseType_None = 0,
	PurchaseType_Rewards = 1,
	PurchaseType_BonusOffer = 2,
	PurchaseType_ContractLevels = 3,
	PurchaseType_ItemLevels = 4,
	PurchaseType_ContractUpgrade = 5,
	PurchaseType_UpgradeCurrency = 6,
	PurchaseType_Bundle = 7,
	PurchaseType_ItemLevelsV2 = 8,
	PurchaseType_Sidegrade = 9,
	PurchaseType_JuiceOpen = 10,
	PurchaseType_JuiceCraft = 11,
	PurchaseType_PlatformOffering = 12,
	PurchaseType_Gifts = 13,
	PurchaseType_GiftAccept = 14,
	PurchaseType_GiftDecline = 15,
	Count = 16,
	EPurchaseType_MAX = 17
};

// Enum ShooterGame.EPurchaseSource
enum class EPurchaseSource : uint8 {
	UNKNOWN = 0,
	ROTATION = 1,
	FEATURED = 2,
	BUNDLE = 3,
	BUNDLE_INDIVIDUAL = 4,
	REWARD = 5,
	CONTRACT = 6,
	CURRENCY = 7,
	ITEM_LEVEL_UPGRADE = 8,
	BATTLEPASS = 9,
	BATTLEPASS_PROGRESS = 10,
	AGENT_PROGRESS = 11,
	BONUS_SHOP = 12,
	ITEM_VARIANT_UPGRADE = 13,
	JUICE = 14,
	JUICE_CRAFT = 15,
	JUICE_CRAFT_LEVEL_UPGRADE = 16,
	JUICE_CRAFT_VARIANT_UPGRADE = 17,
	ACCESSORY = 18,
	AGENT_STORE = 19,
	COUNT = 20,
	EPurchaseSource_MAX = 21
};

// Enum ShooterGame.ERadialTargetSourcePoint
enum class ERadialTargetSourcePoint : uint8 {
	PawnLocation = 0,
	CameraLocation = 1,
	TransformContext = 2,
	ActorContext = 3,
	Count = 4,
	ERadialTargetSourcePoint_MAX = 5
};

// Enum ShooterGame.ERateLimiterMethod
enum class ERateLimiterMethod : uint8 {
	Cooldown = 0,
	RollingWindow = 1,
	RollingWindowExtendedCooldown = 2,
	Count = 3,
	ERateLimiterMethod_MAX = 4
};

// Enum ShooterGame.EReclaimChargeAction
enum class EReclaimChargeAction : uint8 {
	NotReclaimable = 0,
	GrantFullCharge = 1,
	GrantTemporaryCharge = 2,
	StartCooldown = 3,
	EReclaimChargeAction_MAX = 4
};

// Enum ShooterGame.ECanReloadAmmoCheckOption
enum class ECanReloadAmmoCheckOption : uint8 {
	IncludeAmmoCheck = 0,
	ExcludeAmmoCheck = 1,
	Count = 2,
	ECanReloadAmmoCheckOption_MAX = 3
};

// Enum ShooterGame.EMagazineEjectableBehavior
enum class EMagazineEjectableBehavior : uint8 {
	None = 0,
	EjectOnLoad = 1,
	EjectOnAnimationComplete = 2,
	EMagazineEjectableBehavior_MAX = 3
};

// Enum ShooterGame.ERemoteMovementScenario
enum class ERemoteMovementScenario : uint8 {
	Spectating = 0,
	Playing = 1,
	ERemoteMovementScenario_MAX = 2
};

// Enum ShooterGame.EReplayRecordPIEMode
enum class EReplayRecordPIEMode : uint8 {
	DoNotRecord = 0,
	RecordOnce = 1,
	AlwaysRecord = 2,
	Count = 3,
	EReplayRecordPIEMode_MAX = 4
};

// Enum ShooterGame.EReplayEventRecordingVerbosity
enum class EReplayEventRecordingVerbosity : uint8 {
	MinimumToFunction = 0,
	Everything = 1,
	Count = 2,
	EReplayEventRecordingVerbosity_MAX = 3
};

// Enum ShooterGame.EMatchHistoryReplayStatus
enum class EMatchHistoryReplayStatus : uint8 {
	Invalid = 0,
	NotRecorded = 1,
	Unavailable = 2,
	AvailableSoon = 3,
	Downloadable = 4,
	Downloading = 5,
	Playable = 6,
	Incompatible = 7,
	Error = 8,
	EMatchHistoryReplayStatus_MAX = 9
};

// Enum ShooterGame.EMatchHistoryReplayCancelStatus
enum class EMatchHistoryReplayCancelStatus : uint8 {
	Hidden = 0,
	CancelDownload = 1,
	DeleteFile = 2,
	EMatchHistoryReplayCancelStatus_MAX = 3
};

// Enum ShooterGame.EReplayFileOperationErrorCode
enum class EReplayFileOperationErrorCode : uint8 {
	None = 0,
	FileBusy = 1,
	FileDoesNotExist = 2,
	FileDeleteFailed = 3,
	ChecksumGenerationFailed = 4,
	ChecksumDiffer = 5,
	EReplayFileOperationErrorCode_MAX = 6
};

// Enum ShooterGame.EReplayPreLaunchCheckCode
enum class EReplayPreLaunchCheckCode : uint8 {
	Passed = 0,
	NullWorldOrGameInstance = 1,
	MatchNotFound = 2,
	PlatformFetchedCLIncompatible = 3,
	FileNotPresent = 4,
	FileBusy = 5,
	FileIntegrityCheckFailed = 6,
	EReplayPreLaunchCheckCode_MAX = 7
};

// Enum ShooterGame.EReplayChangelistCompatibilityResult
enum class EReplayChangelistCompatibilityResult : uint8 {
	None = 0,
	UnexpectedError = 1,
	Incompatible = 2,
	InvalidRecordingCL = 3,
	InvalidRecordingCLMissingSummary = 4,
	Compatible = 5,
	CompatibleNonExact = 6,
	DevOverrideCompatible = 7,
	EReplayChangelistCompatibilityResult_MAX = 8
};

// Enum ShooterGame.EReplayDownloadResultCode
enum class EReplayDownloadResultCode : uint8 {
	Invalid = 0,
	Complete = 1,
	Failed = 2,
	CancelledBySystem = 3,
	CancelledByUser = 4,
	Count = 5,
	EReplayDownloadResultCode_MAX = 6
};

// Enum ShooterGame.EGamhsInfoType
enum class EGamhsInfoType : uint8 {
	NONE = 0,
	SUMMARY = 1,
	REPLAY = 2,
	EGamhsInfoType_MAX = 3
};

// Enum ShooterGame.EReplayFileAvailability
enum class EReplayFileAvailability : uint8 {
	Uninitialized = 0,
	NotAvailable = 1,
	Available = 2,
	EReplayFileAvailability_MAX = 3
};

// Enum ShooterGame.EReplayGameSpecificHeaderVersion
enum class EReplayGameSpecificHeaderVersion : uint8 {
	None = 0,
	BaseVersion = 1,
	WithMegapacketLoadout = 2,
	VersionPlusOne = 3,
	LatestVersion = 2,
	EReplayGameSpecificHeaderVersion_MAX = 4
};

// Enum ShooterGame.EReplayDownloadCancelType
enum class EReplayDownloadCancelType : uint8 {
	NotCanceled = 0,
	CanceledByUser = 1,
	CanceledBySystem = 2,
	Count = 3,
	EReplayDownloadCancelType_MAX = 4
};

// Enum ShooterGame.EMatchHistoryContext
enum class EMatchHistoryContext : uint8 {
	Invalid = 0,
	List = 1,
	Details = 2,
	EndOfGame = 3,
	EMatchHistoryContext_MAX = 4
};

// Enum ShooterGame.EReplayEventGroup
enum class EReplayEventGroup : uint8 {
	Checkpoint = 0,
	TestingBloat = 1,
	RoundStart = 2,
	SwitchTeams = 3,
	SpikePlanted = 4,
	SpikeDefused = 5,
	SpikeExploded = 6,
	CharacterTookDamage = 7,
	CharacterDeath = 8,
	CharacterEquippableUsed = 9,
	CharacterEquippableChanged = 10,
	CharacterUltimateUsed = 11,
	All = 12,
	Count = 13,
	Invalid = 254,
	EGameFeatureConfigName_MAX = 255,
	EReplayEventGroup_MAX = 256
};

// Enum ShooterGame.EPauseStateCacheFlag
enum class EPauseStateCacheFlag : uint8 {
	NotSet = 0,
	Cleared = 1,
	RestorePlay = 2,
	RestorePause = 3,
	EPauseStateCacheFlag_MAX = 4
};

// Enum ShooterGame.EComboFFPhaseType
enum class EComboFFPhaseType : uint8 {
	Invalid = 0,
	GoToTimeCheckpoint = 1,
	GoToTimeFastForward = 2,
	TimeDilationCatchup = 3,
	EComboFFPhaseType_MAX = 4
};

// Enum ShooterGame.EReplayUIVisibilityOption
enum class EReplayUIVisibilityOption : uint8 {
	ToggleGameUIVisibility = 0,
	ToggleSightLines = 1,
	ToggleCombatReport = 2,
	TogglePlayerLoadout = 3,
	Count = 4,
	EReplayUIVisibilityOption_MAX = 5
};

// Enum ShooterGame.EReplicationSleepWhen
enum class EReplicationSleepWhen : uint8 {
	Never = 0,
	Timer = 1,
	OnRequest = 2,
	Count = 3,
	EReplicationSleepWhen_MAX = 4
};

// Enum ShooterGame.EReplicationSleepState
enum class EReplicationSleepState : uint8 {
	Awake = 0,
	GoingToSleep = 1,
	Asleep = 2,
	Count = 3,
	EReplicationSleepState_MAX = 4
};

// Enum ShooterGame.EActorEvent
enum class EActorEvent : uint8 {
	None = 0,
	Destroyed = 1,
	Killed = 2,
	Count = 3,
	EActorEvent_MAX = 4
};

// Enum ShooterGame.EActorCombination
enum class EActorCombination : uint8 {
	Any = 0,
	All = 1,
	Count = 2,
	EActorCombination_MAX = 3
};

// Enum ShooterGame.EEquipType
enum class EEquipType : uint8 {
	Equip = 0,
	Unequip = 1,
	AutoEquip = 2,
	Count = 3,
	EEquipType_MAX = 4
};

// Enum ShooterGame.EInfractionType
enum class EInfractionType : uint8 {
	Afk = 0,
	FriendlyFire = 1,
	TextAbuse = 2,
	VoiceAbuse = 3,
	Count = 4,
	EInfractionType_MAX = 5
};

// Enum ShooterGame.EInterventionType
enum class EInterventionType : uint8 {
	None = 0,
	AtRisk = 1,
	Active = 2,
	Count = 3,
	EInterventionType_MAX = 4
};

// Enum ShooterGame.ERMSNotifyEffectPenaltyEffectState
enum class ERMSNotifyEffectPenaltyEffectState : uint8 {
	PenaltyApplied = 0,
	PenaltyReverted = 1,
	PenaltyExpired = 2,
	Count = 3,
	ERMSNotifyEffectPenaltyEffectState_MAX = 4
};

// Enum ShooterGame.ERMSNotifyEffectRecipient
enum class ERMSNotifyEffectRecipient : uint8 {
	Self = 0,
	Teammates = 1,
	Opponents = 2,
	Count = 3,
	ERMSNotifyEffectRecipient_MAX = 4
};

// Enum ShooterGame.ERMSNotifyEffectIntervention
enum class ERMSNotifyEffectIntervention : uint8 {
	CommsMute10 = 0,
	CommsMute20 = 1,
	CommsMuteMatch = 2,
	Count = 3,
	ERMSNotifyEffectIntervention_MAX = 4
};

// Enum ShooterGame.ERMSNotifyEffectBehavior
enum class ERMSNotifyEffectBehavior : uint8 {
	CommsAbuse = 0,
	Count = 1,
	ERMSNotifyEffectBehavior_MAX = 2
};

// Enum ShooterGame.ERewardType
enum class ERewardType : uint8 {
	CHARACTER = 0,
	GUN_SKIN = 1,
	GUN_SKIN_LEVEL = 2,
	GUN_SKIN_CHROMA = 3,
	ATTACHMENT = 4,
	CARD = 5,
	BUDDY = 6,
	SPRAY = 7,
	TOTEM = 8,
	TITLE = 9,
	CURRENCY = 10,
	CONTRACT_XP = 11,
	JUICE_BOX = 12,
	OTHER = 13,
	ERewardType_MAX = 14
};

// Enum ShooterGame.ERewardAttributionSource
enum class ERewardAttributionSource : uint8 {
	NONE = 0,
	BATTLEPASS = 1,
	EVENT_PASS = 2,
	BTE = 3,
	AGENT_RECRUITMENT = 4,
	GENERAL_EVENT = 5,
	COUNT = 6,
	ERewardAttributionSource_MAX = 7
};

// Enum ShooterGame.ERewindState
enum class ERewindState : uint8 {
	NotRewound = 0,
	Rewound = 1,
	ERewindState_MAX = 2
};

// Enum ShooterGame.ERiotClientStatus
enum class ERiotClientStatus : uint8 {
	Restarting = 0,
	Disconnected = 1,
	WaitingForPlugins = 2,
	CheckingRegionLocale = 3,
	WaitingForLogin = 4,
	WaitingForChat = 5,
	RefreshingUserInfo = 6,
	WaitingForRMSSession = 7,
	DelayForSession = 8,
	Ready = 9,
	PendingQueryResult = 10,
	Error = 11,
	Count = 12,
	ERiotClientStatus_MAX = 13
};

// Enum ShooterGame.ERMSConnectionState
enum class ERMSConnectionState : uint8 {
	Connecting = 0,
	Connected = 1,
	Disconnecting = 2,
	Disconnected = 3,
	SwitchingServers = 4,
	Unknown = 5,
	ERMSConnectionState_MAX = 6
};

// Enum ShooterGame.ERNetConnectionStatus
enum class ERNetConnectionStatus : uint8 {
	Uninitialized = 0,
	Disconnecting = 1,
	Disconnected = 2,
	Connecting = 3,
	Connected = 4,
	Count = 5,
	ERNetConnectionStatus_MAX = 6
};

// Enum ShooterGame.ERNetProcessStatus
enum class ERNetProcessStatus : uint8 {
	Uninitialized = 0,
	Alive = 1,
	Terminated = 2,
	ERNetProcessStatus_MAX = 3
};

// Enum ShooterGame.ERNetEventType
enum class ERNetEventType : uint8 {
	Create = 0,
	Update = 1,
	Delete = 2,
	Invalid = 3,
	ERNetEventType_MAX = 4
};

// Enum ShooterGame.ERiotClientHeartbeatPhase
enum class ERiotClientHeartbeatPhase : uint8 {
	None = 0,
	Idle = 1,
	Gameplay = 2,
	Pending = 3,
	ERiotClientHeartbeatPhase_MAX = 4
};

// Enum ShooterGame.EVoiceSpeakingChannelSettingValue
enum class EVoiceSpeakingChannelSettingValue : uint8 {
	TeamChat = 0,
	PartyChat = 1,
	Count = 2,
	EVoiceSpeakingChannelSettingValue_MAX = 3
};

// Enum ShooterGame.EChannelMuteReason
enum class EChannelMuteReason : uint8 {
	None = 0,
	ClutchMute = 1,
	MuteForMatchDuration = 2,
	LoadingScreen = 4,
	EChannelMuteReason_MAX = 5
};

// Enum ShooterGame.ERoundPersistenceBehavior
enum class ERoundPersistenceBehavior : uint8 {
	DoNothing = 0,
	Destroy = 1,
	Persist = 2,
	PersistIfOwnerAlive = 3,
	ERoundPersistenceBehavior_MAX = 4
};

// Enum ShooterGame.EGameplayPersistenceBehavior
enum class EGameplayPersistenceBehavior : uint8 {
	DoNothing = 0,
	Destroy = 1,
	DestroyWithDamage = 2,
	CosmeticAwareDestroy = 3,
	EGameplayPersistenceBehavior_MAX = 4
};

// Enum ShooterGame.EAresMinimapPositionSpace
enum class EAresMinimapPositionSpace : uint8 {
	AMPS_World = 0,
	AMPS_WorldClamped = 1,
	AMPS_Minimap = 2,
	AMPS_Screen = 3,
	AMSS_None = 4,
	EAresMinimapPositionSpace_MAX = 5
};

// Enum ShooterGame.EAresMinimapSizeSpace
enum class EAresMinimapSizeSpace : uint8 {
	AMSS_World = 0,
	AMSS_Screen = 1,
	AMSS_ConstantScreen = 2,
	AMSS_Minimap = 3,
	AMSS_None = 4,
	AMSS_MAX = 5
};

// Enum ShooterGame.EAresMinimapRotationSpace
enum class EAresMinimapRotationSpace : uint8 {
	AMRS_World = 0,
	AMRS_Minimap = 1,
	AMRS_ConstantMinimap = 2,
	AMRS_Outward = 3,
	AMRS_None = 4,
	AMRS_MAX = 5
};

// Enum ShooterGame.EAresMinimapLayer
enum class EAresMinimapLayer : uint8 {
	AML_Map = 0,
	AML_MapVolumes = 1,
	AML_Footsteps = 2,
	AML_VisionCones = 3,
	AML_MapIcons = 4,
	AML_Callouts = 5,
	AML_AbilityIcons = 6,
	AML_BombIcons = 7,
	AML_PlayerIcons = 8,
	AML_Targeting = 9,
	AML_ControlPrompts = 10,
	AML_Overlay = 11,
	Count = 12,
	EAresMinimapLayer_MAX = 13
};

// Enum ShooterGame.EAresSeasonType
enum class EAresSeasonType : uint8 {
	Episode = 0,
	Act = 1,
	Invalid = 2,
	Count = 3,
	EAresSeasonType_MAX = 4
};

// Enum ShooterGame.EAbilityUsageEventType
enum class EAbilityUsageEventType : uint8 {
	CombatReport = 0,
	Telemetry = 1,
	Count = 2,
	EAbilityUsageEventType_MAX = 3
};

// Enum ShooterGame.EAbilityUsageLocationType
enum class EAbilityUsageLocationType : uint8 {
	CastLocation = 0,
	WallSegmentsSage = 1,
	ProjectileStopLocations = 2,
	YoruCloneStopLocation = 3,
	CastAndTargetLocations = 4,
	EAbilityUsageLocationType_MAX = 5
};

// Enum ShooterGame.EPlayerTelemetryDisconnectOutcome
enum class EPlayerTelemetryDisconnectOutcome : uint8 {
	Reconnected = 0,
	DidNotReturn = 1,
	Count = 2,
	EPlayerTelemetryDisconnectOutcome_MAX = 3
};

// Enum ShooterGame.ENPECheckpointStatus
enum class ENPECheckpointStatus : uint8 {
	Started = 0,
	Completed = 1,
	Abandoned = 2,
	ENPECheckpointStatus_MAX = 3
};

// Enum ShooterGame.ERewindTimestampSource
enum class ERewindTimestampSource : uint8 {
	Equippable = 0,
	Movement = 1,
	Manual = 2,
	ERewindTimestampSource_MAX = 3
};

// Enum ShooterGame.ECoachMessageType
enum class ECoachMessageType : uint8 {
	Pregame = 0,
	InGame = 1,
	ECoachMessageType_MAX = 2
};

// Enum ShooterGame.EAresRadialCheckType
enum class EAresRadialCheckType : uint8 {
	SimpleRangeCheck = 0,
	SimpleRangeCheck2D = 1,
	CollisionRangeCheck = 2,
	Count = 3,
	EAresRadialCheckType_MAX = 4
};

// Enum ShooterGame.EAresLineOfSightCheckType
enum class EAresLineOfSightCheckType : uint8 {
	NoLineOfSightCheck = 0,
	RequireLineOfSight = 1,
	RequireReverseLineOfSight = 2,
	EAresLineOfSightCheckType_MAX = 3
};

// Enum ShooterGame.EAresShooterCharacterSearchType
enum class EAresShooterCharacterSearchType : uint8 {
	DontFindShooterCharacters = 0,
	FindShooterCharacters = 1,
	EAresShooterCharacterSearchType_MAX = 2
};

// Enum ShooterGame.EAresGameObjectSearchType
enum class EAresGameObjectSearchType : uint8 {
	DontFindGameObjects = 0,
	FindGameObjects = 1,
	EAresGameObjectSearchType_MAX = 2
};

// Enum ShooterGame.EAresProjectileSearchType
enum class EAresProjectileSearchType : uint8 {
	DontFindProjectiles = 0,
	FindProjectiles = 1,
	EAresProjectileSearchType_MAX = 2
};

// Enum ShooterGame.EAresConeAngleCheckType
enum class EAresConeAngleCheckType : uint8 {
	TwoDimensional = 0,
	ThreeDimensional = 1,
	EAresConeAngleCheckType_MAX = 2
};

// Enum ShooterGame.EAresActorVisibilityTarget
enum class EAresActorVisibilityTarget : uint8 {
	CenterMass = 0,
	Head = 1,
	Feet = 2,
	LeftEdge = 3,
	RightEdge = 4,
	LookVector = 5,
	EAresActorVisibilityTarget_MAX = 6
};

// Enum ShooterGame.EThrottleOutputPins
enum class EThrottleOutputPins : uint8 {
	Allowed = 0,
	Throttled = 1,
	EThrottleOutputPins_MAX = 2
};

// Enum ShooterGame.EAresDeathCamFocusPoint
enum class EAresDeathCamFocusPoint : uint8 {
	Body = 0,
	Killer = 1,
	EAresDeathCamFocusPoint_MAX = 2
};

// Enum ShooterGame.EShooterCharacterCameraState
enum class EShooterCharacterCameraState : uint8 {
	FollowRecoilCamera = 0,
	CustomCamera = 1,
	DeathCamera = 2,
	SettledDeathCamera = 3,
	InvalidViewTarget = 4,
	Count = 5,
	EShooterCharacterCameraState_MAX = 6
};

// Enum ShooterGame.EShooterCharacterDebugCameraMode
enum class EShooterCharacterDebugCameraMode : uint8 {
	None = 0,
	ThirdPersonDebugCamera = 1,
	ThirdPersonDebugCameraWithFirstPersonMesh = 2,
	Count = 3,
	EShooterCharacterDebugCameraMode_MAX = 4
};

// Enum ShooterGame.DebugTeleportMode
enum class DebugTeleportMode : uint8 {
	Nearest = 0,
	NearestFriend = 1,
	NearestEnemy = 2,
	Location = 3,
	DebugTeleportMode_MAX = 4
};

// Enum ShooterGame.EDebugCharacterCapsule
enum class EDebugCharacterCapsule : uint8 {
	None = 0,
	TP_Only = 1,
	TP_And_1P = 2,
	Count = 3,
	EDebugCharacterCapsule_MAX = 4
};

// Enum ShooterGame.EHitRegDiscrepancyType
enum class EHitRegDiscrepancyType : uint8 {
	NoDiscrepancy = 0,
	CharactersHit = 1,
	BonesHit = 2,
	FiringLocation = 3,
	FiringDirection = 4,
	InitialImpactLocation = 5,
	Count = 6,
	Any = 253,
	Invalid = 254,
	EHitRegDiscrepancyType_MAX = 255
};

// Enum ShooterGame.EAresMovementCardinalDirections
enum class EAresMovementCardinalDirections : uint8 {
	Forward = 0,
	Backward = 1,
	Strafe = 2,
	Count = 3,
	EAresMovementCardinalDirections_MAX = 4
};

// Enum ShooterGame.EAresMovementDirections
enum class EAresMovementDirections : uint8 {
	Forward = 0,
	ForwardStrafe = 1,
	Strafe = 2,
	BackwardStrafe = 3,
	Backward = 4,
	None = 5,
	Count = 6,
	EAresMovementDirections_MAX = 7
};

// Enum ShooterGame.EMovementTimingType
enum class EMovementTimingType : uint8 {
	None = 0,
	Move = 1,
	Interpolation = 2,
	ForwardPrediction = 3,
	Count = 4,
	Green = 2,
	EMovementTimingType_MAX = 5
};

// Enum ShooterGame.ENetMoveMode
enum class ENetMoveMode : uint8 {
	PlaybackClientMove = 0,
	ForwardPredict = 1,
	Count = 2,
	ENetMoveMode_MAX = 3
};

// Enum ShooterGame.EDebugMoveHistoryQueues
enum class EDebugMoveHistoryQueues : uint8 {
	None = 0,
	RemoteClients = 1,
	AutonomousOnServer = 2,
	Count = 3,
	EDebugMoveHistoryQueues_MAX = 4
};

// Enum ShooterGame.EDebugVTSHeartbeatQueues
enum class EDebugVTSHeartbeatQueues : uint8 {
	None = 0,
	RemoteClients = 1,
	AutonomousOnServer = 2,
	Count = 3,
	EDebugVTSHeartbeatQueues_MAX = 4
};

// Enum ShooterGame.EAresDamageCategory
enum class EAresDamageCategory : uint8 {
	DamageCategory_Ballistic = 0,
	DamageCategory_Explosive = 1,
	DamageCategory_Fall = 2,
	DamageCategory_Internal = 3,
	DamageCategory_ExternalZone = 4,
	DamageCategory_Invalid = 254,
	EAresDamageCategory_MAX = 255
};

// Enum ShooterGame.EAresDamageIndicationType
enum class EAresDamageIndicationType : uint8 {
	PrioritizeInstigator = 0,
	PrioritizeDamageCauser = 1,
	EAresDamageIndicationType_MAX = 2
};

// Enum ShooterGame.EAresDamageAnimationCategory
enum class EAresDamageAnimationCategory : uint8 {
	DamageAnimation_Normal = 0,
	DamageAnimation_Count = 1,
	DamageAnimation_Invalid = 254,
	EAresDamageAnimationCategory_MAX = 255
};

// Enum ShooterGame.EAresHitIndicatorDisplayType
enum class EAresHitIndicatorDisplayType : uint8 {
	AlwaysShowHitIndicator = 0,
	NeverShowHitIndicator = 1,
	Count = 2,
	EAresHitIndicatorDisplayType_MAX = 3
};

// Enum ShooterGame.EAresHitSoundPlayType
enum class EAresHitSoundPlayType : uint8 {
	AlwaysPlayHitSound = 0,
	NeverPlayHitSound = 1,
	Count = 2,
	EAresHitSoundPlayType_MAX = 3
};

// Enum ShooterGame.EHUDGlobalsScreenType
enum class EHUDGlobalsScreenType : uint8 {
	Count = 0,
	EHUDGlobalsScreenType_MAX = 1
};

// Enum ShooterGame.EUIGlobalsScreenType
enum class EUIGlobalsScreenType : uint8 {
	SettingsScreen = 0,
	ExitGameScreen = 1,
	Count = 2,
	EUIGlobalsScreenType_MAX = 3
};

// Enum ShooterGame.EFrontendUIGlobalsScreenType
enum class EFrontendUIGlobalsScreenType : uint8 {
	MainMenu = 0,
	Pregame = 1,
	Welcome = 2,
	Count = 3,
	EFrontendUIGlobalsScreenType_MAX = 4
};

// Enum ShooterGame.ESpawnPointAllowedInfo
enum class ESpawnPointAllowedInfo : uint8 {
	None = 0,
	Allowed = 1,
	Disabled = 2,
	PendingKill = 3,
	NotAlly = 4,
	IncorrectSpawnSet = 5,
	InvalidPoint = 6,
	BotOrPlayerNotAllowed = 7,
	Count = 8,
	ESpawnPointAllowedInfo_MAX = 9
};

// Enum ShooterGame.EGameModeSublevelKey
enum class EGameModeSublevelKey : uint8 {
	None = 0,
	BombMode = 1,
	ShootingRange = 2,
	Tutorial = 3,
	AltMode1 = 4,
	AltMode2 = 5,
	AltMode3 = 6,
	AltMode4 = 7,
	AltMode5 = 8,
	AltMode6 = 9,
	AltMode7 = 10,
	AltMode8 = 11,
	AltMode9 = 12,
	AltMode10 = 13,
	AltMode11 = 14,
	AltMode12 = 15,
	AltMode13 = 16,
	AltMode14 = 17,
	AltMode15 = 18,
	DynamicSpawnPoints = 19,
	TeamSpawnPoints = 20,
	StandardGeoAndLighting = 21,
	Snowball = 22,
	BotsEnabled = 23,
	Count = 24,
	EGameModeSublevelKey_MAX = 25
};

// Enum ShooterGame.EBlockedSpawnPointBehavior
enum class EBlockedSpawnPointBehavior : uint8 {
	Discard = 0,
	Include = 1,
	AddToListEnd = 2,
	EBlockedSpawnPointBehavior_MAX = 3
};

// Enum ShooterGame.ECharacterColorationScheme
enum class ECharacterColorationScheme : uint8 {
	CharacterColors_TeamRelative = 0,
	CharacterColors_TeamAbsolute = 1,
	CharacterColors_AlwaysRedEnemy = 2,
	CharacterColors_AlwaysBlueAlly = 3,
	CharacterColors_COUNT = 4,
	CharacterColors_MAX = 5
};

// Enum ShooterGame.EShooterHUDWidgetCategory
enum class EShooterHUDWidgetCategory : uint8 {
	AbilityBar = 0,
	AbilitySpecificUI = 1,
	AbilityUpperKeybinds = 2,
	AbilityLowerKeybinds = 3,
	Health = 4,
	Ammo = 5,
	StatusEffects = 6,
	Minimap = 7,
	Announcements = 8,
	KillFeed = 9,
	KillBanners = 10,
	TopBar = 11,
	RoundTimer = 12,
	Econ = 13,
	WeaponInventory = 14,
	Chat = 15,
	UsablePrompts = 16,
	ClientInfo = 17,
	Spectator = 18,
	InWorldCharacterInfo = 19,
	CombatReport = 20,
	Pings = 21,
	StanceIndicator = 22,
	Replays = 23,
	UsableIcons = 24,
	UsableHighlights = 25,
	WeaponGlow = 26,
	All = 27,
	Count = 28,
	None = 29,
	EShooterHUDWidgetCategory_MAX = 30
};

// Enum ShooterGame.EDebugMessagePosition
enum class EDebugMessagePosition : uint8 {
	TopLeft = 0,
	TopRight = 1,
	BottomLeft = 2,
	MiddleRight = 3,
	Default = 0,
	EDebugMessagePosition_MAX = 4
};

// Enum ShooterGame.EDebugMessageOptionFlags
enum class EDebugMessageOptionFlags : uint8 {
	None = 0,
	ReliableSend = 1,
	WriteToLog = 2,
	EDebugMessageOptionFlags_MAX = 3
};

// Enum ShooterGame.EIconJustification
enum class EIconJustification : uint8 {
	TopLeft = 0,
	Centered = 1,
	EIconJustification_MAX = 2
};

// Enum ShooterGame.EDebugSubscription
enum class EDebugSubscription : uint8 {
	ServerActorTickTime = 0,
	ServerClassTickTime = 1,
	ReplicationOverview = 2,
	ReplicatingItems = 3,
	ServerSkeletalMeshTickTime = 4,
	ServerObjects = 5,
	PendingKillServerObjects = 6,
	ServerClassTickCounts = 7,
	ServerMemory = 8,
	ServerNetworkStats = 9,
	ForceNetUpdateOverview = 10,
	ReplicationTime = 11,
	StatSubsystems = 12,
	Count = 13,
	EDebugSubscription_MAX = 14
};

// Enum ShooterGame.EPlayerDisconnectReason
enum class EPlayerDisconnectReason : uint8 {
	Unknown = 0,
	ManualQuit = 1,
	WindowClosed = 2,
	PlatformFault = 3,
	NetworkFailure = 4,
	ClientCrash = 5,
	Count = 6,
	EPlayerDisconnectReason_MAX = 7
};

// Enum ShooterGame.EReconnectTelemetryType
enum class EReconnectTelemetryType : uint8 {
	Basic = 0,
	NetworkFailure = 1,
	ClientCrash = 2,
	Count = 3,
	EReconnectTelemetryType_MAX = 4
};

// Enum ShooterGame.EVisualizeSurfacesFilter
enum class EVisualizeSurfacesFilter : uint8 {
	Weapon = 0,
	Player = 1,
	EVisualizeSurfacesFilter_MAX = 2
};

// Enum ShooterGame.EGamepadWeaponSwapMode
enum class EGamepadWeaponSwapMode : uint8 {
	PressToCycle = 0,
	TapForSecondary = 1,
	TapForMelee = 2,
	EGamepadWeaponSwapMode_MAX = 3
};

// Enum ShooterGame.EGamepadHoldInputMode
enum class EGamepadHoldInputMode : uint8 {
	SwapHeldWeapon = 0,
	DropHeldWeapon = 1,
	ShopHeldOpen = 2,
	UseHeld = 3,
	MapHeld = 4,
	SprayHeld = 5,
	EGamepadHoldInputMode_MAX = 6
};

// Enum ShooterGame.EReflexLowLatencyMode
enum class EReflexLowLatencyMode : uint8 {
	Off = 0,
	Enabled = 1,
	Boost = 3,
	EReflexLowLatencyMode_MAX = 4
};

// Enum ShooterGame.ESpawnRestriction
enum class ESpawnRestriction : uint8 {
	None = 0,
	PlayerOnly = 1,
	NonPlayerBotOnly = 2,
	ESpawnRestriction_MAX = 3
};

// Enum ShooterGame.EAresImpactEffectHitspace
enum class EAresImpactEffectHitspace : uint8 {
	ShooterPerspective = 0,
	VictimPerspective = 1,
	ThirdPersonPerspective = 2,
	NUM_HITSPACES = 3,
	EAresImpactEffectHitspace_MAX = 4
};

// Enum ShooterGame.EAresParamType
enum class EAresParamType : uint8 {
	Scalar = 0,
	Vector = 1,
	Attachments = 2,
	Count = 3,
	Invalid = 254,
	EAresParamType_MAX = 255
};

// Enum ShooterGame.EAresRoundOutcome
enum class EAresRoundOutcome : uint8 {
	Elimination = 0,
	Defuse = 1,
	Detonate = 2,
	TimeExpired = 3,
	Cheat = 4,
	Surrendered = 5,
	RoundOutcome_Count = 6,
	Invalid = 7,
	EAresRoundOutcome_MAX = 8
};

// Enum ShooterGame.EAresOrientation
enum class EAresOrientation : uint8 {
	AresOrientation_Front = 0,
	AresOrientation_Back = 1,
	AresOrientation_Left = 2,
	AresOrientation_Right = 3,
	AresOrientation_Count = 4,
	AresOrientation_Invalid = 254,
	AresOrientation_MAX = 255
};

// Enum ShooterGame.EAresTeamRoundResult
enum class EAresTeamRoundResult : uint8 {
	Win = 0,
	Loss = 1,
	Tie = 2,
	EAresTeamRoundResult_MAX = 3
};

// Enum ShooterGame.ERoundKills
enum class ERoundKills : uint8 {
	None = 0,
	Single = 1,
	Double = 2,
	Triple = 3,
	Quadra = 4,
	Penta = 5,
	Overkill = 6,
	Count = 7,
	ERoundKills_MAX = 8
};

// Enum ShooterGame.EAresProgressionType
enum class EAresProgressionType : uint8 {
	Money = 0,
	XP = 1,
	Energy = 2,
	Count = 3,
	EAresProgressionType_MAX = 4
};

// Enum ShooterGame.EAresTeamTargeting
enum class EAresTeamTargeting : uint8 {
	TeamTargeting_ApplyToEveryone = 0,
	TeamTargeting_ApplyToFriends = 1,
	TeamTargeting_ApplyToEnemies = 2,
	TeamTargeting_ApplyToSelfAndEnemies = 3,
	TeamTargeting_ApplyToNoone = 4,
	TeamTargeting_Count = 5,
	TeamTargeting_MAX = 6
};

// Enum ShooterGame.EAresBombStates
enum class EAresBombStates : uint8 {
	AresBombState_NotSpawned = 0,
	AresBombState_Spawned = 1,
	AresBombState_OnGround = 2,
	AresBombState_InHands = 3,
	AresBombState_Planted = 4,
	AresBombState_Exploded = 5,
	AresBombState_Defused = 6,
	AresBombState_Count = 7,
	AresBombState_MAX = 8
};

// Enum ShooterGame.EMegamapCalloutsVisibility
enum class EMegamapCalloutsVisibility : uint8 {
	NeverVisible = 0,
	VisibleInPreRound = 1,
	AlwaysVisible = 2,
	Count = 3,
	EMegamapCalloutsVisibility_MAX = 4
};

// Enum ShooterGame.CharacterRange
enum class CharacterRange : uint8 {
	None = 0,
	Short = 1,
	Medium = 2,
	Long = 3,
	Count = 4,
	CharacterRange_MAX = 5
};

// Enum ShooterGame.EAresBodySection
enum class EAresBodySection : uint8 {
	BodySection_Torso = 0,
	BodySection_Head = 1,
	BodySection_LeftArm = 2,
	BodySection_LowerLeftArm = 3,
	BodySection_RightArm = 4,
	BodySection_LowerRightArm = 5,
	BodySection_LeftLeg = 6,
	BodySection_RightLeg = 7,
	BodySection_Count = 8,
	BodySection_Invalid = 254,
	EAresBodySection_MAX = 255
};

// Enum ShooterGame.EAresCoordinateSpace
enum class EAresCoordinateSpace : uint8 {
	WorldSpace = 0,
	PlayerSpace = 1,
	EAresCoordinateSpace_MAX = 2
};

// Enum ShooterGame.EAresEquippableAfterUseType
enum class EAresEquippableAfterUseType : uint8 {
	DoNothing = 0,
	EquipFirstWeapon = 1,
	EquipLastEquippedWeapon = 2,
	Count = 3,
	EAresEquippableAfterUseType_MAX = 4
};

// Enum ShooterGame.EAresInterpolationFunction
enum class EAresInterpolationFunction : uint8 {
	Linear = 0,
	Logarithmic = 1,
	EaseIn = 2,
	EaseOut = 3,
	EaseInEaseOut = 4,
	EAresInterpolationFunction_MAX = 5
};

// Enum ShooterGame.EAresAutomationInput
enum class EAresAutomationInput : uint8 {
	PrimaryTrigger = 0,
	SecondaryTrigger = 1,
	Reload = 2,
	ZoomToggle = 3,
	FirstEquipInput = 4,
	EquipPrimary = 4,
	EquipSecondary = 5,
	EquipMelee = 6,
	EquipGrenade = 7,
	EquipQ = 8,
	EquipE = 9,
	EquipUltimate = 10,
	EquipTotem = 11,
	LastEquipInput = 11,
	Count = 12,
	EAresAutomationInput_MAX = 13
};

// Enum ShooterGame.EAresSurfaceType
enum class EAresSurfaceType : uint8 {
	Default = 0,
	Concrete = 1,
	Dirt = 2,
	Gravel = 3,
	Water = 4,
	Metal = 5,
	Wood = 6,
	Grass = 7,
	Glass = 8,
	Flesh = 9,
	Snow = 10,
	MetalThin = 11,
	BrokenGlass = 12,
	Impenetrable = 13,
	Linoleum = 14,
	BubbleCage = 15,
	MetalNonResonant = 16,
	CarpetOnWood = 17,
	MetalPipe = 18,
	ConcretePuddle = 19,
	GarbageBag = 20,
	Thorns = 21,
	Sand = 22,
	Mud = 23,
	Tree = 24,
	Ice = 25,
	ShootinRangeTarget = 26,
	Cloth = 27,
	CobbleStone = 28,
	CeramicTile = 29,
	CarpetOnConcrete = 30,
	EtherGlass = 31,
	CosmicFabric = 32,
	GoldenRipple = 33,
	PlasticHollow = 34,
	Shield = 35,
	Count = 36,
	EAresSurfaceType_MAX = 37
};

// Enum ShooterGame.EAresHitImpactParticleOrientation
enum class EAresHitImpactParticleOrientation : uint8 {
	Direction = 0,
	ReverseDirection = 1,
	Normal = 2,
	None = 3,
	Count = 4,
	EAresHitImpactParticleOrientation_MAX = 5
};

// Enum ShooterGame.EDecalFadeType
enum class EDecalFadeType : uint8 {
	FadeOutAfterDisplayDuration = 0,
	FadeOutAtEndOfRound = 1,
	Count = 2,
	EDecalFadeType_MAX = 3
};

// Enum ShooterGame.EAresPlayerIntentionType
enum class EAresPlayerIntentionType : uint8 {
	Rush = 0,
	Sneak = 1,
	Hold = 2,
	Distract = 3,
	Count = 4,
	EAresPlayerIntentionType_MAX = 5
};

// Enum ShooterGame.EAresGameReward
enum class EAresGameReward : uint8 {
	Experience_Deprecated = 0,
	Money = 1,
	Energy = 2,
	Health = 3,
	SignatureAbilityPoints = 4,
	UltimatePoints = 5,
	AbilityCharges = 6,
	Gear = 7,
	Experience = 8,
	NUM_REWARDS = 9,
	EAresGameReward_MAX = 10
};

// Enum ShooterGame.EAresRewardShouldIncrementInstances
enum class EAresRewardShouldIncrementInstances : uint8 {
	IncrementInstances = 0,
	DontIncrementInstances = 1,
	Count = 2,
	EAresRewardShouldIncrementInstances_MAX = 3
};

// Enum ShooterGame.EAresSearchVisibilityType
enum class EAresSearchVisibilityType : uint8 {
	FindInvisibleUnits = 0,
	DontFindInvisibleUnits = 1,
	Count = 2,
	EAresSearchVisibilityType_MAX = 3
};

// Enum ShooterGame.EEnemyVisibilityOption
enum class EEnemyVisibilityOption : uint8 {
	Always = 0,
	Never = 1,
	LineOfSight = 2,
	Count = 3,
	EEnemyVisibilityOption_MAX = 4
};

// Enum ShooterGame.EUsablePriority
enum class EUsablePriority : uint8 {
	Cosmetic = 0,
	Door = 1,
	ItemPickup = 2,
	Default = 3,
	High = 4,
	Critical = 5,
	EUsablePriority_MAX = 6
};

// Enum ShooterGame.ECharacterSelectAnimationState
enum class ECharacterSelectAnimationState : uint8 {
	CharacterSelectAnimationState_Selected = 0,
	CharacterSelectAnimationState_LockedIn = 1,
	CharacterSelectAnimationState_Idle = 2,
	CharacterSelectAnimationState_BackgroundSelected = 3,
	CharacterSelectAnimationState_BackgroundLockedIn = 4,
	CharacterSelectAnimationState_GameStarting = 5,
	CharacterSelectAnimationState_BackgroundGameStarting = 6,
	CharacterSelectAnimationState_Count = 7,
	CharacterSelectAnimationState_MAX = 8
};

// Enum ShooterGame.EEquippableAnimationCategory
enum class EEquippableAnimationCategory : uint8 {
	EquippableAnimationCategory_Pistol = 0,
	EquippableAnimationCategory_AssaultRifle = 1,
	EquippableAnimationCategory_Shotgun = 2,
	EquippableAnimationCategory_SniperRifle = 3,
	EquippableAnimationCategory_SubmachineGun = 4,
	EquippableAnimationCategory_LightMachineGun = 5,
	EquippableAnimationCategory_Grenade = 6,
	EquippableAnimationCategory_Shield = 7,
	EquippableAnimationCategory_Bomb = 8,
	EquippableAnimationCategory_Melee = 9,
	EquippableAnimationCategory_Bandage = 10,
	EquippableAnimationCategory_AbilityQ = 11,
	EquippableAnimationCategory_AbilityE = 12,
	EquippableAnimationCategory_AbilityGrenade = 13,
	EquippableAnimationCategory_AbilityUltimate = 14,
	EquippableAnimationCategory_WeaponTypeTest1 = 15,
	EquippableAnimationCategory_WeaponTest2 = 16,
	EquippableAnimationCategory_AbilityTest1 = 17,
	EquippableAnimationCategory_AbilityTest2 = 18,
	EquippableAnimationCategory_Drone_Object = 19,
	EquippableAnimationCategory_Drone_Remote = 20,
	EquippableAnimationCategory_Count = 21,
	EquippableAnimationCategory_MAX = 22
};

// Enum ShooterGame.EUIChannel
enum class EUIChannel : uint8 {
	GameDriven = 0,
	UserDriven = 1,
	Chat = 2,
	Count = 3,
	Invalid = 254,
	EUIChannel_MAX = 255
};

// Enum ShooterGame.EUIScreen
enum class EUIScreen : uint8 {
	LoginUI = 0,
	Chat = 1,
	MapTargetting = 2,
	Count = 3,
	EUIScreen_MAX = 4
};

// Enum ShooterGame.EAllowedGameInputBlueprintBitMask
enum class EAllowedGameInputBlueprintBitMask : uint8 {
	Movement = 0,
	Aiming = 1,
	ItemUsing = 2,
	Abilities = 3,
	WorldUsing = 4,
	EAllowedGameInputBlueprintBitMask_MAX = 5
};

// Enum ShooterGame.EIsRefundable
enum class EIsRefundable : uint8 {
	Yes = 0,
	No = 1,
	EIsRefundable_MAX = 2
};

// Enum ShooterGame.EAresDisplayMode
enum class EAresDisplayMode : uint8 {
	Fullscreen = 0,
	WindowedFullscreen = 1,
	Windowed = 2,
	Count = 3,
	EAresDisplayMode_MAX = 4
};

// Enum ShooterGame.EAresColorBlindMode
enum class EAresColorBlindMode : uint8 {
	Disabled = 0,
	Tritanopia = 1,
	Deuteranopia = 2,
	Protanopia = 3,
	Count = 4,
	EAresColorBlindMode_MAX = 5
};

// Enum ShooterGame.EPersistInventoryMode
enum class EPersistInventoryMode : uint8 {
	PersistRoundPersistentPurchasables = 0,
	PersistAllPurchasables = 1,
	PersistInventoryMode_Count = 2,
	EPersistInventoryMode_MAX = 3
};

// Enum ShooterGame.EMinimapVisibleReason
enum class EMinimapVisibleReason : uint8 {
	ObserverToggle = 0,
	Megamap = 1,
	MapTargetting = 2,
	Count = 3,
	EMinimapVisibleReason_MAX = 4
};

// Enum ShooterGame.EShopScreenInitOption
enum class EShopScreenInitOption : uint8 {
	Menu = 0,
	Popup = 1,
	Count = 2,
	EShopScreenInitOption_MAX = 3
};

// Enum ShooterGame.ESideScreenCloseButtonType
enum class ESideScreenCloseButtonType : uint8 {
	CornerButton = 0,
	BottomButton = 1,
	ESideScreenCloseButtonType_MAX = 2
};

// Enum ShooterGame.EProjectileMoveState
enum class EProjectileMoveState : uint8 {
	Moving = 0,
	Stopped = 1,
	Count = 2,
	EProjectileMoveState_MAX = 3
};

// Enum ShooterGame.ESkinUpgradeState
enum class ESkinUpgradeState : uint8 {
	SUS_NEVER_UPGRADEABLE = 0,
	SUS_SKIN_NOT_OWNED = 1,
	SUS_FULLY_UPGRADED = 2,
	SUS_UPGRADE_NOT_AFFORDABLE = 3,
	SUS_UPGRADE_AVAILABLE = 4,
	SUS_UPGRADE_UNLOCKED = 5,
	SUS_UPGRADE_REQUIREMENTS_NOT_MET = 6,
	SUS_VARIANT_AVAILABLE = 7,
	SUS_VARIANT_UNLOCKED = 8,
	SUS_VARIANT_REQUIREMENTS_NOT_MET = 9,
	SUS_SELECT_VARIANT = 10,
	SUS_VARIANT_NOT_AFFORDABLE = 11,
	SUS_DISABLED = 12,
	SUS_NONE = 13,
	SUS_MAX = 14
};

// Enum ShooterGame.ESniperCrosshairMaterialType
enum class ESniperCrosshairMaterialType : uint8 {
	Static = 0,
	CenterDot = 1,
	ESniperCrosshairMaterialType_MAX = 2
};

// Enum ShooterGame.ESocialContainerButtonMouseTarget
enum class ESocialContainerButtonMouseTarget : uint8 {
	ContainerButton = 0,
	ChildContent = 1,
	ESocialContainerButtonMouseTarget_MAX = 2
};

// Enum ShooterGame.EAresIdentityDisplay
enum class EAresIdentityDisplay : uint8 {
	Default = 0,
	Alternative1 = 1,
	Alternative2 = 2,
	Alternative3 = 3,
	Alternative4 = 4,
	Alternative_P = 5,
	EAresIdentityDisplay_MAX = 6
};

// Enum ShooterGame.EAresFriendshipMatch
enum class EAresFriendshipMatch : uint8 {
	NoMatch = 0,
	PartialMatch = 1,
	ExactMatch = 2,
	EAresFriendshipMatch_MAX = 3
};

// Enum ShooterGame.EAresSocialTriggerMode
enum class EAresSocialTriggerMode : uint8 {
	Friend = 0,
	Party = 1,
	EAresSocialTriggerMode_MAX = 2
};

// Enum ShooterGame.EAresSocialPartyMessageResponse
enum class EAresSocialPartyMessageResponse : uint8 {
	None = 0,
	Accept = 1,
	Decline = 2,
	EAresSocialPartyMessageResponse_MAX = 3
};

// Enum ShooterGame.EAresSocialRosterInviteResponse
enum class EAresSocialRosterInviteResponse : uint8 {
	None = 0,
	Accept = 1,
	Decline = 2,
	EAresSocialRosterInviteResponse_MAX = 3
};

// Enum ShooterGame.EAresSocialPartyErrorSource
enum class EAresSocialPartyErrorSource : uint8 {
	General = 0,
	InviteToParty = 1,
	RequestToJoinParty = 2,
	JoinParty = 3,
	EAresSocialPartyErrorSource_MAX = 4
};

// Enum ShooterGame.ESocialIntegrationPlatform
enum class ESocialIntegrationPlatform : uint8 {
	Invalid = 0,
	QQ = 1,
	Count = 2,
	ESocialIntegrationPlatform_MAX = 3
};

// Enum ShooterGame.ESocialPanelTabBarOrientation
enum class ESocialPanelTabBarOrientation : uint8 {
	Horizontal = 0,
	Vertical = 1,
	ESocialPanelTabBarOrientation_MAX = 2
};

// Enum ShooterGame.ESocialPanelPartyListCategory
enum class ESocialPanelPartyListCategory : uint8 {
	LocalPlayerParty = 0,
	InValSamePlatform = 1,
	ESocialPanelPartyListCategory_MAX = 2
};

// Enum ShooterGame.ESocialPanelPlayerSecondaryDetail
enum class ESocialPanelPlayerSecondaryDetail : uint8 {
	None = 0,
	EditFriendNote = 1,
	PartyDetails = 2,
	ESocialPanelPlayerSecondaryDetail_MAX = 3
};

// Enum ShooterGame.ESocialPanelPlayerListPresenceCategory
enum class ESocialPanelPlayerListPresenceCategory : uint8 {
	OnlineValSamePlatform = 0,
	OnlineOtherGame = 1,
	OnlineNoProduct = 2,
	Offline = 3,
	ESocialPanelPlayerListPresenceCategory_MAX = 4
};

// Enum ShooterGame.ESocialPanelCategory
enum class ESocialPanelCategory : uint8 {
	Invalid = 0,
	Online = 1,
	Offline = 2,
	Favorite = 3,
	OtherGame = 4,
	Count = 5,
	ESocialPanelCategory_MAX = 6
};

// Enum ShooterGame.EAresSocialPlayerCategory
enum class EAresSocialPlayerCategory : uint8 {
	Invalid = 0,
	OnlineInParty = 1,
	OnlineInOtherGame = 2,
	Offline = 3,
	Temp_P = 4,
	Hidden = 5,
	Count = 6,
	EAresSocialPlayerCategory_MAX = 7
};

// Enum ShooterGame.ESocialViewControllerUpdatePolicy
enum class ESocialViewControllerUpdatePolicy : uint8 {
	Unlimited = 0,
	Scheduled = 1,
	Never = 2,
	ESocialViewControllerUpdatePolicy_MAX = 3
};

// Enum ShooterGame.ESplineMovementSpeedUnit
enum class ESplineMovementSpeedUnit : uint8 {
	WorldUnitsPerSecond = 0,
	SplineInputKeysPerSecond = 1,
	Count = 2,
	ESplineMovementSpeedUnit_MAX = 3
};

// Enum ShooterGame.ESplitBodyRotationState
enum class ESplitBodyRotationState : uint8 {
	Inactive = 0,
	RotatingUpperBody = 1,
	RecenteringLowerBody = 2,
	SpecialTurnState = 3,
	BlendingOut = 4,
	ESplitBodyRotationState_MAX = 5
};

// Enum ShooterGame.EAresSprayCategory
enum class EAresSprayCategory : uint8 {
	Default = 0,
	Contextual = 1,
	EAresSprayCategory_MAX = 2
};

// Enum ShooterGame.EAresStabilityType
enum class EAresStabilityType : uint8 {
	Walking = 0,
	Running = 1,
	Jumping = 2,
	Crouching = 3,
	OnAscender = 4,
	Flying = 5,
	Count = 6,
	Invalid = 254,
	EAresStabilityType_MAX = 255
};

// Enum ShooterGame.EStabilityInterpolationType
enum class EStabilityInterpolationType : uint8 {
	Linear = 0,
	QuadraticEaseIn = 1,
	QuadraticEaseOut = 2,
	QuadraticEaseInEaseOut = 3,
	Count = 4,
	EStabilityInterpolationType_MAX = 5
};

// Enum ShooterGame.EStabilityInterpolationVariable
enum class EStabilityInterpolationVariable : uint8 {
	StabilityIndex = 0,
	Error = 1,
	PitchRecoil = 2,
	YawRecoil = 3,
	AccruedSwitchChance = 4,
	Count = 5,
	EStabilityInterpolationVariable_MAX = 6
};

// Enum ShooterGame.EDecayBehaviorBelowDesired
enum class EDecayBehaviorBelowDesired : uint8 {
	MatchDesired = 0,
	StayAtCurrent = 1,
	Decay = 2,
	Count = 3,
	EDecayBehaviorBelowDesired_MAX = 4
};

// Enum ShooterGame.EYawChangeDirection
enum class EYawChangeDirection : uint8 {
	Left = 0,
	Right = 1,
	Neutral = 2,
	Count = 3,
	EYawChangeDirection_MAX = 4
};

// Enum ShooterGame.EStabilityType
enum class EStabilityType : uint8 {
	Error = 0,
	PitchRecoil = 1,
	YawRecoil = 2,
	Count = 3,
	EStabilityType_MAX = 4
};

// Enum ShooterGame.EStateContext
enum class EStateContext : uint8 {
	None = 0,
	TriggeringState = 1,
	OwningEquippable = 2,
	OwningCharacter = 3,
	CustomContext = 4,
	Count = 5,
	EStateContext_MAX = 6
};

// Enum ShooterGame.EMovementSync
enum class EMovementSync : uint8 {
	None = 0,
	Start = 1,
	Stop = 2,
	StartAndStop = 3,
	Count = 4,
	EMovementSync_MAX = 5
};

// Enum ShooterGame.EStateMachineTransitionReason
enum class EStateMachineTransitionReason : uint8 {
	NormalTransition = 0,
	ServerCorrect = 1,
	EStateMachineTransitionReason_MAX = 2
};

// Enum ShooterGame.EStateMachineDebugEntryMatchState
enum class EStateMachineDebugEntryMatchState : uint8 {
	Unconfirmed = 0,
	HasMatch = 1,
	NoMatch = 2,
	EStateMachineDebugEntryMatchState_MAX = 3
};

// Enum ShooterGame.EStorePurchaseFlowConfigType
enum class EStorePurchaseFlowConfigType : uint8 {
	PURCHASE_FLOW_CONFIG_UNKNOWN = 0,
	PURCHASE_FLOW_CONFIG_ALL = 1,
	PURCHASE_FLOW_CONFIG_ROTATING_STORE = 2,
	PURCHASE_FLOW_CONFIG_FEATURED_BUNDLE = 3,
	PURCHASE_FLOW_CONFIG_ESPORTS_STORE = 4,
	PURCHASE_FLOW_CONFIG_BATTLEPASS = 5,
	PURCHASE_FLOW_CONFIG_BONUS_STORE = 6,
	PURCHASE_FLOW_CONFIG_ACCESSORY_STORE = 7,
	PURCHASE_FLOW_CONFIG_SKIN_UPGRADES = 8,
	PURCHASE_FLOW_CONFIG_AGENTS = 9,
	PURCHASE_FLOW_CONFIG_VP = 10,
	PURCHASE_FLOW_CONFIG_RADP = 11,
	PURCHASE_FLOW_CONFIG_MAX = 12
};

// Enum ShooterGame.EStoreAnimationType
enum class EStoreAnimationType : uint8 {
	STORE_ANIMATION_NONE = 0,
	STORE_ANIMATION_PURCHASE_COMPLETE_GENERIC = 1,
	STORE_ANIMATION_GIFT_ACCEPT = 2,
	STORE_ANIMATION_GIFT_SENT = 3,
	STORE_ANIMATION_MAX = 4
};

// Enum ShooterGame.ECAPOrderStatus
enum class ECAPOrderStatus : uint8 {
	UNKNOWN = 0,
	FAILED = 1,
	REFUNDED = 2,
	ROLLED_BACK = 3,
	FULFILLMENT_FAILED = 4,
	PAYMENT_FAILED = 5,
	ACCEPTED = 6,
	VALIDATED = 7,
	PAYMENT_SUCCESSFUL = 8,
	FULFILLMENT_SUCCESSFUL = 9,
	POST_PROCESS_ACTIONS_COMPLETE = 10,
	COMPLETE = 11,
	MERCHANT_PROCESSING_COMPLETE = 12,
	COUNT = 13,
	ECAPOrderStatus_MAX = 14
};

// Enum ShooterGame.ECAPCatalogOrderState
enum class ECAPCatalogOrderState : uint8 {
	UNKNOWN = 0,
	CREATED = 1,
	PURCHASER_COMPLETE = 2,
	PURCHASER_FAILED = 3,
	ECAPCatalogOrderState_MAX = 4
};

// Enum ShooterGame.EEligibleForJuiceOverrideStatus
enum class EEligibleForJuiceOverrideStatus : uint8 {
	NOT_OVERRIDEN = 0,
	ELIGIBLE = 1,
	NOT_ELIGIBLE = 2,
	EEligibleForJuiceOverrideStatus_MAX = 3
};

// Enum ShooterGame.EOfferDTOType
enum class EOfferDTOType : uint8 {
	NONE = 0,
	CONTRACT_UPGRADE = 1,
	CONTRACT_LEVEL = 2,
	ROTATING_ITEM = 3,
	ITEM_LEVEL = 4,
	ITEM_SIDEGRADE = 5,
	BUNDLE = 6,
	BUNDLE_ITEM = 7,
	AGENT = 8,
	BONUS_STORE = 9,
	ACCESSORY_STORE = 10,
	UPGRADE_CURRENCY = 11,
	PLATFORM = 12,
	AGENT_CONTRACT_LEVEL = 13,
	VIRTUAL_CURRENCY = 14,
	COUNT = 15,
	EOfferDTOType_MAX = 16
};

// Enum ShooterGame.EPluginStorefrontType
enum class EPluginStorefrontType : uint8 {
	NONE = 0,
	ESPORTS_STOREFRONT = 1,
	EPluginStorefrontType_MAX = 2
};

// Enum ShooterGame.EStorefrontType
enum class EStorefrontType : uint8 {
	UNKNOWN = 0,
	AGENT = 1,
	ESPORTS = 2,
	ACCESSORY = 3,
	FEATURED = 4,
	BONUS = 5,
	EStorefrontType_MAX = 6
};

// Enum ShooterGame.EJuiceOrderRequestType
enum class EJuiceOrderRequestType : uint8 {
	INVALID = 0,
	CRAFT_ITEM = 1,
	CRAFT_PROGRESSION = 2,
	CRAFT_VARIANT = 3,
	COUNT = 4,
	EJuiceOrderRequestType_MAX = 5
};

// Enum ShooterGame.GiftingMailboxMessageType
enum class GiftingMailboxMessageType : uint8 {
	UNKNOWN = 0,
	PENDING_GIFT = 1,
	GIFT_SENT_ACCEPTED = 2,
	GIFT_SENT_REJECTED = 3,
	VC_GIFT_RECEIVED = 4,
	GiftingMailboxMessageType_MAX = 5
};

// Enum ShooterGame.GiftState
enum class GiftState : uint8 {
	GIFTSTATE_INVALID = 0,
	GIFTSTATE_CREATED = 1,
	GIFTSTATE_PURCHASER_COMPLETE = 2,
	GIFTSTATE_PURCHASER_FAILED = 3,
	GIFTSTATE_SEND_FAILED = 4,
	GIFTSTATE_ACCEPT_STARTED = 5,
	GIFTSTATE_ACCEPT_FAILED = 6,
	GIFTSTATE_ACCEPT_COMPLETE = 7,
	GIFTSTATE_DECLINE_STARTED = 8,
	GIFTSTATE_DECLINE_FAILED = 9,
	GIFTSTATE_DECLINE_COMPLETE = 10,
	GIFTSTATE_EXPIRE_STARTED = 11,
	GIFTSTATE_EXPIRE_COMPLETE = 12,
	GIFTSTATE_MAX = 13
};

// Enum ShooterGame.EGiftingInvalidReason
enum class EGiftingInvalidReason : uint8 {
	GIFTING_INVALID_REASON_OTHER = 0,
	GIFTING_INVALID_REASON_NOT_FRIENDS = 1,
	GIFTING_INVALID_REASON_FRIEND_DURATION = 2,
	GIFTING_INVALID_REASON_IDENTITY_VERIFICATION_REQUIRED = 3,
	GIFTING_INVALID_REASON_VELOCITY_LIMIT_EXCEEDED = 4,
	GIFTING_INVALID_REASON_PLAYER_BEHAVIOR_RESTRICTED = 5,
	GIFTING_INVALID_REASON_PLAYER_AFFINITY_MISSING = 6,
	GIFTING_INVALID_REASON_INSUFFICIENT_ACCOUNT_LEVEL = 7,
	COUNT = 8,
	EGiftingInvalidReason_MAX = 9
};

// Enum ShooterGame.EOfferType
enum class EOfferType : uint8 {
	Unknown = 0,
	RotatingStore = 1,
	FeaturedStandalone = 2,
	FeaturedBundle = 3,
	NightMarket = 4,
	Juice = 5,
	Accessory = 6,
	AgentStore = 7,
	ContractLevel = 8,
	ContractUpgrade = 9,
	ItemLevel = 10,
	ItemSidegrade = 11,
	UpgradeCurrency = 12,
	Count = 13,
	EOfferType_MAX = 14
};

// Enum ShooterGame.EEventType
enum class EEventType : uint8 {
	AcknowledgeTerms = 0,
	EquipItem = 1,
	FavoriteItem = 2,
	InspectItem = 3,
	InspectModelViewer = 4,
	InspectItemLevels = 5,
	InspectItemChroma = 6,
	LearnMore = 7,
	PriceBreakdown = 8,
	PurchaseGift = 9,
	PurchaseStart = 10,
	PurchaseConfirm = 11,
	PurchaseCancel = 12,
	PurchaseComplete = 13,
	RefundPolicy = 14,
	RevealOffer = 15,
	SelectPurchaseCurrencyType = 16,
	Count = 17,
	EEventType_MAX = 18
};

// Enum ShooterGame.ESpecialItemStatus
enum class ESpecialItemStatus : uint8 {
	DEFAULT = 0,
	PROMO = 1,
	COUNT = 2,
	ESpecialItemStatus_MAX = 3
};

// Enum ShooterGame.EStreamedVideoQuality
enum class EStreamedVideoQuality : uint8 {
	Default = 0,
	High = 1,
	Invalid = 2,
	Count = 3,
	EStreamedVideoQuality_MAX = 4
};

// Enum ShooterGame.ESubDataBlueprintLibrary_CastResult
enum class ESubDataBlueprintLibrary_CastResult : uint8 {
	Then = 0,
	Failed = 1,
	ESubDataBlueprintLibrary_MAX = 2
};

// Enum ShooterGame.EXPBoostType
enum class EXPBoostType : uint8 {
	Invalid = 0,
	BaseOnly = 1,
	BaseAndMission = 2,
	Count = 3,
	EXPBoostType_MAX = 4
};

// Enum ShooterGame.ESubscriptionRewardType
enum class ESubscriptionRewardType : uint8 {
	Invalid = 0,
	XpBoost = 1,
	Agent = 2,
	WeaponSkin = 3,
	GunBuddy = 4,
	Spray = 5,
	PlayerCard = 6,
	PlayerTitle = 7,
	Count = 8,
	ESubscriptionRewardType_MAX = 9
};

// Enum ShooterGame.EQueuedMessageType
enum class EQueuedMessageType : uint8 {
	Event = 0,
	Log = 1,
	Metric = 2,
	EQueuedMessageType_MAX = 3
};

// Enum ShooterGame.ETelemetryContextualPostFlags
enum class ETelemetryContextualPostFlags : int32 {
	Empty = 0,
	Default = 2,
	GSLT = 4,
	ReplayPlayback = 8,
	Always = 4294967295,
	ETelemetryContextualPostFlags_MAX = 4294967296
};

// Enum ShooterGame.ETestViewModelEnum
enum class ETestViewModelEnum : uint8 {
	None = 0,
	Test = 1,
	COUNT = 2,
	ETestViewModelEnum_MAX = 3
};

// Enum ShooterGame.ETextChatInitializationState
enum class ETextChatInitializationState : uint8 {
	NotInitialized = 0,
	PendingSession = 1,
	Ready = 2,
	Failed = 3,
	ETextChatInitializationState_MAX = 4
};

// Enum ShooterGame.ETextChatRoomConnectionState
enum class ETextChatRoomConnectionState : uint8 {
	ShouldConnect = 0,
	Connecting = 1,
	Connected = 2,
	NotConnecting = 3,
	ETextChatRoomConnectionState_MAX = 4
};

// Enum ShooterGame.EThematicCategory
enum class EThematicCategory : uint8 {
	None = 0,
	Alien = 1,
	Artistic = 2,
	Clean = 3,
	Cultural = 4,
	Edgy = 5,
	Elemental = 6,
	ESports = 7,
	Fantasy = 8,
	Graphic = 9,
	Gritty = 10,
	LoreBased = 11,
	RealWorld = 12,
	Retro = 13,
	SciFi = 14,
	Stylish = 15,
	Whimsical = 16,
	Count = 17,
	EThematicCategory_MAX = 18
};

// Enum ShooterGame.EThematicContinuationCategory
enum class EThematicContinuationCategory : uint8 {
	FirstGen = 0,
	SecondGen = 1,
	ThirdGen = 2,
	FourthGen = 3,
	Rerelease = 4,
	Count = 5,
	EThematicContinuationCategory_MAX = 6
};

// Enum ShooterGame.EPromotionCategory
enum class EPromotionCategory : uint8 {
	None = 0,
	Trailer = 1,
	InfluencerBuild = 2,
	SocialTweets = 3,
	Count = 4,
	EPromotionCategory_MAX = 5
};

// Enum ShooterGame.EAresTimerDirection
enum class EAresTimerDirection : uint8 {
	AfterStateStart = 0,
	BeforeStateEnd = 1,
	Count = 2,
	Invalid = 254,
	EAresTimerDirection_MAX = 255
};

// Enum ShooterGame.EReplayTimelineInteractionType
enum class EReplayTimelineInteractionType : uint8 {
	Invalid = 0,
	Play = 1,
	Pause = 2,
	SkipBackwards = 3,
	SkipForwards = 4,
	RoundSkipForwards = 5,
	RoundSkipBackwards = 6,
	RoundExplorerRoundJump = 7,
	RoundExplorerTimeJump = 8,
	TimeJump = 9,
	ModifyPlaybackSpeed = 10,
	ToggleFreeCam = 11,
	OpenSettings = 12,
	ToggleHideUI = 13,
	CycleAgent = 14,
	EReplayTimelineInteractionType_MAX = 15
};

// Enum ShooterGame.ETipDebugState
enum class ETipDebugState : uint8 {
	Resolved = 0,
	Invalid = 1,
	Valid = 2,
	Shown = 3,
	ETipDebugState_MAX = 4
};

// Enum ShooterGame.EToggleableAbilitySetting
enum class EToggleableAbilitySetting : uint8 {
	Hold = 0,
	Toggle = 1,
	UseGlobalSetting = 2,
	Count = 3,
	EToggleableAbilitySetting_MAX = 4
};

// Enum ShooterGame.ECancellableInputType
enum class ECancellableInputType : uint8 {
	None = 0,
	Weapon = 1,
	Ability = 2,
	Run = 4,
	JumpCrouch = 8,
	Camera = 16,
	Settings = 32,
	Pinging = 64,
	All = 127,
	Count = 7,
	ECancellableInputType_MAX = 128
};

// Enum ShooterGame.EMatchupNextSteps
enum class EMatchupNextSteps : uint8 {
	CONTINUE = 0,
	KNOCKED_OUT = 1,
	WIN_WINNERS = 2,
	WIN_LOSERS = 3,
	DROP_TO_CONSOLATION = 4,
	Count = 5,
	Invalid = 6,
	EMatchupNextSteps_MAX = 7
};

// Enum ShooterGame.ETransitionWidgetType
enum class ETransitionWidgetType : uint8 {
	Invalid = 0,
	None = 1,
	Default = 2,
	TransitionToPregame = 3,
	TransitionToInGame = 4,
	TransitionToMainMenu = 5,
	TransitionToWatchingReplay = 6,
	Count = 7,
	ETransitionWidgetType_MAX = 8
};

// Enum ShooterGame.EUIActionType
enum class EUIActionType : uint8 {
	Click = 0,
	Hover = 1,
	Invalid = 2,
	EUIActionType_MAX = 3
};

// Enum ShooterGame.EPingQuality
enum class EPingQuality : uint8 {
	None = 0,
	Low = 1,
	Med = 2,
	High = 3,
	Max = 4,
	EPingQuality_MAX = 5
};

// Enum ShooterGame.ECharacterRole
enum class ECharacterRole : uint8 {
	All = 0,
	Initiator = 1,
	Duelist = 2,
	Sentinel = 3,
	Controller = 4,
	None = 5,
	ECharacterRole_MAX = 6
};

// Enum ShooterGame.EIncrementType
enum class EIncrementType : uint8 {
	Increment = 0,
	Decrement = 1,
	None = 2,
	EIncrementType_MAX = 3
};

// Enum ShooterGame.EUseCompleteMethod
enum class EUseCompleteMethod : uint8 {
	Press = 0,
	Hold = 1,
	EUseCompleteMethod_MAX = 2
};

// Enum ShooterGame.EUseKeyUIType
enum class EUseKeyUIType : uint8 {
	Default = 0,
	Alternate = 1,
	SecondaryDefault = 2,
	Count = 3,
	EUseKeyUIType_MAX = 4
};

// Enum ShooterGame.EViewTargetSearchDirection
enum class EViewTargetSearchDirection : uint8 {
	Next = 0,
	Previous = 1,
	Count = 2,
	EViewTargetSearchDirection_MAX = 3
};

// Enum ShooterGame.EVisibleInterventionListCategory
enum class EVisibleInterventionListCategory : uint8 {
	ActiveInterventions = 0,
	AtRiskInterventions = 1,
	EVisibleInterventionListCategory_MAX = 2
};

// Enum ShooterGame.EAttemptQueueVoteResult
enum class EAttemptQueueVoteResult : uint8 {
	Queued = 0,
	Active = 1,
	Invalid = 2,
	AlreadyQueued = 3,
	EAttemptQueueVoteResult_MAX = 4
};

// Enum ShooterGame.EWallSectionPhase
enum class EWallSectionPhase : uint8 {
	Uninitalized = 0,
	Sectioning = 1,
	Extending = 2,
	Building = 3,
	Finalizing = 4,
	Finished = 5,
	Count = 6,
	EWallSectionPhase_MAX = 7
};

// Enum ShooterGame.EWidgetLayoutSettingName
enum class EWidgetLayoutSettingName : uint8 {
	WalkModeThreshold = 0,
	AimPassthrough = 1,
	DeadZoneThreshold = 2,
	SprintLockThreshold = 3,
	SprintLockActivationConeAngle = 4,
	AutoADS = 5,
	AutoScope = 6,
	FireOnReleaseSnipers = 7,
	FireOnReleaseOther = 8,
	MovementPassthrough = 9,
	WalkWhileFiring = 10,
	AutoRefireOnHold = 11,
	UseButton_PlantDefuse = 12,
	WeaponDropThreshold = 13,
	JumpCrouchJumpScale = 14,
	JumpCrouchCrouchScale = 15,
	JumpCrouchWidthScale = 16,
	JumpCrouchSwipeZoneHeight = 17,
	WS_UseStaticLayout = 18,
	WS_InvertFlyoutDirection = 19,
	AlwaysShowUse = 20,
	WS_UseWeaponCycling = 21,
	WS_HotswapToMelee = 22,
	WS_SpikeWidth = 23,
	WS_MeleeWidth = 24,
	HideWhenInactive = 25,
	BurstFire = 26,
	MinimapCalloutLocation = 27,
	EWidgetLayoutSettingName_MAX = 28
};

// Enum ShooterGame.EWidgetVisibilityState
enum class EWidgetVisibilityState : uint8 {
	Visible = 0,
	Hidden = 1,
	Collapsed = 2,
	EWidgetVisibilityState_MAX = 3
};

// Enum ShooterGame.EWildcardBlueprintLibrary_CastResult
enum class EWildcardBlueprintLibrary_CastResult : uint8 {
	Then = 0,
	Failed = 1,
	EWildcardBlueprintLibrary_MAX = 2
};

// Enum ShooterGame.EZoomComponentType
enum class EZoomComponentType : uint8 {
	CameraZoom = 0,
	FirstPersonMesh = 1,
	Count = 2,
	Invalid = 254,
	EZoomComponentType_MAX = 255
};

// Enum ShooterGame.EAimModeType
enum class EAimModeType : uint8 {
	PrioritizeFocus = 0,
	PrioritizeADS = 1,
	Count = 2,
	EAimModeType_MAX = 3
};

// Enum ShooterGame.EZoomCooldownOption
enum class EZoomCooldownOption : uint8 {
	ApplyCooldownAfterZoom = 0,
	NoCooldown = 1,
	Count = 2,
	EZoomCooldownOption_MAX = 3
};

// Enum ShooterGame.EZoomTransitionState
enum class EZoomTransitionState : uint8 {
	Transitioning = 0,
	OnCooldown = 1,
	Completed = 2,
	EZoomTransitionState_MAX = 3
};

// Enum ShooterGame.EZoomTimer
enum class EZoomTimer : uint8 {
	Transition = 0,
	Cooldown = 1,
	CosmeticZoomInPercentTrigger = 2,
	Count = 3,
	EZoomTimer_MAX = 4
};

// Enum ShooterGame.EZoomStateLevel
enum class EZoomStateLevel : uint8 {
	Disabled = 0,
	Unzoomed = 1,
	ZoomLevel1 = 2,
	ZoomLevel2 = 3,
	Count = 4,
	EZoomStateLevel_MAX = 5
};

// Enum ShooterGame.EZoomFiringBehavior
enum class EZoomFiringBehavior : uint8 {
	None = 0,
	FiringBlocks = 1,
	FiringCooldownBlocks = 2,
	Count = 3,
	EZoomFiringBehavior_MAX = 4
};

// Enum ShooterGame.EZoomMultiplierType
enum class EZoomMultiplierType : uint8 {
	ADS = 0,
	Sniper = 1,
	EZoomMultiplierType_MAX = 2
};

// ScriptStruct ShooterGame.AresSocialExperienceDelegates
// Size: 0x01 (Inherited: 0x00)
struct FAresSocialExperienceDelegates {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.GenericSourceDelegate_Unused
// Size: 0x01 (Inherited: 0x00)
struct FGenericSourceDelegate_Unused {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.WildcardDelegates_Unused
// Size: 0x01 (Inherited: 0x00)
struct FWildcardDelegates_Unused {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.ActionChord
// Size: 0x28 (Inherited: 0x00)
struct FActionChord {
	struct FKey Key; // 0x00(0x20)
	bool bShift; // 0x20(0x01)
	bool bCtrl; // 0x21(0x01)
	bool bAlt; // 0x22(0x01)
	bool bCmd; // 0x23(0x01)
	bool bGamepadShift; // 0x24(0x01)
	enum class EActionChordTapHoldType TapHoldType; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
};

// ScriptStruct ShooterGame.Wildcard
// Size: 0x40 (Inherited: 0x00)
struct FWildcard {
	char pad_0[0x38]; // 0x00(0x38)
	struct UObject* Object; // 0x38(0x08)
};

// ScriptStruct ShooterGame.FullPortraitInfo
// Size: 0x90 (Inherited: 0x00)
struct FFullPortraitInfo {
	struct TMap<enum class ECharacterPortraitScreenEnum, struct FWidgetTransform> PortraitRenderTransformOverridesMap; // 0x00(0x50)
	struct FWidgetTransform PortraitRenderTransform; // 0x50(0x38)
	bool FullPortraitRightFacing; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// ScriptStruct ShooterGame.AnimationCueSource_CueEventData
// Size: 0x10 (Inherited: 0x00)
struct FAnimationCueSource_CueEventData {
	int32_t SequenceNumber; // 0x00(0x04)
	struct FName CueName; // 0x04(0x0c)
};

// ScriptStruct ShooterGame.AresTouchTrackingData
// Size: 0xd0 (Inherited: 0x00)
struct FAresTouchTrackingData {
	enum class ETouchIndex TouchIndex; // 0x00(0x01)
	enum class EAresTouchState TouchState; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FVector2D Location; // 0x08(0x10)
	struct FVector2D StartLocation; // 0x18(0x10)
	struct FVector2D PreviousLocation; // 0x28(0x10)
	struct FAresTouchEventInfo TouchInfo; // 0x38(0x98)
};

// ScriptStruct ShooterGame.AresTouchEventInfo
// Size: 0x98 (Inherited: 0x00)
struct FAresTouchEventInfo {
	struct FPointerEvent ParentPointerEvent; // 0x00(0x80)
	enum class ETouchIndex TouchIndex; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FVector2D TouchLocation; // 0x88(0x10)
};

// ScriptStruct ShooterGame.AresTouchDoubleTapGestureData
// Size: 0x30 (Inherited: 0x00)
struct FAresTouchDoubleTapGestureData {
	enum class ETouchIndex TouchIndex; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVector2D Location; // 0x08(0x10)
	struct FVector2D StartLocation; // 0x18(0x10)
	bool bHold; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ShooterGame.AresTouchHoldGestureData
// Size: 0x40 (Inherited: 0x00)
struct FAresTouchHoldGestureData {
	enum class ETouchIndex TouchIndex; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVector2D Location; // 0x08(0x10)
	struct FVector2D StartLocation; // 0x18(0x10)
	enum class EAresTouchState TouchState; // 0x28(0x01)
	char pad_29[0x17]; // 0x29(0x17)
};

// ScriptStruct ShooterGame.CharacterHandles
// Size: 0x50 (Inherited: 0x00)
struct FCharacterHandles {
	struct TMap<struct UCharacterDataAsset*, struct UCharacterHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.EsportsRankingTeamRecord
// Size: 0x08 (Inherited: 0x00)
struct FEsportsRankingTeamRecord {
	int32_t Wins; // 0x00(0x04)
	int32_t Losses; // 0x04(0x04)
};

// ScriptStruct ShooterGame.EsportsScheduleEntryContainer
// Size: 0x68 (Inherited: 0x00)
struct FEsportsScheduleEntryContainer {
	struct UEsportsMatchModelV2* Match; // 0x00(0x08)
	struct FDateTime StartTime; // 0x08(0x08)
	bool bIsDayContainer; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TSet<struct FString> AssociatedLeagueIDs; // 0x18(0x50)
};

// ScriptStruct ShooterGame.EsportsStandingTeamRecord
// Size: 0x08 (Inherited: 0x00)
struct FEsportsStandingTeamRecord {
	int32_t Wins; // 0x00(0x04)
	int32_t Losses; // 0x04(0x04)
};

// ScriptStruct ShooterGame.FiringResults
// Size: 0x30 (Inherited: 0x00)
struct FFiringResults {
	struct FVector FiringDirection; // 0x00(0x18)
	struct FVector StartLocation; // 0x18(0x18)
};

// ScriptStruct ShooterGame.ForceModuleHandle
// Size: 0x08 (Inherited: 0x00)
struct FForceModuleHandle {
	uint32_t HandleNumber; // 0x00(0x04)
	enum class EForceModuleType ModuleType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct ShooterGame.FriendRequestItemModel
// Size: 0x30 (Inherited: 0x00)
struct FFriendRequestItemModel {
	struct FString PlayerName; // 0x00(0x10)
	struct FString PlayerTag; // 0x10(0x10)
	struct FString Subject; // 0x20(0x10)
};

// ScriptStruct ShooterGame.AresAssist
// Size: 0x10 (Inherited: 0x00)
struct FAresAssist {
	enum class EAresAssistType AssistType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AShooterPlayerState* Assister; // 0x08(0x08)
};

// ScriptStruct ShooterGame.MatchHistoryModeOption
// Size: 0x28 (Inherited: 0x00)
struct FMatchHistoryModeOption {
	struct FString QueueID; // 0x00(0x10)
	struct FText ModeText; // 0x10(0x18)
};

// ScriptStruct ShooterGame.GameModeMatchDetailsScoreboardConfig
// Size: 0x08 (Inherited: 0x00)
struct FGameModeMatchDetailsScoreboardConfig {
	bool ShowACS; // 0x00(0x01)
	bool ShowKDA; // 0x01(0x01)
	bool ShowEconRating; // 0x02(0x01)
	bool ShowFirstBloods; // 0x03(0x01)
	bool ShowBombStats; // 0x04(0x01)
	bool IsFFAMode; // 0x05(0x01)
	bool ShowPlaceholder; // 0x06(0x01)
	enum class ESortCriteria DefaultSortCriteria; // 0x07(0x01)
};

// ScriptStruct ShooterGame.EventScheduleListDTO
// Size: 0x10 (Inherited: 0x00)
struct FEventScheduleListDTO {
	struct TArray<struct FEventScheduleDTO> EventScheduleList; // 0x00(0x10)
};

// ScriptStruct ShooterGame.EventScheduleDTO
// Size: 0x90 (Inherited: 0x00)
struct FEventScheduleDTO {
	struct FString LeagueID; // 0x00(0x10)
	struct FString LeagueName; // 0x10(0x10)
	struct FString LeagueSlug; // 0x20(0x10)
	struct FString tournamentid; // 0x30(0x10)
	struct FString TournamentName; // 0x40(0x10)
	struct FString TournamentSlug; // 0x50(0x10)
	struct FString TournamentState; // 0x60(0x10)
	struct FDateTime StartTime; // 0x70(0x08)
	struct FDateTime EndTime; // 0x78(0x08)
	struct TArray<struct FMatchDTO> Matches; // 0x80(0x10)
};

// ScriptStruct ShooterGame.MatchDTO
// Size: 0x98 (Inherited: 0x00)
struct FMatchDTO {
	struct FString ID; // 0x00(0x10)
	struct FDateTime StartTime; // 0x10(0x08)
	struct FString StageName; // 0x18(0x10)
	struct FString StageSlug; // 0x28(0x10)
	struct FString Stage; // 0x38(0x10)
	struct FString Status; // 0x48(0x10)
	struct FString StructuralID; // 0x58(0x10)
	struct TArray<struct FTeamDTO> Teams; // 0x68(0x10)
	struct TArray<struct FGameDTO> Games; // 0x78(0x10)
	struct TArray<struct FStreamDTO> Streams; // 0x88(0x10)
};

// ScriptStruct ShooterGame.StreamDTO
// Size: 0x60 (Inherited: 0x00)
struct FStreamDTO {
	struct FString ID; // 0x00(0x10)
	struct FString Locale; // 0x10(0x10)
	struct FString ProviderURL; // 0x20(0x10)
	struct FMediaLocaleDTO MediaLocale; // 0x30(0x30)
};

// ScriptStruct ShooterGame.MediaLocaleDTO
// Size: 0x30 (Inherited: 0x00)
struct FMediaLocaleDTO {
	struct FString Locale; // 0x00(0x10)
	struct FString EnglishName; // 0x10(0x10)
	struct FString TranslatedName; // 0x20(0x10)
};

// ScriptStruct ShooterGame.GameDTO
// Size: 0x28 (Inherited: 0x00)
struct FGameDTO {
	struct FString ID; // 0x00(0x10)
	int32_t Number; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FVODDTO> VODs; // 0x18(0x10)
};

// ScriptStruct ShooterGame.VODDTO
// Size: 0x30 (Inherited: 0x00)
struct FVODDTO {
	struct FString ID; // 0x00(0x10)
	struct FString Locale; // 0x10(0x10)
	struct FString ProviderURL; // 0x20(0x10)
};

// ScriptStruct ShooterGame.TeamDTO
// Size: 0x190 (Inherited: 0x00)
struct FTeamDTO {
	struct FString ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString Code; // 0x20(0x10)
	struct FString CodeSanitized; // 0x30(0x10)
	struct FString ImageURL; // 0x40(0x10)
	struct FString ImageLowResURL; // 0x50(0x10)
	struct FString ImageHighResURL; // 0x60(0x10)
	struct FString AlternativeImageURL; // 0x70(0x10)
	struct FString BackgroundImageURL; // 0x80(0x10)
	struct FString PrimaryColor; // 0x90(0x10)
	struct FString SecondaryColor; // 0xa0(0x10)
	struct FMatchOutcomeDTO MatchOutcome; // 0xb0(0x38)
	struct FOriginDTO Origin; // 0xe8(0x28)
	struct TArray<struct FPlayerDTO> Players; // 0x110(0x10)
	struct FTeamRecordDTO Record; // 0x120(0x0c)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct FHomeLeagueDTO HomeLeague; // 0x130(0x40)
	struct FString BundleID; // 0x170(0x10)
	struct FString DataAssetID; // 0x180(0x10)
};

// ScriptStruct ShooterGame.HomeLeagueDTO
// Size: 0x40 (Inherited: 0x00)
struct FHomeLeagueDTO {
	struct FString ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString ImageURL; // 0x20(0x10)
	struct FString Region; // 0x30(0x10)
};

// ScriptStruct ShooterGame.TeamRecordDTO
// Size: 0x0c (Inherited: 0x00)
struct FTeamRecordDTO {
	int32_t Wins; // 0x00(0x04)
	int32_t Losses; // 0x04(0x04)
	int32_t Ties; // 0x08(0x04)
};

// ScriptStruct ShooterGame.PlayerDTO
// Size: 0x80 (Inherited: 0x00)
struct FPlayerDTO {
	struct FString ID; // 0x00(0x10)
	struct FString SummonerName; // 0x10(0x10)
	struct FString Handle; // 0x20(0x10)
	struct FString FirstName; // 0x30(0x10)
	struct FString LastName; // 0x40(0x10)
	struct FString Image; // 0x50(0x10)
	struct FString Status; // 0x60(0x10)
	struct TArray<struct FPlayerRoleDTO> Roles; // 0x70(0x10)
};

// ScriptStruct ShooterGame.PlayerRoleDTO
// Size: 0x20 (Inherited: 0x00)
struct FPlayerRoleDTO {
	struct FString Type; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
};

// ScriptStruct ShooterGame.OriginDTO
// Size: 0x28 (Inherited: 0x00)
struct FOriginDTO {
	struct FString StructuralID; // 0x00(0x10)
	struct FString Type; // 0x10(0x10)
	int32_t Slot; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ShooterGame.MatchOutcomeDTO
// Size: 0x38 (Inherited: 0x00)
struct FMatchOutcomeDTO {
	struct FString MatchID; // 0x00(0x10)
	struct FString TeamID; // 0x10(0x10)
	struct FString Outcome; // 0x20(0x10)
	int32_t GameWins; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.ActRankBorderHandles
// Size: 0x50 (Inherited: 0x00)
struct FActRankBorderHandles {
	struct TMap<struct UActRankBorderDataAsset*, struct UActRankBorderHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.BracketWinLoss
// Size: 0x08 (Inherited: 0x00)
struct FBracketWinLoss {
	int32_t Wins; // 0x00(0x04)
	int32_t Losses; // 0x04(0x04)
};

// ScriptStruct ShooterGame.AntiAddictionToken
// Size: 0x10 (Inherited: 0x00)
struct FAntiAddictionToken {
	struct FString Token; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AresMenuUrl
// Size: 0x60 (Inherited: 0x00)
struct FAresMenuUrl {
	struct TArray<struct FName> URL; // 0x00(0x10)
	struct TMap<struct FName, struct FWildcard> Parameters; // 0x10(0x50)
};

// ScriptStruct ShooterGame.ArmorHandles
// Size: 0x50 (Inherited: 0x00)
struct FArmorHandles {
	struct TMap<struct UArmorDataAsset*, struct UArmorHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.CinematicCameraData
// Size: 0xa0 (Inherited: 0x00)
struct FCinematicCameraData {
	struct FString Name; // 0x00(0x10)
	struct FVector Position; // 0x10(0x18)
	struct FRotator Rotation; // 0x28(0x18)
	struct FVector Forward; // 0x40(0x18)
	struct FBox ViewBox; // 0x58(0x38)
	struct FName Layer; // 0x90(0x0c)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct ShooterGame.AVSSuccessData
// Size: 0x20 (Inherited: 0x00)
struct FAVSSuccessData {
	enum class EAVSConfirmationResponseType ResponseType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDateTime PinExpiryDateTime; // 0x08(0x08)
	struct FString PhoneNumberObfuscated; // 0x10(0x10)
};

// ScriptStruct ShooterGame.MenuStackMediaSourceParams
// Size: 0x30 (Inherited: 0x00)
struct FMenuStackMediaSourceParams {
	struct TSoftObjectPtr<UMediaSource> MediaSourceAsset; // 0x00(0x30)
};

// ScriptStruct ShooterGame.BaseHandles
// Size: 0x50 (Inherited: 0x00)
struct FBaseHandles {
	struct TMap<struct UAresBasePrimaryDataAsset*, struct UBaseHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.BracketLineLayout
// Size: 0x50 (Inherited: 0x00)
struct FBracketLineLayout {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct ShooterGame.TournamentStageV2
// Size: 0x30 (Inherited: 0x00)
struct FTournamentStageV2 {
	struct FString Name; // 0x00(0x10)
	struct FString Slug; // 0x10(0x10)
	struct TArray<struct FTournamentSectionV2> Sections; // 0x20(0x10)
};

// ScriptStruct ShooterGame.TournamentSectionV2
// Size: 0x20 (Inherited: 0x00)
struct FTournamentSectionV2 {
	struct FString ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
};

// ScriptStruct ShooterGame.TournamentStage
// Size: 0x38 (Inherited: 0x00)
struct FTournamentStage {
	struct FString Name; // 0x00(0x10)
	struct FString Slug; // 0x10(0x10)
	struct TArray<struct FTournamentSection> Sections; // 0x20(0x10)
	int32_t Index; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.TournamentSection
// Size: 0x28 (Inherited: 0x00)
struct FTournamentSection {
	struct FString ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	int32_t Index; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ShooterGame.BTEHandles
// Size: 0x50 (Inherited: 0x00)
struct FBTEHandles {
	struct TMap<struct UBTEDataAsset*, struct UBTEHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.AresGunRequest
// Size: 0x10 (Inherited: 0x00)
struct FAresGunRequest {
	struct UAresPurchasableEquippable* RequestedGun; // 0x00(0x08)
	enum class EAresGunRequestState RequestState; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ShooterGame.PregameCastVote
// Size: 0x30 (Inherited: 0x00)
struct FPregameCastVote {
	struct FString Subject; // 0x00(0x10)
	struct FGuid MapGuid; // 0x10(0x10)
	struct FName Team; // 0x20(0x0c)
	enum class EStepType StepType; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct ShooterGame.CharacterRoleHandles
// Size: 0x50 (Inherited: 0x00)
struct FCharacterRoleHandles {
	struct TMap<struct UCharacterRoleDataAsset*, struct UCharacterRoleHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.CompetitiveSeasonHandles
// Size: 0x50 (Inherited: 0x00)
struct FCompetitiveSeasonHandles {
	struct TMap<struct UCompetitiveSeasonDataAsset*, struct UCompetitiveSeasonHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.AresConditionalInputAction
// Size: 0x28 (Inherited: 0x00)
struct FAresConditionalInputAction {
	struct FDataTableRowHandle InputRowHandle; // 0x00(0x18)
	enum class EAresCommonInputCondition InputCondition; // 0x18(0x01)
	enum class EActivationPreference DefaultActiveState; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	struct FGameplayTag ConditionalInputTag; // 0x1c(0x0c)
};

// ScriptStruct ShooterGame.ContentEditionHandles
// Size: 0x50 (Inherited: 0x00)
struct FContentEditionHandles {
	struct TMap<struct UContentEditionDataAsset*, struct UContentEditionHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.ContentTierHandles
// Size: 0x50 (Inherited: 0x00)
struct FContentTierHandles {
	struct TMap<struct UContentTierDataAsset*, struct UContentTierHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.ContractV2Handles
// Size: 0x50 (Inherited: 0x00)
struct FContractV2Handles {
	struct TMap<struct UContractDataAssetV2*, struct UContractV2Handle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.CrosshairSettings
// Size: 0x198 (Inherited: 0x00)
struct FCrosshairSettings {
	struct FLineCrosshairSettings Primary; // 0x00(0x78)
	struct FLineCrosshairSettings ADS; // 0x78(0x78)
	struct FLineCrosshairSettings FocusMode; // 0xf0(0x78)
	struct FSniperCrosshairSettings Sniper; // 0x168(0x18)
	bool bUsePrimaryCrosshairForADS; // 0x180(0x01)
	bool bUsePrimaryCrosshairForFocusMode; // 0x181(0x01)
	bool bUseCustomCrosshairOnAllPrimary; // 0x182(0x01)
	bool bUseAdvancedOptions; // 0x183(0x01)
	bool bScaleToResolution; // 0x184(0x01)
	char pad_185[0x3]; // 0x185(0x03)
	struct FString ProfileName; // 0x188(0x10)
};

// ScriptStruct ShooterGame.SniperCrosshairSettings
// Size: 0x18 (Inherited: 0x00)
struct FSniperCrosshairSettings {
	struct FColor CenterDotColor; // 0x00(0x04)
	struct FColor CenterDotColorCustom; // 0x04(0x04)
	bool bUseCustomCenterDotColor; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float CenterDotSize; // 0x0c(0x04)
	float CenterDotOpacity; // 0x10(0x04)
	bool bDisplayCenterDot; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct ShooterGame.LineCrosshairSettings
// Size: 0x78 (Inherited: 0x00)
struct FLineCrosshairSettings {
	struct FColor Color; // 0x00(0x04)
	struct FColor ColorCustom; // 0x04(0x04)
	bool bUseCustomColor; // 0x08(0x01)
	bool bHasOutline; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	float OutlineThickness; // 0x0c(0x04)
	struct FColor OutlineColor; // 0x10(0x04)
	float OutlineOpacity; // 0x14(0x04)
	float CenterDotSize; // 0x18(0x04)
	float CenterDotOpacity; // 0x1c(0x04)
	bool bDisplayCenterDot; // 0x20(0x01)
	bool bFadeCrosshairWithFiringError; // 0x21(0x01)
	bool bShowSpectatedPlayerCrosshair; // 0x22(0x01)
	bool bHideCrosshair; // 0x23(0x01)
	bool bFixMinErrorAcrossWeapons; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct FLineCrosshairSectionSettings InnerLines; // 0x28(0x28)
	struct FLineCrosshairSectionSettings OuterLines; // 0x50(0x28)
};

// ScriptStruct ShooterGame.LineCrosshairSectionSettings
// Size: 0x28 (Inherited: 0x00)
struct FLineCrosshairSectionSettings {
	float LineThickness; // 0x00(0x04)
	float LineLength; // 0x04(0x04)
	float LineLengthVertical; // 0x08(0x04)
	bool bAllowVertScaling; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float LineOffset; // 0x10(0x04)
	bool bShowMovementError; // 0x14(0x01)
	bool bShowShootingError; // 0x15(0x01)
	bool bShowMinError; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	float Opacity; // 0x18(0x04)
	bool bShowLines; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	float FiringErrorScale; // 0x20(0x04)
	float MovementErrorScale; // 0x24(0x04)
};

// ScriptStruct ShooterGame.CurrencyHandles
// Size: 0x50 (Inherited: 0x00)
struct FCurrencyHandles {
	struct TMap<struct UCurrencyDataAsset*, struct UCurrencyHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.DestructionEffect
// Size: 0x10 (Inherited: 0x00)
struct FDestructionEffect {
	struct AEffectContainer* FXC; // 0x00(0x08)
	enum class EDestructionEffectPlayType PlayType; // 0x08(0x01)
	bool bOnlyPlayOnDeathOrDestroy; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// ScriptStruct ShooterGame.DisplayName
// Size: 0x30 (Inherited: 0x00)
struct FDisplayName {
	struct FString FullName; // 0x00(0x10)
	struct FString GameName; // 0x10(0x10)
	struct FString TagLine; // 0x20(0x10)
};

// ScriptStruct ShooterGame.EquippableAttachmentHandles
// Size: 0x50 (Inherited: 0x00)
struct FEquippableAttachmentHandles {
	struct TMap<struct UEquippableAttachmentDataAsset*, struct UEquippableAttachmentHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.EquippableCharmInstanceHandles
// Size: 0x10 (Inherited: 0x00)
struct FEquippableCharmInstanceHandles {
	struct TArray<struct UEquippableCharmInstanceHandle*> Handles; // 0x00(0x10)
};

// ScriptStruct ShooterGame.EquippableCharmLevelHandles
// Size: 0x50 (Inherited: 0x00)
struct FEquippableCharmLevelHandles {
	struct TMap<struct UEquippableCharmLevelDataAsset*, struct UEquippableCharmLevelHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.EquippableCharmHandles
// Size: 0x50 (Inherited: 0x00)
struct FEquippableCharmHandles {
	struct TMap<struct UEquippableCharmDataAsset*, struct UEquippableCharmHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.EquippableHandles
// Size: 0x50 (Inherited: 0x00)
struct FEquippableHandles {
	struct TMap<struct UEquippableDataAsset*, struct UEquippableHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.EquippableSkinChromaHandles
// Size: 0x50 (Inherited: 0x00)
struct FEquippableSkinChromaHandles {
	struct TMap<struct UEquippableSkinChromaDataAsset*, struct UEquippableSkinChromaHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.EquippableSkinLevelHandles
// Size: 0x50 (Inherited: 0x00)
struct FEquippableSkinLevelHandles {
	struct TMap<struct UEquippableSkinLevelDataAsset*, struct UEquippableSkinLevelHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.EquippableSkinHandles
// Size: 0x50 (Inherited: 0x00)
struct FEquippableSkinHandles {
	struct TMap<struct UEquippableSkinDataAsset*, struct UEquippableSkinHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.EsportsTeamHandles
// Size: 0x50 (Inherited: 0x00)
struct FEsportsTeamHandles {
	struct TMap<struct UEsportsTeamDataAsset*, struct UEsportsTeamHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.EsportsTeamsByRegionMap
// Size: 0x50 (Inherited: 0x00)
struct FEsportsTeamsByRegionMap {
	struct TMap<enum class EVCTRegion, struct FEsportsTeamIDList> TeamsByRegion; // 0x00(0x50)
};

// ScriptStruct ShooterGame.EsportsTeamIDList
// Size: 0x10 (Inherited: 0x00)
struct FEsportsTeamIDList {
	struct TArray<struct FString> TeamIDs; // 0x00(0x10)
};

// ScriptStruct ShooterGame.TeamsListByRegionMap
// Size: 0x50 (Inherited: 0x00)
struct FTeamsListByRegionMap {
	struct TMap<enum class EVCTRegion, struct FTeamArray> RegionToTeamsListMap; // 0x00(0x50)
};

// ScriptStruct ShooterGame.TeamArray
// Size: 0x10 (Inherited: 0x00)
struct FTeamArray {
	struct TArray<struct UTeamModel*> Teams; // 0x00(0x10)
};

// ScriptStruct ShooterGame.EventHandles
// Size: 0x50 (Inherited: 0x00)
struct FEventHandles {
	struct TMap<struct UEventDataAsset*, struct UEventHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.ExpressionEquipSlotHandles
// Size: 0x50 (Inherited: 0x00)
struct FExpressionEquipSlotHandles {
	struct TMap<struct UExpressionEquipSlotDataAsset*, struct UExpressionEquipSlotHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.ExpressionHandles
// Size: 0x60 (Inherited: 0x00)
struct FExpressionHandles {
	struct TArray<struct UAresBasePrimaryDataAsset*> OrderedAssets; // 0x00(0x10)
	struct TMap<struct UAresBasePrimaryDataAsset*, struct UExpressionHandle*> Handles; // 0x10(0x50)
};

// ScriptStruct ShooterGame.PregameStep
// Size: 0x08 (Inherited: 0x00)
struct FPregameStep {
	int32_t Team; // 0x00(0x04)
	enum class EStepType StepType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct ShooterGame.GameModeHandles
// Size: 0x50 (Inherited: 0x00)
struct FGameModeHandles {
	struct TMap<struct UGameModeDataAsset*, struct UGameModeHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.AmbassadorError
// Size: 0x38 (Inherited: 0x00)
struct FAmbassadorError {
	int32_t HTTPStatus; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString ErrorCode; // 0x08(0x10)
	struct FString Message; // 0x18(0x10)
	struct FString Details; // 0x28(0x10)
};

// ScriptStruct ShooterGame.ImmunityBlockedDamageData
// Size: 0x20 (Inherited: 0x00)
struct FImmunityBlockedDamageData {
	struct AActor* DamageCauser; // 0x00(0x08)
	float DamageIgnored; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UDamageType* DamageType; // 0x10(0x08)
	enum class EAresDamageImmunityCategory DamageImmunityCategory; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ShooterGame.EquippedCharmInstanceMap
// Size: 0x50 (Inherited: 0x00)
struct FEquippedCharmInstanceMap {
	struct TMap<struct FGuid, struct UEquippableCharmInstanceInventoryModel*> InstanceInventory; // 0x00(0x50)
};

// ScriptStruct ShooterGame.TriggerInput
// Size: 0x02 (Inherited: 0x00)
struct FTriggerInput {
	enum class EAresEquippableInput TriggerInput; // 0x00(0x01)
	enum class EAresEquippableInputAction TriggerAction; // 0x01(0x01)
};

// ScriptStruct ShooterGame.JuiceBoxHandles
// Size: 0x50 (Inherited: 0x00)
struct FJuiceBoxHandles {
	struct TMap<struct UJuiceBoxDataAsset*, struct UJuiceBoxHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.PremierLeaderboard
// Size: 0x50 (Inherited: 0x00)
struct FPremierLeaderboard {
	char pad_0[0x30]; // 0x00(0x30)
	int32_t StartRank; // 0x30(0x04)
	int32_t EndRank; // 0x34(0x04)
	int32_t Size; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FPremierLeaderboardEntry> Entries; // 0x40(0x10)
};

// ScriptStruct ShooterGame.PremierLeaderboardEntry
// Size: 0x90 (Inherited: 0x00)
struct FPremierLeaderboardEntry {
	struct FString RosterID; // 0x00(0x10)
	float Score; // 0x10(0x04)
	enum class EPremierTournamentPlacement PlayoffResult; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t Rank; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString RosterName; // 0x20(0x10)
	struct FString Tag; // 0x30(0x10)
	struct FPremierRosterCustomization Customization; // 0x40(0x40)
	int32_t Wins; // 0x80(0x04)
	int32_t Losses; // 0x84(0x04)
	int32_t RoundWins; // 0x88(0x04)
	int32_t RoundLosses; // 0x8c(0x04)
};

// ScriptStruct ShooterGame.PremierRosterCustomization
// Size: 0x40 (Inherited: 0x00)
struct FPremierRosterCustomization {
	struct FString Icon; // 0x00(0x10)
	struct FString PrimaryColor; // 0x10(0x10)
	struct FString SecondaryColor; // 0x20(0x10)
	struct FString TertiaryColor; // 0x30(0x10)
};

// ScriptStruct ShooterGame.LeaderboardPlayer
// Size: 0x78 (Inherited: 0x00)
struct FLeaderboardPlayer {
	struct FString Puuid; // 0x00(0x10)
	struct FString Prefix; // 0x10(0x10)
	struct FString GameName; // 0x20(0x10)
	struct FString TagLine; // 0x30(0x10)
	struct FGuid PlayerCardId; // 0x40(0x10)
	struct FGuid TitleId; // 0x50(0x10)
	int32_t RankedRating; // 0x60(0x04)
	int32_t CompetitiveTier; // 0x64(0x04)
	int32_t LeaderboardRank; // 0x68(0x04)
	int32_t NumberOfWins; // 0x6c(0x04)
	bool IsAnonymized; // 0x70(0x01)
	bool IsBanned; // 0x71(0x01)
	bool IsSeparator; // 0x72(0x01)
	char pad_73[0x5]; // 0x73(0x05)
};

// ScriptStruct ShooterGame.LevelBorderHandles
// Size: 0x50 (Inherited: 0x00)
struct FLevelBorderHandles {
	struct TMap<struct ULevelBorderDataAsset*, struct ULevelBorderHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.MapHandles
// Size: 0x50 (Inherited: 0x00)
struct FMapHandles {
	struct TMap<struct UMapDataAsset*, struct UMapHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.MassRewardsCeremonyHandles
// Size: 0x50 (Inherited: 0x00)
struct FMassRewardsCeremonyHandles {
	struct TMap<struct UMassRewardsCeremonyDataAsset*, struct UMassRewardsCeremonyHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.MatchDetailsDTO
// Size: 0x138 (Inherited: 0x00)
struct FMatchDetailsDTO {
	struct FMatchInfoDTO MatchInfo; // 0x00(0xf8)
	struct TArray<struct FPlayerDetailsDTO> Players; // 0xf8(0x10)
	struct TArray<struct FBotDetailsDTO> Bots; // 0x108(0x10)
	struct TArray<struct FTeamDetailsDTO> Teams; // 0x118(0x10)
	struct TArray<struct FRoundResultDTO> RoundResults; // 0x128(0x10)
};

// ScriptStruct ShooterGame.RoundResultDTO
// Size: 0xa0 (Inherited: 0x00)
struct FRoundResultDTO {
	struct FName WinningTeam; // 0x00(0x0c)
	int32_t RoundNum; // 0x0c(0x04)
	struct FString RoundResult; // 0x10(0x10)
	struct FString RoundCeremony; // 0x20(0x10)
	struct FString BombPlanter; // 0x30(0x10)
	int32_t PlantRoundTime; // 0x40(0x04)
	struct FMapLocationDTO PlantLocation; // 0x44(0x08)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct TArray<struct FPlayerLocationDTO> PlantPlayerLocations; // 0x50(0x10)
	struct FString BombDefuser; // 0x60(0x10)
	int32_t DefuseRoundTime; // 0x70(0x04)
	struct FMapLocationDTO DefuseLocation; // 0x74(0x08)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FPlayerLocationDTO> DefusePlayerLocations; // 0x80(0x10)
	struct TArray<struct FPlayerStatDTO> PlayerStats; // 0x90(0x10)
};

// ScriptStruct ShooterGame.PlayerStatDTO
// Size: 0x1b8 (Inherited: 0x00)
struct FPlayerStatDTO {
	struct FString Subject; // 0x00(0x10)
	struct TArray<struct FKillDetailsDTO> Kills; // 0x10(0x10)
	struct TArray<struct FPlayerRoundDamageDTOV2> Damage; // 0x20(0x10)
	int32_t Score; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FPlayerRoundEconomyInfoDTO Economy; // 0x38(0x40)
	struct FAbilityEffectDTO Ability; // 0x78(0x140)
};

// ScriptStruct ShooterGame.AbilityEffectDTO
// Size: 0x140 (Inherited: 0x00)
struct FAbilityEffectDTO {
	struct TMap<struct FString, int32_t> GrenadeEffects; // 0x00(0x50)
	struct TMap<struct FString, int32_t> Ability1Effects; // 0x50(0x50)
	struct TMap<struct FString, int32_t> Ability2Effects; // 0xa0(0x50)
	struct TMap<struct FString, int32_t> UltimateEffects; // 0xf0(0x50)
};

// ScriptStruct ShooterGame.PlayerRoundEconomyInfoDTO
// Size: 0x40 (Inherited: 0x00)
struct FPlayerRoundEconomyInfoDTO {
	struct FString Subject; // 0x00(0x10)
	int32_t LoadoutValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Weapon; // 0x18(0x10)
	struct FString Armor; // 0x28(0x10)
	int32_t Remaining; // 0x38(0x04)
	int32_t Spent; // 0x3c(0x04)
};

// ScriptStruct ShooterGame.PlayerRoundDamageDTOV2
// Size: 0x20 (Inherited: 0x00)
struct FPlayerRoundDamageDTOV2 {
	struct FString Receiver; // 0x00(0x10)
	int32_t Damage; // 0x10(0x04)
	int32_t Headshots; // 0x14(0x04)
	int32_t Bodyshots; // 0x18(0x04)
	int32_t Legshots; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.KillDetailsDTO
// Size: 0x80 (Inherited: 0x00)
struct FKillDetailsDTO {
	int64_t GameTime; // 0x00(0x08)
	int32_t RoundTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Killer; // 0x10(0x10)
	struct FString Victim; // 0x20(0x10)
	struct FMapLocationDTO VictimLocation; // 0x30(0x08)
	struct TArray<struct FString> Assistants; // 0x38(0x10)
	struct TArray<struct FPlayerLocationDTO> PlayerLocations; // 0x48(0x10)
	struct FDamageInfoDTO FinishingDamage; // 0x58(0x28)
};

// ScriptStruct ShooterGame.DamageInfoDTO
// Size: 0x28 (Inherited: 0x00)
struct FDamageInfoDTO {
	struct FString DamageType; // 0x00(0x10)
	struct FString DamageItem; // 0x10(0x10)
	bool bIsSecondaryFireMode; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct ShooterGame.PlayerLocationDTO
// Size: 0x20 (Inherited: 0x00)
struct FPlayerLocationDTO {
	struct FMapLocationDTO Location; // 0x00(0x08)
	float ViewRadians; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Subject; // 0x10(0x10)
};

// ScriptStruct ShooterGame.MapLocationDTO
// Size: 0x08 (Inherited: 0x00)
struct FMapLocationDTO {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
};

// ScriptStruct ShooterGame.TeamDetailsDTO
// Size: 0xa0 (Inherited: 0x00)
struct FTeamDetailsDTO {
	struct FName TeamID; // 0x00(0x0c)
	bool Won; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int64_t RoundsPlayed; // 0x10(0x08)
	int32_t RoundsWon; // 0x18(0x04)
	int32_t NumPoints; // 0x1c(0x04)
	struct FTournamentRosterInfo RosterInfo; // 0x20(0x80)
};

// ScriptStruct ShooterGame.TournamentRosterInfo
// Size: 0x80 (Inherited: 0x00)
struct FTournamentRosterInfo {
	struct FString RosterID; // 0x00(0x10)
	struct TArray<struct FTournamentRosterMember> Members; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)
	struct FString Tag; // 0x30(0x10)
	struct FString Icon; // 0x40(0x10)
	struct FString PrimaryColor; // 0x50(0x10)
	struct FString SecondaryColor; // 0x60(0x10)
	struct FString TertiaryColor; // 0x70(0x10)
};

// ScriptStruct ShooterGame.TournamentRosterMember
// Size: 0x10 (Inherited: 0x00)
struct FTournamentRosterMember {
	struct FString Subject; // 0x00(0x10)
};

// ScriptStruct ShooterGame.BotDetailsDTO
// Size: 0x68 (Inherited: 0x00)
struct FBotDetailsDTO {
	struct FString Subject; // 0x00(0x10)
	struct FName TeamID; // 0x10(0x0c)
	struct FGuid CharacterID; // 0x1c(0x10)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FPlayerStatsDTO Stats; // 0x30(0x38)
};

// ScriptStruct ShooterGame.PlayerStatsDTO
// Size: 0x38 (Inherited: 0x00)
struct FPlayerStatsDTO {
	int32_t Score; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	int64_t RoundsPlayed; // 0x08(0x08)
	int32_t Kills; // 0x10(0x04)
	int32_t Deaths; // 0x14(0x04)
	int32_t Assists; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	int64_t PlaytimeMillis; // 0x20(0x08)
	struct FAbilityUsageDTO AbilityCasts; // 0x28(0x10)
};

// ScriptStruct ShooterGame.AbilityUsageDTO
// Size: 0x10 (Inherited: 0x00)
struct FAbilityUsageDTO {
	int32_t GrenadeCasts; // 0x00(0x04)
	int32_t Ability1Casts; // 0x04(0x04)
	int32_t Ability2Casts; // 0x08(0x04)
	int32_t UltimateCasts; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.PlayerDetailsDTO
// Size: 0x178 (Inherited: 0x00)
struct FPlayerDetailsDTO {
	struct FString Subject; // 0x00(0x10)
	struct FString GameName; // 0x10(0x10)
	struct FString TagLine; // 0x20(0x10)
	struct FPlatformInfoDTO PlatformInfo; // 0x30(0x50)
	enum class EAresTempType PlatformType; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	struct FName TeamID; // 0x84(0x0c)
	struct FString PartyId; // 0x90(0x10)
	struct FGuid CharacterID; // 0xa0(0x10)
	struct FPlayerStatsDTO Stats; // 0xb0(0x38)
	int32_t CompetitiveTier; // 0xe8(0x04)
	bool IsObserver; // 0xec(0x01)
	char pad_ED[0x3]; // 0xed(0x03)
	struct FGuid PlayerCard; // 0xf0(0x10)
	struct FGuid PlayerTitle; // 0x100(0x10)
	struct FGuid PreferredLevelBorder; // 0x110(0x10)
	int32_t AccountLevel; // 0x120(0x04)
	char pad_124[0x4]; // 0x124(0x04)
	struct FPremierPrestigeDetailsDTO PremierPrestige; // 0x128(0x50)
};

// ScriptStruct ShooterGame.PremierPrestigeDetailsDTO
// Size: 0x50 (Inherited: 0x00)
struct FPremierPrestigeDetailsDTO {
	struct FString RosterID; // 0x00(0x10)
	struct FString RosterName; // 0x10(0x10)
	struct FString RosterTag; // 0x20(0x10)
	bool ShowTag; // 0x30(0x01)
	bool ShowPlating; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct FString Plating; // 0x38(0x10)
	bool ShowAura; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct ShooterGame.PlatformInfoDTO
// Size: 0x50 (Inherited: 0x00)
struct FPlatformInfoDTO {
	struct FString PlatformType; // 0x00(0x10)
	struct FString PlatformOS; // 0x10(0x10)
	struct FString PlatformOSVersion; // 0x20(0x10)
	struct FString PlatformChipset; // 0x30(0x10)
	struct FString PlatformDevice; // 0x40(0x10)
};

// ScriptStruct ShooterGame.MatchInfoDTO
// Size: 0xf8 (Inherited: 0x00)
struct FMatchInfoDTO {
	struct FString MatchID; // 0x00(0x10)
	struct FString MapID; // 0x10(0x10)
	struct FString GameMode; // 0x20(0x10)
	int32_t MatchType; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString GamePodID; // 0x38(0x10)
	struct FString GameVersion; // 0x48(0x10)
	int64_t GameLengthMillis; // 0x58(0x08)
	int64_t GameStartMillis; // 0x60(0x08)
	struct FString ProvisioningFlowID; // 0x68(0x10)
	enum class EProvisioningFlowID ProvisioningFlowEnum; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FString QueueID; // 0x80(0x10)
	struct FString tournamentid; // 0x90(0x10)
	struct FPremierMatchInfoDTO PremierMatchInfo; // 0xa0(0x40)
	struct FGuid SeasonID; // 0xe0(0x10)
	bool IsCompleted; // 0xf0(0x01)
	bool IsRanked; // 0xf1(0x01)
	bool IsReplayRecorded; // 0xf2(0x01)
	char pad_F3[0x1]; // 0xf3(0x01)
	float NewMapLossReductionModifier; // 0xf4(0x04)
};

// ScriptStruct ShooterGame.PremierMatchInfoDTO
// Size: 0x40 (Inherited: 0x00)
struct FPremierMatchInfoDTO {
	struct FString tournamentid; // 0x00(0x10)
	struct FString MatchupID; // 0x10(0x10)
	struct FGuid PremierSeasonID; // 0x20(0x10)
	struct FGuid PremierEventID; // 0x30(0x10)
};

// ScriptStruct ShooterGame.AresMatchResult
// Size: 0x10 (Inherited: 0x00)
struct FAresMatchResult {
	struct UBaseTeamComponent* WinningTeam; // 0x00(0x08)
	enum class EMatchCompletionState CompletionState; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ShooterGame.FullMatchHistory
// Size: 0x20 (Inherited: 0x00)
struct FFullMatchHistory {
	struct TArray<struct FMatchDetailsDTO> History; // 0x00(0x10)
	struct FString Subject; // 0x10(0x10)
};

// ScriptStruct ShooterGame.MatchmakingQueueHandles
// Size: 0x50 (Inherited: 0x00)
struct FMatchmakingQueueHandles {
	struct TMap<struct UMatchmakingQueueDataAsset*, struct UMatchmakingQueueHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.CurrentTeamViewState
// Size: 0x38 (Inherited: 0x00)
struct FCurrentTeamViewState {
	char pad_0[0x30]; // 0x00(0x30)
	struct UEsportsImageLoaderBase* Logo; // 0x30(0x08)
};

// ScriptStruct ShooterGame.CurrentTeamViewStateV2
// Size: 0x18 (Inherited: 0x00)
struct FCurrentTeamViewStateV2 {
	char pad_0[0x10]; // 0x00(0x10)
	struct TWeakObjectPtr<struct UEsportsTeamModelV2> TeamModel; // 0x10(0x08)
};

// ScriptStruct ShooterGame.MenuMusic
// Size: 0x10 (Inherited: 0x00)
struct FMenuMusic {
	struct UAkAudioEvent* Default; // 0x00(0x08)
	struct UAkAudioEvent* FindMatch; // 0x08(0x08)
};

// ScriptStruct ShooterGame.UnifiedChatMessage
// Size: 0xd8 (Inherited: 0x00)
struct FUnifiedChatMessage {
	struct FText SenderDisplayName; // 0x00(0x18)
	struct FString SenderSubject; // 0x18(0x10)
	bool SenderIsMe; // 0x28(0x01)
	enum class EMessageContentType ContentType; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct FText DisplayMessage; // 0x30(0x18)
	struct TArray<struct FMessagePart> MessageParts; // 0x48(0x10)
	struct TArray<struct FMessagePart> OriginalMessageParts; // 0x58(0x10)
	struct FDateTime Timestamp; // 0x68(0x08)
	enum class EAresAlliance SenderTeamAlliance; // 0x70(0x01)
	enum class EChatRoomType RoomType; // 0x71(0x01)
	char pad_72[0x2]; // 0x72(0x02)
	struct FName Team; // 0x74(0x0c)
	struct FString ConversationID; // 0x80(0x10)
	struct FString MessageID; // 0x90(0x10)
	struct FString RecipientDisplayName; // 0xa0(0x10)
	bool bRead; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FString OriginatingSystem; // 0xb8(0x10)
	bool bNotificationShown; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct UEmojiMapping* EmojiMapping; // 0xd0(0x08)
};

// ScriptStruct ShooterGame.MessagePart
// Size: 0x40 (Inherited: 0x00)
struct FMessagePart {
	enum class EMessagePartType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Message; // 0x08(0x10)
	struct FText NotificationTarget; // 0x18(0x18)
	struct FString EmojiKey; // 0x30(0x10)
};

// ScriptStruct ShooterGame.MUCMessage
// Size: 0xd0 (Inherited: 0x00)
struct FMUCMessage {
	struct FText Body; // 0x00(0x18)
	struct FString Pid; // 0x18(0x10)
	struct FString Time; // 0x28(0x10)
	struct FString Cid; // 0x38(0x10)
	struct FString ID; // 0x48(0x10)
	struct FText Name; // 0x58(0x18)
	bool Read; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct FString GameName; // 0x78(0x10)
	struct FString GameTag; // 0x88(0x10)
	enum class ETextChatRoomType MessageType; // 0x98(0x01)
	bool DroppedDueToThrottle; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
	struct FString Type; // 0xa0(0x10)
	struct FString game_name; // 0xb0(0x10)
	struct FString game_tag; // 0xc0(0x10)
};

// ScriptStruct ShooterGame.MissionHandles
// Size: 0x50 (Inherited: 0x00)
struct FMissionHandles {
	struct TMap<struct UMissionDataAsset*, struct UMissionHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.MMRCompetitiveUpdates
// Size: 0x28 (Inherited: 0x00)
struct FMMRCompetitiveUpdates {
	struct FString Subject; // 0x00(0x10)
	struct TArray<struct FMMRMatchInfo> Matches; // 0x10(0x10)
	int64_t Version; // 0x20(0x08)
};

// ScriptStruct ShooterGame.MMRMatchInfo
// Size: 0x38 (Inherited: 0x00)
struct FMMRMatchInfo {
	struct FString MatchID; // 0x00(0x10)
	int32_t TierBeforeUpdate; // 0x10(0x04)
	int32_t TierAfterUpdate; // 0x14(0x04)
	int32_t RankedRatingBeforeUpdate; // 0x18(0x04)
	int32_t RankedRatingAfterUpdate; // 0x1c(0x04)
	int32_t RankedRatingEarned; // 0x20(0x04)
	int32_t AFKPenalty; // 0x24(0x04)
	int32_t RankedRatingPerformanceBonus; // 0x28(0x04)
	int32_t RankedRatingRefundApplied; // 0x2c(0x04)
	int32_t NewMapIncentiveRRForgiven; // 0x30(0x04)
	bool WasDerankProtected; // 0x34(0x01)
	bool WasDerankProtectionReplenished; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
};

// ScriptStruct ShooterGame.Leaderboard
// Size: 0x88 (Inherited: 0x00)
struct FLeaderboard {
	struct FGuid SeasonID; // 0x00(0x10)
	struct TMap<int32_t, struct FLeaderboardTierDetails> TierDetails; // 0x10(0x50)
	int32_t TotalPlayers; // 0x60(0x04)
	int32_t StartIndex; // 0x64(0x04)
	struct FString Query; // 0x68(0x10)
	struct TArray<struct FLeaderboardPlayer> Players; // 0x78(0x10)
};

// ScriptStruct ShooterGame.LeaderboardTierDetails
// Size: 0x0c (Inherited: 0x00)
struct FLeaderboardTierDetails {
	int32_t RankedRatingThreshold; // 0x00(0x04)
	int32_t StartingPage; // 0x04(0x04)
	int32_t StartingIndex; // 0x08(0x04)
};

// ScriptStruct ShooterGame.MMRPlayer
// Size: 0xd8 (Inherited: 0x00)
struct FMMRPlayer {
	struct FString Subject; // 0x00(0x10)
	bool NewPlayerExperienceFinished; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FMMRMatchInfo LatestCompetitiveUpdate; // 0x18(0x38)
	int64_t Version; // 0x50(0x08)
	struct TMap<struct FString, struct FMMRQueueSkill> QueueSkills; // 0x58(0x50)
	bool IsLeaderboardAnonymized; // 0xa8(0x01)
	bool IsActRankBadgeHidden; // 0xa9(0x01)
	char pad_AA[0x6]; // 0xaa(0x06)
	struct FString OnboardingStatus; // 0xb0(0x10)
	bool OnboardingFlowV2Enabled; // 0xc0(0x01)
	bool IsAtDerankProtectedTier; // 0xc1(0x01)
	char pad_C2[0x6]; // 0xc2(0x06)
	int64_t DerankProtectedGamesRemaining; // 0xc8(0x08)
	enum class EDerankProtectionStatus DerankProtectedStatus; // 0xd0(0x01)
	char pad_D1[0x7]; // 0xd1(0x07)
};

// ScriptStruct ShooterGame.MMRQueueSkill
// Size: 0x68 (Inherited: 0x00)
struct FMMRQueueSkill {
	int32_t CompetitiveTier; // 0x00(0x04)
	int32_t TotalGamesNeededForRating; // 0x04(0x04)
	int32_t RecentGamesNeededForRating; // 0x08(0x04)
	int32_t CurrentSeasonGamesNeededForRating; // 0x0c(0x04)
	int32_t TotalGamesNeededForLeaderboard; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<struct FGuid, struct FMMRSeasonInfo> SeasonalInfoBySeasonID; // 0x18(0x50)
};

// ScriptStruct ShooterGame.MMRSeasonInfo
// Size: 0x88 (Inherited: 0x00)
struct FMMRSeasonInfo {
	struct FGuid SeasonID; // 0x00(0x10)
	int32_t NumberOfWins; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<int32_t, int32_t> WinsByTier; // 0x18(0x50)
	int32_t CapstoneWins; // 0x68(0x04)
	int32_t Rank; // 0x6c(0x04)
	int32_t TotalWinsNeededForRank; // 0x70(0x04)
	int32_t LeaderboardRank; // 0x74(0x04)
	int32_t RankedRating; // 0x78(0x04)
	int32_t CompetitiveTier; // 0x7c(0x04)
	int32_t GamesNeededForRating; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct ShooterGame.AresMonitorInfo
// Size: 0x78 (Inherited: 0x00)
struct FAresMonitorInfo {
	struct FString Name; // 0x00(0x10)
	bool bIsPrimary; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FAresResolutionInfo> ResolutionInfo; // 0x18(0x10)
	int32_t NativeWidth; // 0x28(0x04)
	int32_t NativeHeight; // 0x2c(0x04)
	int32_t MaxResolutionWidth; // 0x30(0x04)
	int32_t MaxResolutionHeight; // 0x34(0x04)
	char pad_38[0x40]; // 0x38(0x40)
};

// ScriptStruct ShooterGame.AresResolutionInfo
// Size: 0x0c (Inherited: 0x00)
struct FAresResolutionInfo {
	int32_t Width; // 0x00(0x04)
	int32_t Height; // 0x04(0x04)
	int32_t RefreshRate; // 0x08(0x04)
};

// ScriptStruct ShooterGame.EventIDs
// Size: 0x20 (Inherited: 0x00)
struct FEventIDs {
	struct FString LeagueID; // 0x00(0x10)
	struct FString tournamentid; // 0x10(0x10)
};

// ScriptStruct ShooterGame.RGICommonNavBarDetails
// Size: 0x78 (Inherited: 0x00)
struct FRGICommonNavBarDetails {
	struct FText Text; // 0x00(0x18)
	struct UTexture2D* Icon; // 0x18(0x08)
	struct UAresCommonButton* ButtonClass; // 0x20(0x08)
	struct FString NavUrl; // 0x28(0x10)
	struct FWildcard Data; // 0x38(0x40)
};

// ScriptStruct ShooterGame.NPEObjectiveEvent
// Size: 0x68 (Inherited: 0x00)
struct FNPEObjectiveEvent {
	enum class EObjectiveEventType EventType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString ModuleName; // 0x08(0x10)
	struct FString MissionName; // 0x18(0x10)
	struct FString ObjectiveName; // 0x28(0x10)
	float TotalTimeTaken; // 0x38(0x04)
	float TimeAFK; // 0x3c(0x04)
	int32_t Retries; // 0x40(0x04)
	int32_t ShotsFired; // 0x44(0x04)
	int32_t ShotsLanded; // 0x48(0x04)
	int32_t Headshots; // 0x4c(0x04)
	int32_t Deaths; // 0x50(0x04)
	float DamageTaken; // 0x54(0x04)
	float StartTime; // 0x58(0x04)
	float LastAFKStart; // 0x5c(0x04)
	bool bIsComplete; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct ShooterGame.ObjectiveHandles
// Size: 0x50 (Inherited: 0x00)
struct FObjectiveHandles {
	struct TMap<struct UObjectiveDataAsset*, struct UObjectiveHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.ActiveOverhealHandle
// Size: 0x04 (Inherited: 0x00)
struct FActiveOverhealHandle {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct ShooterGame.PartyData
// Size: 0x68 (Inherited: 0x00)
struct FPartyData {
	struct FString ID; // 0x00(0x10)
	struct FString PartyLeaderID; // 0x10(0x10)
	struct TArray<struct FPartyMemberData> MemberList; // 0x20(0x10)
	struct TArray<struct FPartyMemberData> FilteredMemberList; // 0x30(0x10)
	int32_t PartySize; // 0x40(0x04)
	int32_t MaxPartySize; // 0x44(0x04)
	enum class EAresPartyAccessibility PartyAccessibility; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FString ClientVersion; // 0x50(0x10)
	enum class EAresTempType PrecisePlatformTypes; // 0x60(0x01)
	bool IsCrossPlayEnabled; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
};

// ScriptStruct ShooterGame.PartyMemberData
// Size: 0x48 (Inherited: 0x00)
struct FPartyMemberData {
	struct FString ID; // 0x00(0x10)
	struct FString FullName; // 0x10(0x10)
	struct FString GameName; // 0x20(0x10)
	struct FString TagLine; // 0x30(0x10)
	struct FAresSocialPresenceState PresenceState; // 0x40(0x05)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct ShooterGame.AresSocialPresenceState
// Size: 0x05 (Inherited: 0x00)
struct FAresSocialPresenceState {
	enum class EAresSocialPresenceType PresenceType; // 0x00(0x01)
	enum class EAresSocialStatusTemplate StatusTemplate; // 0x01(0x01)
	enum class EAresSocialPartyCompatibility PartyJoinCompatibility; // 0x02(0x01)
	enum class EAresSocialPartyCompatibility PartyInviteCompatibility; // 0x03(0x01)
	bool bIsInParty; // 0x04(0x01)
};

// ScriptStruct ShooterGame.PatchNotes
// Size: 0x40 (Inherited: 0x00)
struct FPatchNotes {
	struct FString ID; // 0x00(0x10)
	struct FString BuildVersion; // 0x10(0x10)
	struct FString Language; // 0x20(0x10)
	struct TArray<struct FTopLevelPatchNoteElement> Content; // 0x30(0x10)
};

// ScriptStruct ShooterGame.TopLevelPatchNoteElement
// Size: 0x38 (Inherited: 0x00)
struct FTopLevelPatchNoteElement {
	struct FString Type; // 0x00(0x10)
	struct FString Content; // 0x10(0x10)
	bool Title; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FPatchNoteListItem> Items; // 0x28(0x10)
};

// ScriptStruct ShooterGame.PatchNoteListItem
// Size: 0x20 (Inherited: 0x00)
struct FPatchNoteListItem {
	struct FString Type; // 0x00(0x10)
	struct FString Content; // 0x10(0x10)
};

// ScriptStruct ShooterGame.MatchupTeamViewModelPairV2
// Size: 0x20 (Inherited: 0x00)
struct FMatchupTeamViewModelPairV2 {
	struct UPickemMatchupTeamViewModelV2* TeamOne; // 0x00(0x08)
	struct UPickemMatchupTeamViewModelV2* TeamTwo; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PingInfo
// Size: 0x18 (Inherited: 0x00)
struct FPingInfo {
	struct FString GamePodID; // 0x00(0x10)
	int32_t Ping; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.PlayerCardHandles
// Size: 0x50 (Inherited: 0x00)
struct FPlayerCardHandles {
	struct TMap<struct UPlayerCardDataAsset*, struct UPlayerCardHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.PlayerKillData
// Size: 0x70 (Inherited: 0x00)
struct FPlayerKillData {
	struct AShooterPlayerState* Victim; // 0x00(0x08)
	struct FKillingEquippableInfo KillingEquippableInfo; // 0x08(0x38)
	struct TArray<struct AShooterPlayerState*> AssistingPlayers; // 0x40(0x10)
	struct FKillingDamageInfo DamageInfo; // 0x50(0x10)
	float GameTimeElapsed; // 0x60(0x04)
	float RoundTimestamp; // 0x64(0x04)
	int32_t RoundNumber; // 0x68(0x04)
	bool bDidKillTriggerFinisher; // 0x6c(0x01)
	char pad_6D[0x3]; // 0x6d(0x03)
};

// ScriptStruct ShooterGame.KillingDamageInfo
// Size: 0x10 (Inherited: 0x00)
struct FKillingDamageInfo {
	struct UDamageType* DamageType; // 0x00(0x08)
	float DamageTaken; // 0x08(0x04)
	enum class EAresRegionalDamage DamageRegion; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct ShooterGame.KillingEquippableInfo
// Size: 0x38 (Inherited: 0x00)
struct FKillingEquippableInfo {
	struct AAresEquippable* KillingEquippableClass; // 0x00(0x08)
	struct TSoftClassPtr<UObject> WeaponTheme; // 0x08(0x30)
};

// ScriptStruct ShooterGame.EsportsPlayerStatsListDTO
// Size: 0x10 (Inherited: 0x00)
struct FEsportsPlayerStatsListDTO {
	struct TArray<struct FEsportsPlayerStatsDTO> PlayerStatsList; // 0x00(0x10)
};

// ScriptStruct ShooterGame.EsportsPlayerStatsDTO
// Size: 0x78 (Inherited: 0x00)
struct FEsportsPlayerStatsDTO {
	struct FString Handle; // 0x00(0x10)
	struct FString FirstName; // 0x10(0x10)
	struct FString LastName; // 0x20(0x10)
	int32_t Year; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString ID; // 0x38(0x10)
	int32_t TotalGames; // 0x48(0x04)
	float AvgCombatScore; // 0x4c(0x04)
	float KDA; // 0x50(0x04)
	float KD; // 0x54(0x04)
	float HeadshotPercent; // 0x58(0x04)
	float AvgDamagePerRound; // 0x5c(0x04)
	float AvgKillsPerRound; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct FEsportsPlayerAgentStatsDTO> StatsPerAgent; // 0x68(0x10)
};

// ScriptStruct ShooterGame.EsportsPlayerAgentStatsDTO
// Size: 0x30 (Inherited: 0x00)
struct FEsportsPlayerAgentStatsDTO {
	struct FString AgentGuid; // 0x00(0x10)
	int32_t NumAgentGames; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString MostPlayedMap; // 0x18(0x10)
	int32_t MostPlayedMapGames; // 0x28(0x04)
	float MostPlayedMapWinrate; // 0x2c(0x04)
};

// ScriptStruct ShooterGame.PlayerTitleHandles
// Size: 0x50 (Inherited: 0x00)
struct FPlayerTitleHandles {
	struct TMap<struct UPlayerTitleDataAsset*, struct UPlayerTitleHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.PreferredGamePodMap
// Size: 0x50 (Inherited: 0x00)
struct FPreferredGamePodMap {
	struct TMap<struct FString, bool> PreferredGamePods; // 0x00(0x50)
};

// ScriptStruct ShooterGame.PremierConferenceHandles
// Size: 0x50 (Inherited: 0x00)
struct FPremierConferenceHandles {
	struct TMap<struct UPremierConferenceDataAsset*, struct UPremierConferenceHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.PremierEligibility
// Size: 0x48 (Inherited: 0x00)
struct FPremierEligibility {
	struct FString Subject; // 0x00(0x10)
	bool AccountVerificationStatus; // 0x10(0x01)
	bool LevelRequirementStatus; // 0x11(0x01)
	bool RankedPlacementCompletionStatus; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct FPlayerRestrictions PlayerRestrictions; // 0x18(0x30)
};

// ScriptStruct ShooterGame.PlayerRestrictions
// Size: 0x30 (Inherited: 0x00)
struct FPlayerRestrictions {
	int64_t TimeUntilIneligibilityExpiresInSeconds; // 0x00(0x08)
	int64_t TimeUntilDisqualificationExpiresInSeconds; // 0x08(0x08)
	struct FString DisqualificationSeasonID; // 0x10(0x10)
	struct TArray<struct FString> Sources; // 0x20(0x10)
};

// ScriptStruct ShooterGame.PremierPlayerCrests
// Size: 0x68 (Inherited: 0x00)
struct FPremierPlayerCrests {
	struct FString Puuid; // 0x00(0x10)
	struct FDateTime ContenderEligibilityExpiry; // 0x10(0x08)
	struct TMap<struct FGuid, struct FPremierPlayerSeason> Seasons; // 0x18(0x50)
};

// ScriptStruct ShooterGame.PremierPlayerSeason
// Size: 0xc0 (Inherited: 0x00)
struct FPremierPlayerSeason {
	struct FString SeasonID; // 0x00(0x10)
	struct FString RosterID; // 0x10(0x10)
	struct FString RosterName; // 0x20(0x10)
	struct FString RosterTag; // 0x30(0x10)
	struct FString Conference; // 0x40(0x10)
	int32_t Division; // 0x50(0x04)
	bool IsProvisionalDivision; // 0x54(0x01)
	bool PromotionApplied; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
	int64_t Points; // 0x58(0x08)
	struct TMap<enum class EPremierEventType, int64_t> GamesPlayedByEventType; // 0x60(0x50)
	enum class EPremierCrestType Crest; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	int64_t ChampionshipPointRequirement; // 0xb8(0x08)
};

// ScriptStruct ShooterGame.PremierRosterRestrictions
// Size: 0x50 (Inherited: 0x00)
struct FPremierRosterRestrictions {
	struct TMap<struct FString, struct FPlayerRestrictions> PlayerRestrictions; // 0x00(0x50)
};

// ScriptStruct ShooterGame.PremierRosterV2
// Size: 0x268 (Inherited: 0x00)
struct FPremierRosterV2 {
	struct FString RosterID; // 0x00(0x10)
	struct FString Affinity; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)
	struct FString Tag; // 0x30(0x10)
	struct FPremierRosterCustomization Customization; // 0x40(0x40)
	struct TArray<struct FPremierRosterV2Member> Members; // 0x80(0x10)
	struct TArray<struct FPremierRosterV2Invite> Invites; // 0x90(0x10)
	struct TArray<struct FPremierRosterV2Lock> Locks; // 0xa0(0x10)
	struct FPremierRosterV2SeasonData Season; // 0xb0(0x118)
	struct TMap<struct FString, struct FPremierRosterV2SeasonData> SeasonalInfoBySeasonID; // 0x1c8(0x50)
	struct FPremierRosterPrestige Prestige; // 0x218(0x18)
	int32_t MinimumRequiredMembersForEnrollment; // 0x230(0x04)
	int32_t MatchesSinceReset; // 0x234(0x04)
	int32_t TournamentsSinceReset; // 0x238(0x04)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct FPremierRosterV2Version Version; // 0x240(0x10)
	int64_t UpdatedAt; // 0x250(0x08)
	int64_t CreatedAt; // 0x258(0x08)
	bool IsForceRenamed; // 0x260(0x01)
	char pad_261[0x7]; // 0x261(0x07)
};

// ScriptStruct ShooterGame.PremierRosterV2Version
// Size: 0x10 (Inherited: 0x00)
struct FPremierRosterV2Version {
	int64_t SocialVersion; // 0x00(0x08)
	int64_t PremierVersion; // 0x08(0x08)
};

// ScriptStruct ShooterGame.PremierRosterPrestige
// Size: 0x18 (Inherited: 0x00)
struct FPremierRosterPrestige {
	bool EarnedPrestige; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Plating; // 0x08(0x10)
};

// ScriptStruct ShooterGame.PremierRosterV2SeasonData
// Size: 0x118 (Inherited: 0x00)
struct FPremierRosterV2SeasonData {
	struct FGuid ID; // 0x00(0x10)
	bool IsEnrolled; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString Conference; // 0x18(0x10)
	int32_t Division; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString RosterType; // 0x30(0x10)
	bool IsProvisionalDivision; // 0x40(0x01)
	bool PromotionApplied; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	int64_t Points; // 0x48(0x08)
	int32_t Wins; // 0x50(0x04)
	int32_t GamesPlayed; // 0x54(0x04)
	enum class EPremierCrestType Crest; // 0x58(0x01)
	enum class EPremierPrestigePlating Plating; // 0x59(0x01)
	char pad_5A[0x6]; // 0x5a(0x06)
	struct TMap<struct FString, struct FPremierMatch> Matches; // 0x60(0x50)
	struct TMap<struct FString, struct FPremierTournament> Tournaments; // 0xb0(0x50)
	struct TArray<struct FPremierBye> Byes; // 0x100(0x10)
	bool HasEarnedPromotionForNextSeason; // 0x110(0x01)
	bool HasEarnedPrestige; // 0x111(0x01)
	char pad_112[0x6]; // 0x112(0x06)
};

// ScriptStruct ShooterGame.PremierBye
// Size: 0x50 (Inherited: 0x00)
struct FPremierBye {
	struct FString SeasonID; // 0x00(0x10)
	struct FString EventID; // 0x10(0x10)
	int64_t ByeAwardedMillis; // 0x20(0x08)
	struct FPointDeltas PointDeltas; // 0x28(0x18)
	struct TArray<struct FString> Participants; // 0x40(0x10)
};

// ScriptStruct ShooterGame.PointDeltas
// Size: 0x18 (Inherited: 0x00)
struct FPointDeltas {
	int64_t Before; // 0x00(0x08)
	int64_t After; // 0x08(0x08)
	int64_t Earned; // 0x10(0x08)
};

// ScriptStruct ShooterGame.PremierTournament
// Size: 0x98 (Inherited: 0x00)
struct FPremierTournament {
	struct FString tournamentid; // 0x00(0x10)
	struct FString EventID; // 0x10(0x10)
	int32_t Placement; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FPointDeltas PointDeltas; // 0x28(0x18)
	int64_t StartTime; // 0x40(0x08)
	struct TMap<struct FString, struct FPremierTournamentMatch> Matches; // 0x48(0x50)
};

// ScriptStruct ShooterGame.PremierTournamentMatch
// Size: 0x28 (Inherited: 0x00)
struct FPremierTournamentMatch {
	struct FString MatchID; // 0x00(0x10)
	struct FString BracketType; // 0x10(0x10)
	int32_t TotalRounds; // 0x20(0x04)
	int32_t RoundNumber; // 0x24(0x04)
};

// ScriptStruct ShooterGame.PremierMatch
// Size: 0x78 (Inherited: 0x00)
struct FPremierMatch {
	struct FString MatchID; // 0x00(0x10)
	struct FString SeasonID; // 0x10(0x10)
	struct FString EventID; // 0x20(0x10)
	int64_t StartTime; // 0x30(0x08)
	struct FPointDeltas PointDeltas; // 0x38(0x18)
	enum class EMatchOutcome Outcome; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TArray<struct FString> Participants; // 0x58(0x10)
	struct FString OpponentRosterID; // 0x68(0x10)
};

// ScriptStruct ShooterGame.PremierRosterV2Lock
// Size: 0x30 (Inherited: 0x00)
struct FPremierRosterV2Lock {
	struct FString Name; // 0x00(0x10)
	struct FString ClientName; // 0x10(0x10)
	int64_t CreatedAt; // 0x20(0x08)
	int64_t ExpiresAt; // 0x28(0x08)
};

// ScriptStruct ShooterGame.PremierRosterV2Invite
// Size: 0x58 (Inherited: 0x00)
struct FPremierRosterV2Invite {
	struct FString RosterID; // 0x00(0x10)
	struct FString RosterName; // 0x10(0x10)
	struct FString RosterTag; // 0x20(0x10)
	struct FString Puuid; // 0x30(0x10)
	struct FString SenderPuuid; // 0x40(0x10)
	int64_t CreatedAt; // 0x50(0x08)
};

// ScriptStruct ShooterGame.PremierRosterV2Member
// Size: 0x30 (Inherited: 0x00)
struct FPremierRosterV2Member {
	struct FString Puuid; // 0x00(0x10)
	struct FString Role; // 0x10(0x10)
	int64_t RoleID; // 0x20(0x08)
	int64_t CreatedAt; // 0x28(0x08)
};

// ScriptStruct ShooterGame.Roster
// Size: 0xf8 (Inherited: 0x00)
struct FRoster {
	struct FString Name; // 0x00(0x10)
	struct FString Tag; // 0x10(0x10)
	struct FString RosterID; // 0x20(0x10)
	int64_t Version; // 0x30(0x08)
	struct FString Realm; // 0x38(0x10)
	struct TArray<struct FRosterMember> Members; // 0x48(0x10)
	struct TArray<struct FRosterInvite> Invites; // 0x58(0x10)
	struct FRosterMetadata MetaData; // 0x68(0x70)
	struct TArray<struct FRosterLock> Locks; // 0xd8(0x10)
	int64_t UpdatedAt; // 0xe8(0x08)
	int64_t CreatedAt; // 0xf0(0x08)
};

// ScriptStruct ShooterGame.RosterLock
// Size: 0x30 (Inherited: 0x00)
struct FRosterLock {
	struct FString Name; // 0x00(0x10)
	struct FString ClientName; // 0x10(0x10)
	int64_t CreatedAt; // 0x20(0x08)
	int64_t ExpiresAt; // 0x28(0x08)
};

// ScriptStruct ShooterGame.RosterMetadata
// Size: 0x70 (Inherited: 0x00)
struct FRosterMetadata {
	struct FRosterVerifiedMetadata Verified; // 0x00(0x30)
	struct FRosterUnverifiedMetadata Unverified; // 0x30(0x40)
};

// ScriptStruct ShooterGame.RosterUnverifiedMetadata
// Size: 0x40 (Inherited: 0x00)
struct FRosterUnverifiedMetadata {
	struct FUnverifiedMetadataPersonalization Personalization; // 0x00(0x40)
};

// ScriptStruct ShooterGame.UnverifiedMetadataPersonalization
// Size: 0x40 (Inherited: 0x00)
struct FUnverifiedMetadataPersonalization {
	struct FString Icon; // 0x00(0x10)
	struct FString PrimaryColor; // 0x10(0x10)
	struct FString SecondaryColor; // 0x20(0x10)
	struct FString TertiaryColor; // 0x30(0x10)
};

// ScriptStruct ShooterGame.RosterVerifiedMetadata
// Size: 0x30 (Inherited: 0x00)
struct FRosterVerifiedMetadata {
	struct FRosterProductAffinityMetadata ProductAffinity; // 0x00(0x30)
};

// ScriptStruct ShooterGame.RosterProductAffinityMetadata
// Size: 0x30 (Inherited: 0x00)
struct FRosterProductAffinityMetadata {
	struct FString Name; // 0x00(0x10)
	struct FString GameShardZone; // 0x10(0x10)
	struct FString Affinity; // 0x20(0x10)
};

// ScriptStruct ShooterGame.RosterInvite
// Size: 0x58 (Inherited: 0x00)
struct FRosterInvite {
	struct FString RosterID; // 0x00(0x10)
	struct FString RosterName; // 0x10(0x10)
	struct FString RosterTag; // 0x20(0x10)
	struct FString Puuid; // 0x30(0x10)
	struct FString SenderPuuid; // 0x40(0x10)
	int64_t CreatedAt; // 0x50(0x08)
};

// ScriptStruct ShooterGame.RosterMember
// Size: 0x30 (Inherited: 0x00)
struct FRosterMember {
	struct FString Puuid; // 0x00(0x10)
	struct FString Role; // 0x10(0x10)
	enum class ERosterMemberRole RoleEnum; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	int64_t CreatedAt; // 0x28(0x08)
};

// ScriptStruct ShooterGame.PremierSeasonHandles
// Size: 0x50 (Inherited: 0x00)
struct FPremierSeasonHandles {
	struct TMap<struct UPremierSeasonDataAsset*, struct UPremierSeasonHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.TournamentMatchupScores
// Size: 0x70 (Inherited: 0x00)
struct FTournamentMatchupScores {
	int32_t GameIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString GameID; // 0x08(0x10)
	int64_t UpdateDate; // 0x18(0x08)
	struct TMap<struct FString, int64_t> Scores; // 0x20(0x50)
};

// ScriptStruct ShooterGame.TournamentOverview
// Size: 0x80 (Inherited: 0x00)
struct FTournamentOverview {
	struct FTournament Tournament; // 0x00(0x50)
	struct TArray<struct FParticipant> Participants; // 0x50(0x10)
	struct TArray<struct FMatchup> Matchups; // 0x60(0x10)
	struct TArray<struct FRoundConfig> Rounds; // 0x70(0x10)
};

// ScriptStruct ShooterGame.RoundConfig
// Size: 0x20 (Inherited: 0x00)
struct FRoundConfig {
	int32_t RoundNumber; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	int64_t ScheduledStartDateEpochSeconds; // 0x08(0x08)
	int64_t ScheduledEndDateEpochSeconds; // 0x10(0x08)
	int32_t BestOfN; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.Matchup
// Size: 0x60 (Inherited: 0x00)
struct FMatchup {
	struct FString MatchupID; // 0x00(0x10)
	int32_t RoundNumber; // 0x10(0x04)
	enum class EMatchupBracketType BracketType; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	int32_t WinnersNextMatchupNumber; // 0x18(0x04)
	int32_t LosersNextMatchupNumber; // 0x1c(0x04)
	int32_t MatchupNumber; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FMatchupParticipant> Participants; // 0x28(0x10)
	enum class EMatchupStatus Status; // 0x38(0x01)
	bool Complete; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	int64_t ScheduledStartDateInEpochSeconds; // 0x40(0x08)
	struct TArray<struct FMatchupGame> Games; // 0x48(0x10)
	int32_t BestOfN; // 0x58(0x04)
	bool Bye; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// ScriptStruct ShooterGame.MatchupGame
// Size: 0xa0 (Inherited: 0x00)
struct FMatchupGame {
	struct FString GameID; // 0x00(0x10)
	int32_t GameIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString MetaData; // 0x18(0x10)
	int64_t ScheduledStartDateInEpochSeconds; // 0x28(0x08)
	struct TArray<struct FMatchupGameScore> Scores; // 0x30(0x10)
	struct TArray<struct FMatchupGamePlacement> Placements; // 0x40(0x10)
	char pad_50[0x50]; // 0x50(0x50)
};

// ScriptStruct ShooterGame.MatchupGamePlacement
// Size: 0x18 (Inherited: 0x00)
struct FMatchupGamePlacement {
	struct FString ParticipantID; // 0x00(0x10)
	int32_t Placement; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.MatchupGameScore
// Size: 0x18 (Inherited: 0x00)
struct FMatchupGameScore {
	struct FString ParticipantID; // 0x00(0x10)
	int32_t Score; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.MatchupParticipant
// Size: 0x38 (Inherited: 0x00)
struct FMatchupParticipant {
	struct FString ParticipantID; // 0x00(0x10)
	bool IsBye; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	int64_t Points; // 0x18(0x08)
	int64_t Seed; // 0x20(0x08)
	int64_t PreviousMatchupNumber; // 0x28(0x08)
	enum class EMatchupParticipantOutcome Outcome; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct ShooterGame.Participant
// Size: 0xa0 (Inherited: 0x00)
struct FParticipant {
	struct FString ParticipantID; // 0x00(0x10)
	int64_t Seed; // 0x10(0x08)
	int32_t TournamentPoints; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString MetaData; // 0x20(0x10)
	struct FParticipantInfo ParticipantInfo; // 0x30(0x60)
	struct FString CurrentMatchupID; // 0x90(0x10)
};

// ScriptStruct ShooterGame.ParticipantInfo
// Size: 0x60 (Inherited: 0x00)
struct FParticipantInfo {
	struct FString Name; // 0x00(0x10)
	struct FString Tag; // 0x10(0x10)
	struct FPremierRosterCustomization Customization; // 0x20(0x40)
};

// ScriptStruct ShooterGame.Tournament
// Size: 0x50 (Inherited: 0x00)
struct FTournament {
	struct FString tournamentid; // 0x00(0x10)
	struct FString OrganizerID; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)
	struct FString Region; // 0x30(0x10)
	enum class ETournamentType Type; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t TournamentSize; // 0x44(0x04)
	int32_t BestOfN; // 0x48(0x04)
	enum class ETournamentStatus Status; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
};

// ScriptStruct ShooterGame.AresTrackedReward
// Size: 0x50 (Inherited: 0x00)
struct FAresTrackedReward {
	struct FAresGameReward TotalReward; // 0x00(0x24)
	struct FName RewardName; // 0x24(0x0c)
	struct FText LocalizedRewardName; // 0x30(0x18)
	int32_t InstancesOfReward; // 0x48(0x04)
	enum class EAresRewardGrantStrategy RewardGrantStrategy; // 0x4c(0x01)
	enum class ERewardSource Source; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
};

// ScriptStruct ShooterGame.AresGameReward
// Size: 0x24 (Inherited: 0x00)
struct FAresGameReward {
	int32_t Rewards[0x9]; // 0x00(0x24)
};

// ScriptStruct ShooterGame.PurchaseResponse
// Size: 0x10 (Inherited: 0x00)
struct FPurchaseResponse {
	struct FGuid OrderID; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ReplayLocalFileMatchEntryUpdateInfo
// Size: 0x50 (Inherited: 0x00)
struct FReplayLocalFileMatchEntryUpdateInfo {
	enum class EReplayLocalFileMatchEntryUpdateCode UpdateCode; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FReplayAmbassadorError OptionalAmbassadorError; // 0x08(0x48)
};

// ScriptStruct ShooterGame.ReplayAmbassadorError
// Size: 0x48 (Inherited: 0x38)
struct FReplayAmbassadorError : FAmbassadorError {
	struct FString MatchID; // 0x38(0x10)
};

// ScriptStruct ShooterGame.OrderResponse
// Size: 0xd0 (Inherited: 0x00)
struct FOrderResponse {
	struct FGuid OrderID; // 0x00(0x10)
	struct FString Status; // 0x10(0x10)
	struct FOrderRewards OrderRewards; // 0x20(0xb0)
};

// ScriptStruct ShooterGame.OrderRewards
// Size: 0xb0 (Inherited: 0x00)
struct FOrderRewards {
	struct TArray<struct FOrderReward> SkinLevels; // 0x00(0x10)
	struct TArray<struct FOrderReward> Variants; // 0x10(0x10)
	struct TArray<struct FOrderReward> Sprays; // 0x20(0x10)
	struct TArray<struct FOrderReward> Cards; // 0x30(0x10)
	struct TArray<struct FOrderReward> Buddies; // 0x40(0x10)
	struct TArray<struct FOrderReward> Totems; // 0x50(0x10)
	struct TArray<struct FOrderReward> GunShards; // 0x60(0x10)
	struct TArray<struct FOrderReward> Titles; // 0x70(0x10)
	struct TArray<struct FOrderReward> Characters; // 0x80(0x10)
	struct TArray<struct FOrderReward> JuiceBoxes; // 0x90(0x10)
	struct TArray<struct FOrderReward> Currencies; // 0xa0(0x10)
};

// ScriptStruct ShooterGame.OrderReward
// Size: 0x14 (Inherited: 0x00)
struct FOrderReward {
	struct FGuid RewardID; // 0x00(0x10)
	int32_t Amount; // 0x10(0x04)
};

// ScriptStruct ShooterGame.PartyMemberSeasonalInfo
// Size: 0x30 (Inherited: 0x00)
struct FPartyMemberSeasonalInfo {
	struct FGuid SeasonID; // 0x00(0x10)
	int32_t NumberOfWins; // 0x10(0x04)
	int32_t RankTier; // 0x14(0x04)
	int32_t CapstoneTier; // 0x18(0x04)
	int32_t CapstoneWins; // 0x1c(0x04)
	struct TArray<int32_t> TopWins; // 0x20(0x10)
};

// ScriptStruct ShooterGame.SeasonHandles
// Size: 0x50 (Inherited: 0x00)
struct FSeasonHandles {
	struct TMap<struct USeasonDataAsset*, struct USeasonHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.SpawnPointData
// Size: 0x78 (Inherited: 0x00)
struct FSpawnPointData {
	struct AShooterTeamStart* SpawnPoint; // 0x00(0x08)
	struct TMap<enum class EAresTeamRole, struct FSpawnPointTeamRoleData> TeamRoleData; // 0x08(0x50)
	int32_t ArrayIndex; // 0x58(0x04)
	float LastUpdateTimestamp; // 0x5c(0x04)
	struct TArray<int32_t> SpawnPointIndicesInVision; // 0x60(0x10)
	int32_t NumTicksUntilUpdate; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct ShooterGame.SpawnPointTeamRoleData
// Size: 0x10 (Inherited: 0x00)
struct FSpawnPointTeamRoleData {
	float Score; // 0x00(0x04)
	int32_t NumVisibleEnemyCharacters; // 0x04(0x04)
	float EngageDistanceScore; // 0x08(0x04)
	bool bSpawnPointDataStale; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct ShooterGame.SprayEquipSlotHandles
// Size: 0x50 (Inherited: 0x00)
struct FSprayEquipSlotHandles {
	struct TMap<struct USprayEquipSlotDataAsset*, struct USprayEquipSlotHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.SprayLevelHandles
// Size: 0x50 (Inherited: 0x00)
struct FSprayLevelHandles {
	struct TMap<struct USprayLevelDataAsset*, struct USprayLevelHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.SprayHandles
// Size: 0x50 (Inherited: 0x00)
struct FSprayHandles {
	struct TMap<struct USprayDataAsset*, struct USprayHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.EffectData
// Size: 0x58 (Inherited: 0x00)
struct FEffectData {
	struct TWeakObjectPtr<struct AActor> WaitOnReplicationActor; // 0x00(0x08)
	struct TArray<struct FEffectDataFloat> FloatValues; // 0x08(0x10)
	struct TArray<struct FEffectDataVector> VectorValues; // 0x18(0x10)
	struct TArray<struct FEffectDataObject> ObjectValues; // 0x28(0x10)
	struct TArray<struct FEffectDataClass> ClassValues; // 0x38(0x10)
	struct TArray<struct FEffectDataText> TextValues; // 0x48(0x10)
};

// ScriptStruct ShooterGame.EffectDataText
// Size: 0x28 (Inherited: 0x00)
struct FEffectDataText {
	struct FGameplayTag Name; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText Text; // 0x10(0x18)
};

// ScriptStruct ShooterGame.EffectDataClass
// Size: 0x40 (Inherited: 0x00)
struct FEffectDataClass {
	struct FGameplayTag Name; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TSoftClassPtr<UObject> Class; // 0x10(0x30)
};

// ScriptStruct ShooterGame.EffectDataObject
// Size: 0x14 (Inherited: 0x00)
struct FEffectDataObject {
	struct FGameplayTag Name; // 0x00(0x0c)
	struct TWeakObjectPtr<struct UObject> Object; // 0x0c(0x08)
};

// ScriptStruct ShooterGame.EffectDataVector
// Size: 0x28 (Inherited: 0x00)
struct FEffectDataVector {
	struct FGameplayTag Name; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector Vector; // 0x10(0x18)
};

// ScriptStruct ShooterGame.EffectDataFloat
// Size: 0x10 (Inherited: 0x00)
struct FEffectDataFloat {
	struct FGameplayTag Name; // 0x00(0x0c)
	float float; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.StorefrontItemHandles
// Size: 0x50 (Inherited: 0x00)
struct FStorefrontItemHandles {
	struct TMap<struct UStorefrontItemDataAsset*, struct UStorefrontItemHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.StoreGift
// Size: 0xf0 (Inherited: 0x00)
struct FStoreGift {
	struct FGuid GiftID; // 0x00(0x10)
	struct FGuid PurchaserID; // 0x10(0x10)
	struct FGuid RecipientId; // 0x20(0x10)
	struct FGuid StoreID; // 0x30(0x10)
	struct FString StoreName; // 0x40(0x10)
	struct FGuid CatalogEntryID; // 0x50(0x10)
	struct FString CatalogEntryName; // 0x60(0x10)
	struct FGuid PurchaserTransactionID; // 0x70(0x10)
	struct FGuid RecipientTransactionID; // 0x80(0x10)
	struct FDateTime CreatedTime; // 0x90(0x08)
	struct FDateTime CompletedTime; // 0x98(0x08)
	struct FString State; // 0xa0(0x10)
	struct FString Source; // 0xb0(0x10)
	struct FString MessageToRecipient; // 0xc0(0x10)
	struct FGuid RecipientMailID; // 0xd0(0x10)
	struct FGuid PurchaserMailID; // 0xe0(0x10)
};

// ScriptStruct ShooterGame.GetGiftByIdResponse
// Size: 0x208 (Inherited: 0x00)
struct FGetGiftByIdResponse {
	struct FStoreGift StoreGift; // 0x00(0xf0)
	struct FPluginStoreOffer StoreOffer; // 0xf0(0x118)
};

// ScriptStruct ShooterGame.PluginStoreOffer
// Size: 0x118 (Inherited: 0x00)
struct FPluginStoreOffer {
	struct FPluginStorePurchaseInformation PurchaseInformation; // 0x00(0x108)
	struct TArray<struct FPluginStoreSubOffer> SubOffers; // 0x108(0x10)
};

// ScriptStruct ShooterGame.PluginStoreSubOffer
// Size: 0x108 (Inherited: 0x00)
struct FPluginStoreSubOffer {
	struct FPluginStorePurchaseInformation PurchaseInformation; // 0x00(0x108)
};

// ScriptStruct ShooterGame.PluginStorePurchaseInformation
// Size: 0x108 (Inherited: 0x00)
struct FPluginStorePurchaseInformation {
	struct FGuid DataAssetID; // 0x00(0x10)
	struct FGuid OfferId; // 0x10(0x10)
	struct FDateTime StartDate; // 0x20(0x08)
	struct FGuid PrimaryCurrencyID; // 0x28(0x10)
	struct TMap<struct FGuid, int32_t> Cost; // 0x38(0x50)
	struct TMap<struct FGuid, int32_t> DiscountedCost; // 0x88(0x50)
	int32_t DiscountedPercentage; // 0xd8(0x04)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct UStoreOffer* Offer; // 0xe0(0x08)
	enum class EStoreOfferType OfferType; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct TArray<struct FPluginStoreReward> Rewards; // 0xf0(0x10)
	bool WholeSaleOnly; // 0x100(0x01)
	enum class EGiftingType IsGiftable; // 0x101(0x01)
	char pad_102[0x6]; // 0x102(0x06)
};

// ScriptStruct ShooterGame.PluginStoreReward
// Size: 0x24 (Inherited: 0x00)
struct FPluginStoreReward {
	struct FGuid ItemTypeID; // 0x00(0x10)
	struct FGuid ItemId; // 0x10(0x10)
	int32_t Quantity; // 0x20(0x04)
};

// ScriptStruct ShooterGame.SubscriptionHandles
// Size: 0x50 (Inherited: 0x00)
struct FSubscriptionHandles {
	struct TMap<struct USubscriptionDataAsset*, struct USubscriptionHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.TeamRecord
// Size: 0x0c (Inherited: 0x00)
struct FTeamRecord {
	int32_t Wins; // 0x00(0x04)
	int32_t Losses; // 0x04(0x04)
	int32_t Ties; // 0x08(0x04)
};

// ScriptStruct ShooterGame.UITelemetryEventTarget
// Size: 0x10 (Inherited: 0x00)
struct FUITelemetryEventTarget {
	struct FString ActionTarget; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ThemeHandles
// Size: 0x50 (Inherited: 0x00)
struct FThemeHandles {
	struct TMap<struct UThemeDataAsset*, struct UThemeHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.ReplayTimeJumpRequestDetails
// Size: 0x10 (Inherited: 0x00)
struct FReplayTimeJumpRequestDetails {
	float GotoTimeDestSeconds; // 0x00(0x04)
	float TimeDilationCatchupDestSeconds; // 0x04(0x04)
	float TimeJumpDestSeconds; // 0x08(0x04)
	bool bIsRoundJumping; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct ShooterGame.TotemHandles
// Size: 0x50 (Inherited: 0x00)
struct FTotemHandles {
	struct TMap<struct UTotemDataAsset*, struct UTotemHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.TournamentData
// Size: 0xd0 (Inherited: 0x00)
struct FTournamentData {
	struct FString RosterID; // 0x00(0x10)
	struct FString tournamentid; // 0x10(0x10)
	struct FString EventID; // 0x20(0x10)
	struct FString PremierEventID; // 0x30(0x10)
	struct FString PremierSeasonID; // 0x40(0x10)
	struct TArray<struct FIneligibleRosterPartyMember> IneligibleRosterPartyMembers; // 0x50(0x10)
	struct TArray<struct FString> RosterEventIneligibilities; // 0x60(0x10)
	struct FPremierScheduledEventDTO PremierScheduledEvent; // 0x70(0x60)
};

// ScriptStruct ShooterGame.PremierScheduledEventDTO
// Size: 0x60 (Inherited: 0x00)
struct FPremierScheduledEventDTO {
	struct FGuid EventID; // 0x00(0x10)
	struct FString EventType; // 0x10(0x10)
	struct FString Conference; // 0x20(0x10)
	struct FString DivisionGroup; // 0x30(0x10)
	struct FString EventPresetName; // 0x40(0x10)
	struct FDateTime StartDateTime; // 0x50(0x08)
	struct FDateTime EndDateTime; // 0x58(0x08)
};

// ScriptStruct ShooterGame.IneligibleRosterPartyMember
// Size: 0x20 (Inherited: 0x00)
struct FIneligibleRosterPartyMember {
	struct FString Subject; // 0x00(0x10)
	struct FString Reason; // 0x10(0x10)
};

// ScriptStruct ShooterGame.TournamentMetadata
// Size: 0x88 (Inherited: 0x00)
struct FTournamentMetadata {
	struct FString tournamentid; // 0x00(0x10)
	struct FString MatchupID; // 0x10(0x10)
	struct FString EventID; // 0x20(0x10)
	int32_t TournamentsGameIndex; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TMap<struct FString, int64_t> Seeds; // 0x38(0x50)
};

// ScriptStruct ShooterGame.TournamentRosterMetadata
// Size: 0x70 (Inherited: 0x00)
struct FTournamentRosterMetadata {
	struct TMap<struct FString, struct FTournamentRosterInfo> RostersByPartyID; // 0x00(0x50)
	struct FString EventID; // 0x50(0x10)
	struct FString PremierSeasonID; // 0x60(0x10)
};

// ScriptStruct ShooterGame.TournamentStandingsDTO
// Size: 0x10 (Inherited: 0x00)
struct FTournamentStandingsDTO {
	struct TArray<struct FTournamentStandingDTO> TournamentStandings; // 0x00(0x10)
};

// ScriptStruct ShooterGame.TournamentStandingDTO
// Size: 0xd0 (Inherited: 0x00)
struct FTournamentStandingDTO {
	struct FString ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FDateTime StartTime; // 0x20(0x08)
	struct FDateTime EndTime; // 0x28(0x08)
	struct TMap<struct FString, struct FTournamentSectionDTO> TournamentSections; // 0x30(0x50)
	struct TMap<struct FString, struct FTournamentSectionDTO> TournamentSectionsV2; // 0x80(0x50)
};

// ScriptStruct ShooterGame.TournamentSectionDTO
// Size: 0xc0 (Inherited: 0x00)
struct FTournamentSectionDTO {
	struct FString ID; // 0x00(0x10)
	int32_t SectionIndex; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString LeagueID; // 0x18(0x10)
	struct FString Name; // 0x28(0x10)
	struct FString StageName; // 0x38(0x10)
	int32_t StageIndex; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FString StageSlug; // 0x50(0x10)
	struct TArray<struct FMatchDTO> Matches; // 0x60(0x10)
	struct FString Type; // 0x70(0x10)
	struct FStandingDTO Standing; // 0x80(0x40)
};

// ScriptStruct ShooterGame.StandingDTO
// Size: 0x40 (Inherited: 0x00)
struct FStandingDTO {
	struct FGroupStandingDTO Group; // 0x00(0x30)
	struct FBracketStandingDTO Bracket; // 0x30(0x10)
};

// ScriptStruct ShooterGame.BracketStandingDTO
// Size: 0x10 (Inherited: 0x00)
struct FBracketStandingDTO {
	struct TArray<struct FColumnDTO> Columns; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ColumnDTO
// Size: 0x10 (Inherited: 0x00)
struct FColumnDTO {
	struct TArray<struct FCellDTO> Cells; // 0x00(0x10)
};

// ScriptStruct ShooterGame.CellDTO
// Size: 0x48 (Inherited: 0x00)
struct FCellDTO {
	struct FString Stage; // 0x00(0x10)
	struct FString Type; // 0x10(0x10)
	int32_t RoundNumber; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FMatchDTO> Matches; // 0x28(0x10)
	struct TArray<struct FString> MatchIDs; // 0x38(0x10)
};

// ScriptStruct ShooterGame.GroupStandingDTO
// Size: 0x30 (Inherited: 0x00)
struct FGroupStandingDTO {
	struct FString ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct TArray<struct FTeamRankingDTO> Rankings; // 0x20(0x10)
};

// ScriptStruct ShooterGame.TeamRankingDTO
// Size: 0x18 (Inherited: 0x00)
struct FTeamRankingDTO {
	int32_t Rank; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FTeamDTO> Teams; // 0x08(0x10)
};

// ScriptStruct ShooterGame.TournamentsTeamIconHandles
// Size: 0x50 (Inherited: 0x00)
struct FTournamentsTeamIconHandles {
	struct TMap<struct UTournamentsTeamIconDataAsset*, struct UTournamentsTeamIconHandle*> Handles; // 0x00(0x50)
};

// ScriptStruct ShooterGame.TeamsDTO
// Size: 0x10 (Inherited: 0x00)
struct FTeamsDTO {
	struct TArray<struct FTeamDTO> Teams; // 0x00(0x10)
};

// ScriptStruct ShooterGame.JanusEventResponse
// Size: 0x38 (Inherited: 0x00)
struct FJanusEventResponse {
	struct FString ID; // 0x00(0x10)
	struct FString Group; // 0x10(0x10)
	struct FString MetaData; // 0x20(0x10)
	int32_t Time1; // 0x30(0x04)
	int32_t Time2; // 0x34(0x04)
};

// ScriptStruct ShooterGame.RequestReplayEventDataResponse
// Size: 0x20 (Inherited: 0x00)
struct FRequestReplayEventDataResponse {
	struct UReplayEventData* EventData; // 0x00(0x08)
	bool bSuccess; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString FailureReason; // 0x10(0x10)
};

// ScriptStruct ShooterGame.ViewTargetInfo
// Size: 0x10 (Inherited: 0x00)
struct FViewTargetInfo {
	struct AActor* TargetActor; // 0x00(0x08)
	enum class EAresPlayerViewTargetMode Mode; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ShooterGame.VoiceSessionParticipant
// Size: 0x38 (Inherited: 0x00)
struct FVoiceSessionParticipant {
	int32_t Energy; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString ID; // 0x08(0x10)
	bool IsMuted; // 0x18(0x01)
	bool IsSpeaking; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct FString Name; // 0x20(0x10)
	int32_t Volume; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.ShellWidgetVisibilityOptions
// Size: 0x0a (Inherited: 0x00)
struct FShellWidgetVisibilityOptions {
	enum class EWidgetVisibilityOption BreadcrumbsVisible; // 0x00(0x01)
	enum class EWidgetVisibilityOption PlayButtonVisible; // 0x01(0x01)
	enum class EWidgetVisibilityOption NavigationBarVisible; // 0x02(0x01)
	enum class EWidgetVisibilityOption RewardsVisibile; // 0x03(0x01)
	enum class EWidgetVisibilityOption ServerStatusVisible; // 0x04(0x01)
	enum class EWidgetVisibilityOption SocialEntranceVisible; // 0x05(0x01)
	enum class EWidgetVisibilityOption OptionsButtonVisible; // 0x06(0x01)
	enum class EWidgetVisibilityOption WalletVisible; // 0x07(0x01)
	enum class EWidgetVisibilityOption ShellBackgroundVisible; // 0x08(0x01)
	enum class EWidgetVisibilityOption TopNavBarQueueTimerVisible; // 0x09(0x01)
};

// ScriptStruct ShooterGame.OrderedListModelChangeEventData
// Size: 0x20 (Inherited: 0x00)
struct FOrderedListModelChangeEventData {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.PartyMessageItemModel
// Size: 0x40 (Inherited: 0x00)
struct FPartyMessageItemModel {
	struct FString ID; // 0x00(0x10)
	struct FString PartyId; // 0x10(0x10)
	struct UPlatformPlayer* Sender; // 0x20(0x08)
	struct UPlatformPlayer* Receiver; // 0x28(0x08)
	enum class EPartyMessageType MessageType; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct FDateTime CreatedAt; // 0x38(0x08)
};

// ScriptStruct ShooterGame.RestrictionInfoBoxContent
// Size: 0x10 (Inherited: 0x00)
struct FRestrictionInfoBoxContent {
	enum class EAresPlayerRestrictionType RestrictionType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDateTime ExpiryTime; // 0x08(0x08)
};

// ScriptStruct ShooterGame.ScopedAnimationCueSource_ScopedCueEventData
// Size: 0x1c (Inherited: 0x10)
struct FScopedAnimationCueSource_ScopedCueEventData : FAnimationCueSource_CueEventData {
	struct FName ScopeName; // 0x10(0x0c)
};

// ScriptStruct ShooterGame.SettingsScreenElementVisibilities
// Size: 0x0e (Inherited: 0x00)
struct FSettingsScreenElementVisibilities {
	bool bShowPresetsChooser; // 0x00(0x01)
	bool bShowProfileChooser; // 0x01(0x01)
	bool bShowResetButton; // 0x02(0x01)
	bool bShowMyCrosshairsChooser; // 0x03(0x01)
	bool bShowCreateCrosshairsChooser; // 0x04(0x01)
	bool bShowPrimaryCrosshair; // 0x05(0x01)
	bool bShowFocusCrosshair; // 0x06(0x01)
	bool bShowADSCrosshair; // 0x07(0x01)
	bool bShowSniperCrosshair; // 0x08(0x01)
	bool bShowButtonSwapToastNotification; // 0x09(0x01)
	bool bShowGamepadHelper; // 0x0a(0x01)
	bool bShowSubNavbar; // 0x0b(0x01)
	bool bShowSettingBackground; // 0x0c(0x01)
	bool bHidePresetChooserIfAgentSpecific; // 0x0d(0x01)
};

// ScriptStruct ShooterGame.TickerStatus
// Size: 0x30 (Inherited: 0x00)
struct FTickerStatus {
	enum class ETickerSeverity Severity; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Title; // 0x08(0x10)
	struct FString Message; // 0x18(0x10)
	int32_t ID; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ShooterGame.UnorderedMapModelChangeEventData
// Size: 0x38 (Inherited: 0x00)
struct FUnorderedMapModelChangeEventData {
	char pad_0[0x30]; // 0x00(0x30)
	bool bIsReset; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct ShooterGame.BehaviorIntervention
// Size: 0x70 (Inherited: 0x00)
struct FBehaviorIntervention {
	struct FString BehaviorCategory; // 0x00(0x10)
	struct FString BehaviorRatingName; // 0x10(0x10)
	struct FIntervention Intervention; // 0x20(0x38)
	struct FText ActiveHoverMessage; // 0x58(0x18)
};

// ScriptStruct ShooterGame.Intervention
// Size: 0x38 (Inherited: 0x00)
struct FIntervention {
	struct FString InterventionName; // 0x00(0x10)
	struct FDateTime Expiry; // 0x10(0x08)
	struct FDateTime IssuingTime; // 0x18(0x08)
	struct FString OriginInfraction; // 0x20(0x10)
	int32_t QueueDelayDurationSeconds; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.BehaviorInterventions
// Size: 0xb0 (Inherited: 0x00)
struct FBehaviorInterventions {
	struct FString BehaviorCategory; // 0x00(0x10)
	struct FString BehaviorRatingName; // 0x10(0x10)
	struct FDateTime LastRatingReduction; // 0x20(0x08)
	struct TArray<struct FIntervention> ActiveInterventions; // 0x28(0x10)
	struct TArray<struct FString> NextInterventionNames; // 0x38(0x10)
	struct TMap<struct FString, struct FAppliedInfraction> AppliedInfractions; // 0x48(0x50)
	struct FText AtRiskHoverMessage; // 0x98(0x18)
};

// ScriptStruct ShooterGame.AppliedInfraction
// Size: 0x48 (Inherited: 0x00)
struct FAppliedInfraction {
	struct FString InfractionName; // 0x00(0x10)
	struct FString Severity; // 0x10(0x10)
	struct TArray<struct FIntervention> AppliedInterventions; // 0x20(0x10)
	struct FText ActiveHoverMessage; // 0x30(0x18)
};

// ScriptStruct ShooterGame.SocialRegisteredTabInfo
// Size: 0x20 (Inherited: 0x00)
struct FSocialRegisteredTabInfo {
	int32_t TabIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UCommonButtonBase* TabButton; // 0x08(0x08)
	struct UWidget* ContentInstance; // 0x10(0x08)
	struct USocialPageBase* SocialPage; // 0x18(0x08)
};

// ScriptStruct ShooterGame.IndexRange
// Size: 0x08 (Inherited: 0x00)
struct FIndexRange {
	int32_t FirstIndex; // 0x00(0x04)
	int32_t LastIndex; // 0x04(0x04)
};

// ScriptStruct ShooterGame.ProgressModelState
// Size: 0x02 (Inherited: 0x00)
struct FProgressModelState {
	enum class EProgressModelStage Stage; // 0x00(0x01)
	bool bHasError; // 0x01(0x01)
};

// ScriptStruct ShooterGame.NumericProgressValue
// Size: 0x10 (Inherited: 0x00)
struct FNumericProgressValue {
	int64_t Current; // 0x00(0x08)
	int64_t Maximum; // 0x08(0x08)
};

// ScriptStruct ShooterGame.UserActionDisplayInfo
// Size: 0x48 (Inherited: 0x00)
struct FUserActionDisplayInfo {
	struct FText Text; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
	struct UTexture2D* IconTexture; // 0x30(0x08)
	struct TArray<struct FName> Styles; // 0x38(0x10)
};

// ScriptStruct ShooterGame.ListItemDisplayEntryActivatedData
// Size: 0x48 (Inherited: 0x00)
struct FListItemDisplayEntryActivatedData {
	int32_t ListIndex; // 0x00(0x04)
	enum class EListItemDisplayEntryActivationType ActivationType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct FWildcard Context; // 0x08(0x40)
};

// ScriptStruct ShooterGame.ListItemDisplayEntryActivatedEventData
// Size: 0x88 (Inherited: 0x48)
struct FListItemDisplayEntryActivatedEventData : FListItemDisplayEntryActivatedData {
	struct FWildcard ListItemData; // 0x48(0x40)
};

// ScriptStruct ShooterGame.SimpleSectionHeadersListModelBase_Location
// Size: 0x08 (Inherited: 0x00)
struct FSimpleSectionHeadersListModelBase_Location {
	enum class ESimpleSectionHeadersListModelBase_LocationType LocationType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Index; // 0x04(0x04)
};

// ScriptStruct ShooterGame.SimpleSectionHeadersListModelBase_HeaderInfo
// Size: 0x48 (Inherited: 0x00)
struct FSimpleSectionHeadersListModelBase_HeaderInfo {
	char pad_0[0x8]; // 0x00(0x08)
	struct FWildcard HeaderData; // 0x08(0x40)
};

// ScriptStruct ShooterGame.FilterVariables
// Size: 0x38 (Inherited: 0x00)
struct FFilterVariables {
	bool bTargetAnyActorType; // 0x00(0x01)
	bool bTargetShooterCharacter; // 0x01(0x01)
	bool bTargetPlayer; // 0x02(0x01)
	bool bTargetDecoy; // 0x03(0x01)
	bool bTargetTrainingBot; // 0x04(0x01)
	bool bTargetLivingOnly; // 0x05(0x01)
	bool bTargetEnemy; // 0x06(0x01)
	bool bTargetAlly; // 0x07(0x01)
	bool bTargetNeutral; // 0x08(0x01)
	bool bCanTargetInstigator; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct TArray<struct FName> RequiredTags; // 0x10(0x10)
	struct TArray<struct FName> ForbiddenTags; // 0x20(0x10)
	bool bMustBeBlindable; // 0x30(0x01)
	bool bMustBeTangible; // 0x31(0x01)
	bool bMustBeVisible; // 0x32(0x01)
	bool bMustBeVisibleToEnemies; // 0x33(0x01)
	bool bMustBeSusceptible; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct ShooterGame.AbilityInstigatedEffectContext
// Size: 0x90 (Inherited: 0x80)
struct FAbilityInstigatedEffectContext : FGameplayEffectContext {
	int32_t CastID; // 0x80(0x04)
	struct TWeakObjectPtr<struct AAresEquippable> InstigatingEquippable; // 0x84(0x08)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct ShooterGame.AgentAbilityCooldown
// Size: 0x48 (Inherited: 0x08)
struct FAgentAbilityCooldown : FTableRowBase {
	struct FName CharacterName; // 0x08(0x0c)
	struct FName AbilitySlot; // 0x14(0x0c)
	struct FName AbilityName; // 0x20(0x0c)
	float CooldownSeconds; // 0x2c(0x04)
	float TempChargeCooldownSeconds; // 0x30(0x04)
	float StartingCooldownPercent; // 0x34(0x04)
	bool bPreventRechargeWhileActive; // 0x38(0x01)
	bool bRecallable; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
	struct UAbilityRechargeCooldownComponent* CooldownComponentClass; // 0x40(0x08)
};

// ScriptStruct ShooterGame.AccoladeProgressEntry
// Size: 0x18 (Inherited: 0x00)
struct FAccoladeProgressEntry {
	struct FString Name; // 0x00(0x10)
	int32_t Progress; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.AccountXPPlayerProgress
// Size: 0x08 (Inherited: 0x00)
struct FAccountXPPlayerProgress {
	int32_t Level; // 0x00(0x04)
	int32_t XP; // 0x04(0x04)
};

// ScriptStruct ShooterGame.AccountXPXPSource
// Size: 0x18 (Inherited: 0x00)
struct FAccountXPXPSource {
	struct FString ID; // 0x00(0x10)
	int32_t Amount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.AccountXPXPMultiplier
// Size: 0x18 (Inherited: 0x00)
struct FAccountXPXPMultiplier {
	struct FString ID; // 0x00(0x10)
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.AccountXPMatch
// Size: 0x48 (Inherited: 0x00)
struct FAccountXPMatch {
	struct FGuid ID; // 0x00(0x10)
	struct FAccountXPPlayerProgress StartProgress; // 0x10(0x08)
	struct FAccountXPPlayerProgress EndProgress; // 0x18(0x08)
	int32_t XPDelta; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FAccountXPXPSource> XPSources; // 0x28(0x10)
	struct TArray<struct FAccountXPXPMultiplier> XPMultipliers; // 0x38(0x10)
};

// ScriptStruct ShooterGame.AccountXPPlayer
// Size: 0x38 (Inherited: 0x00)
struct FAccountXPPlayer {
	int32_t Version; // 0x00(0x04)
	struct FGuid Subject; // 0x04(0x10)
	struct FAccountXPPlayerProgress Progress; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FDateTime NextTimeFirstWinAvailable; // 0x20(0x08)
	struct TArray<struct FAccountXPMatch> History; // 0x28(0x10)
};

// ScriptStruct ShooterGame.AccountXPMatchViewData
// Size: 0x38 (Inherited: 0x00)
struct FAccountXPMatchViewData {
	int32_t StartLevel; // 0x00(0x04)
	int32_t StartXP; // 0x04(0x04)
	int32_t EndLevel; // 0x08(0x04)
	int32_t EndXP; // 0x0c(0x04)
	int32_t MaxLevelXP; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FAccountXPXPSource> XPSources; // 0x18(0x10)
	struct TArray<struct FAccountXPXPMultiplier> XPMultipliers; // 0x28(0x10)
};

// ScriptStruct ShooterGame.ActionBindingsManagerLocalCache
// Size: 0x48 (Inherited: 0x00)
struct FActionBindingsManagerLocalCache {
	int32_t SettingsVersion; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FActionMappingDTO> ActionMappings; // 0x08(0x10)
	struct TArray<struct FAxisMappingDTO> AxisMappings; // 0x18(0x10)
	struct TArray<struct FName> SettingsProfiles; // 0x28(0x10)
	struct TArray<struct FCharacterProfileData> CharacterProfileData; // 0x38(0x10)
};

// ScriptStruct ShooterGame.CharacterProfileData
// Size: 0x10 (Inherited: 0x00)
struct FCharacterProfileData {
	struct FName ProfileName; // 0x00(0x0c)
	int32_t PresetIndex; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.AxisMappingDTO
// Size: 0x40 (Inherited: 0x00)
struct FAxisMappingDTO {
	struct FString Name; // 0x00(0x10)
	struct FString CharacterName; // 0x10(0x10)
	int32_t BindIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString Key; // 0x28(0x10)
	float Scale; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ShooterGame.ActionMappingDTO
// Size: 0x50 (Inherited: 0x00)
struct FActionMappingDTO {
	struct FString Name; // 0x00(0x10)
	struct FString CharacterName; // 0x10(0x10)
	int32_t BindIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString Key; // 0x28(0x10)
	bool Shift; // 0x38(0x01)
	bool Ctrl; // 0x39(0x01)
	bool Alt; // 0x3a(0x01)
	bool Cmd; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString TapHoldType; // 0x40(0x10)
};

// ScriptStruct ShooterGame.SingleBindSlotActionBinding
// Size: 0x10 (Inherited: 0x00)
struct FSingleBindSlotActionBinding {
	struct UActionBindSet* Action; // 0x00(0x08)
	int32_t BindIndex; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.ConflictList
// Size: 0x10 (Inherited: 0x00)
struct FConflictList {
	struct TArray<struct FSingleBindSlotActionBinding> ConflictingBindings; // 0x00(0x10)
};

// ScriptStruct ShooterGame.GamepadPresetAxisEntry
// Size: 0x30 (Inherited: 0x00)
struct FGamepadPresetAxisEntry {
	struct FName AxisName; // 0x00(0x0c)
	enum class EActionBindSetAxisDirection AxisDirection; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FKey Key; // 0x10(0x20)
};

// ScriptStruct ShooterGame.RelatedActionBindSetsList
// Size: 0x50 (Inherited: 0x00)
struct FRelatedActionBindSetsList {
	struct TSet<struct UActionBindSet*> ActionBindSetList; // 0x00(0x50)
};

// ScriptStruct ShooterGame.ChordToActionBindSetEntry
// Size: 0x50 (Inherited: 0x00)
struct FChordToActionBindSetEntry {
	struct TMap<struct FActionChord, struct FRelatedActionBindSetsList> ChordToActionsMap; // 0x00(0x50)
};

// ScriptStruct ShooterGame.ActionBindSetIdentifier
// Size: 0x10 (Inherited: 0x00)
struct FActionBindSetIdentifier {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ActRankBorderInstance
// Size: 0x38 (Inherited: 0x00)
struct FActRankBorderInstance {
	struct TSoftClassPtr<UObject> BorderAsset; // 0x00(0x30)
	int32_t WinsRequired; // 0x30(0x04)
	int32_t Level; // 0x34(0x04)
};

// ScriptStruct ShooterGame.AIAimTargetInfo
// Size: 0x20 (Inherited: 0x00)
struct FAIAimTargetInfo {
	struct AActor* ActorTarget; // 0x00(0x08)
	struct FVector LocationTarget; // 0x08(0x18)
};

// ScriptStruct ShooterGame.AimRotatorEntry
// Size: 0x20 (Inherited: 0x00)
struct FAimRotatorEntry {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.AimReport
// Size: 0x78 (Inherited: 0x00)
struct FAimReport {
	float ShotTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FRotator AimAtShot; // 0x08(0x18)
	struct TArray<struct FRotator> AimRotatorsBefore; // 0x20(0x10)
	struct TArray<struct FRotator> AimRotatorsAfter; // 0x30(0x10)
	char pad_40[0x10]; // 0x40(0x10)
	int32_t Samples; // 0x50(0x04)
	float DistanceAccumulator; // 0x54(0x04)
	float MaxDistance; // 0x58(0x04)
	float MinDistance; // 0x5c(0x04)
	float SpeedAccumulator; // 0x60(0x04)
	float MaxSpeed; // 0x64(0x04)
	float MinSpeed; // 0x68(0x04)
	float AccelerationAccumulator; // 0x6c(0x04)
	float MaxAcceleration; // 0x70(0x04)
	float MinAcceleration; // 0x74(0x04)
};

// ScriptStruct ShooterGame.NoiseEventTagData
// Size: 0x30 (Inherited: 0x00)
struct FNoiseEventTagData {
	struct FGameplayTagContainer TagContainer; // 0x00(0x20)
	struct FName StringTag; // 0x20(0x0c)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ShooterGame.NoiseEventData
// Size: 0x38 (Inherited: 0x00)
struct FNoiseEventData {
	float NoiseLoudness; // 0x00(0x04)
	float NoiseMaxRange; // 0x04(0x04)
	struct FNoiseEventTagData NoiseTagData; // 0x08(0x30)
};

// ScriptStruct ShooterGame.AnimationConductorNodeSignalCondition
// Size: 0x14 (Inherited: 0x00)
struct FAnimationConductorNodeSignalCondition {
	bool bCompletion; // 0x00(0x01)
	bool bHasMaxDelay; // 0x01(0x01)
	bool bConsumeCue; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FName CueName; // 0x04(0x0c)
	float MaxDelay; // 0x10(0x04)
};

// ScriptStruct ShooterGame.MovementStateMachineAnimationSlot
// Size: 0x18 (Inherited: 0x00)
struct FMovementStateMachineAnimationSlot {
	struct UAnimSequence* Asset; // 0x00(0x08)
	float PlayRate; // 0x08(0x04)
	float StartTime; // 0x0c(0x04)
	bool bLoop; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.MovementStateMachineAnimations
// Size: 0x18 (Inherited: 0x00)
struct FMovementStateMachineAnimations {
	bool IsValid; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t CurrentSlot; // 0x04(0x04)
	struct TArray<struct FMovementStateMachineAnimationSlot> Slots; // 0x08(0x10)
};

// ScriptStruct ShooterGame.AnimationStateParams
// Size: 0x278 (Inherited: 0x00)
struct FAnimationStateParams {
	struct FVector Position; // 0x00(0x18)
	struct FVector Velocity; // 0x18(0x18)
	struct FVector Acceleration; // 0x30(0x18)
	float CurrentSpeed2D; // 0x48(0x04)
	float StopFromNormalizedSpeed; // 0x4c(0x04)
	float TempMovementSpeedModifier; // 0x50(0x04)
	float AimPitch; // 0x54(0x04)
	float UpperBodyYawLookSpace; // 0x58(0x04)
	float PrimaryAimSpringPitch1P; // 0x5c(0x04)
	float PrimaryAimSpringYaw1P; // 0x60(0x04)
	float SecondaryAimSpringPitch1P; // 0x64(0x04)
	float SecondaryAimSpringYaw1P; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FRotator BoneTransformAimRotator; // 0x70(0x18)
	float LookAlphaBlend; // 0x88(0x04)
	float WeaponYawAimingOffset; // 0x8c(0x04)
	float WeaponPitchAimingOffset; // 0x90(0x04)
	float WeaponFiringError; // 0x94(0x04)
	float WeaponMovingError; // 0x98(0x04)
	float WeaponTotalError; // 0x9c(0x04)
	float InterpolatedWeaponFiringError; // 0xa0(0x04)
	float InterpolatedWeaponMovingError; // 0xa4(0x04)
	float InterpolatedWeaponTotalError; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FVector FocusedWeaponOffset; // 0xb0(0x18)
	struct FRotator FocusedWeaponRotation; // 0xc8(0x18)
	float FocusedWeaponAlpha; // 0xe0(0x04)
	float InaccuracyMultiplier; // 0xe4(0x04)
	float AnimPunch; // 0xe8(0x04)
	float AnimPunchHeight; // 0xec(0x04)
	float AnimPunchRot; // 0xf0(0x04)
	float AnimPunchInterpolant; // 0xf4(0x04)
	float AnimLeanPitchAndRollStrength; // 0xf8(0x04)
	float AnimLeanYawStrength; // 0xfc(0x04)
	float AnimLeanTranslationStrength; // 0x100(0x04)
	float YawMomentumRotation; // 0x104(0x04)
	float PitchMomentumRotation; // 0x108(0x04)
	float DeltaTime; // 0x10c(0x04)
	enum class EAresShooterAnimMovementState MovementState; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FMovementStateMachineAnimations MovementStateMachineAnimations1P; // 0x118(0x18)
	struct FMovementStateMachineAnimations MovementStateMachineAnimationsGun1P; // 0x130(0x18)
	struct FMovementStateMachineAnimations MovementStateMachineAnimationsCosmeticGun1P; // 0x148(0x18)
	bool bHasUpperBodyFall3P; // 0x160(0x01)
	bool bHasCrouchUpperBodyFall3P; // 0x161(0x01)
	bool bIsJumping; // 0x162(0x01)
	bool bIsZoomed; // 0x163(0x01)
	bool bIsStopping2D; // 0x164(0x01)
	bool bIsCounterStrafing; // 0x165(0x01)
	bool bLanded; // 0x166(0x01)
	bool bJumped; // 0x167(0x01)
	bool bGlide; // 0x168(0x01)
	bool bIsCrouched; // 0x169(0x01)
	char pad_16A[0x2]; // 0x16a(0x02)
	float TimeSinceJumpStart; // 0x16c(0x04)
	bool bJumpLandCanTransition; // 0x170(0x01)
	bool bCrouchCanTransition; // 0x171(0x01)
	bool bUnCrouchCanTransition; // 0x172(0x01)
	bool bIsUsingAltAnims; // 0x173(0x01)
	bool bIsInIdleState; // 0x174(0x01)
	bool bIsOnRope; // 0x175(0x01)
	bool bIsTurningLeft; // 0x176(0x01)
	bool bIsTurningRight; // 0x177(0x01)
	bool bStandingStill; // 0x178(0x01)
	bool bStill; // 0x179(0x01)
	bool bPlayingDeathReaction; // 0x17a(0x01)
	bool bIsDeathReactionFaceUp; // 0x17b(0x01)
	bool bCanInterruptDeathReaction; // 0x17c(0x01)
	bool bIsAlive; // 0x17d(0x01)
	bool bHasEquippable; // 0x17e(0x01)
	bool bIsFiring; // 0x17f(0x01)
	bool bJustFired; // 0x180(0x01)
	bool bIsMeleeAttacking; // 0x181(0x01)
	bool bCanFidget; // 0x182(0x01)
	char pad_183[0x1]; // 0x183(0x01)
	float MovementAdditiveAlpha; // 0x184(0x04)
	float AnimDynamicsAlpha; // 0x188(0x04)
	float AimOffsetAlpha; // 0x18c(0x04)
	float LowerBodyAimOffsetAlpha; // 0x190(0x04)
	float BoneTransformAimAlpha; // 0x194(0x04)
	float BoneTransformAimConstraintAlpha; // 0x198(0x04)
	float FaceLayerAlpha; // 0x19c(0x04)
	bool bTriggerFaceFidget; // 0x1a0(0x01)
	char pad_1A1[0x3]; // 0x1a1(0x03)
	float RigidBodyAlpha; // 0x1a4(0x04)
	float ClothAlpha; // 0x1a8(0x04)
	float LeftHandIKAlpha; // 0x1ac(0x04)
	float RightHandIKAlpha; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct FVector LeftHandIKLocation; // 0x1b8(0x18)
	bool bUseLeftHandIKLocation; // 0x1d0(0x01)
	bool FootIKEnabled; // 0x1d1(0x01)
	char pad_1D2[0x6]; // 0x1d2(0x06)
	struct FRotator FootIKBoneRot; // 0x1d8(0x18)
	struct FVector FootIKBoneScale; // 0x1f0(0x18)
	struct FVector FootIKActorDownTranslation; // 0x208(0x18)
	float FootIKAlpha; // 0x220(0x04)
	float UpperBody3PAnimSlotBlendTime; // 0x224(0x04)
	float LowerBody3PAnimSlotBlendTime; // 0x228(0x04)
	float AnimSlotBlendTime1P; // 0x22c(0x04)
	float AimOffsetBlendTime3P; // 0x230(0x04)
	float LowerBodyMontageWeight; // 0x234(0x04)
	float CrouchLowerBodyMontageAlpha; // 0x238(0x04)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct FVector CrouchSplitterTranslation; // 0x240(0x18)
	float SpineBlendWeight; // 0x258(0x04)
	float ReapplyHandPoseBlendWeight; // 0x25c(0x04)
	float HitReactionDamageNorthSouthBlendSpaceAlpha; // 0x260(0x04)
	float HitReactionDamageEastWestBlendSpaceAlpha; // 0x264(0x04)
	bool bHitReactionTriggered; // 0x268(0x01)
	bool bHitReactionTriggeredThisFrame; // 0x269(0x01)
	char pad_26A[0x2]; // 0x26a(0x02)
	float CrouchUnits; // 0x26c(0x04)
	float CrouchAmount; // 0x270(0x04)
	bool bIsLeftHanded; // 0x274(0x01)
	char pad_275[0x3]; // 0x275(0x03)
};

// ScriptStruct ShooterGame.AnimationAssets1P
// Size: 0x78 (Inherited: 0x00)
struct FAnimationAssets1P {
	struct UAnimSequence* IdleBaseAnimation; // 0x00(0x08)
	struct UAnimSequence* AltModeIdleBaseAnimation; // 0x08(0x08)
	struct UAnimSequence* FidgetAnimation; // 0x10(0x08)
	struct UAnimSequence* DisabledAnimation; // 0x18(0x08)
	struct UAnimSequence* IdleAdditiveAnimation; // 0x20(0x08)
	struct UAnimSequence* JumpAnimation; // 0x28(0x08)
	struct UAnimSequence* JumpLandAnimation; // 0x30(0x08)
	struct UAnimSequence* RunAnimation; // 0x38(0x08)
	struct UAimOffsetBlendSpace* LookBlendspace; // 0x40(0x08)
	struct UAimOffsetBlendSpace* Look2Blendspace; // 0x48(0x08)
	struct UAnimSequence* CrouchIdleAnimation; // 0x50(0x08)
	struct UAnimSequence* CrouchAnimation; // 0x58(0x08)
	struct UAnimSequence* CrouchWalkAnimation; // 0x60(0x08)
	struct UAnimSequence* StandUpAnimation; // 0x68(0x08)
	struct UAnimSequence* WalkAnimation; // 0x70(0x08)
};

// ScriptStruct ShooterGame.AnimationAssetsGun1P
// Size: 0x48 (Inherited: 0x00)
struct FAnimationAssetsGun1P {
	struct UAnimSequence* IdleAnimation; // 0x00(0x08)
	struct UAnimSequence* JumpAnimation; // 0x08(0x08)
	struct UAnimSequence* JumpLandAnimation; // 0x10(0x08)
	struct UAnimSequence* RunAnimation; // 0x18(0x08)
	struct UAnimSequence* CrouchIdleAnimation; // 0x20(0x08)
	struct UAnimSequence* CrouchAnimation; // 0x28(0x08)
	struct UAnimSequence* CrouchWalkAnimation; // 0x30(0x08)
	struct UAnimSequence* StandUpAnimation; // 0x38(0x08)
	struct UAnimSequence* WalkAnimation; // 0x40(0x08)
};

// ScriptStruct ShooterGame.BoneTransformAim3P
// Size: 0xd8 (Inherited: 0x00)
struct FBoneTransformAim3P {
	struct FRotator Spine1Rotation; // 0x00(0x18)
	struct FRotator Spine2Rotation; // 0x18(0x18)
	struct FRotator Spine3Rotation; // 0x30(0x18)
	struct FRotator Spine4Rotation; // 0x48(0x18)
	struct FRotator NeckRotation; // 0x60(0x18)
	struct FRotator HeadRotation; // 0x78(0x18)
	struct FRotator LeftClavicleRotation; // 0x90(0x18)
	struct FRotator RightClavicleRotation; // 0xa8(0x18)
	struct FBoneReference ConstraintBone; // 0xc0(0x14)
	char pad_D4[0x4]; // 0xd4(0x04)
};

// ScriptStruct ShooterGame.AnimationSlotArray
// Size: 0x18 (Inherited: 0x00)
struct FAnimationSlotArray {
	struct TArray<struct UAnimationAsset*> AnimationAssets; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct ShooterGame.AnimationStateReplicationData
// Size: 0x08 (Inherited: 0x00)
struct FAnimationStateReplicationData {
	int32_t LowerBodyRunBlendspaceActiveIndex; // 0x00(0x04)
	int32_t LowerBodyCrouchWalkBlendspaceActiveIndex; // 0x04(0x04)
};

// ScriptStruct ShooterGame.MontageStartTime
// Size: 0x10 (Inherited: 0x00)
struct FMontageStartTime {
	struct UAnimMontage* AnimMontage; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.CachableAnimationData
// Size: 0x118 (Inherited: 0x00)
struct FCachableAnimationData {
	struct TMap<struct UAnimSlot1P*, struct FAnimationSlotArray> Arms1PAnimations; // 0x00(0x50)
	struct TMap<struct UAnimSlotLowerBody3P*, struct FAnimationSlotArray> LowerBody3PAnimations; // 0x50(0x50)
	struct TMap<struct UAnimSlotUpperBody3P*, struct FAnimationSlotArray> UpperBody3PAnimations; // 0xa0(0x50)
	struct FAnimationSlotArray HitReactionAnimations; // 0xf0(0x18)
	struct UAnimSequence* FaceFidgetAnimation; // 0x108(0x08)
	char pad_110[0x8]; // 0x110(0x08)
};

// ScriptStruct ShooterGame.AresAnimDynamicState
// Size: 0x01 (Inherited: 0x00)
struct FAresAnimDynamicState {
	bool bAnimDynamicEnabled; // 0x00(0x01)
};

// ScriptStruct ShooterGame.AnimMovementStateTransition
// Size: 0x18 (Inherited: 0x00)
struct FAnimMovementStateTransition {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ShooterGame.AnimPunchTuning
// Size: 0x10 (Inherited: 0x00)
struct FAnimPunchTuning {
	float Punch; // 0x00(0x04)
	float Height; // 0x04(0x04)
	float Rotation; // 0x08(0x04)
	float ADSPunch; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.NotifyTriggerType
// Size: 0x20 (Inherited: 0x00)
struct FNotifyTriggerType {
	struct UScriptStateComponent* StateToTransitionTo; // 0x00(0x08)
	struct TArray<float> NotifyTimes; // 0x08(0x10)
	bool bReturningState; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ShooterGame.AntiAddictionState
// Size: 0xe0 (Inherited: 0x00)
struct FAntiAddictionState {
	enum class EPolicyType PolicyTypeEnum; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString PolicyType; // 0x08(0x10)
	enum class EDisplayType DisplayTypeEnum; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString DisplayType; // 0x20(0x10)
	struct FString LocalizationKey; // 0x30(0x10)
	struct TMap<struct FString, struct FString> LocalizationContext; // 0x40(0x50)
	struct TMap<struct FString, struct FString> HopePayload; // 0x90(0x50)
};

// ScriptStruct ShooterGame.HopeAntiAddictionPolicy
// Size: 0x28 (Inherited: 0x00)
struct FHopeAntiAddictionPolicy {
	enum class EPolicyType PolicyTypeEnum; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString PolicyType; // 0x08(0x10)
	struct FString HopeMessage; // 0x18(0x10)
};

// ScriptStruct ShooterGame.AttributeValueChangeDelegateList
// Size: 0x18 (Inherited: 0x00)
struct FAttributeValueChangeDelegateList {
	struct TArray<struct FDelegate> Delegates; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct ShooterGame.TagValueChangeDelegateList
// Size: 0x18 (Inherited: 0x00)
struct FTagValueChangeDelegateList {
	struct TArray<struct FDelegate> Delegates; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct ShooterGame.TagImmunityChangeDelegateList
// Size: 0x18 (Inherited: 0x00)
struct FTagImmunityChangeDelegateList {
	struct TArray<struct FDelegate> Delegates; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct ShooterGame.TagDurationChangeDelegateList
// Size: 0x18 (Inherited: 0x00)
struct FTagDurationChangeDelegateList {
	struct TArray<struct FDelegate> Delegates; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct ShooterGame.TagCountChangeDelegateList
// Size: 0x18 (Inherited: 0x00)
struct FTagCountChangeDelegateList {
	struct TArray<struct FDelegate> Delegates; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct ShooterGame.AimToolingTelemetryEvent
// Size: 0xe0 (Inherited: 0x00)
struct FAimToolingTelemetryEvent {
	struct FString MatchID; // 0x00(0x10)
	int32_t RoundNumber; // 0x10(0x04)
	float RoundTime; // 0x14(0x04)
	struct FString Subject; // 0x18(0x10)
	struct FAimToolingTelemetryData AimToolingData; // 0x28(0xb8)
};

// ScriptStruct ShooterGame.GameplayBooleanAttributeData
// Size: 0x10 (Inherited: 0x10)
struct FGameplayBooleanAttributeData : FGameplayAttributeData {
};

// ScriptStruct ShooterGame.AudioComponentPool
// Size: 0x18 (Inherited: 0x00)
struct FAudioComponentPool {
	int32_t MaxSize; // 0x00(0x04)
	int32_t CurrentStart; // 0x04(0x04)
	struct TArray<struct UAresAudioComponent*> AudioComponents; // 0x08(0x10)
};

// ScriptStruct ShooterGame.AresDebugSpherePersistent
// Size: 0x38 (Inherited: 0x00)
struct FAresDebugSpherePersistent {
	int32_t ID; // 0x00(0x04)
	float TimeLastUpdated; // 0x04(0x04)
	float LifeTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector Center; // 0x10(0x18)
	float Radius; // 0x28(0x04)
	int32_t Segments; // 0x2c(0x04)
	struct FColor Color; // 0x30(0x04)
	char DepthPriority; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct ShooterGame.AresDebugLinePersistent
// Size: 0x50 (Inherited: 0x00)
struct FAresDebugLinePersistent {
	int32_t ID; // 0x00(0x04)
	float TimeLastUpdated; // 0x04(0x04)
	float LifeTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector LineStart; // 0x10(0x18)
	struct FVector LineEnd; // 0x28(0x18)
	struct FColor Color; // 0x40(0x04)
	char DepthPriority; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float Thickness; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ShooterGame.AresCeremonyKillEvent
// Size: 0x20 (Inherited: 0x00)
struct FAresCeremonyKillEvent {
	struct AOwnerExclusivePlayerInfo* VictimPlayerInfo; // 0x00(0x08)
	struct UDamageResponse* Response; // 0x08(0x08)
	struct AOwnerExclusivePlayerInfo* KillerPlayerInfo; // 0x10(0x08)
	float TimeLeftInRound; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.AresCeremonyRespawnEvent
// Size: 0x10 (Inherited: 0x00)
struct FAresCeremonyRespawnEvent {
	struct AOwnerExclusivePlayerInfo* RespawnedPlayerInfo; // 0x00(0x08)
	float TimeLeftInRound; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.AresCeremonyTriggerEvent
// Size: 0x38 (Inherited: 0x00)
struct FAresCeremonyTriggerEvent {
	enum class EAresCeremonyTriggerType TriggerType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FAresCeremonyKillEvent KillEvent; // 0x08(0x20)
	struct FAresCeremonyRespawnEvent RespawnEvent; // 0x28(0x10)
};

// ScriptStruct ShooterGame.AresCeremonyDecisionContext
// Size: 0xc8 (Inherited: 0x00)
struct FAresCeremonyDecisionContext {
	struct TArray<struct FAresCeremonyTriggerEvent> CeremonyTriggerEvents; // 0x00(0x10)
	struct UBaseTeamComponent* WinningTeam; // 0x10(0x08)
	enum class EAresRoundOutcome RoundOutcome; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TMap<int32_t, struct AShooterPlayerState*> AttackingTeamPlayerStates; // 0x20(0x50)
	struct TMap<int32_t, struct AShooterPlayerState*> DefendingTeamPlayerStates; // 0x70(0x50)
	int32_t AttackingTeamAverageInventory; // 0xc0(0x04)
	int32_t DefendingTeamAverageInventory; // 0xc4(0x04)
};

// ScriptStruct ShooterGame.StaticMeshMaterialList
// Size: 0x10 (Inherited: 0x00)
struct FStaticMeshMaterialList {
	struct TArray<struct UMaterialInterface*> MaterialList; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ConnectToServerDetails
// Size: 0x58 (Inherited: 0x00)
struct FConnectToServerDetails {
	struct FString Host; // 0x00(0x10)
	int32_t Port; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString DisplayName; // 0x18(0x10)
	struct FString Subject; // 0x28(0x10)
	struct FString Team; // 0x38(0x10)
	struct FString Map; // 0x48(0x10)
};

// ScriptStruct ShooterGame.AllInitSystems
// Size: 0x4d0 (Inherited: 0x00)
struct FAllInitSystems {
	struct UTelemetryManager* TelemetryManagerInstance; // 0x00(0x08)
	struct UTelemetrySampler* TelemetrySamplerInstance; // 0x08(0x08)
	struct UPlatformInitSettingsManager* PlatformInitSettingsManager; // 0x10(0x08)
	struct URiotProductManager* RiotProductManager; // 0x18(0x08)
	struct UFRELoginManager* FRELoginManager; // 0x20(0x08)
	struct UAresHotfixManager* AresHotfixManager; // 0x28(0x08)
	struct URiotGamesApiClient* RiotGamesApiClient; // 0x30(0x08)
	struct UContentIndexManager* ContentIndexManager; // 0x38(0x08)
	struct UInventoryInitManager* InventoryInitManager; // 0x40(0x08)
	struct UAntiAddictionManager* AntiAddictionManager; // 0x48(0x08)
	struct UAntiAddictionSessionManager* AntiAddictionSessionManager; // 0x50(0x08)
	struct UCNAntiAddictionManager* CNAntiAddictionManager; // 0x58(0x08)
	struct URNetVoiceManager* VoiceManager; // 0x60(0x08)
	struct UChatFriendsMetadataManager* ChatFriendsMetadataManager; // 0x68(0x08)
	struct UPresenceManager* PresenceManager; // 0x70(0x08)
	struct UPresenceUpdater* PresenceUpdater; // 0x78(0x08)
	struct UTextChatManagerV2* TextChatManagerV2; // 0x80(0x08)
	struct UMutedPatternsManager* MutedPatternsManager; // 0x88(0x08)
	struct UThreadedChatManager* ThreadedChatManager; // 0x90(0x08)
	struct UFriendsManager* FriendsManager; // 0x98(0x08)
	struct UDisplayNameManager* DisplayNameManager; // 0xa0(0x08)
	struct UAresSettingsManager* AresSettingsManager; // 0xa8(0x08)
	struct URoamingSettingsManager* RoamingSettingsManager; // 0xb0(0x08)
	struct UCustomGameManager* CustomGameManager; // 0xb8(0x08)
	struct UCoreGameManager* CoreGameManager; // 0xc0(0x08)
	struct UVoiceRoomManager* VoiceRoomManager; // 0xc8(0x08)
	struct UMatchDetailsManager* MatchDetailsManager; // 0xd0(0x08)
	struct UMMRManager* MMRManager; // 0xd8(0x08)
	struct UContentManager* ContentManager; // 0xe0(0x08)
	struct UGameFlowStateManager* GameFlowStateManager; // 0xe8(0x08)
	struct UGameFlowPredictionManager* GameFlowPredictionManager; // 0xf0(0x08)
	struct UServiceTickerManager* ServiceTickerManager; // 0xf8(0x08)
	struct UMatchHistoryManager* MatchHistoryManager; // 0x100(0x08)
	struct UMatchHistoryViewController* MatchHistoryViewController; // 0x108(0x08)
	struct UTravelManager* TravelManager; // 0x110(0x08)
	struct UPreloadManager* PreloadManager; // 0x118(0x08)
	struct UPlayerFeedbackToolPluginManager* PlayerFeedbackToolPluginManager; // 0x120(0x08)
	struct UPartyModel* PartyModel; // 0x128(0x08)
	struct UPlatformPlayerManager* PlatformPlayerManager; // 0x130(0x08)
	struct UPartyViewController* PartyViewController; // 0x138(0x08)
	struct USocialViewControllerV3* SocialViewController; // 0x140(0x08)
	struct UAresSocialExperienceModel* SocialExperienceModel; // 0x148(0x08)
	struct USocialIntegrationManager* SocialIntegrationManager; // 0x150(0x08)
	struct UPatchNotesManager* PatchNotesManager; // 0x158(0x08)
	struct UAresWatermarkManager* WatermarkManager; // 0x160(0x08)
	struct UInventoryManager* InventoryManager; // 0x168(0x08)
	struct UPlayerListingManager* PlayerListingManager; // 0x170(0x08)
	struct UPartyListingManager* PartyListingManager; // 0x178(0x08)
	struct UWhisperChatManager* WhisperChatManager; // 0x180(0x08)
	struct UNotificationManager* NotificationManager; // 0x188(0x08)
	struct UDebugNotificationEmitter* DebugNotificationEmitter; // 0x190(0x08)
	struct UPartyNotificationManager* PartyNotificationManager; // 0x198(0x08)
	struct UFriendNotificationManager* FriendNotificationManager; // 0x1a0(0x08)
	struct UPlayerReportNotificationManager* PlayerReportNotificationManager; // 0x1a8(0x08)
	struct UVoiceModel* VoiceModel; // 0x1b0(0x08)
	struct UVoicePreferencesManager* VoicePreferencesManager; // 0x1b8(0x08)
	struct UVoiceViewController* VoiceViewController; // 0x1c0(0x08)
	struct UMatchmakingManager* MatchmakingManager; // 0x1c8(0x08)
	struct UPregameManager* PregameManager; // 0x1d0(0x08)
	struct UContractsManager* ContractsManager; // 0x1d8(0x08)
	struct UBTEManager* BTEManager; // 0x1e0(0x08)
	struct UContractDefinitionsManager* ContractDefinitionsManager; // 0x1e8(0x08)
	struct UContractsViewController* ContractsViewController; // 0x1f0(0x08)
	struct UCrosshairManager* CrosshairManager; // 0x1f8(0x08)
	struct URewardGrantModelFactory* RewardGrantModelFactory; // 0x200(0x08)
	struct UVanguardManager* VanguardManager; // 0x208(0x08)
	struct UDropInLoadingManager* DropInLoadingManager; // 0x210(0x08)
	struct UChatSessionManager* ChatSessionManager; // 0x218(0x08)
	struct UPurchaseManager* PurchaseManager; // 0x220(0x08)
	struct UPlatformOffersManager* PlatformOffersManager; // 0x228(0x08)
	struct UStoreManager* StoreManager; // 0x230(0x08)
	struct UStoreConfigurationManager* StoreConfigurationManager; // 0x238(0x08)
	struct UStoreUITelemetryManager* StoreUITelemetryManager; // 0x240(0x08)
	struct UStoreViewControllerV2* StoreViewController; // 0x248(0x08)
	struct UGiftingManager* GiftingManager; // 0x250(0x08)
	struct UPlayerFeedbackToolViewController* PlayerFeedbackToolViewController; // 0x258(0x08)
	struct UAresClientEvents* AresClientEvents; // 0x260(0x08)
	struct UCompetitiveTierUpdater* CompetitiveTierUpdater; // 0x268(0x08)
	struct UPlayerIdentityUpdater* PlayerIdentityUpdater; // 0x270(0x08)
	struct UProvisioningErrorNotificationManager* ProvisioningErrorNotificationManager; // 0x278(0x08)
	struct ULegalInfoManager* LegalInfoManager; // 0x280(0x08)
	struct UMapLoadModel* MapLoadModel; // 0x288(0x08)
	struct UMenuStackManager* MenuStackManager; // 0x290(0x08)
	struct UUINavigationManager* UINavigationManager; // 0x298(0x08)
	struct UModalManager* ModalManager; // 0x2a0(0x08)
	struct UFlyoutManager* FlyoutManager; // 0x2a8(0x08)
	struct UPlayerAliasManager* PlayerAliasManager; // 0x2b0(0x08)
	struct UPaymentsManager* PaymentsManager; // 0x2b8(0x08)
	struct UPingManager* PingManager; // 0x2c0(0x08)
	struct UOnlineIdentityManager* OnlineIdentityManager; // 0x2c8(0x08)
	struct UPlayerSettingsTelemetry* PlayerSettingsTelemetry; // 0x2d0(0x08)
	struct UReplayTelemetry* ReplayTelemetry; // 0x2d8(0x08)
	struct UUITelemetryManager* UITelemetryManager; // 0x2e0(0x08)
	struct UActionTraitsManager* ActionTraitsManager; // 0x2e8(0x08)
	struct UActionBindingsManager* ActionBindingsManager; // 0x2f0(0x08)
	struct UPlayerFacingPerfManager* PlayerFacingPerfManager; // 0x2f8(0x08)
	struct UApplicationRepairManager* ApplicationRepairManager; // 0x300(0x08)
	struct UArsenalViewController* ArsenalViewController; // 0x308(0x08)
	struct UPlayerAffinityManager* PlayerAffinityManager; // 0x310(0x08)
	struct UPatchAvailabilityManager* PatchAvailabilityManager; // 0x318(0x08)
	struct URiotClientConfigManager* RiotClientConfigManager; // 0x320(0x08)
	struct UNPELoader* NPELoader; // 0x328(0x08)
	struct UTransitionModelManager* TransitionModelManager; // 0x330(0x08)
	struct UTutorialManager* TutorialManager; // 0x338(0x08)
	struct ULoginQueueManager* LoginQueueManager; // 0x340(0x08)
	struct URiotClientHeartbeatManager* RiotClientHeartbeatManager; // 0x348(0x08)
	struct ULocalePreferenceManager* LocalePreferenceManager; // 0x350(0x08)
	struct UVNGManager* VNGManager; // 0x358(0x08)
	struct UMassRewardsManager* MassRewardsManager; // 0x360(0x08)
	struct UPlayerLoginLocationHistoryManager* PlayerLoginLocationHistoryManager; // 0x368(0x08)
	struct URestrictionsManager* RestrictionsManager; // 0x370(0x08)
	struct UAccountXPManager* AccountXPManager; // 0x378(0x08)
	struct UReporterFeedbackManager* ReporterFeedbackManager; // 0x380(0x08)
	struct URiotWarningManager* RiotWarningManager; // 0x388(0x08)
	struct URosterManager* RosterManager; // 0x390(0x08)
	struct UPremierRosterManager* PremierRosterManager; // 0x398(0x08)
	struct UPremierSeasonManager* PremierSeasonManager; // 0x3a0(0x08)
	struct UTournamentsManager* TournamentsManager; // 0x3a8(0x08)
	struct UPremierTournamentsManager* PremierTournamentsManager; // 0x3b0(0x08)
	struct UPremierManagerOld* PremierManagerOld; // 0x3b8(0x08)
	struct UPremierRosterManagerOld* PremierRosterManagerOld; // 0x3c0(0x08)
	struct UPremierRosterViewController* PremierRosterViewController; // 0x3c8(0x08)
	struct ULeaderboardManager* LeaderboardManager; // 0x3d0(0x08)
	struct UPremierLeaderboardManager* PremierLeaderboardManager; // 0x3d8(0x08)
	struct ULeaderboardViewController* LeaderboardViewController; // 0x3e0(0x08)
	struct UMainMenuTelemetryManager* MainMenuTelemetryManager; // 0x3e8(0x08)
	struct UHovercardCacheManager* HovercardCacheManager; // 0x3f0(0x08)
	struct UEULAManager* EULAManager; // 0x3f8(0x08)
	struct UAVSManager* AVSManager; // 0x400(0x08)
	struct UDailyRewardsManager* DailyRewardsManager; // 0x408(0x08)
	struct UJuiceScreenViewController* JuiceScreenViewController; // 0x410(0x08)
	struct UFavoritesManager* FavoritesManager; // 0x418(0x08)
	struct UContentFilterViewController* ContentFilterViewController; // 0x420(0x08)
	struct UContentFilterUITelemetryManager* ContentFilterUITelemetryManager; // 0x428(0x08)
	struct UUserInfoNotificationManager* UserInfoNotificationManager; // 0x430(0x08)
	struct UClientTelemetryPersistence* TelemetryPersistence; // 0x438(0x08)
	struct ULatencyService* LatencyService; // 0x440(0x08)
	struct UPlatformEnvironmentManager* PlatformEnvironmentManager; // 0x448(0x08)
	struct UConfigManager* ConfigManager; // 0x450(0x08)
	struct URSOManager* RSOManager; // 0x458(0x08)
	struct UPlatformSessionManager* SessionManager; // 0x460(0x08)
	struct URMSManager* RMSManager; // 0x468(0x08)
	struct UPersonalizationManagerV2* PersonalizationManagerV2; // 0x470(0x08)
	struct UPartyManager* PartyManager; // 0x478(0x08)
	struct UPlayerReportManager* PlayerReportManager; // 0x480(0x08)
	struct UGlobalAudioManager* GlobalAudioManager; // 0x488(0x08)
	struct UEsportsManager* EsportsManager; // 0x490(0x08)
	struct UEsportsTelemetryManager* EsportsTelemetryManager; // 0x498(0x08)
	struct UReplayDataManager* ReplayDataManager; // 0x4a0(0x08)
	struct UAresRGIFriendsClient* RGIFriendsClient; // 0x4a8(0x08)
	struct UMainMenuParentWidget* MainMenuParent; // 0x4b0(0x08)
	struct UNativePlatformAuthManager* NativePlatformAuthManager; // 0x4b8(0x08)
	struct UClientExperimentationManager* ClientExperimentationManager; // 0x4c0(0x08)
	struct UOutOfGameConfigurationManager* OutOfGameConfigurationManager; // 0x4c8(0x08)
};

// ScriptStruct ShooterGame.HeldProgressMaterialPair
// Size: 0x18 (Inherited: 0x00)
struct FHeldProgressMaterialPair {
	struct UMaterialInstanceDynamic* ProgressMaterial; // 0x00(0x08)
	struct FName ProgressParameter; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.ButtonMaterialAnimationInfo
// Size: 0x38 (Inherited: 0x00)
struct FButtonMaterialAnimationInfo {
	float AnimationLength; // 0x00(0x04)
	struct FName MaterialParameter; // 0x04(0x0c)
	struct UCurveFloat* AnimationCurve; // 0x10(0x08)
	struct FName MaterialName; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct ShooterGame.ButtonMaterialAnimations
// Size: 0x10 (Inherited: 0x00)
struct FButtonMaterialAnimations {
	struct TArray<struct FButtonMaterialAnimationInfo> AnimationInfos; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AresActionBindingHandle
// Size: 0x04 (Inherited: 0x00)
struct FAresActionBindingHandle {
	char pad_0[0x4]; // 0x00(0x04)
};

// ScriptStruct ShooterGame.WidgetAlignmentArgs
// Size: 0x14 (Inherited: 0x00)
struct FWidgetAlignmentArgs {
	struct FMargin Padding; // 0x00(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x10(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
};

// ScriptStruct ShooterGame.SizeBoxArgs
// Size: 0x28 (Inherited: 0x00)
struct FSizeBoxArgs {
	float WidthOverride; // 0x00(0x04)
	float HeightOverride; // 0x04(0x04)
	float MinDesiredWidth; // 0x08(0x04)
	float MinDesiredHeight; // 0x0c(0x04)
	float MaxDesiredWidth; // 0x10(0x04)
	float MaxDesiredHeight; // 0x14(0x04)
	float MinAspectRatio; // 0x18(0x04)
	float MaxAspectRatio; // 0x1c(0x04)
	bool bWidthOverride; // 0x20(0x01)
	bool bHeightOverride; // 0x21(0x01)
	bool bMinDesiredWidth; // 0x22(0x01)
	bool bMinDesiredHeight; // 0x23(0x01)
	bool bMaxDesiredWidth; // 0x24(0x01)
	bool bMaxDesiredHeight; // 0x25(0x01)
	bool bMinAspectRatio; // 0x26(0x01)
	bool bMaxAspectRatio; // 0x27(0x01)
};

// ScriptStruct ShooterGame.AresCommonTabListConfiguration
// Size: 0x98 (Inherited: 0x00)
struct FAresCommonTabListConfiguration {
	struct FSizeBoxArgs TabListSizeBoxConfiguration; // 0x00(0x28)
	struct FWidgetAlignmentArgs TabListContainerAlignment; // 0x28(0x14)
	struct FWidgetAlignmentArgs ButtonContainerAlignment; // 0x3c(0x14)
	struct FWidgetAlignmentArgs PreviousInputActionAlignment; // 0x50(0x14)
	struct FWidgetAlignmentArgs NextInputActionAlignment; // 0x64(0x14)
	struct FMargin ButtonPadding; // 0x78(0x10)
	bool bRequiresSelection; // 0x88(0x01)
	bool bShouldSelectButtonOnFocus; // 0x89(0x01)
	bool bShouldFocusButtonOnSelect; // 0x8a(0x01)
	bool bOnlyFocusOnSelectWhenGroupHasFocus; // 0x8b(0x01)
	bool bShouldLoopDirectionalNavigation; // 0x8c(0x01)
	bool bShouldLoopManualNavigation; // 0x8d(0x01)
	bool bShouldHideActionWidgetsOnSingleEntry; // 0x8e(0x01)
	bool bShouldHideWidgetOnSingleEntry; // 0x8f(0x01)
	float EnabledRenderOpacity; // 0x90(0x04)
	float DisabledRenderOpacity; // 0x94(0x04)
};

// ScriptStruct ShooterGame.OverridableTextProperties
// Size: 0x08 (Inherited: 0x00)
struct FOverridableTextProperties {
	int32_t Size; // 0x00(0x04)
	int32_t Tracking; // 0x04(0x04)
};

// ScriptStruct ShooterGame.AresPaginatedListViewConfig
// Size: 0x18 (Inherited: 0x00)
struct FAresPaginatedListViewConfig {
	struct UUserWidget* EntryWidgetClass; // 0x00(0x08)
	int32_t EntriesPerPage; // 0x08(0x04)
	bool bDirectionalNavigationInPages; // 0x0c(0x01)
	bool bPageTabbingLoops; // 0x0d(0x01)
	bool bRightClickScrolling; // 0x0e(0x01)
	bool bNavigationIsSelection; // 0x0f(0x01)
	bool bWrapHorizontalNavigation; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.AresContextMenuItemAppearanceDefinition
// Size: 0x10 (Inherited: 0x00)
struct FAresContextMenuItemAppearanceDefinition {
	struct UAresContextMenuItemViewModel* ViewModelClass; // 0x00(0x08)
	struct UAresContextMenuItemWidget* ViewClass; // 0x08(0x08)
};

// ScriptStruct ShooterGame.ContextMenuItemDelegateHandles
// Size: 0x18 (Inherited: 0x00)
struct FContextMenuItemDelegateHandles {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ShooterGame.CrosshairPresetEntry
// Size: 0x48 (Inherited: 0x00)
struct FCrosshairPresetEntry {
	struct FString ShareableCrosshairString; // 0x00(0x10)
	struct FText PresetName; // 0x10(0x18)
	struct FGameplayTagContainer CrosshairFilters; // 0x28(0x20)
};

// ScriptStruct ShooterGame.AresPointDamageEvent
// Size: 0x130 (Inherited: 0x120)
struct FAresPointDamageEvent : FPointDamageEvent {
	enum class EAresRegionalDamage RegionalDamage; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float DamageFalloff; // 0x124(0x04)
	bool bDamageThroughWall; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
};

// ScriptStruct ShooterGame.AresDamageInstance
// Size: 0x20 (Inherited: 0x00)
struct FAresDamageInstance {
	bool bIsDamagedActorTargetsCharacter; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UDamageResponse* DamageResponse; // 0x08(0x08)
	struct AShooterPlayerState* InstigatorInfo; // 0x10(0x08)
	struct AShooterPlayerState* TargetInfo; // 0x18(0x08)
};

// ScriptStruct ShooterGame.DeveloperCommand
// Size: 0x20 (Inherited: 0x00)
struct FDeveloperCommand {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.AresDoorStatus
// Size: 0x02 (Inherited: 0x00)
struct FAresDoorStatus {
	enum class EAresDoorState DoorState; // 0x00(0x01)
	enum class EAresDoorTransition Transition; // 0x01(0x01)
};

// ScriptStruct ShooterGame.DPIScalingParameters
// Size: 0x0c (Inherited: 0x00)
struct FDPIScalingParameters {
	struct FIntPoint ScreenResolution; // 0x00(0x08)
	int32_t ScreenDensity; // 0x08(0x04)
};

// ScriptStruct ShooterGame.EditControlsWidgetList
// Size: 0x10 (Inherited: 0x00)
struct FEditControlsWidgetList {
	struct TArray<struct UUserWidget*> WidgetList; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AsyncLoadedEquippableCharacterAnim
// Size: 0x30 (Inherited: 0x00)
struct FAsyncLoadedEquippableCharacterAnim {
	char pad_0[0x10]; // 0x00(0x10)
	struct UAnimationAsset* LoadedAltModeAsset; // 0x10(0x08)
	char pad_18[0x10]; // 0x18(0x10)
	struct UAnimationAsset* LoadedDefaultAsset; // 0x28(0x08)
};

// ScriptStruct ShooterGame.AsyncLoadedEquippableGunAnim
// Size: 0x48 (Inherited: 0x00)
struct FAsyncLoadedEquippableGunAnim {
	char pad_0[0x10]; // 0x00(0x10)
	struct UAnimationAsset* LoadedDefaultAsset; // 0x10(0x08)
	char pad_18[0x10]; // 0x18(0x10)
	struct UAnimationAsset* LoadedCosmeticAsset; // 0x28(0x08)
	char pad_30[0x10]; // 0x30(0x10)
	struct UAnimationAsset* LoadedCosmeticAltModeAsset; // 0x40(0x08)
};

// ScriptStruct ShooterGame.EquippableAimToolingModifiers
// Size: 0x50 (Inherited: 0x00)
struct FEquippableAimToolingModifiers {
	bool bAimToolingEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BendingEfficacyScale; // 0x04(0x04)
	float PullToCenterEfficacyScale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString TuningTagHipfire; // 0x10(0x10)
	struct FString TuningTagHipfireCloseRange; // 0x20(0x10)
	struct FString TuningTagFocus; // 0x30(0x10)
	struct FString TuningTagADS; // 0x40(0x10)
};

// ScriptStruct ShooterGame.PurchasableOverrideTableRow
// Size: 0x40 (Inherited: 0x08)
struct FPurchasableOverrideTableRow : FTableRowBase {
	struct UAresPurchasable* OriginalPurchasable; // 0x08(0x08)
	struct TSoftClassPtr<UObject> OverridePurchasable; // 0x10(0x30)
};

// ScriptStruct ShooterGame.PurchsableTableRow
// Size: 0x38 (Inherited: 0x08)
struct FPurchsableTableRow : FTableRowBase {
	struct TSoftClassPtr<UObject> PurchsableClass; // 0x08(0x30)
};

// ScriptStruct ShooterGame.FireButtonWeaponCustomizationSettingData
// Size: 0x130 (Inherited: 0x00)
struct FFireButtonWeaponCustomizationSettingData {
	struct TSoftClassPtr<UObject> EquippableUIData; // 0x00(0x30)
	struct FString WeaponName; // 0x30(0x10)
	enum class EEquippableCategory WeaponCategory; // 0x40(0x01)
	char pad_41[0xf]; // 0x41(0x0f)
	struct FSlateBrush WeaponImage; // 0x50(0xd0)
	struct TArray<enum class EWidgetLayoutSettingName> ValidLayoutSettings; // 0x120(0x10)
};

// ScriptStruct ShooterGame.AresSystemTelemetryMetrics
// Size: 0x850 (Inherited: 0x00)
struct FAresSystemTelemetryMetrics {
	struct FMetric AI; // 0x00(0x1c)
	struct FMetric AI_Behavior; // 0x1c(0x1c)
	struct FMetric AI_Controller; // 0x38(0x1c)
	struct FMetric AI_Movement; // 0x54(0x1c)
	struct FMetric AI_Perception; // 0x70(0x1c)
	struct FMetric AI_SpatialAwareness; // 0x8c(0x1c)
	struct FMetric AI_Other; // 0xa8(0x1c)
	struct FMetric Animation; // 0xc4(0x1c)
	struct FMetric Animation_TickPose; // 0xe0(0x1c)
	struct FMetric Animation_ProxyUpdateAnimation; // 0xfc(0x1c)
	struct FMetric Animation_RefreshBoneTransforms; // 0x118(0x1c)
	struct FMetric Animation_AnimationStateComponentTick; // 0x134(0x1c)
	struct FMetric Animation_Other; // 0x150(0x1c)
	struct FMetric Character; // 0x16c(0x1c)
	struct FMetric Character_Input; // 0x188(0x1c)
	struct FMetric Character_Tick; // 0x1a4(0x1c)
	struct FMetric Character_Abilities; // 0x1c0(0x1c)
	struct FMetric Character_Other; // 0x1dc(0x1c)
	struct FMetric Equippable; // 0x1f8(0x1c)
	struct FMetric Equippable_Other; // 0x214(0x1c)
	struct FMetric Esports; // 0x230(0x1c)
	struct FMetric Esports_Other; // 0x24c(0x1c)
	struct FMetric FogOfWar; // 0x268(0x1c)
	struct FMetric FogOfWar_Visibility; // 0x284(0x1c)
	struct FMetric FogOfWar_Manager; // 0x2a0(0x1c)
	struct FMetric FogOfWar_Component; // 0x2bc(0x1c)
	struct FMetric FogOfWar_Other; // 0x2d8(0x1c)
	struct FMetric Gameplay; // 0x2f4(0x1c)
	struct FMetric Gameplay_GameMode; // 0x310(0x1c)
	struct FMetric Gameplay_GameState; // 0x32c(0x1c)
	struct FMetric Gameplay_PlayerState; // 0x348(0x1c)
	struct FMetric Gameplay_Controller; // 0x364(0x1c)
	struct FMetric Gameplay_Audio; // 0x380(0x1c)
	struct FMetric Gameplay_Minimap; // 0x39c(0x1c)
	struct FMetric Gameplay_InputTooling; // 0x3b8(0x1c)
	struct FMetric Gameplay_Other; // 0x3d4(0x1c)
	struct FMetric Movement; // 0x3f0(0x1c)
	struct FMetric Movement_Other; // 0x40c(0x1c)
	struct FMetric Network; // 0x428(0x1c)
	struct FMetric Network_StreamComponent; // 0x444(0x1c)
	struct FMetric Network_OodleNetwork; // 0x460(0x1c)
	struct FMetric Network_Other; // 0x47c(0x1c)
	struct FMetric Particles; // 0x498(0x1c)
	struct FMetric Particles_Other; // 0x4b4(0x1c)
	struct FMetric Physics; // 0x4d0(0x1c)
	struct FMetric Physics_Other; // 0x4ec(0x1c)
	struct FMetric Render; // 0x508(0x1c)
	struct FMetric Render_Sync; // 0x524(0x1c)
	struct FMetric Render_TextureStreaming; // 0x540(0x1c)
	struct FMetric Render_UI; // 0x55c(0x1c)
	struct FMetric Render_UIPreTickEvent; // 0x578(0x1c)
	struct FMetric Render_UIDrawPrepass; // 0x594(0x1c)
	struct FMetric Render_UIDrawWindowAndChildren; // 0x5b0(0x1c)
	struct FMetric Render_Other; // 0x5cc(0x1c)
	struct FMetric Replay; // 0x5e8(0x1c)
	struct FMetric Replay_HttpStreamer; // 0x604(0x1c)
	struct FMetric Replay_LocalFileStreamer; // 0x620(0x1c)
	struct FMetric Replay_Controller; // 0x63c(0x1c)
	struct FMetric Replay_Other; // 0x658(0x1c)
	struct FMetric Replication; // 0x674(0x1c)
	struct FMetric Replication_Other; // 0x690(0x1c)
	struct FMetric Idle; // 0x6ac(0x1c)
	struct FMetric Other; // 0x6c8(0x1c)
	struct FMetric Other_ActorTick; // 0x6e4(0x1c)
	struct FMetric Other_ComponentTick; // 0x700(0x1c)
	struct FMetric Other_GameObjectTick; // 0x71c(0x1c)
	struct FMetric Other_GarbageCollection; // 0x738(0x1c)
	struct FMetric Other_WorldTick; // 0x754(0x1c)
	struct FMetric Other_TickPreRTG; // 0x770(0x1c)
	struct FMetric Other_TickPostRTG; // 0x78c(0x1c)
	struct FMetric Other_RunTickGroup; // 0x7a8(0x1c)
	struct FMetric TempDebug; // 0x7c4(0x1c)
	struct FMetric TempDebug_SubOne; // 0x7e0(0x1c)
	struct FMetric TempDebug_SubTwo; // 0x7fc(0x1c)
	struct FMetric TempDebug_SubThree; // 0x818(0x1c)
	struct FMetric TempDebug_Other; // 0x834(0x1c)
};

// ScriptStruct ShooterGame.Metric
// Size: 0x1c (Inherited: 0x00)
struct FMetric {
	float Mean; // 0x00(0x04)
	float Median; // 0x04(0x04)
	float Min; // 0x08(0x04)
	float Max; // 0x0c(0x04)
	float StdDev; // 0x10(0x04)
	float P95; // 0x14(0x04)
	float P99; // 0x18(0x04)
};

// ScriptStruct ShooterGame.MediaSourceParams
// Size: 0x30 (Inherited: 0x00)
struct FMediaSourceParams {
	struct TSoftObjectPtr<UMediaSource> MediaSourceAsset; // 0x00(0x30)
};

// ScriptStruct ShooterGame.CovergedStateWidget
// Size: 0x50 (Inherited: 0x00)
struct FCovergedStateWidget {
	struct FName ClientConfigGate; // 0x00(0x0c)
	bool bConfigDefault; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TSoftClassPtr<UObject> StateParentWidget; // 0x10(0x30)
	struct FName StartURL; // 0x40(0x0c)
	enum class EAresMainMenuTopNavigationState BackTarget; // 0x4c(0x01)
	bool bPreloadURLWidget; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
};

// ScriptStruct ShooterGame.AssetCategoryInfo
// Size: 0x30 (Inherited: 0x00)
struct FAssetCategoryInfo {
	struct FString RootPath; // 0x00(0x10)
	struct FString SubFolder; // 0x10(0x10)
	struct FString Category; // 0x20(0x10)
};

// ScriptStruct ShooterGame.LocationLogEvent
// Size: 0x130 (Inherited: 0x00)
struct FLocationLogEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FGameEventPlayerInfo PlayerInfo; // 0x90(0x60)
	struct FVector Location; // 0xf0(0x18)
	struct FVector ViewVector; // 0x108(0x18)
	struct FString MovementType; // 0x120(0x10)
};

// ScriptStruct ShooterGame.GameEventPlayerInfo
// Size: 0x60 (Inherited: 0x00)
struct FGameEventPlayerInfo {
	struct FString Name; // 0x00(0x10)
	struct FString Subject; // 0x10(0x10)
	struct FString Side; // 0x20(0x10)
	struct FString TeamRole; // 0x30(0x10)
	struct FString TeamID; // 0x40(0x10)
	struct FString Character; // 0x50(0x10)
};

// ScriptStruct ShooterGame.GameEventRoundInfo
// Size: 0x28 (Inherited: 0x00)
struct FGameEventRoundInfo {
	int32_t RoundNumber; // 0x00(0x04)
	float RoundTime; // 0x04(0x04)
	struct FString RoundPhase; // 0x08(0x10)
	int64_t MatchTime; // 0x18(0x08)
	int32_t AttackerScore; // 0x20(0x04)
	int32_t DefenderScore; // 0x24(0x04)
};

// ScriptStruct ShooterGame.GameEventMatchInfo
// Size: 0x68 (Inherited: 0x00)
struct FGameEventMatchInfo {
	struct FString Version; // 0x00(0x10)
	struct FString Changelist; // 0x10(0x10)
	struct FString Branch; // 0x20(0x10)
	struct FString GameMode; // 0x30(0x10)
	int64_t GameID; // 0x40(0x08)
	struct FString MatchID; // 0x48(0x10)
	struct FString Map; // 0x58(0x10)
};

// ScriptStruct ShooterGame.GameEventTeamResources
// Size: 0x08 (Inherited: 0x00)
struct FGameEventTeamResources {
	int32_t Total; // 0x00(0x04)
	int32_t Inventory; // 0x04(0x04)
};

// ScriptStruct ShooterGame.RoundScoreLogEvent
// Size: 0xf0 (Inherited: 0x00)
struct FRoundScoreLogEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FGameEventTeamResources AttackerResources; // 0x90(0x08)
	struct FGameEventTeamResources DefenderResources; // 0x98(0x08)
	struct FString Winner; // 0xa0(0x10)
	struct FString WinnerTeam; // 0xb0(0x10)
	struct FString Result; // 0xc0(0x10)
	struct TArray<struct FGameEventPlayerInfo> AttackerRoster; // 0xd0(0x10)
	struct TArray<struct FGameEventPlayerInfo> DefenderRoster; // 0xe0(0x10)
};

// ScriptStruct ShooterGame.DamageLogEvent
// Size: 0x5a0 (Inherited: 0x00)
struct FDamageLogEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FGameEventPlayerInfo DealerInfo; // 0x90(0x60)
	struct FGameEventPlayerInfo ReceiverInfo; // 0xf0(0x60)
	struct FGameEventCharacterState DealerCharacterState; // 0x150(0x1c0)
	struct FGameEventCharacterState ReceiverCharacterState; // 0x310(0x1c0)
	struct FString DamageSource; // 0x4d0(0x10)
	struct FString DamageSourceId; // 0x4e0(0x10)
	float DamageAmount; // 0x4f0(0x04)
	float DamageTaken; // 0x4f4(0x04)
	struct FString DamageRegion; // 0x4f8(0x10)
	bool IsPenetration; // 0x508(0x01)
	bool IsKill; // 0x509(0x01)
	char pad_50A[0x6]; // 0x50a(0x06)
	struct FAimReport AimReport; // 0x510(0x78)
	bool IsZoomed; // 0x588(0x01)
	bool IsFocusMode; // 0x589(0x01)
	bool DamageReceiverIsPlayer; // 0x58a(0x01)
	char pad_58B[0x5]; // 0x58b(0x05)
	struct FString DamageEquippableInventoryTransactionType; // 0x590(0x10)
};

// ScriptStruct ShooterGame.GameEventCharacterState
// Size: 0x1c0 (Inherited: 0x00)
struct FGameEventCharacterState {
	struct FGameEventHpState HpState; // 0x00(0x08)
	struct FGameEventHpState HpStateBefore; // 0x08(0x08)
	int32_t Money; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FVector Location; // 0x18(0x18)
	struct FVector ViewVector; // 0x30(0x18)
	struct FString MovementType; // 0x48(0x10)
	float Speed; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FGameEventInventory Inventory; // 0x60(0x148)
	struct FString StabilityType; // 0x1a8(0x10)
	float StabilityFiringError; // 0x1b8(0x04)
	float StabilityMovementError; // 0x1bc(0x04)
};

// ScriptStruct ShooterGame.GameEventInventory
// Size: 0x148 (Inherited: 0x00)
struct FGameEventInventory {
	struct FGameEventItem CurrentlyEquipped; // 0x00(0x38)
	struct FGameEventItem PrimaryWeapon; // 0x38(0x38)
	struct FGameEventItem SecondaryWeapon; // 0x70(0x38)
	struct FGameEventItem Melee; // 0xa8(0x38)
	struct FGameEventItem Armor; // 0xe0(0x38)
	struct TArray<struct FGameEventItem> Abilities; // 0x118(0x10)
	struct TArray<struct FGameEventItem> BackpackItems; // 0x128(0x10)
	struct TArray<struct FGameEventItem> Passives; // 0x138(0x10)
};

// ScriptStruct ShooterGame.GameEventItem
// Size: 0x38 (Inherited: 0x00)
struct FGameEventItem {
	struct FString Name; // 0x00(0x10)
	struct FString ID; // 0x10(0x10)
	struct FString Type; // 0x20(0x10)
	int32_t AvailableAmount; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.GameEventHpState
// Size: 0x08 (Inherited: 0x00)
struct FGameEventHpState {
	float CharacterHp; // 0x00(0x04)
	float ShieldHp; // 0x04(0x04)
};

// ScriptStruct ShooterGame.ShotProjectileInfo
// Size: 0x280 (Inherited: 0x00)
struct FShotProjectileInfo {
	struct FGameEventRoundInfo RoundInfo; // 0x00(0x28)
	struct FGameEventPlayerInfo DealerInfo; // 0x28(0x60)
	struct FGameEventCharacterState DealerCharacterState; // 0x88(0x1c0)
	int32_t NumberProjectiles; // 0x248(0x04)
	int32_t ZoomLevel; // 0x24c(0x04)
	bool IsFocusMode; // 0x250(0x01)
	char pad_251[0x3]; // 0x251(0x03)
	struct FStabilityValues StabilityValues; // 0x254(0x18)
	char pad_26C[0x4]; // 0x26c(0x04)
	struct FString DamageEquippableInventoryTransactionType; // 0x270(0x10)
};

// ScriptStruct ShooterGame.StabilityValues
// Size: 0x18 (Inherited: 0x00)
struct FStabilityValues {
	float StabilityIndex; // 0x00(0x04)
	struct FErrorValues Error; // 0x04(0x08)
	struct FRecoilValues Recoil; // 0x0c(0x08)
	float ErrorPower; // 0x14(0x04)
};

// ScriptStruct ShooterGame.RecoilValues
// Size: 0x08 (Inherited: 0x00)
struct FRecoilValues {
	float Pitch; // 0x00(0x04)
	float Yaw; // 0x04(0x04)
};

// ScriptStruct ShooterGame.ErrorValues
// Size: 0x08 (Inherited: 0x00)
struct FErrorValues {
	float FiringError; // 0x00(0x04)
	float MovementError; // 0x04(0x04)
};

// ScriptStruct ShooterGame.ShotProjectileDamageInfo
// Size: 0x80 (Inherited: 0x00)
struct FShotProjectileDamageInfo {
	float DamageDone; // 0x00(0x04)
	float Distance; // 0x04(0x04)
	struct FString DamageRegion; // 0x08(0x10)
	struct FGameEventPlayerInfo ReceiverInfo; // 0x18(0x60)
	bool PlayerReceivedDamage; // 0x78(0x01)
	bool IsPenetration; // 0x79(0x01)
	char pad_7A[0x6]; // 0x7a(0x06)
};

// ScriptStruct ShooterGame.ShotProjectileOnHitInfo
// Size: 0x2b0 (Inherited: 0x280)
struct FShotProjectileOnHitInfo : FShotProjectileInfo {
	struct FString DamageSource; // 0x280(0x10)
	struct FString DamageSourceId; // 0x290(0x10)
	struct TArray<struct FShotProjectileDamageInfo> DamageEvents; // 0x2a0(0x10)
};

// ScriptStruct ShooterGame.ShotsFiredOverRoundEvent
// Size: 0x88 (Inherited: 0x00)
struct FShotsFiredOverRoundEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct TArray<struct FShotProjectileInfo> ShotsMissed; // 0x68(0x10)
	struct TArray<struct FShotProjectileOnHitInfo> ShotsHit; // 0x78(0x10)
};

// ScriptStruct ShooterGame.FogOfWarStatsEvent
// Size: 0x108 (Inherited: 0x00)
struct FFogOfWarStatsEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	int32_t TotalQueries; // 0x90(0x04)
	int32_t RelevantCount; // 0x94(0x04)
	int32_t NotRelevantCount; // 0x98(0x04)
	int32_t RelevantVisionCount; // 0x9c(0x04)
	int32_t RelevantAudioCount; // 0xa0(0x04)
	int32_t RelevantOverrideCount; // 0xa4(0x04)
	int32_t RelevantNoComponentCount; // 0xa8(0x04)
	int32_t RelevantTeamCount; // 0xac(0x04)
	int32_t RelevantDistanceCount; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FString CharacterName; // 0xb8(0x10)
	struct FMetric NotRelevantDurationSeconds; // 0xc8(0x1c)
	struct FMetric RelevantDurationSeconds; // 0xe4(0x1c)
	float TotalRelevantDurationSeconds; // 0x100(0x04)
	float TotalNotRelevantDurationSeconds; // 0x104(0x04)
};

// ScriptStruct ShooterGame.OrbInteractionEvent
// Size: 0xe0 (Inherited: 0x00)
struct FOrbInteractionEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FString Subject; // 0x90(0x10)
	struct FString OrbName; // 0xa0(0x10)
	struct FString OrbType; // 0xb0(0x10)
	struct FVector OrbLocation; // 0xc0(0x18)
	float TimeSinceSpawned; // 0xd8(0x04)
	int32_t NumCharacterCollectors; // 0xdc(0x04)
};

// ScriptStruct ShooterGame.TeleporterUseEvent
// Size: 0xd0 (Inherited: 0x00)
struct FTeleporterUseEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FString Subject; // 0x90(0x10)
	struct FString TeleporterName; // 0xa0(0x10)
	struct FString ObjectClassName; // 0xb0(0x10)
	struct FString ObjectType; // 0xc0(0x10)
};

// ScriptStruct ShooterGame.AscenderUseEvent
// Size: 0xb8 (Inherited: 0x00)
struct FAscenderUseEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FString Subject; // 0x90(0x10)
	struct FString AscenderName; // 0xa0(0x10)
	float UseDuration; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// ScriptStruct ShooterGame.OrbEventInfo
// Size: 0x08 (Inherited: 0x00)
struct FOrbEventInfo {
	int32_t Stage; // 0x00(0x04)
	float WorldTimeStamp; // 0x04(0x04)
};

// ScriptStruct ShooterGame.WeaponOrbRewardDroppedEvent
// Size: 0x100 (Inherited: 0x00)
struct FWeaponOrbRewardDroppedEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FString Subject; // 0x90(0x10)
	struct FName OrbSpawnerName; // 0xa0(0x0c)
	int32_t OrbSpawnedStage; // 0xac(0x04)
	float OrbSpawnedTimeStamp; // 0xb0(0x04)
	int32_t OrbClaimedStage; // 0xb4(0x04)
	float OrbClaimedTimeStamp; // 0xb8(0x04)
	int32_t OrbRewardDroppedStage; // 0xbc(0x04)
	float OrbRewardDroppedTimeStamp; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FVector PickupLocation; // 0xc8(0x18)
	struct FVector DropLocation; // 0xe0(0x18)
	int32_t BulletsLeft; // 0xf8(0x04)
	bool bIsPlayerAlive; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
};

// ScriptStruct ShooterGame.GameModeMatchDetailsConfig
// Size: 0x20 (Inherited: 0x00)
struct FGameModeMatchDetailsConfig {
	bool ShowProgression; // 0x00(0x01)
	bool ShowSummary; // 0x01(0x01)
	bool ShowScoreboard; // 0x02(0x01)
	bool ShowTimeline; // 0x03(0x01)
	bool ShowPerformance; // 0x04(0x01)
	bool ShowMVP; // 0x05(0x01)
	enum class EMVPCriteria MVPCriteria; // 0x06(0x01)
	char pad_7[0x1]; // 0x07(0x01)
	struct UUserWidget* DetailsTabWidget; // 0x08(0x08)
	struct UUserWidget* ScoreboardTabWidget; // 0x10(0x08)
	struct FGameModeMatchDetailsScoreboardConfig GameModeMatchDetailsScoreboardConfig; // 0x18(0x08)
};

// ScriptStruct ShooterGame.AresGameplayMessage
// Size: 0x98 (Inherited: 0x00)
struct FAresGameplayMessage {
	struct FGameplayTag Channel; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct AActor* Instigator; // 0x10(0x08)
	struct AActor* Source; // 0x18(0x08)
	struct AActor* Target; // 0x20(0x08)
	struct FGameplayTagContainer Descriptors; // 0x28(0x20)
	struct TMap<struct FGameplayTag, float> Magnitudes; // 0x48(0x50)
};

// ScriptStruct ShooterGame.NetworkLoadedClass
// Size: 0x60 (Inherited: 0x00)
struct FNetworkLoadedClass {
	struct FSoftObjectPath ClassPath; // 0x00(0x28)
	bool bBlockingLoad; // 0x28(0x01)
	char pad_29[0x17]; // 0x29(0x17)
	struct TArray<struct TWeakObjectPtr<struct APlayerController>> UnacknowledgedLoad; // 0x40(0x10)
	struct TArray<struct FDelegate> CompletedEvents; // 0x50(0x10)
};

// ScriptStruct ShooterGame.StaticActorMaterialMapping
// Size: 0x18 (Inherited: 0x00)
struct FStaticActorMaterialMapping {
	struct AStaticMeshActor* StaticActor; // 0x00(0x08)
	struct TArray<struct UMaterialInterface*> SavedMaterials; // 0x08(0x10)
};

// ScriptStruct ShooterGame.AresHitReactionEntry
// Size: 0x38 (Inherited: 0x00)
struct FAresHitReactionEntry {
	enum class EAresDamageAnimationCategory AnimationCategory; // 0x00(0x01)
	enum class EAresDirectionalDamage DirectionalDamage; // 0x01(0x01)
	enum class EAresRegionalDamage RegionalDamage; // 0x02(0x01)
	enum class EAresDamageCategory DamageCategory; // 0x03(0x01)
	enum class EAresBodySection DamageBodySection; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<struct FName> BoneList; // 0x08(0x10)
	struct UShooterDamageType* DamageType; // 0x18(0x08)
	float DamageAmount; // 0x20(0x04)
	bool bFaceDamageCauser; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	int32_t Priority; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct UAnimMontage* Anim3P; // 0x30(0x08)
};

// ScriptStruct ShooterGame.HitReactionResult
// Size: 0x10 (Inherited: 0x00)
struct FHitReactionResult {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AresHudFontParams
// Size: 0x78 (Inherited: 0x00)
struct FAresHudFontParams {
	struct FSlateFontInfo Font; // 0x00(0x60)
	bool bEnableShadow; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct FVector2D ShadowOffset; // 0x68(0x10)
};

// ScriptStruct ShooterGame.AresHudTextLabel
// Size: 0xa8 (Inherited: 0x00)
struct FAresHudTextLabel {
	struct FVector2D DrawOffset; // 0x00(0x10)
	enum class EAresDrawOrigin DrawOrigin; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FText Text; // 0x18(0x18)
	struct FAresHudFontParams FontParams; // 0x30(0x78)
};

// ScriptStruct ShooterGame.AresHudImageParams
// Size: 0x20 (Inherited: 0x00)
struct FAresHudImageParams {
	bool bUseTextureExtents; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVector2D Extents; // 0x08(0x10)
	float Alpha; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.AresHudBackgroundImage
// Size: 0x40 (Inherited: 0x00)
struct FAresHudBackgroundImage {
	struct FVector2D DrawOffset; // 0x00(0x10)
	enum class EAresDrawOrigin DrawOrigin; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UTexture* Image; // 0x18(0x08)
	struct FAresHudImageParams ImageParams; // 0x20(0x20)
};

// ScriptStruct ShooterGame.AresKillBannerImage
// Size: 0x28 (Inherited: 0x00)
struct FAresKillBannerImage {
	struct UTexture* Image; // 0x00(0x08)
	struct FAresHudImageParams ImageParams; // 0x08(0x20)
};

// ScriptStruct ShooterGame.AresHudElementRectangle
// Size: 0x28 (Inherited: 0x00)
struct FAresHudElementRectangle {
	enum class EAresHudAnchorPoint AnchorPoint; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVector2D AnchorOffset; // 0x08(0x10)
	struct FVector2D Extents; // 0x18(0x10)
};

// ScriptStruct ShooterGame.AresTimedInterpolant
// Size: 0x1c (Inherited: 0x00)
struct FAresTimedInterpolant {
	float InitialDelayBeforeRampUp; // 0x00(0x04)
	float RampUpTime; // 0x04(0x04)
	float HoldTime; // 0x08(0x04)
	bool bDoRampOff; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float RampOffTime; // 0x10(0x04)
	enum class EAresInterpolationFunction RampUpInterpolationFunction; // 0x14(0x01)
	enum class EAresInterpolationFunction RampOffInterpolationFunction; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	float StartTime; // 0x18(0x04)
};

// ScriptStruct ShooterGame.AresTimedOvershootValue
// Size: 0x20 (Inherited: 0x00)
struct FAresTimedOvershootValue {
	float StartingValue; // 0x00(0x04)
	float OvershootValue; // 0x04(0x04)
	float OvershootTime; // 0x08(0x04)
	float OvershootHoldTime; // 0x0c(0x04)
	float FallbackValue; // 0x10(0x04)
	float FallbackTime; // 0x14(0x04)
	enum class EAresInterpolationFunction OvershootInterpolationFunction; // 0x18(0x01)
	enum class EAresInterpolationFunction FallbackInterpolationFunction; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	float StartTime; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.CharacterMeter
// Size: 0x170 (Inherited: 0x00)
struct FCharacterMeter {
	struct FVector2D BaseOffset; // 0x00(0x10)
	struct FAresHudBackgroundImage MeterIcon; // 0x10(0x40)
	struct FVector2D MeterDrawOffset; // 0x50(0x10)
	struct FVector2D Extents; // 0x60(0x10)
	bool bShrinkFullMaterialExtentsWithMeterValue; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct UMaterialInterface* FullMaterial; // 0x78(0x08)
	struct UMaterialInterface* EmptyMaterial; // 0x80(0x08)
	struct FName MeterPercentMaterialParameterName; // 0x88(0x0c)
	struct FName MeterColorPercentParameterName; // 0x94(0x0c)
	bool bDrawMeterText; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FVector2D TextDrawOffset; // 0xa8(0x10)
	enum class EAresDrawOrigin TextDrawOrigin; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FAresHudFontParams TextFontParams; // 0xc0(0x78)
	bool bDrawMeterMaxValue; // 0x138(0x01)
	char pad_139[0x3]; // 0x139(0x03)
	float HorizontalSpacingBetweenTextElements; // 0x13c(0x04)
	struct FLinearColor FullColor; // 0x140(0x10)
	struct FLinearColor EmptyColor; // 0x150(0x10)
	struct UCurveFloat* MeterFillPercentToColorInterpolationPercentCurve; // 0x160(0x08)
	bool bApplyColorTintToText; // 0x168(0x01)
	bool bApplyColorTintToIcon; // 0x169(0x01)
	char pad_16A[0x6]; // 0x16a(0x06)
};

// ScriptStruct ShooterGame.CharacterMeterDynamicMaterials
// Size: 0x10 (Inherited: 0x00)
struct FCharacterMeterDynamicMaterials {
	struct UMaterialInstanceDynamic* FullMaterialInstanceDynamic; // 0x00(0x08)
	struct UMaterialInstanceDynamic* EmptyMaterialInstanceDynamic; // 0x08(0x08)
};

// ScriptStruct ShooterGame.CircularMeter
// Size: 0xa4 (Inherited: 0x00)
struct FCircularMeter {
	struct FLinearColor MeterFullyLitColor; // 0x00(0x10)
	struct FLinearColor MeterUnlitColor; // 0x10(0x10)
	struct FLinearColor PartiallyLitStartColor; // 0x20(0x10)
	struct FLinearColor NotchColor; // 0x30(0x10)
	float NotchWidth; // 0x40(0x04)
	struct FName MeterFullyLitPercentMaterialParameterName; // 0x44(0x0c)
	struct FName MeterPartiallyLitPercentMaterialParameterName; // 0x50(0x0c)
	struct FName MeterFullyLitColorMaterialParameterName; // 0x5c(0x0c)
	struct FName MeterPartiallyLitColorMaterialParameterName; // 0x68(0x0c)
	struct FName MeterUnlitColorMaterialParameterName; // 0x74(0x0c)
	struct FName MeterNotchPercentMaterialParameterName; // 0x80(0x0c)
	struct FName MeterNotchColorMaterialParameterName; // 0x8c(0x0c)
	struct FName MeterNotchWidthMaterialParameterName; // 0x98(0x0c)
};

// ScriptStruct ShooterGame.AresUMGElementAsset
// Size: 0xb0 (Inherited: 0x00)
struct FAresUMGElementAsset {
	struct TSoftClassPtr<UObject> Asset; // 0x00(0x30)
	struct TSoftClassPtr<UObject> AssetLookupOverride; // 0x30(0x30)
	struct TMap<struct TSoftClassPtr<UObject>, struct TSoftClassPtr<UObject>> GameModeOverrides; // 0x60(0x50)
};

// ScriptStruct ShooterGame.AresIconButtonOverridesData
// Size: 0x60 (Inherited: 0x00)
struct FAresIconButtonOverridesData {
	struct TArray<enum class EAresIconButtonOverrides> Overrides; // 0x00(0x10)
	struct UTexture2D* IconTexture; // 0x10(0x08)
	float IconScale; // 0x18(0x04)
	struct FLinearColor IconColor; // 0x1c(0x10)
	struct FLinearColor ButtonColor; // 0x2c(0x10)
	enum class EAresIconButtonSize ButtonSize; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	struct FText ButtonText; // 0x40(0x18)
	bool bResetUnspecifiedValuesToDefaults; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct ShooterGame.AresIconButtonStyle
// Size: 0x24 (Inherited: 0x00)
struct FAresIconButtonStyle {
	float IconScale; // 0x00(0x04)
	struct FLinearColor IconColor; // 0x04(0x10)
	struct FLinearColor ButtonColor; // 0x14(0x10)
};

// ScriptStruct ShooterGame.ImpactEffects
// Size: 0x28 (Inherited: 0x00)
struct FImpactEffects {
	struct AEffectContainer* ImpactEffects[0x5]; // 0x00(0x28)
};

// ScriptStruct ShooterGame.ImpactEffectAudioInfo
// Size: 0x18 (Inherited: 0x00)
struct FImpactEffectAudioInfo {
	enum class EImpactEffectAudioCreationState CreationState; // 0x00(0x01)
	enum class EAresSurfaceType AudioSurfaceType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct APawn* ContextInstigator; // 0x08(0x08)
	struct UAresAudioComponent* AudioComponent; // 0x10(0x08)
};

// ScriptStruct ShooterGame.ImpactEffectDecalInfo
// Size: 0x58 (Inherited: 0x00)
struct FImpactEffectDecalInfo {
	bool bCreatedDecal; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDecalData DecalData; // 0x08(0x50)
};

// ScriptStruct ShooterGame.DecalData
// Size: 0x50 (Inherited: 0x00)
struct FDecalData {
	struct UMaterialInterface* DecalMaterial; // 0x00(0x08)
	float DecalSize; // 0x08(0x04)
	float DecalHeight; // 0x0c(0x04)
	struct UCurveFloat* ScaleDistance; // 0x10(0x08)
	struct FVector2D RangeScaleMin; // 0x18(0x10)
	struct FVector2D RangeScaleMax; // 0x28(0x10)
	float FadeInTime; // 0x38(0x04)
	float FadeOutTime; // 0x3c(0x04)
	float LifeSpan; // 0x40(0x04)
	float FadeOutSizeOnScreenPercent; // 0x44(0x04)
	float RandomRotationAngleBase; // 0x48(0x04)
	float RandomRotationAngleRange; // 0x4c(0x04)
};

// ScriptStruct ShooterGame.InputStateCorrectionStatus
// Size: 0x14 (Inherited: 0x00)
struct FInputStateCorrectionStatus {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct ShooterGame.AresInputSnapshot
// Size: 0x08 (Inherited: 0x00)
struct FAresInputSnapshot {
	enum class EAresInputState InputState; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float TimeInSeconds; // 0x04(0x04)
};

// ScriptStruct ShooterGame.AresInputRecord
// Size: 0x0c (Inherited: 0x00)
struct FAresInputRecord {
	struct FAresInputSnapshot InputSnapshot; // 0x00(0x08)
	char InputIdentifier; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct ShooterGame.AresInputStream
// Size: 0x748 (Inherited: 0x00)
struct FAresInputStream {
	char pad_0[0x748]; // 0x00(0x748)
};

// ScriptStruct ShooterGame.AresInputChangedListener
// Size: 0x40 (Inherited: 0x00)
struct FAresInputChangedListener {
	char pad_0[0x18]; // 0x00(0x18)
	struct UAresInputSubsystem* AresInputSubsystem; // 0x18(0x08)
	struct UWidget* OptionalOwningWidget; // 0x20(0x08)
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct ShooterGame.PendingEquippableChange
// Size: 0x18 (Inherited: 0x00)
struct FPendingEquippableChange {
	struct AAresEquippable* NewCurrentEquippable; // 0x00(0x08)
	struct FNetworkedMovementTimestamp Timestamp; // 0x08(0x10)
};

// ScriptStruct ShooterGame.NetworkedMovementTimestamp
// Size: 0x10 (Inherited: 0x00)
struct FNetworkedMovementTimestamp {
	struct TWeakObjectPtr<struct AShooterCharacter> Character; // 0x00(0x08)
	float NetTimestamp; // 0x08(0x04)
	int32_t RespawnNumber; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.InventoryServerCorrectRepVariables
// Size: 0x10 (Inherited: 0x00)
struct FInventoryServerCorrectRepVariables {
	struct AAresEquippable* CurrentEquippable; // 0x00(0x08)
	int32_t CorrectionIndex; // 0x08(0x04)
	int32_t LastSeenClientCorrectionIndex; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.EquipDebugRecord
// Size: 0x10 (Inherited: 0x00)
struct FEquipDebugRecord {
	struct AAresEquippable* EquippedEquippable; // 0x00(0x08)
	enum class EEquipSource EquipSource; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ShooterGame.DeltaAnimationParameter
// Size: 0x08 (Inherited: 0x00)
struct FDeltaAnimationParameter {
	enum class DeltaBarToAnimate Bar; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float DeltaPercent; // 0x04(0x04)
};

// ScriptStruct ShooterGame.BasicMetric
// Size: 0x10 (Inherited: 0x00)
struct FBasicMetric {
	uint32_t NumSamples; // 0x00(0x04)
	float Min; // 0x04(0x04)
	float Max; // 0x08(0x04)
	float Mean; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.RecycledWidgetArray
// Size: 0x10 (Inherited: 0x00)
struct FRecycledWidgetArray {
	struct TArray<struct UUserWidget*> Widgets; // 0x00(0x10)
};

// ScriptStruct ShooterGame.MinimapVisionBlockerCircle
// Size: 0x18 (Inherited: 0x00)
struct FMinimapVisionBlockerCircle {
	struct FVector2D Center; // 0x00(0x10)
	float Radius; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.MinimapVisionBlockerLine
// Size: 0x10 (Inherited: 0x00)
struct FMinimapVisionBlockerLine {
	struct TArray<struct FVector2D> LineMesh; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PacketDeltaTimeBuckets
// Size: 0x1c (Inherited: 0x00)
struct FPacketDeltaTimeBuckets {
	int32_t Over256ms; // 0x00(0x04)
	int32_t Between128and256ms; // 0x04(0x04)
	int32_t Between64and128ms; // 0x08(0x04)
	int32_t Between32and64ms; // 0x0c(0x04)
	int32_t Between16and32ms; // 0x10(0x04)
	int32_t Between8and16ms; // 0x14(0x04)
	int32_t Below8ms; // 0x18(0x04)
};

// ScriptStruct ShooterGame.AresPerPlatformInt
// Size: 0x10 (Inherited: 0x00)
struct FAresPerPlatformInt {
	char pad_0[0x8]; // 0x00(0x08)
	int32_t Default; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.AresPerPlatformFloat
// Size: 0x10 (Inherited: 0x00)
struct FAresPerPlatformFloat {
	char pad_0[0x8]; // 0x00(0x08)
	float Default; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.AresPerPlatformBool
// Size: 0x10 (Inherited: 0x00)
struct FAresPerPlatformBool {
	char pad_0[0x8]; // 0x00(0x08)
	bool Default; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ShooterGame.AresUserWidgetAsset
// Size: 0x40 (Inherited: 0x00)
struct FAresUserWidgetAsset {
	struct TSoftClassPtr<UObject> UserWidgetClass; // 0x00(0x30)
	struct TArray<struct FString> MetaTags; // 0x30(0x10)
};

// ScriptStruct ShooterGame.AresGenericAsset
// Size: 0x40 (Inherited: 0x00)
struct FAresGenericAsset {
	struct TSoftObjectPtr<UObject> Asset; // 0x00(0x30)
	struct TArray<struct FString> MetaTags; // 0x30(0x10)
};

// ScriptStruct ShooterGame.VisibilityContext
// Size: 0x58 (Inherited: 0x00)
struct FVisibilityContext {
	char pad_0[0x50]; // 0x00(0x50)
	struct UBaseTeamComponent* TeamComponent; // 0x50(0x08)
};

// ScriptStruct ShooterGame.SystemMessageParams
// Size: 0x02 (Inherited: 0x00)
struct FSystemMessageParams {
	bool IsLocalMessage; // 0x00(0x01)
	enum class ECommsSystemOfOrigin SystemOfOrigin; // 0x01(0x01)
};

// ScriptStruct ShooterGame.AresDemoXYZ
// Size: 0x0c (Inherited: 0x00)
struct FAresDemoXYZ {
	float X; // 0x00(0x04)
	float Y; // 0x04(0x04)
	float Z; // 0x08(0x04)
};

// ScriptStruct ShooterGame.AresClientDemoFrame
// Size: 0x18 (Inherited: 0x00)
struct FAresClientDemoFrame {
	float Age; // 0x00(0x04)
	struct FAresDemoXYZ AimVector; // 0x04(0x0c)
	bool bCrouching; // 0x10(0x01)
	bool bWalking; // 0x11(0x01)
	bool bJumping; // 0x12(0x01)
	enum class EAresAutomationMovement YAxisMovement; // 0x13(0x01)
	enum class EAresAutomationMovement XAxisMovement; // 0x14(0x01)
	enum class EAresAutomationInput ItemSlotPressed; // 0x15(0x01)
	enum class EAresAutomationInput EquippableInputPressed; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
};

// ScriptStruct ShooterGame.AresClientDemoData
// Size: 0x40 (Inherited: 0x00)
struct FAresClientDemoData {
	struct FString Name; // 0x00(0x10)
	float Age; // 0x10(0x04)
	struct FAresDemoXYZ AbsoluteOrigin; // 0x14(0x0c)
	struct FAresDemoXYZ AbsoluteAim; // 0x20(0x0c)
	int32_t FPS; // 0x2c(0x04)
	struct TArray<struct FAresClientDemoFrame> Frames; // 0x30(0x10)
};

// ScriptStruct ShooterGame.AresClientDemoPlayback
// Size: 0x20 (Inherited: 0x00)
struct FAresClientDemoPlayback {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.RoundPersistedItem
// Size: 0x10 (Inherited: 0x00)
struct FRoundPersistedItem {
	enum class EAresItemSlot Key; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AAresItem* Value; // 0x08(0x08)
};

// ScriptStruct ShooterGame.RoundPersistentDataDefinition
// Size: 0x10 (Inherited: 0x00)
struct FRoundPersistentDataDefinition {
	struct TArray<struct FRoundPersistedItem> SavedItems; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AresPlatformParticipantInfo
// Size: 0x10 (Inherited: 0x00)
struct FAresPlatformParticipantInfo {
	struct FString Subject; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ShopGridPosition
// Size: 0x08 (Inherited: 0x00)
struct FShopGridPosition {
	int32_t Row; // 0x00(0x04)
	int32_t Column; // 0x04(0x04)
};

// ScriptStruct ShooterGame.PurchasableList
// Size: 0x10 (Inherited: 0x00)
struct FPurchasableList {
	struct TArray<struct UAresPurchasable*> Purchasables; // 0x00(0x10)
};

// ScriptStruct ShooterGame.RadialMenuIconSlotDisplay
// Size: 0x20 (Inherited: 0x00)
struct FRadialMenuIconSlotDisplay {
	struct UTexture* IconImage; // 0x00(0x08)
	bool OverrideColor; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	struct FLinearColor ColorToOverride; // 0x0c(0x10)
	float SizeScale; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.RadialMenuTextSlotDisplay
// Size: 0x18 (Inherited: 0x00)
struct FRadialMenuTextSlotDisplay {
	struct FText Text; // 0x00(0x18)
};

// ScriptStruct ShooterGame.RadialMenuSlotDescriptor
// Size: 0x68 (Inherited: 0x00)
struct FRadialMenuSlotDescriptor {
	enum class RadialMenuSlotDisplayType DisplayType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FRadialMenuIconSlotDisplay IconDisplay; // 0x08(0x20)
	struct FRadialMenuTextSlotDisplay TextDisplay; // 0x28(0x18)
	struct FText SlotName; // 0x40(0x18)
	struct FName DirectCastEventName; // 0x58(0x0c)
	enum class ERadialMenuContextIndicator ContextIndicator; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// ScriptStruct ShooterGame.RadialMenuRateLimitSettings
// Size: 0x0c (Inherited: 0x00)
struct FRadialMenuRateLimitSettings {
	float RateLimitCycleTime; // 0x00(0x04)
	int32_t RateLimitTokensPerCycle; // 0x04(0x04)
	float RateLimitMinInterval; // 0x08(0x04)
};

// ScriptStruct ShooterGame.RadialMenuShowAndHideSettings
// Size: 0x14 (Inherited: 0x00)
struct FRadialMenuShowAndHideSettings {
	struct FName SummonWheelActionName; // 0x00(0x0c)
	float WheelShowupDelay; // 0x0c(0x04)
	bool bEnableRightKeyCancellation; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct ShooterGame.GameBaseInstanceInfo
// Size: 0xa8 (Inherited: 0x00)
struct FGameBaseInstanceInfo {
	struct FString InstanceId; // 0x00(0x10)
	struct FString Branch; // 0x10(0x10)
	struct FString BuildConfiguration; // 0x20(0x10)
	struct FString BuildVersion; // 0x30(0x10)
	int32_t Changelist; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString OsMajor; // 0x48(0x10)
	struct FString OsMinor; // 0x58(0x10)
	struct FString OsHostname; // 0x68(0x10)
	struct FString Cpu; // 0x78(0x10)
	struct FString CpuVendor; // 0x88(0x10)
	int32_t CpuMhz; // 0x98(0x04)
	int32_t CpuCoreCount; // 0x9c(0x04)
	int32_t CpuThreadCount; // 0xa0(0x04)
	int32_t TotalPhysicalMemoryMB; // 0xa4(0x04)
};

// ScriptStruct ShooterGame.GameClientInstanceInfo
// Size: 0x180 (Inherited: 0xa8)
struct FGameClientInstanceInfo : FGameBaseInstanceInfo {
	struct FString PlayerName; // 0xa8(0x10)
	struct FString RSOSubject; // 0xb8(0x10)
	bool IsSoftReset; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FString Gpu; // 0xd0(0x10)
	struct FString GpuVendor; // 0xe0(0x10)
	struct FString GpuUserDriverVersion; // 0xf0(0x10)
	struct FString GpuInternalDriverVersion; // 0x100(0x10)
	int32_t GpuVramMB; // 0x110(0x04)
	int32_t NativeScreenResolutionX; // 0x114(0x04)
	int32_t NativeScreenResolutionY; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FString Platform; // 0x120(0x10)
	struct FString DeviceModel; // 0x130(0x10)
	struct FString DefaultDeviceQuality; // 0x140(0x10)
	bool IsRunningOnSSD; // 0x150(0x01)
	bool IsRunningOnUnknownDriveType; // 0x151(0x01)
	char pad_152[0x2]; // 0x152(0x02)
	int32_t SIMDSupport; // 0x154(0x04)
	int32_t DxHighestVersion; // 0x158(0x04)
	char pad_15C[0x4]; // 0x15c(0x04)
	struct FString DxMaxFeatureLevel; // 0x160(0x10)
	struct FString DxShaderModelVersion; // 0x170(0x10)
};

// ScriptStruct ShooterGame.GameServerInstanceInfo
// Size: 0xb8 (Inherited: 0xa8)
struct FGameServerInstanceInfo : FGameBaseInstanceInfo {
	struct FString MatchID; // 0xa8(0x10)
};

// ScriptStruct ShooterGame.ClientFrameBuckets
// Size: 0x2c (Inherited: 0x00)
struct FClientFrameBuckets {
	int32_t FramesOver480FPS; // 0x00(0x04)
	int32_t FramesOver360FPS; // 0x04(0x04)
	int32_t FramesOver240FPS; // 0x08(0x04)
	int32_t FramesOver144FPS; // 0x0c(0x04)
	int32_t FramesOver120FPS; // 0x10(0x04)
	int32_t FramesOver60FPS; // 0x14(0x04)
	int32_t FramesOver30FPS; // 0x18(0x04)
	int32_t FramesOver15FPS; // 0x1c(0x04)
	int32_t FramesOver10FPS; // 0x20(0x04)
	int32_t FramesOver1FPS; // 0x24(0x04)
	int32_t FramesUnder1FPS; // 0x28(0x04)
};

// ScriptStruct ShooterGame.InputLatencyFpsBuckets
// Size: 0x34 (Inherited: 0x00)
struct FInputLatencyFpsBuckets {
	int32_t Over360Fps; // 0x00(0x04)
	int32_t Over300Fps; // 0x04(0x04)
	int32_t Over240Fps; // 0x08(0x04)
	int32_t Over144Fps; // 0x0c(0x04)
	int32_t Over120Fps; // 0x10(0x04)
	int32_t Over90Fps; // 0x14(0x04)
	int32_t Over60Fps; // 0x18(0x04)
	int32_t Over45Fps; // 0x1c(0x04)
	int32_t Over30Fps; // 0x20(0x04)
	int32_t Over15Fps; // 0x24(0x04)
	int32_t Over10Fps; // 0x28(0x04)
	int32_t Over1Fps; // 0x2c(0x04)
	int32_t Under1Fps; // 0x30(0x04)
};

// ScriptStruct ShooterGame.InputLatencyStats
// Size: 0x15c (Inherited: 0x00)
struct FInputLatencyStats {
	struct FMetric TotalEngineLatencyMs; // 0x00(0x1c)
	struct FMetric TotalWorkMs; // 0x1c(0x1c)
	struct FMetric TotalSlopMs; // 0x38(0x1c)
	struct FMetric TotalSlackMs; // 0x54(0x1c)
	struct FMetric PresentEndIntervalMs; // 0x70(0x1c)
	struct FInputLatencyFpsBuckets TotalEngineLatencyFpsBuckets; // 0x8c(0x34)
	struct FInputLatencyFpsBuckets TotalWorkFpsBuckets; // 0xc0(0x34)
	struct FInputLatencyFpsBuckets TotalWorkAndSlackFpsBuckets; // 0xf4(0x34)
	struct FInputLatencyFpsBuckets PresentEndIntervalFpsBuckets; // 0x128(0x34)
};

// ScriptStruct ShooterGame.GPUFpsBuckets
// Size: 0x34 (Inherited: 0x00)
struct FGPUFpsBuckets {
	int32_t Over360Fps; // 0x00(0x04)
	int32_t Over300Fps; // 0x04(0x04)
	int32_t Over240Fps; // 0x08(0x04)
	int32_t Over144Fps; // 0x0c(0x04)
	int32_t Over120Fps; // 0x10(0x04)
	int32_t Over90Fps; // 0x14(0x04)
	int32_t Over60Fps; // 0x18(0x04)
	int32_t Over45Fps; // 0x1c(0x04)
	int32_t Over30Fps; // 0x20(0x04)
	int32_t Over15Fps; // 0x24(0x04)
	int32_t Over10Fps; // 0x28(0x04)
	int32_t Over1Fps; // 0x2c(0x04)
	int32_t Under1Fps; // 0x30(0x04)
};

// ScriptStruct ShooterGame.GPUFlipBuckets
// Size: 0x14 (Inherited: 0x00)
struct FGPUFlipBuckets {
	int32_t FlipsAt120Hz; // 0x00(0x04)
	int32_t FlipsAt60Hz; // 0x04(0x04)
	int32_t FlipsFasterThan120Hz; // 0x08(0x04)
	int32_t FlipsSlowerThan60Hz; // 0x0c(0x04)
	int32_t FlipsBetween120HzAnd60Hz; // 0x10(0x04)
};

// ScriptStruct ShooterGame.GPUStats
// Size: 0x64 (Inherited: 0x00)
struct FGPUStats {
	struct FMetric GPUTimeMs; // 0x00(0x1c)
	struct FGPUFpsBuckets GPUFpsBuckets; // 0x1c(0x34)
	struct FGPUFlipBuckets GPUFlipBuckets; // 0x50(0x14)
};

// ScriptStruct ShooterGame.ServerFrameBuckets
// Size: 0x1c (Inherited: 0x00)
struct FServerFrameBuckets {
	int32_t Sub4MsFrames; // 0x00(0x04)
	int32_t Sub8MsFrames; // 0x04(0x04)
	int32_t Sub10MsFrames; // 0x08(0x04)
	int32_t Sub20MsFrames; // 0x0c(0x04)
	int32_t Sub100MsFrames; // 0x10(0x04)
	int32_t Sub300MsFrames; // 0x14(0x04)
	int32_t Over300MsFrames; // 0x18(0x04)
};

// ScriptStruct ShooterGame.AresObjectMetrics
// Size: 0x8c (Inherited: 0x00)
struct FAresObjectMetrics {
	struct FMetric ActorCount; // 0x00(0x1c)
	struct FMetric ObjectCount; // 0x1c(0x1c)
	struct FMetric ReplicatingObjectCount; // 0x38(0x1c)
	struct FMetric ActiveNetworkedObjectCount; // 0x54(0x1c)
	struct FMetric EnabledTickFunctionCount; // 0x70(0x1c)
};

// ScriptStruct ShooterGame.MachinePerfStats
// Size: 0x8c (Inherited: 0x00)
struct FMachinePerfStats {
	struct FMetric CpuUtilizationPercentForProcess; // 0x00(0x1c)
	struct FMetric CpuUtilizationPercentSystemwide; // 0x1c(0x1c)
	struct FMetric PhysicalMemoryUtilizationPercentForProcess; // 0x38(0x1c)
	struct FMetric PhysicalMemoryUtilizationPercentSystemwide; // 0x54(0x1c)
	struct FMetric PhysicalMemoryUtilizationForProcessMB; // 0x70(0x1c)
};

// ScriptStruct ShooterGame.ClientHardwareInfo
// Size: 0xa0 (Inherited: 0x00)
struct FClientHardwareInfo {
	struct FString Cpu; // 0x00(0x10)
	struct FString CpuVendor; // 0x10(0x10)
	int32_t CpuMhz; // 0x20(0x04)
	int32_t CpuCoreCount; // 0x24(0x04)
	int32_t CpuThreadCount; // 0x28(0x04)
	int32_t TotalPhysicalMemoryMB; // 0x2c(0x04)
	struct FString Gpu; // 0x30(0x10)
	struct FString GpuVendor; // 0x40(0x10)
	struct FString GpuUserDriverVersion; // 0x50(0x10)
	struct FString GpuInternalDriverVersion; // 0x60(0x10)
	int32_t GpuVramMB; // 0x70(0x04)
	int32_t NativeScreenResolutionX; // 0x74(0x04)
	int32_t NativeScreenResolutionY; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct FString DeviceModel; // 0x80(0x10)
	struct FString DefaultDeviceQuality; // 0x90(0x10)
};

// ScriptStruct ShooterGame.ServerHardwareInfo
// Size: 0x30 (Inherited: 0x00)
struct FServerHardwareInfo {
	struct FString Cpu; // 0x00(0x10)
	struct FString CpuVendor; // 0x10(0x10)
	int32_t CpuMhz; // 0x20(0x04)
	int32_t CpuCoreCount; // 0x24(0x04)
	int32_t CpuThreadCount; // 0x28(0x04)
	int32_t TotalPhysicalMemoryMB; // 0x2c(0x04)
};

// ScriptStruct ShooterGame.FloatSettingChangedDelegateList
// Size: 0x10 (Inherited: 0x00)
struct FFloatSettingChangedDelegateList {
	struct TArray<struct FDelegate> Delegates; // 0x00(0x10)
};

// ScriptStruct ShooterGame.IntSettingChangedDelegateList
// Size: 0x10 (Inherited: 0x00)
struct FIntSettingChangedDelegateList {
	struct TArray<struct FDelegate> Delegates; // 0x00(0x10)
};

// ScriptStruct ShooterGame.BoolSettingChangedDelegateList
// Size: 0x10 (Inherited: 0x00)
struct FBoolSettingChangedDelegateList {
	struct TArray<struct FDelegate> Delegates; // 0x00(0x10)
};

// ScriptStruct ShooterGame.StringSettingChangedDelegateList
// Size: 0x10 (Inherited: 0x00)
struct FStringSettingChangedDelegateList {
	struct TArray<struct FDelegate> Delegates; // 0x00(0x10)
};

// ScriptStruct ShooterGame.BoolPlatformSettingOverride
// Size: 0x3c (Inherited: 0x00)
struct FBoolPlatformSettingOverride {
	struct FDelegate HasPlatformOverrideValue; // 0x00(0x14)
	struct FDelegate GetPlatformOverrideValue; // 0x14(0x14)
	struct FDelegate SetPlatformOverrideValue; // 0x28(0x14)
};

// ScriptStruct ShooterGame.SettingsUIHierarchySectionData
// Size: 0x48 (Inherited: 0x00)
struct FSettingsUIHierarchySectionData {
	struct FGameplayTag SectionTag; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
	struct FText SectionDescription; // 0x28(0x18)
	bool bIsDevOnlySection; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct ShooterGame.SettingsUIHierarchySubScreenData
// Size: 0x88 (Inherited: 0x48)
struct FSettingsUIHierarchySubScreenData : FSettingsUIHierarchySectionData {
	struct TArray<struct FSettingsUIHierarchySectionData> Headers; // 0x48(0x10)
	struct FText ResetButtonText; // 0x58(0x18)
	struct FSettingsScreenElementVisibilities SettingsScreenElementVisibilities; // 0x70(0x0e)
	char pad_7E[0x2]; // 0x7e(0x02)
	struct USettingsPageViewModel* SettingsPageViewModelClassOverride; // 0x80(0x08)
};

// ScriptStruct ShooterGame.SettingsUIHierarchyScreenData
// Size: 0x68 (Inherited: 0x48)
struct FSettingsUIHierarchyScreenData : FSettingsUIHierarchySectionData {
	struct TArray<struct FSettingsUIHierarchySubScreenData> SubScreens; // 0x48(0x10)
	struct ULandingScreenViewModel* LandingScreenViewModelClassOverride; // 0x58(0x08)
	bool bDisplayInMainSettings; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	uint32_t PageVisibilityConditions; // 0x64(0x04)
};

// ScriptStruct ShooterGame.AresFloatSettingDTO
// Size: 0x18 (Inherited: 0x00)
struct FAresFloatSettingDTO {
	struct FString SettingEnum; // 0x00(0x10)
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.AresIntSettingDTO
// Size: 0x18 (Inherited: 0x00)
struct FAresIntSettingDTO {
	struct FString SettingEnum; // 0x00(0x10)
	int32_t Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.AresBoolSettingDTO
// Size: 0x18 (Inherited: 0x00)
struct FAresBoolSettingDTO {
	struct FString SettingEnum; // 0x00(0x10)
	bool Value; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.AresStringSettingDTO
// Size: 0x20 (Inherited: 0x00)
struct FAresStringSettingDTO {
	struct FString SettingEnum; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct ShooterGame.BaseFloatSetting
// Size: 0x18 (Inherited: 0x00)
struct FBaseFloatSetting {
	enum class EAresFloatSettingName SettingEnum; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MinValue; // 0x04(0x04)
	float MaxValue; // 0x08(0x04)
	float DefaultValue; // 0x0c(0x04)
	float PlatformAgnosticDefault; // 0x10(0x04)
	float Value; // 0x14(0x04)
};

// ScriptStruct ShooterGame.BaseIntSetting
// Size: 0x18 (Inherited: 0x00)
struct FBaseIntSetting {
	enum class EAresIntSettingName SettingEnum; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t MinValue; // 0x04(0x04)
	int32_t MaxValue; // 0x08(0x04)
	int32_t DefaultValue; // 0x0c(0x04)
	int32_t PlatformAgnosticDefault; // 0x10(0x04)
	int32_t Value; // 0x14(0x04)
};

// ScriptStruct ShooterGame.BaseBoolSetting
// Size: 0x04 (Inherited: 0x00)
struct FBaseBoolSetting {
	enum class EAresBoolSettingName SettingEnum; // 0x00(0x01)
	bool DefaultValue; // 0x01(0x01)
	bool PlatformAgnosticDefault; // 0x02(0x01)
	bool Value; // 0x03(0x01)
};

// ScriptStruct ShooterGame.AresFloatSetting
// Size: 0x38 (Inherited: 0x18)
struct FAresFloatSetting : FBaseFloatSetting {
	int32_t PlatformRequirements; // 0x18(0x04)
	enum class ESettingStorageType StorageType; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	int32_t ValueIncrementCount; // 0x20(0x04)
	bool bDisplayNormalizedValues; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float NormalizedMinValue; // 0x28(0x04)
	float NormalizedMaxValue; // 0x2c(0x04)
	bool bShouldUseRealSettingSliderMinMax; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float RealSettingSliderStep; // 0x34(0x04)
};

// ScriptStruct ShooterGame.AresIntSetting
// Size: 0x20 (Inherited: 0x18)
struct FAresIntSetting : FBaseIntSetting {
	int32_t PlatformRequirements; // 0x18(0x04)
	enum class ESettingStorageType StorageType; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct ShooterGame.AresBoolSetting
// Size: 0x0c (Inherited: 0x04)
struct FAresBoolSetting : FBaseBoolSetting {
	int32_t PlatformRequirements; // 0x04(0x04)
	enum class ESettingStorageType StorageType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct ShooterGame.AresStringSetting
// Size: 0x40 (Inherited: 0x00)
struct FAresStringSetting {
	enum class EAresStringSettingName SettingEnum; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t PlatformRequirements; // 0x04(0x04)
	enum class ESettingStorageType StorageType; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FString DefaultValue; // 0x10(0x10)
	struct FString PlatformAgnosticDefault; // 0x20(0x10)
	struct FString Value; // 0x30(0x10)
};

// ScriptStruct ShooterGame.AresVoidSetting
// Size: 0x0c (Inherited: 0x00)
struct FAresVoidSetting {
	enum class EAresVoidSettingName SettingEnum; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t PlatformRequirements; // 0x04(0x04)
	enum class ESettingStorageType StorageType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct ShooterGame.AresSettingsPresetsOption
// Size: 0x158 (Inherited: 0x00)
struct FAresSettingsPresetsOption {
	struct FText PresetName; // 0x00(0x18)
	struct TMap<enum class EAresFloatSettingName, float> FloatSettings; // 0x18(0x50)
	struct TMap<enum class EAresIntSettingName, int32_t> IntSettings; // 0x68(0x50)
	struct TMap<enum class EAresBoolSettingName, bool> BoolSettings; // 0xb8(0x50)
	struct TMap<enum class EAresStringSettingName, struct FString> StringSettings; // 0x108(0x50)
};

// ScriptStruct ShooterGame.ReflectedSettingsInitializationBlob
// Size: 0x80 (Inherited: 0x00)
struct FReflectedSettingsInitializationBlob {
	struct TArray<enum class EAresFloatSettingName> ReflectedFloatSettingNames; // 0x00(0x10)
	struct TArray<enum class EAresIntSettingName> ReflectedIntSettingNames; // 0x10(0x10)
	struct TArray<enum class EAresBoolSettingName> ReflectedBoolSettingNames; // 0x20(0x10)
	struct TArray<enum class EAresStringSettingName> ReflectedStringSettingNames; // 0x30(0x10)
	struct TArray<float> ReflectedFloatSettingValues; // 0x40(0x10)
	struct TArray<int32_t> ReflectedIntSettingValues; // 0x50(0x10)
	struct TArray<bool> ReflectedBoolSettingValues; // 0x60(0x10)
	struct TArray<struct FString> ReflectedStringSettingValues; // 0x70(0x10)
};

// ScriptStruct ShooterGame.ShellContainerLayoutArgs
// Size: 0x3c (Inherited: 0x00)
struct FShellContainerLayoutArgs {
	struct FMargin Padding; // 0x00(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x10(0x01)
	enum class EVerticalAlignment VerticalAlignment; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	float WidthOverride; // 0x14(0x04)
	float HeightOverride; // 0x18(0x04)
	float MinDesiredWidth; // 0x1c(0x04)
	float MinDesiredHeight; // 0x20(0x04)
	float MaxDesiredWidth; // 0x24(0x04)
	float MaxDesiredHeight; // 0x28(0x04)
	float MinAspectRatio; // 0x2c(0x04)
	float MaxAspectRatio; // 0x30(0x04)
	bool bWidthOverride; // 0x34(0x01)
	bool bHeightOverride; // 0x35(0x01)
	bool bMinDesiredWidth; // 0x36(0x01)
	bool bMinDesiredHeight; // 0x37(0x01)
	bool bMaxDesiredWidth; // 0x38(0x01)
	bool bMaxDesiredHeight; // 0x39(0x01)
	bool bMinAspectRatio; // 0x3a(0x01)
	bool bMaxAspectRatio; // 0x3b(0x01)
};

// ScriptStruct ShooterGame.ShellBlurredInputGuardArgs
// Size: 0x1c0 (Inherited: 0x00)
struct FShellBlurredInputGuardArgs {
	bool bApplyAlphaToBlur; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float BlurStrength; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	struct FSlateBrush LowQualityFallbackBrush; // 0x10(0xd0)
	struct FSlateBrush MaskImage; // 0xe0(0xd0)
	struct FLinearColor Tint; // 0x1b0(0x10)
};

// ScriptStruct ShooterGame.MissionCatalogData
// Size: 0x1e0 (Inherited: 0x00)
struct FMissionCatalogData {
	struct FGuid ID; // 0x00(0x10)
	struct FText Title; // 0x10(0x18)
	struct TMap<struct FString, struct FString> LocalizedTitlesByCulture; // 0x28(0x50)
	struct FString Type; // 0x78(0x10)
	struct TArray<struct FString> Tags; // 0x88(0x10)
	struct FDateTime Expiration; // 0x98(0x08)
	struct FDateTime Activation; // 0xa0(0x08)
	int64_t XPGrant; // 0xa8(0x08)
	struct TMap<struct FGuid, int64_t> ProgressToCompleteObjectives; // 0xb0(0x50)
	struct TMap<struct FGuid, struct FString> ObjectiveNames; // 0x100(0x50)
	struct FGuid AccordAgent; // 0x150(0x10)
	struct FGuid AccordContract; // 0x160(0x10)
	bool DevelopmentOnly; // 0x170(0x01)
	char pad_171[0x7]; // 0x171(0x07)
	struct TArray<struct FString> ExcludedPlatforms; // 0x178(0x10)
	struct TMap<struct FString, struct FPlatformInclusionFlags> IncludedPlatforms; // 0x188(0x50)
	struct UObject* PrimaryAsset; // 0x1d8(0x08)
};

// ScriptStruct ShooterGame.PlatformInclusionFlags
// Size: 0x01 (Inherited: 0x00)
struct FPlatformInclusionFlags {
	bool DevelopmentOnly; // 0x00(0x01)
};

// ScriptStruct ShooterGame.EventCatalogData
// Size: 0xf8 (Inherited: 0x00)
struct FEventCatalogData {
	struct FGuid ID; // 0x00(0x10)
	struct FText Name; // 0x10(0x18)
	struct TMap<struct FString, struct FString> LocalizedNamesByCulture; // 0x28(0x50)
	struct FDateTime StartTime; // 0x78(0x08)
	struct FDateTime EndTime; // 0x80(0x08)
	bool DevelopmentOnly; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct TArray<struct FString> ExcludedPlatforms; // 0x90(0x10)
	struct TMap<struct FString, struct FPlatformInclusionFlags> IncludedPlatforms; // 0xa0(0x50)
	struct UObject* PrimaryAsset; // 0xf0(0x08)
};

// ScriptStruct ShooterGame.LevelBorderCatalogData
// Size: 0x80 (Inherited: 0x00)
struct FLevelBorderCatalogData {
	struct FGuid ID; // 0x00(0x10)
	int32_t StartingLevel; // 0x10(0x04)
	bool DevelopmentOnly; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	struct TArray<struct FString> ExcludedPlatforms; // 0x18(0x10)
	struct TMap<struct FString, struct FPlatformInclusionFlags> IncludedPlatforms; // 0x28(0x50)
	struct UObject* PrimaryAsset; // 0x78(0x08)
};

// ScriptStruct ShooterGame.SeasonCatalogData
// Size: 0x118 (Inherited: 0x00)
struct FSeasonCatalogData {
	struct FGuid ID; // 0x00(0x10)
	struct FText Name; // 0x10(0x18)
	struct TMap<struct FString, struct FString> LocalizedNamesByCulture; // 0x28(0x50)
	struct FGuid ParentSeasonID; // 0x78(0x10)
	struct FString Type; // 0x88(0x10)
	struct FDateTime StartTime; // 0x98(0x08)
	struct FDateTime EndTime; // 0xa0(0x08)
	bool DevelopmentOnly; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct FString> ExcludedPlatforms; // 0xb0(0x10)
	struct TMap<struct FString, struct FPlatformInclusionFlags> IncludedPlatforms; // 0xc0(0x50)
	struct UObject* PrimaryAsset; // 0x110(0x08)
};

// ScriptStruct ShooterGame.CompetitiveTierCatalogData
// Size: 0x30 (Inherited: 0x00)
struct FCompetitiveTierCatalogData {
	int32_t Tier; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText TierName; // 0x08(0x18)
	struct FString Division; // 0x20(0x10)
};

// ScriptStruct ShooterGame.ContentData
// Size: 0x110 (Inherited: 0x00)
struct FContentData {
	struct FText Name; // 0x00(0x18)
	struct TMap<struct FString, struct FString> LocalizedNamesByCulture; // 0x18(0x50)
	struct FString Guid; // 0x68(0x10)
	struct FString AssetName; // 0x78(0x10)
	struct FString AssetPath; // 0x88(0x10)
	bool DevelopmentOnly; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct TArray<struct FString> ExcludedPlatforms; // 0xa0(0x10)
	struct TMap<struct FString, struct FPlatformInclusionFlags> IncludedPlatforms; // 0xb0(0x50)
	bool BaseContent; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct UObject* PrimaryAsset; // 0x108(0x08)
};

// ScriptStruct ShooterGame.SubscriptionCatalogData
// Size: 0x150 (Inherited: 0x110)
struct FSubscriptionCatalogData : FContentData {
	struct FGuid EntitlementTypeID; // 0x110(0x10)
	struct FGuid AuthoringSubscriptionID; // 0x120(0x10)
	float XPBoostAmount; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct FString XPBoostType; // 0x138(0x10)
	int32_t DisplayPriority; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
};

// ScriptStruct ShooterGame.CompetitiveSeasonConfigArchiveCatalogData
// Size: 0x20 (Inherited: 0x00)
struct FCompetitiveSeasonConfigArchiveCatalogData {
	struct TArray<struct FGuid> Archives; // 0x00(0x10)
	struct FGuid CompleteMasteryArchiveID; // 0x10(0x10)
};

// ScriptStruct ShooterGame.CompetitiveSeasonConfigCatalogData
// Size: 0xc8 (Inherited: 0x00)
struct FCompetitiveSeasonConfigCatalogData {
	int32_t SeasonRankIndex; // 0x00(0x04)
	int32_t SeasonTopWinsMaximum; // 0x04(0x04)
	int32_t WinsNeededForSeasonRank; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<int32_t, int32_t> PlacementTierAdjustments; // 0x10(0x50)
	int32_t PlacementMaxTier; // 0x60(0x04)
	int32_t PlacementProgress; // 0x64(0x04)
	float LeaderboardRankRatingResetValue; // 0x68(0x04)
	float NewSeasonMinVariance; // 0x6c(0x04)
	int32_t SeasonGamesToShowSkill; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct TMap<struct FGuid, struct FCompetitiveSeasonConfigArchiveCatalogData> Archives; // 0x78(0x50)
};

// ScriptStruct ShooterGame.CompetitiveSeasonCatalogData
// Size: 0x1c8 (Inherited: 0x00)
struct FCompetitiveSeasonCatalogData {
	struct FGuid ID; // 0x00(0x10)
	struct FGuid SeasonID; // 0x10(0x10)
	struct TMap<struct FString, struct FRewardGrant> RankedRewards; // 0x20(0x50)
	struct TArray<struct FCompetitiveTierCatalogData> CompetitiveTiers; // 0x70(0x10)
	struct FCompetitiveSeasonConfigCatalogData Config; // 0x80(0xc8)
	struct FDateTime StartTime; // 0x148(0x08)
	struct FDateTime EndTime; // 0x150(0x08)
	bool DevelopmentOnly; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
	struct TArray<struct FString> ExcludedPlatforms; // 0x160(0x10)
	struct TMap<struct FString, struct FPlatformInclusionFlags> IncludedPlatforms; // 0x170(0x50)
	struct UObject* PrimaryAsset; // 0x1c0(0x08)
};

// ScriptStruct ShooterGame.RewardGrant
// Size: 0x20 (Inherited: 0x00)
struct FRewardGrant {
	struct TArray<struct FEntitlementReward> EntitlementRewards; // 0x00(0x10)
	struct TArray<struct FWalletReward> WalletRewards; // 0x10(0x10)
};

// ScriptStruct ShooterGame.WalletReward
// Size: 0x18 (Inherited: 0x00)
struct FWalletReward {
	struct FGuid CurrencyID; // 0x00(0x10)
	int64_t Amount; // 0x10(0x08)
};

// ScriptStruct ShooterGame.EntitlementReward
// Size: 0x28 (Inherited: 0x00)
struct FEntitlementReward {
	struct FGuid ItemTypeID; // 0x00(0x10)
	struct FGuid ItemId; // 0x10(0x10)
	int64_t Amount; // 0x20(0x08)
};

// ScriptStruct ShooterGame.PremierCustomizationColorCatalogData
// Size: 0x38 (Inherited: 0x00)
struct FPremierCustomizationColorCatalogData {
	struct FText ColorName; // 0x00(0x18)
	struct FString Guid; // 0x18(0x10)
	struct FString LinearColorString; // 0x28(0x10)
};

// ScriptStruct ShooterGame.PremierCustomizationIconCatalogData
// Size: 0x90 (Inherited: 0x00)
struct FPremierCustomizationIconCatalogData {
	struct FString IconGuid; // 0x00(0x10)
	struct FString IconName; // 0x10(0x10)
	bool DevelopmentOnly; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FString> ExcludedPlatforms; // 0x28(0x10)
	struct TMap<struct FString, struct FPlatformInclusionFlags> IncludedPlatforms; // 0x38(0x50)
	struct UObject* PrimaryAsset; // 0x88(0x08)
};

// ScriptStruct ShooterGame.PremierCustomizationCatalogData
// Size: 0x20 (Inherited: 0x00)
struct FPremierCustomizationCatalogData {
	struct TArray<struct FPremierCustomizationIconCatalogData> PremierIcons; // 0x00(0x10)
	struct TArray<struct FPremierCustomizationColorCatalogData> PremierCustomizationColors; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PremierConferenceCatalogData
// Size: 0x98 (Inherited: 0x00)
struct FPremierConferenceCatalogData {
	struct FGuid ID; // 0x00(0x10)
	struct FString Key; // 0x10(0x10)
	bool DevelopmentOnly; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FString> ExcludedPlatforms; // 0x28(0x10)
	bool IsSuper; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TMap<struct FString, struct FPlatformInclusionFlags> IncludedPlatforms; // 0x40(0x50)
	struct UObject* PrimaryAsset; // 0x90(0x08)
};

// ScriptStruct ShooterGame.PremierEventDivisionScheduleCatalogData
// Size: 0x18 (Inherited: 0x00)
struct FPremierEventDivisionScheduleCatalogData {
	int32_t Division; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FDateTime StartDateTime; // 0x08(0x08)
	struct FDateTime EndDateTime; // 0x10(0x08)
};

// ScriptStruct ShooterGame.PremierEventCatalogData
// Size: 0x60 (Inherited: 0x00)
struct FPremierEventCatalogData {
	struct FGuid ID; // 0x00(0x10)
	struct FString Type; // 0x10(0x10)
	struct FDateTime StartDateTime; // 0x20(0x08)
	struct FDateTime EndDateTime; // 0x28(0x08)
	struct TArray<struct FPremierEventDivisionScheduleCatalogData> SchedulePerDivision; // 0x30(0x10)
	struct FString MapSelectionStrategy; // 0x40(0x10)
	struct TArray<struct FGuid> MapPoolMapIds; // 0x50(0x10)
};

// ScriptStruct ShooterGame.PremierDivisionCatalogData
// Size: 0x30 (Inherited: 0x00)
struct FPremierDivisionCatalogData {
	int32_t Division; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FText DivisionName; // 0x08(0x18)
	struct FString DivisionGroup; // 0x20(0x10)
};

// ScriptStruct ShooterGame.PremierSeasonCatalogData
// Size: 0x200 (Inherited: 0x110)
struct FPremierSeasonCatalogData : FContentData {
	struct FGuid ID; // 0x110(0x10)
	struct FGuid CompetitiveSeasonID; // 0x120(0x10)
	struct FDateTime StartTime; // 0x130(0x08)
	struct FDateTime EndTime; // 0x138(0x08)
	struct TArray<struct FPremierEventCatalogData> Events; // 0x140(0x10)
	struct TArray<struct FPremierDivisionCatalogData> Divisions; // 0x150(0x10)
	struct TArray<struct FGuid> ParticipationRewardsActIDs; // 0x160(0x10)
	struct FRewardGrant ParticipationRewards; // 0x170(0x20)
	struct FRewardGrant TournamentWinnerRewards; // 0x190(0x20)
	struct TMap<struct FString, struct FRewardGrant> DivisionWinnerRewards; // 0x1b0(0x50)
};

// ScriptStruct ShooterGame.GunSkinFeatures
// Size: 0xb8 (Inherited: 0x00)
struct FGunSkinFeatures {
	struct FString ModelCategory; // 0x00(0x10)
	struct FString ReloadVFXCategory; // 0x10(0x10)
	struct FString InspectVFXCategory; // 0x20(0x10)
	struct FString EquipVFXCategory; // 0x30(0x10)
	struct FString IdleVFXCategory; // 0x40(0x10)
	struct FString FiringVFXCategory; // 0x50(0x10)
	struct FString SFXCategory; // 0x60(0x10)
	struct FString FiringSFXCategory; // 0x70(0x10)
	struct FString FinisherCategory; // 0x80(0x10)
	bool KillBanner; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FString MeleeCategory; // 0x98(0x10)
	struct FString MeleeArchetypeCategory; // 0xa8(0x10)
};

// ScriptStruct ShooterGame.GunSkinCatalogData
// Size: 0x238 (Inherited: 0x110)
struct FGunSkinCatalogData : FContentData {
	struct FGuid EquippableID; // 0x110(0x10)
	struct FGuid ContentTierID; // 0x120(0x10)
	struct FGuid ContentEditionID; // 0x130(0x10)
	struct FGuid DefaultChromaID; // 0x140(0x10)
	struct TArray<struct FGuid> ChromaIDs; // 0x150(0x10)
	struct TArray<struct FGuid> LevelIDs; // 0x160(0x10)
	struct FGuid ThemeID; // 0x170(0x10)
	struct FGunSkinFeatures Features; // 0x180(0xb8)
};

// ScriptStruct ShooterGame.ContentTierCatalogData
// Size: 0x118 (Inherited: 0x110)
struct FContentTierCatalogData : FContentData {
	int32_t TierRank; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// ScriptStruct ShooterGame.ContentEditionCatalogData
// Size: 0x118 (Inherited: 0x110)
struct FContentEditionCatalogData : FContentData {
	int32_t EditionType; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// ScriptStruct ShooterGame.StreamedVideoFileCatalogData
// Size: 0x20 (Inherited: 0x00)
struct FStreamedVideoFileCatalogData {
	struct FString SourcePath; // 0x00(0x10)
	struct FString TargetFileName; // 0x10(0x10)
};

// ScriptStruct ShooterGame.GameModeCatalogData
// Size: 0x170 (Inherited: 0x110)
struct FGameModeCatalogData : FContentData {
	struct TMap<struct FString, struct FString> GameRuleOverrides; // 0x110(0x50)
	struct TArray<struct FName> MapToModeTags; // 0x160(0x10)
};

// ScriptStruct ShooterGame.MapCatalogData
// Size: 0x120 (Inherited: 0x110)
struct FMapCatalogData : FContentData {
	struct TArray<struct FName> MapToModeTags; // 0x110(0x10)
};

// ScriptStruct ShooterGame.ThemeFeatures
// Size: 0x50 (Inherited: 0x00)
struct FThemeFeatures {
	struct FDateTime ReleaseDate; // 0x00(0x08)
	struct FString PrimaryThematicCategory; // 0x08(0x10)
	struct FString SecondaryThematicCategory; // 0x18(0x10)
	struct FString ThemeContinuationCategory; // 0x28(0x10)
	struct FString PromotionCategory; // 0x38(0x10)
	bool LimitedEdition; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct ShooterGame.ThemeCatalogData
// Size: 0x160 (Inherited: 0x110)
struct FThemeCatalogData : FContentData {
	struct FThemeFeatures Features; // 0x110(0x50)
};

// ScriptStruct ShooterGame.ThematicContentData
// Size: 0x120 (Inherited: 0x110)
struct FThematicContentData : FContentData {
	struct FGuid ThemeID; // 0x110(0x10)
};

// ScriptStruct ShooterGame.CharmCatalogData
// Size: 0x130 (Inherited: 0x120)
struct FCharmCatalogData : FThematicContentData {
	struct TArray<struct FGuid> LevelIDs; // 0x120(0x10)
};

// ScriptStruct ShooterGame.CharacterCatalogData
// Size: 0x118 (Inherited: 0x110)
struct FCharacterCatalogData : FContentData {
	struct FDateTime ReleaseDate; // 0x110(0x08)
};

// ScriptStruct ShooterGame.ArchiveCatalogData
// Size: 0x120 (Inherited: 0x110)
struct FArchiveCatalogData : FContentData {
	struct TArray<struct FGuid> ContractIDs; // 0x110(0x10)
};

// ScriptStruct ShooterGame.RecruitmentCatalogData
// Size: 0xa8 (Inherited: 0x00)
struct FRecruitmentCatalogData {
	struct FGuid AgentID; // 0x00(0x10)
	struct FGuid CounterID; // 0x10(0x10)
	int32_t MilestoneThreshold; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FDateTime StartDate; // 0x28(0x08)
	struct FDateTime EndDate; // 0x30(0x08)
	bool DevelopmentOnly; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TArray<struct FString> ExcludedPlatforms; // 0x40(0x10)
	struct TMap<struct FString, struct FPlatformInclusionFlags> IncludedPlatforms; // 0x50(0x50)
	struct UObject* PrimaryAsset; // 0xa0(0x08)
};

// ScriptStruct ShooterGame.ServiceDictionaryEntry
// Size: 0x50 (Inherited: 0x00)
struct FServiceDictionaryEntry {
	struct TMap<struct FString, struct FString> Translations; // 0x00(0x50)
};

// ScriptStruct ShooterGame.ServiceDictionary
// Size: 0x50 (Inherited: 0x00)
struct FServiceDictionary {
	struct TMap<struct FString, struct FServiceDictionaryEntry> Entries; // 0x00(0x50)
};

// ScriptStruct ShooterGame.JuiceSpendRules
// Size: 0x110 (Inherited: 0x00)
struct FJuiceSpendRules {
	struct TMap<struct FGuid, int32_t> WeaponSkinEnergyValueByContentTier; // 0x00(0x50)
	struct TMap<struct FGuid, int32_t> WeaponSkinEnergyCostByContentTier; // 0x50(0x50)
	int32_t WeaponSkinLevelEnergyCost; // 0xa0(0x04)
	int32_t WeaponSkinVariantEnergyCost; // 0xa4(0x04)
	bool DevelopmentOnly; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct TArray<struct FString> ExcludedPlatforms; // 0xb0(0x10)
	struct TMap<struct FString, struct FPlatformInclusionFlags> IncludedPlatforms; // 0xc0(0x50)
};

// ScriptStruct ShooterGame.ContentListing
// Size: 0x390 (Inherited: 0x00)
struct FContentListing {
	struct TArray<struct FCharacterCatalogData> Characters; // 0x00(0x10)
	struct TArray<struct FContentData> Equips; // 0x10(0x10)
	struct TArray<struct FContentData> Attachments; // 0x20(0x10)
	struct TArray<struct FGunSkinCatalogData> Skins; // 0x30(0x10)
	struct TArray<struct FContentData> SkinLevels; // 0x40(0x10)
	struct TArray<struct FContentData> Chromas; // 0x50(0x10)
	struct TArray<struct FMapCatalogData> Maps; // 0x60(0x10)
	struct TArray<struct FThemeCatalogData> Themes; // 0x70(0x10)
	struct TArray<struct FGameModeCatalogData> GameModes; // 0x80(0x10)
	struct TArray<struct FContentData> Currencies; // 0x90(0x10)
	struct TArray<struct FContentData> Totems; // 0xa0(0x10)
	struct TArray<struct FThematicContentData> Sprays; // 0xb0(0x10)
	struct TArray<struct FContentData> SprayLevels; // 0xc0(0x10)
	struct TArray<struct FCharmCatalogData> Charms; // 0xd0(0x10)
	struct TArray<struct FContentData> CharmLevels; // 0xe0(0x10)
	struct TArray<struct FThematicContentData> PlayerCards; // 0xf0(0x10)
	struct TArray<struct FContentData> PlayerTitles; // 0x100(0x10)
	struct TArray<struct FContentData> StorefrontItems; // 0x110(0x10)
	struct TArray<struct FContentTierCatalogData> ContentTiers; // 0x120(0x10)
	struct TArray<struct FContentEditionCatalogData> ContentEditions; // 0x130(0x10)
	struct FJuiceSpendRules JuiceSpendRules; // 0x140(0x110)
	struct TArray<struct FMissionCatalogData> Missions; // 0x250(0x10)
	struct TArray<struct FEventCatalogData> Events; // 0x260(0x10)
	struct TArray<struct FSeasonCatalogData> Seasons; // 0x270(0x10)
	struct TArray<struct FCompetitiveSeasonCatalogData> CompetitiveSeasons; // 0x280(0x10)
	struct TArray<struct FPremierSeasonCatalogData> PremierSeasons; // 0x290(0x10)
	struct TArray<struct FPremierConferenceCatalogData> PremierConferences; // 0x2a0(0x10)
	struct FPremierCustomizationCatalogData PremierCustomizationData; // 0x2b0(0x20)
	struct TArray<struct FStreamedVideoFileCatalogData> StreamedVideoFiles; // 0x2d0(0x10)
	struct FContractListing ContractListing; // 0x2e0(0x10)
	struct FServiceDictionary ServiceDictionary; // 0x2f0(0x50)
	struct TArray<struct FLevelBorderCatalogData> LevelBorders; // 0x340(0x10)
	struct TArray<struct FContentData> Ceremonies; // 0x350(0x10)
	struct TArray<struct FSubscriptionCatalogData> Subscriptions; // 0x360(0x10)
	struct TArray<struct FArchiveCatalogData> Archives; // 0x370(0x10)
	struct TArray<struct FRecruitmentCatalogData> RecruitmentData; // 0x380(0x10)
};

// ScriptStruct ShooterGame.ContractListing
// Size: 0x10 (Inherited: 0x00)
struct FContractListing {
	struct TArray<struct FContractDefinition> Contracts; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ContractDefinition
// Size: 0x1d0 (Inherited: 0x00)
struct FContractDefinition {
	struct FGuid ID; // 0x00(0x10)
	struct FText Name; // 0x10(0x18)
	struct TMap<struct FString, struct FString> LocalizedNamesByCulture; // 0x28(0x50)
	struct FString AssetName; // 0x78(0x10)
	struct FString AssetPath; // 0x88(0x10)
	bool DevelopmentOnly; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct TArray<struct FString> ExcludedPlatforms; // 0xa0(0x10)
	struct TMap<struct FString, struct FPlatformInclusionFlags> IncludedPlatforms; // 0xb0(0x50)
	bool BaseContent; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct FString ContractType; // 0x108(0x10)
	struct FGuid SeasonID; // 0x118(0x10)
	struct FGuid EventID; // 0x128(0x10)
	struct FProgressionSchedule ProgressionSchedule; // 0x138(0x20)
	struct TArray<struct FAlternateProgressionSchedule> AlternateProgressionSchedules; // 0x158(0x10)
	struct TArray<struct FRewardSchedule> RewardSchedules; // 0x168(0x10)
	struct FPremiumContractDetails PremiumContractDetails; // 0x178(0x34)
	char pad_1AC[0x4]; // 0x1ac(0x04)
	struct TArray<struct FEntitlementIdentifier> RequiredEntitlementsForLevelPurchases; // 0x1b0(0x10)
	struct TArray<int32_t> AccordThresholds; // 0x1c0(0x10)
};

// ScriptStruct ShooterGame.EntitlementIdentifier
// Size: 0x20 (Inherited: 0x00)
struct FEntitlementIdentifier {
	struct FGuid ItemTypeID; // 0x00(0x10)
	struct FGuid ItemId; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PremiumContractDetails
// Size: 0x34 (Inherited: 0x00)
struct FPremiumContractDetails {
	struct FEntitlementIdentifier Entitlement; // 0x00(0x20)
	struct FGuid PurchaseCurrencyID; // 0x20(0x10)
	int32_t PurchaseCost; // 0x30(0x04)
};

// ScriptStruct ShooterGame.RewardSchedule
// Size: 0x30 (Inherited: 0x00)
struct FRewardSchedule {
	struct FGuid ID; // 0x00(0x10)
	struct FRewardSchedulePrerequisites Prerequisites; // 0x10(0x10)
	struct TArray<struct FRewardGrant> RewardsPerLevel; // 0x20(0x10)
};

// ScriptStruct ShooterGame.RewardSchedulePrerequisites
// Size: 0x10 (Inherited: 0x00)
struct FRewardSchedulePrerequisites {
	struct TArray<struct FEntitlementIdentifier> RequiredEntitlements; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AlternateProgressionSchedule
// Size: 0x20 (Inherited: 0x00)
struct FAlternateProgressionSchedule {
	struct FGuid ProgressionCurrencyID; // 0x00(0x10)
	struct TArray<struct FAlternateProgressionLevel> ProgressionDeltaPerLevel; // 0x10(0x10)
};

// ScriptStruct ShooterGame.AlternateProgressionLevel
// Size: 0x08 (Inherited: 0x00)
struct FAlternateProgressionLevel {
	bool IsAvailable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t ProgressionDelta; // 0x04(0x04)
};

// ScriptStruct ShooterGame.ProgressionSchedule
// Size: 0x20 (Inherited: 0x00)
struct FProgressionSchedule {
	struct FGuid ProgressionCurrencyID; // 0x00(0x10)
	struct TArray<uint32_t> ProgressionDeltaPerLevel; // 0x10(0x10)
};

// ScriptStruct ShooterGame.SortPartyData
// Size: 0x38 (Inherited: 0x00)
struct FSortPartyData {
	struct FString ID; // 0x00(0x10)
	struct FString FirstMemberFullName; // 0x10(0x10)
	struct FAresSocialPresenceState FirstMemberPresenceState; // 0x20(0x05)
	enum class EAresPartyAccessibility PartyAccessibility; // 0x25(0x01)
	char pad_26[0x2]; // 0x26(0x02)
	int32_t PartySize; // 0x28(0x04)
	int32_t MembersListSize; // 0x2c(0x04)
	int32_t FilteredMembersListSize; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.FriendData
// Size: 0x28 (Inherited: 0x00)
struct FFriendData {
	struct FString ID; // 0x00(0x10)
	struct FString FullName; // 0x10(0x10)
	struct FAresSocialPresenceState PresenceState; // 0x20(0x05)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct ShooterGame.AresSocialUpdateLockToken
// Size: 0x08 (Inherited: 0x00)
struct FAresSocialUpdateLockToken {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ShooterGame.BlueprintAutomatedTest
// Size: 0x28 (Inherited: 0x00)
struct FBlueprintAutomatedTest {
	struct FString ShortName; // 0x00(0x10)
	struct UAresTestLogic* ServerTestLogic; // 0x10(0x08)
	struct TArray<struct UAresTestLogic*> ClientTestLogic; // 0x18(0x10)
};

// ScriptStruct ShooterGame.AresAutomationEvent
// Size: 0x20 (Inherited: 0x00)
struct FAresAutomationEvent {
	struct FString Type; // 0x00(0x10)
	struct TArray<struct FString> Params; // 0x10(0x10)
};

// ScriptStruct ShooterGame.AresTouchDoubleTapGestureProperties
// Size: 0x14 (Inherited: 0x00)
struct FAresTouchDoubleTapGestureProperties {
	float MaxTimeBetweenTaps; // 0x00(0x04)
	float MaxDistanceBetweenTapsInInches; // 0x04(0x04)
	struct FAresTouchHoldGestureProperties HoldProperties; // 0x08(0x0c)
};

// ScriptStruct ShooterGame.AresTouchHoldGestureProperties
// Size: 0x0c (Inherited: 0x00)
struct FAresTouchHoldGestureProperties {
	float MinimumTimeToHold; // 0x00(0x04)
	float MaximumMoveDistanceInInches; // 0x04(0x04)
	char MaxTouchesTracked; // 0x08(0x01)
	bool bRestartChargeOnInterrupt; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct ShooterGame.orwardedTouchInputRegistryEntry
// Size: 0x10 (Inherited: 0x00)
struct ForwardedTouchInputRegistryEntry {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AresTouchWheelSegmentData
// Size: 0x28 (Inherited: 0x00)
struct FAresTouchWheelSegmentData {
	struct UAresTouchWheelSegment* SegmentBehaviorClass; // 0x00(0x08)
	struct FText OverrideSegmentText; // 0x08(0x18)
	struct UTexture2D* OverrideSegmentIconTexture; // 0x20(0x08)
};

// ScriptStruct ShooterGame.AresTouchWheelSegmentTableEntry
// Size: 0x48 (Inherited: 0x08)
struct FAresTouchWheelSegmentTableEntry : FTableRowBase {
	bool bIsStaticSectionSegment; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FAresTouchWheelSegmentData SegmentData; // 0x10(0x28)
	struct TArray<struct FAresTouchWheelSegmentData> SegmentSuboptions; // 0x38(0x10)
};

// ScriptStruct ShooterGame.TrailNodeData
// Size: 0x28 (Inherited: 0x00)
struct FTrailNodeData {
	struct UParticleSystemComponent* SpawnedBeam; // 0x00(0x08)
	char pad_8[0x20]; // 0x08(0x20)
};

// ScriptStruct ShooterGame.UINavigationGlobalsEntry
// Size: 0x2e0 (Inherited: 0x00)
struct FUINavigationGlobalsEntry {
	struct TSoftClassPtr<UObject> ScreenAsset; // 0x00(0x30)
	struct FText ScreenDisplayName; // 0x30(0x18)
	struct FText ScreenDisplayNameAllCaps; // 0x48(0x18)
	enum class ECommonInputMode InputMode; // 0x60(0x01)
	bool bUseDisplayNameAsBreadcrumb; // 0x61(0x01)
	bool bHideParentBreadcrumb; // 0x62(0x01)
	char pad_63[0x5]; // 0x63(0x05)
	struct TSoftObjectPtr<UTexture2D> ScreenIcon; // 0x68(0x30)
	struct TSoftObjectPtr<UTexture2D> BackgroundArtOverride; // 0x98(0x30)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FSlateBrush BackgroundImageOverride; // 0xd0(0xd0)
	bool bUseSlateBrushBackground; // 0x1a0(0x01)
	char pad_1A1[0x7]; // 0x1a1(0x07)
	struct FMenuStackMediaSourceParams BackgroundVideoOverride; // 0x1a8(0x30)
	struct FText OverrideBackActionName; // 0x1d8(0x18)
	enum class EHandleUserBackActionOption BackHandlingBehaviour; // 0x1f0(0x01)
	bool bAddSocialPaddingForPC; // 0x1f1(0x01)
	struct FShellWidgetVisibilityOptions ShellWidgetVisibilityOptions; // 0x1f2(0x0a)
	bool bIsLandingScreen; // 0x1fc(0x01)
	bool bIsDynamicallyGeneratingChildren; // 0x1fd(0x01)
	char pad_1FE[0x2]; // 0x1fe(0x02)
	struct TArray<struct FName> ValidDynamicChildScreens; // 0x200(0x10)
	struct TSoftClassPtr<UObject> NavigationButtonClass; // 0x210(0x30)
	struct TMap<struct FName, struct TSoftClassPtr<UObject>> ChildScreensNavigationButtonOverrides; // 0x240(0x50)
	struct TArray<struct FName> ValidChildScreens; // 0x290(0x10)
	int32_t NavigationBarIndex; // 0x2a0(0x04)
	enum class EUINavigationTabListPriority NavigationTabListPriority; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct FString NavigationTabTelemetryTarget; // 0x2a8(0x10)
	struct TArray<struct FModalContextInfo> ModalContext; // 0x2b8(0x10)
	uint32_t PreloadContexts; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct TArray<struct TSoftClassPtr<UObject>> TargetPreloadGameModes; // 0x2d0(0x10)
};

// ScriptStruct ShooterGame.ModalContextInfo
// Size: 0x18 (Inherited: 0x00)
struct FModalContextInfo {
	enum class EModalContextType ContextType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FGameplayTag> ContextList; // 0x08(0x10)
};

// ScriptStruct ShooterGame.UINavigationBridgingInfo
// Size: 0x50 (Inherited: 0x00)
struct FUINavigationBridgingInfo {
	struct TSet<struct FName> ApprovedMiniBridgeURLs; // 0x00(0x50)
};

// ScriptStruct ShooterGame.AresUIPropertyMap
// Size: 0x2d0 (Inherited: 0x00)
struct FAresUIPropertyMap {
	struct TMap<struct FString, int32_t> IntProperties; // 0x00(0x50)
	struct TMap<struct FString, float> FloatProperties; // 0x50(0x50)
	struct TMap<struct FString, bool> BoolProperties; // 0xa0(0x50)
	struct TMap<struct FString, struct FText> TextProperties; // 0xf0(0x50)
	struct TMap<struct FString, struct FLinearColor> LinearColorProperties; // 0x140(0x50)
	struct TMap<struct FString, struct FVector2D> Vector2DProperties; // 0x190(0x50)
	struct TMap<struct FString, struct UTexture2D*> Texture2DProperties; // 0x1e0(0x50)
	struct TMap<struct FString, struct UMaterialInstance*> MaterialInstanceProperties; // 0x230(0x50)
	struct TMap<struct FString, struct UMaterialInterface*> MaterialInterfaceProperties; // 0x280(0x50)
};

// ScriptStruct ShooterGame.AresWhizBySoundTuning
// Size: 0x18 (Inherited: 0x00)
struct FAresWhizBySoundTuning {
	struct FName WhizByName; // 0x00(0x0c)
	int32_t NumWhizByVariations; // 0x0c(0x04)
	bool bBypassWhizCooldown; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float WhizByChance; // 0x14(0x04)
};

// ScriptStruct ShooterGame.NormalizedScreenDistanceCheck
// Size: 0x08 (Inherited: 0x00)
struct FNormalizedScreenDistanceCheck {
	float HorizontalMaxScreenDistanceNormalized01; // 0x00(0x04)
	float VerticalMaxScreenDistanceNormalized01; // 0x04(0x04)
};

// ScriptStruct ShooterGame.AresNetViewer
// Size: 0x48 (Inherited: 0x48)
struct FAresNetViewer : FNetViewer {
};

// ScriptStruct ShooterGame.VisionGeometry
// Size: 0x20 (Inherited: 0x08)
struct FVisionGeometry : FTableRowBase {
	struct FString Type; // 0x08(0x10)
	float X; // 0x18(0x04)
	float Y; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.CalloutRegion
// Size: 0x10 (Inherited: 0x00)
struct FCalloutRegion {
	struct TArray<struct FString> SubRegions; // 0x00(0x10)
};

// ScriptStruct ShooterGame.GameModeSpecificSublevelsByKey
// Size: 0x18 (Inherited: 0x00)
struct FGameModeSpecificSublevelsByKey {
	enum class EGameModeSublevelKey SublevelKey; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct TSoftObjectPtr<UWorld>> Sublevels; // 0x08(0x10)
};

// ScriptStruct ShooterGame.VisionOccluderGroup
// Size: 0x28 (Inherited: 0x00)
struct FVisionOccluderGroup {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct ShooterGame.MaterialParamCollectionOverride
// Size: 0x10 (Inherited: 0x00)
struct FMaterialParamCollectionOverride {
	struct UMaterialParameterCollection* BaseCollection; // 0x00(0x08)
	struct UMaterialParameterCollection* OverrideCollection; // 0x08(0x08)
};

// ScriptStruct ShooterGame.MaterialParamCollectionOverrides
// Size: 0x10 (Inherited: 0x00)
struct FMaterialParamCollectionOverrides {
	struct TArray<struct FMaterialParamCollectionOverride> OverrideList; // 0x00(0x10)
};

// ScriptStruct ShooterGame.MinimapFloorConfig
// Size: 0x10 (Inherited: 0x00)
struct FMinimapFloorConfig {
	float ZHeight; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UTexture2D* MinimapFloorOverlay; // 0x08(0x08)
};

// ScriptStruct ShooterGame.ArmorDetailUIData
// Size: 0x30 (Inherited: 0x00)
struct FArmorDetailUIData {
	struct FText Name; // 0x00(0x18)
	struct FText Description; // 0x18(0x18)
};

// ScriptStruct ShooterGame.AssistDefinitionTableRow
// Size: 0x58 (Inherited: 0x08)
struct FAssistDefinitionTableRow : FTableRowBase {
	struct FGameplayTag Tag; // 0x08(0x0c)
	enum class EAresAssistType AssistType; // 0x14(0x01)
	enum class EBasicAssistType BasicType; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct FGameplayTag HigherPriorityThan; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct TSoftClassPtr<UObject> ShipsWithAssetLabel; // 0x28(0x30)
};

// ScriptStruct ShooterGame.DamagingAssistThreshold
// Size: 0x08 (Inherited: 0x00)
struct FDamagingAssistThreshold {
	float DamageThreshold; // 0x00(0x04)
	float AssistDuration; // 0x04(0x04)
};

// ScriptStruct ShooterGame.DamageTrackingEntry
// Size: 0x10 (Inherited: 0x00)
struct FDamageTrackingEntry {
	float AccumulatedDamage; // 0x00(0x04)
	float ConsumedDamage; // 0x04(0x04)
	float LastTimeDamageDealt; // 0x08(0x04)
	float AssistExpiryTime; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.AttachmentSettings
// Size: 0x0c (Inherited: 0x00)
struct FAttachmentSettings {
	struct FName AttachPoint; // 0x00(0x0c)
};

// ScriptStruct ShooterGame.AVSCountry
// Size: 0x38 (Inherited: 0x08)
struct FAVSCountry : FTableRowBase {
	struct FString CountryISO; // 0x08(0x10)
	struct FText CountryName; // 0x18(0x18)
	int32_t CountryCode; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.AVSResponseCallback
// Size: 0x28 (Inherited: 0x00)
struct FAVSResponseCallback {
	struct FDelegate OnSuccess; // 0x00(0x14)
	struct FDelegate OnError; // 0x14(0x14)
};

// ScriptStruct ShooterGame.AVSSendActivationPinRequest
// Size: 0x20 (Inherited: 0x00)
struct FAVSSendActivationPinRequest {
	struct FString PhoneNumber; // 0x00(0x10)
	struct FString Locale; // 0x10(0x10)
};

// ScriptStruct ShooterGame.AVSSendDeactivationPinRequest
// Size: 0x10 (Inherited: 0x00)
struct FAVSSendDeactivationPinRequest {
	struct FString Locale; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AVSConfirmPinRequest
// Size: 0x10 (Inherited: 0x00)
struct FAVSConfirmPinRequest {
	struct FString OneTimePin; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AVSDebugVerifyAccountRequest
// Size: 0x20 (Inherited: 0x00)
struct FAVSDebugVerifyAccountRequest {
	struct FString Puuid; // 0x00(0x10)
	struct FString PhoneNumber; // 0x10(0x10)
};

// ScriptStruct ShooterGame.AVSDebugUnverifyAccountRequest
// Size: 0x10 (Inherited: 0x00)
struct FAVSDebugUnverifyAccountRequest {
	struct FString Puuid; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AVSPhoneNumberData
// Size: 0x28 (Inherited: 0x00)
struct FAVSPhoneNumberData {
	struct FString CountryCode; // 0x00(0x10)
	struct FString EndsWith; // 0x10(0x10)
	int64_t Length; // 0x20(0x08)
};

// ScriptStruct ShooterGame.AVSRMSData
// Size: 0x40 (Inherited: 0x00)
struct FAVSRMSData {
	struct FString Status; // 0x00(0x10)
	int64_t PinExpiresAtEpochMillis; // 0x10(0x08)
	struct FAVSPhoneNumberData MessagedPhoneNumberObfuscated; // 0x18(0x28)
};

// ScriptStruct ShooterGame.AVSRMSError
// Size: 0x20 (Inherited: 0x00)
struct FAVSRMSError {
	struct FString ErrorCode; // 0x00(0x10)
	struct FString Message; // 0x10(0x10)
};

// ScriptStruct ShooterGame.AVSRMSResponse
// Size: 0x70 (Inherited: 0x00)
struct FAVSRMSResponse {
	struct FAVSRMSData Data; // 0x00(0x40)
	struct FAVSRMSError Error; // 0x40(0x20)
	struct FString ClientMessageId; // 0x60(0x10)
};

// ScriptStruct ShooterGame.AresHitConfirmTuning
// Size: 0x68 (Inherited: 0x00)
struct FAresHitConfirmTuning {
	struct UTexture* Image; // 0x00(0x08)
	struct FAresHudImageParams ImageParams; // 0x08(0x20)
	struct FAresTimedInterpolant AlphaTuning; // 0x28(0x1c)
	struct FAresTimedOvershootValue ScaleTuning; // 0x44(0x20)
	char pad_64[0x4]; // 0x64(0x04)
};

// ScriptStruct ShooterGame.CrosshairShape
// Size: 0x30 (Inherited: 0x00)
struct FCrosshairShape {
	bool bElementVisible; // 0x00(0x01)
	enum class ECrosshairShapeType ShapeType; // 0x01(0x01)
	enum class EAresHudCrosshairPoints PointType; // 0x02(0x01)
	enum class EAresDrawOrigin DrawOrigin; // 0x03(0x01)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector2D ElementOffset; // 0x08(0x10)
	struct FVector2D ElementErrorDirection; // 0x18(0x10)
	enum class ECrosshairLocation CrosshairLocation; // 0x28(0x01)
	bool bFadeOutWithRecoil; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct ShooterGame.AresBaseGameMatchState
// Size: 0x01 (Inherited: 0x00)
struct FAresBaseGameMatchState {
	bool bHasMatchStarted; // 0x00(0x01)
};

// ScriptStruct ShooterGame.BehaviorScoreTrackerMouseMovementTelemetry
// Size: 0x10 (Inherited: 0x00)
struct FBehaviorScoreTrackerMouseMovementTelemetry {
	float PitchDeltaMean; // 0x00(0x04)
	float PitchDeltaStandardDeviation; // 0x04(0x04)
	float YawDeltaMean; // 0x08(0x04)
	float YawDeltaStandardDeviation; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.BehaviorScoreTrackerTelemetryEvent
// Size: 0x30 (Inherited: 0x00)
struct FBehaviorScoreTrackerTelemetryEvent {
	struct FString MatchID; // 0x00(0x10)
	struct FString Subject; // 0x10(0x10)
	struct FBehaviorScoreTrackerMouseMovementTelemetry MouseMovementTelemetry; // 0x20(0x10)
};

// ScriptStruct ShooterGame.BehaviorScoreTrackersForPlayer
// Size: 0x10 (Inherited: 0x00)
struct FBehaviorScoreTrackersForPlayer {
	struct TArray<struct ABehaviorScoreTracker*> Trackers; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PendingBlindValidation
// Size: 0x08 (Inherited: 0x00)
struct FPendingBlindValidation {
	float BlindDuration; // 0x00(0x04)
	bool bIsServerResult; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct ShooterGame.ActiveBlind
// Size: 0x48 (Inherited: 0x00)
struct FActiveBlind {
	char pad_0[0xc]; // 0x00(0x0c)
	uint32_t BlindId; // 0x0c(0x04)
	struct FEffectID BlindEffectID; // 0x10(0x20)
	float InitialDuration; // 0x30(0x04)
	float StartNetMovementTime; // 0x34(0x04)
	struct UBlindConfig* BlindConfig; // 0x38(0x08)
	struct AActor* CausingActor; // 0x40(0x08)
};

// ScriptStruct ShooterGame.EffectID
// Size: 0x20 (Inherited: 0x00)
struct FEffectID {
	struct FName SourceID; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	int64_t EffectID; // 0x10(0x08)
	bool bLocalEffect; // 0x18(0x01)
	bool bTransient; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct ShooterGame.BlindSpawnParams
// Size: 0x38 (Inherited: 0x00)
struct FBlindSpawnParams {
	float BlindDuration; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UBlindConfig* BlindConfig; // 0x08(0x08)
	struct FVector BlindExplosionLocation; // 0x10(0x18)
	struct AActor* CausingActor; // 0x28(0x08)
	float NetBlindTimestamp; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.BlindManagerState
// Size: 0x18 (Inherited: 0x00)
struct FBlindManagerState {
	struct TArray<struct FActiveBlind> ActiveBlinds; // 0x00(0x10)
	float LongestActiveBlindDuration; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.AresBombGameMatchState
// Size: 0x08 (Inherited: 0x01)
struct FAresBombGameMatchState : FAresBaseGameMatchState {
	bool bIsStoreAvaliable; // 0x01(0x01)
	bool bShouldDisplayTimer; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	float TimeToDisplay; // 0x04(0x04)
};

// ScriptStruct ShooterGame.BracketLineConnection
// Size: 0x78 (Inherited: 0x00)
struct FBracketLineConnection {
	char pad_0[0x78]; // 0x00(0x78)
};

// ScriptStruct ShooterGame.BracketLineParams
// Size: 0x03 (Inherited: 0x00)
struct FBracketLineParams {
	char pad_0[0x3]; // 0x00(0x03)
};

// ScriptStruct ShooterGame.BracketLineConnectionPadding
// Size: 0x08 (Inherited: 0x00)
struct FBracketLineConnectionPadding {
	float Start; // 0x00(0x04)
	float End; // 0x04(0x04)
};

// ScriptStruct ShooterGame.BracketLineConfig
// Size: 0x48 (Inherited: 0x00)
struct FBracketLineConfig {
	struct FLinearColor EliminationLineColor; // 0x00(0x10)
	float EliminationLineThickness; // 0x10(0x04)
	float EliminationInitialLeadOff; // 0x14(0x04)
	float EliminationCornerDiagonalLength; // 0x18(0x04)
	struct FBracketLineConnectionPadding EliminationConnectionPadding; // 0x1c(0x08)
	struct FLinearColor SwissLineColor; // 0x24(0x10)
	float SwissLineThickness; // 0x34(0x04)
	float SwissInitialLeadOff; // 0x38(0x04)
	float SwissLineOverlapPadding; // 0x3c(0x04)
	struct FBracketLineConnectionPadding SwissConnectionPadding; // 0x40(0x08)
};

// ScriptStruct ShooterGame.BTEMilestone
// Size: 0x90 (Inherited: 0x00)
struct FBTEMilestone {
	struct FGuid UUID; // 0x00(0x10)
	struct TArray<struct UEditableReward*> Rewards; // 0x10(0x10)
	struct TArray<struct UMissionDataAsset*> Missions; // 0x20(0x10)
	struct FString ButtonURL; // 0x30(0x10)
	struct FString ConsoleQueueID; // 0x40(0x10)
	struct FString PCQueueID; // 0x50(0x10)
	struct TSoftClassPtr<UObject> UIData; // 0x60(0x30)
};

// ScriptStruct ShooterGame.ConfigurationAvailabilitySchedule
// Size: 0x10 (Inherited: 0x00)
struct FConfigurationAvailabilitySchedule {
	struct FDateTime StartUtc; // 0x00(0x08)
	struct FDateTime EndUtc; // 0x08(0x08)
};

// ScriptStruct ShooterGame.ConfigurationAvailability
// Size: 0x10 (Inherited: 0x00)
struct FConfigurationAvailability {
	struct FConfigurationAvailabilitySchedule Schedule; // 0x00(0x10)
};

// ScriptStruct ShooterGame.CAPProgressionConfigV2
// Size: 0x90 (Inherited: 0x00)
struct FCAPProgressionConfigV2 {
	struct FString Discriminator; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FGuid ConfigurationId; // 0x20(0x10)
	struct FString VariantId; // 0x30(0x10)
	struct FConfigurationAvailability Availability; // 0x40(0x10)
	struct FCAPProgressionConfigGroup Configuration; // 0x50(0x40)
};

// ScriptStruct ShooterGame.CAPProgressionConfigGroup
// Size: 0x40 (Inherited: 0x00)
struct FCAPProgressionConfigGroup {
	struct FGuid ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct TArray<struct FCAPProgressionConfigCounter> Counters; // 0x20(0x10)
	struct TArray<struct FCAPProgressionConfigMilestone> Milestones; // 0x30(0x10)
};

// ScriptStruct ShooterGame.CAPProgressionConfigMilestone
// Size: 0x80 (Inherited: 0x00)
struct FCAPProgressionConfigMilestone {
	struct FGuid ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	char pad_20[0x10]; // 0x20(0x10)
	struct TArray<struct FCAPProgressionConfigTriggerCounter> CounterTriggers; // 0x30(0x10)
	struct TArray<struct FCAPProgressionConfigTriggerEntitlement> EntitlementTriggers; // 0x40(0x10)
	struct FCAPProgressionConfigRewards Rewards; // 0x50(0x30)
};

// ScriptStruct ShooterGame.CAPProgressionConfigRewards
// Size: 0x30 (Inherited: 0x00)
struct FCAPProgressionConfigRewards {
	struct TArray<struct FCAPProgressionConfigRewardEntitlement> EntitlementRewards; // 0x00(0x10)
	struct TArray<struct FCAPProgressionConfigRewardCurrency> CurrencyRewards; // 0x10(0x10)
	struct TArray<struct FCAPProgressionConfigRewardProgressionDelta> DeltaRewards; // 0x20(0x10)
};

// ScriptStruct ShooterGame.CAPProgressionConfigReward
// Size: 0x10 (Inherited: 0x00)
struct FCAPProgressionConfigReward {
	struct FString Type; // 0x00(0x10)
};

// ScriptStruct ShooterGame.CAPProgressionConfigRewardProgressionDelta
// Size: 0x20 (Inherited: 0x10)
struct FCAPProgressionConfigRewardProgressionDelta : FCAPProgressionConfigReward {
	struct TArray<struct FCAPProgressionConfigProgressionCounterDelta> Deltas; // 0x10(0x10)
};

// ScriptStruct ShooterGame.CAPProgressionConfigProgressionCounterDelta
// Size: 0x18 (Inherited: 0x00)
struct FCAPProgressionConfigProgressionCounterDelta {
	struct FGuid CounterID; // 0x00(0x10)
	int64_t Amount; // 0x10(0x08)
};

// ScriptStruct ShooterGame.CAPProgressionConfigRewardCurrency
// Size: 0x28 (Inherited: 0x10)
struct FCAPProgressionConfigRewardCurrency : FCAPProgressionConfigReward {
	struct FGuid CurrencyID; // 0x10(0x10)
	int64_t Amount; // 0x20(0x08)
};

// ScriptStruct ShooterGame.CAPProgressionConfigRewardEntitlement
// Size: 0x68 (Inherited: 0x10)
struct FCAPProgressionConfigRewardEntitlement : FCAPProgressionConfigReward {
	struct FGuid ItemId; // 0x10(0x10)
	struct FGuid ItemTypeID; // 0x20(0x10)
	struct FGuid TypeID; // 0x30(0x10)
	int64_t Quantity; // 0x40(0x08)
	struct FCAPProgressionConfigRewardPayload ItemPayload; // 0x48(0x20)
};

// ScriptStruct ShooterGame.CAPProgressionConfigRewardPayload
// Size: 0x20 (Inherited: 0x00)
struct FCAPProgressionConfigRewardPayload {
	struct FString Version; // 0x00(0x10)
	struct FCAPProgressionConfigRewardPayloadData Data; // 0x10(0x10)
};

// ScriptStruct ShooterGame.CAPProgressionConfigRewardPayloadData
// Size: 0x10 (Inherited: 0x00)
struct FCAPProgressionConfigRewardPayloadData {
	struct FString InstanceId; // 0x00(0x10)
};

// ScriptStruct ShooterGame.CAPProgressionConfigTrigger
// Size: 0x10 (Inherited: 0x00)
struct FCAPProgressionConfigTrigger {
	struct FString Type; // 0x00(0x10)
};

// ScriptStruct ShooterGame.CAPProgressionConfigTriggerEntitlement
// Size: 0x20 (Inherited: 0x10)
struct FCAPProgressionConfigTriggerEntitlement : FCAPProgressionConfigTrigger {
	struct FGuid ItemId; // 0x10(0x10)
};

// ScriptStruct ShooterGame.CAPProgressionConfigTriggerCounter
// Size: 0x28 (Inherited: 0x10)
struct FCAPProgressionConfigTriggerCounter : FCAPProgressionConfigTrigger {
	struct FGuid CounterID; // 0x10(0x10)
	int64_t TriggerValue; // 0x20(0x08)
};

// ScriptStruct ShooterGame.CAPProgressionConfigCounter
// Size: 0x38 (Inherited: 0x00)
struct FCAPProgressionConfigCounter {
	struct FGuid ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString Direction; // 0x20(0x10)
	int32_t StartValue; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.CAPCampaignManagerConfigurationDTO
// Size: 0x50 (Inherited: 0x00)
struct FCAPCampaignManagerConfigurationDTO {
	struct FString Discriminator; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FGuid ID; // 0x20(0x10)
	struct FGuid ProductId; // 0x30(0x10)
	struct TArray<struct FCAPProgressionConfigV2> Variants; // 0x40(0x10)
};

// ScriptStruct ShooterGame.CAPCampaignManagerConfigurationDTOWrapper
// Size: 0x10 (Inherited: 0x00)
struct FCAPCampaignManagerConfigurationDTOWrapper {
	struct TArray<struct FCAPCampaignManagerConfigurationDTO> Configurations; // 0x00(0x10)
};

// ScriptStruct ShooterGame.CAPProgressionConfig
// Size: 0x50 (Inherited: 0x00)
struct FCAPProgressionConfig {
	struct FString Discriminator; // 0x00(0x10)
	struct FCAPProgressionConfigGroup Content; // 0x10(0x40)
};

// ScriptStruct ShooterGame.PatchNode
// Size: 0x80 (Inherited: 0x00)
struct FPatchNode {
	float FloorZ; // 0x00(0x04)
	float CeilingZ; // 0x04(0x04)
	float Distance; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector_NetQuantizeNormal Normal; // 0x10(0x18)
	char bEdgePoint : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	enum class ENodeStatus Status; // 0x29(0x01)
	int16_t ListIndex; // 0x2a(0x02)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TMap<struct FIntPoint, struct FVector> BlockedLocations; // 0x30(0x50)
};

// ScriptStruct ShooterGame.CellEdge
// Size: 0x68 (Inherited: 0x00)
struct FCellEdge {
	struct FVector Start; // 0x00(0x18)
	float StartDistance; // 0x18(0x04)
	struct FIntPoint StartPoint; // 0x1c(0x08)
	char pad_24[0x4]; // 0x24(0x04)
	struct FVector End; // 0x28(0x18)
	float EndDistance; // 0x40(0x04)
	struct FIntPoint EndPoint; // 0x44(0x08)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FVector OutsideDirection; // 0x50(0x18)
};

// ScriptStruct ShooterGame.NodeGrid
// Size: 0x38 (Inherited: 0x00)
struct FNodeGrid {
	struct FIntPoint Min; // 0x00(0x08)
	struct FIntPoint Max; // 0x08(0x08)
	float LowestNode; // 0x10(0x04)
	float HeighestNode; // 0x14(0x04)
	float MaxDistance; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FPatchNode> NodeArray; // 0x20(0x10)
	bool bPatchIsValid; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t LineSize; // 0x34(0x04)
};

// ScriptStruct ShooterGame.SortedNode
// Size: 0x10 (Inherited: 0x00)
struct FSortedNode {
	float Distance; // 0x00(0x04)
	struct FIntPoint Coords; // 0x04(0x08)
	char ZLevel; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct ShooterGame.CharacterHudDrawValues
// Size: 0x30 (Inherited: 0x00)
struct FCharacterHudDrawValues {
	struct UTexture* Icon; // 0x00(0x08)
	struct FLinearColor IconTint; // 0x08(0x10)
	int32_t Value; // 0x18(0x04)
	struct FLinearColor ValueTint; // 0x1c(0x10)
	int32_t MaxValue; // 0x2c(0x04)
};

// ScriptStruct ShooterGame.CharacterHUDUIDataStruct
// Size: 0x30 (Inherited: 0x00)
struct FCharacterHUDUIDataStruct {
	struct TSoftClassPtr<UObject> UIData; // 0x00(0x30)
};

// ScriptStruct ShooterGame.ChatFriendMetadata
// Size: 0x90 (Inherited: 0x00)
struct FChatFriendMetadata {
	struct FString DisplayGroup; // 0x00(0x10)
	struct FString GameName; // 0x10(0x10)
	struct FString GameTag; // 0x20(0x10)
	struct FString Group; // 0x30(0x10)
	struct FString Name; // 0x40(0x10)
	struct FString Note; // 0x50(0x10)
	struct FString Pid; // 0x60(0x10)
	struct FString Puuid; // 0x70(0x10)
	struct FString Region; // 0x80(0x10)
};

// ScriptStruct ShooterGame.ChatFriendMetadataUpdate
// Size: 0x30 (Inherited: 0x00)
struct FChatFriendMetadataUpdate {
	struct FString Puuid; // 0x00(0x10)
	struct FString Group; // 0x10(0x10)
	struct FString Note; // 0x20(0x10)
};

// ScriptStruct ShooterGame.ChatFriendMetadatas
// Size: 0x10 (Inherited: 0x00)
struct FChatFriendMetadatas {
	struct TArray<struct FChatFriendMetadata> Friends; // 0x00(0x10)
};

// ScriptStruct ShooterGame.Chronometer
// Size: 0x30 (Inherited: 0x00)
struct FChronometer {
	char pad_0[0x18]; // 0x00(0x18)
	float TimeElapsed; // 0x18(0x04)
	float WallTimeElapsed; // 0x1c(0x04)
	float TimeDilation; // 0x20(0x04)
	float LastBroadcastRate; // 0x24(0x04)
	bool bPaused; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ShooterGame.CinematicCameraDebugData
// Size: 0x170 (Inherited: 0x00)
struct FCinematicCameraDebugData {
	struct FCinematicCameraData CameraData; // 0x00(0xa0)
	struct FCinematicCameraScoreData ScoreData; // 0xa0(0xb0)
	struct FString CameraActorName; // 0x150(0x10)
	struct AActor* CameraActor; // 0x160(0x08)
	bool bIsDestroyed; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
};

// ScriptStruct ShooterGame.CinematicCameraScoreData
// Size: 0xb0 (Inherited: 0x00)
struct FCinematicCameraScoreData {
	struct FCinematicCameraData CameraData; // 0x00(0xa0)
	float Score; // 0xa0(0x04)
	float CameraToTargetDotProduct; // 0xa4(0x04)
	float DistanceFromCamera; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
};

// ScriptStruct ShooterGame.GroupAssignment
// Size: 0x80 (Inherited: 0x00)
struct FGroupAssignment {
	struct FString LayerName; // 0x00(0x10)
	struct FString ExperimentName; // 0x10(0x10)
	struct FString GroupName; // 0x20(0x10)
	struct TMap<struct FString, struct FString> Parameters; // 0x30(0x50)
};

// ScriptStruct ShooterGame.GetGroupAssignmentsResponse
// Size: 0x10 (Inherited: 0x00)
struct FGetGroupAssignmentsResponse {
	struct TArray<struct FGroupAssignment> GroupAssignments; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PerfSettings
// Size: 0x58 (Inherited: 0x00)
struct FPerfSettings {
	struct FString WindowMode; // 0x00(0x10)
	float FpsCap; // 0x10(0x04)
	int32_t VSyncMode; // 0x14(0x04)
	int32_t UserSelectedResolutionX; // 0x18(0x04)
	int32_t UserSelectedResolutionY; // 0x1c(0x04)
	int32_t DetailQuality; // 0x20(0x04)
	int32_t MaterialQuality; // 0x24(0x04)
	int32_t TextureQuality; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString AntiAliasing; // 0x30(0x10)
	int32_t ClarityEnabled; // 0x40(0x04)
	int32_t SharpenEnabled; // 0x44(0x04)
	int32_t CharacterOutlines; // 0x48(0x04)
	int32_t OneFrameLatency; // 0x4c(0x04)
	int32_t RGIInputLatencyEnabled; // 0x50(0x04)
	int32_t VariableRefreshRateEnabled; // 0x54(0x04)
};

// ScriptStruct ShooterGame.ClientEndOfRoundPerformanceProfile
// Size: 0xd58 (Inherited: 0x00)
struct FClientEndOfRoundPerformanceProfile {
	struct FMetric TotalFrameTime; // 0x00(0x1c)
	struct FMetric ProcessingTime; // 0x1c(0x1c)
	struct FAresSystemTelemetryMetrics SystemMetrics; // 0x38(0x850)
	struct FAresObjectMetrics ObjectMetrics; // 0x888(0x8c)
	struct FMetric GPUTime; // 0x914(0x1c)
	struct FGPUStats GPUStats; // 0x930(0x64)
	struct FClientFrameBuckets FrameBuckets; // 0x994(0x2c)
	struct FString MatchID; // 0x9c0(0x10)
	int32_t RoundNumber; // 0x9d0(0x04)
	char pad_9D4[0x4]; // 0x9d4(0x04)
	int64_t RoundDuration; // 0x9d8(0x08)
	struct FString InstanceId; // 0x9e0(0x10)
	struct FPerfSettings Settings; // 0x9f0(0x58)
	struct FMachinePerfStats MachinePerfStats; // 0xa48(0x8c)
	char MoveTimestepsPerSecond; // 0xad4(0x01)
	char pad_AD5[0x3]; // 0xad5(0x03)
	struct FNetworkPacketStats NetworkPacketStats; // 0xad8(0x64)
	char pad_B3C[0x4]; // 0xb3c(0x04)
	struct FNetworkLatencyStats NetworkLatencyStats; // 0xb40(0x78)
	struct FInputLatencyStats InputLatencyStats; // 0xbb8(0x15c)
	char pad_D14[0x4]; // 0xd14(0x04)
	struct FString Puuid; // 0xd18(0x10)
	struct FString Context; // 0xd28(0x10)
	struct FTelemetryPlatformInfo PlatformInfo; // 0xd38(0x20)
};

// ScriptStruct ShooterGame.TelemetryPlatformInfo
// Size: 0x20 (Inherited: 0x00)
struct FTelemetryPlatformInfo {
	struct FString PlatformType; // 0x00(0x10)
	struct FString PlatformOS; // 0x10(0x10)
};

// ScriptStruct ShooterGame.NetworkLatencyStats
// Size: 0x78 (Inherited: 0x00)
struct FNetworkLatencyStats {
	struct FMetric NetworkRTTms; // 0x00(0x1c)
	struct FPingBuckets NetworkRTTmsBuckets; // 0x1c(0x1c)
	struct FPacketDeltaTimeBuckets PacketDeltaTimeBuckets; // 0x38(0x1c)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString NetworkConnectionType; // 0x58(0x10)
	struct FString SimulatedNetworkDegradationPreset; // 0x68(0x10)
};

// ScriptStruct ShooterGame.PingBuckets
// Size: 0x1c (Inherited: 0x00)
struct FPingBuckets {
	int32_t Over200ms; // 0x00(0x04)
	int32_t Between100and200ms; // 0x04(0x04)
	int32_t Between50and100ms; // 0x08(0x04)
	int32_t Between35and50ms; // 0x0c(0x04)
	int32_t Between20and35ms; // 0x10(0x04)
	int32_t Between10and20ms; // 0x14(0x04)
	int32_t Below10ms; // 0x18(0x04)
};

// ScriptStruct ShooterGame.NetworkPacketStats
// Size: 0x64 (Inherited: 0x00)
struct FNetworkPacketStats {
	struct FMetric SentPacketSize; // 0x00(0x1c)
	uint32_t BytesSent; // 0x1c(0x04)
	uint32_t PacketsSent; // 0x20(0x04)
	uint32_t LostOutgoingPackets; // 0x24(0x04)
	uint32_t PacketsSentOutOfOrder; // 0x28(0x04)
	uint32_t PacketsSplit; // 0x2c(0x04)
	uint32_t PacketsOverSizeSoftLimit; // 0x30(0x04)
	uint32_t PacketsOverSizeHardLimit; // 0x34(0x04)
	struct FMetric ReceivedPacketSize; // 0x38(0x1c)
	uint32_t BytesReceived; // 0x54(0x04)
	uint32_t PacketsReceived; // 0x58(0x04)
	uint32_t LostIncomingPackets; // 0x5c(0x04)
	uint32_t PacketsReceivedOutOfOrder; // 0x60(0x04)
};

// ScriptStruct ShooterGame.ClientPerRoundPerformanceData
// Size: 0x9e0 (Inherited: 0x00)
struct FClientPerRoundPerformanceData {
	int64_t RoundDuration; // 0x00(0x08)
	int32_t RoundNumber; // 0x08(0x04)
	struct FMetric TotalFrameTime; // 0x0c(0x1c)
	struct FMetric ProcessingTime; // 0x28(0x1c)
	struct FAresSystemTelemetryMetrics SystemMetrics; // 0x44(0x850)
	struct FClientFrameBuckets FrameBuckets; // 0x894(0x2c)
	struct FMachinePerfStats MachinePerfStats; // 0x8c0(0x8c)
	struct FAresObjectMetrics ObjectMetrics; // 0x94c(0x8c)
	char MoveTimestepsPerSecond; // 0x9d8(0x01)
	char pad_9D9[0x7]; // 0x9d9(0x07)
};

// ScriptStruct ShooterGame.ClientFilteredPerformanceProfile
// Size: 0x160 (Inherited: 0x00)
struct FClientFilteredPerformanceProfile {
	struct TArray<struct FClientPerRoundPerformanceData> PerRoundPerformanceData; // 0x00(0x10)
	char GameplayFlagsFilter; // 0x10(0x01)
	bool IsCoachOrObserver; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct FString InstanceId; // 0x18(0x10)
	struct FString Subject; // 0x28(0x10)
	struct FString MatchID; // 0x38(0x10)
	struct FTelemetryPlatformInfo PlatformInfo; // 0x48(0x20)
	struct FClientHardwareInfo HardwareInfo; // 0x68(0xa0)
	struct FPerfSettings Settings; // 0x108(0x58)
};

// ScriptStruct ShooterGame.RemoteMoveQueueSizeBuckets
// Size: 0x18 (Inherited: 0x00)
struct FRemoteMoveQueueSizeBuckets {
	int32_t EmptyQueue; // 0x00(0x04)
	int32_t Between0and2; // 0x04(0x04)
	int32_t Between2and4; // 0x08(0x04)
	int32_t Between4and6; // 0x0c(0x04)
	int32_t Between6and8; // 0x10(0x04)
	int32_t Over8; // 0x14(0x04)
};

// ScriptStruct ShooterGame.MoveCorrectionSizeBuckets
// Size: 0x18 (Inherited: 0x00)
struct FMoveCorrectionSizeBuckets {
	int32_t LessThan10; // 0x00(0x04)
	int32_t Between10and50; // 0x04(0x04)
	int32_t Between50and100; // 0x08(0x04)
	int32_t Between100and200; // 0x0c(0x04)
	int32_t Between200and400; // 0x10(0x04)
	int32_t AtLeast400; // 0x14(0x04)
};

// ScriptStruct ShooterGame.ClientGameplaySystemSummary
// Size: 0x64 (Inherited: 0x00)
struct FClientGameplaySystemSummary {
	struct FMoveCorrectionSizeBuckets MoveCorrectionSizeBuckets; // 0x00(0x18)
	uint32_t EquippableCorrectionCount; // 0x18(0x04)
	uint32_t DroppedMoveEventCount; // 0x1c(0x04)
	float DroppedMoveEventMeanDuration; // 0x20(0x04)
	float DroppedMoveEventMaxDuration; // 0x24(0x04)
	uint32_t DroppedInputEventCount; // 0x28(0x04)
	float DroppedInputEventMeanDuration; // 0x2c(0x04)
	float DroppedInputEventMaxDuration; // 0x30(0x04)
	struct FRemoteMoveQueueSizeBuckets RemoteMoveQueueSizeBuckets; // 0x34(0x18)
	uint32_t RemoteForwardPredictEventCount; // 0x4c(0x04)
	float RemoteForwardPredictMeanDuration; // 0x50(0x04)
	float RemoteForwardPredictMaxDuration; // 0x54(0x04)
	float RemoteMoveProcessingDelayMean; // 0x58(0x04)
	float RemoteMoveProcessingDelayStdDeviation; // 0x5c(0x04)
	float RemoteMoveProcessingDelayP95; // 0x60(0x04)
};

// ScriptStruct ShooterGame.ClientGameplaySystemSummaryEvent
// Size: 0xe8 (Inherited: 0x00)
struct FClientGameplaySystemSummaryEvent {
	struct FString MatchID; // 0x00(0x10)
	struct FString Subject; // 0x10(0x10)
	struct FClientGameplaySystemSummary CombatData; // 0x20(0x64)
	struct FClientGameplaySystemSummary NonCombatData; // 0x84(0x64)
};

// ScriptStruct ShooterGame.ClientGameplaySystemTrackingData
// Size: 0xc8 (Inherited: 0x00)
struct FClientGameplaySystemTrackingData {
	char pad_0[0xc8]; // 0x00(0xc8)
};

// ScriptStruct ShooterGame.ClientRemoteClientTimingErrorEvent
// Size: 0x38 (Inherited: 0x00)
struct FClientRemoteClientTimingErrorEvent {
	struct FString MatchID; // 0x00(0x10)
	struct FString Subject; // 0x10(0x10)
	float MovementTimestampLocal; // 0x20(0x04)
	float MovementTimestampServer; // 0x24(0x04)
	int32_t TimeStampBasis; // 0x28(0x04)
	float SimulationTimeAvailable; // 0x2c(0x04)
	float SyncedSimulationTimeAvailable; // 0x30(0x04)
	bool HaveProcessedAnyMove; // 0x34(0x01)
	bool HasBasis; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
};

// ScriptStruct ShooterGame.MidMatchNetworkFailureDetails
// Size: 0x18 (Inherited: 0x00)
struct FMidMatchNetworkFailureDetails {
	bool bIsValid; // 0x00(0x01)
	enum class ENetworkFailure FailureType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString MatchID; // 0x08(0x10)
};

// ScriptStruct ShooterGame.MidMatchCrashDetails
// Size: 0x18 (Inherited: 0x00)
struct FMidMatchCrashDetails {
	bool bIsValid; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString MatchID; // 0x08(0x10)
};

// ScriptStruct ShooterGame.ClientTelemetryPeristenceData
// Size: 0x30 (Inherited: 0x00)
struct FClientTelemetryPeristenceData {
	struct FMidMatchNetworkFailureDetails LastMidMatchNetworkFailureDetails; // 0x00(0x18)
	struct FMidMatchCrashDetails LastMidMatchCrashDetails; // 0x18(0x18)
};

// ScriptStruct ShooterGame.UINotification
// Size: 0x20 (Inherited: 0x00)
struct FUINotification {
	struct FString Title; // 0x00(0x10)
	struct FString Message; // 0x10(0x10)
};

// ScriptStruct ShooterGame.CNHopeNotification
// Size: 0x48 (Inherited: 0x00)
struct FCNHopeNotification {
	enum class ECNPolicyType PolicyTypeEnum; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString PolicyType; // 0x08(0x10)
	struct FString HopeTitle; // 0x18(0x10)
	struct FString HopeMessage; // 0x28(0x10)
	int64_t LogoutTime; // 0x38(0x08)
	int64_t SecondsToLogoutTime; // 0x40(0x08)
};

// ScriptStruct ShooterGame.RoundReports
// Size: 0x18 (Inherited: 0x00)
struct FRoundReports {
	int32_t RoundNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FCharacterCombatReport> Reports; // 0x08(0x10)
};

// ScriptStruct ShooterGame.CharacterCombatReport
// Size: 0x88 (Inherited: 0x00)
struct FCharacterCombatReport {
	int32_t RoundNumber; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FRoundTimestamp LastInteractionTime; // 0x08(0x18)
	struct TArray<struct FParticipantInteractions> Interactions; // 0x20(0x10)
	struct FCombatReportRespawnInfo RespawnInfo; // 0x30(0x20)
	struct FCombatReportDeathDetails DeathDetails; // 0x50(0x38)
};

// ScriptStruct ShooterGame.CombatReportDeathDetails
// Size: 0x38 (Inherited: 0x00)
struct FCombatReportDeathDetails {
	bool bDied; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVector DeathLocation; // 0x08(0x18)
	struct FRoundTimestamp DeathTime; // 0x20(0x18)
};

// ScriptStruct ShooterGame.RoundTimestamp
// Size: 0x18 (Inherited: 0x00)
struct FRoundTimestamp {
	struct UGameStateHUDConfig* HUDConfig; // 0x00(0x08)
	float StateRemainingTime; // 0x08(0x04)
	float GameTime; // 0x0c(0x04)
	enum class EAresGamePhase GamePhase; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.CombatReportRespawnInfo
// Size: 0x20 (Inherited: 0x00)
struct FCombatReportRespawnInfo {
	struct AShooterPlayerState* ResurrectorPlayerState; // 0x00(0x08)
	struct FRoundTimestamp RespawnTime; // 0x08(0x18)
};

// ScriptStruct ShooterGame.ParticipantInteractions
// Size: 0x90 (Inherited: 0x00)
struct FParticipantInteractions {
	struct FString ParticipantSubject; // 0x00(0x10)
	struct FName ParticipantTeamName; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UTexture* ParticipantCharacterIcon; // 0x20(0x08)
	struct FRoundTimestamp LastInteractionTime; // 0x28(0x18)
	float DamageDealt; // 0x40(0x04)
	int32_t HitsDealt; // 0x44(0x04)
	float DamageRecieved; // 0x48(0x04)
	int32_t HitsRecieved; // 0x4c(0x04)
	bool bDidKill; // 0x50(0x01)
	enum class EAresAssistType AssistType; // 0x51(0x01)
	char pad_52[0x6]; // 0x52(0x06)
	struct AShooterPlayerState* ParticipantsKillerState; // 0x58(0x08)
	bool bWasKiller; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TArray<struct FCombatInteraction> DealtIteractions; // 0x68(0x10)
	struct TArray<struct FCombatInteraction> ReceivedInteractions; // 0x78(0x10)
	int32_t CombatReportIndex; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct ShooterGame.CombatInteraction
// Size: 0x68 (Inherited: 0x00)
struct FCombatInteraction {
	struct FRoundTimestamp StartTime; // 0x00(0x18)
	struct FRoundTimestamp EndTime; // 0x18(0x18)
	struct UShooterDamageType* DamageType; // 0x30(0x08)
	struct TArray<struct FNonRegionalDamageInteraction> NonRegionalDamageInteractions; // 0x38(0x10)
	struct TArray<struct FRegionalDamageInteraction> RegionalDamageInteractions; // 0x48(0x10)
	struct TArray<struct FNonRegionalDamageInteraction> BlockedDamageInteractions; // 0x58(0x10)
};

// ScriptStruct ShooterGame.NonRegionalDamageInteraction
// Size: 0x20 (Inherited: 0x00)
struct FNonRegionalDamageInteraction {
	struct UCombatReportDamagedDisplayConfig* DamagedDisplayConfig; // 0x00(0x08)
	int32_t Hits; // 0x08(0x04)
	float Damage; // 0x0c(0x04)
	bool bIsWallPen; // 0x10(0x01)
	bool bIsKill; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct AAresItem* DestroyedArmor; // 0x18(0x08)
};

// ScriptStruct ShooterGame.RegionalDamageInteraction
// Size: 0x18 (Inherited: 0x00)
struct FRegionalDamageInteraction {
	enum class EAresRegionalDamage Region; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Hits; // 0x04(0x04)
	float Damage; // 0x08(0x04)
	bool bIsWallPen; // 0x0c(0x01)
	bool bIsKill; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct AAresItem* DestroyedArmor; // 0x10(0x08)
};

// ScriptStruct ShooterGame.RoundReportEventDeferral
// Size: 0x10 (Inherited: 0x00)
struct FRoundReportEventDeferral {
	char DeferralFlag; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct AShooterPlayerState* TargetPlayerState; // 0x08(0x08)
};

// ScriptStruct ShooterGame.RoundReportEvents
// Size: 0x18 (Inherited: 0x00)
struct FRoundReportEvents {
	int32_t RoundNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct URoundReportEvent*> Events; // 0x08(0x10)
};

// ScriptStruct ShooterGame.CombatReportTrackingConfig
// Size: 0x10 (Inherited: 0x00)
struct FCombatReportTrackingConfig {
	struct UCombatReportDamagedDisplayConfig* DamagedDisplayConfig; // 0x00(0x08)
	char bTrackParticipantkHits : 1; // 0x08(0x01)
	char bTrackParticipantDamage : 1; // 0x08(0x01)
	char bTrackInteractionHits : 1; // 0x08(0x01)
	char bTrackInteractionDamage : 1; // 0x08(0x01)
	char bTrackDamagedRegionally : 1; // 0x08(0x01)
	char bTrackArmorBreaks : 1; // 0x08(0x01)
	char pad_8_6 : 2; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ShooterGame.ScoreKillData
// Size: 0x48 (Inherited: 0x00)
struct FScoreKillData {
	struct AOwnerExclusivePlayerInfo* VictimPlayerInfo; // 0x00(0x08)
	struct UDamageResponse* Response; // 0x08(0x08)
	int32_t KillPoints; // 0x10(0x04)
	char pad_14[0x24]; // 0x14(0x24)
	struct AOwnerExclusivePlayerInfo* KillerPlayerInfo; // 0x38(0x08)
	bool bWasHeadshot; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct ShooterGame.CompetitiveTierData
// Size: 0x88 (Inherited: 0x08)
struct FCompetitiveTierData : FTableRowBase {
	int32_t Tier; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText TierName; // 0x10(0x18)
	enum class ECompetitiveDivision Division; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	struct FText DivisionName; // 0x30(0x18)
	struct FLinearColor Color; // 0x48(0x10)
	struct FLinearColor BackgroundColor; // 0x58(0x10)
	struct UTexture* IconTextureSmall; // 0x68(0x08)
	struct UTexture* IconTextureLarge; // 0x70(0x08)
	struct UTexture* IconRankTriangleUp; // 0x78(0x08)
	struct UTexture* IconRankTriangleDown; // 0x80(0x08)
};

// ScriptStruct ShooterGame.CompetitiveSeasonConfig
// Size: 0x78 (Inherited: 0x00)
struct FCompetitiveSeasonConfig {
	int32_t SeasonRankIndex; // 0x00(0x04)
	int32_t SeasonTopWinsMaximum; // 0x04(0x04)
	int32_t WinsNeededForSeasonRank; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<int32_t, int32_t> PlacementTierAdjustments; // 0x10(0x50)
	int32_t PlacementMaxTier; // 0x60(0x04)
	int32_t PlacementProgress; // 0x64(0x04)
	float LeaderboardRankRatingResetValue; // 0x68(0x04)
	float NewSeasonMinVariance; // 0x6c(0x04)
	int32_t SeasonGamesToShowSkill; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
};

// ScriptStruct ShooterGame.CompetitiveSeasonArchives
// Size: 0x40 (Inherited: 0x00)
struct FCompetitiveSeasonArchives {
	struct TArray<struct TSoftClassPtr<UObject>> Archives; // 0x00(0x10)
	struct TSoftClassPtr<UObject> CompleteMasteryArchive; // 0x10(0x30)
};

// ScriptStruct ShooterGame.ComponentDataStream
// Size: 0x18 (Inherited: 0x00)
struct FComponentDataStream {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ShooterGame.ConcatenatedListModel_Entry
// Size: 0x18 (Inherited: 0x00)
struct FConcatenatedListModel_Entry {
	struct TScriptInterface<IOrderedListModel> ListModel; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct ShooterGame.ConcatenatedListModel_MapIndexOuterToInnerResult
// Size: 0x18 (Inherited: 0x00)
struct FConcatenatedListModel_MapIndexOuterToInnerResult {
	struct TScriptInterface<IOrderedListModel> ListModel; // 0x00(0x10)
	int32_t ListModelIndex; // 0x10(0x04)
	int32_t ListItemIndex; // 0x14(0x04)
};

// ScriptStruct ShooterGame.ConfigDTO
// Size: 0x58 (Inherited: 0x00)
struct FConfigDTO {
	char pad_0[0x50]; // 0x00(0x50)
	struct FDateTime LastApplication; // 0x50(0x08)
};

// ScriptStruct ShooterGame.FoWDatabaseEntry
// Size: 0x28 (Inherited: 0x00)
struct FFoWDatabaseEntry {
	struct AActor* Subject; // 0x00(0x08)
	enum class EFoWRelevancyResult FoWStatus; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
	struct FVector ActorLocation; // 0x10(0x18)
};

// ScriptStruct ShooterGame.CheatEntry
// Size: 0x18 (Inherited: 0x00)
struct FCheatEntry {
	struct FString CheatCommand; // 0x00(0x10)
	enum class ECheatEntryType CheatEntryType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.Criterion
// Size: 0x20 (Inherited: 0x00)
struct FCriterion {
	struct FString FilterGroup; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PlatformInfo
// Size: 0x20 (Inherited: 0x00)
struct FPlatformInfo {
	struct FString PlatformType; // 0x00(0x10)
	struct FString PlatformOS; // 0x10(0x10)
};

// ScriptStruct ShooterGame.FiltersActionEvent
// Size: 0x60 (Inherited: 0x00)
struct FFiltersActionEvent {
	struct FString Subject; // 0x00(0x10)
	struct FString Screen; // 0x10(0x10)
	struct FString ActionType; // 0x20(0x10)
	struct TArray<struct FCriterion> ActiveCriteria; // 0x30(0x10)
	struct FPlatformInfo PlatformInfo; // 0x40(0x20)
};

// ScriptStruct ShooterGame.EquippableAttachmentData
// Size: 0x30 (Inherited: 0x00)
struct FEquippableAttachmentData {
	struct FPrimaryAssetId AttachmentId; // 0x00(0x18)
	struct FGuid SocketUuid; // 0x18(0x10)
	struct UEquippableAttachmentDataAsset* DataAsset; // 0x28(0x08)
};

// ScriptStruct ShooterGame.EquippableSkinChromaData
// Size: 0x30 (Inherited: 0x00)
struct FEquippableSkinChromaData {
	struct FPrimaryAssetId EquippableSkinChromaId; // 0x00(0x18)
	struct FGuid ParentSkinId; // 0x18(0x10)
	struct UEquippableSkinChromaDataAsset* DataAsset; // 0x28(0x08)
};

// ScriptStruct ShooterGame.ThemeData
// Size: 0x70 (Inherited: 0x00)
struct FThemeData {
	struct FPrimaryAssetId ThemeID; // 0x00(0x18)
	struct UThemeDataAsset* DataAsset; // 0x18(0x08)
	struct TSet<struct FGuid> EquippableSkins; // 0x20(0x50)
};

// ScriptStruct ShooterGame.EquippableSkinLevelData
// Size: 0x48 (Inherited: 0x00)
struct FEquippableSkinLevelData {
	struct FPrimaryAssetId EquippableSkinLevelId; // 0x00(0x18)
	struct FGuid ParentSkinId; // 0x18(0x10)
	struct FGuid ServiceId; // 0x28(0x10)
	int32_t Level; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct UEquippableSkinLevelDataAsset* DataAsset; // 0x40(0x08)
};

// ScriptStruct ShooterGame.EquippableSkinData
// Size: 0xd0 (Inherited: 0x00)
struct FEquippableSkinData {
	struct FPrimaryAssetId EquippableSkinId; // 0x00(0x18)
	struct TSet<struct FGuid> EquippableSkinChromas; // 0x18(0x50)
	struct TSet<struct FGuid> EquippableSkinLevels; // 0x68(0x50)
	struct FGuid EquippableServiceId; // 0xb8(0x10)
	struct UEquippableSkinDataAsset* DataAsset; // 0xc8(0x08)
};

// ScriptStruct ShooterGame.EquippableData
// Size: 0xa8 (Inherited: 0x00)
struct FEquippableData {
	struct TSet<struct FGuid> EquippableAttachments; // 0x00(0x50)
	struct TSet<struct FGuid> EquippableSkins; // 0x50(0x50)
	struct UEquippableDataAsset* DataAsset; // 0xa0(0x08)
};

// ScriptStruct ShooterGame.SocketData
// Size: 0x08 (Inherited: 0x00)
struct FSocketData {
	struct USocketDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.SprayData
// Size: 0x58 (Inherited: 0x00)
struct FSprayData {
	struct USprayDataAsset* DataAsset; // 0x00(0x08)
	struct TSet<struct FGuid> SprayLevels; // 0x08(0x50)
};

// ScriptStruct ShooterGame.SprayLevelData
// Size: 0x38 (Inherited: 0x00)
struct FSprayLevelData {
	struct USprayLevelDataAsset* DataAsset; // 0x00(0x08)
	struct FPrimaryAssetId SprayLevelId; // 0x08(0x18)
	struct FGuid ServiceId; // 0x20(0x10)
	int32_t Level; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.SprayEquipSlotData
// Size: 0x08 (Inherited: 0x00)
struct FSprayEquipSlotData {
	struct USprayEquipSlotDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.CharacterRoleData
// Size: 0x08 (Inherited: 0x00)
struct FCharacterRoleData {
	struct UCharacterRoleDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.CharacterData
// Size: 0x78 (Inherited: 0x00)
struct FCharacterData {
	struct UCharacterDataAsset* DataAsset; // 0x00(0x08)
	char pad_8[0x70]; // 0x08(0x70)
};

// ScriptStruct ShooterGame.MapData
// Size: 0x08 (Inherited: 0x00)
struct FMapData {
	struct UMapDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.GameModeData
// Size: 0x08 (Inherited: 0x00)
struct FGameModeData {
	struct UGameModeDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.CurrencyData
// Size: 0x08 (Inherited: 0x00)
struct FCurrencyData {
	struct UCurrencyDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.JuiceBoxData
// Size: 0x08 (Inherited: 0x00)
struct FJuiceBoxData {
	struct UJuiceBoxDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.EquippableCharmData
// Size: 0x58 (Inherited: 0x00)
struct FEquippableCharmData {
	struct UEquippableCharmDataAsset* DataAsset; // 0x00(0x08)
	struct TSet<struct FGuid> EquippableCharmLevels; // 0x08(0x50)
};

// ScriptStruct ShooterGame.EquippableCharmLevelData
// Size: 0x38 (Inherited: 0x00)
struct FEquippableCharmLevelData {
	struct UEquippableCharmLevelDataAsset* DataAsset; // 0x00(0x08)
	struct FPrimaryAssetId EquippableCharmLevelId; // 0x08(0x18)
	struct FGuid ServiceId; // 0x20(0x10)
	int32_t Level; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.PlayerCardData
// Size: 0x08 (Inherited: 0x00)
struct FPlayerCardData {
	struct UPlayerCardDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.MissionData
// Size: 0x08 (Inherited: 0x00)
struct FMissionData {
	struct UMissionDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.ObjectiveData
// Size: 0x08 (Inherited: 0x00)
struct FObjectiveData {
	struct UObjectiveDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.StorefrontItemData
// Size: 0x30 (Inherited: 0x00)
struct FStorefrontItemData {
	struct UStorefrontItemDataAsset* DataAsset; // 0x00(0x08)
	struct FPrimaryAssetId StorefrontItemId; // 0x08(0x18)
	struct FGuid ServiceId; // 0x20(0x10)
};

// ScriptStruct ShooterGame.ArmorData
// Size: 0x08 (Inherited: 0x00)
struct FArmorData {
	struct UArmorDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.PlayerTitleData
// Size: 0x30 (Inherited: 0x00)
struct FPlayerTitleData {
	struct UPlayerTitleDataAsset* DataAsset; // 0x00(0x08)
	struct FPrimaryAssetId PlayerTitleId; // 0x08(0x18)
	struct FGuid ServiceId; // 0x20(0x10)
};

// ScriptStruct ShooterGame.ContractV2Data
// Size: 0x18 (Inherited: 0x00)
struct FContractV2Data {
	struct UContractDataAssetV2* DataAsset; // 0x00(0x08)
	struct FGuid ServiceId; // 0x08(0x10)
};

// ScriptStruct ShooterGame.ContentTierData
// Size: 0x18 (Inherited: 0x00)
struct FContentTierData {
	struct UContentTierDataAsset* DataAsset; // 0x00(0x08)
	struct FGuid ServiceId; // 0x08(0x10)
};

// ScriptStruct ShooterGame.ContentEditionData
// Size: 0x18 (Inherited: 0x00)
struct FContentEditionData {
	struct UContentEditionDataAsset* DataAsset; // 0x00(0x08)
	struct FGuid ServiceId; // 0x08(0x10)
};

// ScriptStruct ShooterGame.SeasonData
// Size: 0x08 (Inherited: 0x00)
struct FSeasonData {
	struct USeasonDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.SubscriptionData
// Size: 0x08 (Inherited: 0x00)
struct FSubscriptionData {
	struct USubscriptionDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.CompetitiveSeasonData
// Size: 0x08 (Inherited: 0x00)
struct FCompetitiveSeasonData {
	struct UCompetitiveSeasonDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.PremierSeasonData
// Size: 0x08 (Inherited: 0x00)
struct FPremierSeasonData {
	struct UPremierSeasonDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.PremierConferenceData
// Size: 0x08 (Inherited: 0x00)
struct FPremierConferenceData {
	struct UPremierConferenceDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.ActRankBorderData
// Size: 0x18 (Inherited: 0x00)
struct FActRankBorderData {
	struct UActRankBorderDataAsset* DataAsset; // 0x00(0x08)
	struct FGuid ServiceId; // 0x08(0x10)
};

// ScriptStruct ShooterGame.StreamedVideoData
// Size: 0x18 (Inherited: 0x00)
struct FStreamedVideoData {
	struct UStreamedVideoDataAsset* DataAsset; // 0x00(0x08)
	struct FGuid ServiceId; // 0x08(0x10)
};

// ScriptStruct ShooterGame.MatchmakingQueueData
// Size: 0x18 (Inherited: 0x00)
struct FMatchmakingQueueData {
	struct UMatchmakingQueueDataAsset* DataAsset; // 0x00(0x08)
	struct FGuid ServiceId; // 0x08(0x10)
};

// ScriptStruct ShooterGame.LevelBorderData
// Size: 0x18 (Inherited: 0x00)
struct FLevelBorderData {
	struct ULevelBorderDataAsset* DataAsset; // 0x00(0x08)
	struct FGuid ServiceId; // 0x08(0x10)
};

// ScriptStruct ShooterGame.TournamentsTeamIconData
// Size: 0x08 (Inherited: 0x00)
struct FTournamentsTeamIconData {
	struct UTournamentsTeamIconDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.TotemData
// Size: 0x08 (Inherited: 0x00)
struct FTotemData {
	struct UTotemDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.ExpressionData
// Size: 0x08 (Inherited: 0x00)
struct FExpressionData {
	struct UAresBasePrimaryDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.ExpressionEquipSlotData
// Size: 0x08 (Inherited: 0x00)
struct FExpressionEquipSlotData {
	struct UExpressionEquipSlotDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.DynamicContentData
// Size: 0x08 (Inherited: 0x00)
struct FDynamicContentData {
	struct UDynamicContentDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.DynamicParamData
// Size: 0x08 (Inherited: 0x00)
struct FDynamicParamData {
	struct UDynamicParamDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.DynamicOptionData
// Size: 0x08 (Inherited: 0x00)
struct FDynamicOptionData {
	struct UDynamicOptionDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.AresEventData
// Size: 0x18 (Inherited: 0x00)
struct FAresEventData {
	struct UEventDataAsset* DataAsset; // 0x00(0x08)
	struct FGuid ServiceId; // 0x08(0x10)
};

// ScriptStruct ShooterGame.MassRewardsCeremonyData
// Size: 0x08 (Inherited: 0x00)
struct FMassRewardsCeremonyData {
	struct UMassRewardsCeremonyDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.ArchiveData
// Size: 0x08 (Inherited: 0x00)
struct FArchiveData {
	struct UArchiveDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.AccoladeData
// Size: 0x08 (Inherited: 0x00)
struct FAccoladeData {
	struct UAccoladeDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.TipData
// Size: 0x08 (Inherited: 0x00)
struct FTipData {
	struct UTipDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.BTEData
// Size: 0x08 (Inherited: 0x00)
struct FBTEData {
	struct UBTEDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.AchievementData
// Size: 0x08 (Inherited: 0x00)
struct FAchievementData {
	struct UPowderedToastDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.EsportsTeamData
// Size: 0x08 (Inherited: 0x00)
struct FEsportsTeamData {
	struct UEsportsTeamDataAsset* DataAsset; // 0x00(0x08)
};

// ScriptStruct ShooterGame.EquippableAttachmentHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FEquippableAttachmentHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
};

// ScriptStruct ShooterGame.EquippableSkinChromaHandleLoadOptions
// Size: 0x03 (Inherited: 0x00)
struct FEquippableSkinChromaHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
	bool bLoadSidegradeModel; // 0x01(0x01)
	bool bLoadStreamedVideo; // 0x02(0x01)
};

// ScriptStruct ShooterGame.EquippableSkinLevelHandleLoadOptions
// Size: 0x03 (Inherited: 0x00)
struct FEquippableSkinLevelHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
	bool bLoadMenuFXC; // 0x01(0x01)
	bool bLoadStreamedVideo; // 0x02(0x01)
};

// ScriptStruct ShooterGame.EquippableSkinHandleLoadOptions
// Size: 0x10 (Inherited: 0x00)
struct FEquippableSkinHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
	bool bLoadLevels; // 0x01(0x01)
	bool bLoadEquippedLevel; // 0x02(0x01)
	struct FEquippableSkinLevelHandleLoadOptions LevelLoadOptions; // 0x03(0x03)
	bool bLoadChromas; // 0x06(0x01)
	bool bLoadEquippedChroma; // 0x07(0x01)
	bool bLoadDefaultChroma; // 0x08(0x01)
	struct FEquippableSkinChromaHandleLoadOptions ChromaLoadOptions; // 0x09(0x03)
	bool bLoadTheme; // 0x0c(0x01)
	bool bLoadContentTier; // 0x0d(0x01)
	bool bLoadContentEdition; // 0x0e(0x01)
	bool bLoadWallpaper; // 0x0f(0x01)
};

// ScriptStruct ShooterGame.ThemeHandleLoadOptions
// Size: 0x11 (Inherited: 0x00)
struct FThemeHandleLoadOptions {
	bool bLoadEquippableSkins; // 0x00(0x01)
	struct FEquippableSkinHandleLoadOptions EquippableSkinLoadOptions; // 0x01(0x10)
};

// ScriptStruct ShooterGame.EquippableCharmLevelHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FEquippableCharmLevelHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
};

// ScriptStruct ShooterGame.EquippableCharmHandleLoadOptions
// Size: 0x03 (Inherited: 0x00)
struct FEquippableCharmHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
	bool bLoadLevels; // 0x01(0x01)
	struct FEquippableCharmLevelHandleLoadOptions LevelLoadOptions; // 0x02(0x01)
};

// ScriptStruct ShooterGame.EquippableCharmInstanceHandleLoadOptions
// Size: 0x05 (Inherited: 0x00)
struct FEquippableCharmInstanceHandleLoadOptions {
	bool bLoadCurrentLevel; // 0x00(0x01)
	struct FEquippableCharmHandleLoadOptions CharmLoadOptions; // 0x01(0x03)
	struct FEquippableCharmLevelHandleLoadOptions LevelLoadOptions; // 0x04(0x01)
};

// ScriptStruct ShooterGame.EquippableHandleLoadOptions
// Size: 0x1b (Inherited: 0x00)
struct FEquippableHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
	bool bLoadSkins; // 0x01(0x01)
	bool bLoadEquippedSkin; // 0x02(0x01)
	struct FEquippableSkinHandleLoadOptions SkinLoadOptions; // 0x03(0x10)
	bool bLoadAttachments; // 0x13(0x01)
	struct FEquippableAttachmentHandleLoadOptions AttachmentLoadOptions; // 0x14(0x01)
	bool bLoadEquippedCharmInstance; // 0x15(0x01)
	struct FEquippableCharmInstanceHandleLoadOptions CharmInstanceLoadOptions; // 0x16(0x05)
};

// ScriptStruct ShooterGame.SprayLevelHandleLoadOptions
// Size: 0x02 (Inherited: 0x00)
struct FSprayLevelHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
	bool bLoadSprayActor; // 0x01(0x01)
};

// ScriptStruct ShooterGame.SprayHandleLoadOptions
// Size: 0x04 (Inherited: 0x00)
struct FSprayHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
	bool bLoadLevels; // 0x01(0x01)
	struct FSprayLevelHandleLoadOptions LevelLoadOptions; // 0x02(0x02)
};

// ScriptStruct ShooterGame.SprayEquipSlotHandleLoadOptions
// Size: 0x06 (Inherited: 0x00)
struct FSprayEquipSlotHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
	bool bLoadEquippedSpray; // 0x01(0x01)
	struct FSprayHandleLoadOptions SprayLoadOptions; // 0x02(0x04)
};

// ScriptStruct ShooterGame.TotemHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FTotemHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
};

// ScriptStruct ShooterGame.ExpressionHandleLoadOptions
// Size: 0x05 (Inherited: 0x00)
struct FExpressionHandleLoadOptions {
	struct FSprayHandleLoadOptions SprayLoadOptions; // 0x00(0x04)
	struct FTotemHandleLoadOptions TotemLoadOptions; // 0x04(0x01)
};

// ScriptStruct ShooterGame.ExpressionEquipSlotHandleLoadOptions
// Size: 0x07 (Inherited: 0x00)
struct FExpressionEquipSlotHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
	bool bLoadEquippedExpressionItem; // 0x01(0x01)
	struct FSprayHandleLoadOptions SprayLoadOptions; // 0x02(0x04)
	struct FTotemHandleLoadOptions TotemLoadOptions; // 0x06(0x01)
};

// ScriptStruct ShooterGame.CharacterRoleHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FCharacterRoleHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.ContractV2HandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FContractV2HandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.AresEventHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FAresEventHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.CharacterHandleLoadOptions
// Size: 0x07 (Inherited: 0x00)
struct FCharacterHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
	bool bLoadCharacterRole; // 0x01(0x01)
	bool bLoadContract; // 0x02(0x01)
	bool bLoadFullPortrait; // 0x03(0x01)
	bool bLoadCharacterBackground; // 0x04(0x01)
	struct FCharacterRoleHandleLoadOptions CharacterRoleLoadOption; // 0x05(0x01)
	struct FContractV2HandleLoadOptions ContractLoadOptions; // 0x06(0x01)
};

// ScriptStruct ShooterGame.CurrencyHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FCurrencyHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
};

// ScriptStruct ShooterGame.JuiceBoxHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FJuiceBoxHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
};

// ScriptStruct ShooterGame.MapHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FMapHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.GameModeHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FGameModeHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.MatchmakingQueueHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FMatchmakingQueueHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.PlayerCardHandleLoadOptions
// Size: 0x08 (Inherited: 0x00)
struct FPlayerCardHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
	bool bLoadLargePlayerCardWidget; // 0x01(0x01)
	bool bLoadLargeArt; // 0x02(0x01)
	bool bLoadWideArt; // 0x03(0x01)
	bool bLoadSmallArt; // 0x04(0x01)
	bool bLoadLargeMaterialInterface; // 0x05(0x01)
	bool bLoadWideMaterialInterface; // 0x06(0x01)
	bool bLoadSmallMaterialInterface; // 0x07(0x01)
};

// ScriptStruct ShooterGame.StorefrontItemHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FStorefrontItemHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.ObjectiveHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FObjectiveHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.MissionHandleLoadOptions
// Size: 0x02 (Inherited: 0x00)
struct FMissionHandleLoadOptions {
	bool bLoadObjectives; // 0x00(0x01)
	struct FObjectiveHandleLoadOptions ObjectiveLoadOptions; // 0x01(0x01)
};

// ScriptStruct ShooterGame.ArmorHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FArmorHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.PlayerTitleHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FPlayerTitleHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
};

// ScriptStruct ShooterGame.ContentTierHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FContentTierHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.ContentEditionHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FContentEditionHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.ActRankBorderHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FActRankBorderHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.SubscriptionHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FSubscriptionHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.SeasonHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FSeasonHandleLoadOptions {
	bool bLoadParentSeason; // 0x00(0x01)
};

// ScriptStruct ShooterGame.CompetitiveSeasonHandleLoadOptions
// Size: 0x02 (Inherited: 0x00)
struct FCompetitiveSeasonHandleLoadOptions {
	bool bLoadBorders; // 0x00(0x01)
	struct FActRankBorderHandleLoadOptions ActRankBorderHandleLoadOptions; // 0x01(0x01)
};

// ScriptStruct ShooterGame.PremierSeasonHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FPremierSeasonHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.PremierConferenceHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FPremierConferenceHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.LevelBorderHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FLevelBorderHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.TournamentsTeamIconHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FTournamentsTeamIconHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.BTEHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FBTEHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.MassRewardsCeremonyHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FMassRewardsCeremonyHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.EsportsTeamHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FEsportsTeamHandleLoadOptions {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.BaseHandleLoadOptions
// Size: 0x01 (Inherited: 0x00)
struct FBaseHandleLoadOptions {
	bool bLoadInventoryModel; // 0x00(0x01)
};

// ScriptStruct ShooterGame.SeasonServiceTimes
// Size: 0x10 (Inherited: 0x00)
struct FSeasonServiceTimes {
	struct FDateTime StartTime; // 0x00(0x08)
	struct FDateTime EndTime; // 0x08(0x08)
};

// ScriptStruct ShooterGame.ContentDTO
// Size: 0x38 (Inherited: 0x00)
struct FContentDTO {
	struct FString Name; // 0x00(0x10)
	struct FString AssetName; // 0x10(0x10)
	struct FString ID; // 0x20(0x10)
	bool IsEnabled; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct ShooterGame.SeasonDTO
// Size: 0x48 (Inherited: 0x00)
struct FSeasonDTO {
	struct FString ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString Type; // 0x20(0x10)
	struct FDateTime StartTime; // 0x30(0x08)
	struct FDateTime EndTime; // 0x38(0x08)
	bool IsEnabled; // 0x40(0x01)
	bool IsActive; // 0x41(0x01)
	bool DevelopmentOnly; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
};

// ScriptStruct ShooterGame.EventDTO
// Size: 0x48 (Inherited: 0x00)
struct FEventDTO {
	struct FString ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString Type; // 0x20(0x10)
	struct FDateTime StartTime; // 0x30(0x08)
	struct FDateTime EndTime; // 0x38(0x08)
	bool IsEnabled; // 0x40(0x01)
	bool IsActive; // 0x41(0x01)
	bool DevelopmentOnly; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
};

// ScriptStruct ShooterGame.ContentListingDTO
// Size: 0x10 (Inherited: 0x00)
struct FContentListingDTO {
	struct TArray<struct FContentDTO> Content; // 0x00(0x10)
};

// ScriptStruct ShooterGame.FullContentListingDTO
// Size: 0x30 (Inherited: 0x00)
struct FFullContentListingDTO {
	struct TArray<struct FSeasonDTO> Seasons; // 0x00(0x10)
	struct TArray<struct FEventDTO> Events; // 0x10(0x10)
	struct TArray<struct FString> DisabledIDs; // 0x20(0x10)
};

// ScriptStruct ShooterGame.BaseUIData
// Size: 0x38 (Inherited: 0x00)
struct FBaseUIData {
	struct FText DisplayName; // 0x00(0x18)
	struct UTexture* DisplayIcon; // 0x18(0x08)
	struct FText DisplayTooltipTextLocalized; // 0x20(0x18)
};

// ScriptStruct ShooterGame.TipClassesSet
// Size: 0x50 (Inherited: 0x00)
struct FTipClassesSet {
	struct TSet<struct ATip*> TipClasses; // 0x00(0x50)
};

// ScriptStruct ShooterGame.ContractDataAssetV2Level
// Size: 0x20 (Inherited: 0x00)
struct FContractDataAssetV2Level {
	struct UEditableReward* Reward; // 0x00(0x08)
	uint32_t XP; // 0x08(0x04)
	uint32_t VPCost; // 0x0c(0x04)
	bool bPurchasableWithVP; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	uint32_t DoughCost; // 0x14(0x04)
	bool bPurchasableWithDough; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ShooterGame.ContractDataAssetV2Chapter
// Size: 0x18 (Inherited: 0x00)
struct FContractDataAssetV2Chapter {
	char pad_0[0x8]; // 0x00(0x08)
	struct TArray<struct FContractDataAssetV2Level> Levels; // 0x08(0x10)
};

// ScriptStruct ShooterGame.ContractDataAssetV2SpecialChapter
// Size: 0x18 (Inherited: 0x18)
struct FContractDataAssetV2SpecialChapter : FContractDataAssetV2Chapter {
};

// ScriptStruct ShooterGame.ContractDataAssetV2StoryChapter
// Size: 0x30 (Inherited: 0x18)
struct FContractDataAssetV2StoryChapter : FContractDataAssetV2Chapter {
	struct TArray<struct UEditableReward*> FreeChapterRewards; // 0x18(0x10)
	bool bIsEpilogue; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ShooterGame.ContractDataAssetV2EventChapter
// Size: 0x18 (Inherited: 0x18)
struct FContractDataAssetV2EventChapter : FContractDataAssetV2Chapter {
};

// ScriptStruct ShooterGame.ContractDefinitions
// Size: 0x20 (Inherited: 0x00)
struct FContractDefinitions {
	struct TArray<struct FContractDefinition> ContractDefinitions; // 0x00(0x10)
	struct FGuid NPEContractID; // 0x10(0x10)
};

// ScriptStruct ShooterGame.ItemProgressionDefinitionV2
// Size: 0xb0 (Inherited: 0x00)
struct FItemProgressionDefinitionV2 {
	struct FGuid ID; // 0x00(0x10)
	struct FEntitlementIdentifier Item; // 0x10(0x20)
	struct FEntitlementIdentifier RequiredEntitlement; // 0x30(0x20)
	struct FProgressionSchedule ProgressionSchedule; // 0x50(0x20)
	struct FRewardSchedule RewardSchedule; // 0x70(0x30)
	struct TArray<struct FSidegrade> Sidegrades; // 0xa0(0x10)
};

// ScriptStruct ShooterGame.Sidegrade
// Size: 0x30 (Inherited: 0x00)
struct FSidegrade {
	struct FGuid SidegradeID; // 0x00(0x10)
	struct TArray<struct FSidegradeOption> OPTIONS; // 0x10(0x10)
	struct FRewardSchedulePrerequisites Prerequisites; // 0x20(0x10)
};

// ScriptStruct ShooterGame.SidegradeOption
// Size: 0x30 (Inherited: 0x00)
struct FSidegradeOption {
	struct FGuid OptionID; // 0x00(0x10)
	struct FCost Cost; // 0x10(0x10)
	struct TArray<struct FEntitlementReward> Rewards; // 0x20(0x10)
};

// ScriptStruct ShooterGame.Cost
// Size: 0x10 (Inherited: 0x00)
struct FCost {
	struct TArray<struct FWalletCost> WalletCosts; // 0x00(0x10)
};

// ScriptStruct ShooterGame.WalletCost
// Size: 0x18 (Inherited: 0x00)
struct FWalletCost {
	struct FGuid CurrencyID; // 0x00(0x10)
	int64_t AmountToDeduct; // 0x10(0x08)
};

// ScriptStruct ShooterGame.ItemProgressionDefinitionsV2
// Size: 0x10 (Inherited: 0x00)
struct FItemProgressionDefinitionsV2 {
	struct TArray<struct FItemProgressionDefinitionV2> Definitions; // 0x00(0x10)
};

// ScriptStruct ShooterGame.Contract
// Size: 0x70 (Inherited: 0x00)
struct FContract {
	struct FGuid ContractDefinitionID; // 0x00(0x10)
	struct FPlayerRewardState ContractProgression; // 0x10(0x58)
	uint32_t ProgressionLevelReached; // 0x68(0x04)
	uint32_t ProgressionTowardsNextLevel; // 0x6c(0x04)
};

// ScriptStruct ShooterGame.PlayerRewardState
// Size: 0x58 (Inherited: 0x00)
struct FPlayerRewardState {
	uint32_t TotalProgressionEarned; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct FGuid, struct FCAPCounter> HighestRewardedLevel; // 0x08(0x50)
};

// ScriptStruct ShooterGame.CAPCounter
// Size: 0x10 (Inherited: 0x00)
struct FCAPCounter {
	int64_t Amount; // 0x00(0x08)
	int64_t Version; // 0x08(0x08)
};

// ScriptStruct ShooterGame.MissionDTO
// Size: 0x70 (Inherited: 0x00)
struct FMissionDTO {
	struct FDateTime ExpirationTime; // 0x00(0x08)
	struct FGuid ID; // 0x08(0x10)
	struct TMap<struct FGuid, int32_t> Objectives; // 0x18(0x50)
	bool Complete; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct ShooterGame.ContractsXpModifier
// Size: 0x08 (Inherited: 0x00)
struct FContractsXpModifier {
	float Value; // 0x00(0x04)
	enum class EXPModifier Name; // 0x04(0x01)
	bool BaseOnly; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
};

// ScriptStruct ShooterGame.XPModifier
// Size: 0x20 (Inherited: 0x00)
struct FXPModifier {
	float Value; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Name; // 0x08(0x10)
	bool BaseOnly; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ShooterGame.AggregateXPModifier
// Size: 0x18 (Inherited: 0x00)
struct FAggregateXPModifier {
	float Value; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FXPModifier> Modifiers; // 0x08(0x10)
};

// ScriptStruct ShooterGame.XPGrants
// Size: 0x78 (Inherited: 0x00)
struct FXPGrants {
	int32_t GamePlayed; // 0x00(0x04)
	int32_t GameWon; // 0x04(0x04)
	int32_t RoundPlayed; // 0x08(0x04)
	int32_t RoundWon; // 0x0c(0x04)
	struct TMap<struct FGuid, int32_t> Missions; // 0x10(0x50)
	struct FAggregateXPModifier Modifier; // 0x60(0x18)
};

// ScriptStruct ShooterGame.DoughGrants
// Size: 0x0c (Inherited: 0x00)
struct FDoughGrants {
	int32_t GamePlayed; // 0x00(0x04)
	int32_t RoundPlayed; // 0x04(0x04)
	int32_t RoundWon; // 0x08(0x04)
};

// ScriptStruct ShooterGame.RecruitmentProgressUpdate
// Size: 0x48 (Inherited: 0x00)
struct FRecruitmentProgressUpdate {
	struct FGuid GroupId; // 0x00(0x10)
	int64_t ProgressBefore; // 0x10(0x08)
	int64_t ProgressAfter; // 0x18(0x08)
	int32_t MilestoneThreshold; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FRewardGrant RecruitmentRewardGrant; // 0x28(0x20)
};

// ScriptStruct ShooterGame.BTEProgressUpdate
// Size: 0x08 (Inherited: 0x00)
struct FBTEProgressUpdate {
	int32_t ActiveMilestoneBefore; // 0x00(0x04)
	int32_t ActiveMilestoneAfter; // 0x04(0x04)
};

// ScriptStruct ShooterGame.ObjectiveDelta
// Size: 0x18 (Inherited: 0x00)
struct FObjectiveDelta {
	struct FGuid ID; // 0x00(0x10)
	int32_t ProgressBefore; // 0x10(0x04)
	int32_t ProgressAfter; // 0x14(0x04)
};

// ScriptStruct ShooterGame.MissionDelta
// Size: 0xb0 (Inherited: 0x00)
struct FMissionDelta {
	struct FGuid ID; // 0x00(0x10)
	struct TMap<struct FGuid, int32_t> Objectives; // 0x10(0x50)
	struct TMap<struct FGuid, struct FObjectiveDelta> ObjectiveDeltas; // 0x60(0x50)
};

// ScriptStruct ShooterGame.ContractDelta
// Size: 0x18 (Inherited: 0x00)
struct FContractDelta {
	struct FGuid ID; // 0x00(0x10)
	int32_t TotalXPBefore; // 0x10(0x04)
	int32_t TotalXPAfter; // 0x14(0x04)
};

// ScriptStruct ShooterGame.MatchSummary
// Size: 0x08 (Inherited: 0x00)
struct FMatchSummary {
	int32_t RoundsTotal; // 0x00(0x04)
	int32_t RoundsWon; // 0x04(0x04)
};

// ScriptStruct ShooterGame.ContractMatchResults
// Size: 0x1e8 (Inherited: 0x00)
struct FContractMatchResults {
	struct FGuid ID; // 0x00(0x10)
	struct FXPGrants XPGrants; // 0x10(0x78)
	struct FDoughGrants DoughGrants; // 0x88(0x0c)
	char pad_94[0x4]; // 0x94(0x04)
	struct FRecruitmentProgressUpdate RecruitmentProgressUpdate; // 0x98(0x48)
	struct FBTEProgressUpdate BTEProgressUpdate; // 0xe0(0x08)
	struct TMap<struct FGuid, struct FRewardGrant> RewardGrants; // 0xe8(0x50)
	struct TMap<struct FGuid, struct FMissionDelta> MissionDeltas; // 0x138(0x50)
	struct TMap<struct FGuid, struct FContractDelta> ContractDeltas; // 0x188(0x50)
	struct FMatchSummary MatchSummary; // 0x1d8(0x08)
	bool CouldProgressMissions; // 0x1e0(0x01)
	char pad_1E1[0x7]; // 0x1e1(0x07)
};

// ScriptStruct ShooterGame.MissionMetadata
// Size: 0x18 (Inherited: 0x00)
struct FMissionMetadata {
	bool NPECompleted; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDateTime WeeklyCheckpoint; // 0x08(0x08)
	struct FDateTime WeeklyRefillTime; // 0x10(0x08)
};

// ScriptStruct ShooterGame.CAPProgressionRMSPayload
// Size: 0x10 (Inherited: 0x00)
struct FCAPProgressionRMSPayload {
	struct TArray<struct FGuid> updatedGroups; // 0x00(0x10)
};

// ScriptStruct ShooterGame.MatchIDRMSPayload
// Size: 0x10 (Inherited: 0x00)
struct FMatchIDRMSPayload {
	struct FGuid MatchID; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ProgressionCounter
// Size: 0x18 (Inherited: 0x00)
struct FProgressionCounter {
	struct FGuid ID; // 0x00(0x10)
	int64_t Value; // 0x10(0x08)
};

// ScriptStruct ShooterGame.RecruitmentProgress
// Size: 0x28 (Inherited: 0x00)
struct FRecruitmentProgress {
	struct FGuid AgentID; // 0x00(0x10)
	struct FGuid CounterID; // 0x10(0x10)
	uint64_t ProgressionEarned; // 0x20(0x08)
};

// ScriptStruct ShooterGame.RecruitmentEvent
// Size: 0x90 (Inherited: 0x00)
struct FRecruitmentEvent {
	struct FGuid AgentID; // 0x00(0x10)
	struct FGuid CounterID; // 0x10(0x10)
	int32_t MilestoneThreshold; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FDateTime StartDate; // 0x28(0x08)
	struct FDateTime EndDate; // 0x30(0x08)
	bool IsActive; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct TMap<struct FString, struct FPlatformInclusionFlags> IncludedPlatforms; // 0x40(0x50)
};

// ScriptStruct ShooterGame.Contracts
// Size: 0x80 (Inherited: 0x00)
struct FContracts {
	int64_t Version; // 0x00(0x08)
	struct FGuid Subject; // 0x08(0x10)
	struct TArray<struct FContract> Contracts; // 0x18(0x10)
	struct FRecruitmentProgress ActiveRecruitmentEventProgress; // 0x28(0x28)
	struct TArray<struct FMissionDTO> Missions; // 0x50(0x10)
	struct FMissionMetadata MissionMetadata; // 0x60(0x18)
	int32_t BTEMilestone; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct ShooterGame.UnlockProgressRequest
// Size: 0xb0 (Inherited: 0x00)
struct FUnlockProgressRequest {
	struct FGuid XID; // 0x00(0x10)
	struct FGuid CurrencyID; // 0x10(0x10)
	int32_t ExpectedCost; // 0x20(0x04)
	int32_t CurrentTier; // 0x24(0x04)
	int32_t NewTier; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FOrderMetadata MetaData; // 0x30(0x80)
};

// ScriptStruct ShooterGame.OrderMetadata
// Size: 0x80 (Inherited: 0x00)
struct FOrderMetadata {
	struct FString ClientVersion; // 0x00(0x10)
	struct FString ClientSessionID; // 0x10(0x10)
	struct TMap<struct FGuid, int32_t> Balances; // 0x20(0x50)
	struct FString PurchaseSource; // 0x70(0x10)
};

// ScriptStruct ShooterGame.UnlockSidegradeRequest
// Size: 0xb0 (Inherited: 0x00)
struct FUnlockSidegradeRequest {
	struct FGuid XID; // 0x00(0x10)
	struct TArray<struct FEntitlementReward> ExpectedRewards; // 0x10(0x10)
	struct TArray<struct FWalletCost> ExpectedCosts; // 0x20(0x10)
	struct FOrderMetadata MetaData; // 0x30(0x80)
};

// ScriptStruct ShooterGame.UpgradeContractRequest
// Size: 0xa8 (Inherited: 0x00)
struct FUpgradeContractRequest {
	struct FGuid XID; // 0x00(0x10)
	struct FGuid CurrencyID; // 0x10(0x10)
	int32_t ExpectedCost; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FOrderMetadata MetaData; // 0x28(0x80)
};

// ScriptStruct ShooterGame.ConnectionDetailsDTO
// Size: 0x30 (Inherited: 0x00)
struct FConnectionDetailsDTO {
	struct TArray<struct FString> GameServerHosts; // 0x00(0x10)
	int64_t GameServerPort; // 0x10(0x08)
	uint32_t GameServerObfuscatedIP; // 0x18(0x04)
	uint32_t GameClientHash; // 0x1c(0x04)
	struct FString PlayerKey; // 0x20(0x10)
};

// ScriptStruct ShooterGame.PostGamePlayerDTO
// Size: 0x10 (Inherited: 0x00)
struct FPostGamePlayerDTO {
	struct FString Subject; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PostGameDetailsDTO
// Size: 0x18 (Inherited: 0x00)
struct FPostGameDetailsDTO {
	struct FDateTime Start; // 0x00(0x08)
	struct TArray<struct FPostGamePlayerDTO> Players; // 0x08(0x10)
};

// ScriptStruct ShooterGame.CoreGameMatchPlayerDTO
// Size: 0x148 (Inherited: 0x00)
struct FCoreGameMatchPlayerDTO {
	struct FString Subject; // 0x00(0x10)
	struct FName TeamID; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FString CharacterID; // 0x20(0x10)
	struct FPlayerIdentity PlayerIdentity; // 0x30(0x48)
	struct FMMRSeasonBadgeInfo SeasonalBadgeInfo; // 0x78(0x78)
	bool IsCoach; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct FPremierPrestigeInternal PremierPrestige; // 0xf8(0x50)
};

// ScriptStruct ShooterGame.PremierPrestigeInternal
// Size: 0x50 (Inherited: 0x00)
struct FPremierPrestigeInternal {
	struct FString RosterID; // 0x00(0x10)
	struct FString RosterName; // 0x10(0x10)
	struct FString RosterTag; // 0x20(0x10)
	bool ShowTag; // 0x30(0x01)
	bool ShowPlating; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct FString Plating; // 0x38(0x10)
	bool ShowAura; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct ShooterGame.MMRSeasonBadgeInfo
// Size: 0x78 (Inherited: 0x00)
struct FMMRSeasonBadgeInfo {
	struct FGuid SeasonID; // 0x00(0x10)
	int32_t NumberOfWins; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TMap<int32_t, int32_t> WinsByTier; // 0x18(0x50)
	int32_t Rank; // 0x68(0x04)
	int32_t LeaderboardRank; // 0x6c(0x04)
	struct USeasonDataAsset* SeasonAsset; // 0x70(0x08)
};

// ScriptStruct ShooterGame.PlayerIdentity
// Size: 0x48 (Inherited: 0x00)
struct FPlayerIdentity {
	struct FString Subject; // 0x00(0x10)
	struct FGuid PlayerCardId; // 0x10(0x10)
	struct FGuid PlayerTitleId; // 0x20(0x10)
	int32_t AccountLevel; // 0x30(0x04)
	struct FGuid PreferredLevelBorderID; // 0x34(0x10)
	bool Incognito; // 0x44(0x01)
	bool HideAccountLevel; // 0x45(0x01)
	char pad_46[0x2]; // 0x46(0x02)
};

// ScriptStruct ShooterGame.CoreGameMatchmakingData
// Size: 0x18 (Inherited: 0x00)
struct FCoreGameMatchmakingData {
	struct FString QueueID; // 0x00(0x10)
	bool IsRanked; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.CoreGamePlayerLoadoutDTO
// Size: 0xe0 (Inherited: 0x00)
struct FCoreGamePlayerLoadoutDTO {
	struct FString Subject; // 0x00(0x10)
	struct FMegapacketLoadout Loadout; // 0x10(0xc0)
	struct FString CharacterID; // 0xd0(0x10)
};

// ScriptStruct ShooterGame.MegapacketLoadout
// Size: 0xc0 (Inherited: 0x00)
struct FMegapacketLoadout {
	struct FMegapacketSprayLoadout Sprays; // 0x00(0x10)
	struct FMegapacketExpressionsLoadout Expressions; // 0x10(0x10)
	struct TMap<struct FGuid, struct FMegapacketLoadoutItem> Items; // 0x20(0x50)
	struct TMap<struct FGuid, struct FMegapacketOptionLoadout> OPTIONS; // 0x70(0x50)
};

// ScriptStruct ShooterGame.MegapacketOptionLoadout
// Size: 0x10 (Inherited: 0x00)
struct FMegapacketOptionLoadout {
	struct TArray<struct FGuid> OPTIONS; // 0x00(0x10)
};

// ScriptStruct ShooterGame.MegapacketLoadoutItem
// Size: 0x70 (Inherited: 0x00)
struct FMegapacketLoadoutItem {
	struct FGuid ID; // 0x00(0x10)
	struct FGuid TypeID; // 0x10(0x10)
	struct TMap<struct FGuid, struct FMegapacketSocket> Sockets; // 0x20(0x50)
};

// ScriptStruct ShooterGame.MegapacketSocket
// Size: 0x30 (Inherited: 0x00)
struct FMegapacketSocket {
	struct FGuid ID; // 0x00(0x10)
	struct FMegapacketSocketItem Item; // 0x10(0x20)
};

// ScriptStruct ShooterGame.MegapacketSocketItem
// Size: 0x20 (Inherited: 0x00)
struct FMegapacketSocketItem {
	struct FGuid ID; // 0x00(0x10)
	struct FGuid TypeID; // 0x10(0x10)
};

// ScriptStruct ShooterGame.MegapacketExpressionsLoadout
// Size: 0x10 (Inherited: 0x00)
struct FMegapacketExpressionsLoadout {
	struct TArray<struct FMegapacketActiveExpression> AESSelections; // 0x00(0x10)
};

// ScriptStruct ShooterGame.MegapacketActiveExpression
// Size: 0x20 (Inherited: 0x00)
struct FMegapacketActiveExpression {
	struct FGuid AssetID; // 0x00(0x10)
	struct FGuid TypeID; // 0x10(0x10)
};

// ScriptStruct ShooterGame.MegapacketSprayLoadout
// Size: 0x10 (Inherited: 0x00)
struct FMegapacketSprayLoadout {
	struct TArray<struct FMegapacketSpray> SpraySelections; // 0x00(0x10)
};

// ScriptStruct ShooterGame.MegapacketSpray
// Size: 0x30 (Inherited: 0x00)
struct FMegapacketSpray {
	struct FGuid SocketID; // 0x00(0x10)
	struct FGuid SprayID; // 0x10(0x10)
	struct FGuid LevelID; // 0x20(0x10)
};

// ScriptStruct ShooterGame.CoreGameMatchLoadoutsDTO
// Size: 0x10 (Inherited: 0x00)
struct FCoreGameMatchLoadoutsDTO {
	struct TArray<struct FCoreGamePlayerLoadoutDTO> Loadouts; // 0x00(0x10)
};

// ScriptStruct ShooterGame.CoreGameMatchDTO
// Size: 0x128 (Inherited: 0x00)
struct FCoreGameMatchDTO {
	struct FString MatchID; // 0x00(0x10)
	int64_t Version; // 0x10(0x08)
	struct FString State; // 0x18(0x10)
	struct FString MapID; // 0x28(0x10)
	struct FString ModeID; // 0x38(0x10)
	struct FConnectionDetailsDTO ConnectionDetails; // 0x48(0x30)
	struct FPostGameDetailsDTO PostGameDetails; // 0x78(0x18)
	struct FString ProvisioningFlow; // 0x90(0x10)
	enum class EProvisioningFlowID ProvisioningFlowID; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FString GamePodID; // 0xa8(0x10)
	struct FString AllMUCName; // 0xb8(0x10)
	struct FString TeamMUCName; // 0xc8(0x10)
	struct FString TeamVoiceID; // 0xd8(0x10)
	struct FString TeamMatchToken; // 0xe8(0x10)
	bool IsReconnectable; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct TArray<struct FCoreGameMatchPlayerDTO> Players; // 0x100(0x10)
	struct FCoreGameMatchmakingData MatchmakingData; // 0x110(0x18)
};

// ScriptStruct ShooterGame.CoreGamePlayerDTO
// Size: 0x28 (Inherited: 0x00)
struct FCoreGamePlayerDTO {
	struct FString Subject; // 0x00(0x10)
	struct FString MatchID; // 0x10(0x10)
	int64_t Version; // 0x20(0x08)
};

// ScriptStruct ShooterGame.MatchMUCInfo
// Size: 0x20 (Inherited: 0x00)
struct FMatchMUCInfo {
	struct FString Token; // 0x00(0x10)
	struct FString Room; // 0x10(0x10)
};

// ScriptStruct ShooterGame.InstallStats
// Size: 0x20 (Inherited: 0x00)
struct FInstallStats {
	struct FString Version; // 0x00(0x10)
	int64_t NotInstalledProvisioners; // 0x10(0x08)
	int64_t InstalledProvisioners; // 0x18(0x08)
};

// ScriptStruct ShooterGame.TimerState
// Size: 0x01 (Inherited: 0x00)
struct FTimerState {
	bool bPaused; // 0x00(0x01)
};

// ScriptStruct ShooterGame.OverrideCrosshairID
// Size: 0x18 (Inherited: 0x00)
struct FOverrideCrosshairID {
	struct UCrosshairComponent* CrosshairComponent; // 0x00(0x08)
	struct UBaseCrosshairHudElement* OverrideCrosshair; // 0x08(0x08)
	int64_t OverrideID; // 0x10(0x08)
};

// ScriptStruct ShooterGame.CrosshairProfileData
// Size: 0x18 (Inherited: 0x00)
struct FCrosshairProfileData {
	int32_t CurrentProfile; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FCrosshairSettings> Profiles; // 0x08(0x10)
};

// ScriptStruct ShooterGame.CueHandlerAnimationConductorNode_CueSettings
// Size: 0x02 (Inherited: 0x00)
struct FCueHandlerAnimationConductorNode_CueSettings {
	bool bCueMustTrigger; // 0x00(0x01)
	bool bConsumeCue; // 0x01(0x01)
};

// ScriptStruct ShooterGame.CueHandlerAnimationConductorNode_CueInfo
// Size: 0x18 (Inherited: 0x00)
struct FCueHandlerAnimationConductorNode_CueInfo {
	struct TScriptInterface<IAnimationConductorNode> Node; // 0x00(0x10)
	struct FCueHandlerAnimationConductorNode_CueSettings Settings; // 0x10(0x02)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct ShooterGame.CueHandlerAnimationConductorNode_Internal_CueData
// Size: 0x18 (Inherited: 0x00)
struct FCueHandlerAnimationConductorNode_Internal_CueData {
	struct TScriptInterface<IAnimationConductorNode> Node; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct ShooterGame.CueHandlerAnimationConductorNode_Internal_PendingNodeData
// Size: 0x18 (Inherited: 0x00)
struct FCueHandlerAnimationConductorNode_Internal_PendingNodeData {
	char pad_0[0x8]; // 0x00(0x08)
	struct TScriptInterface<IAnimationConductorNode> Node; // 0x08(0x10)
};

// ScriptStruct ShooterGame.CustomGameModel_TeamBacking
// Size: 0x50 (Inherited: 0x00)
struct FCustomGameModel_TeamBacking {
	struct TMap<struct FString, struct UPartyPlayerModel*> Backing; // 0x00(0x50)
};

// ScriptStruct ShooterGame.QueuedStateTransition
// Size: 0x38 (Inherited: 0x00)
struct FQueuedStateTransition {
	char pad_0[0x18]; // 0x00(0x18)
	bool bIsSet; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct UStateComponent* QueuedNextState; // 0x20(0x08)
	struct UStateTransitionContext* QueuedContext; // 0x28(0x08)
	float TimeRemaining; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.ZoomQueuedStateTransition
// Size: 0x40 (Inherited: 0x38)
struct FZoomQueuedStateTransition : FQueuedStateTransition {
	bool bUnZoom; // 0x38(0x01)
	bool bRememberZoomLevel; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct ShooterGame.Milestone
// Size: 0x08 (Inherited: 0x00)
struct FMilestone {
	int32_t Progress; // 0x00(0x04)
	bool BonusApplied; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct ShooterGame.DailyRewards
// Size: 0x18 (Inherited: 0x00)
struct FDailyRewards {
	int32_t RemainingLifetimeSeconds; // 0x00(0x04)
	int32_t BonusMilestonesPending; // 0x04(0x04)
	struct TArray<struct FMilestone> Milestones; // 0x08(0x10)
};

// ScriptStruct ShooterGame.DailyRewardsMatch
// Size: 0x80 (Inherited: 0x00)
struct FDailyRewardsMatch {
	struct FGuid ID; // 0x00(0x10)
	int32_t ProgressBefore; // 0x10(0x04)
	int32_t ProgressAfter; // 0x14(0x04)
	int32_t XP; // 0x18(0x04)
	int32_t SoftCurrency; // 0x1c(0x04)
	struct TMap<struct FGuid, struct FRewardGrant> RewardGrants; // 0x20(0x50)
	struct TArray<bool> DailyBonusState; // 0x70(0x10)
};

// ScriptStruct ShooterGame.DailyRewardsPlayer
// Size: 0x30 (Inherited: 0x00)
struct FDailyRewardsPlayer {
	int32_t Version; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FDailyRewards DailyRewards; // 0x08(0x18)
	struct TArray<struct FDailyRewardsMatch> ProcessedMatches; // 0x20(0x10)
};

// ScriptStruct ShooterGame.HealthValue
// Size: 0x08 (Inherited: 0x00)
struct FHealthValue {
	float Life; // 0x00(0x04)
	float MaximumLife; // 0x04(0x04)
};

// ScriptStruct ShooterGame.PendingDamageEvent
// Size: 0x40 (Inherited: 0x00)
struct FPendingDamageEvent {
	struct UDamageResponse* DamageResponse; // 0x00(0x08)
	struct FDeathResponse DeathResponse; // 0x08(0x38)
};

// ScriptStruct ShooterGame.DeathResponse
// Size: 0x38 (Inherited: 0x00)
struct FDeathResponse {
	struct TArray<struct FAresAssist> AssistsList; // 0x00(0x10)
	int32_t KillsForKiller; // 0x10(0x04)
	int32_t KillsForVictim; // 0x14(0x04)
	struct UAnimMontage* DeathAnimMontage; // 0x18(0x08)
	struct AEffectContainer* DeathMontageEffectOverride; // 0x20(0x08)
	struct UObject* DeathMontageEffectOverrideContext; // 0x28(0x08)
	bool DeathMontageEffectOverrideIsQueued; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct ShooterGame.IgnoreActorDamageEntry
// Size: 0x0c (Inherited: 0x00)
struct FIgnoreActorDamageEntry {
	struct TWeakObjectPtr<struct AActor> IgnoredActor; // 0x00(0x08)
	char pad_8[0x4]; // 0x08(0x04)
};

// ScriptStruct ShooterGame.ActiveOverhealEntry
// Size: 0x40 (Inherited: 0x00)
struct FActiveOverhealEntry {
	char pad_0[0x40]; // 0x00(0x40)
};

// ScriptStruct ShooterGame.DamageTuning
// Size: 0x228 (Inherited: 0x00)
struct FDamageTuning {
	struct FRuntimeFloatCurve DistanceToDamageCurve; // 0x00(0x88)
	struct FRuntimeFloatCurve DistanceToRegionalDamageMultiplierCurve[0x3]; // 0x88(0x198)
	struct UShooterDamageType* DamageType; // 0x220(0x08)
};

// ScriptStruct ShooterGame.PropagationResult
// Size: 0x20 (Inherited: 0x00)
struct FPropagationResult {
	struct AActor* HitActor; // 0x00(0x08)
	struct UActorComponent* HitComponent; // 0x08(0x08)
	float CenterToCenterDistance; // 0x10(0x04)
	float CenterToCenterDistanceWithDetour; // 0x14(0x04)
	float CenterToSurfaceDistance; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.LifeChangeTimestamp
// Size: 0x14 (Inherited: 0x00)
struct FLifeChangeTimestamp {
	struct FNetworkedMovementTimestamp MovementTimestamp; // 0x00(0x10)
	int32_t LifeChangeEventIndex; // 0x10(0x04)
};

// ScriptStruct ShooterGame.LifeChangeEvent
// Size: 0x18 (Inherited: 0x00)
struct FLifeChangeEvent {
	struct UDamageSectionComponent* ChangedComponent; // 0x00(0x08)
	float LifeResult; // 0x08(0x04)
	float DeltaLife; // 0x0c(0x04)
	bool bAliveAfterChange; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.NetworkedDamageResponseData
// Size: 0x88 (Inherited: 0x00)
struct FNetworkedDamageResponseData {
	float DamageTaken; // 0x00(0x04)
	float DamageDealt; // 0x04(0x04)
	bool bDamageKilledTarget; // 0x08(0x01)
	bool bAliveAfterDamage; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
	struct AController* EventInstigator; // 0x10(0x08)
	struct AActor* DamageCauser; // 0x18(0x08)
	struct FVector_NetQuantize100 DamageOrigin; // 0x20(0x18)
	struct AAresEquippable* EquippableUsed; // 0x38(0x08)
	struct UDamageType* DamageType; // 0x40(0x08)
	struct TArray<struct FLifeChangeEvent> LifeChangeEvents; // 0x48(0x10)
	struct APawn* EventInstigatorPawn; // 0x58(0x08)
	struct AShooterPlayerState* DamagerPlayerState; // 0x60(0x08)
	enum class EAresRegionalDamage RegionalDamage; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	struct FLifeChangeTimestamp LifeChangeTimestamp; // 0x6c(0x14)
	int32_t VictimRespawnNumber; // 0x80(0x04)
	bool bEquippableUsedZoomed; // 0x84(0x01)
	bool bEquippableUsedInFocusMode; // 0x85(0x01)
	char pad_86[0x2]; // 0x86(0x02)
};

// ScriptStruct ShooterGame.NetworkedRadialDamageResponseData
// Size: 0x138 (Inherited: 0x88)
struct FNetworkedRadialDamageResponseData : FNetworkedDamageResponseData {
	struct FRadialDamageEvent RadialDamageEvent; // 0x88(0x50)
	struct UPrimitiveComponent* DamagedComponent; // 0xd8(0x08)
	struct FName DamagedBone; // 0xe0(0x0c)
	char pad_EC[0x4]; // 0xec(0x04)
	struct FVector_NetQuantizeNormal DamageDirection; // 0xf0(0x18)
	struct FVector_NetQuantize DamageImpactLocation; // 0x108(0x18)
	struct FVector_NetQuantizeNormal DamageImpactNormal; // 0x120(0x18)
};

// ScriptStruct ShooterGame.NetworkedPointDamageResponseData
// Size: 0x108 (Inherited: 0x88)
struct FNetworkedPointDamageResponseData : FNetworkedDamageResponseData {
	struct UPrimitiveComponent* DamagedComponent; // 0x88(0x08)
	struct FName DamagedBone; // 0x90(0x0c)
	bool bIsWallPenetration; // 0x9c(0x01)
	char pad_9D[0x3]; // 0x9d(0x03)
	float FalloffMultiplier; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FVector_NetQuantizeNormal DamageDirection; // 0xa8(0x18)
	struct FVector_NetQuantize DamageImpactLocation; // 0xc0(0x18)
	struct FVector_NetQuantizeNormal DamageImpactNormal; // 0xd8(0x18)
	struct FVector_NetQuantize DamageImpactBoneRelativeLocation; // 0xf0(0x18)
};

// ScriptStruct ShooterGame.GraphStyleParams
// Size: 0x1e0 (Inherited: 0x00)
struct FGraphStyleParams {
	float XAxisLineLength; // 0x00(0x04)
	float YAxisLineLength; // 0x04(0x04)
	float AxisLineThickness; // 0x08(0x04)
	struct FLinearColor AxisColor; // 0x0c(0x10)
	float CurveLineThickness; // 0x1c(0x04)
	float CurvePointsRadius; // 0x20(0x04)
	float InnerCurvePointsLineLength; // 0x24(0x04)
	float CurvePointsLineThickness; // 0x28(0x04)
	float InnerCurvePointsLineThickness; // 0x2c(0x04)
	struct FVector2D CurveCircleDrawOffset; // 0x30(0x10)
	struct FAresHudFontParams GraphTitleFontParams; // 0x40(0x78)
	struct FVector2D GraphTitleDrawOffset; // 0xb8(0x10)
	struct FAresHudFontParams ValueLabelFontParams; // 0xc8(0x78)
	float ValueLabelSeparation; // 0x140(0x04)
	bool bShowGraphCurrentValue; // 0x144(0x01)
	bool bShowGraphMinMaxValues; // 0x145(0x01)
	char pad_146[0x2]; // 0x146(0x02)
	struct FAresHudFontParams GraphCurrentValueFontParams; // 0x148(0x78)
	struct FVector2D GraphCurrentValueDrawOffset; // 0x1c0(0x10)
	struct FVector2D GraphCurrentValueSeparationOffset; // 0x1d0(0x10)
};

// ScriptStruct ShooterGame.FiringTimeEntry
// Size: 0x10 (Inherited: 0x00)
struct FFiringTimeEntry {
	float Timestamp; // 0x00(0x04)
	enum class EFiringTimeEntryType EntryType; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct UFiringStateComponent* SourceFiringState; // 0x08(0x08)
};

// ScriptStruct ShooterGame.FiringLineTuning
// Size: 0x0c (Inherited: 0x00)
struct FFiringLineTuning {
	float LineStartHeight; // 0x00(0x04)
	float LineEndHeight; // 0x04(0x04)
	float LineThickness; // 0x08(0x04)
};

// ScriptStruct ShooterGame.FiringTimeDebugTuning
// Size: 0x58 (Inherited: 0x00)
struct FFiringTimeDebugTuning {
	struct FFiringLineTuning FiringLine; // 0x00(0x0c)
	struct FFiringLineTuning InputQueueLine; // 0x0c(0x0c)
	struct FLinearColor EntryTypeColor[0x4]; // 0x18(0x40)
};

// ScriptStruct ShooterGame.DebugShooterCharacterAnimInstanceGraphPlot
// Size: 0x10 (Inherited: 0x00)
struct FDebugShooterCharacterAnimInstanceGraphPlot {
	struct FName VariableName; // 0x00(0x0c)
	float MaxValue; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.DebugShooterCharacterAnimInstanceGraph
// Size: 0x238 (Inherited: 0x00)
struct FDebugShooterCharacterAnimInstanceGraph {
	struct FGraphStyleParams GraphStyle; // 0x00(0x1e0)
	struct FText Title; // 0x1e0(0x18)
	struct TArray<struct FName> VariableNames; // 0x1f8(0x10)
	struct TArray<struct FDebugShooterCharacterAnimInstanceGraphPlot> Plots; // 0x208(0x10)
	struct FVector2D GraphDrawOffset; // 0x218(0x10)
	float GraphScale; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct UShooterCharacterAnimInstance* AnimInstance; // 0x230(0x08)
};

// ScriptStruct ShooterGame.DebugShooterCharacterAnimInstanceGraphPage
// Size: 0x10 (Inherited: 0x00)
struct FDebugShooterCharacterAnimInstanceGraphPage {
	struct TArray<struct FDebugShooterCharacterAnimInstanceGraph> Graphs; // 0x00(0x10)
};

// ScriptStruct ShooterGame.TickTiming
// Size: 0x08 (Inherited: 0x00)
struct FTickTiming {
	float TotalMS; // 0x00(0x04)
	float BlueprintMS; // 0x04(0x04)
};

// ScriptStruct ShooterGame.TickTimingData
// Size: 0xa0 (Inherited: 0x00)
struct FTickTimingData {
	struct TMap<struct AActor*, struct FTickTiming> ActorTiming; // 0x00(0x50)
	struct TMap<struct UActorComponent*, struct FTickTiming> ComponentTiming; // 0x50(0x50)
};

// ScriptStruct ShooterGame.ClassCount
// Size: 0x10 (Inherited: 0x00)
struct FClassCount {
	struct UObject* Class; // 0x00(0x08)
	int32_t Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.DecalEntry
// Size: 0x68 (Inherited: 0x00)
struct FDecalEntry {
	struct FDecalData DecalData; // 0x00(0x50)
	struct UDecalComponent* DecalComponent; // 0x50(0x08)
	char pad_58[0x10]; // 0x58(0x10)
};

// ScriptStruct ShooterGame.DecalProxyEntry
// Size: 0x70 (Inherited: 0x00)
struct FDecalProxyEntry {
	struct FDecalData DecalData; // 0x00(0x50)
	struct UDecalComponent* DecalComponent; // 0x50(0x08)
	char pad_58[0x18]; // 0x58(0x18)
};

// ScriptStruct ShooterGame.DecalList
// Size: 0x10 (Inherited: 0x00)
struct FDecalList {
	struct TArray<struct UDecalComponent*> List; // 0x00(0x10)
};

// ScriptStruct ShooterGame.BindingDependencyData
// Size: 0xf0 (Inherited: 0x00)
struct FBindingDependencyData {
	struct TSet<struct UActionBindSet*> ChildrenBindSets; // 0x00(0x50)
	struct TSet<struct UActionBindSet*> ParentBindSets; // 0x50(0x50)
	struct TSet<struct UActionBindSet*> RelativeBindSets; // 0xa0(0x50)
};

// ScriptStruct ShooterGame.DestructionSettings
// Size: 0x20 (Inherited: 0x00)
struct FDestructionSettings {
	enum class EDestructionResponse Response; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FDestructionEffect> Effects; // 0x08(0x10)
	bool bNoExtraEffects; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ShooterGame.NameDTO
// Size: 0x30 (Inherited: 0x00)
struct FNameDTO {
	struct FString Subject; // 0x00(0x10)
	struct FString GameName; // 0x10(0x10)
	struct FString TagLine; // 0x20(0x10)
};

// ScriptStruct ShooterGame.NamesDTO
// Size: 0x10 (Inherited: 0x00)
struct FNamesDTO {
	struct TArray<struct FNameDTO> Names; // 0x00(0x10)
};

// ScriptStruct ShooterGame.SubjectsDTO
// Size: 0x10 (Inherited: 0x00)
struct FSubjectsDTO {
	struct TArray<struct FString> Subjects; // 0x00(0x10)
};

// ScriptStruct ShooterGame.NameUpdateDTO
// Size: 0x10 (Inherited: 0x00)
struct FNameUpdateDTO {
	struct FString IDToken; // 0x00(0x10)
};

// ScriptStruct ShooterGame.DropInPlayerAssets
// Size: 0x60 (Inherited: 0x00)
struct FDropInPlayerAssets {
	struct FString CharacterID; // 0x00(0x10)
	struct TArray<struct FMegapacketSpray> SpraySelections; // 0x10(0x10)
	struct TArray<struct FGuid> EquippableSkinItemIDs; // 0x20(0x10)
	struct TArray<struct FGuid> EquippableSkinLevelItemIDs; // 0x30(0x10)
	struct TArray<struct FGuid> EquippableSkinChromaItemIDs; // 0x40(0x10)
	struct TArray<struct FGuid> EquippableCharmLevelItemIDs; // 0x50(0x10)
};

// ScriptStruct ShooterGame.DropInPlayerLoadingState
// Size: 0x30 (Inherited: 0x00)
struct FDropInPlayerLoadingState {
	struct AAresPlayerStateBase* DropInPlayerState; // 0x00(0x08)
	bool bOwningClientFinishedLoading; // 0x08(0x01)
	bool bServerFinishedLoadingNonCharacterAssets; // 0x09(0x01)
	bool bServerFinishedLoadingCharacterAsset; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
	struct TArray<struct AAresPlayerStateBase*> ClientsStillLoading; // 0x10(0x10)
	struct FTimerHandle LoadingTimeoutTimer; // 0x20(0x08)
	float LoadingStartTime; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ShooterGame.PendingDropOutPlayer
// Size: 0x18 (Inherited: 0x00)
struct FPendingDropOutPlayer {
	bool bPlatformEventAcknowledged; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString JoinInProgressEventId; // 0x08(0x10)
};

// ScriptStruct ShooterGame.DropInRequest
// Size: 0x20 (Inherited: 0x00)
struct FDropInRequest {
	struct FString MatchID; // 0x00(0x10)
	struct TArray<struct FMegapacketPlayer> Players; // 0x10(0x10)
};

// ScriptStruct ShooterGame.MegapacketPlayer
// Size: 0x1b0 (Inherited: 0x00)
struct FMegapacketPlayer {
	struct FString Subject; // 0x00(0x10)
	struct FString GameName; // 0x10(0x10)
	struct FString TagLine; // 0x20(0x10)
	struct FName TeamID; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString PartyId; // 0x40(0x10)
	struct FString CharacterID; // 0x50(0x10)
	struct FString Key; // 0x60(0x10)
	struct FMegapacketLoadout Loadout; // 0x70(0xc0)
	struct FMegapacketContracts Contracts; // 0x130(0x10)
	struct FMegapacketPlayerIdentity PlayerIdentity; // 0x140(0x04)
	char pad_144[0x4]; // 0x144(0x04)
	struct TArray<struct FString> AccessibleCharacters; // 0x148(0x10)
	int32_t CompetitiveTier; // 0x158(0x04)
	bool IsModerator; // 0x15c(0x01)
	bool UseBroadcastHUD; // 0x15d(0x01)
	bool IsCoach; // 0x15e(0x01)
	char pad_15F[0x1]; // 0x15f(0x01)
	struct FMegapacketPremierPrestige PremierPrestige; // 0x160(0x50)
};

// ScriptStruct ShooterGame.MegapacketPremierPrestige
// Size: 0x50 (Inherited: 0x00)
struct FMegapacketPremierPrestige {
	struct FString RosterID; // 0x00(0x10)
	struct FString RosterName; // 0x10(0x10)
	struct FString RosterTag; // 0x20(0x10)
	bool ShowTag; // 0x30(0x01)
	bool ShowPlating; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct FString Plating; // 0x38(0x10)
	bool ShowAura; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct ShooterGame.MegapacketPlayerIdentity
// Size: 0x04 (Inherited: 0x00)
struct FMegapacketPlayerIdentity {
	int32_t AccountLevel; // 0x00(0x04)
};

// ScriptStruct ShooterGame.MegapacketContracts
// Size: 0x10 (Inherited: 0x00)
struct FMegapacketContracts {
	struct TArray<struct FMegapacketMission> Missions; // 0x00(0x10)
};

// ScriptStruct ShooterGame.MegapacketMission
// Size: 0x60 (Inherited: 0x00)
struct FMegapacketMission {
	struct FGuid ID; // 0x00(0x10)
	struct TMap<struct FGuid, int32_t> Objectives; // 0x10(0x50)
};

// ScriptStruct ShooterGame.ProvisionerEventResponse
// Size: 0x18 (Inherited: 0x00)
struct FProvisionerEventResponse {
	struct FString EventID; // 0x00(0x10)
	bool Success; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.DropInFileStatus
// Size: 0x28 (Inherited: 0x00)
struct FDropInFileStatus {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct ShooterGame.DynamicMaterialStruct
// Size: 0x40 (Inherited: 0x00)
struct FDynamicMaterialStruct {
	struct TSoftObjectPtr<UMaterialInstance> MaterialInstance; // 0x00(0x30)
	struct FName SlotName; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ShooterGame.FreePooledEffect
// Size: 0x30 (Inherited: 0x00)
struct FFreePooledEffect {
	bool bShouldActorTick; // 0x00(0x01)
	bool bActorHidden; // 0x01(0x01)
	bool bActorCollisionEnabled; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct AEffectContainer* FXC; // 0x08(0x08)
	struct TArray<struct UActorComponent*> TickingComponents; // 0x10(0x10)
	struct TArray<struct UAresAudioComponent*> AudioComponents; // 0x20(0x10)
};

// ScriptStruct ShooterGame.EffectPreviewHint
// Size: 0x01 (Inherited: 0x00)
struct FEffectPreviewHint {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.EffectPreviewHintEquippable
// Size: 0x01 (Inherited: 0x01)
struct FEffectPreviewHintEquippable : FEffectPreviewHint {
};

// ScriptStruct ShooterGame.EffectPreviewHintCharacterBone
// Size: 0x0c (Inherited: 0x01)
struct FEffectPreviewHintCharacterBone : FEffectPreviewHint {
	char pad_1[0xb]; // 0x01(0x0b)
};

// ScriptStruct ShooterGame.ActiveEffectInfo
// Size: 0x110 (Inherited: 0x00)
struct FActiveEffectInfo {
	struct FEffectID EffectID; // 0x00(0x20)
	struct AEffectContainer* EffectType; // 0x20(0x08)
	struct FEffectData EffectData; // 0x28(0x58)
	struct FTransform Transform; // 0x80(0x60)
	struct FName Socket; // 0xe0(0x0c)
	float StartTimeStamp; // 0xec(0x04)
	struct AEffectContainer* EffectContainer; // 0xf0(0x08)
	struct FTimerHandle ProxyTimerHandle; // 0xf8(0x08)
	enum class EAresAlliance AllianceFilter; // 0x100(0x01)
	char pad_101[0xf]; // 0x101(0x0f)
};

// ScriptStruct ShooterGame.PendingStartEffect
// Size: 0x120 (Inherited: 0x00)
struct FPendingStartEffect {
	float MovementTime; // 0x00(0x04)
	bool bContinuous; // 0x04(0x01)
	char pad_5[0xb]; // 0x05(0x0b)
	struct FActiveEffectInfo EffectInfo; // 0x10(0x110)
};

// ScriptStruct ShooterGame.PendingStopEffect
// Size: 0x30 (Inherited: 0x00)
struct FPendingStopEffect {
	float MovementTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FEffectID EffectID; // 0x08(0x20)
	bool bHasStarted; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ShooterGame.PendingReplicationEffect
// Size: 0x30 (Inherited: 0x00)
struct FPendingReplicationEffect {
	char pad_0[0x8]; // 0x00(0x08)
	struct FEffectID EffectID; // 0x08(0x20)
	struct AEffectContainer* EffectType; // 0x28(0x08)
};

// ScriptStruct ShooterGame.ParticleAttachLocation
// Size: 0x70 (Inherited: 0x00)
struct FParticleAttachLocation {
	char pad_0[0x10]; // 0x00(0x10)
	struct FTransform RelativeTransform; // 0x10(0x60)
};

// ScriptStruct ShooterGame.ParticleAttachToSelf
// Size: 0x70 (Inherited: 0x70)
struct FParticleAttachToSelf : FParticleAttachLocation {
};

// ScriptStruct ShooterGame.ParticleAttachToOwner
// Size: 0x80 (Inherited: 0x70)
struct FParticleAttachToOwner : FParticleAttachLocation {
	struct FName bone; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct ShooterGame.ParticleAttachToCharacter
// Size: 0x80 (Inherited: 0x70)
struct FParticleAttachToCharacter : FParticleAttachLocation {
	struct FName bone; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct ShooterGame.ParticleAttachToCamera
// Size: 0x70 (Inherited: 0x70)
struct FParticleAttachToCamera : FParticleAttachLocation {
};

// ScriptStruct ShooterGame.ParticleAttachToEquippable
// Size: 0x80 (Inherited: 0x70)
struct FParticleAttachToEquippable : FParticleAttachLocation {
	struct FName bone; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct ShooterGame.ParticleAttachToGun
// Size: 0x80 (Inherited: 0x70)
struct FParticleAttachToGun : FParticleAttachLocation {
	struct FName bone; // 0x70(0x0c)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct ShooterGame.MaterialScalarParameterCurve
// Size: 0xa0 (Inherited: 0x00)
struct FMaterialScalarParameterCurve {
	struct FName NamedMaterialSlot; // 0x00(0x0c)
	struct FName ParameterName; // 0x0c(0x0c)
	struct FRuntimeFloatCurve Curve; // 0x18(0x88)
};

// ScriptStruct ShooterGame.MaterialColorParameterCurve
// Size: 0x228 (Inherited: 0x00)
struct FMaterialColorParameterCurve {
	struct FName NamedMaterialSlot; // 0x00(0x0c)
	struct FName ParameterName; // 0x0c(0x0c)
	struct FRuntimeCurveLinearColor Curve; // 0x18(0x210)
};

// ScriptStruct ShooterGame.EffectDataToMaterialScalarBinding
// Size: 0x24 (Inherited: 0x00)
struct FEffectDataToMaterialScalarBinding {
	struct FGameplayTag Tag; // 0x00(0x0c)
	struct FName NamedMaterialSlot; // 0x0c(0x0c)
	struct FName ParameterName; // 0x18(0x0c)
};

// ScriptStruct ShooterGame.EffectDataToMaterialColorBinding
// Size: 0x24 (Inherited: 0x00)
struct FEffectDataToMaterialColorBinding {
	struct FGameplayTag Tag; // 0x00(0x0c)
	struct FName NamedMaterialSlot; // 0x0c(0x0c)
	struct FName ParameterName; // 0x18(0x0c)
};

// ScriptStruct ShooterGame.EffectParticlesAddOn
// Size: 0x08 (Inherited: 0x00)
struct FEffectParticlesAddOn {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ShooterGame.EffectParticlesAddOnGunState
// Size: 0x20 (Inherited: 0x08)
struct FEffectParticlesAddOnGunState : FEffectParticlesAddOn {
	char pad_8[0x10]; // 0x08(0x10)
	enum class EParticlesBehavior IdleStateBehavior; // 0x18(0x01)
	enum class EParticlesBehavior EquippingStateBehavior; // 0x19(0x01)
	enum class EParticlesBehavior InspectStateBehavior; // 0x1a(0x01)
	enum class EParticlesBehavior FiringStateBehavior; // 0x1b(0x01)
	enum class EParticlesBehavior ReloadStateBehavior; // 0x1c(0x01)
	enum class EParticlesBehavior ADSIdleStateBehavior; // 0x1d(0x01)
	enum class EParticlesBehavior ADSFireStateBehavior; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
};

// ScriptStruct ShooterGame.EffectParticlesAddOnGunSkinVariant
// Size: 0x10 (Inherited: 0x08)
struct FEffectParticlesAddOnGunSkinVariant : FEffectParticlesAddOn {
	enum class EAresParticleVariantColor VariantColor; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ShooterGame.EmbeddedEffectInfo
// Size: 0x48 (Inherited: 0x00)
struct FEmbeddedEffectInfo {
	struct AEffectContainer* EffectType; // 0x00(0x08)
	struct FVector AttachOffset; // 0x08(0x18)
	struct FRotator AttachRotation; // 0x20(0x18)
	struct FName AttachSocket; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ShooterGame.EjectableVelocitySample
// Size: 0x40 (Inherited: 0x00)
struct FEjectableVelocitySample {
	float Time; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector Position; // 0x08(0x18)
	struct FQuat Rotation; // 0x20(0x20)
};

// ScriptStruct ShooterGame.WeaponEjectable
// Size: 0x100 (Inherited: 0x00)
struct FWeaponEjectable {
	struct FName EjectableName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct AAresEjectable* EjectableClass; // 0x10(0x08)
	struct FName AttachPoint; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct UMaterialInterface* OverrideMaterial1P; // 0x28(0x08)
	struct TArray<struct UMaterialInterface*> AdditionalOverrideMaterials1P; // 0x30(0x10)
	struct UMaterialInterface* OverrideMaterial3P; // 0x40(0x08)
	struct TArray<struct UMaterialInterface*> AdditionalOverrideMaterials3P; // 0x48(0x10)
	struct UStaticMesh* OverrideMesh1P; // 0x58(0x08)
	struct UStaticMesh* OverrideMesh3P; // 0x60(0x08)
	struct UAresEjectablePool* Pool; // 0x68(0x08)
	bool bUse1PSocketVelocity; // 0x70(0x01)
	char pad_71[0xf]; // 0x71(0x0f)
	struct FEjectableVelocitySample VelocitySamplePrev; // 0x80(0x40)
	struct FEjectableVelocitySample VelocitySampleCurr; // 0xc0(0x40)
};

// ScriptStruct ShooterGame.EmojiEntry
// Size: 0xd0 (Inherited: 0x00)
struct FEmojiEntry {
	struct FSlateBrush Brush; // 0x00(0xd0)
};

// ScriptStruct ShooterGame.EngageDistanceInfo
// Size: 0x18 (Inherited: 0x00)
struct FEngageDistanceInfo {
	struct TArray<struct FVector> PathPoints; // 0x00(0x10)
	float EngageDistance; // 0x10(0x04)
	int32_t FirstVisibleLocationIndex; // 0x14(0x04)
};

// ScriptStruct ShooterGame.CachedEngageDistanceMapping
// Size: 0x30 (Inherited: 0x00)
struct FCachedEngageDistanceMapping {
	struct FIntVector QueryLocation; // 0x00(0x0c)
	struct FIntVector TargetLocation; // 0x0c(0x0c)
	struct FEngageDistanceInfo EngageDistanceInfo; // 0x18(0x18)
};

// ScriptStruct ShooterGame.LeanCachedEngageDistanceMapping
// Size: 0x1c (Inherited: 0x00)
struct FLeanCachedEngageDistanceMapping {
	struct FIntVector QueryLocation; // 0x00(0x0c)
	struct FIntVector TargetLocation; // 0x0c(0x0c)
	float EngageDistance; // 0x18(0x04)
};

// ScriptStruct ShooterGame.AltFireStats_ADS
// Size: 0x14 (Inherited: 0x00)
struct FAltFireStats_ADS {
	float ZoomMultiplier; // 0x00(0x04)
	float FireRate; // 0x04(0x04)
	float RunSpeedMultiplier; // 0x08(0x04)
	int32_t BurstCount; // 0x0c(0x04)
	float FirstBulletAccuracy; // 0x10(0x04)
};

// ScriptStruct ShooterGame.AltFireStats_AirBurst
// Size: 0x08 (Inherited: 0x00)
struct FAltFireStats_AirBurst {
	float BurstDistance; // 0x00(0x04)
	int32_t ShotgunPelletCount; // 0x04(0x04)
};

// ScriptStruct ShooterGame.AltFireStats_Shotgun
// Size: 0x08 (Inherited: 0x00)
struct FAltFireStats_Shotgun {
	int32_t ShotgunPelletCount; // 0x00(0x04)
	float BurstRate; // 0x04(0x04)
};

// ScriptStruct ShooterGame.WeaponStatsFeature_ROFIncrease
// Size: 0x08 (Inherited: 0x00)
struct FWeaponStatsFeature_ROFIncrease {
	float MaxFireRate; // 0x00(0x04)
	float RampUpTime; // 0x04(0x04)
};

// ScriptStruct ShooterGame.WeaponStatDamageUIData
// Size: 0x14 (Inherited: 0x00)
struct FWeaponStatDamageUIData {
	float RangeStartMeters; // 0x00(0x04)
	float RangeEndMeters; // 0x04(0x04)
	float HeadDamage; // 0x08(0x04)
	float BodyDamage; // 0x0c(0x04)
	float LegDamage; // 0x10(0x04)
};

// ScriptStruct ShooterGame.WeaponStatUIData
// Size: 0x68 (Inherited: 0x00)
struct FWeaponStatUIData {
	enum class EWeaponFireModeDisplayType FireMode; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FireRate; // 0x04(0x04)
	int32_t MagazineSize; // 0x08(0x04)
	float RunSpeedMultiplier; // 0x0c(0x04)
	float EquipTimeSeconds; // 0x10(0x04)
	float ReloadTimeSeconds; // 0x14(0x04)
	float FirstBulletAccuracy; // 0x18(0x04)
	int32_t ShotgunPelletCount; // 0x1c(0x04)
	enum class EWallPenetrationDisplayType WallPenetration; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FWeaponStatDamageUIData> DamageRanges; // 0x28(0x10)
	enum class EWeaponAltFireDisplayType AltFireType; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	struct FAltFireStats_ADS ADSStats; // 0x3c(0x14)
	struct FAltFireStats_AirBurst AirBurstStats; // 0x50(0x08)
	struct FAltFireStats_Shotgun AltShotgunStats; // 0x58(0x08)
	enum class EWeaponStatsFeature Feature; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct ShooterGame.AnimLeanTuning
// Size: 0x0c (Inherited: 0x00)
struct FAnimLeanTuning {
	float PitchAndRollStrength; // 0x00(0x04)
	float YawStrength; // 0x04(0x04)
	float TranslationStrength; // 0x08(0x04)
};

// ScriptStruct ShooterGame.IdlePoseTuning
// Size: 0x30 (Inherited: 0x00)
struct FIdlePoseTuning {
	struct FVector FirstPersonMeshOffset; // 0x00(0x18)
	struct FRotator FirstPersonMeshRotation; // 0x18(0x18)
};

// ScriptStruct ShooterGame.StabilityAnimTuning
// Size: 0x88 (Inherited: 0x00)
struct FStabilityAnimTuning {
	struct FRuntimeFloatCurve KickBlendCurve; // 0x00(0x88)
};

// ScriptStruct ShooterGame.EquippableEventDebugHistoryEntry
// Size: 0x40 (Inherited: 0x00)
struct FEquippableEventDebugHistoryEntry {
	struct UEquippableEventBase* Type; // 0x00(0x08)
	enum class EEquippableEventHistoryEntryMode NetworkMode; // 0x08(0x04)
	float Timestamp; // 0x0c(0x04)
	int32_t CastID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString EquippableName; // 0x18(0x10)
	struct TWeakObjectPtr<struct AAresEquippable> Equippable; // 0x28(0x08)
	struct FString CharacterName; // 0x30(0x10)
};

// ScriptStruct ShooterGame.EquippableEventPool
// Size: 0x10 (Inherited: 0x00)
struct FEquippableEventPool {
	struct TArray<struct UEquippableEventBase*> FreeObjects; // 0x00(0x10)
};

// ScriptStruct ShooterGame.EquippableEventItemSlotContainer
// Size: 0x50 (Inherited: 0x00)
struct FEquippableEventItemSlotContainer {
	struct TMap<struct UEquippableEventBase*, struct FMulticastInlineDelegate> EventDelegates; // 0x00(0x50)
};

// ScriptStruct ShooterGame.ItemSlotBlocking
// Size: 0x18 (Inherited: 0x00)
struct FItemSlotBlocking {
	bool bBlockAll; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<enum class EAresItemSlot> BlockedItemSlots; // 0x08(0x10)
};

// ScriptStruct ShooterGame.EquippableStateBuffInfo
// Size: 0x20 (Inherited: 0x00)
struct FEquippableStateBuffInfo {
	struct UAresGameplayBuff* BuffClass; // 0x00(0x08)
	float BuffLevel; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UAresAbilitySystemComponent* BuffTarget; // 0x10(0x08)
	char pad_18[0x8]; // 0x18(0x08)
};

// ScriptStruct ShooterGame.BracketTeamProgressInfo
// Size: 0x60 (Inherited: 0x00)
struct FBracketTeamProgressInfo {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct ShooterGame.BracketRoundsSubBracketInfo
// Size: 0x60 (Inherited: 0x00)
struct FBracketRoundsSubBracketInfo {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct ShooterGame.BracketRoundsInfo
// Size: 0x58 (Inherited: 0x00)
struct FBracketRoundsInfo {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct ShooterGame.BracketCalculationDataByeInfo
// Size: 0x20 (Inherited: 0x00)
struct FBracketCalculationDataByeInfo {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.BracketCalculationData
// Size: 0x38 (Inherited: 0x00)
struct FBracketCalculationData {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct ShooterGame.EsportsSerializable
// Size: 0x01 (Inherited: 0x00)
struct FEsportsSerializable {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.EsportsDTOBase
// Size: 0x01 (Inherited: 0x01)
struct FEsportsDTOBase : FEsportsSerializable {
};

// ScriptStruct ShooterGame.EsportsLeagueDTOV2
// Size: 0x50 (Inherited: 0x01)
struct FEsportsLeagueDTOV2 : FEsportsDTOBase {
	struct FString ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString ImageURL; // 0x20(0x10)
	struct TArray<struct FString> TournamentIDs; // 0x30(0x10)
	struct TArray<struct FString> TeamIDs; // 0x40(0x10)
};

// ScriptStruct ShooterGame.EsportsPickBlockTimesDTOV2
// Size: 0x10 (Inherited: 0x01)
struct FEsportsPickBlockTimesDTOV2 : FEsportsDTOBase {
	struct FDateTime StartTimeUTC; // 0x00(0x08)
	struct FDateTime EndTimeUTC; // 0x08(0x08)
};

// ScriptStruct ShooterGame.EsportsLiveTournamentTimesDTOV2
// Size: 0x20 (Inherited: 0x01)
struct FEsportsLiveTournamentTimesDTOV2 : FEsportsDTOBase {
	struct FString ID; // 0x00(0x10)
	struct FDateTime StartTimeUTC; // 0x10(0x08)
	struct FDateTime EndTimeUTC; // 0x18(0x08)
};

// ScriptStruct ShooterGame.EsportsLiveEventTimesDTOV2
// Size: 0x30 (Inherited: 0x01)
struct FEsportsLiveEventTimesDTOV2 : FEsportsDTOBase {
	struct TArray<struct FEsportsMatchStartTimeDTOV2> Matches; // 0x00(0x10)
	struct TArray<struct FEsportsPickBlockTimesDTOV2> PickBlocks; // 0x10(0x10)
	struct TArray<struct FEsportsLiveTournamentTimesDTOV2> Tournaments; // 0x20(0x10)
};

// ScriptStruct ShooterGame.EsportsMatchStartTimeDTOV2
// Size: 0x18 (Inherited: 0x01)
struct FEsportsMatchStartTimeDTOV2 : FEsportsDTOBase {
	struct FString ID; // 0x00(0x10)
	struct FDateTime StartTime; // 0x10(0x08)
};

// ScriptStruct ShooterGame.EsportsMatchTeamDTOV2
// Size: 0x50 (Inherited: 0x01)
struct FEsportsMatchTeamDTOV2 : FEsportsDTOBase {
	struct FString TeamID; // 0x00(0x10)
	struct FString OriginStructuralID; // 0x10(0x10)
	struct FString OriginType; // 0x20(0x10)
	int8_t OriginSlot; // 0x30(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct FString Result; // 0x38(0x10)
	int8_t GameWins; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct ShooterGame.EsportsMatchConnectionDTOV2
// Size: 0x28 (Inherited: 0x01)
struct FEsportsMatchConnectionDTOV2 : FEsportsDTOBase {
	struct FString StructuralID; // 0x00(0x10)
	struct FString Type; // 0x10(0x10)
	int8_t Slot; // 0x20(0x01)
	char pad_22[0x6]; // 0x22(0x06)
};

// ScriptStruct ShooterGame.EsportsMatchDestinationsDTOV2
// Size: 0x50 (Inherited: 0x01)
struct FEsportsMatchDestinationsDTOV2 : FEsportsDTOBase {
	struct FEsportsMatchConnectionDTOV2 Win; // 0x00(0x28)
	struct FEsportsMatchConnectionDTOV2 Loss; // 0x28(0x28)
};

// ScriptStruct ShooterGame.EsportsMatchDTOV2
// Size: 0xe8 (Inherited: 0x01)
struct FEsportsMatchDTOV2 : FEsportsDTOBase {
	struct FString ID; // 0x00(0x10)
	struct FString LeagueID; // 0x10(0x10)
	struct FString tournamentid; // 0x20(0x10)
	struct FString StageID; // 0x30(0x10)
	struct FString StageName; // 0x40(0x10)
	struct FString StructuralID; // 0x50(0x10)
	struct FDateTime StartTime; // 0x60(0x08)
	struct FString State; // 0x68(0x10)
	struct FEsportsMatchDestinationsDTOV2 Destinations; // 0x78(0x50)
	struct TArray<struct FEsportsMatchTeamDTOV2> MatchTeams; // 0xc8(0x10)
	struct TArray<struct FEsportsStreamDTOV2> Streams; // 0xd8(0x10)
};

// ScriptStruct ShooterGame.EsportsStreamDTOV2
// Size: 0x50 (Inherited: 0x01)
struct FEsportsStreamDTOV2 : FEsportsDTOBase {
	struct FString ID; // 0x00(0x10)
	struct FString ProviderURL; // 0x10(0x10)
	struct FEsportsMediaLocaleDTOV2 MediaLocale; // 0x20(0x30)
};

// ScriptStruct ShooterGame.EsportsMediaLocaleDTOV2
// Size: 0x30 (Inherited: 0x01)
struct FEsportsMediaLocaleDTOV2 : FEsportsDTOBase {
	struct FString Locale; // 0x00(0x10)
	struct FString EnglishName; // 0x10(0x10)
	struct FString TranslatedName; // 0x20(0x10)
};

// ScriptStruct ShooterGame.EsportsMatchesDTOV2
// Size: 0x10 (Inherited: 0x01)
struct FEsportsMatchesDTOV2 : FEsportsDTOBase {
	struct TArray<struct FEsportsMatchDTOV2> Matches; // 0x00(0x10)
};

// ScriptStruct ShooterGame.EsportsUpcomingMatchTeamDTOV2
// Size: 0x20 (Inherited: 0x01)
struct FEsportsUpcomingMatchTeamDTOV2 : FEsportsDTOBase {
	struct FString ID; // 0x00(0x10)
	struct FString HomeLeagueID; // 0x10(0x10)
};

// ScriptStruct ShooterGame.EsportsUpcomingMatchDTOV2
// Size: 0x60 (Inherited: 0x01)
struct FEsportsUpcomingMatchDTOV2 : FEsportsDTOBase {
	struct FString MatchID; // 0x00(0x10)
	struct FString tournamentid; // 0x10(0x10)
	struct FEsportsUpcomingMatchTeamDTOV2 TeamOne; // 0x20(0x20)
	struct FEsportsUpcomingMatchTeamDTOV2 TeamTwo; // 0x40(0x20)
};

// ScriptStruct ShooterGame.EsportsUpcomingMatchesDTOV2
// Size: 0x10 (Inherited: 0x01)
struct FEsportsUpcomingMatchesDTOV2 : FEsportsDTOBase {
	struct TArray<struct FEsportsUpcomingMatchDTOV2> Matches; // 0x00(0x10)
};

// ScriptStruct ShooterGame.EsportsMatchStartTimesDTOV2
// Size: 0x10 (Inherited: 0x01)
struct FEsportsMatchStartTimesDTOV2 : FEsportsDTOBase {
	struct TArray<struct FEsportsMatchStartTimeDTOV2> Matches; // 0x00(0x10)
};

// ScriptStruct ShooterGame.MatchupTeamViewModelPair
// Size: 0x20 (Inherited: 0x00)
struct FMatchupTeamViewModelPair {
	struct UEsportsMatchupTeamViewModel* TeamOne; // 0x00(0x08)
	struct UEsportsMatchupTeamViewModel* TeamTwo; // 0x08(0x08)
	char pad_10[0x10]; // 0x10(0x10)
};

// ScriptStruct ShooterGame.EsportsVODDTOV2
// Size: 0x30 (Inherited: 0x01)
struct FEsportsVODDTOV2 : FEsportsDTOBase {
	struct FString ID; // 0x00(0x10)
	struct FString Locale; // 0x10(0x10)
	struct FString ProviderURL; // 0x20(0x10)
};

// ScriptStruct ShooterGame.EsportsServiceParameters
// Size: 0x60 (Inherited: 0x00)
struct FEsportsServiceParameters {
	struct UEsportsService* EsportsService; // 0x00(0x08)
	char pad_8[0x58]; // 0x08(0x58)
};

// ScriptStruct ShooterGame.EsportsOverviewDTOV2
// Size: 0x50 (Inherited: 0x01)
struct FEsportsOverviewDTOV2 : FEsportsDTOBase {
	struct TArray<struct FEsportsLeagueDTOV2> Leagues; // 0x00(0x10)
	struct TArray<struct FEsportsTournamentDTOV2> Tournaments; // 0x10(0x10)
	struct TArray<struct FEsportsTeamDTOV2> Teams; // 0x20(0x10)
	struct TArray<struct FEsportsSeasonDTOV2> Seasons; // 0x30(0x10)
	struct TArray<struct FEsportsSplitDTOV2> Splits; // 0x40(0x10)
};

// ScriptStruct ShooterGame.EsportsSplitDTOV2
// Size: 0x70 (Inherited: 0x01)
struct FEsportsSplitDTOV2 : FEsportsDTOBase {
	struct FString ID; // 0x00(0x10)
	struct FString Slug; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)
	struct FString Description; // 0x30(0x10)
	struct FDateTime StartTime; // 0x40(0x08)
	struct FDateTime EndTime; // 0x48(0x08)
	struct FString SeasonID; // 0x50(0x10)
	struct TArray<struct FString> TournamentIDs; // 0x60(0x10)
};

// ScriptStruct ShooterGame.EsportsSeasonDTOV2
// Size: 0x50 (Inherited: 0x01)
struct FEsportsSeasonDTOV2 : FEsportsDTOBase {
	struct FString ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString Description; // 0x20(0x10)
	struct FDateTime StartTime; // 0x30(0x08)
	struct FDateTime EndTime; // 0x38(0x08)
	struct TArray<struct FString> SplitIDs; // 0x40(0x10)
};

// ScriptStruct ShooterGame.EsportsTeamDTOV2
// Size: 0xb0 (Inherited: 0x01)
struct FEsportsTeamDTOV2 : FEsportsDTOBase {
	struct FString ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString Code; // 0x20(0x10)
	struct FString BaseImageURL; // 0x30(0x10)
	struct FString LowResImageURL; // 0x40(0x10)
	struct FString HighResImageURL; // 0x50(0x10)
	struct FString HomeLeagueID; // 0x60(0x10)
	struct TArray<struct FString> TeamMemberIDs; // 0x70(0x10)
	struct FString BundleID; // 0x80(0x10)
	struct FString BundleDataAssetID; // 0x90(0x10)
	struct FString DataAssetID; // 0xa0(0x10)
};

// ScriptStruct ShooterGame.EsportsTournamentDTOV2
// Size: 0x60 (Inherited: 0x01)
struct FEsportsTournamentDTOV2 : FEsportsDTOBase {
	struct FString ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FDateTime StartTime; // 0x20(0x08)
	struct FDateTime EndTime; // 0x28(0x08)
	struct FString LeagueID; // 0x30(0x10)
	struct TArray<struct FString> StageIDs; // 0x40(0x10)
	struct TArray<struct FString> TeamIDs; // 0x50(0x10)
};

// ScriptStruct ShooterGame.PickemBracketSectionAutosaveDetails
// Size: 0x40 (Inherited: 0x00)
struct FPickemBracketSectionAutosaveDetails {
	struct FString TournamentSlug; // 0x00(0x10)
	struct FString SectionID; // 0x10(0x10)
	struct FString PickBlockID; // 0x20(0x10)
	struct FString SubmittedInBatch; // 0x30(0x10)
};

// ScriptStruct ShooterGame.PickemBracketSectionAutosaveDetailsV2
// Size: 0x50 (Inherited: 0x00)
struct FPickemBracketSectionAutosaveDetailsV2 {
	struct FString tournamentid; // 0x00(0x10)
	struct FString SectionID; // 0x10(0x10)
	struct FString PickBlockID; // 0x20(0x10)
	struct FString SubmittedInBatch; // 0x30(0x10)
	struct UEsportsTournamentModelV2* TournamentModel; // 0x40(0x08)
	struct UEsportsSectionModelV2* SectionModel; // 0x48(0x08)
};

// ScriptStruct ShooterGame.PickemFactionDTO
// Size: 0x68 (Inherited: 0x01)
struct FPickemFactionDTO : FEsportsDTOBase {
	struct FString ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString IconURL; // 0x20(0x10)
	struct FString Region; // 0x30(0x10)
	int32_t PlayerCount; // 0x40(0x04)
	char pad_45[0x3]; // 0x45(0x03)
	struct FString HostDisplayName; // 0x48(0x10)
	struct FString HostAvatarURL; // 0x58(0x10)
};

// ScriptStruct ShooterGame.PickemFactionsLeaderboardStandingsDTO
// Size: 0x70 (Inherited: 0x01)
struct FPickemFactionsLeaderboardStandingsDTO : FEsportsDTOBase {
	int32_t Rank; // 0x00(0x04)
	int32_t Points; // 0x04(0x04)
	struct FPickemFactionDTO Faction; // 0x08(0x68)
};

// ScriptStruct ShooterGame.PickemFactionsLeaderboardDTO
// Size: 0x48 (Inherited: 0x01)
struct FPickemFactionsLeaderboardDTO : FEsportsDTOBase {
	struct FString ID; // 0x00(0x10)
	struct FString tournamentid; // 0x10(0x10)
	struct FString DisplayName; // 0x20(0x10)
	int32_t NumParticipants; // 0x30(0x04)
	char pad_35[0x3]; // 0x35(0x03)
	struct TArray<struct FPickemFactionsLeaderboardStandingsDTO> Standings; // 0x38(0x10)
};

// ScriptStruct ShooterGame.PickemFactionPlayerStatsDTO
// Size: 0x98 (Inherited: 0x01)
struct FPickemFactionPlayerStatsDTO : FEsportsDTOBase {
	int32_t Rank; // 0x00(0x04)
	int32_t Points; // 0x04(0x04)
	float PercentRank; // 0x08(0x04)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FString PlayerID; // 0x10(0x10)
	struct FString PlayerName; // 0x20(0x10)
	struct FPickemFactionDTO Faction; // 0x30(0x68)
};

// ScriptStruct ShooterGame.PickemGroupSectionAutosaveDetails
// Size: 0x30 (Inherited: 0x00)
struct FPickemGroupSectionAutosaveDetails {
	struct FString TournamentSlug; // 0x00(0x10)
	struct FString SectionID; // 0x10(0x10)
	struct FString SubmittedInBatch; // 0x20(0x10)
};

// ScriptStruct ShooterGame.PickemGroupSectionAutosaveDetailsV2
// Size: 0x40 (Inherited: 0x00)
struct FPickemGroupSectionAutosaveDetailsV2 {
	struct FString tournamentid; // 0x00(0x10)
	struct FString SectionID; // 0x10(0x10)
	struct FString SubmittedInBatch; // 0x20(0x10)
	struct UEsportsTournamentModelV2* TournamentModel; // 0x30(0x08)
	struct UEsportsSectionModelV2* SectionModel; // 0x38(0x08)
};

// ScriptStruct ShooterGame.EsportsPlayerAgentStatsDTOV2
// Size: 0x58 (Inherited: 0x01)
struct FEsportsPlayerAgentStatsDTOV2 : FEsportsDTOBase {
	struct FString Handle; // 0x00(0x10)
	int32_t Year; // 0x10(0x04)
	char pad_15[0x3]; // 0x15(0x03)
	struct FString EsportsPlayerID; // 0x18(0x10)
	struct FString AgentGuid; // 0x28(0x10)
	int32_t NumAgentGames; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString MostPlayedMap; // 0x40(0x10)
	int32_t MostPlayedMapGames; // 0x50(0x04)
	float MostPlayedMapWinrate; // 0x54(0x04)
};

// ScriptStruct ShooterGame.EsportsPlayerStatsDTOV2
// Size: 0x58 (Inherited: 0x01)
struct FEsportsPlayerStatsDTOV2 : FEsportsDTOBase {
	struct FString Handle; // 0x00(0x10)
	int32_t Year; // 0x10(0x04)
	char pad_15[0x3]; // 0x15(0x03)
	struct FString EsportsPlayerID; // 0x18(0x10)
	int32_t TotalGames; // 0x28(0x04)
	float AverageCombatScore; // 0x2c(0x04)
	float KDA; // 0x30(0x04)
	float KD; // 0x34(0x04)
	float HeadshotPercentage; // 0x38(0x04)
	float AverageDamagePerRound; // 0x3c(0x04)
	float AverageKillsPerRound; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FEsportsPlayerAgentStatsDTOV2> StatsPerAgent; // 0x48(0x10)
};

// ScriptStruct ShooterGame.EsportsPlayerStatsResponseDTOV2
// Size: 0x10 (Inherited: 0x01)
struct FEsportsPlayerStatsResponseDTOV2 : FEsportsDTOBase {
	struct TArray<struct FEsportsPlayerStatsDTOV2> PlayerStatsList; // 0x00(0x10)
};

// ScriptStruct ShooterGame.RoundRobinMatchupTeamViewModels
// Size: 0x18 (Inherited: 0x00)
struct FRoundRobinMatchupTeamViewModels {
	struct UEsportsMatchupTeamViewModel* TeamOne; // 0x00(0x08)
	struct UEsportsMatchupTeamViewModel* TeamTwo; // 0x08(0x08)
	struct UEsportsMatchupTeamViewModel* TeamThree; // 0x10(0x08)
};

// ScriptStruct ShooterGame.RoundRobinMatchupViewModels
// Size: 0x18 (Inherited: 0x00)
struct FRoundRobinMatchupViewModels {
	struct UEsportsMatchupViewModel* MatchOne; // 0x00(0x08)
	struct UEsportsMatchupViewModel* MatchTwo; // 0x08(0x08)
	struct UEsportsMatchupViewModel* MatchThree; // 0x10(0x08)
};

// ScriptStruct ShooterGame.TeamHomeLeagueIDContainer
// Size: 0x60 (Inherited: 0x00)
struct FTeamHomeLeagueIDContainer {
	struct FString MatchID; // 0x00(0x10)
	struct TSet<struct FString> LeagueIDs; // 0x10(0x50)
};

// ScriptStruct ShooterGame.EsportsSchedulePreFilterOptions
// Size: 0x38 (Inherited: 0x00)
struct FEsportsSchedulePreFilterOptions {
	int32_t Size; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FString> LeagueIDs; // 0x08(0x10)
	struct TArray<struct FString> TournamentIDs; // 0x18(0x10)
	struct TArray<struct FString> TeamIDs; // 0x28(0x10)
};

// ScriptStruct ShooterGame.CombinedDataDTO
// Size: 0x170 (Inherited: 0x00)
struct FCombinedDataDTO {
	struct FEventScheduleDTO Events; // 0x00(0x90)
	struct FTournamentStandingDTO Standings; // 0x90(0xd0)
	struct FTeamsDTO Teams; // 0x160(0x10)
};

// ScriptStruct ShooterGame.CombinedDataListDTO
// Size: 0x10 (Inherited: 0x00)
struct FCombinedDataListDTO {
	struct TArray<struct FCombinedDataDTO> Data; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PickemMatchDTO
// Size: 0x48 (Inherited: 0x00)
struct FPickemMatchDTO {
	struct FString ID; // 0x00(0x10)
	struct FString EldsMatchID; // 0x10(0x10)
	int32_t BaselinePoints; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString CorrectPick; // 0x28(0x10)
	struct FString ResultState; // 0x38(0x10)
};

// ScriptStruct ShooterGame.PickemEntryDTO
// Size: 0x30 (Inherited: 0x00)
struct FPickemEntryDTO {
	int32_t Index; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Correctness; // 0x08(0x10)
	struct FString ParticipantID; // 0x18(0x10)
	int32_t Points; // 0x28(0x04)
	int32_t Rank; // 0x2c(0x04)
};

// ScriptStruct ShooterGame.PickemEntriesDTO
// Size: 0x10 (Inherited: 0x00)
struct FPickemEntriesDTO {
	struct TArray<struct FPickemEntryDTO> Entries; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PickemSectionDTO
// Size: 0x30 (Inherited: 0x00)
struct FPickemSectionDTO {
	struct FString ID; // 0x00(0x10)
	struct FString EldsSectionID; // 0x10(0x10)
	struct FPickemEntriesDTO CorrectPick; // 0x20(0x10)
};

// ScriptStruct ShooterGame.PickBlockElementDTO
// Size: 0xc0 (Inherited: 0x00)
struct FPickBlockElementDTO {
	struct FString ID; // 0x00(0x10)
	struct FString PickBlockID; // 0x10(0x10)
	struct FPickemSectionDTO Section; // 0x20(0x30)
	struct FPickemMatchDTO Match; // 0x50(0x48)
	struct FDateTime PickOpenTime; // 0x98(0x08)
	struct FDateTime PickCloseTime; // 0xa0(0x08)
	struct FString State; // 0xa8(0x10)
	int32_t DisplayOrder; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// ScriptStruct ShooterGame.SlugDTO
// Size: 0x10 (Inherited: 0x00)
struct FSlugDTO {
	struct FString Slug; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PickBlockDTO
// Size: 0x90 (Inherited: 0x00)
struct FPickBlockDTO {
	struct FString ID; // 0x00(0x10)
	struct FString EldsTournamentID; // 0x10(0x10)
	struct FSlugDTO Slug; // 0x20(0x10)
	struct FDateTime PickOpenTime; // 0x30(0x08)
	struct FDateTime PickCloseTime; // 0x38(0x08)
	struct FString State; // 0x40(0x10)
	struct FString OpenLevel; // 0x50(0x10)
	struct FString BlockType; // 0x60(0x10)
	struct TArray<struct FPickBlockElementDTO> PickBlockElements; // 0x70(0x10)
	struct FString CompletionStatus; // 0x80(0x10)
};

// ScriptStruct ShooterGame.ParticipantDTO
// Size: 0x20 (Inherited: 0x00)
struct FParticipantDTO {
	struct FString ID; // 0x00(0x10)
	struct FString EldsTeamID; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PickemTournamentDTO
// Size: 0x50 (Inherited: 0x00)
struct FPickemTournamentDTO {
	struct FString ID; // 0x00(0x10)
	struct FString EldsTournamentID; // 0x10(0x10)
	struct FString LeagueID; // 0x20(0x10)
	struct TArray<struct FPickBlockDTO> PickBlocks; // 0x30(0x10)
	struct TArray<struct FParticipantDTO> Participants; // 0x40(0x10)
};

// ScriptStruct ShooterGame.PickemLeagueDTO
// Size: 0x78 (Inherited: 0x00)
struct FPickemLeagueDTO {
	struct FString LeagueID; // 0x00(0x10)
	struct FString EldsLeagueID; // 0x10(0x10)
	struct FPickemTournamentDTO Tournament; // 0x20(0x50)
	bool Published; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct ShooterGame.PickemLeaguesDTO
// Size: 0x10 (Inherited: 0x00)
struct FPickemLeaguesDTO {
	struct TArray<struct FPickemLeagueDTO> PickemLeagues; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PickemRegistrationDTO
// Size: 0x20 (Inherited: 0x00)
struct FPickemRegistrationDTO {
	struct FString PlayerID; // 0x00(0x10)
	struct TArray<struct FPickemLeagueDTO> Leagues; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PickemPlayerStatisticsDTO
// Size: 0x28 (Inherited: 0x00)
struct FPickemPlayerStatisticsDTO {
	int32_t Rank; // 0x00(0x04)
	int32_t Points; // 0x04(0x04)
	int32_t PercentRank; // 0x08(0x04)
	int32_t CorrectPicks; // 0x0c(0x04)
	int32_t PerfectBlocks; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString PlayerName; // 0x18(0x10)
};

// ScriptStruct ShooterGame.CelebStandingDTO
// Size: 0x30 (Inherited: 0x00)
struct FCelebStandingDTO {
	int32_t Rank; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Name; // 0x08(0x10)
	struct FString ID; // 0x18(0x10)
	int32_t Points; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ShooterGame.CelebLeaderboardDTO
// Size: 0x10 (Inherited: 0x00)
struct FCelebLeaderboardDTO {
	struct TArray<struct FCelebStandingDTO> Standings; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PickemBracketPickDTO
// Size: 0x50 (Inherited: 0x00)
struct FPickemBracketPickDTO {
	struct FString EldsMatchID; // 0x00(0x10)
	struct FString ParticipantID; // 0x10(0x10)
	struct FString PickType; // 0x20(0x10)
	int32_t WageredAmount; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString Result; // 0x38(0x10)
	int32_t PointsAwarded; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ShooterGame.PickemBracketPicksDTO
// Size: 0x48 (Inherited: 0x00)
struct FPickemBracketPicksDTO {
	struct FString PickBlockID; // 0x00(0x10)
	struct FString PlayerName; // 0x10(0x10)
	struct TArray<struct FPickemBracketPickDTO> Picks; // 0x20(0x10)
	struct TArray<struct FPickemBracketPickDTO> MatchPicks; // 0x30(0x10)
	int32_t Score; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ShooterGame.PickemLineupDTO
// Size: 0x10 (Inherited: 0x00)
struct FPickemLineupDTO {
	struct TArray<struct FPickemEntryDTO> Entries; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PickemResultDTO
// Size: 0x30 (Inherited: 0x00)
struct FPickemResultDTO {
	struct FString Correctness; // 0x00(0x10)
	int32_t TotalAwardedPoints; // 0x10(0x04)
	int32_t TotalPossiblePoints; // 0x14(0x04)
	int32_t PerfectPickPoints; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FPickemEntryDTO> Entries; // 0x20(0x10)
};

// ScriptStruct ShooterGame.PickemSectionPicksForSectionIDDTO
// Size: 0x60 (Inherited: 0x00)
struct FPickemSectionPicksForSectionIDDTO {
	struct FString EldsSectionID; // 0x00(0x10)
	struct FPickemLineupDTO Lineup; // 0x10(0x10)
	struct FString PickType; // 0x20(0x10)
	struct FPickemResultDTO Result; // 0x30(0x30)
};

// ScriptStruct ShooterGame.PickemSectionPicksDTO
// Size: 0x10 (Inherited: 0x00)
struct FPickemSectionPicksDTO {
	struct TArray<struct FPickemSectionPicksForSectionIDDTO> SectionPicks; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PickemRewardDTO
// Size: 0x20 (Inherited: 0x00)
struct FPickemRewardDTO {
	struct FString ItemId; // 0x00(0x10)
	struct FString ItemTypeID; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PickemRewardsDTO
// Size: 0x10 (Inherited: 0x00)
struct FPickemRewardsDTO {
	struct TArray<struct FPickemRewardDTO> Rewards; // 0x00(0x10)
};

// ScriptStruct ShooterGame.EsportsGetMatchesDTO
// Size: 0x10 (Inherited: 0x00)
struct FEsportsGetMatchesDTO {
	struct TArray<struct FString> MatchIDs; // 0x00(0x10)
};

// ScriptStruct ShooterGame.EsportsCellDTOV2
// Size: 0x30 (Inherited: 0x01)
struct FEsportsCellDTOV2 : FEsportsDTOBase {
	struct FString Slug; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct TArray<struct FString> MatchIDs; // 0x20(0x10)
};

// ScriptStruct ShooterGame.EsportsColumnDTOV2
// Size: 0x10 (Inherited: 0x01)
struct FEsportsColumnDTOV2 : FEsportsDTOBase {
	struct TArray<struct FEsportsCellDTOV2> Cells; // 0x00(0x10)
};

// ScriptStruct ShooterGame.EsportsTeamRecordDTOV2
// Size: 0x08 (Inherited: 0x01)
struct FEsportsTeamRecordDTOV2 : FEsportsDTOBase {
	int32_t Wins; // 0x00(0x04)
	int32_t Losses; // 0x04(0x04)
};

// ScriptStruct ShooterGame.EsportsRankingTeamDTOV2
// Size: 0x18 (Inherited: 0x01)
struct FEsportsRankingTeamDTOV2 : FEsportsDTOBase {
	struct FString TeamID; // 0x00(0x10)
	struct FEsportsTeamRecordDTOV2 TeamRecord; // 0x10(0x08)
};

// ScriptStruct ShooterGame.EsportsStandingTeamDTOV2
// Size: 0x18 (Inherited: 0x01)
struct FEsportsStandingTeamDTOV2 : FEsportsDTOBase {
	struct FString TeamID; // 0x00(0x10)
	struct FEsportsTeamRecordDTOV2 TeamRecord; // 0x10(0x08)
};

// ScriptStruct ShooterGame.EsportsStandingDTOV2
// Size: 0x18 (Inherited: 0x01)
struct FEsportsStandingDTOV2 : FEsportsDTOBase {
	struct FEsportsStandingTeamDTOV2 Team; // 0x00(0x18)
};

// ScriptStruct ShooterGame.EsportsRankingDTOV2
// Size: 0x18 (Inherited: 0x01)
struct FEsportsRankingDTOV2 : FEsportsDTOBase {
	int32_t Ordinal; // 0x00(0x04)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<struct FEsportsRankingTeamDTOV2> Teams; // 0x08(0x10)
};

// ScriptStruct ShooterGame.EsportsSectionDTOV2
// Size: 0x70 (Inherited: 0x01)
struct FEsportsSectionDTOV2 : FEsportsDTOBase {
	struct FString ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString Slug; // 0x20(0x10)
	struct FString Type; // 0x30(0x10)
	struct TArray<struct FEsportsColumnDTOV2> Columns; // 0x40(0x10)
	struct TArray<struct FEsportsStandingDTOV2> Standings; // 0x50(0x10)
	struct TArray<struct FEsportsRankingDTOV2> Rankings; // 0x60(0x10)
};

// ScriptStruct ShooterGame.EsportsStageDTOV2
// Size: 0x40 (Inherited: 0x01)
struct FEsportsStageDTOV2 : FEsportsDTOBase {
	struct FString ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString Slug; // 0x20(0x10)
	struct TArray<struct FEsportsSectionDTOV2> Sections; // 0x30(0x10)
};

// ScriptStruct ShooterGame.EsportsStagesDTOV2
// Size: 0x10 (Inherited: 0x01)
struct FEsportsStagesDTOV2 : FEsportsDTOBase {
	struct TArray<struct FEsportsStageDTOV2> Stages; // 0x00(0x10)
};

// ScriptStruct ShooterGame.EsportsTeamsDTOV2
// Size: 0x10 (Inherited: 0x01)
struct FEsportsTeamsDTOV2 : FEsportsDTOBase {
	struct TArray<struct FEsportsTeamDTOV2> Teams; // 0x00(0x10)
};

// ScriptStruct ShooterGame.EsportsTeamMemberPositionDTOV2
// Size: 0x20 (Inherited: 0x01)
struct FEsportsTeamMemberPositionDTOV2 : FEsportsDTOBase {
	struct FString Name; // 0x00(0x10)
	struct FString Slug; // 0x10(0x10)
};

// ScriptStruct ShooterGame.EsportsTeamMemberDTOV2
// Size: 0x60 (Inherited: 0x01)
struct FEsportsTeamMemberDTOV2 : FEsportsDTOBase {
	struct FString ID; // 0x00(0x10)
	struct FString Handle; // 0x10(0x10)
	struct FString FirstName; // 0x20(0x10)
	struct FString LastName; // 0x30(0x10)
	struct FString ImageURL; // 0x40(0x10)
	struct TArray<struct FEsportsTeamMemberPositionDTOV2> Positions; // 0x50(0x10)
};

// ScriptStruct ShooterGame.EsportsTeamMembersDTOV2
// Size: 0x10 (Inherited: 0x01)
struct FEsportsTeamMembersDTOV2 : FEsportsDTOBase {
	struct TArray<struct FEsportsTeamMemberDTOV2> TeamMembers; // 0x00(0x10)
};

// ScriptStruct ShooterGame.UrlClickEvent
// Size: 0x70 (Inherited: 0x00)
struct FUrlClickEvent {
	struct FString Subject; // 0x00(0x10)
	struct FString InstanceId; // 0x10(0x10)
	struct FString ClientSessionID; // 0x20(0x10)
	struct FString URL; // 0x30(0x10)
	struct FString TeamOneName; // 0x40(0x10)
	struct FString TeamTwoName; // 0x50(0x10)
	struct FString TournamentStage; // 0x60(0x10)
};

// ScriptStruct ShooterGame.EULAAcceptanceState
// Size: 0x18 (Inherited: 0x00)
struct FEULAAcceptanceState {
	enum class EEULAAcceptanceState ParsedState; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString State; // 0x08(0x10)
};

// ScriptStruct ShooterGame.EULAContent
// Size: 0x10 (Inherited: 0x00)
struct FEULAContent {
	struct FString Content; // 0x00(0x10)
};

// ScriptStruct ShooterGame.WindowedGameStats
// Size: 0x40 (Inherited: 0x00)
struct FWindowedGameStats {
	int32_t Kills; // 0x00(0x04)
	int32_t Deaths; // 0x04(0x04)
	int32_t Assists; // 0x08(0x04)
	float TotalShots; // 0x0c(0x04)
	float TotalHeadshots; // 0x10(0x04)
	int32_t TotalShotsWithMovementError; // 0x14(0x04)
	char pad_18[0x10]; // 0x18(0x10)
	struct FString LengthOfWindow; // 0x28(0x10)
	struct AAresEquippable* MostUsedWeapon; // 0x38(0x08)
};

// ScriptStruct ShooterGame.TotalGameStatDisplayData
// Size: 0x30 (Inherited: 0x00)
struct FTotalGameStatDisplayData {
	int32_t Kills; // 0x00(0x04)
	int32_t Deaths; // 0x04(0x04)
	int32_t Assists; // 0x08(0x04)
	float AverageKD; // 0x0c(0x04)
	float HeadshotPercent; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString LengthOfWindow; // 0x18(0x10)
	struct AAresEquippable* MostUsedWeapon; // 0x28(0x08)
};

// ScriptStruct ShooterGame.Favorite
// Size: 0x20 (Inherited: 0x00)
struct FFavorite {
	struct FGuid FavoriteID; // 0x00(0x10)
	struct FGuid ItemId; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PlayerFavorites
// Size: 0x60 (Inherited: 0x00)
struct FPlayerFavorites {
	struct FGuid Subject; // 0x00(0x10)
	struct TMap<struct FGuid, struct FFavorite> FavoritedContent; // 0x10(0x50)
};

// ScriptStruct ShooterGame.CreateFavoriteRequest
// Size: 0x10 (Inherited: 0x00)
struct FCreateFavoriteRequest {
	struct FGuid ItemId; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ModifyFavoritesRequest
// Size: 0x20 (Inherited: 0x00)
struct FModifyFavoritesRequest {
	struct TArray<struct FGuid> AddItemIDs; // 0x00(0x10)
	struct TArray<struct FGuid> RemoveItemIDs; // 0x10(0x10)
};

// ScriptStruct ShooterGame.ShotsByEquippable
// Size: 0x18 (Inherited: 0x00)
struct FShotsByEquippable {
	struct AAresEquippable* EquippableClass; // 0x00(0x08)
	int32_t TotalShots; // 0x08(0x04)
	int32_t TotalDamage; // 0x0c(0x04)
	int32_t Hits; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.CharacterCombatReportAggregate
// Size: 0x18 (Inherited: 0x00)
struct FCharacterCombatReportAggregate {
	int32_t RoundNumber; // 0x00(0x04)
	float TotalDamage; // 0x04(0x04)
	struct TArray<struct FShotsByEquippable> TotalShots; // 0x08(0x10)
};

// ScriptStruct ShooterGame.FindSpawnSpotTrace
// Size: 0x30 (Inherited: 0x00)
struct FFindSpawnSpotTrace {
	struct FVector SourceOffset; // 0x00(0x18)
	struct FVector TargetOffset; // 0x18(0x18)
};

// ScriptStruct ShooterGame.ProjectileFireData
// Size: 0x38 (Inherited: 0x00)
struct FProjectileFireData {
	struct UFiringStateComponent* FiringState; // 0x00(0x08)
	struct TArray<struct FFiringResults> FiringResults; // 0x08(0x10)
	int32_t BurstShotNumber; // 0x18(0x04)
	int32_t AmmoRemaining; // 0x1c(0x04)
	bool bTracerEnabled; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	int32_t RandomSeed; // 0x24(0x04)
	int32_t YawSwitchBits; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct AShooterPlayerState* FiringPlayerState; // 0x30(0x08)
};

// ScriptStruct ShooterGame.BurstTuning
// Size: 0x08 (Inherited: 0x00)
struct FBurstTuning {
	int32_t BurstShotsPerEntry; // 0x00(0x04)
	float BurstRecoveryTime; // 0x04(0x04)
};

// ScriptStruct ShooterGame.FiringStateVariables
// Size: 0x10 (Inherited: 0x00)
struct FFiringStateVariables {
	int32_t ShotsFiredThisEntry; // 0x00(0x04)
	int32_t RoundsUntilNextTracer; // 0x04(0x04)
	struct UStateComponent* ScriptNextState; // 0x08(0x08)
};

// ScriptStruct ShooterGame.ScheduledTimeStepChange
// Size: 0x08 (Inherited: 0x00)
struct FScheduledTimeStepChange {
	struct FTimeStampIndex TimeStampIndex; // 0x00(0x04)
	char MoveStepsPerSecond; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct ShooterGame.FlyoutDelegateHandles
// Size: 0x10 (Inherited: 0x00)
struct FFlyoutDelegateHandles {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ShooterGame.FoWRelevancyMetrics
// Size: 0xc0 (Inherited: 0x00)
struct FFoWRelevancyMetrics {
	struct FString PlayerSubject; // 0x00(0x10)
	uint32_t TotalExpiredEntriesCount; // 0x10(0x04)
	uint32_t RedundantExpiredEntriesCount; // 0x14(0x04)
	uint32_t TotalExpiredRecalculations; // 0x18(0x04)
	uint32_t RedundantExpiredRecalculations; // 0x1c(0x04)
	struct TMap<struct FString, enum class EFoWDebuggableRelevancyResult> OtherPlayersRelevancyToMe; // 0x20(0x50)
	struct TMap<struct FString, enum class EFoWDebuggableRelevancyResult> MyRelevancyToOtherPlayers; // 0x70(0x50)
};

// ScriptStruct ShooterGame.AresFontStyle
// Size: 0x68 (Inherited: 0x00)
struct FAresFontStyle {
	struct UObject* FontObject; // 0x00(0x08)
	struct FName TypefaceFontName; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct UObject* FontMaterial; // 0x18(0x08)
	struct FLinearColor Color; // 0x20(0x10)
	struct FLinearColor ShadowColorAndOpacity; // 0x30(0x10)
	int32_t Size_Desktop; // 0x40(0x04)
	int32_t Size_Mobile; // 0x44(0x04)
	int32_t Size_Console; // 0x48(0x04)
	int32_t Tracking_Desktop; // 0x4c(0x04)
	int32_t Tracking_Mobile; // 0x50(0x04)
	int32_t Tracking_Console; // 0x54(0x04)
	bool bOverride_FontObject; // 0x58(0x01)
	bool bOverride_TypefaceFontName; // 0x59(0x01)
	bool bOverride_FontMaterial; // 0x5a(0x01)
	bool bOverride_Color; // 0x5b(0x01)
	bool bOverride_ShadowColorAndOpacity; // 0x5c(0x01)
	bool bOverride_Size_Desktop; // 0x5d(0x01)
	bool bOverride_Size_Mobile; // 0x5e(0x01)
	bool bOverride_Size_Console; // 0x5f(0x01)
	bool bOverride_Tracking_Desktop; // 0x60(0x01)
	bool bOverride_Tracking_Mobile; // 0x61(0x01)
	bool bOverride_Tracking_Console; // 0x62(0x01)
	char pad_63[0x5]; // 0x63(0x05)
};

// ScriptStruct ShooterGame.FootstepABTestEvent
// Size: 0xa8 (Inherited: 0x00)
struct FFootstepABTestEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FString TestName; // 0x68(0x10)
	struct FString CohortName; // 0x78(0x10)
	struct FTelemetryPlatformInfo PlatformInfo; // 0x88(0x20)
};

// ScriptStruct ShooterGame.FootstepOverrideType
// Size: 0x10 (Inherited: 0x00)
struct FFootstepOverrideType {
	struct UPhysicalMaterial* OverrideMaterial; // 0x00(0x08)
	float EndTimeStamp; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.PhysicsState
// Size: 0x30 (Inherited: 0x00)
struct FPhysicsState {
	struct FVector Location; // 0x00(0x18)
	struct FVector Velocity; // 0x18(0x18)
};

// ScriptStruct ShooterGame.PhysicsDerivative
// Size: 0x30 (Inherited: 0x00)
struct FPhysicsDerivative {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct ShooterGame.NetworkedForceModuleInfo
// Size: 0x50 (Inherited: 0x00)
struct FNetworkedForceModuleInfo {
	struct FForceModuleHandle Handle; // 0x00(0x08)
	struct AActor* Source; // 0x08(0x08)
	struct FVector SourceLocation; // 0x10(0x18)
	struct UForceModule* ModuleClass; // 0x28(0x08)
	float Duration; // 0x30(0x04)
	struct FNetworkedMovementTimestamp Timestamp; // 0x34(0x10)
	char pad_44[0x4]; // 0x44(0x04)
	struct AActor* ContextActor; // 0x48(0x08)
};

// ScriptStruct ShooterGame.ForceModuleRecord
// Size: 0x30 (Inherited: 0x00)
struct FForceModuleRecord {
	struct AActor* Source; // 0x00(0x08)
	struct UForceModule* ModuleType; // 0x08(0x08)
	float ModuleDuration; // 0x10(0x04)
	struct FNetworkedMovementTimestamp Timestamp; // 0x14(0x10)
	char pad_24[0x4]; // 0x24(0x04)
	struct AActor* ContextActor; // 0x28(0x08)
};

// ScriptStruct ShooterGame.FresnelSettings
// Size: 0x10 (Inherited: 0x00)
struct FFresnelSettings {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ShooterGame.FXCPoolWarmingListEntry
// Size: 0x18 (Inherited: 0x00)
struct FFXCPoolWarmingListEntry {
	struct FString ClassPath; // 0x00(0x10)
	int32_t Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.GameDataEventBase
// Size: 0x08 (Inherited: 0x00)
struct FGameDataEventBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ShooterGame.RoundDataModel
// Size: 0x28 (Inherited: 0x00)
struct FRoundDataModel {
	int32_t RoundNumber; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UShooterTeamStateDataModel* WinningTeam; // 0x08(0x08)
	struct UShooterTeamStateDataModel* AttackingTeam; // 0x10(0x08)
	struct UShooterTeamStateDataModel* DefendingTeam; // 0x18(0x08)
	enum class EAresRoundOutcome RoundResult; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct ShooterGame.ShooterAssisterDataModel
// Size: 0x10 (Inherited: 0x00)
struct FShooterAssisterDataModel {
	enum class EAresAssistType AssistType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UShooterPlayerStateDataModel* Assister; // 0x08(0x08)
};

// ScriptStruct ShooterGame.GameFeatureAlternateClass
// Size: 0x10 (Inherited: 0x00)
struct FGameFeatureAlternateClass {
	enum class EGameFeatureToggleName ToggleName; // 0x00(0x01)
	bool bToggleValue; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct AActor* Class; // 0x08(0x08)
};

// ScriptStruct ShooterGame.GameFeatureSubclass
// Size: 0x18 (Inherited: 0x00)
struct FGameFeatureSubclass {
	struct AActor* Class; // 0x00(0x08)
	struct TArray<struct FGameFeatureAlternateClass> AlternateClasses; // 0x08(0x10)
};

// ScriptStruct ShooterGame.SessionLoopStatePrediction
// Size: 0x18 (Inherited: 0x00)
struct FSessionLoopStatePrediction {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ShooterGame.ReconcileResult
// Size: 0x0c (Inherited: 0x00)
struct FReconcileResult {
	char pad_0[0xc]; // 0x00(0x0c)
};

// ScriptStruct ShooterGame.AnalogPlayerData
// Size: 0x14 (Inherited: 0x00)
struct FAnalogPlayerData {
	char pad_0[0x14]; // 0x00(0x14)
};

// ScriptStruct ShooterGame.AnalogInput
// Size: 0x20 (Inherited: 0x00)
struct FAnalogInput {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.PlatformInputIconData
// Size: 0x30 (Inherited: 0x08)
struct FPlatformInputIconData : FTableRowBase {
	struct FKey Key; // 0x08(0x20)
	struct UTexture2D* Icon; // 0x28(0x08)
};

// ScriptStruct ShooterGame.GameplayNotificationSlot
// Size: 0x28 (Inherited: 0x00)
struct FGameplayNotificationSlot {
	char pad_0[0x8]; // 0x00(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x08(0x08)
	struct UGameplayNotificationWidget* ActiveWidget; // 0x10(0x08)
	struct TArray<struct UGameplayNotificationWidget*> PrioritizedWidgets; // 0x18(0x10)
};

// ScriptStruct ShooterGame.ShooterSnapshot
// Size: 0x10 (Inherited: 0x00)
struct FShooterSnapshot {
	char pad_0[0x8]; // 0x00(0x08)
	float Timestamp; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.ShooterSnapshotMove
// Size: 0x88 (Inherited: 0x10)
struct FShooterSnapshotMove : FShooterSnapshot {
	struct FVector Location; // 0x10(0x18)
	struct FRotator Rotation; // 0x28(0x18)
	struct FVector Velocity; // 0x40(0x18)
	struct FRotator ControlRotation; // 0x58(0x18)
	struct FVector ClientInputVector; // 0x70(0x18)
};

// ScriptStruct ShooterGame.ShooterSnapshotPlayer
// Size: 0xd0 (Inherited: 0x10)
struct FShooterSnapshotPlayer : FShooterSnapshot {
	int32_t PlayerID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FShooterSnapshotMove MoveSnapshot; // 0x18(0x88)
	int32_t HealthPoints; // 0xa0(0x04)
	int32_t ShieldPoints; // 0xa4(0x04)
	int32_t AmmoInMag; // 0xa8(0x04)
	bool bIsReloading; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	int32_t Kills; // 0xb0(0x04)
	int32_t Deaths; // 0xb4(0x04)
	int32_t Assists; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct TArray<int32_t> VisiblePlayerIDs; // 0xc0(0x10)
};

// ScriptStruct ShooterGame.ShooterSnapshotTeam
// Size: 0x28 (Inherited: 0x10)
struct FShooterSnapshotTeam : FShooterSnapshot {
	int32_t TeamID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FShooterSnapshotPlayer> Players; // 0x18(0x10)
};

// ScriptStruct ShooterGame.ShooterWorldStateSnapshot
// Size: 0x18 (Inherited: 0x00)
struct FShooterWorldStateSnapshot {
	int32_t MatchTimeLeft; // 0x00(0x04)
	bool bHasWinner; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct TArray<struct FShooterSnapshotTeam> Teams; // 0x08(0x10)
};

// ScriptStruct ShooterGame.HUDTimerConfig
// Size: 0x68 (Inherited: 0x00)
struct FHUDTimerConfig {
	bool bOverrideLine1; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FText Line1Override; // 0x08(0x18)
	bool bOverrideLine2; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FText Line2Override; // 0x28(0x18)
	struct FTextureWrapper TimerImage; // 0x40(0x08)
	int32_t SecondsRemainingToShowCentiseconds; // 0x48(0x04)
	int32_t LowTimerThreshhold; // 0x4c(0x04)
	struct FLinearColor LowTimerColor; // 0x50(0x10)
	bool bHideTimerBoundingBox; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct ShooterGame.TextureWrapper
// Size: 0x08 (Inherited: 0x00)
struct FTextureWrapper {
	struct UTexture* Texture; // 0x00(0x08)
};

// ScriptStruct ShooterGame.HUDVisibilityConfig
// Size: 0x0d (Inherited: 0x00)
struct FHUDVisibilityConfig {
	bool bHideFirstPersonHUD; // 0x00(0x01)
	bool bHideTeamInfo; // 0x01(0x01)
	bool bNeverShowTeamInfo; // 0x02(0x01)
	bool bHideCurrentRound; // 0x03(0x01)
	bool bNeverShowCurrentRound; // 0x04(0x01)
	bool bShowRoundTransition; // 0x05(0x01)
	bool bShowSideSwitchTransition; // 0x06(0x01)
	bool bAlwaysShowScoreboard; // 0x07(0x01)
	bool bDebugDrawCharacters; // 0x08(0x01)
	bool bHideInWorldGameplayHud; // 0x09(0x01)
	bool bShowTeammateLoadout; // 0x0a(0x01)
	bool bShowPlayerIntention; // 0x0b(0x01)
	bool bShowRoundPhaseText; // 0x0c(0x01)
};

// ScriptStruct ShooterGame.HUDPhaseContext
// Size: 0x18 (Inherited: 0x00)
struct FHUDPhaseContext {
	struct FText GamePhaseDisplayText; // 0x00(0x18)
};

// ScriptStruct ShooterGame.StageLoadout
// Size: 0x50 (Inherited: 0x00)
struct FStageLoadout {
	struct TMap<enum class EAresItemSlot, struct AAresItem*> Loadout; // 0x00(0x50)
};

// ScriptStruct ShooterGame.StageLoadoutList
// Size: 0x18 (Inherited: 0x00)
struct FStageLoadoutList {
	struct TArray<struct FStageLoadout> Loadouts; // 0x00(0x10)
	bool AvailableOnSubsequentStages; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.StageInfo
// Size: 0x10 (Inherited: 0x00)
struct FStageInfo {
	int32_t Stage; // 0x00(0x04)
	float TotalTime; // 0x04(0x04)
	float ElapsedTime; // 0x08(0x04)
	bool IsActive; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct ShooterGame.GameStatisticValueBucket
// Size: 0x0c (Inherited: 0x00)
struct FGameStatisticValueBucket {
	int32_t RoundNum; // 0x00(0x04)
	float AlliedValue; // 0x04(0x04)
	float EnemyValue; // 0x08(0x04)
};

// ScriptStruct ShooterGame.IndividualGameStatistic
// Size: 0x50 (Inherited: 0x00)
struct FIndividualGameStatistic {
	struct FName KeyName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayName; // 0x10(0x18)
	struct TArray<struct FGameStatisticValueBucket> RoundValues; // 0x28(0x10)
	struct FGameStatisticValueBucket LatestDataBucket; // 0x38(0x0c)
	float GameAlliedValueSum; // 0x44(0x04)
	float GameEnemyValueSum; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ShooterGame.GroupExperimentDetails
// Size: 0x20 (Inherited: 0x00)
struct FGroupExperimentDetails {
	struct FString ExperimentName; // 0x00(0x10)
	struct TArray<struct FString> GroupNames; // 0x10(0x10)
};

// ScriptStruct ShooterGame.GroupExperimentSubjectIDInfo
// Size: 0x28 (Inherited: 0x00)
struct FGroupExperimentSubjectIDInfo {
	struct FString IDType; // 0x00(0x10)
	struct FString IDValue; // 0x10(0x10)
	bool IsHashInput; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct ShooterGame.GroupExperimentAssignmentEvent
// Size: 0x58 (Inherited: 0x00)
struct FGroupExperimentAssignmentEvent {
	struct FString ExperimentName; // 0x00(0x10)
	struct FString ExperimentGroupName; // 0x10(0x10)
	int32_t ExperimentGroupIndex; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FGroupExperimentSubjectIDInfo> GroupAssignmentIds; // 0x28(0x10)
	struct FTelemetryPlatformDetails platformDetails; // 0x38(0x20)
};

// ScriptStruct ShooterGame.TelemetryPlatformDetails
// Size: 0x20 (Inherited: 0x00)
struct FTelemetryPlatformDetails {
	struct FString PlatformType; // 0x00(0x10)
	struct FString platformMetadata; // 0x10(0x10)
};

// ScriptStruct ShooterGame.HovercardCacheEntry
// Size: 0x08 (Inherited: 0x00)
struct FHovercardCacheEntry {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ShooterGame.AresListConstructArgs
// Size: 0x1c (Inherited: 0x00)
struct FAresListConstructArgs {
	enum class EAresListType ListType; // 0x00(0x01)
	bool bEnableManualListTypeEdit; // 0x01(0x01)
	bool bAllowFocus; // 0x02(0x01)
	enum class ESelectionMode SelectionMode; // 0x03(0x01)
	bool bNavigationIsSelection; // 0x04(0x01)
	bool bClearSelectionOnClick; // 0x05(0x01)
	bool bScrollingIsNavigation; // 0x06(0x01)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x07(0x01)
	bool bReturnFocusToSelection; // 0x08(0x01)
	bool bReturnFocusWithDirectionalNavigation; // 0x09(0x01)
	enum class EAresListFocusReturnType FocusReturnType; // 0x0a(0x01)
	enum class EOrientation Orientation; // 0x0b(0x01)
	enum class EListItemAlignment TileAlignment; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float EntryHeight; // 0x10(0x04)
	float EntryWidth; // 0x14(0x04)
	bool bWrapDirectionalNavigation; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct ShooterGame.AresListConfiguration
// Size: 0x38 (Inherited: 0x00)
struct FAresListConfiguration {
	struct UUserWidget* EntryWidgetClass; // 0x00(0x08)
	float EntrySpacing; // 0x08(0x04)
	float HorizontalEntrySpacing; // 0x0c(0x04)
	float VerticalEntrySpacing; // 0x10(0x04)
	bool bShouldRegenerationRefreshSelection; // 0x14(0x01)
	bool bShouldListRegenerateWithIdenticalItemsSet; // 0x15(0x01)
	bool bAutoExpandAll; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	struct FAresListConstructArgs ListConstructArgs; // 0x18(0x1c)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.AresPaginatedListConfiguration
// Size: 0x0c (Inherited: 0x00)
struct FAresPaginatedListConfiguration {
	enum class EAresListScrollMode ListScrollMode; // 0x00(0x01)
	bool bShowScrollbar; // 0x01(0x01)
	bool bEnableScrollAnimation; // 0x02(0x01)
	bool bShouldPaginationLoop; // 0x03(0x01)
	int32_t ItemsDisplayedPerPageOverride; // 0x04(0x04)
	bool bShouldSelectionTriggerPagination; // 0x08(0x01)
	bool bShouldPaginationFocusFirstElement; // 0x09(0x01)
	bool bFirstElementFocusIsDirectionallyDependant; // 0x0a(0x01)
	bool bShouldPaginationFocusFallbackToFirstElement; // 0x0b(0x01)
};

// ScriptStruct ShooterGame.NetworkedPredictedUse
// Size: 0x20 (Inherited: 0x00)
struct FNetworkedPredictedUse {
	struct UUsableComponent* UsableComponent; // 0x00(0x08)
	struct FNetworkedMovementTimestamp Timestamp; // 0x08(0x10)
	enum class EUseFinishType UseType; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ShooterGame.CurrentUsableInfo
// Size: 0x28 (Inherited: 0x00)
struct FCurrentUsableInfo {
	struct UUsableComponent* CurrentUsingComponent; // 0x00(0x08)
	enum class EUseFinishType UseFinishType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t ChangeId; // 0x0c(0x04)
	float CurrentUsingStartTime; // 0x10(0x04)
	struct FNetworkedMovementTimestamp CurrentUsingStartMovementTime; // 0x14(0x10)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ShooterGame.RiotLoginStatus
// Size: 0x18 (Inherited: 0x00)
struct FRiotLoginStatus {
	bool IsReady; // 0x00(0x01)
	enum class ERiotLoginStatusState State; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString ErrorDescription; // 0x08(0x10)
};

// ScriptStruct ShooterGame.JoinInProgressGameDataEventBase
// Size: 0x38 (Inherited: 0x08)
struct FJoinInProgressGameDataEventBase : FGameDataEventBase {
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct ShooterGame.DropInEnabledUpdatedGameDataEvent
// Size: 0x40 (Inherited: 0x38)
struct FDropInEnabledUpdatedGameDataEvent : FJoinInProgressGameDataEventBase {
	char pad_38[0x8]; // 0x38(0x08)
};

// ScriptStruct ShooterGame.PlayerDisassociatedGameDataEvent
// Size: 0x48 (Inherited: 0x38)
struct FPlayerDisassociatedGameDataEvent : FJoinInProgressGameDataEventBase {
	char pad_38[0x10]; // 0x38(0x10)
};

// ScriptStruct ShooterGame.PlayerJoinCompleteGameDataEvent
// Size: 0x58 (Inherited: 0x38)
struct FPlayerJoinCompleteGameDataEvent : FJoinInProgressGameDataEventBase {
	char pad_38[0x20]; // 0x38(0x20)
};

// ScriptStruct ShooterGame.LatencyDataPayload
// Size: 0x48 (Inherited: 0x00)
struct FLatencyDataPayload {
	struct FString Timestamp; // 0x00(0x10)
	uint32_t PeriodInSeconds; // 0x10(0x04)
	uint32_t Sent; // 0x14(0x04)
	uint32_t Lost; // 0x18(0x04)
	uint32_t AverageRTT; // 0x1c(0x04)
	uint32_t Jitter; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString Destination; // 0x28(0x10)
	struct FString ProxyAddress; // 0x38(0x10)
};

// ScriptStruct ShooterGame.LatencyMultiDataPayload
// Size: 0x10 (Inherited: 0x00)
struct FLatencyMultiDataPayload {
	struct TArray<struct FLatencyDataPayload> Packets; // 0x00(0x10)
};

// ScriptStruct ShooterGame.LeaderboardPlayersCacheKey
// Size: 0x28 (Inherited: 0x00)
struct FLeaderboardPlayersCacheKey {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct ShooterGame.LeaderboardPlayersCache
// Size: 0x18 (Inherited: 0x00)
struct FLeaderboardPlayersCache {
	struct TArray<struct FLeaderboardPlayer> LeaderboardPlayers; // 0x00(0x10)
	char pad_10[0x8]; // 0x10(0x08)
};

// ScriptStruct ShooterGame.LegalInfoDTO
// Size: 0x10 (Inherited: 0x00)
struct FLegalInfoDTO {
	struct FString Content; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AresCrosshairImage
// Size: 0x30 (Inherited: 0x00)
struct FAresCrosshairImage {
	struct UTexture* Image; // 0x00(0x08)
	struct FAresHudImageParams ImageParams; // 0x08(0x20)
	enum class EAresDrawOrigin DrawOrigin; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ShooterGame.BindingsCategoryDataEntry
// Size: 0x28 (Inherited: 0x00)
struct FBindingsCategoryDataEntry {
	struct FText LocalizedCategoryName; // 0x00(0x18)
	struct TArray<struct UActionTraits*> ActionTraits; // 0x18(0x10)
};

// ScriptStruct ShooterGame.ChordedBindingsDataEntry
// Size: 0x28 (Inherited: 0x00)
struct FChordedBindingsDataEntry {
	struct TArray<struct UActionTraits*> AlternatePair; // 0x00(0x10)
	struct TArray<struct UActionTraits*> ComboPair; // 0x10(0x10)
	enum class EChordedBindingContext ChordedActionsContext; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct ShooterGame.LiveStoryTelemetryEvent
// Size: 0x30 (Inherited: 0x00)
struct FLiveStoryTelemetryEvent {
	struct FString InteractableObjectName; // 0x00(0x10)
	struct FString TelemetryLabel; // 0x10(0x10)
	struct FString Subject; // 0x20(0x10)
};

// ScriptStruct ShooterGame.PreloadSystemMetric
// Size: 0x08 (Inherited: 0x00)
struct FPreloadSystemMetric {
	int32_t LoadedCount; // 0x00(0x04)
	int32_t RequestedCount; // 0x04(0x04)
};

// ScriptStruct ShooterGame.PreloadMetrics
// Size: 0x28 (Inherited: 0x00)
struct FPreloadMetrics {
	struct FPreloadSystemMetric UI; // 0x00(0x08)
	struct FPreloadSystemMetric BaseEquippables; // 0x08(0x08)
	struct FPreloadSystemMetric Personalization; // 0x10(0x08)
	struct FPreloadSystemMetric Characters; // 0x18(0x08)
	struct FPreloadSystemMetric Map; // 0x20(0x08)
};

// ScriptStruct ShooterGame.ClientLaunchTimeStats
// Size: 0x38 (Inherited: 0x00)
struct FClientLaunchTimeStats {
	double TotalLoadTimeSecs; // 0x00(0x08)
	double InitializationTimeSecs; // 0x08(0x08)
	double TransitionTimeSecs; // 0x10(0x08)
	double MapReadyTimeSecs; // 0x18(0x08)
	double PlatformReadyTimeSecs; // 0x20(0x08)
	double EngineInitializationTimeSecs; // 0x28(0x08)
	double PlatformInitializationTimeSecs; // 0x30(0x08)
};

// ScriptStruct ShooterGame.InitSystemTimings
// Size: 0x10 (Inherited: 0x00)
struct FInitSystemTimings {
	double ContentIndexInitializationTimeSecs; // 0x00(0x08)
	double PreloadManagerInitializationTimeSecs; // 0x08(0x08)
};

// ScriptStruct ShooterGame.ClientReconnectToInGameLaunchTimes
// Size: 0x68 (Inherited: 0x00)
struct FClientReconnectToInGameLaunchTimes {
	struct FString InstanceId; // 0x00(0x10)
	struct FString MatchID; // 0x10(0x10)
	struct FClientLaunchTimeStats ClientLaunchTimeStats; // 0x20(0x38)
	struct FInitSystemTimings InitSystemTimings; // 0x58(0x10)
};

// ScriptStruct ShooterGame.SubsystemTimings
// Size: 0x18 (Inherited: 0x00)
struct FSubsystemTimings {
	struct FString SubsystemName; // 0x00(0x10)
	int32_t TotalInitializationTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.ClientLaunchTimes
// Size: 0x70 (Inherited: 0x00)
struct FClientLaunchTimes {
	struct FString InstanceId; // 0x00(0x10)
	double InitialMainMenuLoadSecs; // 0x10(0x08)
	struct FClientLaunchTimeStats ClientLaunchTimeStats; // 0x18(0x38)
	struct FInitSystemTimings InitSystemTimings; // 0x50(0x10)
	struct TArray<struct FSubsystemTimings> InitSubsystemTimings; // 0x60(0x10)
};

// ScriptStruct ShooterGame.ClientTransitionLoadTimeStats
// Size: 0x20 (Inherited: 0x00)
struct FClientTransitionLoadTimeStats {
	double TotalLoadTimeSecs; // 0x00(0x08)
	double MapReadyTimeSecs; // 0x08(0x08)
	double PlatformReadyTimeSecs; // 0x10(0x08)
	double BlockedOnPreloadingTimeSecs; // 0x18(0x08)
};

// ScriptStruct ShooterGame.ClientPregameLoadTimes
// Size: 0x40 (Inherited: 0x00)
struct FClientPregameLoadTimes {
	struct FString InstanceId; // 0x00(0x10)
	struct FString MatchID; // 0x10(0x10)
	struct FClientTransitionLoadTimeStats ClientTransitionLoadTimeStats; // 0x20(0x20)
};

// ScriptStruct ShooterGame.ClientLoadTimes
// Size: 0x78 (Inherited: 0x00)
struct FClientLoadTimes {
	struct FString InstanceId; // 0x00(0x10)
	struct FString MatchID; // 0x10(0x10)
	struct FClientTransitionLoadTimeStats ClientTransitionLoadTimeStats; // 0x20(0x20)
	double BlockedOnRemoteLoadingTimeSecs; // 0x40(0x08)
	double MatchSetupTimeSecs; // 0x48(0x08)
	struct FPreloadMetrics PreloadMetrics; // 0x50(0x28)
};

// ScriptStruct ShooterGame.ConsoleClientLaunchTimes
// Size: 0x88 (Inherited: 0x00)
struct FConsoleClientLaunchTimes {
	struct FString InstanceId; // 0x00(0x10)
	double BootToEngagementReadyTimeSecs; // 0x10(0x08)
	double EngagementToLoggedInTimeSecs; // 0x18(0x08)
	double LoggedInToMainMenuTimeSecs; // 0x20(0x08)
	struct TArray<struct FSubsystemTimings> InitSubsystemTimings; // 0x28(0x10)
	double HotfixTimeSecs; // 0x38(0x08)
	bool DidApplyHotfix; // 0x40(0x01)
	bool IsSoftReset; // 0x41(0x01)
	char pad_42[0x6]; // 0x42(0x06)
	struct FString SoftResetReason; // 0x48(0x10)
	struct FString DeviceModel; // 0x58(0x10)
	struct FTelemetryPlatformInfo PlatformInfo; // 0x68(0x20)
};

// ScriptStruct ShooterGame.ServerGracePeriodDelay
// Size: 0x20 (Inherited: 0x00)
struct FServerGracePeriodDelay {
	double GracePeriodDelay; // 0x00(0x08)
	int32_t PlayerCount; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString MatchID; // 0x10(0x10)
};

// ScriptStruct ShooterGame.LocalePreferenceInfo
// Size: 0x10 (Inherited: 0x00)
struct FLocalePreferenceInfo {
	struct FString Locale; // 0x00(0x10)
};

// ScriptStruct ShooterGame.LoginQueueTokenResponse
// Size: 0x28 (Inherited: 0x00)
struct FLoginQueueTokenResponse {
	struct FString Token; // 0x00(0x10)
	struct FString Type; // 0x10(0x10)
	enum class ELoginQueueTokenType TypeEnum; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct ShooterGame.LoginQueueTokenRequest
// Size: 0x30 (Inherited: 0x00)
struct FLoginQueueTokenRequest {
	struct FString Userinfo; // 0x00(0x10)
	struct FString Entitlements; // 0x10(0x10)
	struct FString ClientName; // 0x20(0x10)
};

// ScriptStruct ShooterGame.LoginQueueQueuedTokenRequest
// Size: 0x40 (Inherited: 0x00)
struct FLoginQueueQueuedTokenRequest {
	struct FString Userinfo; // 0x00(0x10)
	struct FString Entitlements; // 0x10(0x10)
	struct FString ClientName; // 0x20(0x10)
	struct FString QueueToken; // 0x30(0x10)
};

// ScriptStruct ShooterGame.LoginQueueQueueToken
// Size: 0x18 (Inherited: 0x00)
struct FLoginQueueQueueToken {
	uint64_t QueuePos; // 0x00(0x08)
	float RetryAfter; // 0x08(0x04)
	int32_t WaitTime; // 0x0c(0x04)
	int32_t TicketId; // 0x10(0x04)
	bool Full; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct ShooterGame.AresMainMenuNavBarData
// Size: 0x28 (Inherited: 0x00)
struct FAresMainMenuNavBarData {
	enum class EAresMainMenuTopNavigationState BackButtonTarget; // 0x00(0x01)
	bool bInheritBannerText; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FText BannerText; // 0x08(0x18)
	bool bInheritShownElements; // 0x20(0x01)
	bool bShowSettingsButton; // 0x21(0x01)
	bool bShowHomeButton; // 0x22(0x01)
	bool bShowSocialButton; // 0x23(0x01)
	bool bShowCurrency; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct ShooterGame.MapPingData
// Size: 0x10 (Inherited: 0x00)
struct FMapPingData {
	struct AEffectContainer* PingEffect; // 0x00(0x08)
	struct UTexture* IconImage; // 0x08(0x08)
};

// ScriptStruct ShooterGame.ActivePingData
// Size: 0x50 (Inherited: 0x00)
struct FActivePingData {
	struct FEffectID EffectID; // 0x00(0x20)
	struct FVector PingLocation; // 0x20(0x18)
	struct FMapPingData PingData; // 0x38(0x10)
	float PingEndTimestamp; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ShooterGame.AltModeUtilityEntry
// Size: 0x20 (Inherited: 0x00)
struct FAltModeUtilityEntry {
	struct FString UtilityType; // 0x00(0x10)
	struct FString UtilityName; // 0x10(0x10)
};

// ScriptStruct ShooterGame.AltModeTeamInfo
// Size: 0x30 (Inherited: 0x00)
struct FAltModeTeamInfo {
	int32_t NumAliveMembers; // 0x00(0x04)
	int32_t NumDownedMembers; // 0x04(0x04)
	int32_t NumDeadMembers; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString TeamID; // 0x10(0x10)
	struct TArray<struct FAltModeUtilityEntry> AcquiredUtility; // 0x20(0x10)
};

// ScriptStruct ShooterGame.AltModePhaseEvent
// Size: 0xe0 (Inherited: 0x00)
struct FAltModePhaseEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FString PhaseEvent; // 0x90(0x10)
	struct TArray<struct FAltModeTeamInfo> AliveTeams; // 0xa0(0x10)
	struct FTelemetryPlatformDetails clientPlatformDetails; // 0xb0(0x20)
	struct FString PlatformType; // 0xd0(0x10)
};

// ScriptStruct ShooterGame.AltModeLifecycleEvent
// Size: 0x1f0 (Inherited: 0x00)
struct FAltModeLifecycleEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FString LifecycleEventName; // 0x90(0x10)
	struct FGameEventPlayerInfo TargetPlayerInfo; // 0xa0(0x60)
	struct FGameEventPlayerInfo InstigatorPlayerInfo; // 0x100(0x60)
	struct FAltModeTeamInfo TargetTeamInfo; // 0x160(0x30)
	struct FAltModeTeamInfo InstigatorTeamInfo; // 0x190(0x30)
	struct FTelemetryPlatformDetails clientPlatformDetails; // 0x1c0(0x20)
	struct FString PlatformType; // 0x1e0(0x10)
};

// ScriptStruct ShooterGame.MassReward
// Size: 0x60 (Inherited: 0x00)
struct FMassReward {
	struct FString Type; // 0x00(0x10)
	struct FGuid ItemId; // 0x10(0x10)
	struct FGuid ItemTypeID; // 0x20(0x10)
	int32_t Count; // 0x30(0x04)
	struct FGuid CurrencyID; // 0x34(0x10)
	int32_t CurrencyCount; // 0x44(0x04)
	struct FGuid ContractID; // 0x48(0x10)
	int32_t XPAmount; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct ShooterGame.MassRewardCeremony
// Size: 0x30 (Inherited: 0x00)
struct FMassRewardCeremony {
	struct FString Type; // 0x00(0x10)
	struct FGuid SourceID; // 0x10(0x10)
	struct TArray<struct FMassReward> Rewards; // 0x20(0x10)
};

// ScriptStruct ShooterGame.MassRewardsPlayer
// Size: 0x28 (Inherited: 0x00)
struct FMassRewardsPlayer {
	int64_t Version; // 0x00(0x08)
	struct FGuid Subject; // 0x08(0x10)
	struct TArray<struct FMassRewardCeremony> Ceremonies; // 0x18(0x10)
};

// ScriptStruct ShooterGame.ProcessedPlayerRoundEconomyInfo
// Size: 0x50 (Inherited: 0x00)
struct FProcessedPlayerRoundEconomyInfo {
	struct FPlayerRoundEconomyInfoDTO Data; // 0x00(0x40)
	struct UEquippableUIData* WeaponUIData; // 0x40(0x08)
	struct UArmorUIData* ArmorUIData; // 0x48(0x08)
};

// ScriptStruct ShooterGame.ProcessedKillEvent
// Size: 0xa8 (Inherited: 0x00)
struct FProcessedKillEvent {
	struct FKillDetailsDTO KillEvent; // 0x00(0x80)
	float Distance; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
	struct UEquippableUIData* EquippableUIData; // 0x88(0x08)
	struct UCharacterAbilityUIData* CharacterAbilityUIData; // 0x90(0x08)
	struct UCharacterUIData* KillerCharacterUIData; // 0x98(0x08)
	struct UCharacterUIData* VictimCharacterUIData; // 0xa0(0x08)
};

// ScriptStruct ShooterGame.ProcessedPlayerRoundResult
// Size: 0x220 (Inherited: 0x00)
struct FProcessedPlayerRoundResult {
	struct FString Subject; // 0x00(0x10)
	int32_t RoundNum; // 0x10(0x04)
	int32_t RoundKills; // 0x14(0x04)
	int32_t RoundDeaths; // 0x18(0x04)
	int32_t RoundAssists; // 0x1c(0x04)
	int32_t RoundDamageDealt; // 0x20(0x04)
	bool IsBombPlanter; // 0x24(0x01)
	bool IsBombDefuser; // 0x25(0x01)
	bool IsRoundWinner; // 0x26(0x01)
	bool GotFirstBlood; // 0x27(0x01)
	int32_t RoundScore; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<struct FProcessedKillEvent> Kills; // 0x30(0x10)
	struct FProcessedPlayerRoundEconomyInfo EconomyInfo; // 0x40(0x50)
	struct TMap<struct FString, struct FPlayerRoundDamageDTOV2> Damage; // 0x90(0x50)
	char pad_E0[0x140]; // 0xe0(0x140)
};

// ScriptStruct ShooterGame.ProcessedRoundResult
// Size: 0x120 (Inherited: 0x00)
struct FProcessedRoundResult {
	struct FRoundResultDTO RoundResultRaw; // 0x00(0xa0)
	struct TMap<struct FString, struct FProcessedPlayerRoundResult> PlayerRoundResultMap; // 0xa0(0x50)
	struct TArray<struct FProcessedKillEvent> Kills; // 0xf0(0x10)
	struct FName FirstBloodTeam; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct TArray<struct FProcessedPlayerRoundEconomyInfo> PlayerEconomies; // 0x110(0x10)
};

// ScriptStruct ShooterGame.ProcessedPlayerDetails
// Size: 0x310 (Inherited: 0x00)
struct FProcessedPlayerDetails {
	struct FPlayerDetailsDTO PlayerDetailsRaw; // 0x00(0x178)
	int32_t BestRound; // 0x178(0x04)
	int32_t BestRoundBeforeOT; // 0x17c(0x04)
	int32_t TotalDamageDealt; // 0x180(0x04)
	int32_t TotalLoadoutValue; // 0x184(0x04)
	int32_t TotalMoneySpent; // 0x188(0x04)
	int32_t BombPlants; // 0x18c(0x04)
	int32_t BombDefuses; // 0x190(0x04)
	char pad_194[0x4]; // 0x194(0x04)
	struct UCharacterUIData* CharacterUIData; // 0x198(0x08)
	struct UTexture2D* FullPortrait; // 0x1a0(0x08)
	struct FAbilityEffectDTO AbilityEffects; // 0x1a8(0x140)
	struct UCharacterDataAsset* CharacterDataAsset; // 0x2e8(0x08)
	bool bIsABot; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct UPlayerCardDataAsset* PlayerCardAsset; // 0x2f8(0x08)
	struct UPlayerTitleDataAsset* PlayerTitleDataAsset; // 0x300(0x08)
	struct ULevelBorderDataAsset* LevelBorderDataAsset; // 0x308(0x08)
};

// ScriptStruct ShooterGame.ScoreboardPlayerFinalStatsInfo
// Size: 0x10 (Inherited: 0x00)
struct FScoreboardPlayerFinalStatsInfo {
	int32_t Kills; // 0x00(0x04)
	int32_t Deaths; // 0x04(0x04)
	int32_t Assists; // 0x08(0x04)
	int32_t Score; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.ProcessedMatchDetails
// Size: 0x278 (Inherited: 0x00)
struct FProcessedMatchDetails {
	struct FMatchInfoDTO MatchInfo; // 0x00(0xf8)
	struct UMapUIData* MapUIData; // 0xf8(0x08)
	struct UGameModeDataAsset* GameModeDataAsset; // 0x100(0x08)
	struct USeasonDataAsset* SeasonDataAsset; // 0x108(0x08)
	struct UCompetitiveSeasonDataAsset* CompetitiveSeasonDataAsset; // 0x110(0x08)
	struct FDateTime GameStartTime; // 0x118(0x08)
	struct FTimespan GameLength; // 0x120(0x08)
	struct TMap<struct FName, struct FTeamDetailsDTO> Teams; // 0x128(0x50)
	struct TMap<struct FString, struct FProcessedPlayerDetails> Players; // 0x178(0x50)
	struct TMap<int32_t, struct FProcessedRoundResult> RoundResults; // 0x1c8(0x50)
	struct TArray<struct FProcessedKillEvent> KillEvents; // 0x218(0x10)
	char pad_228[0x50]; // 0x228(0x50)
};

// ScriptStruct ShooterGame.MatchDetailsEnemyInteraction
// Size: 0x78 (Inherited: 0x00)
struct FMatchDetailsEnemyInteraction {
	enum class EMatchDetailsInteractionType InteractionType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UEquippableUIData* SelfWeapon; // 0x08(0x08)
	struct UEquippableUIData* EnemyWeapon; // 0x10(0x08)
	struct FPlayerRoundDamageDTOV2 DamageReceived; // 0x18(0x20)
	struct FPlayerRoundDamageDTOV2 DamageDealt; // 0x38(0x20)
	int32_t Distance; // 0x58(0x04)
	int32_t RoundNum; // 0x5c(0x04)
	bool RoundWin; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct UArmorUIData* SelfArmor; // 0x68(0x08)
	struct UArmorUIData* EnemyArmor; // 0x70(0x08)
};

// ScriptStruct ShooterGame.MatchDetailsEnemyInteractionList
// Size: 0x38 (Inherited: 0x00)
struct FMatchDetailsEnemyInteractionList {
	struct TArray<struct FMatchDetailsEnemyInteraction> Interactions; // 0x00(0x10)
	int32_t Kills; // 0x10(0x04)
	int32_t Deaths; // 0x14(0x04)
	int32_t Assists; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UCharacterUIData* Character; // 0x20(0x08)
	struct FString Subject; // 0x28(0x10)
};

// ScriptStruct ShooterGame.MatchDetailsDebugOverrides
// Size: 0x20 (Inherited: 0x00)
struct FMatchDetailsDebugOverrides {
	int32_t SelfInitialRank; // 0x00(0x04)
	struct FName AgentAllyOverride; // 0x04(0x0c)
	struct FName AgentOpponentOverride; // 0x10(0x0c)
	bool IsRanked; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct ShooterGame.PlayerScoreDTO
// Size: 0x18 (Inherited: 0x00)
struct FPlayerScoreDTO {
	struct FString Subject; // 0x00(0x10)
	int32_t Score; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.PlayerRoundDamageDTO
// Size: 0x20 (Inherited: 0x00)
struct FPlayerRoundDamageDTO {
	int32_t Round; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Receiver; // 0x08(0x10)
	int32_t Damage; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.MatchHistoryRequestContext
// Size: 0x28 (Inherited: 0x00)
struct FMatchHistoryRequestContext {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct ShooterGame.KDA
// Size: 0x0c (Inherited: 0x00)
struct FKDA {
	int32_t Kills; // 0x00(0x04)
	int32_t Deaths; // 0x04(0x04)
	int32_t Assists; // 0x08(0x04)
};

// ScriptStruct ShooterGame.PlayerHistoryEntry
// Size: 0x20 (Inherited: 0x00)
struct FPlayerHistoryEntry {
	struct FString MatchID; // 0x00(0x10)
	struct FString TeamID; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PlayerHistory
// Size: 0x30 (Inherited: 0x00)
struct FPlayerHistory {
	struct FString Subject; // 0x00(0x10)
	int32_t BeginIndex; // 0x10(0x04)
	int32_t EndIndex; // 0x14(0x04)
	int32_t Total; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FPlayerHistoryEntry> History; // 0x20(0x10)
};

// ScriptStruct ShooterGame.LeaderboardCacheKey
// Size: 0x20 (Inherited: 0x00)
struct FLeaderboardCacheKey {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.LeaderboardCacheValue
// Size: 0x10 (Inherited: 0x00)
struct FLeaderboardCacheValue {
	struct ULeaderboardViewModel* LeaderboardViewModel; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.MatchTeamScoreBreakdown
// Size: 0x18 (Inherited: 0x00)
struct FMatchTeamScoreBreakdown {
	int32_t TotalScore; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct UMatchPlayerScoreBreakdown*> PerPlayerScores; // 0x08(0x10)
};

// ScriptStruct ShooterGame.MatchScoreBreakdown
// Size: 0x38 (Inherited: 0x00)
struct FMatchScoreBreakdown {
	int32_t HighestPlayerScore; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FMatchTeamScoreBreakdown Friendly; // 0x08(0x18)
	struct FMatchTeamScoreBreakdown Enemy; // 0x20(0x18)
};

// ScriptStruct ShooterGame.TeamScoreText
// Size: 0x88 (Inherited: 0x00)
struct FTeamScoreText {
	struct FVector2D DrawOffset; // 0x00(0x10)
	struct FAresHudFontParams FontParams; // 0x10(0x78)
};

// ScriptStruct ShooterGame.TeamScore
// Size: 0x1b0 (Inherited: 0x00)
struct FTeamScore {
	struct FTeamScoreText ScoreText; // 0x00(0x88)
	struct FAresHudTextLabel ScoreTextLabel; // 0x88(0xa8)
	struct FLinearColor ScoreTextTint; // 0x130(0x10)
	struct FLinearColor ScoreIncrementTint; // 0x140(0x10)
	struct FAresTimedInterpolant ScoreIncrementInterpolant; // 0x150(0x1c)
	char pad_16C[0x4]; // 0x16c(0x04)
	struct FAresHudBackgroundImage ScoreBackground; // 0x170(0x40)
};

// ScriptStruct ShooterGame.TeamIcons
// Size: 0x70 (Inherited: 0x00)
struct FTeamIcons {
	struct FVector2D IconOffsets[0x2]; // 0x00(0x20)
	struct FLinearColor IconTints[0x2]; // 0x20(0x20)
	struct UTexture* BlueTeamIcon; // 0x40(0x08)
	struct UTexture* RedTeamIcon; // 0x48(0x08)
	struct FAresHudImageParams TeamIconImageParams; // 0x50(0x20)
};

// ScriptStruct ShooterGame.TeamMoneyText
// Size: 0x98 (Inherited: 0x00)
struct FTeamMoneyText {
	struct FVector2D DrawOffset; // 0x00(0x10)
	struct FAresHudFontParams FontParams; // 0x10(0x78)
	struct FLinearColor TextTint; // 0x88(0x10)
};

// ScriptStruct ShooterGame.TeamMoney
// Size: 0x180 (Inherited: 0x00)
struct FTeamMoney {
	struct FTeamMoneyText MoneyText; // 0x00(0x98)
	struct FAresHudTextLabel MoneyTextLabel; // 0x98(0xa8)
	struct FAresHudBackgroundImage BackgroundImage; // 0x140(0x40)
};

// ScriptStruct ShooterGame.MatchTimer
// Size: 0xe0 (Inherited: 0x00)
struct FMatchTimer {
	struct FVector2D MatchTimerDrawOffset; // 0x00(0x10)
	struct FAresHudFontParams MatchTimerFontParams; // 0x10(0x78)
	struct FText NotInRoundText; // 0x88(0x18)
	struct FAresHudBackgroundImage BackgroundImage; // 0xa0(0x40)
};

// ScriptStruct ShooterGame.RoundNumber
// Size: 0xc8 (Inherited: 0x00)
struct FRoundNumber {
	struct FVector2D RoundNumberDrawOffset; // 0x00(0x10)
	struct FAresHudFontParams RoundNumberFontParams; // 0x10(0x78)
	struct FAresHudBackgroundImage BackgroundImage; // 0x88(0x40)
};

// ScriptStruct ShooterGame.GamePausedText
// Size: 0x140 (Inherited: 0x00)
struct FGamePausedText {
	struct FText PausedText; // 0x00(0x18)
	struct FVector2D DrawOffset; // 0x18(0x10)
	struct FAresHudFontParams FontParams; // 0x28(0x78)
	struct FText PausedByText; // 0xa0(0x18)
	struct FVector2D PausedByDrawOffset; // 0xb8(0x10)
	struct FAresHudFontParams PausedByFontParams; // 0xc8(0x78)
};

// ScriptStruct ShooterGame.AresQueueStatus
// Size: 0x20 (Inherited: 0x00)
struct FAresQueueStatus {
	struct FString QueueID; // 0x00(0x10)
	int32_t NumPartiesInQueue; // 0x10(0x04)
	int32_t NumPlayersInQueue; // 0x14(0x04)
	bool IsSweepingOn; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ShooterGame.RoundRestorePlayerStatsPipelineDataModel
// Size: 0x10 (Inherited: 0x00)
struct FRoundRestorePlayerStatsPipelineDataModel {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ShooterGame.RoundRestoreInventoryItemPipelineDataModel
// Size: 0x18 (Inherited: 0x00)
struct FRoundRestoreInventoryItemPipelineDataModel {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ShooterGame.RoundRestoreInventorySlotPipelineDataModel
// Size: 0x20 (Inherited: 0x00)
struct FRoundRestoreInventorySlotPipelineDataModel {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.RoundRestoreInventoryPipelineDataModel
// Size: 0x20 (Inherited: 0x00)
struct FRoundRestoreInventoryPipelineDataModel {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.RoundRestorePlayerPipelineDataModel
// Size: 0x60 (Inherited: 0x00)
struct FRoundRestorePlayerPipelineDataModel {
	char pad_0[0x60]; // 0x00(0x60)
};

// ScriptStruct ShooterGame.AresRoundResultPipelineDataModel
// Size: 0x30 (Inherited: 0x00)
struct FAresRoundResultPipelineDataModel {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct ShooterGame.RoundRestoreTeamPipelineDataModel
// Size: 0x20 (Inherited: 0x00)
struct FRoundRestoreTeamPipelineDataModel {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.RoundRestoreGameModeInfoPipelineDataModel
// Size: 0x30 (Inherited: 0x00)
struct FRoundRestoreGameModeInfoPipelineDataModel {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct ShooterGame.RoundRestoreRoundDataPipelineDataModel
// Size: 0x48 (Inherited: 0x00)
struct FRoundRestoreRoundDataPipelineDataModel {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct ShooterGame.MatchRecoveryContext
// Size: 0x20 (Inherited: 0x00)
struct FMatchRecoveryContext {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.MatchRecoveryPipelineDataEvent
// Size: 0x20 (Inherited: 0x08)
struct FMatchRecoveryPipelineDataEvent : FGameDataEventBase {
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct ShooterGame.MatchResultBaseEvent
// Size: 0x10 (Inherited: 0x00)
struct FMatchResultBaseEvent {
	struct FString EventType; // 0x00(0x10)
};

// ScriptStruct ShooterGame.MatchInfo
// Size: 0x50 (Inherited: 0x00)
struct FMatchInfo {
	struct FString MatchID; // 0x00(0x10)
	struct FString Version; // 0x10(0x10)
	struct FString Map; // 0x20(0x10)
	int64_t PlaytimeMilliseconds; // 0x30(0x08)
	bool IsValid; // 0x38(0x01)
	enum class EMatchCompletionState CompletionState; // 0x39(0x01)
	bool ShouldMatchDisablePenalties; // 0x3a(0x01)
	bool IsEarlyCompletion; // 0x3b(0x01)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct FString ReplayRecordedStatus; // 0x40(0x10)
};

// ScriptStruct ShooterGame.BaseNewPlayerExperienceStruct
// Size: 0x04 (Inherited: 0x00)
struct FBaseNewPlayerExperienceStruct {
	int32_t IdleTimeMillis; // 0x00(0x04)
};

// ScriptStruct ShooterGame.BaseBasicNewPlayerExperienceStruct
// Size: 0x08 (Inherited: 0x04)
struct FBaseBasicNewPlayerExperienceStruct : FBaseNewPlayerExperienceStruct {
	int32_t ObjectiveCompleteTimeMillis; // 0x04(0x04)
};

// ScriptStruct ShooterGame.KillDetails
// Size: 0x28 (Inherited: 0x00)
struct FKillDetails {
	struct FName PlayerMovementType; // 0x00(0x0c)
	int32_t Headshots; // 0x0c(0x04)
	int32_t TotalShots; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString WeaponName; // 0x18(0x10)
};

// ScriptStruct ShooterGame.AdvancedBotKillDetails
// Size: 0x0c (Inherited: 0x00)
struct FAdvancedBotKillDetails {
	int32_t BotSurvivedDurationMillis; // 0x00(0x04)
	int32_t BotLevelDurationMillis; // 0x04(0x04)
	bool IsKill; // 0x08(0x01)
	bool IsHeadshot; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
};

// ScriptStruct ShooterGame.BasicMovement
// Size: 0x0c (Inherited: 0x08)
struct FBasicMovement : FBaseBasicNewPlayerExperienceStruct {
	bool DidPlayerTriggerInstruction; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct ShooterGame.BasicGunSkill
// Size: 0x10 (Inherited: 0x08)
struct FBasicGunSkill : FBaseBasicNewPlayerExperienceStruct {
	int32_t Attempts; // 0x08(0x04)
	int32_t DamageTaken; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.SneakMission
// Size: 0x10 (Inherited: 0x08)
struct FSneakMission : FBaseBasicNewPlayerExperienceStruct {
	int32_t Attempts; // 0x08(0x04)
	int32_t DamageTaken; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.DroneKill
// Size: 0x20 (Inherited: 0x08)
struct FDroneKill : FBaseBasicNewPlayerExperienceStruct {
	int32_t TotalShots; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString WeaponName; // 0x10(0x10)
};

// ScriptStruct ShooterGame.AdvancedShootingAdaptive
// Size: 0x20 (Inherited: 0x04)
struct FAdvancedShootingAdaptive : FBaseNewPlayerExperienceStruct {
	int32_t Attempts; // 0x04(0x04)
	int32_t AdaptiveBotAverageDurationMillisAllAttempts; // 0x08(0x04)
	int32_t AdaptiveBotAverageDurationMillisFirstAttempt; // 0x0c(0x04)
	struct TArray<struct FAdvancedBotKillDetails> KillDetailsFirstAttempt; // 0x10(0x10)
};

// ScriptStruct ShooterGame.Ability
// Size: 0x14 (Inherited: 0x08)
struct FAbility : FBaseBasicNewPlayerExperienceStruct {
	bool DidPlayerTriggerInstruction; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t Attempts; // 0x0c(0x04)
	int32_t DamageTaken; // 0x10(0x04)
};

// ScriptStruct ShooterGame.BombPlant
// Size: 0x10 (Inherited: 0x08)
struct FBombPlant : FBaseBasicNewPlayerExperienceStruct {
	bool DidPlayerTriggerInstruction; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t DamageTaken; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.DefendBombSite
// Size: 0x10 (Inherited: 0x08)
struct FDefendBombSite : FBaseBasicNewPlayerExperienceStruct {
	bool Success; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	int32_t DamageTaken; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.SettingStatus
// Size: 0x02 (Inherited: 0x00)
struct FSettingStatus {
	bool IsMouseSensitivityDefault; // 0x00(0x01)
	bool IsCrosshairDefault; // 0x01(0x01)
};

// ScriptStruct ShooterGame.SettingStatusV2
// Size: 0x02 (Inherited: 0x00)
struct FSettingStatusV2 {
	bool IsSensitivityDefault; // 0x00(0x01)
	bool IsCrosshairDefault; // 0x01(0x01)
};

// ScriptStruct ShooterGame.NewPlayerExperienceDetails
// Size: 0xb8 (Inherited: 0x00)
struct FNewPlayerExperienceDetails {
	struct FBasicMovement BasicMovement; // 0x00(0x0c)
	struct FBasicGunSkill BasicGunSkill; // 0x0c(0x10)
	struct FSneakMission SneakMission; // 0x1c(0x10)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FDroneKill DroneKill; // 0x30(0x20)
	struct FAdvancedShootingAdaptive AdvancedShootingAdaptive; // 0x50(0x20)
	struct FAbility Ability; // 0x70(0x14)
	struct FBombPlant BombPlant; // 0x84(0x10)
	struct FDefendBombSite DefendBombSite; // 0x94(0x10)
	struct FSettingStatus SettingStatus; // 0xa4(0x02)
	char pad_A6[0x2]; // 0xa6(0x02)
	struct FString VersionString; // 0xa8(0x10)
};

// ScriptStruct ShooterGame.NewPlayerExperienceV2Mission
// Size: 0x30 (Inherited: 0x00)
struct FNewPlayerExperienceV2Mission {
	struct FString MissionName; // 0x00(0x10)
	float TotalTimeTakenSeconds; // 0x10(0x04)
	float TimeAFKSeconds; // 0x14(0x04)
	int32_t Retries; // 0x18(0x04)
	int32_t ShotsFired; // 0x1c(0x04)
	int32_t ShotsLanded; // 0x20(0x04)
	int32_t Headshots; // 0x24(0x04)
	int32_t Deaths; // 0x28(0x04)
	float DamageTaken; // 0x2c(0x04)
};

// ScriptStruct ShooterGame.NewPlayerExperienceV2Details
// Size: 0x20 (Inherited: 0x00)
struct FNewPlayerExperienceV2Details {
	bool bIsValid; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FNewPlayerExperienceV2Mission> Missions; // 0x08(0x10)
	struct FSettingStatusV2 SettingStatus; // 0x18(0x02)
	char pad_1A[0x6]; // 0x1a(0x06)
};

// ScriptStruct ShooterGame.PlayerParticipationPeriod
// Size: 0x20 (Inherited: 0x00)
struct FPlayerParticipationPeriod {
	struct FString SessionStartTime; // 0x00(0x10)
	struct FString SessionEndTime; // 0x10(0x10)
};

// ScriptStruct ShooterGame.ParticipantMatchResults
// Size: 0x198 (Inherited: 0x00)
struct FParticipantMatchResults {
	struct FString Subject; // 0x00(0x10)
	struct FString DisplayName; // 0x10(0x10)
	struct FName TeamID; // 0x20(0x0c)
	int32_t Score; // 0x2c(0x04)
	int32_t RoundsPlayed; // 0x30(0x04)
	int32_t Kills; // 0x34(0x04)
	int32_t Deaths; // 0x38(0x04)
	int32_t Assists; // 0x3c(0x04)
	int64_t PlaytimeMilliseconds; // 0x40(0x08)
	bool IsABot; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	struct FGuid CharacterID; // 0x4c(0x10)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FNewPlayerExperienceDetails NewPlayerExperienceDetails; // 0x60(0xb8)
	struct FNewPlayerExperienceV2Details NewPlayerExperienceV2Details; // 0x118(0x20)
	struct TMap<struct FString, float> BehaviorFactors; // 0x138(0x50)
	struct TArray<struct FPlayerParticipationPeriod> ParticipationPeriods; // 0x188(0x10)
};

// ScriptStruct ShooterGame.RoundResult
// Size: 0x40 (Inherited: 0x00)
struct FRoundResult {
	int32_t RoundNum; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString RoundResult; // 0x08(0x10)
	struct FName WinningTeam; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString WinningTeamRole; // 0x28(0x10)
	enum class EAresRoundOutcome RoundResultCode; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// ScriptStruct ShooterGame.TeamResults
// Size: 0x1c (Inherited: 0x00)
struct FTeamResults {
	struct FName TeamID; // 0x00(0x0c)
	bool WonMatch; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	int32_t RoundsWon; // 0x10(0x04)
	int32_t RoundsPlayed; // 0x14(0x04)
	int32_t NumPoints; // 0x18(0x04)
};

// ScriptStruct ShooterGame.MatchResults
// Size: 0x80 (Inherited: 0x00)
struct FMatchResults {
	struct FMatchInfo MatchInfo; // 0x00(0x50)
	struct TArray<struct FParticipantMatchResults> ParticipantResults; // 0x50(0x10)
	struct TArray<struct FRoundResult> RoundResults; // 0x60(0x10)
	struct TArray<struct FTeamResults> TeamResults; // 0x70(0x10)
};

// ScriptStruct ShooterGame.ParticipantMissionResults
// Size: 0x20 (Inherited: 0x00)
struct FParticipantMissionResults {
	struct FString Subject; // 0x00(0x10)
	struct TArray<struct FMegapacketMission> Missions; // 0x10(0x10)
};

// ScriptStruct ShooterGame.MissionResults
// Size: 0x10 (Inherited: 0x00)
struct FMissionResults {
	struct TArray<struct FParticipantMissionResults> Participants; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ParticipantAccoladeResults
// Size: 0x60 (Inherited: 0x00)
struct FParticipantAccoladeResults {
	struct FString Subject; // 0x00(0x10)
	struct TMap<struct FGuid, int32_t> AccoladeProgress; // 0x10(0x50)
};

// ScriptStruct ShooterGame.AccoladeResults
// Size: 0x10 (Inherited: 0x00)
struct FAccoladeResults {
	struct TArray<struct FParticipantAccoladeResults> Participants; // 0x00(0x10)
};

// ScriptStruct ShooterGame.NPEComponentCompletedEvent
// Size: 0x78 (Inherited: 0x10)
struct FNPEComponentCompletedEvent : FMatchResultBaseEvent {
	struct FNPEObjectiveEvent Data; // 0x10(0x68)
};

// ScriptStruct ShooterGame.MegapacketMatchInfo
// Size: 0x80 (Inherited: 0x00)
struct FMegapacketMatchInfo {
	struct FString MatchID; // 0x00(0x10)
	struct FString MapID; // 0x10(0x10)
	struct FString GamePodID; // 0x20(0x10)
	struct FString Mode; // 0x30(0x10)
	struct FString ProvisioningFlowID; // 0x40(0x10)
	bool IsMatchSampled; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FString SeasonID; // 0x58(0x10)
	struct FString ClientPlatformType; // 0x68(0x10)
	enum class EAresPlatformType ClientPlatformEnum; // 0x78(0x01)
	bool AllowDefaultEncryptionKey; // 0x79(0x01)
	char pad_7A[0x2]; // 0x7a(0x02)
	int32_t TeamSize; // 0x7c(0x04)
};

// ScriptStruct ShooterGame.MatchRecoveryMetadata
// Size: 0x10 (Inherited: 0x00)
struct FMatchRecoveryMetadata {
	struct TArray<struct FRoundRestoreRoundData> Rounds; // 0x00(0x10)
};

// ScriptStruct ShooterGame.RoundRestoreRoundData
// Size: 0x48 (Inherited: 0x00)
struct FRoundRestoreRoundData {
	int32_t RoundNumber; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FRoundRestoreGameModeInfo GameModeInfo; // 0x08(0x30)
	struct TArray<struct FRoundRestorePlayer> Players; // 0x38(0x10)
};

// ScriptStruct ShooterGame.RoundRestorePlayer
// Size: 0x80 (Inherited: 0x00)
struct FRoundRestorePlayer {
	struct FString PlayerID; // 0x00(0x10)
	struct TSoftClassPtr<UObject> CharacterClass; // 0x10(0x30)
	struct FString CharacterClassGUID; // 0x40(0x10)
	struct FRoundRestoreInventory Inventory; // 0x50(0x20)
	struct FRoundRestorePlayerStats Stats; // 0x70(0x10)
};

// ScriptStruct ShooterGame.RoundRestorePlayerStats
// Size: 0x10 (Inherited: 0x00)
struct FRoundRestorePlayerStats {
	int32_t Kills; // 0x00(0x04)
	int32_t Deaths; // 0x04(0x04)
	int32_t Assists; // 0x08(0x04)
	int32_t Score; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.RoundRestoreInventory
// Size: 0x20 (Inherited: 0x00)
struct FRoundRestoreInventory {
	struct TArray<struct FRoundRestoreInventorySlot> ItemSlots; // 0x00(0x10)
	float ShieldAmount; // 0x10(0x04)
	int32_t UltimatePoints; // 0x14(0x04)
	int32_t Money; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.RoundRestoreInventorySlot
// Size: 0x18 (Inherited: 0x00)
struct FRoundRestoreInventorySlot {
	enum class EAresItemSlot Slot; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FRoundRestoreInventoryItem> Items; // 0x08(0x10)
};

// ScriptStruct ShooterGame.RoundRestoreInventoryItem
// Size: 0x38 (Inherited: 0x00)
struct FRoundRestoreInventoryItem {
	struct TSoftClassPtr<UObject> Class; // 0x00(0x30)
	int32_t ResourceUnits; // 0x30(0x04)
	bool bUsesAbilityResources; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
};

// ScriptStruct ShooterGame.RoundRestoreGameModeInfo
// Size: 0x30 (Inherited: 0x00)
struct FRoundRestoreGameModeInfo {
	struct FString GameModeName; // 0x00(0x10)
	struct TArray<struct FRoundRestoreTeam> Teams; // 0x10(0x10)
	struct TArray<struct FRoundRestoreRoundResult> RoundResultHistory; // 0x20(0x10)
};

// ScriptStruct ShooterGame.RoundRestoreRoundResult
// Size: 0x20 (Inherited: 0x00)
struct FRoundRestoreRoundResult {
	struct FName WinningTeam; // 0x00(0x0c)
	enum class EAresTeamRole WinningTeamRole; // 0x0c(0x01)
	enum class EAresRoundOutcome RoundResult; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<struct FName> EliminatedTeams; // 0x10(0x10)
};

// ScriptStruct ShooterGame.RoundRestoreTeam
// Size: 0x10 (Inherited: 0x00)
struct FRoundRestoreTeam {
	struct FName TeamName; // 0x00(0x0c)
	enum class EAresTeamRole TeamRole; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct ShooterGame.CustomGameMetadata
// Size: 0xa8 (Inherited: 0x00)
struct FCustomGameMetadata {
	struct FString OwnerSubject; // 0x00(0x10)
	struct FString PartyId; // 0x10(0x10)
	struct FString GameName; // 0x20(0x10)
	struct FString GameDescription; // 0x30(0x10)
	struct FString Module; // 0x40(0x10)
	bool ForcePostProcessing; // 0x50(0x01)
	bool AllowGameModifiers; // 0x51(0x01)
	bool TournamentModeEnabled; // 0x52(0x01)
	bool UseCustomTeamColors; // 0x53(0x01)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString FirstTeamName; // 0x58(0x10)
	struct FString FirstTeamColor; // 0x68(0x10)
	struct FString SecondTeamName; // 0x78(0x10)
	struct FString SecondTeamColor; // 0x88(0x10)
	struct FMatchRecoveryMetadata MatchRecoveryData; // 0x98(0x10)
};

// ScriptStruct ShooterGame.LoadTestMetadata
// Size: 0x20 (Inherited: 0x00)
struct FLoadTestMetadata {
	struct FString LoadTestID; // 0x00(0x10)
	int32_t InstanceId; // 0x10(0x04)
	int32_t NumPointsToWinGame; // 0x14(0x04)
	int32_t BotsToAdd; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.PregameMetadata
// Size: 0x01 (Inherited: 0x00)
struct FPregameMetadata {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.MatchmakingMetadata
// Size: 0x18 (Inherited: 0x00)
struct FMatchmakingMetadata {
	struct FString QueueID; // 0x00(0x10)
	bool IsRanked; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float NewMapLossReductionModifier; // 0x14(0x04)
};

// ScriptStruct ShooterGame.GameMetadata
// Size: 0xa0 (Inherited: 0x00)
struct FGameMetadata {
	struct TMap<struct FName, struct FString> Config; // 0x00(0x50)
	struct TMap<struct FString, struct FString> Rules; // 0x50(0x50)
};

// ScriptStruct ShooterGame.MegapacketMetadata
// Size: 0x280 (Inherited: 0x00)
struct FMegapacketMetadata {
	struct FCustomGameMetadata CustomGameMetadata; // 0x00(0xa8)
	struct FLoadTestMetadata LoadTestMetadata; // 0xa8(0x20)
	struct FPregameMetadata PregameMetadata; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
	struct FMatchmakingMetadata MatchmakingMetadata; // 0xd0(0x18)
	struct FGameMetadata GameMetadata; // 0xe8(0xa0)
	struct FTournamentMetadata TournamentMetadata; // 0x188(0x88)
	struct FTournamentRosterMetadata RosterMetadata; // 0x210(0x70)
};

// ScriptStruct ShooterGame.RFC190Scope
// Size: 0x50 (Inherited: 0x00)
struct FRFC190Scope {
	struct FString environment; // 0x00(0x10)
	struct FString datacenter; // 0x10(0x10)
	struct FString deployment; // 0x20(0x10)
	struct FString Product; // 0x30(0x10)
	struct FString Component; // 0x40(0x10)
};

// ScriptStruct ShooterGame.Megapacket
// Size: 0x310 (Inherited: 0x00)
struct FMegapacket {
	struct TArray<struct FMegapacketPlayer> Players; // 0x00(0x10)
	struct FMegapacketMatchInfo MatchInfo; // 0x10(0x80)
	struct FMegapacketMetadata MetaData; // 0x90(0x280)
};

// ScriptStruct ShooterGame.AresMeleeTuning
// Size: 0x18 (Inherited: 0x00)
struct FAresMeleeTuning {
	float AttackDamage; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UDamageType* DamageType; // 0x08(0x08)
	struct AEffectContainer* ImpactFXC; // 0x10(0x08)
};

// ScriptStruct ShooterGame.AppliedMaterialHandle
// Size: 0x30 (Inherited: 0x00)
struct FAppliedMaterialHandle {
	char pad_0[0x20]; // 0x00(0x20)
	struct UMaterialInterface* Material; // 0x20(0x08)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct ShooterGame.AppliedMaterialHandleCollection
// Size: 0x10 (Inherited: 0x00)
struct FAppliedMaterialHandleCollection {
	struct TArray<struct FAppliedMaterialHandle> Handles; // 0x00(0x10)
};

// ScriptStruct ShooterGame.MaterialToHandlePriorityQueue
// Size: 0x50 (Inherited: 0x00)
struct FMaterialToHandlePriorityQueue {
	struct TMap<int32_t, struct FAppliedMaterialHandleCollection> MaterialToHandlePriorityQueues; // 0x00(0x50)
};

// ScriptStruct ShooterGame.SkelMeshMergeSectionMapping_BP
// Size: 0x10 (Inherited: 0x00)
struct FSkelMeshMergeSectionMapping_BP {
	struct TArray<int32_t> SectionIDs; // 0x00(0x10)
};

// ScriptStruct ShooterGame.SkelMeshMergeUVTransform
// Size: 0x10 (Inherited: 0x00)
struct FSkelMeshMergeUVTransform {
	struct TArray<struct FTransform> UVTransforms; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AresSkelMeshMergeUVTransformMapping
// Size: 0x10 (Inherited: 0x00)
struct FAresSkelMeshMergeUVTransformMapping {
	struct TArray<struct FSkelMeshMergeUVTransform> UVTransformsPerMesh; // 0x00(0x10)
};

// ScriptStruct ShooterGame.SkeletalMeshMergeParams
// Size: 0x48 (Inherited: 0x00)
struct FSkeletalMeshMergeParams {
	struct TArray<struct FSkelMeshMergeSectionMapping_BP> MeshSectionMappings; // 0x00(0x10)
	struct TArray<struct FAresSkelMeshMergeUVTransformMapping> UVTransformsPerMesh; // 0x10(0x10)
	struct TArray<struct USkeletalMesh*> MeshesToMerge; // 0x20(0x10)
	int32_t StripTopLODS; // 0x30(0x04)
	char bNeedsCpuAccess : 1; // 0x34(0x01)
	char bSkeletonBefore : 1; // 0x34(0x01)
	char pad_34_2 : 6; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct USkeleton* Skeleton; // 0x38(0x08)
	struct UPhysicsAsset* ShadowPhysicsAsset; // 0x40(0x08)
};

// ScriptStruct ShooterGame.AngleLine
// Size: 0x30 (Inherited: 0x00)
struct FAngleLine {
	float AngleBegin; // 0x00(0x04)
	float AngleEnd; // 0x04(0x04)
	struct FVector2D LocationBegin; // 0x08(0x10)
	struct FVector2D LocationEnd; // 0x18(0x10)
	uint32_t LocationBeginIndex; // 0x28(0x04)
	uint32_t LocationEndIndex; // 0x2c(0x04)
};

// ScriptStruct ShooterGame.MinimapVisionConesMesh
// Size: 0x28 (Inherited: 0x00)
struct FMinimapVisionConesMesh {
	struct FVector Location; // 0x00(0x18)
	struct TArray<struct FVector2D> Vertices; // 0x18(0x10)
};

// ScriptStruct ShooterGame.MinimapVisionConesInput
// Size: 0x68 (Inherited: 0x00)
struct FMinimapVisionConesInput {
	struct FVector Location; // 0x00(0x18)
	struct FRotator Rotation; // 0x18(0x18)
	float FOV; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FVisionOccluderGroup> VisionOccluderGroups; // 0x38(0x10)
	struct TArray<struct FMinimapVisionBlockerLine> DynamicLineMeshBlockers; // 0x48(0x10)
	struct TArray<struct FMinimapVisionBlockerCircle> DynamicCircleBlockers; // 0x58(0x10)
};

// ScriptStruct ShooterGame.MissionStatusTracker
// Size: 0x08 (Inherited: 0x00)
struct FMissionStatusTracker {
	enum class EMissionStatus Status; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t Counter; // 0x04(0x04)
};

// ScriptStruct ShooterGame.ObjectiveStatusTracker
// Size: 0x08 (Inherited: 0x00)
struct FObjectiveStatusTracker {
	enum class EObjectiveStatus Status; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t Counter; // 0x04(0x04)
};

// ScriptStruct ShooterGame.ProcessedSeasonInfo
// Size: 0x98 (Inherited: 0x00)
struct FProcessedSeasonInfo {
	struct FGuid SeasonID; // 0x00(0x10)
	int32_t NumberOfWins; // 0x10(0x04)
	int32_t RankIndex; // 0x14(0x04)
	int32_t RankTier; // 0x18(0x04)
	int32_t Rank; // 0x1c(0x04)
	int32_t CapstoneWins; // 0x20(0x04)
	int32_t CapstoneTier; // 0x24(0x04)
	struct TMap<int32_t, int32_t> WinsByTier; // 0x28(0x50)
	int32_t TotalWinsNeededForRank; // 0x78(0x04)
	int32_t LeaderboardPosition; // 0x7c(0x04)
	int32_t RankedRating; // 0x80(0x04)
	int32_t CompetitiveTier; // 0x84(0x04)
	int32_t GamesNeededForRating; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct USeasonDataAsset* SeasonAsset; // 0x90(0x08)
};

// ScriptStruct ShooterGame.CompetitiveUpdateRequestContext
// Size: 0x18 (Inherited: 0x00)
struct FCompetitiveUpdateRequestContext {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ShooterGame.AnonymizePlayerRequestBody
// Size: 0x01 (Inherited: 0x00)
struct FAnonymizePlayerRequestBody {
	bool Anonymize; // 0x00(0x01)
};

// ScriptStruct ShooterGame.BTMOptOutRequestBody
// Size: 0x10 (Inherited: 0x00)
struct FBTMOptOutRequestBody {
	struct FString OptOutOrigin; // 0x00(0x10)
};

// ScriptStruct ShooterGame.HideActRankBadgeRequestBody
// Size: 0x01 (Inherited: 0x00)
struct FHideActRankBadgeRequestBody {
	bool Hide; // 0x00(0x01)
};

// ScriptStruct ShooterGame.RatingRefundNotification
// Size: 0x50 (Inherited: 0x00)
struct FRatingRefundNotification {
	struct FString RecordID; // 0x00(0x10)
	struct FString PlatformGroup; // 0x10(0x10)
	enum class ERatingRefundReason Reason; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString SeasonID; // 0x28(0x10)
	struct FString QueueID; // 0x38(0x10)
	int64_t TotalRefund; // 0x48(0x08)
};

// ScriptStruct ShooterGame.MobileDevicePlatformInfo
// Size: 0x20 (Inherited: 0x00)
struct FMobileDevicePlatformInfo {
	struct FString PlatformType; // 0x00(0x10)
	struct FString PlatformOS; // 0x10(0x10)
};

// ScriptStruct ShooterGame.AresMobileDeviceTelemetryEvent
// Size: 0x88 (Inherited: 0x00)
struct FAresMobileDeviceTelemetryEvent {
	struct FString MatchID; // 0x00(0x10)
	uint32_t RoundNumber; // 0x10(0x04)
	uint32_t RoundDuration; // 0x14(0x04)
	float BatteryDrainedThisRound; // 0x18(0x04)
	float MinimumBatteryDuringPlay; // 0x1c(0x04)
	float MaximumBatteryDuringPlay; // 0x20(0x04)
	uint32_t EstimatedTimeSpentCharging; // 0x24(0x04)
	uint32_t EstimatedTimeSpentInLowPowerMode; // 0x28(0x04)
	float AverageDeviceTemperatureLevel; // 0x2c(0x04)
	float MinimumTemperatureLevel; // 0x30(0x04)
	float MaximumTemperatureLevel; // 0x34(0x04)
	struct FString DeviceModel; // 0x38(0x10)
	struct FString Puuid; // 0x48(0x10)
	struct FMobileDevicePlatformInfo PlatformInfo; // 0x58(0x20)
	struct FString InstanceId; // 0x78(0x10)
};

// ScriptStruct ShooterGame.ModalContextNavInfo
// Size: 0x40 (Inherited: 0x00)
struct FModalContextNavInfo {
	struct FGameplayTagContainer ContainsContexts; // 0x00(0x20)
	struct FGameplayTagContainer ExactContexts; // 0x20(0x20)
};

// ScriptStruct ShooterGame.ModeVariables
// Size: 0x08 (Inherited: 0x00)
struct FModeVariables {
	int32_t Mode; // 0x00(0x04)
	int32_t NumModes; // 0x04(0x04)
};

// ScriptStruct ShooterGame.BombStateChangedGameDataEvent
// Size: 0x10 (Inherited: 0x08)
struct FBombStateChangedGameDataEvent : FGameDataEventBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.BombDefuseStartedGameDataEvent
// Size: 0x10 (Inherited: 0x08)
struct FBombDefuseStartedGameDataEvent : FGameDataEventBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.BombDefuseCheckpointReachedGameDataEvent
// Size: 0x10 (Inherited: 0x08)
struct FBombDefuseCheckpointReachedGameDataEvent : FGameDataEventBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.BombDefuseStoppedGameDataEvent
// Size: 0x10 (Inherited: 0x08)
struct FBombDefuseStoppedGameDataEvent : FGameDataEventBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.BombPlantStartedGameDataEvent
// Size: 0x18 (Inherited: 0x08)
struct FBombPlantStartedGameDataEvent : FGameDataEventBase {
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct ShooterGame.BombPlantStoppedGameDataEvent
// Size: 0x10 (Inherited: 0x08)
struct FBombPlantStoppedGameDataEvent : FGameDataEventBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.BombPlantCompletedGameDataEvent
// Size: 0x38 (Inherited: 0x08)
struct FBombPlantCompletedGameDataEvent : FGameDataEventBase {
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct ShooterGame.OrbSpawnedGameDataEvent
// Size: 0x30 (Inherited: 0x08)
struct FOrbSpawnedGameDataEvent : FGameDataEventBase {
	char pad_8[0x28]; // 0x08(0x28)
};

// ScriptStruct ShooterGame.OrbDespawnedGameDataEvent
// Size: 0x30 (Inherited: 0x08)
struct FOrbDespawnedGameDataEvent : FGameDataEventBase {
	char pad_8[0x28]; // 0x08(0x28)
};

// ScriptStruct ShooterGame.GamePhaseChangedGameDataEvent
// Size: 0x10 (Inherited: 0x08)
struct FGamePhaseChangedGameDataEvent : FGameDataEventBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.TeamScoreChangedGameDataEvent
// Size: 0x08 (Inherited: 0x08)
struct FTeamScoreChangedGameDataEvent : FGameDataEventBase {
};

// ScriptStruct ShooterGame.RoundResultsChangedGameDataEvent
// Size: 0x08 (Inherited: 0x08)
struct FRoundResultsChangedGameDataEvent : FGameDataEventBase {
};

// ScriptStruct ShooterGame.RoundResultGameDataModel
// Size: 0x18 (Inherited: 0x00)
struct FRoundResultGameDataModel {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ShooterGame.NewRoundResultGameDataEvent
// Size: 0x20 (Inherited: 0x08)
struct FNewRoundResultGameDataEvent : FGameDataEventBase {
	char pad_8[0x18]; // 0x08(0x18)
};

// ScriptStruct ShooterGame.ModeConfigGameDataModel
// Size: 0x28 (Inherited: 0x00)
struct FModeConfigGameDataModel {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct ShooterGame.RoundStartedGameDataEvent
// Size: 0x38 (Inherited: 0x08)
struct FRoundStartedGameDataEvent : FGameDataEventBase {
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct ShooterGame.RoundEndedGameDataEvent
// Size: 0x10 (Inherited: 0x08)
struct FRoundEndedGameDataEvent : FGameDataEventBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.GameRestartedGameDataEvent
// Size: 0x10 (Inherited: 0x08)
struct FGameRestartedGameDataEvent : FGameDataEventBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.MatchBeganGameDataEvent
// Size: 0x08 (Inherited: 0x08)
struct FMatchBeganGameDataEvent : FGameDataEventBase {
};

// ScriptStruct ShooterGame.MatchPausedGameDataEvent
// Size: 0x10 (Inherited: 0x08)
struct FMatchPausedGameDataEvent : FGameDataEventBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.MatchTimeoutstateChangedGameDataEvent
// Size: 0x18 (Inherited: 0x08)
struct FMatchTimeoutstateChangedGameDataEvent : FGameDataEventBase {
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct ShooterGame.MatchEndedGameDataEvent
// Size: 0x38 (Inherited: 0x08)
struct FMatchEndedGameDataEvent : FGameDataEventBase {
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct ShooterGame.GameShutdownEvent
// Size: 0x08 (Inherited: 0x08)
struct FGameShutdownEvent : FGameDataEventBase {
};

// ScriptStruct ShooterGame.EquippableItemSnapshotGameDataModel
// Size: 0xd0 (Inherited: 0x00)
struct FEquippableItemSnapshotGameDataModel {
	char pad_0[0xd0]; // 0x00(0xd0)
};

// ScriptStruct ShooterGame.AbilitySnapshotGameDataModel
// Size: 0x20 (Inherited: 0x00)
struct FAbilitySnapshotGameDataModel {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.PlayerSnapshotGameDataModel
// Size: 0x1c0 (Inherited: 0x00)
struct FPlayerSnapshotGameDataModel {
	char pad_0[0x1c0]; // 0x00(0x1c0)
};

// ScriptStruct ShooterGame.ObserverSnapshotGameDataModel
// Size: 0x28 (Inherited: 0x00)
struct FObserverSnapshotGameDataModel {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct ShooterGame.WorldSnapshottedGameDataEvent
// Size: 0x38 (Inherited: 0x08)
struct FWorldSnapshottedGameDataEvent : FGameDataEventBase {
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct ShooterGame.PlayerConfigurationGameDataModel
// Size: 0x50 (Inherited: 0x00)
struct FPlayerConfigurationGameDataModel {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct ShooterGame.TeamConfigurationGameDataModel
// Size: 0x28 (Inherited: 0x00)
struct FTeamConfigurationGameDataModel {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct ShooterGame.WorldConfigurationUpdatedGameDataEvent
// Size: 0x70 (Inherited: 0x08)
struct FWorldConfigurationUpdatedGameDataEvent : FGameDataEventBase {
	char pad_8[0x68]; // 0x08(0x68)
};

// ScriptStruct ShooterGame.RoundCeremonyUpdatedGameDataEvent
// Size: 0x18 (Inherited: 0x08)
struct FRoundCeremonyUpdatedGameDataEvent : FGameDataEventBase {
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct ShooterGame.ScriptStateEffectInfoArray
// Size: 0x10 (Inherited: 0x00)
struct FScriptStateEffectInfoArray {
	struct TArray<struct FScriptStateEffectInfo> Effects; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ScriptStateEffectInfo
// Size: 0x50 (Inherited: 0x00)
struct FScriptStateEffectInfo {
	struct FEmbeddedEffectInfo Effect; // 0x00(0x48)
	bool bStopEffectOnStateEnd; // 0x48(0x01)
	bool bStopEffectOnStateInterrupt; // 0x49(0x01)
	bool bStopEffectOnUnequip; // 0x4a(0x01)
	bool bOwnerEffectOnly; // 0x4b(0x01)
	bool bRouteEffectThroughEquippable; // 0x4c(0x01)
	enum class EStateContext Context; // 0x4d(0x01)
	enum class EMovementSync MovementSync; // 0x4e(0x01)
	bool bIsMultiStateEffect; // 0x4f(0x01)
};

// ScriptStruct ShooterGame.MutedWordsListChangedEvent
// Size: 0x40 (Inherited: 0x00)
struct FMutedWordsListChangedEvent {
	struct FString Subject; // 0x00(0x10)
	struct FString MutedWordsList; // 0x10(0x10)
	struct FString Platform; // 0x20(0x10)
	struct FString Affinity; // 0x30(0x10)
};

// ScriptStruct ShooterGame.AresServerBandwidthEvent
// Size: 0x38 (Inherited: 0x00)
struct FAresServerBandwidthEvent {
	struct FString MatchID; // 0x00(0x10)
	struct FString InstanceId; // 0x10(0x10)
	uint32_t DurationMs; // 0x20(0x04)
	uint32_t BytesDownloaded; // 0x24(0x04)
	uint32_t BytesUploaded; // 0x28(0x04)
	uint32_t PacketsUploaded; // 0x2c(0x04)
	uint32_t PacketsDownloaded; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.AresClientLatencyEvent
// Size: 0xc8 (Inherited: 0x00)
struct FAresClientLatencyEvent {
	struct FString MatchID; // 0x00(0x10)
	struct FString InstanceId; // 0x10(0x10)
	struct FMetric NetworkRTTms; // 0x20(0x1c)
	struct FPingBuckets NetworkRTTmsBuckets; // 0x3c(0x1c)
	uint64_t TotalPackets; // 0x58(0x08)
	uint64_t PacketsLost; // 0x60(0x08)
	uint64_t PacketsOverSizeSoftLimit; // 0x68(0x08)
	uint64_t PacketsOverSizeHardLimit; // 0x70(0x08)
	struct FString NetworkConnectionType; // 0x78(0x10)
	struct FString SimulatedNetworkDegradationPreset; // 0x88(0x10)
	struct FPacketDeltaTimeBuckets PacketDeltaTimeBuckets; // 0x98(0x1c)
	int32_t NetworkSmoothingLevel; // 0xb4(0x04)
	struct FString RemoteAddress; // 0xb8(0x10)
};

// ScriptStruct ShooterGame.AntiDDoSPacketStats
// Size: 0x70 (Inherited: 0x00)
struct FAntiDDoSPacketStats {
	struct FMetric ReceivedConnectionPackets; // 0x00(0x1c)
	struct FMetric ReceivedNonConnectionPackets; // 0x1c(0x1c)
	struct FMetric ReceivedBadPackets; // 0x38(0x1c)
	struct FMetric ReceivedErrorPackets; // 0x54(0x1c)
};

// ScriptStruct ShooterGame.PingEventTelemetryData
// Size: 0x68 (Inherited: 0x00)
struct FPingEventTelemetryData {
	struct FString PingMethod; // 0x00(0x10)
	struct FVector PingDestination; // 0x10(0x18)
	struct FVector PingLocation; // 0x28(0x18)
	struct FString PingItem; // 0x40(0x10)
	int64_t PingSent; // 0x50(0x08)
	struct FString RoundPhase; // 0x58(0x10)
};

// ScriptStruct ShooterGame.NonPingEventTelemetryData
// Size: 0x60 (Inherited: 0x00)
struct FNonPingEventTelemetryData {
	struct FString CommSystem; // 0x00(0x10)
	struct FString CommSubSystem; // 0x10(0x10)
	struct FString CommSent; // 0x20(0x10)
	int64_t CommTimeSent; // 0x30(0x08)
	struct FVector CommLocation; // 0x38(0x18)
	struct FString RoundPhase; // 0x50(0x10)
};

// ScriptStruct ShooterGame.NonVerbalCommsPingTelemetryEvent
// Size: 0x38 (Inherited: 0x00)
struct FNonVerbalCommsPingTelemetryEvent {
	struct FString MatchID; // 0x00(0x10)
	struct FString Subject; // 0x10(0x10)
	int32_t RoundNumber; // 0x20(0x04)
	int32_t TextChatCount; // 0x24(0x04)
	struct TArray<struct FPingEventTelemetryData> PingEvents; // 0x28(0x10)
};

// ScriptStruct ShooterGame.NonVerbalCommsNonPingTelemetryEvent
// Size: 0x38 (Inherited: 0x00)
struct FNonVerbalCommsNonPingTelemetryEvent {
	struct FString MatchID; // 0x00(0x10)
	struct FString Subject; // 0x10(0x10)
	int32_t RoundNumber; // 0x20(0x04)
	int32_t TextChatCount; // 0x24(0x04)
	struct TArray<struct FNonPingEventTelemetryData> NonPingEvents; // 0x28(0x10)
};

// ScriptStruct ShooterGame.ObfuscatedPlayerInformation
// Size: 0x38 (Inherited: 0x00)
struct FObfuscatedPlayerInformation {
	struct FUniqueNetIdRepl SubjectUniqueId; // 0x00(0x30)
	bool bIsAFK; // 0x30(0x01)
	enum class EConnectionStatus ConnectionStatus; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct ShooterGame.ObjectiveOverrideData
// Size: 0x08 (Inherited: 0x00)
struct FObjectiveOverrideData {
	bool bPreventDefaultProgressSource; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t MinGuaranteedProgress; // 0x04(0x04)
};

// ScriptStruct ShooterGame.ObserverTargetSetGameDataEvent
// Size: 0x10 (Inherited: 0x08)
struct FObserverTargetSetGameDataEvent : FGameDataEventBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.ObserverPawnMove
// Size: 0x60 (Inherited: 0x00)
struct FObserverPawnMove {
	float Timestamp; // 0x00(0x04)
	struct FVTSTimeStampIndex TimeStampIndex; // 0x04(0x04)
	struct FVector_NetQuantize100 Location; // 0x08(0x18)
	struct FVector_NetQuantize100 Velocity; // 0x20(0x18)
	char pad_38[0x8]; // 0x38(0x08)
	struct FQuat Rotation; // 0x40(0x20)
};

// ScriptStruct ShooterGame.ObserverViewOptionsNetworkedData
// Size: 0x04 (Inherited: 0x00)
struct FObserverViewOptionsNetworkedData {
	bool bFriendlyOutlinesEnabled; // 0x00(0x01)
	bool bEnemyOutlinesEnabled; // 0x01(0x01)
	bool bSightLinesEnabled; // 0x02(0x01)
	bool bMinimapEnabled; // 0x03(0x01)
};

// ScriptStruct ShooterGame.PortalInfo
// Size: 0x30 (Inherited: 0x00)
struct FPortalInfo {
	struct AAkAcousticPortal* PortalActor; // 0x00(0x08)
	struct FVector PortalLocation; // 0x08(0x18)
	int32_t FrontRoomIndex; // 0x20(0x04)
	int32_t BackRoomIndex; // 0x24(0x04)
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct ShooterGame.RoomInfo
// Size: 0x58 (Inherited: 0x00)
struct FRoomInfo {
	char pad_0[0x38]; // 0x00(0x38)
	struct UAkRoomComponent* RoomComponent; // 0x38(0x08)
	struct TArray<int32_t> ExitPortalIndex; // 0x40(0x10)
	char pad_50[0x8]; // 0x50(0x08)
};

// ScriptStruct ShooterGame.OfferCostWithDiscountInfo
// Size: 0x28 (Inherited: 0x00)
struct FOfferCostWithDiscountInfo {
	struct FGuid CurrencyID; // 0x00(0x10)
	int32_t BaseCost; // 0x10(0x04)
	int32_t DiscountCost; // 0x14(0x04)
	int32_t DiscountPercent; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct UTexture* CurrencyIcon; // 0x20(0x08)
};

// ScriptStruct ShooterGame.OrderedListModelChangeEventDataRange
// Size: 0x08 (Inherited: 0x00)
struct FOrderedListModelChangeEventDataRange {
	struct FIndexRange Range; // 0x00(0x08)
};

// ScriptStruct ShooterGame.OrderedListModelChangeEventData_Reset
// Size: 0x01 (Inherited: 0x00)
struct FOrderedListModelChangeEventData_Reset {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.OrderedListModelChangeEventData_Inserted
// Size: 0x08 (Inherited: 0x08)
struct FOrderedListModelChangeEventData_Inserted : FOrderedListModelChangeEventDataRange {
};

// ScriptStruct ShooterGame.OrderedListModelChangeEventData_Removed
// Size: 0x08 (Inherited: 0x08)
struct FOrderedListModelChangeEventData_Removed : FOrderedListModelChangeEventDataRange {
};

// ScriptStruct ShooterGame.OrderedListModelChangeEventData_Replaced
// Size: 0x08 (Inherited: 0x08)
struct FOrderedListModelChangeEventData_Replaced : FOrderedListModelChangeEventDataRange {
};

// ScriptStruct ShooterGame.OrderedListModelChangeEventData_Reordered
// Size: 0x18 (Inherited: 0x00)
struct FOrderedListModelChangeEventData_Reordered {
	int32_t FirstIndex; // 0x00(0x04)
	char pad_4[0x14]; // 0x04(0x14)
};

// ScriptStruct ShooterGame.RTPLogEntry
// Size: 0x50 (Inherited: 0x00)
struct FRTPLogEntry {
	struct FString Message_str; // 0x00(0x10)
	struct FString GameId_str; // 0x10(0x10)
	int64_t GameStartTime_int; // 0x20(0x08)
	double FirstTime; // 0x28(0x08)
	double LastTime; // 0x30(0x08)
	uint32_t Count; // 0x38(0x04)
	uint32_t Verbosity; // 0x3c(0x04)
	struct FName Category_str; // 0x40(0x0c)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ShooterGame.PagedListLocation
// Size: 0x08 (Inherited: 0x00)
struct FPagedListLocation {
	int32_t PageNumber; // 0x00(0x04)
	int32_t IndexOnPage; // 0x04(0x04)
};

// ScriptStruct ShooterGame.ParallelAnimationConductorNode_InternalChildData
// Size: 0x18 (Inherited: 0x00)
struct FParallelAnimationConductorNode_InternalChildData {
	char pad_0[0x8]; // 0x00(0x08)
	struct TScriptInterface<IAnimationConductorNode> Node; // 0x08(0x10)
};

// ScriptStruct ShooterGame.PartyMemberSortData
// Size: 0x50 (Inherited: 0x00)
struct FPartyMemberSortData {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct ShooterGame.PlayerQueueExpiry
// Size: 0x18 (Inherited: 0x00)
struct FPlayerQueueExpiry {
	struct FString Puuid; // 0x00(0x10)
	struct FDateTime Expiry; // 0x10(0x08)
};

// ScriptStruct ShooterGame.QueueIneligiblePlayers
// Size: 0x10 (Inherited: 0x00)
struct FQueueIneligiblePlayers {
	struct TArray<struct FPlayerQueueExpiry> Players; // 0x00(0x10)
};

// ScriptStruct ShooterGame.QueueUnverifiedPlayers
// Size: 0x10 (Inherited: 0x00)
struct FQueueUnverifiedPlayers {
	struct TArray<struct FString> Players; // 0x00(0x10)
};

// ScriptStruct ShooterGame.QueueConfig
// Size: 0xa0 (Inherited: 0x00)
struct FQueueConfig {
	struct FString QueueID; // 0x00(0x10)
	bool Enabled; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t TeamSize; // 0x14(0x04)
	int32_t HighSkillTier; // 0x18(0x04)
	bool AllowFullPartyBypassSkillRestrictions; // 0x1c(0x01)
	bool ApplyRRPenaltyToFullParty; // 0x1d(0x01)
	bool AllowFiveStackRestrictions; // 0x1e(0x01)
	char pad_1F[0x1]; // 0x1f(0x01)
	struct FString Mode; // 0x20(0x10)
	bool IsRanked; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t MinimumAccountLevelRequired; // 0x34(0x04)
	int32_t PartyMaxCompetitiveTierRange; // 0x38(0x04)
	int32_t FullPartyMaxCompetitiveTierRange; // 0x3c(0x04)
	int32_t MaxPartySize; // 0x40(0x04)
	int32_t MinPartySize; // 0x44(0x04)
	struct TArray<int32_t> InvalidPartySizes; // 0x48(0x10)
	int32_t MaxPartySizeHighSkill; // 0x58(0x04)
	bool IsTournament; // 0x5c(0x01)
	bool RequireRoster; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
	int64_t TimeUntilNextScheduleChangeSeconds; // 0x60(0x08)
	bool crossPlayEnabledRequired; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct FString NewMap; // 0x70(0x10)
	struct FDateTime NewMapEndTime; // 0x80(0x08)
	float NewMapLossReductionModifier; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct TArray<struct FGuid> DisabledContent; // 0x90(0x10)
};

// ScriptStruct ShooterGame.CustomGameConfigs
// Size: 0x90 (Inherited: 0x00)
struct FCustomGameConfigs {
	bool Enabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FString> EnabledMaps; // 0x08(0x10)
	struct TArray<struct FString> EnabledModes; // 0x18(0x10)
	struct TArray<struct FQueueConfig> Queues; // 0x28(0x10)
	struct TMap<struct FString, struct FPingServiceInfo> GamePodPingServiceInfo; // 0x38(0x50)
	struct FDateTime QueueConfigsLastUpdated; // 0x88(0x08)
};

// ScriptStruct ShooterGame.PingServiceInfo
// Size: 0x18 (Inherited: 0x00)
struct FPingServiceInfo {
	struct TArray<struct FString> PingProxyAddresses; // 0x00(0x10)
	uint32_t SecurityHash; // 0x10(0x04)
	uint32_t ObfuscatedIP; // 0x14(0x04)
};

// ScriptStruct ShooterGame.PartyInvite
// Size: 0x58 (Inherited: 0x00)
struct FPartyInvite {
	struct FString ID; // 0x00(0x10)
	struct FString PartyId; // 0x10(0x10)
	struct FString Subject; // 0x20(0x10)
	struct FString InvitedBySubject; // 0x30(0x10)
	struct FDateTime CreatedAt; // 0x40(0x08)
	int32_t ExpiresIn; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FDateTime ExpiresAt; // 0x50(0x08)
};

// ScriptStruct ShooterGame.PartyExternalInvite
// Size: 0x68 (Inherited: 0x00)
struct FPartyExternalInvite {
	struct FString ID; // 0x00(0x10)
	struct FString PartyId; // 0x10(0x10)
	struct FString Subject; // 0x20(0x10)
	struct FString InvitedBySubject; // 0x30(0x10)
	struct FString SocialPlatform; // 0x40(0x10)
	int64_t CreatedAtUnixTimestamp; // 0x50(0x08)
	int64_t ExpiresAtUnixTimestamp; // 0x58(0x08)
	struct FDateTime ExpiresAt; // 0x60(0x08)
};

// ScriptStruct ShooterGame.PartyRequest
// Size: 0x58 (Inherited: 0x00)
struct FPartyRequest {
	struct FString ID; // 0x00(0x10)
	struct FString PartyId; // 0x10(0x10)
	struct TArray<struct FString> Subjects; // 0x20(0x10)
	struct FString RequestedBySubject; // 0x30(0x10)
	struct FDateTime CreatedAt; // 0x40(0x08)
	int32_t ExpiresIn; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct FDateTime ExpiresAt; // 0x50(0x08)
};

// ScriptStruct ShooterGame.QueueIneligibility
// Size: 0x38 (Inherited: 0x00)
struct FQueueIneligibility {
	struct FString Subject; // 0x00(0x10)
	struct TArray<struct FString> QueueIDs; // 0x10(0x10)
	struct FString Reason; // 0x20(0x10)
	struct FDateTime Expiry; // 0x30(0x08)
};

// ScriptStruct ShooterGame.PreferredAgentInfo
// Size: 0x10 (Inherited: 0x00)
struct FPreferredAgentInfo {
	struct FString PreferredAgentID; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AresPartyMember
// Size: 0x188 (Inherited: 0x00)
struct FAresPartyMember {
	struct FString Subject; // 0x00(0x10)
	int32_t CompetitiveTier; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FPlayerIdentity PlayerIdentity; // 0x18(0x48)
	struct FPartyMemberSeasonalInfo SeasonalInfo; // 0x60(0x30)
	struct FMMRSeasonBadgeInfo SeasonalBadgeInfo; // 0x90(0x78)
	bool IsOwner; // 0x108(0x01)
	bool IsReady; // 0x109(0x01)
	char pad_10A[0x2]; // 0x10a(0x02)
	int32_t QueueEligibleRemainingAccountLevels; // 0x10c(0x04)
	struct TArray<struct FPingInfo> Pings; // 0x110(0x10)
	bool IsModerator; // 0x120(0x01)
	bool UseBroadcastHUD; // 0x121(0x01)
	bool IsCrossPlayEnabled; // 0x122(0x01)
	char pad_123[0x5]; // 0x123(0x05)
	struct FPremierPrestigeInternal PremierPrestige; // 0x128(0x50)
	struct FPreferredAgentInfo PreferredAgentInfo; // 0x178(0x10)
};

// ScriptStruct ShooterGame.PartyPlayer
// Size: 0x58 (Inherited: 0x00)
struct FPartyPlayer {
	int32_t Version; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Subject; // 0x08(0x10)
	struct FString SessionClientID; // 0x18(0x10)
	struct FString CurrentPartyID; // 0x28(0x10)
	struct TArray<struct FPartyInvite> Invites; // 0x38(0x10)
	struct TArray<struct FPartyRequest> Requests; // 0x48(0x10)
};

// ScriptStruct ShooterGame.PartyMemberReadyStatus
// Size: 0x01 (Inherited: 0x00)
struct FPartyMemberReadyStatus {
	bool Ready; // 0x00(0x01)
};

// ScriptStruct ShooterGame.CustomGameSettings
// Size: 0xa8 (Inherited: 0x00)
struct FCustomGameSettings {
	struct FString Name; // 0x00(0x10)
	struct FString Description; // 0x10(0x10)
	struct FString Map; // 0x20(0x10)
	struct FString Mode; // 0x30(0x10)
	struct FString GamePod; // 0x40(0x10)
	bool UseBots; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct TMap<struct FString, struct FString> GameRules; // 0x58(0x50)
};

// ScriptStruct ShooterGame.CustomGamePlayer
// Size: 0x10 (Inherited: 0x00)
struct FCustomGamePlayer {
	struct FString Subject; // 0x00(0x10)
};

// ScriptStruct ShooterGame.CustomGameTeams
// Size: 0x50 (Inherited: 0x00)
struct FCustomGameTeams {
	struct TArray<struct FCustomGamePlayer> TeamOne; // 0x00(0x10)
	struct TArray<struct FCustomGamePlayer> TeamTwo; // 0x10(0x10)
	struct TArray<struct FCustomGamePlayer> TeamSpectate; // 0x20(0x10)
	struct TArray<struct FCustomGamePlayer> TeamOneCoaches; // 0x30(0x10)
	struct TArray<struct FCustomGamePlayer> TeamTwoCoaches; // 0x40(0x10)
};

// ScriptStruct ShooterGame.CustomGameData
// Size: 0x108 (Inherited: 0x00)
struct FCustomGameData {
	struct FCustomGameSettings Settings; // 0x00(0xa8)
	struct FCustomGameTeams Membership; // 0xa8(0x50)
	int32_t MaxPartySize; // 0xf8(0x04)
	bool AutobalanceEnabled; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	int32_t AutobalanceMinPlayers; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// ScriptStruct ShooterGame.QueueIneligibleMemberPair
// Size: 0x20 (Inherited: 0x00)
struct FQueueIneligibleMemberPair {
	struct FString SubjectOne; // 0x00(0x10)
	struct FString SubjectTwo; // 0x10(0x10)
};

// ScriptStruct ShooterGame.MatchmakingData
// Size: 0x38 (Inherited: 0x00)
struct FMatchmakingData {
	struct FString QueueID; // 0x00(0x10)
	struct TArray<struct FQueueIneligibleMemberPair> QueueIneligibleMemberPairs; // 0x10(0x10)
	struct TArray<struct FString> PreferredGamePods; // 0x20(0x10)
	float SkillDisparityRRPenalty; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.CheatData
// Size: 0x18 (Inherited: 0x00)
struct FCheatData {
	struct FString GamePodOverride; // 0x00(0x10)
	bool ForcePostGameProcessing; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.AresPartyErrorNotification
// Size: 0x20 (Inherited: 0x00)
struct FAresPartyErrorNotification {
	struct FString ErrorType; // 0x00(0x10)
	struct TArray<struct FString> ErroredPlayers; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PartyXPBonus
// Size: 0x18 (Inherited: 0x00)
struct FPartyXPBonus {
	struct FString ID; // 0x00(0x10)
	bool Applied; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.AresParty
// Size: 0x3b8 (Inherited: 0x00)
struct FAresParty {
	struct FString ID; // 0x00(0x10)
	struct FString MUCName; // 0x10(0x10)
	struct FString VoiceRoomID; // 0x20(0x10)
	struct TArray<struct FAresPartyMember> Members; // 0x30(0x10)
	struct FCustomGameData CustomGameData; // 0x40(0x108)
	struct FMatchmakingData MatchmakingData; // 0x148(0x38)
	struct FTournamentData TournamentData; // 0x180(0xd0)
	struct FString ClientVersion; // 0x250(0x10)
	int64_t Version; // 0x260(0x08)
	bool LookingForMore; // 0x268(0x01)
	char pad_269[0x7]; // 0x269(0x07)
	struct FCheatData CheatData; // 0x270(0x18)
	struct TArray<struct FString> EligibleQueues; // 0x288(0x10)
	struct TArray<struct FPartyXPBonus> XPBonuses; // 0x298(0x10)
	struct FString State; // 0x2a8(0x10)
	struct FString PreviousState; // 0x2b8(0x10)
	enum class EAresPartyAccessibility Accessibility; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct FString StateTransitionReason; // 0x2d0(0x10)
	struct TArray<struct FPartyInvite> Invites; // 0x2e0(0x10)
	struct TArray<struct FPartyExternalInvite> ExternalInvites; // 0x2f0(0x10)
	struct TArray<struct FPartyRequest> Requests; // 0x300(0x10)
	struct FDateTime QueueEntryTime; // 0x310(0x08)
	struct FAresPartyErrorNotification ErrorNotification; // 0x318(0x20)
	int64_t RestrictedSeconds; // 0x338(0x08)
	struct TArray<struct FQueueIneligibility> QueueIneligibilities; // 0x340(0x10)
	struct FString InviteCode; // 0x350(0x10)
	bool IsCrossPlayEnabled; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct TMap<struct FString, struct FString> PreferredAgents; // 0x368(0x50)
};

// ScriptStruct ShooterGame.CustomGameSummary
// Size: 0x68 (Inherited: 0x00)
struct FCustomGameSummary {
	struct FString ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString Description; // 0x20(0x10)
	struct FString Map; // 0x30(0x10)
	struct FString Owner; // 0x40(0x10)
	int32_t Count; // 0x50(0x04)
	int32_t Limit; // 0x54(0x04)
	struct FString ClientVersion; // 0x58(0x10)
};

// ScriptStruct ShooterGame.CustomGameCollection
// Size: 0x10 (Inherited: 0x00)
struct FCustomGameCollection {
	struct TArray<struct FCustomGameSummary> Games; // 0x00(0x10)
};

// ScriptStruct ShooterGame.JoinRequestDTO
// Size: 0x20 (Inherited: 0x00)
struct FJoinRequestDTO {
	struct FString Subject; // 0x00(0x10)
	struct FString JoinType; // 0x10(0x10)
};

// ScriptStruct ShooterGame.ChangeTeamRequestBody
// Size: 0x10 (Inherited: 0x00)
struct FChangeTeamRequestBody {
	struct FString PlayerToPutOnTeam; // 0x00(0x10)
};

// ScriptStruct ShooterGame.SwapPlayersRequestBody
// Size: 0x20 (Inherited: 0x00)
struct FSwapPlayersRequestBody {
	struct FString PlayerA; // 0x00(0x10)
	struct FString PlayerB; // 0x10(0x10)
};

// ScriptStruct ShooterGame.SetPlayerModeratorStatusRequest
// Size: 0x18 (Inherited: 0x00)
struct FSetPlayerModeratorStatusRequest {
	struct FString PlayerToSetModeratorStatus; // 0x00(0x10)
	bool ModeratorStatus; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.SetPlayerBroadcastHUDStatusRequest
// Size: 0x18 (Inherited: 0x00)
struct FSetPlayerBroadcastHUDStatusRequest {
	struct FString PlayerToSetBroadcastHUDStatus; // 0x00(0x10)
	bool BroadcastHUDStatus; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.PartyMUCInfo
// Size: 0x20 (Inherited: 0x00)
struct FPartyMUCInfo {
	struct FString Token; // 0x00(0x10)
	struct FString Room; // 0x10(0x10)
};

// ScriptStruct ShooterGame.SetAccessibilityRequest
// Size: 0x10 (Inherited: 0x00)
struct FSetAccessibilityRequest {
	struct FString Accessibility; // 0x00(0x10)
};

// ScriptStruct ShooterGame.SetLookingForMoreRequest
// Size: 0x01 (Inherited: 0x00)
struct FSetLookingForMoreRequest {
	bool LookingForMore; // 0x00(0x01)
};

// ScriptStruct ShooterGame.SetPreferredGamePodsRequest
// Size: 0x10 (Inherited: 0x00)
struct FSetPreferredGamePodsRequest {
	struct TArray<struct FString> GamePodIDs; // 0x00(0x10)
};

// ScriptStruct ShooterGame.SetCrossPlaySettingRequest
// Size: 0x01 (Inherited: 0x00)
struct FSetCrossPlaySettingRequest {
	bool IsCrossPlayEnabled; // 0x00(0x01)
};

// ScriptStruct ShooterGame.ChangeQueueRequest
// Size: 0x10 (Inherited: 0x00)
struct FChangeQueueRequest {
	struct FString QueueID; // 0x00(0x10)
};

// ScriptStruct ShooterGame.StartCustomGameRequest
// Size: 0x50 (Inherited: 0x00)
struct FStartCustomGameRequest {
	struct TMap<struct FString, struct FString> GameRules; // 0x00(0x50)
};

// ScriptStruct ShooterGame.SoloExperienceRequest
// Size: 0x18 (Inherited: 0x00)
struct FSoloExperienceRequest {
	enum class ESoloExperienceType GameType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Module; // 0x08(0x10)
};

// ScriptStruct ShooterGame.MakeRosterPartyRequest
// Size: 0x20 (Inherited: 0x00)
struct FMakeRosterPartyRequest {
	struct FString RosterID; // 0x00(0x10)
	struct FString QueueID; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PartyInviteRequest
// Size: 0x10 (Inherited: 0x00)
struct FPartyInviteRequest {
	struct TArray<struct FString> Subjects; // 0x00(0x10)
};

// ScriptStruct ShooterGame.JoinMatchRequest
// Size: 0x60 (Inherited: 0x00)
struct FJoinMatchRequest {
	struct FString TeamID; // 0x00(0x10)
	struct TMap<struct FString, struct FString> subjectToCharacterID; // 0x10(0x50)
};

// ScriptStruct ShooterGame.SetPreferredAgentInfoRequest
// Size: 0x10 (Inherited: 0x00)
struct FSetPreferredAgentInfoRequest {
	struct FString PreferredAgentID; // 0x00(0x10)
};

// ScriptStruct ShooterGame.SetPremierEventRequest
// Size: 0x10 (Inherited: 0x00)
struct FSetPremierEventRequest {
	struct FString PremierEventID; // 0x00(0x10)
};

// ScriptStruct ShooterGame.TitleUpdateEvent
// Size: 0x30 (Inherited: 0x00)
struct FTitleUpdateEvent {
	struct FString Subject; // 0x00(0x10)
	struct FString TitleEventType; // 0x10(0x10)
	struct FString GameFlowState; // 0x20(0x10)
};

// ScriptStruct ShooterGame.WallSpanInfo
// Size: 0x1e0 (Inherited: 0x00)
struct FWallSpanInfo {
	struct FHitResult Entrance; // 0x00(0xf0)
	struct FHitResult Exit; // 0xf0(0xf0)
};

// ScriptStruct ShooterGame.WallSpanList
// Size: 0x108 (Inherited: 0x00)
struct FWallSpanList {
	struct TArray<struct FWallSpanInfo> Spans; // 0x00(0x10)
	bool bLastPointInWall; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FHitResult EntranceToLastPoint; // 0x18(0xf0)
};

// ScriptStruct ShooterGame.SkinParam
// Size: 0x20 (Inherited: 0x00)
struct FSkinParam {
	struct FName ParamName; // 0x00(0x0c)
	enum class EAresParamType ParamType; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct FString ParamValue; // 0x10(0x10)
};

// ScriptStruct ShooterGame.Equip
// Size: 0x18 (Inherited: 0x00)
struct FEquip {
	int32_t AlternateLevel; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FSkinParam> Params; // 0x08(0x10)
};

// ScriptStruct ShooterGame.AttachmentMappingV2
// Size: 0x10 (Inherited: 0x00)
struct FAttachmentMappingV2 {
	struct USocketDataAsset* SocketAsset; // 0x00(0x08)
	struct UEquippableAttachmentDataAsset* AttachmentAsset; // 0x08(0x08)
};

// ScriptStruct ShooterGame.DynamicParamOptionPair
// Size: 0x18 (Inherited: 0x00)
struct FDynamicParamOptionPair {
	struct FName ParamName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UDynamicOptionDataAsset* OptionDataAsset; // 0x10(0x08)
};

// ScriptStruct ShooterGame.DynamicOptionsMapping
// Size: 0x18 (Inherited: 0x00)
struct FDynamicOptionsMapping {
	struct UAresBasePrimaryDataAsset* ParentDataAsset; // 0x00(0x08)
	struct TArray<struct FDynamicParamOptionPair> OptionsArray; // 0x08(0x10)
};

// ScriptStruct ShooterGame.EquippableMapping
// Size: 0x50 (Inherited: 0x00)
struct FEquippableMapping {
	struct UEquippableDataAsset* EquippableDataAsset; // 0x00(0x08)
	struct UEquippableSkinDataAsset* EquippableSkinDataAsset; // 0x08(0x08)
	struct UEquippableSkinLevelDataAsset* EquippableSkinLevelDataAsset; // 0x10(0x08)
	struct UEquippableSkinChromaDataAsset* EquippableSkinChromaDataAsset; // 0x18(0x08)
	struct UEquippableCharmDataAsset* EquippableCharmDataAsset; // 0x20(0x08)
	struct UEquippableCharmLevelDataAsset* EquippableCharmLevelDataAsset; // 0x28(0x08)
	struct FGuid EquippableCharmInstance; // 0x30(0x10)
	struct TArray<struct FAttachmentMappingV2> EquippableAttachments; // 0x40(0x10)
};

// ScriptStruct ShooterGame.SprayMapping
// Size: 0x18 (Inherited: 0x00)
struct FSprayMapping {
	struct USprayEquipSlotDataAsset* SprayEquipSlotDataAsset; // 0x00(0x08)
	struct USprayDataAsset* SprayDataAsset; // 0x08(0x08)
	struct USprayLevelDataAsset* SprayLevelDataAsset; // 0x10(0x08)
};

// ScriptStruct ShooterGame.ActiveExpressionMapping
// Size: 0x20 (Inherited: 0x00)
struct FActiveExpressionMapping {
	struct FGuid AssetID; // 0x00(0x10)
	struct FGuid TypeID; // 0x10(0x10)
};

// ScriptStruct ShooterGame.LoadoutIdentityMapping
// Size: 0x34 (Inherited: 0x00)
struct FLoadoutIdentityMapping {
	struct FGuid PlayerCardId; // 0x00(0x10)
	struct FGuid PlayerTitleId; // 0x10(0x10)
	struct FGuid PreferredLevelBorderID; // 0x20(0x10)
	bool bHideAccountLevel; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
};

// ScriptStruct ShooterGame.PlayerMapping
// Size: 0x78 (Inherited: 0x00)
struct FPlayerMapping {
	struct TArray<struct FEquippableMapping> EquippableMappings; // 0x00(0x10)
	struct TArray<struct FSprayMapping> SprayMappings; // 0x10(0x10)
	struct TArray<struct FActiveExpressionMapping> ActiveExpressionMappings; // 0x20(0x10)
	struct FLoadoutIdentityMapping IdentityMapping; // 0x30(0x34)
	struct FGuid Subject; // 0x64(0x10)
	bool bIncognito; // 0x74(0x01)
	char pad_75[0x3]; // 0x75(0x03)
};

// ScriptStruct ShooterGame.AttachmentLoadout
// Size: 0x30 (Inherited: 0x00)
struct FAttachmentLoadout {
	struct FGuid SocketID; // 0x00(0x10)
	struct FGuid AttachmentId; // 0x10(0x10)
	struct FString MetaData; // 0x20(0x10)
};

// ScriptStruct ShooterGame.GunLoadout
// Size: 0x80 (Inherited: 0x00)
struct FGunLoadout {
	struct FGuid ID; // 0x00(0x10)
	struct FGuid SkinID; // 0x10(0x10)
	struct FGuid SkinLevelID; // 0x20(0x10)
	struct FGuid ChromaID; // 0x30(0x10)
	struct FGuid CharmInstanceID; // 0x40(0x10)
	struct FGuid CharmID; // 0x50(0x10)
	struct FGuid CharmLevelID; // 0x60(0x10)
	struct TArray<struct FAttachmentLoadout> Attachments; // 0x70(0x10)
};

// ScriptStruct ShooterGame.SprayLoadout
// Size: 0x30 (Inherited: 0x00)
struct FSprayLoadout {
	struct FGuid EquipSlotID; // 0x00(0x10)
	struct FGuid SprayID; // 0x10(0x10)
	struct FGuid SprayLevelId; // 0x20(0x10)
};

// ScriptStruct ShooterGame.ActiveExpressionItem
// Size: 0x20 (Inherited: 0x00)
struct FActiveExpressionItem {
	struct FGuid AssetID; // 0x00(0x10)
	struct FGuid TypeID; // 0x10(0x10)
};

// ScriptStruct ShooterGame.LoadoutIdentity
// Size: 0x34 (Inherited: 0x00)
struct FLoadoutIdentity {
	struct FGuid PlayerCardId; // 0x00(0x10)
	struct FGuid PlayerTitleId; // 0x10(0x10)
	struct FGuid PreferredLevelBorderID; // 0x20(0x10)
	bool HideAccountLevel; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
};

// ScriptStruct ShooterGame.PlayerLoadout
// Size: 0x88 (Inherited: 0x00)
struct FPlayerLoadout {
	struct FGuid Subject; // 0x00(0x10)
	int32_t Version; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FGunLoadout> Guns; // 0x18(0x10)
	struct TArray<struct FSprayLoadout> Sprays; // 0x28(0x10)
	struct TArray<struct FActiveExpressionItem> ActiveExpressions; // 0x38(0x10)
	int32_t MaxExpressionSlots; // 0x48(0x04)
	bool Incognito; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct FLoadoutIdentity Identity; // 0x50(0x34)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct ShooterGame.PickemPlayoffParams
// Size: 0x20 (Inherited: 0x00)
struct FPickemPlayoffParams {
	struct FString SectionID; // 0x00(0x10)
	struct UPickemBlockModel* PickemBlockModel; // 0x10(0x08)
	enum class EAresPickemStage Stage; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ShooterGame.AddressablePingServiceInfo
// Size: 0x28 (Inherited: 0x18)
struct FAddressablePingServiceInfo : FPingServiceInfo {
	struct FString Address; // 0x18(0x10)
};

// ScriptStruct ShooterGame.PingRecord
// Size: 0x18 (Inherited: 0x00)
struct FPingRecord {
	char pad_0[0x10]; // 0x00(0x10)
	uint32_t ProcessedCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.PingableEndpoint
// Size: 0x90 (Inherited: 0x00)
struct FPingableEndpoint {
	enum class EEndpointType Type; // 0x00(0x01)
	enum class EEndpointState State; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FPingRecord Stats; // 0x08(0x18)
	struct FAddressablePingServiceInfo ServiceInfo; // 0x20(0x28)
	struct FLatencyDataPayload LatencyPayload; // 0x48(0x48)
};

// ScriptStruct ShooterGame.PingRequestContainer
// Size: 0x10 (Inherited: 0x00)
struct FPingRequestContainer {
	struct TArray<struct UPingRequest*> Requests; // 0x00(0x10)
};

// ScriptStruct ShooterGame.RSOToken
// Size: 0x18 (Inherited: 0x00)
struct FRSOToken {
	struct FString AccessToken; // 0x00(0x10)
	struct FDateTime Expiration; // 0x10(0x08)
};

// ScriptStruct ShooterGame.EntitlementsToken
// Size: 0x20 (Inherited: 0x00)
struct FEntitlementsToken {
	struct FString Token; // 0x00(0x10)
	struct TArray<struct FString> Entitlements; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PlatformToken
// Size: 0x40 (Inherited: 0x00)
struct FPlatformToken {
	struct FString PlatformType; // 0x00(0x10)
	struct FString PlatformOS; // 0x10(0x10)
	struct FString PlatformOSVersion; // 0x20(0x10)
	struct FString PlatformChipset; // 0x30(0x10)
};

// ScriptStruct ShooterGame.PlayerAffinityToken
// Size: 0x10 (Inherited: 0x00)
struct FPlayerAffinityToken {
	struct FString Token; // 0x00(0x10)
};

// ScriptStruct ShooterGame.EmptyBody
// Size: 0x01 (Inherited: 0x00)
struct FEmptyBody {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.IgnoreBody
// Size: 0x01 (Inherited: 0x00)
struct FIgnoreBody {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.PlatformErrorEvent
// Size: 0x48 (Inherited: 0x00)
struct FPlatformErrorEvent {
	struct FString Subject; // 0x00(0x10)
	struct FString BuildVersion; // 0x10(0x10)
	struct FString ErrorComponent; // 0x20(0x10)
	int32_t ErrorCode; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString ErrorDescription; // 0x38(0x10)
};

// ScriptStruct ShooterGame.PlatformInitializerEntry
// Size: 0x28 (Inherited: 0x00)
struct FPlatformInitializerEntry {
	struct UInitSystem* System; // 0x00(0x08)
	enum class EPlatformInitializerSystemImportance Importance; // 0x08(0x01)
	enum class EPlatformInitializerSystemState State; // 0x09(0x01)
	enum class EPlatformInitializerTimeoutOptions TimeoutOptions; // 0x0a(0x01)
	char pad_B[0x5]; // 0x0b(0x05)
	struct FDateTime InitStartTime; // 0x10(0x08)
	struct FDateTime InitCompleteTime; // 0x18(0x08)
	bool bTimedOut; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct ShooterGame.PlatformInitializerCycleEntry
// Size: 0x10 (Inherited: 0x00)
struct FPlatformInitializerCycleEntry {
	struct UInitSystem* System; // 0x00(0x08)
	struct UInitSystem* RequiredBy; // 0x08(0x08)
};

// ScriptStruct ShooterGame.PlatformPlayerSubject
// Size: 0x10 (Inherited: 0x00)
struct FPlatformPlayerSubject {
	struct FString String; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PlayerAlias
// Size: 0x20 (Inherited: 0x00)
struct FPlayerAlias {
	struct FString GameName; // 0x00(0x10)
	struct FString TagLine; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PlayerCardPayload
// Size: 0x10 (Inherited: 0x00)
struct FPlayerCardPayload {
	struct UMaterialInstance* MaterialInstance; // 0x00(0x08)
	struct UPlayerCardWidgetBase* PlayerCardWidget; // 0x08(0x08)
};

// ScriptStruct ShooterGame.PlayerPerfStat
// Size: 0x24 (Inherited: 0x00)
struct FPlayerPerfStat {
	float CurrentTickMax; // 0x00(0x04)
	float CurrentTickMin; // 0x04(0x04)
	float CurrentTickAverage; // 0x08(0x04)
	float CurrentTickSum; // 0x0c(0x04)
	float CurrentTickExpSmooth; // 0x10(0x04)
	float WorldDurationSum; // 0x14(0x04)
	float SlidingWindowSum; // 0x18(0x04)
	float SlidingWindowDuration; // 0x1c(0x04)
	uint32_t SlidingWindowSampleCount; // 0x20(0x04)
};

// ScriptStruct ShooterGame.TextMetricEntry
// Size: 0x14 (Inherited: 0x00)
struct FTextMetricEntry {
	enum class EPlayerPerfStatField MetricStat; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor TextColor; // 0x04(0x10)
};

// ScriptStruct ShooterGame.GraphMetricEntry
// Size: 0x18 (Inherited: 0x00)
struct FGraphMetricEntry {
	enum class EPlayerPerfStatField MetricStat; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor MetricColor; // 0x04(0x10)
	enum class EGraphMetricTextPlacement MetricTextPlacement; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct ShooterGame.SurveyQuestionDTO
// Size: 0x28 (Inherited: 0x00)
struct FSurveyQuestionDTO {
	int32_t ID; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString Type; // 0x08(0x10)
	struct FString Question; // 0x18(0x10)
};

// ScriptStruct ShooterGame.SurveyQuestionContainerDTO
// Size: 0x10 (Inherited: 0x00)
struct FSurveyQuestionContainerDTO {
	struct TArray<struct FSurveyQuestionDTO> Questions; // 0x00(0x10)
};

// ScriptStruct ShooterGame.SurveyDTO
// Size: 0x48 (Inherited: 0x00)
struct FSurveyDTO {
	bool IsSurveyAvailable; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t ID; // 0x04(0x04)
	struct FString Title; // 0x08(0x10)
	struct FString Caption; // 0x18(0x10)
	struct FString Type; // 0x28(0x10)
	struct FSurveyQuestionContainerDTO Data; // 0x38(0x10)
};

// ScriptStruct ShooterGame.ResponseActionDTO
// Size: 0x18 (Inherited: 0x00)
struct FResponseActionDTO {
	struct FString Action; // 0x00(0x10)
	struct FDateTime Timestamp; // 0x10(0x08)
};

// ScriptStruct ShooterGame.QuestionResponseDTO
// Size: 0x58 (Inherited: 0x00)
struct FQuestionResponseDTO {
	int32_t questionId; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct FString, struct FString> responseData; // 0x08(0x50)
};

// ScriptStruct ShooterGame.SurveyResponseDTO
// Size: 0x28 (Inherited: 0x00)
struct FSurveyResponseDTO {
	struct FDateTime CreatedAt; // 0x00(0x08)
	struct TArray<struct FQuestionResponseDTO> questionResponses; // 0x08(0x10)
	struct TArray<struct FResponseActionDTO> Actions; // 0x18(0x10)
};

// ScriptStruct ShooterGame.PlayerFeedbackMetadataConstants
// Size: 0x01 (Inherited: 0x00)
struct FPlayerFeedbackMetadataConstants {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct ShooterGame.PlayerFeedbackPayload
// Size: 0xb8 (Inherited: 0x00)
struct FPlayerFeedbackPayload {
	struct FString AgentPlayed; // 0x00(0x10)
	struct TArray<struct FString> AgentsPlayedAgainst; // 0x10(0x10)
	struct TArray<struct FString> AgentsPlayedWith; // 0x20(0x10)
	struct FString QueueID; // 0x30(0x10)
	struct FString MapID; // 0x40(0x10)
	struct FString GameMode; // 0x50(0x10)
	float Mmr; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct FString Platform; // 0x68(0x10)
	struct FString Puuid; // 0x78(0x10)
	struct FString PurchaseSource; // 0x88(0x10)
	struct TArray<struct FString> PurchasedItems; // 0x98(0x10)
	struct FString Rank; // 0xa8(0x10)
};

// ScriptStruct ShooterGame.PlayerSpawnedGameDataEvent
// Size: 0x10 (Inherited: 0x08)
struct FPlayerSpawnedGameDataEvent : FGameDataEventBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.PlayerKilledGameDataEvent
// Size: 0x48 (Inherited: 0x08)
struct FPlayerKilledGameDataEvent : FGameDataEventBase {
	char pad_8[0x40]; // 0x08(0x40)
};

// ScriptStruct ShooterGame.PlayerResurrectedGameDataEvent
// Size: 0x10 (Inherited: 0x08)
struct FPlayerResurrectedGameDataEvent : FGameDataEventBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.PlayerDownedGameDataEvent
// Size: 0x38 (Inherited: 0x08)
struct FPlayerDownedGameDataEvent : FGameDataEventBase {
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct ShooterGame.PlayerRecoveredGameDataEvent
// Size: 0x10 (Inherited: 0x08)
struct FPlayerRecoveredGameDataEvent : FGameDataEventBase {
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.PlayerLoadoutChangedGameDataEvent
// Size: 0x48 (Inherited: 0x08)
struct FPlayerLoadoutChangedGameDataEvent : FGameDataEventBase {
	char pad_8[0x40]; // 0x08(0x40)
};

// ScriptStruct ShooterGame.DamageGameDataEvent
// Size: 0x40 (Inherited: 0x08)
struct FDamageGameDataEvent : FGameDataEventBase {
	char pad_8[0x38]; // 0x08(0x38)
};

// ScriptStruct ShooterGame.HealGameDataEvent
// Size: 0x28 (Inherited: 0x08)
struct FHealGameDataEvent : FGameDataEventBase {
	char pad_8[0x20]; // 0x08(0x20)
};

// ScriptStruct ShooterGame.PlayerShotTakenGameDataEvent
// Size: 0x68 (Inherited: 0x08)
struct FPlayerShotTakenGameDataEvent : FGameDataEventBase {
	char pad_8[0x60]; // 0x08(0x60)
};

// ScriptStruct ShooterGame.AbilityUsedGameDataEvent
// Size: 0x28 (Inherited: 0x08)
struct FAbilityUsedGameDataEvent : FGameDataEventBase {
	char pad_8[0x20]; // 0x08(0x20)
};

// ScriptStruct ShooterGame.OrbPickedUpGameDataEvent
// Size: 0x38 (Inherited: 0x08)
struct FOrbPickedUpGameDataEvent : FGameDataEventBase {
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct ShooterGame.OrbUseStartedGameDataEvent
// Size: 0x38 (Inherited: 0x08)
struct FOrbUseStartedGameDataEvent : FGameDataEventBase {
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct ShooterGame.OrbUseCancelledGameDataEvent
// Size: 0x38 (Inherited: 0x08)
struct FOrbUseCancelledGameDataEvent : FGameDataEventBase {
	char pad_8[0x30]; // 0x08(0x30)
};

// ScriptStruct ShooterGame.TimeseriesData
// Size: 0x50 (Inherited: 0x00)
struct FTimeseriesData {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct ShooterGame.PlayerIcons
// Size: 0x18 (Inherited: 0x00)
struct FPlayerIcons {
	struct UTexture* DisplayIcon; // 0x00(0x08)
	struct UTexture* KillfeedIcon; // 0x08(0x08)
	struct UTexture* MinimapIcon; // 0x10(0x08)
};

// ScriptStruct ShooterGame.OpponentCombatTracking
// Size: 0x08 (Inherited: 0x00)
struct FOpponentCombatTracking {
	float LastRespawnTime; // 0x00(0x04)
	int32_t LastInteractionTime; // 0x04(0x04)
};

// ScriptStruct ShooterGame.WeaponHitzoneHits
// Size: 0x0c (Inherited: 0x00)
struct FWeaponHitzoneHits {
	int32_t HeadshotsHit; // 0x00(0x04)
	int32_t UpperBodyShotsHit; // 0x04(0x04)
	int32_t LowerBodyShotsHit; // 0x08(0x04)
};

// ScriptStruct ShooterGame.WeaponStats
// Size: 0x34 (Inherited: 0x00)
struct FWeaponStats {
	struct FWeaponHitzoneHits WeaponHitzoneHits; // 0x00(0x0c)
	float TotalDamageDealt; // 0x0c(0x04)
	int32_t TotalShotsHit; // 0x10(0x04)
	int32_t TotalShots; // 0x14(0x04)
	int32_t Kills; // 0x18(0x04)
	int32_t Deaths; // 0x1c(0x04)
	int32_t ShotsWithMovementError; // 0x20(0x04)
	int32_t HeadShotKills; // 0x24(0x04)
	int32_t FirstShotHeadShots; // 0x28(0x04)
	int32_t OpponentEncounters; // 0x2c(0x04)
	bool IsCollateral; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
};

// ScriptStruct ShooterGame.WeaponStatPair
// Size: 0x40 (Inherited: 0x00)
struct FWeaponStatPair {
	struct AAresEquippable* Weapon; // 0x00(0x08)
	struct FWeaponStats WeaponStats; // 0x08(0x34)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ShooterGame.PlayerLoginLocationHistory
// Size: 0x10 (Inherited: 0x00)
struct FPlayerLoginLocationHistory {
	struct FString PlayerLoginLocation; // 0x00(0x10)
};

// ScriptStruct ShooterGame.EFeedbackMessage
// Size: 0x28 (Inherited: 0x00)
struct FEFeedbackMessage {
	enum class EFeedbackMessageType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Title; // 0x08(0x10)
	struct FString Message; // 0x18(0x10)
};

// ScriptStruct ShooterGame.PlayerScoreDebugEntry
// Size: 0x10 (Inherited: 0x00)
struct FPlayerScoreDebugEntry {
	int32_t Delta; // 0x00(0x04)
	struct FName Reason; // 0x04(0x0c)
};

// ScriptStruct ShooterGame.PlayerSettingChangedEvent
// Size: 0x30 (Inherited: 0x00)
struct FPlayerSettingChangedEvent {
	struct FString Subject; // 0x00(0x10)
	struct FString SettingName; // 0x10(0x10)
	struct FString Version; // 0x20(0x10)
};

// ScriptStruct ShooterGame.PlayerSettingIntChangedEvent
// Size: 0x38 (Inherited: 0x30)
struct FPlayerSettingIntChangedEvent : FPlayerSettingChangedEvent {
	int32_t OldValue; // 0x30(0x04)
	int32_t Value; // 0x34(0x04)
};

// ScriptStruct ShooterGame.PlayerSettingFloatChangedEvent
// Size: 0x38 (Inherited: 0x30)
struct FPlayerSettingFloatChangedEvent : FPlayerSettingChangedEvent {
	float OldValue; // 0x30(0x04)
	float Value; // 0x34(0x04)
};

// ScriptStruct ShooterGame.PlayerSettingBoolChangedEvent
// Size: 0x38 (Inherited: 0x30)
struct FPlayerSettingBoolChangedEvent : FPlayerSettingChangedEvent {
	bool OldValue; // 0x30(0x01)
	bool Value; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
};

// ScriptStruct ShooterGame.PlayerSettingStringChangedEvent
// Size: 0x50 (Inherited: 0x30)
struct FPlayerSettingStringChangedEvent : FPlayerSettingChangedEvent {
	struct FString OldValue; // 0x30(0x10)
	struct FString Value; // 0x40(0x10)
};

// ScriptStruct ShooterGame.SlotToCooldownMap
// Size: 0x50 (Inherited: 0x00)
struct FSlotToCooldownMap {
	struct TMap<enum class ECharacterAbilitySlot, struct FAgentAbilityCooldown> SlotToCooldownMap; // 0x00(0x50)
};

// ScriptStruct ShooterGame.SelectedLoadout
// Size: 0x08 (Inherited: 0x00)
struct FSelectedLoadout {
	int32_t LoadoutIndex; // 0x00(0x04)
	bool bIsRandom; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct ShooterGame.DataArrivedDebugEntry
// Size: 0x08 (Inherited: 0x00)
struct FDataArrivedDebugEntry {
	struct FTimeStampIndex TimelineTimestamp; // 0x00(0x04)
	float ArrivalTimestamp; // 0x04(0x04)
};

// ScriptStruct ShooterGame.PopupModalConfig
// Size: 0x70 (Inherited: 0x00)
struct FPopupModalConfig {
	struct FString TitleText; // 0x00(0x10)
	struct FString BodyText; // 0x10(0x10)
	struct FDelegate AcceptCallback; // 0x20(0x14)
	struct FDelegate DismissCallback; // 0x34(0x14)
	struct FString AcceptText; // 0x48(0x10)
	struct FString DismissText; // 0x58(0x10)
	bool bShowDismissText; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// ScriptStruct ShooterGame.CalculatedProjectileStep
// Size: 0x38 (Inherited: 0x00)
struct FCalculatedProjectileStep {
	float Timestamp; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector Location; // 0x08(0x18)
	struct FVector Velocity; // 0x20(0x18)
};

// ScriptStruct ShooterGame.PregameMUCInfo
// Size: 0x20 (Inherited: 0x00)
struct FPregameMUCInfo {
	struct FString Token; // 0x00(0x10)
	struct FString Room; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PregamePlayer
// Size: 0x28 (Inherited: 0x00)
struct FPregamePlayer {
	struct FString Subject; // 0x00(0x10)
	int64_t Version; // 0x10(0x08)
	struct FString MatchID; // 0x18(0x10)
};

// ScriptStruct ShooterGame.PregameMatchPlayer
// Size: 0x160 (Inherited: 0x00)
struct FPregameMatchPlayer {
	struct FString Subject; // 0x00(0x10)
	struct FString CharacterID; // 0x10(0x10)
	struct FString CharacterSelectionState; // 0x20(0x10)
	struct FString PregamePlayerState; // 0x30(0x10)
	int32_t CompetitiveTier; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FPlayerIdentity PlayerIdentity; // 0x48(0x48)
	struct FMMRSeasonBadgeInfo SeasonalBadgeInfo; // 0x90(0x78)
	struct FPremierPrestigeInternal PremierPrestige; // 0x108(0x50)
	bool IsCaptain; // 0x158(0x01)
	char pad_159[0x7]; // 0x159(0x07)
};

// ScriptStruct ShooterGame.PregameTeam
// Size: 0x20 (Inherited: 0x00)
struct FPregameTeam {
	struct TArray<struct FPregameMatchPlayer> Players; // 0x00(0x10)
	struct FName TeamID; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.PregameMatchCoach
// Size: 0x20 (Inherited: 0x00)
struct FPregameMatchCoach {
	struct FString Subject; // 0x00(0x10)
	struct FName TeamID; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.PregameMatch
// Size: 0x298 (Inherited: 0x00)
struct FPregameMatch {
	struct FString ID; // 0x00(0x10)
	int64_t Version; // 0x10(0x08)
	struct FString PregameState; // 0x18(0x10)
	struct TArray<struct FPregameTeam> Teams; // 0x28(0x10)
	struct TArray<struct FString> ObserverSubjects; // 0x38(0x10)
	struct TArray<struct FPregameMatchCoach> MatchCoaches; // 0x48(0x10)
	int32_t EnemyTeamLockCount; // 0x58(0x04)
	int32_t EnemyTeamSize; // 0x5c(0x04)
	struct FDateTime LastUpdated; // 0x60(0x08)
	struct FString MapID; // 0x68(0x10)
	struct TArray<struct FGuid> MapSelectPool; // 0x78(0x10)
	struct TArray<struct FGuid> BannedMapIDs; // 0x88(0x10)
	struct TMap<struct FString, struct FString> CastedVotes; // 0x98(0x50)
	struct TArray<struct FPregameStep> MapSelectSteps; // 0xe8(0x10)
	int32_t MapSelectStep; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FString Team1; // 0x100(0x10)
	struct FString Mode; // 0x110(0x10)
	struct FString VoiceSessionId; // 0x120(0x10)
	struct FString MUCName; // 0x130(0x10)
	struct FString TeamMatchToken; // 0x140(0x10)
	struct FString QueueID; // 0x150(0x10)
	struct FString GamePodID; // 0x160(0x10)
	struct FString ProvisioningFlowID; // 0x170(0x10)
	enum class EProvisioningFlowID ProvisioningFlowEnum; // 0x180(0x01)
	bool IsRanked; // 0x181(0x01)
	char pad_182[0x6]; // 0x182(0x06)
	int64_t PhaseTimeRemainingNS; // 0x188(0x08)
	int64_t StepTimeRemainingNS; // 0x190(0x08)
	bool AltModesFlagADA; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct FTournamentMetadata TournamentMetadata; // 0x1a0(0x88)
	struct FTournamentRosterMetadata RosterMetadata; // 0x228(0x70)
};

// ScriptStruct ShooterGame.PregameMatchLoadouts
// Size: 0x18 (Inherited: 0x00)
struct FPregameMatchLoadouts {
	struct TArray<struct FMegapacketLoadout> Loadouts; // 0x00(0x10)
	bool LoadoutsValid; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.InGamePreloadSet
// Size: 0xd8 (Inherited: 0x00)
struct FInGamePreloadSet {
	struct FString Key; // 0x00(0x10)
	bool bAllLoadingInitiated; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TSet<struct FSoftObjectPath> RequestedAssets; // 0x18(0x50)
	struct TSet<struct UObject*> LoadedAssets; // 0x68(0x50)
	char pad_B8[0x18]; // 0xb8(0x18)
	bool bIsDropInPlayer; // 0xd0(0x01)
	bool bDebugOnLoadedFired; // 0xd1(0x01)
	char pad_D2[0x6]; // 0xd2(0x06)
};

// ScriptStruct ShooterGame.DroppingPlayerProgressMonitor
// Size: 0x18 (Inherited: 0x00)
struct FDroppingPlayerProgressMonitor {
	struct FTimerHandle ProgressCheckHandle; // 0x00(0x08)
	char pad_8[0x10]; // 0x08(0x10)
};

// ScriptStruct ShooterGame.PremierPlayerPrestige
// Size: 0x05 (Inherited: 0x00)
struct FPremierPlayerPrestige {
	bool ShowTag; // 0x00(0x01)
	bool ShowPlating; // 0x01(0x01)
	bool ShowAura; // 0x02(0x01)
	bool EarnedPrestige; // 0x03(0x01)
	bool EarnedAura; // 0x04(0x01)
};

// ScriptStruct ShooterGame.PremierPlayerSeasonV3
// Size: 0x18 (Inherited: 0x00)
struct FPremierPlayerSeasonV3 {
	struct FString SeasonID; // 0x00(0x10)
	bool HasEarnedPrestigeAura; // 0x10(0x01)
	bool HasEarnedParticipation; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
};

// ScriptStruct ShooterGame.PremierPlayer
// Size: 0xa0 (Inherited: 0x00)
struct FPremierPlayer {
	struct FString Puuid; // 0x00(0x10)
	int64_t SocialVersion; // 0x10(0x08)
	int64_t PremierVersion; // 0x18(0x08)
	struct FString RosterID; // 0x20(0x10)
	struct TArray<struct FPremierRosterV2Invite> Invites; // 0x30(0x10)
	struct FPremierPlayerPrestige Prestige; // 0x40(0x05)
	char pad_45[0x3]; // 0x45(0x03)
	struct FDateTime ContenderEligibilityExpiry; // 0x48(0x08)
	struct TMap<struct FString, struct FPremierPlayerSeasonV3> Seasons; // 0x50(0x50)
};

// ScriptStruct ShooterGame.PremierRosterInfo
// Size: 0x50 (Inherited: 0x00)
struct FPremierRosterInfo {
	struct FString RosterID; // 0x00(0x10)
	struct FString RosterName; // 0x10(0x10)
	struct FString RosterTag; // 0x20(0x10)
	struct FString RosterType; // 0x30(0x10)
	int32_t Division; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	int64_t Score; // 0x48(0x08)
};

// ScriptStruct ShooterGame.PremierPrestige
// Size: 0x48 (Inherited: 0x00)
struct FPremierPrestige {
	struct FString RosterID; // 0x00(0x10)
	struct FString RosterName; // 0x10(0x10)
	struct FString RosterTag; // 0x20(0x10)
	struct FString RosterType; // 0x30(0x10)
	bool ShowTag; // 0x40(0x01)
	bool ShowPlating; // 0x41(0x01)
	enum class EPremierPrestigePlating Plating; // 0x42(0x01)
	bool ShowAura; // 0x43(0x01)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ShooterGame.PremierEventDivisionScheduleDTO
// Size: 0x30 (Inherited: 0x00)
struct FPremierEventDivisionScheduleDTO {
	int32_t Division; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FDateTime StartDateTime; // 0x08(0x08)
	struct FDateTime EndDateTime; // 0x10(0x08)
	struct FString QueueID; // 0x18(0x10)
	int32_t RequiredMaxLeaguePoints; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ShooterGame.PremierEventConferenceScheduleDTO
// Size: 0x20 (Inherited: 0x00)
struct FPremierEventConferenceScheduleDTO {
	struct FString Conference; // 0x00(0x10)
	struct FDateTime StartDateTime; // 0x10(0x08)
	struct FDateTime EndDateTime; // 0x18(0x08)
};

// ScriptStruct ShooterGame.PremierEventDTO
// Size: 0xa0 (Inherited: 0x00)
struct FPremierEventDTO {
	struct FGuid ID; // 0x00(0x10)
	struct FString Type; // 0x10(0x10)
	struct TArray<struct FPremierEventDivisionScheduleDTO> SchedulePerDivision; // 0x20(0x10)
	struct TMap<struct FString, struct FPremierEventConferenceScheduleDTO> SchedulePerConference; // 0x30(0x50)
	struct FString MapSelectionStrategy; // 0x80(0x10)
	struct TArray<struct FGuid> MapPoolMapIds; // 0x90(0x10)
};

// ScriptStruct ShooterGame.PointsConfig
// Size: 0x10 (Inherited: 0x00)
struct FPointsConfig {
	int64_t PointsForWin; // 0x00(0x08)
	int64_t PointsForLoss; // 0x08(0x08)
};

// ScriptStruct ShooterGame.PremierEventPreset
// Size: 0x58 (Inherited: 0x00)
struct FPremierEventPreset {
	struct FString EventPresetName; // 0x00(0x10)
	struct FString EventType; // 0x10(0x10)
	int64_t BestOfN; // 0x20(0x08)
	struct FString MatchmakingStrategy; // 0x28(0x10)
	struct FString QueueID; // 0x38(0x10)
	struct FPointsConfig PointsConfig; // 0x48(0x10)
};

// ScriptStruct ShooterGame.PremierEventPresets
// Size: 0x50 (Inherited: 0x00)
struct FPremierEventPresets {
	struct TMap<enum class EPremierEventType, struct FPremierEventPreset> EventPresetsByEventType; // 0x00(0x50)
};

// ScriptStruct ShooterGame.PremierConference
// Size: 0x58 (Inherited: 0x00)
struct FPremierConference {
	struct FGuid ID; // 0x00(0x10)
	struct FString Key; // 0x10(0x10)
	bool IsSuper; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct TArray<struct FString> GamePods; // 0x28(0x10)
	struct FString Timezone; // 0x38(0x10)
	struct FDateTime LeaderboardPlayoffQualificationDateTime; // 0x48(0x08)
	struct FDateTime LeaderboardPromotionFinalizationDatetime; // 0x50(0x08)
};

// ScriptStruct ShooterGame.PremierConferences
// Size: 0x10 (Inherited: 0x00)
struct FPremierConferences {
	struct TArray<struct FPremierConference> PremierConferences; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PremierDivision
// Size: 0x38 (Inherited: 0x00)
struct FPremierDivision {
	int32_t Division; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString DivisionName; // 0x08(0x10)
	struct FString DivisionGroup; // 0x18(0x10)
	struct FString EventPresetName; // 0x28(0x10)
};

// ScriptStruct ShooterGame.PremierDivisions
// Size: 0x10 (Inherited: 0x00)
struct FPremierDivisions {
	struct TArray<struct FPremierDivision> PremierDivisions; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PremierDivisionThresholdDTO
// Size: 0x70 (Inherited: 0x00)
struct FPremierDivisionThresholdDTO {
	struct FString Conference; // 0x00(0x10)
	int32_t Division; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString PlayoffThresholdType; // 0x18(0x10)
	int32_t PlayoffThresholdValue; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString PromotionThresholdType; // 0x30(0x10)
	int32_t PromotionThresholdValue; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString PromotionConference; // 0x48(0x10)
	struct FString SkipReseedCriteria; // 0x58(0x10)
	int32_t SkipReseedCriteriaValue; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct ShooterGame.PremierSeasonDTO
// Size: 0x138 (Inherited: 0x00)
struct FPremierSeasonDTO {
	struct FGuid ID; // 0x00(0x10)
	struct FGuid CompetitiveSeasonID; // 0x10(0x10)
	struct FGuid PreviousPremierSeasonID; // 0x20(0x10)
	struct FGuid NextPremierSeasonID; // 0x30(0x10)
	bool IsActive; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct FPremierEventDTO> Events; // 0x48(0x10)
	struct TArray<struct FPremierScheduledEventDTO> ScheduledEvents; // 0x58(0x10)
	struct FDateTime StartTime; // 0x68(0x08)
	struct FDateTime EndTime; // 0x70(0x08)
	struct TMap<struct FString, struct FPremierEventPresets> EventPresets; // 0x78(0x50)
	struct TArray<struct FPremierConference> Conferences; // 0xc8(0x10)
	struct TArray<struct FPremierDivision> Divisions; // 0xd8(0x10)
	struct FDateTime EnrollmentPhaseStartDateTime; // 0xe8(0x08)
	struct FDateTime EnrollmentPhaseEndDateTime; // 0xf0(0x08)
	struct TArray<struct FPremierDivisionThresholdDTO> DivisionThresholds; // 0xf8(0x10)
	int32_t FlawlessPointRequirement; // 0x108(0x04)
	int32_t ChampionshipPointRequirement; // 0x10c(0x04)
	struct FString ChampionshipEventID; // 0x110(0x10)
	struct FDateTime LeaderboardFinalizationDatetime; // 0x120(0x08)
	struct FDateTime LeaderboardPlayoffQualificationDateTime; // 0x128(0x08)
	struct FDateTime LeaderboardPromotionFinalizationDatetime; // 0x130(0x08)
};

// ScriptStruct ShooterGame.PremierSeasonsDTO
// Size: 0x10 (Inherited: 0x00)
struct FPremierSeasonsDTO {
	struct TArray<struct FPremierSeasonDTO> PremierSeasons; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PremierRosterV2Creation
// Size: 0x40 (Inherited: 0x00)
struct FPremierRosterV2Creation {
	struct FString OwnerSubject; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString Tag; // 0x20(0x10)
	struct FString Conference; // 0x30(0x10)
};

// ScriptStruct ShooterGame.PremierRosterRename
// Size: 0x20 (Inherited: 0x00)
struct FPremierRosterRename {
	struct FString Name; // 0x00(0x10)
	struct FString Tag; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PremierChangeRole
// Size: 0x10 (Inherited: 0x00)
struct FPremierChangeRole {
	struct FString Role; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PremierRoster
// Size: 0x260 (Inherited: 0x00)
struct FPremierRoster {
	struct FString ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct FString Tag; // 0x20(0x10)
	struct FString RosterType; // 0x30(0x10)
	int32_t LeaguePoints; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString Conference; // 0x48(0x10)
	int32_t Division; // 0x58(0x04)
	bool IsProvisionalDivision; // 0x5c(0x01)
	bool PromotionApplied; // 0x5d(0x01)
	char pad_5E[0x2]; // 0x5e(0x02)
	int32_t LeaguePointsBonusMatchesRemaining; // 0x60(0x04)
	int32_t LeaguePointsBonusMatchesTotal; // 0x64(0x04)
	int32_t LeagueMatchesPlayed; // 0x68(0x04)
	int32_t TournamentsPlayed; // 0x6c(0x04)
	bool IsEnrolled; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32_t MinimumRequiredMembersForEnrollment; // 0x74(0x04)
	int64_t Version; // 0x78(0x08)
	int32_t Wins; // 0x80(0x04)
	int32_t GamesPlayed; // 0x84(0x04)
	struct FPremierRosterCustomization CustomizationData; // 0x88(0x40)
	struct FPremierRosterV2SeasonData Season; // 0xc8(0x118)
	struct TMap<struct FString, struct FPremierRosterV2SeasonData> SeasonalInfoBySeasonID; // 0x1e0(0x50)
	struct FPremierRosterPrestige Prestige; // 0x230(0x18)
	bool IsForceRenamed; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct TArray<struct FPremierRosterV2Member> Members; // 0x250(0x10)
};

// ScriptStruct ShooterGame.PremierPlayerV2
// Size: 0x48 (Inherited: 0x00)
struct FPremierPlayerV2 {
	struct FString Puuid; // 0x00(0x10)
	struct FString RosterID; // 0x10(0x10)
	struct TArray<struct FPremierRosterV2Invite> Invites; // 0x20(0x10)
	int64_t Version; // 0x30(0x08)
	int64_t CreatedAt; // 0x38(0x08)
	int64_t UpdatedAt; // 0x40(0x08)
};

// ScriptStruct ShooterGame.PremierRosterMatchHistoryMatchEntry
// Size: 0x28 (Inherited: 0x00)
struct FPremierRosterMatchHistoryMatchEntry {
	struct FString MatchID; // 0x00(0x10)
	int64_t LeaguePointsBefore; // 0x10(0x08)
	int64_t LeaguePointsAfter; // 0x18(0x08)
	int64_t LeaguePointsEarned; // 0x20(0x08)
};

// ScriptStruct ShooterGame.PremierRosterMatchHistoryTournamentMatchData
// Size: 0x20 (Inherited: 0x00)
struct FPremierRosterMatchHistoryTournamentMatchData {
	int64_t Points; // 0x00(0x08)
	int32_t RoundNumber; // 0x08(0x04)
	int32_t TotalRounds; // 0x0c(0x04)
	struct FString BracketType; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PremierRosterMatchHistoryTournamentEntry
// Size: 0xd8 (Inherited: 0x00)
struct FPremierRosterMatchHistoryTournamentEntry {
	struct FString tournamentid; // 0x00(0x10)
	uint32_t FinalPlacement; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	int64_t FinalPlacementLeaguePointsBonus; // 0x18(0x08)
	int64_t LeaguePointsBefore; // 0x20(0x08)
	int64_t LeaguePointsAfter; // 0x28(0x08)
	int64_t LeaguePointsEarned; // 0x30(0x08)
	struct TMap<struct FString, int64_t> MatchEntries; // 0x38(0x50)
	struct TMap<struct FString, struct FPremierRosterMatchHistoryTournamentMatchData> TournamentMatchData; // 0x88(0x50)
};

// ScriptStruct ShooterGame.PremierRosterMatchHistoryScrimEntry
// Size: 0x10 (Inherited: 0x00)
struct FPremierRosterMatchHistoryScrimEntry {
	struct FString MatchID; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PremierRosterMatchHistory
// Size: 0x30 (Inherited: 0x00)
struct FPremierRosterMatchHistory {
	struct TArray<struct FPremierRosterMatchHistoryMatchEntry> LeagueMatchHistory; // 0x00(0x10)
	struct TArray<struct FPremierRosterMatchHistoryTournamentEntry> TournamentMatchHistory; // 0x10(0x10)
	struct TArray<struct FPremierRosterMatchHistoryScrimEntry> ScrimMatchHistory; // 0x20(0x10)
};

// ScriptStruct ShooterGame.PremierMatchLimitInfo
// Size: 0x10 (Inherited: 0x00)
struct FPremierMatchLimitInfo {
	int32_t LeagueMatchLimit; // 0x00(0x04)
	int32_t TournamentLimit; // 0x04(0x04)
	int64_t TimeUntilNextResetSeconds; // 0x08(0x08)
};

// ScriptStruct ShooterGame.PremierRosterConferenceBody
// Size: 0x10 (Inherited: 0x00)
struct FPremierRosterConferenceBody {
	struct FString Conference; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PremierRosterMUCToken
// Size: 0x40 (Inherited: 0x00)
struct FPremierRosterMUCToken {
	struct FString Typ; // 0x00(0x10)
	struct FString Chn; // 0x10(0x10)
	struct FString Tgt; // 0x20(0x10)
	struct FString Token; // 0x30(0x10)
};

// ScriptStruct ShooterGame.RosterInfo
// Size: 0x20 (Inherited: 0x00)
struct FRosterInfo {
	struct FString Realm; // 0x00(0x10)
	struct FString RosterID; // 0x10(0x10)
};

// ScriptStruct ShooterGame.RosterPlayer
// Size: 0x48 (Inherited: 0x00)
struct FRosterPlayer {
	struct FString Puuid; // 0x00(0x10)
	int64_t Version; // 0x10(0x08)
	struct TArray<struct FRosterInfo> Rosters; // 0x18(0x10)
	struct TArray<struct FRosterInvite> Invites; // 0x28(0x10)
	int64_t UpdatedAt; // 0x38(0x08)
	int64_t CreatedAt; // 0x40(0x08)
};

// ScriptStruct ShooterGame.RosterAffinity
// Size: 0x20 (Inherited: 0x00)
struct FRosterAffinity {
	struct FString GameShardZone; // 0x00(0x10)
	struct FString Affinity; // 0x10(0x10)
};

// ScriptStruct ShooterGame.RosterUnverifiedMetadataBody
// Size: 0x40 (Inherited: 0x00)
struct FRosterUnverifiedMetadataBody {
	struct FRosterUnverifiedMetadata Unverified; // 0x00(0x40)
};

// ScriptStruct ShooterGame.RosterCreateBody
// Size: 0x90 (Inherited: 0x00)
struct FRosterCreateBody {
	struct FString Name; // 0x00(0x10)
	struct FString Tag; // 0x10(0x10)
	struct FRosterMetadata MetaData; // 0x20(0x70)
};

// ScriptStruct ShooterGame.RosterRoleChangeBody
// Size: 0x01 (Inherited: 0x00)
struct FRosterRoleChangeBody {
	enum class ERosterMemberRole Role; // 0x00(0x01)
};

// ScriptStruct ShooterGame.RosterMUCToken
// Size: 0x40 (Inherited: 0x00)
struct FRosterMUCToken {
	struct FString Typ; // 0x00(0x10)
	struct FString Chn; // 0x10(0x10)
	struct FString Tgt; // 0x20(0x10)
	struct FString Token; // 0x30(0x10)
};

// ScriptStruct ShooterGame.PremierRosterPlayerRoster
// Size: 0x10 (Inherited: 0x00)
struct FPremierRosterPlayerRoster {
	struct FString RosterID; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PremierRosterPlayerInvite
// Size: 0x58 (Inherited: 0x00)
struct FPremierRosterPlayerInvite {
	struct FString RosterID; // 0x00(0x10)
	struct FString RosterName; // 0x10(0x10)
	struct FString RosterTag; // 0x20(0x10)
	struct FString Puuid; // 0x30(0x10)
	struct FString SenderPuuid; // 0x40(0x10)
	int64_t CreatedAt; // 0x50(0x08)
};

// ScriptStruct ShooterGame.PremierMatchScoreUpdateDataModel
// Size: 0x30 (Inherited: 0x00)
struct FPremierMatchScoreUpdateDataModel {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct ShooterGame.PremierGameDataEventContext
// Size: 0x88 (Inherited: 0x00)
struct FPremierGameDataEventContext {
	char pad_0[0x88]; // 0x00(0x88)
};

// ScriptStruct ShooterGame.PremierMatchScoreUpdateDataEvent
// Size: 0x40 (Inherited: 0x08)
struct FPremierMatchScoreUpdateDataEvent : FGameDataEventBase {
	char pad_8[0x38]; // 0x08(0x38)
};

// ScriptStruct ShooterGame.PremierLeaderboardContext
// Size: 0x30 (Inherited: 0x00)
struct FPremierLeaderboardContext {
	char pad_0[0x30]; // 0x00(0x30)
};

// ScriptStruct ShooterGame.LeaderboardEntityRankFetch
// Size: 0x20 (Inherited: 0x00)
struct FLeaderboardEntityRankFetch {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.AdditionalData
// Size: 0x78 (Inherited: 0x00)
struct FAdditionalData {
	struct FString RosterName; // 0x00(0x10)
	struct FString Tag; // 0x10(0x10)
	int32_t Wins; // 0x20(0x04)
	int32_t Losses; // 0x24(0x04)
	int32_t RoundWins; // 0x28(0x04)
	int32_t RoundLosses; // 0x2c(0x04)
	int32_t tournamentPlacement; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FPremierRosterCustomization Customization; // 0x38(0x40)
};

// ScriptStruct ShooterGame.LeaderboardRankingDTO
// Size: 0x98 (Inherited: 0x00)
struct FLeaderboardRankingDTO {
	struct FString EntityID; // 0x00(0x10)
	int32_t ranking; // 0x10(0x04)
	float Score; // 0x14(0x04)
	bool anonymous; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FAdditionalData additionalInfo; // 0x20(0x78)
};

// ScriptStruct ShooterGame.LeaderboardEntriesResponseDTO
// Size: 0x70 (Inherited: 0x00)
struct FLeaderboardEntriesResponseDTO {
	struct FString Type; // 0x00(0x10)
	struct FString Region; // 0x10(0x10)
	struct FString Grouping; // 0x20(0x10)
	struct FString Season; // 0x30(0x10)
	struct FString Name; // 0x40(0x10)
	int32_t StartRank; // 0x50(0x04)
	int32_t EndRank; // 0x54(0x04)
	int32_t Size; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<struct FLeaderboardRankingDTO> Rankings; // 0x60(0x10)
};

// ScriptStruct ShooterGame.LeaderboardEntryRankResponseDTO
// Size: 0x18 (Inherited: 0x00)
struct FLeaderboardEntryRankResponseDTO {
	struct FString EntityID; // 0x00(0x10)
	int64_t ranking; // 0x10(0x08)
};

// ScriptStruct ShooterGame.PremierDivisionData
// Size: 0x60 (Inherited: 0x08)
struct FPremierDivisionData : FTableRowBase {
	int32_t Division; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DivisionName; // 0x10(0x18)
	enum class EPremierDivisionGroup DivisionGroup; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FLinearColor PrimaryColor; // 0x2c(0x10)
	struct FLinearColor SecondaryColor; // 0x3c(0x10)
	char pad_4C[0x4]; // 0x4c(0x04)
	struct UTexture* IconTextureSmall; // 0x50(0x08)
	struct UTexture* IconTextureLarge; // 0x58(0x08)
};

// ScriptStruct ShooterGame.PremierEventDivisionSchedule
// Size: 0x2c (Inherited: 0x00)
struct FPremierEventDivisionSchedule {
	int32_t Division; // 0x00(0x04)
	struct FTimecode StartTime; // 0x04(0x14)
	struct FTimecode Duration; // 0x18(0x14)
};

// ScriptStruct ShooterGame.PremierEventScheduleDateTimes
// Size: 0x10 (Inherited: 0x00)
struct FPremierEventScheduleDateTimes {
	struct FDateTime StartTime; // 0x00(0x08)
	struct FDateTime EndTime; // 0x08(0x08)
};

// ScriptStruct ShooterGame.PremierEvent
// Size: 0xe8 (Inherited: 0x08)
struct FPremierEvent : FTableRowBase {
	struct FGuid UUID; // 0x08(0x10)
	enum class EPremierEventType Type; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FText Name; // 0x20(0x18)
	struct FText Description; // 0x38(0x18)
	struct TSoftClassPtr<UObject> Icon; // 0x50(0x30)
	struct TSoftClassPtr<UObject> Schedule; // 0x80(0x30)
	enum class EPremierEventMapSelectionStrategy MapSelectionStrategy; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct TSoftClassPtr<UObject> MapPool; // 0xb8(0x30)
};

// ScriptStruct ShooterGame.PremierEventDisplay
// Size: 0x98 (Inherited: 0x00)
struct FPremierEventDisplay {
	struct FGuid UUID; // 0x00(0x10)
	enum class EPremierEventType Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FText Name; // 0x18(0x18)
	struct FText Description; // 0x30(0x18)
	struct TSoftClassPtr<UObject> Icon; // 0x48(0x30)
	struct TArray<struct TSoftClassPtr<UObject>> MapAssets; // 0x78(0x10)
	struct TArray<struct FPremierEventScheduleDateTimes> ScheduleDateTimes; // 0x88(0x10)
};

// ScriptStruct ShooterGame.DivisionWinnerReward
// Size: 0x18 (Inherited: 0x00)
struct FDivisionWinnerReward {
	enum class EPremierDivisionGroup DivisionGroup; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct UEditableReward*> Rewards; // 0x08(0x10)
};

// ScriptStruct ShooterGame.PremierMatchupGamePlacementPair
// Size: 0x08 (Inherited: 0x00)
struct FPremierMatchupGamePlacementPair {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ShooterGame.PremierMatchupGameScorePair
// Size: 0x08 (Inherited: 0x00)
struct FPremierMatchupGameScorePair {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ShooterGame.PresenceProductMap
// Size: 0x50 (Inherited: 0x00)
struct FPresenceProductMap {
	struct TMap<struct FString, struct FAresPresenceInfo> Map; // 0x00(0x50)
};

// ScriptStruct ShooterGame.AresPresenceInfo
// Size: 0x2d8 (Inherited: 0x00)
struct FAresPresenceInfo {
	struct FString Name; // 0x00(0x10)
	struct FString Pid; // 0x10(0x10)
	struct FString Resource; // 0x20(0x10)
	struct FString Subject; // 0x30(0x10)
	struct FString Product; // 0x40(0x10)
	enum class EChatPresenceProduct ProductEnum; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FString Patchline; // 0x58(0x10)
	struct FString Platform; // 0x68(0x10)
	struct FString State; // 0x78(0x10)
	enum class EChatPresenceState StateEnum; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	int64_t Time; // 0x90(0x08)
	struct FString Msg; // 0x98(0x10)
	struct FString Actor; // 0xa8(0x10)
	struct FString Details; // 0xb8(0x10)
	struct FString Location; // 0xc8(0x10)
	struct FString Private; // 0xd8(0x10)
	struct FAresPresenceData Data; // 0xe8(0x1f0)
};

// ScriptStruct ShooterGame.AresPresenceData
// Size: 0x1f0 (Inherited: 0x00)
struct FAresPresenceData {
	bool IsValid; // 0x00(0x01)
	bool IsIdle; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FString QueueID; // 0x08(0x10)
	enum class EProvisioningFlowID ProvisioningFlow; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString PartyId; // 0x20(0x10)
	int32_t PartySize; // 0x30(0x04)
	int32_t MaxPartySize; // 0x34(0x04)
	int32_t PartyOwnerMatchScoreAllyTeam; // 0x38(0x04)
	int32_t PartyOwnerMatchScoreEnemyTeam; // 0x3c(0x04)
	struct FAresPremierPresenceData PremierPresenceData; // 0x40(0x58)
	struct FAresMatchPresenceData MatchPresenceData; // 0x98(0x38)
	struct FAresPartyPresenceData PartyPresenceData; // 0xd0(0xf0)
	struct FAresPlayerPresenceData PlayerPresenceData; // 0x1c0(0x30)
};

// ScriptStruct ShooterGame.AresPlayerPresenceData
// Size: 0x30 (Inherited: 0x00)
struct FAresPlayerPresenceData {
	struct FString PlayerCardId; // 0x00(0x10)
	struct FString PlayerTitleId; // 0x10(0x10)
	int32_t AccountLevel; // 0x20(0x04)
	int32_t CompetitiveTier; // 0x24(0x04)
	int32_t LeaderboardPosition; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ShooterGame.AresPartyPresenceData
// Size: 0xf0 (Inherited: 0x00)
struct FAresPartyPresenceData {
	struct FString PartyId; // 0x00(0x10)
	bool IsPartyOwner; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString PartyState; // 0x18(0x10)
	struct FString PartyAccessibility; // 0x28(0x10)
	bool PartyLFM; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FString PartyClientVersion; // 0x40(0x10)
	int64_t PartyVersion; // 0x50(0x08)
	int32_t PartySize; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FDateTime QueueEntryTime; // 0x60(0x08)
	bool IsPartyCrossPlayEnabled; // 0x68(0x01)
	bool IsPlayerCrossPlayEnabled; // 0x69(0x01)
	char PartyPrecisePlatformTypes; // 0x6a(0x01)
	char pad_6B[0x5]; // 0x6b(0x05)
	struct FText CustomGameName; // 0x70(0x18)
	struct FString CustomGameTeam; // 0x88(0x10)
	int32_t MaxPartySize; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FString tournamentid; // 0xa0(0x10)
	struct FString RosterID; // 0xb0(0x10)
	struct FString PartyOwnerSessionLoopState; // 0xc0(0x10)
	struct FString PartyOwnerMatchMap; // 0xd0(0x10)
	enum class EProvisioningFlowID PartyOwnerProvisioningFlow; // 0xe0(0x01)
	char pad_E1[0x3]; // 0xe1(0x03)
	int32_t PartyOwnerMatchScoreAllyTeam; // 0xe4(0x04)
	int32_t PartyOwnerMatchScoreEnemyTeam; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct ShooterGame.AresMatchPresenceData
// Size: 0x38 (Inherited: 0x00)
struct FAresMatchPresenceData {
	struct FString SessionLoopState; // 0x00(0x10)
	enum class EProvisioningFlowID ProvisioningFlow; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString MatchMap; // 0x18(0x10)
	struct FString QueueID; // 0x28(0x10)
};

// ScriptStruct ShooterGame.AresPremierPresenceData
// Size: 0x58 (Inherited: 0x00)
struct FAresPremierPresenceData {
	struct FString RosterID; // 0x00(0x10)
	struct FString RosterName; // 0x10(0x10)
	struct FString RosterTag; // 0x20(0x10)
	struct FString RosterType; // 0x30(0x10)
	int32_t Division; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	int64_t Score; // 0x48(0x08)
	char Plating; // 0x50(0x01)
	bool ShowAura; // 0x51(0x01)
	bool ShowTag; // 0x52(0x01)
	bool ShowPlating; // 0x53(0x01)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct ShooterGame.PresenceResourceMap
// Size: 0x50 (Inherited: 0x00)
struct FPresenceResourceMap {
	struct TMap<struct FString, struct FPresenceProductMap> Map; // 0x00(0x50)
};

// ScriptStruct ShooterGame.AresPresenceDifferences
// Size: 0x10 (Inherited: 0x00)
struct FAresPresenceDifferences {
	struct TArray<struct FString> Properties; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AresPresenceDataWrapper
// Size: 0x1f0 (Inherited: 0x00)
struct FAresPresenceDataWrapper {
	struct FAresPresenceData AresData; // 0x00(0x1f0)
};

// ScriptStruct ShooterGame.PresenceData
// Size: 0x1f8 (Inherited: 0x00)
struct FPresenceData {
	int32_t PresenceCounter; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FAresPresenceDataWrapper AresDataWrapper; // 0x08(0x1f0)
};

// ScriptStruct ShooterGame.ChatPresenceSharedData
// Size: 0x48 (Inherited: 0x00)
struct FChatPresenceSharedData {
	struct FString Actor; // 0x00(0x10)
	struct FString Details; // 0x10(0x10)
	struct FString Location; // 0x20(0x10)
	struct FString Product; // 0x30(0x10)
	int64_t Time; // 0x40(0x08)
};

// ScriptStruct ShooterGame.ChatPresenceUpdateRequest
// Size: 0x258 (Inherited: 0x00)
struct FChatPresenceUpdateRequest {
	struct FString State; // 0x00(0x10)
	struct FString Msg; // 0x10(0x10)
	struct FAresPresenceDataWrapper Private; // 0x20(0x1f0)
	struct FChatPresenceSharedData Shared; // 0x210(0x48)
};

// ScriptStruct ShooterGame.ChatPresenceDeleteRequest
// Size: 0x10 (Inherited: 0x00)
struct FChatPresenceDeleteRequest {
	struct FString Product; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PresenceUpdateEvent
// Size: 0x28 (Inherited: 0x00)
struct FPresenceUpdateEvent {
	struct FString BuildVersion; // 0x00(0x10)
	enum class EAresPlatformType PlatformType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString PresenceDeltas; // 0x18(0x10)
};

// ScriptStruct ShooterGame.ProgressModelSet_ChildData
// Size: 0x30 (Inherited: 0x00)
struct FProgressModelSet_ChildData {
	struct TScriptInterface<IProgressModel> ProgressModel; // 0x00(0x10)
	char pad_10[0x20]; // 0x10(0x20)
};

// ScriptStruct ShooterGame.ProjectileThrowTuning
// Size: 0x50 (Inherited: 0x00)
struct FProjectileThrowTuning {
	struct FGameFeatureSubclass ProjectileClass; // 0x00(0x18)
	struct AProjectile* ProjectileType; // 0x18(0x08)
	float SpeedScale; // 0x20(0x04)
	float UpwardArc; // 0x24(0x04)
	float UpwardShift; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FVector ThrowOffset; // 0x30(0x18)
	float ThrowDelay; // 0x48(0x04)
	bool bJumpThrowNormalization_LaunchPoint; // 0x4c(0x01)
	bool bJumpThrowNormalization_ImpartedVelocity; // 0x4d(0x01)
	char pad_4E[0x2]; // 0x4e(0x02)
};

// ScriptStruct ShooterGame.ProjectileCollisionResponse
// Size: 0x20 (Inherited: 0x00)
struct FProjectileCollisionResponse {
	enum class EProjectileCollisionProcessInstruction ProcessInstruction; // 0x00(0x01)
	bool bVelocitySet; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct FVector Velocity; // 0x08(0x18)
};

// ScriptStruct ShooterGame.ProjectileEstimationInfo
// Size: 0x40 (Inherited: 0x00)
struct FProjectileEstimationInfo {
	float ProjectileSpeed; // 0x00(0x04)
	float ProjectileGravityScale; // 0x04(0x04)
	struct FVector ImpartActorVelocityPercentVector; // 0x08(0x18)
	float ImpartVelocityMatchingDirectionFraction; // 0x20(0x04)
	bool bUseTrueVerticalVelocity; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float DownwardVelocityScale; // 0x28(0x04)
	char bBounceAngleAffectsFriction : 1; // 0x2c(0x01)
	char pad_2C_1 : 7; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float Bounciness; // 0x30(0x04)
	float Friction; // 0x34(0x04)
	float BounceVelocityProjectileStopThreshold; // 0x38(0x04)
	float BounceStopSurfaceAngle; // 0x3c(0x04)
};

// ScriptStruct ShooterGame.PureEffectInstancePool
// Size: 0x20 (Inherited: 0x00)
struct FPureEffectInstancePool {
	struct TArray<struct UPureEffectInstance*> Pooled; // 0x00(0x10)
	struct TArray<struct UPureEffectInstance*> Active; // 0x10(0x10)
};

// ScriptStruct ShooterGame.RegisterDeviceRequest
// Size: 0x30 (Inherited: 0x00)
struct FRegisterDeviceRequest {
	struct FString device_token; // 0x00(0x10)
	struct FString Platform; // 0x10(0x10)
	struct FString Locale; // 0x20(0x10)
};

// ScriptStruct ShooterGame.RankChargeInfo
// Size: 0x08 (Inherited: 0x00)
struct FRankChargeInfo {
	float CostToBuyRank; // 0x00(0x04)
	int32_t NumCharges; // 0x04(0x04)
};

// ScriptStruct ShooterGame.RateLimiter
// Size: 0x30 (Inherited: 0x00)
struct FRateLimiter {
	char pad_0[0x18]; // 0x00(0x18)
	enum class ERateLimiterMethod RateLimiterMethod; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
	float CooldownSeconds; // 0x1c(0x04)
	uint32_t MaxActionInTimeWindow; // 0x20(0x04)
	float RollingTimeWindowDurationSeconds; // 0x24(0x04)
	float ExtendedCooldownSeconds; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ShooterGame.ReflectedPlayerSettings
// Size: 0x1e0 (Inherited: 0x00)
struct FReflectedPlayerSettings {
	char pad_0[0xf0]; // 0x00(0xf0)
	struct TMap<struct FName, struct FFloatSettingChangedDelegateList> FloatSettingChangedEvents; // 0xf0(0x50)
	struct TMap<struct FName, struct FIntSettingChangedDelegateList> IntSettingChangedEvents; // 0x140(0x50)
	struct TMap<struct FName, struct FBoolSettingChangedDelegateList> BoolSettingChangedEvents; // 0x190(0x50)
};

// ScriptStruct ShooterGame.ReloadStateVariables
// Size: 0x20 (Inherited: 0x00)
struct FReloadStateVariables {
	struct UStateComponent* ScriptInterruptState; // 0x00(0x08)
	struct UStateTransitionContext* ScriptInterruptContext; // 0x08(0x08)
	int32_t NumReloadsDone; // 0x10(0x04)
	int32_t NumCyclesCompleted; // 0x14(0x04)
	bool bZoomInputTriggeredDuringReload; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ShooterGame.RemainingBalanceInfo
// Size: 0x40 (Inherited: 0x00)
struct FRemainingBalanceInfo {
	bool HasSufficientFunds; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t RemainingFunds; // 0x04(0x04)
	int32_t BalanceBeforePurchase; // 0x08(0x04)
	struct FGuid CurrencyID; // 0x0c(0x10)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct FText RemainingFundsMessage; // 0x20(0x18)
	bool RemainingFundsApplicable; // 0x38(0x01)
	bool IsNegativeDelta; // 0x39(0x01)
	char pad_3A[0x6]; // 0x3a(0x06)
};

// ScriptStruct ShooterGame.RemoteCharacterUpdate
// Size: 0x20 (Inherited: 0x00)
struct FRemoteCharacterUpdate {
	uint32_t ShooterCharacterNetGuidValue; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FComponentDataStream ComponentDataStream; // 0x08(0x18)
};

// ScriptStruct ShooterGame.RemoteClientMovementSnapShot
// Size: 0x48 (Inherited: 0x00)
struct FRemoteClientMovementSnapShot {
	struct FVector Location; // 0x00(0x18)
	struct FVector Velocity; // 0x18(0x18)
	struct FVector Acceleration; // 0x30(0x18)
};

// ScriptStruct ShooterGame.AresTeamListEntry
// Size: 0x08 (Inherited: 0x00)
struct FAresTeamListEntry {
	struct UBaseTeamComponent* Team; // 0x00(0x08)
};

// ScriptStruct ShooterGame.RemoteNetworkedInfo
// Size: 0x28 (Inherited: 0x08)
struct FRemoteNetworkedInfo : FAresTeamListEntry {
	char pad_8[0x20]; // 0x08(0x20)
};

// ScriptStruct ShooterGame.ReplayCatalogResult
// Size: 0x18 (Inherited: 0x00)
struct FReplayCatalogResult {
	struct FString URL; // 0x00(0x10)
	int64_t ExpirationSecSinceEpoch; // 0x10(0x08)
};

// ScriptStruct ShooterGame.ReplayEvent
// Size: 0x38 (Inherited: 0x00)
struct FReplayEvent {
	struct FString ID; // 0x00(0x10)
	struct FString Group; // 0x10(0x10)
	struct FString meta; // 0x20(0x10)
	uint32_t Time1; // 0x30(0x04)
	uint32_t Time2; // 0x34(0x04)
};

// ScriptStruct ShooterGame.ReplayEventListResult
// Size: 0x10 (Inherited: 0x00)
struct FReplayEventListResult {
	struct TArray<struct FReplayEvent> Events; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ReplayPlayerData
// Size: 0x10 (Inherited: 0x00)
struct FReplayPlayerData {
	struct FString Identifier; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ReplayMetadata
// Size: 0x60 (Inherited: 0x00)
struct FReplayMetadata {
	struct TArray<struct FReplayPlayerData> PlayersData; // 0x00(0x10)
	uint32_t NetworkVersion; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ReplayVersion; // 0x18(0x10)
	uint32_t ReplayCL; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString PlatformName; // 0x30(0x10)
	bool LiveStream; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	uint32_t NumChunks; // 0x44(0x04)
	uint32_t TotalTime; // 0x48(0x04)
	bool Compressed; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	uint32_t CompressionType; // 0x50(0x04)
	uint32_t CompressionLevel; // 0x54(0x04)
	uint32_t AbsSize; // 0x58(0x04)
	bool SaveEventMetaToDB; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
};

// ScriptStruct ShooterGame.ReplayCharacterUpdate
// Size: 0x18 (Inherited: 0x00)
struct FReplayCharacterUpdate {
	char Stamp; // 0x00(0x01)
	char pad_1[0x17]; // 0x01(0x17)
};

// ScriptStruct ShooterGame.ReplayMatchEntry
// Size: 0x28 (Inherited: 0x00)
struct FReplayMatchEntry {
	struct FString MatchID; // 0x00(0x10)
	char pad_10[0x18]; // 0x10(0x18)
};

// ScriptStruct ShooterGame.ReplayFileOperationResult
// Size: 0x02 (Inherited: 0x00)
struct FReplayFileOperationResult {
	char pad_0[0x2]; // 0x00(0x02)
};

// ScriptStruct ShooterGame.ReplayLocalFileMatchEntry
// Size: 0xb8 (Inherited: 0x28)
struct FReplayLocalFileMatchEntry : FReplayMatchEntry {
	char pad_28[0x90]; // 0x28(0x90)
};

// ScriptStruct ShooterGame.ReplayLocalFileDownloadResult
// Size: 0x18 (Inherited: 0x00)
struct FReplayLocalFileDownloadResult {
	struct FString MatchID; // 0x00(0x10)
	enum class EReplayDownloadResultCode Status; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float DownloadDuration; // 0x14(0x04)
};

// ScriptStruct ShooterGame.ReplayLocalFileDeletionResult
// Size: 0x18 (Inherited: 0x00)
struct FReplayLocalFileDeletionResult {
	struct FString MatchID; // 0x00(0x10)
	bool bSucceeded; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.ReplayPlatformQueryRetrySettings
// Size: 0x50 (Inherited: 0x00)
struct FReplayPlatformQueryRetrySettings {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct ShooterGame.ReplayMatchSummaryDTO
// Size: 0x20 (Inherited: 0x00)
struct FReplayMatchSummaryDTO {
	struct FString GameVersion; // 0x00(0x10)
	struct FString Checksum; // 0x10(0x10)
};

// ScriptStruct ShooterGame.ReplayFileAvailabilityDTO
// Size: 0x18 (Inherited: 0x00)
struct FReplayFileAvailabilityDTO {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ShooterGame.ReplayFileDownloadDTO
// Size: 0x10 (Inherited: 0x00)
struct FReplayFileDownloadDTO {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ShooterGame.GamhsBulkUrlMap
// Size: 0x50 (Inherited: 0x00)
struct FGamhsBulkUrlMap {
	struct TMap<struct FString, struct FString> matchFileUrlsMap; // 0x00(0x50)
};

// ScriptStruct ShooterGame.ReplayDownloadFileRequestRecord
// Size: 0x18 (Inherited: 0x00)
struct FReplayDownloadFileRequestRecord {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct ShooterGame.ShooterReplayHeaderVersion
// Size: 0x04 (Inherited: 0x00)
struct FShooterReplayHeaderVersion {
	uint32_t SerializedVersion; // 0x00(0x04)
};

// ScriptStruct ShooterGame.ShooterReplayMatchInfo
// Size: 0x58 (Inherited: 0x00)
struct FShooterReplayMatchInfo {
	struct FString GameMode; // 0x00(0x10)
	struct FString MatchID; // 0x10(0x10)
	struct FString MapName; // 0x20(0x10)
	struct FString GamePodID; // 0x30(0x10)
	struct FString QueueID; // 0x40(0x10)
	struct FDateTime MatchDateTime; // 0x50(0x08)
};

// ScriptStruct ShooterGame.ReplayMegapacketPlayerLoadout
// Size: 0xe0 (Inherited: 0x00)
struct FReplayMegapacketPlayerLoadout {
	struct FString Subject; // 0x00(0x10)
	struct FString CharacterID; // 0x10(0x10)
	struct FMegapacketLoadout Loadout; // 0x20(0xc0)
};

// ScriptStruct ShooterGame.ReplayMegapacket
// Size: 0x10 (Inherited: 0x00)
struct FReplayMegapacket {
	struct TArray<struct FReplayMegapacketPlayerLoadout> PlayerLoadouts; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ShooterReplayHeaderData
// Size: 0x18 (Inherited: 0x00)
struct FShooterReplayHeaderData {
	uint32_t PlaybackCL; // 0x00(0x04)
	enum class EReplayGameSpecificHeaderVersion GameSpecificHeaderVersion; // 0x04(0x04)
	struct FReplayMegapacket ReplayMegapacket; // 0x08(0x10)
};

// ScriptStruct ShooterGame.ReplayPlaybackInfo
// Size: 0x70 (Inherited: 0x00)
struct FReplayPlaybackInfo {
	uint32_t PlaybackCL; // 0x00(0x04)
	enum class EReplayGameSpecificHeaderVersion GameSpecificHeaderVersion; // 0x04(0x04)
	struct FShooterReplayMatchInfo MatchInfo; // 0x08(0x58)
	struct TArray<struct FReplayMegapacketPlayerLoadout> ReplayMegapacketPlayerLoadouts; // 0x60(0x10)
};

// ScriptStruct ShooterGame.ReplayInteractionContext
// Size: 0x08 (Inherited: 0x00)
struct FReplayInteractionContext {
	enum class EMatchHistoryContext MatchHistoryContext; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t MatchHistoryListPosition; // 0x04(0x04)
};

// ScriptStruct ShooterGame.BaseReplayEventDTO
// Size: 0x10 (Inherited: 0x00)
struct FBaseReplayEventDTO {
	char pad_0[0x8]; // 0x00(0x08)
	enum class EReplayEventGroup EventGroup; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float Time; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.RoundStartEventDTO
// Size: 0x18 (Inherited: 0x10)
struct FRoundStartEventDTO : FBaseReplayEventDTO {
	int32_t RoundNumber; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.SwitchTeamsEventDTO
// Size: 0x18 (Inherited: 0x10)
struct FSwitchTeamsEventDTO : FBaseReplayEventDTO {
	int32_t RoundNumber; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.SpikePlantedEventDTO
// Size: 0x10 (Inherited: 0x10)
struct FSpikePlantedEventDTO : FBaseReplayEventDTO {
};

// ScriptStruct ShooterGame.SpikeDefusedEventDTO
// Size: 0x10 (Inherited: 0x10)
struct FSpikeDefusedEventDTO : FBaseReplayEventDTO {
};

// ScriptStruct ShooterGame.SpikeExplodedEventDTO
// Size: 0x10 (Inherited: 0x10)
struct FSpikeExplodedEventDTO : FBaseReplayEventDTO {
};

// ScriptStruct ShooterGame.CharacterBaseEventDTO
// Size: 0x18 (Inherited: 0x10)
struct FCharacterBaseEventDTO : FBaseReplayEventDTO {
	int32_t CharacterGuid; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.CharacterTookDamageEventDTO
// Size: 0x20 (Inherited: 0x18)
struct FCharacterTookDamageEventDTO : FCharacterBaseEventDTO {
	int32_t DamageCauserGuid; // 0x18(0x04)
	float Damage; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.CharacterDeathEventDTO
// Size: 0x20 (Inherited: 0x18)
struct FCharacterDeathEventDTO : FCharacterBaseEventDTO {
	int32_t InstigatorCharacterGuid; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.CharacterEquippableBaseEventDTO
// Size: 0x20 (Inherited: 0x18)
struct FCharacterEquippableBaseEventDTO : FCharacterBaseEventDTO {
	int32_t EquippableGuid; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.CharacterEquippableUsedEventDTO
// Size: 0x20 (Inherited: 0x20)
struct FCharacterEquippableUsedEventDTO : FCharacterEquippableBaseEventDTO {
};

// ScriptStruct ShooterGame.CharacterEquippableChangedEventDTO
// Size: 0x20 (Inherited: 0x20)
struct FCharacterEquippableChangedEventDTO : FCharacterEquippableBaseEventDTO {
};

// ScriptStruct ShooterGame.CharacterUltimateUsedEventDTO
// Size: 0x18 (Inherited: 0x18)
struct FCharacterUltimateUsedEventDTO : FCharacterBaseEventDTO {
};

// ScriptStruct ShooterGame.ReplayTestingBloat
// Size: 0x20 (Inherited: 0x10)
struct FReplayTestingBloat : FBaseReplayEventDTO {
	struct TArray<char> Data; // 0x10(0x10)
};

// ScriptStruct ShooterGame.ReplayTimeJumpParams
// Size: 0x10 (Inherited: 0x00)
struct FReplayTimeJumpParams {
	char pad_0[0x10]; // 0x00(0x10)
};

// ScriptStruct ShooterGame.APSchemaReplayRoundTimeTrackingInfoEntity
// Size: 0x08 (Inherited: 0x00)
struct FAPSchemaReplayRoundTimeTrackingInfoEntity {
	int32_t RoundNumber; // 0x00(0x04)
	float TimeInRound; // 0x04(0x04)
};

// ScriptStruct ShooterGame.APSchemaReplayTimelineInteractionDetailsEntity
// Size: 0x18 (Inherited: 0x00)
struct FAPSchemaReplayTimelineInteractionDetailsEntity {
	struct FString InteractionTime; // 0x00(0x10)
	int32_t InteractionTarget; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.APSchemaReplayTimelineInteractionInfoEntity
// Size: 0x28 (Inherited: 0x00)
struct FAPSchemaReplayTimelineInteractionInfoEntity {
	struct FString InteractionType; // 0x00(0x10)
	int32_t InteractionCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FAPSchemaReplayTimelineInteractionDetailsEntity> InteractionsDetails; // 0x18(0x10)
};

// ScriptStruct ShooterGame.APSchemaTimeInRoundInfoEntity
// Size: 0x0c (Inherited: 0x00)
struct FAPSchemaTimeInRoundInfoEntity {
	float ReplayTime; // 0x00(0x04)
	int32_t RoundNumber; // 0x04(0x04)
	float TimeInRound; // 0x08(0x04)
};

// ScriptStruct ShooterGame.APSchemaReplayComboFFPhaseDetailsEntity
// Size: 0x48 (Inherited: 0x00)
struct FAPSchemaReplayComboFFPhaseDetailsEntity {
	struct FString ComboFFPhaseType; // 0x00(0x10)
	struct FAPSchemaTimeInRoundInfoEntity StartTimeInRoundInfo; // 0x10(0x0c)
	struct FAPSchemaTimeInRoundInfoEntity DestTimeInRoundInfo; // 0x1c(0x0c)
	struct FString StartTimeStamp; // 0x28(0x10)
	struct FString EndTimeStamp; // 0x38(0x10)
};

// ScriptStruct ShooterGame.APSchemaReplayComboFFInteractionDetailsEntity
// Size: 0x10 (Inherited: 0x00)
struct FAPSchemaReplayComboFFInteractionDetailsEntity {
	struct TArray<struct FAPSchemaReplayComboFFPhaseDetailsEntity> PhaseDetails; // 0x00(0x10)
};

// ScriptStruct ShooterGame.APSchemaReplaySessionDetailsEvent
// Size: 0x168 (Inherited: 0x00)
struct FAPSchemaReplaySessionDetailsEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FClientHardwareInfo HardwareInfo; // 0x68(0xa0)
	struct FString SessionStartTimestamp; // 0x108(0x10)
	struct FString SessionEndTimestamp; // 0x118(0x10)
	struct FString Subject; // 0x128(0x10)
	struct TArray<struct FAPSchemaReplayRoundTimeTrackingInfoEntity> RoundTimeTrackingInfo; // 0x138(0x10)
	struct TArray<struct FAPSchemaReplayTimelineInteractionInfoEntity> InteractionsInfo; // 0x148(0x10)
	struct TArray<struct FAPSchemaReplayComboFFInteractionDetailsEntity> ComboFastForwardInteractionsInfo; // 0x158(0x10)
};

// ScriptStruct ShooterGame.APSchemaPlayReplayClickedEvent
// Size: 0x38 (Inherited: 0x00)
struct FAPSchemaPlayReplayClickedEvent {
	struct FString MatchID; // 0x00(0x10)
	struct FString Subject; // 0x10(0x10)
	int32_t ListPosition; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString EventContext; // 0x28(0x10)
};

// ScriptStruct ShooterGame.APSchemaReplayDownloadCompleteEvent
// Size: 0x38 (Inherited: 0x00)
struct FAPSchemaReplayDownloadCompleteEvent {
	struct FString MatchID; // 0x00(0x10)
	struct FString Subject; // 0x10(0x10)
	float DownloadDuration; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString DownloadStatus; // 0x28(0x10)
};

// ScriptStruct ShooterGame.APSchemaReplayDeletedEvent
// Size: 0x28 (Inherited: 0x00)
struct FAPSchemaReplayDeletedEvent {
	struct FString MatchID; // 0x00(0x10)
	struct FString Subject; // 0x10(0x10)
	bool DidSucceed; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct ShooterGame.APSchemaPlayReplayFailedEvent
// Size: 0x30 (Inherited: 0x00)
struct FAPSchemaPlayReplayFailedEvent {
	struct FString MatchID; // 0x00(0x10)
	struct FString Subject; // 0x10(0x10)
	struct FString FailureType; // 0x20(0x10)
};

// ScriptStruct ShooterGame.APSchemaReplayNewMatchPollingResultEvent
// Size: 0x28 (Inherited: 0x00)
struct FAPSchemaReplayNewMatchPollingResultEvent {
	struct FString MatchID; // 0x00(0x10)
	struct FString Subject; // 0x10(0x10)
	bool IsSuccess; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float PollingTimeMS; // 0x24(0x04)
};

// ScriptStruct ShooterGame.ReplayComboFFPhaseDetails
// Size: 0x20 (Inherited: 0x00)
struct FReplayComboFFPhaseDetails {
	enum class EComboFFPhaseType ComboFFPhaseType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float ReplayTimeSeconds; // 0x04(0x04)
	float TargetReplayTimeSeconds; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FDateTime StartTime; // 0x10(0x08)
	struct FDateTime EndTime; // 0x18(0x08)
};

// ScriptStruct ShooterGame.ReplayTimeJumpTimeTrackerResult
// Size: 0x38 (Inherited: 0x00)
struct FReplayTimeJumpTimeTrackerResult {
	char pad_0[0x28]; // 0x00(0x28)
	struct TArray<struct FReplayComboFFPhaseDetails> AllPhaseDetails; // 0x28(0x10)
};

// ScriptStruct ShooterGame.ReplicatedActorStruct
// Size: 0x08 (Inherited: 0x00)
struct FReplicatedActorStruct {
	int32_t ReplicatedActorStruct_ReplicatedInt32; // 0x00(0x04)
	float ReplicatedActorStruct_ReplicatedFloat; // 0x04(0x04)
};

// ScriptStruct ShooterGame.ReplicatedComponentStruct
// Size: 0x08 (Inherited: 0x00)
struct FReplicatedComponentStruct {
	int32_t ReplicatedComponentStruct_ReplicatedInt32; // 0x00(0x04)
	float ReplicatedComponentStruct_ReplicatedFloat; // 0x04(0x04)
};

// ScriptStruct ShooterGame.StateChangeInputResponse
// Size: 0x60 (Inherited: 0x00)
struct FStateChangeInputResponse {
	struct FTriggerInput Input; // 0x00(0x02)
	enum class EAresActivationInputType ActivationType; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	struct FName StateName; // 0x04(0x0c)
	float Delay; // 0x10(0x04)
	bool bCanRespondOutOfGameplay; // 0x14(0x01)
	bool bCanRespondWhileSuppressed; // 0x15(0x01)
	bool bCanRespondInSpawnZone; // 0x16(0x01)
	char pad_17[0x1]; // 0x17(0x01)
	struct FGameplayTagContainer RequiredTags; // 0x18(0x20)
	struct FGameplayTagContainer IgnoreTags; // 0x38(0x20)
	struct UStateComponent* State; // 0x58(0x08)
};

// ScriptStruct ShooterGame.TriggerEventInputResponse
// Size: 0x20 (Inherited: 0x00)
struct FTriggerEventInputResponse {
	struct FTriggerInput Input; // 0x00(0x02)
	char pad_2[0x2]; // 0x02(0x02)
	float Delay; // 0x04(0x04)
	bool bCanRespondOutOfGameplay; // 0x08(0x01)
	bool bCanRespondInSpawnZone; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FDelegate Delegate; // 0x0c(0x14)
};

// ScriptStruct ShooterGame.ActorContextResponse
// Size: 0x30 (Inherited: 0x00)
struct FActorContextResponse {
	enum class EActorEvent event; // 0x00(0x01)
	enum class EActorCombination Combination; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct AActor*> ActorsToRespond; // 0x08(0x10)
	struct FName StateName; // 0x18(0x0c)
	char pad_24[0x4]; // 0x24(0x04)
	struct UStateComponent* State; // 0x28(0x08)
};

// ScriptStruct ShooterGame.EquippableInventoryEventResponse
// Size: 0x60 (Inherited: 0x00)
struct FEquippableInventoryEventResponse {
	enum class EEquipType EquipType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TSet<struct AAresEquippable*> Equippables; // 0x08(0x50)
	struct UStateComponent* ToState; // 0x58(0x08)
};

// ScriptStruct ShooterGame.EquippableResourceResponse
// Size: 0x10 (Inherited: 0x00)
struct FEquippableResourceResponse {
	struct UResourceComponent* ResourceComponent; // 0x00(0x08)
	struct UStateComponent* State; // 0x08(0x08)
};

// ScriptStruct ShooterGame.CustomWidgetClassInfo
// Size: 0x30 (Inherited: 0x00)
struct FCustomWidgetClassInfo {
	struct TSoftClassPtr<UObject> ContentWidgetClass; // 0x00(0x30)
};

// ScriptStruct ShooterGame.RestrictionsManagerState
// Size: 0x238 (Inherited: 0x00)
struct FRestrictionsManagerState {
	struct FPlayerRestrictionV2 CurrentPlayerRestrictionV2; // 0x00(0x28)
	struct TMap<struct FString, struct FWarningEffect> CurrentWarnings; // 0x28(0x50)
	struct TMap<struct FString, struct UQueuedNotification*> CurrentWarningNotifications; // 0x78(0x50)
	struct TMap<struct FString, struct FDateTime> CurrentQueueRestrictionExpiries; // 0xc8(0x50)
	struct TSet<struct FString> SeenPenalties; // 0x118(0x50)
	struct FPlayerAvoidList CachedPlayerAvoidList; // 0x168(0x20)
	struct FString PenalizedMatchID; // 0x188(0x10)
	struct TMap<struct FString, struct FString> PenalizedPlayers; // 0x198(0x50)
	struct TMap<struct FString, struct FBehaviorInterventions> CurrentPlayerInterventions; // 0x1e8(0x50)
};

// ScriptStruct ShooterGame.PlayerAvoidList
// Size: 0x20 (Inherited: 0x00)
struct FPlayerAvoidList {
	struct FString Subject; // 0x00(0x10)
	struct TArray<struct FAvoidListEntry> AvoidList; // 0x10(0x10)
};

// ScriptStruct ShooterGame.AvoidListEntry
// Size: 0x10 (Inherited: 0x00)
struct FAvoidListEntry {
	struct FString Subject; // 0x00(0x10)
};

// ScriptStruct ShooterGame.WarningEffect
// Size: 0x18 (Inherited: 0x00)
struct FWarningEffect {
	struct FString WarningType; // 0x00(0x10)
	int64_t WarningTier; // 0x10(0x08)
};

// ScriptStruct ShooterGame.PlayerRestrictionV2
// Size: 0x28 (Inherited: 0x00)
struct FPlayerRestrictionV2 {
	struct FString Subject; // 0x00(0x10)
	struct TArray<struct FPlayerPenaltyV2> Penalties; // 0x10(0x10)
	int64_t Version; // 0x20(0x08)
};

// ScriptStruct ShooterGame.PlayerPenaltyV2
// Size: 0x88 (Inherited: 0x00)
struct FPlayerPenaltyV2 {
	struct FString ID; // 0x00(0x10)
	int64_t IssuingGameStartUnixMillis; // 0x10(0x08)
	struct FDateTime Expiry; // 0x18(0x08)
	int64_t GamesRemaining; // 0x20(0x08)
	struct FWarningEffect WarningEffect; // 0x28(0x18)
	struct FQueueRestrictionEffect QueueRestrictionEffect; // 0x40(0x10)
	struct FPremierRestrictionEffect PremierRestrictionEffect; // 0x50(0x30)
	bool IsAutomatedDetection; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
};

// ScriptStruct ShooterGame.PremierRestrictionEffect
// Size: 0x30 (Inherited: 0x00)
struct FPremierRestrictionEffect {
	struct FString RestrictionType; // 0x00(0x10)
	char pad_10[0x20]; // 0x10(0x20)
};

// ScriptStruct ShooterGame.QueueRestrictionEffect
// Size: 0x10 (Inherited: 0x00)
struct FQueueRestrictionEffect {
	struct TArray<struct FString> QueueIDs; // 0x00(0x10)
};

// ScriptStruct ShooterGame.EDisplayMessage
// Size: 0x20 (Inherited: 0x00)
struct FEDisplayMessage {
	struct FString Title; // 0x00(0x10)
	struct FString Message; // 0x10(0x10)
};

// ScriptStruct ShooterGame.RestrictionsSubjectInfractions
// Size: 0x20 (Inherited: 0x00)
struct FRestrictionsSubjectInfractions {
	struct FString Subject; // 0x00(0x10)
	struct TArray<enum class EInfractionType> Infractions; // 0x10(0x10)
};

// ScriptStruct ShooterGame.InterventionFeedback
// Size: 0x38 (Inherited: 0x00)
struct FInterventionFeedback {
	struct FString MatchID; // 0x00(0x10)
	int64_t Version; // 0x10(0x08)
	struct TArray<struct FString> Participants; // 0x18(0x10)
	struct TArray<struct FRestrictionsSubjectInfractions> FlaggedSubjects; // 0x28(0x10)
};

// ScriptStruct ShooterGame.PlayerReportTokenResult
// Size: 0x10 (Inherited: 0x00)
struct FPlayerReportTokenResult {
	struct FString Token; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AddAvoidListEntryRequest
// Size: 0x38 (Inherited: 0x00)
struct FAddAvoidListEntryRequest {
	bool OverrideEntries; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString MatchID; // 0x08(0x10)
	struct FString QueueID; // 0x18(0x10)
	struct FString Affinity; // 0x28(0x10)
};

// ScriptStruct ShooterGame.PenaltyNotifyEffect
// Size: 0x18 (Inherited: 0x00)
struct FPenaltyNotifyEffect {
	struct FString Subject; // 0x00(0x10)
	enum class ERMSNotifyEffectPenaltyEffectState EffectState; // 0x10(0x01)
	enum class ERMSNotifyEffectBehavior Behavior; // 0x11(0x01)
	enum class ERMSNotifyEffectIntervention Intervention; // 0x12(0x01)
	enum class ERMSNotifyEffectRecipient Recipient; // 0x13(0x01)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.AddQueueRestrictionEffect
// Size: 0x18 (Inherited: 0x00)
struct FAddQueueRestrictionEffect {
	struct TArray<struct FString> QueueIDs; // 0x00(0x10)
	int64_t SecondsToExpiry; // 0x10(0x08)
};

// ScriptStruct ShooterGame.ChatFilteringMessage
// Size: 0x50 (Inherited: 0x00)
struct FChatFilteringMessage {
	struct FString Subject; // 0x00(0x10)
	struct FString EffectState; // 0x10(0x10)
	struct FString Behavior; // 0x20(0x10)
	struct FString Intervention; // 0x30(0x10)
	struct FString Recipient; // 0x40(0x10)
};

// ScriptStruct ShooterGame.PlayerInterventions
// Size: 0x20 (Inherited: 0x00)
struct FPlayerInterventions {
	struct FString Subject; // 0x00(0x10)
	struct TArray<struct FBehaviorInterventions> InterventionsByCategory; // 0x10(0x10)
};

// ScriptStruct ShooterGame.IdempotentRewindable
// Size: 0x10 (Inherited: 0x00)
struct FIdempotentRewindable {
	char pad_0[0x8]; // 0x00(0x08)
	enum class ERewindState RewindState; // 0x08(0x01)
	char pad_9[0x7]; // 0x09(0x07)
};

// ScriptStruct ShooterGame.RSOCredentials
// Size: 0x38 (Inherited: 0x00)
struct FRSOCredentials {
	char pad_0[0x38]; // 0x00(0x38)
};

// ScriptStruct ShooterGame.RiotClientPluginStatus
// Size: 0x10 (Inherited: 0x00)
struct FRiotClientPluginStatus {
	struct FString State; // 0x00(0x10)
};

// ScriptStruct ShooterGame.RiotClientRegionLocale
// Size: 0x40 (Inherited: 0x00)
struct FRiotClientRegionLocale {
	struct FString Locale; // 0x00(0x10)
	struct FString Region; // 0x10(0x10)
	struct FString WebLanguage; // 0x20(0x10)
	struct FString WebRegion; // 0x30(0x10)
};

// ScriptStruct ShooterGame.PatchlineMetadata
// Size: 0x60 (Inherited: 0x00)
struct FPatchlineMetadata {
	struct FString Product; // 0x00(0x10)
	struct FString Channel; // 0x10(0x10)
	struct FString ID; // 0x20(0x10)
	struct FString PublishedAt; // 0x30(0x10)
	struct FString ReleaseID; // 0x40(0x10)
	struct FString DeployedAt; // 0x50(0x10)
};

// ScriptStruct ShooterGame.RiotClientLaunchParams
// Size: 0x90 (Inherited: 0x00)
struct FRiotClientLaunchParams {
	bool bValid; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString InstallPath; // 0x08(0x10)
	struct FString CommandLineArgs; // 0x18(0x10)
	struct FString DesiredRegion; // 0x28(0x10)
	struct FRiotPlatformClientSettings ClientSettings; // 0x38(0x50)
	bool bHeadless; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
};

// ScriptStruct ShooterGame.RiotStatusTranslation
// Size: 0x20 (Inherited: 0x00)
struct FRiotStatusTranslation {
	struct FString Content; // 0x00(0x10)
	struct FString Locale; // 0x10(0x10)
};

// ScriptStruct ShooterGame.RiotStatusUpdate
// Size: 0x60 (Inherited: 0x00)
struct FRiotStatusUpdate {
	struct FString Updated_At; // 0x00(0x10)
	bool Publish; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString Author; // 0x18(0x10)
	struct FString Created_At; // 0x28(0x10)
	struct TArray<struct FRiotStatusTranslation> Translations; // 0x38(0x10)
	struct TArray<struct FString> PublishLocations; // 0x48(0x10)
	int32_t ID; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct ShooterGame.RiotStatusMaintenance
// Size: 0x78 (Inherited: 0x00)
struct FRiotStatusMaintenance {
	struct FString Archive_At; // 0x00(0x10)
	struct TArray<struct FRiotStatusUpdate> Updates; // 0x10(0x10)
	struct FString Created_At; // 0x20(0x10)
	struct TArray<struct FString> Platforms; // 0x30(0x10)
	struct FString Updated_At; // 0x40(0x10)
	int32_t ID; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct FString Maintenance_Status; // 0x58(0x10)
	struct TArray<struct FRiotStatusTranslation> Titles; // 0x68(0x10)
};

// ScriptStruct ShooterGame.RiotStatusIncident
// Size: 0x78 (Inherited: 0x00)
struct FRiotStatusIncident {
	struct FString Archive_At; // 0x00(0x10)
	struct FString Incident_Severity; // 0x10(0x10)
	struct TArray<struct FRiotStatusUpdate> Updates; // 0x20(0x10)
	struct FString Created_At; // 0x30(0x10)
	struct TArray<struct FString> Platforms; // 0x40(0x10)
	struct FString Updated_At; // 0x50(0x10)
	int32_t ID; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct TArray<struct FRiotStatusTranslation> Titles; // 0x68(0x10)
};

// ScriptStruct ShooterGame.RiotStatus
// Size: 0x50 (Inherited: 0x00)
struct FRiotStatus {
	struct FString ID; // 0x00(0x10)
	struct FString Name; // 0x10(0x10)
	struct TArray<struct FString> Locales; // 0x20(0x10)
	struct TArray<struct FRiotStatusMaintenance> Maintenances; // 0x30(0x10)
	struct TArray<struct FRiotStatusIncident> Incidents; // 0x40(0x10)
};

// ScriptStruct ShooterGame.RiotWarningMessage
// Size: 0x70 (Inherited: 0x00)
struct FRiotWarningMessage {
	struct FString AcknowledgeText; // 0x00(0x10)
	struct FString Category; // 0x10(0x10)
	struct FString Locale; // 0x20(0x10)
	struct FString Message; // 0x30(0x10)
	struct FString Title; // 0x40(0x10)
	struct FString SeeMoreURL; // 0x50(0x10)
	struct FString SeeMoreLabel; // 0x60(0x10)
};

// ScriptStruct ShooterGame.RiotWarning
// Size: 0x50 (Inherited: 0x00)
struct FRiotWarning {
	struct TMap<struct FString, struct FRiotWarningMessage> RiotWarningMessageMap; // 0x00(0x50)
};

// ScriptStruct ShooterGame.RMSSession
// Size: 0x01 (Inherited: 0x00)
struct FRMSSession {
	enum class ERMSConnectionState State; // 0x00(0x01)
};

// ScriptStruct ShooterGame.RMSNotification
// Size: 0x58 (Inherited: 0x00)
struct FRMSNotification {
	struct FString Resource; // 0x00(0x10)
	struct FString Service; // 0x10(0x10)
	struct FString Version; // 0x20(0x10)
	int64_t Timestamp; // 0x30(0x08)
	struct FString Body; // 0x38(0x10)
	struct FString Payload; // 0x48(0x10)
};

// ScriptStruct ShooterGame.RNetProcessInfo
// Size: 0x18 (Inherited: 0x00)
struct FRNetProcessInfo {
	int32_t Pid; // 0x00(0x04)
	int32_t RestartCountdownSeconds; // 0x04(0x04)
	struct FString Status; // 0x08(0x10)
};

// ScriptStruct ShooterGame.RNetEvent
// Size: 0x28 (Inherited: 0x00)
struct FRNetEvent {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct ShooterGame.RiotClientHeartbeat
// Size: 0x08 (Inherited: 0x00)
struct FRiotClientHeartbeat {
	enum class ERiotClientHeartbeatPhase Phase; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t SessionTTL; // 0x04(0x04)
};

// ScriptStruct ShooterGame.RiotClientHeartbeatResponse
// Size: 0x01 (Inherited: 0x00)
struct FRiotClientHeartbeatResponse {
	bool Success; // 0x00(0x01)
};

// ScriptStruct ShooterGame.ClutchMuteTelemetryEvent
// Size: 0x40 (Inherited: 0x00)
struct FClutchMuteTelemetryEvent {
	struct FString MatchID; // 0x00(0x10)
	struct FString Subject; // 0x10(0x10)
	struct FString RoomID; // 0x20(0x10)
	int32_t RoundNumber; // 0x30(0x04)
	float GamePhaseElapsedTime; // 0x34(0x04)
	float GamePhaseRemainingTime; // 0x38(0x04)
	bool EnablingMute; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// ScriptStruct ShooterGame.RNetVoiceSettings
// Size: 0x38 (Inherited: 0x00)
struct FRNetVoiceSettings {
	struct FString CurrentCaptureDeviceHandle; // 0x00(0x10)
	struct FString CurrentRenderDeviceHandle; // 0x10(0x10)
	int32_t MicLevel; // 0x20(0x04)
	int32_t SpeakerLevel; // 0x24(0x04)
	int32_t VadHangoverTime; // 0x28(0x04)
	int32_t VadSensitivity; // 0x2c(0x04)
	bool LoopbackEnabled; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
};

// ScriptStruct ShooterGame.RNetVoiceSettingsPTTOnly
// Size: 0x01 (Inherited: 0x00)
struct FRNetVoiceSettingsPTTOnly {
	bool LocalMicMuted; // 0x00(0x01)
};

// ScriptStruct ShooterGame.VoiceParticipantSettings
// Size: 0x08 (Inherited: 0x00)
struct FVoiceParticipantSettings {
	bool IsMuted; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Volume; // 0x04(0x04)
};

// ScriptStruct ShooterGame.VoiceSession
// Size: 0x38 (Inherited: 0x00)
struct FVoiceSession {
	struct FString ID; // 0x00(0x10)
	bool IsMuted; // 0x10(0x01)
	bool IsTransmitEnabled; // 0x11(0x01)
	bool IsRestricted; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct TArray<struct FVoiceSessionParticipant> Participants; // 0x18(0x10)
	struct FName Status; // 0x28(0x0c)
	int32_t Volume; // 0x34(0x04)
};

// ScriptStruct ShooterGame.VoiceSessionProperties
// Size: 0x01 (Inherited: 0x00)
struct FVoiceSessionProperties {
	bool IsTransmitEnabled; // 0x00(0x01)
};

// ScriptStruct ShooterGame.VoiceSessions
// Size: 0x10 (Inherited: 0x00)
struct FVoiceSessions {
	struct TArray<struct FVoiceSession> Sessions; // 0x00(0x10)
};

// ScriptStruct ShooterGame.VoiceDevice
// Size: 0x28 (Inherited: 0x00)
struct FVoiceDevice {
	struct FString Name; // 0x00(0x10)
	struct FString Handle; // 0x10(0x10)
	bool Is_Current_Device; // 0x20(0x01)
	bool Is_Effective_Device; // 0x21(0x01)
	bool Is_Default; // 0x22(0x01)
	char pad_23[0x5]; // 0x23(0x05)
};

// ScriptStruct ShooterGame.VoiceDevices
// Size: 0x10 (Inherited: 0x00)
struct FVoiceDevices {
	struct TArray<struct FVoiceDevice> Devices; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AudioProperties
// Size: 0x04 (Inherited: 0x00)
struct FAudioProperties {
	int32_t MicEnergy; // 0x00(0x04)
};

// ScriptStruct ShooterGame.PushToTalkKeyBinding
// Size: 0x04 (Inherited: 0x00)
struct FPushToTalkKeyBinding {
	uint32_t Key; // 0x00(0x04)
};

// ScriptStruct ShooterGame.InitializeProviderBody
// Size: 0x10 (Inherited: 0x00)
struct FInitializeProviderBody {
	struct FString Provider; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PushToTalkKeyCombo
// Size: 0x20 (Inherited: 0x00)
struct FPushToTalkKeyCombo {
	struct TArray<struct FPushToTalkKeyBinding> KeyBindings; // 0x00(0x10)
	struct FString SessionId; // 0x10(0x10)
};

// ScriptStruct ShooterGame.PushToTalkSettingsV2
// Size: 0x18 (Inherited: 0x00)
struct FPushToTalkSettingsV2 {
	bool Enabled; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FPushToTalkKeyCombo> KeyCombos; // 0x08(0x10)
};

// ScriptStruct ShooterGame.ConsoleSettingDTO
// Size: 0x20 (Inherited: 0x00)
struct FConsoleSettingDTO {
	struct FString Name; // 0x00(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct ShooterGame.Settings
// Size: 0xa8 (Inherited: 0x00)
struct FSettings {
	int32_t RoamingSetttingsVersion; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct FAresFloatSettingDTO> FloatSettings; // 0x08(0x10)
	struct TArray<struct FAresIntSettingDTO> IntSettings; // 0x18(0x10)
	struct TArray<struct FAresBoolSettingDTO> BoolSettings; // 0x28(0x10)
	struct TArray<struct FAresStringSettingDTO> StringSettings; // 0x38(0x10)
	struct TArray<struct FActionMappingDTO> ActionMappings; // 0x48(0x10)
	struct TArray<struct FAxisMappingDTO> AxisMappings; // 0x58(0x10)
	struct TArray<struct FConsoleSettingDTO> ConsoleSettings; // 0x68(0x10)
	struct TArray<struct FConsoleSettingDTO> AudioSettings; // 0x78(0x10)
	struct TArray<struct FName> SettingsProfiles; // 0x88(0x10)
	struct TArray<struct FCharacterProfileData> SettingsProfileData; // 0x98(0x10)
};

// ScriptStruct ShooterGame.RiotKeyValueStoredSettingsDTO
// Size: 0xa8 (Inherited: 0x00)
struct FRiotKeyValueStoredSettingsDTO {
	struct FSettings Data; // 0x00(0xa8)
};

// ScriptStruct ShooterGame.RoundParticipantsInfo
// Size: 0x18 (Inherited: 0x00)
struct FRoundParticipantsInfo {
	int32_t RoundNumber; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<struct AShooterPlayerState*> PenalizedPlayers; // 0x08(0x10)
};

// ScriptStruct ShooterGame.RoundRestoreSnapshot
// Size: 0x58 (Inherited: 0x00)
struct FRoundRestoreSnapshot {
	char pad_0[0x58]; // 0x00(0x58)
};

// ScriptStruct ShooterGame.RoundRestoreRecoveryOutput
// Size: 0x10 (Inherited: 0x00)
struct FRoundRestoreRecoveryOutput {
	struct TArray<struct FRoundRestoreRoundData> Rounds; // 0x00(0x10)
};

// ScriptStruct ShooterGame.RoundStateLogAbility
// Size: 0x18 (Inherited: 0x00)
struct FRoundStateLogAbility {
	struct FString AbilityName; // 0x00(0x10)
	int32_t AbilityCharges; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.RoundStateLogPlayer
// Size: 0x78 (Inherited: 0x00)
struct FRoundStateLogPlayer {
	struct FString PlayerName; // 0x00(0x10)
	struct FString CharacterName; // 0x10(0x10)
	struct FString TeamName; // 0x20(0x10)
	struct FString PrimaryWeapon; // 0x30(0x10)
	struct FString SecondaryWeapon; // 0x40(0x10)
	struct TArray<struct FRoundStateLogAbility> Abilities; // 0x50(0x10)
	int32_t UltimatePoints; // 0x60(0x04)
	int32_t Kills; // 0x64(0x04)
	int32_t Deaths; // 0x68(0x04)
	int32_t Assists; // 0x6c(0x04)
	int32_t ArmorAmount; // 0x70(0x04)
	int32_t Money; // 0x74(0x04)
};

// ScriptStruct ShooterGame.RoundStateLogRoundResult
// Size: 0x28 (Inherited: 0x00)
struct FRoundStateLogRoundResult {
	int32_t RoundNumber; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString WinningTeam; // 0x08(0x10)
	struct FString Outcome; // 0x18(0x10)
};

// ScriptStruct ShooterGame.RoundStateLogMatchState
// Size: 0x18 (Inherited: 0x00)
struct FRoundStateLogMatchState {
	bool bSidesAreSwapped; // 0x00(0x01)
	bool bIsOvertime; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FRoundStateLogRoundResult> RoundHistory; // 0x08(0x10)
};

// ScriptStruct ShooterGame.RoundStateLog
// Size: 0x38 (Inherited: 0x00)
struct FRoundStateLog {
	struct FString RoundHeader; // 0x00(0x10)
	struct TArray<struct FRoundStateLogPlayer> Players; // 0x10(0x10)
	struct FRoundStateLogMatchState MatchState; // 0x20(0x18)
};

// ScriptStruct ShooterGame.RestrictionInfo
// Size: 0x08 (Inherited: 0x00)
struct FRestrictionInfo {
	int64_t ExpirationMillis; // 0x00(0x08)
};

// ScriptStruct ShooterGame.RestrictionClaims
// Size: 0x38 (Inherited: 0x00)
struct FRestrictionClaims {
	struct FString Type; // 0x00(0x10)
	struct FString scope; // 0x10(0x10)
	struct FString Reason; // 0x20(0x10)
	struct FRestrictionInfo Dat; // 0x30(0x08)
};

// ScriptStruct ShooterGame.BanClaims
// Size: 0x10 (Inherited: 0x00)
struct FBanClaims {
	struct TArray<struct FRestrictionClaims> Restrictions; // 0x00(0x10)
};

// ScriptStruct ShooterGame.UserAccount
// Size: 0x20 (Inherited: 0x00)
struct FUserAccount {
	struct FString game_name; // 0x00(0x10)
	struct FString Tag_Line; // 0x10(0x10)
};

// ScriptStruct ShooterGame.UserInfoToken
// Size: 0x70 (Inherited: 0x00)
struct FUserInfoToken {
	struct FString Sub; // 0x00(0x10)
	struct FString Country; // 0x10(0x10)
	struct FString Aud; // 0x20(0x10)
	bool Account_Verified; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	int64_t Iat; // 0x38(0x08)
	struct FUserAccount Acct; // 0x40(0x20)
	struct FBanClaims Ban; // 0x60(0x10)
};

// ScriptStruct ShooterGame.AccessTokenFederatedIdentity
// Size: 0x30 (Inherited: 0x00)
struct FAccessTokenFederatedIdentity {
	struct FString P; // 0x00(0x10)
	struct FString Pe; // 0x10(0x10)
	struct FString Pi; // 0x20(0x10)
};

// ScriptStruct ShooterGame.AccessTokenRSO
// Size: 0x20 (Inherited: 0x00)
struct FAccessTokenRSO {
	struct FString Sub; // 0x00(0x10)
	struct TArray<struct FAccessTokenFederatedIdentity> Fi; // 0x10(0x10)
};

// ScriptStruct ShooterGame.RSOUserInfo
// Size: 0x48 (Inherited: 0x00)
struct FRSOUserInfo {
	struct FString GameName; // 0x00(0x10)
	struct FString TagLine; // 0x10(0x10)
	struct FString Subject; // 0x20(0x10)
	struct FString Country; // 0x30(0x10)
	bool AccountVerified; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct ShooterGame.RSOAccount
// Size: 0x20 (Inherited: 0x00)
struct FRSOAccount {
	struct FString GameName; // 0x00(0x10)
	struct FString TagLine; // 0x10(0x10)
};

// ScriptStruct ShooterGame.RSOParsedIdToken
// Size: 0x48 (Inherited: 0x00)
struct FRSOParsedIdToken {
	struct FString Sub; // 0x00(0x10)
	struct FString Country; // 0x10(0x10)
	uint64_t Exp; // 0x20(0x08)
	struct FRSOAccount Acct; // 0x28(0x20)
};

// ScriptStruct ShooterGame.ServerEndOfRoundPerformanceProfileDatadog
// Size: 0x38 (Inherited: 0x00)
struct FServerEndOfRoundPerformanceProfileDatadog {
	int32_t RoundNumber; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	int64_t RoundDuration; // 0x08(0x08)
	int32_t ConcurrentServers; // 0x10(0x04)
	float TotalFrameTimeMeanMs; // 0x14(0x04)
	float ProcessingTimeMeanMs; // 0x18(0x04)
	int32_t Sub4MsFrames; // 0x1c(0x04)
	int32_t Sub8MsFrames; // 0x20(0x04)
	int32_t Sub10MsFrames; // 0x24(0x04)
	int32_t Sub20MsFrames; // 0x28(0x04)
	int32_t Sub100MsFrames; // 0x2c(0x04)
	int32_t Sub300MsFrames; // 0x30(0x04)
	int32_t Over300MsFrames; // 0x34(0x04)
};

// ScriptStruct ShooterGame.ServerEndOfRoundPerformanceProfile
// Size: 0xac0 (Inherited: 0x00)
struct FServerEndOfRoundPerformanceProfile {
	struct FMetric TotalFrameTime; // 0x00(0x1c)
	struct FMetric ProcessingTime; // 0x1c(0x1c)
	struct FAresSystemTelemetryMetrics SystemMetrics; // 0x38(0x850)
	struct FString MatchID; // 0x888(0x10)
	int32_t RoundNumber; // 0x898(0x04)
	char pad_89C[0x4]; // 0x89c(0x04)
	int64_t RoundDuration; // 0x8a0(0x08)
	int32_t ConcurrentServers; // 0x8a8(0x04)
	struct FAresObjectMetrics ObjectMetrics; // 0x8ac(0x8c)
	struct FServerFrameBuckets FrameBuckets; // 0x938(0x1c)
	struct FMachinePerfStats MachinePerfStats; // 0x954(0x8c)
	char MoveTimestepsPerSecond; // 0x9e0(0x01)
	char pad_9E1[0x3]; // 0x9e1(0x03)
	float MaxTickRate; // 0x9e4(0x04)
	struct FNetworkPacketStats NetworkPacketStats; // 0x9e8(0x64)
	struct FAntiDDoSPacketStats AntiDDoSPacketStats; // 0xa4c(0x70)
	char pad_ABC[0x4]; // 0xabc(0x04)
};

// ScriptStruct ShooterGame.ServerPerRoundPerformanceData
// Size: 0x9d8 (Inherited: 0x00)
struct FServerPerRoundPerformanceData {
	int64_t RoundDuration; // 0x00(0x08)
	int32_t RoundNumber; // 0x08(0x04)
	struct FMetric TotalFrameTime; // 0x0c(0x1c)
	struct FMetric ProcessingTime; // 0x28(0x1c)
	struct FAresSystemTelemetryMetrics SystemMetrics; // 0x44(0x850)
	struct FServerFrameBuckets FrameBuckets; // 0x894(0x1c)
	struct FMachinePerfStats MachinePerfStats; // 0x8b0(0x8c)
	struct FAresObjectMetrics ObjectMetrics; // 0x93c(0x8c)
	int32_t ConcurrentServers; // 0x9c8(0x04)
	float MaxTickRate; // 0x9cc(0x04)
	char MoveTimestepsPerSecond; // 0x9d0(0x01)
	char pad_9D1[0x7]; // 0x9d1(0x07)
};

// ScriptStruct ShooterGame.ServerFilteredPerformanceProfile
// Size: 0xb0 (Inherited: 0x00)
struct FServerFilteredPerformanceProfile {
	struct TArray<struct FServerPerRoundPerformanceData> PerRoundPerformanceData; // 0x00(0x10)
	char GameplayFlagsFilter; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FGameEventMatchInfo MatchInfo; // 0x18(0x68)
	struct FServerHardwareInfo HardwareInfo; // 0x80(0x30)
};

// ScriptStruct ShooterGame.ServerRoundMetrics
// Size: 0x9b8 (Inherited: 0x00)
struct FServerRoundMetrics {
	int32_t RoundNumber_int; // 0x00(0x04)
	float FinalMS; // 0x04(0x04)
	float MedianMS; // 0x08(0x04)
	float MedianMS_Processing; // 0x0c(0x04)
	float MinMS; // 0x10(0x04)
	float MinMS_Processing; // 0x14(0x04)
	float MaxMS; // 0x18(0x04)
	float MaxMS_Processing; // 0x1c(0x04)
	float FlatMeanMS; // 0x20(0x04)
	float FlatMeanMS_Processing; // 0x24(0x04)
	float RoundDuration; // 0x28(0x04)
	int32_t PlayerCount_int; // 0x2c(0x04)
	int32_t ConcurrentServers_int; // 0x30(0x04)
	struct FAresObjectMetrics ObjectMetrics; // 0x34(0x8c)
	struct FAresSystemTelemetryMetrics SystemMetrics; // 0xc0(0x850)
	struct FServerFrameBuckets FrameBuckets; // 0x910(0x1c)
	struct FMachinePerfStats MachinePerfStats; // 0x92c(0x8c)
};

// ScriptStruct ShooterGame.ServerNetworkDDoSEscalationEvent
// Size: 0x20 (Inherited: 0x00)
struct FServerNetworkDDoSEscalationEvent {
	struct FString MatchID; // 0x00(0x10)
	int32_t BurstDDoSDetectionEventCount; // 0x10(0x04)
	int32_t DDoSActiveDDoSDetectionEventCount; // 0x14(0x04)
	int32_t SevereDDoSActiveDDoSDetectionEventCount; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.InWorldReclaimableEventHandle
// Size: 0x08 (Inherited: 0x00)
struct FInWorldReclaimableEventHandle {
	int32_t RoundNumber; // 0x00(0x04)
	int32_t EventID; // 0x04(0x04)
};

// ScriptStruct ShooterGame.ServerRewindLimitExceededEvent
// Size: 0x38 (Inherited: 0x00)
struct FServerRewindLimitExceededEvent {
	struct FString Version; // 0x00(0x10)
	struct FString MatchID; // 0x10(0x10)
	struct FString Subject; // 0x20(0x10)
	float RequestedRewindAmount; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.ServerHitRegSystemRoundSummaryEvent
// Size: 0xa0 (Inherited: 0x00)
struct FServerHitRegSystemRoundSummaryEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FString Subject; // 0x68(0x10)
	int32_t DroppedShotCount; // 0x78(0x04)
	int32_t DisagreedShotCount; // 0x7c(0x04)
	int32_t ShotsPastRewindLimitCount; // 0x80(0x04)
	int32_t TotalServerShots; // 0x84(0x04)
	int32_t TotalClientShots; // 0x88(0x04)
	int32_t TotalCharactersHitDiscrepancies; // 0x8c(0x04)
	int32_t TotalBonesHitDiscrepancies; // 0x90(0x04)
	int32_t TotalFiringLocationDiscrepancies; // 0x94(0x04)
	int32_t TotalFiringDirectionDiscrepancies; // 0x98(0x04)
	int32_t TotalImpactLocationDiscrepancies; // 0x9c(0x04)
};

// ScriptStruct ShooterGame.AbilityPerTargetEffectInfo
// Size: 0x18 (Inherited: 0x00)
struct FAbilityPerTargetEffectInfo {
	struct FString TargetPlayerSubject; // 0x00(0x10)
	float Amount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.AbilityEffectInfo
// Size: 0x28 (Inherited: 0x00)
struct FAbilityEffectInfo {
	struct FString Tag; // 0x00(0x10)
	float Amount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FAbilityPerTargetEffectInfo> AffectedTargets; // 0x18(0x10)
};

// ScriptStruct ShooterGame.AbilityUsageInfo
// Size: 0x68 (Inherited: 0x00)
struct FAbilityUsageInfo {
	struct FString AbilityId; // 0x00(0x10)
	struct FString AbilityName; // 0x10(0x10)
	struct TArray<struct FVector> Locations; // 0x20(0x10)
	struct FString LocationType; // 0x30(0x10)
	struct TArray<struct FAbilityEffectInfo> AbilityEffects; // 0x40(0x10)
	float DestroyedCount; // 0x50(0x04)
	int32_t CastEventID; // 0x54(0x04)
	struct FString UsageType; // 0x58(0x10)
};

// ScriptStruct ShooterGame.AbilityUsageEvent
// Size: 0x318 (Inherited: 0x00)
struct FAbilityUsageEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FGameEventPlayerInfo PlayerInfo; // 0x90(0x60)
	struct FGameEventCharacterState PlayerState; // 0xf0(0x1c0)
	struct FAbilityUsageInfo AbilityInfo; // 0x2b0(0x68)
};

// ScriptStruct ShooterGame.ExpressionUsageInfo
// Size: 0x28 (Inherited: 0x00)
struct FExpressionUsageInfo {
	struct FString ExpressionAssetId; // 0x00(0x10)
	struct FString ExpressionTypeId; // 0x10(0x10)
	int32_t ExpressionUsageCount; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ShooterGame.ExpressionMatchUsageEvent
// Size: 0xd8 (Inherited: 0x00)
struct FExpressionMatchUsageEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventPlayerInfo PlayerInfo; // 0x68(0x60)
	struct TArray<struct FExpressionUsageInfo> PlayerExpressions; // 0xc8(0x10)
};

// ScriptStruct ShooterGame.PlayerRoundSnapshotEvent
// Size: 0x2b0 (Inherited: 0x00)
struct FPlayerRoundSnapshotEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FGameEventPlayerInfo PlayerInfo; // 0x90(0x60)
	struct FGameEventCharacterState PlayerState; // 0xf0(0x1c0)
};

// ScriptStruct ShooterGame.InventoryChangeEvent
// Size: 0x3e8 (Inherited: 0x00)
struct FInventoryChangeEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FGameEventPlayerInfo PlayerInfo; // 0x90(0x60)
	int32_t PreTransactionMoney; // 0xf0(0x04)
	int32_t PreTransactionMoneyReceiver; // 0xf4(0x04)
	int32_t PreTransactionMoneySender; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FGameEventInventory StartingInventory; // 0x100(0x148)
	struct FGameEventInventory EndingInventory; // 0x248(0x148)
	struct FString ItemId; // 0x390(0x10)
	struct FString ItemName; // 0x3a0(0x10)
	struct FString ReceiverId; // 0x3b0(0x10)
	struct FString SenderId; // 0x3c0(0x10)
	struct FString TransactionType; // 0x3d0(0x10)
	int32_t ItemCost; // 0x3e0(0x04)
	char pad_3E4[0x4]; // 0x3e4(0x04)
};

// ScriptStruct ShooterGame.PlayerDiscrepancyDetectedDetails
// Size: 0x08 (Inherited: 0x00)
struct FPlayerDiscrepancyDetectedDetails {
	int32_t ServerValue; // 0x00(0x04)
	int32_t ClientValue; // 0x04(0x04)
};

// ScriptStruct ShooterGame.PlayerBlindApplicationDiscrepancyDetails
// Size: 0x08 (Inherited: 0x00)
struct FPlayerBlindApplicationDiscrepancyDetails {
	float ServerDuration; // 0x00(0x04)
	float ClientDuration; // 0x04(0x04)
};

// ScriptStruct ShooterGame.PlayerDiscrepancyDetectedEvent
// Size: 0xf0 (Inherited: 0x00)
struct FPlayerDiscrepancyDetectedEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventPlayerInfo PlayerInfo; // 0x68(0x60)
	struct FString DiscrepancyType; // 0xc8(0x10)
	int32_t ServerValue; // 0xd8(0x04)
	int32_t ClientValue; // 0xdc(0x04)
	struct FString DiscrepancyDetails; // 0xe0(0x10)
};

// ScriptStruct ShooterGame.PlayerSecurityViolationDisconnectEvent
// Size: 0xd8 (Inherited: 0x00)
struct FPlayerSecurityViolationDisconnectEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventPlayerInfo PlayerInfo; // 0x68(0x60)
	struct FString SecurityViolation; // 0xc8(0x10)
};

// ScriptStruct ShooterGame.ClientDisconnectEvent
// Size: 0xb0 (Inherited: 0x00)
struct FClientDisconnectEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FString Subject; // 0x68(0x10)
	struct FString DisconnectReason; // 0x78(0x10)
	struct FString DisconnectContext; // 0x88(0x10)
	struct FString DisconnectOutcome; // 0x98(0x10)
	float DisconnectDuration; // 0xa8(0x04)
	float DisconnectTimeMs; // 0xac(0x04)
};

// ScriptStruct ShooterGame.NumSpawnsPerVisibilityScore
// Size: 0x08 (Inherited: 0x00)
struct FNumSpawnsPerVisibilityScore {
	int32_t Score; // 0x00(0x04)
	int32_t NumOfSpawns; // 0x04(0x04)
};

// ScriptStruct ShooterGame.PlayerSpawnedEvent
// Size: 0x138 (Inherited: 0x00)
struct FPlayerSpawnedEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FString Subject; // 0x68(0x10)
	struct FString Character; // 0x78(0x10)
	struct FString SpawnPointName; // 0x88(0x10)
	uint32_t SpawnPointIndex; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FVector SpawnPointLocation; // 0xa0(0x18)
	bool SpawnPointDataStale; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float SpawnPointScore; // 0xbc(0x04)
	int32_t NumTicksUntilUpdate; // 0xc0(0x04)
	float LastUpdateTimestamp; // 0xc4(0x04)
	struct FGameEventRoundInfo RoundInfo; // 0xc8(0x28)
	uint32_t NumVisibleEnemyCharacters; // 0xf0(0x04)
	float EngageDistanceScore; // 0xf4(0x04)
	uint32_t NumAliveCharacters; // 0xf8(0x04)
	float LookAheadMultiplier; // 0xfc(0x04)
	struct TArray<struct FNumSpawnsPerVisibilityScore> NumSpawnsPerVisibilityScore; // 0x100(0x10)
	uint32_t NumStaleSpawnPoints; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct TArray<float> ConsideredSpawnPointScores; // 0x118(0x10)
	struct TArray<float> ConsideredSpawnPointEngageDistanceScores; // 0x128(0x10)
};

// ScriptStruct ShooterGame.GameEventStagePlayerWeaponLoadout
// Size: 0x20 (Inherited: 0x00)
struct FGameEventStagePlayerWeaponLoadout {
	struct FString PrimaryEquip; // 0x00(0x10)
	struct FString SecondaryEquip; // 0x10(0x10)
};

// ScriptStruct ShooterGame.SpawnExitEvent
// Size: 0x120 (Inherited: 0x00)
struct FSpawnExitEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FString StageID; // 0x68(0x10)
	struct FGameEventPlayerInfo PlayerInfo; // 0x78(0x60)
	struct FGameEventStagePlayerWeaponLoadout HurmPlayerWeaponLoadout; // 0xd8(0x20)
	float SpawnTime; // 0xf8(0x04)
	float SpawnExitTime; // 0xfc(0x04)
	float SpawnWorldTime; // 0x100(0x04)
	float SpawnExitWorldTime; // 0x104(0x04)
	struct TArray<struct FPlayerLocationDTO> PlayerLocations; // 0x108(0x10)
	float UltimateStatus; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
};

// ScriptStruct ShooterGame.ServerGameplaySystemSummary
// Size: 0x28 (Inherited: 0x00)
struct FServerGameplaySystemSummary {
	uint32_t AutonomousForwardPredictCount; // 0x00(0x04)
	float AutonomousForwardPredictMeanDuration; // 0x04(0x04)
	float AutonomousForwardPredictMaxDuration; // 0x08(0x04)
	uint32_t AutonomousQueueSizeCount; // 0x0c(0x04)
	float AutonomousQueueSizeMean; // 0x10(0x04)
	float AutonomousQueueSizeMax; // 0x14(0x04)
	float AutonomousMoveProcessingDelayMean; // 0x18(0x04)
	float AutonomousMoveProcessingDelayStdDeviation; // 0x1c(0x04)
	float AutonomousMoveProcessingDelayP95; // 0x20(0x04)
	uint32_t SoftDisconnectCount; // 0x24(0x04)
};

// ScriptStruct ShooterGame.ServerGameplaySystemSummaryEvent
// Size: 0xc8 (Inherited: 0x00)
struct FServerGameplaySystemSummaryEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FString Subject; // 0x68(0x10)
	struct FServerGameplaySystemSummary CombatData; // 0x78(0x28)
	struct FServerGameplaySystemSummary NonCombatData; // 0xa0(0x28)
};

// ScriptStruct ShooterGame.ReclaimOrbTelemetryInfo
// Size: 0x48 (Inherited: 0x00)
struct FReclaimOrbTelemetryInfo {
	struct FString AbilityId; // 0x00(0x10)
	struct FString AbilityName; // 0x10(0x10)
	struct FVector OrbLocation; // 0x20(0x18)
	int32_t OrbCreationRoundTime; // 0x38(0x04)
	int32_t OrbReclaimRoundTime; // 0x3c(0x04)
	int32_t OrbReclaimAttempts; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ShooterGame.InWorldReclamationTelemetryEvent
// Size: 0x138 (Inherited: 0x00)
struct FInWorldReclamationTelemetryEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FGameEventPlayerInfo PlayerInfo; // 0x90(0x60)
	struct FReclaimOrbTelemetryInfo OrbInfo; // 0xf0(0x48)
};

// ScriptStruct ShooterGame.UltChargeInfo
// Size: 0x1c (Inherited: 0x00)
struct FUltChargeInfo {
	int32_t PointsOther; // 0x00(0x04)
	int32_t PointsKill; // 0x04(0x04)
	int32_t PointsDeath; // 0x08(0x04)
	int32_t PointsSpike; // 0x0c(0x04)
	int32_t PointsOrb; // 0x10(0x04)
	int32_t FullUltimatePointCost; // 0x14(0x04)
	bool IsFullyCharged; // 0x18(0x01)
	char pad_19[0x3]; // 0x19(0x03)
};

// ScriptStruct ShooterGame.UltimateChargedEvent
// Size: 0x110 (Inherited: 0x00)
struct FUltimateChargedEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FGameEventPlayerInfo PlayerInfo; // 0x90(0x60)
	struct FUltChargeInfo ChargeInfo; // 0xf0(0x1c)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// ScriptStruct ShooterGame.ClashOrbInfo
// Size: 0x38 (Inherited: 0x00)
struct FClashOrbInfo {
	struct FString Claimed; // 0x00(0x10)
	float Angle; // 0x10(0x04)
	float Duration; // 0x14(0x04)
	float SpawnTime; // 0x18(0x04)
	float EndTime; // 0x1c(0x04)
	float Distance; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString PlayerThatClaimed; // 0x28(0x10)
};

// ScriptStruct ShooterGame.ShieldInfo
// Size: 0x0c (Inherited: 0x00)
struct FShieldInfo {
	float SpawnTime; // 0x00(0x04)
	float EndTime; // 0x04(0x04)
	float Duration; // 0x08(0x04)
};

// ScriptStruct ShooterGame.ClashOrbContestEvent
// Size: 0x120 (Inherited: 0x00)
struct FClashOrbContestEvent {
	struct TArray<struct FClashOrbInfo> ClashOrbInfo; // 0x00(0x10)
	struct TArray<struct FShieldInfo> ShieldInfo; // 0x10(0x10)
	float StartTime; // 0x20(0x04)
	float Duration; // 0x24(0x04)
	struct FGameEventMatchInfo MatchInfo; // 0x28(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x90(0x28)
	struct FGameEventPlayerInfo PlayerInfo; // 0xb8(0x60)
	int32_t CombatReportID; // 0x118(0x04)
	int32_t AltActivateCombatReportID; // 0x11c(0x04)
};

// ScriptStruct ShooterGame.KillRefuelEvent
// Size: 0x78 (Inherited: 0x00)
struct FKillRefuelEvent {
	struct FString MatchID; // 0x00(0x10)
	int32_t RoundNumber; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString Subject; // 0x18(0x10)
	struct FString enemySubject; // 0x28(0x10)
	float abilityAvailableTime; // 0x38(0x04)
	int32_t CastEventID; // 0x3c(0x04)
	struct FString triggerCondition; // 0x40(0x10)
	struct FTelemetryPlatformDetails clientPlatformDetails; // 0x50(0x20)
	enum class EAresPlatformType PlatformType; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct ShooterGame.NPEModuleStatistics
// Size: 0x58 (Inherited: 0x00)
struct FNPEModuleStatistics {
	struct FString ModuleName; // 0x00(0x10)
	struct FString MissionName; // 0x10(0x10)
	struct FString ObjectiveName; // 0x20(0x10)
	float TotalTimeTaken; // 0x30(0x04)
	float TimeAFK; // 0x34(0x04)
	float StartTime; // 0x38(0x04)
	int32_t Retries; // 0x3c(0x04)
	int32_t ShotsFired; // 0x40(0x04)
	int32_t ShotsLanded; // 0x44(0x04)
	int32_t Headshots; // 0x48(0x04)
	int32_t Deaths; // 0x4c(0x04)
	float DamageTaken; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct ShooterGame.NewPlayerExperienceJourney
// Size: 0x100 (Inherited: 0x00)
struct FNewPlayerExperienceJourney {
	struct FString Subject; // 0x00(0x10)
	struct FString MatchID; // 0x10(0x10)
	struct FString ModuleType; // 0x20(0x10)
	struct FString ModuleDescription; // 0x30(0x10)
	struct FString ModuleStatus; // 0x40(0x10)
	struct FString ModuleTimestamp; // 0x50(0x10)
	struct FNPEModuleStatistics Stats; // 0x60(0x58)
	struct FTelemetryPlatformDetails platformDetails; // 0xb8(0x20)
	struct FTelemetryPlatformDetails clientPlatformDetails; // 0xd8(0x20)
	enum class EAresPlatformType PlatformType; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
};

// ScriptStruct ShooterGame.RangeModuleInteraction
// Size: 0x18 (Inherited: 0x00)
struct FRangeModuleInteraction {
	struct FString Tag; // 0x00(0x10)
	float Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.RangeModuleInteractionResults
// Size: 0x30 (Inherited: 0x00)
struct FRangeModuleInteractionResults {
	struct FString ModuleName; // 0x00(0x10)
	float FirstInteractionRoundTime; // 0x10(0x04)
	float LastInteractionRoundTime; // 0x14(0x04)
	float NetInteractionTime; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TArray<struct FRangeModuleInteraction> Interactions; // 0x20(0x10)
};

// ScriptStruct ShooterGame.RangeModuleInteractionEvent
// Size: 0xc8 (Inherited: 0x00)
struct FRangeModuleInteractionEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FString Subject; // 0x68(0x10)
	struct FRangeModuleInteractionResults ModuleInteraction; // 0x78(0x30)
	struct FTelemetryPlatformDetails clientPlatformDetails; // 0xa8(0x20)
};

// ScriptStruct ShooterGame.CustomGameCheatInfo
// Size: 0x18 (Inherited: 0x00)
struct FCustomGameCheatInfo {
	struct FString CheatName; // 0x00(0x10)
	int32_t CheatValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.CustomGameCheatsEvent
// Size: 0xa0 (Inherited: 0x00)
struct FCustomGameCheatsEvent {
	struct FString Subject; // 0x00(0x10)
	struct FGameEventMatchInfo MatchInfo; // 0x10(0x68)
	int32_t RoundNumber; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FCustomGameCheatInfo> RoundStartCheats; // 0x80(0x10)
	struct TArray<struct FCustomGameCheatInfo> CheatToggles; // 0x90(0x10)
};

// ScriptStruct ShooterGame.VoteOptionInfo
// Size: 0x18 (Inherited: 0x00)
struct FVoteOptionInfo {
	struct FString OptionName; // 0x00(0x10)
	int32_t VoteCount; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.VoteCompleteEvent
// Size: 0xc8 (Inherited: 0x00)
struct FVoteCompleteEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FString VoteType; // 0x90(0x10)
	struct FString OptionSelected; // 0xa0(0x10)
	struct TArray<struct FVoteOptionInfo> OptionVotes; // 0xb0(0x10)
	int32_t NumNonParticipants; // 0xc0(0x04)
	int32_t NumPenalizedPlayers; // 0xc4(0x04)
};

// ScriptStruct ShooterGame.TickerObject
// Size: 0x18 (Inherited: 0x00)
struct FTickerObject {
	enum class ETickerSeverity Severity; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Message; // 0x08(0x10)
};

// ScriptStruct ShooterGame.SessionPlatformInfo
// Size: 0x20 (Inherited: 0x00)
struct FSessionPlatformInfo {
	struct FString PlatformType; // 0x00(0x10)
	struct FString PlatformOS; // 0x10(0x10)
};

// ScriptStruct ShooterGame.SessionConnectRequestDTO
// Size: 0x58 (Inherited: 0x00)
struct FSessionConnectRequestDTO {
	bool IsRestricted; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Pas; // 0x08(0x10)
	struct FString Lq; // 0x18(0x10)
	struct FString UserInfoToken; // 0x28(0x10)
	struct FSessionPlatformInfo PlatformInfo; // 0x38(0x20)
};

// ScriptStruct ShooterGame.SessionConnectRequestV2DTO
// Size: 0x68 (Inherited: 0x00)
struct FSessionConnectRequestV2DTO {
	bool IsRestricted; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Pas; // 0x08(0x10)
	struct FString Lq; // 0x18(0x10)
	struct FString UserInfoToken; // 0x28(0x10)
	struct FString CustomAuthCode; // 0x38(0x10)
	struct FSessionPlatformInfo PlatformInfo; // 0x48(0x20)
};

// ScriptStruct ShooterGame.SessionDTO
// Size: 0xd0 (Inherited: 0x00)
struct FSessionDTO {
	struct FString Raw; // 0x00(0x10)
	struct FString Subject; // 0x10(0x10)
	struct FString CXNState; // 0x20(0x10)
	struct FString CXNCloseReason; // 0x30(0x10)
	struct FString ClientID; // 0x40(0x10)
	struct FString LoopState; // 0x50(0x10)
	int64_t Version; // 0x60(0x08)
	struct FDateTime LastHeartbeatTime; // 0x68(0x08)
	struct FDateTime ExpiredTime; // 0x70(0x08)
	int64_t HeartbeatIntervalMillis; // 0x78(0x08)
	struct FTimespan HeartbeatInterval; // 0x80(0x08)
	struct FString HeartbeatIntervalMSString; // 0x88(0x10)
	struct FString PlaytimeNotification; // 0x98(0x10)
	int32_t PlaytimeMinutes; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FString RestrictionType; // 0xb0(0x10)
	struct FDateTime UserInfoValidTime; // 0xc0(0x08)
	bool ShouldForceInvalidate; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// ScriptStruct ShooterGame.SessionReconnectDTO
// Size: 0x01 (Inherited: 0x00)
struct FSessionReconnectDTO {
	bool Reconnect; // 0x00(0x01)
};

// ScriptStruct ShooterGame.SessionAllowHotfixDTO
// Size: 0x01 (Inherited: 0x00)
struct FSessionAllowHotfixDTO {
	bool AllowHotfix; // 0x00(0x01)
};

// ScriptStruct ShooterGame.SettingDisplayHierarchyInfo
// Size: 0x14 (Inherited: 0x00)
struct FSettingDisplayHierarchyInfo {
	struct FGameplayTag DisplayHierarchyTag; // 0x00(0x0c)
	struct FPerPlatformInt Priority; // 0x0c(0x04)
	int32_t SupportedPlatforms; // 0x10(0x04)
};

// ScriptStruct ShooterGame.AimTargetScore
// Size: 0x10 (Inherited: 0x00)
struct FAimTargetScore {
	struct AActor* Target; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
};

// ScriptStruct ShooterGame.DirectConnectSettings
// Size: 0x50 (Inherited: 0x00)
struct FDirectConnectSettings {
	struct FString PlayerName; // 0x00(0x10)
	struct FString Team; // 0x10(0x10)
	struct FString Player; // 0x20(0x10)
	struct FString ServerIP; // 0x30(0x10)
	struct FString Port; // 0x40(0x10)
};

// ScriptStruct ShooterGame.AresThidPersonDebugCameraSettings
// Size: 0x20 (Inherited: 0x00)
struct FAresThidPersonDebugCameraSettings {
	float ArmLengthMin; // 0x00(0x04)
	float ArmLengthMax; // 0x04(0x04)
	float ArmLengthZoomStep; // 0x08(0x04)
	bool bDoCollisionTest; // 0x0c(0x01)
	bool bEnableCameraLag; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	float CameraLagSpeed; // 0x10(0x04)
	bool bEnableCameraRotationLag; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float CameraRotationLagSpeed; // 0x18(0x04)
	bool bReversePitchRotationControls; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct ShooterGame.SpectatorFocusObjectCameraSettings
// Size: 0x10 (Inherited: 0x00)
struct FSpectatorFocusObjectCameraSettings {
	float CameraSpectatorFocusObjectPitchLowerBound; // 0x00(0x04)
	float CameraSpectatorFocusObjectPitchUpperBound; // 0x04(0x04)
	float CameraSpectatorFocusObjectRotationSpeed; // 0x08(0x04)
	float CameraSpectatorFocusObjectMinimumDistance; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.Ares3PCameraSettings
// Size: 0x1c (Inherited: 0x00)
struct FAres3PCameraSettings {
	float ArmLengthMin; // 0x00(0x04)
	float ArmLengthMax; // 0x04(0x04)
	float ArmLengthZoomStep; // 0x08(0x04)
	bool bDoCollisionTest; // 0x0c(0x01)
	bool bEnableCameraLag; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	float CameraLagSpeed; // 0x10(0x04)
	bool bEnableCameraRotationLag; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float CameraRotationLagSpeed; // 0x18(0x04)
};

// ScriptStruct ShooterGame.AresDeathCameraTimings
// Size: 0x0c (Inherited: 0x00)
struct FAresDeathCameraTimings {
	float DeathCameraSwitchDelay; // 0x00(0x04)
	float FadeToBlackStartTime; // 0x04(0x04)
	float FadeToBlackDuration; // 0x08(0x04)
};

// ScriptStruct ShooterGame.AresDeathCameraSettings
// Size: 0x48 (Inherited: 0x00)
struct FAresDeathCameraSettings {
	float fieldOfView; // 0x00(0x04)
	float ArmLengthMin; // 0x04(0x04)
	float ArmLengthMax; // 0x08(0x04)
	float ArmHorizontalOffset; // 0x0c(0x04)
	bool bDoCollisionTest; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	float ProbeSize; // 0x14(0x04)
	enum class ECollisionChannel ProbeChannel; // 0x18(0x01)
	enum class EAresInterpolationFunction InterpolationFunction; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
	struct FAresDeathCameraTimings Timings; // 0x1c(0x0c)
	bool ShouldFadeAudioOnDeath; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float SpringArmPitchOffset; // 0x2c(0x04)
	float CameraPitchOffset; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct UCurveFloat* CameraLerpCurve; // 0x38(0x08)
	enum class EAresDeathCamFocusPoint DeathCamFocusPoint; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct ShooterGame.StartingEquippable
// Size: 0x30 (Inherited: 0x00)
struct FStartingEquippable {
	struct TSoftClassPtr<UObject> EquippableClassAsset; // 0x00(0x30)
};

// ScriptStruct ShooterGame.CharacterClassSlotModifer
// Size: 0x10 (Inherited: 0x00)
struct FCharacterClassSlotModifer {
	struct AAresEquippableSlot* PurchasableSlotAsset; // 0x00(0x08)
	float CostModifier; // 0x08(0x04)
	int32_t SlotLimitModifier; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.CharacterClassCostModifer
// Size: 0x10 (Inherited: 0x00)
struct FCharacterClassCostModifer {
	struct UAresPurchasable* PurchasableClassAsset; // 0x00(0x08)
	float CostModifier; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.CharacterClassDamageTypeModifer
// Size: 0x38 (Inherited: 0x00)
struct FCharacterClassDamageTypeModifer {
	struct TSoftClassPtr<UObject> DamageTypeClassAsset; // 0x00(0x30)
	float DamageModifier; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct ShooterGame.DeadAndSettledRespawnData
// Size: 0x04 (Inherited: 0x00)
struct FDeadAndSettledRespawnData {
	bool bReachedDeadAndSettledState; // 0x00(0x01)
	bool bWasCoreMeshTickEnabled; // 0x01(0x01)
	bool bWasCosmeticMeshTickEnabled; // 0x02(0x01)
	bool bWasCosmeticMeshSimulatingPhysics; // 0x03(0x01)
};

// ScriptStruct ShooterGame.CharacterScaleData
// Size: 0x18 (Inherited: 0x00)
struct FCharacterScaleData {
	float CharacterScaleHeightOffset; // 0x00(0x04)
	float OriginalCrouchCompressionAmount; // 0x04(0x04)
	float OriginalBaseEyeHeight; // 0x08(0x04)
	float OriginalCrouchedEyeHeight; // 0x0c(0x04)
	float OriginalCapsuleRadius; // 0x10(0x04)
	float OriginalCapsuleHalfHeight; // 0x14(0x04)
};

// ScriptStruct ShooterGame.DefaultSkeletalMeshInfo
// Size: 0x18 (Inherited: 0x00)
struct FDefaultSkeletalMeshInfo {
	struct USkeletalMesh* SkeletalMesh; // 0x00(0x08)
	struct UObject* AnimInstanceClass; // 0x08(0x08)
	bool bVisible; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.AnimSequenceSlotArray
// Size: 0x20 (Inherited: 0x00)
struct FAnimSequenceSlotArray {
	struct UAnimSequence* PrimaryAnimSequence; // 0x00(0x08)
	struct UAnimSequence* SecondaryAnimSequence; // 0x08(0x08)
	bool bPrimaryIsAdditive; // 0x10(0x01)
	bool bSecondaryIsAdditive; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t ActiveIndex; // 0x14(0x04)
	int32_t LastValidActiveIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.BlendspaceSlotArray
// Size: 0x20 (Inherited: 0x00)
struct FBlendspaceSlotArray {
	struct UBlendSpace* PrimaryBlendspace; // 0x00(0x08)
	struct UBlendSpace* SecondaryBlendspace; // 0x08(0x08)
	bool bPrimaryIsAdditive; // 0x10(0x01)
	bool bSecondaryIsAdditive; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t ActiveIndex; // 0x14(0x04)
	int32_t LastValidActiveIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.Blendspace1DSlotArray
// Size: 0x20 (Inherited: 0x00)
struct FBlendspace1DSlotArray {
	struct UBlendSpace1D* PrimaryBlendspace; // 0x00(0x08)
	struct UBlendSpace1D* SecondaryBlendspace; // 0x08(0x08)
	bool bPrimaryIsAdditive; // 0x10(0x01)
	bool bSecondaryIsAdditive; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t ActiveIndex; // 0x14(0x04)
	int32_t LastValidActiveIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.AimOffsetBlendspaceSlotArray
// Size: 0x20 (Inherited: 0x00)
struct FAimOffsetBlendspaceSlotArray {
	struct UAimOffsetBlendSpace* PrimaryBlendspace; // 0x00(0x08)
	struct UAimOffsetBlendSpace* SecondaryBlendspace; // 0x08(0x08)
	bool bPrimaryIsAdditive; // 0x10(0x01)
	bool bSecondaryIsAdditive; // 0x11(0x01)
	char pad_12[0x2]; // 0x12(0x02)
	int32_t ActiveIndex; // 0x14(0x04)
	int32_t LastValidActiveIndex; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.BlendSpacesUpdate
// Size: 0x18 (Inherited: 0x00)
struct FBlendSpacesUpdate {
	float NetworkTimeAdjustment; // 0x00(0x04)
	int32_t AnimInstanceID; // 0x04(0x04)
	struct TArray<struct FAnimBlendSpaceInfo> BlendSpaces; // 0x08(0x10)
};

// ScriptStruct ShooterGame.AnimUpdate
// Size: 0x28 (Inherited: 0x00)
struct FAnimUpdate {
	struct TArray<struct FAnimInstanceStateMachines> AnimInstancesStateMachines; // 0x00(0x10)
	struct TArray<struct FBlendSpacesUpdate> BlendSpacesUpdate; // 0x10(0x10)
	struct FAnimationStateReplicationData AnimStateReplicationData; // 0x20(0x08)
};

// ScriptStruct ShooterGame.PendingAnimUpdate
// Size: 0x40 (Inherited: 0x00)
struct FPendingAnimUpdate {
	char pad_0[0x8]; // 0x00(0x08)
	struct FAnimUpdate AnimUpdate; // 0x08(0x28)
	struct UAnimInstanceReplicationComponent* AnimInstanceReplicationComponent; // 0x30(0x08)
	struct UAnimationStateComponent* AnimationStateComponent; // 0x38(0x08)
};

// ScriptStruct ShooterGame.BodySectionEntry
// Size: 0x18 (Inherited: 0x00)
struct FBodySectionEntry {
	enum class EAresBodySection BodySection; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FName> Bones; // 0x08(0x10)
};

// ScriptStruct ShooterGame.DebugPruneComplexRewindEntry
// Size: 0x50 (Inherited: 0x00)
struct FDebugPruneComplexRewindEntry {
	float StartTimeStamp; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector CastStart; // 0x08(0x18)
	struct FVector CastEnd; // 0x20(0x18)
	float CapsuleRadius; // 0x38(0x04)
	float CapsuleHalfHeight; // 0x3c(0x04)
	struct TArray<struct FVector> ImpactPoints; // 0x40(0x10)
};

// ScriptStruct ShooterGame.DebugProjectileTargetCheckingEntry
// Size: 0x50 (Inherited: 0x00)
struct FDebugProjectileTargetCheckingEntry {
	float StartTimeStamp; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FVector SphereCastStart; // 0x08(0x18)
	struct FVector SphereCastEnd; // 0x20(0x18)
	float SphereRadius; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct TArray<struct FVector> ImpactPoints; // 0x40(0x10)
};

// ScriptStruct ShooterGame.DebugImpactPointTuning
// Size: 0x18 (Inherited: 0x00)
struct FDebugImpactPointTuning {
	struct FVector ImpactPointBoxExtents; // 0x00(0x18)
};

// ScriptStruct ShooterGame.DebugLineTuning
// Size: 0x0c (Inherited: 0x00)
struct FDebugLineTuning {
	float LineStartRadius; // 0x00(0x04)
	float LineEndRadius; // 0x04(0x04)
	float LineThickness; // 0x08(0x04)
};

// ScriptStruct ShooterGame.DebugRewindTimeTuning
// Size: 0x04 (Inherited: 0x00)
struct FDebugRewindTimeTuning {
	float TextHeightOffset; // 0x00(0x04)
};

// ScriptStruct ShooterGame.DebugServerHitRegTuning
// Size: 0x28 (Inherited: 0x00)
struct FDebugServerHitRegTuning {
	struct FDebugImpactPointTuning ImpactPointTuning; // 0x00(0x18)
	struct FDebugLineTuning RayTraceTuning; // 0x18(0x0c)
	struct FDebugRewindTimeTuning RewindTimeTuning; // 0x24(0x04)
};

// ScriptStruct ShooterGame.DebugProjectileFiringTuning
// Size: 0x10 (Inherited: 0x00)
struct FDebugProjectileFiringTuning {
	struct FDebugLineTuning FiringDirectionTuning; // 0x00(0x0c)
	float LineDrawLength; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.RepSocketTransform
// Size: 0x70 (Inherited: 0x00)
struct FRepSocketTransform {
	struct FName BoneName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FTransform Transform; // 0x10(0x60)
};

// ScriptStruct ShooterGame.DebugProjectileFireSnapshot
// Size: 0x68 (Inherited: 0x00)
struct FDebugProjectileFireSnapshot {
	float Timestamp; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct AProjectile* ProjectileFired; // 0x08(0x08)
	struct FVector FiringDirection; // 0x10(0x18)
	struct FVector FiringLocation; // 0x28(0x18)
	float ErrorDegrees; // 0x40(0x04)
	float ErrorPower; // 0x44(0x04)
	int32_t ErrorRetries; // 0x48(0x04)
	int32_t RandomSeed; // 0x4c(0x04)
	struct FVector CharacterVelocity; // 0x50(0x18)
};

// ScriptStruct ShooterGame.DebugProjectileDamageSnapshot
// Size: 0x18 (Inherited: 0x00)
struct FDebugProjectileDamageSnapshot {
	struct FString Report; // 0x00(0x10)
	float StartTimeStamp; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.NetworkedShotId
// Size: 0x08 (Inherited: 0x00)
struct FNetworkedShotId {
	uint32_t ShotIdPrimary; // 0x00(0x04)
	uint32_t ShotIdSecondary; // 0x04(0x04)
};

// ScriptStruct ShooterGame.ShotResultMetadata
// Size: 0xa0 (Inherited: 0x00)
struct FShotResultMetadata {
	struct TArray<struct AShooterCharacter*> ShooterCharactersHit; // 0x00(0x10)
	struct TArray<struct FName> BonesHit; // 0x10(0x10)
	struct FVector InitialImpactLocation; // 0x20(0x18)
	struct FVector FiringLocation; // 0x38(0x18)
	struct FVector FiringDirection; // 0x50(0x18)
	struct FStabilityValues StabilityValues; // 0x68(0x18)
	struct FVector MovementVelocity; // 0x80(0x18)
	bool bUsedPredictedLocation; // 0x98(0x01)
	bool bInitialized; // 0x99(0x01)
	char pad_9A[0x6]; // 0x9a(0x06)
};

// ScriptStruct ShooterGame.NetworkedClientShotResult
// Size: 0xa8 (Inherited: 0x00)
struct FNetworkedClientShotResult {
	struct FNetworkedShotId ShotID; // 0x00(0x08)
	struct FShotResultMetadata ShotMetadata; // 0x08(0xa0)
};

// ScriptStruct ShooterGame.ShotResult
// Size: 0x148 (Inherited: 0x00)
struct FShotResult {
	struct FShotResultMetadata ClientShotMetadata; // 0x00(0xa0)
	struct FShotResultMetadata ServerShotMetadata; // 0xa0(0xa0)
	bool bReceivedServerResults; // 0x140(0x01)
	bool bReceivedClientResults; // 0x141(0x01)
	char pad_142[0x6]; // 0x142(0x06)
};

// ScriptStruct ShooterGame.ReplicatedDebugHitRegSample
// Size: 0x90 (Inherited: 0x00)
struct FReplicatedDebugHitRegSample {
	struct TArray<struct FName> HitBoxSocketNames; // 0x00(0x10)
	struct TArray<struct FTransform> HitBoxSocketWorldTransforms; // 0x10(0x10)
	struct TArray<struct FTransform> HitBoxSocketLocalTransforms; // 0x20(0x10)
	struct FTransform ActorTransform; // 0x30(0x60)
};

// ScriptStruct ShooterGame.AresPerMovementStateData
// Size: 0x28 (Inherited: 0x00)
struct FAresPerMovementStateData {
	float Accel; // 0x00(0x04)
	float Friction; // 0x04(0x04)
	float FrictionMin; // 0x08(0x04)
	float BrakingFriction; // 0x0c(0x04)
	float MaxSpeed; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FVector2D InputDirectionalMultipliers; // 0x18(0x10)
};

// ScriptStruct ShooterGame.AresMovementTuning
// Size: 0x120 (Inherited: 0x00)
struct FAresMovementTuning {
	struct FAresPerMovementStateData BaseValues; // 0x00(0x28)
	struct FAresPerMovementStateData DefaultStateMultipliers[0x6]; // 0x28(0xf0)
	float MinimumAboveMaxSpeedDecayRate; // 0x118(0x04)
	float JumpLandSlowMaxSpeedDecayRate; // 0x11c(0x04)
};

// ScriptStruct ShooterGame.AresJumpTuning
// Size: 0x20 (Inherited: 0x00)
struct FAresJumpTuning {
	float MaxJumpHeight; // 0x00(0x04)
	float JumpTotalTime; // 0x04(0x04)
	char pad_8[0x8]; // 0x08(0x08)
	float JumpAccelerationSpeedLimit; // 0x10(0x04)
	float JumpAngleThresholdForConvertingForwardAccelToLateralDegrees; // 0x14(0x04)
	float JumpAccelerationCounterSteerMultiplier; // 0x18(0x04)
	float StartAngleForJumpAccelerationCounterSteerMultiplier; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.AresJumpLandSlowTuningV2
// Size: 0x10 (Inherited: 0x00)
struct FAresJumpLandSlowTuningV2 {
	float JumpFallDistanceForSlowV2; // 0x00(0x04)
	int32_t MaxJumpsPerSecondThrottle; // 0x04(0x04)
	struct UForceModule* JumpLandSlowForceModule; // 0x08(0x08)
};

// ScriptStruct ShooterGame.StabilityMovementData
// Size: 0x20 (Inherited: 0x00)
struct FStabilityMovementData {
	enum class EAresMovementType MovementType; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FVector Velocity; // 0x08(0x18)
};

// ScriptStruct ShooterGame.GradualCorrectionData
// Size: 0x50 (Inherited: 0x00)
struct FGradualCorrectionData {
	struct FVector ClientToServerPositionDiff; // 0x00(0x18)
	struct FVector ServerVelocity; // 0x18(0x18)
	char pad_30[0x20]; // 0x30(0x20)
};

// ScriptStruct ShooterGame.ServerMoveDebugData
// Size: 0x50 (Inherited: 0x00)
struct FServerMoveDebugData {
	struct FVector ServerPosition; // 0x00(0x18)
	struct FVector ServerVelocity; // 0x18(0x18)
	struct FVector ServerAcceleration; // 0x30(0x18)
	struct FTimeStampIndex TimeStampIndex; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct ShooterGame.ProjectileInstigatorMovementContext
// Size: 0x80 (Inherited: 0x00)
struct FProjectileInstigatorMovementContext {
	char pad_0[0x80]; // 0x00(0x80)
};

// ScriptStruct ShooterGame.GunNamesToEquippableDataAssetTableRow
// Size: 0x38 (Inherited: 0x08)
struct FGunNamesToEquippableDataAssetTableRow : FTableRowBase {
	struct TSoftClassPtr<UObject> Equippable; // 0x08(0x30)
};

// ScriptStruct ShooterGame.DamagePenetration
// Size: 0x08 (Inherited: 0x00)
struct FDamagePenetration {
	enum class DamageSectionType Target; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Amount; // 0x04(0x04)
};

// ScriptStruct ShooterGame.AresCharacterSelectCharacterAttachment
// Size: 0xd0 (Inherited: 0x00)
struct FAresCharacterSelectCharacterAttachment {
	struct USkeletalMesh* AttachedMesh; // 0x00(0x08)
	struct TSoftObjectPtr<USkeletalMesh> AttachedMeshAsset; // 0x08(0x30)
	struct FRotator AttachRotation; // 0x38(0x18)
	struct FName AttachSocket; // 0x50(0x0c)
	enum class EAnimationMode AnimationMode; // 0x5c(0x01)
	char pad_5D[0x3]; // 0x5d(0x03)
	struct UObject* AnimGraphClass; // 0x60(0x08)
	struct TSoftClassPtr<UObject> AnimGraphClassAsset; // 0x68(0x30)
	struct UAnimationAsset* AnimToPlay; // 0x98(0x08)
	struct TSoftObjectPtr<UAnimationAsset> AnimToPlayAsset; // 0xa0(0x30)
};

// ScriptStruct ShooterGame.AresCharacterSelectResources
// Size: 0x180 (Inherited: 0x00)
struct FAresCharacterSelectResources {
	struct USkeletalMesh* CharacterSelectMesh; // 0x00(0x08)
	struct TSoftObjectPtr<USkeletalMesh> CharacterSelectMeshAsset; // 0x08(0x30)
	struct TArray<struct FAresCharacterSelectCharacterAttachment> CharacterSelectAttachments; // 0x38(0x10)
	struct FVector CharacterScale; // 0x48(0x18)
	struct UObject* CharacterSelectAnimGraphClass; // 0x60(0x08)
	struct TSoftClassPtr<UObject> CharacterSelectAnimGraphClassAsset; // 0x68(0x30)
	struct UTexture* ClassIcon; // 0x98(0x08)
	struct TSoftObjectPtr<UTexture> ClassIconAsset; // 0xa0(0x30)
	struct TSoftObjectPtr<UTexture> ClassIconAsset2; // 0xd0(0x30)
	struct TSoftObjectPtr<UTexture> LockedInIconAsset; // 0x100(0x30)
	struct FString CharacterBackgroundText; // 0x130(0x10)
	struct FString CharacterQuoteText; // 0x140(0x10)
	struct FText CharacterBackgroundLocalizedText; // 0x150(0x18)
	struct FText CharacterQuoteLocalizedText; // 0x168(0x18)
};

// ScriptStruct ShooterGame.AresCheatData
// Size: 0x70 (Inherited: 0x00)
struct FAresCheatData {
	struct APawn* TargetMannequinClass; // 0x00(0x08)
	struct TSoftClassPtr<UObject> TargetMannequinClassAsset; // 0x08(0x30)
	struct TSoftClassPtr<UObject> MannequinPlayerControllerClassAsset; // 0x38(0x30)
	struct FColor DebugMessageColor; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
};

// ScriptStruct ShooterGame.MainMenuLevelEntry
// Size: 0x38 (Inherited: 0x00)
struct FMainMenuLevelEntry {
	struct FString DisplayName; // 0x00(0x10)
	struct FText DisplayNameText; // 0x10(0x18)
	struct FString AssetName; // 0x28(0x10)
};

// ScriptStruct ShooterGame.MainMenuGameModeEntry
// Size: 0x48 (Inherited: 0x00)
struct FMainMenuGameModeEntry {
	struct FString DisplayName; // 0x00(0x10)
	struct AGameMode* Asset; // 0x10(0x08)
	struct TSoftClassPtr<UObject> GameModeAsset; // 0x18(0x30)
};

// ScriptStruct ShooterGame.AresGameGlobals
// Size: 0x48 (Inherited: 0x00)
struct FAresGameGlobals {
	int32_t TeamSelectTime; // 0x00(0x04)
	int32_t PreRoundTime; // 0x04(0x04)
	int32_t SwitchingTeamsTime; // 0x08(0x04)
	int32_t GameEndedTime; // 0x0c(0x04)
	struct UShooterDamageType* InternalDamageType; // 0x10(0x08)
	struct TSoftClassPtr<UObject> InternalDamageTypeAsset; // 0x18(0x30)
};

// ScriptStruct ShooterGame.AresInputGlobals
// Size: 0x10 (Inherited: 0x00)
struct FAresInputGlobals {
	float MouseScalePitch; // 0x00(0x04)
	float MouseScaleYaw; // 0x04(0x04)
	float NormalFoV; // 0x08(0x04)
	float NormalFoV1P; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.AresAudioGlobals
// Size: 0x10 (Inherited: 0x00)
struct FAresAudioGlobals {
	struct AAresSoundHandler* SoundHandlerClass; // 0x00(0x08)
	float BulletWhizConsiderationRadius; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.AresTheme
// Size: 0x18 (Inherited: 0x00)
struct FAresTheme {
	struct FName ThemeName; // 0x00(0x0c)
	struct FColor Colors[0x3]; // 0x0c(0x0c)
};

// ScriptStruct ShooterGame.AresDeathRecapHUDGlobals
// Size: 0xc0 (Inherited: 0x00)
struct FAresDeathRecapHUDGlobals {
	int32_t InitialXPos; // 0x00(0x04)
	int32_t InitialYPos; // 0x04(0x04)
	int32_t NewLineSize; // 0x08(0x04)
	struct FColor NeutralFontColor; // 0x0c(0x04)
	struct FColor EnemyFontColor; // 0x10(0x04)
	struct FColor MyFontColor; // 0x14(0x04)
	struct FColor FontShadowColor; // 0x18(0x04)
	bool bEnableFontOutline; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct FColor FontOutlineColor; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct UFont* DeathRecapFont; // 0x28(0x08)
	struct TSoftObjectPtr<UFont> DeathRecapFontAsset; // 0x30(0x30)
	int32_t MinLeftLineLength; // 0x60(0x04)
	int32_t DamageDealtXPosPadding; // 0x64(0x04)
	int32_t MinRightLineLength; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct UTexture2D* DeathRecapBackground; // 0x70(0x08)
	struct TSoftObjectPtr<UTexture2D> DeathRecapBackgroundAsset; // 0x78(0x30)
	struct FColor DeathRecapDamageDealtColor1; // 0xa8(0x04)
	struct FColor DeathRecapDamageDealtColor2; // 0xac(0x04)
	struct FColor DeathRecapDamageTakenColor1; // 0xb0(0x04)
	struct FColor DeathRecapDamageTakenColor2; // 0xb4(0x04)
	int32_t DeathRecapItemYPadding; // 0xb8(0x04)
	float DeathRecapFadeTime; // 0xbc(0x04)
};

// ScriptStruct ShooterGame.AresHUDMinimapDangerZonesSettings
// Size: 0x110 (Inherited: 0x00)
struct FAresHUDMinimapDangerZonesSettings {
	struct TSoftObjectPtr<UMaterialInterface> MinimapDangerZoneAsset; // 0x00(0x30)
	struct TSoftObjectPtr<UCurveFloat> AlphaOverLifetimeCurve; // 0x30(0x30)
	float RegionLifeTime; // 0x60(0x04)
	float RegionExpansionSpeedScaleFactor; // 0x64(0x04)
	float RegionInitialExpansionSize_Worldspace; // 0x68(0x04)
	float VisibleNearRegionDestroyRadius_Worldspace; // 0x6c(0x04)
	struct FName AliveTimeSecondsParameterName; // 0x70(0x0c)
	struct FName AliveTimePercentParameterName; // 0x7c(0x0c)
	struct FName LifeCurveAlphaParameterName; // 0x88(0x0c)
	struct FName LookupTableRowTexcoordParameterName; // 0x94(0x0c)
	struct FName CurrentUncertaintyRadiusWorldspaceParameterName; // 0xa0(0x0c)
	struct FName CurrentUncertaintyRadiusPercentageParameterName; // 0xac(0x0c)
	struct FName MinimapScaleAndBiasParameterName; // 0xb8(0x0c)
	struct FName MinimapUITextureParameterName; // 0xc4(0x0c)
	struct FName MinimapUIDangerZonesTextureParameterName; // 0xd0(0x0c)
	struct FName MinimapUIDangerZonesLUTTextureParameterName; // 0xdc(0x0c)
	struct FName MinimapClipUVOffsetParameterName; // 0xe8(0x0c)
	struct FName MinimapClipScaleParameterName; // 0xf4(0x0c)
	struct FName DistanceLookupTableTextureParameterName; // 0x100(0x0c)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// ScriptStruct ShooterGame.AresHUDGlobals
// Size: 0x3c0 (Inherited: 0x00)
struct FAresHUDGlobals {
	struct FSlateFontInfo DefaultFont; // 0x00(0x60)
	bool KeyLocationsAlwaysOn; // 0x60(0x01)
	bool bEnableSuperSquareCrosshair; // 0x61(0x01)
	char pad_62[0x6]; // 0x62(0x06)
	struct FCanvasIcon SuperSquareCrosshairEdgeTexture; // 0x68(0x18)
	struct FCanvasIcon SuperSquareCrosshairCornerTexture; // 0x80(0x18)
	float SuperSquareCrosshairWidth; // 0x98(0x04)
	float SuperSquareCrosshairLength; // 0x9c(0x04)
	struct FColor SuperSquareColor; // 0xa0(0x04)
	float SuperSquareMinRadiusPixels; // 0xa4(0x04)
	struct FCanvasIcon SuperSquareCenterTexture; // 0xa8(0x18)
	bool bDrawSuperSquareOffsetLine; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	float MinVisualCrossHairSpread; // 0xc4(0x04)
	float ResourceBarScalePerSecond; // 0xc8(0x04)
	char pad_CC[0x4]; // 0xcc(0x04)
	struct UTexture* CastingCircleActivePiece; // 0xd0(0x08)
	struct TSoftObjectPtr<UTexture> CastingCircleActivePieceAsset; // 0xd8(0x30)
	struct UTexture* CastingCircleInactivePiece; // 0x108(0x08)
	struct TSoftObjectPtr<UTexture> CastingCircleInactivePieceAsset; // 0x110(0x30)
	struct UMaterialInterface* CircularMinimapMaterial; // 0x140(0x08)
	struct UAkAudioEvent* KillConfirmEvent; // 0x148(0x08)
	struct TSoftObjectPtr<UAkAudioEvent> KillConfirmEventAsset; // 0x150(0x30)
	struct UParticleSystem* LastKnownPositionParticle; // 0x180(0x08)
	struct TSoftObjectPtr<UParticleSystem> LastKnownPositionParticleAsset; // 0x188(0x30)
	struct UAkAudioEvent* UIErrorEvent; // 0x1b8(0x08)
	struct TSoftObjectPtr<UAkAudioEvent> UIErrorEventAsset; // 0x1c0(0x30)
	struct FAresDeathRecapHUDGlobals DeathRecapGlobals; // 0x1f0(0xc0)
	struct FAresHUDMinimapDangerZonesSettings MinimapDangerZonesSettings; // 0x2b0(0x110)
};

// ScriptStruct ShooterGame.AresDecalManagerGlobals
// Size: 0x04 (Inherited: 0x00)
struct FAresDecalManagerGlobals {
	int32_t MaxLiveDecals; // 0x00(0x04)
};

// ScriptStruct ShooterGame.AresAccessibilityGlobals
// Size: 0x24 (Inherited: 0x00)
struct FAresAccessibilityGlobals {
	float AllyFresnelOffset; // 0x00(0x04)
	float EnemyFresnelOffset; // 0x04(0x04)
	struct FColor AllyColor; // 0x08(0x04)
	struct FColor HUDAllyColor; // 0x0c(0x04)
	struct FColor DefaultEnemyColor; // 0x10(0x04)
	struct FColor HUDEnemyColor; // 0x14(0x04)
	struct FColor TritanopiaEnemyColor; // 0x18(0x04)
	struct FColor DeuteranopiaEnemyColor; // 0x1c(0x04)
	struct FColor ProtanopiaEnemyColor; // 0x20(0x04)
};

// ScriptStruct ShooterGame.AresStoreGlobals
// Size: 0x08 (Inherited: 0x00)
struct FAresStoreGlobals {
	int32_t TotalPurchaseLimit; // 0x00(0x04)
	bool bDisallowDropping; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct ShooterGame.AresRespawnGlobals
// Size: 0x0c (Inherited: 0x00)
struct FAresRespawnGlobals {
	float RespawnPointSearchRadius; // 0x00(0x04)
	float RespawnPointSearchUpwardsDistance; // 0x04(0x04)
	float RespawnPointSearchDownwardsDistance; // 0x08(0x04)
};

// ScriptStruct ShooterGame.EquippedSkin
// Size: 0x20 (Inherited: 0x00)
struct FEquippedSkin {
	struct FGuid BaseManifest; // 0x00(0x10)
	struct FGuid SkinManifest; // 0x10(0x10)
};

// ScriptStruct ShooterGame.MatchStartEvent
// Size: 0xa0 (Inherited: 0x00)
struct FMatchStartEvent {
	struct FGameEventMatchInfo MatchInfo; // 0x00(0x68)
	struct FString InstanceId; // 0x68(0x10)
	struct TArray<struct FGameEventPlayerInfo> PlayerInfos; // 0x78(0x10)
	struct FGameServerLoadTestInfo GameServerLoadTestInfo; // 0x88(0x18)
};

// ScriptStruct ShooterGame.GameServerLoadTestInfo
// Size: 0x18 (Inherited: 0x00)
struct FGameServerLoadTestInfo {
	struct FString LoadTestID; // 0x00(0x10)
	int32_t ServerInstanceID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.AccoladeTelemetryData
// Size: 0x18 (Inherited: 0x00)
struct FAccoladeTelemetryData {
	struct FString AccoladeID; // 0x00(0x10)
	int32_t Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.AgentMasteryTelemetryEvent
// Size: 0x38 (Inherited: 0x00)
struct FAgentMasteryTelemetryEvent {
	struct FString MatchID; // 0x00(0x10)
	struct FString Subject; // 0x10(0x10)
	struct FAccoladeTelemetryData AccoladeData; // 0x20(0x18)
};

// ScriptStruct ShooterGame.AresPlatformMatchInfo
// Size: 0x10 (Inherited: 0x00)
struct FAresPlatformMatchInfo {
	struct FString MatchID; // 0x00(0x10)
};

// ScriptStruct ShooterGame.CustomTeamColor
// Size: 0x10 (Inherited: 0x00)
struct FCustomTeamColor {
	struct UBaseTeamComponent* Team; // 0x00(0x08)
	struct FColor TeamColor; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.DebugCustomTeamColor
// Size: 0x10 (Inherited: 0x00)
struct FDebugCustomTeamColor {
	struct FName Team; // 0x00(0x0c)
	struct FColor TeamColor; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.AresGameInfo
// Size: 0x40 (Inherited: 0x00)
struct FAresGameInfo {
	float DisplayRemainingTime; // 0x00(0x04)
	float LocalDisplayRemainingTime; // 0x04(0x04)
	bool bLocallyPredictTimeAdvancing; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
	float GamePhaseElapsedTime; // 0x0c(0x04)
	bool bIsStoreEnabled; // 0x10(0x01)
	bool bIsInfiniteAbilitiesEnabled; // 0x11(0x01)
	bool bIsInfiniteAmmoEnabled; // 0x12(0x01)
	bool bIsInfiniteReserveEnabled; // 0x13(0x01)
	bool bIsInfiniteMoneyEnabled; // 0x14(0x01)
	bool bIsIgnoreShoppingRestrictionsEnabled; // 0x15(0x01)
	bool bIsMatchTimerPaused; // 0x16(0x01)
	bool bIsIntentionEnabled; // 0x17(0x01)
	float AuthGameplayStartTimestamp; // 0x18(0x04)
	float AuthGameplayEndTimestamp; // 0x1c(0x04)
	float LocalGameplayStartTimestamp; // 0x20(0x04)
	float LocalGameplayEndTimestamp; // 0x24(0x04)
	bool bGameplayActive; // 0x28(0x01)
	bool bIsDropInSystemEnabled; // 0x29(0x01)
	bool bIsDropInEnabled; // 0x2a(0x01)
	char pad_2B[0x5]; // 0x2b(0x05)
	struct AShooterPlayerState* MatchTimeoutCallingPlayer; // 0x30(0x08)
	float MatchTimeoutExpireTimeStamp; // 0x38(0x04)
	enum class EAresMatchTimeoutState MatchTimeoutState; // 0x3c(0x01)
	bool bShowMegamapPingsInWorld; // 0x3d(0x01)
	char pad_3E[0x2]; // 0x3e(0x02)
};

// ScriptStruct ShooterGame.AresTeamInfo
// Size: 0x18 (Inherited: 0x08)
struct FAresTeamInfo : FAresTeamListEntry {
	enum class EAresTeamRole InitialRole; // 0x08(0x01)
	enum class EAresTeamRole TeamRole; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	int32_t Wins; // 0x0c(0x04)
	int32_t Points; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.AresTeamEconomy
// Size: 0x18 (Inherited: 0x08)
struct FAresTeamEconomy : FAresTeamListEntry {
	int32_t LoadoutValue; // 0x08(0x04)
	int32_t AverageLoadoutValue; // 0x0c(0x04)
	int32_t InventoryValue; // 0x10(0x04)
	int32_t MoneyValue; // 0x14(0x04)
};

// ScriptStruct ShooterGame.AresTeamCount
// Size: 0x10 (Inherited: 0x08)
struct FAresTeamCount : FAresTeamListEntry {
	int32_t Count; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.AresHUDDebugTextLine
// Size: 0x18 (Inherited: 0x00)
struct FAresHUDDebugTextLine {
	struct FString ScreenMessage; // 0x00(0x10)
	struct FColor DisplayColor; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.AresHUDDebugMessage
// Size: 0x18 (Inherited: 0x00)
struct FAresHUDDebugMessage {
	char pad_0[0x10]; // 0x00(0x10)
	float ExpireTime; // 0x10(0x04)
	enum class EDebugMessagePosition Position; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct ShooterGame.AresHudTuning
// Size: 0x04 (Inherited: 0x00)
struct FAresHudTuning {
	float SymmetricFontScalingThreshold; // 0x00(0x04)
};

// ScriptStruct ShooterGame.AresDebugHudTuning
// Size: 0x88 (Inherited: 0x00)
struct FAresDebugHudTuning {
	float RectangleDrawThickness; // 0x00(0x04)
	struct FColor RectangleDrawColor; // 0x04(0x04)
	struct FAresHudFontParams NameTextFontParams; // 0x08(0x78)
	float HudAlpha; // 0x80(0x04)
	char pad_84[0x4]; // 0x84(0x04)
};

// ScriptStruct ShooterGame.AresIntentionTargetDrawInfo
// Size: 0x58 (Inherited: 0x00)
struct FAresIntentionTargetDrawInfo {
	struct TMap<struct AShooterPlayerState*, struct FAresPlayerIntention> AssignedIntentions; // 0x00(0x50)
	bool bDrawHighlighted; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct ShooterGame.AresPlayerIntention
// Size: 0x0c (Inherited: 0x00)
struct FAresPlayerIntention {
	struct TWeakObjectPtr<struct AKeyLocationObject> Target; // 0x00(0x08)
	enum class EAresPlayerIntentionType IntentionType; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct ShooterGame.CharacterHUD
// Size: 0x60 (Inherited: 0x00)
struct FCharacterHUD {
	struct UMaterialInstanceConstant* SmokeScreenMaterial; // 0x00(0x08)
	struct FName SmokeScreenMaterialParameter; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct UMaterialInstanceDynamic* SmokeScreenMaterialInstance; // 0x18(0x08)
	struct UParticleSystem* SmokeScreenParticleSystem; // 0x20(0x08)
	struct FName SmokeScreenParticleSystemParameter; // 0x28(0x0c)
	char pad_34[0x4]; // 0x34(0x04)
	struct UParticleSystemComponent* SmokeScreenParticleSystemComponent; // 0x38(0x08)
	float MinCharacterNameTextScale; // 0x40(0x04)
	float MaxCharacterNameTextScale; // 0x44(0x04)
	float MinNameTextScaleDistance; // 0x48(0x04)
	float MaxNameTextScaleDistance; // 0x4c(0x04)
	float MinNameClipScaleDistance; // 0x50(0x04)
	float MaxNameClipScaleDistance; // 0x54(0x04)
	float MinDistanceNameClipRadius; // 0x58(0x04)
	float MaxDistanceNameClipRadius; // 0x5c(0x04)
};

// ScriptStruct ShooterGame.AnnouncerHUD
// Size: 0x04 (Inherited: 0x00)
struct FAnnouncerHUD {
	float PortraitScale; // 0x00(0x04)
};

// ScriptStruct ShooterGame.ClientErrorMessage
// Size: 0x20 (Inherited: 0x00)
struct FClientErrorMessage {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.AresHeightDifference
// Size: 0x30 (Inherited: 0x00)
struct FAresHeightDifference {
	struct FCanvasIcon HeightIcon; // 0x00(0x18)
	struct FVector2D OffsetFromParentIcon; // 0x18(0x10)
	float HeightDifference; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ShooterGame.VisualizeRestoreComponent
// Size: 0x18 (Inherited: 0x00)
struct FVisualizeRestoreComponent {
	bool bHidden; // 0x00(0x01)
	bool bComponentHiddenInGame; // 0x01(0x01)
	bool bActorHiddenInGame; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct TArray<struct UMaterialInterface*> SavedMaterials; // 0x08(0x10)
};

// ScriptStruct ShooterGame.VisualizeRestoreData
// Size: 0xa0 (Inherited: 0x00)
struct FVisualizeRestoreData {
	struct TMap<struct UPrimitiveComponent*, struct FVisualizeRestoreComponent> RestoreMap; // 0x00(0x50)
	struct TMap<struct UDecalComponent*, struct FVisualizeRestoreComponent> DecalRestoreMap; // 0x50(0x50)
};

// ScriptStruct ShooterGame.PreDisconnectReasonInfo
// Size: 0x20 (Inherited: 0x00)
struct FPreDisconnectReasonInfo {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct ShooterGame.ShooterGameTimeMarker
// Size: 0x0c (Inherited: 0x00)
struct FShooterGameTimeMarker {
	float PausableUndilatedWorldTime; // 0x00(0x04)
	int32_t RoundNumber; // 0x04(0x04)
	enum class EAresGamePhase GamePhase; // 0x08(0x01)
	char pad_9[0x3]; // 0x09(0x03)
};

// ScriptStruct ShooterGame.AresRoundResult
// Size: 0x20 (Inherited: 0x00)
struct FAresRoundResult {
	struct FName WinningTeam; // 0x00(0x0c)
	enum class EAresTeamRole WinningTeamRole; // 0x0c(0x01)
	enum class EAresRoundOutcome RoundResult; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<struct UBaseTeamComponent*> EliminatedTeams; // 0x10(0x10)
};

// ScriptStruct ShooterGame.AresPlayerRoundInfo
// Size: 0x14 (Inherited: 0x00)
struct FAresPlayerRoundInfo {
	int32_t RoundNumber; // 0x00(0x04)
	int32_t StartOfRoundMoney; // 0x04(0x04)
	int32_t StartOfRoundLoadoutValue; // 0x08(0x04)
	int32_t EndOfRoundMoney; // 0x0c(0x04)
	int32_t EndOfRoundLoadoutValue; // 0x10(0x04)
};

// ScriptStruct ShooterGame.AresInputInterpolant
// Size: 0x14 (Inherited: 0x00)
struct FAresInputInterpolant {
	float InputRangeStart; // 0x00(0x04)
	float InputRangeEnd; // 0x04(0x04)
	float OutputRangeStart; // 0x08(0x04)
	float OutputRangeEnd; // 0x0c(0x04)
	enum class EAresInterpolationFunction InterpolationType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct ShooterGame.AresWaveSpawnInfo
// Size: 0x18 (Inherited: 0x00)
struct FAresWaveSpawnInfo {
	struct TArray<struct AActor*> WaveMinionClasses; // 0x00(0x10)
	float SpawnFrequency; // 0x10(0x04)
	float SpawnTimeRemaining; // 0x14(0x04)
};

// ScriptStruct ShooterGame.AresHitImpactParticle
// Size: 0x18 (Inherited: 0x00)
struct FAresHitImpactParticle {
	struct UParticleSystem* ParticleSystem; // 0x00(0x08)
	struct UCurveFloat* ScaleDistance; // 0x08(0x08)
	enum class EAresHitImpactParticleOrientation Orientation; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.AresGameRewardMultiplier
// Size: 0x24 (Inherited: 0x00)
struct FAresGameRewardMultiplier {
	float Multipliers[0x9]; // 0x00(0x24)
};

// ScriptStruct ShooterGame.AresGameRewardTuning
// Size: 0x58 (Inherited: 0x00)
struct FAresGameRewardTuning {
	struct FName RewardName; // 0x00(0x0c)
	struct FName RewardDisplayName; // 0x0c(0x0c)
	struct FText RewardDisplayText; // 0x18(0x18)
	struct FAresGameReward DefaultReward; // 0x30(0x24)
	enum class EAresRewardGrantStrategy WhenToGrantReward; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
};

// ScriptStruct ShooterGame.AresGameRewardReplicated
// Size: 0x30 (Inherited: 0x00)
struct FAresGameRewardReplicated {
	struct FName RewardName; // 0x00(0x0c)
	struct FAresGameReward Reward; // 0x0c(0x24)
};

// ScriptStruct ShooterGame.AresDebugSphereReplicated
// Size: 0x30 (Inherited: 0x00)
struct FAresDebugSphereReplicated {
	struct FVector Center; // 0x00(0x18)
	float Radius; // 0x18(0x04)
	int32_t Segments; // 0x1c(0x04)
	struct FColor Color; // 0x20(0x04)
	bool bPersistentLines; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float LifeTime; // 0x28(0x04)
	char DepthPriority; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct ShooterGame.AresDebugLineReplicated
// Size: 0x48 (Inherited: 0x00)
struct FAresDebugLineReplicated {
	struct FVector LineStart; // 0x00(0x18)
	struct FVector LineEnd; // 0x18(0x18)
	struct FColor Color; // 0x30(0x04)
	bool bPersistentLines; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	float LifeTime; // 0x38(0x04)
	char DepthPriority; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
	float Thickness; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ShooterGame.AresDebugTextReplicated
// Size: 0x18 (Inherited: 0x00)
struct FAresDebugTextReplicated {
	struct FString Text; // 0x00(0x10)
	float LifeTime; // 0x10(0x04)
	struct FColor Color; // 0x14(0x04)
};

// ScriptStruct ShooterGame.NormalDistributionParameters
// Size: 0x08 (Inherited: 0x00)
struct FNormalDistributionParameters {
	float Mean; // 0x00(0x04)
	float StdDev; // 0x04(0x04)
};

// ScriptStruct ShooterGame.ExplicitFloatCurve
// Size: 0x88 (Inherited: 0x00)
struct FExplicitFloatCurve {
	struct FRuntimeFloatCurve Curve; // 0x00(0x88)
};

// ScriptStruct ShooterGame.ProjectileTuning
// Size: 0x28 (Inherited: 0x00)
struct FProjectileTuning {
	struct AProjectile* ProjectileFired; // 0x00(0x08)
	float SpeedScale; // 0x08(0x04)
	int32_t ProjectilesPerShot; // 0x0c(0x04)
	struct TArray<struct FVector2D> MultiProjectileOffsets; // 0x10(0x10)
	bool bRandomlyRotateProjectileOffsets; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct ShooterGame.ShopPurchasableModelList
// Size: 0x10 (Inherited: 0x00)
struct FShopPurchasableModelList {
	struct TArray<struct UShopPurchasableModel*> PurchasableModels; // 0x00(0x10)
};

// ScriptStruct ShooterGame.BurstPacketLossSettings
// Size: 0x2c (Inherited: 0x00)
struct FBurstPacketLossSettings {
	bool bSimulateBurstLoss; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float NextStartTime; // 0x04(0x04)
	float NextDurationMS; // 0x08(0x04)
	float NextLossPercentage; // 0x0c(0x04)
	bool bIsActive; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FNormalDistributionParameters DurationMs; // 0x14(0x08)
	struct FNormalDistributionParameters PeriodSeconds; // 0x1c(0x08)
	struct FNormalDistributionParameters LossPercentage; // 0x24(0x08)
};

// ScriptStruct ShooterGame.NetworkDegradationSettings
// Size: 0x3c (Inherited: 0x00)
struct FNetworkDegradationSettings {
	bool bEnabled; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float LagMean; // 0x04(0x04)
	float LagVariance; // 0x08(0x04)
	float BaselinePacketLoss; // 0x0c(0x04)
	struct FBurstPacketLossSettings BurstLoss; // 0x10(0x2c)
};

// ScriptStruct ShooterGame.NamedNetworkPresets
// Size: 0x88 (Inherited: 0x00)
struct FNamedNetworkPresets {
	struct FString Name; // 0x00(0x10)
	struct FNetworkDegradationSettings Mean; // 0x10(0x3c)
	struct FNetworkDegradationSettings StdDev; // 0x4c(0x3c)
};

// ScriptStruct ShooterGame.CurrentNetworkSimulationSettings
// Size: 0x18 (Inherited: 0x00)
struct FCurrentNetworkSimulationSettings {
	struct FString PresetName; // 0x00(0x10)
	bool bEnabled; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.DegradedNetworkSimulationPresets
// Size: 0x10 (Inherited: 0x00)
struct FDegradedNetworkSimulationPresets {
	struct TArray<struct FNamedNetworkPresets> Presets; // 0x00(0x10)
};

// ScriptStruct ShooterGame.SkeletalPoseSnapshot
// Size: 0x28 (Inherited: 0x00)
struct FSkeletalPoseSnapshot {
	float Timestamp; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	uint64_t FrameCounter; // 0x08(0x08)
	bool bOnDemand; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FTransform> ComponentSpaceTransforms; // 0x18(0x10)
};

// ScriptStruct ShooterGame.SniperCrosshairMaterial
// Size: 0x50 (Inherited: 0x00)
struct FSniperCrosshairMaterial {
	struct UMaterialInterface* Material; // 0x00(0x08)
	struct FName DistortionParameterName; // 0x08(0x0c)
	char pad_14[0x4]; // 0x14(0x04)
	struct FVector2D DrawExtents; // 0x18(0x10)
	enum class ESniperCrosshairMaterialType MaterialType; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	struct FName ColorParameterName; // 0x2c(0x0c)
	struct FName OpacityParameterName; // 0x38(0x0c)
	char pad_44[0x4]; // 0x44(0x04)
	struct UMaterialInstanceDynamic* MaterialInstanceDynamic; // 0x48(0x08)
};

// ScriptStruct ShooterGame.SocialExperienceTransition
// Size: 0x02 (Inherited: 0x00)
struct FSocialExperienceTransition {
	bool bIsOpen; // 0x00(0x01)
	enum class EAresSocialTransitionType TransitionType; // 0x01(0x01)
};

// ScriptStruct ShooterGame.SocialFolderExpansionTransition
// Size: 0x02 (Inherited: 0x00)
struct FSocialFolderExpansionTransition {
	bool bIsExpanded; // 0x00(0x01)
	enum class EAresSocialTransitionType TransitionType; // 0x01(0x01)
};

// ScriptStruct ShooterGame.TPPlayer
// Size: 0x50 (Inherited: 0x00)
struct FTPPlayer {
	struct FString Subject; // 0x00(0x10)
	struct FString TPNickname; // 0x10(0x10)
	struct FString DisplayName; // 0x20(0x10)
	struct FString GameName; // 0x30(0x10)
	struct FString TagLine; // 0x40(0x10)
};

// ScriptStruct ShooterGame.TPFriendList
// Size: 0x10 (Inherited: 0x00)
struct FTPFriendList {
	struct TArray<struct FTPPlayer> TPFriends; // 0x00(0x10)
};

// ScriptStruct ShooterGame.SendExternalInviteRequest
// Size: 0x30 (Inherited: 0x00)
struct FSendExternalInviteRequest {
	struct FString targetSubject; // 0x00(0x10)
	struct FString PartyId; // 0x10(0x10)
	struct FString SocialPlatform; // 0x20(0x10)
};

// ScriptStruct ShooterGame.SocialIntegrationErrorNotification
// Size: 0x10 (Inherited: 0x00)
struct FSocialIntegrationErrorNotification {
	struct FString ErrorCode; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ThirdPartyJoinIntentNotification
// Size: 0x10 (Inherited: 0x00)
struct FThirdPartyJoinIntentNotification {
	struct FString PartyId; // 0x00(0x10)
};

// ScriptStruct ShooterGame.SocialPageDefinition
// Size: 0x120 (Inherited: 0x00)
struct FSocialPageDefinition {
	struct FName ID; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UAresCommonActivatableWidget* PageWidgetClass; // 0x10(0x08)
	struct UAresCommonButton* TabButtonClass; // 0x18(0x08)
	struct FText TabButtonText; // 0x20(0x18)
	char pad_38[0x8]; // 0x38(0x08)
	struct FSlateBrush TabButtonIcon; // 0x40(0xd0)
	struct FName EnabledConfigName; // 0x110(0x0c)
	bool bEnabledConfigDefaultValue; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
};

// ScriptStruct ShooterGame.SocialPageInstance
// Size: 0x20 (Inherited: 0x00)
struct FSocialPageInstance {
	struct FName ID; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UAresCommonActivatableWidget* PageWidget; // 0x10(0x08)
	struct UAresCommonButton* TabButton; // 0x18(0x08)
};

// ScriptStruct ShooterGame.SocialPanelHovercardOffset
// Size: 0x0c (Inherited: 0x00)
struct FSocialPanelHovercardOffset {
	float Right; // 0x00(0x04)
	float Top; // 0x04(0x04)
	float Bottom; // 0x08(0x04)
};

// ScriptStruct ShooterGame.SocialPanelAppearance
// Size: 0xa0 (Inherited: 0x00)
struct FSocialPanelAppearance {
	float PanelTotalWidth; // 0x00(0x04)
	float PanelVisibleWidth; // 0x04(0x04)
	struct FMargin PanelClippingOffset; // 0x08(0x10)
	struct FMargin PanelScreenOffset; // 0x18(0x10)
	struct FMargin PanelShadowOffset; // 0x28(0x10)
	float TabBarSize; // 0x38(0x04)
	struct FMargin TabBarPadding; // 0x3c(0x10)
	struct FMargin PagePadding; // 0x4c(0x10)
	float HovercardContainerWidth; // 0x5c(0x04)
	struct FSocialPanelHovercardOffset HovercardContainerOffset; // 0x60(0x0c)
	float PanelBackgroundBlurStrength; // 0x6c(0x04)
	struct FLinearColor PanelBackgroundShadowColor; // 0x70(0x10)
	struct FLinearColor PanelBackgroundColor; // 0x80(0x10)
	struct FLinearColor TabBarBackgroundColor; // 0x90(0x10)
};

// ScriptStruct ShooterGame.SocialPanelPlayerAppearance
// Size: 0x03 (Inherited: 0x00)
struct FSocialPanelPlayerAppearance {
	enum class ESocialPanelPlayerSecondaryDetail SecondaryDetail; // 0x00(0x01)
	bool bShowPartyIndicator; // 0x01(0x01)
	bool bShowVoiceIndicator; // 0x02(0x01)
};

// ScriptStruct ShooterGame.SpawnActorInfo
// Size: 0x80 (Inherited: 0x00)
struct FSpawnActorInfo {
	struct FGameFeatureSubclass ActorClass; // 0x00(0x18)
	struct AActor* ActorType; // 0x18(0x08)
	struct FTransform Offset; // 0x20(0x60)
};

// ScriptStruct ShooterGame.SpawnPointDataAdditionalStats
// Size: 0x80 (Inherited: 0x00)
struct FSpawnPointDataAdditionalStats {
	int32_t NumAliveCharacters; // 0x00(0x04)
	float LookAheadMultiplier; // 0x04(0x04)
	struct TMap<int32_t, int32_t> NumSpawnsPerVisibilityScore; // 0x08(0x50)
	int32_t NumStaleSpawnPoints; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct TArray<float> ConsideredSpawnPointScores; // 0x60(0x10)
	struct TArray<float> ConsideredSpawnPointEngageDistanceScores; // 0x70(0x10)
};

// ScriptStruct ShooterGame.SpawnPointDebugData
// Size: 0xf8 (Inherited: 0x00)
struct FSpawnPointDebugData {
	struct FSpawnPointData SpawnPointData; // 0x00(0x78)
	struct FVector SpawnPointLocation; // 0x78(0x18)
	float HalfHeight; // 0x90(0x04)
	float Radius; // 0x94(0x04)
	struct FRotator Rotation; // 0x98(0x18)
	bool bInitialSpawnPoint; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct FString SpawnPointActorName; // 0xb8(0x10)
	float FFATeamScore; // 0xc8(0x04)
	int32_t FFATeamNumVisibleEnemyCharacters; // 0xcc(0x04)
	float FFATeamEngageDistanceScore; // 0xd0(0x04)
	bool FFATeamSpawnPointDataStale; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	float AttackerTeamScore; // 0xd8(0x04)
	int32_t AttackerTeamNumVisibleEnemyCharacters; // 0xdc(0x04)
	float AttackerTeamEngageDistanceScore; // 0xe0(0x04)
	bool AttackerTeamSpawnPointDataStale; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	float DefenderTeamScore; // 0xe8(0x04)
	int32_t DefenderTeamNumVisibleEnemyCharacters; // 0xec(0x04)
	float DefenderTeamEngageDistanceScore; // 0xf0(0x04)
	bool DefenderTeamSpawnPointDataStale; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
};

// ScriptStruct ShooterGame.SprayLoadoutID
// Size: 0x28 (Inherited: 0x00)
struct FSprayLoadoutID {
	int32_t SlotIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct USprayDataAsset* SprayData; // 0x08(0x08)
	struct FGuid SprayLevelAssetID; // 0x10(0x10)
	struct AAresSpray* Spray; // 0x20(0x08)
};

// ScriptStruct ShooterGame.StabilityVariable
// Size: 0x7c8 (Inherited: 0x00)
struct FStabilityVariable {
	struct FRuntimeFloatCurve FiringCurve; // 0x00(0x88)
	struct FRuntimeFloatCurve MovementCurves[0x6]; // 0x88(0x330)
	struct FRuntimeFloatCurve TaggingOverrideCurves[0x6]; // 0x3b8(0x330)
	float StabilityStateMultipliers[0x6]; // 0x6e8(0x18)
	float ADSStabilityMultipliers[0x6]; // 0x700(0x18)
	float ADSStabilityAddends[0x6]; // 0x718(0x18)
	struct FRuntimeFloatCurve CrouchingOrInZoomStabilityStateModifier; // 0x730(0x88)
	char pad_7B8[0x10]; // 0x7b8(0x10)
};

// ScriptStruct ShooterGame.StabilityInterpolationVariable
// Size: 0x14 (Inherited: 0x00)
struct FStabilityInterpolationVariable {
	float StartValue; // 0x00(0x04)
	float TargetValue; // 0x04(0x04)
	float InterpolationTimeRemaining; // 0x08(0x04)
	float InterpolationDuration; // 0x0c(0x04)
	enum class EStabilityInterpolationType InterpolationType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct ShooterGame.StabilityInterpolation
// Size: 0x64 (Inherited: 0x00)
struct FStabilityInterpolation {
	struct FStabilityInterpolationVariable InterpolationVariables[0x5]; // 0x00(0x64)
};

// ScriptStruct ShooterGame.YawDirectionManipulator
// Size: 0x2c (Inherited: 0x00)
struct FYawDirectionManipulator {
	float BaseYawSwitchChance; // 0x00(0x04)
	float YawSwitchStabilityMultipliers[0x6]; // 0x04(0x18)
	enum class EStabilityInterpolationType YawSwitchChanceIncreaseInterpolationType; // 0x1c(0x01)
	enum class EStabilityInterpolationType YawSwitchChanceRecoveryInterpolationType; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	float TimeToSwitchYaw; // 0x20(0x04)
	enum class EStabilityInterpolationType YawSwitchOverInterpolationType; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	float ProtectedBulletCount; // 0x28(0x04)
};

// ScriptStruct ShooterGame.StabilityFiringValues
// Size: 0x10 (Inherited: 0x00)
struct FStabilityFiringValues {
	float StabilityIndex; // 0x00(0x04)
	float Error; // 0x04(0x04)
	float PitchRecoil; // 0x08(0x04)
	float YawRecoil; // 0x0c(0x04)
};

// ScriptStruct ShooterGame.FixedRateDecayForStability
// Size: 0xa0 (Inherited: 0x00)
struct FFixedRateDecayForStability {
	struct FRuntimeFloatCurve DecayRateAtStability; // 0x00(0x88)
	float AdditionalDecayRate; // 0x88(0x04)
	enum class EDecayBehaviorBelowDesired IncreaseBehaviorWhenNotFiring; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	float IncreaseRate; // 0x90(0x04)
	float CurrentValue; // 0x94(0x04)
	float CurrentDecayStartValue; // 0x98(0x04)
	float CurrentDecayStartTime; // 0x9c(0x04)
};

// ScriptStruct ShooterGame.ErrorValuePercents
// Size: 0x0c (Inherited: 0x00)
struct FErrorValuePercents {
	float FiringErrorPercent; // 0x00(0x04)
	float MovementErrorPercent; // 0x04(0x04)
	float TotalErrorPercent; // 0x08(0x04)
};

// ScriptStruct ShooterGame.RecoilValuePercents
// Size: 0x08 (Inherited: 0x00)
struct FRecoilValuePercents {
	float PitchPercent; // 0x00(0x04)
	float YawPercent; // 0x04(0x04)
};

// ScriptStruct ShooterGame.StabilityValuePercents
// Size: 0x14 (Inherited: 0x00)
struct FStabilityValuePercents {
	struct FErrorValuePercents Error; // 0x00(0x0c)
	struct FRecoilValuePercents Recoil; // 0x0c(0x08)
};

// ScriptStruct ShooterGame.CameraFollowTuning
// Size: 0x118 (Inherited: 0x00)
struct FCameraFollowTuning {
	float PitchRecoilFollowPercent; // 0x00(0x04)
	float YawRecoilFollowPercent; // 0x04(0x04)
	struct FRuntimeFloatCurve PitchFollowPercentCurve; // 0x08(0x88)
	struct FRuntimeFloatCurve YawFollowPercentCurve; // 0x90(0x88)
};

// ScriptStruct ShooterGame.AdsCameraPopTuning
// Size: 0x08 (Inherited: 0x00)
struct FAdsCameraPopTuning {
	float WeaponPitchCameraPopPercent; // 0x00(0x04)
	float WeaponYawCameraPopPercent; // 0x04(0x04)
};

// ScriptStruct ShooterGame.AdsCameraShakeTuning
// Size: 0x08 (Inherited: 0x00)
struct FAdsCameraShakeTuning {
	float RotationCameraShakePercent; // 0x00(0x04)
	float TranslationCameraShakePercent; // 0x04(0x04)
};

// ScriptStruct ShooterGame.CameraPopTuning
// Size: 0x120 (Inherited: 0x00)
struct FCameraPopTuning {
	struct FRuntimeFloatCurve PitchPopCurve; // 0x00(0x88)
	struct FRuntimeFloatCurve YawPopCurve; // 0x88(0x88)
	float PitchMinPop; // 0x110(0x04)
	float PitchMaxPop; // 0x114(0x04)
	float YawMinPop; // 0x118(0x04)
	float YawMaxPop; // 0x11c(0x04)
};

// ScriptStruct ShooterGame.CameraTuning
// Size: 0x250 (Inherited: 0x00)
struct FCameraTuning {
	struct FCameraFollowTuning CameraFollowTuning; // 0x00(0x118)
	struct FCameraPopTuning CameraPopTuning; // 0x118(0x120)
	struct FAdsCameraPopTuning AdsCameraPopTuning; // 0x238(0x08)
	struct FAdsCameraShakeTuning AdsCameraShakeTuning; // 0x240(0x08)
	float AdsForwardOffset; // 0x248(0x04)
	bool bAdsAnimationEnabled; // 0x24c(0x01)
	bool bAdsCrosshairFollowsRecoil; // 0x24d(0x01)
	char pad_24E[0x2]; // 0x24e(0x02)
};

// ScriptStruct ShooterGame.MultiStateEffectDefinition
// Size: 0x50 (Inherited: 0x00)
struct FMultiStateEffectDefinition {
	struct FScriptStateEffectInfo EffectInfo; // 0x00(0x50)
};

// ScriptStruct ShooterGame.MultiStateEffectRequest
// Size: 0x0c (Inherited: 0x00)
struct FMultiStateEffectRequest {
	struct FName EffectName; // 0x00(0x0c)
};

// ScriptStruct ShooterGame.ActiveScriptStateEffect
// Size: 0x30 (Inherited: 0x00)
struct FActiveScriptStateEffect {
	struct FEffectID EffectID; // 0x00(0x20)
	enum class EMovementSync MovementSync; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct UEffectManagerComponent* TargetEffectManager; // 0x28(0x08)
};

// ScriptStruct ShooterGame.StateMetadata
// Size: 0x04 (Inherited: 0x00)
struct FStateMetadata {
	float TimeForNextTick; // 0x00(0x04)
};

// ScriptStruct ShooterGame.StateContext
// Size: 0x18 (Inherited: 0x00)
struct FStateContext {
	struct UStateComponent* CurrentState; // 0x00(0x08)
	struct UStateTransitionContext* TransitionContext; // 0x08(0x08)
	float AuthStartWorldTime; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.StateMachineDebugHistoryEntry
// Size: 0x30 (Inherited: 0x00)
struct FStateMachineDebugHistoryEntry {
	int32_t Index; // 0x00(0x04)
	float NetTimestamp; // 0x04(0x04)
	float RealtimeTimestamp; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UStateComponent* NewState; // 0x10(0x08)
	struct FString ContextName; // 0x18(0x10)
	enum class EStateMachineDebugEntryMatchState MatchState; // 0x28(0x01)
	bool bWasLastStateBeforeDisagreement; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
};

// ScriptStruct ShooterGame.StateTransition
// Size: 0x20 (Inherited: 0x00)
struct FStateTransition {
	bool bIsSet; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct UStateComponent* NextState; // 0x08(0x08)
	struct UStateTransitionContext* TransitionContext; // 0x10(0x08)
	float DeltaTimeConsumed; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.RevealInfo
// Size: 0x08 (Inherited: 0x00)
struct FRevealInfo {
	bool bInRevealRange; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float RangeChangeTimestamp; // 0x04(0x04)
};

// ScriptStruct ShooterGame.StealthStateTimeStampPair
// Size: 0x08 (Inherited: 0x00)
struct FStealthStateTimeStampPair {
	enum class EStealthState StealthState; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float Timestamp; // 0x04(0x04)
};

// ScriptStruct ShooterGame.CharacterStealthData
// Size: 0x68 (Inherited: 0x00)
struct FCharacterStealthData {
	struct TSet<struct UPrimitiveComponent*> OverlappedRangeColliders; // 0x00(0x50)
	struct TArray<struct FStealthStateTimeStampPair> StealthStateTimeLine; // 0x50(0x10)
	struct FTimerHandle DelayHandle; // 0x60(0x08)
};

// ScriptStruct ShooterGame.EnemyStealthTracker
// Size: 0x50 (Inherited: 0x00)
struct FEnemyStealthTracker {
	struct TMap<struct AShooterCharacter*, struct FCharacterStealthData> TrackedEnemies; // 0x00(0x50)
};

// ScriptStruct ShooterGame.OwnedEntitlement
// Size: 0x48 (Inherited: 0x00)
struct FOwnedEntitlement {
	struct FGuid EntitlementTypeID; // 0x00(0x10)
	enum class EAresContentType TypeID; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	struct FGuid ServiceId; // 0x14(0x10)
	struct FGuid InstanceId; // 0x24(0x10)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FTierEntitlement> Tiers; // 0x38(0x10)
};

// ScriptStruct ShooterGame.TierEntitlement
// Size: 0x18 (Inherited: 0x00)
struct FTierEntitlement {
	struct FString TierName; // 0x00(0x10)
	int64_t TierNumber; // 0x10(0x08)
};

// ScriptStruct ShooterGame.EntitlementTypeInfo
// Size: 0xd0 (Inherited: 0x00)
struct FEntitlementTypeInfo {
	enum class EAresContentType AresContentType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGuid ItemTypeUUID; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct TSet<struct FOwnedEntitlement> OwnedEntitlements; // 0x18(0x50)
	struct TSet<struct FGuid> OwnedItems; // 0x68(0x50)
	bool bInitialized; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FMulticastInlineDelegate OnChangeDelegate; // 0xc0(0x10)
};

// ScriptStruct ShooterGame.StoreOfferReward
// Size: 0x30 (Inherited: 0x00)
struct FStoreOfferReward {
	struct FGuid ItemTypeID; // 0x00(0x10)
	struct FGuid ItemId; // 0x10(0x10)
	int32_t Quantity; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct URewardModel* RewardModel; // 0x28(0x08)
};

// ScriptStruct ShooterGame.PluginStorefrontBundleModels
// Size: 0x10 (Inherited: 0x00)
struct FPluginStorefrontBundleModels {
	struct TArray<struct UPluginStorefrontBundleModel*> PluginStorefrontBundleModels; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PlatformOfferPrice
// Size: 0x28 (Inherited: 0x00)
struct FPlatformOfferPrice {
	float Price; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString CurrencyCode; // 0x08(0x10)
	struct FString FormattedPrice; // 0x18(0x10)
};

// ScriptStruct ShooterGame.SubCurrencyLimit
// Size: 0x18 (Inherited: 0x00)
struct FSubCurrencyLimit {
	int32_t Amount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString LimitType; // 0x08(0x10)
};

// ScriptStruct ShooterGame.CurrencyLimits
// Size: 0x50 (Inherited: 0x00)
struct FCurrencyLimits {
	struct TMap<struct FGuid, struct FSubCurrencyLimit> Limits; // 0x00(0x50)
};

// ScriptStruct ShooterGame.GetWalletResponse
// Size: 0xa0 (Inherited: 0x00)
struct FGetWalletResponse {
	struct TMap<struct FGuid, int32_t> Balances; // 0x00(0x50)
	struct TMap<struct FGuid, struct FCurrencyLimits> CurrencyLimits; // 0x50(0x50)
};

// ScriptStruct ShooterGame.QueryWalletRequest
// Size: 0x04 (Inherited: 0x00)
struct FQueryWalletRequest {
	int32_t QueryType; // 0x00(0x04)
};

// ScriptStruct ShooterGame.CreateOrderRequest
// Size: 0x100 (Inherited: 0x00)
struct FCreateOrderRequest {
	struct FGuid XID; // 0x00(0x10)
	struct FGuid OfferId; // 0x10(0x10)
	struct TMap<struct FGuid, int32_t> PurchasePrice; // 0x20(0x50)
	struct FString IDToken; // 0x70(0x10)
	struct FOrderMetadata MetaData; // 0x80(0x80)
};

// ScriptStruct ShooterGame.RevealNightMarketOffersRequest
// Size: 0x10 (Inherited: 0x00)
struct FRevealNightMarketOffersRequest {
	struct TArray<struct FGuid> RevealedOfferIDs; // 0x00(0x10)
};

// ScriptStruct ShooterGame.CreateBundleOrderRequest
// Size: 0x100 (Inherited: 0x00)
struct FCreateBundleOrderRequest {
	struct FGuid XID; // 0x00(0x10)
	struct TMap<struct FGuid, int32_t> ExpectedCosts; // 0x10(0x50)
	struct TArray<struct FEntitlementReward> ExpectedEntitlementRewards; // 0x60(0x10)
	struct TArray<struct FWalletReward> ExpectedWalletRewards; // 0x70(0x10)
	struct FOrderMetadata MetaData; // 0x80(0x80)
};

// ScriptStruct ShooterGame.ItemProgressionDTO
// Size: 0x18 (Inherited: 0x00)
struct FItemProgressionDTO {
	struct FGuid ItemProgressionDefinitionID; // 0x00(0x10)
	uint32_t CurrentTier; // 0x10(0x04)
	uint32_t NewTier; // 0x14(0x04)
};

// ScriptStruct ShooterGame.JuiceCraftRewards
// Size: 0x38 (Inherited: 0x00)
struct FJuiceCraftRewards {
	struct FItemProgressionDTO ExpectedProgression; // 0x00(0x18)
	struct TArray<struct FEntitlementReward> ExpectedEntitlementRewards; // 0x18(0x10)
	struct TArray<struct FWalletReward> ExpectedWalletRewards; // 0x28(0x10)
};

// ScriptStruct ShooterGame.CreateJuiceOrderRequest
// Size: 0x120 (Inherited: 0x00)
struct FCreateJuiceOrderRequest {
	char JuiceOrderType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGuid XID; // 0x04(0x10)
	char pad_14[0x4]; // 0x14(0x04)
	struct FOrderMetadata MetaData; // 0x18(0x80)
	struct FJuiceCraftRewards ExpectedRewards; // 0x98(0x38)
	struct TMap<struct FGuid, int32_t> ExpectedCosts; // 0xd0(0x50)
};

// ScriptStruct ShooterGame.OpenJuiceBoxRequest
// Size: 0xa8 (Inherited: 0x00)
struct FOpenJuiceBoxRequest {
	struct FGuid XID; // 0x00(0x10)
	struct FGuid JuiceBoxID; // 0x10(0x10)
	int32_t OpenQuantity; // 0x20(0x04)
	int32_t ExpectedInInventory; // 0x24(0x04)
	struct FOrderMetadata MetaData; // 0x28(0x80)
};

// ScriptStruct ShooterGame.GetStorefrontRequest
// Size: 0x10 (Inherited: 0x00)
struct FGetStorefrontRequest {
	struct FString IDToken; // 0x00(0x10)
};

// ScriptStruct ShooterGame.StorefrontBundleItem
// Size: 0x48 (Inherited: 0x00)
struct FStorefrontBundleItem {
	struct FEntitlementReward Item; // 0x00(0x28)
	int32_t BasePrice; // 0x28(0x04)
	struct FGuid CurrencyID; // 0x2c(0x10)
	float DiscountPercent; // 0x3c(0x04)
	int32_t DiscountedPrice; // 0x40(0x04)
	bool IsPromoItem; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
};

// ScriptStruct ShooterGame.StorefrontBundleItemOffer
// Size: 0x70 (Inherited: 0x00)
struct FStorefrontBundleItemOffer {
	struct FGuid BundleItemOfferID; // 0x00(0x10)
	struct UStoreOffer* Offer; // 0x10(0x08)
	float DiscountPercent; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TMap<struct FGuid, int32_t> DiscountedCost; // 0x20(0x50)
};

// ScriptStruct ShooterGame.StorefrontBundle
// Size: 0x100 (Inherited: 0x00)
struct FStorefrontBundle {
	struct FGuid ID; // 0x00(0x10)
	struct FGuid DataAssetID; // 0x10(0x10)
	struct FGuid CurrencyID; // 0x20(0x10)
	struct TArray<struct FStorefrontBundleItem> Items; // 0x30(0x10)
	struct TArray<struct FStorefrontBundleItemOffer> ItemOffers; // 0x40(0x10)
	struct TMap<struct FGuid, int32_t> TotalBaseCost; // 0x50(0x50)
	struct TMap<struct FGuid, int32_t> TotalDiscountedCost; // 0xa0(0x50)
	float TotalDiscountPercent; // 0xf0(0x04)
	int32_t DurationRemainingInSeconds; // 0xf4(0x04)
	bool WholeSaleOnly; // 0xf8(0x01)
	enum class EGiftingType IsGiftable; // 0xf9(0x01)
	char pad_FA[0x6]; // 0xfa(0x06)
};

// ScriptStruct ShooterGame.BundleLayout
// Size: 0x118 (Inherited: 0x00)
struct FBundleLayout {
	struct FStorefrontBundle Bundle; // 0x00(0x100)
	struct TArray<struct FStorefrontBundle> Bundles; // 0x100(0x10)
	int32_t BundleRemainingDurationInSeconds; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
};

// ScriptStruct ShooterGame.SkinsPanelLayout
// Size: 0x18 (Inherited: 0x00)
struct FSkinsPanelLayout {
	struct TArray<struct UStoreOffer*> SingleItemStoreOffers; // 0x00(0x10)
	int32_t SingleItemOffersRemainingDurationInSeconds; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.AccessoryStoreOfferDTO
// Size: 0x18 (Inherited: 0x00)
struct FAccessoryStoreOfferDTO {
	struct UStoreOffer* Offer; // 0x00(0x08)
	struct FGuid ContractID; // 0x08(0x10)
};

// ScriptStruct ShooterGame.AccessoryStorefront
// Size: 0x28 (Inherited: 0x00)
struct FAccessoryStorefront {
	struct TArray<struct FAccessoryStoreOfferDTO> AccessoryStoreOffers; // 0x00(0x10)
	int32_t AccessoryStoreRemainingDurationInSeconds; // 0x10(0x04)
	struct FGuid StorefrontID; // 0x14(0x10)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct ShooterGame.BonusStoreOfferDTO
// Size: 0x78 (Inherited: 0x00)
struct FBonusStoreOfferDTO {
	struct FGuid BonusOfferID; // 0x00(0x10)
	struct UStoreOffer* Offer; // 0x10(0x08)
	int32_t DiscountPercent; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
	struct TMap<struct FGuid, int32_t> DiscountCosts; // 0x20(0x50)
	bool IsSeen; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct ShooterGame.BonusStoreStorefront
// Size: 0x18 (Inherited: 0x00)
struct FBonusStoreStorefront {
	struct TArray<struct FBonusStoreOfferDTO> BonusStoreOffers; // 0x00(0x10)
	int32_t BonusStoreRemainingDurationInSeconds; // 0x10(0x04)
	int32_t BonusStoreSecondsSinceItStarted; // 0x14(0x04)
};

// ScriptStruct ShooterGame.JuiceBoxOffer
// Size: 0x4c (Inherited: 0x00)
struct FJuiceBoxOffer {
	struct FGuid JuiceBoxOfferID; // 0x00(0x10)
	struct FGuid StorefrontItemId; // 0x10(0x10)
	struct FGuid JuiceBoxID; // 0x20(0x10)
	int32_t Amount; // 0x30(0x04)
	int32_t BonusAmount; // 0x34(0x04)
	struct FGuid PurchaseCurrency; // 0x38(0x10)
	int32_t PurchaseCost; // 0x48(0x04)
};

// ScriptStruct ShooterGame.JuiceBoxStorefront
// Size: 0x18 (Inherited: 0x00)
struct FJuiceBoxStorefront {
	struct TArray<struct FJuiceBoxOffer> Offers; // 0x00(0x10)
	bool IsEligibleForJuice; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.UpgradeCurrencyOfferResponse
// Size: 0x30 (Inherited: 0x00)
struct FUpgradeCurrencyOfferResponse {
	struct FGuid OfferId; // 0x00(0x10)
	struct FGuid StorefrontItemId; // 0x10(0x10)
	struct UStoreOffer* Offer; // 0x20(0x08)
	float DiscountedPercent; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ShooterGame.UpgradeCurrencyStorefront
// Size: 0x10 (Inherited: 0x00)
struct FUpgradeCurrencyStorefront {
	struct TArray<struct FUpgradeCurrencyOfferResponse> UpgradeCurrencyOffers; // 0x00(0x10)
};

// ScriptStruct ShooterGame.AgentStoreOffer
// Size: 0x20 (Inherited: 0x00)
struct FAgentStoreOffer {
	struct FGuid AgentID; // 0x00(0x10)
	struct TArray<struct UStoreOffer*> StoreOffers; // 0x10(0x10)
};

// ScriptStruct ShooterGame.AgentStore
// Size: 0x30 (Inherited: 0x00)
struct FAgentStore {
	struct TArray<struct FAgentStoreOffer> AgentStoreOffers; // 0x00(0x10)
	struct FGuid CurrentFeaturedAgent; // 0x10(0x10)
	struct FGuid NextFeaturedAgent; // 0x20(0x10)
};

// ScriptStruct ShooterGame.AgentStorefront
// Size: 0x30 (Inherited: 0x00)
struct FAgentStorefront {
	struct FAgentStore AgentStore; // 0x00(0x30)
};

// ScriptStruct ShooterGame.PluginStoreOffers
// Size: 0x10 (Inherited: 0x00)
struct FPluginStoreOffers {
	struct TArray<struct FPluginStoreOffer> StoreOffers; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PluginStorefront
// Size: 0x20 (Inherited: 0x00)
struct FPluginStorefront {
	struct FGuid PluginID; // 0x00(0x10)
	struct FPluginStoreOffers PluginOffers; // 0x10(0x10)
};

// ScriptStruct ShooterGame.GetStorefrontResponseV3
// Size: 0x1b0 (Inherited: 0x00)
struct FGetStorefrontResponseV3 {
	struct FBundleLayout FeaturedBundle; // 0x00(0x118)
	struct FSkinsPanelLayout SkinsPanelLayout; // 0x118(0x18)
	struct FBonusStoreStorefront BonusStore; // 0x130(0x18)
	struct FAccessoryStorefront AccessoryStore; // 0x148(0x28)
	struct FJuiceBoxStorefront JuiceBoxStore; // 0x170(0x18)
	struct FUpgradeCurrencyStorefront UpgradeCurrencyStore; // 0x188(0x10)
	struct TArray<struct FPluginStorefront> PluginStores; // 0x198(0x10)
	int32_t SecondsUntilRefreshNeeded; // 0x1a8(0x04)
	char pad_1AC[0x4]; // 0x1ac(0x04)
};

// ScriptStruct ShooterGame.GetOffersResponse
// Size: 0x20 (Inherited: 0x00)
struct FGetOffersResponse {
	struct TArray<struct UStoreOffer*> Offers; // 0x00(0x10)
	struct TArray<struct FUpgradeCurrencyOfferResponse> UpgradeCurrencyOffers; // 0x10(0x10)
};

// ScriptStruct ShooterGame.StoreEntitlement
// Size: 0x40 (Inherited: 0x00)
struct FStoreEntitlement {
	struct FGuid TypeID; // 0x00(0x10)
	struct FGuid ItemId; // 0x10(0x10)
	struct FGuid InstanceId; // 0x20(0x10)
	struct TArray<struct FTierEntitlement> Tiers; // 0x30(0x10)
};

// ScriptStruct ShooterGame.GetEntitlementsResponse
// Size: 0x20 (Inherited: 0x00)
struct FGetEntitlementsResponse {
	struct FGuid ItemTypeID; // 0x00(0x10)
	struct TArray<struct FStoreEntitlement> Entitlements; // 0x10(0x10)
};

// ScriptStruct ShooterGame.GetAllEntitlementsResponse
// Size: 0x10 (Inherited: 0x00)
struct FGetAllEntitlementsResponse {
	struct TArray<struct FGetEntitlementsResponse> EntitlementsByTypes; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ConnexRMSPayload
// Size: 0x38 (Inherited: 0x00)
struct FConnexRMSPayload {
	struct FGuid Puuid; // 0x00(0x10)
	struct FGuid SubscriptionId; // 0x10(0x10)
	bool Active; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString identityProvider; // 0x28(0x10)
};

// ScriptStruct ShooterGame.OrderRMSPayload
// Size: 0x40 (Inherited: 0x00)
struct FOrderRMSPayload {
	struct FString eventTypeId; // 0x00(0x10)
	struct FString OrderID; // 0x10(0x10)
	struct FString EventType; // 0x20(0x10)
	struct FString Status; // 0x30(0x10)
};

// ScriptStruct ShooterGame.EntitlementsRMSPayload
// Size: 0x50 (Inherited: 0x00)
struct FEntitlementsRMSPayload {
	struct FString ItemId; // 0x00(0x10)
	struct FString entitlementId; // 0x10(0x10)
	struct FString resourceOperation; // 0x20(0x10)
	struct FString EntitlementTypeID; // 0x30(0x10)
	struct FString ItemTypeID; // 0x40(0x10)
};

// ScriptStruct ShooterGame.CatalogRMSPayload
// Size: 0x40 (Inherited: 0x00)
struct FCatalogRMSPayload {
	struct FString GiftID; // 0x00(0x10)
	struct FString StoreID; // 0x10(0x10)
	struct FString CatalogEntryID; // 0x20(0x10)
	struct FString GiftState; // 0x30(0x10)
};

// ScriptStruct ShooterGame.WalletCurrency
// Size: 0x58 (Inherited: 0x00)
struct FWalletCurrency {
	int32_t Amount; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TMap<struct FString, int32_t> subCurrencies; // 0x08(0x50)
};

// ScriptStruct ShooterGame.GiftingMailboxMessagePayload
// Size: 0x10 (Inherited: 0x00)
struct FGiftingMailboxMessagePayload {
	struct FGuid GiftID; // 0x00(0x10)
};

// ScriptStruct ShooterGame.VCGiftingMailboxMessagePayload
// Size: 0x48 (Inherited: 0x00)
struct FVCGiftingMailboxMessagePayload {
	struct FGuid PurchaserID; // 0x00(0x10)
	struct FString GiftID; // 0x10(0x10)
	int32_t GiftAmount; // 0x20(0x04)
	struct FGuid CurrencyID; // 0x24(0x10)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString GiftMessage; // 0x38(0x10)
};

// ScriptStruct ShooterGame.GiftOfferAssociation
// Size: 0x34 (Inherited: 0x00)
struct FGiftOfferAssociation {
	enum class EStoreOfferType OfferType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FGuid OfferId; // 0x04(0x10)
	struct FGuid OfferAssociationID; // 0x14(0x10)
	struct FGuid OfferParentID; // 0x24(0x10)
};

// ScriptStruct ShooterGame.PaymentInfo
// Size: 0x18 (Inherited: 0x00)
struct FPaymentInfo {
	struct FGuid CurrencyID; // 0x00(0x10)
	int64_t Delta; // 0x10(0x08)
};

// ScriptStruct ShooterGame.ExecuteGiftRequest
// Size: 0x88 (Inherited: 0x00)
struct FExecuteGiftRequest {
	struct FGuid RecipientId; // 0x00(0x10)
	struct FGiftOfferAssociation GiftOfferAssociation; // 0x10(0x34)
	char pad_44[0x4]; // 0x44(0x04)
	struct TArray<struct FString> PaymentOptionsKeys; // 0x48(0x10)
	struct TArray<struct FPaymentInfo> ExpectedCosts; // 0x58(0x10)
	struct TArray<struct FEntitlementReward> ExpectedRewards; // 0x68(0x10)
	struct FGuid IdempotencyID; // 0x78(0x10)
};

// ScriptStruct ShooterGame.AcceptGiftRequest
// Size: 0x10 (Inherited: 0x00)
struct FAcceptGiftRequest {
	struct FGuid GiftID; // 0x00(0x10)
};

// ScriptStruct ShooterGame.DeclineGiftRequest
// Size: 0x10 (Inherited: 0x00)
struct FDeclineGiftRequest {
	struct FGuid GiftID; // 0x00(0x10)
};

// ScriptStruct ShooterGame.GetGiftRecipientsResponse
// Size: 0x20 (Inherited: 0x00)
struct FGetGiftRecipientsResponse {
	struct TArray<struct FString> ValidRecipientIDs; // 0x00(0x10)
	struct TArray<struct FString> InvalidRecipientIDs; // 0x10(0x10)
};

// ScriptStruct ShooterGame.GetGiftPurchaserEligibilityResponse
// Size: 0x18 (Inherited: 0x00)
struct FGetGiftPurchaserEligibilityResponse {
	struct TArray<struct FString> FailureReasons; // 0x00(0x10)
	enum class EGiftingEligibleStatus GiftingEligibleStatus; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.CheckGiftRecipientEligibilityRequest
// Size: 0x10 (Inherited: 0x00)
struct FCheckGiftRecipientEligibilityRequest {
	struct TArray<struct FGiftOfferAssociation> CatalogQueryItems; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ItemOwnershipInfo
// Size: 0x28 (Inherited: 0x00)
struct FItemOwnershipInfo {
	struct FGuid ItemId; // 0x00(0x10)
	struct FGuid ItemTypeID; // 0x10(0x10)
	int32_t OwnedQuantity; // 0x20(0x04)
	int32_t MaxQuantity; // 0x24(0x04)
};

// ScriptStruct ShooterGame.GiftRecipientOffer
// Size: 0x70 (Inherited: 0x00)
struct FGiftRecipientOffer {
	struct FGuid CatalogEntryID; // 0x00(0x10)
	struct TMap<struct FGuid, struct FPluginStoreOffer> CurrencyIDToStoreOffer; // 0x10(0x50)
	struct TArray<struct FItemOwnershipInfo> RecipientOwnership; // 0x60(0x10)
};

// ScriptStruct ShooterGame.CheckGiftRecipientEligibilityResponse
// Size: 0x10 (Inherited: 0x00)
struct FCheckGiftRecipientEligibilityResponse {
	struct TArray<struct FGiftRecipientOffer> RecipientOffers; // 0x00(0x10)
};

// ScriptStruct ShooterGame.StoreInteractionEvent
// Size: 0x80 (Inherited: 0x00)
struct FStoreInteractionEvent {
	struct FString Subject; // 0x00(0x10)
	struct FString InstanceId; // 0x10(0x10)
	struct FString ClientSessionID; // 0x20(0x10)
	struct FString OfferType; // 0x30(0x10)
	struct FString EventType; // 0x40(0x10)
	struct FString OfferId; // 0x50(0x10)
	struct FString ItemId; // 0x60(0x10)
	struct FString StorefrontID; // 0x70(0x10)
};

// ScriptStruct ShooterGame.ChromaInspectEvent
// Size: 0x70 (Inherited: 0x00)
struct FChromaInspectEvent {
	struct FString Subject; // 0x00(0x10)
	struct FString InstanceId; // 0x10(0x10)
	struct FString ClientSessionID; // 0x20(0x10)
	struct FString OfferType; // 0x30(0x10)
	struct FString OfferId; // 0x40(0x10)
	struct FString ItemId; // 0x50(0x10)
	struct FString ChromaID; // 0x60(0x10)
};

// ScriptStruct ShooterGame.PluginStorefrontBundleViewModels
// Size: 0x10 (Inherited: 0x00)
struct FPluginStorefrontBundleViewModels {
	struct TArray<struct UBundleViewModel*> PluginStorefrontBundleViewModels; // 0x00(0x10)
};

// ScriptStruct ShooterGame.PlayerOutcomeOfRound
// Size: 0x38 (Inherited: 0x00)
struct FPlayerOutcomeOfRound {
	struct FVector DeathLocation; // 0x00(0x18)
	struct FRoundTimestamp DeathTime; // 0x18(0x18)
	struct AShooterPlayerState* PlayerState; // 0x30(0x08)
};

// ScriptStruct ShooterGame.StrategicOutcomeOfRound
// Size: 0x40 (Inherited: 0x00)
struct FStrategicOutcomeOfRound {
	int32_t RoundNumber; // 0x00(0x04)
	enum class EAresRoundOutcome RoundOutcome; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	struct UBaseTeamComponent* RoundVictor; // 0x08(0x08)
	struct TArray<struct FPlayerOutcomeOfRound> PlayerDeaths; // 0x10(0x10)
	struct TArray<struct AShooterPlayerState*> RemainingRedPlayers; // 0x20(0x10)
	struct TArray<struct AShooterPlayerState*> RemainingBluePlayers; // 0x30(0x10)
};

// ScriptStruct ShooterGame.StreamedVideoFile
// Size: 0x28 (Inherited: 0x00)
struct FStreamedVideoFile {
	enum class EStreamedVideoQuality Quality; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Culture; // 0x08(0x10)
	struct FFilePath FilePath; // 0x18(0x10)
};

// ScriptStruct ShooterGame.DebuffRevealedSources
// Size: 0x50 (Inherited: 0x00)
struct FDebuffRevealedSources {
	struct TSet<struct TWeakObjectPtr<struct AActor>> Sources; // 0x00(0x50)
};

// ScriptStruct ShooterGame.QueuedMessage
// Size: 0x58 (Inherited: 0x00)
struct FQueuedMessage {
	struct TArray<uint64_t> Data; // 0x00(0x10)
	struct UScriptStruct* StaticStructDef; // 0x10(0x08)
	enum class EQueuedMessageType Type; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FString EventID; // 0x20(0x10)
	struct FString LogMessage; // 0x30(0x10)
	struct FString MetricName; // 0x40(0x10)
	int32_t MetricValue; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
};

// ScriptStruct ShooterGame.SampleLog
// Size: 0x38 (Inherited: 0x00)
struct FSampleLog {
	struct FString ID; // 0x00(0x10)
	struct FString SampledTelemetry; // 0x10(0x10)
	bool WasSampled; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FString Version; // 0x28(0x10)
};

// ScriptStruct ShooterGame.GameEventCommsMute
// Size: 0x68 (Inherited: 0x00)
struct FGameEventCommsMute {
	struct FString ReporterPuuid; // 0x00(0x10)
	struct FString OffenderPuuid; // 0x10(0x10)
	struct FString MatchID; // 0x20(0x10)
	struct FString CommsMethod; // 0x30(0x10)
	struct FString MuteMethod; // 0x40(0x10)
	bool MuteValue; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FString ReporterOffenderAllianceType; // 0x58(0x10)
};

// ScriptStruct ShooterGame.GameEventCommsMuteInGame
// Size: 0xb0 (Inherited: 0x00)
struct FGameEventCommsMuteInGame {
	struct FString ReporterPuuid; // 0x00(0x10)
	struct FString OffenderPuuid; // 0x10(0x10)
	struct FString MatchID; // 0x20(0x10)
	struct FString CommsMethod; // 0x30(0x10)
	struct FString MuteMethod; // 0x40(0x10)
	bool MuteValue; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
	struct FString ReporterOffenderAllianceType; // 0x58(0x10)
	struct FGameEventRoundInfo RoundInfo; // 0x68(0x28)
	struct FString ReporterTeamName; // 0x90(0x10)
	struct FString OffenderTeamName; // 0xa0(0x10)
};

// ScriptStruct ShooterGame.CertPinFailureEvent
// Size: 0x38 (Inherited: 0x00)
struct FCertPinFailureEvent {
	struct FString Subject; // 0x00(0x10)
	struct FString Domain; // 0x10(0x10)
	int32_t NumberOfCertificates; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct TArray<struct FString> Certificates; // 0x28(0x10)
};

// ScriptStruct ShooterGame.TeleportLocationCheckRing
// Size: 0x08 (Inherited: 0x00)
struct FTeleportLocationCheckRing {
	float RingRadius; // 0x00(0x04)
	int32_t NumPoints; // 0x04(0x04)
};

// ScriptStruct ShooterGame.RSOTokenRequestBody
// Size: 0x20 (Inherited: 0x00)
struct FRSOTokenRequestBody {
	struct FString GrantType; // 0x00(0x10)
	struct TArray<struct FString> Scopes; // 0x10(0x10)
};

// ScriptStruct ShooterGame.AtlasCreateAccountBody
// Size: 0x40 (Inherited: 0x00)
struct FAtlasCreateAccountBody {
	struct FString UserName; // 0x00(0x10)
	struct FString Password; // 0x10(0x10)
	struct FString EmailAddress; // 0x20(0x10)
	struct FString BirthDate; // 0x30(0x10)
};

// ScriptStruct ShooterGame.UserAccountInfo
// Size: 0x70 (Inherited: 0x00)
struct FUserAccountInfo {
	struct FGuid Puuid; // 0x00(0x10)
	struct FString UserName; // 0x10(0x10)
	struct FString GameName; // 0x20(0x10)
	struct FString TagLine; // 0x30(0x10)
	struct FString Region; // 0x40(0x10)
	struct FString GasAccountId; // 0x50(0x10)
	struct FString CreatedDatetime; // 0x60(0x10)
};

// ScriptStruct ShooterGame.GeneratedAccount
// Size: 0x80 (Inherited: 0x00)
struct FGeneratedAccount {
	struct FUserAccountInfo AccountInfo; // 0x00(0x70)
	struct FString GeneratedPassword; // 0x70(0x10)
};

// ScriptStruct ShooterGame.InitializeAliasRequest
// Size: 0x20 (Inherited: 0x00)
struct FInitializeAliasRequest {
	struct FString GameName; // 0x00(0x10)
	struct FString TagLine; // 0x10(0x10)
};

// ScriptStruct ShooterGame.TestViewModelStruct
// Size: 0x18 (Inherited: 0x00)
struct FTestViewModelStruct {
	struct FString TestName; // 0x00(0x10)
	int32_t TestInt; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct ShooterGame.TextChatDraftTextInfo
// Size: 0x18 (Inherited: 0x00)
struct FTextChatDraftTextInfo {
	struct FText DraftText; // 0x00(0x18)
};

// ScriptStruct ShooterGame.MUCInfo
// Size: 0x30 (Inherited: 0x00)
struct FMUCInfo {
	struct FString Cid; // 0x00(0x10)
	enum class ETextChatRoomType RoomType; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString Type; // 0x18(0x10)
	bool MutedRestriction; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
};

// ScriptStruct ShooterGame.MUCInfos
// Size: 0x10 (Inherited: 0x00)
struct FMUCInfos {
	struct TArray<struct FMUCInfo> Conversations; // 0x00(0x10)
};

// ScriptStruct ShooterGame.MuteRequest
// Size: 0x18 (Inherited: 0x00)
struct FMuteRequest {
	struct FString Puuid; // 0x00(0x10)
	bool Muted; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.MUCMessages
// Size: 0x10 (Inherited: 0x00)
struct FMUCMessages {
	struct TArray<struct FMUCMessage> Messages; // 0x00(0x10)
};

// ScriptStruct ShooterGame.MucMessageRequest
// Size: 0x38 (Inherited: 0x00)
struct FMucMessageRequest {
	struct FString Cid; // 0x00(0x10)
	struct FText Message; // 0x10(0x18)
	struct FString Type; // 0x28(0x10)
};

// ScriptStruct ShooterGame.MUCParticipant
// Size: 0x60 (Inherited: 0x00)
struct FMUCParticipant {
	struct FString Cid; // 0x00(0x10)
	struct FString Pid; // 0x10(0x10)
	struct FString game_name; // 0x20(0x10)
	struct FString game_tag; // 0x30(0x10)
	struct FText Name; // 0x40(0x18)
	bool Muted; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
};

// ScriptStruct ShooterGame.MUCParticipants
// Size: 0x10 (Inherited: 0x00)
struct FMUCParticipants {
	struct TArray<struct FMUCParticipant> Participants; // 0x00(0x10)
};

// ScriptStruct ShooterGame.JoinMucRequest
// Size: 0x50 (Inherited: 0x00)
struct FJoinMucRequest {
	struct FString ID; // 0x00(0x10)
	struct FString Domain; // 0x10(0x10)
	struct FString TargetRegion; // 0x20(0x10)
	struct FString Password; // 0x30(0x10)
	struct FString Type; // 0x40(0x10)
};

// ScriptStruct ShooterGame.LeaveMucRequest
// Size: 0x10 (Inherited: 0x00)
struct FLeaveMucRequest {
	struct FString Cid; // 0x00(0x10)
};

// ScriptStruct ShooterGame.MarkMessageReadRequest
// Size: 0x10 (Inherited: 0x00)
struct FMarkMessageReadRequest {
	struct FString Cid; // 0x00(0x10)
};

// ScriptStruct ShooterGame.SetActiveConversationRequest
// Size: 0x10 (Inherited: 0x00)
struct FSetActiveConversationRequest {
	struct FString Cid; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ChatSettings
// Size: 0x01 (Inherited: 0x00)
struct FChatSettings {
	bool ChatFilterDisabled; // 0x00(0x01)
};

// ScriptStruct ShooterGame.PatchRiotChatAccountChatSettings
// Size: 0x01 (Inherited: 0x00)
struct FPatchRiotChatAccountChatSettings {
	bool ChatFilterDisabled; // 0x00(0x01)
};

// ScriptStruct ShooterGame.SyncPoint
// Size: 0x48 (Inherited: 0x00)
struct FSyncPoint {
	struct FNetworkedMovementTimestamp SnapshotTime; // 0x00(0x10)
	struct FChronometer Chronometer; // 0x10(0x30)
	bool bInState; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct ShooterGame.TimedEvent
// Size: 0x1c (Inherited: 0x00)
struct FTimedEvent {
	float TimeSeconds; // 0x00(0x04)
	struct FDelegate EventToBroadcast; // 0x04(0x14)
	enum class EAresTimerDirection TimeDirection; // 0x18(0x01)
	bool bIsMarkedToRemove; // 0x19(0x01)
	char pad_1A[0x2]; // 0x1a(0x02)
};

// ScriptStruct ShooterGame.ToggleInputSetting
// Size: 0x28 (Inherited: 0x00)
struct FToggleInputSetting {
	struct URespondToEventStateComponent* StateToToggle; // 0x00(0x08)
	struct UStateComponent* StateToTransitionTo; // 0x08(0x08)
	bool bCanRespondOutOfGameplay; // 0x10(0x01)
	bool bCanRespondWhileSuppressed; // 0x11(0x01)
	bool bCanRespondInSpawnZones; // 0x12(0x01)
	char pad_13[0x5]; // 0x13(0x05)
	struct TArray<enum class EAresEquippableInput> InputsToCancelToggle; // 0x18(0x10)
};

// ScriptStruct ShooterGame.TotemLoadoutID
// Size: 0x20 (Inherited: 0x00)
struct FTotemLoadoutID {
	int32_t SlotIndex; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UTotemDataAsset* TotemData; // 0x08(0x08)
	struct AAresItem* TotemItem; // 0x10(0x08)
	struct AAresItem* TotemClass; // 0x18(0x08)
};

// ScriptStruct ShooterGame.MatchupGamePlacementPair
// Size: 0x08 (Inherited: 0x00)
struct FMatchupGamePlacementPair {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ShooterGame.MatchupGameScorePair
// Size: 0x08 (Inherited: 0x00)
struct FMatchupGameScorePair {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ShooterGame.MatchupGameMetadata
// Size: 0x50 (Inherited: 0x00)
struct FMatchupGameMetadata {
	struct TMap<struct FString, int32_t> RosterScores; // 0x00(0x50)
};

// ScriptStruct ShooterGame.TournamentStatusUpdatedRMSNotification
// Size: 0x10 (Inherited: 0x00)
struct FTournamentStatusUpdatedRMSNotification {
	struct FString tournamentid; // 0x00(0x10)
};

// ScriptStruct ShooterGame.TournamentMatchupStatusUpdatedRMSNotification
// Size: 0x40 (Inherited: 0x00)
struct FTournamentMatchupStatusUpdatedRMSNotification {
	struct FString tournamentid; // 0x00(0x10)
	struct FString MatchupID; // 0x10(0x10)
	struct FString NewStatus; // 0x20(0x10)
	struct FString OldStatus; // 0x30(0x10)
};

// ScriptStruct ShooterGame.TournamentMatchupGameStatusUpdatedRMSNotification
// Size: 0x48 (Inherited: 0x00)
struct FTournamentMatchupGameStatusUpdatedRMSNotification {
	struct FString tournamentid; // 0x00(0x10)
	struct FString MatchupID; // 0x10(0x10)
	struct FString GameID; // 0x20(0x10)
	struct FString NewStatus; // 0x30(0x10)
	int32_t GameIndex; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

// ScriptStruct ShooterGame.TournamentMatchupScheduledStartTimeUpdatedRMSNotification
// Size: 0x28 (Inherited: 0x00)
struct FTournamentMatchupScheduledStartTimeUpdatedRMSNotification {
	struct FString tournamentid; // 0x00(0x10)
	struct FString MatchupID; // 0x10(0x10)
	int64_t ScheduledStartTime; // 0x20(0x08)
};

// ScriptStruct ShooterGame.TournamentMatchupGameScheduledStartTimeUpdatedRMSNotification
// Size: 0x30 (Inherited: 0x00)
struct FTournamentMatchupGameScheduledStartTimeUpdatedRMSNotification {
	struct FString tournamentid; // 0x00(0x10)
	struct FString MatchupID; // 0x10(0x10)
	int64_t ScheduledStartDateInSeconds; // 0x20(0x08)
	int32_t GameIndex; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct ShooterGame.TournamentMatchScoreUpdateRMSNotification
// Size: 0x90 (Inherited: 0x00)
struct FTournamentMatchScoreUpdateRMSNotification {
	struct FString tournamentid; // 0x00(0x10)
	struct FString MatchupID; // 0x10(0x10)
	struct FTournamentMatchupScores GamesScore; // 0x20(0x70)
};

// ScriptStruct ShooterGame.TournamentsTeamColorData
// Size: 0x40 (Inherited: 0x08)
struct FTournamentsTeamColorData : FTableRowBase {
	struct FText ColorName; // 0x08(0x18)
	struct FGuid Guid; // 0x20(0x10)
	struct FLinearColor Color; // 0x30(0x10)
};

// ScriptStruct ShooterGame.TracerEffects
// Size: 0x08 (Inherited: 0x00)
struct FTracerEffects {
	struct AAresTracerInterface* Template; // 0x00(0x08)
};

// ScriptStruct ShooterGame.MissionsMapEntry
// Size: 0x10 (Inherited: 0x00)
struct FMissionsMapEntry {
	struct UMissionGameStateComponent* MissionStateComponent; // 0x00(0x08)
	struct AMission* MissionActor; // 0x08(0x08)
};

// ScriptStruct ShooterGame.TransformSnapshot
// Size: 0x80 (Inherited: 0x00)
struct FTransformSnapshot {
	float Timestamp; // 0x00(0x04)
	char pad_4[0xc]; // 0x04(0x0c)
	struct FTransform Transform; // 0x10(0x60)
	bool bWasTeleport; // 0x70(0x01)
	char pad_71[0xf]; // 0x71(0x0f)
};

// ScriptStruct ShooterGame.DestinationURL
// Size: 0x20 (Inherited: 0x00)
struct FDestinationURL {
	bool bValid; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Host; // 0x08(0x10)
	int32_t Port; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.LoadingScreenPlayer
// Size: 0x48 (Inherited: 0x00)
struct FLoadingScreenPlayer {
	struct FString Subject; // 0x00(0x10)
	bool bMe; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UCharacterDataAsset* Character; // 0x18(0x08)
	struct UPlayerCardDataAsset* PlayerCard; // 0x20(0x08)
	struct UPlayerTitleDataAsset* PlayerTitle; // 0x28(0x08)
	int32_t AccountLevel; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct ULevelBorderDataAsset* LevelBorder; // 0x38(0x08)
	bool bHideAccountLevel; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct ShooterGame.LoadingScreenTeam
// Size: 0x20 (Inherited: 0x00)
struct FLoadingScreenTeam {
	struct FName TeamID; // 0x00(0x0c)
	enum class EAresTeam Team; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	struct TArray<struct FLoadingScreenPlayer> Players; // 0x10(0x10)
};

// ScriptStruct ShooterGame.UISystemErrorInfo
// Size: 0x48 (Inherited: 0x00)
struct FUISystemErrorInfo {
	char pad_0[0x48]; // 0x00(0x48)
};

// ScriptStruct ShooterGame.UINavigationRequest
// Size: 0x68 (Inherited: 0x00)
struct FUINavigationRequest {
	struct TMap<struct FName, struct FWildcard> Parameters; // 0x00(0x50)
	char pad_50[0x18]; // 0x50(0x18)
};

// ScriptStruct ShooterGame.UIModalRequest
// Size: 0x90 (Inherited: 0x68)
struct FUIModalRequest : FUINavigationRequest {
	char pad_68[0x18]; // 0x68(0x18)
	struct TArray<struct FGameplayTag> Contexts; // 0x80(0x10)
};

// ScriptStruct ShooterGame.UrlHistoryEntry
// Size: 0xc0 (Inherited: 0x00)
struct FUrlHistoryEntry {
	struct FAresMenuUrl BackUrl; // 0x00(0x60)
	struct FAresMenuUrl StartingUrl; // 0x60(0x60)
};

// ScriptStruct ShooterGame.NavigationBarData
// Size: 0x18 (Inherited: 0x00)
struct FNavigationBarData {
	struct TArray<struct FRGICommonNavBarDetails> ButtonDetails; // 0x00(0x10)
	bool bIsEnabled; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.UINavigationTabListData
// Size: 0xe8 (Inherited: 0x00)
struct FUINavigationTabListData {
	struct FName LandingScreen; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct UAresCommonTabListEntryBase*> TabListEntries; // 0x10(0x10)
	struct FName SelectedTabEntry; // 0x20(0x0c)
	bool bIsEnabled; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	struct FString TelemetryTarget; // 0x30(0x10)
	bool bIsTelemetryReady; // 0x40(0x01)
	char pad_41[0xa7]; // 0x41(0xa7)
};

// ScriptStruct ShooterGame.UIActionEvent
// Size: 0x70 (Inherited: 0x00)
struct FUIActionEvent {
	struct FString InstanceId; // 0x00(0x10)
	struct FString ClientSessionID; // 0x10(0x10)
	struct FString Subject; // 0x20(0x10)
	struct FString EventPageName; // 0x30(0x10)
	struct FString ActionType; // 0x40(0x10)
	struct FString ActionTarget; // 0x50(0x10)
	struct FString InputType; // 0x60(0x10)
};

// ScriptStruct ShooterGame.AresUIActionEvent
// Size: 0x70 (Inherited: 0x00)
struct FAresUIActionEvent {
	struct FString InstanceId; // 0x00(0x10)
	struct FString ClientSessionID; // 0x10(0x10)
	struct FString Subject; // 0x20(0x10)
	struct FString EventPageName; // 0x30(0x10)
	struct FString ActionType; // 0x40(0x10)
	struct FString ActionTarget; // 0x50(0x10)
	struct FString InputType; // 0x60(0x10)
};

// ScriptStruct ShooterGame.UITelemetryEventRegistry
// Size: 0x68 (Inherited: 0x00)
struct FUITelemetryEventRegistry {
	char pad_0[0x10]; // 0x00(0x10)
	bool bSendTelemetry; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TMap<enum class EUITelemetryActionType, struct FUITelemetryEventTarget> TelemetryEventTargets; // 0x18(0x50)
};

// ScriptStruct ShooterGame.AmmoStoreHudInfo
// Size: 0x08 (Inherited: 0x00)
struct FAmmoStoreHudInfo {
	int32_t Ammo; // 0x00(0x04)
	int32_t MaxAmmo; // 0x04(0x04)
};

// ScriptStruct ShooterGame.AmmoHudInfo
// Size: 0x10 (Inherited: 0x00)
struct FAmmoHudInfo {
	struct FAmmoStoreHudInfo Magazine; // 0x00(0x08)
	struct FAmmoStoreHudInfo Reserve; // 0x08(0x08)
};

// ScriptStruct ShooterGame.AresConditionalInputActionData
// Size: 0xa0 (Inherited: 0x00)
struct FAresConditionalInputActionData {
	struct FAresConditionalInputAction ConditionalInputAction; // 0x00(0x28)
	struct FText OverrideConditionalActionDisplayName; // 0x28(0x18)
	bool bConditionActive; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t Priority; // 0x44(0x04)
	bool bShouldOverrideInputActionIcon; // 0x48(0x01)
	bool bDisplayInActionBar; // 0x49(0x01)
	char pad_4A[0x6]; // 0x4a(0x06)
	struct FUITelemetryEventTarget TelemetryEvent; // 0x50(0x10)
	char pad_60[0x40]; // 0x60(0x40)
};

// ScriptStruct ShooterGame.AresSingleSelectDisplayInfo
// Size: 0x28 (Inherited: 0x00)
struct FAresSingleSelectDisplayInfo {
	struct FText SelectionTitle; // 0x00(0x18)
	struct TArray<struct FText> OPTIONS; // 0x18(0x10)
};

// ScriptStruct ShooterGame.UIDependentState
// Size: 0x18 (Inherited: 0x00)
struct FUIDependentState {
	struct FString StateName; // 0x00(0x10)
	enum class EAresWidgetDependentState DependentState; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct ShooterGame.SliderRange
// Size: 0x10 (Inherited: 0x00)
struct FSliderRange {
	bool bRange; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FirstValue; // 0x04(0x04)
	float SecondValue; // 0x08(0x04)
	enum class EAresWidgetDependentState DependentState; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct ShooterGame.AuthUsableUser
// Size: 0x08 (Inherited: 0x00)
struct FAuthUsableUser {
	struct UInteractableUserComponent* User; // 0x00(0x08)
};

// ScriptStruct ShooterGame.UsableTuning
// Size: 0x60 (Inherited: 0x00)
struct FUsableTuning {
	bool UseTuning; // 0x00(0x01)
	bool bIsAimRelevant; // 0x01(0x01)
	bool bAllowMultipleUsers; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FGameplayAttribute UseTimeModifierAttribute; // 0x08(0x38)
	bool bDistanceLimitedUsable; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float UseDistance; // 0x44(0x04)
	bool bMustBeFullyInside; // 0x48(0x01)
	bool bRequireLineOfSight; // 0x49(0x01)
	enum class ECollisionChannel LineOfSightChannel; // 0x4a(0x01)
	bool bUseComplexForLineOfSight; // 0x4b(0x01)
	bool bClampCameraWhileUsing; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	float PitchClampWhileUsing; // 0x50(0x04)
	float YawClampWhileUsing; // 0x54(0x04)
	float AdditionalScoringPitch; // 0x58(0x04)
	float AdditionalScoringYaw; // 0x5c(0x04)
};

// ScriptStruct ShooterGame.UsableTargetingStrategies
// Size: 0xc8 (Inherited: 0x00)
struct FUsableTargetingStrategies {
	struct FUsableTuning LookBased; // 0x00(0x60)
	struct FUsableTuning RangeBased; // 0x60(0x60)
	float ScoringBonus; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
};

// ScriptStruct ShooterGame.UsablePlatformSetting
// Size: 0x190 (Inherited: 0x00)
struct FUsablePlatformSetting {
	struct FUsableTargetingStrategies PC; // 0x00(0xc8)
	struct FUsableTargetingStrategies Console; // 0xc8(0xc8)
};

// ScriptStruct ShooterGame.ValueDisagreementTimerTickFunction
// Size: 0x30 (Inherited: 0x28)
struct FValueDisagreementTimerTickFunction : FTickFunction {
	char pad_28[0x8]; // 0x28(0x08)
};

// ScriptStruct ShooterGame.VanguardErrorEvent
// Size: 0x58 (Inherited: 0x00)
struct FVanguardErrorEvent {
	struct FString InstanceId; // 0x00(0x10)
	struct FString ClientSessionID; // 0x10(0x10)
	struct FString Subject; // 0x20(0x10)
	struct FString Error; // 0x30(0x10)
	int32_t ErrorCode; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
	struct FString VanguardVersion; // 0x48(0x10)
};

// ScriptStruct ShooterGame.ViewTransformRecorderSnapshot
// Size: 0x38 (Inherited: 0x00)
struct FViewTransformRecorderSnapshot {
	struct FVector PawnLocation; // 0x00(0x18)
	struct FRotator ControlRotation; // 0x18(0x18)
	bool bDidTeleport; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	float NetTimestamp; // 0x34(0x04)
};

// ScriptStruct ShooterGame.VoiceMetricsTelemetryEvent
// Size: 0x80 (Inherited: 0x00)
struct FVoiceMetricsTelemetryEvent {
	struct FString Subject; // 0x00(0x10)
	struct FString MatchID; // 0x10(0x10)
	struct FString GameMode; // 0x20(0x10)
	int32_t RoundNumber; // 0x30(0x04)
	float TotalVoiceActivationDuration; // 0x34(0x04)
	int32_t TotalVoiceNumActivations; // 0x38(0x04)
	float TotalPartyPushToTalkDuration; // 0x3c(0x04)
	int32_t TotalPartyPushToTalkNumActivations; // 0x40(0x04)
	float TotalTeamPushToTalkDuration; // 0x44(0x04)
	int32_t TotalTeamPushToTalkNumActivations; // 0x48(0x04)
	float TotalPartyVoiceEnabledDuration; // 0x4c(0x04)
	int32_t TotalPartyVoiceEnabledNumActivations; // 0x50(0x04)
	float TotalTeamVoiceEnabledDuration; // 0x54(0x04)
	int32_t TotalTeamVoiceEnabledNumActivations; // 0x58(0x04)
	float TotalPartySpeakingToActiveDuration; // 0x5c(0x04)
	int32_t TotalPartySpeakingToNumActivations; // 0x60(0x04)
	float TotalTeamAndPartySpeakingToActiveDuration; // 0x64(0x04)
	int32_t TotalTeamAndPartySpeakingToNumActivations; // 0x68(0x04)
	float TotalSelfMuteDisabledDuration; // 0x6c(0x04)
	int32_t TotalSelfMuteDisabledNumActivations; // 0x70(0x04)
	float TotalClutchMuteDuration; // 0x74(0x04)
	int32_t TotalClutchMuteNumActivations; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
};

// ScriptStruct ShooterGame.VoteSlashCommandEntry
// Size: 0x10 (Inherited: 0x00)
struct FVoteSlashCommandEntry {
	struct AGameplayVote* VoteType; // 0x00(0x08)
	struct UGameplayVoteOptionComponent* OptionType; // 0x08(0x08)
};

// ScriptStruct ShooterGame.VoteQueue
// Size: 0x18 (Inherited: 0x08)
struct FVoteQueue : FAresTeamListEntry {
	struct TArray<struct AGameplayVote*> Queue; // 0x08(0x10)
};

// ScriptStruct ShooterGame.VoteRecord
// Size: 0x38 (Inherited: 0x00)
struct FVoteRecord {
	int32_t Round; // 0x00(0x04)
	float RemainingTime; // 0x04(0x04)
	int32_t VoteID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct AGameplayVote* Vote; // 0x10(0x08)
	struct AShooterPlayerState* Requester; // 0x18(0x08)
	struct UGameplayVoteOptionComponent* Result; // 0x20(0x08)
	struct TArray<struct AShooterPlayerState*> Participants; // 0x28(0x10)
};

// ScriptStruct ShooterGame.WallPenHitResult
// Size: 0x108 (Inherited: 0x00)
struct FWallPenHitResult {
	char pad_0[0x108]; // 0x00(0x108)
};

// ScriptStruct ShooterGame.EquippableInfo
// Size: 0x0c (Inherited: 0x00)
struct FEquippableInfo {
	bool Droppable; // 0x00(0x01)
	bool DestroyOnDrop; // 0x01(0x01)
	bool InfiniteReserveAmmo; // 0x02(0x01)
	char pad_3[0x1]; // 0x03(0x01)
	int32_t MaxReserveAmmo; // 0x04(0x04)
	float TimeToRespawn; // 0x08(0x04)
};

// ScriptStruct ShooterGame.WeaponModifiersTableRow
// Size: 0x20 (Inherited: 0x08)
struct FWeaponModifiersTableRow : FTableRowBase {
	struct AAresEquippable* WeaponClass; // 0x08(0x08)
	struct FEquippableInfo Modifiers; // 0x10(0x0c)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct ShooterGame.WeaponModifiersDataTableRow
// Size: 0x40 (Inherited: 0x08)
struct FWeaponModifiersDataTableRow : FTableRowBase {
	struct FSoftClassPath WeaponClass; // 0x08(0x28)
	struct FEquippableInfo Modifiers; // 0x30(0x0c)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct ShooterGame.WidgetAnimationSettings
// Size: 0x18 (Inherited: 0x00)
struct FWidgetAnimationSettings {
	float StartAtTime; // 0x00(0x04)
	float EndAtTime; // 0x04(0x04)
	int32_t NumLoopsToPlay; // 0x08(0x04)
	enum class EUMGSequencePlayMode PlayMode; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
	float PlaybackSpeed; // 0x10(0x04)
	bool bRestoreState; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
};

// ScriptStruct ShooterGame.WidgetLayoutSettingValueMap
// Size: 0x50 (Inherited: 0x00)
struct FWidgetLayoutSettingValueMap {
	struct TMap<enum class EWidgetLayoutSettingName, bool> SettingMap; // 0x00(0x50)
};

// ScriptStruct ShooterGame.WidgetLayout
// Size: 0x110 (Inherited: 0x00)
struct FWidgetLayout {
	struct FVector2D Position; // 0x00(0x10)
	float Scale; // 0x10(0x04)
	float Opacity; // 0x14(0x04)
	enum class EWidgetVisibilityState VisibilityState; // 0x18(0x01)
	bool AllowedForPreset; // 0x19(0x01)
	char pad_1A[0x6]; // 0x1a(0x06)
	struct TMap<enum class EWidgetLayoutSettingName, float> FloatSettings; // 0x20(0x50)
	struct TMap<enum class EWidgetLayoutSettingName, bool> BoolSettings; // 0x70(0x50)
	struct TMap<struct FString, struct FWidgetLayoutSettingValueMap> BoolSettingWeaponOverrides; // 0xc0(0x50)
};

// ScriptStruct ShooterGame.WidgetLayoutSettingOverrides
// Size: 0xa0 (Inherited: 0x00)
struct FWidgetLayoutSettingOverrides {
	struct TMap<enum class EWidgetLayoutSettingName, float> FloatSettings; // 0x00(0x50)
	struct TMap<enum class EWidgetLayoutSettingName, bool> BoolSettings; // 0x50(0x50)
};

// ScriptStruct ShooterGame.WidgetLayoutPreset
// Size: 0x58 (Inherited: 0x00)
struct FWidgetLayoutPreset {
	enum class EWidgetLayoutPresetType RootPresetIndex; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TMap<struct FString, struct FWidgetLayout> WidgetTagToLayoutMap; // 0x08(0x50)
};

// ScriptStruct ShooterGame.WidgetLayoutData
// Size: 0x50 (Inherited: 0x00)
struct FWidgetLayoutData {
	struct TMap<struct FString, struct FWidgetLayoutPreset> Layouts; // 0x00(0x50)
};

// ScriptStruct ShooterGame.WidgetPool
// Size: 0x10 (Inherited: 0x00)
struct FWidgetPool {
	struct TArray<struct UUserWidget*> AvailableWidgets; // 0x00(0x10)
};

// ScriptStruct ShooterGame.ZoomTransitionSettings
// Size: 0x14 (Inherited: 0x00)
struct FZoomTransitionSettings {
	float ZoomInInitialTimeDuration; // 0x00(0x04)
	float CosmeticZoomInTriggerPercent; // 0x04(0x04)
	float ZoomInSuccessiveTimeDuration; // 0x08(0x04)
	float ZoomOutTimeDuration; // 0x0c(0x04)
	float ZoomCooldownTimeDuration; // 0x10(0x04)
};

// ScriptStruct ShooterGame.ZoomTransitionDescription
// Size: 0x20 (Inherited: 0x00)
struct FZoomTransitionDescription {
	float SourceFov; // 0x00(0x04)
	float SourceFov1P; // 0x04(0x04)
	int32_t SourceZoomLevel; // 0x08(0x04)
	float TargetFov; // 0x0c(0x04)
	float TargetFov1P; // 0x10(0x04)
	int32_t TargetZoomLevel; // 0x14(0x04)
	float TotalTransitionTimeDuration; // 0x18(0x04)
	enum class EZoomCooldownOption CooldownOption; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
};

// ScriptStruct ShooterGame.ZoomTransition
// Size: 0x24 (Inherited: 0x00)
struct FZoomTransition {
	struct FZoomTransitionDescription TransitionDescription; // 0x00(0x20)
	enum class EZoomTransitionState TransitionState; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct ShooterGame.ZoomLevelInfo
// Size: 0x0c (Inherited: 0x00)
struct FZoomLevelInfo {
	float Multiplier; // 0x00(0x04)
	bool bUseDefaultFov1P; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
	float Fov1P; // 0x08(0x04)
};

// ScriptStruct ShooterGame.ZoomValidStates
// Size: 0x20 (Inherited: 0x00)
struct FZoomValidStates {
	struct TArray<struct UScriptStateComponent*> StateList; // 0x00(0x10)
	bool bInvalidStates; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct UScriptStateComponent* StateToTransitionTo; // 0x18(0x08)
};

// ScriptStruct ShooterGame.ZoomStateHistoryEntry
// Size: 0x20 (Inherited: 0x00)
struct FZoomStateHistoryEntry {
	struct FStateContext StateContext; // 0x00(0x18)
	enum class EStateMachineTransitionReason TransitionReason; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
};

// ScriptStruct ShooterGame.ZoomCorrectionHistoryEntry
// Size: 0x20 (Inherited: 0x00)
struct FZoomCorrectionHistoryEntry {
	float CorrectionTime; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct UStateComponent* PreviousState; // 0x08(0x08)
	struct UStateComponent* CorrectedState; // 0x10(0x08)
	float StartTimeOffset; // 0x18(0x04)
	char pad_1C[0x4]; // 0x1c(0x04)
};

