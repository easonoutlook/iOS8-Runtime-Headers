/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class FigStateMachine, FigCaptureAudioFileRecordingSettings, NSObject<OS_dispatch_queue>;

@interface BWAudioFileSinkNode : BWFileSinkNode  {
    FigStateMachine *_stateMachine;
    struct OpaqueFigFormatWriter { } *_formatWriter;
    struct OpaqueCMByteStream { } *_byteStream;
    int _trackID;
    BOOL _didBeginFileWriterSession;
    char *_parentPath;
    FigCaptureAudioFileRecordingSettings *_settings;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } _curFileDuration;
    unsigned long long _curFileSize;
    unsigned long long _adjustedMinFreeDiskSpace;
    NSObject<OS_dispatch_queue> *_propertySyncQueue;
}

+ (void)initialize;

- (unsigned long long)lastFileSize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastFileDuration;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)nodeSubType;
- (long)_teardownFileWriter;
- (void)_setupMinFreeDiskSpace;
- (long)_setupFileWriter;
- (void)_updateFilePropertiesForSbuf:(struct opaqueCMSampleBuffer { }*)arg1;
- (long)_applyRecordingLimits;
- (long)_handleMarkerBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)_stopRecordingWithError:(long)arg1;
- (void)_setupStateMachine;
- (void)dealloc;
- (id)init;

@end