/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
 */

@class SBCClientConfiguration, SBCXPCServiceInterface, NSXPCConnection, NSObject<OS_dispatch_queue>, NSMutableDictionary;

@interface SBCXPCService : NSObject  {
    BOOL _isConnecting;
    NSObject<OS_dispatch_queue> *_queue;
    id _serviceProxy;
    id _applicationWillTerminateObserver;
    NSXPCConnection *_xpcConnection;
    SBCClientConfiguration *_clientConfiguration;
    NSMutableDictionary *_pendingReplyBlockCompletionHandlers;
    SBCXPCServiceInterface *_XPCServiceInterface;
}

@property(readonly) NSObject<OS_dispatch_queue> * queue;
@property(readonly) id serviceProxy;
@property(readonly) id applicationWillTerminateObserver;
@property(readonly) NSXPCConnection * xpcConnection;
@property(readonly) SBCClientConfiguration * clientConfiguration;
@property(readonly) NSMutableDictionary * pendingReplyBlockCompletionHandlers;
@property(readonly) SBCXPCServiceInterface * XPCServiceInterface;
@property(readonly) BOOL isConnecting;

+ (id)XPCInterfaceDebugDescription;
+ (id)newListener;
+ (Class)XPCServiceInterfaceClass;

- (id)XPCServiceInterface;
- (id)pendingReplyBlockCompletionHandlers;
- (id)applicationWillTerminateObserver;
- (void)_invalidateOutstandingRequests:(id)arg1;
- (void)_dequeueReplyBlockMessageWithEnqueuedToken:(id)arg1;
- (id)_serviceProxy;
- (id)_enqueueReplyBlockMessageWithSelector:(SEL)arg1 withClientCompletionHandler:(id)arg2;
- (void)_onQueueInvalidateOutstandingRequests:(id)arg1;
- (void)_openServiceConnection;
- (void)sendMessage:(SEL)arg1 withClientCompletionHandler:(id)arg2 messageBlock:(id)arg3;
- (void)didConnectToService;
- (id)initWithClientConfiguration:(id)arg1;
- (oneway void)setClientConfiguration:(id)arg1;
- (id)clientConfiguration;
- (id)serviceProxy;
- (void)_onQueueCloseServiceConnection;
- (void)closeServiceConnection;
- (id)newServiceConnection;
- (id)xpcConnection;
- (id)queue;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isConnecting;

@end