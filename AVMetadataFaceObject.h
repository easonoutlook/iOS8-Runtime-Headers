/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMetadataFaceObjectInternal;

@interface AVMetadataFaceObject : AVMetadataObject <NSCopying> {
    AVMetadataFaceObjectInternal *_internal;
}

@property(readonly) int faceID;
@property(readonly) BOOL hasRollAngle;
@property(readonly) float rollAngle;
@property(readonly) BOOL hasYawAngle;
@property(readonly) float yawAngle;

+ (id)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithFaceID:(int)arg1 hasRollAngle:(BOOL)arg2 rollAngle:(float)arg3 hasYawAngle:(BOOL)arg4 yawAngle:(float)arg5 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg8 originalMetadataObject:(id)arg9 sourceCaptureInput:(id)arg10;
- (id)initWithType:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 originalMetadataObject:(id)arg5 sourceCaptureInput:(id)arg6;
- (id)initWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(float)arg4;
- (id)initWithFaceID:(int)arg1 hasRollAngle:(BOOL)arg2 rollAngle:(float)arg3 hasYawAngle:(BOOL)arg4 yawAngle:(float)arg5 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg6 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg7 bounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg8;
- (float)yawAngle;
- (BOOL)hasYawAngle;
- (float)rollAngle;
- (BOOL)hasRollAngle;
- (int)faceID;

@end