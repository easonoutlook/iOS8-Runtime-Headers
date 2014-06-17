/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, NSObject<OS_dispatch_queue>;

@interface SSSQLiteDatabase : NSObject  {
    struct sqlite3 { } *_db;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_databasePath;
    BOOL _readOnly;
    BOOL _isInTransaction;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _setupBlock;

    struct __CFDictionary { } *_statementCache;
    BOOL _takesTaskCompletionAssertions;
    struct SBSProcessAssertion { } *_taskAssertion;
    int _taskAssertionCount;
}

@property(copy) id setupBlock;
@property BOOL takesTaskCompletionAssertions;

+ (void)_setTakesTaskCompletionAssertions:(BOOL)arg1;
+ (BOOL)statementDidFinishAfterStepping:(struct sqlite3_stmt { }*)arg1;
+ (void)_stepStatement:(struct sqlite3_stmt { }*)arg1 hasRow:(BOOL*)arg2 didFinish:(BOOL*)arg3 isCorrupt:(BOOL*)arg4;
+ (BOOL)statementHasRowAfterStepping:(struct sqlite3_stmt { }*)arg1;

- (id)setupBlock;
- (BOOL)takesTaskCompletionAssertions;
- (void)setTakesTaskCompletionAssertions:(BOOL)arg1;
- (void)endTaskCompletionAssertion;
- (void)beginTaskCompletionAssertion;
- (id)newDispatchSourceWithType:(struct dispatch_source_type_s { }*)arg1;
- (void)dispatchBlockSync:(id)arg1;
- (void)dispatchAfter:(unsigned long long)arg1 block:(id)arg2;
- (int)countChanges;
- (void)accessDatabaseUsingBlock:(id)arg1;
- (BOOL)statementDidFinishAfterStepping:(struct sqlite3_stmt { }*)arg1;
- (BOOL)_resetDatabaseWithPath:(id)arg1;
- (int)_resetAndReopenDatabaseWithPath:(id)arg1;
- (int)_openFlags;
- (int)userVersionForDatabase:(id)arg1;
- (BOOL)setUserVersion:(int)arg1 forDatabase:(id)arg2;
- (struct sqlite3_stmt { }*)_statementForSQL:(id)arg1 cache:(BOOL)arg2;
- (void)_resetCorruptDatabase;
- (void)_accessDatabaseUsingBlock:(id)arg1;
- (void)_endTaskCompletionAssertion;
- (void)_beginTaskCompletionAssertion;
- (void)dispatchBlockAsync:(id)arg1;
- (id)initWithDatabaseURL:(id)arg1 readOnly:(BOOL)arg2;
- (void)prepareStatementForSQL:(id)arg1 cache:(BOOL)arg2 usingBlock:(id)arg3;
- (BOOL)statementHasRowAfterStepping:(struct sqlite3_stmt { }*)arg1;
- (void)setSetupBlock:(id)arg1;
- (id)initWithDatabaseURL:(id)arg1;
- (int)_openDatabase;
- (void)performTransactionWithBlock:(id)arg1;
- (BOOL)executeSQL:(id)arg1;
- (BOOL)setUserVersion:(int)arg1;
- (int)userVersion;
- (void)dealloc;

@end
