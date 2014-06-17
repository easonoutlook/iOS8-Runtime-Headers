/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSMTraceController, NSString, NSFileHandle;

@interface TSMTraceBuffer : NSObject  {
    NSString *mTag;
    long mBufferID;
    long mBufferSize;
    BOOL mSynchronizedAccess;
    NSFileHandle *mFileHandle;
    TSMTraceController *mController;
    long mCurrentIndex;
    struct __CFData { } *mData;
    BOOL mActive;
    unsigned long mFilters[256];
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } mLock;
}

@property(readonly) NSString * tag;
@property(readonly) long bufferID;
@property(readonly) long bufferSize;
@property BOOL synchronizedAccess;
@property(readonly) BOOL active;
@property(retain) TSMTraceController * controller;
@property(retain) NSFileHandle * fileHandle;
@property(readonly) unsigned int* filters;

+ (id)bufferWithTag:(id)arg1 size:(long)arg2;

- (id)fileHandle;
- (void)setFileHandle:(id)arg1;
- (long)bufferSize;
- (void)setController:(id)arg1;
- (id)controller;
- (BOOL)active;
- (unsigned int*)filters;
- (id)tag;
- (void)start;
- (void)stop;
- (void)flush;
- (void)dealloc;
- (BOOL)synchronizedAccess;
- (void)setBufferID:(long)arg1;
- (void)writeTraceRecord:(struct TSMTraceRecord_s { struct TSMTraceRecordHeader_s { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned short x_1_1_3; struct timeval { int x_4_2_1; int x_4_2_2; } x_1_1_4; } x1; BOOL x2[0]; }*)arg1 withFilter:(unsigned long)arg2;
- (unsigned long)filterForModule:(int)arg1;
- (id)initWithTag:(id)arg1 size:(long)arg2;
- (long)bufferID;
- (void)setFilter:(unsigned long)arg1 forModule:(int)arg2;
- (void)setSynchronizedAccess:(BOOL)arg1;

@end
