/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class NSSet, NSString, BBSectionSubtypeParameters, BBColor, BBSectionIcon, NSNumber;

@interface BBSectionSubtypeParameters : NSObject <NSSecureCoding> {
    BBSectionSubtypeParameters *_fallbackParameters;
    NSString *_topic;
    NSString *_missedBannerDescriptionFormat;
    NSString *_fullUnlockActionLabel;
    NSString *_unlockActionLabel;
    NSString *_fullAlternateActionLabel;
    NSString *_alternateActionLabel;
    BBSectionIcon *_sectionIconOverride;
    BBColor *_tintColor;
    NSString *_bannerAccessoryRemoteViewControllerClassName;
    NSString *_bannerAccessoryRemoteServiceBundleIdentifier;
    NSString *_secondaryContentRemoteViewControllerClassName;
    NSString *_secondaryContentRemoteServiceBundleIdentifier;
    NSNumber *_boxedSuppressesAlertsWhenAppIsActive;
    NSNumber *_boxedCoalescesWhenLocked;
    NSNumber *_boxedSuppressesMessageForPrivacy;
    NSNumber *_boxedRealertCount;
    NSNumber *_boxedInertWhenLocked;
    NSNumber *_boxedPreservesUnlockActionCase;
    NSNumber *_boxedBannerShowsSubtitle;
    NSNumber *_boxedVisuallyIndicatesWhenDateIsInFuture;
    NSNumber *_boxedCanBeSilencedByMenuButtonPress;
    NSNumber *_boxedPreventLock;
    NSNumber *_boxedIgnoresQuietMode;
    NSNumber *_boxedSubtypePriority;
    NSNumber *_boxedIPodOutAlertType;
}

@property(copy) NSString * topic;
@property(copy) NSString * missedBannerDescriptionFormat;
@property(copy) NSString * fullUnlockActionLabel;
@property(copy) NSString * unlockActionLabel;
@property(copy) NSString * fullAlternateActionLabel;
@property(copy) NSString * alternateActionLabel;
@property(copy) BBSectionIcon * sectionIconOverride;
@property BOOL suppressesAlertsWhenAppIsActive;
@property BOOL coalescesWhenLocked;
@property BOOL suppressesMessageForPrivacy;
@property unsigned int realertCount;
@property BOOL inertWhenLocked;
@property BOOL preservesUnlockActionCase;
@property BOOL bannerShowsSubtitle;
@property unsigned int subtypePriority;
@property int iPodOutAlertType;
@property(retain) BBColor * tintColor;
@property BOOL canBeSilencedByMenuButtonPress;
@property BOOL preventLock;
@property BOOL ignoresQuietMode;
@property BOOL visuallyIndicatesWhenDateIsInFuture;
@property(retain) NSSet * alertSuppressionAppIDs;
@property(copy) NSString * bannerAccessoryRemoteViewControllerClassName;
@property(copy) NSString * bannerAccessoryRemoteServiceBundleIdentifier;
@property(copy) NSString * secondaryContentRemoteViewControllerClassName;
@property(copy) NSString * secondaryContentRemoteServiceBundleIdentifier;
@property BBSectionSubtypeParameters * fallbackParameters;
@property(retain) NSNumber * boxedSuppressesAlertsWhenAppIsActive;
@property(retain) NSNumber * boxedCoalescesWhenLocked;
@property(retain) NSNumber * boxedSuppressesMessageForPrivacy;
@property(retain) NSNumber * boxedRealertCount;
@property(retain) NSNumber * boxedInertWhenLocked;
@property(retain) NSNumber * boxedPreservesUnlockActionCase;
@property(retain) NSNumber * boxedBannerShowsSubtitle;
@property(retain) NSNumber * boxedVisuallyIndicatesWhenDateIsInFuture;
@property(retain) NSNumber * boxedCanBeSilencedByMenuButtonPress;
@property(retain) NSNumber * boxedPreventLock;
@property(retain) NSNumber * boxedIgnoresQuietMode;
@property(retain) NSNumber * boxedSubtypePriority;
@property(retain) NSNumber * boxedIPodOutAlertType;

+ (BOOL)supportsSecureCoding;

- (void)setTopic:(id)arg1;
- (id)topic;
- (id)fallbackParameters;
- (void)setIPodOutAlertType:(int)arg1;
- (void)setSubtypePriority:(unsigned int)arg1;
- (void)setIgnoresQuietMode:(BOOL)arg1;
- (void)setPreventLock:(BOOL)arg1;
- (void)setVisuallyIndicatesWhenDateIsInFuture:(BOOL)arg1;
- (void)setBannerShowsSubtitle:(BOOL)arg1;
- (void)setPreservesUnlockActionCase:(BOOL)arg1;
- (void)setInertWhenLocked:(BOOL)arg1;
- (void)setSuppressesMessageForPrivacy:(BOOL)arg1;
- (void)setCoalescesWhenLocked:(BOOL)arg1;
- (void)setAlertSuppressionAppIDs:(id)arg1;
- (id)alertSuppressionAppIDs;
- (id)boxedIPodOutAlertType;
- (id)boxedSubtypePriority;
- (id)boxedIgnoresQuietMode;
- (id)boxedPreventLock;
- (id)boxedCanBeSilencedByMenuButtonPress;
- (id)boxedVisuallyIndicatesWhenDateIsInFuture;
- (id)boxedBannerShowsSubtitle;
- (id)boxedPreservesUnlockActionCase;
- (id)boxedInertWhenLocked;
- (id)boxedRealertCount;
- (id)boxedSuppressesMessageForPrivacy;
- (id)boxedCoalescesWhenLocked;
- (id)boxedSuppressesAlertsWhenAppIsActive;
- (void)setSecondaryContentRemoteServiceBundleIdentifier:(id)arg1;
- (void)setSecondaryContentRemoteViewControllerClassName:(id)arg1;
- (void)setBannerAccessoryRemoteServiceBundleIdentifier:(id)arg1;
- (void)setBannerAccessoryRemoteViewControllerClassName:(id)arg1;
- (void)setSectionIconOverride:(id)arg1;
- (void)setAlternateActionLabel:(id)arg1;
- (void)setFullAlternateActionLabel:(id)arg1;
- (void)setFullUnlockActionLabel:(id)arg1;
- (void)setMissedBannerDescriptionFormat:(id)arg1;
- (void)setBoxedIPodOutAlertType:(id)arg1;
- (void)setBoxedSubtypePriority:(id)arg1;
- (void)setBoxedIgnoresQuietMode:(id)arg1;
- (void)setBoxedPreventLock:(id)arg1;
- (void)setBoxedCanBeSilencedByMenuButtonPress:(id)arg1;
- (void)setBoxedVisuallyIndicatesWhenDateIsInFuture:(id)arg1;
- (void)setBoxedBannerShowsSubtitle:(id)arg1;
- (void)setBoxedPreservesUnlockActionCase:(id)arg1;
- (void)setBoxedInertWhenLocked:(id)arg1;
- (void)setBoxedRealertCount:(id)arg1;
- (void)setBoxedSuppressesMessageForPrivacy:(id)arg1;
- (void)setBoxedCoalescesWhenLocked:(id)arg1;
- (void)setBoxedSuppressesAlertsWhenAppIsActive:(id)arg1;
- (void)setSuppressesAlertsWhenAppIsActive:(BOOL)arg1;
- (int)iPodOutAlertType;
- (unsigned int)subtypePriority;
- (BOOL)ignoresQuietMode;
- (BOOL)preventLock;
- (BOOL)canBeSilencedByMenuButtonPress;
- (BOOL)visuallyIndicatesWhenDateIsInFuture;
- (BOOL)bannerShowsSubtitle;
- (BOOL)preservesUnlockActionCase;
- (BOOL)inertWhenLocked;
- (BOOL)suppressesMessageForPrivacy;
- (BOOL)coalescesWhenLocked;
- (BOOL)suppressesAlertsWhenAppIsActive;
- (id)secondaryContentRemoteServiceBundleIdentifier;
- (id)secondaryContentRemoteViewControllerClassName;
- (id)bannerAccessoryRemoteServiceBundleIdentifier;
- (id)bannerAccessoryRemoteViewControllerClassName;
- (id)sectionIconOverride;
- (id)alternateActionLabel;
- (id)fullAlternateActionLabel;
- (id)unlockActionLabel;
- (id)fullUnlockActionLabel;
- (id)missedBannerDescriptionFormat;
- (void)setFallbackParameters:(id)arg1;
- (void)setCanBeSilencedByMenuButtonPress:(BOOL)arg1;
- (id)initWithFallbackParameters:(id)arg1;
- (void)setRealertCount:(unsigned int)arg1;
- (unsigned int)realertCount;
- (void)setUnlockActionLabel:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
