/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class HSConnectionConfiguration, NSMutableSet, NSXPCConnection, NSObject<OS_dispatch_queue>;

@interface HSCloudClient : NSObject <HSCloudAvailability> {
    BOOL _active;
    HSConnectionConfiguration *_configuration;
    NSXPCConnection *_nsxpcConnection;
    unsigned long long _daemonConfiguration;
    NSMutableSet *_knownArtworkIDs;
    NSObject<OS_dispatch_queue> *_knownArtworkIDsQueue;
    NSMutableSet *_pendingArtworkRequests;
    NSObject<OS_dispatch_queue> *_pendingArtworkRequestsQueue;
    long long _preferredVideoQuality;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _updateInProgressChangedHandler;

}

@property(copy) id updateInProgressChangedHandler;


- (void)authenticateWithCompletionHandler:(id)arg1;
- (void)_serverUpdateInProgressDidChange;
- (void)_serverDidLaunch;
- (void)loadBooksForStoreIDs:(id)arg1 withCompletionHandler:(id)arg2;
- (void)uploadItemProperties;
- (void)setPreferredVideoQuality:(long long)arg1;
- (void)setDaemonConfiguration:(unsigned long long)arg1;
- (void)resetConfiguration:(id)arg1;
- (void)loadArtworkInfoForSagaIDs:(id)arg1 completionHandler:(id)arg2;
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(id)arg2;
- (void)loadArtworkDataForPurchaseHistoryIDs:(id)arg1 completionHandler:(id)arg2;
- (void)loadArtworkDataForSagaID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)disableJaliscoGeniusWithCompletionHandler:(id)arg1;
- (void)loadIsUpdateJaliscoGeniusDataInProgressWithCompletionHandler:(id)arg1;
- (void)cancelUpdateJaliscoGeniusDataInProgressWithCompletionHandler:(id)arg1;
- (void)updateJaliscoGeniusDataWithCompletionHandler:(id)arg1;
- (void)enableJaliscoGeniusWithCompletionHandler:(id)arg1;
- (void)downloadGeniusDataWithCompletionHandler:(id)arg1;
- (void)updateSagaLibraryWithCompletionHandler:(id)arg1;
- (void)updateJaliscoAppsLibraryForFamilyMemberStoreID:(id)arg1 withReason:(long long)arg2 completionHandler:(id)arg3;
- (void)unhideAllPurchasedApps:(id)arg1;
- (void)setHidden:(BOOL)arg1 purchasedAppWithStoreID:(id)arg2 completionHandler:(id)arg3;
- (void)redownloadPurchaseAppWithStoreID:(id)arg1 completionHandler:(id)arg2;
- (void)jaliscoAppsImageDataForStoreID:(id)arg1 completionHandler:(id)arg2;
- (void)searchJaliscoAppsLibrary:(id)arg1 searchMethod:(long long)arg2 completionHandler:(id)arg3;
- (void)updateJaliscoAppsLibraryWithReason:(long long)arg1 completionHandler:(id)arg2;
- (void)updateJaliscoLibraryWithCompletionHandler:(id)arg1;
- (void)removeJaliscoLibrary;
- (void)isAuthenticatedWithQueue:(id)arg1 completionHandler:(id)arg2;
- (void)_sendConfigurationToDaemon;
- (void)updateArtistImagesWithCompletionHandler:(id)arg1;
- (void)updateJaliscoLibraryWithReason:(long long)arg1 completionHandler:(id)arg2;
- (void)authenticateAndStartInitialImport:(BOOL)arg1 completionHandler:(id)arg2;
- (void)updateSagaLibraryWithReason:(long long)arg1 completionHandler:(id)arg2;
- (void)fetchKeepLocalForCollectionWithPersistentID:(long long)arg1 groupingType:(int)arg2 completionHandler:(id)arg3;
- (void)setKeepLocal:(BOOL)arg1 forCollectionWithPersistentID:(long long)arg2 groupingType:(int)arg3 completionHandler:(id)arg4;
- (id)initWithConfiguration:(id)arg1;
- (id)connection;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)setUpdateInProgressChangedHandler:(id)arg1;
- (void)loadIsUpdateInProgressWithCompletionHandler:(id)arg1;
- (id)updateInProgressChangedHandler;
- (void)updatePlaylistWithSagaID:(unsigned long long)arg1 itemSagaIDs:(id)arg2 queue:(id)arg3 completionHandler:(id)arg4;
- (void)setJaliscoGeniusCUID:(id)arg1 withCompletionHandler:(id)arg2;
- (void)loadJaliscoGeniusCUIDWithCompletionHandler:(id)arg1;
- (void)removePlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)loadUpdateProgressWithCompletionHandler:(id)arg1;
- (void)incrementItemProperty:(id)arg1 forSagaID:(unsigned long long)arg2;
- (void)isAuthenticatedWithCompletionHandler:(id)arg1;
- (void)isExpiredWithCompletionHandler:(id)arg1;
- (void)deauthenticateWithCompletionHandler:(id)arg1;
- (void)loadIsJaliscoGeniusSupportedWithCompletionHandler:(id)arg1;
- (void)becomeActive;
- (void)addGeniusPlaylistWithName:(id)arg1 seedItemSagaIDs:(id)arg2 itemSagaIDs:(id)arg3 completionHandler:(id)arg4;
- (void)addPlaylistWithName:(id)arg1 completionHandler:(id)arg2;
- (BOOL)canShowCloudDownloadButtons;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)importItemArtworkForSagaID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (BOOL)canShowCloudVideo;
- (BOOL)canShowCloudMusic;
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2;
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2;
- (BOOL)isCellularDataRestricted;
- (void)resignActive;

@end
