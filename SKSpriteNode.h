/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class SKLightNode, UIColor, SKShader, SKTexture;

@interface SKSpriteNode : SKNode  {
    SKLightNode *_light;
    BOOL _shouldRepeatTexture;
}

@property(retain) SKTexture * texture;
@property(retain) SKTexture * normalTexture;
@property unsigned int lightingBitMask;
@property unsigned int shadowCastBitMask;
@property unsigned int shadowedBitMask;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } centerRect;
@property float colorBlendFactor;
@property(retain) UIColor * color;
@property int blendMode;
@property struct CGPoint { float x1; float x2; } anchorPoint;
@property struct CGSize { float x1; float x2; } size;
@property(retain) SKShader * shader;
@property BOOL shouldRepeatTexture;
@property struct CGSize { float x1; float x2; } repeatTextureSize;

+ (id)spriteNodeWithColor:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
+ (id)spriteNodeWithTexture:(id)arg1 normalMap:(id)arg2;
+ (id)spriteNodeWithTexture:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
+ (id)spriteNodeWithImageNamed:(id)arg1 normalMapped:(BOOL)arg2;
+ (id)spriteNodeWithImageNamed:(id)arg1;
+ (id)spriteNodeWithTexture:(id)arg1;

- (void)setTexture:(id)arg1;
- (id)texture;
- (void).cxx_destruct;
- (void)setColor:(id)arg1;
- (id)color;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { float x1; float x2; })size;
- (void)setShouldRepeatTexture:(BOOL)arg1;
- (BOOL)shouldRepeatTexture;
- (void)setRepeatTextureSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })repeatTextureSize;
- (void)setRepeatTexture:(BOOL)arg1;
- (BOOL)repeatTexture;
- (void)setCenterRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })centerRect;
- (id)initWithColor:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (unsigned int)shadowedBitMask;
- (unsigned int)shadowCastBitMask;
- (unsigned int)lightingBitMask;
- (id)normalTexture;
- (void)setNormalTexture:(id)arg1;
- (id)initWithTexture:(id)arg1 color:(id)arg2 size:(struct CGSize { float x1; float x2; })arg3;
- (void)setShadowedBitMask:(unsigned int)arg1;
- (void)setShadowCastBitMask:(unsigned int)arg1;
- (void)setLightingBitMask:(unsigned int)arg1;
- (id)shader;
- (void)setShader:(id)arg1;
- (id)initWithImageNamed:(id)arg1;
- (id)_copyImageData;
- (void)setColorBlendFactor:(float)arg1;
- (float)colorBlendFactor;
- (void)setBlendMode:(int)arg1;
- (int)blendMode;
- (id)initWithTexture:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copy;
- (id)description;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAnchorPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)init;

@end
