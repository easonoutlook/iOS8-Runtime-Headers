/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class SBKSyncResponseData, SBKSyncTransaction, NSEnumerator;

@interface SBKSyncResponseDataKeyEnumerator : NSObject  {
    BOOL _resolvedConflictsNeedSyncToServer;
    SBKSyncResponseData *_responseData;
    SBKSyncTransaction *_transaction;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionBlock;

    NSEnumerator *_updatedKeysEnumerator;
    NSEnumerator *_conflictedKeysEnumerator;
    NSEnumerator *_deletedKeysEnumerator;
}

@property(retain) SBKSyncResponseData * responseData;
@property(retain) SBKSyncTransaction * transaction;
@property(copy) id completionBlock;
@property BOOL resolvedConflictsNeedSyncToServer;
@property(retain) NSEnumerator * updatedKeysEnumerator;
@property(retain) NSEnumerator * conflictedKeysEnumerator;
@property(retain) NSEnumerator * deletedKeysEnumerator;


- (void)setDeletedKeysEnumerator:(id)arg1;
- (id)deletedKeysEnumerator;
- (void)setConflictedKeysEnumerator:(id)arg1;
- (id)conflictedKeysEnumerator;
- (void)setUpdatedKeysEnumerator:(id)arg1;
- (id)updatedKeysEnumerator;
- (void)setResolvedConflictsNeedSyncToServer:(BOOL)arg1;
- (BOOL)resolvedConflictsNeedSyncToServer;
- (void)_processDeletedKey:(id)arg1 isDirty:(BOOL*)arg2;
- (void)_processUpdatedKey:(id)arg1 isConflict:(BOOL)arg2 isDirty:(BOOL*)arg3;
- (void)_processNextKey;
- (void)enumerateKeysInResponseForTransaction:(id)arg1 completionBlock:(id)arg2;
- (id)initWithResponseData:(id)arg1;
- (id)transaction;
- (void)setTransaction:(id)arg1;
- (void)setResponseData:(id)arg1;
- (id)responseData;
- (void).cxx_destruct;
- (void)setCompletionBlock:(id)arg1;
- (id)completionBlock;

@end
