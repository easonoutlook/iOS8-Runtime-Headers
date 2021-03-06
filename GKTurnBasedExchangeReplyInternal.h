/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSDate, NSData, NSDictionary;

@interface GKTurnBasedExchangeReplyInternal : GKInternalRepresentation  {
    NSDictionary *_localizableMessage;
    NSData *_data;
    NSDate *_replyDate;
    unsigned char _recipientIndex;
}

@property unsigned char recipientIndex;
@property(retain) NSDictionary * localizableMessage;
@property(retain) NSData * data;
@property(retain) NSDate * replyDate;

+ (id)secureCodedPropertyKeys;

- (void)setReplyDate:(id)arg1;
- (id)replyDate;
- (void)setRecipientIndex:(unsigned char)arg1;
- (void)setLocalizableMessage:(id)arg1;
- (id)localizableMessage;
- (unsigned char)recipientIndex;
- (void)setData:(id)arg1;
- (id)data;
- (void)dealloc;

@end
