/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <DADataclassLockWatcher>;

@interface DAWaiterWrapper : NSObject  {
    <DADataclassLockWatcher> *_waiter;
    int _dataclasses;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;

    int _waiterNum;
}

@property(retain) <DADataclassLockWatcher> * waiter;
@property(copy) id completionHandler;
@property int dataclasses;
@property(readonly) int waiterNum;


- (void)setDataclasses:(int)arg1;
- (int)dataclasses;
- (int)waiterNum;
- (void)setWaiter:(id)arg1;
- (id)waiter;
- (void)setCompletionHandler:(id)arg1;
- (void).cxx_destruct;
- (id)completionHandler;
- (id)description;
- (id)init;

@end
