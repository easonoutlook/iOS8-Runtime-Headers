/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSCondition, TSUWeakReference, NSMutableArray, NSMutableDictionary;

@interface TSKAccessController : NSObject  {
    struct _opaque_pthread_rwlock_t { 
        long __sig; 
        BOOL __opaque[124]; 
    } _rwLock;
    BOOL _secondaryThreadWriting;
    NSCondition *_cond;
    NSMutableDictionary *_signalIdentifiers;
    NSMutableDictionary *_waitIdentifiers;
    struct __CFRunLoopSource { } *_mainThreadPingSource;
    NSMutableArray *_pendingMainThreadInvocations;
    struct _TSKThreadInfo { 
        struct _opaque_pthread_t {} *threadId; 
        unsigned int count; 
    } _readerInfo[64];
    unsigned int _readerCount;
    NSMutableArray *_writerQueue;
    struct _TSKThreadTicketInfo { 
        unsigned int useCount; 
        id ticket; 
    } _ticketInfo[64];
    unsigned int _ticketCount;
    BOOL _writeHeld;
    BOOL _writeBlockedMainThread;
    TSUWeakReference *_delegate;
}


- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)currentThreadHasWriteLock;
- (BOOL)hasWrite;
- (void)performWrite:(SEL)arg1 withTarget:(id)arg2 argument:(void*)arg3;
- (void)performReadWithTicket:(id)arg1 block:(id)arg2;
- (void)performReadGrantingTicket:(id)arg1;
- (void)p_flushPendingMainThreadBlocksQueueAcquiringLock:(BOOL)arg1;
- (void)p_performReadOnMainThread:(id)arg1;
- (void)performRead:(SEL)arg1 withTarget:(id)arg2 argument:(void*)arg3 argument2:(void*)arg4;
- (void)p_asyncPerformSelectorOnMainThread:(SEL)arg1 withTarget:(id)arg2 argument:(void*)arg3;
- (void)p_blockMainThreadForWrite;
- (void)waitOnIdentifier:(id)arg1;
- (id)p_threadIdentifier;
- (void)p_writeUnlockAndPerformWithMainThreadBlocked:(id)arg1;
- (void)p_scheduleMainThreadRead:(id)arg1;
- (void)p_dequeueWrite;
- (void)p_writeUnlock;
- (void)p_writeLockAndBlockMainThread:(BOOL)arg1;
- (void)p_enqueueWriteAndBlock;
- (void)p_readUnlockReleasingRealLock:(BOOL)arg1;
- (void)p_readLockTakingRealLock:(BOOL)arg1;
- (void)p_signalThread:(id)arg1;
- (BOOL)p_waitWithCondition:(id)arg1 untilDate:(id)arg2;
- (BOOL)p_hasWrite;
- (BOOL)p_hasRead;
- (void)performRead:(SEL)arg1 thenWrite:(SEL)arg2 thenReadOnMainThread:(SEL)arg3 withTarget:(id)arg4 argument:(void*)arg5 passReadResultToMainThreadRead:(BOOL)arg6;
- (void)p_readUnlock;
- (void)p_readLock;
- (void)performRead:(SEL)arg1 thenReadOnMainThread:(SEL)arg2 withTarget:(id)arg3 argument:(void*)arg4;
- (void)spinMainThreadRunLoopUntil:(SEL)arg1 onTarget:(id)arg2;
- (void)performRead:(SEL)arg1 withTarget:(id)arg2 argument:(void*)arg3;
- (void)performWrite:(id)arg1;
- (void)performWrite:(id)arg1 blockMainThread:(BOOL)arg2;
- (void)performRead:(id)arg1;
- (BOOL)waitOnIdentifier:(id)arg1 untilDate:(id)arg2 releaseReadWhileWaiting:(BOOL)arg3;
- (BOOL)hasRead;
- (void)signalIdentifier:(id)arg1;
- (void)performRead:(SEL)arg1 thenWrite:(SEL)arg2 thenReadOnMainThread:(SEL)arg3 withTarget:(id)arg4 argument:(void*)arg5;

@end
