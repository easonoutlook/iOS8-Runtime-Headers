/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class <RUSignInViewControllerDelegate>, UILabel, UIButton, UIBarButtonItem, UITextField, SKUICircleProgressIndicator, MPUShapeView, UITapGestureRecognizer;

@interface RUSignInViewController : UIViewController <UIGestureRecognizerDelegate, UITextFieldDelegate> {
    int _accountChangeIgnoreCount;
    SKUICircleProgressIndicator *_activityIndicatorView;
    UILabel *_appleIDTitleLabel;
    UITextField *_appleIDTextField;
    UIBarButtonItem *_cancelBarButtonItem;
    UIButton *_continueButton;
    UIButton *_createAccountButton;
    UITapGestureRecognizer *_dismissGestureRecognizer;
    MPUShapeView *_entryContentView;
    UIButton *_forgotPasswordButton;
    BOOL _isAuthenticating;
    BOOL _isLoading;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _keyboardFrame;
    UILabel *_loadingLabel;
    UILabel *_passwordTitleLabel;
    UITextField *_passwordTextField;
    UILabel *_titleLabel;
    <RUSignInViewControllerDelegate> *_delegate;
}

@property <RUSignInViewControllerDelegate> * delegate;


- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (void)resetFakeLoadingState;
- (void)_endIgnoringAccountChanges;
- (void)_beginIgnoringAccountChanges;
- (void)_setLoading:(BOOL)arg1;
- (void)_updateContinueButtonVisibilityAnimated:(BOOL)arg1;
- (void)_updateAccountRelatedControls;
- (void)_createAccountAction:(id)arg1;
- (void)_forgotPasswordAction:(id)arg1;
- (void)_continueAction:(id)arg1;
- (void)_textFieldDidChangeAction:(id)arg1;
- (void)_dismissKeyboardAction:(id)arg1;
- (void)_keyboardWillChangeFrameNotification:(id)arg1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLayoutSubviews;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)delegate;
- (void)_cancelAction:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;

@end
