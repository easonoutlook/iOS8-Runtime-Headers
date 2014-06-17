/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface AVPropertyStorage : NSObject  {
    NSObject<OS_dispatch_queue> *_storageAccessWorkQueue;
    NSMutableDictionary *_propertyStorage;
}


- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)objectForKey:(id)arg1 defaultObjectBlock:(id)arg2;
- (BOOL)shouldUsePropertyStorageCacheForKey:(id)arg1;
- (void)didAccessKVOForKey:(id)arg1;
- (void)willAccessKVOForKey:(id)arg1;

@end