/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray;

@interface CKDDiscoverUserInfosOperation : CKDOperation  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _discoverUserInfosProgressBlock;

    NSArray *_emailsToDiscover;
    NSArray *_userRecordIDsToDiscover;
}

@property(copy) id discoverUserInfosProgressBlock;
@property(retain) NSArray * emailsToDiscover;
@property(retain) NSArray * userRecordIDsToDiscover;


- (void)_handleDiscoveredInfo:(id)arg1 emailToDiscover:(id)arg2;
- (id)discoverUserInfosProgressBlock;
- (void)setUserRecordIDsToDiscover:(id)arg1;
- (void)setEmailsToDiscover:(id)arg1;
- (id)userRecordIDsToDiscover;
- (id)emailsToDiscover;
- (void)setDiscoverUserInfosProgressBlock:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void).cxx_destruct;
- (void)main;

@end
