/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFMailMessage;

@interface MFDecryptedAttachmentDataProvider : NSObject <MFAttachmentDataProvider> {
    MFMailMessage *_message;
}


- (id)messageForAttachment:(id)arg1;
- (id)initWithDecryptedMessage:(id)arg1;
- (BOOL)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 error:(id*)arg3;
- (void)dealloc;

@end
