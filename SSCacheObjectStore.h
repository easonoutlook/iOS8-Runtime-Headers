/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSMutableSet, NSString, SSDatabaseCache, NSObject<OS_dispatch_queue>;

@interface SSCacheObjectStore : NSObject  {
    SSDatabaseCache *_databaseCache;
    NSMutableSet *_factories;
    NSString *_sessionIdentifier;
    NSObject<OS_dispatch_queue> *_serialQueue;
}


- (void)removeCacheObjectFactory:(id)arg1;
- (void)addCacheObjectFactory:(id)arg1;
- (id)cacheObjectWithItemIdentifier:(id)arg1;
- (BOOL)removeObjectWithItemIdentifier:(id)arg1;
- (BOOL)addObject:(id)arg1 withItemIdentifier:(id)arg2;
- (void)clearSession;
- (id)_factoryForTypeIdentifier:(id)arg1;
- (id)initWithSessionIdentifier:(id)arg1;
- (id)description;
- (void)dealloc;

@end
