/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@class HMMessageDispatcher, NSString, NSUUID, NSObject<OS_dispatch_queue>, NSMutableArray, HMDHome;

@interface HMDTrigger : NSObject <HMMessageReceiver, NSSecureCoding> {
    BOOL _active;
    NSString *_name;
    NSUUID *_uuid;
    NSMutableArray *_currentActionSets;
    HMDHome *_home;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMMessageDispatcher *_msgDispatcher;
}

@property(retain) NSString * name;
@property(retain) NSUUID * uuid;
@property(retain) NSMutableArray * currentActionSets;
@property HMDHome * home;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;
@property(retain) HMMessageDispatcher * msgDispatcher;
@property BOOL active;
@property(readonly) NSUUID * messageTargetUUID;
@property(readonly) NSObject<OS_dispatch_queue> * messageReceiveQueue;

+ (BOOL)supportsSecureCoding;

- (void)setHome:(id)arg1;
- (id)home;
- (id)workQueue;
- (void)setUuid:(id)arg1;
- (void)setCurrentActionSets:(id)arg1;
- (id)currentActionSets;
- (void)configure:(id)arg1 queue:(id)arg2;
- (void)removeActionFromActionSet:(id)arg1;
- (void)removeActionSet:(id)arg1;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)initWithName:(id)arg1 home:(id)arg2;
- (void)_handleActivateTriggerRequest:(id)arg1;
- (void)_handleUpdateActionSetRequest:(id)arg1;
- (void)_handleRenameRequest:(id)arg1;
- (id)_updateActionSets:(id)arg1 add:(BOOL)arg2;
- (void)_registerForMessages;
- (void)setMsgDispatcher:(id)arg1;
- (void)checkForNoActions;
- (id)msgDispatcher;
- (id)_activate:(BOOL)arg1;
- (id)actionSets;
- (void)setWorkQueue:(id)arg1;
- (id)uuid;
- (void).cxx_destruct;
- (void)setActive:(BOOL)arg1;
- (BOOL)active;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (id)name;
- (void)setName:(id)arg1;

@end
