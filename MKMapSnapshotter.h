/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>, VKMapSnapshotCreator, MKMapSnapshotOptions;

@interface MKMapSnapshotter : NSObject  {
    MKMapSnapshotOptions *_options;
    int _loadingFlag;
    NSObject<OS_dispatch_queue> *_callbackQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    VKMapSnapshotCreator *_snapshotCreator;
    BOOL _needsResume;
}

@property(getter=isLoading,readonly) BOOL loading;


- (void)startWithCompletionHandler:(id)arg1;
- (void)_failWithError:(id)arg1;
- (void)startWithQueue:(id)arg1 completionHandler:(id)arg2;
- (void)_cancel;
- (id)initWithOptions:(id)arg1;
- (void).cxx_destruct;
- (BOOL)isLoading;
- (void)cancel;
- (void)_enterBackground:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_succeedWithSnapshot:(id)arg1;
- (void)_cleanupSnapshotCreator;
- (void)_performSnapshot;
- (void)_exitBackground:(id)arg1;

@end