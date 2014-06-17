/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class _UILegibilityLabel, UIView, PLWallpaperButton, _UIBackdropView;

@interface PLCropOverlayWallpaperBottomBar : UIView  {
    BOOL _motionToggleHidden;
    BOOL _shouldOnlyShowLockScreenButton;
    BOOL _shouldOnlyShowHomeScreenButton;
    PLWallpaperButton *_doCancelButton;
    PLWallpaperButton *_doSetButton;
    PLWallpaperButton *_doSetHomeScreenButton;
    PLWallpaperButton *_doSetLockScreenButton;
    PLWallpaperButton *_doSetBothScreenButton;
    PLWallpaperButton *_motionToggle;
    _UILegibilityLabel *_titleLabel;
    UIView *_separatorLine;
    _UIBackdropView *_backdropView;
    float _maxToggleWidth;
}

@property(readonly) PLWallpaperButton * doCancelButton;
@property(readonly) PLWallpaperButton * doSetButton;
@property(readonly) PLWallpaperButton * doSetHomeScreenButton;
@property(readonly) PLWallpaperButton * doSetLockScreenButton;
@property(readonly) PLWallpaperButton * doSetBothScreenButton;
@property(readonly) PLWallpaperButton * motionToggle;
@property BOOL motionToggleHidden;
@property BOOL shouldOnlyShowLockScreenButton;
@property BOOL shouldOnlyShowHomeScreenButton;
@property(retain) _UILegibilityLabel * titleLabel;
@property(retain) UIView * separatorLine;
@property(retain) _UIBackdropView * backdropView;
@property float maxToggleWidth;


- (float)maxToggleWidth;
- (void)setSeparatorLine:(id)arg1;
- (BOOL)shouldOnlyShowHomeScreenButton;
- (BOOL)shouldOnlyShowLockScreenButton;
- (struct CGSize { float x1; float x2; })_sizeForString:(id)arg1;
- (id)separatorLine;
- (void)_layoutSubviewsPhone;
- (void)_layoutSubviewsPad;
- (void)_commonPLCropOverlayWallpaperBottomBarInitialization;
- (void)setMaxToggleWidth:(float)arg1;
- (float)widthForToggleText;
- (void)_commonPLCropOverlayWallpaperBottomBarInitializationPhone;
- (void)_commonPLCropOverlayWallpaperBottomBarInitializationPad;
- (BOOL)motionToggleHidden;
- (void)setMotionToggleHidden:(BOOL)arg1;
- (void)setShouldOnlyShowLockScreenButton:(BOOL)arg1;
- (void)setShouldOnlyShowHomeScreenButton:(BOOL)arg1;
- (id)doSetButton;
- (id)motionToggle;
- (id)doSetBothScreenButton;
- (id)doSetLockScreenButton;
- (id)doSetHomeScreenButton;
- (id)doCancelButton;
- (void)updateForChangedSettings:(id)arg1;
- (id)backdropView;
- (void)setBackdropView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (void)setText:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
