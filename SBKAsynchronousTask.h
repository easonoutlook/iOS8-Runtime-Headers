/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class SBKTaskAssertion, NSError, NSString, NSObject<OS_dispatch_source>, NSObject<OS_dispatch_queue>, NSMutableArray;

@interface SBKAsynchronousTask : NSObject  {
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    BOOL _taskInvalidationDisabled;
    double _timeout;
    int _cancelType;
    id _result;
    NSError *_error;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _expirationHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _finishedHandler;

    NSString *_debugDescription;
    SBKTaskAssertion *_taskAssertion;
    NSMutableArray *_completions;
}

@property(copy) id finishedHandler;
@property(copy) id expirationHandler;
@property(retain) id result;
@property(retain) NSError * error;
@property int cancelType;
@property(copy) NSString * debugDescription;
@property(retain) SBKTaskAssertion * taskAssertion;
@property(retain) NSMutableArray * completions;


- (id)completions;
- (id)taskAssertion;
- (void)endTaskOperation;
- (void)_invalidateAssertion:(BOOL)arg1;
- (void)setTaskAssertion:(id)arg1;
- (id)expirationHandler;
- (void)_onQueueFireExpirationHandlerIfNecesary;
- (void)setCancelType:(int)arg1;
- (void)setDebugDescription:(id)arg1;
- (void)setCompletions:(id)arg1;
- (int)cancelType;
- (void)beginTaskOperation;
- (void)finishTaskOperationWithResult:(id)arg1 error:(id)arg2;
- (void)invokeTaskCompletionBlocksWithBlock:(id)arg1;
- (void)setExpirationHandler:(id)arg1;
- (id)initWithHandlerQueue:(id)arg1 timeout:(double)arg2 debugDescription:(id)arg3;
- (void)addTaskCompletionBlock:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (id)finishedHandler;
- (void)setFinishedHandler:(id)arg1;
- (void)setResult:(id)arg1;
- (id)result;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (void)_invalidateTimer;

@end
