/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@class NSMutableDictionary, <BRNotificationReceiverDelegate>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSMutableArray, BRNotificationQueue;

@interface BRNotificationReceiver : NSObject <BRReachabilityObserver, BRItemNotificationReceiving> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_ipcQueue;
    NSObject<OS_dispatch_queue> *_invalidationQueue;
    BRNotificationQueue *_notifs;
    NSMutableArray *_senders;
    int _gatherDones;
    <BRNotificationReceiverDelegate> *_delegate;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_source> *_timer;
    unsigned int _receivedChanges;
    unsigned int _batchingChanges;
    double _batchingDelay;
    unsigned long long _lastBatchTime;
    NSMutableDictionary *_progressObserverByID;
    NSMutableDictionary *_itemInTransferByID;
}

@property(readonly) unsigned int pendingCount;
@property unsigned int batchingChanges;
@property double batchingDelay;
@property(retain) <BRNotificationReceiverDelegate> * delegate;


- (void)reachabilityMonitor:(id)arg1 didChangeReachabilityStatusTo:(BOOL)arg2;
- (void)dequeue:(unsigned int)arg1 block:(id)arg2;
- (void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(id)arg4;
- (void)setBatchingDelay:(double)arg1;
- (double)batchingDelay;
- (void)setBatchingChanges:(unsigned int)arg1;
- (unsigned int)batchingChanges;
- (void)enableUpdatesFromIPCAfterStitching;
- (void)disableUpdatesFromIPCBeforeStitching;
- (void)receiveStitchingUpdates:(id)arg1;
- (oneway void)invalidateAndDontNotifyDelegate;
- (BOOL)watchUbiquitousScopes:(id)arg1 bundleID:(id)arg2 predicate:(id)arg3;
- (unsigned int)pendingCount;
- (void)_receiveUpdates:(id)arg1;
- (void)invalidateAndNotify:(BOOL)arg1;
- (id)_getSender;
- (void)_signalSourceIfNeeded;
- (void)resume;
- (void)suspend;
- (id)delegate;
- (oneway void)invalidate;
- (void)flush;
- (void)dealloc;
- (void)finalize;
- (void)setDelegate:(id)arg1;
- (id)init;

@end
