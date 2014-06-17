/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/SoftwareBehaviorServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSLock;

@interface SBManagerClientCache : NSObject  {
    BOOL _behaviorBundleSupport;
    BOOL _behaviorBundleSupportKnown;
    NSMutableDictionary *_keyValueCache;
    NSLock *_cacheLock;
    struct dispatch_queue_s { } *_queue;
    struct map<std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> > > > > { 
        struct __tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> > >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> > >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> > > > > { 
            struct __tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> > >, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> > >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> > >, std::__1::less<std::__1::basic_string<char> >, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    } fCallbacks;
}

@property BOOL behaviorBundleSupport;
@property BOOL behaviorBundleSupportKnown;
@property NSMutableDictionary * keyValueCache;
@property NSLock * cacheLock;
@property struct dispatch_queue_s { }* queue;

+ (id)sharedInstance;

- (BOOL)behaviorBundleSupportKnown;
- (BOOL)behaviorBundleSupport;
- (void)callCallbacksForEvent:(id)arg1;
- (bool)deregisterCallbackForEvent:(struct EventCallbackData { struct dispatch_queue_s {} *x1; id x2; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x3; }*)arg1;
     /* Encoded args for previous method: B12@0:4^{EventCallbackData=^{dispatch_queue_s}@?}8 */

- (void)registerCallbackForEvent:(id)arg1 with:(struct EventCallbackData { struct dispatch_queue_s {} *x1; id x2; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x3; }*)arg2;
     /* Encoded args for previous method: v16@0:4@8^{EventCallbackData=^{dispatch_queue_s}@?}12 */

- (void)cacheValue:(id)arg1 forKey:(id)arg2;
- (id)copyCachedValueFor:(id)arg1;
- (void)resetKeyValueCache;
- (void)setBehaviorBundleSupport:(BOOL)arg1;
- (void)setBehaviorBundleSupportKnown:(BOOL)arg1;
- (id)keyValueCache;
- (id)cacheLock;
- (void)setKeyValueCache:(id)arg1;
- (void)saveBehaviorBundleSupport:(BOOL)arg1 withValue:(BOOL)arg2;
- (void)setCacheLock:(id)arg1;
- (void)setQueue:(struct dispatch_queue_s { }*)arg1;
- (struct dispatch_queue_s { }*)queue;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;

@end
