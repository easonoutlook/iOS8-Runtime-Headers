/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CKShareID, NSString;

@interface CKDUpdateUserPresenceOperation : CKDOperation  {
    BOOL _isLurk;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _updateCompletionBlock;

    CKShareID *_shareID;
    int _status;
    NSString *_lastETag;
    long long _customStatusFlags;
    double _ttl;
}

@property(copy) id updateCompletionBlock;
@property(retain) CKShareID * shareID;
@property int status;
@property long long customStatusFlags;
@property(retain) NSString * lastETag;
@property BOOL isLurk;
@property double ttl;


- (void)setIsLurk:(BOOL)arg1;
- (void)_handleUserPresences:(id)arg1 etag:(id)arg2 response:(id)arg3;
- (id)updateCompletionBlock;
- (BOOL)isLurk;
- (void)setShareID:(id)arg1;
- (void)setTtl:(double)arg1;
- (void)setLastETag:(id)arg1;
- (void)setCustomStatusFlags:(long long)arg1;
- (double)ttl;
- (long long)customStatusFlags;
- (id)lastETag;
- (id)shareID;
- (void)setUpdateCompletionBlock:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)setStatus:(int)arg1;
- (int)status;
- (void).cxx_destruct;
- (void)main;
- (void)finishWithError:(id)arg1;

@end
