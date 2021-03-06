/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

@class NSDictionary;

@interface DataClassMigrator : NSObject  {
    NSDictionary *_context;
    BOOL _didUpgrade;
}

@property(retain) NSDictionary * context;
@property BOOL didUpgrade;
@property(readonly) BOOL didRestoreFromBackup;
@property(readonly) BOOL didMigrateBackupFromDifferentDevice;
@property(readonly) BOOL didRestoreFromCloudBackup;
@property(readonly) BOOL shouldPreserveSettingsAfterRestore;
@property(readonly) BOOL wasPasscodeSetInBackup;


- (void)setDidUpgrade:(BOOL)arg1;
- (BOOL)wasPasscodeSetInBackup;
- (BOOL)shouldPreserveSettingsAfterRestore;
- (BOOL)didRestoreFromCloudBackup;
- (BOOL)didMigrateBackupFromDifferentDevice;
- (BOOL)didRestoreFromBackup;
- (BOOL)didUpgrade;
- (void).cxx_destruct;
- (void)setContext:(id)arg1;
- (id)context;
- (float)migrationProgress;
- (float)estimatedDuration;
- (BOOL)performMigration;
- (id)dataClassName;

@end
