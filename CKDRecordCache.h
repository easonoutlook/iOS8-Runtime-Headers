/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDClientContext;

@interface CKDRecordCache : CKSQLite  {
    CKDClientContext *_context;
    int _scope;
}

@property(retain) CKDClientContext * context;
@property int scope;


- (void)setScope:(int)arg1;
- (int)scope;
- (void)clearAssetAuthTokensForRecordWithID:(id)arg1;
- (void)clearAllRecords;
- (void)deleteRecordWithID:(id)arg1;
- (id)etagForRecordID:(id)arg1 requiredKeys:(id)arg2;
- (id)recordsWithIDs:(id)arg1 requiredKeys:(id)arg2;
- (id)recordWithID:(id)arg1 requiredKeys:(id)arg2;
- (void)addRecord:(id)arg1 knownUserKeys:(id)arg2;
- (id)_trimRecord:(id)arg1 toRequiredKeys:(id)arg2;
- (BOOL)_cachedRecordHasValidAssets:(id)arg1 forRequiredKeys:(id)arg2;
- (id)_recordWithID:(id)arg1 requiredKeys:(id)arg2;
- (BOOL)_cachedRecordKnownUserKeyData:(id)arg1 satisfiesRequiredKeys:(id)arg2;
- (void).cxx_destruct;
- (id)initWithPath:(id)arg1;
- (void)setContext:(id)arg1;
- (id)context;

@end