/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIMotionEffectAcceleratedOutputRange : NSObject <NSCoding, NSCopying> {
    struct UIOffset { 
        float horizontal; 
        float vertical; 
    } _referenceOffset;
    struct CGPoint { 
        float x; 
        float y; 
    } _referenceAcceleration;
    struct CGPoint { 
        float x; 
        float y; 
    } _acceleration;
}

@property(readonly) struct CGPoint { float x1; float x2; } acceleration;


- (struct UIOffset { float x1; float x2; })acceleratedOutputForViewerOffset:(struct UIOffset { float x1; float x2; })arg1 accelerationBoostFactor:(struct CGPoint { float x1; float x2; })arg2;
- (void)setAcceleration:(struct CGPoint { float x1; float x2; })arg1 fixingOutputForViewerOffset:(struct UIOffset { float x1; float x2; })arg2;
- (void)reset;
- (struct CGPoint { float x1; float x2; })acceleration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)init;

@end
