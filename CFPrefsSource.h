/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPrefsSource : NSObject  {
    struct __CFDictionary { } *_dict;
    long long _generationCount;
    union { struct _CFPrefsShmemEntry { unsigned int x_1_1_1 : 31; unsigned int x_1_1_2 : 1; } x1; int x2; } *shmemEntry;
    struct _opaque_pthread_mutex_t { long x1; BOOL x2[40]; } *_lock;
    union { 
        struct _CFPrefsShmemEntry { 
            unsigned int generation : 31; 
            unsigned int multiprocess : 1; 
        } entry; 
        int value; 
    } lastKnownShmemState;
}

+ (void)withNamedVolatileSourceForIdentifier:(struct __CFString { }*)arg1 perform:(id)arg2;
+ (void)withSourceForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 byHost:(BOOL)arg3 container:(struct __CFString { }*)arg4 perform:(id)arg5;

- (void)clearCache;
- (long)generationCount;
- (struct __CFString { }*)container;
- (void)unlock;
- (void)lock;
- (BOOL)synchronize;
- (void)setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (struct __CFArray { }*)copyKeyList;
- (void)removeAllValues;
- (void)setValues:(const void**)arg1 forKeys:(const void**)arg2 count:(long)arg3;
- (void)alreadylocked_removeAllValues;
- (void)alreadylocked_setValues:(const void**)arg1 forKeys:(const void**)arg2 count:(long)arg3;
- (struct __CFDictionary { }*)copyDictionary;
- (BOOL)dirty;
- (long)alreadylocked_generationCount;
- (BOOL)alreadylocked_synchronize;
- (BOOL)alreadylocked_requestNewData;
- (id)createRequestNewContentMessageForDaemon:(BOOL)arg1;
- (void)alreadylocked_setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (void*)copyValueForKey:(struct __CFString { }*)arg1;
- (void)mergeIntoDictionary:(struct __CFDictionary { }*)arg1;
- (void*)alreadylocked_copyValueForKey:(struct __CFString { }*)arg1;
- (void)setDaemonCacheEnabled:(BOOL)arg1;
- (void)setAccessRestricted:(BOOL)arg1;
- (BOOL)isByHost;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 error:(BOOL*)arg4;
- (struct __CFString { }*)userIdentifier;
- (struct __CFString { }*)domainIdentifier;
- (struct __CFDictionary { }*)alreadylocked_copyDictionary;
- (struct __CFArray { }*)alreadylocked_copyKeyList;
- (BOOL)managed;

@end
