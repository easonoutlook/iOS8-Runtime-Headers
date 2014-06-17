/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class DOMRange, NSTimer, MFLibraryMessage, NSObject<MFMessageWebLayerDelegate>, MFMessageReformattingContext, NSString, NSMutableDictionary;

@interface MFMessageWebLayer : UIWebBrowserView  {
    NSString *_currentUUID;
    NSTimer *_ignorePendingStylesheetsTimer;
    NSObject<MFMessageWebLayerDelegate> *_mwlDelegate;
    int _displayStyle;
    unsigned int _shouldReformat : 1;
    unsigned int _unitTests : 1;
    unsigned int _isFromEntourage : 1;
    BOOL _prePrintDataDetectionPending;
    BOOL _showRemoteImages;
    BOOL _hasUnloadedRemoteImages;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _postDisplayOperationBlock;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _postDisplayCancellationBlock;

    NSString *_mainFrameURL;
    MFLibraryMessage *_displayInfoCacheLibraryMessage;
    NSMutableDictionary *_displayInfoCache;
    BOOL _stoppedLoading;
    BOOL _didReformatMessage;
    NSString *_originalHTMLString;
    MFMessageReformattingContext *_reformattingContext;
    DOMRange *_bottomReplyRange;
    unsigned int _bottomReplyLastQuoteLevel;
}

@property BOOL prePrintDataDetectionPending;
@property BOOL showRemoteImages;
@property BOOL hasUnloadedRemoteImages;
@property(copy) NSString * originalHTMLString;
@property(retain) MFMessageReformattingContext * reformattingContext;
@property(retain) DOMRange * bottomReplyRange;
@property unsigned int bottomReplyLastQuoteLevel;

+ (void)initialize;
+ (void)clearMessageContentCache;
+ (void)clearUnblockedRemoteImagesCache;
+ (void)endBlockingRemoteImages;
+ (void)beginBlockingRemoteImagesExceptForMessageWebLayer:(id)arg1;

- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (int)displayStyle;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (float)maximumDoubleTapScale;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)stopLoading:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)copy:(id)arg1;
- (float)defaultWidth;
- (BOOL)isCancelled;
- (void)reload;
- (BOOL)_elementHasDefinedWidth:(id)arg1;
- (id)_rangeOfFirstText;
- (void)_didFinishReformattingMessage;
- (BOOL)_rescaleTopLevelElements;
- (BOOL)_shouldRescaleMessage;
- (void)_reformattingDidFail;
- (id)_reformatOneElementUsingMethod:(id)arg1 shouldCancel:(BOOL*)arg2;
- (BOOL)_shouldContinueResizingMessage;
- (BOOL)_shouldResizeMessage;
- (void)_willBeginReformattingMessage;
- (void)invalidateDisplayInfoCache;
- (BOOL)hasUnloadedRemoteImages;
- (void)setShowRemoteImages:(BOOL)arg1;
- (BOOL)prePrintDataDetectionPending;
- (id)attachmentDownloadProgressObserversByUniqueIdentifiers;
- (BOOL)hasPluginWithUninitializedSize;
- (void)displayDidEnd;
- (void)loadFragments:(id)arg1 forLibraryMessage:(id)arg2;
- (BOOL)webView:(id)arg1 shouldPaintBrokenImageForURL:(id)arg2;
- (void)_webthread_webView:(id)arg1 didFinishDocumentLoadForFrame:(id)arg2;
- (void)_webthread_webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)setMessageIsFromEntourage:(BOOL)arg1;
- (void)adjustSizeBasedOnMainFrame:(id)arg1;
- (void)webThreadWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)webThreadWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)updateImageWithSource:(id)arg1 withHTMLRepresentation:(id)arg2 completionBlock:(id)arg3;
- (void)updateInlinePluginWithContentID:(id)arg1 withHTMLRepresentation:(id)arg2 completionBlock:(id)arg3;
- (void)updateImageURL:(id)arg1 withURL:(id)arg2 completionBlock:(id)arg3;
- (void)appendMarkupString:(id)arg1 baseURL:(id)arg2;
- (void)performBatchUpdates:(id)arg1;
- (id)messageWebLayerDelegate;
- (void)setMessageWebLayerDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 visibleSize:(struct CGSize { float x1; float x2; })arg2 viewportWidth:(float)arg3 displayStyle:(int)arg4;
- (void)saveDisplayInfoCache;
- (void)clearMessageReformattingCache;
- (void)stopLoadingAndClear;
- (void)cancelPostDisplayOperation;
- (void)prepareDisplayInfoCacheWithLibraryMessage:(id)arg1;
- (void)_schedulePendingIgnoreStylesheets;
- (void)_frameDidFinishPrePrintURLification:(id)arg1;
- (void)_ignorePendingStylesheets:(id)arg1;
- (BOOL)canReformatMessageWithoutSubresources:(id)arg1 resultCanBeCached:(BOOL*)arg2;
- (void)reformatAttachments:(id)arg1;
- (void)reformatMessage:(id)arg1;
- (void)parseDocument:(id)arg1;
- (id)originalHTMLString;
- (void)attemptEarlyMessageReformat;
- (unsigned int)bottomReplyLastQuoteLevel;
- (id)bottomReplyRange;
- (BOOL)reformatMessageOnce;
- (void)setPostDisplayOperationBlock:(id)arg1 cancellationBlock:(id)arg2;
- (id)newQuoteSubparser;
- (BOOL)boolForDisplayInfoCacheKey:(id)arg1;
- (void)setObject:(id)arg1 forDisplayInfoCacheKey:(id)arg2;
- (id)objectForDisplayInfoCacheKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forDisplayInfoCacheKey:(id)arg2;
- (void)setPrePrintDataDetectionPending:(BOOL)arg1;
- (void)_cancelPendingIgnoreStylesheets;
- (void)setHasUnloadedRemoteImages:(BOOL)arg1;
- (void)addUnblockedRemoteImageURL:(id)arg1;
- (BOOL)showRemoteImages;
- (void)addMessageContentURL:(id)arg1;
- (id)_createInlinePluginElementWithHTMLRepresentation:(id)arg1 inDocument:(id)arg2;
- (void)_replaceElement:(id)arg1 with:(id)arg2;
- (BOOL)usePadDisplayStyle;
- (void)_sendDelegateSizeDidChange;
- (id)reformattingContext;
- (void)setBottomReplyLastQuoteLevel:(unsigned int)arg1;
- (void)setBottomReplyRange:(id)arg1;
- (void)setReformattingContext:(id)arg1;
- (void)setOriginalHTMLString:(id)arg1;
- (void)_preferredContentSizeDidChangeNotification:(id)arg1;
- (void)_webthread_webView:(id)arg1 tileDidDraw:(id)arg2;
- (id)webThreadWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end
