/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class PKPhysicsJoint, NSArray, PKExtendedPhysicsBody;

@interface UIAttachmentBehavior : UIDynamicBehavior  {
    struct CGPoint { 
        float x; 
        float y; 
    } _anchorPoint;
    struct CGPoint { 
        float x; 
        float y; 
    } _anchorPointA;
    struct CGPoint { 
        float x; 
        float y; 
    } _anchorPointB;
    PKExtendedPhysicsBody *_anchorBody;
    PKPhysicsJoint *_joint;
    float _damping;
    float _frequency;
    float _length;
    int _type;
    struct { 
        unsigned int dampingSet : 1; 
        unsigned int frequencySet : 1; 
        unsigned int lengthSet : 1; 
        unsigned int isRevolute : 1; 
    } _stateFlags;
    int _attachedBehaviorType;
}

@property(copy,readonly) NSArray * items;
@property(readonly) int attachedBehaviorType;
@property struct CGPoint { float x1; float x2; } anchorPoint;
@property float length;
@property float damping;
@property float frequency;


- (int)attachedBehaviorType;
- (void)_dissociate;
- (void)_associate;
- (id)initWithItem:(id)arg1 offsetFromCenter:(struct UIOffset { float x1; float x2; })arg2 attachedToItem:(id)arg3 offsetFromCenter:(struct UIOffset { float x1; float x2; })arg4;
- (id)initWithItem:(id)arg1 offsetFromCenter:(struct UIOffset { float x1; float x2; })arg2 attachedToAnchor:(struct CGPoint { float x1; float x2; })arg3;
- (id)initWithItem:(id)arg1 attachedToItem:(id)arg2;
- (id)initWithItem:(id)arg1 attachedToAnchor:(struct CGPoint { float x1; float x2; })arg2;
- (void)setFrequency:(float)arg1;
- (float)frequency;
- (float)damping;
- (void)_reevaluateJoint;
- (void)_changedParameter;
- (void)setLength:(float)arg1;
- (id)initWithItem:(id)arg1 point:(struct CGPoint { float x1; float x2; })arg2 attachedToItem:(id)arg3 point:(struct CGPoint { float x1; float x2; })arg4;
- (id)initWithItem:(id)arg1 point:(struct CGPoint { float x1; float x2; })arg2 attachedToAnchor:(struct CGPoint { float x1; float x2; })arg3;
- (id)items;
- (struct CGPoint { float x1; float x2; })anchorPoint;
- (int)type;
- (void)setDamping:(float)arg1;
- (float)length;
- (id)description;
- (void)setAnchorPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)dealloc;
- (id)init;

@end
