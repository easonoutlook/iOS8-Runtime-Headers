/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, CKShareID, NSArray;

@interface CKFetchLikesOperation : CKOperation  {
    NSArray *_itemIDs;
    CKShareID *_shareID;
    unsigned int _resultsLimit;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _fetchLikesCompletionBlock;

    NSMutableDictionary *_userIDsByItemID;
    NSMutableDictionary *_likeCountByItemID;
    NSMutableDictionary *_errorsByItemID;
}

@property(copy) NSArray * itemIDs;
@property(copy) CKShareID * shareID;
@property unsigned int resultsLimit;
@property(copy) id fetchLikesCompletionBlock;
@property(retain) NSMutableDictionary * userIDsByItemID;
@property(retain) NSMutableDictionary * likeCountByItemID;
@property(retain) NSMutableDictionary * errorsByItemID;


- (void)setItemIDs:(id)arg1;
- (id)itemIDs;
- (void)setShareID:(id)arg1;
- (id)shareID;
- (unsigned int)resultsLimit;
- (void)setResultsLimit:(unsigned int)arg1;
- (void).cxx_destruct;
- (id)initWithItems:(id)arg1 inShareWithID:(id)arg2;
- (void)setFetchLikesCompletionBlock:(id)arg1;
- (id)fetchLikesCompletionBlock;
- (void)setLikeCountByItemID:(id)arg1;
- (id)likeCountByItemID;
- (void)setUserIDsByItemID:(id)arg1;
- (id)userIDsByItemID;
- (void)setErrorsByItemID:(id)arg1;
- (id)errorsByItemID;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (BOOL)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;

@end
