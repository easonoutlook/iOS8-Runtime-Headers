/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class SKPhysicsBody;

@interface SKPhysicsJoint : NSObject <NSCoding> {
    BOOL __implicit;
    SKPhysicsBody *bodyA;
    SKPhysicsBody *bodyB;
    float reactionTorque;
    struct CGVector { 
        float dx; 
        float dy; 
    } reactionForce;
}

@property(retain) SKPhysicsBody * bodyA;
@property(retain) SKPhysicsBody * bodyB;
@property(readonly) struct CGVector { float x1; float x2; } reactionForce;
@property(readonly) float reactionTorque;
@property BOOL _implicit;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)bodyB;
- (id)bodyA;
- (void).cxx_destruct;
- (id).cxx_construct;
- (float)reactionTorque;
- (struct CGVector { float x1; float x2; })reactionForce;
- (void)setBodyB:(id)arg1;
- (void)setBodyA:(id)arg1;
- (void)set_implicit:(BOOL)arg1;
- (BOOL)_implicit;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
