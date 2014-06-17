/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class MFIMAPConnection, MFIMAPCommandPipeline, NSString, NSArray, NSLock, MFIMAPDownloadCache;

@interface MFLibraryIMAPStore : MFLibraryStore <MFIMAPSequenceIdentifierProvider> {
    unsigned int _supportsCustomPermanentFlags : 1;
    unsigned int _supportsJunkFlag : 1;
    unsigned int _supportsDollarJunkFlag : 1;
    unsigned int _supportsNotJunkFlag : 1;
    unsigned int _supportsDollarNotJunkFlag : 1;
    unsigned int _supportsForwardedFlag : 1;
    unsigned int _supportsDollarForwardedFlag : 1;
    unsigned int _updatingCache : 1;
    unsigned int _updateMetadata : 1;
    unsigned int _readyToDealloc : 1;
    unsigned int _didSynchronizeOldMessages : 1;
    unsigned int _recentsExist : 1;
    unsigned int _settingServerCount : 1;
    unsigned int _reserved : 16;
    NSString *_mailboxName;
    MFIMAPDownloadCache *_downloadCache;
    MFIMAPCommandPipeline *_fetchPipeline;
    unsigned int _serverDeletedCount;
    unsigned int _serverUidNext;
    unsigned long long _lastHighestModSequence;
    unsigned long long _highestModSequence;
    NSString *_selectedUID;
    unsigned long _currentFetchUid;
    NSString *_relativePath;
    NSArray *_additionalSynchronizationSearchArguments;
    NSArray *_additionalFetchHeaders;
    id _downloadDelegate;
    MFIMAPConnection *_cachedConnection;
    NSLock *_cachedConnectionLock;
}

+ (void)setHandlerForTemporaryUidToRemoteIDMapping:(id)arg1;
+ (id)copyRemoteIDForTemporaryUid:(unsigned long)arg1;

- (id)relativePath;
- (id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL*)arg4;
- (id)_fetchFullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 didDownload:(BOOL*)arg4;
- (BOOL)_fetchDataForMimePart:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 isComplete:(BOOL*)arg3 consumer:(id)arg4;
- (void)_handleFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3;
- (id)mailboxName;
- (BOOL)setPreferredEncoding:(unsigned long)arg1 forMessage:(id)arg2;
- (void)setFlagsCancelled:(id)arg1 forMessages:(id)arg2;
- (id)willSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (id)uniqueRemoteIDsForMessages:(id)arg1;
- (id)messageForRemoteID:(id)arg1;
- (BOOL)allowsAppend;
- (void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(BOOL)arg2;
- (void)doCompact;
- (BOOL)canCompact;
- (int)fetchMessagesWithRemoteIDs:(id)arg1 andSetFlags:(unsigned long long)arg2;
- (int)fetchMessagesWithMessageIDs:(id)arg1 andSetFlags:(unsigned long long)arg2;
- (BOOL)canFetchMessageIDs;
- (id)remoteIDsFromUniqueRemoteIDs:(id)arg1;
- (id)remoteIDsMatchingCriterion:(id)arg1 limit:(unsigned int)arg2 error:(id*)arg3;
- (int)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned int)arg2;
- (BOOL)canFetchSearchResults;
- (unsigned int)growFetchWindow;
- (id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2;
- (void)_setFlagsForMessages:(id)arg1;
- (int)fetchNumMessages:(unsigned int)arg1 preservingUID:(id)arg2 options:(unsigned int)arg3;
- (void)setFlagsForAllMessagesFromDictionary:(id)arg1;
- (id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2;
- (id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2;
- (unsigned int)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (unsigned int)serverMessageCount;
- (void)setDownloadDelegate:(id)arg1;
- (id)downloadCache;
- (id)fetchPipeline;
- (BOOL)_changedFlagsForMessage:(id)arg1 fetchResponse:(id)arg2 newFlags:(unsigned long long*)arg3;
- (void)reselectMailbox;
- (id)newDictionaryForLocalFlags:(unsigned long long)arg1 serverFlags:(unsigned long long)arg2 existingDictionary:(id)arg3;
- (void)_addOfflineTransferMessages:(id)arg1;
- (void)removeAllLocalMessages;
- (void)setAdditionalSynchronizationSearchArguments:(id)arg1;
- (void)setAdditionalFetchHeaders:(id)arg1;
- (void)updateDeletedCount;
- (BOOL)shouldRetryEmptyBodyDownloadForMessage:(id)arg1;
- (id)_performBodyDataDownload:(id)arg1 usingConnection:(id)arg2 isPartial:(BOOL*)arg3;
- (id)_downloadForMessageBodyData:(id)arg1;
- (id)_dataForMessage:(id)arg1 readHeadersOnly:(BOOL)arg2;
- (void)_setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)addFlagChanges:(id)arg1 forMessages:(id)arg2;
- (void)_synchronouslySetFlags:(id)arg1 clearFlags:(id)arg2 forMessages:(id)arg3 originalChanges:(id)arg4;
- (unsigned int)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5 customIMAPFlagsToSet:(id)arg6;
- (unsigned int)_doAppend:(struct { id x1; id x2; id x3; id x4; BOOL x5; id x6; id x7; id x8; id x9; unsigned int x10; unsigned int x11; }*)arg1;
- (BOOL)canPerformOfflineAppend;
- (BOOL)_doUidCopy:(struct { id x1; id x2; id x3; id x4; BOOL x5; id x6; id x7; id x8; id x9; unsigned int x10; unsigned int x11; }*)arg1 toStore:(id)arg2 newMessages:(id)arg3;
- (void)setMailboxUidValidity:(unsigned int)arg1;
- (id)offlineCache;
- (id)_uidsForMessages:(id)arg1;
- (id)addMessages:(id)arg1 newMessagesByOldMessage:(id)arg2;
- (id)deletedMessages;
- (id)offlineCacheIfOffline;
- (void)_fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned int)arg2 handler:(id)arg3;
- (void)_updateServerUnreadCount:(unsigned int)arg1;
- (void)_fetchServerUnreadCountWithConnection:(id)arg1;
- (unsigned int)_fetchMessagesWithArguments:(id)arg1 idRange:(id)arg2 onConnection:(id)arg3 synchronize:(BOOL)arg4 limit:(unsigned int)arg5 topUIDToCompact:(unsigned int)arg6 topKnownUID:(unsigned int)arg7 success:(BOOL*)arg8 examinedRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg9 fetchableUIDsFound:(unsigned int*)arg10 preserveUID:(unsigned int*)arg11;
- (id)_searchArgumentsForSynchronize;
- (BOOL)_shouldContinueToPreservedUID:(unsigned int)arg1;
- (void)updateDeletedCountWithNotDeletedCount:(unsigned int)arg1;
- (BOOL)performOperationRequiringConnection:(BOOL)arg1 withOptions:(int)arg2 operation:(id)arg3;
- (void)_performActionsOnConnection:(id)arg1 uidsToFetch:(id*)arg2 uidsToSync:(id*)arg3 messagesToCompact:(id*)arg4 libraryDetails:(id)arg5 flagSearchResults:(id)arg6 shouldForce:(BOOL)arg7 newUIDsToFetch:(unsigned int*)arg8;
- (id)_searchFlagsForUIDs:(id)arg1 usingConnection:(id)arg2;
- (void)_updateSelectedUID:(unsigned int*)arg1;
- (unsigned int)syncMessagesWithUIDs:(id)arg1 connection:(id)arg2 libraryDetails:(id)arg3 flagSearchResults:(id)arg4;
- (unsigned int)fetchMessagesWithUIDs:(id)arg1 connection:(id)arg2 newCount:(unsigned int)arg3 flagsToSet:(unsigned long long)arg4 queueClass:(Class)arg5;
- (void)focusedMessageDidChange:(id)arg1;
- (void)setUid:(unsigned long)arg1 forMessageWithTemporaryUid:(unsigned long)arg2;
- (BOOL)hasValidCacheFileForMessage:(id)arg1;
- (void)setSequenceIdentifier:(id)arg1 forUIDs:(id)arg2;
- (id)sequenceIdentifierForUIDs:(id)arg1;
- (void)setHighestModSequence:(unsigned long long)arg1;
- (void)setServerMessageCount:(unsigned int)arg1;
- (void)connection:(id)arg1 didFinishLoadingBodyData:(id)arg2 section:(id)arg3;
- (void)connection:(id)arg1 didLoadMoreBodyData:(id)arg2 section:(id)arg3;
- (void)connection:(id)arg1 didBeginBodyLoad:(id)arg2 section:(id)arg3;
- (void)connectionDidDisconnect:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2 forCommand:(struct { int x1; id x2; id x3; unsigned int x4; id x5; }*)arg3;
- (BOOL)connection:(id)arg1 shouldHandleUntaggedResponse:(id)arg2 forCommand:(struct { int x1; id x2; id x3; unsigned int x4; id x5; }*)arg3;
- (void)willRemoveDelegation:(id)arg1;
- (void)close;
- (void)dealloc;

@end