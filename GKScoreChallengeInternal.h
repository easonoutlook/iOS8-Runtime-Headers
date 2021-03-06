/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKLeaderboardInternal, GKScoreInternal;

@interface GKScoreChallengeInternal : GKChallengeInternal  {
    GKScoreInternal *_score;
    GKLeaderboardInternal *_leaderboard;
}

@property(copy) GKScoreInternal * score;
@property(retain) GKLeaderboardInternal * leaderboard;

+ (id)secureCodedPropertyKeys;
+ (id)internalRepresentation;

- (void)setScore:(id)arg1;
- (id)score;
- (id)serverRepresentationForReceivingPlayer:(id)arg1;
- (void)setLeaderboard:(id)arg1;
- (id)leaderboard;
- (unsigned int)type;
- (void)dealloc;

@end
