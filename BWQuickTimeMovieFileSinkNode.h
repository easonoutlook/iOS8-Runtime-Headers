/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSArray, FigCaptureRecordingSettings, NSDictionary, NSObject<OS_dispatch_queue>;

@interface BWQuickTimeMovieFileSinkNode : BWFileSinkNode  {
    unsigned long long _currFileSize;
    unsigned long long _maxFileSize;
    unsigned long long _adjustedMaxFileSize;
    unsigned long long _minFreeDiskSpaceLimit;
    unsigned long long _adjustedMinFreeDiskSpaceLimit;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _currFileDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _checkDiskSpaceAtThisDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _maxFileDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _adjustedMaxFileDuration;
    int _masterInputTimeScale;
    NSArray *_stagingQueues;
    FigCaptureRecordingSettings *_settings;
    char *_parentPath;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _startingPTS;
    NSDictionary *_movieLevelMetadata;
    NSArray *_trackReferenceListForMetadataInputs;
    unsigned int _numInputs;
    NSObject<OS_dispatch_queue> *_thumbnailGenerationDispatchQueue;
    struct __IOSurface { } *_thumbnailSurface;
    int _recordingState;
    struct OpaqueFigFormatWriter { } *_formatWriter;
    struct OpaqueCMByteStream { } *_byteStream;
    int *_trackIDs;
    BOOL *_haveSeenSamplesForTrack;
    BOOL *_finalDurationNeedsToBeWrittenForTrack;
    unsigned int _masterInputIndex;
    BOOL _didBeginSession;
    BOOL _didBeginWriting;
    BOOL _needToDeMoof;
    BOOL _debugAudio;
    BOOL _haveDebugASBD;
    unsigned int _numAudioTracks;
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    } _debugASBD;
    struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; } *_debugABL;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _debugDurationForFailOfDiskSpaceTest;
    struct OpaqueFigSimpleMutex { } *_propertyMutex;
}

@property(copy) NSDictionary * movieLevelMetadata;
@property(copy) NSArray * trackReferenceListForMetadataInputs;

+ (void)initialize;

- (struct { long long x1; int x2; unsigned int x3; long long x4; })_findMarkers:(struct __CFString { }*)arg1;
- (long)_doStartRecordingAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 withSettings:(id)arg2 thumbnailSourcePixelBuffer:(struct __CVBuffer { }*)arg3 sensorVideoPort:(struct __CFString { }*)arg4;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_findStartMarkersWithMatchedStagedSetting:(id*)arg1 thumbnailSourcePixelBuffer:(struct __CVBuffer {}**)arg2 sensorVideoPort:(const struct __CFString {}**)arg3;
- (void)_driveStateMachineWithMediaBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInputIndex:(unsigned int)arg2 sampleBufferAlreadyAtHeadOfQueue:(BOOL)arg3;
- (BOOL)_driveStateMachineWithResumeMarkerBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInputIndex:(unsigned int)arg2 sampleBufferAlreadyAtHeadOfQueue:(BOOL)arg3;
- (BOOL)_driveStateMachineWithPauseMarkerBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInputIndex:(unsigned int)arg2 sampleBufferAlreadyAtHeadOfQueue:(BOOL)arg3;
- (BOOL)_driveStateMachineWithStopMarkerBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInputIndex:(unsigned int)arg2 sampleBufferAlreadyAtHeadOfQueue:(BOOL)arg3;
- (BOOL)_driveStateMachineWithStartMarkerBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInputIndex:(unsigned int)arg2 sampleBufferAlreadyAtHeadOfQueue:(BOOL)arg3;
- (void)_debugAudioUsingSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (long)_checkFreeSpace;
- (void)_printBufferEvent:(struct opaqueCMSampleBuffer { }*)arg1 forNodeInputIndex:(unsigned int)arg2 eventName:(id)arg3;
- (long)_adjustRecordingLimitsForMovieTimeScale:(int)arg1;
- (void)_preprocessingForFirstAudioBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInputIndex:(unsigned int)arg2;
- (void)_preprocessingForFirstVideoBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInputIndex:(unsigned int)arg2;
- (unsigned long long)_getCurrentFileSize;
- (long)_startUpFormatWriterAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 withSettings:(id)arg2;
- (id)trackReferenceListForMetadataInputs;
- (long)_writeCommonMetadata:(id)arg1 withProperties:(id)arg2 usingWriter:(struct OpaqueFigMetadataWriter { }*)arg3;
- (void)_writeBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forTrackIndex:(unsigned int)arg2;
- (BOOL)_driveStateMachineWithBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2 sampleBufferAlreadyAtHeadOfQueue:(BOOL)arg3;
- (void)_doEndRecordingAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieLevelMetadata:(id)arg1;
- (id)movieLevelMetadata;
- (void)setTrackReferenceListForMetadataInputs:(id)arg1;
- (id)initWithNumberOfVideoInputs:(unsigned int)arg1 numberOfAudioInputs:(unsigned int)arg2 numberOfMetadataInputs:(unsigned int)arg3;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (unsigned long long)lastFileSize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastFileDuration;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (id)init;

@end
