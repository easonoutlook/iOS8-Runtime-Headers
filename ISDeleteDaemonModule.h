/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class SSAppPurchaseHistoryCache;

@interface ISDeleteDaemonModule : NSObject  {
    struct __CFURLStorageSession { } *_storageSession;
    struct _CFURLCache { } *_urlCache;
    SSAppPurchaseHistoryCache *_purchaseHistoryCache;
}


- (unsigned long long)purge:(unsigned long long)arg1;
- (unsigned long long)purgeableSpace;
- (void)dealloc;
- (id)init;

@end