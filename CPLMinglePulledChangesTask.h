/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class <CPLMinglePulledChangesTaskDelegate>, NSString, NSObject<OS_dispatch_queue>;

@interface CPLMinglePulledChangesTask : CPLEngineSyncTask  {
    NSObject<OS_dispatch_queue> *_lock;
    NSString *_clientCacheIdentifier;
    BOOL _hasPreparedForMingling;
    BOOL _didPutBatchesInPullQueue;
}

@property(retain) <CPLMinglePulledChangesTaskDelegate> * delegate;

+ (BOOL)mingleBatch:(id)arg1 forStore:(id)arg2 putBatchesInPullQueue:(BOOL*)arg3 error:(id*)arg4;

- (id)taskIdentifier;
- (void)_launch;
- (void)_processNextBatch;
- (void)_taskDidFinishWithError:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1;
- (void)pause;
- (void).cxx_destruct;
- (void)resume;
- (void)cancel;
- (void)launch;

@end
