/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, NSArray, NSString, UIColor;

@interface UIActivityIndicatorView : UIView <NSCoding> {
    double _duration;
    BOOL _animating;
    int _activityIndicatorViewStyle;
    int _actualActivityIndicatorViewStyle;
    BOOL _hidesWhenStopped;
    BOOL _hasShadow;
    BOOL _clockWise;
    BOOL _spinning;
    BOOL _useArtwork;
    BOOL _useOutlineShadow;
    float _width;
    UIColor *_color;
    int _spokeCount;
    UIColor *_shadowColor;
    float _innerRadius;
    int _spokeFrameRatio;
    NSArray *_spokeImages;
    float _spinningDuration;
    NSString *_artBackupKeyString;
    UIImageView *_internalView;
    struct CGSize { 
        float width; 
        float height; 
    } _shadowOffset;
}

@property int activityIndicatorViewStyle;
@property BOOL hidesWhenStopped;
@property(retain) UIColor * color;
@property struct CGSize { float x1; float x2; } shadowOffset;
@property(retain) UIColor * shadowColor;
@property(readonly) UIImageView * internalView;
@property float width;
@property BOOL hasShadow;
@property int spokeCount;
@property float innerRadius;
@property int spokeFrameRatio;
@property(readonly) NSArray * spokeImages;
@property BOOL clockWise;
@property BOOL spinning;
@property float spinningDuration;
@property BOOL useArtwork;
@property(readonly) NSString * artBackupKeyString;
@property BOOL useOutlineShadow;

+ (id)_loadResourcesForStyle:(int)arg1;
+ (BOOL)_isModernStyle:(int)arg1;
+ (struct CGSize { float x1; float x2; })defaultSizeForStyle:(int)arg1;
+ (struct CGSize { float x1; float x2; })size;

- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)useOutlineShadow;
- (id)internalView;
- (id)artBackupKeyString;
- (void)setUseArtwork:(BOOL)arg1;
- (BOOL)useArtwork;
- (float)spinningDuration;
- (void)setSpinning:(BOOL)arg1;
- (BOOL)spinning;
- (BOOL)clockWise;
- (id)spokeImages;
- (float)innerRadius;
- (void)setHasShadow:(BOOL)arg1;
- (BOOL)hasShadow;
- (void)generateImages;
- (id)_styleNameForStyle:(int)arg1;
- (id)artBackupKey;
- (void)setSpinningDuration:(float)arg1;
- (void)setClockWise:(BOOL)arg1;
- (void)setSpokeFrameRatio:(int)arg1;
- (void)setInnerRadius:(float)arg1;
- (void)setSpokeCount:(int)arg1;
- (void)setUseOutlineShadow:(BOOL)arg1;
- (id)initWithActivityIndicatorStyle:(int)arg1;
- (BOOL)_canCustomizeStyle:(int)arg1;
- (void)_updateInternalViewFrameWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_generateImages;
- (BOOL)_isArtWorkBased;
- (id)_generateModernImagesForImages:(id)arg1;
- (BOOL)_hasCustomColor;
- (BOOL)_shouldGoBackToBaseStyle;
- (int)_customStyleForStyle:(int)arg1;
- (BOOL)_shouldGoToCustomStyle;
- (id)_imageForStep:(int)arg1;
- (id)_artBackupKey;
- (BOOL)_isModern;
- (float)_alphaValueForStep:(int)arg1;
- (float)_widthForGearWidth:(float)arg1;
- (float)_spokeLengthForGearWidth:(float)arg1;
- (float)_spokeWidthForGearWidth:(float)arg1;
- (int)spokeFrameRatio;
- (int)spokeCount;
- (BOOL)_canCustomize;
- (BOOL)hidesWhenStopped;
- (id)_layoutInfosForStyle:(int)arg1;
- (id)_defaulColorForStyle:(int)arg1;
- (void)_feedTheGear;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)setHidesWhenStopped:(BOOL)arg1;
- (void)_setUpAnimation;
- (void)_tearDownAnimation;
- (void)setWidth:(float)arg1;
- (void)setColor:(id)arg1;
- (id)color;
- (void)startAnimation;
- (void)setActivityIndicatorViewStyle:(int)arg1;
- (int)activityIndicatorViewStyle;
- (void)setAnimating:(BOOL)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (BOOL)isAnimating;
- (void)stopAnimation;
- (float)width;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (id)shadowColor;
- (void)setStyle:(int)arg1;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (void)_removeAllAnimations:(BOOL)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_commonInit;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setShadowColor:(id)arg1;
- (void)setAnimationDuration:(double)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
