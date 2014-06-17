/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class BBDataProviderManager, NSObject<OS_dispatch_source>, BBSyncService, BBApplicationLauncher, NSXPCListener, NSSet, NSMutableSet, NSDate, NSArray, NSString, NSMutableDictionary, NSMutableArray, ABFavoritesListManager;

@interface BBServer : NSObject <ABPredicateDelegate, BBDataProviderManagerDelegate, BBNotificationBehaviorUtilitiesServerProtocol, BBServerConduitServerInterface, BBSettingsGatewayServerInterface, NSXPCListenerDelegate, BBSyncServiceDelegate> {
    NSMutableDictionary *_bulletinRequestsByID;
    NSMutableDictionary *_sectionInfoByID;
    NSSet *_restrictedSectionIDs;
    unsigned int _currentSystemState;
    int _privilegedAddressBookGroupRecordID;
    NSMutableDictionary *_lastContactTimeForSender;
    unsigned int _activeBehaviorOverrides;
    unsigned int _privilegedSenderTypes;
    BOOL _isRunning;
    BBDataProviderManager *_dataProviderManager;
    NSMutableSet *_observers;
    NSMutableSet *_observersByFeed[9];
    NSMutableArray *_observerGateways;
    NSMutableDictionary *_observerGatewaysByName;
    NSMutableArray *_observerGatewayEnumerators;
    NSMutableSet *_settingsGatewayConnections;
    NSMutableDictionary *_activeSectionIDsByCategory;
    NSMutableDictionary *_sortedSectionIDsByCategory;
    int _sectionOrderRule;
    NSMutableDictionary *_bulletinsByID;
    NSMutableDictionary *_bulletinIDsBySectionID;
    NSMutableDictionary *_noticeBulletinIDsBySectionID;
    NSMutableDictionary *_todayBulletinIDsBySectionID;
    NSMutableDictionary *_futureBulletinIDsBySectionID;
    NSArray *_behaviorOverrides;
    int _behaviorOverrideStatus;
    NSDate *_behaviorOverrideStatusEffectiveTime;
    NSObject<OS_dispatch_source> *_behaviorOverridesTimer;
    NSDate *_behaviorOverridesWakeTime;
    NSMutableArray *_behaviorOverridesChangeClients;
    NSMutableArray *_behaviorOverridesEffectiveWhileUnlockedChangeClients;
    NSMutableArray *_behaviorOverrideStatusChangeClients;
    NSMutableArray *_activeBehaviorOverrideTypesChangeSettingsGateways;
    NSMutableArray *_activeBehaviorOverrideTypesChangeClients;
    BOOL _behaviorOverridesEffectiveWhileUnlocked;
    NSString *_privilegedAddressBookGroupName;
    NSMutableArray *_privilegedSenderFilteringStateChangeClients;
    BOOL _privilegedSenderFilteringNecessary;
    NSMutableArray *_privilegedSenderChangeSettingsGateways;
    NSMutableArray *_privilegedSenderTypesChangeSettingsGateways;
    NSMutableArray *_expiringBulletinIDs;
    NSObject<OS_dispatch_source> *_expirationTimer;
    NSMutableArray *_eventBasedExpiringBulletinIDs;
    NSDate *_nextScheduledExpirationTimerFireDate;
    NSMutableDictionary *_clearedSections;
    NSMutableDictionary *_dataProviderFactoriesBySection;
    int _serverIsRunningToken;
    int _demo_lockscreen_token;
    BBSyncService *_syncService;
    NSXPCListener *_observerListener;
    NSMutableSet *_utilitiesConnections;
    NSXPCListener *_utilitiesListener;
    NSXPCListener *_conduitListener;
    NSMutableSet *_systemStateConnections;
    NSXPCListener *_systemStateListener;
    NSXPCListener *_settingsListener;
    NSMutableSet *_suspendedConnections;
    BBApplicationLauncher *_applicationLauncher;
    void *_addressBook;
    ABFavoritesListManager *_favoritesListManager;
    BOOL _entryFound;
}

+ (id)behaviorUtilitiesServerInterface;
+ (void)initialize;

- (void)setBehaviorOverrideStatus:(int)arg1 source:(unsigned int)arg2;
- (void)setBehaviorOverrides:(id)arg1 source:(unsigned int)arg2;
- (void*)_addressBook;
- (id)_dataDirectoryPath;
- (void)noteRestrictedSectionIDsDidChange:(id)arg1;
- (void)noteChangeOfState:(unsigned int)arg1 newValue:(BOOL)arg2;
- (void)noteOccurrenceOfEvent:(unsigned int)arg1;
- (BOOL)_doesFavoritesListContainDestinationID:(id)arg1;
- (BOOL)_doesPrivilegedAddressBookGroupContainDestinationID:(id)arg1;
- (BOOL)_doesAddressBookContainDestinationID:(id)arg1;
- (BOOL)_checkPersistentSenderStatusForDestinationID:(id)arg1 notificationType:(int)arg2;
- (BOOL)_isDestinationID:(id)arg1 inAddressBookGroupWithRecordID:(int)arg2;
- (id)_addressBookPredicateForDestinationID:(id)arg1;
- (void)publishBulletinRequest:(id)arg1 destinations:(unsigned int)arg2;
- (void)_assignIDToBulletinRequest:(id)arg1 checkAgainstBulletins:(id)arg2;
- (id)_bulletinRequestsForIDs:(id)arg1;
- (BOOL)_isSectionIDRestricted:(id)arg1;
- (id)_removalsForNoticesSection:(id)arg1 addition:(id)arg2 keepAddition:(BOOL*)arg3;
- (void)_updateShowsMessagePreviewForBulletin:(id)arg1;
- (void)_assignIDToBulletinRequest:(id)arg1;
- (id)_favoritesListManager;
- (void)_removeActiveSectionID:(id)arg1;
- (unsigned int)_filtersForSectionID:(id)arg1;
- (void)_publishBulletinRequest:(id)arg1 forSectionID:(id)arg2 forDestinations:(unsigned int)arg3;
- (void)_noteSystemStateChanged;
- (void)observer:(id)arg1 getActiveAlertBehaviorOverridesWithHandler:(id)arg2;
- (void)observer:(id)arg1 requestFutureBulletinsForSectionID:(id)arg2;
- (void)observer:(id)arg1 requestTodayBulletinsForSectionID:(id)arg2;
- (void)observer:(id)arg1 requestNoticesBulletinsForSectionID:(id)arg2;
- (void)observer:(id)arg1 getSectionInfoForCategory:(int)arg2 withHandler:(id)arg3;
- (void)observer:(id)arg1 removeBulletins:(id)arg2 inSection:(id)arg3 fromFeeds:(unsigned int)arg4;
- (void)observer:(id)arg1 clearBulletinIDs:(id)arg2 inSection:(id)arg3;
- (void)observer:(id)arg1 clearSection:(id)arg2;
- (void)observer:(id)arg1 finishedWithBulletinID:(id)arg2 transactionID:(unsigned int)arg3;
- (void)observer:(id)arg1 handleResponse:(id)arg2;
- (void)observer:(id)arg1 setObserverFeed:(unsigned int)arg2 asLightsAndSirensGateway:(id)arg3 priority:(unsigned int)arg4;
- (void)observer:(id)arg1 setObserverFeed:(unsigned int)arg2 attachToLightsAndSirensGateway:(id)arg3;
- (void)ping:(id)arg1;
- (void)_expireBulletinsDueToSystemEvent:(unsigned int)arg1;
- (void)_handleSignificantTimeChange;
- (void)_handleSystemWake;
- (void)_handleSystemSleep;
- (id)activeSectionIDsForDefaultCategory;
- (void)clearBulletinIDIfPossible:(id)arg1 rescheduleExpirationTimer:(BOOL)arg2;
- (id)carBulletinIDsForSectionID:(id)arg1;
- (void)removeBulletinID:(id)arg1 fromFutureSection:(id)arg2;
- (void)removeBulletinID:(id)arg1 fromTodaySection:(id)arg2;
- (void)removeBulletinID:(id)arg1 fromNoticesSection:(id)arg2;
- (void)withdrawBulletinID:(id)arg1;
- (void)publishBulletin:(id)arg1 destinations:(unsigned int)arg2 alwaysToLockScreen:(BOOL)arg3;
- (id)syncService:(id)arg1 universalSectionIdentifierForSectionIdentifier:(id)arg2;
- (BOOL)syncService:(id)arg1 shouldAbortDelayedDismissalForBulletin:(id)arg2;
- (void)syncService:(id)arg1 receivedDismissalDictionaries:(id)arg2 dismissalIDs:(id)arg3 inSection:(id)arg4 forFeeds:(unsigned int)arg5;
- (void)setBehaviorOverridesEffectiveWhileUnlocked:(BOOL)arg1 source:(unsigned int)arg2;
- (void)setPrivilegedSenderTypesChangeUpdatesEnabled:(BOOL)arg1;
- (void)setPrivilegedSenderAddressBookGroupRecordIDChangeUpdatesEnabled:(BOOL)arg1;
- (void)setActiveBehaviorOverrideTypesChangeUpdatesEnabled:(BOOL)arg1;
- (void)setBehaviorOverrideStatusChangeUpdatesEnabled:(BOOL)arg1;
- (void)setBehaviorOverridesEffectiveWhileUnlockedChangeUpdatesEnabled:(BOOL)arg1;
- (void)setBehaviorOverridesChangeUpdatesEnabled:(BOOL)arg1;
- (void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(id)arg2 source:(unsigned int)arg3;
- (void)setPrivilegedSenderTypes:(unsigned int)arg1 source:(unsigned int)arg2;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 inCategory:(int)arg3;
- (void)setOrderedSectionIDs:(id)arg1 forCategory:(int)arg2;
- (void)setSectionOrderRule:(int)arg1;
- (void)getBehaviorOverridesEffectiveWhileUnlockedWithHandler:(id)arg1;
- (void)getBehaviorOverridesEnabledWithHandler:(id)arg1;
- (void)getBehaviorOverridesWithHandler:(id)arg1;
- (void)weeAppWithBundleID:(id)arg1 getHiddenFromUser:(id)arg2;
- (void)weeAppWithBundleID:(id)arg1 setHiddenFromUser:(BOOL)arg2;
- (void)dpManager:(id)arg1 removeDataProviderSectionID:(id)arg2;
- (void)dpManager:(id)arg1 addDataProviderFactory:(id)arg2 withSectionInfo:(id)arg3;
- (void)dpManager:(id)arg1 addDataProvider:(id)arg2 withSectionInfo:(id)arg3;
- (id)dpManager:(id)arg1 sectionInfoForSectionID:(id)arg2;
- (void)_loadDataProvidersAndSettings;
- (unsigned int)_feedsForBulletin:(id)arg1 destinations:(unsigned int)arg2;
- (id)_behaviorOverridesPath;
- (id)_sectionInfoPath;
- (id)_sectionOrderPath;
- (id)_clearedSectionsPath;
- (void)_removeDataProvider:(id)arg1 forFactory:(id)arg2;
- (void)_addDataProvider:(id)arg1 forFactory:(id)arg2;
- (void)_removeActiveSectionID:(id)arg1 fromCategory:(int)arg2;
- (id)_bulletinsForSectionID:(id)arg1 inFeeds:(unsigned int)arg2;
- (void)_addSectionID:(id)arg1 toSortedSectionIDsForCategory:(int)arg2;
- (void)_removeSection:(id)arg1;
- (void)_addActiveSectionID:(id)arg1;
- (void)_addActiveSectionID:(id)arg1 toCategory:(int)arg2;
- (void)publishBulletinRequest:(id)arg1 destinations:(unsigned int)arg2 alwaysToLockScreen:(BOOL)arg3;
- (void)updateSection:(id)arg1 inFeed:(unsigned int)arg2 withBulletinRequests:(id)arg3;
- (BOOL)_verifyBulletinRequest:(id)arg1 forDataProvider:(id)arg2;
- (unsigned int)userBulletinCapForSectionID:(id)arg1;
- (void)_updateBulletinsInFeed:(unsigned int)arg1 forDataProvider:(id)arg2 enabledSectionIDs:(id)arg3;
- (id)_enabledSectionIDsForDataProvider:(id)arg1;
- (void)_updateBulletinsInFeed:(unsigned int)arg1 forDataProviderIfSectionIsEnabled:(id)arg2;
- (void)_updateSectionParametersForDataProvider:(id)arg1;
- (void)_resumeAllSuspendedConnections;
- (void)_sortSectionIDs:(id)arg1 usingOrder:(id)arg2;
- (void)_publishBulletinsForAllDataProviders;
- (void)_migrateSectionInfo;
- (void)_migrateLoadedData;
- (void)_loadSavedSectionOrderAndRule;
- (void)_loadClearedSections;
- (void)_loadSavedSectionInfo;
- (void)_loadBehaviorOverrides;
- (void)_ensureDataDirectoryExists;
- (id)_defaultSectionOrderForCategory:(int)arg1 topLevelCollection:(id)arg2;
- (id)_defaultSectionOrders;
- (void)_migrateSectionOrder;
- (id)_sectionIDsToMigrate;
- (void)sendMessageToDataProviderSectionID:(id)arg1 name:(id)arg2 userInfo:(id)arg3;
- (void)_saveUpdatedSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)_saveUpdatedClearedInfo:(id)arg1 forSectionID:(id)arg2;
- (id)_clearedInfoForSectionID:(id)arg1;
- (void)_updateSectionInfoForSectionID:(id)arg1 handler:(id)arg2;
- (void)_updateClearedInfoForSectionID:(id)arg1 handler:(id)arg2;
- (void)_reloadReloadSectionInfoForSectionID:(id)arg1;
- (void)_reloadSectionParametersForSectionID:(id)arg1;
- (void)withdrawBulletinRequestsWithPublisherBulletinID:(id)arg1 forSectionID:(id)arg2;
- (void)withdrawBulletinRequestsWithRecordID:(id)arg1 forSectionID:(id)arg2;
- (void)_publishBulletinRequest:(id)arg1 forSectionID:(id)arg2 forDestinations:(unsigned int)arg3 alwaysToLockScreen:(BOOL)arg4;
- (void)_updateBulletinsInFeed:(unsigned int)arg1 ifSectionIsEnabled:(id)arg2;
- (void)_setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (BOOL)shouldPresentNotificationOfType:(int)arg1 fromSenderWithDestinationID:(id)arg2;
- (void)_privilegedSenderAddressBookGroupRecordIDChangedFromSource:(unsigned int)arg1;
- (void)_privilegedSenderTypesChangedFromSource:(unsigned int)arg1;
- (void)_writeBehaviorOverrides;
- (void)_setBehaviorOverridesTimer;
- (void)_behaviorOverrideStatusChangedFromSource:(unsigned int)arg1;
- (BOOL)isPrivilegedSenderFilteringNecessaryForActiveBehaviorOverrides:(unsigned int)arg1 privilegedSenderTypes:(unsigned int)arg2;
- (void)_sendPrivilegedSenderAddressBookGroupRecordIDChangedFromSource:(unsigned int)arg1;
- (void)_sendPrivilegedSenderTypesChangedFromSource:(unsigned int)arg1;
- (void)_sendUpdateBehaviorOverrideTypesFromSource:(unsigned int)arg1;
- (void)_checkPrivilegedSenderFilteringState;
- (unsigned int)_adjustedBehaviorOverrideTypes:(unsigned int)arg1 basedOnSystemState:(unsigned int)arg2;
- (void)_behaviorOverrideTypesChangedFromSource:(unsigned int)arg1;
- (unsigned int)effectivePushSettingsForSectionInfo:(id)arg1;
- (void)_sendUpdateSectionOrderRule;
- (void)_writeSectionOrder;
- (id)universalSectionIDForSectionID:(id)arg1;
- (id)futureBulletinIDsForSectionID:(id)arg1;
- (id)todayBulletinIDsForSectionID:(id)arg1;
- (id)_updatesForObserver:(id)arg1 bulletinIDs:(id)arg2;
- (id)_sectionInfoArrayForCategory:(int)arg1 effective:(BOOL)arg2;
- (void)_clearBulletinIDs:(id)arg1 forSectionID:(id)arg2 shouldSync:(BOOL)arg3;
- (void)_clearSection:(id)arg1;
- (void)_storeObserver:(id)arg1 forFeed:(unsigned int)arg2;
- (id)sortDescriptorsForSectionID:(id)arg1;
- (unsigned int)_indexForNewDate:(id)arg1 inBulletinIDArray:(id)arg2 sortedAscendingByDateForKey:(id)arg3;
- (id)_bulletinIDsInSortedArray:(id)arg1 withDateForKey:(id)arg2 beforeCutoff:(id)arg3;
- (void)deliverResponse:(id)arg1;
- (void)_scheduleTimerForDate:(id)arg1;
- (id)_nextExpireBulletinsDate;
- (void)_expireBulletins;
- (void)_updateBehaviorOverridesFromSource:(unsigned int)arg1;
- (void)_setSectionInfo:(id)arg1 forSectionID:(id)arg2 inCategory:(int)arg3;
- (void)_updateAllBulletinsForDataProviderIfSectionIsEnabled:(id)arg1;
- (void)_sendUpdateSectionInfo:(id)arg1 inCategory:(int)arg2;
- (BOOL)_didNotificationCenterSettingsChangeWithSectionInfo:(id)arg1 replacingSectionInfo:(id)arg2;
- (void)_expireBulletinsAndRescheduleTimerIfNecessary;
- (id)noticesBulletinIDsForSectionID:(id)arg1;
- (void)_sortSectionIDs:(id)arg1 usingGuideArray:(id)arg2;
- (id)_sortedSectionIDsForCategory:(int)arg1;
- (id)_activeSectionIDsForCategory:(int)arg1;
- (id)allBulletinIDsForSectionID:(id)arg1;
- (id)_applicableSectionInfosForBulletin:(id)arg1 inSection:(id)arg2;
- (void)_sendUpdateSectionOrderForCategory:(int)arg1;
- (void)_writeClearedSections;
- (void)_writeSectionInfo;
- (id)_allBulletinsForSectionID:(id)arg1;
- (void)_clearBulletinIDs:(id)arg1 andAllOtherBulletins:(BOOL)arg2 forSectionID:(id)arg3 shouldSync:(BOOL)arg4;
- (void)_updateAllBulletinsForDataProvider:(id)arg1;
- (void)_setClearedInfo:(id)arg1 forSectionID:(id)arg2;
- (id)_bulletinsForIDs:(id)arg1;
- (void)_removeBulletin:(id)arg1 rescheduleTimerIfAffected:(BOOL)arg2 shouldSync:(BOOL)arg3;
- (void)_clearBulletinIDIfPossible:(id)arg1 rescheduleExpirationTimer:(BOOL)arg2;
- (void)_sendRemoveBulletins:(id)arg1 toFeeds:(unsigned int)arg2 shouldSync:(BOOL)arg3;
- (id)_observersForFeeds:(unsigned int)arg1;
- (id)_observersForCategory:(int)arg1;
- (id)_sortedActiveSectionsForCategory:(int)arg1;
- (id)_effectiveSectionInfoForSectionInfo:(id)arg1;
- (void)forEachObserverFeedSetInGateways:(id)arg1;
- (id)dataProviderForSectionID:(id)arg1;
- (id)_sectionInfoForSectionID:(id)arg1 effective:(BOOL)arg2;
- (id)bulletinIDsForSectionID:(id)arg1 inFeed:(unsigned int)arg2;
- (void)removeBulletinID:(id)arg1 fromSection:(id)arg2 inFeed:(unsigned int)arg3;
- (void)_sendRemoveBulletin:(id)arg1 toFeeds:(unsigned int)arg2 shouldSync:(BOOL)arg3;
- (id)_mapForFeed:(unsigned int)arg1;
- (void)_removeBulletin:(id)arg1 shouldSync:(BOOL)arg2;
- (void)_scheduleExpirationForBulletin:(id)arg1;
- (void)_sendModifyBulletin:(id)arg1 toFeeds:(unsigned int)arg2;
- (void)_modifyBulletin:(id)arg1;
- (void)noteFinishedWithBulletinID:(id)arg1;
- (void)_sendAddBulletin:(id)arg1 toFeeds:(unsigned int)arg2;
- (void)_addBulletin:(id)arg1;
- (unsigned int)_feedsForBulletin:(id)arg1 destinations:(unsigned int)arg2 alwaysToLockScreen:(BOOL)arg3;
- (void)_addSettingsGatewayConnection:(id)arg1;
- (void)_removeSettingsGatewayConnection:(id)arg1;
- (void)_addSystemStateConnection:(id)arg1;
- (void)_removeSystemStateConnection:(id)arg1;
- (void)_removeSuspendedConnection:(id)arg1;
- (void)_addUtilityConnection:(id)arg1;
- (void)_removeUtilityConnection:(id)arg1;
- (unsigned int)_behaviorOverrideState;
- (unsigned int)_activeBehaviorOverrideTypesConsideringSystemState:(BOOL)arg1;
- (void)_addSuspendedConnection:(id)arg1;
- (void)_removeObserver:(id)arg1;
- (void)_addObserver:(id)arg1;
- (void)_clearBehaviorOverridesTimer;
- (void)_clearExpirationTimer;
- (void)demo_lockscreen:(unsigned long long)arg1;
- (void)setActiveBehaviorOverrideChangeUpdatesEnabled:(BOOL)arg1 forClient:(id)arg2;
- (void)setNotificationPresentationFilteringStateChangeUpdatesEnabled:(BOOL)arg1 forClient:(id)arg2;
- (void)getShouldPresentNotificationOfType:(int)arg1 fromSenderWithDestinationID:(id)arg2 handler:(id)arg3;
- (void)getAttachmentAspectRatioForBulletinID:(id)arg1 withHandler:(id)arg2;
- (void)getAttachmentPNGDataForBulletinID:(id)arg1 sizeConstraints:(id)arg2 withHandler:(id)arg3;
- (void)getSectionParametersForSectionID:(id)arg1 withHandler:(id)arg2;
- (void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(id)arg2;
- (void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(id)arg1;
- (void)getPrivilegedSenderTypesWithHandler:(id)arg1;
- (void)getSortDescriptorsForSectionID:(id)arg1 withHandler:(id)arg2;
- (void)getSectionInfoForCategory:(int)arg1 withHandler:(id)arg2;
- (void)getSectionOrderRuleWithHandler:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (BOOL)isRunning;
- (void)dealloc;
- (id)init;
- (BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2;
- (BOOL)predicateShouldContinue:(id)arg1;

@end
