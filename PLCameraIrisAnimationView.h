/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface PLCameraIrisAnimationView : UIView  {
    BOOL shouldSetupAnimationInDidMoveToWindow;
    id irisAnimationDelegate;
    SEL irisAnimationDidStopSelector;
    double irisAnimationDuration;
    struct CGPoint { 
        float x; 
        float y; 
    } irisAnimationPosition;
}

@property id irisAnimationDelegate;
@property SEL irisAnimationDidStopSelector;
@property double irisAnimationDuration;
@property struct CGPoint { float x1; float x2; } irisAnimationPosition;
@property BOOL shouldSetupAnimationInDidMoveToWindow;


- (void)setShouldSetupAnimationInDidMoveToWindow:(BOOL)arg1;
- (void)setIrisAnimationPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setIrisAnimationDuration:(double)arg1;
- (void)animateIrisOpen;
- (void)pauseIrisAnimation;
- (void)unpauseIrisAnimation;
- (BOOL)shouldSetupAnimationInDidMoveToWindow;
- (void)setupAnimation;
- (struct CGPoint { float x1; float x2; })irisAnimationPosition;
- (double)irisAnimationDuration;
- (SEL)irisAnimationDidStopSelector;
- (id)irisAnimationDelegate;
- (void)setIrisAnimationDidStopSelector:(SEL)arg1;
- (void)setIrisAnimationDelegate:(id)arg1;
- (void)didMoveToWindow;
- (void)dealloc;

@end
