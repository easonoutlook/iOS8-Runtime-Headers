/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIProductPageOverlayController, NSOperationQueue, SKUIPopoverObserver, SKUIClientContext, SKUINetworkErrorViewController, UIBarButtonItem, SKUIWishlistViewController, SKUIIPadSearchController;

@interface SKUIViewController : UIViewController <SKUINetworkErrorDelegate, SKUIProductPageOverlayDelegate, SKUIWishlistDelegate, UIPopoverControllerDelegate, SKUITabBarItemRootViewController> {
    SKUIClientContext *_clientContext;
    SKUINetworkErrorViewController *_networkErrorViewController;
    NSOperationQueue *_operationQueue;
    SKUIProductPageOverlayController *_productPageOverlayController;
    SKUIIPadSearchController *_searchController;
    BOOL _wishlistButtonHidden;
    UIBarButtonItem *_wishlistButtonItem;
    SKUIPopoverObserver *_wishlistPopoverObserver;
    SKUIWishlistViewController *_wishlistViewController;
}

@property(retain) SKUIClientContext * clientContext;
@property(readonly) SKUIIPadSearchController * IPadSearchController;
@property(retain) NSOperationQueue * operationQueue;
@property(readonly) UIBarButtonItem * _wishlistButtonItem;


- (void)wishlist:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3;
- (void)_wishlistPopoverDidDismiss;
- (void)_reloadForOrientation:(int)arg1;
- (void)_showDialogWithError:(id)arg1;
- (void)_wishlistAction:(id)arg1;
- (id)_wishlistButtonItem;
- (void)networkErrorViewControllerInvalidated:(id)arg1;
- (void)showError:(id)arg1;
- (id)IPadSearchController;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (id)clientContext;
- (id)initWithTabBarItem:(id)arg1;
- (void)showDefaultNavigationItems;
- (void)_setWishlistButtonHidden:(BOOL)arg1;
- (void)setClientContext:(id)arg1;
- (id)operationQueue;
- (void).cxx_destruct;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setOperationQueue:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)reloadData;
- (void)dealloc;

@end
