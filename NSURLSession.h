/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <NSURLSessionDelegate>, NSOperationQueue, NSString, NSObject<OS_dispatch_queue>, NSURLSessionConfiguration;

@interface NSURLSession : NSObject  {
    BOOL _invalid;
    BOOL __isSharedSession;
    NSOperationQueue *_delegateQueue;
    <NSURLSessionDelegate> *_delegate;
    NSString *_sessionDescription;
    NSURLSessionConfiguration *__local_immutable_configuration;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSOperationQueue *_realDelegateQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id __connBlock;

}

@property(retain) NSOperationQueue * delegateQueue;
@property(retain) <NSURLSessionDelegate> * delegate;
@property(copy,readonly) NSURLSessionConfiguration * configuration;
@property(copy) NSString * sessionDescription;
@property(copy) NSURLSessionConfiguration * _local_immutable_configuration;
@property(retain) NSObject<OS_dispatch_queue> * workQueue;
@property BOOL invalid;
@property(retain) NSOperationQueue * realDelegateQueue;
@property BOOL _isSharedSession;
@property(copy) id _connBlock;

+ (id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
+ (id)sessionWithConfiguration:(id)arg1;
+ (void)_sendPendingCallbacksForSessionIdentifier:(id)arg1;
+ (void)_releaseProcessAssertionForSessionIdentifier:(id)arg1;
+ (void)_getActiveSessionIdentifiersWithCompletionHandler:(id)arg1;
+ (id)sharedSession;

- (id)workQueue;
- (void)setWorkQueue:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1;
- (void)getTasksWithCompletionHandler:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(id)arg2;
- (id)delegateQueue;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)set_connBlock:(id)arg1;
- (id)_connBlock;
- (void)setRealDelegateQueue:(id)arg1;
- (id)realDelegateQueue;
- (BOOL)invalid;
- (void)setSessionDescription:(id)arg1;
- (id)sessionDescription;
- (void)delegate_streamTask:(id)arg1 didCreateInputStream:(id)arg2 outputStream:(id)arg3 completionHandler:(id)arg4;
- (BOOL)can_delegate_streamTask_didCreateInputStreamoutputStream;
- (id)streamTaskForHost:(id)arg1 port:(int)arg2 tls:(bool)arg3 completionHandler:(id)arg4;
- (id)streamTaskForHost:(id)arg1 port:(int)arg2 tls:(bool)arg3;
- (id)_AVAssetDownloadTaskWithURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3;
- (id)downloadTaskWithResumeData:(id)arg1 completionHandler:(id)arg2;
- (id)downloadTaskWithURL:(id)arg1 completionHandler:(id)arg2;
- (id)downloadTaskWithResumeData:(id)arg1;
- (id)downloadTaskWithURL:(id)arg1;
- (id)_downloadTaskWithRequest:(id)arg1 downloadFilePath:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(id)arg3;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(id)arg3;
- (id)uploadTaskWithStreamedRequest:(id)arg1;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2;
- (id)dataTaskWithURL:(id)arg1 completionHandler:(id)arg2;
- (id)dataTaskWithURL:(id)arg1;
- (id)dataTaskWithHTTPGetRequest:(id)arg1;
- (id)dataTaskWithHTTPGetRequest:(id)arg1 completionHandler:(id)arg2;
- (void)flushWithCompletionHandler:(id)arg1;
- (void)resetWithCompletionHandler:(id)arg1;
- (void)finishTasksAndInvalidate;
- (void)invalidateAndCancel;
- (BOOL)isBackgroundSession;
- (id)_copyConfiguration;
- (id)downloadTaskWithRequest:(id)arg1 completionHandler:(id)arg2;
- (id)downloadTaskWithRequest:(id)arg1;
- (void)setInvalid:(BOOL)arg1;
- (void)set_isSharedSession:(BOOL)arg1;
- (void)delegate_AVAssetDownloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (BOOL)can_delegate_AVAssetDownloadTask_didWriteData;
- (void)delegate_didFinishEventsForBackgroundURLSession;
- (BOOL)can_delegate_didFinishEventsForBackgroundURLSession;
- (void)delegate_AVAssetDownloadTask:(id)arg1 didReceiveDownloadToken:(unsigned long long)arg2;
- (BOOL)can_delegate_AVAssetDownloadTask_didReceiveDownloadToken;
- (void)delegate_willRetryBackgroundDataTask:(id)arg1;
- (BOOL)can_delegate_willRetryBackgroundDataTask;
- (void)set_local_immutable_configuration:(id)arg1;
- (void)delegate_downloadTask:(id)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3;
- (BOOL)can_delegate_downloadTask_didResumeAtOffset;
- (void)delegate_downloadTask:(id)arg1 didReceiveResponse:(id)arg2;
- (BOOL)can_delegate_downloadTask_didReceiveResponse;
- (void)delegate_downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 completionHandler:(id)arg3;
- (BOOL)can_delegate_downloadTask_didFinishDownloadingToURL;
- (void)delegate_downloadTask:(id)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 completionHandler:(id)arg5;
- (BOOL)can_delegate_downloadTask_didWriteData;
- (int)delegate_openFileAtPath:(id)arg1 mode:(int)arg2;
- (BOOL)can_delegate_openFileAtPath;
- (id)delegate_downloadTaskNeedsDownloadDirectory:(id)arg1;
- (BOOL)can_delegate_downloadTaskNeedsDownloadDirectory;
- (void)delegate_task:(id)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
- (BOOL)can_delegate_task_didSendBodyData;
- (void)delegate_task:(id)arg1 conditionalRequirementsChanged:(BOOL)arg2;
- (BOOL)can_delegate_task_conditionalRequirementsChanged;
- (void)delegate_task_isWaitingForConnection:(id)arg1;
- (BOOL)can_delegate_task_isWaitingForConnection;
- (void)delegate_task:(id)arg1 _willSendRequestForEstablishedConnection:(id)arg2 completionHandler:(id)arg3;
- (BOOL)can_delegate_task_willSendRequestForEstablishedConnection;
- (void)delegate_dataTask:(id)arg1 didReceiveData:(id)arg2 completionHandler:(id)arg3;
- (BOOL)can_delegate_dataTask_didReceiveData;
- (void)delegate_task:(id)arg1 didCompleteWithError:(id)arg2;
- (BOOL)can_delegate_task_didCompleteWithError;
- (void)delegate_dataTask:(id)arg1 willCacheResponse:(id)arg2 completionHandler:(id)arg3;
- (BOOL)can_delegate_dataTask_willCacheResponse;
- (void)delegate_task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3;
- (BOOL)can_delegate_task_didReceiveChallenge;
- (void)delegate_didReceiveChallenge:(id)arg1 completionHandler:(id)arg2;
- (BOOL)can_delegate_didReceiveChallenge;
- (void)delegate_task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4;
- (BOOL)can_delegate_task_willPerformHTTPRedirection;
- (void)delegate_dataTask:(id)arg1 didBecomeDownloadTask:(id)arg2 completionHandler:(id)arg3;
- (void)delegate_dataTask:(id)arg1 didBecomeStreamTask:(id)arg2 completionHandler:(id)arg3;
- (BOOL)can_delegate_dataTask_didBecomeStreamTask;
- (BOOL)can_delegate_dataTask_didBecomeDownloadTask;
- (void)delegate_dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3;
- (BOOL)can_delegate_dataTask_didReceiveResponse;
- (BOOL)_isSharedSession;
- (id)_local_immutable_configuration;
- (void)finalizeDelegateWithError:(id)arg1;
- (void)addDelegateBlock:(id)arg1;
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)delegate_task:(id)arg1 needNewBodyStream:(id)arg2;
- (BOOL)can_delegate_task_needNewBodyStream;

@end
