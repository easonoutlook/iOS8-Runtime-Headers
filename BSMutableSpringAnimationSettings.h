/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class CAMediaTimingFunction;

@interface BSMutableSpringAnimationSettings : BSSpringAnimationSettings  {
}

@property double delay;
@property double frameInterval;
@property(retain) CAMediaTimingFunction * timingFunction;
@property float mass;
@property float stiffness;
@property float damping;
@property float epsilon;


- (void)setEpsilon:(float)arg1;
- (void)setTimingFunction:(id)arg1;
- (void)setFrameInterval:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDelay:(double)arg1;
- (void)setMass:(float)arg1;
- (void)setDamping:(float)arg1;
- (void)setStiffness:(float)arg1;

@end
