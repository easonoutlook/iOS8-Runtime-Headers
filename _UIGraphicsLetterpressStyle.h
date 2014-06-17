/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor;

@interface _UIGraphicsLetterpressStyle : NSObject <NSCopying> {
    UIColor *embossHighlightColor;
    UIColor *embossShadowColor;
    float embossSize;
    UIColor *innerShadowColor;
    float innerShadowBlur;
    int innerShadowBlendMode;
    UIColor *outerShadowColor;
    float outerShadowBlur;
    int outerShadowBlendMode;
    UIColor *topGradientColor;
    UIColor *bottomGradientColor;
    float innerOpacity;
    struct CGPoint { 
        float x; 
        float y; 
    } innerShadowOffset;
    struct CGPoint { 
        float x; 
        float y; 
    } outerShadowOffset;
}

@property(retain) UIColor * embossHighlightColor;
@property(retain) UIColor * embossShadowColor;
@property float embossSize;
@property(retain) UIColor * innerShadowColor;
@property struct CGPoint { float x1; float x2; } innerShadowOffset;
@property float innerShadowBlur;
@property int innerShadowBlendMode;
@property(retain) UIColor * outerShadowColor;
@property struct CGPoint { float x1; float x2; } outerShadowOffset;
@property float outerShadowBlur;
@property int outerShadowBlendMode;
@property(retain) UIColor * topGradientColor;
@property(retain) UIColor * bottomGradientColor;
@property float innerOpacity;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } edgeInsets;

+ (id)defaultLetterpressStyle;
+ (id)old2xLetterpressStyle;

- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })edgeInsets;
- (float)innerOpacity;
- (id)bottomGradientColor;
- (id)topGradientColor;
- (int)outerShadowBlendMode;
- (float)outerShadowBlur;
- (struct CGPoint { float x1; float x2; })outerShadowOffset;
- (id)outerShadowColor;
- (int)innerShadowBlendMode;
- (float)innerShadowBlur;
- (struct CGPoint { float x1; float x2; })innerShadowOffset;
- (id)innerShadowColor;
- (float)embossSize;
- (id)embossShadowColor;
- (id)embossHighlightColor;
- (void)setInnerOpacity:(float)arg1;
- (void)setBottomGradientColor:(id)arg1;
- (void)setTopGradientColor:(id)arg1;
- (void)setOuterShadowBlendMode:(int)arg1;
- (void)setOuterShadowBlur:(float)arg1;
- (void)setOuterShadowOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setOuterShadowColor:(id)arg1;
- (void)setInnerShadowBlendMode:(int)arg1;
- (void)setInnerShadowBlur:(float)arg1;
- (void)setInnerShadowOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setInnerShadowColor:(id)arg1;
- (void)setEmbossSize:(float)arg1;
- (void)setEmbossShadowColor:(id)arg1;
- (void)setEmbossHighlightColor:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end
