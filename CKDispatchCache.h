/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSCountedSet, NSCache, NSObject<OS_dispatch_queue>, CKDispatchQueue, NSMutableDictionary;

@interface CKDispatchCache : NSObject <IMSystemMonitorListener> {
    NSCache *_objectCache;
    NSCountedSet *_pendingKeys;
    NSMutableDictionary *_pendingGroups;
    CKDispatchQueue *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_lockQueue;
    long _dispatchPriority;
}

@property(retain) NSCache * objectCache;
@property(retain) NSCountedSet * pendingKeys;
@property(retain) NSMutableDictionary * pendingGroups;
@property(retain) CKDispatchQueue * dispatchQueue;
@property(retain) NSObject<OS_dispatch_queue> * lockQueue;
@property long dispatchPriority;


- (void)setDispatchQueue:(id)arg1;
- (void)setDispatchPriority:(long)arg1;
- (long)dispatchPriority;
- (void)setPendingGroups:(id)arg1;
- (void)setPendingKeys:(id)arg1;
- (void)setObjectCache:(id)arg1;
- (BOOL)waitOnGenerationForKey:(id)arg1;
- (void)endGeneratingForKey:(id)arg1;
- (void)enqueueBlock:(id)arg1 withPriority:(int)arg2;
- (void)systemApplicationDidSuspendForEventsOnly;
- (void)systemApplicationDidSuspend;
- (void)clearQueue;
- (void)_beginGeneratingForKeyUnlocked:(id)arg1;
- (id)pendingGroups;
- (id)pendingKeys;
- (void)_endGeneratingForKeyUnlocked:(id)arg1;
- (void)beginGeneratingForKey:(id)arg1;
- (id)objectCache;
- (id)cachedObjectForKey:(id)arg1;
- (BOOL)isGeneratingForKey:(id)arg1;
- (void)setLockQueue:(id)arg1;
- (id)lockQueue;
- (void)enqueueGenerationBlock:(id)arg1 completion:(id)arg2 withPriority:(int)arg3 forKey:(id)arg4;
- (id)initWithCacheLimit:(unsigned int)arg1 dispatchPriority:(long)arg2;
- (void)setCachedObject:(id)arg1 forKey:(id)arg2;
- (void)resume;
- (void)dealloc;
- (id)init;
- (id)dispatchQueue;

@end
