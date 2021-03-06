/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSObject<TSDAutoscrollDelegate>, NSTimer;

@interface TSDAutoscroll : NSObject  {
    NSObject<TSDAutoscrollDelegate> *mTarget;
    struct CGPoint { 
        float x; 
        float y; 
    } mPoint;
    int mDirections;
    double mRepeatInterval;
    NSTimer *mTimer;
    unsigned int mCount;
    BOOL mActive;
    struct CGPoint { 
        float x; 
        float y; 
    } mLastAutoscrollDelta;
    double mLastFired;
}

@property NSObject<TSDAutoscrollDelegate> * target;
@property struct CGPoint { float x1; float x2; } point;
@property int directions;
@property double repeatInterval;
@property unsigned int count;
@property BOOL active;
@property(readonly) struct CGPoint { float x1; float x2; } lastAutoscrollDelta;

+ (void)startAutoscroll:(id)arg1 unscaledPoint:(struct CGPoint { float x1; float x2; })arg2;

- (void)setDirections:(int)arg1;
- (void)setPoint:(struct CGPoint { float x1; float x2; })arg1;
- (double)repeatInterval;
- (void)setActive:(BOOL)arg1;
- (void)timerFired:(id)arg1;
- (struct CGPoint { float x1; float x2; })point;
- (int)directions;
- (BOOL)active;
- (void)setCount:(unsigned int)arg1;
- (id)target;
- (void)setRepeatInterval:(double)arg1;
- (void)setTarget:(id)arg1;
- (void)invalidate;
- (unsigned int)count;
- (void)dealloc;
- (struct CGPoint { float x1; float x2; })lastAutoscrollDelta;
- (unsigned int)p_deltaForCount:(unsigned int)arg1;
- (BOOL)startAutoscroll:(id)arg1 unscaledPoint:(struct CGPoint { float x1; float x2; })arg2 directions:(int)arg3 repeatInterval:(double)arg4;

@end
