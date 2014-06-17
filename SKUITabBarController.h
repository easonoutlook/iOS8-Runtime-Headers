/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class SKUITabBarBackgroundView, UIViewController, SKUIFloatingOverlayView;

@interface SKUITabBarController : UITabBarController <SKUIMoreNavigationControllerDelegate> {
    SKUIFloatingOverlayView *_floatingOverlayView;
    UIViewController *_floatingOverlayViewController;
    SKUITabBarBackgroundView *_tabBarBackgroundView;
}

@property(readonly) UIViewController * floatingOverlayViewController;

+ (Class)_moreNavigationControllerClass;

- (id)floatingOverlayViewController;
- (void)cancelTransientViewController:(id)arg1;
- (void)setTabBarBackdropStyle:(int)arg1;
- (void)setFloatingOverlayViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_layoutFloatingOverlayView;
- (void)moreNavigationController:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (void).cxx_destruct;
- (void)setTransientViewController:(id)arg1 animated:(BOOL)arg2;
- (id)moreNavigationController;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (id)init;

@end
