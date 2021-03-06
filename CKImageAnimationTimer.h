/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CADisplayLink, NSMutableSet;

@interface CKImageAnimationTimer : NSObject  {
    unsigned int _frame;
    NSMutableSet *_observers;
    CADisplayLink *_displayLink;
}

@property(retain) NSMutableSet * observers;
@property(retain) CADisplayLink * displayLink;

+ (id)sharedTimer;

- (void)animationTimerFired;
- (void)addAnimationTimerObserver:(id)arg1;
- (void)removeAnimationTimerObserver:(id)arg1;
- (id)observers;
- (void)setObservers:(id)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (unsigned int)frame;
- (void)dealloc;
- (id)init;

@end
