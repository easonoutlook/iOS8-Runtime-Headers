/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUSpringAnimationFactory : MPUAnimationFactory  {
    float _damping;
    float _mass;
    float _stiffness;
    float _velocity;
}

@property float damping;
@property float mass;
@property float stiffness;
@property float velocity;


- (float)mass;
- (float)velocity;
- (float)damping;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)setMass:(float)arg1;
- (void)setDamping:(float)arg1;
- (void)setStiffness:(float)arg1;
- (void)setVelocity:(float)arg1;
- (float)stiffness;

@end
