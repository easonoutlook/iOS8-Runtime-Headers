/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, NSMutableDictionary;

@interface DADConnection : NSObject  {
    NSObject<OS_xpc_object> *_conn;
    NSObject<OS_dispatch_queue> *_muckingWithConn;
    NSObject<OS_dispatch_queue> *_muckingWithInFlightCollections;
    NSMutableSet *_accountIdsWithAlreadyResetCerts;
    NSMutableSet *_accountIdsWithAlreadyResetThrottleTimers;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _statusReportBlock;

    NSMutableDictionary *_inFlightSearchQueries;
    NSMutableDictionary *_inFlightFolderChanges;
    NSMutableDictionary *_inFlightAttachmentDownloads;
    NSMutableDictionary *_inFlightCalendarAvailabilityRequests;
    NSMutableDictionary *_inFlightCalendarDirectorySearches;
    NSMutableDictionary *_inFlightShareRequests;
    NSMutableDictionary *_inFlightOofSettingsRequests;
}

+ (void)setShouldIgnoreAccountChanges;
+ (id)sharedConnectionIfServerIsRunning;
+ (id)sharedConnection;

- (void)handleURL:(id)arg1;
- (BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2 requireChangedFolders:(BOOL)arg3 isUserRequested:(BOOL)arg4;
- (BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2;
- (BOOL)isOofSettingsSupportedForAccountWithID:(id)arg1;
- (BOOL)updateOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2;
- (BOOL)retrieveOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2;
- (id)activeSyncDeviceIdentifier;
- (id)statusReports;
- (void)respondToSharedCalendarInvite:(int)arg1 forCalendarWithID:(id)arg2 accountID:(id)arg3 queue:(id)arg4 completionBlock:(id)arg5;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(int)arg2;
- (BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(int)arg3;
- (void)requestDaemonShutdown;
- (void)removeStoresForAccountWithID:(id)arg1;
- (void)_requestDaemonStopMonitoringAgents_Sync;
- (void)requestDaemonStartMonitoringAgents_Sync;
- (void)requestDaemonStopMonitoringAgents;
- (void)requestDaemonStartMonitoringAgents;
- (id)currentPolicyKeyForAccountID:(id)arg1;
- (void)_calendarDirectorySearchFinished:(id)arg1;
- (void)_calendarDirectorySearchReturnedResults:(id)arg1;
- (void)_calendarAvailabilityRequestFinished:(id)arg1;
- (void)_calendarAvailabilityRequestReturnedResults:(id)arg1;
- (void)_oofSettingsRequestsFinished:(id)arg1;
- (void)_shareResponseFinished:(id)arg1;
- (void)_downloadFinished:(id)arg1;
- (void)_downloadProgress:(id)arg1;
- (void)_getStatusReportsFromClient:(id)arg1;
- (void)_folderChangeFinished:(id)arg1;
- (void)_serverContactsSearchQueryFinished:(id)arg1;
- (void)_logDataAccessStatus:(id)arg1;
- (void)_policyKeyChanged:(id)arg1;
- (void)resetTimersAndWarnings;
- (void)_registerForAppResumedNotification;
- (BOOL)_performOofSettingsRequest:(id)arg1 forAccountWithID:(id)arg2 forUpdate:(BOOL)arg3;
- (void)_cancelDownloadsWithIDs:(id)arg1 error:(id)arg2;
- (void)_sendSynchronousXPCMessageWithParameters:(id)arg1 handlerBlock:(id)arg2;
- (BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclasses:(int)arg3 isUserRequested:(BOOL)arg4;
- (void)_resetThrottleTimersForAccountId:(id)arg1;
- (void)_requestDaemonChangeAgentMonitoringStatus:(BOOL)arg1 waitForReply:(BOOL)arg2;
- (void)_resetCertWarningsForAccountId:(id)arg1 andDataclasses:(int)arg2 isUserRequested:(BOOL)arg3;
- (id)decodedErrorFromData:(id)arg1;
- (void)_serverDiedWithReason:(id)arg1;
- (void)_reallyRegisterForInterrogation;
- (void)_tearDownInFlightObjects;
- (BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(int)arg3 isUserRequested:(BOOL)arg4;
- (BOOL)requestPolicyUpdateForAccountID:(id)arg1;
- (void)reportFolderItemsSyncSuccess:(BOOL)arg1 forFolderWithID:(id)arg2 withItemsCount:(unsigned int)arg3 andAccountWithID:(id)arg4;
- (BOOL)processFolderChange:(id)arg1 forAccountWithID:(id)arg2;
- (BOOL)suspendWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4;
- (BOOL)processMeetingRequests:(id)arg1 deliveryIdsToClear:(id)arg2 deliveryIdsToSoftClear:(id)arg3 inFolderWithId:(id)arg4 forAccountWithId:(id)arg5;
- (BOOL)stopWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (BOOL)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (BOOL)resumeWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (void)fillOutCurrentEASTimeZoneInfo;
- (void)_foldersUpdated:(id)arg1;
- (id)_createReplyToRequest:(id)arg1 withProperties:(id)arg2;
- (void)_dispatchMessage:(id)arg1;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclasses:(int)arg2 isUserRequested:(BOOL)arg3;
- (BOOL)registerForInterrogationWithBlock:(id)arg1;
- (id)_connection;
- (void).cxx_destruct;
- (id)_init;
- (void)dealloc;
- (id)init;
- (id)beginDownloadingAttachmentWithUUID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 progressBlock:(id)arg4 completionBlock:(id)arg5;
- (void)cancelDownloadingAttachmentWithDownloadID:(id)arg1 error:(id)arg2;
- (void)cancelCalendarDirectorySearchWithID:(id)arg1;
- (id)performCalendarDirectorySearchWithAccountID:(id)arg1 terms:(id)arg2 recordTypes:(id)arg3 resultLimit:(unsigned int)arg4 resultsBlock:(id)arg5 completionBlock:(id)arg6;
- (void)cancelCalendarAvailabilityRequestWithID:(id)arg1;
- (id)requestCalendarAvailabilityWithAccountID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ignoredEventID:(id)arg4 addresses:(id)arg5 resultsBlock:(id)arg6 completionBlock:(id)arg7;
- (void)externalIdentificationForAccountID:(id)arg1 resultsBlock:(id)arg2;
- (BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2 isUserRequested:(BOOL)arg3;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(int)arg2 isUserRequested:(BOOL)arg3;
- (void)cancelServerContactsSearch:(id)arg1;
- (BOOL)performServerContactsSearch:(id)arg1 forAccountWithID:(id)arg2;

@end
