/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@class NSData, NSObject<OS_dispatch_source>, NSObject<OS_dispatch_queue>, NSMutableArray, NSObject<OS_xpc_object>, CUTWeakReference, <APSConnectionDelegate>, NSString, NSMutableDictionary, NSArray;

@interface APSConnection : NSObject  {
    CUTWeakReference *_delegateReference;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSString *_environmentName;
    NSData *_publicToken;
    unsigned int _messageSize;
    NSString *_connectionPortName;
    unsigned int _connectionPort;
    NSArray *_enabledTopics;
    NSArray *_ignoredTopics;
    NSArray *_opportunisticTopics;
    BOOL _enableCriticalReliability;
    BOOL _enableStatusNotifications;
    BOOL _isConnected;
    BOOL _usesAppLaunchStats;
    NSMutableDictionary *_idsToOutgoingMessages;
    unsigned int _nextOutgoingMessageID;
    NSObject<OS_dispatch_queue> *_machQueue;
    NSObject<OS_dispatch_source> *_mach_source;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    BOOL _everHadDelegate;
    NSMutableArray *_queuedDelegateBlocks;
}

@property(retain,readonly) NSData * publicToken;
@property unsigned int messageSize;
@property <APSConnectionDelegate> * delegate;
@property(readonly) NSObject<OS_dispatch_queue> * delegateQueue;
@property(readonly) NSObject<OS_dispatch_queue> * ivarQueue;
@property BOOL usesAppLaunchStats;

+ (struct __SecIdentity { }*)copyIdentity;
+ (double)keepAliveIntervalForEnvironmentName:(id)arg1;
+ (void)notifySafeToSendFilter;
+ (id)connectionsDebuggingState;
+ (void)invalidateDeviceIdentity;
+ (void)requestCourierConnection;
+ (BOOL)isValidEnvironment:(id)arg1;
+ (void)_setTokenState;
+ (void)_blockingXPCCallWithArgumentBlock:(id)arg1 resultHandler:(id)arg2;

- (void)removeFromRunLoop;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2;
- (void)_callDelegateOnIvarQueueWithBlock:(id)arg1;
- (void)setMessageSize:(unsigned int)arg1;
- (unsigned int)messageSize;
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2;
- (void)setEnableCriticalReliability:(BOOL)arg1;
- (void)_cancelConnection;
- (void)sendOutgoingMessage:(id)arg1;
- (void)cancelOutgoingMessage:(id)arg1;
- (id)initWithEnvironmentName:(id)arg1;
- (id)initWithEnvironmentName:(id)arg1 queue:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1;
- (void)invalidateTokenForTopic:(id)arg1 identifier:(id)arg2;
- (void)requestTokenForTopic:(id)arg1 identifier:(id)arg2;
- (void)setEnabledTopics:(id)arg1;
- (id)enabledTopics;
- (id)publicToken;
- (void)shutdown;
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 queue:(id)arg3;
- (id)delegateQueue;
- (id)ivarQueue;
- (void)sendFakeMessage:(id)arg1;
- (BOOL)hasIdentity;
- (void)_deliverToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3;
- (void)_deliverConnectionStatusFromDealloc:(BOOL)arg1;
- (void)_deliverPublicToken:(id)arg1;
- (void)_deliverMessage:(id)arg1;
- (BOOL)usesAppLaunchStats;
- (void)setUsesAppLaunchStats:(BOOL)arg1;
- (void)moveTopic:(id)arg1 fromList:(unsigned int)arg2 toList:(unsigned int)arg3;
- (id)opportunisticTopics;
- (id)ignoredTopics;
- (void)_disconnectFromDealloc;
- (void)_sendOutgoingMessage:(id)arg1 fake:(BOOL)arg2;
- (id)_listForIdentifierOnIvarQueue:(unsigned int)arg1;
- (void)_onIvarQueue_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 sendToDaemon:(BOOL)arg4;
- (void)_handleEvent:(id)arg1 withHandler:(id)arg2;
- (void)_cancelConnectionOnIvarQueue;
- (void)_deliverConnectionStatusChange:(BOOL)arg1;
- (void)_deliverPublicTokenOnIvarQueue:(id)arg1;
- (void)_deliverDidReconnectOnIvarQueue;
- (void)_setEnableStatusNotifications:(BOOL)arg1 sendToDaemon:(BOOL)arg2;
- (void)_setUsesAppLaunchStats:(BOOL)arg1 sendToDaemon:(BOOL)arg2;
- (void)_setEnableCriticalReliability:(BOOL)arg1 sendToDaemon:(BOOL)arg2;
- (void)_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 sendToDaemon:(BOOL)arg4;
- (void)_addUsesAppLaunchStatsToXPCMessage:(id)arg1;
- (void)_addEnableStatusNotificationsToXPCMessage:(id)arg1;
- (void)_addEnableCriticalReliabilityToXPCMessage:(id)arg1;
- (void)_deliverOutgoingMessageResultWithID:(unsigned int)arg1 error:(id)arg2;
- (void)_noteDisconnectedFromDaemonOnIvarQueue;
- (void)setEnableStatusNotifications:(BOOL)arg1;
- (void)_shutdownFromDealloc;
- (void)_shutdownOnIvarQueue;
- (void)_disconnectOnIvarQueue;
- (void)_connectIfNecessaryOnIvarQueue;
- (void)_connectIfNecessary;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)_disconnect;
- (BOOL)isConnected;

@end