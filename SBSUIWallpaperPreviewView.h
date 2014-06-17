/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class UITapGestureRecognizer, SBFLockScreenDateView, SBFWallpaperView, SBSUIWallpaperMotionButton;

@interface SBSUIWallpaperPreviewView : UIView  {
    UITapGestureRecognizer *_tapGestureRecognizer;
    SBSUIWallpaperMotionButton *_motionButton;
    SBFLockScreenDateView *_dateView;
    SBFWallpaperView *_wallpaperView;
}

@property(retain) SBFLockScreenDateView * dateView;
@property(retain) SBFWallpaperView * wallpaperView;


- (float)_motionButtonInset;
- (void)_layoutMotionButton;
- (void)_layoutWallpaperView;
- (void)_layoutDateView;
- (void)_updateMotionEffectsButton;
- (void)_toggleMotion;
- (id)dateView;
- (void)setDateView:(id)arg1;
- (void)setWallpaperView:(id)arg1;
- (id)wallpaperView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)dealloc;

@end
