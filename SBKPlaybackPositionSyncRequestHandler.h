/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@class NSError, NSObject<OS_dispatch_queue>, <SBKUniversalPlaybackPositionDataSource>, SBKTransactionController, <SBKUniversalPlaybackPositionTransactionContext>, NSDictionary, SBKSyncTransaction, NSMutableDictionary, NSString;

@interface SBKPlaybackPositionSyncRequestHandler : SBKSyncRequestHandler <SBKTransactionControllerDelegate, SBKSyncTransactionProcessing> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_syncOperationQueue;
    BOOL _syncInProgress;
    BOOL _canceled;
    <SBKUniversalPlaybackPositionDataSource> *_dataSource;
    SBKTransactionController *_kvsController;
    <SBKUniversalPlaybackPositionTransactionContext> *_dataSourceTransactionContext;
    NSMutableDictionary *_metadataItemsFromDataSource;
    NSDictionary *_metadataItemsToCommitToDataSource;
    NSDictionary *_metadataItemsToCommitToKVSStorage;
    NSMutableDictionary *_responseMetadataItemsToCommitToDataSource;
    NSMutableDictionary *_responseMetadataItemsMergedToCommitBackToKVSStorage;
    SBKSyncTransaction *_currentKVSTransaction;
    NSError *_fatalSyncError;
    NSString *_overrideSyncAnchor;
}

@property(retain) <SBKUniversalPlaybackPositionDataSource> * dataSource;
@property(retain) SBKTransactionController * kvsController;
@property(retain) <SBKUniversalPlaybackPositionTransactionContext> * dataSourceTransactionContext;
@property(retain) NSMutableDictionary * metadataItemsFromDataSource;
@property(retain) NSDictionary * metadataItemsToCommitToDataSource;
@property(retain) NSDictionary * metadataItemsToCommitToKVSStorage;
@property(retain) NSMutableDictionary * responseMetadataItemsToCommitToDataSource;
@property(retain) NSMutableDictionary * responseMetadataItemsMergedToCommitBackToKVSStorage;
@property(retain) SBKSyncTransaction * currentKVSTransaction;
@property BOOL syncInProgress;
@property BOOL canceled;
@property(retain) NSError * fatalSyncError;
@property(retain) NSString * overrideSyncAnchor;


- (void)setOverrideSyncAnchor:(id)arg1;
- (id)overrideSyncAnchor;
- (id)transaction:(id)arg1 conflictDetectionOrdinalForKey:(id)arg2;
- (id)transaction:(id)arg1 syncAnchorForTransactionSyncAnchor:(id)arg2;
- (id)transaction:(id)arg1 keyValuePairForUpdatedKey:(id)arg2;
- (void)transaction:(id)arg1 processDeletedKey:(id)arg2 isDirty:(BOOL*)arg3;
- (int)_mergeConflictedItemFromSyncResponse:(id)arg1;
- (void)transaction:(id)arg1 processUpdatedKey:(id)arg2 data:(id)arg3 conflict:(BOOL)arg4 isDirty:(BOOL*)arg5;
- (void)transaction:(id)arg1 didProcessResponseData:(id)arg2;
- (void)transaction:(id)arg1 willProcessResponseData:(id)arg2;
- (void)_signalKVSTransactionCompletion:(id)arg1;
- (void)setFatalSyncError:(id)arg1;
- (BOOL)_synchronize:(id*)arg1;
- (void)_signalKVSTransactionCompletion:(id)arg1 withError:(id)arg2;
- (id)kvsController;
- (id)fatalSyncError;
- (id)metadataItemsToCommitToDataSource;
- (void)_mergeMetadataItemsFromSyncResponse;
- (id)_synchronouslyRunKVSTransaction:(id)arg1;
- (id)currentKVSTransaction;
- (id)newKVSSyncTransactionWithUpdatedMetadataItemIdentifiers:(id)arg1 processConflicts:(BOOL)arg2;
- (id)metadataItemsToCommitToKVSStorage;
- (void)_dataSourceCancelTransaction;
- (BOOL)_shouldStop;
- (void)setSyncInProgress:(BOOL)arg1;
- (BOOL)syncInProgress;
- (id)dataSourceTransactionContext;
- (void)clearTransactionResponseData;
- (id)responseMetadataItemsMergedToCommitBackToKVSStorage;
- (id)responseMetadataItemsToCommitToDataSource;
- (id)metadataItemsFromDataSource;
- (void)setCurrentKVSTransaction:(id)arg1;
- (void)setDataSourceTransactionContext:(id)arg1;
- (void)setKvsController:(id)arg1;
- (void)setResponseMetadataItemsMergedToCommitBackToKVSStorage:(id)arg1;
- (void)setResponseMetadataItemsToCommitToDataSource:(id)arg1;
- (void)setMetadataItemsToCommitToKVSStorage:(id)arg1;
- (void)setMetadataItemsToCommitToDataSource:(id)arg1;
- (void)setMetadataItemsFromDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 bagContext:(id)arg2;
- (void)cancelWithError:(id)arg1;
- (void)transactionController:(id)arg1 transactionDidFinish:(id)arg2;
- (void)transactionController:(id)arg1 transactionDidCancel:(id)arg2 error:(id)arg3;
- (BOOL)transactionController:(id)arg1 transactionDidFail:(id)arg2 error:(id)arg3;
- (void)timeout;
- (BOOL)canceled;
- (void)setCanceled:(BOOL)arg1;
- (void).cxx_destruct;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (void)cancel;
- (void)synchronizeWithCompletionHandler:(id)arg1;

@end
