/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSPPasteboard;

@interface TSPCopyAssistant : TSPPasteboardWriteAssistant  {
    TSPPasteboard *_pasteboard;
    BOOL _didAttemptToCopy;
}


- (void)copyToPasteboard;
- (void).cxx_destruct;
- (id)initWithContext:(id)arg1;
- (id)initWithPasteboard:(id)arg1 sourceContext:(id)arg2;
- (void)copyToPasteboardIsSmartCopy:(BOOL)arg1;
- (void)loadNativeData;

@end
