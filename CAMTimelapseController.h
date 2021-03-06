/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class CAMTimelapseState, NSMutableSet, NSObject<OS_dispatch_source>, CAMLowDiskSpaceAlertView, NSDate, NSCountedSet;

@interface CAMTimelapseController : NSObject <CAMStillImageCaptureRequestDelegate, UIAlertViewDelegate> {
    BOOL __ignoringTimerCallbacksForTearDown;
    BOOL __ignoringTimerCallbacksWaitingForCaptureResponse;
    CAMTimelapseState *__state;
    NSObject<OS_dispatch_source> *__captureTimer;
    NSCountedSet *__inFlightTimelapseUUIDs;
    NSMutableSet *__pendingCompletedStates;
    CAMLowDiskSpaceAlertView *__diskSpaceAlert;
}

@property(getter=isCapturing,readonly) BOOL capturing;
@property(readonly) NSDate * captureStartTime;
@property(readonly) CAMTimelapseState * _state;
@property(readonly) NSObject<OS_dispatch_source> * _captureTimer;
@property(readonly) BOOL _ignoringTimerCallbacksForTearDown;
@property(readonly) BOOL _ignoringTimerCallbacksWaitingForCaptureResponse;
@property(readonly) NSCountedSet * _inFlightTimelapseUUIDs;
@property(readonly) NSMutableSet * _pendingCompletedStates;
@property(readonly) CAMLowDiskSpaceAlertView * _diskSpaceAlert;

+ (id)sharedInstance;

- (id)_diskSpaceAlert;
- (id)_pendingCompletedStates;
- (id)_inFlightTimelapseUUIDs;
- (BOOL)_ignoringTimerCallbacksWaitingForCaptureResponse;
- (BOOL)_ignoringTimerCallbacksForTearDown;
- (id)_captureTimer;
- (id)captureStartTime;
- (BOOL)startCapturing;
- (void)restoreConfiguration;
- (void)captureController:(id)arg1 didFinishWriteForResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4;
- (void)captureController:(id)arg1 didGenerateResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4;
- (void)_resetIgnoringTimerCallbacksWaitingForCaptureResponse;
- (id)_videoPreviewImageForTimelapseState:(id)arg1;
- (void)_updateFocusLensPosition:(float)arg1 forTimelapseUUID:(id)arg2 forceUpdate:(BOOL)arg3;
- (void)_notifyInsufficientDiskSpaceForContinuingCapture;
- (BOOL)_enqueueCaptureRequest;
- (void)_captureTimerFired;
- (void)_notifyInsufficientDiskSpaceForStartingCaptureWithNeededBytes:(long long)arg1 availableBytes:(long long)arg2;
- (id)_createPlaceholderAssetForTimelapseState:(id)arg1;
- (void)_updateFocusAndExposureForStopCapturing;
- (void)_saveStateToDisk:(id)arg1;
- (BOOL)_reserveDiskSpaceForTimelapseUUID:(id)arg1;
- (void)_setNewCaptureState;
- (void)_stopCapturingWithReasons:(int)arg1;
- (BOOL)_startCapturing;
- (void)_startCaptureTimer;
- (void)_updateFocusAndExposureForStartCapturing;
- (void)_triggerBackendCrashRecoveryForceEndLastSession:(BOOL)arg1;
- (void)_prepareForTimelapseCapture;
- (void)_restoreCaptureStateFromDisk;
- (void)_teardownCaptureTimer;
- (void)_dismissDiskSpaceAlert;
- (void)_sessionRuntimeErrored:(id)arg1;
- (void)_sessionStarted:(id)arg1;
- (void)_previewStarted:(id)arg1;
- (void)_deviceStarted:(id)arg1;
- (void)stopCapturingWithReasons:(int)arg1;
- (BOOL)isCapturing;
- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (id)_state;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)dealloc;
- (id)init;

@end
