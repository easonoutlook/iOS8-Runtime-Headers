/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString;

@interface EKSideTableContext : NSManagedObjectContext  {
    NSString *_path;
}


- (id)initWithPath:(id)arg1;
- (id)init;
- (void)_removeSqliteFiles;
- (id)_urlForPersistentStore;
- (id)_managedObjectModel;
- (id)_pathForPersistentStore;
- (id)rootDirectory;
- (id)_settingForKey:(id)arg1;
- (id)_alarmsMatchingPredicate:(id)arg1;
- (id)_persistentStoreCoordinator;
- (id)alarmsBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)nextAlarmFireTime;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (id)insertNewAlarm;
- (void)deleteAllAlarms;
- (id)delayedProximityAlarms;
- (id)settingForKey:(id)arg1;

@end
