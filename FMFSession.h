/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@class NSOperationQueue, NSMutableSet, NSXPCConnection, <FMFSessionDelegate>, NSSet, NSMutableDictionary;

@interface FMFSession : NSObject <FMFXPCInternalClientProtocol> {
    BOOL _isModelInitialized;
    <FMFSessionDelegate> *_delegate;
    NSOperationQueue *_delegateQueue;
    NSMutableSet *_internalHandles;
    NSXPCConnection *_connection;
    NSSet *_cachedGetHandlesSharingLocationsWithMe;
    NSSet *_cachedGetHandlesFollowingMyLocation;
    NSMutableDictionary *_cachedLocationForHandleByHandle;
    NSMutableDictionary *_cachedOfferExpirationForHandleByHandle;
    NSMutableDictionary *_cachedCanShareLocationWithHandleByHandle;
}

@property(copy) NSSet * handles;
@property <FMFSessionDelegate> * delegate;
@property(retain) NSOperationQueue * delegateQueue;
@property(retain) NSMutableSet * internalHandles;
@property(retain) NSXPCConnection * connection;
@property(retain) NSSet * cachedGetHandlesSharingLocationsWithMe;
@property(retain) NSSet * cachedGetHandlesFollowingMyLocation;
@property(retain) NSMutableDictionary * cachedLocationForHandleByHandle;
@property(retain) NSMutableDictionary * cachedOfferExpirationForHandleByHandle;
@property(retain) NSMutableDictionary * cachedCanShareLocationWithHandleByHandle;
@property BOOL isModelInitialized;

+ (BOOL)FMFAllowed;
+ (BOOL)FMFRestricted;
+ (id)gestaltQuery:(struct __CFString { }*)arg1;
+ (id)sharedInstance;

- (id)initWithDelegate:(id)arg1;
- (void)receivedMappingPacket:(id)arg1 completion:(id)arg2;
- (oneway void)didUpdatePendingOffersForHandles:(id)arg1;
- (oneway void)didUpdateActiveDeviceList:(id)arg1;
- (oneway void)didChangeActiveLocationSharingDevice:(id)arg1;
- (oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;
- (void)didReceiveFriendshipRequest:(id)arg1;
- (id)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (BOOL)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (id)getHandlesFollowingMyLocation;
- (id)getHandlesSharingLocationsWithMe;
- (void)refreshLocationForHandle:(id)arg1 callerId:(id)arg2 priority:(int)arg3 completion:(id)arg4;
- (id)cachedLocationForHandle:(id)arg1;
- (void)stopSharingMyLocationWithHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id)arg4;
- (void)sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id)arg5;
- (void)removeHandles:(id)arg1;
- (void)addHandles:(id)arg1;
- (id)serverProxy;
- (BOOL)isMyLocationEnabled;
- (id)getHandlesWithPendingOffers;
- (BOOL)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (void)reloadDataIfNotLoaded;
- (void)setCachedCanShareLocationWithHandleByHandle:(id)arg1;
- (id)cachedCanShareLocationWithHandleByHandle;
- (void)setCachedOfferExpirationForHandleByHandle:(id)arg1;
- (id)cachedOfferExpirationForHandleByHandle;
- (void)setCachedLocationForHandleByHandle:(id)arg1;
- (id)cachedLocationForHandleByHandle;
- (void)setCachedGetHandlesFollowingMyLocation:(id)arg1;
- (id)cachedGetHandlesFollowingMyLocation;
- (void)setCachedGetHandlesSharingLocationsWithMe:(id)arg1;
- (id)cachedGetHandlesSharingLocationsWithMe;
- (void)mappingPacketSendFailed:(id)arg1 toHandle:(id)arg2 withError:(id)arg3;
- (BOOL)hasModelInitialized;
- (void)setInternalHandles:(id)arg1;
- (id)internalHandles;
- (void)setIsModelInitialized:(BOOL)arg1;
- (BOOL)isModelInitialized;
- (void)invalidateWithError:(id)arg1;
- (oneway void)didUpdateFollowing:(id)arg1;
- (oneway void)didUpdateFollowers:(id)arg1;
- (oneway void)didUpdateHideFromFollowersStatus:(BOOL)arg1;
- (oneway void)didStopFollowingHandle:(id)arg1;
- (oneway void)didStartFollowingHandle:(id)arg1;
- (oneway void)didRemoveFollowerHandle:(id)arg1;
- (oneway void)didAddFollowerHandle:(id)arg1;
- (oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2;
- (oneway void)modelDidLoad;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)locatingInProgressChanged:(id)arg1;
- (void)sendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id)arg5;
- (void)getPendingFriendshipRequestsWithCompletion:(id)arg1;
- (void)stopSharingMyLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id)arg4;
- (void)declineFriendshipRequest:(id)arg1 completion:(id)arg2;
- (void)approveFriendshipRequest:(id)arg1 completion:(id)arg2;
- (void)sendFriendshipInviteToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id)arg5;
- (void)extendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id)arg5;
- (void)_sendFriendshipOfferWithAutoSwitchMeDeviceForHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id)arg5;
- (void)_sendFriendshipOfferWithoutTryingToSwitchMeDeviceForHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(id)arg5;
- (void)getAllLocations:(id)arg1;
- (void)getHandlesFollowingMyLocationWithGroupId:(id)arg1 completion:(id)arg2;
- (void)getActiveLocationSharingDevice:(id)arg1;
- (void)getHandlesWithPendingOffers:(id)arg1;
- (void)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id)arg4;
- (void)getPendingMappingPacketsForHandle:(id)arg1 groupId:(id)arg2 completion:(id)arg3;
- (void)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id)arg4;
- (void)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(id)arg4;
- (void)isMyLocationEnabled:(id)arg1;
- (void)setHideMyLocationEnabled:(BOOL)arg1 completion:(id)arg2;
- (void)getHandlesFollowingMyLocation:(id)arg1;
- (void)getHandlesSharingLocationsWithMeWithGroupId:(id)arg1 completion:(id)arg2;
- (void)getHandlesSharingLocationsWithMe:(id)arg1;
- (void)setActiveDevice:(id)arg1 completion:(id)arg2;
- (void)locationForHandle:(id)arg1 completion:(id)arg2;
- (void)dispatchOnDelegateQueue:(id)arg1;
- (id)verifyRestrictionsAndShowDialogIfRequired;
- (void)getAllDevices:(id)arg1;
- (id)getAllDevices;
- (id)getActiveLocationSharingDevice;
- (void)getAbRecordIdForHandle:(id)arg1 completion:(id)arg2;
- (void)getPrettyNameForHandle:(id)arg1 completion:(id)arg2;
- (void)removeDevice:(id)arg1 completion:(id)arg2;
- (oneway void)_iCloudAccountNameWithCompletion:(id)arg1;
- (void)forceRefresh;
- (void)setDelegateQueue:(id)arg1;
- (void)setHandles:(id)arg1;
- (id)delegateQueue;
- (void)setConnection:(id)arg1;
- (id)connection;
- (void).cxx_destruct;
- (id)handles;
- (id)delegate;
- (oneway void)setLocations:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;
- (oneway void)didUpdateLocations:(id)arg1;

@end
