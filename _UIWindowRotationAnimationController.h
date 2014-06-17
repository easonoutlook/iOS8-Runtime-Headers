/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface _UIWindowRotationAnimationController : _UIWindowAnimationController  {
    BOOL _skipCallbacks;
    BOOL _earlyLayoutIsNeeded;
    BOOL _updateStatusBarIfNecessary;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _animations;

    double _duration;
}

@property(copy) id animations;
@property double duration;
@property BOOL skipCallbacks;
@property BOOL earlyLayoutIsNeeded;
@property BOOL updateStatusBarIfNecessary;


- (BOOL)earlyLayoutIsNeeded;
- (BOOL)updateStatusBarIfNecessary;
- (id)animations;
- (void)setAnimations:(id)arg1;
- (void)setEarlyLayoutIsNeeded:(BOOL)arg1;
- (void)setUpdateStatusBarIfNecessary:(BOOL)arg1;
- (void)setSkipCallbacks:(BOOL)arg1;
- (BOOL)skipCallbacks;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void)dealloc;

@end
