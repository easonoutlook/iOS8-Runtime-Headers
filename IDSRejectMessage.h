/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSNumber, NSData, NSString;

@interface IDSRejectMessage : IDSFaceTimeMessage <NSCopying> {
    NSData *_selfPushToken;
    NSData *_peerPushToken;
    NSString *_peerID;
    NSNumber *_reason;
}

@property(copy) NSData * peerPushToken;
@property(copy) NSData * selfPushToken;
@property(copy) NSString * peerID;
@property(copy) NSNumber * reason;


- (id)requiredKeys;
- (void)setReason:(id)arg1;
- (id)bagKey;
- (void)setPeerPushToken:(id)arg1;
- (id)peerPushToken;
- (void)setSelfPushToken:(id)arg1;
- (id)selfPushToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)reason;
- (void)dealloc;
- (void)setPeerID:(id)arg1;
- (id)peerID;
- (id)messageBody;

@end
