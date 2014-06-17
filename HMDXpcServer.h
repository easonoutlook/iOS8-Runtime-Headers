/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSXPCListener, HMDIDSMessageDispatcher;

@interface HMDXpcServer : HMMessageDispatcher <NSXPCListenerDelegate> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSXPCListener *_xpcListener;
    NSMutableSet *_xpcClients;
    HMDIDSMessageDispatcher *_recvDispatcher;
}

@property(retain) NSObject<OS_dispatch_queue> * workQueue;
@property(retain) NSXPCListener * xpcListener;
@property(retain) NSMutableSet * xpcClients;
@property(retain) HMDIDSMessageDispatcher * recvDispatcher;


- (id)workQueue;
- (void)setRecvDispatcher:(id)arg1;
- (void)setXpcClients:(id)arg1;
- (void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(id)arg4;
- (void)dispatchMessage:(id)arg1 target:(id)arg2;
- (void)unregisterForForMessage:(id)arg1 receiver:(id)arg2;
- (id)recvDispatcher;
- (id)xpcClients;
- (id)initWithQueue:(id)arg1 receiveDispatcher:(id)arg2 registerAsMachService:(BOOL)arg3;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(id)arg3;
- (void)sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(id)arg3;
- (void)sendMessage:(id)arg1 target:(id)arg2;
- (void)setWorkQueue:(id)arg1;
- (void)setXpcListener:(id)arg1;
- (id)xpcListener;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void).cxx_destruct;
- (void)reset;
- (id)endPoint;
- (BOOL)start;
- (BOOL)stop;
- (void)dealloc;

@end
