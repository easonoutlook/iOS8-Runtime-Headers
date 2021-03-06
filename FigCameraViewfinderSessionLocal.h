/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class FigCameraViewfinderStream, FigCaptureSessionProxy, NSObject<OS_dispatch_queue>, FigCameraViewfinderLocal, FigStateMachine;

@interface FigCameraViewfinderSessionLocal : FigCameraViewfinderSession <FigCaptureSessionPreviewTapDelegate, FigCameraViewfinderStreamDelegate> {
    FigCameraViewfinderLocal *_viewfinder;
    FigStateMachine *_stateMachine;
    BOOL _ended;
    FigCaptureSessionProxy *_captureSessionProxy;
    long long _identifier;
    FigCameraViewfinderStream *_previewStream;
    NSObject<OS_dispatch_queue> *_previewStreamQueue;
    BOOL _previewStreamClosed;
    long _previewStreamClosedErrorStatus;
}


- (id)viewfinder;
- (void)cameraViewfinderStream:(id)arg1 didCloseWithStatus:(long)arg2;
- (void)cameraViewfinderStreamDidOpen:(id)arg1;
- (void)_closePreviewStream;
- (void)_captureSessionDidStop;
- (void)_captureSessionDidCapturePhotoWithStatus:(long)arg1 thumbnailData:(id)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (id)_initWithOwningViewfinder:(id)arg1 captureSessionProxy:(id)arg2 delegateStorage:(id)arg3;
- (void)captureSession:(id)arg1 previewTapDidOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)captureSessionPreviewTapDidOpen:(id)arg1;
- (void)captureSessionPreviewTapDidClose:(id)arg1;
- (void)closePreviewStream;
- (void)openPreviewStreamWithOptions:(id)arg1;
- (void)_setupStateMachine;
- (long long)identifier;
- (void)dealloc;

@end
