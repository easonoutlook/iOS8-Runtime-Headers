/* Generated by RuntimeBrowser.
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@class NSString;

@interface AWDIMessageReceivedMessage : PBCodable <NSCopying> {
    unsigned long long _timestamp;
    int _fzError;
    NSString *_guid;
    unsigned int _hasAttachments;
    unsigned int _isFromEmail;
    unsigned int _isFromPhoneNumber;
    unsigned int _isGroupMessage;
    unsigned int _isTypingIndicator;
    unsigned int _messageError;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int fzError : 1; 
        unsigned int hasAttachments : 1; 
        unsigned int isFromEmail : 1; 
        unsigned int isFromPhoneNumber : 1; 
        unsigned int isGroupMessage : 1; 
        unsigned int isTypingIndicator : 1; 
        unsigned int messageError : 1; 
    } _has;
}

@property(readonly) BOOL hasGuid;
@property(retain) NSString * guid;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;
@property BOOL hasFzError;
@property int fzError;
@property BOOL hasMessageError;
@property unsigned int messageError;
@property BOOL hasIsTypingIndicator;
@property unsigned int isTypingIndicator;
@property BOOL hasIsGroupMessage;
@property unsigned int isGroupMessage;
@property BOOL hasIsFromPhoneNumber;
@property unsigned int isFromPhoneNumber;
@property BOOL hasIsFromEmail;
@property unsigned int isFromEmail;
@property BOOL hasHasAttachments;
@property unsigned int hasAttachments;


- (unsigned int)isTypingIndicator;
- (BOOL)hasIsTypingIndicator;
- (void)setHasIsTypingIndicator:(BOOL)arg1;
- (void)setIsTypingIndicator:(unsigned int)arg1;
- (unsigned int)isFromEmail;
- (unsigned int)isFromPhoneNumber;
- (BOOL)hasIsFromEmail;
- (void)setHasIsFromEmail:(BOOL)arg1;
- (void)setIsFromEmail:(unsigned int)arg1;
- (BOOL)hasIsFromPhoneNumber;
- (void)setHasIsFromPhoneNumber:(BOOL)arg1;
- (void)setIsFromPhoneNumber:(unsigned int)arg1;
- (unsigned int)isGroupMessage;
- (BOOL)hasHasAttachments;
- (void)setHasHasAttachments:(BOOL)arg1;
- (void)setHasAttachments:(unsigned int)arg1;
- (BOOL)hasIsGroupMessage;
- (void)setHasIsGroupMessage:(BOOL)arg1;
- (void)setIsGroupMessage:(unsigned int)arg1;
- (unsigned int)messageError;
- (int)fzError;
- (BOOL)hasMessageError;
- (void)setHasMessageError:(BOOL)arg1;
- (void)setMessageError:(unsigned int)arg1;
- (BOOL)hasFzError;
- (void)setHasFzError:(BOOL)arg1;
- (void)setFzError:(int)arg1;
- (BOOL)hasGuid;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)guid;
- (void)setHasTimestamp:(BOOL)arg1;
- (BOOL)hasTimestamp;
- (void)setGuid:(id)arg1;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (unsigned int)hasAttachments;

@end
