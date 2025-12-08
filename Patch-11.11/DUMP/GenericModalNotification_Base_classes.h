// WidgetBlueprintGeneratedClass GenericModalNotification_Base.GenericModalNotification_Base_C
// Size: 0x4d0 (Inherited: 0x320)
struct UGenericModalNotification_Base_C : UModalNotificationWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* Intro; // 0x328(0x08)
	struct FMulticastInlineDelegate OnConfirmationPressed; // 0x330(0x10)
	struct FMulticastInlineDelegate OnMiddlePressed; // 0x340(0x10)
	struct FMulticastInlineDelegate OnCancelPressed; // 0x350(0x10)
	struct FText ConfirmationButtonText; // 0x360(0x18)
	struct FText MiddleButtonText; // 0x378(0x18)
	struct FText CancelButtonText; // 0x390(0x18)
	struct FText MessageText; // 0x3a8(0x18)
	struct FText TitleText; // 0x3c0(0x18)
	bool ShowMiddleButton; // 0x3d8(0x01)
	bool ShowCancelButton; // 0x3d9(0x01)
	bool UsingCustomBody; // 0x3da(0x01)
	char pad_3DB[0x1]; // 0x3db(0x01)
	struct FLinearColor RedColor; // 0x3dc(0x10)
	struct FLinearColor GreenColor; // 0x3ec(0x10)
	struct FLinearColor GrayColor; // 0x3fc(0x10)
	struct FLinearColor LightRedColor; // 0x40c(0x10)
	struct FLinearColor DarkRedColor; // 0x41c(0x10)
	struct FLinearColor WhiteColor; // 0x42c(0x10)
	struct FLinearColor DarkBlueColor; // 0x43c(0x10)
	enum class ButtonColors ConfirmButtonColor; // 0x44c(0x01)
	enum class ButtonColors MiddleButtonColor; // 0x44d(0x01)
	enum class ButtonColors CancelButtonColor; // 0x44e(0x01)
	enum class TextColors TitleTextColor; // 0x44f(0x01)
	enum class FillColors FillColor; // 0x450(0x01)
	enum class TextColors MessageTextColor; // 0x451(0x01)
	bool ShowCloseButton; // 0x452(0x01)
	bool ShowLeftButton; // 0x453(0x01)
	char pad_454[0x4]; // 0x454(0x04)
	struct UImage* BoundBackgroundImage; // 0x458(0x08)
	struct UTextBlock* BoundTitle; // 0x460(0x08)
	struct UWidgetSwitcher* BoundBodySwitcher; // 0x468(0x08)
	struct UNamedSlot* BoundCustomBody; // 0x470(0x08)
	struct URichTextBlock* BoundMessage; // 0x478(0x08)
	struct USpacer* BoundCancelButtonSpacer; // 0x480(0x08)
	struct USharedButtonMaster_C* BoundLeftButton; // 0x488(0x08)
	struct USharedButtonMaster_C* BoundMiddleButton; // 0x490(0x08)
	struct USpacer* BoundMiddleButtonSpacer; // 0x498(0x08)
	struct USizeBox* BoundSizeBoxCancel; // 0x4a0(0x08)
	struct USharedButtonMaster_C* BoundRightButton; // 0x4a8(0x08)
	struct USharedBackButton_C* BoundSharedBackButton; // 0x4b0(0x08)
	struct USizeBox* BoundSizeBoxConfirmation; // 0x4b8(0x08)
	struct USizeBox* BoundSizeBoxMiddleButton; // 0x4c0(0x08)
	struct UVerticalBox* NewVar_1; // 0x4c8(0x08)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x19be2f0
	bool HandleBackRequest(); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Get Colors from Notification Type(enum class EAresNotificationType NotificationType, struct UModalNotificationColors_C*& Colors); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.Get Colors from Notification Type // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetColorsFromNotificationType(enum class EAresNotificationType NotificationType); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.SetColorsFromNotificationType // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetParamsFromNotificationConfig(struct UGenericNotification* NotificationConfig); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.SetParamsFromNotificationConfig // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetActionText(struct UNotificationAction* Action, struct FText Default Text, struct FText& Text); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.GetActionText // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void HandleLeftButtonClicked(); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.HandleLeftButtonClicked // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleBackButtonClicked(); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.HandleBackButtonClicked // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleRightButtonClicked(); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.HandleRightButtonClicked // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void HandleMiddleButtonClicked(); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.HandleMiddleButtonClicked // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Bind Widgets(struct UImage* BackgroundImage, struct UTextBlock* Title, struct UWidgetSwitcher* BodySwitcher, struct UNamedSlot* CustomBody, struct URichTextBlock* Message, struct USpacer* CancelButtonSpacer, struct USharedButtonMaster_C* LeftButton, struct USharedButtonMaster_C* MiddleButton, struct USpacer* MiddleButtonSpacer, struct USharedButtonMaster_C* RightButton, struct USharedBackButton_C* SharedBackButton, struct USizeBox* SizeBoxCancel, struct USizeBox* SizeBoxConfirmation, struct USizeBox* SizeBoxMiddleButton); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.Bind Widgets // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetLeftButtonVisibility(enum class ESlateVisibility Visible); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.SetLeftButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	enum class ESlateVisibility Get_SharedButtonLeft_Visibility(); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.Get_SharedButtonLeft_Visibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void GetIndividualFillColor(enum class FillColors FillColor, struct FLinearColor& Color); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.GetIndividualFillColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetFillColor(enum class FillColors FillColor); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.SetFillColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTitleColor(enum class TextColors Text Color); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.SetTitleColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetMessageColor(enum class TextColors TextColor); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.SetMessageColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetIndividualTextColor(enum class TextColors Text Color Enum, struct FLinearColor& Returned Color); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.GetIndividualTextColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetCloseButtonVisible(enum class ESlateVisibility Visible); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.SetCloseButtonVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	enum class ESlateVisibility Get_SharedButtonClose_Visibility(); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.Get_SharedButtonClose_Visibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetMiddleButtonText(struct FText Text); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.SetMiddleButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void GetIndividualButtonColor(enum class ButtonColors ButtonColorEnum, struct FSharedButtonStyle& ReturnedColor); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.GetIndividualButtonColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetButtonColors(); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.SetButtonColors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	enum class ESlateVisibility Get_SharedButtonMiddle_Visibility(); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.Get_SharedButtonMiddle_Visibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void SetMiddleButtonVisible(enum class ESlateVisibility Visible); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.SetMiddleButtonVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCancelButtonVisible(enum class ESlateVisibility Visible); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.SetCancelButtonVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetShowCustomBody(bool ShowCustomBody); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.SetShowCustomBody // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetCancelButtonText(struct FText Text); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.SetCancelButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetConfirmationButtonText(struct FText Text); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.SetConfirmationButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetTitleText(struct FText Text); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.SetTitleText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void SetMessageText(struct FText Text); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.SetMessageText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	enum class ESlateVisibility Get_SharedButtonCancel_Visibility(); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.Get_SharedButtonCancel_Visibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x19be2f0
	void Launch(bool InIsLaunched); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.Launch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void Construct(); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void Destruct(); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void OnSynchronizeProperties(); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__GenericModalNotification_Base_BoundLeftButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.BndEvt__GenericModalNotification_Base_BoundLeftButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__GenericModalNotification_Base_BoundMiddleButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.BndEvt__GenericModalNotification_Base_BoundMiddleButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__GenericModalNotification_Base_BoundRightButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.BndEvt__GenericModalNotification_Base_BoundRightButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void BndEvt__GenericModalNotification_Base_BoundSharedBackButton_K2Node_ComponentBoundEvent_7_OnBackRequested__DelegateSignature(); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.BndEvt__GenericModalNotification_Base_BoundSharedBackButton_K2Node_ComponentBoundEvent_7_OnBackRequested__DelegateSignature // (BlueprintEvent) // @ game+0x19be2f0
	void SetNotificationConfig(struct UGenericNotification* ModalNotification); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.SetNotificationConfig // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void ExecuteUbergraph_GenericModalNotification_Base(int32_t EntryPoint); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.ExecuteUbergraph_GenericModalNotification_Base // (Final|UbergraphFunction) // @ game+0x19be2f0
	void OnMiddlePressed__DelegateSignature(); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.OnMiddlePressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnCancelPressed__DelegateSignature(); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.OnCancelPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
	void OnConfirmationPressed__DelegateSignature(); // Function GenericModalNotification_Base.GenericModalNotification_Base_C.OnConfirmationPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x19be2f0
};

