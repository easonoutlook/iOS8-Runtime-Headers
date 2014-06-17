/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, NSTimer, CADisplayLink;

@interface SKDisplayLink : NSObject  {
    NSTimer *_timer;
    CADisplayLink *_caDisplayLink;
    unsigned int _mode;
    BOOL _paused;
    BOOL _asynchronous;
    int _frameInterval;
    double _previousFrameTime;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _block;

    NSObject<OS_dispatch_queue> *_queue;
    float _averageFrameTime;
    int _frameCount;
    double _frameCountBeginTime;
    int _queuedFrameCount;
    unsigned int _maxQueuedFrameCount;
}

@property(getter=isPaused) BOOL paused;
@property int frameInterval;
@property unsigned int mode;
@property BOOL asynchronous;
@property unsigned int maxQueuedFrameCount;

+ (id)displayLinkWithBlock:(id)arg1 queue:(id)arg2;

- (void)setAsynchronous:(BOOL)arg1;
- (BOOL)isPaused;
- (id)initWithBlock:(id)arg1 queue:(id)arg2;
- (void)_setup;
- (void).cxx_destruct;
- (void)setPaused:(BOOL)arg1;
- (unsigned int)mode;
- (void)setMode:(unsigned int)arg1;
- (int)frameInterval;
- (void)_start;
- (void)setFrameInterval:(int)arg1;
- (BOOL)asynchronous;
- (void)_callbackForNextFrame:(double)arg1;
- (void)_restart;
- (unsigned int)maxQueuedFrameCount;
- (void)_nsTimerCallback;
- (void)setMaxQueuedFrameCount:(unsigned int)arg1;
- (void)_teardown;
- (void)_caDisplayLinkCallback;
- (void)dealloc;
- (id)init;

@end