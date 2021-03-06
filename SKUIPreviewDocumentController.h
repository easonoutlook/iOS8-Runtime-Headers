/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSOperationQueue, SKUIClientContext, NSHashTable, SKUIViewElementLayoutContext, SKUILayoutCache, IKAppDocument, SUAudioPlayer;

@interface SKUIPreviewDocumentController : NSObject <IKAppDocumentDelegate, SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate> {
    SUAudioPlayer *_audioPlayer;
    SKUIClientContext *_clientContext;
    IKAppDocument *_document;
    SKUILayoutCache *_layoutCache;
    SKUIViewElementLayoutContext *_layoutContext;
    NSOperationQueue *_operationQueue;
    NSHashTable *_viewControllers;
}

@property(retain) SKUIClientContext * clientContext;
@property(getter=isPreviewActive,readonly) BOOL previewActive;


- (id)newPreviewOverlayViewController;
- (void)documentNeedsUpdate:(id)arg1;
- (void)_audioPlayerStatusChangeNotification:(id)arg1;
- (BOOL)isPreviewActive;
- (void)_reloadViewControllersWithPreviewStatus:(id)arg1 animated:(BOOL)arg2;
- (id)_layoutCache;
- (void)_connectToAudioPlayer;
- (void)_playerSessionsDidChangeNotification:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)documentDidUpdate:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (id)_layoutContext;
- (id)_operationQueue;
- (id)clientContext;
- (void)setClientContext:(id)arg1;
- (void).cxx_destruct;
- (id)initWithDocument:(id)arg1;
- (void)dealloc;

@end
