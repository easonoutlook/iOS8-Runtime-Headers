/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class NSMutableArray, IMAPAccount, NSFileHandle;

@interface MFIMAPOperationCache : NSObject  {
    IMAPAccount *_account;
    NSFileHandle *_handle;
    NSMutableArray *_ops;
    unsigned int _lastUid;
    unsigned int _lastSave;
    unsigned int _lastUidValidity;
    BOOL _opsPending;
}

+ (void)setShouldFlattenCacheOperations:(BOOL)arg1;

- (void)deleteMailbox:(id)arg1;
- (id)deferredOperations;
- (void)performDeferredOperationsWithConnection:(id)arg1;
- (BOOL)hasOperationsForMailbox:(id)arg1;
- (BOOL)hasPendingOfflineOperations;
- (unsigned int)uidForAppendingMessageData:(id)arg1 withFlags:(id)arg2 andInternalDate:(id)arg3 toMailbox:(id)arg4;
- (unsigned int)firstUidForCopyingMessages:(id)arg1 fromMailbox:(id)arg2 toMailbox:(id)arg3;
- (void)setFlags:(id)arg1 andClearFlags:(id)arg2 forUids:(id)arg3 forMailbox:(id)arg4;
- (void)setFlags:(id)arg1 andClearFlags:(id)arg2 forMessages:(id)arg3;
- (id)initWithIMAPAccount:(id)arg1;
- (void)_performCopyOperation:(id)arg1 withContext:(struct { id x1; id x2; struct __CFDictionary {} *x3; struct __CFDictionary {} *x4; struct __CFDictionary {} *x5; unsigned int x6; unsigned int x7; int x8; id x9; }*)arg2;
- (void)_performAppendOperation:(id)arg1 withContext:(struct { id x1; id x2; struct __CFDictionary {} *x3; struct __CFDictionary {} *x4; struct __CFDictionary {} *x5; unsigned int x6; unsigned int x7; int x8; id x9; }*)arg2;
- (void)_performStoreOperation:(id)arg1 withContext:(struct { id x1; id x2; struct __CFDictionary {} *x3; struct __CFDictionary {} *x4; struct __CFDictionary {} *x5; unsigned int x6; unsigned int x7; int x8; id x9; }*)arg2;
- (void)_performDeleteOperation:(id)arg1 withContext:(struct { id x1; id x2; struct __CFDictionary {} *x3; struct __CFDictionary {} *x4; struct __CFDictionary {} *x5; unsigned int x6; unsigned int x7; int x8; id x9; }*)arg2;
- (void)_performCreateOperation:(id)arg1 withContext:(struct { id x1; id x2; struct __CFDictionary {} *x3; struct __CFDictionary {} *x4; struct __CFDictionary {} *x5; unsigned int x6; unsigned int x7; int x8; id x9; }*)arg2;
- (void)_queueDeferredOperation:(id)arg1;
- (void)expungeTemporaryUid:(unsigned int)arg1;
- (void)createMailbox:(id)arg1;
- (BOOL)connection:(id)arg1 shouldHandleUntaggedResponse:(id)arg2 forCommand:(struct { int x1; id x2; id x3; unsigned int x4; id x5; }*)arg3;
- (id)account;
- (void)dealloc;
- (void)saveChanges;

@end