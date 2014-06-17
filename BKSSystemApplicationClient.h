/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class <BKSSystemApplicationClientDelegate>, NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_queue>;

@interface BKSSystemApplicationClient : BSBaseXPCClient  {
    NSObject<OS_dispatch_queue> *_callOutQueue;
    BOOL _pendingCheckIn;
    BOOL _sentConnect;
    NSObject<OS_dispatch_semaphore> *_checkinSemaphore;
    <BKSSystemApplicationClientDelegate> *_delegate;
}

@property <BKSSystemApplicationClientDelegate> * delegate;


- (void)checkIn;
- (void)_connect;
- (void)queue_connectionWasInvalidated;
- (void)queue_connectionWasInterrupted;
- (void)queue_connectionWasResumed;
- (void)queue_handleMessage:(id)arg1;
- (void)_sendMessageOfType:(int)arg1 packer:(id)arg2 replyHandler:(id)arg3;
- (void)_queue_handleWatchdogPing:(id)arg1;
- (void)_sendMessageOfType:(int)arg1 packer:(id)arg2;
- (void)_sendMessageOfType:(int)arg1 packer:(id)arg2 replyHandler:(id)arg3 waitForReply:(BOOL)arg4 waitDuration:(unsigned long long)arg5;
- (id)initWithCalloutQueue:(id)arg1;
- (void)connect;
- (id)delegate;
- (void)restart;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end