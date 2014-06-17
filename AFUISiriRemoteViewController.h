/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@class <AFUISiriRemoteViewControllerDataSource>, <AFUISiriRemoteViewControllerDelegate>;

@interface AFUISiriRemoteViewController : _UIRemoteViewController <SVSSiriViewControllerHosting> {
    <AFUISiriRemoteViewControllerDataSource> *_dataSource;
    <AFUISiriRemoteViewControllerDelegate> *_delegate;
}

@property <AFUISiriRemoteViewControllerDataSource> * dataSource;
@property <AFUISiriRemoteViewControllerDelegate> * delegate;

+ (id)requestViewControllerWithConnectionHandler:(id)arg1;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)setStatusBarFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)speechSynthesisDelegate;
- (id)sessionDelegate;
- (void)didReceiveBugButtonLongPress;
- (void)didReceiveReportBugAction;
- (void)didReceiveHelpAction;
- (void)setSpeechSynthesis:(id)arg1;
- (void)userInteractionDidOccur;
- (void)siriDidHidePasscodeUnlock;
- (void)siriWillHidePasscodeUnlock;
- (void)siriWillShowPasscodeUnlock;
- (void)siriDidDeactivate;
- (void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2;
- (void)setRequestOptions:(id)arg1;
- (void)siriDidActivateFromSource:(int)arg1;
- (void)siriWillActivateFromSource:(int)arg1;
- (void)serviceDidDismissBugReporter;
- (void)serviceDidPresentBugReporter;
- (void)handlePasscodeUnlockWithCompletion:(id)arg1;
- (void)getScreenshotWithReplyHandler:(id)arg1;
- (void)serviceOpenURL:(id)arg1 appBundleID:(id)arg2 allowSiriDismissal:(BOOL)arg3;
- (void)serviceOpenURL:(id)arg1 delaySessionEndForTTS:(BOOL)arg2 replyHandler:(id)arg3;
- (void)serviceWillDismissViewControllerWithStatusBarStyle:(int)arg1;
- (void)serviceWillPresentViewControllerWithStatusBarStyle:(int)arg1;
- (void)setStatusViewDisabled:(BOOL)arg1;
- (void)siriIdleAndQuietStatusDidChange:(BOOL)arg1;
- (void)notifyOnNextUserInteraction;
- (void)serviceLaunchApplicationWithBundleIdentifier:(id)arg1 withURL:(id)arg2 replyHandler:(id)arg3;
- (void)serviceUserRelevantEventDidOccur;
- (void)serviceStartRequestWithOptions:(id)arg1;
- (void)serviceDidReadBulletinWithIdentifier:(id)arg1;
- (void)serviceBulletinWithIdentifier:(id)arg1 replyHandler:(id)arg2;
- (void)serviceStartGuidedAccess;
- (void)serviceRequestsDismissal;
- (void)pulseHelpButton;
- (void)setHelpButtonEmphasized:(BOOL)arg1;
- (void)setBugReportingAvailable:(BOOL)arg1;
- (void)setStatusViewUserInteractionEnabled:(BOOL)arg1;
- (void)setCarDisplaySnippetVisible:(BOOL)arg1;
- (void)setStatusViewHidden:(BOOL)arg1;
- (void).cxx_destruct;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)setStatusBarHidden:(BOOL)arg1;
- (id)delegate;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSession:(id)arg1;

@end
