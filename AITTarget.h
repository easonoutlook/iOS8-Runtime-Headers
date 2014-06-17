/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AITTarget.framework/AITTarget
 */

@class AITXPCConnection, NSString, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSMutableArray, NSMutableDictionary;

@interface AITTarget : NSObject <AITXPCConnectionDelegate> {
    int _notifyToken;
    NSMutableDictionary *_observerRecords;
    AITXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_clientQueue;
    double _startTime;
    NSMutableArray *_queuedProbes;
    NSObject<OS_dispatch_queue> *_rpcDispatchQueue;
    NSString *_rpcSelectorPrefix;
    id _rpcTarget;
    NSObject<OS_dispatch_source> *_watchdogSource;
}

@property(retain) id rpcTarget;
@property(copy) NSString * rpcSelectorPrefix;
@property NSObject<OS_dispatch_queue> * rpcDispatchQueue;

+ (id)sharedTarget;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)rpcDispatchQueue;
- (void)setRpcDispatchQueue:(id)arg1;
- (id)rpcSelectorPrefix;
- (void)setRpcSelectorPrefix:(id)arg1;
- (id)rpcTarget;
- (void)setRpcTarget:(id)arg1;
- (void)removeObserver:(id)arg1 forMessage:(id)arg2;
- (void)xpcConnectionFailed:(id)arg1;
- (void)xpcConnectionUnhandledMessage:(id)arg1;
- (void)xpcConnection:(id)arg1 receivedMessage:(id)arg2 userInfo:(id)arg3;
- (void)_sendAckForToken:(id)arg1 success:(BOOL)arg2 returnValue:(id)arg3 details:(id)arg4;
- (id)_rpcTarget;
- (void)_setupXPCConnectionIfNeeded;
- (void)_flushQueuedProbes;
- (void)_setupWatchdog;
- (BOOL)_appIsWhitelisted;
- (void)_probeBarrier:(id)arg1;
- (void)_fireProbe:(id)arg1 withArgumentDictionary:(id)arg2;
- (BOOL)_probeIsEnabled:(id)arg1;
- (void)addObserver:(id)arg1 forMessage:(id)arg2 dispatchQueue:(id)arg3 block:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)retainCount;
- (id)autorelease;
- (id)retain;
- (oneway void)release;
- (id)init;

@end
