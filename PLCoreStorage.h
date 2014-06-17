/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@class PLSQLiteConnection, PLNSTimerOperatorComposition, PLKQueue, PLXPCResponderOperatorComposition, PLCoreStorageCache, PLNSNotificationOperatorComposition, NSMutableSet, PLStorageOperator, NSMutableDictionary;

@interface PLCoreStorage : NSObject  {
    BOOL _crashMoverRunning;
    PLSQLiteConnection *_connection;
    PLKQueue *_crashReporterKQueue;
    PLNSTimerOperatorComposition *_dailyTaskTimer;
    PLNSNotificationOperatorComposition *_dailyTaskNotification;
    PLXPCResponderOperatorComposition *_safeFileResponder;
    PLStorageOperator *_storageOperator;
    NSMutableSet *_safeCopyInProgress;
    PLCoreStorageCache *_lastEntryCache;
    NSMutableDictionary *_processIDCache;
}

@property PLSQLiteConnection * connection;
@property(retain) PLKQueue * crashReporterKQueue;
@property BOOL crashMoverRunning;
@property(retain) PLNSTimerOperatorComposition * dailyTaskTimer;
@property(retain) PLNSNotificationOperatorComposition * dailyTaskNotification;
@property(retain) PLXPCResponderOperatorComposition * safeFileResponder;
@property(retain) PLStorageOperator * storageOperator;
@property(retain) NSMutableSet * safeCopyInProgress;
@property(retain) PLCoreStorageCache * lastEntryCache;
@property(retain) NSMutableDictionary * processIDCache;

+ (id)storageQueueNameForClass:(id)arg1;

- (void)releaseMemory;
- (id)entriesForKey:(id)arg1 startingFromRowID:(long long)arg2 endingWithRowID:(long long)arg3 withFilters:(id)arg4;
- (id)entriesForKey:(id)arg1 startingFromRowID:(long long)arg2 count:(long long)arg3 withFilters:(id)arg4;
- (void)deleteEntry:(id)arg1;
- (void)loadLookupTableValuesIntoEntry:(id)arg1;
- (void)loadDynamicValuesIntoEntry:(id)arg1;
- (void)generateTaskedOTASubmission;
- (void)generateInternalOTASubmission;
- (void)dailyTasks;
- (id)entriesForKey:(id)arg1 inTimeRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg2 withCountOfEntriesBefore:(long long)arg3 withCountOfEntriesAfter:(long long)arg4 withFilters:(id)arg5;
- (id)entriesForKey:(id)arg1 inTimeRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg2 withFilters:(id)arg3;
- (void)trimProcessIDCacheBasedOnActivePids:(id)arg1;
- (id)processIDEntryForPid:(int)arg1;
- (void)cacheProcessIDEntry:(id)arg1;
- (void)deleteAllEntriesForEntryKey:(id)arg1;
- (void)setLookupValueForEntryKey:(id)arg1 forKey:(id)arg2 forNumberValue:(long)arg3 withStringValue:(id)arg4;
- (id)lookupValueForEntryKey:(id)arg1 forKey:(id)arg2 forNumberValue:(long)arg3;
- (id)lastEntryForKey:(id)arg1 withFilters:(id)arg2;
- (id)powerModelForOperatorName:(id)arg1;
- (id)entriesForKey:(id)arg1 withProperties:(id)arg2;
- (id)portMappingEntryForPort:(id)arg1;
- (id)entryForKey:(id)arg1 withID:(long long)arg2;
- (id)lastEntriesForKey:(id)arg1 count:(long long)arg2 withFilters:(id)arg3;
- (id)lastEntryForKey:(id)arg1;
- (id)aggregateEntriesForKey:(id)arg1 withBucketLength:(double)arg2 inTimeIntervalRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg3;
- (void)initOperatorDependancies;
- (void)setProcessIDCache:(id)arg1;
- (void)setSafeCopyInProgress:(id)arg1;
- (id)safeFileResponder;
- (id)dailyTaskNotification;
- (id)dailyTaskTimer;
- (void)setCrashMoverRunning:(BOOL)arg1;
- (BOOL)crashMoverRunning;
- (id)whiteBlackListForOperatorName:(id)arg1;
- (void)removeProcessIDCacheForPid:(int)arg1;
- (id)entriesForKey:(id)arg1 withIDs:(id)arg2;
- (void)updateEntry:(id)arg1 withCompletionBlock:(id)arg2;
- (long long)blockingWriteEntry:(id)arg1 withCompletionBlock:(id)arg2;
- (void)writeEntry:(id)arg1 withCompletionBlock:(id)arg2;
- (void)writeEntries:(id)arg1 withCompletionBlock:(id)arg2;
- (void)maintainAggregateStorageForEntryKey:(id)arg1;
- (void)removeStorageForEntryKey:(id)arg1;
- (void)setupStorageForOperatorClass:(Class)arg1;
- (void)setupStorageForOperatorName:(id)arg1;
- (void)removeProcessIDCacheForPidNumber:(id)arg1;
- (id)processIDCache;
- (id)entriesForKey:(id)arg1 before:(BOOL)arg2 timeInterval:(double)arg3 count:(long long)arg4 withFilters:(id)arg5;
- (void)setAllNullValuesForEntryKey:(id)arg1 forKey:(id)arg2 toValue:(id)arg3 withFilters:(id)arg4;
- (void)deleteEntryForKey:(id)arg1 WithRowID:(long long)arg2;
- (void)writeAggregateEntry:(id)arg1;
- (void)dispatchSyncForEntrykey:(id)arg1 withBlock:(id)arg2;
- (void)dispatchAsyncForEntrykey:(id)arg1 withBlock:(id)arg2;
- (void)setupArrayForTableName:(id)arg1 forColumnNamed:(id)arg2 withValueType:(short)arg3;
- (void)setupTableName:(id)arg1 withEntryKeyConfig:(id)arg2 withKeyOrder:(id)arg3 isDynamic:(BOOL)arg4;
- (void)setupStorageForEntryKey:(id)arg1;
- (id)safeCopyInProgress;
- (id)trimmingQueryForIndex:(int)arg1;
- (BOOL)isValidString:(id)arg1;
- (id)getDateFromDB:(id)arg1 whichDate:(short)arg2;
- (BOOL)createAndChownDirectory:(id)arg1;
- (void)setSafeFileResponder:(id)arg1;
- (id)generateSafeDatabaseAtPath:(id)arg1 removeEntryKeys:(id)arg2 hashEntryKeyKeys:(id)arg3 trimToDate:(id)arg4 maxFileSize:(long long)arg5 withTrimmingQueriesToRun:(id)arg6 error:(id*)arg7;
- (void)setDailyTaskNotification:(id)arg1;
- (void)setDailyTaskTimer:(id)arg1;
- (void)deleteAllLinksInCRFolder;
- (void)deleteOldCRPowerlogLink;
- (void)setCrashReporterKQueue:(id)arg1;
- (void)linkToCrashReporter;
- (id)crashReporterKQueue;
- (void)handleSchemaMismatchForTable:(id)arg1 expectedVersion:(double)arg2 schemaMatch:(short)arg3;
- (short)verifySchemaVersionOfTable:(id)arg1 matchesExpectedVersion:(double)arg2;
- (void)removeOldPowerlogFiles;
- (void)cleanupTmp;
- (id)storageOperator;
- (void)setStorageOperator:(id)arg1;
- (void)scheduleVacuum;
- (void)setLastEntryCache:(id)arg1;
- (id)lastEntryCache;
- (void)setupStorageForOperator:(id)arg1;
- (id)entryIntervalsForEntryKey:(id)arg1 inTimeRange:(struct _PLTimeIntervalRange { double x1; double x2; })arg2 withIntervalStartKey:(id)arg3 withIntervalEndKey:(id)arg4 withFilters:(id)arg5;
- (void)stopStorage;
- (void)startStorage;
- (void)setConnection:(id)arg1;
- (id)connection;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
