/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKHostedTurnBasedViewController, GKMatchRequest, GKRemoteTurnBasedViewController, <GKTurnBasedMatchmakerViewControllerDelegate>;

@interface GKTurnBasedMatchmakerViewController : UINavigationController  {
    BOOL _showExistingMatches;
    <GKTurnBasedMatchmakerViewControllerDelegate> *_turnBasedMatchmakerDelegateWeak;
    GKHostedTurnBasedViewController *_hostedViewController;
    GKRemoteTurnBasedViewController *_remoteViewController;
    GKMatchRequest *_matchRequest;
}

@property <GKTurnBasedMatchmakerViewControllerDelegate> * turnBasedMatchmakerDelegate;
@property BOOL showExistingMatches;
@property(retain) GKHostedTurnBasedViewController * hostedViewController;
@property(retain) GKRemoteTurnBasedViewController * remoteViewController;
@property(retain) GKMatchRequest * matchRequest;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (void)setHostedViewController:(id)arg1;
- (id)hostedViewController;
- (BOOL)showExistingMatches;
- (void)playerQuitMatch:(id)arg1;
- (void)finishWithMatch:(id)arg1;
- (void)setTurnBasedMatchmakerDelegate:(id)arg1;
- (id)initWithMatchRequest:(id)arg1;
- (id)turnBasedMatchmakerDelegate;
- (void)setShowExistingMatches:(BOOL)arg1;
- (void)authenticationChanged:(id)arg1;
- (void)_setupChildViewController;
- (void)setMatchRequest:(id)arg1;
- (id)matchRequest;
- (id)remoteViewController;
- (void)setRemoteViewController:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)loadView;
- (unsigned int)supportedInterfaceOrientations;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void)finishWithError:(id)arg1;

@end