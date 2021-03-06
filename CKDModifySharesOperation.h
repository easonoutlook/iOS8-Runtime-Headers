/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSArray;

@interface CKDModifySharesOperation : CKDOperation  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _saveCompletionBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _deleteCompletionBlock;

    NSArray *_sharesToSave;
    NSArray *_shareIDsToDelete;
    NSMutableDictionary *_sharesByShareID;
}

@property(copy) id saveCompletionBlock;
@property(copy) id deleteCompletionBlock;
@property(retain) NSArray * sharesToSave;
@property(retain) NSArray * shareIDsToDelete;
@property(retain) NSMutableDictionary * sharesByShareID;


- (void)setSharesByShareID:(id)arg1;
- (void)_handleShareDeleted:(id)arg1 responseCode:(id)arg2;
- (void)_handleShareSaved:(id)arg1 shareID:(id)arg2 responseCode:(id)arg3;
- (id)sharesByShareID;
- (void)setShareIDsToDelete:(id)arg1;
- (void)setSharesToSave:(id)arg1;
- (id)shareIDsToDelete;
- (id)sharesToSave;
- (id)deleteCompletionBlock;
- (id)saveCompletionBlock;
- (void)setDeleteCompletionBlock:(id)arg1;
- (void)setSaveCompletionBlock:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void).cxx_destruct;
- (void)main;
- (void)finishWithError:(id)arg1;

@end
