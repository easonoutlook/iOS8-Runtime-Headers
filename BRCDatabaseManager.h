/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class PQLConnection, NSMutableDictionary, BRCServerPersistedState, NSObject<OS_dispatch_source>, BRCAccountSession, NSURL;

@interface BRCDatabaseManager : NSObject  {
    BRCAccountSession *_session;
    NSURL *_url;
    NSObject<OS_dispatch_source> *_watcher;
    PQLConnection *_serverTruthConnection;
    PQLConnection *_clientTruthConnection;
    NSMutableDictionary *_clientState;
    BRCServerPersistedState *_serverState;
}

@property(readonly) PQLConnection * serverTruthConnection;
@property(readonly) PQLConnection * clientTruthConnection;
@property(readonly) NSMutableDictionary * clientState;
@property(readonly) BRCServerPersistedState * serverState;


- (id)serverState;
- (id)clientState;
- (id)serverTruthConnection;
- (BOOL)backupDatabaseToURL:(id)arg1 error:(id*)arg2;
- (BOOL)dumpDatabaseToFileHandle:(id)arg1 containerID:(id)arg2 error:(id*)arg3;
- (void)setupForDumpingDatabaseAtURL:(id)arg1;
- (BOOL)openAtURL:(id)arg1 error:(id*)arg2;
- (BOOL)_setupBackupDetector:(struct backup_detector { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg1 error:(id*)arg2;
- (id)initWithAccountSession:(id)arg1;
- (BOOL)_dumpContainer:(id)arg1 toContext:(id)arg2 error:(id*)arg3;
- (id)newConnectionWithLabel:(id)arg1 error:(id*)arg2;
- (id)clientTruthConnection;
- (void)_stopWatcher;
- (BOOL)_openServerTruthConnectionWithError:(id*)arg1;
- (BOOL)_openClientTruthConnectionWithError:(id*)arg1;
- (void)_startWatcher;
- (BOOL)validateDatabase:(id)arg1 serverTruth:(BOOL)arg2 error:(id*)arg3;
- (BOOL)_checkIntegrity:(id)arg1 serverTruth:(BOOL)arg2 error:(id*)arg3;
- (BOOL)_stepBackupDetector:(struct backup_detector { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 newState:(struct backup_detector { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg2 error:(id*)arg3;
- (BOOL)_attachDatabase:(id)arg1 toConnection:(id)arg2 error:(id*)arg3;
- (BOOL)_setupConnection:(id)arg1 databaseName:(id)arg2 error:(id*)arg3;
- (BOOL)closeWithError:(id*)arg1;
- (id)newConnection:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;

@end
