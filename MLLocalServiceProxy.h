/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MLDMediaLibraryWriter, NSMutableSet, NSXPCConnection, NSObject<OS_dispatch_queue>;

@interface MLLocalServiceProxy : NSObject <MLMediaLibraryServiceProtocol> {
    MLDMediaLibraryWriter *_localWriter;
    NSXPCConnection *_dummyConnection;
    NSMutableSet *_validatedPaths;
    NSObject<OS_dispatch_queue> *_serialQueue;
}


- (oneway void)unlockDatabaseWithCompletion:(id)arg1;
- (oneway void)lockDatabaseForReason:(id)arg1 withCompletion:(id)arg2;
- (oneway void)pollCurrentImportStatus:(id)arg1;
- (oneway void)cancelImportOperation:(unsigned int)arg1 completionHandler:(id)arg2;
- (oneway void)performImportFromSource:(unsigned int)arg1 intoDatabaseAtPath:(id)arg2 withTrackData:(id)arg3 withPlaylistData:(id)arg4 options:(id)arg5 completionHandler:(id)arg6;
- (oneway void)setOptions:(id)arg1 withCompletionHandler:(id)arg2;
- (oneway void)executeTemplatedDatabaseOperation:(unsigned int)arg1 withAttributes:(id)arg2 options:(id)arg3 completionHandler:(id)arg4;
- (oneway void)endTransaction:(id)arg1 shouldCommit:(BOOL)arg2 withCompletionHandler:(id)arg3;
- (oneway void)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 withCompletionHandler:(id)arg5;
- (oneway void)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 withCompletionHandler:(id)arg4;
- (oneway void)beginTransactionForDatabaseAtPath:(id)arg1 withPriorityLevel:(unsigned int)arg2 options:(unsigned int)arg3 completionHandler:(id)arg4;
- (oneway void)recreateDatabaseAtPath:(id)arg1 withCompletionHandler:(id)arg2;
- (oneway void)validateDatabaseAtPath:(id)arg1 withCompletionHandler:(id)arg2;
- (void).cxx_destruct;
- (id)init;

@end
