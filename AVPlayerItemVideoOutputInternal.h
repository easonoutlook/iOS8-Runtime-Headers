/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSObject<OS_dispatch_queue>, AVWeakReference, <AVPlayerItemOutputPullDelegate>, NSObject<OS_dispatch_source>;

@interface AVPlayerItemVideoOutputInternal : NSObject  {
    struct OpaqueCMTimebase { } *timebase;
    double currentRate;
    struct OpaqueFigVisualContext { } *vc;
    AVWeakReference *playerItemWeakReference;
    struct OpaqueVTPixelBufferConformer { } *pixelBufferConformer;
    <AVPlayerItemOutputPullDelegate> *delegate;
    NSObject<OS_dispatch_queue> *stateQueue;
    NSObject<OS_dispatch_queue> *delegateQueue;
    NSObject<OS_dispatch_source> *delegateWakeupSource;
    double advanceWakeUpInterval;
    BOOL advanceWakeUpIntervalIsValid;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    } wakeUpImageTime;
    BOOL suppressesPlayerRendering;
    BOOL shouldTagBuffersWithInfo;
}



@end
