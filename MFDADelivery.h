/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSString, DAMailAccount;

@interface MFDADelivery : MFMailDelivery  {
    DAMailAccount *_DAMailAccount;
    NSString *_folderId;
    NSString *_accountId;
    NSString *_repliedMessageId;
    NSString *_forwardedMessageId;
    NSString *_repliedLongId;
    NSString *_forwardedLongId;
}


- (void)setDAMailAccount:(id)arg1;
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4 charsets:(id)arg5;
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
- (id)newMessageWriter;
- (id)deliverSynchronously;
- (void)dealloc;

@end
