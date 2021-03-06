/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@class NSObject<OS_dispatch_queue>, HMMessageDispatcher, NSUUID, HMHome, NSString, NSMutableDictionary, NSArray;

@interface HMRoom : NSObject <NSSecureCoding, HMMessageReceiver> {
    NSString *_name;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMMessageDispatcher *_msgDispatcher;
    HMHome *_home;
    NSMutableDictionary *_pendingRequests;
}

@property(copy,readonly) NSString * name;
@property(copy,readonly) NSArray * accessories;
@property(retain) NSUUID * uuid;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;
@property(retain) HMMessageDispatcher * msgDispatcher;
@property HMHome * home;
@property(retain) NSMutableDictionary * pendingRequests;
@property(readonly) NSUUID * messageTargetUUID;
@property(readonly) NSObject<OS_dispatch_queue> * messageReceiveQueue;

+ (BOOL)supportsSecureCoding;

- (void)setHome:(id)arg1;
- (id)home;
- (id)workQueue;
- (void)setUuid:(id)arg1;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)setMsgDispatcher:(id)arg1;
- (id)msgDispatcher;
- (void)setWorkQueue:(id)arg1;
- (id)accessories;
- (id)initWithName:(id)arg1;
- (id)uuid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (id)name;
- (id)init;
- (void)handleRoomRenamedNotification:(id)arg1;
- (void)_updateName:(id)arg1 completionHandler:(id)arg2;
- (void)setPendingRequests:(id)arg1;
- (void)updateName:(id)arg1 completionHandler:(id)arg2;
- (void)configure:(id)arg1 uuid:(id)arg2 messageDispatcher:(id)arg3;
- (id)pendingRequests;
- (void)_registerNotificationHandlers;

@end
