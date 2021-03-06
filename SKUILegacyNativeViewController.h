/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIStorePageViewController, SKUICategoryController, NSData, SSVLoadURLOperation, NSURL;

@interface SKUILegacyNativeViewController : SKUIViewController <SKUICategoryControllerDelegate> {
    NSURL *_activeURL;
    SKUICategoryController *_categoryController;
    NSURL *_defaultURL;
    NSData *_initialData;
    SSVLoadURLOperation *_initialOperation;
    SKUIStorePageViewController *_storePageViewController;
}


- (void)categoryController:(id)arg1 didSelectCategory:(id)arg2;
- (id)_categoryController;
- (void)_finishLoadWithResult:(BOOL)arg1 error:(id)arg2;
- (void)_reloadNavigationItem;
- (id)initWithData:(id)arg1 fromOperation:(id)arg2;
- (id)activeMetricsController;
- (id)_storePageViewController;
- (void).cxx_destruct;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)reloadData;
- (void)dealloc;

@end
