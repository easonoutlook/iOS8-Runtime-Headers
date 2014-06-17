/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@class NSData, NSString;

@interface SCNGeometrySource : NSObject <NSSecureCoding> {
    id _reserved;
    struct __C3DMeshSource { struct __C3DGenericSource { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_3_1; unsigned char x_1_3_2[4]; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; int x_1_2_6; int x_1_2_7; } x_1_1_1; struct __C3DSourceAccessor {} *x_1_1_2; union { struct __CFData {} *x_3_2_1; void *x_3_2_2; } x_1_1_3; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; } x1; unsigned short x2; unsigned short x3; } *_meshSource;
    NSData *_data;
    NSString *_semantic;
    int _vectorCount;
    BOOL _floatComponents;
    int _componentsPerVector;
    int _bytesPerComponent;
    int _dataOffset;
    int _dataStride;
}

@property(readonly) NSData * data;
@property(readonly) NSString * semantic;
@property(readonly) int vectorCount;
@property(readonly) BOOL floatComponents;
@property(readonly) int componentsPerVector;
@property(readonly) int bytesPerComponent;
@property(readonly) int dataOffset;
@property(readonly) int dataStride;

+ (BOOL)supportsSecureCoding;
+ (id)geometrySourceWithTextureCoordinates:(struct CGPoint { float x1; float x2; }*)arg1 count:(int)arg2;
+ (id)geometrySourceWithNormals:(struct SCNVector3 { float x1; float x2; float x3; }*)arg1 count:(int)arg2;
+ (id)geometrySourceWithVertices:(struct SCNVector3 { float x1; float x2; float x3; }*)arg1 count:(int)arg2;
+ (id)dataWithPointArray:(struct CGPoint { float x1; float x2; }*)arg1 count:(int)arg2 bytesPerComponent:(int*)arg3;
+ (id)dataWithVector3Array:(struct SCNVector3 { float x1; float x2; float x3; }*)arg1 count:(int)arg2 bytesPerComponent:(int*)arg3;
+ (id)geometrySourceWithData:(id)arg1 semantic:(id)arg2 vectorCount:(int)arg3 floatComponents:(BOOL)arg4 componentsPerVector:(int)arg5 bytesPerComponent:(int)arg6 dataOffset:(int)arg7 dataStride:(int)arg8;
+ (id)SCNJSExportProtocol;

- (int)dataOffset;
- (short)baseTypeForDataFormat;
- (id)initWithData:(id)arg1 semantic:(id)arg2 vectorCount:(int)arg3 floatComponents:(BOOL)arg4 componentsPerVector:(int)arg5 bytesPerComponent:(int)arg6 dataOffset:(int)arg7 dataStride:(int)arg8;
- (int)dataStride;
- (int)bytesPerComponent;
- (BOOL)floatComponents;
- (int)componentsPerVector;
- (int)vectorCount;
- (id)semantic;
- (id)initWithMeshSource:(struct __C3DMeshSource { struct __C3DGenericSource { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_3_1; unsigned char x_1_3_2[4]; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; int x_1_2_6; int x_1_2_7; } x_1_1_1; struct __C3DSourceAccessor {} *x_1_1_2; union { struct __CFData {} *x_3_2_1; void *x_3_2_2; } x_1_1_3; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; } x1; unsigned short x2; unsigned short x3; }*)arg1;
- (struct __C3DMeshSource { struct __C3DGenericSource { struct __C3DEntity { struct __CFRuntimeBase { unsigned int x_1_3_1; unsigned char x_1_3_2[4]; } x_1_2_1; void *x_1_2_2; struct __CFString {} *x_1_2_3; struct __CFString {} *x_1_2_4; struct __CFDictionary {} *x_1_2_5; int x_1_2_6; int x_1_2_7; } x_1_1_1; struct __C3DSourceAccessor {} *x_1_1_2; union { struct __CFData {} *x_3_2_1; void *x_3_2_2; } x_1_1_3; unsigned int x_1_1_4 : 1; unsigned int x_1_1_5 : 1; unsigned int x_1_1_6 : 1; } x1; unsigned short x2; unsigned short x3; }*)meshSource;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)data;
- (id)description;
- (void)dealloc;
- (id)init;

@end
