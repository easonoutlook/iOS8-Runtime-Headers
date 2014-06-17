/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@class <BRNonLocalVersionSending>, NSError, <BRNonLocalVersionReceiving>, NSMutableArray, NSURL;

@interface BRListNonLocalVersionsOperation : NSOperation  {
    NSURL *_documentURL;
    NSMutableArray *_versions;
    NSError *_error;
    <BRNonLocalVersionSending> *_sender;
    <BRNonLocalVersionReceiving> *_receiver;
    BOOL _executing;
    BOOL _finished;
    BOOL _cancelled;
}

@property(readonly) NSMutableArray * versions;
@property(retain) NSError * error;
@property(getter=isExecuting) BOOL executing;
@property(getter=isFinished) BOOL finished;
@property(getter=isCancelled) BOOL cancelled;


- (id)error;
- (void)setError:(id)arg1;
- (BOOL)isConcurrent;
- (void)setFinished:(BOOL)arg1;
- (void)setExecuting:(BOOL)arg1;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isCancelled;
- (void)setCancelled:(BOOL)arg1;
- (void)cancel;
- (void)start;
- (id)description;
- (void)dealloc;
- (id)versions;
- (id)initWithDocumentURL:(id)arg1;
- (BOOL)finishWithError:(id)arg1;

@end