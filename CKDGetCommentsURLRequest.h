/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CKCommentQuery, NSData;

@interface CKDGetCommentsURLRequest : CKDURLRequest  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _commentFetchedBlock;

    NSData *_nextCursor;
    CKCommentQuery *_query;
    NSData *_cursor;
    unsigned int _resultsLimit;
}

@property(copy) id commentFetchedBlock;
@property(retain) NSData * nextCursor;
@property(retain) CKCommentQuery * query;
@property(retain) NSData * cursor;
@property unsigned int resultsLimit;


- (int)operationType;
- (void)setNextCursor:(id)arg1;
- (id)nextCursor;
- (void)setCommentFetchedBlock:(id)arg1;
- (id)initWithQuery:(id)arg1 cursor:(id)arg2 resultsLimit:(unsigned int)arg3;
- (id)commentFetchedBlock;
- (id)requestOperationClasses;
- (int)partitionType;
- (int)serverType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (void)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (unsigned int)resultsLimit;
- (void)setResultsLimit:(unsigned int)arg1;
- (void).cxx_destruct;
- (void)setCursor:(id)arg1;
- (id)cursor;
- (void)setQuery:(id)arg1;
- (id)query;

@end
