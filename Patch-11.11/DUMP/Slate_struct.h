// Enum Slate.EVirtualKeyboardTrigger
enum class EVirtualKeyboardTrigger : uint8 {
	OnFocusByPointer = 0,
	OnAllFocusEvents = 1,
	EVirtualKeyboardTrigger_MAX = 2
};

// Enum Slate.EVirtualKeyboardDismissAction
enum class EVirtualKeyboardDismissAction : uint8 {
	TextChangeOnDismiss = 0,
	TextCommitOnAccept = 1,
	TextCommitOnDismiss = 2,
	EVirtualKeyboardDismissAction_MAX = 3
};

// Enum Slate.ESelectionMode
enum class ESelectionMode : uint8 {
	None = 0,
	Single = 1,
	SingleToggle = 2,
	Multi = 3,
	ESelectionMode_MAX = 4
};

// Enum Slate.ETableViewMode
enum class ETableViewMode : uint8 {
	List = 0,
	Tile = 1,
	Tree = 2,
	ETableViewMode_MAX = 3
};

// Enum Slate.EMultiBoxType
enum class EMultiBoxType : uint8 {
	MenuBar = 0,
	ToolBar = 1,
	VerticalToolBar = 2,
	SlimHorizontalToolBar = 3,
	UniformToolBar = 4,
	Menu = 5,
	ButtonRow = 6,
	SlimHorizontalUniformToolBar = 7,
	EMultiBoxType_MAX = 8
};

// Enum Slate.EMultiBlockType
enum class EMultiBlockType : uint8 {
	None = 0,
	ButtonRow = 1,
	EditableText = 2,
	Heading = 3,
	MenuEntry = 4,
	Separator = 5,
	ToolBarButton = 6,
	ToolBarComboButton = 7,
	Widget = 8,
	EMultiBlockType_MAX = 9
};

// Enum Slate.EDescendantScrollDestination
enum class EDescendantScrollDestination : uint8 {
	IntoView = 0,
	TopOrLeft = 1,
	Center = 2,
	BottomOrRight = 3,
	EDescendantScrollDestination_MAX = 4
};

// Enum Slate.EScrollWhenFocusChanges
enum class EScrollWhenFocusChanges : uint8 {
	NoScroll = 0,
	InstantScroll = 1,
	AnimatedScroll = 2,
	EScrollWhenFocusChanges_MAX = 3
};

// Enum Slate.ECustomizedToolMenuVisibility
enum class ECustomizedToolMenuVisibility : uint8 {
	None = 0,
	Visible = 1,
	Hidden = 2,
	ECustomizedToolMenuVisibility_MAX = 3
};

// Enum Slate.EUserInterfaceActionType
enum class EUserInterfaceActionType : uint8 {
	None = 0,
	Button = 1,
	ToggleButton = 2,
	RadioButton = 3,
	Check = 4,
	CollapsedButton = 5,
	EUserInterfaceActionType_MAX = 6
};

// Enum Slate.EMultipleKeyBindingIndex
enum class EMultipleKeyBindingIndex : uint8 {
	Primary = 0,
	Secondary = 1,
	NumChords = 2,
	EMultipleKeyBindingIndex_MAX = 3
};

// Enum Slate.ETextJustify
enum class ETextJustify : uint8 {
	Left = 0,
	Center = 1,
	Right = 2,
	InvariantLeft = 3,
	InvariantRight = 4,
	ETextJustify_MAX = 5
};

// Enum Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : uint8 {
	DefaultWrapping = 0,
	AllowPerCharacterWrapping = 1,
	ETextWrappingPolicy_MAX = 2
};

// Enum Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8 {
	Auto = 0,
	LeftToRight = 1,
	RightToLeft = 2,
	Culture = 3,
	ETextFlowDirection_MAX = 4
};

// Enum Slate.EStretchDirection
enum class EStretchDirection : uint8 {
	Both = 0,
	DownOnly = 1,
	UpOnly = 2,
	EStretchDirection_MAX = 3
};

// Enum Slate.EStretch
enum class EStretch : uint8 {
	None = 0,
	Fill = 1,
	ScaleToFit = 2,
	ScaleToFitX = 3,
	ScaleToFitY = 4,
	ScaleToFill = 5,
	ScaleBySafeZone = 6,
	UserSpecified = 7,
	UserSpecifiedWithClipping = 8,
	EStretch_MAX = 9
};

// Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8 {
	LeftToRight = 0,
	RightToLeft = 1,
	FillFromCenter = 2,
	FillFromCenterHorizontal = 3,
	FillFromCenterVertical = 4,
	TopToBottom = 5,
	BottomToTop = 6,
	EProgressBarFillType_MAX = 7
};

// Enum Slate.EProgressBarFillStyle
enum class EProgressBarFillStyle : uint8 {
	Mask = 0,
	Scale = 1,
	EProgressBarFillStyle_MAX = 2
};

// Enum Slate.EListItemAlignment
enum class EListItemAlignment : uint8 {
	EvenlyDistributed = 0,
	EvenlySize = 1,
	EvenlyWide = 2,
	LeftAligned = 3,
	RightAligned = 4,
	CenterAligned = 5,
	Fill = 6,
	EListItemAlignment_MAX = 7
};

// ScriptStruct Slate.VirtualKeyboardOptions
// Size: 0x01 (Inherited: 0x00)
struct FVirtualKeyboardOptions {
	bool bEnableAutocorrect; // 0x00(0x01)
};

// ScriptStruct Slate.InputChord
// Size: 0x28 (Inherited: 0x00)
struct FInputChord {
	struct FKey Key; // 0x00(0x20)
	char bShift : 1; // 0x20(0x01)
	char bCtrl : 1; // 0x20(0x01)
	char bAlt : 1; // 0x20(0x01)
	char bCmd : 1; // 0x20(0x01)
	char pad_20_4 : 4; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	char bGamepadShift : 1; // 0x24(0x01)
	char pad_24_1 : 7; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
};

// ScriptStruct Slate.Anchors
// Size: 0x20 (Inherited: 0x00)
struct FAnchors {
	struct FVector2D Minimum; // 0x00(0x10)
	struct FVector2D Maximum; // 0x10(0x10)
};

// ScriptStruct Slate.CharRange
// Size: 0x04 (Inherited: 0x00)
struct FCharRange {
	uint16_t First; // 0x00(0x02)
	uint16_t Last; // 0x02(0x02)
};

// ScriptStruct Slate.CharRangeList
// Size: 0x10 (Inherited: 0x00)
struct FCharRangeList {
	struct TArray<struct FCharRange> Ranges; // 0x00(0x10)
};

// ScriptStruct Slate.CustomizedToolMenuEntry
// Size: 0x04 (Inherited: 0x00)
struct FCustomizedToolMenuEntry {
	enum class ECustomizedToolMenuVisibility Visibility; // 0x00(0x04)
};

// ScriptStruct Slate.CustomizedToolMenuSection
// Size: 0x04 (Inherited: 0x00)
struct FCustomizedToolMenuSection {
	enum class ECustomizedToolMenuVisibility Visibility; // 0x00(0x04)
};

// ScriptStruct Slate.CustomizedToolMenuNameArray
// Size: 0x10 (Inherited: 0x00)
struct FCustomizedToolMenuNameArray {
	struct TArray<struct FName> Names; // 0x00(0x10)
};

// ScriptStruct Slate.CustomizedToolMenu
// Size: 0x208 (Inherited: 0x00)
struct FCustomizedToolMenu {
	struct FName Name; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct TMap<struct FName, struct FCustomizedToolMenuEntry> Entries; // 0x10(0x50)
	struct TMap<struct FName, struct FCustomizedToolMenuSection> Sections; // 0x60(0x50)
	struct TMap<struct FName, struct FCustomizedToolMenuNameArray> EntryOrder; // 0xb0(0x50)
	struct TArray<struct FName> SectionOrder; // 0x100(0x10)
	struct TArray<struct FName> SuppressExtenders; // 0x110(0x10)
	char pad_120[0xe8]; // 0x120(0xe8)
};

