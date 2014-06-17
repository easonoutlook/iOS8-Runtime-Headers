/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSourceEntity : HDHealthEntity <HDManagedSyncEntity> {
}

+ (id)databaseTable;
+ (BOOL)isManagedEntity;
+ (id)allSourcePersistentIDsWithHealthDatabase:(id)arg1 error:(id*)arg2;
+ (id)sourceRepresentingCurrentDeviceWithHealthDatabase:(id)arg1 error:(id*)arg2;
+ (id)sourceWithBundleIdentifier:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
+ (id)insertSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 options:(unsigned long long)arg3 isCurrentDevice:(BOOL)arg4 productType:(id)arg5 provenance:(int)arg6 syncAnchor:(id)arg7 healthDatabase:(id)arg8 error:(id*)arg9;
+ (void)enumerateSourceEntitiesWithStartAnchor:(id)arg1 endAnchor:(id)arg2 healthDatabase:(id)arg3 handler:(id)arg4;
+ (id)_predicateForSourceRepresentingCurrentDevice;
+ (id)_predicateForSourceWithBundleIdentifier:(id)arg1;
+ (id)_propertySettersForSource;
+ (id)_sourceRepresentingCurrentDeviceWithDatabase:(id)arg1;
+ (id)_sourceWithBundleIdentifier:(id)arg1 database:(id)arg2;
+ (id)_insertSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 options:(unsigned long long)arg3 isCurrentDevice:(BOOL)arg4 productType:(id)arg5 provenance:(int)arg6 syncAnchor:(id)arg7 database:(id)arg8;
+ (void)performSyncAction:(int)arg1 withObject:(id)arg2 fromStore:(id)arg3 healthDaemon:(id)arg4;
+ (id)syncEntitiesWithStartAnchor:(id)arg1 endAnchor:(id)arg2 healthDaemon:(id)arg3 actionHandler:(id)arg4;
+ (id)syncEntityIdentifier;
+ (int)protectionClass;
+ (id)createTableSQL;
+ (void)load;

- (BOOL)setName:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3;
- (id)sourceInHealthDatabase:(id)arg1 error:(id*)arg2;

@end