/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFUserNotification : NSObject  {
}

+ (void)showForbiddenRegionAlert;
+ (void)showShareMyLocationiCloudSettingsOffAlert;
+ (void)showShareMyLocationSystemServiceOffAlert;
+ (void)showLocationServicesSwitchOffAlert;
+ (void)showMaxFollowersLimitReachedAlert;
+ (BOOL)displayiCloudUserNotificationWithTitleLocKey:(id)arg1 messageLocKey:(id)arg2 switchString:(id)arg3 doNotSwitch:(id)arg4;
+ (void)displayUserNotificationWithTitleLocKey:(id)arg1 messageLocKey:(id)arg2;
+ (BOOL)shouldDisplayAlerts;
+ (void)notLoggedIntoiCloudAlert;
+ (BOOL)showSwitchMeDeviceAlertUsingCurrentMeDeviceName:(id)arg1;
+ (void)showActiveDeviceChangedAlert;
+ (void)showRestrictedAlert;


@end
