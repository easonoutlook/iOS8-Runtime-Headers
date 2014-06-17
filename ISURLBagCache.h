/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface ISURLBagCache : NSObject  {
    NSMutableDictionary *_cachedBags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)URLWithBagContext:(id)arg1;
+ (id)sharedCache;

- (void)invalidateAllURLBags;
- (void)_storeFrontChangedNotification:(id)arg1;
- (id)_fallbackContextWithContext:(id)arg1;
- (BOOL)_shouldFallbackForContext:(id)arg1 options:(int)arg2;
- (id)_URLBagForContext:(id)arg1 withOptions:(int)arg2;
- (id)_newRequestWithURLBagContext:(id)arg1;
- (void)addURLBag:(id)arg1;
- (id)URLBagForContext:(id)arg1 withOptions:(int)arg2;
- (void)invalidateURLBagForContext:(id)arg1;
- (id)_cachedResponseForRequest:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)URLBagForContext:(id)arg1;

@end
