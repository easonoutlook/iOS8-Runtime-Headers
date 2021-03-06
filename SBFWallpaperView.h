/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class UIImage, _UILegibilitySettings, UIImageView, NSTimer, SBFWallpaperParallaxSettings, UIView, _UILegibilitySettingsProvider, <SBFWallpaperViewLegibilityObserver>, <SBFWallpaperViewInternalObserver>, UIColor, SBFWallpaperSettings;

@interface SBFWallpaperView : UIView <_UISettingsKeyObserver> {
    SBFWallpaperSettings *_wallpaperSettings;
    UIImageView *_topGradientView;
    UIImageView *_bottomGradientView;
    UIView *_parallaxView;
    float _contentScaleFactor;
    int _variant;
    _UILegibilitySettingsProvider *_legibilitySettingsProvider;
    _UILegibilitySettings *_legibilitySettings;
    UIColor *_lastAverageColor;
    NSTimer *_colorSampleTimer;
    BOOL _shouldGenerateBlurredImagesWhenVisible;
    BOOL _generatingBlurredImages;
    SBFWallpaperParallaxSettings *_parallaxSettings;
    BOOL _wantsRasterization;
    int _disallowRasterizationBlockCount;
    BOOL _filtersAverageColor;
    BOOL _continuousColorSamplingEnabled;
    BOOL _wallpaperAnimationEnabled;
    BOOL _parallaxEnabled;
    BOOL _suppressesGradients;
    <SBFWallpaperViewLegibilityObserver> *_legibilityObserver;
    UIView *_contentView;
    float _zoomFactor;
    float _contrast;
    float _parallaxFactor;
    <SBFWallpaperViewInternalObserver> *_internalObserver;
    float _parallaxAxisAdjustmentAngle;
}

@property(readonly) UIImage * wallpaperImage;
@property <SBFWallpaperViewLegibilityObserver> * legibilityObserver;
@property(retain) UIView * contentView;
@property float zoomFactor;
@property int variant;
@property(retain) _UILegibilitySettings * legibilitySettings;
@property BOOL filtersAverageColor;
@property float contrast;
@property BOOL continuousColorSamplingEnabled;
@property BOOL wallpaperAnimationEnabled;
@property BOOL parallaxEnabled;
@property float parallaxFactor;
@property <SBFWallpaperViewInternalObserver> * internalObserver;
@property BOOL suppressesGradients;
@property float parallaxAxisAdjustmentAngle;

+ (BOOL)_shouldScaleForParallax;
+ (BOOL)_allowsRasterization;
+ (BOOL)_allowsParallax;

- (void)setVariant:(int)arg1;
- (int)variant;
- (void)setParallaxAxisAdjustmentAngle:(float)arg1;
- (float)parallaxAxisAdjustmentAngle;
- (BOOL)suppressesGradients;
- (void)setInternalObserver:(id)arg1;
- (id)internalObserver;
- (void)setParallaxFactor:(float)arg1;
- (void)setWallpaperAnimationEnabled:(BOOL)arg1;
- (BOOL)wallpaperAnimationEnabled;
- (void)setContinuousColorSamplingEnabled:(BOOL)arg1;
- (BOOL)continuousColorSamplingEnabled;
- (BOOL)filtersAverageColor;
- (void)setLegibilityObserver:(id)arg1;
- (id)legibilityObserver;
- (BOOL)luminanceInRectRequiresTreatments:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)wantsRasterization;
- (BOOL)isDisplayingWallpaper:(id)arg1 forVariant:(int)arg2 options:(id)arg3;
- (void)setSuppressesGradients:(BOOL)arg1;
- (id)imageForBackdropParameters:(struct { int x1; int x2; int x3; })arg1 includeTint:(BOOL)arg2;
- (id)blurredImage;
- (void)setGeneratesBlurredImages:(BOOL)arg1;
- (void)setParallaxEnabled:(BOOL)arg1;
- (float)contrastInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFiltersAverageColor:(BOOL)arg1;
- (float)cropZoomScale;
- (void)prepareToDisappear;
- (void)prepareToAppear;
- (void)setCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 zoomScale:(float)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_bottomGradientTestRect;
- (float)gradientOpacityInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 contrastWithinBoxesFactor:(float)arg2 allowLuminanceCheck:(BOOL)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_topGradientTestRect;
- (float)_bottomGradientAlpha;
- (float)_topGradientAlpha;
- (BOOL)_shouldShowBottomGradient;
- (BOOL)_shouldShowTopGradient;
- (BOOL)contrastRequiresTreatments;
- (id)averageColorInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withSmudgeRadius:(float)arg2;
- (void)_notifyGeometryInvalidated;
- (void)_removeParallax;
- (void)_addParallax;
- (void)_stopGeneratingBlurredImages;
- (void)_startGeneratingBlurredImages;
- (void)_notifyBlursInvalidated;
- (void)_applyParallaxSettings;
- (void)_handleVisibilityChange;
- (id)_displayedImage;
- (id)_imageForBackdropParameters:(struct { int x1; int x2; int x3; })arg1 includeTint:(BOOL)arg2;
- (id)_blurredImage;
- (id)_blurReplacementImage;
- (void)_updateGeneratingBlurs;
- (id)_averageColorInContentViewRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 smudgeRadius:(float)arg2;
- (float)contrastInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 contrastWithinBoxes:(float*)arg2 contrastBetweenBoxes:(float*)arg3;
- (void)_setLegibilitySettings:(id)arg1 notify:(BOOL)arg2;
- (void)_cleanupAfterAnimatingGradients;
- (void)_handleVariantChange;
- (void)_updateGradientImage;
- (void)_updateGradientAlpha;
- (void)_prepareToAnimateGradients;
- (void)setVariant:(int)arg1 withAnimationFactory:(id)arg2;
- (void)_endDisallowRasterizationBlock;
- (void)_updateContentViewScale;
- (void)_beginDisallowRasterizationBlock;
- (void)_updateScaleFactor;
- (void)_updateLegibilitySettingsForAverageColor:(id)arg1 notify:(BOOL)arg2;
- (void)_updateRasterizationState;
- (void)_updateParallaxSettings;
- (id)_computeAverageColor;
- (void)updateLegibilitySettingsForAverageColor:(id)arg1;
- (BOOL)supportsCropping;
- (float)parallaxFactor;
- (BOOL)parallaxEnabled;
- (id)wallpaperImage;
- (BOOL)_isVisible;
- (void)setZoomFactor:(float)arg1;
- (float)contrast;
- (id)legibilitySettings;
- (void)setLegibilitySettings:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (float)contentScaleFactor;
- (void)setContentView:(id)arg1;
- (id)contentView;
- (void)setContrast:(float)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)zoomFactor;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cropRect;
- (void)invalidate;
- (void)setHidden:(BOOL)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
