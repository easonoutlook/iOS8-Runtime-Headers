/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSURL, NSArray, NSString, MFMessageStore, MFMimePart;

@interface MFMessage : NSObject <NSCopying> {
    MFMessageStore *_store;
    unsigned long _preferredEncoding;
    NSString *_senderAddressComment;
    unsigned int _dateSentInterval;
    unsigned int _dateReceivedInterval;
    unsigned long long _generationNumber;
    NSString *_subject;
    NSArray *_to;
    NSArray *_cc;
    NSArray *_bcc;
    NSArray *_sender;
    NSString *_contentType;
    long long _messageIDHeaderHash;
    long long _conversationID;
    NSString *_summary;
    NSString *_externalID;
    MFMimePart *_parentPart;
    NSURL *_messageURL;
    NSString *_cachedMessageIDHeader;
    unsigned int _calculatedAttachmentInfo : 1;
    unsigned short _numberOfAttachments;
}

@property(retain) MFMimePart * parentPart;

+ (void)setMessageClassForStore:(id)arg1;
+ (id)messageWithRFC822Data:(id)arg1 withParentPart:(id)arg2;
+ (Class)dataMessageStoreToUse;
+ (id)messageWithRFC822Data:(id)arg1;

- (id)contentType;
- (void)setContentType:(id)arg1;
- (id)summary;
- (id)headers;
- (void)setTo:(id)arg1;
- (id)to;
- (id)persistentID;
- (void)setMessageInfoFromMessage:(id)arg1;
- (id)dataForMimePart:(id)arg1;
- (int)generationCompare:(id)arg1;
- (void)setMessageURL:(id)arg1;
- (id)messageURL;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (id)messageIDHeaderInFortyBytesOrLess;
- (void)setCc:(id)arg1;
- (id)cc;
- (long long)messageIDHash;
- (void)setMessageIDHash:(long long)arg1;
- (void)setDateReceivedTimeIntervalSince1970:(double)arg1;
- (void)setSubject:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceived:(double)arg6 dateSent:(double)arg7 messageIDHash:(long long)arg8 conversationIDHash:(long long)arg9 summary:(id)arg10 withOptions:(unsigned int)arg11;
- (void)setConversationID:(long long)arg1;
- (void)setMessageIDHeader:(id)arg1;
- (void)setMessageInfo:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceivedTimeIntervalSince1970:(double)arg6 dateSentTimeIntervalSince1970:(double)arg7 messageIDHash:(long long)arg8 conversationID:(long long)arg9 summary:(id)arg10;
- (id)bccIfCached;
- (id)ccIfCached;
- (id)toIfCached;
- (id)sendersIfCached;
- (void)setGenerationNumber:(unsigned long long)arg1;
- (id)messageDataIsComplete:(BOOL*)arg1 downloadIfNecessary:(BOOL)arg2;
- (long long)conversationID;
- (id)dateReceived;
- (id)dateSent;
- (id)firstSender;
- (id)messageBodyIfAvailableUpdatingFlags:(BOOL)arg1;
- (id)messageBodyUpdatingFlags:(BOOL)arg1;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5;
- (unsigned long long)generationNumber;
- (void)setMessageStore:(id)arg1;
- (id)attachmentStorageLocation;
- (BOOL)isLibraryMessage;
- (BOOL)canBeDeleted;
- (id)dataConsumerForMimePart:(id)arg1;
- (void)setMessageData:(id)arg1 isPartial:(BOOL)arg2;
- (id)preferredEmailAddressToReplyWith;
- (id)dataPathForMimePart:(id)arg1;
- (id)remoteID;
- (id)messageID;
- (void)setDateSentTimeIntervalSince1970:(double)arg1;
- (id)senders;
- (id)parentPart;
- (id)headersIfAvailable;
- (BOOL)messageData:(id*)arg1 messageSize:(unsigned int*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4;
- (id)messageData;
- (id)messageBodyIfAvailable;
- (id)messageStore;
- (id)senderAddressComment;
- (double)dateSentAsTimeIntervalSince1970;
- (double)dateReceivedAsTimeIntervalSince1970;
- (unsigned int)messageSize;
- (unsigned short)numberOfAttachments;
- (void)calculateAttachmentInfoFromBody:(id)arg1;
- (BOOL)calculatedNumberOfAttachments;
- (void)setPreferredEncoding:(unsigned long)arg1;
- (unsigned long)preferredEncoding;
- (BOOL)isMessageContentsLocallyAvailable;
- (id)messageIDHeader;
- (id)headerData;
- (void)setNumberOfAttachments:(unsigned int)arg1;
- (BOOL)fetchDataForMimePart:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 withConsumer:(id)arg3 isComplete:(BOOL*)arg4 downloadIfNecessary:(BOOL)arg5;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 isComplete:(BOOL*)arg3;
- (id)bodyDataIsComplete:(BOOL*)arg1;
- (BOOL)needsDateReceived;
- (id)subjectIfCached;
- (void)_calculateAttachmentInfoFromBody:(id)arg1;
- (id)bodyDataIsComplete:(BOOL*)arg1 isPartial:(BOOL*)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)bodyDataIsComplete:(BOOL*)arg1 isPartial:(BOOL*)arg2;
- (long long)_messageIDHeaderHashIvar;
- (id)uniqueArray:(id)arg1 withStore:(id)arg2;
- (void)_setDateSentFromHeaders:(id)arg1;
- (void)_setDateReceivedFromHeaders:(id)arg1;
- (void)setBcc:(id)arg1;
- (id)_copyDateFromDateHeaderInHeaders:(id)arg1;
- (id)_copyDateFromReceivedHeadersInHeaders:(id)arg1;
- (BOOL)_doesDateAppearToBeSane:(id)arg1;
- (void)setParentPart:(id)arg1;
- (id)bcc;
- (id)subject;
- (void)setSender:(id)arg1;
- (void)setSubject:(id)arg1;
- (unsigned long)uid;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)additionalHeadersForForward;
- (id)additionalHeadersForReply;
- (id)headerDataDownloadIfNecessary:(BOOL)arg1;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3;
- (id)defaultAlternativeInPart:(id)arg1;
- (id)bestAlternativeInPart:(id)arg1;
- (id)path;
- (void)dealloc;
- (id)init;
- (id)bodyData;
- (id)externalID;
- (void)setExternalID:(id)arg1;
- (id)messageBody;

@end
