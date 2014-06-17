/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSObject<OS_dispatch_queue>, IMRemoteObject<IMAVDaemonProtocol>, NSProtocolChecker, NSMutableArray, NSLock, NSString, IMAVDaemonListener, IMLocalObject;

@interface IMAVDaemonController : NSObject  {
    IMRemoteObject<IMAVDaemonProtocol> *_remoteObject;
    IMLocalObject *_localObject;
    IMAVDaemonListener *_daemonListener;
    NSProtocolChecker *_protocol;
    NSString *_listenerID;
    NSMutableArray *_listeners;
    NSLock *_connectionLock;
    NSObject<OS_dispatch_queue> *_listenerLockQueue;
    NSObject<OS_dispatch_queue> *_remoteDaemonLockQueue;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    NSObject<OS_dispatch_queue> *_localObjectLockQueue;
    struct __CFRunLoopSource { } *_runLoopSource;
    BOOL _hasCheckedForDaemon;
    BOOL _acquiringDaemonConnection;
}

@property(readonly) IMAVDaemonListener * listener;
@property(readonly) NSObject<OS_dispatch_queue> * _remoteMessageQueue;

+ (id)sharedInstance;

- (void)_connectToDaemon;
- (id)_remoteMessageQueue;
- (BOOL)removeListenerID:(id)arg1;
- (void)_listenerSetUpdated;
- (BOOL)hasListenerForID:(id)arg1;
- (BOOL)localObjectExists;
- (void)localObjectDiedNotification:(id)arg1;
- (void)remoteObjectDiedNotification:(id)arg1;
- (BOOL)remoteObjectExists;
- (BOOL)__isRemoteObjectValidOnQueue:(id)arg1;
- (BOOL)__isLocalObjectValidOnQueue:(id)arg1;
- (void)_remoteObjectCleanup;
- (void)_localObjectCleanup;
- (void)_noteSetupComplete;
- (void)_remoteObjectDiedNotification:(id)arg1;
- (void)_localObjectDiedNotification:(id)arg1;
- (BOOL)_makeConnectionWithCompletionBlock:(id)arg1;
- (void)_cleanUpConnection;
- (void)_disconnectFromDaemon;
- (BOOL)addListenerID:(id)arg1;
- (id)listener;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isConnecting;
- (BOOL)isConnected;

@end
