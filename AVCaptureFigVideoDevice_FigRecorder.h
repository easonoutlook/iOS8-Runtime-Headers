/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVWeakReference, NSArray, NSObject<OS_dispatch_queue>, NSDictionary, NSObject<OS_dispatch_source>, AVCaptureDeviceFormat_FigRecorder;

@interface AVCaptureFigVideoDevice_FigRecorder : AVCaptureDevice_FigRecorder <MCProfileConnectionObserver> {
    NSDictionary *_deviceProperties;
    NSDictionary *_sensorProperties;
    AVCaptureDeviceFormat_FigRecorder *_activeFormat;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _activeMinFrameDuration;
    BOOL _activeMinFrameDurationSetByClient;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _activeMaxFrameDuration;
    BOOL _activeMaxFrameDurationSetByClient;
    int _focusMode;
    struct CGPoint { 
        float x; 
        float y; 
    } _focusPointOfInterest;
    float _focusPosition;
    BOOL _manualFocusSupportEnabled;
    int _focusInFlightCount;
    BOOL _adjustingFocus;
    int _autoFocusRangeRestriction;
    BOOL _smoothAutoFocusEnabled;
    int _exposureMode;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _exposureDuration;
    float _exposureGain;
    BOOL _manualExposureSupportEnabled;
    float _autoExposureBias;
    struct CGPoint { 
        float x; 
        float y; 
    } _exposurePointOfInterest;
    BOOL _adjustingExposure;
    int _wbMode;
    float _whiteBalanceTemperature;
    BOOL _adjustingWB;
    BOOL _automaticallyAdjustsImageControlMode;
    int _imageControlMode;
    int _pendingImageControlMode;
    int _flashMode;
    BOOL _flashActive;
    BOOL _flashAvailable;
    int _torchMode;
    BOOL _torchActive;
    float _torchLevel;
    BOOL _torchAvailable;
    NSObject<OS_dispatch_queue> *_torchAppsSerialQueue;
    NSObject<OS_dispatch_source> *_torchAppsKillTimer;
    struct OpaqueFigRecorder { } *_recorderForTorchApps;
    BOOL _isConnected;
    BOOL _subjectMonitoringEnabled;
    BOOL _faceDetectionDrivenImageProcessingEnabled;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _faceRectangle;
    int _faceRectangleAngle;
    BOOL _faceDetectionMetadataEnabled;
    BOOL _automaticallyEnablesLowLightBoostWhenAvailable;
    BOOL _lowLightBoostEnabled;
    BOOL _highDynamicRangeSceneDetectionEnabled;
    BOOL _sceneIsHighDynamicRange;
    float _saturation;
    float _contrast;
    int _videoZoomDownscaleStageHint;
    int _videoZoomUpscaleStageHint;
    float _videoZoomFactor;
    float _videoZoomRampTarget;
    int _videoZoomRampCounter;
    float _videoZoomRampAcceleration;
    BOOL _videoZoomDrawOverlay;
    NSArray *_formats;
    struct OpaqueCMClock { } *_deviceClock;
    AVWeakReference *_weakReference;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;
+ (BOOL)_cameraAccessIsEnabled;
+ (id)_devices;

- (id)uniqueID;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })exposureDuration;
- (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1;
- (void)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1;
- (float)videoZoomRampAcceleration;
- (float)videoZoomFactor;
- (void)setImageControlMode:(int)arg1;
- (void)setVideoZoomRampAcceleration:(float)arg1;
- (void)setVideoZoomFactor:(float)arg1;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)arg1;
- (BOOL)automaticallyEnablesLowLightBoostWhenAvailable;
- (BOOL)isHDRSupported;
- (int)imageControlMode;
- (void)setFlashMode:(int)arg1;
- (int)flashMode;
- (float)contrast;
- (id)localizedName;
- (void)setContrast:(float)arg1;
- (int)position;
- (BOOL)isKindOfClass:(Class)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)_setBoolValue:(BOOL)arg1 forRecorderProperty:(struct __CFString { }*)arg2;
- (void)_setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)arg1;
- (BOOL)_setContrast:(float)arg1;
- (BOOL)_setSaturation:(float)arg1;
- (BOOL)_setNumber:(id)arg1 forRecorderProperty:(struct __CFString { }*)arg2;
- (id)_numberForRecorderProperty:(struct __CFString { }*)arg1;
- (id)_createTorchAppsKillTimer;
- (struct OpaqueFigRecorder { }*)_createFigRecorderForTorchApps;
- (void)_teardownTorchAppsKillTimer;
- (float)_floatValueForRecorderProperty:(struct __CFString { }*)arg1;
- (void)_applyPendingPropertiesToRecorder;
- (void)finishPendingAdjustmentsKVO;
- (BOOL)_setFloatValue:(float)arg1 forRecorderProperty:(struct __CFString { }*)arg2;
- (void)_updateFlashAndTorchAvailability;
- (void)_updateImageControlMode;
- (BOOL)_setHighDynamicRangeSceneDetectionEnabled:(BOOL)arg1;
- (BOOL)_faceDetectionDebugMetadataReportingEnabled;
- (BOOL)_setFaceDetectionDebugMetadataReportingEnabled:(BOOL)arg1;
- (BOOL)_setFaceDetectionDrivenImageProcessingEnabled:(BOOL)arg1;
- (BOOL)_subjectAreaChangeMonitoringEnabled;
- (BOOL)_setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1;
- (BOOL)_setFlashMode:(int)arg1;
- (int)_whiteBalanceMode;
- (BOOL)_setWhiteBalanceMode:(int)arg1;
- (BOOL)_setWhiteBalanceTemperature:(float)arg1;
- (BOOL)_setExposureWithMode:(int)arg1 pointOfInterest:(id)arg2;
- (BOOL)_setAutoExposureBias:(float)arg1;
- (BOOL)_setFocusWithMode:(int)arg1 pointOfInterest:(id)arg2;
- (void)_restoreColorProperties;
- (void)_teardownFigRecorderForTorchApps;
- (id)initWithProperties:(id)arg1 sensorProperties:(id)arg2;
- (id)devicePropertiesDictionary;
- (BOOL)doesHandleNotification:(id)arg1;
- (BOOL)HDRUsesPreBracketedFrameAsEV0;
- (void)setWhiteBalanceTemperature:(float)arg1;
- (float)whiteBalanceTemperature;
- (void)setManualExposureSupportEnabled:(BOOL)arg1;
- (BOOL)isManualExposureSupportEnabled;
- (void)setExposureGain:(float)arg1;
- (float)exposureGain;
- (void)setExposureDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setManualFocusSupportEnabled:(BOOL)arg1;
- (BOOL)isManualFocusSupportEnabled;
- (void)setFocusPosition:(float)arg1;
- (float)focusPosition;
- (void)_setActiveFormatAndFrameRatesForResolvedOptions:(id)arg1 sendingFrameRatesToFig:(BOOL)arg2;
- (void)setFaceDetectionDebugMetadataReportingEnabled:(BOOL)arg1;
- (BOOL)isFaceDetectionDebugMetadataReportingEnabled;
- (void)_sessionDidStart;
- (void)_sessionWillStart;
- (void)setActiveInput:(id)arg1;
- (BOOL)_faceDetectionDrivenImageProcessingEnabled;
- (int)_torchMode;
- (int)_flashMode;
- (BOOL)isSISSupported;
- (void)setVideoZoomUpscaleStageHint:(int)arg1;
- (int)videoZoomUpscaleStageHint;
- (void)setVideoZoomDownscaleStageHint:(int)arg1;
- (int)videoZoomDownscaleStageHint;
- (void)setVideoZoomDrawOverlay:(BOOL)arg1;
- (BOOL)videoZoomDrawOverlay;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)_setHighDynamicRangeScene:(BOOL)arg1;
- (BOOL)_setImageControlMode:(int)arg1;
- (void)_setTorchActive:(BOOL)arg1;
- (void)_setAdjustingWhiteBalance:(BOOL)arg1;
- (void)_setAdjustingExposure:(BOOL)arg1;
- (void)_setAdjustingFocus:(BOOL)arg1;
- (long)_setTorchMode:(int)arg1 withLevel:(float)arg2;
- (void)_setFlashActive:(BOOL)arg1;
- (BOOL)isLowLightBoostEnabled;
- (BOOL)isLowLightBoostSupported;
- (void)cancelVideoZoomRamp;
- (BOOL)isRampingVideoZoom;
- (void)rampToVideoZoomFactor:(float)arg1 withRate:(float)arg2;
- (void)setSaturation:(float)arg1;
- (float)saturation;
- (BOOL)automaticallyAdjustsImageControlMode;
- (BOOL)isImageControlModeSupported:(int)arg1;
- (BOOL)isAdjustingWhiteBalance;
- (void)setWhiteBalanceMode:(int)arg1;
- (int)whiteBalanceMode;
- (BOOL)isWhiteBalanceModeSupported:(int)arg1;
- (BOOL)isAdjustingExposure;
- (void)setExposurePointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })exposurePointOfInterest;
- (BOOL)isExposurePointOfInterestSupported;
- (void)setAutoExposureBias:(float)arg1;
- (float)autoExposureBias;
- (void)setExposureMode:(int)arg1;
- (int)exposureMode;
- (BOOL)isExposureModeSupported:(int)arg1;
- (void)setSmoothAutoFocusEnabled:(BOOL)arg1;
- (BOOL)isSmoothAutoFocusEnabled;
- (BOOL)isSmoothAutoFocusSupported;
- (void)setAutoFocusRangeRestriction:(int)arg1;
- (int)autoFocusRangeRestriction;
- (BOOL)isAutoFocusRangeRestrictionSupported;
- (void)setFocusPointOfInterest:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)isAdjustingFocus;
- (struct CGPoint { float x1; float x2; })focusPointOfInterest;
- (BOOL)isFocusPointOfInterestSupported;
- (void)setFocusMode:(int)arg1;
- (int)focusMode;
- (BOOL)isFocusModeSupported:(int)arg1;
- (BOOL)setTorchModeOnWithLevel:(float)arg1 error:(id*)arg2;
- (void)setTorchMode:(int)arg1;
- (int)torchMode;
- (BOOL)isTorchActive;
- (BOOL)isTorchAvailable;
- (BOOL)isTorchModeSupported:(int)arg1;
- (float)torchLevel;
- (BOOL)hasTorch;
- (BOOL)isFlashModeSupported:(int)arg1;
- (BOOL)isFlashActive;
- (BOOL)isFlashAvailable;
- (BOOL)hasFlash;
- (struct OpaqueCMClock { }*)deviceClock;
- (BOOL)isActiveVideoMaxFrameDurationSet;
- (BOOL)isActiveVideoMinFrameDurationSet;
- (void)setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setActiveFormat:(id)arg1;
- (id)formats;
- (BOOL)isInUseByAnotherApplication;
- (BOOL)isMachineReadableCodeDetectionSupported;
- (BOOL)isHighDynamicRangeScene;
- (void)setHighDynamicRangeSceneDetectionEnabled:(BOOL)arg1;
- (BOOL)isHighDynamicRangeSceneDetectionEnabled;
- (BOOL)isHighDynamicRangeSceneDetectionSupported;
- (int)faceRectangleAngle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })faceRectangle;
- (void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)arg1;
- (BOOL)isFaceDetectionDrivenImageProcessingEnabled;
- (BOOL)isFaceDetectionDuringVideoPreviewSupported;
- (BOOL)isFaceDetectionSupported;
- (BOOL)isSubjectAreaChangeMonitoringEnabled;
- (BOOL)supportsAVCaptureSessionPreset:(id)arg1;
- (BOOL)hasMediaType:(id)arg1;
- (id)modelID;
- (void)stopUsingDevice;
- (BOOL)startUsingDevice:(id*)arg1;
- (BOOL)isConnected;
- (void)_setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMaxFrameDuration;
- (void)_setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMinFrameDuration;
- (id)activeFormat;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)_applyOverridesToCaptureOptions:(id)arg1;

@end