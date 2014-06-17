/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIWindow, UIPrinterBrowserViewController, PKPrinter, UIPrinterPickerController, UIViewController, UIPopoverController, UINavigationController;

@interface UIPrinterPickerViewController : UIViewController <UIPrinterBrowserOwner> {
    UIPrinterPickerController *_printerPickerController;
    UINavigationController *_navigationController;
    UIPrinterBrowserViewController *_printerBrowserViewController;
    UIViewController *_parentController;
    UIPopoverController *_poverController;
    UIWindow *_window;
    BOOL _dismissed;
    BOOL _animated;
    BOOL _observingRotation;
    BOOL _parentHasNoPopover;
    BOOL _userSelectedPrinter;
    PKPrinter *_printer;
}

@property(retain) PKPrinter * printer;
@property BOOL userSelectedPrinter;


- (BOOL)userSelectedPrinter;
- (void)controllerDidDisappear;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentPrinterPickerPanelFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)presentPrinterPickerPanelFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (void)presentPrinterPickerPanelAnimated:(BOOL)arg1;
- (id)initWithPrinterPickerController:(id)arg1 inParentController:(id)arg2;
- (void)setPrinter:(id)arg1;
- (id)printer;
- (BOOL)shouldShowPrinter:(id)arg1;
- (void)setUserSelectedPrinter:(BOOL)arg1;
- (void)cancelPrinting;
- (BOOL)filtersPrinters;
- (void)dismissPrinterPickerAnimated:(BOOL)arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (void)_presentInParentAnimated:(BOOL)arg1;
- (void)_keyWindowWillRotate:(id)arg1;
- (void)_presentWindow;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)dealloc;

@end
