/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CAMediaTimingFunction;

@interface PKUISpringAnimationFactory : NSObject <_UIBasicAnimationFactory> {
    float _mass;
    float _stiffness;
    float _damping;
    float _velocity;
    CAMediaTimingFunction *_timing;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _animationDelayHandler;

    double _duration;
}

@property(readonly) double duration;


- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)animationDelayHandler;
- (id)initWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 velocity:(float)arg4;
- (id)_springAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_springAnimationWithKeyPath:(id)arg1;
- (id)initWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 velocity:(float)arg4 timing:(id)arg5;
- (id)initWithVelocity:(float)arg1 timing:(id)arg2;
- (id)springAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)springAnimationWithKeyPath:(id)arg1;
- (void)setAnimationDelayHandler:(id)arg1;
- (id)initWithVelocity:(float)arg1;
- (double)duration;
- (void)dealloc;
- (id)init;

@end
