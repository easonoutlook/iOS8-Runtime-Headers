/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSDictionary;

@interface MFMessageWriter : NSObject  {
    Class _messageClassToInstantiate;
    unsigned int _allows8BitMimeParts : 1;
    unsigned int _allowsBinaryMimeParts : 1;
    unsigned int _writeSizeDispositionParameter : 1;
    unsigned int _allowsQuotedPrintable : 1;
    id _delegate;
    NSDictionary *_compositionSpecification;
}

@property id delegate;
@property(readonly) NSDictionary * compositionSpecification;


- (id)compositionSpecification;
- (void)setMessageClassToInstantiate:(Class)arg1;
- (void)setWriteSizeDispositionParameter:(BOOL)arg1;
- (BOOL)allowsQuotedPrintable;
- (void)setAllowsBinaryMimeParts:(BOOL)arg1;
- (BOOL)allowsBinaryMimeParts;
- (void)setAllows8BitMimeParts:(BOOL)arg1;
- (BOOL)allows8BitMimeParts;
- (id)createMessageWithHtmlString:(id)arg1 attachments:(id)arg2 headers:(id)arg3;
- (id)createMessageWithHtmlString:(id)arg1 plainTextAlternative:(id)arg2 otherHtmlStringsAndAttachments:(id)arg3 headers:(id)arg4;
- (id)createMessageWithPlainTextDocumentsAndAttachments:(id)arg1 headers:(id)arg2;
- (id)createMessageWithString:(id)arg1 headers:(id)arg2;
- (void)appendDataForMimePart:(id)arg1 toData:(id)arg2 withPartData:(id)arg3;
- (id)createMessageWithHtmlString:(id)arg1 plainTextAlternative:(id)arg2 otherHtmlStringsAndAttachments:(id)arg3 charsets:(id)arg4 headers:(id)arg5;
- (void)setAllowsQuotedPrintable:(BOOL)arg1;
- (id)initWithCompositionSpecification:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;

@end
