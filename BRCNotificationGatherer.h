/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class BRCNotificationPipe;

@interface BRCNotificationGatherer : NSObject  {
    BRCNotificationPipe *_pipe;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _gatherReply;

}


- (BOOL)continueGatheringWithBatchSize:(unsigned int)arg1;
- (id)initWithNotificationPipe:(id)arg1 reply:(id)arg2;
- (void).cxx_destruct;
- (void)done;
- (void)invalidate;

@end
