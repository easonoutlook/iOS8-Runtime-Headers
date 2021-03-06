/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@class CNFRegController;

@interface CNFRegCallerIdDetailController : PSListItemsController  {
    CNFRegController *_regController;
}

@property(retain,readonly) CNFRegController * regController;


- (void)reloadCallerIdValues;
- (void)_setupAccountHandlers;
- (id)initWithRegController:(id)arg1;
- (id)regController;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;

@end
