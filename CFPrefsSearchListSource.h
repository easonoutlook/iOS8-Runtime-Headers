/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPrefsSearchListSource : CFPrefsSource  {
    struct __CFString { } *_identifier;
    struct __CFArray { } *_sourceList;
    struct _opaque_pthread_mutex_t { long x1; BOOL x2[40]; } *_searchListLock;
    BOOL initialized;
}

+ (void)withSnapshotSearchList:(id)arg1;
+ (void)withSearchListForIdentifier:(struct __CFString { }*)arg1 container:(struct __CFString { }*)arg2 perform:(id)arg3;
+ (void)withSuiteSearchListForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 locked:(BOOL)arg3 perform:(id)arg4;

- (void)removeSource:(id)arg1;
- (long)generationCount;
- (id)initWithIdentifier:(struct __CFString { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (void)finalize;
- (long)generationCountFromListOfSources:(id*)arg1 count:(long)arg2 allowFetching:(BOOL)arg3;
- (void)addSource:(id)arg1;
- (void)addCompatibilitySource;
- (void)addSuiteSourceForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2;
- (void)addSourceForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 byHost:(BOOL)arg3 container:(struct __CFString { }*)arg4;
- (void)addNamedVolatileSourceForIdentifier:(struct __CFString { }*)arg1;
- (void)addManagedSourceForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2;
- (void)freeze;
- (void)replaceSource:(id)arg1 withSource:(id)arg2;
- (BOOL)alreadylocked_requestNewData;
- (id)createRequestNewContentMessageForDaemon:(BOOL)arg1;
- (void)alreadylocked_setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (void*)alreadylocked_copyValueForKey:(struct __CFString { }*)arg1;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 error:(BOOL*)arg4;
- (struct __CFString { }*)domainIdentifier;
- (struct __CFDictionary { }*)alreadylocked_copyDictionary;
- (struct __CFArray { }*)alreadylocked_copyKeyList;

@end
