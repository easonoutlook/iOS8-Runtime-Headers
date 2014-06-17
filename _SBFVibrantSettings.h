/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@class _UILegibilitySettings, UIColor;

@interface _SBFVibrantSettings : NSObject  {
    int _style;
    UIColor *_referenceColor;
    _UILegibilitySettings *_legibilitySettings;
    float _referenceContrast;
    UIColor *_tintColor;
    UIColor *_shimmerColor;
    UIColor *_chevronShimmerColor;
    UIColor *_highlightColor;
    UIColor *_highlightLimitingColor;
}

@property(readonly) UIColor * referenceColor;
@property(readonly) float referenceContrast;
@property(retain) UIColor * tintColor;
@property(retain) UIColor * shimmerColor;
@property(retain) UIColor * chevronShimmerColor;
@property(retain) UIColor * highlightColor;
@property(readonly) _UILegibilitySettings * legibilitySettings;
@property(readonly) int style;
@property(retain) UIColor * highlightLimitingColor;

+ (id)vibrantSettingsWithReferenceColor:(id)arg1 referenceContrast:(float)arg2 legibilitySettings:(id)arg3;

- (void)setHighlightLimitingColor:(id)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setChevronShimmerColor:(id)arg1;
- (void)setShimmerColor:(id)arg1;
- (float)referenceContrast;
- (id)highlightLimitingViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)tintViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)chevronShimmerColor;
- (id)shimmerColor;
- (id)highlightLimitingColor;
- (id)_computeSourceColorDodgeColorForDestinationColor:(id)arg1 producingLuminanceChange:(float)arg2;
- (id)initWithReferenceColor:(id)arg1 referenceContrast:(float)arg2 legibilitySettings:(id)arg3;
- (id)legibilitySettings;
- (id)highlightColor;
- (id)referenceColor;
- (int)_style;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (int)style;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end
