/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class CAMFlipButton, CAMSlalomIndicatorView, CAMHDRButton, CAMFilterButton, CAMTimerButton, UIButton, CAMImageWell, CAMShutterButton, UIView, CAMExpandableMenuButton, CAMModeDial, CAMElapsedTimeView, <CAMBottomBarDelegate>;

@interface CAMBottomBar : UIView <CAMExpandableMenuButtonDelegate> {
    BOOL __HDRButtonExpanded;
    BOOL __timerButtonExpanded;
    <CAMBottomBarDelegate> *_delegate;
    int _orientation;
    int _backgroundStyle;
    UIView *_backgroundView;
    CAMModeDial *_modeDial;
    CAMImageWell *_imageWell;
    CAMShutterButton *_stillDuringVideoButton;
    CAMShutterButton *_shutterButton;
    CAMFilterButton *_filterButton;
    CAMFlipButton *_flipButton;
    CAMElapsedTimeView *_elapsedTimeView;
    CAMHDRButton *_HDRButton;
    CAMTimerButton *_timerButton;
    CAMSlalomIndicatorView *_slalomIndicatorView;
    UIButton *_cancelButton;
    CAMExpandableMenuButton *__expandedMenuButton;
    UIView *__shutterButtomBottomLayoutSpacer;
    UIView *__imageWellBottomLayoutSpacer;
    UIView *__filterButtonBottomLayoutSpacer;
    UIView *__slalomIndicatorBottomLayoutSpacer;
    UIView *__stillDuringVideoButtonBottomLayoutSpacer;
    UIView *__elapsedTimeViewCenteringLayoutSpacer;
    UIView *__hdrButtonCenteringLayoutSpacer;
}

@property <CAMBottomBarDelegate> * delegate;
@property(readonly) int orientation;
@property int backgroundStyle;
@property(readonly) UIView * backgroundView;
@property(retain) CAMModeDial * modeDial;
@property(retain) CAMImageWell * imageWell;
@property(retain) CAMShutterButton * stillDuringVideoButton;
@property(retain) CAMShutterButton * shutterButton;
@property(retain) CAMFilterButton * filterButton;
@property(retain) CAMFlipButton * flipButton;
@property(retain) CAMElapsedTimeView * elapsedTimeView;
@property(retain) CAMHDRButton * HDRButton;
@property(retain) CAMTimerButton * timerButton;
@property(retain) CAMSlalomIndicatorView * slalomIndicatorView;
@property(retain) UIButton * cancelButton;
@property(setter=_setExpandedMenuButton:,retain) CAMExpandableMenuButton * _expandedMenuButton;
@property(getter=_isHDRButtonExpanded,setter=_setHDRButtonExpanded:) BOOL _HDRButtonExpanded;
@property(getter=_isTimerButtonExpanded,setter=_setTimerButtonExpanded:) BOOL _timerButtonExpanded;
@property(readonly) UIView * _shutterButtomBottomLayoutSpacer;
@property(readonly) UIView * _imageWellBottomLayoutSpacer;
@property(readonly) UIView * _filterButtonBottomLayoutSpacer;
@property(readonly) UIView * _slalomIndicatorBottomLayoutSpacer;
@property(readonly) UIView * _stillDuringVideoButtonBottomLayoutSpacer;
@property(readonly) UIView * _elapsedTimeViewCenteringLayoutSpacer;
@property(readonly) UIView * _hdrButtonCenteringLayoutSpacer;

+ (BOOL)requiresConstraintBasedLayout;

- (void)setShutterButton:(id)arg1;
- (id)shutterButton;
- (id)_hdrButtonCenteringLayoutSpacer;
- (id)timerButton;
- (id)HDRButton;
- (void)setTimerButton:(id)arg1;
- (void)setHDRButton:(id)arg1;
- (void)setSlalomIndicatorView:(id)arg1;
- (void)setElapsedTimeView:(id)arg1;
- (void)setFlipButton:(id)arg1;
- (void)setFilterButton:(id)arg1;
- (void)setStillDuringVideoButton:(id)arg1;
- (void)setImageWell:(id)arg1;
- (void)setModeDial:(id)arg1;
- (void)expandMenuButton:(id)arg1 animated:(BOOL)arg2;
- (void)collapseMenuButton:(id)arg1 animated:(BOOL)arg2;
- (void)_setHDRButtonExpanded:(BOOL)arg1;
- (void)_setTimerButtonExpanded:(BOOL)arg1;
- (void)_setExpandedMenuButton:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })collapsedFrameForMenuButton:(id)arg1;
- (BOOL)_isHDRButtonExpanded;
- (BOOL)_isTimerButtonExpanded;
- (BOOL)_shouldHideTimerButton;
- (BOOL)_shouldHideFlipButton;
- (BOOL)_shouldHideHDRButton;
- (BOOL)_shouldHideElapsedTimeView;
- (void)_updateHiddenViewsForButtonExpansionAnimated:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })expandedFrameForMenuButton:(id)arg1;
- (void)_layoutForVerticalOrientation;
- (void)_layoutForHorizontalOrientation;
- (void)_layoutMenuButtons:(id)arg1 apply:(BOOL)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg5;
- (id)_expandedMenuButton;
- (id)_currentMenuButtons;
- (void)_setupVerticalConstraints;
- (void)_setupHorizontalConstraints;
- (void)_setupVerticalCancelButtonConstraints;
- (void)_setupVerticalImageWellConstraints;
- (void)_setupVerticalModeDialConstraints;
- (void)_setupVerticalShutterButtonConstraints;
- (void)_setupVerticalElapsedTimeViewConstraints;
- (void)_setupVerticalFlipButtonConstraints;
- (void)_setupVerticalBackgroundViewConstraints;
- (id)_elapsedTimeViewCenteringLayoutSpacer;
- (id)elapsedTimeView;
- (id)flipButton;
- (void)_setupHorizontalCancelButtonConstraints;
- (void)_setupHorizontalStillDuringVideoButtonConstraints;
- (void)_setupHorizontalSlalomIndicatorConstraints;
- (void)_setupHorizontalFilterButtonConstraints;
- (void)_setupHorizontalImageWellConstraints;
- (void)_setupHorizontalShutterButtonConstraints;
- (void)_setupHorizontalModeDialConstraints;
- (void)_setupHorizontalBackgroundViewConstraints;
- (id)_stillDuringVideoButtonBottomLayoutSpacer;
- (id)stillDuringVideoButton;
- (id)_slalomIndicatorBottomLayoutSpacer;
- (id)slalomIndicatorView;
- (id)_filterButtonBottomLayoutSpacer;
- (id)filterButton;
- (id)_imageWellBottomLayoutSpacer;
- (id)imageWell;
- (id)_shutterButtomBottomLayoutSpacer;
- (id)modeDial;
- (void)_commonCAMBottomBarInitialization;
- (void)_updateBackgroundStyleAnimated:(BOOL)arg1;
- (void)setBackgroundStyle:(int)arg1 animated:(BOOL)arg2;
- (int)backgroundStyle;
- (void)setBackgroundStyle:(int)arg1;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setCancelButton:(id)arg1;
- (id)cancelButton;
- (id)backgroundView;
- (int)orientation;
- (id)delegate;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithOrientation:(int)arg1;

@end
