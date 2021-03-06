/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class SCNNode, SCNPhysicsVehicle;

@interface SCNPhysicsVehicleWheel : NSObject <NSCopying, NSSecureCoding> {
    id _reserved;
    SCNNode *_node;
    SCNPhysicsVehicle *_vehicle;
    int _wheelIndex;
    float _suspensionStiffness;
    float _suspensionCompression;
    float _suspensionDamping;
    float _maximumSuspensionTravel;
    float _frictionSlip;
    float _maximumSuspensionForce;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    } _connectionPosition;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    } _steeringAxis;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    } _axle;
    float _radius;
    float _suspensionRestLength;
    BOOL _isFront;
}

@property(readonly) SCNNode * node;
@property float suspensionStiffness;
@property float suspensionCompression;
@property float suspensionDamping;
@property float maximumSuspensionTravel;
@property float frictionSlip;
@property float maximumSuspensionForce;
@property struct SCNVector3 { float x1; float x2; float x3; } connectionPosition;
@property struct SCNVector3 { float x1; float x2; float x3; } steeringAxis;
@property struct SCNVector3 { float x1; float x2; float x3; } axle;
@property float radius;
@property float suspensionRestLength;

+ (BOOL)supportsSecureCoding;
+ (id)wheelWithNode:(id)arg1;
+ (id)SCNJSExportProtocol;

- (void)setNode:(id)arg1;
- (id)node;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)_setWheelIndex:(int)arg1;
- (void)_setVehicle:(id)arg1;
- (void)setIsFront:(BOOL)arg1;
- (BOOL)isFront;
- (void)setSuspensionRestLength:(float)arg1;
- (float)suspensionRestLength;
- (float)radius;
- (void)setAxle:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })axle;
- (void)setSteeringAxis:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })steeringAxis;
- (struct SCNVector3 { float x1; float x2; float x3; })connectionPosition;
- (void)setMaximumSuspensionForce:(float)arg1;
- (float)maximumSuspensionForce;
- (void)setFrictionSlip:(float)arg1;
- (float)frictionSlip;
- (void)setMaximumSuspensionTravel:(float)arg1;
- (float)maximumSuspensionTravel;
- (void)setSuspensionDamping:(float)arg1;
- (float)suspensionDamping;
- (void)setSuspensionCompression:(float)arg1;
- (float)suspensionCompression;
- (void)setSuspensionStiffness:(float)arg1;
- (float)suspensionStiffness;
- (void)setConnectionPosition:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setRadius:(float)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copy;
- (void)dealloc;
- (id)init;

@end
