/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@class <AVAudioRecorderDelegate>, NSArray, NSDictionary, NSURL;

@interface AVAudioRecorder : NSObject  {
    void *_impl;
}

@property(getter=isRecording,readonly) BOOL recording;
@property(readonly) NSURL * url;
@property(readonly) NSDictionary * settings;
@property <AVAudioRecorderDelegate> * delegate;
@property(readonly) double currentTime;
@property(readonly) double deviceCurrentTime;
@property(getter=isMeteringEnabled) BOOL meteringEnabled;
@property(copy) NSArray * channelAssignments;


- (BOOL)record;
- (void)setMeteringEnabled:(BOOL)arg1;
- (float)averagePowerForChannel:(unsigned int)arg1;
- (void)updateMeters;
- (double)currentTime;
- (BOOL)isRecording;
- (id)baseInit;
- (void)pause;
- (id)settings;
- (id)url;
- (id)delegate;
- (void)stop;
- (void)dealloc;
- (void)finalize;
- (void)setDelegate:(id)arg1;
- (void)endInterruptionWithFlags;
- (BOOL)deleteRecording;
- (BOOL)recordAtTime:(double)arg1 forDuration:(double)arg2;
- (BOOL)recordForDuration:(double)arg1;
- (BOOL)recordAtTime:(double)arg1;
- (BOOL)prepareToRecord;
- (id)initWithURL:(id)arg1 settings:(id)arg2 error:(id*)arg3;
- (void)privCommonCleanup;
- (void)setChannelAssignments:(id)arg1;
- (id)channelAssignments;
- (double)deviceCurrentTime;
- (float)peakPowerForChannel:(unsigned int)arg1;
- (BOOL)isMeteringEnabled;
- (void)finishedRecording;
- (struct AudioRecorderImpl { id x1; id x2; id x3; id x4; id x5; unsigned int x6; struct AudioStreamBasicDescription { double x_7_1_1; unsigned int x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; unsigned int x_7_1_6; unsigned int x_7_1_7; unsigned int x_7_1_8; unsigned int x_7_1_9; } x7; struct OpaqueAudioFileID {} *x8; struct OpaqueAudioQueue {} *x9; long long x10; long long x11; long long x12; double x13; double x14; double x15; unsigned int x16; char *x17; boolx18; boolx19; boolx20; boolx21; boolx22; boolx23; boolx24; struct AudioQueueLevelMeterState {} *x25; struct AudioQueueBuffer {} *x26[4]; struct AudioQueueBuffer {} *x27; boolx28; unsigned int x29; boolx30; }*)impl;
- (void)endInterruption;
- (void)beginInterruption;

@end
