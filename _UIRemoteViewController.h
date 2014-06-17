/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIRemoteViewService, UIDimmingView, _UIViewServiceInterface, BKSTouchDeliveryPolicyAssertion, _UIAsyncInvocation, NSError, UIView, _UITextServiceSession, NSArray, _UIRemoteView, _UITextEffectsRemoteView, NSString, _UISizeTrackingView, NSMutableArray, UIActionSheet;

@interface _UIRemoteViewController : UIViewController <_UIRemoteViewController_ViewControllerOperatorInterface, _UIRemoteViewController_TextEffectsOperatorInterface, UIActionSheetDelegate> {
    NSString *_serviceBundleIdentifier;
    _UIViewServiceInterface *_serviceInterface;
    _UIRemoteViewService *_remoteViewService;
    id _serviceViewControllerProxy;
    id _serviceViewControllerControlMessageProxy;
    NSArray *_serviceViewControllerSupportedInterfaceOrientations;
    unsigned int _serviceAccessibilityServerPort;
    unsigned int _serviceRegisteredScrollToTopViewCount;
    id _viewControllerOperatorProxy;
    _UIAsyncInvocation *_viewControllerOperatorHalfDisconnectionInvocation;
    id _textEffectsOperatorProxy;
    _UIAsyncInvocation *_textEffectsOperatorHalfDisconnectionInvocation;
    BOOL _fencingCurrentTransaction;
    int _preFencedCommitActionsLock;
    NSMutableArray *_preFencedCommitActions;
    _UISizeTrackingView *_sizeTrackingView;
    _UIRemoteView *_serviceViewControllerRemoteView;
    _UITextEffectsRemoteView *_fullScreenTextEffectsRemoteView;
    _UITextEffectsRemoteView *_textEffectsAboveStatusBarRemoteView;
    _UITextEffectsRemoteView *_remoteKeyboardRemoteView;
    UIView *_fullScreenTextEffectsSnapshotView;
    BOOL _snapshotTextEffectsAfterRotation;
    unsigned int _serviceScreenDisplayID;
    _UIAsyncInvocation *_terminationInvocation;
    int _terminationErrorLock;
    NSError *_terminationError;
    UIActionSheet *_hostedActionSheet;
    _UITextServiceSession *_textServiceSession;
    int __automatic_invalidation_retainCount;
    BOOL __automatic_invalidation_invalidated;
    UIDimmingView *_hostedDimmingView;
    UIView *_touchGrabbingView;
    int _preferredStatusBarStyle;
    BOOL _prefersStatusBarHidden;
    BOOL _isFocusDeferred;
    NSString *_deferredDisplayUUID;
    unsigned int _deferredContextID;
    NSArray *_allowedNotifications;
    BOOL _serviceViewShouldShareTouchesWithHost;
    BKSTouchDeliveryPolicyAssertion *_touchDeliveryPolicyAssertion;
}

@property(readonly) NSString * serviceBundleIdentifier;
@property(readonly) int serviceProcessIdentifier;
@property(readonly) struct { unsigned int x1[8]; } serviceAuditToken;
@property BOOL serviceViewShouldShareTouchesWithHost;
@property(setter=_setTouchDeliveryPolicyAssertion:,retain) BKSTouchDeliveryPolicyAssertion * _touchDeliveryPolicyAssertion;

+ (id)requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 connectionHandler:(id)arg3;
+ (BOOL)__shouldAllowHostProcessToTakeFocus;
+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)_requestViewController:(id)arg1 fromServiceWithBundleIdentifier:(id)arg2 service:(id)arg3 connectionHandler:(id)arg4;
+ (BOOL)__shouldHostRemoteTextEffectsWindow;
+ (id)requestViewControllerWithService:(id)arg1 connectionHandler:(id)arg2;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (id)serviceViewControllerProxyWithErrorHandler:(id)arg1;
- (id)_touchDeliveryPolicyAssertion;
- (void)setServiceViewShouldShareTouchesWithHost:(BOOL)arg1;
- (void)restoreStateForSession:(id)arg1 anchor:(id)arg2;
- (void)saveStateForSession:(id)arg1 anchor:(id)arg2;
- (BOOL)inheritsSecurity;
- (void)setInheritsSecurity:(BOOL)arg1;
- (void)__sendNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)__viewServiceDidUpdatePreferredStatusBarStyle:(int)arg1 hidden:(BOOL)arg2;
- (void)__viewServicePopoverDidSetUseToolbarShine:(BOOL)arg1;
- (void)__viewServicePopoverDidChangeContentSize:(struct CGSize { float x1; float x2; })arg1 animated:(BOOL)arg2 fenceSendRight:(id)arg3 withReplyHandler:(id)arg4;
- (void)__setViewServiceIsDisplayingPopover:(BOOL)arg1;
- (void)__dismissTextServiceSessionAnimated:(BOOL)arg1;
- (void)__showServiceForText:(id)arg1 type:(int)arg2 fromRectValue:(id)arg3 replyHandler:(id)arg4;
- (void)__viewServiceDidUpdateTintColor:(id)arg1 duration:(double)arg2;
- (void)__setSupportedInterfaceOrientations:(id)arg1;
- (void)__viewServiceDidUnregisterScrollToTopView;
- (void)__viewServiceDidRegisterScrollToTopView;
- (void)__viewServiceDidPromoteFirstResponder;
- (void)__dismissActionSheetWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (void)__presentActionSheetFromYCoordinate:(float)arg1 withTitle:(id)arg2 buttonTitles:(id)arg3 cancelButtonIndex:(int)arg4 destructiveButtonIndex:(int)arg5 style:(int)arg6;
- (id)_appearanceSource;
- (void)setAllowedNotifications:(id)arg1;
- (id)allowedNotifications;
- (void)_updateTouchGrabbingView;
- (int)serviceProcessIdentifier;
- (id)serviceBundleIdentifier;
- (void)_addPreFencedCommitAction:(id)arg1;
- (void)_applicationWillDeactivate:(id)arg1;
- (void)_setDeferred:(BOOL)arg1 forDisplayUUID:(id)arg2;
- (void)_snapshotAndRemoveTextEffectsRemoteView;
- (void)_restoreTextEffectsRemoteView;
- (id)_clientDeferralProperties;
- (id)_hostDeferralProperties;
- (id)_addAutoAllowedNotifications:(id)arg1;
- (struct { unsigned int x1[8]; })serviceAuditToken;
- (void)_terminateUnconditionallyThen:(id)arg1;
- (void)_updateTintColor;
- (void)_appearanceInvocationsDidChange:(id)arg1;
- (void)_applicationDidFinishSuspendSnapshot:(id)arg1;
- (void)_hostDidEnterBackground:(id)arg1;
- (void)_hostWillEnterForeground:(id)arg1;
- (void)_statusBarHeightDidChange:(id)arg1;
- (void)_statusBarOrientationDidChange:(id)arg1;
- (void)_firstResponderDidChange:(id)arg1;
- (id)_terminateWithError:(id)arg1;
- (void)_awakeWithConnectionInfo:(id)arg1;
- (id)_initWithViewServiceBundleIdentifier:(id)arg1;
- (void)_setTouchDeliveryPolicyAssertion:(id)arg1;
- (void)_prepareTouchDeliveryPolicy;
- (BOOL)serviceViewShouldShareTouchesWithHost;
- (BOOL)_serviceHasScrollToTopView;
- (void)_scrollToTopFromTouchAtViewLocation:(struct CGPoint { float x1; float x2; })arg1 resultHandler:(id)arg2;
- (void)synchronizeAnimationsInActions:(id)arg1;
- (BOOL)__shouldRemoteViewControllerFenceOperations;
- (void)_applicationDidBecomeActive:(id)arg1;
- (int)__automatic_invalidation_logic;
- (id)disconnect;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (BOOL)_requiresKeyboardWindowWhenFirstResponder;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_didRotateFromInterfaceOrientation:(int)arg1 forwardToChildControllers:(BOOL)arg2 skipSelf:(BOOL)arg3;
- (void)_willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 forwardToChildControllers:(BOOL)arg3 skipSelf:(BOOL)arg4;
- (void)_willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 forwardToChildControllers:(BOOL)arg3 skipSelf:(BOOL)arg4;
- (BOOL)_ignoreAppSupportedOrientations;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)_customizesForPresentationInPopover;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (id)serviceViewControllerProxy;
- (void)loadView;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (BOOL)canBecomeFirstResponder;
- (void)__willChangeToIdiom:(int)arg1 onScreen:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)prefersStatusBarHidden;
- (int)preferredStatusBarStyle;
- (unsigned int)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;

@end