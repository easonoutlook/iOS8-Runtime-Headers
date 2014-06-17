/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIDelayedAction, UITouch;

@interface UIDragRecognizer : UIGestureRecognizer  {
    double _maximumDeviation;
    double _minimumDistance;
    struct CGPoint { 
        float x; 
        float y; 
    } _startPosition;
    BOOL _restrictsToAngle;
    double _angle;
    UITouch *_touch;
    UIDelayedAction *_tooSlow;
    double _startAngle;
    double _quietPeriod;
    BOOL _canBeginDrag;
    SEL _checkCanBeginDrag;
    UIDelayedAction *ignoreTouch;
}

@property BOOL restrictsToAngle;
@property double angle;
@property double maximumDeviation;
@property double minimumDistance;
@property struct CGPoint { float x1; float x2; } startPosition;
@property double startAngle;
@property(retain) UITouch * touch;
@property double quietPeriod;
@property BOOL canBeginDrag;
@property SEL checkCanBeginDrag;
@property(retain) UIDelayedAction * ignoreTouch;


- (double)startAngle;
- (void)setStartAngle:(double)arg1;
- (BOOL)canBeginDrag;
- (SEL)checkCanBeginDrag;
- (double)maximumDeviation;
- (BOOL)restrictsToAngle;
- (double)minimumDistance;
- (double)angle;
- (double)quietPeriod;
- (void)setStartPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setIgnoreTouch:(id)arg1;
- (id)ignoreTouch;
- (void)clearIgnoreTouch;
- (void)setAngle:(double)arg1;
- (void)setRestrictsToAngle:(BOOL)arg1;
- (void)tooSlow:(id)arg1;
- (void)clearTimer;
- (void)setCheckCanBeginDrag:(SEL)arg1;
- (void)setQuietPeriod:(double)arg1;
- (void)setMaximumDeviation:(double)arg1;
- (void)setMinimumDistance:(double)arg1;
- (void)setCanBeginDrag:(BOOL)arg1;
- (void)setTouch:(id)arg1;
- (void)_resetGestureRecognizer;
- (id)touch;
- (struct CGPoint { float x1; float x2; })startPosition;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;

@end
