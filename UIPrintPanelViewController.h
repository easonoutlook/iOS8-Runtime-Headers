/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIPrintPaper, UIWindow, UIPrintPanelTableViewController, UIPrintInteractionController, PKPrinter, UIViewController, UIPrintInfo, UINavigationController, UIPopoverController;

@interface UIPrintPanelViewController : NSObject <UIPrinterBrowserOwner> {
    UIPrintInteractionController *_printInteractionController;
    UIPrintInfo *_observedPrintInfo;
    UINavigationController *_navigationController;
    UIPrintPanelTableViewController *_tableViewController;
    UIViewController *_parentController;
    UIPopoverController *_poverController;
    UIWindow *_window;
    PKPrinter *_printer;
    BOOL _dismissed;
    BOOL _animated;
    BOOL _observingRotation;
    BOOL _parentHasNoPopover;
}

@property(retain) PKPrinter * printer;
@property(readonly) int pageCount;
@property struct _NSRange { unsigned int x1; unsigned int x2; } pageRange;
@property BOOL duplex;
@property(readonly) NSArray * paperList;
@property(retain) UIPrintPaper * paper;
@property int copies;
@property(readonly) BOOL showDuplex;
@property(readonly) BOOL showPageRange;
@property(readonly) BOOL showCopies;
@property(readonly) BOOL showPaper;
@property(readonly) BOOL showPaperSelection;
@property(readonly) BOOL showPrinterWarning;


- (BOOL)showPaperSelection;
- (BOOL)showPrinterWarning;
- (BOOL)showCopies;
- (BOOL)showDuplex;
- (void)startPrinting;
- (void)presentPrintPanelFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)presentPrintPanelFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (void)presentPrintPanelAnimated:(BOOL)arg1;
- (id)initWithPrintInterationController:(id)arg1 inParentController:(id)arg2;
- (BOOL)showPaper;
- (id)paperList;
- (void)setPaper:(id)arg1;
- (id)paper;
- (id)_removeRollsFrom:(id)arg1;
- (void)setPageRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })pageRange;
- (BOOL)showPageRange;
- (void)dismissPrintPanel:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setCopies:(int)arg1;
- (int)copies;
- (void)setDuplex:(BOOL)arg1;
- (BOOL)duplex;
- (int)pageCount;
- (void)controllerDidDisappear;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)setPrinter:(id)arg1;
- (id)printer;
- (void)cancelPrinting;
- (BOOL)filtersPrinters;
- (void)dismissAnimated:(BOOL)arg1;
- (void)_presentInParentAnimated:(BOOL)arg1;
- (void)_keyWindowWillRotate:(id)arg1;
- (void)_presentWindow;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)dealloc;

@end
