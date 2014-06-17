/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKBRenderConfig, NSMutableArray, NSArray;

@interface UIKBRenderFactory : NSObject  {
    UIKBRenderConfig *_renderConfig;
    NSMutableArray *_segmentTraits;
    float _rivenSizeFactor;
    BOOL _lightweightFactory;
    float _scale;
    BOOL _boldTextEnabled;
}

@property float scale;
@property(readonly) UIKBRenderConfig * renderConfig;
@property(readonly) NSArray * segmentTraits;
@property float rivenSizeFactor;
@property BOOL lightweightFactory;

+ (Class)factoryClassForVisualStyle:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1;
+ (id)segmentedControlColor:(BOOL)arg1;
+ (id)factoryForVisualStyle:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1 renderConfig:(id)arg2;
+ (id)cacheKeyForString:(id)arg1 withRenderFlags:(int)arg2 renderConfig:(id)arg3;
+ (id)lightweightFactoryForVisualStyle:(struct { unsigned int x1 : 6; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 8; unsigned int x5 : 16; })arg1 renderConfig:(id)arg2;
+ (BOOL)_enabled;
+ (int)_graphicsQuality;

- (id)extraPasscodePaddleTraits;
- (id)passcodeShiftedControlKeyTraits;
- (id)passcodeControlKeyTraits;
- (id)passcodeBackgroundTraitsForKeyplane:(id)arg1;
- (void)modifyKeyTraitsForPasscode:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3;
- (id)passcodeActiveControlKeyTraits;
- (id)passcodeKeyEdgeColorName;
- (float)passcodeEdgeWeight;
- (void)setRivenSizeFactor:(float)arg1;
- (float)rivenSizeFactor;
- (id)thinTextFontName;
- (id)controlKeyShadowColorName;
- (id)controlKeyForegroundColorName;
- (id)defaultKeyShadowColorName;
- (BOOL)shouldClearBaseDisplayStringForVariants;
- (id)dictationKeyImageName;
- (id)handwritingMoreKeyImageName;
- (id)dismissKeyImageName;
- (id)globalKeyImageName;
- (id)globalEmojiKeyImageName;
- (id)deleteKeyXImageName;
- (id)keyImageNameWithSkinnyVariation:(id)arg1;
- (float)skinnyKeyThreshold;
- (id)deleteKeyImageName;
- (id)hashStringElement;
- (BOOL)lightweightFactory;
- (id)segmentTraits;
- (void)lowQualityTraits:(id)arg1;
- (void)setLightweightFactory:(BOOL)arg1;
- (id)initWithRenderConfig:(id)arg1 skipLayoutSegments:(BOOL)arg2;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (id)shiftKeyImageName;
- (void)scaleTraits:(id)arg1;
- (void)setupLayoutSegments;
- (id)muttitapReverseKeyImageName;
- (id)multitapCompleteKeyImageName;
- (void)addLayoutSegment:(id)arg1;
- (BOOL)useBlueThemingForKey:(id)arg1;
- (void)removeAllLayoutSegments;
- (id)traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)displayContentsForKey:(id)arg1;
- (float)RivenFactor:(float)arg1;
- (float)keyCornerRadius;
- (id)thinKeycapsFontName;
- (void)modifyTraitsForDetachedInputSwitcher:(id)arg1 withKey:(id)arg2;
- (id)lightPadKeycapsFontName;
- (id)lightTextFontName;
- (float)translucentGapWidth;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderConfig:(id)arg3 keycapsFontName:(id)arg4;
- (id)lightKeycapsFontName;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)traitsHashStringForKey:(id)arg1 withGeometry:(id)arg2 controlOpacities:(BOOL)arg3;
- (id)controlKeyBackgroundColorName;
- (id)defaultKeyBackgroundColorName;
- (id)backgroundTraitsForKeyplane:(id)arg1;
- (id)renderConfig;
- (void)setScale:(float)arg1;
- (float)scale;
- (void)dealloc;

@end
