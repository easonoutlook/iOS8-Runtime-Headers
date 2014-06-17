/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CKShareID, NSString, NSData;

@interface CKDUpdatePulseURLRequest : CKDURLRequest  {
    NSString *_lastETag;
    NSData *_pushToken;
    NSString *_apsEnvironmentString;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _updatePulseProgressBlock;

    CKShareID *_shareID;
    int _state;
    unsigned long long _customStatusFlags;
    double _ttl;
}

@property unsigned long long customStatusFlags;
@property(copy) NSString * lastETag;
@property(copy) NSData * pushToken;
@property(copy) NSString * apsEnvironmentString;
@property double ttl;
@property(copy) id updatePulseProgressBlock;
@property(copy) CKShareID * shareID;
@property int state;


- (int)operationType;
- (void)setShareID:(id)arg1;
- (void)setUpdatePulseProgressBlock:(id)arg1;
- (void)setTtl:(double)arg1;
- (void)setLastETag:(id)arg1;
- (void)setCustomStatusFlags:(unsigned long long)arg1;
- (id)initWithShareID:(id)arg1 state:(int)arg2;
- (id)updatePulseProgressBlock;
- (double)ttl;
- (unsigned long long)customStatusFlags;
- (void)setPushToken:(id)arg1;
- (id)pushToken;
- (id)lastETag;
- (id)shareID;
- (id)requestOperationClasses;
- (int)partitionType;
- (int)serverType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (void)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (void)setApsEnvironmentString:(id)arg1;
- (id)apsEnvironmentString;
- (void).cxx_destruct;
- (void)setState:(int)arg1;
- (int)state;

@end