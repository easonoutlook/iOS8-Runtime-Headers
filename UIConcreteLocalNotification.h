/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSData, NSString, NSCalendar, NSDate, CLRegion, NSTimeZone;

@interface UIConcreteLocalNotification : UILocalNotification  {
    NSDate *fireDate;
    NSTimeZone *timeZone;
    unsigned int repeatInterval;
    NSCalendar *repeatCalendar;
    int totalRepeatCount;
    int remainingRepeatCount;
    CLRegion *region;
    BOOL regionTriggersOnce;
    NSString *alertBody;
    BOOL hasAction;
    NSString *alertAction;
    NSString *alertLaunchImage;
    NSString *soundName;
    int applicationIconBadgeNumber;
    NSData *userInfoData;
    BOOL hideAlertTitle;
    BOOL allowSnooze;
    int soundType;
    BOOL interruptAudioAndLockDevice;
    BOOL resumeApplicationInBackground;
    BOOL fireNotificationsWhenAppRunning;
    BOOL showAlarmStatusBarItem;
    NSString *customLockSliderLabel;
    NSString *firedNotificationName;
    NSString *snoozedNotificationName;
    NSString *category;
    BOOL isTransient;
}


- (BOOL)isTransient;
- (int)remainingRepeatCount;
- (BOOL)isTriggeredByDate;
- (void)clearNonSystemProperties;
- (int)compareFireDates:(id)arg1;
- (id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2;
- (id)nextFireDateForLastFireDate:(id)arg1;
- (BOOL)regionTriggersOnce;
- (id)region;
- (id)snoozedNotificationName;
- (id)firedNotificationName;
- (id)customLockSliderLabel;
- (BOOL)showAlarmStatusBarItem;
- (BOOL)fireNotificationsWhenAppRunning;
- (BOOL)resumeApplicationInBackground;
- (BOOL)interruptAudioAndLockDevice;
- (int)soundType;
- (BOOL)allowSnooze;
- (BOOL)hideAlertTitle;
- (id)alertLaunchImage;
- (id)alertAction;
- (BOOL)hasAction;
- (int)totalRepeatCount;
- (id)repeatCalendar;
- (id)fireDate;
- (void)setRegionTriggersOnce:(BOOL)arg1;
- (void)setRegion:(id)arg1;
- (void)setIsTransient:(BOOL)arg1;
- (void)setSnoozedNotificationName:(id)arg1;
- (void)setFiredNotificationName:(id)arg1;
- (void)setCustomLockSliderLabel:(id)arg1;
- (void)setShowAlarmStatusBarItem:(BOOL)arg1;
- (void)setFireNotificationsWhenAppRunning:(BOOL)arg1;
- (void)setResumeApplicationInBackground:(BOOL)arg1;
- (void)setInterruptAudioAndLockDevice:(BOOL)arg1;
- (void)setAllowSnooze:(BOOL)arg1;
- (void)setHideAlertTitle:(BOOL)arg1;
- (void)_setUserInfoData:(id)arg1;
- (void)setSoundName:(id)arg1;
- (void)setAlertLaunchImage:(id)arg1;
- (void)setAlertAction:(id)arg1;
- (void)setHasAction:(BOOL)arg1;
- (void)setAlertBody:(id)arg1;
- (void)setRemainingRepeatCount:(int)arg1;
- (void)setRepeatCalendar:(id)arg1;
- (void)setSoundType:(int)arg1;
- (void)setTotalRepeatCount:(int)arg1;
- (id)timeZone;
- (void)setCategory:(id)arg1;
- (id)category;
- (unsigned int)repeatInterval;
- (id)userInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setApplicationIconBadgeNumber:(int)arg1;
- (void)validate;
- (int)applicationIconBadgeNumber;
- (id)soundName;
- (id)alertBody;
- (void)setRepeatInterval:(unsigned int)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setFireDate:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (BOOL)isValid;
- (void)triggerLocationArrow;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end
