/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageAsset, CIImage, NSArray, UITraitCollection;

@interface UIImage : NSObject <NSSecureCoding> {
    void *_imageRef;
    float _scale;
    struct { 
        unsigned int named : 1; 
        unsigned int imageOrientation : 3; 
        unsigned int cached : 1; 
        unsigned int hasPattern : 1; 
        unsigned int isCIImage : 1; 
        unsigned int renderingMode : 2; 
        unsigned int suppressesAccessibilityHairlineThickening : 1; 
        unsigned int hasDecompressionInfo : 1; 
    } _imageFlags;
    UITraitCollection *_traitCollection;
    UIImageAsset *_imageAsset;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _alignmentRectInsets;
}

@property(readonly) float _gkScale;
@property(readonly) struct CGImage { }* _gkCGImage;
@property(readonly) int _gkImageOrientation;
@property(readonly) int leftCapWidth;
@property(readonly) int topCapHeight;
@property(readonly) struct CGSize { float x1; float x2; } size;
@property(readonly) struct CGImage { }* CGImage;
@property(readonly) CIImage * CIImage;
@property(readonly) int imageOrientation;
@property(readonly) float scale;
@property(readonly) NSArray * images;
@property(readonly) double duration;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } capInsets;
@property(readonly) int resizingMode;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } alignmentRectInsets;
@property(readonly) int renderingMode;
@property(copy) UITraitCollection * traitCollection;
@property(retain) UIImageAsset * imageAsset;

+ (struct CGSize { float x1; float x2; })_legibilityImageSizeForSize:(struct CGSize { float x1; float x2; })arg1 style:(int)arg2;
+ (id)_tintedImageForSize:(struct CGSize { float x1; float x2; })arg1 withTint:(id)arg2 maskImage:(id)arg3 effectsImage:(id)arg4 style:(int)arg5 edgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg6;
+ (id)_tintedImageForSize:(struct CGSize { float x1; float x2; })arg1 withTint:(id)arg2 maskImage:(id)arg3 effectsImage:(id)arg4 style:(int)arg5;
+ (id)_cachedImageForKey:(id)arg1 fromBlock:(id)arg2;
+ (id)_tintedImageForSize:(struct CGSize { float x1; float x2; })arg1 withTint:(id)arg2 effectsImage:(id)arg3 maskImage:(id)arg4 style:(int)arg5;
+ (id)_iconForResourceProxy:(id)arg1 format:(int)arg2;
+ (id)_applicationIconImageForBundleIdentifier:(id)arg1 format:(int)arg2;
+ (id)_iconForResourceProxy:(id)arg1 variant:(int)arg2 variantsScale:(float)arg3;
+ (int)_iconVariantForUIApplicationIconFormat:(int)arg1 scale:(float*)arg2;
+ (id)_applicationIconImageForBundleIdentifier:(id)arg1 format:(int)arg2 scale:(float)arg3;
+ (int)_idiomDefinedByPath:(id)arg1;
+ (unsigned int)_scaleDefinedByPath:(id)arg1;
+ (id)imageAtPath:(id)arg1;
+ (id)_deviceSpecificImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)_deviceSpecificImageNamed:(id)arg1;
+ (id)imageWithContentsOfCPBitmapFile:(id)arg1 flags:(int)arg2;
+ (id)imageFromAlbumArtData:(id)arg1 height:(int)arg2 width:(int)arg3 bytesPerRow:(int)arg4 cache:(BOOL)arg5;
+ (id)_defaultBackgroundGradient;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)_backgroundGradientWithStartColor:(id)arg1 andEndColor:(id)arg2;
+ (id)_kitImageNamed:(id)arg1 withTrait:(id)arg2;
+ (id)animatedResizableImageNamed:(id)arg1 capInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 duration:(double)arg3;
+ (id)animatedImageNamed:(id)arg1 duration:(double)arg2;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_edgeInsetsForStylePresetNames:(id)arg1 scale:(float)arg2;
+ (id)imageWithCIImage:(id)arg1 scale:(float)arg2 orientation:(int)arg3;
+ (id)imageWithCIImage:(id)arg1;
+ (id)imageWithData:(id)arg1 scale:(float)arg2;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)_imageNamed:(id)arg1 withTrait:(id)arg2;
+ (id)animatedResizableImageNamed:(id)arg1 capInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 resizingMode:(int)arg3 duration:(double)arg4;
+ (id)imageNamed:(id)arg1;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;
+ (void)_flushCache:(id)arg1;
+ (void)initialize;
+ (id)animatedImageWithImages:(id)arg1 duration:(double)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1;
+ (id)imageWithCGImage:(struct CGImage { }*)arg1 scale:(float)arg2 orientation:(int)arg3;
+ (void)_flushSharedImageCache;
+ (id)kitImageNamed:(id)arg1;
+ (id)abImageNamed:(id)arg1;
+ (id)ab_tintedImageNamed:(id)arg1 withTint:(id)arg2;
+ (id)ab_imageNamed:(id)arg1;
+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForImageOrientation:(int)arg1 andSize:(struct CGSize { float x1; float x2; })arg2;
+ (BOOL)isSizeSwappedForImageOrientation:(int)arg1;
+ (void)_gkloadRemoteImageForURL:(id)arg1 queue:(id)arg2 withCompletionHandler:(id)arg3;
+ (id)_gkImageWithRawData:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2 scale:(float)arg3 rowBytes:(unsigned long)arg4 bitmapInfo:(unsigned int)arg5;
+ (id)_gkImageWithCGImage:(struct CGImage { }*)arg1 scale:(float)arg2 orientation:(int)arg3;
+ (id)_mapkit_imageNamed:(id)arg1;
+ (id)tpImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imageWithPKImage:(id)arg1;
+ (float)inkEffectsSaturationFromAmount:(float)arg1;
+ (float)defaultFXValue;
+ (id)defaultForFXKey:(id)arg1;
+ (BOOL)integerOnlyValuesForGroupIndex:(int)arg1;
+ (int)maximumValueForGroupIndex:(int)arg1;
+ (int)minimumValueForGroupIndex:(int)arg1;
+ (BOOL)wantFXAsymetricWidthDisplayForGroup:(int)arg1 value:(float)arg2;
+ (BOOL)wantFXCenterWidthDisplayForGroup:(int)arg1 value:(float)arg2;
+ (BOOL)wantFXAngleInteractionForGroup:(int)arg1 value:(float)arg2;
+ (BOOL)wantFXCenterSizeInteractionForGroup:(int)arg1 value:(float)arg2;
+ (BOOL)wantFXSingleTouchCenterAndSizeInteractionForGroup:(int)arg1 value:(float)arg2;
+ (BOOL)wantFXCenterPointInteractionForGroup:(int)arg1 value:(float)arg2;
+ (id)imageWithInk_colorThumbnails:(float)arg1 sourceImageBuffer:(id)arg2;
+ (id)ciImageWithInk_renderWithInput:(id)arg1 withTexture1:(id)arg2 withTexture2:(id)arg3 withTexture3:(id)arg4 withStrength:(float)arg5 withSaturation:(float)arg6 thumbnailMode:(BOOL)arg7;
+ (id)imageBufferWithInk_blendTexture:(id)arg1 options:(id)arg2 gradientRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 padding:(float)arg4 liveInteraction:(BOOL)arg5 textureName:(id)arg6;
+ (int)imageWithTiltShift:(float)arg1 withBufferIn:(void*)arg2 withBufferOut:(void*)arg3 withBytesPerRow:(unsigned long)arg4 withBytesPerRowOrg:(unsigned long)arg5 withWidth:(int)arg6 withHeight:(int)arg7 withTiltShiftData:(void*)arg8 withCenter:(struct CGPoint { float x1; float x2; })arg9 withSize:(float)arg10 withAngle:(float)arg11 destRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg12 padding:(float)arg13 scale:(int)arg14;
+ (void)tiltShiftPrepareLivePreview:(void*)arg1 fromBuffer:(id)arg2;
+ (int)imageWithArtisticEdge:(float)arg1 withBufferIn:(void*)arg2 withBufferOut:(void*)arg3 withBytesPerRow:(unsigned long)arg4 withBytesPerRowOrg:(unsigned long)arg5 withWidth:(int)arg6 withHeight:(int)arg7 destRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg8 padding:(float)arg9 scale:(int)arg10;
+ (id)defaultForFXKey:(id)arg1 groupIndex:(int)arg2 value:(float)arg3;
+ (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForImageOrientation:(int)arg1 andSize:(struct CGSize { float x1; float x2; })arg2;
+ (BOOL)isSizeSwappedForImageOrientation:(int)arg1;
+ (int)orientationForImageOrientation:(int)arg1 rotatedBy90DegreeTurnsClockwise:(int)arg2;
+ (int)inverseOrientationForImageOrientation:(int)arg1;
+ (BOOL)isMirroredForImageOrientation:(int)arg1;
+ (int)imageOrientationForExifOrientation:(int)arg1;
+ (int)exifOrientationForImageOrientation:(int)arg1;
+ (id)stretchyImageNamed:(id)arg1;
+ (id)stretchyImageNamed:(id)arg1 hStretch:(BOOL)arg2 vStretch:(BOOL)arg3;
+ (id)bl_resizablePrintImageNamed:(id)arg1 resizableImageWithCapInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2 resizingMode:(int)arg3;
+ (void)bl_end2xImageCaching;
+ (void)bl_begin2xImageCaching;
+ (id)bl_darkenImage:(id)arg1 blackAlpha:(float)arg2;
+ (id)bl_maskImageFromAlphaChannelOfImage:(id)arg1 drawnIntoRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (id)bl_flattenedPatternImage:(id)arg1 intoSize:(struct CGSize { float x1; float x2; })arg2;
+ (id)bl_flattenedStretchableImage:(id)arg1 intoSize:(struct CGSize { float x1; float x2; })arg2;
+ (id)stretchyVersionH:(BOOL)arg1 V:(BOOL)arg2 forImage:(id)arg3;
+ (void)saveToStretchyCache:(id)arg1 forKey:(id)arg2;
+ (id)bl_printImageNamed:(id)arg1;
+ (void)bl_set2xImageCache:(id)arg1;
+ (void)bl_2xCacheMemoryWarning:(id)arg1;
+ (int)rotationAngleForImageOrientation:(int)arg1;
+ (id)socialFrameworkImageNamed:(id)arg1 leftCapWidth:(float)arg2 topCapHeight:(float)arg3;
+ (id)socialFrameworkImageNamed:(id)arg1;
+ (id)blj_imageNamed:(id)arg1;
+ (id)pu_PhotosUIImageNamed:(id)arg1;
+ (id)_iAd_imageNamed:(id)arg1;
+ (id)siriui_semiTransparentChevronImage;
+ (id)ckImageWithData:(id)arg1;
+ (id)ckImageNamed:(id)arg1;
+ (id)abImageNamed:(id)arg1;
+ (id)imageWithSize:(struct CGSize { float x1; float x2; })arg1 opaque:(BOOL)arg2 fromBlock:(id)arg3;
+ (id)reversedNikeRunLandscapeBackgroundImage;
+ (id)nikeRunLandscapeBackgroundImage;

- (id)_imageWithBrightnessModifiedForLegibilityStyle:(int)arg1;
- (void)_drawImageForLegibilityStyle:(int)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (id)_imageForLegibilityStyle:(int)arg1;
- (void)_drawImageForLegibilitySettings:(id)arg1 strength:(float)arg2 size:(struct CGSize { float x1; float x2; })arg3;
- (id)_imageForLegibilitySettings:(id)arg1 strength:(float)arg2;
- (id)_tabBarItemImageWithTintColor:(id)arg1 selected:(BOOL)arg2 metrics:(int)arg3 style:(int)arg4 forScreenScale:(float)arg5;
- (id)_unselectedTabBarItemImageWithTintColor:(id)arg1 metrics:(int)arg2 style:(int)arg3 forScreenScale:(float)arg4;
- (id)_selectedTabBarItemImageWithTintColor:(id)arg1 metrics:(int)arg2 style:(int)arg3 forScreenScale:(float)arg4;
- (id)_subimageInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_applyBackdropViewStyle:(int)arg1 includeTints:(BOOL)arg2 includeBlur:(BOOL)arg3;
- (id)_applyBackdropViewSettings:(id)arg1 includeTints:(BOOL)arg2 includeBlur:(BOOL)arg3;
- (id)_applyBackdropViewSettings:(id)arg1;
- (id)_applyBackdropViewStyle:(int)arg1 includeTints:(BOOL)arg2 includeBlur:(BOOL)arg3 graphicsQuality:(int)arg4 allowImageResizing:(BOOL)arg5;
- (id)_applyBackdropViewStyle:(int)arg1 includeTints:(BOOL)arg2 includeBlur:(BOOL)arg3 graphicsQuality:(int)arg4;
- (id)_applyBackdropViewSettings:(id)arg1 includeTints:(BOOL)arg2 includeBlur:(BOOL)arg3 allowImageResizing:(BOOL)arg4;
- (id)_applyBackdropViewSettings:(id)arg1 allowImageResizing:(BOOL)arg2;
- (id)_applicationIconImageForFormat:(int)arg1 precomposed:(BOOL)arg2;
- (id)_applicationIconImageForFormat:(int)arg1 precomposed:(BOOL)arg2 scale:(float)arg3;
- (id)_serializedData;
- (id)_flatImageWithWhite:(float)arg1 alpha:(float)arg2;
- (BOOL)_isInvisibleAndGetIsTranslucent:(BOOL*)arg1;
- (void)_setNamed:(BOOL)arg1;
- (BOOL)_isCached;
- (void)_setCached:(BOOL)arg1;
- (void)draw1PartImageInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)draw3PartImageWithSliceRects:(struct { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)draw9PartImageWithSliceRects:(struct { struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_1_1_3; } x1; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_2_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_3_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_3_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_3_1_3; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)compositeToPoint:(struct CGPoint { float x1; float x2; })arg1 operation:(int)arg2;
- (struct CGImage { }*)imageRef;
- (id)initWithData:(id)arg1 cache:(BOOL)arg2;
- (struct CGColor { }*)_patternColor;
- (struct CGColor { }*)_tiledPatternColor;
- (void)draw1PartImageInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fraction:(float)arg2;
- (void)draw3PartImageWithSliceRects:(struct { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 fraction:(float)arg3;
- (void)compositeToRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(float)arg4;
- (void)compositeToPoint:(struct CGPoint { float x1; float x2; })arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(float)arg4;
- (void)draw9PartImageWithSliceRects:(struct { struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_1_1_3; } x1; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_2_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_3_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_3_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_3_1_3; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(float)arg4;
- (void)draw9PartImageWithSliceRects:(struct { struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_1_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_1_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_1_1_3; } x1; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_2_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_2_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct { struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_3_1_1; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_3_1_2; struct CGRect { struct CGPoint { float x_1_3_1; float x_1_3_2; } x_3_2_1; struct CGSize { float x_2_3_1; float x_2_3_2; } x_3_2_2; } x_3_1_3; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 fraction:(float)arg3;
- (void)compositeToPoint:(struct CGPoint { float x1; float x2; })arg1 operation:(int)arg2 fraction:(float)arg3;
- (int)topCapHeight;
- (int)leftCapWidth;
- (id)stretchableImageWithLeftCapWidth:(int)arg1 topCapHeight:(int)arg2;
- (id)_imageThatSuppressesAccessibilityHairlineThickening;
- (id)_flatImageWithColor:(id)arg1;
- (struct { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; })_calculateStatistics;
- (id)_resizableImageWithSubimageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 resizeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2;
- (id)_stretchableImageWithCapInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (BOOL)writeToCPBitmapFile:(id)arg1 flags:(int)arg2;
- (id)initWithIOSurface:(struct __IOSurface { }*)arg1;
- (id)initWithCGImage:(struct CGImage { }*)arg1 imageOrientation:(int)arg2;
- (id)_initWithData:(id)arg1 scale:(float)arg2;
- (id)_initWithData:(id)arg1 preserveScale:(BOOL)arg2;
- (id)_initWithIOSurface:(struct __IOSurface { }*)arg1 imageOrientation:(int)arg2;
- (void)setImageAsset:(id)arg1;
- (id)imageAsset;
- (id)_automationID;
- (void)drawAsPatternInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)imageWithRenderingMode:(int)arg1;
- (id)_primitiveImageAsset;
- (struct __IOSurface { }*)ioSurface;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 blendMode:(int)arg2 alpha:(float)arg3;
- (void)drawAtPoint:(struct CGPoint { float x1; float x2; })arg1 blendMode:(int)arg2 alpha:(float)arg3;
- (id)_cachedImageStyledWithPresets:(id)arg1 forTintColor:(id)arg2;
- (struct CGSize { float x1; float x2; })_sizeInPixels;
- (BOOL)_isNamed;
- (id)_initWithIOSurface:(struct __IOSurface { }*)arg1 scale:(float)arg2 orientation:(int)arg3;
- (id)CIImage;
- (void)setTraitCollection:(id)arg1;
- (void)_setSuppressesAccessibilityHairlineThickening:(BOOL)arg1;
- (int)renderingMode;
- (id)_initWithData:(id)arg1 preserveScale:(BOOL)arg2 cache:(BOOL)arg3;
- (id)initWithContentsOfFile:(id)arg1 cache:(BOOL)arg2;
- (id)initWithCIImage:(id)arg1 scale:(float)arg2 orientation:(int)arg3;
- (id)initWithCIImage:(id)arg1;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (id)initWithData:(id)arg1 scale:(float)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)traitCollection;
- (BOOL)_isDecompressing;
- (id)_initWithData:(id)arg1 immediateLoadWithMaxSize:(struct CGSize { float x1; float x2; })arg2 scale:(float)arg3 renderingIntent:(int)arg4;
- (void)_startEagerDecompression;
- (void)_setDecompressionInfo:(id)arg1;
- (void)_decompressionFallbackImageCreation;
- (void)_saveDecompressedImage:(struct CGImage { }*)arg1;
- (void)_decompressionComplete;
- (id)_decompressionInfo;
- (void)_preheatBitmapData;
- (id)_imageWithStylePresets:(id)arg1 withTintColor:(id)arg2;
- (id)_imageScaledToProportion:(float)arg1 interpolationQuality:(int)arg2;
- (id)_doubleBezeledImageWithExteriorShadowRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 interiorShadowRed:(float)arg5 green:(float)arg6 blue:(float)arg7 alpha:(float)arg8 fillRed:(float)arg9 green:(float)arg10 blue:(float)arg11 alpha:(float)arg12;
- (id)_bezeledImageWithShadowRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 fillRed:(float)arg5 green:(float)arg6 blue:(float)arg7 alpha:(float)arg8 drawShadow:(BOOL)arg9;
- (void)_setAlignmentRectInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1 resizingMode:(int)arg2;
- (id)images;
- (id)_resizableImageWithCapMask:(int)arg1;
- (BOOL)_isTiledWhenStretchedToSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_isSubimage;
- (BOOL)_suppressesAccessibilityHairlineThickening;
- (int)resizingMode;
- (id)imageWithAlignmentRectInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)resizableImageWithCapInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(float)arg2 orientation:(int)arg3;
- (int)imageOrientation;
- (struct CGImage { }*)CGImage;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentRectInPixels;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentStretchInPixels;
- (id)_initWithOtherImage:(id)arg1;
- (void)_setAlwaysStretches:(BOOL)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })capInsets;
- (BOOL)_isResizable;
- (void)_configureImage:(id)arg1;
- (void)_encodePropertiesWithCoder:(id)arg1;
- (void)_encodeDataWithCoder:(id)arg1 imageName:(id)arg2;
- (BOOL)_canEncodeWithName:(id)arg1 coder:(id)arg2;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)scale;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)patternColor;
- (void)draw1PartImageInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fraction:(float)arg2 operation:(int)arg3;
- (void)draw3PartImageWithSliceRects:(struct { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; })arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 operation:(int)arg3 fraction:(float)arg4;
- (struct CGSize { float x1; float x2; })size;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)duration;
- (void)dealloc;
- (id)imageWithShadow:(id)arg1;
- (id)imageWithEtchedBorderOfColor:(id)arg1 radius:(float)arg2;
- (id)MP_imageByOverlayingColor:(id)arg1;
- (id)MP_flatImageWithLinearGradientFromTopColor:(id)arg1 toBottomColor:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bitmapRectFromImageRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)imageWithShadow:(id)arg1;
- (id)imageWithEtchedBorderOfColor:(id)arg1 radius:(float)arg2;
- (id)newImageRotatedByDegrees:(float)arg1;
- (id)newImageWithOrientation:(int)arg1;
- (void*)PL_imageContents;
- (id)pl_imageJPEGData;
- (id)ASCIIDescription;
- (id)ASCIIDescriptionWithWidth:(int)arg1 height:(int)arg2;
- (id)_gkImageByAddingAlpha;
- (id)_gkImageByScalingToSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_gkImageByScalingToSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2;
- (id)_gkImageByScalingAndCroppingToSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2;
- (id)_gkImageByScalingToSize:(struct CGSize { float x1; float x2; })arg1 scale:(float)arg2 padColor:(id)arg3;
- (id)_gkImageByTintingWithColor:(id)arg1;
- (void)_gkReadAtSize:(struct CGSize { float x1; float x2; })arg1 ARGBHostEndianBytes:(id)arg2;
- (int)_gkImageOrientation;
- (struct CGImage { }*)_gkCGImage;
- (float)_gkScale;
- (id)_mapkit_dimmedImage;
- (id)imageResizedTo:(struct CGSize { float x1; float x2; })arg1 preserveAspectRatio:(BOOL)arg2;
- (id)imageResizedTo:(struct CGSize { float x1; float x2; })arg1;
- (id)sbf_imageMaskedByColor:(id)arg1 withShadow:(id)arg2;
- (id)sbf_imageWithEtchedBorderOfColor:(id)arg1 radius:(float)arg2;
- (id)sbf_invertedMaskImage;
- (id)sbf_maskImage;
- (id)sbf_imageWithShadow:(id)arg1;
- (id)sbf_imageMaskedByColor:(id)arg1;
- (id)stretchableImageWithLeftCapWidth:(int)arg1 rightCapWidth:(int)arg2;
- (struct CGSize { float x1; float x2; })alignmentSize;
- (id)wlImageByRecoloringWithColor:(id)arg1;
- (id)pkui_resizableImageByTilingCenterPixel;
- (void)dumpTexture:(struct __CVBuffer { }*)arg1;
- (id)transparentBorderImage:(unsigned int)arg1;
- (void)saveToDocumentsFolder:(id)arg1;
- (id)bezeledImageWithShadowRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 fillRed:(float)arg5 green:(float)arg6 blue:(float)arg7 alpha:(float)arg8 drawShadow:(BOOL)arg9;
- (id)stretchyVersion;
- (id)stretchyVVersion;
- (id)stretchyHVersion;
- (id)colorAtX:(int)arg1 y:(int)arg2;
- (float)lumaAtX:(int)arg1 y:(int)arg2;
- (id)fixAspectedThumbnailWithMediaAspectRatio:(float)arg1;
- (id)flattenedImageWithSize:(struct CGSize { float x1; float x2; })arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 scale:(float)arg3;
- (id)flattenedImageFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)hFlippedImage;
- (id)flattenedImageWithSquareOfSize:(int)arg1;
- (id)flattenedImageRotatedBy90DegreeTurnsClockwise:(int)arg1;
- (id)flattenedImage;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)stretchyImageWithLeftCapWidth:(int)arg1 topCapHeight:(int)arg2;
- (void)saveToStretchyCache:(id)arg1 forKey:(id)arg2;
- (id)stretchyVersionH:(BOOL)arg1 V:(BOOL)arg2;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })pixelAtX:(int)arg1 y:(int)arg2;
- (float)lumaAtX:(int)arg1 y:(int)arg2 sampleSize:(float)arg3;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })pixelAtX:(int)arg1 y:(int)arg2 sampleSize:(float)arg3;
- (id)flattenedImageFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 opaque:(BOOL)arg2;
- (id)flattenedImageWithSquareOfSize:(int)arg1 scale:(int)arg2;
- (id)flattenedImageInBoundingSize:(struct CGSize { float x1; float x2; })arg1 preserveOrientation:(BOOL)arg2 boundingScale:(float)arg3;
- (id)flattenedImageWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)flattenedImageWithSize:(struct CGSize { float x1; float x2; })arg1 opaque:(BOOL)arg2;
- (id)flattenedImageWithSize:(struct CGSize { float x1; float x2; })arg1 opaque:(BOOL)arg2 scale:(int)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rect;
- (id)flattenedImageInBoundingSize:(struct CGSize { float x1; float x2; })arg1;
- (id)description;
- (void)pu_drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withContentMode:(int)arg2;
- (id)pu_tintedImageWithColor:(id)arg1;
- (void)decode;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })__ck_contentsCenter;
- (id)__ck_resizableBalloonWithOrientation:(BOOL)arg1 skinny:(BOOL)arg2 framed:(BOOL)arg3;
- (id)__ck_imageWithOrientation:(int)arg1;
- (id)tintedImageWithColor:(id)arg1;
- (id)scaledImageWithSize:(struct CGSize { float x1; float x2; })arg1;
- (id)WAImageLoaderPreCacheImage;

@end
