/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface VCJitterBuffer : NSObject  {
    void *pRTPContext;
    struct tagHANDLE { int x1; } *rtpHandle;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } teardownMutex;
    double prevReceivedAudioTime;
}


- (id)initWithRTPHandle:(struct tagHANDLE { int x1; }*)arg1;
- (void)invalidateHandle;
- (BOOL)pullAudioSamples:(char *)arg1 timestamp:(unsigned int*)arg2 byteCount:(int*)arg3 sampleCount:(int*)arg4 sampleRate:(int*)arg5 receivedBytes:(int*)arg6 lastReceivedAudioTime:(double*)arg7 padding:(char *)arg8 paddingLength:(char *)arg9 silence:(int*)arg10;
- (void)dealloc;

@end
