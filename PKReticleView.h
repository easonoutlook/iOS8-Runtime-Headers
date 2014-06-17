/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class CAShapeLayer;

@interface PKReticleView : UIView  {
    CAShapeLayer *_shapeLayer;
    struct CGPath { } *_bouncePathSquare;
    struct CGPath { } *_bouncePathRectangle;
    struct CGColor { } *_shadowColorDefault;
    struct CGColor { } *_shadowColorSuccess;
    struct CGColor { } *_shadowColorFailure;
}

+ (Class)layerClass;

- (void)reset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)blinkForSuccess:(BOOL)arg1 completion:(id)arg2;
- (void)positionWithCorners:(struct CGPoint { float x1; float x2; }*)arg1 completion:(id)arg2;
- (struct CGPoint { float x1; float x2; }*)_makeSanitizedCorners:(struct CGPoint { float x1; float x2; }*)arg1;
- (struct CGPath { }*)_createReticlePathForPoints:(struct CGPoint { float x1; float x2; }*)arg1;
- (void)dealloc;

@end