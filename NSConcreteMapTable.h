/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSWeakCallback;

@interface NSConcreteMapTable : NSMapTable  {
    struct NSSlice { 
        void **items; 
        BOOL wantsStrong; 
        BOOL wantsWeak; 
        BOOL wantsARC; 
        BOOL shouldCopyIn; 
        BOOL usesStrong; 
        BOOL usesWeak; 
        BOOL usesARC; 
        BOOL usesSentinel; 
        BOOL pointerPersonality; 
        BOOL integerPersonality; 
        BOOL simpleReadClear; 
        NSWeakCallback *callback; 
        int (*sizeFunction)(); 
        int (*hashFunction)(); 
        int (*isEqualFunction)(); 
        int (*describeFunction)(); 
        int (*acquireFunction)(); 
        int (*relinquishFunction)(); 
        int (*allocateFunction)(); 
        int (*freeFunction)(); 
        int (*readAt)(); 
        int (*clearAt)(); 
        int (*storeAt)(); 
    } keys;
    struct NSSlice { 
        void **items; 
        BOOL wantsStrong; 
        BOOL wantsWeak; 
        BOOL wantsARC; 
        BOOL shouldCopyIn; 
        BOOL usesStrong; 
        BOOL usesWeak; 
        BOOL usesARC; 
        BOOL usesSentinel; 
        BOOL pointerPersonality; 
        BOOL integerPersonality; 
        BOOL simpleReadClear; 
        NSWeakCallback *callback; 
        int (*sizeFunction)(); 
        int (*hashFunction)(); 
        int (*isEqualFunction)(); 
        int (*describeFunction)(); 
        int (*acquireFunction)(); 
        int (*relinquishFunction)(); 
        int (*allocateFunction)(); 
        int (*freeFunction)(); 
        int (*readAt)(); 
        int (*clearAt)(); 
        int (*storeAt)(); 
    } values;
    unsigned int count;
    unsigned int capacity;
    unsigned int keyOptions;
    unsigned int valueOptions;
    unsigned int mutations;
    int growLock;
    boolshouldRehash;
}


- (void)removeAllItems;
- (id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned int)arg3;
- (id)keyEnumerator;
- (id)allValues;
- (id)initWithKeyOptions:(unsigned int)arg1 valueOptions:(unsigned int)arg2 capacity:(unsigned int)arg3;
- (id)objectEnumerator;
- (Class)classForCoder;
- (void)removeObjectForKey:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)allKeys;
- (id)dump;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)copy;
- (id)objectForKey:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (id)description;
- (unsigned int)count;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (BOOL)containsKeys:(const void**)arg1 values:(const void**)arg2 count:(unsigned int)arg3;
- (void)zeroPairedEntries;
- (void)checkCount:(const char *)arg1;
- (void)grow;
- (void)assign:(unsigned int)arg1 key:(const void*)arg2 value:(const void*)arg3 isNew:(BOOL)arg4;
- (void)_setBackingStore;
- (unsigned int)realCount;
- (unsigned int)getKeys:(const void**)arg1 values:(const void**)arg2;
- (BOOL)mapMember:(const void*)arg1 originalKey:(const void**)arg2 value:(const void**)arg3;
- (void)replaceItem:(const void*)arg1 forExistingKey:(const void*)arg2;
- (void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2;
- (void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2;
- (void)setItem:(const void*)arg1 forAbsentKey:(const void*)arg2;
- (id)valuePointerFunctions;
- (id)keyPointerFunctions;
- (void)rehash;
- (unsigned int)rehashAround:(unsigned int)arg1;
- (void)raiseCountUnderflowException;
- (void)_initBlock;

@end
