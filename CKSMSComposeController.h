/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKSMSComposeRemoteViewController, _UIAsyncInvocation, UINavigationController, CKSMSComposeQueuingRemoteViewControllerProxy;

@interface CKSMSComposeController : UIViewController <CKSMSCompose, CKSMSComposeRemoteViewControllerDelegate> {
    id _delegate;
    int _entryViewInvisible;
    _UIAsyncInvocation *_cancellationInvocation;
    UINavigationController *_clientNavigationController;
    BOOL _safeToAdd;
    BOOL _didChangeStatusBarStyle;
    int _savedStatusBarStyle;
    CKSMSComposeRemoteViewController *_remoteViewController;
    CKSMSComposeQueuingRemoteViewControllerProxy *_remoteViewControllerProxy;
}

@property id delegate;
@property(retain) CKSMSComposeRemoteViewController * remoteViewController;
@property(retain) CKSMSComposeQueuingRemoteViewControllerProxy * remoteViewControllerProxy;

+ (double)maxTrimDurationForVideo;
+ (double)maxTrimDurationForAudio;
+ (BOOL)acceptsMIMEType:(id)arg1;
+ (BOOL)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;

- (id)initWithNavigationController:(id)arg1;
- (void)_addRemoteVCIfNeeded;
- (id)remoteViewControllerProxy;
- (void)setRemoteViewControllerProxy:(id)arg1;
- (void)forceCancelComposition;
- (BOOL)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
- (BOOL)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2;
- (void)setUICustomizationData:(id)arg1;
- (void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3;
- (void)smsComposeControllerSendStartedWithText:(id)arg1;
- (void)smsComposeControllerCancelled;
- (void)smsComposeControllerAppeared;
- (void)setTextEntryContentsVisible:(BOOL)arg1;
- (void)setPendingAddresses:(id)arg1;
- (void)smsComposeControllerDataInserted;
- (BOOL)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (void)setCanEditRecipients:(BOOL)arg1;
- (void)disableCameraAttachments;
- (void)forceMMS;
- (id)remoteViewController;
- (void)setRemoteViewController:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;

@end
