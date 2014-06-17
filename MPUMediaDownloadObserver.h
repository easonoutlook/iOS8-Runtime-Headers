/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>;

@interface MPUMediaDownloadObserver : NSObject  {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _progressHandler;

    NSObject<OS_dispatch_queue> *_queue;
    BOOL _hasPendingProgressHandlerExecution;
    BOOL _invalidated;
    long long _pid;
    BOOL _paused;
}

@property(readonly) double downloadProgress;
@property(getter=isCurrentlyPlayable,readonly) BOOL currentlyPlayable;
@property(copy) id progressHandler;
@property(readonly) BOOL canCancel;
@property(getter=isPurchasing,readonly) BOOL purchasing;
@property(getter=isRestoreDownload,readonly) BOOL restoreDownload;
@property(getter=isPaused,readonly) BOOL paused;
@property(readonly) long long persistentID;
@property(readonly) double rawDownloadProgress;
@property(readonly) double rawDownloadTotal;

+ (id)newObserverForStoreID:(long long)arg1;
+ (id)newObserverForMediaItem:(id)arg1;
+ (id)sharedITunesStoreDownloadManager;
+ (id)newObserverForMediaCollection:(id)arg1;
+ (id)newObserverForMediaItemPersistentID:(unsigned long long)arg1 isPendingSync:(BOOL)arg2 storeID:(long long)arg3;

- (BOOL)isPaused;
- (long long)persistentID;
- (double)rawDownloadTotal;
- (double)rawDownloadProgress;
- (BOOL)isRestoreDownload;
- (void)resumeDownload;
- (void)pauseDownload;
- (BOOL)canCancel;
- (BOOL)isCurrentlyPlayable;
- (void)_onQueue_setShouldFireProgressHandler;
- (void)_onQueue_invalidate;
- (id)progressHandler;
- (void)cancelDownload;
- (double)downloadProgress;
- (void)setProgressHandler:(id)arg1;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (BOOL)isPurchasing;

@end
