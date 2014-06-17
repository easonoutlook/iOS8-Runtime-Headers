/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSArray;

@interface CKFetchSharesOperation : CKOperation  {
    BOOL _isFetchAllSharesOperation;
    NSArray *_shareIDs;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _fetchSharesCompletionBlock;

    NSMutableDictionary *_sharesByShareID;
    NSMutableDictionary *_shareIDErrors;
}

@property(copy) NSArray * shareIDs;
@property(copy) id fetchSharesCompletionBlock;
@property(retain) NSMutableDictionary * sharesByShareID;
@property BOOL isFetchAllSharesOperation;
@property(retain) NSMutableDictionary * shareIDErrors;

+ (id)fetchAllSharesOperation;

- (void)setIsFetchAllSharesOperation:(BOOL)arg1;
- (BOOL)isFetchAllSharesOperation;
- (void)setSharesByShareID:(id)arg1;
- (id)sharesByShareID;
- (id)initWithShareIDs:(id)arg1;
- (void).cxx_destruct;
- (void)setShareIDs:(id)arg1;
- (id)fetchSharesCompletionBlock;
- (void)setShareIDErrors:(id)arg1;
- (id)shareIDErrors;
- (id)shareIDs;
- (void)setFetchSharesCompletionBlock:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (BOOL)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;

@end