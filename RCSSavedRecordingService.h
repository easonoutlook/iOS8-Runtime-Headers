/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class <RCSSavedRecordingServiceProtocol>, NSXPCConnection, NSObject<OS_dispatch_queue>, NSSet, NSMutableDictionary;

@interface RCSSavedRecordingService : NSObject <RCSSavedRecordingServiceClientProtocol, RCSSavedRecordingServiceProtocol> {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    int _exportingCompositionAVURLsDistributedNotificationToken;
    NSXPCConnection *_xpcConnection;
    <RCSSavedRecordingServiceProtocol> *_serviceProxy;
    NSMutableDictionary *_pendingServiceCompletionHandlers;
    NSSet *_exportingCompositionAVURLs;
}

@property(retain) NSSet * exportingCompositionAVURLs;

+ (id)sharedService;

- (id)exportingCompositionAVURLs;
- (void)_onQueueInvalidatePendingCompletionHandlerWithToken:(id)arg1 withError:(id)arg2;
- (void)_onQueueRemovePendingServiceMessageReplyBlockInvalidationHandlerForToken:(struct NSNumber { Class x1; }*)arg1;
- (struct NSNumber { Class x1; }*)_onQueueAddPendingServiceMessageReplyBlockInvalidationHandler:(id)arg1;
- (void)setExportingCompositionAVURLs:(id)arg1;
- (void)_sendServiceMessage:(SEL)arg1 withBasicReplyBlock:(id)arg2 messagingBlock:(id)arg3;
- (void)_sendServiceMessage:(SEL)arg1 accessRequestReplyBlock:(id)arg2 messagingBlock:(id)arg3;
- (void)_handleExportingCompositionAVURLsDidChange;
- (oneway void)fetchExportingCompositionAVURLs:(id)arg1;
- (oneway void)performOrphanHandlingWithCompletionBlock:(id)arg1;
- (oneway void)prepareToTrimCompositionAVURL:(id)arg1 accessRequestHandler:(id)arg2;
- (oneway void)prepareToExportCompositionAVURL:(id)arg1 cacheWaveform:(BOOL)arg2 accessRequestHandler:(id)arg3;
- (oneway void)prepareToPreviewCompositionAVURL:(id)arg1 accessRequestHandler:(id)arg2;
- (oneway void)prepareToCaptureToCompositionAVURL:(id)arg1 accessRequestHandler:(id)arg2;
- (oneway void)endAccessSessionWithToken:(id)arg1;
- (oneway void)enableOrphanedFragmentCleanupForCompositionAVURL:(id)arg1;
- (oneway void)disableOrphanedFragmentCleanupForCompositionAVURL:(id)arg1;
- (id)serviceProxy;
- (void)_onQueueInvalidatePendingCompletionHandlersWithError:(id)arg1;
- (void)_onQueueCloseServiceConnection;
- (void)closeServiceConnection;
- (void)openServiceConnection;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
