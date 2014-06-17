/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
 */

@class UIView;

@interface CalibrationBallView : UIView  {
    float _currentAngle;
    UIView *_ballView;
    float _ballRadius;
    float _trackRadius;
}

@property float trackRadius;
@property(setter=setAngle:) float currentAngle;


- (float)currentAngle;
- (float)trackRadius;
- (void)setTrackRadius:(float)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 ballRadius:(float)arg2;
- (id)ballView;
- (void)setAngle:(float)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end
