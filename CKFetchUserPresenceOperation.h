/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, CKShareID, NSMutableArray;

@interface CKFetchUserPresenceOperation : CKOperation  {
    CKShareID *_shareID;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _fetchUserPresenceCompletionBlock;

    NSMutableArray *_userPresence;
}

@property(retain) CKShareID * shareID;
@property(copy) id fetchUserPresenceCompletionBlock;
@property(retain) NSMutableArray * userPresence;
@property(retain) NSError * error;


- (void)setShareID:(id)arg1;
- (id)shareID;
- (void).cxx_destruct;
- (Class)operationInfoClass;
- (void)setFetchUserPresenceCompletionBlock:(id)arg1;
- (id)fetchUserPresenceCompletionBlock;
- (void)setUserPresence:(id)arg1;
- (id)userPresence;
- (id)initWithShareID:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (void)performCKOperation;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;

@end
