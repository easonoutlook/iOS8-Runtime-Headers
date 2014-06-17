/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSArray;

@interface CKDDiscoverUserInfosURLRequest : CKDURLRequest  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _progressBlock;

    NSArray *_emailsToDiscover;
    NSArray *_userRecordIDsToDiscover;
    NSMutableDictionary *_emailAliasToEmailAddress;
    NSMutableDictionary *_hashedEmailByRequestID;
}

@property(copy) id progressBlock;
@property(retain) NSArray * emailsToDiscover;
@property(retain) NSArray * userRecordIDsToDiscover;
@property(retain) NSMutableDictionary * emailAliasToEmailAddress;
@property(retain) NSMutableDictionary * hashedEmailByRequestID;


- (int)operationType;
- (void)setProgressBlock:(id)arg1;
- (id)progressBlock;
- (void)setHashedEmailByRequestID:(id)arg1;
- (void)setEmailAliasToEmailAddress:(id)arg1;
- (void)setUserRecordIDsToDiscover:(id)arg1;
- (void)setEmailsToDiscover:(id)arg1;
- (id)initWithEmailAddresses:(id)arg1 userRecordIDs:(id)arg2;
- (id)userRecordIDsToDiscover;
- (id)hashedEmailByRequestID;
- (id)emailAliasToEmailAddress;
- (id)emailsToDiscover;
- (id)requestOperationClasses;
- (int)partitionType;
- (int)serverType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (void)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (void).cxx_destruct;

@end
