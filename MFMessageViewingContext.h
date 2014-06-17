/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class MFAttachmentManager, MFMailMessage, MFActivityMonitor, MFError, SGSuggestionsService, NSError, NSObject<MFMessageViewingContextDelegate>, MFMimePart, NSArray, NSObject<OS_dispatch_queue>, MFMessageBody, MFLock, NSConditionLock, <MFMessageViewingContextDelegate>;

@interface MFMessageViewingContext : NSObject  {
    NSObject<MFMessageViewingContextDelegate> *_delegate;
    MFMailMessage *_message;
    MFMessageBody *_body;
    id _content;
    MFLock *_contentLock;
    MFActivityMonitor *_loadTask;
    MFMimePart *_loadedPart;
    NSArray *_signers;
    MFError *_secureMIMEError;
    MFAttachmentManager *_attachmentManager;
    unsigned int _contentOffset;
    unsigned int _loadIncrement;
    unsigned int _loadedFullData : 1;
    unsigned int _loadBestAlternative : 1;
    unsigned int _hasNoContent : 1;
    unsigned int _failedToLoad : 1;
    unsigned int _isOutgoingMessage : 1;
    unsigned int _isDraftMessage : 1;
    unsigned int _isEditableMessage : 1;
    unsigned int _showMailboxName : 1;
    unsigned int _shouldAnalyzeMessage : 1;
    NSObject<OS_dispatch_queue> *_suggestionsQueue;
    SGSuggestionsService *_suggestionsService;
    NSConditionLock *_suggestionsLock;
    NSArray *_suggestions;
    NSError *_messageAnalysisError;
}

@property(retain,readonly) MFMailMessage * message;
@property(retain) MFMessageBody * messageBody;
@property(retain,readonly) MFAttachmentManager * attachmentManager;
@property(retain,readonly) MFActivityMonitor * loadTask;
@property(retain) MFMimePart * loadedPart;
@property(copy) NSArray * signers;
@property(retain) MFError * secureMimeError;
@property(copy) NSArray * suggestions;
@property(retain) NSError * messageAnalysisError;
@property(readonly) BOOL hasLoaded;
@property(readonly) BOOL hasAnalyzedMessage;
@property(readonly) BOOL isPartial;
@property(readonly) BOOL failedToLoad;
@property(retain) id content;
@property unsigned int contentOffset;
@property(readonly) BOOL hasNoContent;
@property(readonly) BOOL isMessageSigned;
@property(readonly) BOOL isMessageEncrypted;
@property <MFMessageViewingContextDelegate> * delegate;
@property BOOL isOutgoingMessage;
@property BOOL isDraftMessage;
@property BOOL isEditableMessage;
@property BOOL showMailboxName;
@property BOOL shouldAnalyzeMessage;

+ (BOOL)isAttachmentTooLarge:(id)arg1;
+ (unsigned int)nextOffsetForOffset:(unsigned int)arg1 totalLength:(unsigned int)arg2 requestedAmount:(unsigned int)arg3;

- (void)cancelLoad;
- (id)uniqueID;
- (void)unload;
- (void)_setSigners:(id)arg1;
- (id)signers;
- (BOOL)isPartial;
- (id)attachmentManager;
- (id)attachments;
- (void)_setContentOffset:(unsigned int)arg1;
- (void)load;
- (id)content;
- (id)message;
- (unsigned int)contentOffset;
- (id)delegate;
- (BOOL)hasLoaded;
- (id)messageAnalysisError;
- (id)loadedPart;
- (id)loadTask;
- (void)_notifyAttachmentComplete:(id)arg1 data:(id)arg2;
- (void)loadBestAlternative;
- (BOOL)failedToLoad;
- (id)fileWrappersForImageAttachments;
- (BOOL)hasAnalyzedMessage;
- (id)suggestions;
- (id)secureMimeError;
- (BOOL)isMessageEncrypted;
- (BOOL)isMessageSigned;
- (BOOL)hasNoContent;
- (void)setShouldAnalyzeMessage:(BOOL)arg1;
- (BOOL)shouldAnalyzeMessage;
- (void)setShowMailboxName:(BOOL)arg1;
- (BOOL)showMailboxName;
- (void)setIsEditableMessage:(BOOL)arg1;
- (BOOL)isEditableMessage;
- (void)setIsDraftMessage:(BOOL)arg1;
- (BOOL)isDraftMessage;
- (void)setIsOutgoingMessage:(BOOL)arg1;
- (BOOL)isOutgoingMessage;
- (void)_notifyMessageAnalysisComplete;
- (void)_setSuggestions:(id)arg1;
- (void)_setMessageAnalysisError:(id)arg1;
- (void)loadWithPriority:(int)arg1;
- (void)setLoadTask:(id)arg1;
- (void)loadFull;
- (void)_notifyCompletelyComplete;
- (void)analyzeMessageContent:(id)arg1;
- (void)loadAsPlainText:(BOOL)arg1 asHTML:(BOOL)arg2 downloadIfNecessary:(BOOL)arg3;
- (void)_setSecureMIMEError:(id)arg1;
- (void)_setLoadedPart:(id)arg1;
- (void)_notifyFullMessageLoadFailed;
- (void)_notifyInitialLoadComplete;
- (void)_setMessageBody:(id)arg1;
- (void)_setContent:(id)arg1;
- (BOOL)hasAnalyzedMessageWithTimeout:(id)arg1;
- (void)loadMore;
- (id)initWithMessage:(id)arg1 attachmentManager:(id)arg2;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)messageBody;

@end
