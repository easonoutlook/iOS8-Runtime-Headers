/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@class NSObject<OS_dispatch_queue>, HMMessageDispatcher, NSUUID, <HMAccessoryBrowserDelegate>, NSMutableArray, HMXpcClient, NSArray;

@interface HMAccessoryBrowser : NSObject <HMMessageReceiver> {
    <HMAccessoryBrowserDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_uuid;
    NSMutableArray *_accessories;
    HMXpcClient *_xpcClient;
    HMMessageDispatcher *_msgDispatcher;
}

@property <HMAccessoryBrowserDelegate> * delegate;
@property(copy,readonly) NSArray * discoveredAccessories;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;
@property(retain) NSUUID * uuid;
@property(retain) NSMutableArray * accessories;
@property(retain) HMXpcClient * xpcClient;
@property(retain) HMMessageDispatcher * msgDispatcher;
@property(readonly) NSUUID * messageTargetUUID;
@property(readonly) NSObject<OS_dispatch_queue> * messageReceiveQueue;


- (id)workQueue;
- (void)setUuid:(id)arg1;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)setMsgDispatcher:(id)arg1;
- (id)msgDispatcher;
- (void)setWorkQueue:(id)arg1;
- (id)accessories;
- (void)setAccessories:(id)arg1;
- (id)uuid;
- (void).cxx_destruct;
- (void)_start;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)init;
- (id)discoveredAccessories;
- (void)stopSearchingForNewAccessories;
- (void)startSearchingForNewAccessories;
- (void)_handleNewAccessoriesRemoved:(id)arg1;
- (void)_handleNewAccessoriesFound:(id)arg1;
- (void)setXpcClient:(id)arg1;
- (id)xpcClient;
- (void)_registerNotificationHandlers;

@end
