/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class _UIAsyncInvocation, <SKStoreProductViewControllerDelegatePrivate>, GKGame, SKInvocationQueueProxy<SKUIServiceProductPageViewController>, <SKStoreProductViewControllerDelegate>, SKRemoteProductViewController, NSDictionary, NSString;

@interface SKStoreProductViewController : UIViewController  {
    NSString *_additionalBuyParameters;
    NSString *_affiliateIdentifier;
    BOOL _automaticallyDismisses;
    _UIAsyncInvocation *_cancelRequest;
    NSString *_clientIdentifier;
    <SKStoreProductViewControllerDelegatePrivate> *_delegate;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _loadBlock;

    int _originalStatusBarStyle;
    int _productPageStyle;
    SKRemoteProductViewController *_remoteViewController;
    SKInvocationQueueProxy<SKUIServiceProductPageViewController> *_serviceProxy;
    NSDictionary *_scriptContextDictionary;
    BOOL _showsStoreButton;
    NSString *_cancelButtonTitle;
    NSString *_rightBarButtonTitle;
    BOOL _showsRightBarButton;
    BOOL _askToBuy;
    NSString *_promptString;
}

@property(retain) GKGame * _gkGame;
@property(copy) id _gkCompletionHandler;
@property <SKStoreProductViewControllerDelegate> * delegate;
@property(copy) NSString * additionalBuyParameters;
@property(copy) NSString * affiliateIdentifier;
@property(copy) NSString * clientIdentifier;
@property(copy) NSDictionary * scriptContextDictionary;
@property int productPageStyle;
@property BOOL askToBuy;
@property BOOL showsStoreButton;
@property(copy) NSString * cancelButtonTitle;
@property(copy) NSString * rightBarButtonTitle;
@property BOOL showsRightBarButton;
@property(copy) NSString * promptString;
@property BOOL automaticallyDismisses;

+ (void)getCanLoadURL:(id)arg1 completionBlock:(id)arg2;
+ (void)getCanLoadURL:(id)arg1 withURLBag:(id)arg2 completionBlock:(id)arg3;
+ (void)_validateURL:(id)arg1 withSheetInfo:(id)arg2 completionBlock:(id)arg3;

- (void)loadProductWithPageDictionary:(id)arg1 completionBlock:(id)arg2;
- (void)loadProductWithURL:(id)arg1 completionBlock:(id)arg2;
- (void)loadProductWithParameters:(id)arg1 completionBlock:(id)arg2;
- (void)setAutomaticallyDismisses:(BOOL)arg1;
- (BOOL)askToBuy;
- (void)setShowsStoreButton:(BOOL)arg1;
- (BOOL)showsStoreButton;
- (void)setShowsRightBarButton:(BOOL)arg1;
- (BOOL)showsRightBarButton;
- (void)setRightBarButtonTitle:(id)arg1;
- (id)rightBarButtonTitle;
- (id)promptString;
- (id)affiliateIdentifier;
- (void)setPromptString:(id)arg1;
- (void)setAskToBuy:(BOOL)arg1;
- (id)scriptContextDictionary;
- (id)clientIdentifier;
- (void)setProductPageStyle:(int)arg1;
- (int)productPageStyle;
- (void)setAffiliateIdentifier:(id)arg1;
- (void)setScriptContextDictionary:(id)arg1;
- (void)setAdditionalBuyParameters:(id)arg1;
- (id)cancelButtonTitle;
- (void)setCancelButtonTitle:(id)arg1;
- (void)_addRemoteView;
- (void)setClientIdentifier:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (id)delegate;
- (BOOL)automaticallyDismisses;
- (id)additionalBuyParameters;
- (void)_presentPageWithRequest:(id)arg1 animated:(BOOL)arg2;
- (void)_didFinishWithResult:(int)arg1;
- (void)loadProductWithRequest:(id)arg1 completionBlock:(id)arg2;
- (void)_loadDidFinishWithResult:(BOOL)arg1 error:(id)arg2;
- (void)_didFinish;
- (void)_setLoadBlock:(id)arg1;
- (void)_throwUnsupportedPresentationException;
- (void)_sk_applicationWillEnterForeground:(id)arg1;
- (void)_sk_applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)_resetRemoteViewController;
- (void)_requestRemoteViewController;
- (void)set_gkCompletionHandler:(id)arg1;
- (id)_gkCompletionHandler;
- (void)set_gkGame:(id)arg1;
- (id)_gkGame;

@end
