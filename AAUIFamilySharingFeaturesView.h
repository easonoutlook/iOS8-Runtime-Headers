/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@class UIButton, UIImageView, UILabel;

@interface AAUIFamilySharingFeaturesView : UIView  {
    UIImageView *_itunesIcon;
    UIImageView *_photosIcon;
    UIImageView *_fmfIcon;
    UIImageView *_calendarIcon;
    UIImageView *_fmipIcon;
    UILabel *_inviteHeaderLabel;
    UILabel *_purchaseShaingLabel;
    UILabel *_photoSharingLabel;
    UILabel *_locationSharingLabel;
    UILabel *_calendarSharingLabel;
    UILabel *_lostDeviceHelpLabel;
    UIButton *_learnMoreButton;
}


- (void)_layoutFeatureLabel:(id)arg1 withIconView:(id)arg2 underIconView:(id)arg3 constrainedToWidth:(float)arg4;
- (void)_learnMoreButtonTapped:(id)arg1;
- (id)_imageViewWithIconNamed:(id)arg1;
- (id)_labelWithNaturalText:(id)arg1;
- (float)_heightForText:(id)arg1 width:(float)arg2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)desiredHeightForWidth:(float)arg1;

@end
