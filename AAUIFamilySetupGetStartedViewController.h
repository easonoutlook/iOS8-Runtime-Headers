/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class <AAUIFamilySetupPageDelegate>, UIImageView, UILabel, ACAccountStore, AAFamilyEligibilityResponse, UIView, ACAccount, UIScrollView, UIButton, AAUIFamilySharingFeaturesView;

@interface AAUIFamilySetupGetStartedViewController : UIViewController <AAUIFamilySetupPage> {
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAFamilyEligibilityResponse *_familyEligibilityResponse;
    UIScrollView *_scrollView;
    UIView *_contentView;
    UILabel *_titleLabel;
    UIImageView *_familySharingLogo;
    UILabel *_descriptionLabel;
    UIButton *_getStartedButton;
    AAUIFamilySharingFeaturesView *_familyFeaturesView;
    <AAUIFamilySetupPageDelegate> *_delegate;
}

@property <AAUIFamilySetupPageDelegate> * delegate;


- (id)initWithAccount:(id)arg1 store:(id)arg2;
- (void)_getStartedButtonWasTapped:(id)arg1;
- (id)_createDescriptionLabelForText:(id)arg1;
- (id)initWithAccount:(id)arg1 store:(id)arg2 familyEligibilityResponse:(id)arg3;
- (float)_heightForText:(id)arg1 constrainedToWidth:(float)arg2;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillLayoutSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
