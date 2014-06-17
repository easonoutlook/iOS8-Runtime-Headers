/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CNFRegLoadingView, CNFRegController, UIAlertView, NSTimer, NSMutableArray, RUILoader, UIWebView;

@interface CNFRegServerWebViewController : UIViewController <UIWebViewDelegate, UIAlertViewDelegate, RUIObjectModelDelegate> {
    CNFRegController *_regController;
    CNFRegLoadingView *_loadingView;
    UIAlertView *_alert;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _alertHandler;

    NSTimer *_timeoutTimer;
    RUILoader *_loader;
    NSMutableArray *_objectModels;
    struct { 
        unsigned int isLoading : 1; 
        unsigned int isLoaded : 1; 
        unsigned int wantsWifi : 1; 
        unsigned int modifiedWiFi : 1; 
        unsigned int automaticKeyboardWasDisabled : 1; 
        unsigned int checkedLogState : 1; 
        unsigned int shouldLog : 1; 
        unsigned int timedOut; 
    } _webControllerFlags;
    UIWebView *_webView;
}

@property(retain) CNFRegController * regController;
@property(readonly) BOOL isLoaded;
@property(readonly) BOOL isLoading;
@property(readonly) BOOL timedOut;
@property(retain) UIWebView * webView;
@property(retain) UIAlertView * alert;
@property(copy) id alertHandler;


- (BOOL)timedOut;
- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;
- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;
- (void)objectModelPressedBack:(id)arg1;
- (id)parentViewControllerForObjectModel:(id)arg1;
- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;
- (void)loader:(id)arg1 didFailWithError:(id)arg2;
- (void)objectModelDidChange:(id)arg1;
- (void)_startTimeoutWithDuration:(double)arg1;
- (void)loadURL:(id)arg1;
- (void)setWantsWifi:(BOOL)arg1;
- (void)_timeoutFired:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)receivedStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)_popObjectModelAnimated:(BOOL)arg1;
- (void)_cleanupLoader;
- (void)hideSpinner;
- (BOOL)canSendURLRequest:(id)arg1;
- (void)setHeadersForRequest:(id)arg1;
- (BOOL)shouldSetHeadersForRequest:(id)arg1;
- (id)overrideURLForURL:(id)arg1;
- (void)showSpinner;
- (BOOL)_shouldLog;
- (void)_stopTimeout;
- (void)stopRequiringWifi;
- (void)startRequiringWifi;
- (id)logName;
- (id)initWithRegController:(id)arg1;
- (void)setRegController:(id)arg1;
- (id)regController;
- (void)setAlert:(id)arg1;
- (id)alert;
- (id)alertHandler;
- (void)setAlertHandler:(id)arg1;
- (void)_handleTimeout;
- (BOOL)isLoaded;
- (BOOL)isLoading;
- (void)setWebView:(id)arg1;
- (id)webView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)applicationWillSuspend;
- (void)dealloc;
- (id)init;

@end