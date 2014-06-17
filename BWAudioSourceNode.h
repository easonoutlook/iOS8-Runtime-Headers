/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSArray, NSObject<OS_dispatch_queue>;

@interface BWAudioSourceNode : BWSourceNode  {
    struct opaqueCMSession { } *_CMSession;
    BOOL _configuresSession;
    BOOL _isAppAudioSession;
    BOOL _didBeginInterruption;
    struct { 
        unsigned int val[8]; 
    } _clientAuditToken;
    BOOL _clientAuditTokenIsValid;
    int _clientPID;
    struct OpaqueCMClock { } *_clock;
    struct opaqueCMFormatDescription { } *_formatDescription;
    unsigned int _pullDuration;
    struct OpaqueAudioComponentInstance { } *_audioUnit;
    unsigned long _auSubType;
    struct opaqueCMSimpleQueue { } *_renderProcErrorQueue;
    struct opaqueCMSimpleQueue { } *_inactiveBuffersQueue;
    struct opaqueCMSimpleQueue { } *_activeBuffersQueue;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _nextExpectedSampleTime;
    NSObject<OS_dispatch_queue> *_generateSamplesDispatchQueue;
    BOOL _streamStarted;
    BOOL _streamInterrupted;
    BOOL _levelMeteringEnabled;
    int _audioLevelUnits;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _latencyOffset;
    BOOL _usesVideoCMSessionAudioMode;
    BOOL _selectsMicForFrontCamera;
}

@property BOOL levelMeteringEnabled;
@property(readonly) NSArray * audioLevels;
@property BOOL usesVideoCMSessionAudioMode;
@property BOOL selectsMicForFrontCamera;
@property BOOL interrupted;

+ (void)initialize;

- (void)setInterrupted:(BOOL)arg1;
- (BOOL)interrupted;
- (BOOL)selectsMicForFrontCamera;
- (BOOL)usesVideoCMSessionAudioMode;
- (void)_generateSamples;
- (BOOL)levelMeteringEnabled;
- (BOOL)hasNonLiveConfigurationChanges;
- (void)makeCurrentConfigurationLive;
- (struct opaqueCMSampleBuffer { }*)_createSampleBufferForBufferTimestampedAudioBufferList:(struct TimestampedAudioBufferList { struct __CFAllocator {} *x1; unsigned int x2; unsigned int x3; struct { long long x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; long long x_4_1_4; } x4; struct AudioBufferList {} *x5; unsigned int x6; }*)arg1;
- (unsigned int)_audioCombinedLatency;
- (long)_generatePullBuffers;
- (long)_getAudioDevicePullFrames:(unsigned int*)arg1;
- (long)_selectMicForAudioRoute:(id)arg1;
- (long)_configureCMSessionWithDefaultHardwareSampleRate:(double)arg1;
- (long)_setupAudioUnit;
- (long)_setCMSessionPropertyWithKey:(struct __CFString { }*)arg1 value:(void*)arg2;
- (long)_updatePullFormatDescription;
- (long)_setCMSessionAudioModeAndSelectMic;
- (id)audioLevels;
- (BOOL)stop:(id*)arg1;
- (void)setSelectsMicForFrontCamera:(BOOL)arg1;
- (void)setUsesVideoCMSessionAudioMode:(BOOL)arg1;
- (void)setLevelMeteringEnabled:(BOOL)arg1;
- (id)initWithCMSession:(struct opaqueCMSession { }*)arg1 configureSession:(BOOL)arg2 clientToken:(id)arg3 clientPID:(int)arg4;
- (struct OpaqueCMClock { }*)clock;
- (BOOL)start:(id*)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (id)nodeSubType;
- (void)dealloc;

@end