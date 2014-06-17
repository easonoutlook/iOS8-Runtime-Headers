/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <CannedVideoFrameFeeder>;

@interface CannedVideoCapture : NSObject <VideoCaptureProtocol> {
    struct CannedVideoCapturePrivate { struct _opaque_pthread_mutex_t { long x_1_1_1; BOOL x_1_1_2[40]; } x1; int x2; int (*x3)(); void *x4; unsigned int x5; int x6; struct OpaqueCMClock {} *x7; BOOL x8; BOOL x9; struct OpaqueFigThread {} *x10; BOOL x11; struct _opaque_pthread_mutex_t { long x_12_1_1; BOOL x_12_1_2[40]; } x12; struct _opaque_pthread_cond_t { long x_13_1_1; BOOL x_13_1_2[24]; } x13; struct OpaqueFigThread {} *x14; BOOL x15; struct _opaque_pthread_mutex_t { long x_16_1_1; BOOL x_16_1_2[40]; } x16; struct _opaque_pthread_cond_t { long x_17_1_1; BOOL x_17_1_2[24]; } x17; struct _opaque_pthread_mutex_t { long x_18_1_1; BOOL x_18_1_2[40]; } x18; struct Frame {} *x19; int x20; } *_pimpl;
    <CannedVideoFrameFeeder> *_frameFeeder;
}

@property(readonly) struct CannedVideoCapturePrivate { struct _opaque_pthread_mutex_t { long x_1_1_1; BOOL x_1_1_2[40]; } x1; int x2; int (*x3)(); void *x4; unsigned int x5; int x6; struct OpaqueCMClock {} *x7; BOOL x8; BOOL x9; struct OpaqueFigThread {} *x10; BOOL x11; struct _opaque_pthread_mutex_t { long x_12_1_1; BOOL x_12_1_2[40]; } x12; struct _opaque_pthread_cond_t { long x_13_1_1; BOOL x_13_1_2[24]; } x13; struct OpaqueFigThread {} *x14; BOOL x15; struct _opaque_pthread_mutex_t { long x_16_1_1; BOOL x_16_1_2[40]; } x16; struct _opaque_pthread_cond_t { long x_17_1_1; BOOL x_17_1_2[24]; } x17; struct _opaque_pthread_mutex_t { long x_18_1_1; BOOL x_18_1_2[40]; } x18; struct Frame {} *x19; int x20; }* pimpl;
@property(retain) <CannedVideoFrameFeeder> * frameFeeder;

+ (int)createPixelBufferPool:(struct __CVPixelBufferPool {}**)arg1 withWidth:(int)arg2 height:(int)arg3;
+ (int)cannedVideoTypeForPath:(id)arg1;

- (long)setCamera:(unsigned long)arg1;
- (void)setFrameFeeder:(id)arg1;
- (id)frameFeeder;
- (struct CannedVideoCapturePrivate { struct _opaque_pthread_mutex_t { long x_1_1_1; BOOL x_1_1_2[40]; } x1; int x2; int (*x3)(); void *x4; unsigned int x5; int x6; struct OpaqueCMClock {} *x7; BOOL x8; BOOL x9; struct OpaqueFigThread {} *x10; BOOL x11; struct _opaque_pthread_mutex_t { long x_12_1_1; BOOL x_12_1_2[40]; } x12; struct _opaque_pthread_cond_t { long x_13_1_1; BOOL x_13_1_2[24]; } x13; struct OpaqueFigThread {} *x14; BOOL x15; struct _opaque_pthread_mutex_t { long x_16_1_1; BOOL x_16_1_2[40]; } x16; struct _opaque_pthread_cond_t { long x_17_1_1; BOOL x_17_1_2[24]; } x17; struct _opaque_pthread_mutex_t { long x_18_1_1; BOOL x_18_1_2[40]; } x18; struct Frame {} *x19; int x20; }*)pimpl;
- (long)startThreads;
- (void)stopThreads;
- (id)initWithOptions:(void*)arg1 callback:(int (*)())arg2 width:(int)arg3 height:(int)arg4 frameRate:(int)arg5 cameraType:(int)arg6 folder:(id)arg7 withError:(int*)arg8;
- (long)getCameraType:(int*)arg1;
- (long)setCameraType:(int)arg1;
- (long)getCamera:(unsigned int*)arg1;
- (BOOL)isPreviewRunning;
- (long)copyColorInfo:(const struct __CFDictionary {}**)arg1;
- (long)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (long)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
- (long)startPreview;
- (long)stop:(bool)arg1;
- (void)dealloc;

@end
