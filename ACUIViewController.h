/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <ACUIViewControllerAccountChangeObserver>, NSTimer, UIBarButtonItem, ACAccountStore, UIProgressHUD, ACUIAccountOperationsHelper;

@interface ACUIViewController : PSListController <ACUIAccountOperationsDelegate> {
    NSTimer *_idleJiggleTimer;
    void *_powerAssertion;
    BOOL _addedToTaskList;
    BOOL _activityInProgress;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _confirmationViewCompletion;

    UIProgressHUD *_hud;
    BOOL _validationInProgress;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_cancelButton;
    ACAccountStore *_accountStore;
    ACUIAccountOperationsHelper *_accountOperationsHelper;
    <ACUIViewControllerAccountChangeObserver> *_accountChangeObserver;
}

@property(retain) UIBarButtonItem * doneButton;
@property(retain) UIBarButtonItem * cancelButton;
@property(retain) ACAccountStore * accountStore;
@property(retain) ACUIAccountOperationsHelper * accountOperationsHelper;
@property <ACUIViewControllerAccountChangeObserver> * accountChangeObserver;
@property BOOL validationInProgress;

+ (id)acuiAccountStore;
+ (BOOL)shouldPresentAsModalSheet;

- (BOOL)shouldReloadSpecifiersOnResume;
- (id)specifiers;
- (void)setCellsChecked:(BOOL)arg1;
- (void)setAccountStore:(id)arg1;
- (id)accountStore;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (void)confirmationView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)stopValidationWithPrompt:(id)arg1 showButtons:(BOOL)arg2;
- (void)startValidationWithPrompt:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (id)accountChangeObserver;
- (void)setAccountChangeObserver:(id)arg1;
- (void)setAccountOperationsHelper:(id)arg1;
- (BOOL)isShowingActivityInProgressUI;
- (void)hideActivityInProgressUIWithDelay:(double)arg1;
- (void)showActivityInProgressUIWithMessage:(id)arg1;
- (id)accountOperationsHelper;
- (void)removeParentSpecifier;
- (void)updateValidationPrompt:(id)arg1;
- (id)showConfirmationViewForDeletingAccount:(id)arg1 context:(id)arg2 completion:(id)arg3;
- (id)showAlertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(BOOL)arg4 context:(id)arg5 completion:(id)arg6;
- (id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2;
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
- (void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2;
- (void)_jiggleIdleTimerFired;
- (void)reloadAllParentSpecifiers;
- (void)reloadAllParentSpecifiersAnimated:(BOOL)arg1;
- (void)reloadParentSpecifier;
- (id)_effectiveParentController;
- (void)setValidationInProgress:(BOOL)arg1;
- (BOOL)validationInProgress;
- (void)startValidationWithPrompt:(id)arg1 userInteraction:(BOOL)arg2;
- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(BOOL)arg4 context:(id)arg5 completion:(id)arg6;
- (id)showAlertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(BOOL)arg4 cancelButtonIndex:(int)arg5 context:(id)arg6 completion:(id)arg7;
- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(BOOL)arg4 cancelButtonIndex:(int)arg5 context:(id)arg6 completion:(id)arg7;
- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(BOOL)arg4 cancelButtonIndex:(int)arg5 context:(id)arg6 forceAlert:(BOOL)arg7 completion:(id)arg8;
- (void)setTaskCompletionAssertionEnabled:(BOOL)arg1;
- (id)_actionSheetWithButtons:(id)arg1 title:(id)arg2 destructive:(BOOL)arg3 cancelButtonIndex:(int)arg4 context:(id)arg5;
- (id)_alertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonIndex:(int)arg4 context:(id)arg5;
- (BOOL)isPresentedAsModalSheet;
- (void)hideActivityInProgressUI;
- (void)_preventSleepAndDimming:(BOOL)arg1;
- (void).cxx_destruct;
- (void)dismissAnimated:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setCancelButton:(id)arg1;
- (id)cancelButton;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)cancelButtonTapped:(id)arg1;
- (void)dealloc;
- (id)init;

@end