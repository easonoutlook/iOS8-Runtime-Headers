/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3DatabaseConnection, NSString, NSObject<OS_dispatch_queue>, NSUUID, NSMutableArray, MLMediaLibraryService;

@interface MLDStatementAccumulator : NSObject  {
    MLMediaLibraryService *_xpcService;
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned int _statementThreshold;
    NSMutableArray *_statementQueue;
    NSString *_databasePath;
    ML3DatabaseConnection *_connection;
    NSUUID *_existingTransactionIdentifier;
    unsigned int _priorityLevel;
}

@property unsigned int statementThreshold;
@property(readonly) NSMutableArray * statementQueue;
@property(readonly) NSString * databasePath;
@property(readonly) ML3DatabaseConnection * connection;
@property(retain) NSUUID * existingTransactionIdentifier;
@property unsigned int priorityLevel;


- (id)databasePath;
- (unsigned int)priorityLevel;
- (id)existingTransactionIdentifier;
- (id)statementQueue;
- (unsigned int)statementThreshold;
- (BOOL)_onQueueFlushAndWait:(BOOL)arg1;
- (BOOL)flushAndWait:(BOOL)arg1;
- (BOOL)enqueueStatement:(id)arg1;
- (void)setStatementThreshold:(unsigned int)arg1;
- (void)setPriorityLevel:(unsigned int)arg1;
- (void)setExistingTransactionIdentifier:(id)arg1;
- (id)initWithConnection:(id)arg1;
- (id)connection;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
