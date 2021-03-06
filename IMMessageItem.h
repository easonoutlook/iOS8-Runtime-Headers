/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@class NSArray, NSString, NSData, NSDate, NSAttributedString;

@interface IMMessageItem : IMItem <NSCoding, NSCopying, IMRemoteObjectCoding> {
    NSString *_subject;
    NSString *_plainBody;
    unsigned int _error;
    NSArray *_fileTransferGUIDs;
    NSAttributedString *_body;
    NSData *_bodyData;
    NSDate *_timeRead;
    NSDate *_timeDelivered;
    NSDate *_timePlayed;
    unsigned long long _flags;
    long long _replaceID;
    long long _expireState;
}

@property(retain) NSString * subject;
@property(retain) NSAttributedString * body;
@property(retain) NSData * bodyData;
@property(retain) NSDate * timeRead;
@property(retain) NSDate * timeDelivered;
@property(retain) NSDate * timePlayed;
@property unsigned long long flags;
@property long long expireState;
@property(retain) NSArray * fileTransferGUIDs;
@property unsigned int errorCode;
@property long long replaceID;
@property BOOL hasDataDetectorResults;
@property(readonly) BOOL isDelivered;
@property(readonly) BOOL isSent;
@property(readonly) BOOL isRead;
@property(readonly) BOOL isPlayed;
@property(readonly) BOOL isFinished;
@property(readonly) BOOL isEmpty;
@property(readonly) BOOL isAlert;
@property(readonly) BOOL wasDataDetected;
@property(readonly) BOOL wasDowngraded;
@property(readonly) BOOL isPrepared;
@property(readonly) BOOL isTypingMessage;
@property(readonly) BOOL isAudioMessage;
@property(readonly) BOOL isExpirable;
@property(retain) NSString * plainBody;


- (void)setFlags:(unsigned long long)arg1;
- (void)setWasDataDetected:(BOOL)arg1;
- (void)setHasDataDetectorResults:(BOOL)arg1;
- (BOOL)isPrepared;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 guid:(id)arg3 messageID:(long long)arg4 account:(id)arg5 accountID:(id)arg6 service:(id)arg7 handle:(id)arg8 roomName:(id)arg9 unformattedID:(id)arg10 countryCode:(id)arg11;
- (id)initWithSender:(id)arg1 time:(id)arg2 body:(id)arg3 attributes:(id)arg4 fileTransferGUIDs:(id)arg5 flags:(unsigned long long)arg6 error:(id)arg7 guid:(id)arg8;
- (void)_clearBodyData;
- (void)_regenerateBodyText;
- (void)_regenerateBodyData;
- (void)adjustIsEmptyFlag;
- (id)initWithDictionary:(id)arg1 hint:(id)arg2;
- (void)_generateBodyDataIfNeeded;
- (void)_generateBodyTextIfNeeded;
- (void)setReplaceID:(long long)arg1;
- (long long)replaceID;
- (void)setFileTransferGUIDs:(id)arg1;
- (void)setBodyData:(id)arg1;
- (void)setTimeDelivered:(id)arg1;
- (void)setTimeRead:(id)arg1;
- (void)setPlainBody:(id)arg1;
- (BOOL)isAlert;
- (id)initWithSenderInfo:(id)arg1 time:(id)arg2 timeRead:(id)arg3 timeDelivered:(id)arg4 timePlayed:(id)arg5 subject:(id)arg6 body:(id)arg7 bodyData:(id)arg8 attributes:(id)arg9 fileTransferGUIDs:(id)arg10 flags:(unsigned long long)arg11 guid:(id)arg12 messageID:(long long)arg13 account:(id)arg14 accountID:(id)arg15 service:(id)arg16 handle:(id)arg17 roomName:(id)arg18 unformattedID:(id)arg19 countryCode:(id)arg20 expireState:(long long)arg21 errorType:(unsigned int)arg22;
- (BOOL)isEmote;
- (id)timeDelivered;
- (id)timeRead;
- (void)setTimePlayed:(id)arg1;
- (void)setExpireState:(long long)arg1;
- (id)copyWithFlags:(unsigned long long)arg1;
- (void)_updateFlags:(unsigned long long)arg1;
- (id)initWithSender:(id)arg1 time:(id)arg2 guid:(id)arg3 type:(long long)arg4;
- (BOOL)wasDataDetected;
- (id)timePlayed;
- (long long)expireState;
- (BOOL)isExpirable;
- (void)setErrorCode:(unsigned int)arg1;
- (unsigned long long)flags;
- (BOOL)isRead;
- (BOOL)wasDowngraded;
- (BOOL)isSent;
- (BOOL)isDelivered;
- (BOOL)isTypingMessage;
- (id)fileTransferGUIDs;
- (BOOL)hasDataDetectorResults;
- (BOOL)isPlayed;
- (BOOL)isAudioMessage;
- (id)plainBody;
- (BOOL)isFromMe;
- (unsigned int)errorCode;
- (void)setBody:(id)arg1;
- (BOOL)isFinished;
- (id)subject;
- (void)setSubject:(id)arg1;
- (id)sender;
- (id)body;
- (BOOL)isEmpty;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)bodyData;
- (id)copyDictionaryRepresentation;
- (id)_senderHandle;
- (id)_otherHandle;
- (id)message;
- (BOOL)_hasMessageChatItem;
- (id)_newChatItems;
- (id)_service;

@end
