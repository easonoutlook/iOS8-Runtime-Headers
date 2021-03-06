/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UITapGestureRecognizer, UIControl, NSArray, NSMutableArray;

@interface SKUIOverlayContainerViewController : UIViewController <UIGestureRecognizerDelegate> {
    UIControl *_backstopView;
    BOOL _isAdjustingViewsForDismiss;
    int _selectedViewControllerIndex;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSMutableArray *_viewControllers;
}

@property(readonly) UIControl * backstopControl;
@property(copy,readonly) NSArray * viewControllers;


- (float)_overlaySpacingForOrientation:(int)arg1;
- (int)_indexOfViewControllerForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_viewControllerForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_selectedViewController;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameToCenterViewController:(id)arg1;
- (void)_pushViewController:(id)arg1;
- (void)_slideInViewController:(id)arg1 withCompletionBlock:(id)arg2;
- (void)_fadeInViewController:(id)arg1 withCompletionBlock:(id)arg2;
- (void)_popViewControllers;
- (void)_positionViewControllersForOrientation:(int)arg1;
- (void)_removeChildren;
- (void)_frameAction:(id)arg1;
- (void)showViewController:(id)arg1 withFlipTransition:(id)arg2 completionBlock:(id)arg3;
- (id)backstopControl;
- (void)dismissWithFlipTransition:(id)arg1 completionBlock:(id)arg2;
- (void)dismissWithFadeTransitionCompletionBlock:(id)arg1;
- (void)showViewController:(id)arg1 withCompletionBlock:(id)arg2;
- (void)showViewControllers:(id)arg1;
- (void)_tapAction:(id)arg1;
- (void).cxx_destruct;
- (id)viewControllers;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (void)popViewControllerAnimated:(BOOL)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)dealloc;

@end
