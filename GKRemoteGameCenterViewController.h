/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class GKGame, NSString, GKGameCenterViewController;

@interface GKRemoteGameCenterViewController : GKActivityProxyRemoteViewController <GameCenterUIServiceViewControllerDelegate> {
    BOOL _shouldDisplayChallengePlayButton;
    GKGameCenterViewController *_delegateWeak;
    int _viewState;
    NSString *_leaderboardIdentifier;
    int _leaderboardTimeScope;
}

@property GKGameCenterViewController * delegate;
@property int viewState;
@property int leaderboardTimeScope;
@property(retain) NSString * leaderboardIdentifier;
@property BOOL shouldDisplayChallengePlayButton;
@property(retain) GKGame * game;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)setShouldDisplayChallengePlayButton:(BOOL)arg1;
- (BOOL)shouldDisplayChallengePlayButton;
- (void)setAPIControllerFlags:(struct { BOOL x1; })arg1;
- (void)getMethodsImplementedByChallengeEventHandlerDelegate:(id)arg1;
- (void)playPressedForChallenge:(id)arg1;
- (void)remoteControllerDidSelectLeaderboardTimeScope:(id)arg1;
- (void)remoteControllerDidSelectLeaderboardIdentifier:(id)arg1;
- (void)remoteControllerDidChangeViewState:(id)arg1;
- (void)setLeaderboardTimeScope:(int)arg1;
- (int)leaderboardTimeScope;
- (int)viewState;
- (id)observedKeyPaths;
- (BOOL)_dismissSelfAfterGettingShouldFinish;
- (void)remoteViewControllerIsFinishing;
- (void)remoteViewControllerIsCanceling;
- (void)setViewState:(int)arg1;
- (id)leaderboardIdentifier;
- (void)setLeaderboardIdentifier:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setNilValueForKey:(id)arg1;

@end
