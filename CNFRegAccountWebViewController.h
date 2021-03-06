/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@class NSTimer;

@interface CNFRegAccountWebViewController : CNFRegServerWebViewController <UIAlertViewDelegate> {
    BOOL _failedBagLoad;
    BOOL _listeningForBagLoad;
    NSTimer *_bagLoadTimer;
}

@property BOOL failedBagLoad;


- (void)_reload;
- (id)bagKey;
- (id)authTokenHeaderValue;
- (id)authIdHeaderValue;
- (id)pushTokenHeaderValue;
- (void)_showGenericErrorWithHandler:(id)arg1;
- (void)_reloadDelayed;
- (void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (id)_viewPortForNormalPresentation;
- (id)_viewPortForFormSheetPresentation;
- (id)_nonModalParentController;
- (id)_viewPortStringForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_handleFTServerBagFinishedLoading;
- (void)_bagLoadTimeout:(id)arg1;
- (void)_stopListeningForBagLoad;
- (void)_stopBagLoadTimer;
- (id)interfaceLayoutHeaderValue;
- (id)serviceHeaderValue;
- (id)securityHeaderValue;
- (id)viewPortHeaderValue;
- (void)doHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)_stopCurrentReload;
- (void)_showURLDidNotLoadAlert;
- (BOOL)failedBagLoad;
- (void)setFailedBagLoad:(BOOL)arg1;
- (void)_startBagLoadTimer;
- (void)_startListeningForBagLoad;
- (BOOL)_loadURLFromBag;
- (void)cancelTapped;
- (void)receivedStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (BOOL)canSendURLRequest:(id)arg1;
- (void)setHeadersForRequest:(id)arg1;
- (BOOL)shouldSetHeadersForRequest:(id)arg1;
- (id)logName;
- (id)initWithRegController:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)loadView;
- (void)dealloc;

@end
