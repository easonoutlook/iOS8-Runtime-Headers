/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDictionary, __NSCFLocalDownloadFile, NSObject<OS_dispatch_data>;

@interface __NSCFLocalDownloadTask : __NSCFLocalSessionTask <NSURLSessionDownloadTaskSubclass, __NSCFLocalDownloadFileOpener> {
    bool_canWrite;
    bool_suppressProgress;
    bool_needFinish;
    bool_didIssueNeedFinish;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _fileCompletion;

    __NSCFLocalDownloadFile *_downloadFile;
    NSObject<OS_dispatch_data> *_writeBuffer;
    unsigned int _ioSuspend;
    int _seqNo;
    unsigned long _totalWrote;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _resumeCallback;

    NSDictionary *_originalResumeInfo;
    long long _initialResumeSize;
}

@property(copy) id fileCompletion;
@property(retain) __NSCFLocalDownloadFile * downloadFile;
@property bool canWrite;
@property bool suppressProgress;
@property NSObject<OS_dispatch_data> * writeBuffer;
@property unsigned int ioSuspend;
@property int seqNo;
@property bool needFinish;
@property bool didIssueNeedFinish;
@property unsigned long totalWrote;
@property(copy) id resumeCallback;
@property long long initialResumeSize;
@property(retain) NSDictionary * originalResumeInfo;


- (void)reportProgress:(unsigned long)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (void)dealloc;
- (void)_private_posixError:(int)arg1;
- (void)cancelByProducingResumeData:(id)arg1;
- (id)initWithSession:(id)arg1 request:(id)arg2 ident:(unsigned int)arg3;
- (int)openItemForPath:(id)arg1 mode:(int)arg2;
- (void)_private_fileCompletion;
- (void)setDidIssueNeedFinish:(bool)arg1;
- (bool)didIssueNeedFinish;
- (void)setIoSuspend:(unsigned int)arg1;
- (unsigned int)ioSuspend;
- (void)writeAndResume;
- (void)_private_errorCompletion;
- (id)createResumeInformation:(id)arg1;
- (id)originalResumeInfo;
- (void)setSeqNo:(int)arg1;
- (int)seqNo;
- (id)writeBuffer;
- (id)fileCompletion;
- (void)setSuppressProgress:(bool)arg1;
- (bool)suppressProgress;
- (unsigned long)totalWrote;
- (void)_onqueue_cancelByProducingResumeData:(id)arg1;
- (id)resumeCallback;
- (void)checkWrite;
- (void)setNeedFinish:(bool)arg1;
- (bool)needFinish;
- (void)setResumeCallback:(id)arg1;
- (void)setWriteBuffer:(id)arg1;
- (void)setOriginalResumeInfo:(id)arg1;
- (long long)initialResumeSize;
- (void)setTotalWrote:(unsigned long)arg1;
- (bool)setupForNewDownload:(id)arg1;
- (void)setInitialResumeSize:(long long)arg1;
- (bool)canWrite;
- (void)setCanWrite:(bool)arg1;
- (id)downloadFile;
- (void)setDownloadFile:(id)arg1;
- (void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(id)arg2;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(id)arg2;
- (void)_task_onqueue_didFinish;
- (id)initWithTask:(id)arg1;
- (void)_onqueue_didReceiveResponse:(id)arg1 completion:(id)arg2;
- (void)setFileCompletion:(id)arg1;
- (id)initWithSession:(id)arg1 resumeData:(id)arg2 ident:(unsigned int)arg3;
- (id)initWithSession:(id)arg1 request:(id)arg2 filePath:(id)arg3 ident:(unsigned int)arg4;

@end
