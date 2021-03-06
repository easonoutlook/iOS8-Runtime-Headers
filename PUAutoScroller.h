/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class UIScrollView, NSTimer;

@interface PUAutoScroller : NSObject  {
    UIScrollView *_scrollView;
    NSTimer *_timer;
    struct CGPoint { 
        float x; 
        float y; 
    } _distanceFromCenterFrame;
    struct CGPoint { 
        float x; 
        float y; 
    } _speed;
}

@property(retain) UIScrollView * scrollView;
@property struct CGPoint { float x1; float x2; } distanceFromCenterFrame;
@property(retain) NSTimer * timer;
@property struct CGPoint { float x1; float x2; } speed;

+ (void)performScrollTest:(id)arg1 iterations:(unsigned int)arg2 length:(float)arg3 delta:(float)arg4 vertical:(BOOL)arg5;
+ (void)_scrollTestFire;

- (id)timer;
- (void)setTimer:(id)arg1;
- (void)_stopTimer;
- (void)_startTimer;
- (void).cxx_destruct;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (void)stopAndInvalidate;
- (void)updateWithGestureRecognizer:(id)arg1;
- (id)initWithTargetScrollView:(id)arg1;
- (struct CGPoint { float x1; float x2; })distanceFromCenterFrame;
- (void)_handlerTimer:(id)arg1;
- (void)setDistanceFromCenterFrame:(struct CGPoint { float x1; float x2; })arg1;
- (void)setSpeed:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })speed;
- (void)dealloc;

@end
