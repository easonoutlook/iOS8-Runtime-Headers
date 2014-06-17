/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@class UIImage, GKAchievement, GKPlayer, GKGame;

@interface GKAchievementSharingInfo : NSObject <NSCoding, NSSecureCoding> {
    BOOL _complete;
    GKAchievement *_achievement;
    GKPlayer *_player;
    GKGame *_game;
    UIImage *_iconImage;
    UIImage *_badgeImage;
}

@property(retain) GKAchievement * achievement;
@property(retain) GKPlayer * player;
@property(retain) GKGame * game;
@property(retain) UIImage * iconImage;
@property(retain) UIImage * badgeImage;
@property BOOL complete;

+ (BOOL)supportsSecureCoding;

- (id)player;
- (id)initWithAchievement:(id)arg1 forGame:(id)arg2;
- (id)badgeImage;
- (void)setBadgeImage:(id)arg1;
- (id)subjectForEmailActivity;
- (id)itemsForActivityType:(id)arg1;
- (id)thumbnailForActivityType:(id)arg1;
- (id)operationThatBlocksUntilLoaded;
- (id)achievement;
- (id)game;
- (void)setGame:(id)arg1;
- (void)setAchievement:(id)arg1;
- (BOOL)complete;
- (void)setComplete:(BOOL)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)dealloc;

@end