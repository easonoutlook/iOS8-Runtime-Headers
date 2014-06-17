/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@class HMMessageDispatcher, NSString, NSObject<OS_dispatch_queue>, NSUUID, NSMutableArray, HMDHome;

@interface HMDZone : NSObject <HMMessageReceiver, NSSecureCoding> {
    NSString *_name;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_currentRooms;
    HMDHome *_home;
    HMMessageDispatcher *_msgDispatcher;
}

@property(retain) NSString * name;
@property(readonly) NSUUID * uuid;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;
@property(retain) NSMutableArray * currentRooms;
@property HMDHome * home;
@property(retain) HMMessageDispatcher * msgDispatcher;
@property(readonly) NSUUID * messageTargetUUID;
@property(readonly) NSObject<OS_dispatch_queue> * messageReceiveQueue;

+ (BOOL)supportsSecureCoding;

- (void)setHome:(id)arg1;
- (id)home;
- (id)workQueue;
- (void)setCurrentRooms:(id)arg1;
- (id)currentRooms;
- (id)initWithName:(id)arg1 home:(id)arg2 queue:(id)arg3;
- (void)removeRoom:(id)arg1;
- (id)roomWithUUID:(id)arg1;
- (id)roomWithName:(id)arg1;
- (void)_handleRemoveRoom:(id)arg1;
- (void)_handleAddRoom:(id)arg1;
- (void)_handleRename:(id)arg1;
- (id)rooms;
- (void)configure:(id)arg1 queue:(id)arg2;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)_registerForMessages;
- (void)setMsgDispatcher:(id)arg1;
- (id)msgDispatcher;
- (void)setWorkQueue:(id)arg1;
- (id)uuid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;

@end
