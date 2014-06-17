/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPButton : UIButton  {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _hitRectInsets;
    double _holdDelayInterval;
    unsigned int _holding : 1;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _alignmentRectInsets;
}

@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } alignmentRectInsets;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } hitRectInsets;
@property double holdDelayInterval;

+ (float)easyTouchDefaultCharge;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })easyTouchDefaultHitRectInsets;
+ (id)easyTouchButtonWithType:(int)arg1;

- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })hitRect;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setHoldDelayInterval:(double)arg1;
- (void)setAlignmentRectInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (double)holdDelayInterval;
- (void)_delayedTriggerHold;
- (void)_handleTouchUp;
- (void)_handleTouchCancel;
- (void)_handleTouchDown;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })hitRectInsets;
- (void)setHitRectInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;

@end
