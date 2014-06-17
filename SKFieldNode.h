/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class PKPhysicsField, SKRegion, SKTexture;

@interface SKFieldNode : SKNode  {
    PKPhysicsField *_field;
    SKRegion *_region;
    BOOL _enabled;
    BOOL _exclusive;
}

@property(retain) SKRegion * region;
@property float strength;
@property float falloff;
@property float minimumRadius;
@property(getter=isEnabled) BOOL enabled;
@property(getter=isExclusive) BOOL exclusive;
@property unsigned int categoryBitMask;
@property /* Warning: Unrecognized filer type: '' using 'void*' */ void* direction;
@property float smoothness;
@property float animationSpeed;
@property(retain) SKTexture * texture;

+ (id)turbulenceFieldWithSmoothness:(float)arg1 animationSpeed:(float)arg2;
+ (id)noiseFieldWithSmoothness:(float)arg1 animationSpeed:(float)arg2;
+ (id)velocityFieldWithTexture:(id)arg1;
+ (id)velocityFieldWithVector:(/* Warning: Unrecognized filer type: '' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: @24@0:48 */

+ (id)linearGravityFieldWithVector:(/* Warning: Unrecognized filer type: '' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: @24@0:48 */

+ (id)customFieldWithEvaluationBlock:(id)arg1;
+ (id)magneticField;
+ (id)electricField;
+ (id)springField;
+ (id)radialGravityField;
+ (id)vortexField;
+ (id)dragField;

- (void)setTexture:(id)arg1;
- (id)texture;
- (void)setCategoryBitMask:(unsigned int)arg1;
- (unsigned int)categoryBitMask;
- (void)setStrength:(float)arg1;
- (float)strength;
- (id)region;
- (void)setRegion:(id)arg1;
- (void).cxx_destruct;
- (/* Warning: Unrecognized filer type: '8' using 'void*' */ void*)direction;
     /* Encoded args for previous method: 8@0:4 */

- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (void)setDirection:(/* Warning: Unrecognized filer type: '' using 'void*' */ void*)arg1;
     /* Encoded args for previous method: v24@0:48 */

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1 field:(id)arg2;
- (id)_descriptionClassName;
- (float)minimumRadius;
- (void)setMinimumRadius:(float)arg1;
- (void)setAnimationSpeed:(float)arg1;
- (float)animationSpeed;
- (void)setSmoothness:(float)arg1;
- (float)smoothness;
- (void)setExclusive:(BOOL)arg1;
- (BOOL)isExclusive;
- (id)field;
- (void)setFalloff:(float)arg1;
- (float)falloff;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end