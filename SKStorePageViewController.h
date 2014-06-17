/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class SKRemoteStorePageViewController, _UIAsyncInvocation, SKStoreProductViewController, SKInvocationQueueProxy<SKUIServiceStorePageViewController>;

@interface SKStorePageViewController : UIViewController <SKStoreProductViewControllerDelegate> {
    _UIAsyncInvocation *_cancelRequest;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _loadBlock;

    SKStoreProductViewController *_productPageViewController;
    SKRemoteStorePageViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceStorePageViewController> *_serviceProxy;
}


- (void)productViewControllerDidFinish:(id)arg1;
- (void)_addRemoteView;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (void)_showProductPageWithItemIdentifier:(id)arg1;
- (void)loadPageWithURLBagKey:(id)arg1 completionBlock:(id)arg2;
- (void)loadPageWithURL:(id)arg1 completionBlock:(id)arg2;
- (void)_didLoadWithResult:(BOOL)arg1 error:(id)arg2;
- (void)_dismissProductPageViewController;
- (void)_prepareToLoadWithCompletionBlock:(id)arg1;
- (void)_didFinishWithResult:(id)arg1 error:(id)arg2;
- (void)dealloc;
- (void)_requestRemoteViewController;

@end