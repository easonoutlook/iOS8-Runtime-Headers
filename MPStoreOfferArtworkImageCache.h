/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class CPLRUDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface MPStoreOfferArtworkImageCache : NSObject  {
    CPLRUDictionary *_lruCache;
    NSMutableDictionary *_didLoadBlocksByURL;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedArtworkImageCache;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)imageForURL:(id)arg1;
- (void)_onQueueCallDidLoadBlocksWithImage:(id)arg1 forURL:(id)arg2;
- (void)_applicationDidReceiveMemoryWarningNotification:(id)arg1;
- (void)_dumpCache;

@end
