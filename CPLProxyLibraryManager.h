/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class NSMutableDictionary, NSXPCConnection, NSObject<OS_dispatch_queue>, NSMutableArray, NSCountedSet;

@interface CPLProxyLibraryManager : CPLPlatformObject <CPLClientLibraryManagerProtocol, NSXPCConnectionDelegate, CPLLibraryManagerImplementation> {
    NSXPCConnection *_connection;
    NSMutableDictionary *_downloadTasks;
    NSMutableDictionary *_uploadTasks;
    BOOL _diagnosticsEnabled;
    unsigned int _foregroundCalls;
    NSCountedSet *_disablingReasons;
    NSMutableDictionary *_outstandingInvocations;
    unsigned int _outstandingInvocationsCount;
    NSMutableArray *_pendingBlocksAfterOpening;
    int _openingStatus;
    int _notifyToken;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly) NSObject<OS_dispatch_queue> * queue;

+ (id)clientProtocolInterface;
+ (id)daemonProtocolInterface;

- (void)removeCloudLibraryWithCompletionHandler:(id)arg1;
- (void)noteClientIsInBackground;
- (void)noteClientIsInForeground;
- (void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(id)arg2;
- (void)addInfoToLog:(id)arg1;
- (void)deleteResourcesIfSafe:(id)arg1 completionHandler:(id)arg2;
- (void)beginDownloadForResource:(id)arg1 highPriority:(BOOL)arg2 completionHandler:(id)arg3;
- (void)publishResource:(id)arg1 completionHandler:(id)arg2;
- (void)startSyncSession;
- (void)deactivateWithCompletionHandler:(id)arg1;
- (void)cancelTask:(id)arg1;
- (void)dispatchBlockWhenLibraryIsOpen:(id)arg1;
- (id)_uploadTaskDidStartForResource:(id)arg1 withTaskIdentifier:(id)arg2;
- (void)_invokeOutstandingInvocationsWithTaskIdentifier:(id)arg1;
- (void)_dispatchFailedDownloadTaskForResource:(id)arg1 highPriority:(BOOL)arg2 withError:(id)arg3 withCompletionHandler:(id)arg4;
- (void)_dispatchBlockWhenOpen:(id)arg1;
- (void)_reallyOpenWithCompletionHandler:(id)arg1;
- (BOOL)_setStatusFromDictionary:(id)arg1;
- (id)proxyWithErrorHandler:(id)arg1;
- (void)libraryManagerDidUpdateStatusWithProperties:(id)arg1;
- (void)libraryManagerHasChangesToPull;
- (void)uploadOfResource:(id)arg1 didFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;
- (void)uploadOfResource:(id)arg1 didProgress:(float)arg2 forResourceTransferTask:(id)arg3;
- (void)uploadDidStartForResource:(id)arg1 withResourceTransferTask:(id)arg2;
- (void)backgroundDownloadDidFinishForResource:(id)arg1;
- (void)downloadDidFinishForResourceTransferTask:(id)arg1 finalResource:(id)arg2 withError:(id)arg3;
- (void)downloadDidProgress:(float)arg1 forResourceTransferTask:(id)arg2;
- (void)downloadDidStartForResourceTransferTask:(id)arg1;
- (id)initWithAbstractObject:(id)arg1;
- (void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 related:(BOOL)arg2 completionHandler:(id)arg3;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(id)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(id)arg2;
- (void)getListOfComponentsWithCompletionHandler:(id)arg1;
- (void)resetCacheWithOption:(unsigned int)arg1 completionHandler:(id)arg2;
- (void)downloadOriginalsOfType:(id)arg1 localIdentifiers:(id)arg2 destinationURL:(id)arg3 progressIdentifier:(id)arg4 completionHandler:(id)arg5;
- (void)compactFileCacheWithCompletionHandler:(id)arg1;
- (void)getResourcesForItemWithIdentifier:(id)arg1 completionHandler:(id)arg2;
- (void)setDiagnosticsEnabled:(BOOL)arg1;
- (BOOL)diagnosticsEnabled;
- (void)noteClientReceivedNotificationOfServerChanges;
- (void)resetStatus;
- (void)barrier;
- (void)enableSynchronizationWithReason:(id)arg1;
- (void)disableSynchronizationWithReason:(id)arg1;
- (id)queue;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (void)closeWithCompletionHandler:(id)arg1;
- (void)openWithCompletionHandler:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;

@end