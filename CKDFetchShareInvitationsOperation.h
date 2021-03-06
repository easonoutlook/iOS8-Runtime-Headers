/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray;

@interface CKDFetchShareInvitationsOperation : CKDOperation  {
    BOOL _queryAllContainers;
    NSArray *_shareInvitations;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _shareInvitationFetchedProgressBlock;

    int _fetchType;
}

@property(retain) NSArray * shareInvitations;
@property(copy) id shareInvitationFetchedProgressBlock;
@property int fetchType;
@property BOOL queryAllContainers;


- (void)setFetchType:(int)arg1;
- (void)setShareInvitations:(id)arg1;
- (void)_handleShareInvitationFetched:(id)arg1 responseCode:(id)arg2;
- (id)shareInvitationFetchedProgressBlock;
- (id)shareInvitations;
- (int)fetchType;
- (void)setQueryAllContainers:(BOOL)arg1;
- (BOOL)queryAllContainers;
- (void)setShareInvitationFetchedProgressBlock:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void).cxx_destruct;
- (void)main;
- (void)finishWithError:(id)arg1;

@end
