/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class VKTimer, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface MKThrottledGate : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    int _maxAvailableTickets;
    float _availableTickets;
    float _refreshRate;
    NSMutableArray *_waitingJobs;
    VKTimer *_timer;
}


- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (void)dispatch:(id)arg1;
- (id)initWithMax:(int)arg1 refreshRate:(float)arg2 queue:(id)arg3;
- (BOOL)_replenishAvailableJobsIfNecessary;
- (void)_ensureTimer;
- (BOOL)_dispatchWaitingJobsIfNecessary;
- (void)_timerFired:(id)arg1;

@end
