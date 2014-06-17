/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@class NSObject<OS_dispatch_queue>, NSString, NSMutableDictionary;

@interface PLSQLiteConnection : NSObject  {
    NSString *_filePath;
    struct sqlite3 { } *_dbConnection;
    NSString *_dbLock;
    NSMutableDictionary *_preparedStatements;
}

@property(readonly) NSObject<OS_dispatch_queue> * workQueue;
@property(copy) NSString * filePath;
@property struct sqlite3 { }* dbConnection;
@property(retain) NSString * dbLock;
@property(retain) NSMutableDictionary * preparedStatements;

+ (id)sharedSQLiteConnection;

- (void)releaseMemory;
- (void)loadLookupTableValuesIntoEntry:(id)arg1;
- (void)loadDynamicValuesIntoEntry:(id)arg1;
- (void)setLookupValueForEntryKey:(id)arg1 forKey:(id)arg2 forNumberValue:(long)arg3 withStringValue:(id)arg4;
- (id)lookupValueForEntryKey:(id)arg1 forKey:(id)arg2 forNumberValue:(long)arg3;
- (void)updateEntry:(id)arg1;
- (id)entriesForKey:(id)arg1 withProperties:(id)arg2;
- (id)workQueue;
- (void)setPreparedStatements:(id)arg1;
- (void)setDbLock:(id)arg1;
- (id)writeEntriesTransaction:(id)arg1;
- (void)lockDatabaseWithBlock:(id)arg1;
- (void)printDBStatusString;
- (void)setDbConnection:(struct sqlite3 { }*)arg1;
- (void)deleteDynamicEntriesForKey:(id)arg1 withRowID:(long long)arg2;
- (void)deleteArrayEntriesForKey:(id)arg1 withRowID:(long long)arg2;
- (void)writeArrayEntries:(id)arg1;
- (void)writeDynamicEntries:(id)arg1;
- (id)preparedStatements;
- (int)bindEntry:(id)arg1 toPreparedStatement:(id)arg2 atBindPosition:(int)arg3;
- (void)displaySchema:(id)arg1;
- (void)buildColumnInsert:(id*)arg1 andValueInsert:(id*)arg2 forEntry:(id)arg3;
- (id)performStatement:(id)arg1;
- (struct sqlite3 { }*)dbConnection;
- (id)dbLock;
- (void)handleSQLResult:(int)arg1;
- (BOOL)passesIntegrityCheck;
- (BOOL)openCurrentFile;
- (void)loadArrayValuesIntoEntry:(id)arg1;
- (void)setAllNullValuesForEntryKey:(id)arg1 forKey:(id)arg2 toValue:(id)arg3 withFilters:(id)arg4;
- (void)deleteAllEntriesForKey:(id)arg1;
- (void)deleteEntryForKey:(id)arg1 withRowID:(long long)arg2;
- (void)writeAggregateEntry:(id)arg1;
- (long long)writeEntry:(id)arg1;
- (id)writeEntries:(id)arg1;
- (void)checkPointDB;
- (void)createIndexOnTable:(id)arg1 forColumn:(id)arg2;
- (id)tableInfo:(id)arg1;
- (double)schemaVersionForTable:(id)arg1;
- (id)performQuery:(id)arg1;
- (void)setJournalMode:(short)arg1;
- (void)hashEntryKeyKeys:(id)arg1;
- (void)dropTable:(id)arg1;
- (id)initWithFilePath:(id)arg1;
- (BOOL)copyDataBaseToPath:(id)arg1 withPageChunkSize:(int)arg2 withSleepDelay:(int)arg3;
- (void)removeEmptyOldTables;
- (void)trimTablesToDate:(id)arg1;
- (void)setSchemaVersion:(double)arg1 forTableName:(id)arg2;
- (void)createTableName:(id)arg1 withColumns:(id)arg2;
- (BOOL)tableExistsForTableName:(id)arg1;
- (int)abortTransaction;
- (void)closeConnection;
- (int)endTransaction;
- (int)beginTransaction;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)vacuum;

@end
