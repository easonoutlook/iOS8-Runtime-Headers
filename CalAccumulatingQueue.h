/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableSet, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface CalAccumulatingQueue : NSObject  {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_tags;
    NSMutableDictionary *_context;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _block;

    float _delay;
}


- (void)updateTagsAndExecuteBlock:(id)arg1;
- (BOOL)_hasQueuedUpBlock;
- (void)updateTagsAndExecuteBlock:(id)arg1 withContext:(id)arg2;
- (id)initWithQueue:(id)arg1 andBlock:(id)arg2 delay:(float)arg3;
- (id)initWithQueue:(id)arg1 andBlock:(id)arg2;
- (void).cxx_destruct;

@end
