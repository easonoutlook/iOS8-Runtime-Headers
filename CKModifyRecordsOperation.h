/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface CKModifyRecordsOperation : CKDatabaseOperation  {
    BOOL _shouldOnlySaveAssetContent;
    NSArray *_recordsToSave;
    NSArray *_recordIDsToDelete;
    int _savePolicy;
    NSData *_clientChangeTokenData;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _perRecordProgressBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _perRecordCompletionBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _modifyRecordsCompletionBlock;

    NSDictionary *_recordIDsToDeleteToEtags;
    NSMutableArray *_savedRecords;
    NSMutableArray *_deletedRecordIDs;
    NSMutableDictionary *_recordsByRecordIDs;
    NSMutableDictionary *_recordErrors;
    NSMutableDictionary *_assetsByRecordIDAndRecordKey;
}

@property(copy) NSArray * recordsToSave;
@property(copy) NSArray * recordIDsToDelete;
@property int savePolicy;
@property(copy) NSData * clientChangeTokenData;
@property(copy) id perRecordProgressBlock;
@property(copy) id perRecordCompletionBlock;
@property(copy) id modifyRecordsCompletionBlock;
@property BOOL shouldOnlySaveAssetContent;
@property(copy) NSDictionary * recordIDsToDeleteToEtags;
@property(retain) NSMutableArray * savedRecords;
@property(retain) NSMutableArray * deletedRecordIDs;
@property(retain) NSMutableDictionary * recordsByRecordIDs;
@property(retain) NSMutableDictionary * recordErrors;
@property(retain) NSMutableDictionary * assetsByRecordIDAndRecordKey;


- (void)setRecordIDsToDelete:(id)arg1;
- (BOOL)shouldOnlySaveAssetContent;
- (id)clientChangeTokenData;
- (int)savePolicy;
- (id)recordIDsToDeleteToEtags;
- (id)recordIDsToDelete;
- (id)recordsToSave;
- (void)setShouldOnlySaveAssetContent:(BOOL)arg1;
- (void)setPerRecordProgressBlock:(id)arg1;
- (void)setClientChangeTokenData:(id)arg1;
- (void)setSavePolicy:(int)arg1;
- (void)setRecordIDsToDeleteToEtags:(id)arg1;
- (id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2;
- (void)setModifyRecordsCompletionBlock:(id)arg1;
- (void)setPerRecordCompletionBlock:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (void)setAssetsByRecordIDAndRecordKey:(id)arg1;
- (void)setRecordsByRecordIDs:(id)arg1;
- (void)setDeletedRecordIDs:(id)arg1;
- (void)setSavedRecords:(id)arg1;
- (id)modifyRecordsCompletionBlock;
- (id)perRecordCompletionBlock;
- (id)savedRecords;
- (id)deletedRecordIDs;
- (id)perRecordProgressBlock;
- (id)assetsByRecordIDAndRecordKey;
- (id)recordsByRecordIDs;
- (void)setRecordsToSave:(id)arg1;
- (void)setRecordErrors:(id)arg1;
- (id)recordErrors;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (BOOL)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;

@end
