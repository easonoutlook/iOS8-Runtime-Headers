/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GKDiscovery, NSSet, NSObject<OS_dispatch_queue>, GKMatch, NSDictionary, NSMutableDictionary, NSDate;

@interface GKMatchmaker : NSObject  {
    BOOL _nearbyAdvertising;
    BOOL _wasNearbyBrowsing;
    BOOL _nearbyBrowsing;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _inviteHandler;

    GKMatch *_match;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _inviteeResponseHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _recipientResponseHandler;

    NSSet *_invitees;
    NSDictionary *_inviteesByUserID;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _nearbyPlayerHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _nearbyPlayerIDHandler;

    NSObject<OS_dispatch_queue> *_lookForInviteQueue;
    int _matching;
    NSMutableDictionary *_nearbyPlayers;
    NSDate *_nearbyQueryLastCheckDate;
    GKDiscovery *_nearbyDiscovery;
    NSSet *_nearbyCompatibileHashes;
    NSMutableDictionary *_nearbyInvites;
    double _nearbyQueryAllowance;
}

@property BOOL nearbyBrowsing;
@property BOOL nearbyAdvertising;
@property BOOL wasNearbyBrowsing;
@property(readonly) BOOL hasInviteListener;
@property(retain) NSMutableDictionary * nearbyPlayers;
@property(retain) NSMutableDictionary * nearbyInvites;
@property(retain) GKDiscovery * nearbyDiscovery;
@property(retain) NSDate * nearbyQueryLastCheckDate;
@property(retain) NSSet * nearbyCompatibileHashes;
@property double nearbyQueryAllowance;
@property(copy) id nearbyPlayerHandler;
@property(copy) id nearbyPlayerIDHandler;
@property(retain) GKMatch * match;
@property(retain) NSSet * invitees;
@property(copy) id inviteeResponseHandler;
@property(copy) id recipientResponseHandler;
@property NSObject<OS_dispatch_queue> * lookForInviteQueue;
@property(copy) id inviteHandler;
@property int matching;
@property(retain) NSDictionary * inviteesByUserID;

+ (id)syncQueue;
+ (id)descriptionForNearbyDictionary:(id)arg1;
+ (id)sharedMatchmaker;

- (id)match;
- (void)setMatch:(id)arg1;
- (void)setNearbyPlayers:(id)arg1;
- (id)nearbyPlayers;
- (void)stopBrowsingForNearbyPlayers;
- (void)startBrowsingForNearbyPlayersWithReachableHandler:(id)arg1;
- (id)nearbyInviteFromPlayer:(id)arg1;
- (void)localPlayerAcceptedNearbyInvite:(id)arg1;
- (void)removeNearbyInviteFromPlayer:(id)arg1;
- (void)declineNearbyInviteFromDevice:(id)arg1 reason:(int)arg2;
- (void)saveNearbyInvite:(id)arg1 fromPlayer:(id)arg2;
- (void)loadPhotoDataDictionaryWithHandler:(id)arg1;
- (void)determineIfShouldRespondToNearbyPlayer:(id)arg1 handler:(id)arg2;
- (void)sendProfileResponseToDevice:(id)arg1;
- (BOOL)compatibilityMatrix:(id)arg1 includesAppWithBundleID:(id)arg2 version:(id)arg3;
- (void)setNearbyPlayerDeclined:(id)arg1 deviceID:(id)arg2 reason:(int)arg3;
- (void)setNearbyPlayerAccepted:(id)arg1 deviceID:(id)arg2 connectionData:(id)arg3;
- (void)setNearbyPlayerFailed:(id)arg1 deviceID:(id)arg2;
- (id)profileDictionaryForLocalPlayer;
- (id)nearbyDevicesForPlayer:(id)arg1 withState:(int)arg2;
- (void)presentNearbyInvite:(id)arg1 fromDevice:(id)arg2;
- (int)numberOfNearbyDevicesForPlayer:(id)arg1 withState:(int)arg2;
- (void)generateHashedCompatibiltySet;
- (void)startNearbyAdvertising;
- (id)hashForCurrentGame;
- (int)currentEnvironment;
- (void)setupNearbyDiscovery;
- (void)performSync:(id)arg1;
- (id)_nearbyDeviceWithDeviceID:(id)arg1;
- (void)loadCompatabilityMatrixAsDictionaryWithHandler:(id)arg1;
- (id)hashForBundleID:(id)arg1 version:(id)arg2;
- (BOOL)shouldRespondToNearbyQuery;
- (void)nearbyInviteWasCancelled:(id)arg1 fromDevice:(id)arg2;
- (void)handleNearbyInviteResponse:(id)arg1 fromDevice:(id)arg2;
- (void)handleNearbyInvite:(id)arg1 fromDevice:(id)arg2;
- (void)handleNearbyProfileResponse:(id)arg1 fromDevice:(id)arg2;
- (void)handleNearbyProfileQuery:(id)arg1 fromDevice:(id)arg2;
- (void)receivedData:(id)arg1 fromNearbyDeviceID:(id)arg2;
- (void)lostNearbyDeviceID:(id)arg1;
- (void)foundNearbyDeviceID:(id)arg1 discoveryInfo:(id)arg2;
- (void)setNearbyDevice:(id)arg1 reachable:(BOOL)arg2;
- (id)nearbyDeviceWithDeviceID:(id)arg1;
- (void)declineReceivedNearbyInvites;
- (void)cancelSentNearbyInvites;
- (void)stopNearbyAdvertising;
- (void)localPlayerRespondedToNearbyInvite:(id)arg1;
- (void)setNearbyInvites:(id)arg1;
- (id)nearbyInvites;
- (void)setNearbyCompatibileHashes:(id)arg1;
- (id)nearbyCompatibileHashes;
- (void)setNearbyQueryAllowance:(double)arg1;
- (double)nearbyQueryAllowance;
- (void)setNearbyDiscovery:(id)arg1;
- (id)nearbyDiscovery;
- (void)setNearbyQueryLastCheckDate:(id)arg1;
- (id)nearbyQueryLastCheckDate;
- (void)setNearbyBrowsing:(BOOL)arg1;
- (BOOL)nearbyBrowsing;
- (void)setWasNearbyBrowsing:(BOOL)arg1;
- (BOOL)wasNearbyBrowsing;
- (void)setNearbyAdvertising:(BOOL)arg1;
- (BOOL)nearbyAdvertising;
- (int)matching;
- (void)setLookForInviteQueue:(id)arg1;
- (id)lookForInviteQueue;
- (id)nearbyPlayerIDHandler;
- (id)nearbyPlayerHandler;
- (id)inviteHandler;
- (void)setNearbyPlayerFailed:(id)arg1;
- (void)setNearbyPlayerDeclined:(id)arg1 reason:(int)arg2;
- (void)setNearbyPlayerAccepted:(id)arg1 connectionData:(id)arg2;
- (void)startBrowsingForNearbyPlayersWithHandler:(id)arg1;
- (void)queryActivityWithCompletionHandler:(id)arg1;
- (void)queryPlayerGroupActivity:(unsigned int)arg1 withCompletionHandler:(id)arg2;
- (void)finishMatchmakingForMatch:(id)arg1;
- (void)cancelInviteToPlayer:(id)arg1;
- (void)addPlayersForHostedMatchRequest:(id)arg1 existingPlayerCount:(int)arg2 completionHandler:(id)arg3;
- (void)addPlayersToMatch:(id)arg1 matchRequest:(id)arg2 completionHandler:(id)arg3;
- (void)findPlayersForHostedMatchRequest:(id)arg1 withCompletionHandler:(id)arg2;
- (void)findMatchForRequest:(id)arg1 withCompletionHandler:(id)arg2;
- (void)matchForInvite:(id)arg1 completionHandler:(id)arg2;
- (void)setInviteHandler:(id)arg1;
- (void)finishedAuthenticating;
- (int)responseForDeclineReason:(int)arg1;
- (id)inviteesByUserID;
- (void)stopNearbyBrowsing;
- (void)setNearbyPlayerIDHandler:(id)arg1;
- (void)startNearbyBrowsing;
- (void)setNearbyPlayerHandler:(id)arg1;
- (void)cancelPendingInvitesAndMarkInviteComplete:(BOOL)arg1;
- (void)cancelPendingInviteToPlayer:(id)arg1;
- (void)cancelNearbyInvitesToPlayers:(id)arg1;
- (void)findPlayersForHostedRequest:(id)arg1 withCompletionHandler:(id)arg2;
- (void)matchWithRequest:(id)arg1 currentMatch:(id)arg2 hostedCurrentPlayerCount:(int)arg3 serverHosted:(BOOL)arg4 rematchID:(id)arg5 completionHandler:(id)arg6;
- (void)_request:(id)arg1 match:(id)arg2 rematchID:(id)arg3 serverHosted:(BOOL)arg4 playerCount:(int)arg5 connectionData:(id)arg6 completionHandler:(id)arg7;
- (void)invitePlayersWithRequest:(id)arg1 serverHosted:(BOOL)arg2 completionHandler:(id)arg3;
- (void)setMatching:(int)arg1;
- (void)invitePlayersWithRequest:(id)arg1 serverHosted:(BOOL)arg2 onlineConnectionData:(id)arg3 completionHandler:(id)arg4;
- (void)inviteAnyNearbyPlayersWithRequest:(id)arg1;
- (void)doneMatchmaking;
- (void)reportResponse:(int)arg1 forInvitees:(id)arg2;
- (BOOL)removeInvitee:(id)arg1;
- (void)matchForRemoteInvite:(id)arg1 completionHandler:(id)arg2;
- (void)matchForNearbyInvite:(id)arg1 handler:(id)arg2;
- (void)acceptNearbyInvite:(id)arg1 connectionData:(id)arg2;
- (void)respondToHostedInvite:(id)arg1 completionHandler:(id)arg2;
- (BOOL)hasInviteListener;
- (void)setInvitees:(id)arg1;
- (id)invitees;
- (void)setInviteesByUserID:(id)arg1;
- (void)updateNearbyAdvertising;
- (void)setConnectivitySettings:(id)arg1;
- (void)localPlayerAcceptedGameInvite:(id)arg1;
- (void)inviteeDeclinedNotification:(id)arg1;
- (void)inviteeAcceptedNotification:(id)arg1;
- (void)loadConnectivitySettingsWithCompletionHandler:(id)arg1;
- (void)setRecipientResponseHandler:(id)arg1;
- (id)recipientResponseHandler;
- (void)setInviteeResponseHandler:(id)arg1;
- (id)inviteeResponseHandler;
- (void)findRematchForMatch:(id)arg1 completionHandler:(id)arg2;
- (void)registeredListentersChanged;
- (void)lookForInvite;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)cancel;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end
