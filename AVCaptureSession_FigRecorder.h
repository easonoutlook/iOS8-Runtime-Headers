/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVCaptureSessionInternal_FigRecorder, NSString;

@interface AVCaptureSession_FigRecorder : NSObject  {
    AVCaptureSessionInternal_FigRecorder *_internal;
}

@property(copy) NSString * sessionPreset;
@property(readonly) NSArray * inputs;
@property(readonly) NSArray * outputs;
@property(getter=isRunning,readonly) BOOL running;
@property(getter=isInterrupted,readonly) BOOL interrupted;
@property BOOL usesApplicationAudioSession;
@property BOOL automaticallyConfiguresApplicationAudioSession;
@property(readonly) struct OpaqueCMClock { }* masterClock;

+ (void)initialize;
+ (id)_createCaptureOptionsForPreset:(id)arg1 audioDevice:(id)arg2 videoDevice:(id)arg3 errorStatus:(int*)arg4;
+ (id)avCaptureSessionPlist;
+ (BOOL)automaticallyNotifiesObserversOfMasterClock;
+ (id)publicSessionPresets;
+ (id)allSessionPresets;

- (void)removeOutput:(id)arg1;
- (struct OpaqueCMClock { }*)masterClock;
- (void)beginConfiguration;
- (id)outputs;
- (id)inputs;
- (void)addOutput:(id)arg1;
- (void)addInput:(id)arg1;
- (void)_setRunning:(BOOL)arg1;
- (BOOL)isRunning;
- (id)valueForUndefinedKey:(id)arg1;
- (struct OpaqueFigRecorder { }*)recorder;
- (BOOL)isKindOfClass:(Class)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)inputWithClass:(Class)arg1;
- (void)_doDidStartSources;
- (void)_doDidStop:(id)arg1;
- (id)_errorForFigRecorderNotification:(id)arg1;
- (void)_doDidStart:(BOOL)arg1;
- (BOOL)_startPreviewing;
- (BOOL)_figRecorderOldOptionsAreEqual:(id)arg1 toNewOptions:(id)arg2 livesourceOptionsAreEqual:(BOOL*)arg3 frameRatesChanged:(BOOL*)arg4;
- (long)_createRecorderIfNeeded;
- (void)_determineMasterClock;
- (id)_resolvedCaptureOptionsForPreset:(id)arg1 audioDevice:(id)arg2 videoDevice:(id)arg3;
- (id)_currentDeviceWithMediaType:(id)arg1;
- (id)_resolvedCaptureOptionsByApplyingOverridesToCaptureOptions:(id)arg1 preset:(id)arg2;
- (id)_addFastSwitchOptionsToCaptureOptions:(id)arg1 forDevice:(id)arg2 preset:(id)arg3;
- (BOOL)_sessionHasEnabledMovieFileOutput;
- (void)_excludeOutputsForCaptureOptions:(id)arg1;
- (void)_rebuildLiveConnections;
- (BOOL)_stopPreviewing;
- (BOOL)isPreviewing;
- (void)_doWillStart;
- (void)addVideoPreviewLayer:(id)arg1;
- (void)removeVideoPreviewLayerConnection:(id)arg1;
- (void)_removeVideoPreviewLayerConnectionsForInputPort:(id)arg1;
- (id)_liveConnections;
- (void)addVideoPreviewLayerConnection:(id)arg1;
- (void)_rebuildInternalCaptureOptions;
- (void)_teardownFigRecorder;
- (void)setVideoPreviewLayer:(id)arg1;
- (void)removeVideoPreviewLayer;
- (id)figRecorderOptions;
- (id)_resolvedCaptureOptions;
- (id)captureOptions;
- (void)stopRunning;
- (void)startRunning;
- (void)setAutomaticallyConfiguresApplicationAudioSession:(BOOL)arg1;
- (void)setUsesApplicationAudioSession:(BOOL)arg1;
- (void)addConnection:(id)arg1;
- (void)addOutputWithNoConnections:(id)arg1;
- (void)addInputWithNoConnections:(id)arg1;
- (void)_setInterrupted:(BOOL)arg1;
- (void)_stopAndTearDownGraph;
- (void)_setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (void)setSessionPreset:(id)arg1;
- (void)_rebuildGraph;
- (void)_postRuntimeError:(id)arg1;
- (id)_stopError;
- (BOOL)isBeingConfigured;
- (BOOL)_canAddConnection:(id)arg1 failureReason:(id*)arg2;
- (void)commitConfiguration;
- (BOOL)canAddConnection:(id)arg1;
- (id)_connectionsForNewVideoPreviewLayer:(id)arg1;
- (void)_removeConnection:(id)arg1;
- (id)_connectionsForNewOutput:(id)arg1;
- (void)_addOutputWithNoConnections:(id)arg1;
- (BOOL)_canAddOutput:(id)arg1 failureReason:(id*)arg2;
- (void)_removeConnectionsForInputPort:(id)arg1;
- (void)_addConnection:(id)arg1;
- (id)_connectionsForNewInputPort:(id)arg1;
- (void)_addInputWithNoConnections:(id)arg1;
- (BOOL)_canAddInput:(id)arg1 failureReason:(id*)arg2;
- (BOOL)_buildAndRunGraph;
- (void)_commitConfiguration;
- (BOOL)canSetSessionPreset:(id)arg1;
- (void)_beginConfiguration;
- (void)removeInput:(id)arg1;
- (id)sessionPreset;
- (id)videoPreviewLayer;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (BOOL)canAddInput:(id)arg1;
- (BOOL)canAddOutput:(id)arg1;
- (void)removeConnection:(id)arg1;
- (id)outputWithClass:(Class)arg1;
- (BOOL)isInterrupted;
- (long)_startRecording;
- (BOOL)automaticallyConfiguresApplicationAudioSession;
- (BOOL)usesApplicationAudioSession;
- (long)_stopRecording;

@end
