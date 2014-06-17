/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@class NSMutableDictionary, NSArray, HMDLocation, NSSet, HMMessageDispatcher;

@interface HMDIDSMessageDispatcher : HMMessageDispatcher  {
    HMMessageDispatcher *_recvDispatcher;
    NSMutableDictionary *_remotePeers;
    NSSet *_whitelistedCommands;
    NSMutableDictionary *_activeRemoteSessions;
    HMDLocation *_currentlocation;
}

@property(readonly) NSArray * peers;
@property(retain) HMMessageDispatcher * recvDispatcher;
@property(retain) NSMutableDictionary * remotePeers;
@property(retain) NSSet * whitelistedCommands;
@property(retain) NSMutableDictionary * activeRemoteSessions;
@property(retain) HMDLocation * currentlocation;


- (void)setActiveRemoteSessions:(id)arg1;
- (void)setWhitelistedCommands:(id)arg1;
- (void)setRemotePeers:(id)arg1;
- (void)setRemotePeer:(id)arg1 forHome:(id)arg2;
- (void)enableRemoteAccess:(BOOL)arg1 forHome:(id)arg2;
- (void)_handlePeerElectionResponse:(id)arg1 forHome:(id)arg2 incomingMessage:(id)arg3 forTarget:(id)arg4;
- (void)_sendPeerElectionMessage:(id)arg1 incomingMessage:(id)arg2 forTarget:(id)arg3;
- (id)whitelistedCommands;
- (void)setCurrentlocation:(id)arg1;
- (void)sendMessage:(id)arg1 target:(id)arg2 destination:(id)arg3;
- (id)activeRemoteSessions;
- (id)currentlocation;
- (id)remotePeers;
- (void)_currentLocationHasChanged:(id)arg1;
- (void)_setRemotePeer:(id)arg1 forHome:(id)arg2;
- (void)_enableRemoteAccess:(BOOL)arg1 forHome:(id)arg2;
- (void)_sendMessage:(id)arg1 target:(id)arg2 destination:(id)arg3 responseQueue:(id)arg4 responseHandler:(id)arg5;
- (void)sendMessage:(id)arg1 target:(id)arg2 destination:(id)arg3 responseQueue:(id)arg4 responseHandler:(id)arg5;
- (void)setRecvDispatcher:(id)arg1;
- (void)sendMessage:(id)arg1 target:(id)arg2 responseQueue:(id)arg3 responseHandler:(id)arg4;
- (void)dispatchMessage:(id)arg1 target:(id)arg2;
- (void)unregisterForForMessage:(id)arg1 receiver:(id)arg2;
- (id)recvDispatcher;
- (void)currentLocationHasChanged:(id)arg1;
- (id)initWithIDSTransport:(id)arg1;
- (void)registerForMessage:(id)arg1 receiver:(id)arg2 messageHandler:(id)arg3;
- (void)sendMessage:(id)arg1 target:(id)arg2 andInvokeCompletionHandler:(id)arg3;
- (void)sendMessage:(id)arg1 target:(id)arg2;
- (id)peers;
- (void).cxx_destruct;

@end