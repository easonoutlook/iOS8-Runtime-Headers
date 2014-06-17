/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray, NSObject<OS_dispatch_queue>, NSMutableArray, MPAVItem, MPQueuePlayer, NSMutableSet, <MPAVQueuePlayerFeederSource>, MPDownloadManager;

@interface MPAVQueuePlayerFeeder : NSObject <SSDownloadManagerObserver> {
    unsigned int _desiredQueueDepth;
    MPDownloadManager *_downloadManager;
    BOOL _forceSynchronousQueueFilling;
    BOOL _fillQueueActive;
    NSMutableArray *_items;
    BOOL _managesSystemDownloads;
    unsigned int _maxQueueDepth;
    unsigned int _minQueueDepth;
    int _nextFillQueueToken;
    NSMutableSet *_pausedDownloads;
    NSObject<OS_dispatch_queue> *_pausedDownloadsQueue;
    MPQueuePlayer *_player;
    NSObject<OS_dispatch_queue> *_playerQueue;
    <MPAVQueuePlayerFeederSource> *_playlistItemSource;
    NSMutableSet *_reusableItems;
}

@property(readonly) MPAVItem * currentItem;
@property(readonly) NSArray * items;
@property unsigned int minQueueDepth;
@property unsigned int maxQueueDepth;
@property BOOL managesSystemDownloads;
@property BOOL forceSynchronousQueueFilling;


- (void).cxx_destruct;
- (id)currentItem;
- (id)items;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)description;
- (void)dealloc;
- (void)_fillInQueue;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)_removeInvalidItems:(id)arg1;
- (void)_reloadQueueKeepingCurrentItem:(BOOL)arg1 allowReusingItems:(BOOL)arg2;
- (void)_updatePlayerQueueWithRemovedItems:(id)arg1 addedItems:(id)arg2 removeCurrentItem:(BOOL)arg3;
- (void)_markIsReusable:(BOOL)arg1 item:(id)arg2;
- (id)_fillInQueueWithExtraSpace:(int)arg1 ignoreExistingItems:(BOOL)arg2 removeCurrentItem:(BOOL)arg3;
- (id)_fillInQueueWithExtraSpace:(int)arg1 ignoreExistingItems:(BOOL)arg2;
- (id)_fillInQueueWithExtraSpace:(int)arg1;
- (void)_updateQueueDepthForRateChange;
- (void)_removeCurrentItemAndFillQueue:(BOOL)arg1;
- (void)_pauseOrResumeDownloads:(id)arg1 currentDownloadID:(long long)arg2;
- (void)reloadQueueKeepingCurrentItem:(BOOL)arg1;
- (id)acquireReusableItemsUsingBlock:(id)arg1;
- (void)setMinQueueDepth:(unsigned int)arg1;
- (unsigned int)minQueueDepth;
- (unsigned int)maxQueueDepth;
- (void)cancelReusableItemsPassingTest:(id)arg1;
- (id)initWithMPQueuePlayer:(id)arg1 itemSource:(id)arg2;
- (BOOL)managesSystemDownloads;
- (BOOL)forceSynchronousQueueFilling;
- (void)setMaxQueueDepth:(unsigned int)arg1;
- (void)setManagesSystemDownloads:(BOOL)arg1;
- (void)setForceSynchronousQueueFilling:(BOOL)arg1;
- (void)advanceToNextItem;

@end
