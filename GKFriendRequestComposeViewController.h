/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class <GKFriendRequestComposeViewControllerDelegate>, GKComposeHostedViewController, NSString;

@interface GKFriendRequestComposeViewController : UINavigationController  {
    <GKFriendRequestComposeViewControllerDelegate> *_composeViewDelegateWeak;
    GKComposeHostedViewController *_composeController;
    NSString *_message;
    unsigned int _recipientCount;
}

@property <GKFriendRequestComposeViewControllerDelegate> * composeViewDelegate;
@property(retain) GKComposeHostedViewController * composeController;
@property(retain) NSString * message;
@property unsigned int recipientCount;
@property unsigned int rid;

+ (unsigned int)maxNumberOfRecipients;
+ (BOOL)_preventsAppearanceProxyCustomization;

- (void)setComposeController:(id)arg1;
- (void)prepareForNewRecipients:(id)arg1;
- (id)composeController;
- (void)addRecipientsWithPlayerIDs:(id)arg1;
- (void)addRecipientPlayers:(id)arg1;
- (void)sendFinishedMessageToDelegateCancelled:(BOOL)arg1;
- (void)addRecipientsWithEmailAddresses:(id)arg1;
- (unsigned int)rid;
- (void)setRid:(unsigned int)arg1;
- (void)setRecipientCount:(unsigned int)arg1;
- (unsigned int)recipientCount;
- (void)setMessage:(id)arg1;
- (void)__viewControllerWillBePresented:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)message;
- (unsigned int)supportedInterfaceOrientations;
- (void)setComposeViewDelegate:(id)arg1;
- (id)composeViewDelegate;
- (void)dealloc;
- (id)init;
- (BOOL)navigationBarHidden;

@end
