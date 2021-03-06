/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class <SKPhysicsContactDelegate>;

@interface SKPhysicsWorld : NSObject <NSCoding> {
    float speed;
    <SKPhysicsContactDelegate> *_contactDelegate;
    struct CGVector { 
        float dx; 
        float dy; 
    } _gravity;
}

@property struct CGVector { float x1; float x2; } gravity;
@property float speed;
@property <SKPhysicsContactDelegate> * contactDelegate;

+ (id)copyWithZone:(struct _NSZone { }*)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)fields;
- (id)bodies;
- (void)setGravity:(struct CGVector { float x1; float x2; })arg1;
- (struct CGVector { float x1; float x2; })gravity;
- (BOOL)stepWithTime:(double)arg1 velocityIterations:(unsigned int)arg2 positionIterations:(unsigned int)arg3;
- (void)enumerateBodiesInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 usingBlock:(id)arg2;
- (void)setContactDelegate:(id)arg1;
- (id)contactDelegate;
- (id).cxx_construct;
- (void)removeBody:(id)arg1;
- (void)addBody:(id)arg1;
- (void)addJoint:(id)arg1;
- (void)removeJoint:(id)arg1;
- (struct CGVector { float x1; float x2; })sampleField:(id)arg1 position:(struct CGPoint { float x1; float x2; })arg2;
- (struct CGVector { float x1; float x2; })sampleFields:(struct CGPoint { float x1; float x2; })arg1;
- (id)bodyAlongRayStart:(struct CGPoint { float x1; float x2; })arg1 end:(struct CGPoint { float x1; float x2; })arg2;
- (id)bodyInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)bodyAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)enumerateBodiesAlongRayStart:(struct CGPoint { float x1; float x2; })arg1 end:(struct CGPoint { float x1; float x2; })arg2 usingBlock:(id)arg3;
- (void)enumerateBodiesAtPoint:(struct CGPoint { float x1; float x2; })arg1 usingBlock:(id)arg2;
- (void)removeAllJoints;
- (void)removeAllBodies;
- (BOOL)hasBodies;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSpeed:(float)arg1;
- (float)speed;

@end
