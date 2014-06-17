/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class SKRange;

@interface SKPositionConstraint : SKConstraint  {
    SKRange *_xRange;
    SKRange *_yRange;
}

@property(copy) SKRange * xRange;
@property(copy) SKRange * yRange;

+ (id)constraintWithXRange:(id)arg1 YRange:(id)arg2;
+ (id)constraintWithYRange:(id)arg1;
+ (id)constraintWithXRange:(id)arg1;

- (void)setXRange:(id)arg1;
- (id)xRange;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithXRange:(id)arg1 YRange:(id)arg2;
- (void)setYRange:(id)arg1;
- (id)yRange;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
