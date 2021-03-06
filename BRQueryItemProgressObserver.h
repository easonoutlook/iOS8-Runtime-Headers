/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSProgress, BRQueryItem, NSObject<OS_dispatch_queue>;

@interface BRQueryItemProgressObserver : NSObject  {
    BRQueryItem *_item;
    NSObject<OS_dispatch_queue> *_queue;
    id _subscriber;
    NSProgress *_progress;
    BOOL _stopped;
    BOOL _isUpload;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _progressHandler;

}

@property NSObject<OS_dispatch_queue> * queue;
@property(copy) id progressHandler;
@property(readonly) BRQueryItem * item;


- (id)progressHandler;
- (void)setQueue:(id)arg1;
- (id)queue;
- (void)setProgressHandler:(id)arg1;
- (id)initWithItem:(id)arg1;
- (id)item;
- (void)start;
- (void)stop;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)description;
- (void)dealloc;

@end
