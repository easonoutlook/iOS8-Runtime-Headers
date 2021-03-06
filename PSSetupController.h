/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSRootController, UIViewController<PSController>, NSDictionary;

@interface PSSetupController : PSRootController  {
    NSDictionary *_rootInfo;
    UIViewController<PSController> *_parentController;
    PSRootController *_parentRootController;
}


- (void)popControllerOnParent;
- (void)pushControllerOnParentWithSpecifier:(id)arg1;
- (void)dismissAnimated:(BOOL)arg1 completion:(id)arg2;
- (void)statusBarWillChangeHeight:(id)arg1;
- (void)handleURL:(id)arg1;
- (void)showController:(id)arg1 animate:(BOOL)arg2;
- (BOOL)popupStyleIsModal;
- (BOOL)usePopupStyle;
- (void)dismissWithCompletion:(id)arg1;
- (void)setupController;
- (void)setParentController:(id)arg1;
- (id)parentController;
- (id)controller;
- (void)dismissAnimated:(BOOL)arg1;
- (void)dismiss;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end
