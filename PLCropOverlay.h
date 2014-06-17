/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIToolbar, UILabel, PLProgressHUD, UIButton, PLContactPhotoOverlay, PLCropOverlayWallpaperBottomBar, UIView, PLCropOverlayCropView, PLCropOverlayBottomBar, NSString, CAMBottomBar, UIImageView;

@interface PLCropOverlay : UIView  {
    id _delegate;
    PLCropOverlayCropView *_cropView;
    UIImageView *_shadowView;
    UIView *_overlayContainerView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cropRect;
    UIToolbar *_customToolbar;
    UILabel *_titleLabel;
    UIImageView *_topShineView;
    PLProgressHUD *_hud;
    float _statusBarHeight;
    int _mode;
    unsigned int _previewMode : 1;
    unsigned int _cropRectIsVisible : 1;
    unsigned int _offsetStatusBar : 1;
    unsigned int _tookPhoto : 1;
    unsigned int _showsCropRegion : 1;
    unsigned int _controlsAreVisible : 1;
    unsigned int _isDisplayedInPopover : 1;
    UIImageView *_bottomShineView;
    UIButton *_okButton;
    UIButton *_cancelButton;
    UIView *_wildcatPickerTopView;
    UIView *_wildcatPickerBottomView;
    BOOL _motionToggleIsOn;
    BOOL _isEditingHomeScreen;
    BOOL _isEditingLockScreen;
    PLContactPhotoOverlay *_contactPhotoOverlay;
    NSString *_defaultOKButtonTitle;
    PLCropOverlayBottomBar *__bottomBar;
    UIButton *__cameraCancelButton;
}

@property(readonly) PLContactPhotoOverlay * contactPhotoOverlay;
@property(retain) CAMBottomBar * cameraBottomBar;
@property(readonly) PLCropOverlayWallpaperBottomBar * wallpaperBottomBar;
@property BOOL motionToggleIsOn;
@property BOOL isEditingHomeScreen;
@property BOOL isEditingLockScreen;
@property BOOL motionToggleHidden;
@property(copy) NSString * defaultOKButtonTitle;
@property BOOL previewMode;
@property(readonly) PLCropOverlayBottomBar * _bottomBar;
@property(readonly) UIButton * _cameraCancelButton;


- (void)_savePhotoFinished:(id)arg1;
- (void)_backgroundSavePhoto:(id)arg1;
- (void)beginBackgroundSaveWithTile:(id)arg1 progressTitle:(id)arg2 completionCallbackTarget:(id)arg3 options:(int)arg4;
- (id)_cameraCancelButton;
- (BOOL)isEditingLockScreen;
- (BOOL)isEditingHomeScreen;
- (BOOL)motionToggleIsOn;
- (BOOL)previewMode;
- (void)setPreviewMode:(BOOL)arg1;
- (void)setTitleHidden:(BOOL)arg1 animationDuration:(float)arg2;
- (void)setProgressDone;
- (void)removeProgress;
- (void)setShowProgress:(BOOL)arg1 title:(id)arg2;
- (void)setCancelButtonHidden:(BOOL)arg1;
- (void)setOKButtonShowsCamera:(BOOL)arg1;
- (void)setDefaultOKButtonTitle:(id)arg1;
- (void)setOKButtonTitle:(id)arg1;
- (void)setTitle:(id)arg1 okButtonTitle:(id)arg2;
- (void)setIsEditingLockScreen:(BOOL)arg1;
- (void)setIsEditingHomeScreen:(BOOL)arg1;
- (void)didPauseVideo;
- (void)didPlayVideo;
- (void)didCaptureVideo;
- (void)didCapturePhoto;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bottomBarFrame;
- (id)bottomBar;
- (void)insertIrisView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 mode:(int)arg2;
- (void)setOverlayContainerView:(id)arg1;
- (id)overlayContainerView;
- (void)_pauseButtonPressed:(id)arg1;
- (void)_playButtonPressed:(id)arg1;
- (id)defaultOKButtonTitle;
- (BOOL)isWallpaperUIMode:(int)arg1;
- (void)cropOverlayBottomBarPauseButtonClicked:(id)arg1;
- (void)cropOverlayBottomBarPlayButtonClicked:(id)arg1;
- (BOOL)motionToggleHidden;
- (void)setMotionToggleHidden:(BOOL)arg1;
- (void)_updateWallpaperBottomBarSettingButtons;
- (void)setMotionToggleIsOn:(BOOL)arg1;
- (void)_fadeOutCompleted:(id)arg1;
- (void)_updateMotionToggle;
- (void)_updateEditImageDoneButtonTitle;
- (void)_createCropView;
- (id)_irisView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 mode:(int)arg2 offsettingStatusBar:(BOOL)arg3 isDisplayedInPopover:(BOOL)arg4;
- (void)setCropRectVisible:(BOOL)arg1 duration:(float)arg2;
- (void)setShowsCropRegion:(BOOL)arg1;
- (id)wallpaperBottomBar;
- (void)setCameraBottomBar:(id)arg1;
- (id)cameraBottomBar;
- (id)contactPhotoOverlay;
- (void)_updateCropRectInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_updateTitle;
- (void)statusBarHeightDidChange:(id)arg1;
- (void)_tappedBottomBarMotionToggle;
- (void)_tappedBottomBarSetBothButton;
- (void)_tappedBottomBarSetLockButton;
- (void)_tappedBottomBarSetHomeButton;
- (void)_tappedBottomBarPlaybackButton:(id)arg1;
- (void)_tappedBottomBarDoneButton:(id)arg1;
- (void)_tappedBottomBarCancelButton:(id)arg1;
- (BOOL)isTelephonyUIMode:(int)arg1;
- (id)_newOverlayViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 lighterEdgeOnTop:(BOOL)arg2;
- (void)_updateToolbarItems:(BOOL)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)setControlsAreVisible:(BOOL)arg1;
- (BOOL)controlsAreVisible;
- (id)_bottomBar;
- (void)setCancelButtonTitle:(id)arg1;
- (void)_setMode:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRect;
- (void)dismiss;
- (int)mode;
- (void)setEnabled:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cropRect;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
