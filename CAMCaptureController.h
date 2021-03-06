/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDictionary, AVCaptureDevice, AVCaptureDeviceFormat, CAMAvalancheCaptureService, NSMutableArray, AVCaptureSession, AVCaptureVideoDataOutput, NSString, NSTimer, AVCaptureStillImageOutput, BKSAccelerometer, AVCaptureMetadataOutput, CAMEffectsRenderer, NSMutableDictionary, AVCaptureOutput, <PLCameraControllerDelegate>, CAMDebugCaptureService, NSObject<OS_dispatch_queue>, AVCaptureDeviceInput, NSObject<OS_dispatch_source>, NSArray, AVCaptureVideoPreviewLayer, AVCaptureMovieFileOutput;

@interface CAMCaptureController : NSObject <AVCaptureMetadataOutputObjectsDelegate, PLCameraEffectsRendererDelegate, BKSAccelerometerDelegate, AVCaptureFileOutputRecordingDelegate, AVCaptureVideoDataOutputSampleBufferDelegate> {
    AVCaptureSession *_avCaptureSession;
    AVCaptureDevice *_avCaptureDeviceFront;
    AVCaptureDevice *_avCaptureDeviceBack;
    AVCaptureDevice *_avCaptureDeviceAudio;
    AVCaptureDeviceInput *_avCaptureInputFront;
    AVCaptureDeviceInput *_avCaptureInputBack;
    AVCaptureDeviceInput *_avCaptureInputAudio;
    AVCaptureStillImageOutput *_avCaptureOutputPhoto;
    AVCaptureMovieFileOutput *_avCaptureOutputVideo;
    AVCaptureVideoDataOutput *_avCaptureOutputPanorama;
    AVCaptureVideoDataOutput *_avCaptureOutputEffectPreview;
    AVCaptureMetadataOutput *_avCaptureOutputMetadata;
    AVCaptureDeviceFormat *_mogulFormatBack;
    AVCaptureDeviceFormat *_mogulFormatFront;
    struct OpaqueFigSampleBufferProcessor { } *_panoramaProcessor;
    struct _CAImageQueue { } *_panoramaImageQueue;
    struct CGSize { 
        float width; 
        float height; 
    } _panoramaPreviewSize;
    float _panoramaPreviewScale;
    NSObject<OS_dispatch_queue> *_avCaptureSessionDispatchQueue;
    NSObject<OS_dispatch_queue> *_avCaptureOutputMetadataQueue;
    AVCaptureDevice *_currentDevice;
    AVCaptureDeviceInput *_currentInput;
    AVCaptureOutput *_currentOutput;
    AVCaptureVideoPreviewLayer *_previewLayer;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cleanAperture;
    BOOL _shouldBeStopped;
    int _cameraMode;
    int _cameraDevice;
    int _flashMode;
    int _captureOrientation;
    BOOL _imageWriterQueueIsAvailable;
    unsigned int _ioSurfaceCounter;
    BOOL _hdrCaptureIncludesEV0Image;
    int _hdrEV0PhotoCaptureCount;
    <PLCameraControllerDelegate> *_delegate;
    double _maximumCaptureDuration;
    int _videoCaptureQuality;
    NSString *_videoCapturePath;
    BKSAccelerometer *_accelerometer;
    struct CGImage { } *_lastVideoPreviewFrameImageRef;
    BOOL _isFocusingOnFace;
    int _cameraOrientation;
    NSTimer *_idleTimerTimer;
    BOOL _delaySuspend;
    NSTimer *_delaySuspendTimer;
    float _maxVideoZoomFactorRear;
    float _maxVideoZoomFactorFront;
    unsigned int _keepAliveCounter;
    NSTimer *_keepAliveTimer;
    NSTimer *_keepAliveFailsafeTimer;
    struct { 
        unsigned int supportsVideo : 1; 
        unsigned int supportsHDRRear : 1; 
        unsigned int supportsHDRFront : 1; 
        unsigned int supportsSuggestedHDRRear : 1; 
        unsigned int supportsSuggestedHDRFront : 1; 
        unsigned int supportsAvalancheAnalysisRear : 1; 
        unsigned int supportsAvalancheAnalysisFront : 1; 
        unsigned int supportsMogulRear : 1; 
        unsigned int supportsMogulFront : 1; 
        unsigned int supportsLiveEffects : 1; 
        unsigned int supportsPanorama : 1; 
        unsigned int supportsVideoStillCapture : 1; 
        unsigned int supportsPreviewDuringHDR : 1; 
        unsigned int supportsTimelapse : 1; 
        unsigned int hasFlash : 1; 
        unsigned int hasBackCamera : 1; 
        unsigned int hasFrontCamera : 1; 
        unsigned int deferStartVideoCapture : 1; 
        unsigned int inCall : 1; 
        unsigned int isCapturingPanorama : 1; 
        unsigned int isProcessingPanorama : 1; 
        unsigned int focusDisabled : 1; 
        unsigned int serverDied : 1; 
        unsigned int didGetDeviceUnavailableInBackground : 1; 
        unsigned int didSetLocationData : 1; 
        unsigned int isChangingMode : 1; 
        unsigned int flashWillFireAutomatically : 1; 
        unsigned int torchWillFireAutomatically : 1; 
        unsigned int isCameraApp : 1; 
        unsigned int didSendPreviewStartedCallbackToEmptyDelegate : 1; 
        unsigned int didGetPreviewStartedCallbackAfterResume : 1; 
        unsigned int logFocusInfo : 1; 
        unsigned int logPreviewInfo : 1; 
        unsigned int logCaptureInfo : 1; 
        unsigned int logFlashInfo : 1; 
        unsigned int logDebugInfo : 1; 
        unsigned int logPanoInfo : 1; 
        unsigned int enable720p60Recording : 1; 
        unsigned int isInternalInstall : 1; 
        unsigned int shouldTearDownPano : 1; 
        unsigned int convertSampleBufferToJPEG : 1; 
        unsigned int delegateDidStartSession : 1; 
        unsigned int delegateWillStartPreview : 1; 
        unsigned int delegatePreviewDidStart : 1; 
        unsigned int delegateSessionDidStart : 1; 
        unsigned int delegateDidStopSession : 1; 
        unsigned int delegateWillStopSession : 1; 
        unsigned int delegateSessionDidStop : 1; 
        unsigned int delegateSessionWasInterrupted : 1; 
        unsigned int delegateSessionInterruptionEnded : 1; 
        unsigned int delegateServerDied : 1; 
        unsigned int delegateCleanApertureDidChange : 1; 
        unsigned int delegateModeWillChange : 1; 
        unsigned int delegateModeDidChange : 1; 
        unsigned int delegateWillTakePhoto : 1; 
        unsigned int delegateDidTakePhoto : 1; 
        unsigned int delegateCapturedPhoto : 1; 
        unsigned int delegateDidChangeCaptureAbility : 1; 
        unsigned int delegateDidChangePanoramaConfiguration : 1; 
        unsigned int delegateDidUpdatePanoramaPreview : 1; 
        unsigned int delegateDidReceivePanoramaIssue : 1; 
        unsigned int delegateDidStartPanoramaCapture : 1; 
        unsigned int delegateWillStopPanoramaCapture : 1; 
        unsigned int delegatePanoramaWillStartProcessing : 1; 
        unsigned int delegatePanoramaDidStopProcessing : 1; 
        unsigned int delegateCapturedPanorama : 1; 
        unsigned int delegateVideoCaptureDidStart : 1; 
        unsigned int delegateDidStopVideoCapture : 1; 
        unsigned int delegateVideoCaptureDidStop : 1; 
        unsigned int delegateDidChangeFocusMode : 1; 
        unsigned int delegateDidChangeExposureMode : 1; 
        unsigned int delegateFocusDidStart : 1; 
        unsigned int delegateFocusDidEnd : 1; 
        unsigned int delegateExposureDidStart : 1; 
        unsigned int delegateExposureDidEnd : 1; 
        unsigned int delegateWillResetFocusExposure : 1; 
        unsigned int delegateDidChangeUserLockedFocus : 1; 
        unsigned int delegateDidChangeUserLockedExposure : 1; 
        unsigned int delegateDidChangeExposureTargetBias : 1; 
        unsigned int delegateFaceMetadataDidChange : 1; 
        unsigned int delegateVideoZoomFactorDidChange : 1; 
        unsigned int delegateFlashWillFireChanged : 1; 
        unsigned int delegateTorchActiveChanged : 1; 
        unsigned int delegateTorchAvailabilityChanged : 1; 
        unsigned int delegateHDRSuggestionChanged : 1; 
        unsigned int delegateDidStartVideoRequest : 1; 
        unsigned int delegateDidStopVideoRequest : 1; 
        unsigned int delegateDidFinishVideoRequest : 1; 
        unsigned int delegateDidStartCapturingPanoramaRequest : 1; 
        unsigned int delegateDidStopCapturingPanoramaRequest : 1; 
        unsigned int delegateDidStartProcessingPanoramaRequest : 1; 
        unsigned int delegateDidStopProcessingPanoramaRequest : 1; 
        unsigned int delegateDidFinishPanoramaRequest : 1; 
        unsigned int delegatePanoramaConfigurationChanged : 1; 
        unsigned int delegateDidOutputPanoramaParameters : 1; 
    } _cameraFlags;
    NSObject<OS_dispatch_queue> *_dispatchTimerQueue;
    NSObject<OS_dispatch_source> *_dispatchTimer;
    BOOL __previewPaused;
    BOOL __previewLayerEnabledForRenderer;
    BOOL __videoDataOutputEnabledForRenderer;
    BOOL _capturingTimelapse;
    BOOL _resetFocusWhenSubjectAreaChanged;
    BOOL _resetExposureWhenSubjectAreaChanged;
    BOOL _userLockedFocus;
    BOOL _userLockedExposure;
    BOOL _HDRDetectionEnabled;
    BOOL _performingAvalancheCapture;
    BOOL _disableAllPreviewSuspensionDuringCapture;
    BOOL __atomicEffectsAvailable;
    BOOL __configuringCamera;
    BOOL __sessionReady;
    BOOL __atomicModeChangeWaitingForPreviewStarted;
    BOOL __atomicModeChangeWaitingForConfigureSession;
    BOOL __wasStillImageStabilzationOnBeforeTimedCapture;
    BOOL __ignoreSubjectAreaChanges;
    BOOL __lockFocusAfterFocusFinishes;
    BOOL __lockExposureAfterExposeFinishes;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id postSessionSetupBlock;

    CAMEffectsRenderer *_effectsRenderer;
    NSArray *_supportedCameraModes;
    NSObject<OS_dispatch_queue> *__effectFilterIndexQueue;
    NSDictionary *__effectFilterIndices;
    NSObject<OS_dispatch_queue> *__captureIsolationQueue;
    NSObject<OS_dispatch_queue> *__effectRenderingQueue;
    NSMutableArray *__inflightStillImageCaptureRequests;
    NSMutableArray *__inflightVideoCaptureResponses;
    NSMutableArray *__deferredVideoCaptureRequests;
    NSMutableArray *__inflightPanoramaCaptureRequests;
    NSMutableArray *__processingPanoramaCaptureRequests;
    NSMutableArray *__currentFaceMetadata;
    NSMutableDictionary *__servicesByType;
    CAMAvalancheCaptureService *__avalancheCaptureService;
    CAMDebugCaptureService *__debugCaptureService;
    int __deviceLockCount;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __lockLensPositionCompletionBlock;

    float __lockLensPositionTarget;
    double __ignoreSubjectAreaChangesUntilTime;
}

@property(readonly) AVCaptureSession * currentSession;
@property(readonly) AVCaptureStillImageOutput * imageOutput;
@property AVCaptureDevice * currentDevice;
@property AVCaptureDeviceInput * currentInput;
@property AVCaptureOutput * currentOutput;
@property(readonly) AVCaptureVideoPreviewLayer * previewLayer;
@property int previewOrientation;
@property(readonly) float panoramaPreviewScale;
@property(readonly) struct CGSize { float x1; float x2; } panoramaPreviewSize;
@property(getter=isCapturingTimelapse) BOOL capturingTimelapse;
@property float exposureTargetBias;
@property(readonly) float exposureTargetBiasDefault;
@property(readonly) float exposureTargetBiasMin;
@property(readonly) float exposureTargetBiasMax;
@property struct CGPoint { float x1; float x2; } focusPointOfInterest;
@property struct CGPoint { float x1; float x2; } exposurePointOfInterest;
@property BOOL resetFocusWhenSubjectAreaChanged;
@property BOOL resetExposureWhenSubjectAreaChanged;
@property BOOL userLockedFocus;
@property BOOL userLockedExposure;
@property int captureOrientation;
@property int cameraMode;
@property int flashMode;
@property int cameraDevice;
@property BOOL convertSampleBufferToJPEG;
@property BOOL isCameraApp;
@property(readonly) BOOL supportsHDR;
@property(readonly) BOOL supportsHDRSuggestion;
@property(getter=isHDRDetectionEnabled) BOOL HDRDetectionEnabled;
@property(getter=isHDRSuggested,readonly) BOOL HDRSuggested;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } cleanAperture;
@property(copy) id postSessionSetupBlock;
@property(readonly) int cameraOrientation;
@property(retain) CAMEffectsRenderer * effectsRenderer;
@property(retain,readonly) NSArray * activeFilters;
@property(copy) NSArray * supportedCameraModes;
@property float videoZoomFactor;
@property BOOL performingAvalancheCapture;
@property BOOL disableAllPreviewSuspensionDuringCapture;
@property(setter=_setEffectsAvailable:) BOOL _effectsAvailable;
@property(setter=_setAtomicEffectsAvailable:) BOOL _atomicEffectsAvailable;
@property(retain,readonly) NSObject<OS_dispatch_queue> * _effectFilterIndexQueue;
@property(setter=_setEffectFilterIndices:,retain) NSDictionary * _effectFilterIndices;
@property(getter=_isConfiguringCamera,setter=_setConfiguringCamera:) BOOL _configuringCamera;
@property(retain,readonly) NSObject<OS_dispatch_queue> * _captureIsolationQueue;
@property(retain,readonly) NSObject<OS_dispatch_queue> * _effectRenderingQueue;
@property(getter=_isSessionReady,setter=_setSessionReady:) BOOL _sessionReady;
@property(getter=_isModeChangeWaitingForPreviewStarted,setter=_setModeChangeWaitingForPreviewStarted:) BOOL _modeChangeWaitingForPreviewStarted;
@property(getter=_isAtomicModeChangeWaitingForPreviewStarted,setter=_setAtomicModeChangeWaitingForPreviewStarted:) BOOL _atomicModeChangeWaitingForPreviewStarted;
@property(getter=_isModeChangeWaitingForConfigureSession,setter=_setModeChangeWaitingForConfigureSession:) BOOL _modeChangeWaitingForConfigureSession;
@property(getter=_isAtomicModeChangeWaitingForConfigureSession,setter=_setAtomicModeChangeWaitingForConfigureSession:) BOOL _atomicModeChangeWaitingForConfigureSession;
@property(readonly) NSMutableArray * _inflightStillImageCaptureRequests;
@property(readonly) NSMutableArray * _inflightVideoCaptureResponses;
@property(readonly) NSMutableArray * _deferredVideoCaptureRequests;
@property(readonly) NSMutableArray * _inflightPanoramaCaptureRequests;
@property(readonly) NSMutableArray * _processingPanoramaCaptureRequests;
@property(readonly) BOOL _wasStillImageStabilzationOnBeforeTimedCapture;
@property(readonly) NSMutableArray * _currentFaceMetadata;
@property(getter=_isPreviewPaused,setter=_setPreviewPaused:) BOOL _previewPaused;
@property(setter=_setPreviewLayerEnabledForRenderer:) BOOL _previewLayerEnabledForRenderer;
@property(setter=_setVideoDataOutputEnabledForRenderer:) BOOL _videoDataOutputEnabledForRenderer;
@property(readonly) NSMutableDictionary * _servicesByType;
@property(readonly) CAMAvalancheCaptureService * _avalancheCaptureService;
@property(readonly) CAMDebugCaptureService * _debugCaptureService;
@property(setter=_setDeviceLockCount:) int _deviceLockCount;
@property(readonly) BOOL _ignoreSubjectAreaChanges;
@property(readonly) double _ignoreSubjectAreaChangesUntilTime;
@property(readonly) BOOL _lockFocusAfterFocusFinishes;
@property(readonly) BOOL _lockExposureAfterExposeFinishes;
@property(setter=_setLockLensPositionCompletionBlock:,copy) id _lockLensPositionCompletionBlock;
@property(setter=_setLockLensPositionTarget:) float _lockLensPositionTarget;

+ (BOOL)_shouldExtractDiagnostics;
+ (id)_dateFormatterForVideoMetadata;
+ (id)videoMetadataArrayWithLocation:(id)arg1 date:(id)arg2 didSetLocationData:(BOOL*)arg3;
+ (BOOL)isStillImageMode:(int)arg1;
+ (float)focusLensPositionCurrentSentinel;
+ (BOOL)isVideoMode:(int)arg1;
+ (id)sharedInstance;

- (void)stopPreview;
- (void)pausePreview;
- (void)startPreview;
- (id)currentSession;
- (float)exposureTargetBias;
- (void)setExposureTargetBias:(float)arg1;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (float)videoZoomFactor;
- (void)setVideoZoomFactor:(float)arg1;
- (void)setFlashMode:(int)arg1;
- (int)flashMode;
- (void)_setLockLensPositionTarget:(float)arg1;
- (float)_lockLensPositionTarget;
- (void)_setLockLensPositionCompletionBlock:(id)arg1;
- (id)_lockLensPositionCompletionBlock;
- (BOOL)_lockExposureAfterExposeFinishes;
- (BOOL)_lockFocusAfterFocusFinishes;
- (double)_ignoreSubjectAreaChangesUntilTime;
- (BOOL)_ignoreSubjectAreaChanges;
- (id)_debugCaptureService;
- (id)_currentFaceMetadata;
- (BOOL)_wasStillImageStabilzationOnBeforeTimedCapture;
- (id)_processingPanoramaCaptureRequests;
- (id)_inflightPanoramaCaptureRequests;
- (id)_deferredVideoCaptureRequests;
- (id)_inflightStillImageCaptureRequests;
- (id)_effectRenderingQueue;
- (BOOL)disableAllPreviewSuspensionDuringCapture;
- (BOOL)isHDRDetectionEnabled;
- (struct CGSize { float x1; float x2; })panoramaPreviewSize;
- (id)imageOutput;
- (void)setCurrentDevice:(id)arg1;
- (void)_panoramaDidReceiveErrorNotificationString:(struct __CFString { }*)arg1;
- (void)_panoramaDidReceiveWarningNotificationString:(struct __CFString { }*)arg1;
- (void)_panoramaDidReceiveStatusNotificationString:(struct __CFString { }*)arg1;
- (void)panoramaProcessorOutputCallbackWithStatus:(long)arg1 buffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)_updateOrientationForConnection:(id)arg1;
- (double)currentMinFrameDuration;
- (void)_faceMetadataDidChange:(id)arg1;
- (void)_debugFocusState;
- (void)setVideoCaptureMaximumDuration:(double)arg1;
- (void)setVideoCaptureQuality:(int)arg1;
- (void)_verifyVideoConsolidationForVideoAtPath:(id)arg1 outUserInfo:(id*)arg2;
- (void)capturePhoto;
- (BOOL)imageWriterQueueIsAvailable;
- (void)_clearPreviewLayer;
- (BOOL)convertSampleBufferToJPEG;
- (void)setConvertSampleBufferToJPEG:(BOOL)arg1;
- (void)_panoramaDidReceiveIssueWithPanoramaString:(struct __CFString { }*)arg1;
- (struct CGSize { float x1; float x2; })_panoramaPreviewSize;
- (void)_createAssetForPanoramaResponse:(id)arg1;
- (void)_processPanoramaRequest:(id)arg1;
- (void)_lockFocusAndExposureForPano;
- (id)_sanitizePanoramaCaptureRequest:(id)arg1;
- (BOOL)canCapturePanorama;
- (void)_createAssetForVideoCaptureResponse:(id)arg1;
- (void)_verifyVideoConsolidationForVideoResponse:(id)arg1;
- (void)_updateIdleTimerForDidFinishVideoRecording;
- (void)_updateIdleTimerForStartVideoCapture;
- (void)_applyTorchSettingsFromVideoRequest:(id)arg1;
- (void)_applyCaptureSettingsFromVideoRequest:(id)arg1;
- (id)_sanitizeVideoCaptureRequest:(id)arg1;
- (void)releaseIOSurface;
- (void)captureIOSurface;
- (int)_addOrientationMetadataToResponse:(id)arg1;
- (void)_updateImagePickerMetadataForResponse:(id)arg1;
- (void)_updateResponse:(id)arg1 withSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 metadata:(id)arg3 error:(id)arg4;
- (void)_saveStillImageResponse:(id)arg1 completionBlock:(id)arg2;
- (void)_updateResponse:(id)arg1 withOriginalIOSurface:(struct __IOSurface { }*)arg2 originalSize:(unsigned long)arg3 unfilteredPreviewSurface:(struct __IOSurface { }*)arg4 unfilteredPreviewSize:(unsigned long)arg5 filteredPreviewSurface:(struct __IOSurface { }*)arg6 filteredPreviewSize:(unsigned long)arg7 metadata:(id)arg8 error:(id)arg9;
- (void)_completedWriteForResponse:(id)arg1 request:(id)arg2 error:(id)arg3;
- (void)_completedResponse:(id)arg1 forRequest:(id)arg2 error:(id)arg3;
- (void)_notifyServicesOfCompletedResponse:(id)arg1 error:(id)arg2;
- (void)_notifyServicesOfGeneratedResponse:(id)arg1 error:(id)arg2;
- (void)_generatedResponse:(id)arg1 forRequest:(id)arg2 error:(id)arg3;
- (id)_stillImageCaptureResponseForRequest:(id)arg1 error:(id)arg2;
- (void)_notifyServicesOfEnqueuedRequest:(id)arg1;
- (void)_applyCaptureSettingsFromStillImageRequest:(id)arg1 withConnection:(id)arg2;
- (id)_captureConnectionForStillImageCapture;
- (id)_sanitizeStillImageRequest:(id)arg1;
- (void)_applyAudioSettingsFromRequest:(id)arg1;
- (void)_applyStillImageStabilizationSettingsFromRequest:(id)arg1;
- (void)_applyHDRSettingsFromRequest:(id)arg1;
- (void)_applyFlashSettingsFromRequest:(id)arg1;
- (void)_resetRecentFaceMetadata;
- (int)_serviceTypeForCaptureRequest:(id)arg1;
- (id)_servicesByType;
- (void)_createTimelapseServicesIfNecessary;
- (void)_createPanoramaServicesIfNecessary;
- (void)_createVideoServicesIfNecessary;
- (void)_createStillImageServicesIfNecessary;
- (void)_forceKeepAliveFailsafeTimeout;
- (void)_checkKeepAliveStatus;
- (BOOL)_videoDataOutputEnabledForRenderer;
- (BOOL)_previewLayerEnabledForRenderer;
- (BOOL)_isPreviewPaused;
- (void)_lockFocusForAvalancheCapture;
- (void)_setPerformingAvalancheCapture:(BOOL)arg1;
- (id)_avalancheCaptureService;
- (void)_setAtomicEffectsAvailable:(BOOL)arg1;
- (BOOL)_atomicEffectsAvailable;
- (void)_notifyEffectFilterIndexChanged;
- (void)_setEffectFilterIndices:(id)arg1;
- (unsigned int)_sanitizeEffectFilterIndex:(unsigned int)arg1 forMode:(int)arg2;
- (id)_effectFilterIndices;
- (id)_effectFilterIndexQueue;
- (BOOL)_effectsAvailable;
- (unsigned int)_activeFilterIndex;
- (void)_setSupportedCameraModes:(id)arg1;
- (BOOL)supportsPanorama;
- (float)_limitZoomFactor:(float)arg1 forDevice:(id)arg2;
- (BOOL)_supportsHDRSuggestionForCaptureDevice:(id)arg1;
- (void)_suggestedHDRChanged;
- (void)_didTakePhoto;
- (void)_willTakePhoto;
- (void)_faceRectangleChanged;
- (void)_updateTorchAvailability;
- (void)_torchLevelChanged;
- (void)_torchActiveChanged;
- (void)_flashStateChanged;
- (void)_exposureTargetBiasChanged;
- (void)_whiteBalanceCompleted;
- (void)_whiteBalanceStarted;
- (void)_exposureCompleted;
- (void)_exposureStarted;
- (void)_focusCompleted;
- (void)_focusStarted;
- (BOOL)resetExposureWhenSubjectAreaChanged;
- (BOOL)resetFocusWhenSubjectAreaChanged;
- (void)_disableSubjectAreaChangeMonitoringIfNeeded;
- (void)_enableSubjectAreaChangedMonitoringIfNeeded;
- (void)_autofocusAfterCapture;
- (void)_resetFocusAndExposureIfNotExplicitlyLocked;
- (void)_startContinuousAutoExposureAtCenter;
- (void)_startContinuousAutoFocusAtCenter;
- (int)_whiteBalanceModeForExposureMode:(int)arg1;
- (int)effectiveExposureMode;
- (void)_updateWhiteBalanceModeForExposureMode:(int)arg1;
- (void)_setExposureMode:(int)arg1;
- (void)_setFocusModeLockedWithLensPosition;
- (void)_setFocusMode:(int)arg1 forceSmoothFocus:(BOOL)arg2;
- (int)_CAMExposureModeForAVExposureMode:(int)arg1;
- (int)_CAMFocusModeForAVFocusMode:(int)arg1;
- (int)_AVExposureModeForCAMExposureMode:(int)arg1;
- (BOOL)_modeAllowsAEAF;
- (int)_AVFocusModeForCAMFocusMode:(int)arg1;
- (void)_unlockCurrentDeviceForConfiguration;
- (BOOL)_lockCurrentDeviceForConfiguration;
- (void)_processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (BOOL)_isConfiguringCamera;
- (void)_updateIdleTimerForDidFinishRecording;
- (void)_delayIdleTimerByTimeInterval:(double)arg1;
- (void)_disableIdleIndefinitely;
- (BOOL)isCapturingTimelapse;
- (void)_resetIdleTimer;
- (void)_updateIdleTimerForCapturingTimelapseChanged;
- (void)_updateIdleTimerForStopVideoCapture;
- (void)_lockFocusForRecording;
- (id)_videoMetadataArrayIncludingSensitiveProperties:(BOOL)arg1;
- (void)setFaceDetectionEnabled:(BOOL)arg1;
- (void)_setVideoCapturePath:(id)arg1;
- (void)_capturedPhotoWithDictionary:(id)arg1 error:(id)arg2 HDRUsed:(BOOL)arg3;
- (struct __IOSurface { }*)_newFilteredSurfaceFromSurface:(struct __IOSurface { }*)arg1 filters:(id)arg2;
- (id)_captureIsolationQueue;
- (void)_setOrientationForConnection:(id)arg1;
- (void)_setOrientation;
- (BOOL)isExposing;
- (BOOL)_isCapturingStillDuringVideo;
- (BOOL)_sanityCheckSessionCanCaptureWithOutput:(id)arg1;
- (BOOL)capturePhotoUsingHDR:(BOOL)arg1;
- (void)_setKeepAlive:(BOOL)arg1 forVideoCapture:(BOOL)arg2;
- (void)performAutofocusAfterCapture;
- (void)_processCapturedPhotoWithDictionary:(id)arg1 error:(id)arg2 HDRUsed:(BOOL)arg3;
- (void)_updateIdleTimerForStillImageCaptured;
- (id)_inflightVideoCaptureResponses;
- (void)_recoverFromServerError;
- (void)_updateIdleTimerForPreviewStopped;
- (void)_setFlashMode:(int)arg1 force:(BOOL)arg2;
- (void)_updateIdleTimerForPreviewStarted;
- (BOOL)_modeUsesCompassHeading;
- (void)_setOrientationEventsEnabled:(BOOL)arg1;
- (id)currentInput;
- (BOOL)_setupCamera;
- (void)_tearDownCamera;
- (void)_setSessionReady:(BOOL)arg1;
- (void)executeBlockOnMainQueue:(id)arg1;
- (void)_debug_cancelWaitForIris;
- (void)_forceDelaySuspendTimeout;
- (void)_setDelaySuspend:(BOOL)arg1;
- (id)postSessionSetupBlock;
- (void)_subjectAreaDidChange:(id)arg1;
- (void)_inputPortFormatDescriptionDidChange:(id)arg1;
- (void)_movieFileRecordingCompleted:(id)arg1;
- (void)_interruptionEnded:(id)arg1;
- (void)_wasInterrupted:(id)arg1;
- (void)_sessionStopped:(id)arg1;
- (void)_setEffectsRenderer:(id)arg1;
- (id)_mogulFormatFromDevice:(id)arg1;
- (void)_debug_waitForIrisToOpen;
- (void)_debug_checkIris;
- (id)_debug_dispatchTimerQueue;
- (void)_previewStarted;
- (void)_jankyPreviewStartedWorkaround;
- (void)_enableKeepAliveFailsafeTimer;
- (void)_setDeviceLockCount:(int)arg1;
- (int)_deviceLockCount;
- (void)_setAtomicModeChangeWaitingForConfigureSession:(BOOL)arg1;
- (BOOL)_isAtomicModeChangeWaitingForConfigureSession;
- (void)_setAtomicModeChangeWaitingForPreviewStarted:(BOOL)arg1;
- (BOOL)_isAtomicModeChangeWaitingForPreviewStarted;
- (void)enqueueBlockOnMainQueue:(id)arg1;
- (BOOL)_isModeChangeWaitingForConfigureSession;
- (BOOL)_isModeChangeWaitingForPreviewStarted;
- (void)_notifyControllerModeDidChange;
- (void)enqueueBlockInCaptureSessionQueue:(id)arg1;
- (void)_updateEffectsRendererFilterIndexForceStateChange:(BOOL)arg1 renderNotifyBlock:(id)arg2;
- (void)_startContinuousAEAFAtCenter;
- (BOOL)_configureSessionWithCameraMode:(int)arg1 cameraDevice:(int)arg2 HDRDetectionEnabled:(BOOL)arg3;
- (void)_setModeChangeWaitingForConfigureSession:(BOOL)arg1;
- (void)_setModeChangeWaitingForPreviewStarted:(BOOL)arg1;
- (void)_updatePreviewLayerEnabled;
- (void)_updateEffectsVideoDataOutputEnabled;
- (void)setCurrentInput:(id)arg1;
- (void)setCurrentOutput:(id)arg1;
- (void)_setFaceDetectionEnabled:(BOOL)arg1 forCaptureDevice:(id)arg2 captureOutput:(id)arg3;
- (void)_deviceConfigurationForPanoramaOptions:(struct __CFDictionary { }*)arg1 captureDevice:(id)arg2 deviceFormat:(id*)arg3 minFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg4 maxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg5;
- (void)_cleanupPanoramaOnSessionQueue:(BOOL)arg1;
- (id)_currentVideoConnection;
- (void)_setupPanoramaForDevice:(id)arg1 output:(id)arg2 options:(out const struct __CFDictionary {}**)arg3;
- (void)_setEffectsAvailable:(BOOL)arg1;
- (id)_videoModeSessionPreset;
- (void)_setConfiguringCamera:(BOOL)arg1;
- (void)_cancelDelayedFocusRequests;
- (id)_photoModeSessionPresetForMode:(int)arg1 device:(int)arg2;
- (id)currentOutput;
- (BOOL)_safeSetCameraMode:(int)arg1 cameraDevice:(int)arg2;
- (void)_updateEffectsRendererMirroring;
- (void)_destroyAllServices;
- (BOOL)_isSessionReady;
- (void)_imageWriterQueueAvailabilityChanged;
- (void)_setCameraMode:(int)arg1 cameraDevice:(int)arg2;
- (void)_teardownKeepAliveFailsafeTimer;
- (void)_teardownKeepAliveTimer;
- (void)_teardownDelaySuspendTimer;
- (void)setPostSessionSetupBlock:(id)arg1;
- (void)_setLocationEnabled:(BOOL)arg1;
- (void)_destroyCamera;
- (void)_debug_teardownDispatchTimer;
- (void)_createServicesIfNecessaryForMode:(int)arg1;
- (void)_setVideoDataOutputEnabledForRenderer:(BOOL)arg1;
- (void)_setPreviewLayerEnabledForRenderer:(BOOL)arg1;
- (void)_updateSupportedCameraModes;
- (void)_updateCallStatus;
- (void)_callStateDidChange:(id)arg1;
- (double)minimumVideoCaptureDuration;
- (void)_capturedPhotoWithCaptureDictionary:(id)arg1 metadata:(id)arg2;
- (unsigned int)effectFilterIndexForMode:(int)arg1;
- (float)panoramaPreviewScale;
- (void)setPanoramaImageQueueLayer:(id)arg1;
- (int)numberOfCapturedAvalanchePhotos;
- (BOOL)supportsHDRSuggestionForDevice:(int)arg1;
- (void)setHDRDetectionEnabled:(BOOL)arg1;
- (BOOL)supportsHDRForDevice:(int)arg1 mode:(int)arg2;
- (BOOL)isHDRSuggested;
- (BOOL)inCall;
- (BOOL)isChangingModes;
- (BOOL)canCapturePhotoDuringRecording;
- (BOOL)supportsHDR;
- (BOOL)hasRearCamera;
- (BOOL)hasFrontCamera;
- (double)mogulFrameRate;
- (void)resumeSubjectAreaChangesAfterDelay:(double)arg1;
- (float)exposureTargetBiasMax;
- (float)exposureTargetBiasMin;
- (void)suspendSubjectAreaChanges;
- (BOOL)canChangeFocusOrExposure;
- (float)exposureTargetBiasDefault;
- (void)setEffectFilterIndex:(unsigned int)arg1 forMode:(int)arg2;
- (BOOL)isExposureModeCenteredContinuous;
- (BOOL)isFocusingOnFace;
- (int)effectiveFocusMode;
- (void)setUserLockedExposure:(BOOL)arg1;
- (void)setUserLockedFocus:(BOOL)arg1;
- (BOOL)isSupportedExposureMode:(int)arg1;
- (BOOL)userLockedExposure;
- (BOOL)isSupportedFocusMode:(int)arg1;
- (BOOL)userLockedFocus;
- (void)setResetExposureWhenSubjectAreaChanged:(BOOL)arg1;
- (BOOL)_shouldResetExposureWhenSubjectAreaChanged;
- (BOOL)_shouldResetFocusWhenSubjectAreaChanged;
- (BOOL)isPreviewMirrored;
- (int)previewOrientation;
- (BOOL)currentlyAllowedToExposeAtPointOfInterestWithMode:(int)arg1;
- (BOOL)currentlyAllowedToFocusAtPointOfInterestWithMode:(int)arg1;
- (void)_removeVideoCaptureFileAndDirectoryAtPath:(id)arg1;
- (BOOL)_didSendPreviewStartedCallbackToEmptyDelegate;
- (void)smoothFocusAtCenter;
- (double)currentMaxFrameDuration;
- (float)maximumZoomFactorForDevice:(int)arg1;
- (BOOL)isCapturingPanorama;
- (BOOL)canCaptureVideo;
- (id)activeFilters;
- (BOOL)supportsLiveEffects;
- (void)setPanoramaCaptureDirection:(int)arg1;
- (void)stopPanoramaCapture;
- (void)enqueuePanoramaRequest:(id)arg1;
- (void)_panoShouldEnd;
- (void)postOrientationChangedNotification:(int)arg1 force:(BOOL)arg2;
- (id)videoCapturePath;
- (BOOL)isTorchOn;
- (BOOL)isCapturingVideo;
- (void)enqueueVideoCaptureRequest:(id)arg1;
- (BOOL)supportsPreviewDuringHDR;
- (BOOL)performingAvalancheCapture;
- (BOOL)supportsAvalancheAnalysisForDevice:(int)arg1;
- (BOOL)flashWillFire;
- (void)setFocusDisabled:(BOOL)arg1;
- (BOOL)isFocusing;
- (BOOL)isTorchDisabled;
- (id)supportedCameraModes;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cleanAperture;
- (BOOL)hasInheritedForegroundState;
- (void)_setPreviewPaused:(BOOL)arg1;
- (void)resumePreview;
- (void)_startPreview:(id)arg1;
- (void)_synchronizeHDRSettings;
- (id)effectsRenderer;
- (void)setDisableAllPreviewSuspensionDuringCapture:(BOOL)arg1;
- (BOOL)supportsVideoCapture;
- (float)minimumZoomFactorForDevice:(int)arg1;
- (void)setPreviewOrientation:(int)arg1;
- (void)_inCallStatusChanged:(BOOL)arg1;
- (void)restartContinuousAEAFAtCenter;
- (void)unlockDeviceForFocusConfiguration;
- (void)setFocusModeLockedWithLensPosition:(float)arg1 completionBlock:(id)arg2;
- (void)setResetFocusWhenSubjectAreaChanged:(BOOL)arg1;
- (BOOL)lockDeviceForFocusConfiguration;
- (BOOL)enqueueStillImageCaptureRequest:(id)arg1;
- (BOOL)canCapturePhoto;
- (int)cameraOrientation;
- (void)setCapturingTimelapse:(BOOL)arg1;
- (void)_sessionRuntimeErrored:(id)arg1;
- (void)_sessionStarted:(id)arg1;
- (BOOL)canContinueAvalancheCapture;
- (void)cancelAvalancheCapture;
- (void)finishAvalancheCapture;
- (void)startAvalancheCapture;
- (id)recentFaceMetadata;
- (float)focusLensPosition;
- (void)setCaptureOrientation:(int)arg1;
- (int)captureOrientation;
- (void)cameraEffectsRenderer:(id)arg1 didFinishTransitionToShowGrid:(BOOL)arg2;
- (void)cameraEffectsRenderer:(id)arg1 didStartTransitionToShowGrid:(BOOL)arg2 animated:(BOOL)arg3;
- (void)cameraEffectsRenderer:(id)arg1 willTransitionToShowGrid:(BOOL)arg2;
- (void)cameraEffectsRendererDidStartPreview:(id)arg1;
- (void)_runOnMainThreadImmediatelyIfPossibleWithBlock:(id)arg1;
- (id)previewLayer;
- (void)cameraEffectsRenderer:(id)arg1 requestsVideoDataOutputEnabled:(BOOL)arg2;
- (void)cameraEffectsRenderer:(id)arg1 requestsPreviewLayerEnabled:(BOOL)arg2;
- (void)_deviceStarted:(id)arg1;
- (id)effectFilterIndices;
- (void)_setDefaultPrewarmDate:(id)arg1;
- (int)cameraMode;
- (void)setEffectFilterIndices:(id)arg1 forceStateChange:(BOOL)arg2;
- (void)setCameraMode:(int)arg1;
- (void)setCameraMode:(int)arg1 device:(int)arg2;
- (BOOL)supportsHDRSuggestion;
- (void)startPreview:(id)arg1;
- (void)_startPreviewWithCameraDevice:(int)arg1 cameraMode:(int)arg2 effectFilterIndices:(id)arg3;
- (void)_pptTestSetAutofocusDisabled:(BOOL)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void).cxx_destruct;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)setCameraDevice:(int)arg1;
- (int)cameraDevice;
- (void)stopVideoCapture;
- (void)startVideoCapture;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (id)delegate;
- (id)currentDevice;
- (void)setIsCameraApp:(BOOL)arg1;
- (BOOL)isCameraApp;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;
- (void)_serverDied:(id)arg1;
- (void)_applicationSuspended:(id)arg1;
- (BOOL)isReady;
- (void)_setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4;
- (void)cancelVideoZoomRamp;
- (void)rampToVideoZoomFactor:(float)arg1 withRate:(float)arg2;
- (void)setExposurePointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })exposurePointOfInterest;
- (BOOL)isExposurePointOfInterestSupported;
- (void)setExposureMode:(int)arg1;
- (void)setFocusPointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })focusPointOfInterest;
- (BOOL)isFocusPointOfInterestSupported;
- (void)setFocusMode:(int)arg1;
- (BOOL)isTorchActive;
- (BOOL)hasFlash;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })faceRectangle;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;

@end
