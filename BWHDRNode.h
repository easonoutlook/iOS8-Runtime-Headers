/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, FigCaptureStillImageSettings, NSDictionary;

@interface BWHDRNode : BWNode <BWBracketSettingsProvider> {
    int (*_createSampleBufferProcessorFunction)();
    int _clientPID;
    NSDictionary *_sensorIDDictionary;
    struct OpaqueFigSampleBufferProcessor { } *_sampleBufferProcessor;
    int _bracketCount;
    NSArray *_exposureValues;
    struct opaqueCMSampleBuffer {} *_pendingBracketBuffers[3];
    BOOL _preBracketedFrameReceived;
    FigCaptureStillImageSettings *_currentCaptureSettings;
}

+ (void)initialize;

- (void)_hdrProcessorOutputReady:(long)arg1 sampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (id)initWithClientPID:(int)arg1 sensorIDDictionary:(id)arg2;
- (id)bracketSettingsForBracketingMode:(int)arg1 withCurrentFrameStats:(struct { double x1; float x2; float x3; float x4; double x5; float x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; long long x11; }*)arg2 stillImageSettings:(id)arg3;
- (int)bracketCountForBracketingMode:(int)arg1 withCurrentFrameStats:(struct { double x1; float x2; float x3; float x4; double x5; float x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; long long x11; }*)arg2 stillImageSettings:(id)arg3;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (long)_setupSampleBufferProcessor;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)_clearCaptureRequestState;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)nodeSubType;
- (id)nodeType;
- (void)dealloc;

@end
