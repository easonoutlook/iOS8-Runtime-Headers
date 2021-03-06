/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class NSString, GKAchievementInternal, UIImage;

@interface GKAchievementDescription : NSObject <NSCoding, NSSecureCoding> {
    GKAchievementInternal *_internal;
    UIImage *_image;
}

@property(copy,readonly) NSString * identifier;
@property(retain,readonly) NSString * groupIdentifier;
@property(copy,readonly) NSString * title;
@property(copy,readonly) NSString * achievedDescription;
@property(copy,readonly) NSString * unachievedDescription;
@property(readonly) int maximumPoints;
@property(getter=isHidden,readonly) BOOL hidden;
@property(getter=isReplayable,readonly) BOOL replayable;
@property(retain) UIImage * image;
@property(retain) GKAchievementInternal * internal;

+ (void)loadAchievementDescriptionsWithCompletionHandler:(id)arg1;
+ (void)loadAchievementDescriptionsForGame:(id)arg1 withCompletionHandler:(id)arg2;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)placeholderCompletedAchievementImage;
+ (id)incompleteAchievementImage;

- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)internal;
- (void)setInternal:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)image;
- (id)methodSignatureForSelector:(SEL)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setImage:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)loadImageWithCompletionHandler:(id)arg1;
- (id)imageURL;
- (void)showBanner;

@end
