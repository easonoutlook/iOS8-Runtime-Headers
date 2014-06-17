/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@class NSString, NSMutableSet;

@interface CalPreferences : NSObject  {
    NSString *_domain;
    NSMutableSet *_registeredNotificationsToReflect;
}


- (void)_preferenceChangedExternally:(id)arg1;
- (void)_synchronizePreferences;
- (void)_preferenceChangedInternally:(id)arg1;
- (void)unregisterReflectionForPreferenceWithNotificationName:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setValueForPreference:(id)arg1 value:(id)arg2 notificationName:(id)arg3;
- (id)getValueForPreference:(id)arg1 expectedClass:(Class)arg2;
- (void)setBooleanPreference:(id)arg1 value:(BOOL)arg2 notificationName:(id)arg3;
- (BOOL)getBooleanPreference:(id)arg1 defaultValue:(BOOL)arg2;
- (void)registerReflectionForPreferenceWithNotificationName:(id)arg1;
- (id)initWithDomain:(id)arg1;

@end
