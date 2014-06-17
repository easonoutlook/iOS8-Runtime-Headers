/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSObject<OS_dispatch_queue>;

@interface PLThrottleTimer : NSObject  {
    id _target;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _timeoutId;
    unsigned int _maxTimeoutId;
    BOOL _isPingedSinceLastFire;
    BOOL _isPaused;
    BOOL _isInvalid;
    SEL _action;
    double _timeout;
    double _maxTimeout;
}

@property(readonly) id target;
@property(readonly) SEL action;
@property(readonly) double timeout;
@property(readonly) double maxTimeout;


- (void)ping;
- (double)maxTimeout;
- (double)timeout;
- (void)_inqScheduleTimeout:(BOOL)arg1 maxTimeout:(BOOL)arg2;
- (void)_inqFireWithTimeout:(BOOL)arg1 timeoutId:(unsigned int)arg2 maxTimeout:(BOOL)arg3 maxTimeoutId:(unsigned int)arg4;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 timeout:(double)arg3 maxTimeout:(double)arg4;
- (void)setPaused:(BOOL)arg1;
- (id)target;
- (SEL)action;
- (void)invalidate;

@end
