/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSOperationQueue, NSMutableSet, NSObject<OS_dispatch_queue>, <MPPlayableContentDataSource>, <MPPlayableContentDelegate>;

@interface MPPlayableContentManager : NSObject  {
    NSMutableSet *_mutatedContentItems;
    NSMutableSet *_contentItemIdentifiersSentToMediaRemote;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSOperationQueue *_artworkUpdateQueue;
    BOOL _coalescingUpdates;
    <MPPlayableContentDataSource> *_dataSource;
    <MPPlayableContentDelegate> *_delegate;
}

@property <MPPlayableContentDataSource> * dataSource;
@property <MPPlayableContentDelegate> * delegate;

+ (id)sharedContentManager;

- (void).cxx_destruct;
- (void)endUpdates;
- (void)beginUpdates;
- (id)_init;
- (id)delegate;
- (id)dataSource;
- (void)reloadData;
- (void)setDataSource:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)init;
- (void)_markContentItemsAsSentToMediaRemote:(id)arg1;
- (BOOL)_contentItemWasSentToMediaRemote:(id)arg1;
- (void)_handlePlaybackInitializationCompletedWithContext:(id)arg1 error:(id)arg2;
- (void)_handleBeginLoadingCompletedAtIndexPath:(id)arg1 withError:(id)arg2;
- (void)_enqueueArtworkUpdate:(id)arg1 forContentItem:(id)arg2 withCompletion:(id)arg3;
- (void)_contentItemChangedNotification:(id)arg1;
- (BOOL)_onQueueContentItemWasSentToMediaRemote:(id)arg1;
- (void)_pushContentItemsUpdate;
- (void)_tearDownNotifications;
- (void)_tearDownMediaRemoteEndpoint;
- (void)_setupNotifications;
- (void)_setupMediaRemoteEndpoint;

@end
