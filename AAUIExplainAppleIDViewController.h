/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class UIButton, UILabel, UIView, UIScrollView;

@interface AAUIExplainAppleIDViewController : UIViewController  {
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIButton *_goToSettingsButton;
    BOOL _shouldShowInviteeInstructions;
}

@property BOOL shouldShowInviteeInstructions;


- (float)_heightForText:(id)arg1 constrainedToWidth:(float)arg2;
- (void)setShouldShowInviteeInstructions:(BOOL)arg1;
- (BOOL)shouldShowInviteeInstructions;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillLayoutSubviews;

@end
