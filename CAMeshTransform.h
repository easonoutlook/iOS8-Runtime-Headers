/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface CAMeshTransform : NSObject <NSCoding, NSCopying, NSMutableCopying> {
    void *_impl;
    unsigned long _normalization;
    long _subdivisionSteps;
}

@property(readonly) unsigned long vertexCount;
@property(readonly) unsigned long faceCount;
@property(copy,readonly) NSString * depthNormalization;
@property(readonly) int subdivisionSteps;

+ (id)meshTransformWithVertexCount:(unsigned long)arg1 vertices:(const struct CAMeshVertex { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CAPoint3D { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg2 faceCount:(unsigned long)arg3 faces:(const struct CAMeshFace { unsigned int x1[4]; float x2[4]; }*)arg4 depthNormalization:(id)arg5;
+ (void)CAMLParserEndElement:(id)arg1 content:(id)arg2;
+ (void)CAMLParserStartElement:(id)arg1;

- (unsigned long)vertexCount;
- (struct CAMeshVertex { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CAPoint3D { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })vertexAtIndex:(unsigned long)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (float)CA_distanceToValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)_init;
- (id)_subdivideToDepth:(int)arg1;
- (int)subdivisionSteps;
- (struct CAMeshFace { unsigned int x1[4]; float x2[4]; })faceAtIndex:(unsigned long)arg1;
- (unsigned long)faceCount;
- (BOOL)_constructWithData:(id)arg1;
- (id)depthNormalization;
- (id)_initWithMeshTransform:(id)arg1;
- (id)initWithVertexCount:(unsigned long)arg1 vertices:(const struct CAMeshVertex { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CAPoint3D { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg2 faceCount:(unsigned long)arg3 faces:(const struct CAMeshFace { unsigned int x1[4]; float x2[4]; }*)arg4 depthNormalization:(id)arg5;
- (id)meshTransformForLayer:(id)arg1;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; boolx10; }*)arg4;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (id)_data;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end
