/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMExposureBiasSliderThumb : UIView  {
    float _normalizedExposureValue;
}

@property float normalizedExposureValue;
@property(readonly) float maxRadius;


- (float)normalizedExposureValue;
- (float)maxRadius;
- (void)setNormalizedExposureValue:(float)arg1;
- (float)_interpolatedValueWithMin:(float)arg1 mid:(float)arg2 max:(float)arg3;
- (float)_sunRayLength;
- (float)_sunRaySpacing;
- (float)_sunRadius;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
