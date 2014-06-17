/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMetadataFaceObjectInternal_FigRecorder;

@interface AVMetadataFaceObject_FigRecorder : AVMetadataObject_FigRecorder  {
    AVMetadataFaceObjectInternal_FigRecorder *_internal;
}

@property(readonly) int faceID;
@property(readonly) BOOL hasRollAngle;
@property(readonly) float rollAngle;
@property(readonly) BOOL hasYawAngle;
@property(readonly) float yawAngle;

+ (id)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;

- (BOOL)isKindOfClass:(Class)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(float)arg4;
- (float)yawAngle;
- (BOOL)hasYawAngle;
- (float)rollAngle;
- (BOOL)hasRollAngle;
- (int)faceID;

@end
