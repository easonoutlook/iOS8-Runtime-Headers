/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class UIImage, NSTimer, <SBFLegibilitySettingsProviderDelegate>, NSDictionary, SBFLockScreenSimpleDateFormatter, _UILegibilitySettings;

@interface SBSUIWallpaperPreviewViewController : UIViewController <SBFWallpaperViewLegibilityObserver, SBFLegibilitySettingsProvider> {
    NSTimer *_dateTimer;
    <SBFLegibilitySettingsProviderDelegate> *_delegate;
    UIImage *_wallpaperImage;
    NSDictionary *_proceduralWallpaper;
    NSDictionary *_proceduralWallpaperOptions;
    BOOL _colorSamplingEnabled;
    BOOL _allowScrolling;
    SBFLockScreenSimpleDateFormatter *_dateFormatter;
    int _variant;
    BOOL _motionEnabled;
}

@property(readonly) UIImage * wallpaperImage;
@property BOOL motionEnabled;
@property BOOL colorSamplingEnabled;
@property <SBFLegibilitySettingsProviderDelegate> * delegate;
@property(retain,readonly) _UILegibilitySettings * legibilitySettings;


- (id)initWithColorSamplingEnabled:(BOOL)arg1;
- (void)_startDateTimer;
- (id)_previewView;
- (id)_wallpaperViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 variant:(int)arg2 options:(id)arg3;
- (id)_wallpaperViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 image:(id)arg2 supportsCropping:(BOOL)arg3;
- (id)_proceduralWallpaperViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 variant:(int)arg2;
- (float)_parallaxFactor;
- (id)_backdropWallpaperView;
- (void)_stopDateTimer;
- (void)_updateDateView;
- (id)_dateView;
- (id)_wallpaperViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_wallpaperView;
- (void)wallpaperView:(id)arg1 legibilitySettingsDidChange:(id)arg2;
- (BOOL)colorSamplingEnabled;
- (void)setColorSamplingEnabled:(BOOL)arg1;
- (id)wallpaperImage;
- (id)initWithScrollableImage:(id)arg1;
- (id)initWithProceduralWallpaper:(id)arg1 options:(id)arg2;
- (void)setMotionEnabled:(BOOL)arg1;
- (BOOL)motionEnabled;
- (id)initWithWallpaperVariant:(int)arg1;
- (void)setWallpaperForLocations:(int)arg1;
- (id)legibilitySettings;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithImage:(id)arg1;
- (id)delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
