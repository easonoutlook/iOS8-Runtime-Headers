/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@class NSObject<OS_dispatch_source>, NSString, AXHAAccessQueue;

@interface AXHATimer : NSObject  {
    BOOL _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    BOOL _active;
    BOOL _accessQueueIsExternal;
    NSString *_label;
    int _state;
    AXHAAccessQueue *_accessQueue;
    NSObject<OS_dispatch_source> *_dispatchTimer;
}

@property(copy) NSString * label;
@property BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property(getter=isActive) BOOL active;
@property(getter=isPending,readonly) BOOL pending;
@property(retain) AXHAAccessQueue * accessQueue;
@property int state;
@property BOOL accessQueueIsExternal;
@property(retain) NSObject<OS_dispatch_source> * dispatchTimer;

+ (id)timerTargettingMainAccessQueue;

- (BOOL)isPending;
- (void)setAutomaticallyCancelPendingBlockUponSchedulingNewBlock:(BOOL)arg1;
- (void)afterDelay:(double)arg1 processReadingBlock:(id)arg2;
- (void)afterDelay:(double)arg1 processBlock:(id)arg2;
- (id)dispatchTimer;
- (void)_warnAboutAsynchronousCancelling;
- (void)_performEnqueuedWritingBlock:(id)arg1 asynchronousExecutionWarningHandler:(SEL)arg2;
- (void)_warnAboutAsynchronousScheduling;
- (void)setDispatchTimer:(id)arg1;
- (void)_didFinishProcessingBlock;
- (BOOL)accessQueueIsExternal;
- (BOOL)automaticallyCancelPendingBlockUponSchedulingNewBlock;
- (void)_afterDelay:(double)arg1 processBlock:(id)arg2 shouldTreatAsWritingBlock:(BOOL)arg3;
- (void)afterDelay:(double)arg1 processWritingBlock:(id)arg2;
- (void)_reallyCancel;
- (void)setAccessQueueIsExternal:(BOOL)arg1;
- (id)initWithTargetAccessQueue:(id)arg1;
- (void)setActive:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (id)label;
- (void)setState:(int)arg1;
- (BOOL)isActive;
- (int)state;
- (void)cancel;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)setAccessQueue:(id)arg1;
- (id)accessQueue;

@end
