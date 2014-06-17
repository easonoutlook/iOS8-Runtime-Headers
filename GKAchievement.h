/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKPlayer, NSString, GKGame, GKAchievementInternal, NSDate;

@interface GKAchievement : NSObject <NSCopying, NSCoding, NSSecureCoding> {
    BOOL _showsCompletionBanner;
    BOOL _hidden;
    GKAchievementInternal *_internal;
    GKGame *_game;
    GKPlayer *_player;
}

@property(copy) NSString * identifier;
@property double percentComplete;
@property(getter=isCompleted,readonly) BOOL completed;
@property(copy) NSDate * lastReportedDate;
@property BOOL showsCompletionBanner;
@property(retain,readonly) GKPlayer * player;
@property(getter=isHidden) BOOL hidden;
@property(copy,readonly) NSString * groupIdentifier;
@property GKGame * game;
@property(retain) GKAchievementInternal * internal;
@property(copy) NSString * playerID;

+ (void)loadAchievementsForGameV2:(id)arg1 players:(id)arg2 includeUnreported:(BOOL)arg3 includeHidden:(BOOL)arg4 withCompletionHandler:(id)arg5;
+ (void)resetAchievementsWithCompletionHandler:(id)arg1;
+ (void)loadAchievementWithID:(id)arg1 forGame:(id)arg2 players:(id)arg3 complete:(id)arg4;
+ (void)loadAchievementsWithCompletionHandler:(id)arg1;
+ (void)reportAchievements:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)reportAchievements:(id)arg1 whileScreeningChallenges:(BOOL)arg2 withEligibleChallenges:(id)arg3 withCompletionHandler:(id)arg4;
+ (void)loadAchievementsForGameV2:(id)arg1 player:(id)arg2 includeUnreported:(BOOL)arg3 includeHidden:(BOOL)arg4 withCompletionHandler:(id)arg5;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (BOOL)supportsSecureCoding;
+ (void)reportAchievements:(id)arg1 withEligibleChallenges:(id)arg2 withCompletionHandler:(id)arg3;

- (id)player;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)playerID;
- (id)game;
- (void)setGame:(id)arg1;
- (id)internal;
- (void)reportAchievementWithCompletionHandler:(id)arg1;
- (id)initWithIdentifier:(id)arg1 forPlayer:(id)arg2;
- (id)initWithIdentifier:(id)arg1 player:(id)arg2;
- (BOOL)showsCompletionBanner;
- (void)setShowsCompletionBanner:(BOOL)arg1;
- (id)initWithInternalRepresentation:(id)arg1 playerID:(id)arg2;
- (void)setInternal:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (BOOL)isCompleted;
- (id)initWithIdentifier:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)_gkSharingInfo;
- (id)fetchSharingInfo;
- (void)_gkSetSharingInfo:(id)arg1;
- (id)activityViewControllerOperation:(id)arg1;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewControllerSubject:(id)arg1;
- (int)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (BOOL)canBeShared;
- (id)imageURL;
- (void)loadImageWithCompletionHandler:(id)arg1;
- (void)showBanner;
- (void)selectChallengeablePlayerIDs:(id)arg1 withCompletionHandler:(id)arg2;
- (void)selectChallengeablePlayers:(id)arg1 withCompletionHandler:(id)arg2;
- (void)issueChallengeToPlayers:(id)arg1 message:(id)arg2;
- (id)challengeComposeControllerWithPlayers:(id)arg1 message:(id)arg2 completionHandler:(id)arg3;
- (id)challengeComposeControllerWithMessage:(id)arg1 players:(id)arg2 completionHandler:(id)arg3;

@end
