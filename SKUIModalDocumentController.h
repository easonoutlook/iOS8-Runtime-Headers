/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <UINavigationControllerDelegate>, <SKUIModalSourceViewProvider>, SKUIClientContext, NSMutableArray, SKUIOverlayContainerViewController, UIViewController, UINavigationController, NSArray;

@interface SKUIModalDocumentController : NSObject <AAUIFamilySetupDelegate, SKComposeReviewDelegate, UIPopoverControllerDelegate> {
    SKUIClientContext *_clientContext;
    NSMutableArray *_composeReviewViewControllers;
    <SKUIModalSourceViewProvider> *_modalSourceViewProvider;
    UINavigationController *_overlayNavigationController;
    SKUIOverlayContainerViewController *_overlayViewController;
    <UINavigationControllerDelegate> *_navigationControllerDelegate;
    NSMutableArray *_popoverControllers;
    UIViewController *_rootViewController;
    NSMutableArray *_stackItems;
}

@property(retain) SKUIClientContext * clientContext;
@property <SKUIModalSourceViewProvider> * modalSourceViewProvider;
@property <UINavigationControllerDelegate> * navigationControllerDelegate;
@property(retain) UIViewController * rootViewController;
@property(readonly) NSArray * documents;


- (id)modalSourceViewProvider;
- (void)familySetupViewController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2;
- (void)_overlayControllerBackstopAction:(id)arg1;
- (id)_presenterViewController;
- (void)_pushSheetDocument:(id)arg1 viewController:(id)arg2;
- (id)_showOverlayContainerViewController;
- (id)_overlayStackItems;
- (void)_popPopoverStackItem:(id)arg1 animated:(BOOL)arg2;
- (void)_popOverlayStackItem:(id)arg1 animated:(BOOL)arg2;
- (void)_unloadDocumentForViewController:(id)arg1;
- (void)_dismissOverlayControllerWithStackItem:(id)arg1 animated:(BOOL)arg2;
- (void)_pushOverlayStackItem:(id)arg1;
- (void)_pushWriteAReviewDocument:(id)arg1 viewController:(id)arg2;
- (void)_pushSheetStackItem:(id)arg1;
- (void)_pushPopoverStackItem:(id)arg1;
- (void)_pushRedeemDocument:(id)arg1 options:(id)arg2;
- (void)_pushGiftDocument:(id)arg1 options:(id)arg2;
- (void)_pushFamilySetupDocument:(id)arg1 options:(id)arg2;
- (void)_pushDialogDocument:(id)arg1 options:(id)arg2;
- (void)_pushCharityDocument:(id)arg1 options:(id)arg2;
- (void)_popDocument:(BOOL)arg1;
- (void)_presentOverlayViewControllersFromNavigationController:(id)arg1;
- (void)setOverlayNavigationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)presentOverlayViewControllersFromNavigationController:(id)arg1;
- (void)setModalSourceViewProvider:(id)arg1;
- (void)reviewComposeViewControllerDidFinish:(id)arg1;
- (void)popAllDocuments;
- (id)documents;
- (void)popToDocument:(id)arg1;
- (void)popDocument;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (void)setNavigationControllerDelegate:(id)arg1;
- (id)navigationControllerDelegate;
- (id)clientContext;
- (void)setClientContext:(id)arg1;
- (void).cxx_destruct;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (id)rootViewController;
- (void)setRootViewController:(id)arg1;
- (void)dealloc;
- (id)init;

@end
