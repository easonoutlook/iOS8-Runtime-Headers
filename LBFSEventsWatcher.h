/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Librarian.framework/Librarian
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableDictionary, NSOperationQueue, NSObject<OS_dispatch_queue>, NSURL;

@interface LBFSEventsWatcher : NSObject  {
    struct __FSEventStream { } *_streamRef;
    BOOL _started;
    NSURL *_url;
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSOperationQueue *_messageQueue;
    int _disableCount;
    NSMutableDictionary *_inodeMap;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _updateHandler;

}

@property(copy) id updateHandler;
@property(readonly) NSURL * url;


- (void)processEventForPath:(id)arg1 flags:(unsigned long)arg2;
- (id)messageForURL:(id)arg1 inode:(long long)arg2 exists:(BOOL)arg3 flags:(unsigned long)arg4;
- (void)scanDirectory:(id)arg1 isGathering:(BOOL)arg2;
- (id)initWithDirectoryURL:(id)arg1;
- (void)sendMessage:(id)arg1;
- (id)url;
- (id)updateHandler;
- (void)setUpdateHandler:(id)arg1;
- (void)start;
- (void)stop;
- (void)dealloc;
- (void)enableUpdates;
- (void)disableUpdates;

@end