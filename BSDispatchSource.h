/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_source>, NSObject<OS_dispatch_queue>;

@interface BSDispatchSource : NSObject  {
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _invalidated;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _eventHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _cancelHandler;

}

@property(copy) id eventHandler;
@property(copy) id cancelHandler;
@property(retain,readonly) NSObject<OS_dispatch_queue> * queue;


- (id)cancelHandler;
- (id)queue;
- (id)initWithType:(struct dispatch_source_type_s { }*)arg1 handle:(unsigned long)arg2 mask:(unsigned long)arg3 queue:(id)arg4 configureSourceBlock:(id)arg5;
- (void)resume;
- (void)setEventHandler:(id)arg1;
- (id)eventHandler;
- (void)setCancelHandler:(id)arg1;
- (void)invalidate;
- (void)dealloc;

@end
