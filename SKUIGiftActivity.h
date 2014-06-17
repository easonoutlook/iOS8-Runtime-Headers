/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIProductPageItem, SKUIClientContext;

@interface SKUIGiftActivity : UIActivity <SKUIGiftViewControllerDelegate> {
    SKUIClientContext *_clientContext;
    SKUIProductPageItem *_item;
}


- (id)initWithItem:(id)arg1 clientContext:(id)arg2;
- (void)giftViewController:(id)arg1 didFinishWithResult:(BOOL)arg2;
- (id)_beforeActivity;
- (id)activityViewController;
- (id)activityImage;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)activityTitle;
- (void).cxx_destruct;
- (id)activityType;

@end
