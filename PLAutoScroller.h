/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIScrollView, NSTimer;

@interface PLAutoScroller : NSObject  {
    UIScrollView *_targetScrollView;
    struct CGPoint { 
        float x; 
        float y; 
    } _targetPoint;
    float _thresholdDistance;
    NSTimer *_autoscrollTimer;
}

@property struct CGPoint { float x1; float x2; } targetPoint;
@property(readonly) float thresholdDistance;


- (float)thresholdDistance;
- (id)initWithTargetScrollView:(id)arg1 thresholdDistance:(float)arg2;
- (void)_updateAutoscrollTimer:(id)arg1;
- (void)setTargetPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })targetPoint;
- (void)_stopAutoscrollTimer;
- (void)stopAndInvalidate;
- (void)dealloc;
- (id)init;

@end
