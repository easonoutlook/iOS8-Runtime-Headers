/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUIFocusedTouchGestureRecognizer, SKUIGiftConfirmView, SKUIGiftPurchaseRequest;

@interface SKUIGiftConfirmViewController : SKUIGiftStepViewController  {
    SKUIGiftConfirmView *_confirmView;
    BOOL _isShowingConfirmation;
    SKUIGiftPurchaseRequest *_purchaseRequest;
    SKUIFocusedTouchGestureRecognizer *_touchRecognizer;
}


- (void)_finishPurchaseWithResult:(BOOL)arg1 errorMessage:(id)arg2;
- (void)_showSuccessPage;
- (void)_cancelBuyConfirmation:(id)arg1;
- (void)_removeCancelGestureRecognizer;
- (void)_setShowingConfirmation:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_purchaseGift;
- (void)_buyButtonAction:(id)arg1;
- (void)_termsButtonAction:(id)arg1;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;
- (void).cxx_destruct;
- (void)loadView;
- (void)dealloc;

@end