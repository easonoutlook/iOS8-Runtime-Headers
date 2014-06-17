/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@class SKNode;

@interface IKLink : NSObject  {
    SKNode *_node;
    float _angleInitial;
    float _angle;
    float _length;
    union _GLKVector2 { 
        struct { 
            float x; 
            float y; 
        } ; 
        struct { 
            float s; 
            float t; 
        } ; 
        float v[2]; 
    } _position;
}

@property(retain) SKNode * node;
@property union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; } position;
@property float angleInitial;
@property(readonly) float angle;
@property float length;


- (void)setNode:(id)arg1;
- (void).cxx_destruct;
- (float)angle;
- (id)initWithNode:(id)arg1;
- (id)node;
- (id).cxx_construct;
- (void)setLength:(float)arg1;
- (void)setAngleInitial:(float)arg1;
- (float)angleInitial;
- (void)rotateByAngle:(float)arg1;
- (float)normalizeAngle:(float)arg1;
- (float)length;
- (union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; })position;
- (void)setPosition:(union _GLKVector2 { struct { float x_1_1_1; float x_1_1_2; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; float x3[2]; })arg1;

@end
