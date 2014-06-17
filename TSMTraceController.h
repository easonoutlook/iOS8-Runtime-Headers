/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSDictionary, NSMutableArray, NSString;

@interface TSMTraceController : NSObject  {
    NSMutableArray *mBuffers;
    NSString *mTraceDirectory;
    long mLastBufferID;
    NSDictionary *mBuildInfo;
    int mModuleCache[256];
    unsigned long mFilterCache[256];
}

@property(readonly) NSString * traceDirectory;

+ (BOOL)setup;
+ (void)shutdown;
+ (long)addBufferWithTag:(id)arg1 size:(long)arg2;
+ (void)startTracing;
+ (void)stopTracing;
+ (id)bufferByID:(long)arg1;
+ (long)addBufferWithTag:(id)arg1 size:(long)arg2 synchronized:(BOOL)arg3;
+ (id)traceDirectory;
+ (void)flushAllBuffers;
+ (void)closeBufferWithID:(long)arg1;
+ (void)addBuffer:(id)arg1;

- (id)buffers;
- (void)dealloc;
- (id)init;
- (void)p_writeBuildInfoToFile:(id)arg1;
- (long)p_newBufferID;
- (id)p_createTraceDirectory;
- (void)startTracing;
- (void)stopTracing;
- (void)closeBuffer:(id)arg1;
- (id)bufferByID:(long)arg1;
- (id)traceDirectory;
- (void)flushAllBuffers;
- (void)writeTraceRecord:(struct TSMTraceRecord_s { struct TSMTraceRecordHeader_s { unsigned char x_1_1_1; unsigned char x_1_1_2; unsigned short x_1_1_3; struct timeval { int x_4_2_1; int x_4_2_2; } x_1_1_4; } x1; BOOL x2[0]; }*)arg1 withFilter:(unsigned long)arg2;
- (void)p_buffer:(id)arg1 changedModule:(int)arg2 toFilter:(unsigned long)arg3 from:(unsigned long)arg4;
- (long)addBuffer:(id)arg1;

@end