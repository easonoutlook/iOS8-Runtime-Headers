/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@class NSNumber, <AFUISiriViewControllerDataSource>, UIStatusBar, AFUIRequestOptions, <AFUISiriViewControllerDelegate>, AFUIDialogPhase, SiriUIAudioRoutePickerController, AFUISiriSession, NSObject<OS_dispatch_queue>, AFUISiriRemoteViewController, AFUISiriView, NSTimer;

@interface AFUISiriViewController : UIViewController <AFUISiriRemoteViewControllerDataSource, AFUISiriRemoteViewControllerDelegate, AFUISiriViewDelegate, SiriUIAudioRoutePickerControllerDelegate, AFUISiriSessionLocalDataSource, AFUISiriSessionLocalDelegate> {
    BOOL _attemptingRemoteViewControllerPresentation;
    BOOL _visible;
    BOOL _eyesFree;
    BOOL _isStark;
    BOOL _showsStatusBar;
    BOOL _statusBarEnabled;
    BOOL _mapsGatekeeperEnabled;
    BOOL _hasCalledBeginAppearanceTransition;
    BOOL _hasCalledEndAppearanceTransition;
    BOOL _inHoldToTalkMode;
    <AFUISiriViewControllerDataSource> *_dataSource;
    <AFUISiriViewControllerDelegate> *_delegate;
    AFUISiriSession *_session;
    AFUISiriRemoteViewController *_remoteViewController;
    NSObject<OS_dispatch_queue> *_remoteViewControllerDispatchQueue;
    SiriUIAudioRoutePickerController *_routePickerController;
    UIStatusBar *_statusBar;
    NSTimer *_manualEndpointTimer;
    AFUIRequestOptions *_currentRequestOptions;
    NSNumber *_recordingStartedTimeValue;
    double _viewDidAppearTime;
}

@property <AFUISiriViewControllerDataSource> * dataSource;
@property <AFUISiriViewControllerDelegate> * delegate;
@property(getter=isVisible) BOOL visible;
@property(getter=isEyesFree) BOOL eyesFree;
@property BOOL isStark;
@property BOOL showsStatusBar;
@property BOOL statusBarEnabled;
@property BOOL mapsGatekeeperEnabled;
@property(readonly) BOOL hasScreenSnapshot;
@property(retain) AFUISiriView * view;
@property(readonly) AFUIDialogPhase * dialogPhase;
@property(getter=_session,readonly) AFUISiriSession * session;
@property(getter=_remoteViewController,readonly) AFUISiriRemoteViewController * remoteViewController;
@property(getter=_remoteViewControllerDispatchQueue,readonly) NSObject<OS_dispatch_queue> * remoteViewControllerDispatchQueue;
@property(getter=_hasCalledBeginAppearanceTransition,setter=_setHasCalledBeginAppearanceTransition:) BOOL hasCalledBeginAppearanceTransition;
@property(getter=_hasCalledEndAppearanceTransition,setter=_setHasCalledEndAppearanceTransition:) BOOL hasCalledEndAppearanceTransition;
@property(retain) SiriUIAudioRoutePickerController * routePickerController;
@property(getter=_statusBar,setter=_setStatusBar:,retain) UIStatusBar * statusBar;
@property(getter=_isInHoldToTalkMode,setter=_setInHoldToTalkMode:) BOOL inHoldToTalkMode;
@property(getter=_manualEndpointTimer,setter=_setManualEndpointTimer:,retain) NSTimer * manualEndpointTimer;
@property(getter=_currentRequestOptions,setter=_setCurrentRequestOptions:,copy) AFUIRequestOptions * currentRequestOptions;
@property(getter=_recordingStartedTimeValue,setter=_setRecordingStartedTimeValue:,retain) NSNumber * recordingStartedTimeValue;
@property(getter=_viewDidAppearTime,setter=_setViewDidAppearTime:) double viewDidAppearTime;


- (void)setAlertContext;
- (void)setEyesFree:(BOOL)arg1;
- (id)dialogPhase;
- (id)initWithConnection:(id)arg1;
- (void)setRoutePickerController:(id)arg1;
- (id)routePickerController;
- (id)_remoteViewControllerDispatchQueue;
- (void)setMapsGatekeeperEnabled:(BOOL)arg1;
- (BOOL)mapsGatekeeperEnabled;
- (void)setStatusBarEnabled:(BOOL)arg1;
- (BOOL)showsStatusBar;
- (BOOL)hasQueuedTTS;
- (void)handleViewFullyRevealed;
- (void)updateViewForPercentageRevealed:(float)arg1;
- (id)currentRequestOptions;
- (void)updateAlertAndApplicationContexts;
- (void)routePickerControllerPickedNewRoute:(id)arg1 isBluetooth:(BOOL)arg2;
- (void)routePickerController:(id)arg1 hasRoutesToPick:(BOOL)arg2;
- (void)siriRemoteViewController:(id)arg1 didEncounterUnexpectedServiceError:(id)arg2;
- (void)presentRemoteViewControllerIfNecessary;
- (void)_setShowAudioRoutePicker:(BOOL)arg1;
- (id)_routePickerController;
- (BOOL)isStark;
- (void)startRequestWithActivationTrigger:(id)arg1;
- (void)_enterHoldToTalkMode;
- (void)_activationTriggerDidRelease:(id)arg1;
- (void)_holdToTalkTriggerDidReleaseFromSource:(int)arg1;
- (void)_exitHoldToTalkMode;
- (void)_setInHoldToTalkMode:(BOOL)arg1;
- (void)_setManualEndpointTimer:(id)arg1;
- (void)_manualEndpointTimerFired:(id)arg1;
- (double)_manualEndpointingThreshold;
- (id)_recordingStartedTimeValue;
- (void)_transitionToAutomaticEndpointMode;
- (BOOL)_holdToTalkThresholdHasElapsed;
- (id)_currentRequestOptions;
- (BOOL)_isInHoldToTalkMode;
- (id)_manualEndpointTimer;
- (void)_setRecordingStartedTimeValue:(id)arg1;
- (void)_setCurrentRequestOptions:(id)arg1;
- (void)defrost;
- (unsigned int)lockStateForSiriRemoteViewController:(id)arg1;
- (void)setShowsStatusBar:(BOOL)arg1;
- (BOOL)_hasCalledEndAppearanceTransition;
- (BOOL)_hasCalledBeginAppearanceTransition;
- (void)_presentRemoteViewController;
- (void)_setHasCalledEndAppearanceTransition:(BOOL)arg1;
- (void)_setHasCalledBeginAppearanceTransition:(BOOL)arg1;
- (double)_viewDidAppearTime;
- (void)_setViewDidAppearTime:(double)arg1;
- (BOOL)hasScreenSnapshot;
- (void)_updateAudioRoutePicker;
- (void)_setStatusBar:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_statusBarFrame;
- (void)_enqueueRemoteViewControllerMessageBlock:(id)arg1;
- (id)_statusBar;
- (void)_removeStatusBar;
- (void)_addStatusBar;
- (BOOL)statusBarEnabled;
- (id)_session;
- (BOOL)isEyesFree;
- (BOOL)isPreventingActivationGesture;
- (void)siriSession:(id)arg1 didReceiveDeviceUnlockRequestWithCompletion:(id)arg2;
- (id)contextAppIdentifiersForSiriSession:(id)arg1;
- (id)bulletinsForSiriSession:(id)arg1;
- (id)underlyingConnection;
- (void)siriSessionRecordingPreparationHasFinished:(id)arg1;
- (void)siriSession:(id)arg1 didChangeToState:(int)arg2;
- (void)telephonyRequestCompleted;
- (void)updateRequestOptions:(id)arg1;
- (void)stopRequestWithOptions:(id)arg1;
- (void)startRequestWithOptions:(id)arg1;
- (void)resetContext;
- (void)setLockState:(unsigned int)arg1;
- (void)setIsStark:(BOOL)arg1;
- (void)userInteractionDidOccur;
- (void)siriDidDeactivate;
- (void)showPresentationWithIdentifier:(id)arg1 properties:(id)arg2;
- (void)siriDidActivateFromSource:(int)arg1;
- (void)siriWillActivateFromSource:(int)arg1;
- (BOOL)siriRemoteViewController:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(BOOL)arg4;
- (BOOL)siriRemoteViewController:(id)arg1 openURL:(id)arg2 delaySessionEndForTTS:(BOOL)arg3;
- (void)siriRemoteViewControllerPulseHelpButton:(id)arg1;
- (void)siriRemoteViewController:(id)arg1 handlePasscodeUnlockWithCompletion:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 setBugReportingAvailable:(BOOL)arg2;
- (void)siriRemoteViewController:(id)arg1 setHelpButtonEmphasized:(BOOL)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2;
- (void)siriRemoteViewController:(id)arg1 willDismissViewControllerWithStatusBarStyle:(int)arg2;
- (void)siriRemoteViewController:(id)arg1 willPresentViewControllerWithStatusBarStyle:(int)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusViewUserInteractionEnabled:(BOOL)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusViewDisabled:(BOOL)arg2;
- (void)siriRemoteViewController:(id)arg1 setCarDisplaySnippetVisible:(BOOL)arg2;
- (void)siriRemoteViewController:(id)arg1 setStatusViewHidden:(BOOL)arg2;
- (void)siriRemoteViewController:(id)arg1 siriIdleAndQuietStatusDidChange:(BOOL)arg2;
- (void)notifyOnNextUserInteractionForSiriRemoteViewController:(id)arg1;
- (BOOL)siriRemoteViewController:(id)arg1 launchApplicationWithBundleIdentifier:(id)arg2 withURL:(id)arg3;
- (void)userRelevantEventDidOccurInSiriRemoteViewController:(id)arg1;
- (void)siriRemoteViewController:(id)arg1 startRequestWithOptions:(id)arg2;
- (void)siriRemoteViewController:(id)arg1 didReadBulletinWithIdentifier:(id)arg2;
- (id)siriRemoteViewController:(id)arg1 bulletinWithIdentifier:(id)arg2;
- (void)startGuidedAccessForRemoteViewController:(id)arg1;
- (void)dismissSiriRemoteViewController:(id)arg1;
- (void)siriRemoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (void)handlePasscodeUnlockWithCompletion:(id)arg1;
- (void)siriView:(id)arg1 didReceiveStartSpeechRequestWithTrigger:(id)arg2;
- (void)siriViewDidReceiveCancelSpeechRequestAction:(id)arg1;
- (void)siriViewDidReceiveStopRecordingSpeechAction:(id)arg1;
- (void)siriViewDidReceiveStartSpeechRequestAction:(id)arg1;
- (float)audioRecordingPowerLevelForSiriView:(id)arg1;
- (BOOL)siriView:(id)arg1 attemptUnlockWithPassword:(id)arg2;
- (void)siriViewDidReceiveHelpAction:(id)arg1;
- (void)siriViewDidReceiveBugButtonLongPress:(id)arg1;
- (void)siriViewDidReceiveReportBugAction:(id)arg1;
- (void)siriViewDidReceiveAudioRouteAction:(id)arg1;
- (BOOL)isListening;
- (void)_sendEndAppearanceTransitionIfReady;
- (void)_sendBeginAppearanceTransitionIfReadyAnimated:(BOOL)arg1;
- (void)preheat;
- (void).cxx_destruct;
- (BOOL)isVisible;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillAppear:(BOOL)arg1;
- (id)_remoteViewController;
- (void)setVisible:(BOOL)arg1;
- (void)loadView;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (id)delegate;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (void)_statusBarFrameDidChange:(id)arg1;
- (void)endSession;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;

@end
