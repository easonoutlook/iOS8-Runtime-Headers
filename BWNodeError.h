/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class FigCaptureRecordingSettings, NSString, FigCaptureStillImageSettings;

@interface BWNodeError : NSObject  {
    long _errorCode;
    NSString *_sourceNodeDescription;
    FigCaptureStillImageSettings *_stillImageSettings;
    FigCaptureRecordingSettings *_recordingSettings;
}

@property(readonly) long errorCode;
@property(readonly) NSString * sourceNodeDescription;
@property(readonly) FigCaptureStillImageSettings * stillImageSettings;
@property(readonly) FigCaptureRecordingSettings * recordingSettings;

+ (id)newError:(long)arg1 sourceNode:(id)arg2 recordingSettings:(id)arg3;
+ (id)newError:(long)arg1 sourceNode:(id)arg2;
+ (id)newError:(long)arg1 sourceNode:(id)arg2 stillImageSettings:(id)arg3;

- (id)sourceNodeDescription;
- (id)_initWithError:(long)arg1 sourceNode:(id)arg2 stillImageSettings:(id)arg3 recordingSettings:(id)arg4;
- (id)recordingSettings;
- (long)errorCode;
- (id)stillImageSettings;
- (void)dealloc;

@end
