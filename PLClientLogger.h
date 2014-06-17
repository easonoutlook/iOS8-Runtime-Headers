/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
 */

@class NSString, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSMutableDictionary;

@interface PLClientLogger : NSObject  {
    BOOL _clientDebug;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_permissionQueue;
    NSString *_processName;
    NSMutableDictionary *_permissionCache;
    NSMutableDictionary *_pendingTaskCache;
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
    NSObject<OS_xpc_object> *_xpcConnection;
}

@property BOOL clientDebug;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;
@property(retain) NSObject<OS_dispatch_queue> * permissionQueue;
@property(retain) NSString * processName;
@property(retain) NSMutableDictionary * permissionCache;
@property(retain) NSMutableDictionary * pendingTaskCache;
@property(retain) NSObject<OS_dispatch_queue> * xpcConnectionQueue;
@property(retain) NSObject<OS_xpc_object> * xpcConnection;

+ (id)sharedInstance;

- (void)setPermissionCache:(id)arg1;
- (id)permissionCache;
- (void)setProcessName:(id)arg1;
- (id)workQueue;
- (void)setXpcConnectionQueue:(id)arg1;
- (void)setPermissionQueue:(id)arg1;
- (id)queryForClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3;
- (void)powerlogStateChanged;
- (void)xpcSendMessage:(id)arg1;
- (void)addToPendingTaskCacheForType:(id)arg1 forClientID:(short)arg2 forKey:(id)arg3 withPayload:(id)arg4;
- (short)permissionForClientID:(short)arg1 withKey:(id)arg2 withType:(id)arg3;
- (void)logForClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3;
- (id)pendingTasksForType:(id)arg1 forClientID:(short)arg2 forKey:(id)arg3;
- (id)xpcSendMessageWithReply:(id)arg1;
- (id)buildMessageForClientID:(short)arg1 withKey:(id)arg2 withPayload:(id)arg3;
- (id)permissionQueue;
- (void)setCachePermission:(short)arg1 ForClientID:(short)arg2 withKey:(id)arg3 withType:(id)arg4;
- (short)cachedPermissionForClientID:(short)arg1 withKey:(id)arg2 withType:(id)arg3;
- (id)xpcConnectionQueue;
- (id)pendingTaskCache;
- (void)setPendingTaskCache:(id)arg1;
- (void)setClientDebug:(BOOL)arg1;
- (BOOL)clientDebug;
- (void)setXpcConnection:(id)arg1;
- (id)xpcConnection;
- (void)setWorkQueue:(id)arg1;
- (void).cxx_destruct;
- (id)processName;
- (id)init;

@end
