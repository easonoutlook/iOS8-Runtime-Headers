/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, CKShareID, NSArray;

@interface CKDFetchLikesURLRequest : CKDURLRequest  {
    unsigned int _resultsLimit;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _likesFetchedBlock;

    NSArray *_itemIDsToFetch;
    CKShareID *_shareID;
    NSMutableDictionary *_itemIDsByRequestID;
}

@property unsigned int resultsLimit;
@property(copy) id likesFetchedBlock;
@property(copy) NSArray * itemIDsToFetch;
@property(copy) CKShareID * shareID;
@property(retain) NSMutableDictionary * itemIDsByRequestID;


- (int)operationType;
- (void)setItemIDsToFetch:(id)arg1;
- (id)likesFetchedBlock;
- (id)itemIDsToFetch;
- (void)setItemIDsByRequestID:(id)arg1;
- (id)itemIDsByRequestID;
- (void)setLikesFetchedBlock:(id)arg1;
- (id)initWithItemIDsToFetch:(id)arg1 inShareID:(id)arg2;
- (void)setShareID:(id)arg1;
- (id)shareID;
- (id)requestOperationClasses;
- (int)partitionType;
- (int)serverType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (void)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (unsigned int)resultsLimit;
- (void)setResultsLimit:(unsigned int)arg1;
- (void).cxx_destruct;

@end
