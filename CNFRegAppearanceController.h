/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@class UIView, UIColor, UIImage, UIFont;

@interface CNFRegAppearanceController : NSObject  {
}

@property(readonly) int keyboardAppearance;
@property(readonly) UIColor * customBackgroundColor;
@property(readonly) UIColor * userInteractionColor;
@property(readonly) BOOL styleUsesCustomTableStyle;
@property(retain,readonly) UIColor * tableBackgroundColor;
@property(retain,readonly) UIColor * tableSectionBorderColor;
@property(retain,readonly) UIImage * tableSectionShadowImage;
@property(retain,readonly) UIColor * tableCellBackgroundColor;
@property(retain,readonly) UIColor * tableCellTextLabelColor;
@property(retain,readonly) UIColor * tableCellTextLabelBackgroundColor;
@property(retain,readonly) UIColor * tableCellDetailLabelColor;
@property(retain,readonly) UIColor * tableCellDetailLabelBackgroundColor;
@property(retain,readonly) UIImage * tableCellButtonImage;
@property(retain,readonly) UIImage * tableCellButtonImageSelected;
@property(retain,readonly) UIColor * tableCellEditableTextColor;
@property(retain,readonly) UIColor * tableCellEditableTextPlaceholderColor;
@property(retain,readonly) UIColor * tableCellEditableInsertionPointColor;
@property(retain,readonly) UIImage * tableCellEditableTextFieldClearButton;
@property(retain,readonly) UIImage * tableCellEditableTextFieldClearButtonPressed;
@property(readonly) BOOL styleUsesCustomAccessoryView;
@property(retain,readonly) UIView * tableCellCustomAccessoryViewDisclosureIndicator;
@property(retain,readonly) UIImage * tableCellCheckmarkImage;
@property(retain,readonly) UIImage * tableCellCheckmarkImageSelected;
@property(retain,readonly) UIImage * tableCellCheckmarkImageDisabled;
@property(readonly) BOOL styleUsesCustomSeparatorStyle;
@property(readonly) int tableSeparatorStyle;
@property(readonly) UIColor * tableSeparatorColor;
@property(readonly) UIColor * tableSeparatorTopShadowColor;
@property(readonly) UIColor * tableSeparatorBottomShadowColor;
@property(retain,readonly) UIColor * tableHeaderTextColor;
@property(retain,readonly) UIColor * tableHeaderTextColorSelected;
@property(retain,readonly) UIColor * tableHeaderTextShadowColor;
@property(readonly) struct CGSize { float x1; float x2; } tableHeaderTextShadowOffset;
@property(retain,readonly) UIFont * tableHeaderFont;
@property(retain,readonly) UIFont * tableFooterFont;
@property(retain,readonly) UIColor * tableFooterTextColor;
@property(readonly) int tableHeaderTextAlignment;
@property(readonly) int tableFooterTextAlignment;
@property(readonly) BOOL styleUsesCustomSearchResultsStyle;
@property(readonly) int searchResultsTableSeparatorStyle;
@property(readonly) UIColor * searchResultsTableSeparatorColor;
@property(readonly) UIColor * searchResultsTableSeparatorTopShadowColor;
@property(readonly) UIColor * searchResultsTableSeparatorBottomShadowColor;
@property(readonly) int modalPresentationStyle;
@property(retain,readonly) UIView * webViewBackgroundView;
@property(retain,readonly) UIColor * webViewBackgroundColor;
@property(readonly) BOOL webViewIsOpaque;
@property(readonly) BOOL webViewDrawsShadows;
@property(readonly) BOOL splashScreenShowsIcon;
@property(retain,readonly) UIColor * splashTitleLabelTextColor;
@property(retain,readonly) UIColor * splashEntryFieldTextColor;
@property(retain,readonly) UIColor * splashEntryPlaceholderTextColor;
@property(retain,readonly) UIColor * splashEntryFieldLabelTextColor;
@property(retain,readonly) UIColor * splashSignInFieldsBorderColor;
@property(retain,readonly) UIColor * splashSignInFieldsBackgroundColor;
@property(readonly) int splashSignInProgressIndicatorColor;
@property(readonly) int navigationBarStyle;
@property(readonly) BOOL navigationBarIsTranslucent;
@property(readonly) int navigationBarActivityIndicatorStyle;
@property(readonly) BOOL firstNavigationBarHidden;
@property(readonly) BOOL navigationBarHidesTitle;
@property(readonly) BOOL navigationBarHidesShadow;
@property(retain,readonly) UIColor * navigationBarTintColor;
@property(readonly) BOOL navigationBarTranslucent;
@property(retain,readonly) UIImage * navigationBarBackgroundImage;
@property(retain,readonly) UIColor * learnMoreTextColor;
@property(retain,readonly) UIColor * learnMoreTextColorSelected;
@property(retain,readonly) UIColor * learnMoreShadowColor;
@property(retain,readonly) UIImage * learnMoreArrowImage;
@property(retain,readonly) UIImage * learnMoreArrowImagePressed;
@property(readonly) BOOL learnMoreButtonDrawsUnderline;
@property(readonly) BOOL actionSheetsUsePopoverStyle;

+ (id)defaultAppearanceController;
+ (id)modernTransparentDarkAppearanceController;
+ (id)modernTransparentLightAppearanceController;
+ (id)modernAppearanceController;
+ (id)gradientAppearanceController;
+ (id)stripedAppearanceController;
+ (id)appearanceControllerForStyle:(int)arg1;
+ (id)globalAppearanceController;

- (BOOL)actionSheetsUsePopoverStyle;
- (BOOL)learnMoreButtonDrawsUnderline;
- (id)learnMoreArrowImagePressed;
- (id)learnMoreShadowColor;
- (id)learnMoreTextColorSelected;
- (BOOL)navigationBarHidesShadow;
- (BOOL)navigationBarHidesTitle;
- (BOOL)firstNavigationBarHidden;
- (BOOL)webViewDrawsShadows;
- (BOOL)webViewIsOpaque;
- (id)webViewBackgroundColor;
- (id)webViewBackgroundView;
- (id)searchResultsTableSeparatorBottomShadowColor;
- (id)searchResultsTableSeparatorTopShadowColor;
- (id)searchResultsTableSeparatorColor;
- (int)searchResultsTableSeparatorStyle;
- (int)tableFooterTextAlignment;
- (int)tableHeaderTextAlignment;
- (id)tableFooterFont;
- (id)tableHeaderFont;
- (struct CGSize { float x1; float x2; })tableHeaderTextShadowOffset;
- (id)tableHeaderTextShadowColor;
- (id)tableHeaderTextColorSelected;
- (id)tableCellCheckmarkImageSelected;
- (id)tableCellCheckmarkImage;
- (id)tableCellCustomAccessoryViewDisclosureIndicator;
- (id)tableCellEditableInsertionPointColor;
- (id)tableSectionShadowImage;
- (id)tableSectionBorderColor;
- (id)tableCellEditableTextPlaceholderColor;
- (id)tableCellEditableTextColor;
- (id)tableCellButtonImageSelected;
- (id)tableCellButtonImage;
- (id)tableSeparatorBottomShadowColor;
- (id)tableSeparatorTopShadowColor;
- (BOOL)styleUsesCustomSearchResultsStyle;
- (BOOL)styleUsesCustomSeparatorStyle;
- (BOOL)styleUsesCustomAccessoryView;
- (id)learnMoreArrowImage;
- (id)learnMoreTextColor;
- (id)navigationBarBackgroundImage;
- (BOOL)navigationBarTranslucent;
- (id)navigationBarTintColor;
- (int)navigationBarActivityIndicatorStyle;
- (int)splashSignInProgressIndicatorColor;
- (id)splashSignInFieldsBackgroundColor;
- (id)splashSignInFieldsBorderColor;
- (id)splashEntryFieldLabelTextColor;
- (id)splashEntryPlaceholderTextColor;
- (id)splashEntryFieldTextColor;
- (id)splashTitleLabelTextColor;
- (BOOL)splashScreenShowsIcon;
- (id)tableFooterTextColor;
- (id)tableHeaderTextColor;
- (id)tableSeparatorColor;
- (int)tableSeparatorStyle;
- (id)tableCellDetailLabelBackgroundColor;
- (id)tableCellDetailLabelColor;
- (id)tableCellTextLabelColor;
- (id)tableCellTextLabelBackgroundColor;
- (id)tableCellEditableTextFieldClearButtonPressed;
- (id)tableCellEditableTextFieldClearButton;
- (id)tableCellCheckmarkImageDisabled;
- (id)userInteractionColor;
- (id)customBackgroundColor;
- (BOOL)styleUsesCustomTableStyle;
- (BOOL)navigationBarIsTranslucent;
- (int)navigationBarStyle;
- (int)keyboardAppearance;
- (id)tableCellBackgroundColor;
- (id)tableBackgroundColor;
- (int)modalPresentationStyle;

@end
